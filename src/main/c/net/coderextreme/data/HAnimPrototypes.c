#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
//Originally these fundamental prototypes were defined in InterchangableActorsViaDynamicRoutingPrototypes.x3d
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "HAnimPrototypes.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Example implementation of X3D Humanoid Animation (HAnim) nodes using X3D prototypes.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "warning";
meta4.content = "These are developmental examples that can assist X3D player implementations and support interoperability. They are not intended for author use in regular X3D scenes.";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "warning";
meta5.content = "Developer note: names for these HAnim Prototypes need to be corrected if used internally in an X3D player implementation (e.g. Joint to HAnimJoint).";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "warning";
meta6.content = "Need support for skin";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "creator";
meta7.content = "Ozan APAYDIN, Don Brutzman";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "translator";
meta8.content = "Ozan APAYDIN, Don Brutzman";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "created";
meta9.content = "15 November 2001";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "modified";
meta10.content = "23 May 2020";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "TODO";
meta11.content = "upgrade to match support requirements for HAnim 2.2";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "https://www.web3d.org/files/specifications/19774/V1.0/HAnim/HAnim.html";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/hanim.html";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "http://HAnim.org/Specifications/HAnim2001";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "reference";
meta16.content = "http://www.HAnim.org";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "reference";
meta17.content = "http://HAnim.org/Models";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "reference";
meta18.content = "http://HAnim.org/Specifications";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "reference";
meta19.content = "InterchangableActorsViaDynamicRoutingPrototypes.x3d";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "identifier";
meta20.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimPrototypes.x3d";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "generator";
meta21.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "license";
meta22.content = "../license.html";
head1.meta[20] = meta22;

head = head1;

//**********Human Model Protypes*********
ProtoDeclare ProtoDeclare24 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare24.name = "Humanoid1_1";
ProtoDeclare24.appinfo = "The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.";
ProtoDeclare24.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html";
ProtoInterface ProtoInterface25 = createNode("ProtoInterface");
//HAnim v1.1 field definitions
field field26 = createNode("field");
field26.name = "name";
field26.accessType = "inputOutput";
field26.type = "SFString";
ProtoInterface25.field = new MFNode();

ProtoInterface25.field[0] = field26;

field field27 = createNode("field");
field27.name = "version";
field27.accessType = "inputOutput";
field27.appinfo = "legal values: 1.1 or 2.0";
field27.type = "SFString";
field27.value = "1.1";
ProtoInterface25.field[1] = field27;

field field28 = createNode("field");
field28.name = "humanoidVersion";
field28.accessType = "inputOutput";
field28.appinfo = "Version of the humanoid being modeled. Hint: HAnim version 2.0";
field28.type = "SFString";
ProtoInterface25.field[2] = field28;

field field29 = createNode("field");
field29.name = "info";
field29.accessType = "inputOutput";
field29.type = "MFString";
ProtoInterface25.field[3] = field29;

field field30 = createNode("field");
field30.name = "translation";
field30.accessType = "inputOutput";
field30.type = "SFVec3f";
field30.value = "0 0 0";
ProtoInterface25.field[4] = field30;

field field31 = createNode("field");
field31.name = "rotation";
field31.accessType = "inputOutput";
field31.type = "SFRotation";
field31.value = "0 0 1 0";
ProtoInterface25.field[5] = field31;

field field32 = createNode("field");
field32.name = "center";
field32.accessType = "inputOutput";
field32.type = "SFVec3f";
field32.value = "0 0 0";
ProtoInterface25.field[6] = field32;

field field33 = createNode("field");
field33.name = "scale";
field33.accessType = "inputOutput";
field33.type = "SFVec3f";
field33.value = "1 1 1";
ProtoInterface25.field[7] = field33;

field field34 = createNode("field");
field34.name = "scaleOrientation";
field34.accessType = "inputOutput";
field34.type = "SFRotation";
field34.value = "0 0 1 0";
ProtoInterface25.field[8] = field34;

field field35 = createNode("field");
field35.name = "bboxCenter";
field35.accessType = "initializeOnly";
field35.type = "SFVec3f";
field35.value = "0 0 0";
ProtoInterface25.field[9] = field35;

field field36 = createNode("field");
field36.name = "bboxSize";
field36.accessType = "initializeOnly";
field36.type = "SFVec3f";
field36.value = "-1 -1 -1";
ProtoInterface25.field[10] = field36;

field field37 = createNode("field");
field37.name = "humanoidBody";
field37.accessType = "inputOutput";
field37.appinfo = "HAnim 1.1 field container for body head. Hint: replaced by 2.0 skeleton.";
field37.documentation = "http://HAnim.org/Specifications/HAnim1.1/#humanoid";
field37.type = "MFNode";
ProtoInterface25.field[11] = field37;

field field38 = createNode("field");
field38.name = "skeleton";
field38.accessType = "inputOutput";
field38.appinfo = "HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody";
field38.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html";
field38.type = "MFNode";
ProtoInterface25.field[12] = field38;

field field39 = createNode("field");
field39.name = "joints";
field39.accessType = "inputOutput";
field39.appinfo = "Container field for Joint nodes";
field39.type = "MFNode";
ProtoInterface25.field[13] = field39;

field field40 = createNode("field");
field40.name = "segments";
field40.accessType = "inputOutput";
field40.appinfo = "Container field for Segment nodes";
field40.type = "MFNode";
ProtoInterface25.field[14] = field40;

field field41 = createNode("field");
field41.name = "sites";
field41.accessType = "inputOutput";
field41.appinfo = "Container field for Site nodes";
field41.type = "MFNode";
ProtoInterface25.field[15] = field41;

field field42 = createNode("field");
field42.name = "viewpoints";
field42.accessType = "inputOutput";
field42.appinfo = "Container field for Viewpoint nodes";
field42.type = "MFNode";
ProtoInterface25.field[16] = field42;

field field43 = createNode("field");
field43.name = "skinCoord";
field43.accessType = "inputOutput";
field43.appinfo = "Hint: HAnim version 2.0";
field43.type = "SFNode";
//NULL
ProtoInterface25.field[17] = field43;

field field44 = createNode("field");
field44.name = "skinNormal";
field44.accessType = "inputOutput";
field44.appinfo = "Hint: HAnim version 2.0";
field44.type = "SFNode";
//NULL
ProtoInterface25.field[18] = field44;

ProtoDeclare24.protoInterface = ProtoInterface25;

ProtoBody ProtoBody45 = createNode("ProtoBody");
Transform Transform46 = createNode("Transform");
Transform46.DEF = "HumanoidTransform";
IS IS47 = createNode("IS");
connect connect48 = createNode("connect");
connect48.nodeField = "translation";
connect48.protoField = "translation";
IS47.connect = new MFNode();

IS47.connect[0] = connect48;

connect connect49 = createNode("connect");
connect49.nodeField = "rotation";
connect49.protoField = "rotation";
IS47.connect[1] = connect49;

connect connect50 = createNode("connect");
connect50.nodeField = "center";
connect50.protoField = "center";
IS47.connect[2] = connect50;

connect connect51 = createNode("connect");
connect51.nodeField = "scale";
connect51.protoField = "scale";
IS47.connect[3] = connect51;

connect connect52 = createNode("connect");
connect52.nodeField = "scaleOrientation";
connect52.protoField = "scaleOrientation";
IS47.connect[4] = connect52;

connect connect53 = createNode("connect");
connect53.nodeField = "bboxCenter";
connect53.protoField = "bboxCenter";
IS47.connect[5] = connect53;

connect connect54 = createNode("connect");
connect54.nodeField = "bboxSize";
connect54.protoField = "bboxSize";
IS47.connect[6] = connect54;

Transform46.iS = IS47;

Group Group55 = createNode("Group");
Group55.DEF = "HumanoidGroup1";
IS IS56 = createNode("IS");
connect connect57 = createNode("connect");
connect57.nodeField = "children";
connect57.protoField = "humanoidBody";
IS56.connect = new MFNode();

IS56.connect[0] = connect57;

Group55.iS = IS56;

Transform46.children = new MFNode();

Transform46.children[0] = Group55;

Group Group58 = createNode("Group");
Group58.DEF = "HumanoidGroup2";
IS IS59 = createNode("IS");
connect connect60 = createNode("connect");
connect60.nodeField = "children";
connect60.protoField = "skeleton";
IS59.connect = new MFNode();

IS59.connect[0] = connect60;

Group58.iS = IS59;

Transform46.children[1] = Group58;

Group Group61 = createNode("Group");
Group61.DEF = "HumanoidGroup3";
IS IS62 = createNode("IS");
connect connect63 = createNode("connect");
connect63.nodeField = "children";
connect63.protoField = "viewpoints";
IS62.connect = new MFNode();

IS62.connect[0] = connect63;

Group61.iS = IS62;

Transform46.children[2] = Group61;

ProtoBody45.children = new MFNode();

ProtoBody45.children[0] = Transform46;

ProtoDeclare24.protoBody = ProtoBody45;

children = new MFNode();

children[0] = ProtoDeclare24;

ProtoDeclare ProtoDeclare64 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare64.name = "Joint";
ProtoDeclare64.appinfo = "The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.";
ProtoDeclare64.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Joint.html";
ProtoInterface ProtoInterface65 = createNode("ProtoInterface");
field field66 = createNode("field");
field66.name = "name";
field66.accessType = "inputOutput";
field66.type = "SFString";
ProtoInterface65.field = new MFNode();

ProtoInterface65.field[0] = field66;

field field67 = createNode("field");
field67.name = "ulimit";
field67.accessType = "inputOutput";
field67.type = "MFFloat";
ProtoInterface65.field[1] = field67;

field field68 = createNode("field");
field68.name = "llimit";
field68.accessType = "inputOutput";
field68.type = "MFFloat";
ProtoInterface65.field[2] = field68;

field field69 = createNode("field");
field69.name = "limitOrientation";
field69.accessType = "inputOutput";
field69.type = "SFRotation";
field69.value = "0 0 1 0";
ProtoInterface65.field[3] = field69;

field field70 = createNode("field");
field70.name = "skinCoordIndex";
field70.accessType = "inputOutput";
field70.type = "MFInt32";
ProtoInterface65.field[4] = field70;

field field71 = createNode("field");
field71.name = "skinCoordWeight";
field71.accessType = "inputOutput";
field71.type = "MFFloat";
ProtoInterface65.field[5] = field71;

field field72 = createNode("field");
field72.name = "stiffness";
field72.accessType = "inputOutput";
field72.type = "MFFloat";
field72.value = "0 0 0";
ProtoInterface65.field[6] = field72;

field field73 = createNode("field");
field73.name = "translation";
field73.accessType = "inputOutput";
field73.type = "SFVec3f";
field73.value = "0 0 0";
ProtoInterface65.field[7] = field73;

field field74 = createNode("field");
field74.name = "rotation";
field74.accessType = "inputOutput";
field74.type = "SFRotation";
field74.value = "0 0 1 0";
ProtoInterface65.field[8] = field74;

field field75 = createNode("field");
field75.name = "scale";
field75.accessType = "inputOutput";
field75.type = "SFVec3f";
field75.value = "1 1 1";
ProtoInterface65.field[9] = field75;

field field76 = createNode("field");
field76.name = "scaleOrientation";
field76.accessType = "inputOutput";
field76.type = "SFRotation";
field76.value = "0 0 1 0";
ProtoInterface65.field[10] = field76;

field field77 = createNode("field");
field77.name = "center";
field77.accessType = "inputOutput";
field77.type = "SFVec3f";
field77.value = "0 0 0";
ProtoInterface65.field[11] = field77;

field field78 = createNode("field");
field78.name = "bboxCenter";
field78.accessType = "initializeOnly";
field78.type = "SFVec3f";
field78.value = "0 0 0";
ProtoInterface65.field[12] = field78;

field field79 = createNode("field");
field79.name = "bboxSize";
field79.accessType = "initializeOnly";
field79.type = "SFVec3f";
field79.value = "-1 -1 -1";
ProtoInterface65.field[13] = field79;

field field80 = createNode("field");
field80.name = "children";
field80.accessType = "inputOutput";
field80.type = "MFNode";
ProtoInterface65.field[14] = field80;

field field81 = createNode("field");
field81.name = "addChildren";
field81.accessType = "inputOnly";
field81.type = "MFNode";
ProtoInterface65.field[15] = field81;

field field82 = createNode("field");
field82.name = "removeChildren";
field82.accessType = "inputOnly";
field82.type = "MFNode";
ProtoInterface65.field[16] = field82;

ProtoDeclare64.protoInterface = ProtoInterface65;

ProtoBody ProtoBody83 = createNode("ProtoBody");
Transform Transform84 = createNode("Transform");
Transform84.DEF = "JointTransform";
IS IS85 = createNode("IS");
connect connect86 = createNode("connect");
connect86.nodeField = "translation";
connect86.protoField = "translation";
IS85.connect = new MFNode();

IS85.connect[0] = connect86;

connect connect87 = createNode("connect");
connect87.nodeField = "rotation";
connect87.protoField = "rotation";
IS85.connect[1] = connect87;

connect connect88 = createNode("connect");
connect88.nodeField = "center";
connect88.protoField = "center";
IS85.connect[2] = connect88;

connect connect89 = createNode("connect");
connect89.nodeField = "scale";
connect89.protoField = "scale";
IS85.connect[3] = connect89;

connect connect90 = createNode("connect");
connect90.nodeField = "scaleOrientation";
connect90.protoField = "scaleOrientation";
IS85.connect[4] = connect90;

connect connect91 = createNode("connect");
connect91.nodeField = "bboxCenter";
connect91.protoField = "bboxCenter";
IS85.connect[5] = connect91;

connect connect92 = createNode("connect");
connect92.nodeField = "bboxSize";
connect92.protoField = "bboxSize";
IS85.connect[6] = connect92;

connect connect93 = createNode("connect");
connect93.nodeField = "children";
connect93.protoField = "children";
IS85.connect[7] = connect93;

connect connect94 = createNode("connect");
connect94.nodeField = "addChildren";
connect94.protoField = "addChildren";
IS85.connect[8] = connect94;

connect connect95 = createNode("connect");
connect95.nodeField = "removeChildren";
connect95.protoField = "removeChildren";
IS85.connect[9] = connect95;

Transform84.iS = IS85;

ProtoBody83.children = new MFNode();

ProtoBody83.children[0] = Transform84;

ProtoDeclare64.protoBody = ProtoBody83;

children[1] = ProtoDeclare64;

ProtoDeclare ProtoDeclare96 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare96.name = "Segment";
ProtoDeclare96.appinfo = "The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc.) of the humanoid figure is represented by a Segment node.";
ProtoDeclare96.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Segment.html";
ProtoInterface ProtoInterface97 = createNode("ProtoInterface");
field field98 = createNode("field");
field98.name = "name";
field98.accessType = "inputOutput";
field98.type = "SFString";
ProtoInterface97.field = new MFNode();

ProtoInterface97.field[0] = field98;

field field99 = createNode("field");
field99.name = "mass";
field99.accessType = "inputOutput";
field99.type = "SFFloat";
field99.value = "0";
ProtoInterface97.field[1] = field99;

field field100 = createNode("field");
field100.name = "centerOfMass";
field100.accessType = "inputOutput";
field100.type = "SFVec3f";
field100.value = "0 0 0";
ProtoInterface97.field[2] = field100;

field field101 = createNode("field");
field101.name = "momentsOfInertia";
field101.accessType = "inputOutput";
field101.type = "MFFloat";
field101.value = "0 0 0 0 0 0 0 0 0";
ProtoInterface97.field[3] = field101;

field field102 = createNode("field");
field102.name = "bboxCenter";
field102.accessType = "initializeOnly";
field102.type = "SFVec3f";
field102.value = "0 0 0";
ProtoInterface97.field[4] = field102;

field field103 = createNode("field");
field103.name = "bboxSize";
field103.accessType = "initializeOnly";
field103.type = "SFVec3f";
field103.value = "-1 -1 -1";
ProtoInterface97.field[5] = field103;

field field104 = createNode("field");
field104.name = "children";
field104.accessType = "inputOutput";
field104.type = "MFNode";
ProtoInterface97.field[6] = field104;

field field105 = createNode("field");
field105.name = "addChildren";
field105.accessType = "inputOnly";
field105.type = "MFNode";
ProtoInterface97.field[7] = field105;

field field106 = createNode("field");
field106.name = "removeChildren";
field106.accessType = "inputOnly";
field106.type = "MFNode";
ProtoInterface97.field[8] = field106;

field field107 = createNode("field");
field107.name = "coord";
field107.accessType = "inputOutput";
field107.appinfo = "contains Coordinate nodes";
field107.type = "SFNode";
//NULL
ProtoInterface97.field[9] = field107;

field field108 = createNode("field");
field108.name = "displacers";
field108.accessType = "inputOutput";
field108.appinfo = "contains Displacer nodes";
field108.type = "MFNode";
ProtoInterface97.field[10] = field108;

ProtoDeclare96.protoInterface = ProtoInterface97;

ProtoBody ProtoBody109 = createNode("ProtoBody");
Group Group110 = createNode("Group");
Group110.DEF = "SegmentGroup";
IS IS111 = createNode("IS");
connect connect112 = createNode("connect");
connect112.nodeField = "bboxCenter";
connect112.protoField = "bboxCenter";
IS111.connect = new MFNode();

IS111.connect[0] = connect112;

connect connect113 = createNode("connect");
connect113.nodeField = "bboxSize";
connect113.protoField = "bboxSize";
IS111.connect[1] = connect113;

connect connect114 = createNode("connect");
connect114.nodeField = "children";
connect114.protoField = "children";
IS111.connect[2] = connect114;

connect connect115 = createNode("connect");
connect115.nodeField = "addChildren";
connect115.protoField = "addChildren";
IS111.connect[3] = connect115;

connect connect116 = createNode("connect");
connect116.nodeField = "removeChildren";
connect116.protoField = "removeChildren";
IS111.connect[4] = connect116;

Group110.iS = IS111;

ProtoBody109.children = new MFNode();

ProtoBody109.children[0] = Group110;

ProtoDeclare96.protoBody = ProtoBody109;

children[2] = ProtoDeclare96;

ProtoDeclare ProtoDeclare117 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare117.name = "Site";
ProtoDeclare117.appinfo = "The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds).";
ProtoDeclare117.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Site.html";
ProtoInterface ProtoInterface118 = createNode("ProtoInterface");
field field119 = createNode("field");
field119.name = "name";
field119.accessType = "inputOutput";
field119.type = "SFString";
ProtoInterface118.field = new MFNode();

ProtoInterface118.field[0] = field119;

field field120 = createNode("field");
field120.name = "translation";
field120.accessType = "inputOutput";
field120.type = "SFVec3f";
field120.value = "0 0 0";
ProtoInterface118.field[1] = field120;

field field121 = createNode("field");
field121.name = "rotation";
field121.accessType = "inputOutput";
field121.type = "SFRotation";
field121.value = "0 0 1 0";
ProtoInterface118.field[2] = field121;

field field122 = createNode("field");
field122.name = "scale";
field122.accessType = "inputOutput";
field122.type = "SFVec3f";
field122.value = "1 1 1";
ProtoInterface118.field[3] = field122;

field field123 = createNode("field");
field123.name = "scaleOrientation";
field123.accessType = "inputOutput";
field123.type = "SFRotation";
field123.value = "0 0 1 0";
ProtoInterface118.field[4] = field123;

field field124 = createNode("field");
field124.name = "center";
field124.accessType = "inputOutput";
field124.type = "SFVec3f";
field124.value = "0 0 0";
ProtoInterface118.field[5] = field124;

field field125 = createNode("field");
field125.name = "bboxCenter";
field125.accessType = "initializeOnly";
field125.type = "SFVec3f";
field125.value = "0 0 0";
ProtoInterface118.field[6] = field125;

field field126 = createNode("field");
field126.name = "bboxSize";
field126.accessType = "initializeOnly";
field126.type = "SFVec3f";
field126.value = "-1 -1 -1";
ProtoInterface118.field[7] = field126;

field field127 = createNode("field");
field127.name = "children";
field127.accessType = "inputOutput";
field127.type = "MFNode";
ProtoInterface118.field[8] = field127;

field field128 = createNode("field");
field128.name = "addChildren";
field128.accessType = "inputOnly";
field128.type = "MFNode";
ProtoInterface118.field[9] = field128;

field field129 = createNode("field");
field129.name = "removeChildren";
field129.accessType = "inputOnly";
field129.type = "MFNode";
ProtoInterface118.field[10] = field129;

ProtoDeclare117.protoInterface = ProtoInterface118;

ProtoBody ProtoBody130 = createNode("ProtoBody");
Transform Transform131 = createNode("Transform");
Transform131.DEF = "SiteTransform";
IS IS132 = createNode("IS");
connect connect133 = createNode("connect");
connect133.nodeField = "translation";
connect133.protoField = "translation";
IS132.connect = new MFNode();

IS132.connect[0] = connect133;

connect connect134 = createNode("connect");
connect134.nodeField = "rotation";
connect134.protoField = "rotation";
IS132.connect[1] = connect134;

connect connect135 = createNode("connect");
connect135.nodeField = "center";
connect135.protoField = "center";
IS132.connect[2] = connect135;

connect connect136 = createNode("connect");
connect136.nodeField = "scale";
connect136.protoField = "scale";
IS132.connect[3] = connect136;

connect connect137 = createNode("connect");
connect137.nodeField = "scaleOrientation";
connect137.protoField = "scaleOrientation";
IS132.connect[4] = connect137;

connect connect138 = createNode("connect");
connect138.nodeField = "bboxCenter";
connect138.protoField = "bboxCenter";
IS132.connect[5] = connect138;

connect connect139 = createNode("connect");
connect139.nodeField = "bboxSize";
connect139.protoField = "bboxSize";
IS132.connect[6] = connect139;

connect connect140 = createNode("connect");
connect140.nodeField = "children";
connect140.protoField = "children";
IS132.connect[7] = connect140;

connect connect141 = createNode("connect");
connect141.nodeField = "addChildren";
connect141.protoField = "addChildren";
IS132.connect[8] = connect141;

connect connect142 = createNode("connect");
connect142.nodeField = "removeChildren";
connect142.protoField = "removeChildren";
IS132.connect[9] = connect142;

Transform131.iS = IS132;

ProtoBody130.children = new MFNode();

ProtoBody130.children[0] = Transform131;

ProtoDeclare117.protoBody = ProtoBody130;

children[3] = ProtoDeclare117;

ProtoDeclare ProtoDeclare143 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
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
ProtoInterface ProtoInterface144 = createNode("ProtoInterface");
field field145 = createNode("field");
field145.name = "name";
field145.accessType = "inputOutput";
field145.type = "SFString";
ProtoInterface144.field = new MFNode();

ProtoInterface144.field[0] = field145;

field field146 = createNode("field");
field146.name = "coordIndex";
field146.accessType = "inputOutput";
field146.type = "MFInt32";
ProtoInterface144.field[1] = field146;

field field147 = createNode("field");
field147.name = "displacements";
field147.accessType = "inputOutput";
field147.type = "MFVec3f";
ProtoInterface144.field[2] = field147;

ProtoDeclare143.protoInterface = ProtoInterface144;

ProtoBody ProtoBody148 = createNode("ProtoBody");
WorldInfo WorldInfo149 = createNode("WorldInfo");
WorldInfo149.info = new MFString(new java.lang.String["null body node"]);
ProtoBody148.children = new MFNode();

ProtoBody148.children[0] = WorldInfo149;

ProtoDeclare143.protoBody = ProtoBody148;

children[4] = ProtoDeclare143;

Shape Shape150 = createNode("Shape");
Text Text151 = createNode("Text");
Text151.string = new MFString(new java.lang.String["Humanoid Animation","(HAnim) prototype","implementations"]);
FontStyle FontStyle152 = createNode("FontStyle");
FontStyle152.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text151.fontStyle = FontStyle152;

Shape150.geometry = Text151;

Appearance Appearance153 = createNode("Appearance");
Material Material154 = createNode("Material");
Material154.ambientIntensity = 0.25;
Material154.diffuseColor = new SFColor(new float[0.795918,0.505869,0.093315]);
Material154.shininess = 0.39;
Material154.specularColor = new SFColor(new float[0.923469,0.428866,0.006369]);
//Universal Media Library: Autumn 9
Appearance153.material = Material154;

Shape150.appearance = Appearance153;

children[5] = Shape150;

}
