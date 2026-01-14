#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
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
meta10.content = "Mon, 15 Sep 2025 05:20:09 GMT";
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

head = head1;

ProtoDeclare ProtoDeclare22 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Humanoid1_1" appinfo="The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html" ><ProtoInterface><field accessType="inputOutput" type="SFString" name="name"></field>
<field accessType="inputOutput" type="SFString" name="version" value="1.1" appinfo="legal values: 1.1 or 2.0"></field>
<field accessType="inputOutput" type="SFString" name="humanoidVersion" appinfo="Version of the humanoid being modeled. Hint: HAnim version 2.0"></field>
<field accessType="inputOutput" type="MFString" name="info"></field>
<field accessType="inputOutput" type="SFVec3f" name="translation"></field>
<field accessType="inputOutput" type="SFRotation" name="rotation"></field>
<field accessType="inputOutput" type="SFVec3f" name="center"></field>
<field accessType="inputOutput" type="SFVec3f" name="scale" value="1 1 1"></field>
<field accessType="inputOutput" type="SFRotation" name="scaleOrientation"></field>
<field accessType="initializeOnly" type="SFVec3f" name="bboxCenter"></field>
<field accessType="initializeOnly" type="SFVec3f" name="bboxSize" value="-1 -1 -1"></field>
<field accessType="inputOutput" type="MFNode" name="humanoidBody" appinfo="HAnim 1.1 field container for body head. Hint: replaced by 2.0 skeleton." documentation="http://HAnim.org/Specifications/HAnim1.1/#humanoid"></field>
<field accessType="inputOutput" type="MFNode" name="skeleton" appinfo="HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody" documentation="http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"></field>
<field accessType="inputOutput" type="MFNode" name="joints" appinfo="Container field for Joint nodes"></field>
<field accessType="inputOutput" type="MFNode" name="segments" appinfo="Container field for Segment nodes"></field>
<field accessType="inputOutput" type="MFNode" name="sites" appinfo="Container field for Site nodes"></field>
<field accessType="inputOutput" type="MFNode" name="viewpoints" appinfo="Container field for Viewpoint nodes"></field>
<field accessType="inputOutput" type="SFNode" name="skinCoord" appinfo="Hint: HAnim version 2.0"></field>
<field accessType="inputOutput" type="SFNode" name="skinNormal" appinfo="Hint: HAnim version 2.0"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="HumanoidTransform"><Group DEF="HumanoidGroup1"><IS><connect nodeField="children" protoField="humanoidBody"></connect>
</IS>
</Group>
<Group DEF="HumanoidGroup2"><IS><connect nodeField="children" protoField="skeleton"></connect>
</IS>
</Group>
<Group DEF="HumanoidGroup3"><IS><connect nodeField="children" protoField="viewpoints"></connect>
</IS>
</Group>
<IS><connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
<connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare22.name = "Humanoid1_1";
ProtoDeclare22.appinfo = "The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.";
ProtoDeclare22.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html";
ProtoInterface ProtoInterface23 = createNode("ProtoInterface");
field field24 = createNode("field");
field24.accessType = "inputOutput";
field24.type = "SFString";
field24.name = "name";
ProtoInterface23.field = new MFNode();

ProtoInterface23.field[0] = field24;

field field25 = createNode("field");
field25.accessType = "inputOutput";
field25.type = "SFString";
field25.name = "version";
field25.value = "1.1";
field25.appinfo = "legal values: 1.1 or 2.0";
ProtoInterface23.field[1] = field25;

field field26 = createNode("field");
field26.accessType = "inputOutput";
field26.type = "SFString";
field26.name = "humanoidVersion";
field26.appinfo = "Version of the humanoid being modeled. Hint: HAnim version 2.0";
ProtoInterface23.field[2] = field26;

field field27 = createNode("field");
field27.accessType = "inputOutput";
field27.type = "MFString";
field27.name = "info";
ProtoInterface23.field[3] = field27;

field field28 = createNode("field");
field28.accessType = "inputOutput";
field28.type = "SFVec3f";
field28.name = "translation";
ProtoInterface23.field[4] = field28;

field field29 = createNode("field");
field29.accessType = "inputOutput";
field29.type = "SFRotation";
field29.name = "rotation";
ProtoInterface23.field[5] = field29;

field field30 = createNode("field");
field30.accessType = "inputOutput";
field30.type = "SFVec3f";
field30.name = "center";
ProtoInterface23.field[6] = field30;

field field31 = createNode("field");
field31.accessType = "inputOutput";
field31.type = "SFVec3f";
field31.name = "scale";
field31.value = "1 1 1";
ProtoInterface23.field[7] = field31;

field field32 = createNode("field");
field32.accessType = "inputOutput";
field32.type = "SFRotation";
field32.name = "scaleOrientation";
ProtoInterface23.field[8] = field32;

field field33 = createNode("field");
field33.accessType = "initializeOnly";
field33.type = "SFVec3f";
field33.name = "bboxCenter";
ProtoInterface23.field[9] = field33;

field field34 = createNode("field");
field34.accessType = "initializeOnly";
field34.type = "SFVec3f";
field34.name = "bboxSize";
field34.value = "-1 -1 -1";
ProtoInterface23.field[10] = field34;

field field35 = createNode("field");
field35.accessType = "inputOutput";
field35.type = "MFNode";
field35.name = "humanoidBody";
field35.appinfo = "HAnim 1.1 field container for body head. Hint: replaced by 2.0 skeleton.";
field35.documentation = "http://HAnim.org/Specifications/HAnim1.1/#humanoid";
ProtoInterface23.field[11] = field35;

field field36 = createNode("field");
field36.accessType = "inputOutput";
field36.type = "MFNode";
field36.name = "skeleton";
field36.appinfo = "HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody";
field36.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html";
ProtoInterface23.field[12] = field36;

field field37 = createNode("field");
field37.accessType = "inputOutput";
field37.type = "MFNode";
field37.name = "joints";
field37.appinfo = "Container field for Joint nodes";
ProtoInterface23.field[13] = field37;

field field38 = createNode("field");
field38.accessType = "inputOutput";
field38.type = "MFNode";
field38.name = "segments";
field38.appinfo = "Container field for Segment nodes";
ProtoInterface23.field[14] = field38;

field field39 = createNode("field");
field39.accessType = "inputOutput";
field39.type = "MFNode";
field39.name = "sites";
field39.appinfo = "Container field for Site nodes";
ProtoInterface23.field[15] = field39;

field field40 = createNode("field");
field40.accessType = "inputOutput";
field40.type = "MFNode";
field40.name = "viewpoints";
field40.appinfo = "Container field for Viewpoint nodes";
ProtoInterface23.field[16] = field40;

field field41 = createNode("field");
field41.accessType = "inputOutput";
field41.type = "SFNode";
field41.name = "skinCoord";
field41.appinfo = "Hint: HAnim version 2.0";
ProtoInterface23.field[17] = field41;

field field42 = createNode("field");
field42.accessType = "inputOutput";
field42.type = "SFNode";
field42.name = "skinNormal";
field42.appinfo = "Hint: HAnim version 2.0";
ProtoInterface23.field[18] = field42;

ProtoDeclare22.protoInterface = ProtoInterface23;

ProtoBody ProtoBody43 = createNode("ProtoBody");
Transform Transform44 = createNode("Transform");
Transform44.DEF = "HumanoidTransform";
Group Group45 = createNode("Group");
Group45.DEF = "HumanoidGroup1";
IS IS46 = createNode("IS");
connect connect47 = createNode("connect");
connect47.nodeField = "children";
connect47.protoField = "humanoidBody";
IS46.connect = new MFNode();

IS46.connect[0] = connect47;

Group45.iS = IS46;

Transform44.children = new MFNode();

Transform44.children[0] = Group45;

Group Group48 = createNode("Group");
Group48.DEF = "HumanoidGroup2";
IS IS49 = createNode("IS");
connect connect50 = createNode("connect");
connect50.nodeField = "children";
connect50.protoField = "skeleton";
IS49.connect = new MFNode();

IS49.connect[0] = connect50;

Group48.iS = IS49;

Transform44.children[1] = Group48;

Group Group51 = createNode("Group");
Group51.DEF = "HumanoidGroup3";
IS IS52 = createNode("IS");
connect connect53 = createNode("connect");
connect53.nodeField = "children";
connect53.protoField = "viewpoints";
IS52.connect = new MFNode();

IS52.connect[0] = connect53;

Group51.iS = IS52;

Transform44.children[2] = Group51;

IS IS54 = createNode("IS");
connect connect55 = createNode("connect");
connect55.nodeField = "translation";
connect55.protoField = "translation";
IS54.connect = new MFNode();

IS54.connect[0] = connect55;

connect connect56 = createNode("connect");
connect56.nodeField = "rotation";
connect56.protoField = "rotation";
IS54.connect[1] = connect56;

connect connect57 = createNode("connect");
connect57.nodeField = "scale";
connect57.protoField = "scale";
IS54.connect[2] = connect57;

connect connect58 = createNode("connect");
connect58.nodeField = "scaleOrientation";
connect58.protoField = "scaleOrientation";
IS54.connect[3] = connect58;

connect connect59 = createNode("connect");
connect59.nodeField = "center";
connect59.protoField = "center";
IS54.connect[4] = connect59;

connect connect60 = createNode("connect");
connect60.nodeField = "bboxSize";
connect60.protoField = "bboxSize";
IS54.connect[5] = connect60;

connect connect61 = createNode("connect");
connect61.nodeField = "bboxCenter";
connect61.protoField = "bboxCenter";
IS54.connect[6] = connect61;

Transform44.iS = IS54;

ProtoBody43.children = new MFNode();

ProtoBody43.children[0] = Transform44;

ProtoDeclare22.protoBody = ProtoBody43;

children = new MFNode();

children[0] = ProtoDeclare22;

ProtoDeclare ProtoDeclare62 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Joint" appinfo="The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Joint.html" ><ProtoInterface><field accessType="inputOutput" type="SFString" name="name"></field>
<field accessType="inputOutput" type="MFFloat" name="ulimit"></field>
<field accessType="inputOutput" type="MFFloat" name="llimit"></field>
<field accessType="inputOutput" type="SFRotation" name="limitOrientation"></field>
<field accessType="inputOutput" type="MFInt32" name="skinCoordIndex"></field>
<field accessType="inputOutput" type="MFFloat" name="skinCoordWeight"></field>
<field accessType="inputOutput" type="MFFloat" name="stiffness" value="0 0 0"></field>
<field accessType="inputOutput" type="SFVec3f" name="translation"></field>
<field accessType="inputOutput" type="SFRotation" name="rotation"></field>
<field accessType="inputOutput" type="SFVec3f" name="scale" value="1 1 1"></field>
<field accessType="inputOutput" type="SFRotation" name="scaleOrientation"></field>
<field accessType="inputOutput" type="SFVec3f" name="center"></field>
<field accessType="initializeOnly" type="SFVec3f" name="bboxCenter"></field>
<field accessType="initializeOnly" type="SFVec3f" name="bboxSize" value="-1 -1 -1"></field>
<field accessType="inputOutput" type="MFNode" name="children"></field>
<field accessType="inputOnly" type="MFNode" name="addChildren"></field>
<field accessType="inputOnly" type="MFNode" name="removeChildren"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="JointTransform"><IS><connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
<connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
<connect nodeField="children" protoField="children"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare62.name = "Joint";
ProtoDeclare62.appinfo = "The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.";
ProtoDeclare62.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Joint.html";
ProtoInterface ProtoInterface63 = createNode("ProtoInterface");
field field64 = createNode("field");
field64.accessType = "inputOutput";
field64.type = "SFString";
field64.name = "name";
ProtoInterface63.field = new MFNode();

ProtoInterface63.field[0] = field64;

field field65 = createNode("field");
field65.accessType = "inputOutput";
field65.type = "MFFloat";
field65.name = "ulimit";
ProtoInterface63.field[1] = field65;

field field66 = createNode("field");
field66.accessType = "inputOutput";
field66.type = "MFFloat";
field66.name = "llimit";
ProtoInterface63.field[2] = field66;

field field67 = createNode("field");
field67.accessType = "inputOutput";
field67.type = "SFRotation";
field67.name = "limitOrientation";
ProtoInterface63.field[3] = field67;

field field68 = createNode("field");
field68.accessType = "inputOutput";
field68.type = "MFInt32";
field68.name = "skinCoordIndex";
ProtoInterface63.field[4] = field68;

field field69 = createNode("field");
field69.accessType = "inputOutput";
field69.type = "MFFloat";
field69.name = "skinCoordWeight";
ProtoInterface63.field[5] = field69;

field field70 = createNode("field");
field70.accessType = "inputOutput";
field70.type = "MFFloat";
field70.name = "stiffness";
field70.value = "0 0 0";
ProtoInterface63.field[6] = field70;

field field71 = createNode("field");
field71.accessType = "inputOutput";
field71.type = "SFVec3f";
field71.name = "translation";
ProtoInterface63.field[7] = field71;

field field72 = createNode("field");
field72.accessType = "inputOutput";
field72.type = "SFRotation";
field72.name = "rotation";
ProtoInterface63.field[8] = field72;

field field73 = createNode("field");
field73.accessType = "inputOutput";
field73.type = "SFVec3f";
field73.name = "scale";
field73.value = "1 1 1";
ProtoInterface63.field[9] = field73;

field field74 = createNode("field");
field74.accessType = "inputOutput";
field74.type = "SFRotation";
field74.name = "scaleOrientation";
ProtoInterface63.field[10] = field74;

field field75 = createNode("field");
field75.accessType = "inputOutput";
field75.type = "SFVec3f";
field75.name = "center";
ProtoInterface63.field[11] = field75;

field field76 = createNode("field");
field76.accessType = "initializeOnly";
field76.type = "SFVec3f";
field76.name = "bboxCenter";
ProtoInterface63.field[12] = field76;

field field77 = createNode("field");
field77.accessType = "initializeOnly";
field77.type = "SFVec3f";
field77.name = "bboxSize";
field77.value = "-1 -1 -1";
ProtoInterface63.field[13] = field77;

field field78 = createNode("field");
field78.accessType = "inputOutput";
field78.type = "MFNode";
field78.name = "children";
ProtoInterface63.field[14] = field78;

field field79 = createNode("field");
field79.accessType = "inputOnly";
field79.type = "MFNode";
field79.name = "addChildren";
ProtoInterface63.field[15] = field79;

field field80 = createNode("field");
field80.accessType = "inputOnly";
field80.type = "MFNode";
field80.name = "removeChildren";
ProtoInterface63.field[16] = field80;

ProtoDeclare62.protoInterface = ProtoInterface63;

ProtoBody ProtoBody81 = createNode("ProtoBody");
Transform Transform82 = createNode("Transform");
Transform82.DEF = "JointTransform";
IS IS83 = createNode("IS");
connect connect84 = createNode("connect");
connect84.nodeField = "translation";
connect84.protoField = "translation";
IS83.connect = new MFNode();

IS83.connect[0] = connect84;

connect connect85 = createNode("connect");
connect85.nodeField = "rotation";
connect85.protoField = "rotation";
IS83.connect[1] = connect85;

connect connect86 = createNode("connect");
connect86.nodeField = "scale";
connect86.protoField = "scale";
IS83.connect[2] = connect86;

connect connect87 = createNode("connect");
connect87.nodeField = "scaleOrientation";
connect87.protoField = "scaleOrientation";
IS83.connect[3] = connect87;

connect connect88 = createNode("connect");
connect88.nodeField = "center";
connect88.protoField = "center";
IS83.connect[4] = connect88;

connect connect89 = createNode("connect");
connect89.nodeField = "bboxSize";
connect89.protoField = "bboxSize";
IS83.connect[5] = connect89;

connect connect90 = createNode("connect");
connect90.nodeField = "bboxCenter";
connect90.protoField = "bboxCenter";
IS83.connect[6] = connect90;

connect connect91 = createNode("connect");
connect91.nodeField = "addChildren";
connect91.protoField = "addChildren";
IS83.connect[7] = connect91;

connect connect92 = createNode("connect");
connect92.nodeField = "removeChildren";
connect92.protoField = "removeChildren";
IS83.connect[8] = connect92;

connect connect93 = createNode("connect");
connect93.nodeField = "children";
connect93.protoField = "children";
IS83.connect[9] = connect93;

Transform82.iS = IS83;

ProtoBody81.children = new MFNode();

ProtoBody81.children[0] = Transform82;

ProtoDeclare62.protoBody = ProtoBody81;

children[1] = ProtoDeclare62;

ProtoDeclare ProtoDeclare94 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Segment" appinfo="The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc.) of the humanoid figure is represented by a Segment node." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Segment.html" ><ProtoInterface><field accessType="inputOutput" type="SFString" name="name"></field>
<field accessType="inputOutput" type="SFFloat" name="mass"></field>
<field accessType="inputOutput" type="SFVec3f" name="centerOfMass"></field>
<field accessType="inputOutput" type="MFFloat" name="momentsOfInertia" value="0 0 0 0 0 0 0 0 0"></field>
<field accessType="initializeOnly" type="SFVec3f" name="bboxCenter"></field>
<field accessType="initializeOnly" type="SFVec3f" name="bboxSize" value="-1 -1 -1"></field>
<field accessType="inputOutput" type="MFNode" name="children"></field>
<field accessType="inputOnly" type="MFNode" name="addChildren"></field>
<field accessType="inputOnly" type="MFNode" name="removeChildren"></field>
<field accessType="inputOutput" type="SFNode" name="coord" appinfo="contains Coordinate nodes"></field>
<field accessType="inputOutput" type="MFNode" name="displacers" appinfo="contains Displacer nodes"></field>
</ProtoInterface>
<ProtoBody><Group DEF="SegmentGroup"><IS><connect nodeField="bboxSize" protoField="bboxSize"></connect>
<connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
<connect nodeField="children" protoField="children"></connect>
</IS>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare94.name = "Segment";
ProtoDeclare94.appinfo = "The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc.) of the humanoid figure is represented by a Segment node.";
ProtoDeclare94.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Segment.html";
ProtoInterface ProtoInterface95 = createNode("ProtoInterface");
field field96 = createNode("field");
field96.accessType = "inputOutput";
field96.type = "SFString";
field96.name = "name";
ProtoInterface95.field = new MFNode();

ProtoInterface95.field[0] = field96;

field field97 = createNode("field");
field97.accessType = "inputOutput";
field97.type = "SFFloat";
field97.name = "mass";
ProtoInterface95.field[1] = field97;

field field98 = createNode("field");
field98.accessType = "inputOutput";
field98.type = "SFVec3f";
field98.name = "centerOfMass";
ProtoInterface95.field[2] = field98;

field field99 = createNode("field");
field99.accessType = "inputOutput";
field99.type = "MFFloat";
field99.name = "momentsOfInertia";
field99.value = "0 0 0 0 0 0 0 0 0";
ProtoInterface95.field[3] = field99;

field field100 = createNode("field");
field100.accessType = "initializeOnly";
field100.type = "SFVec3f";
field100.name = "bboxCenter";
ProtoInterface95.field[4] = field100;

field field101 = createNode("field");
field101.accessType = "initializeOnly";
field101.type = "SFVec3f";
field101.name = "bboxSize";
field101.value = "-1 -1 -1";
ProtoInterface95.field[5] = field101;

field field102 = createNode("field");
field102.accessType = "inputOutput";
field102.type = "MFNode";
field102.name = "children";
ProtoInterface95.field[6] = field102;

field field103 = createNode("field");
field103.accessType = "inputOnly";
field103.type = "MFNode";
field103.name = "addChildren";
ProtoInterface95.field[7] = field103;

field field104 = createNode("field");
field104.accessType = "inputOnly";
field104.type = "MFNode";
field104.name = "removeChildren";
ProtoInterface95.field[8] = field104;

field field105 = createNode("field");
field105.accessType = "inputOutput";
field105.type = "SFNode";
field105.name = "coord";
field105.appinfo = "contains Coordinate nodes";
ProtoInterface95.field[9] = field105;

field field106 = createNode("field");
field106.accessType = "inputOutput";
field106.type = "MFNode";
field106.name = "displacers";
field106.appinfo = "contains Displacer nodes";
ProtoInterface95.field[10] = field106;

ProtoDeclare94.protoInterface = ProtoInterface95;

ProtoBody ProtoBody107 = createNode("ProtoBody");
Group Group108 = createNode("Group");
Group108.DEF = "SegmentGroup";
IS IS109 = createNode("IS");
connect connect110 = createNode("connect");
connect110.nodeField = "bboxSize";
connect110.protoField = "bboxSize";
IS109.connect = new MFNode();

IS109.connect[0] = connect110;

connect connect111 = createNode("connect");
connect111.nodeField = "bboxCenter";
connect111.protoField = "bboxCenter";
IS109.connect[1] = connect111;

connect connect112 = createNode("connect");
connect112.nodeField = "addChildren";
connect112.protoField = "addChildren";
IS109.connect[2] = connect112;

connect connect113 = createNode("connect");
connect113.nodeField = "removeChildren";
connect113.protoField = "removeChildren";
IS109.connect[3] = connect113;

connect connect114 = createNode("connect");
connect114.nodeField = "children";
connect114.protoField = "children";
IS109.connect[4] = connect114;

Group108.iS = IS109;

ProtoBody107.children = new MFNode();

ProtoBody107.children[0] = Group108;

ProtoDeclare94.protoBody = ProtoBody107;

children[2] = ProtoDeclare94;

ProtoDeclare ProtoDeclare115 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Site" appinfo="The Site node can be used for three purposes: (a) to define an &quot;end effector&quot; location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view &quot;through the eyes&quot; of the humanoid for use in multi-user worlds)." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Site.html" ><ProtoInterface><field accessType="inputOutput" type="SFString" name="name"></field>
<field accessType="inputOutput" type="SFVec3f" name="translation"></field>
<field accessType="inputOutput" type="SFRotation" name="rotation"></field>
<field accessType="inputOutput" type="SFVec3f" name="scale" value="1 1 1"></field>
<field accessType="inputOutput" type="SFRotation" name="scaleOrientation"></field>
<field accessType="inputOutput" type="SFVec3f" name="center"></field>
<field accessType="initializeOnly" type="SFVec3f" name="bboxCenter"></field>
<field accessType="initializeOnly" type="SFVec3f" name="bboxSize" value="-1 -1 -1"></field>
<field accessType="inputOutput" type="MFNode" name="children"></field>
<field accessType="inputOnly" type="MFNode" name="addChildren"></field>
<field accessType="inputOnly" type="MFNode" name="removeChildren"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="SiteTransform"><IS><connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
<connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
<connect nodeField="children" protoField="children"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare115.name = "Site";
ProtoDeclare115.appinfo = "The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds).";
ProtoDeclare115.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Site.html";
ProtoInterface ProtoInterface116 = createNode("ProtoInterface");
field field117 = createNode("field");
field117.accessType = "inputOutput";
field117.type = "SFString";
field117.name = "name";
ProtoInterface116.field = new MFNode();

ProtoInterface116.field[0] = field117;

field field118 = createNode("field");
field118.accessType = "inputOutput";
field118.type = "SFVec3f";
field118.name = "translation";
ProtoInterface116.field[1] = field118;

field field119 = createNode("field");
field119.accessType = "inputOutput";
field119.type = "SFRotation";
field119.name = "rotation";
ProtoInterface116.field[2] = field119;

field field120 = createNode("field");
field120.accessType = "inputOutput";
field120.type = "SFVec3f";
field120.name = "scale";
field120.value = "1 1 1";
ProtoInterface116.field[3] = field120;

field field121 = createNode("field");
field121.accessType = "inputOutput";
field121.type = "SFRotation";
field121.name = "scaleOrientation";
ProtoInterface116.field[4] = field121;

field field122 = createNode("field");
field122.accessType = "inputOutput";
field122.type = "SFVec3f";
field122.name = "center";
ProtoInterface116.field[5] = field122;

field field123 = createNode("field");
field123.accessType = "initializeOnly";
field123.type = "SFVec3f";
field123.name = "bboxCenter";
ProtoInterface116.field[6] = field123;

field field124 = createNode("field");
field124.accessType = "initializeOnly";
field124.type = "SFVec3f";
field124.name = "bboxSize";
field124.value = "-1 -1 -1";
ProtoInterface116.field[7] = field124;

field field125 = createNode("field");
field125.accessType = "inputOutput";
field125.type = "MFNode";
field125.name = "children";
ProtoInterface116.field[8] = field125;

field field126 = createNode("field");
field126.accessType = "inputOnly";
field126.type = "MFNode";
field126.name = "addChildren";
ProtoInterface116.field[9] = field126;

field field127 = createNode("field");
field127.accessType = "inputOnly";
field127.type = "MFNode";
field127.name = "removeChildren";
ProtoInterface116.field[10] = field127;

ProtoDeclare115.protoInterface = ProtoInterface116;

ProtoBody ProtoBody128 = createNode("ProtoBody");
Transform Transform129 = createNode("Transform");
Transform129.DEF = "SiteTransform";
IS IS130 = createNode("IS");
connect connect131 = createNode("connect");
connect131.nodeField = "translation";
connect131.protoField = "translation";
IS130.connect = new MFNode();

IS130.connect[0] = connect131;

connect connect132 = createNode("connect");
connect132.nodeField = "rotation";
connect132.protoField = "rotation";
IS130.connect[1] = connect132;

connect connect133 = createNode("connect");
connect133.nodeField = "scale";
connect133.protoField = "scale";
IS130.connect[2] = connect133;

connect connect134 = createNode("connect");
connect134.nodeField = "scaleOrientation";
connect134.protoField = "scaleOrientation";
IS130.connect[3] = connect134;

connect connect135 = createNode("connect");
connect135.nodeField = "center";
connect135.protoField = "center";
IS130.connect[4] = connect135;

connect connect136 = createNode("connect");
connect136.nodeField = "bboxSize";
connect136.protoField = "bboxSize";
IS130.connect[5] = connect136;

connect connect137 = createNode("connect");
connect137.nodeField = "bboxCenter";
connect137.protoField = "bboxCenter";
IS130.connect[6] = connect137;

connect connect138 = createNode("connect");
connect138.nodeField = "addChildren";
connect138.protoField = "addChildren";
IS130.connect[7] = connect138;

connect connect139 = createNode("connect");
connect139.nodeField = "removeChildren";
connect139.protoField = "removeChildren";
IS130.connect[8] = connect139;

connect connect140 = createNode("connect");
connect140.nodeField = "children";
connect140.protoField = "children";
IS130.connect[9] = connect140;

Transform129.iS = IS130;

ProtoBody128.children = new MFNode();

ProtoBody128.children[0] = Transform129;

ProtoDeclare115.protoBody = ProtoBody128;

children[3] = ProtoDeclare115;

ProtoDeclare ProtoDeclare141 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Displacer" appinfo="A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html" ><ProtoInterface><field accessType="inputOutput" type="SFString" name="name"></field>
<field accessType="inputOutput" type="MFInt32" name="coordIndex"></field>
<field accessType="inputOutput" type="MFVec3f" name="displacements"></field>
</ProtoInterface>
<ProtoBody><WorldInfo info="&quot;null body node&quot;"></WorldInfo>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare141.name = "Displacer";
ProtoDeclare141.appinfo = "A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment.";
ProtoDeclare141.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html";
ProtoInterface ProtoInterface142 = createNode("ProtoInterface");
field field143 = createNode("field");
field143.accessType = "inputOutput";
field143.type = "SFString";
field143.name = "name";
ProtoInterface142.field = new MFNode();

ProtoInterface142.field[0] = field143;

field field144 = createNode("field");
field144.accessType = "inputOutput";
field144.type = "MFInt32";
field144.name = "coordIndex";
ProtoInterface142.field[1] = field144;

field field145 = createNode("field");
field145.accessType = "inputOutput";
field145.type = "MFVec3f";
field145.name = "displacements";
ProtoInterface142.field[2] = field145;

ProtoDeclare141.protoInterface = ProtoInterface142;

ProtoBody ProtoBody146 = createNode("ProtoBody");
WorldInfo WorldInfo147 = createNode("WorldInfo");
WorldInfo147.info = new MFString(new java.lang.String["null body node"]);
ProtoBody146.children = new MFNode();

ProtoBody146.children[0] = WorldInfo147;

ProtoDeclare141.protoBody = ProtoBody146;

children[4] = ProtoDeclare141;

Shape Shape148 = createNode("Shape");
Appearance Appearance149 = createNode("Appearance");
Material Material150 = createNode("Material");
Material150.ambientIntensity = 0.25;
Material150.diffuseColor = new SFColor(new float[0.795918,0.505869,0.093315]);
Material150.specularColor = new SFColor(new float[0.923469,0.428866,0.006369]);
Material150.shininess = 0.39;
Appearance149.material = Material150;

Shape148.appearance = Appearance149;

Text Text151 = createNode("Text");
Text151.string = new MFString(new java.lang.String["Humanoid Animation","(HAnim) prototype","implementations"]);
FontStyle FontStyle152 = createNode("FontStyle");
FontStyle152.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text151.fontStyle = FontStyle152;

Shape148.geometry = Text151;

children[5] = Shape148;

}
