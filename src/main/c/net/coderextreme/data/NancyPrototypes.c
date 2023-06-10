#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "NancyPrototypes.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "creator";
meta3.content = "Cindy Ballreich";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "translators";
meta4.content = "Tom Miller and Don Brutzman, NPS";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "created";
meta5.content = "9 July 2000";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "4 July 2020";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "description";
meta7.content = "Canonical HAnim 1.1 specification example, using ProtoDeclaration and ProtoInstance instead of native X3D tags. Prototype definitions are a compatible combination of version 1.0 and 2.0 prototype interfaces.";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "warning";
meta8.content = "using ProtoDeclare is only for developmental experimentation, use X3D native tags for Humanoids instead";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "NancyNativeTags.x3d";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "TODO";
meta10.content = "Material color of neck and arms is ignored/incorrect in Xj3D, possily DEF/USE problem.";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "identifier";
meta11.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "generator";
meta12.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "license";
meta13.content = "../license.html";
head1.meta[11] = meta13;

head = head1;

ProtoDeclare ProtoDeclare15 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="Displacer" appinfo="A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html" ><ProtoInterface><field name="name" accessType="inputOutput" type="SFString"></field>
<field name="coordIndex" accessType="inputOutput" type="MFInt32"></field>
<field name="displacements" accessType="inputOutput" type="MFVec3f"></field>
</ProtoInterface>
<ProtoBody><WorldInfo info="&quot;null body node&quot;"></WorldInfo>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare15.name = "Displacer";
ProtoDeclare15.appinfo = "A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment.";
ProtoDeclare15.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html";
ProtoInterface ProtoInterface16 = createNode("ProtoInterface");
field field17 = createNode("field");
field17.name = "name";
field17.accessType = "inputOutput";
field17.type = "SFString";
ProtoInterface16.field = new MFNode();

ProtoInterface16.field[0] = field17;

field field18 = createNode("field");
field18.name = "coordIndex";
field18.accessType = "inputOutput";
field18.type = "MFInt32";
ProtoInterface16.field[1] = field18;

field field19 = createNode("field");
field19.name = "displacements";
field19.accessType = "inputOutput";
field19.type = "MFVec3f";
ProtoInterface16.field[2] = field19;

ProtoDeclare15.protoInterface = ProtoInterface16;

ProtoBody ProtoBody20 = createNode("ProtoBody");
WorldInfo WorldInfo21 = createNode("WorldInfo");
WorldInfo21.info = new MFString(new java.lang.String["null body node"]);
ProtoBody20.children = new MFNode();

ProtoBody20.children[0] = WorldInfo21;

ProtoDeclare15.protoBody = ProtoBody20;

children = new MFNode();

children[0] = ProtoDeclare15;

ProtoDeclare ProtoDeclare22 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="Humanoid" appinfo="The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html" ><ProtoInterface><!--HAnim v1.1 field definitions--><field name="name" accessType="inputOutput" type="SFString"></field>
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
<field name="humanoidBody" accessType="inputOutput" appinfo="HAnim 1.1 field container for body geometry Hint: replaced by 2.0 skeleton" documentation="http://HAnim.org/Specifications/HAnim1.1/#humanoid" type="MFNode"></field>
<field name="skeleton" accessType="inputOutput" appinfo="HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody" documentation="http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html" type="MFNode"></field>
<field name="joints" accessType="inputOutput" appinfo="Container field for Joint nodes" type="MFNode"></field>
<field name="segments" accessType="inputOutput" appinfo="Container field for Segment nodes" type="MFNode"></field>
<field name="sites" accessType="inputOutput" appinfo="Container field for Site nodes" type="MFNode"></field>
<field name="viewpoints" accessType="inputOutput" appinfo="Container field for Viewpoint nodes" type="MFNode"></field>
<field name="skinCoord" accessType="inputOutput" appinfo="Hint: HAnim version 2.0" type="SFNode"><!--NULL node--></field>
<field name="skinNormal" accessType="inputOutput" appinfo="Hint: HAnim version 2.0" type="SFNode"><!--NULL node--></field>
</ProtoInterface>
<ProtoBody><Transform DEF="HumanoidTransform"><IS><connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="center" protoField="center"></connect>
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
ProtoDeclare22.name = "Humanoid";
ProtoDeclare22.appinfo = "The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.";
ProtoDeclare22.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html";
ProtoInterface ProtoInterface23 = createNode("ProtoInterface");
//HAnim v1.1 field definitions
field field24 = createNode("field");
field24.name = "name";
field24.accessType = "inputOutput";
field24.type = "SFString";
ProtoInterface23.field = new MFNode();

ProtoInterface23.field[0] = field24;

field field25 = createNode("field");
field25.name = "version";
field25.accessType = "inputOutput";
field25.appinfo = "legal values: 1.1 or 2.0";
field25.type = "SFString";
field25.value = "1.1";
ProtoInterface23.field[1] = field25;

field field26 = createNode("field");
field26.name = "humanoidVersion";
field26.accessType = "inputOutput";
field26.appinfo = "Version of the humanoid being modeled. Hint: HAnim version 2.0";
field26.type = "SFString";
ProtoInterface23.field[2] = field26;

field field27 = createNode("field");
field27.name = "info";
field27.accessType = "inputOutput";
field27.type = "MFString";
ProtoInterface23.field[3] = field27;

field field28 = createNode("field");
field28.name = "translation";
field28.accessType = "inputOutput";
field28.type = "SFVec3f";
field28.value = "0 0 0";
ProtoInterface23.field[4] = field28;

field field29 = createNode("field");
field29.name = "rotation";
field29.accessType = "inputOutput";
field29.type = "SFRotation";
field29.value = "0 0 1 0";
ProtoInterface23.field[5] = field29;

field field30 = createNode("field");
field30.name = "center";
field30.accessType = "inputOutput";
field30.type = "SFVec3f";
field30.value = "0 0 0";
ProtoInterface23.field[6] = field30;

field field31 = createNode("field");
field31.name = "scale";
field31.accessType = "inputOutput";
field31.type = "SFVec3f";
field31.value = "1 1 1";
ProtoInterface23.field[7] = field31;

field field32 = createNode("field");
field32.name = "scaleOrientation";
field32.accessType = "inputOutput";
field32.type = "SFRotation";
field32.value = "0 0 1 0";
ProtoInterface23.field[8] = field32;

field field33 = createNode("field");
field33.name = "bboxCenter";
field33.accessType = "initializeOnly";
field33.type = "SFVec3f";
field33.value = "0 0 0";
ProtoInterface23.field[9] = field33;

field field34 = createNode("field");
field34.name = "bboxSize";
field34.accessType = "initializeOnly";
field34.type = "SFVec3f";
field34.value = "-1 -1 -1";
ProtoInterface23.field[10] = field34;

field field35 = createNode("field");
field35.name = "humanoidBody";
field35.accessType = "inputOutput";
field35.appinfo = "HAnim 1.1 field container for body geometry Hint: replaced by 2.0 skeleton";
field35.documentation = "http://HAnim.org/Specifications/HAnim1.1/#humanoid";
field35.type = "MFNode";
ProtoInterface23.field[11] = field35;

field field36 = createNode("field");
field36.name = "skeleton";
field36.accessType = "inputOutput";
field36.appinfo = "HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody";
field36.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html";
field36.type = "MFNode";
ProtoInterface23.field[12] = field36;

field field37 = createNode("field");
field37.name = "joints";
field37.accessType = "inputOutput";
field37.appinfo = "Container field for Joint nodes";
field37.type = "MFNode";
ProtoInterface23.field[13] = field37;

field field38 = createNode("field");
field38.name = "segments";
field38.accessType = "inputOutput";
field38.appinfo = "Container field for Segment nodes";
field38.type = "MFNode";
ProtoInterface23.field[14] = field38;

field field39 = createNode("field");
field39.name = "sites";
field39.accessType = "inputOutput";
field39.appinfo = "Container field for Site nodes";
field39.type = "MFNode";
ProtoInterface23.field[15] = field39;

field field40 = createNode("field");
field40.name = "viewpoints";
field40.accessType = "inputOutput";
field40.appinfo = "Container field for Viewpoint nodes";
field40.type = "MFNode";
ProtoInterface23.field[16] = field40;

field field41 = createNode("field");
field41.name = "skinCoord";
field41.accessType = "inputOutput";
field41.appinfo = "Hint: HAnim version 2.0";
field41.type = "SFNode";
//NULL node
ProtoInterface23.field[17] = field41;

field field42 = createNode("field");
field42.name = "skinNormal";
field42.accessType = "inputOutput";
field42.appinfo = "Hint: HAnim version 2.0";
field42.type = "SFNode";
//NULL node
ProtoInterface23.field[18] = field42;

ProtoDeclare22.protoInterface = ProtoInterface23;

ProtoBody ProtoBody43 = createNode("ProtoBody");
Transform Transform44 = createNode("Transform");
Transform44.DEF = "HumanoidTransform";
IS IS45 = createNode("IS");
connect connect46 = createNode("connect");
connect46.nodeField = "translation";
connect46.protoField = "translation";
IS45.connect = new MFNode();

IS45.connect[0] = connect46;

connect connect47 = createNode("connect");
connect47.nodeField = "rotation";
connect47.protoField = "rotation";
IS45.connect[1] = connect47;

connect connect48 = createNode("connect");
connect48.nodeField = "scale";
connect48.protoField = "scale";
IS45.connect[2] = connect48;

connect connect49 = createNode("connect");
connect49.nodeField = "scaleOrientation";
connect49.protoField = "scaleOrientation";
IS45.connect[3] = connect49;

connect connect50 = createNode("connect");
connect50.nodeField = "center";
connect50.protoField = "center";
IS45.connect[4] = connect50;

connect connect51 = createNode("connect");
connect51.nodeField = "bboxCenter";
connect51.protoField = "bboxCenter";
IS45.connect[5] = connect51;

connect connect52 = createNode("connect");
connect52.nodeField = "bboxSize";
connect52.protoField = "bboxSize";
IS45.connect[6] = connect52;

Transform44.iS = IS45;

Group Group53 = createNode("Group");
Group53.DEF = "HumanoidGroup1";
IS IS54 = createNode("IS");
connect connect55 = createNode("connect");
connect55.nodeField = "children";
connect55.protoField = "humanoidBody";
IS54.connect = new MFNode();

IS54.connect[0] = connect55;

Group53.iS = IS54;

Transform44.children = new MFNode();

Transform44.children[0] = Group53;

Group Group56 = createNode("Group");
Group56.DEF = "HumanoidGroup2";
IS IS57 = createNode("IS");
connect connect58 = createNode("connect");
connect58.nodeField = "children";
connect58.protoField = "skeleton";
IS57.connect = new MFNode();

IS57.connect[0] = connect58;

Group56.iS = IS57;

Transform44.children[1] = Group56;

Group Group59 = createNode("Group");
Group59.DEF = "HumanoidGroup3";
IS IS60 = createNode("IS");
connect connect61 = createNode("connect");
connect61.nodeField = "children";
connect61.protoField = "viewpoints";
IS60.connect = new MFNode();

IS60.connect[0] = connect61;

Group59.iS = IS60;

Transform44.children[2] = Group59;

ProtoBody43.children = new MFNode();

ProtoBody43.children[0] = Transform44;

ProtoDeclare22.protoBody = ProtoBody43;

children[1] = ProtoDeclare22;

ProtoDeclare ProtoDeclare62 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
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
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
<connect nodeField="children" protoField="children"></connect>
<connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare62.name = "Joint";
ProtoDeclare62.appinfo = "The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.";
ProtoDeclare62.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Joint.html";
ProtoInterface ProtoInterface63 = createNode("ProtoInterface");
field field64 = createNode("field");
field64.name = "name";
field64.accessType = "inputOutput";
field64.type = "SFString";
ProtoInterface63.field = new MFNode();

ProtoInterface63.field[0] = field64;

field field65 = createNode("field");
field65.name = "ulimit";
field65.accessType = "inputOutput";
field65.type = "MFFloat";
ProtoInterface63.field[1] = field65;

field field66 = createNode("field");
field66.name = "llimit";
field66.accessType = "inputOutput";
field66.type = "MFFloat";
ProtoInterface63.field[2] = field66;

field field67 = createNode("field");
field67.name = "limitOrientation";
field67.accessType = "inputOutput";
field67.type = "SFRotation";
field67.value = "0 0 1 0";
ProtoInterface63.field[3] = field67;

field field68 = createNode("field");
field68.name = "skinCoordIndex";
field68.accessType = "inputOutput";
field68.type = "MFInt32";
ProtoInterface63.field[4] = field68;

field field69 = createNode("field");
field69.name = "skinCoordWeight";
field69.accessType = "inputOutput";
field69.type = "MFFloat";
ProtoInterface63.field[5] = field69;

field field70 = createNode("field");
field70.name = "stiffness";
field70.accessType = "inputOutput";
field70.type = "MFFloat";
field70.value = "0 0 0";
ProtoInterface63.field[6] = field70;

field field71 = createNode("field");
field71.name = "translation";
field71.accessType = "inputOutput";
field71.type = "SFVec3f";
field71.value = "0 0 0";
ProtoInterface63.field[7] = field71;

field field72 = createNode("field");
field72.name = "rotation";
field72.accessType = "inputOutput";
field72.type = "SFRotation";
field72.value = "0 0 1 0";
ProtoInterface63.field[8] = field72;

field field73 = createNode("field");
field73.name = "scale";
field73.accessType = "inputOutput";
field73.type = "SFVec3f";
field73.value = "1 1 1";
ProtoInterface63.field[9] = field73;

field field74 = createNode("field");
field74.name = "scaleOrientation";
field74.accessType = "inputOutput";
field74.type = "SFRotation";
field74.value = "0 0 1 0";
ProtoInterface63.field[10] = field74;

field field75 = createNode("field");
field75.name = "center";
field75.accessType = "inputOutput";
field75.type = "SFVec3f";
field75.value = "0 0 0";
ProtoInterface63.field[11] = field75;

field field76 = createNode("field");
field76.name = "bboxCenter";
field76.accessType = "initializeOnly";
field76.type = "SFVec3f";
field76.value = "0 0 0";
ProtoInterface63.field[12] = field76;

field field77 = createNode("field");
field77.name = "bboxSize";
field77.accessType = "initializeOnly";
field77.type = "SFVec3f";
field77.value = "-1 -1 -1";
ProtoInterface63.field[13] = field77;

field field78 = createNode("field");
field78.name = "children";
field78.accessType = "inputOutput";
field78.type = "MFNode";
ProtoInterface63.field[14] = field78;

field field79 = createNode("field");
field79.name = "addChildren";
field79.accessType = "inputOnly";
field79.type = "MFNode";
ProtoInterface63.field[15] = field79;

field field80 = createNode("field");
field80.name = "removeChildren";
field80.accessType = "inputOnly";
field80.type = "MFNode";
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
connect89.nodeField = "bboxCenter";
connect89.protoField = "bboxCenter";
IS83.connect[5] = connect89;

connect connect90 = createNode("connect");
connect90.nodeField = "bboxSize";
connect90.protoField = "bboxSize";
IS83.connect[6] = connect90;

connect connect91 = createNode("connect");
connect91.nodeField = "children";
connect91.protoField = "children";
IS83.connect[7] = connect91;

connect connect92 = createNode("connect");
connect92.nodeField = "addChildren";
connect92.protoField = "addChildren";
IS83.connect[8] = connect92;

connect connect93 = createNode("connect");
connect93.nodeField = "removeChildren";
connect93.protoField = "removeChildren";
IS83.connect[9] = connect93;

Transform82.iS = IS83;

ProtoBody81.children = new MFNode();

ProtoBody81.children[0] = Transform82;

ProtoDeclare62.protoBody = ProtoBody81;

children[2] = ProtoDeclare62;

ProtoDeclare ProtoDeclare94 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="Segment" appinfo="The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Segment.html" ><ProtoInterface><field name="name" accessType="inputOutput" type="SFString"></field>
<field name="mass" accessType="inputOutput" type="SFFloat" value="0"></field>
<field name="centerOfMass" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="momentsOfInertia" accessType="inputOutput" type="MFFloat" value="0 0 0 0 0 0 0 0 0"></field>
<field name="bboxCenter" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="bboxSize" accessType="initializeOnly" type="SFVec3f" value="-1 -1 -1"></field>
<field name="children" accessType="inputOutput" type="MFNode"></field>
<field name="addChildren" accessType="inputOnly" type="MFNode"></field>
<field name="removeChildren" accessType="inputOnly" type="MFNode"></field>
<field name="coord" accessType="inputOutput" appinfo="contains Coordinate nodes" type="SFNode"><!--NULL node--></field>
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
ProtoDeclare94.name = "Segment";
ProtoDeclare94.appinfo = "The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node.";
ProtoDeclare94.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Segment.html";
ProtoInterface ProtoInterface95 = createNode("ProtoInterface");
field field96 = createNode("field");
field96.name = "name";
field96.accessType = "inputOutput";
field96.type = "SFString";
ProtoInterface95.field = new MFNode();

ProtoInterface95.field[0] = field96;

field field97 = createNode("field");
field97.name = "mass";
field97.accessType = "inputOutput";
field97.type = "SFFloat";
field97.value = "0";
ProtoInterface95.field[1] = field97;

field field98 = createNode("field");
field98.name = "centerOfMass";
field98.accessType = "inputOutput";
field98.type = "SFVec3f";
field98.value = "0 0 0";
ProtoInterface95.field[2] = field98;

field field99 = createNode("field");
field99.name = "momentsOfInertia";
field99.accessType = "inputOutput";
field99.type = "MFFloat";
field99.value = "0 0 0 0 0 0 0 0 0";
ProtoInterface95.field[3] = field99;

field field100 = createNode("field");
field100.name = "bboxCenter";
field100.accessType = "initializeOnly";
field100.type = "SFVec3f";
field100.value = "0 0 0";
ProtoInterface95.field[4] = field100;

field field101 = createNode("field");
field101.name = "bboxSize";
field101.accessType = "initializeOnly";
field101.type = "SFVec3f";
field101.value = "-1 -1 -1";
ProtoInterface95.field[5] = field101;

field field102 = createNode("field");
field102.name = "children";
field102.accessType = "inputOutput";
field102.type = "MFNode";
ProtoInterface95.field[6] = field102;

field field103 = createNode("field");
field103.name = "addChildren";
field103.accessType = "inputOnly";
field103.type = "MFNode";
ProtoInterface95.field[7] = field103;

field field104 = createNode("field");
field104.name = "removeChildren";
field104.accessType = "inputOnly";
field104.type = "MFNode";
ProtoInterface95.field[8] = field104;

field field105 = createNode("field");
field105.name = "coord";
field105.accessType = "inputOutput";
field105.appinfo = "contains Coordinate nodes";
field105.type = "SFNode";
//NULL node
ProtoInterface95.field[9] = field105;

field field106 = createNode("field");
field106.name = "displacers";
field106.accessType = "inputOutput";
field106.appinfo = "contains Displacer nodes";
field106.type = "MFNode";
ProtoInterface95.field[10] = field106;

ProtoDeclare94.protoInterface = ProtoInterface95;

ProtoBody ProtoBody107 = createNode("ProtoBody");
Group Group108 = createNode("Group");
Group108.DEF = "SegmentGroup";
IS IS109 = createNode("IS");
connect connect110 = createNode("connect");
connect110.nodeField = "bboxCenter";
connect110.protoField = "bboxCenter";
IS109.connect = new MFNode();

IS109.connect[0] = connect110;

connect connect111 = createNode("connect");
connect111.nodeField = "bboxSize";
connect111.protoField = "bboxSize";
IS109.connect[1] = connect111;

connect connect112 = createNode("connect");
connect112.nodeField = "children";
connect112.protoField = "children";
IS109.connect[2] = connect112;

connect connect113 = createNode("connect");
connect113.nodeField = "addChildren";
connect113.protoField = "addChildren";
IS109.connect[3] = connect113;

connect connect114 = createNode("connect");
connect114.nodeField = "removeChildren";
connect114.protoField = "removeChildren";
IS109.connect[4] = connect114;

Group108.iS = IS109;

ProtoBody107.children = new MFNode();

ProtoBody107.children[0] = Group108;

ProtoDeclare94.protoBody = ProtoBody107;

children[3] = ProtoDeclare94;

ProtoDeclare ProtoDeclare115 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
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
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
<connect nodeField="children" protoField="children"></connect>
<connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare115.name = "Site";
ProtoDeclare115.appinfo = "The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds).";
ProtoDeclare115.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Site.html";
ProtoInterface ProtoInterface116 = createNode("ProtoInterface");
field field117 = createNode("field");
field117.name = "name";
field117.accessType = "inputOutput";
field117.type = "SFString";
ProtoInterface116.field = new MFNode();

ProtoInterface116.field[0] = field117;

field field118 = createNode("field");
field118.name = "translation";
field118.accessType = "inputOutput";
field118.type = "SFVec3f";
field118.value = "0 0 0";
ProtoInterface116.field[1] = field118;

field field119 = createNode("field");
field119.name = "rotation";
field119.accessType = "inputOutput";
field119.type = "SFRotation";
field119.value = "0 0 1 0";
ProtoInterface116.field[2] = field119;

field field120 = createNode("field");
field120.name = "scale";
field120.accessType = "inputOutput";
field120.type = "SFVec3f";
field120.value = "1 1 1";
ProtoInterface116.field[3] = field120;

field field121 = createNode("field");
field121.name = "scaleOrientation";
field121.accessType = "inputOutput";
field121.type = "SFRotation";
field121.value = "0 0 1 0";
ProtoInterface116.field[4] = field121;

field field122 = createNode("field");
field122.name = "center";
field122.accessType = "inputOutput";
field122.type = "SFVec3f";
field122.value = "0 0 0";
ProtoInterface116.field[5] = field122;

field field123 = createNode("field");
field123.name = "bboxCenter";
field123.accessType = "initializeOnly";
field123.type = "SFVec3f";
field123.value = "0 0 0";
ProtoInterface116.field[6] = field123;

field field124 = createNode("field");
field124.name = "bboxSize";
field124.accessType = "initializeOnly";
field124.type = "SFVec3f";
field124.value = "-1 -1 -1";
ProtoInterface116.field[7] = field124;

field field125 = createNode("field");
field125.name = "children";
field125.accessType = "inputOutput";
field125.type = "MFNode";
ProtoInterface116.field[8] = field125;

field field126 = createNode("field");
field126.name = "addChildren";
field126.accessType = "inputOnly";
field126.type = "MFNode";
ProtoInterface116.field[9] = field126;

field field127 = createNode("field");
field127.name = "removeChildren";
field127.accessType = "inputOnly";
field127.type = "MFNode";
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
connect136.nodeField = "bboxCenter";
connect136.protoField = "bboxCenter";
IS130.connect[5] = connect136;

connect connect137 = createNode("connect");
connect137.nodeField = "bboxSize";
connect137.protoField = "bboxSize";
IS130.connect[6] = connect137;

connect connect138 = createNode("connect");
connect138.nodeField = "children";
connect138.protoField = "children";
IS130.connect[7] = connect138;

connect connect139 = createNode("connect");
connect139.nodeField = "addChildren";
connect139.protoField = "addChildren";
IS130.connect[8] = connect139;

connect connect140 = createNode("connect");
connect140.nodeField = "removeChildren";
connect140.protoField = "removeChildren";
IS130.connect[9] = connect140;

Transform129.iS = IS130;

ProtoBody128.children = new MFNode();

ProtoBody128.children[0] = Transform129;

ProtoDeclare115.protoBody = ProtoBody128;

children[4] = ProtoDeclare115;

//Start scene graph.
ProtoInstance ProtoInstance141 = createNode("ProtoInstance");
ProtoInstance141.name = "Humanoid";
ProtoInstance141.DEF = "Humanoid";
fieldValue fieldValue142 = createNode("fieldValue");
fieldValue142.name = "name";
fieldValue142.value = "nancy";
ProtoInstance141.fieldValue = new MFNode();

ProtoInstance141.fieldValue[0] = fieldValue142;

fieldValue fieldValue143 = createNode("fieldValue");
fieldValue143.name = "version";
fieldValue143.value = "1.1";
ProtoInstance141.fieldValue[1] = fieldValue143;

fieldValue fieldValue144 = createNode("fieldValue");
fieldValue144.name = "info";
fieldValue144.value = "\"humanoidVersion=Nancy V1.2b\" \"authorName=Cindy Ballreich\" \"authorEmail=cindy@ballreich.net\" \"copyright=1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved.\" \"creationDate=Tue Dec 30 08:30:08 PST 1997\" \"usageRestrictions=Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given.\"";
ProtoInstance141.fieldValue[2] = fieldValue144;

fieldValue fieldValue145 = createNode("fieldValue");
fieldValue145.name = "humanoidBody";
ProtoInstance ProtoInstance146 = createNode("ProtoInstance");
ProtoInstance146.name = "Joint";
ProtoInstance146.DEF = "hanim_humanoid_root";
fieldValue fieldValue147 = createNode("fieldValue");
fieldValue147.name = "name";
fieldValue147.value = "humanoid_root";
ProtoInstance146.fieldValue = new MFNode();

ProtoInstance146.fieldValue[0] = fieldValue147;

fieldValue fieldValue148 = createNode("fieldValue");
fieldValue148.name = "center";
fieldValue148.value = "-0.00405 0.855 -0.000113";
ProtoInstance146.fieldValue[1] = fieldValue148;

fieldValue fieldValue149 = createNode("fieldValue");
fieldValue149.name = "children";
ProtoInstance ProtoInstance150 = createNode("ProtoInstance");
ProtoInstance150.name = "Joint";
ProtoInstance150.DEF = "hanim_sacroiliac";
fieldValue fieldValue151 = createNode("fieldValue");
fieldValue151.name = "name";
fieldValue151.value = "sacroiliac";
ProtoInstance150.fieldValue = new MFNode();

ProtoInstance150.fieldValue[0] = fieldValue151;

fieldValue fieldValue152 = createNode("fieldValue");
fieldValue152.name = "center";
fieldValue152.value = "0 1.01 -0.0204";
ProtoInstance150.fieldValue[1] = fieldValue152;

fieldValue fieldValue153 = createNode("fieldValue");
fieldValue153.name = "children";
ProtoInstance ProtoInstance154 = createNode("ProtoInstance");
ProtoInstance154.name = "Segment";
ProtoInstance154.DEF = "hanim_pelvis";
fieldValue fieldValue155 = createNode("fieldValue");
fieldValue155.name = "name";
fieldValue155.value = "pelvis";
ProtoInstance154.fieldValue = new MFNode();

ProtoInstance154.fieldValue[0] = fieldValue155;

fieldValue fieldValue156 = createNode("fieldValue");
fieldValue156.name = "children";
Shape Shape157 = createNode("Shape");
Appearance Appearance158 = createNode("Appearance");
Material Material159 = createNode("Material");
Material159.DEF = "Pants_Color";
Material159.ambientIntensity = 0.25;
Material159.diffuseColor = new SFColor(new float[0.054,0.233,0.39]);
Appearance158.material = Material159;

Shape157.appearance = Appearance158;

IndexedFaceSet IndexedFaceSet160 = createNode("IndexedFaceSet");
IndexedFaceSet160.coordIndex = new MFInt32(new int[0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1]);
IndexedFaceSet160.creaseAngle = 1.14;
Coordinate Coordinate161 = createNode("Coordinate");
Coordinate161.point = new MFVec3f(new float[0,1.06,0.0218,0.0561,1.07,0.00726,0.0851,1.07,-0.0115,0.104,1.07,-0.0497,0.0851,1.07,-0.0851,0.032,1.06,-0.0985,0.0873,1.04,0.0078,0.033,1.04,0.0395,0.123,1.05,-0.0405,0.0609,1.02,-0.106,0.0894,0.996,-0.106,0.143,1,-0.0309,0.117,1,0.0164,0.0314,0.999,0.0502,0.0314,0.96,-0.13,0.156,0.966,-0.0405,0.156,0.968,-0.00724,0.0341,0.954,0.0513,0.115,0.96,-0.0916,0.121,0.926,0.0352,0.0357,0.92,0.0497,0.0314,0.91,-0.146,0.0991,0.91,-0.131,0.169,0.883,-0.0448,0.169,0.885,-0.00939,0.123,0.873,0.0384,0.0926,0.872,0.047,0.0325,0.873,0.0287,0.0293,0.866,-0.142,0.102,0.869,-0.131,0.129,0.868,-0.103,0.0314,0.84,-0.125,0.101,0.844,-0.122,0.133,0.846,-0.0878,0.0653,0.835,0.0132,0.0615,0.824,-0.111,0.0985,0.823,-0.101,0.132,0.826,-0.0448,0.0609,0.821,-0.0158,0.0599,0.812,-0.0545,0,1.08,-0.0266,-0.0561,1.07,0.00726,-0.0851,1.07,-0.0115,-0.104,1.07,-0.0497,-0.0851,1.07,-0.0851,-0.032,1.06,-0.0985,-0.0873,1.04,0.0078,-0.033,1.04,0.0395,-0.123,1.05,-0.0405,-0.0609,1.02,-0.106,0,1.02,-0.108,-0.0894,0.996,-0.106,-0.143,1,-0.0309,-0.144,1,-0.011,-0.117,1,0.0164,-0.0314,0.999,0.0502,0,0.961,-0.123,-0.0314,0.96,-0.13,-0.156,0.966,-0.0405,-0.156,0.968,-0.00724,-0.0341,0.954,0.0513,-0.115,0.96,-0.0916,-0.121,0.926,0.0352,-0.0357,0.92,0.0497,0,0.91,-0.127,-0.0314,0.91,-0.146,-0.0991,0.91,-0.131,-0.167,0.911,-0.0448,-0.167,0.912,-0.00671,0,0.883,-0.129,-0.123,0.873,0.0384,-0.0926,0.872,0.047,-0.0325,0.873,0.0287,-0.0293,0.866,-0.142,-0.102,0.869,-0.131,-0.129,0.868,-0.103,-0.166,0.863,-0.0148,0,0.863,-0.00456,-0.166,0.862,-0.0459,0,0.858,-0.1,-0.0314,0.84,-0.125,-0.101,0.844,-0.122,-0.0653,0.835,0.0132,0,0.839,-0.0217,0,0.835,-0.0867,-0.0615,0.824,-0.111,-0.0985,0.823,-0.101,-0.132,0.826,-0.0448,-0.0609,0.821,-0.0158,0,0.831,-0.0626,-0.0599,0.812,-0.0545]);
IndexedFaceSet160.coord = Coordinate161;

Shape157.geometry = IndexedFaceSet160;

fieldValue156.children = new MFNode();

fieldValue156.children[0] = Shape157;

ProtoInstance154.fieldValue[1] = fieldValue156;

fieldValue153.children = new MFNode();

fieldValue153.children[0] = ProtoInstance154;

ProtoInstance ProtoInstance162 = createNode("ProtoInstance");
ProtoInstance162.name = "Joint";
ProtoInstance162.DEF = "hanim_l_hip";
fieldValue fieldValue163 = createNode("fieldValue");
fieldValue163.name = "name";
fieldValue163.value = "l_hip";
ProtoInstance162.fieldValue = new MFNode();

ProtoInstance162.fieldValue[0] = fieldValue163;

fieldValue fieldValue164 = createNode("fieldValue");
fieldValue164.name = "center";
fieldValue164.value = "0.122 0.888271 -0.0693267";
ProtoInstance162.fieldValue[1] = fieldValue164;

fieldValue fieldValue165 = createNode("fieldValue");
fieldValue165.name = "children";
ProtoInstance ProtoInstance166 = createNode("ProtoInstance");
ProtoInstance166.name = "Segment";
ProtoInstance166.DEF = "hanim_l_thigh";
fieldValue fieldValue167 = createNode("fieldValue");
fieldValue167.name = "name";
fieldValue167.value = "l_thigh";
ProtoInstance166.fieldValue = new MFNode();

ProtoInstance166.fieldValue[0] = fieldValue167;

fieldValue fieldValue168 = createNode("fieldValue");
fieldValue168.name = "children";
Shape Shape169 = createNode("Shape");
Appearance Appearance170 = createNode("Appearance");
Material Material171 = createNode("Material");
Material171.USE = "Pants_Color";
Appearance170.material = Material171;

Shape169.appearance = Appearance170;

IndexedFaceSet IndexedFaceSet172 = createNode("IndexedFaceSet");
IndexedFaceSet172.coordIndex = new MFInt32(new int[0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1]);
IndexedFaceSet172.creaseAngle = 1.32;
Coordinate Coordinate173 = createNode("Coordinate");
Coordinate173.point = new MFVec3f(new float[0.0969,0.804,-0.0486,0.101,0.876,0.0336,0.17,0.894,-0.00778,0.17,0.891,-0.076,0.124,0.858,-0.129,0.076,0.843,-0.143,0.025,0.819,-0.0889,0.0507,0.847,0.0196,0.00349,0.826,-0.0287,0.0991,0.808,0.0406,0.161,0.814,-0.00187,0.165,0.808,-0.0755,0.122,0.788,-0.126,0.00993,0.762,-0.0937,0.00993,0.762,-0.0309,0.0491,0.777,0.0185,0.0755,0.766,-0.139,0.13,0.597,-0.00618,0.132,0.6,-0.0593,0.108,0.603,-0.105,0.0722,0.601,-0.118,0.0314,0.59,-0.0953,0.0239,0.566,-0.0427,0.047,0.566,0.0051,0.0878,0.581,0.0217,0.114,0.499,-0.0132,0.116,0.488,-0.061,0.103,0.567,-0.0991,0.0362,0.557,-0.0926,0.025,0.486,-0.047,0.0507,0.497,-0.00188,0.0862,0.513,0.018,0.0733,0.579,-0.108]);
IndexedFaceSet172.coord = Coordinate173;

Shape169.geometry = IndexedFaceSet172;

fieldValue168.children = new MFNode();

fieldValue168.children[0] = Shape169;

ProtoInstance166.fieldValue[1] = fieldValue168;

fieldValue165.children = new MFNode();

fieldValue165.children[0] = ProtoInstance166;

ProtoInstance ProtoInstance174 = createNode("ProtoInstance");
ProtoInstance174.name = "Joint";
ProtoInstance174.DEF = "hanim_l_knee";
fieldValue fieldValue175 = createNode("fieldValue");
fieldValue175.name = "name";
fieldValue175.value = "l_knee";
ProtoInstance174.fieldValue = new MFNode();

ProtoInstance174.fieldValue[0] = fieldValue175;

fieldValue fieldValue176 = createNode("fieldValue");
fieldValue176.name = "center";
fieldValue176.value = "0.0738 0.517 -0.0284";
ProtoInstance174.fieldValue[1] = fieldValue176;

fieldValue fieldValue177 = createNode("fieldValue");
fieldValue177.name = "children";
ProtoInstance ProtoInstance178 = createNode("ProtoInstance");
ProtoInstance178.name = "Segment";
ProtoInstance178.DEF = "hanim_l_calf";
fieldValue fieldValue179 = createNode("fieldValue");
fieldValue179.name = "name";
fieldValue179.value = "l_calf";
ProtoInstance178.fieldValue = new MFNode();

ProtoInstance178.fieldValue[0] = fieldValue179;

fieldValue fieldValue180 = createNode("fieldValue");
fieldValue180.name = "children";
Shape Shape181 = createNode("Shape");
Appearance Appearance182 = createNode("Appearance");
Material Material183 = createNode("Material");
Material183.USE = "Pants_Color";
Appearance182.material = Material183;

Shape181.appearance = Appearance182;

IndexedFaceSet IndexedFaceSet184 = createNode("IndexedFaceSet");
IndexedFaceSet184.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1]);
IndexedFaceSet184.creaseAngle = 1.57;
Coordinate Coordinate185 = createNode("Coordinate");
Coordinate185.point = new MFVec3f(new float[0.0883,0.532,-0.00349,0.0609,0.533,-0.00833,0.0814,0.55,-0.0395,0.0529,0.536,-0.0368,0.0577,0.544,-0.0577,0.0722,0.546,-0.0717,0.0975,0.54,-0.0647,0.105,0.539,-0.0438,0.104,0.539,-0.0223,0.0862,0.506,0.0158,0.101,0.51,-0.0798,0.0706,0.51,-0.101,0.0406,0.513,-0.0744,0.0368,0.51,-0.0357,0.0556,0.506,-0.000272,0.117,0.508,-0.0169,0.0878,0.361,-0.0126,0.123,0.363,-0.04,0.123,0.363,-0.0663,0.107,0.367,-0.107,0.0588,0.365,-0.122,0.0228,0.358,-0.0926,0.0239,0.358,-0.0475,0.0497,0.358,-0.0234,0.118,0.311,-0.0411,0.118,0.309,-0.0685,0.105,0.31,-0.108,0.0572,0.308,-0.123,0.0201,0.309,-0.0937,0.0191,0.311,-0.0508,0.0475,0.307,-0.0282,0.0883,0.309,-0.018,0.0959,0.124,-0.04,0.0905,0.12,-0.0647,0.0738,0.117,-0.0814,0.0373,0.121,-0.0636,0.0416,0.124,-0.0416,0.0744,0.13,-0.0212,0.0561,0.13,-0.0245,0.0529,0.121,-0.0873,0.0948,0.0897,-0.0368,0.0916,0.0779,-0.0604,0.0717,0.0854,-0.0765,0.0406,0.0918,-0.0626,0.0384,0.0881,-0.0363,0.054,0.0972,-0.0175,0.0765,0.11,-0.0169,0.0486,0.0999,-0.0835]);
IndexedFaceSet184.coord = Coordinate185;

Shape181.geometry = IndexedFaceSet184;

fieldValue180.children = new MFNode();

fieldValue180.children[0] = Shape181;

ProtoInstance178.fieldValue[1] = fieldValue180;

fieldValue177.children = new MFNode();

fieldValue177.children[0] = ProtoInstance178;

ProtoInstance ProtoInstance186 = createNode("ProtoInstance");
ProtoInstance186.name = "Joint";
ProtoInstance186.DEF = "hanim_l_ankle";
fieldValue fieldValue187 = createNode("fieldValue");
fieldValue187.name = "name";
fieldValue187.value = "l_ankle";
ProtoInstance186.fieldValue = new MFNode();

ProtoInstance186.fieldValue[0] = fieldValue187;

fieldValue fieldValue188 = createNode("fieldValue");
fieldValue188.name = "center";
fieldValue188.value = "0.0645 0.0719 -0.048";
ProtoInstance186.fieldValue[1] = fieldValue188;

fieldValue fieldValue189 = createNode("fieldValue");
fieldValue189.name = "children";
ProtoInstance ProtoInstance190 = createNode("ProtoInstance");
ProtoInstance190.name = "Segment";
ProtoInstance190.DEF = "hanim_l_hindfoot";
fieldValue fieldValue191 = createNode("fieldValue");
fieldValue191.name = "name";
fieldValue191.value = "l_hindfoot";
ProtoInstance190.fieldValue = new MFNode();

ProtoInstance190.fieldValue[0] = fieldValue191;

fieldValue fieldValue192 = createNode("fieldValue");
fieldValue192.name = "children";
Shape Shape193 = createNode("Shape");
Appearance Appearance194 = createNode("Appearance");
Material Material195 = createNode("Material");
Material195.DEF = "Shoe_Color";
Material195.ambientIntensity = 0.25;
Appearance194.material = Material195;

Shape193.appearance = Appearance194;

IndexedFaceSet IndexedFaceSet196 = createNode("IndexedFaceSet");
IndexedFaceSet196.coordIndex = new MFInt32(new int[2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1]);
IndexedFaceSet196.creaseAngle = 1.57;
Coordinate Coordinate197 = createNode("Coordinate");
Coordinate197.point = new MFVec3f(new float[0.0529,0,-0.0923,0.0863,0,-0.0862,0.0727,0,-0.0994,0.0863,0.0219,-0.0862,0.0727,0.0219,-0.0994,0.1,0,-0.0594,0.1,0.0219,-0.0594,0.113,0,0.0645,0.113,0.0219,0.0645,0.112,0,0.117,0.112,0.0156,0.117,0.0701,0,0.146,0.0701,0.0156,0.146,0.0468,0,0.153,0.0468,0.0156,0.153,0.0215,0,0.146,0.0215,0.0156,0.146,0.0165,0,0.125,0.0165,0.0156,0.125,0.0211,0,0.0377,0.0211,0.0219,0.0377,0.0393,0,-0.0129,0.0393,0.0219,-0.0129,0.0433,0,-0.0534,0.0433,0.0219,-0.0534,0.0529,0.0219,-0.0923,0.0305,0.0253,0.0938,0.0505,0.0253,0.099,0.0854,0.0253,0.0834,0.102,0.0253,0.0707,0.0568,0.0573,-0.0918,0.0492,0.0573,-0.0497,0.0435,0.0573,-0.0225,0.0442,0.0573,0.0235,0.0623,0.0573,0.0366,0.0911,0.0573,0.0159,0.0962,0.0573,-0.0121,0.0911,0.0573,-0.0482,0.0758,0.0573,-0.0899,0.0676,0.0573,-0.0962,0.0578,0.0953,-0.0896,0.0489,0.0953,-0.0757,0.0447,0.0953,-0.0432,0.0451,0.0953,-0.0128,0.0624,0.0953,-0.00466,0.0857,0.0953,-0.0134,0.0953,0.0953,-0.038,0.0843,0.0953,-0.0803,0.0761,0.0953,-0.0889,0.0682,0.0953,-0.0929,0.0675,0.13,-0.0608]);
IndexedFaceSet196.coord = Coordinate197;

Shape193.geometry = IndexedFaceSet196;

fieldValue192.children = new MFNode();

fieldValue192.children[0] = Shape193;

ProtoInstance190.fieldValue[1] = fieldValue192;

fieldValue189.children = new MFNode();

fieldValue189.children[0] = ProtoInstance190;

ProtoInstance186.fieldValue[2] = fieldValue189;

fieldValue177.children[1] = ProtoInstance186;

ProtoInstance174.fieldValue[2] = fieldValue177;

fieldValue165.children[1] = ProtoInstance174;

ProtoInstance162.fieldValue[2] = fieldValue165;

fieldValue153.children[1] = ProtoInstance162;

ProtoInstance ProtoInstance198 = createNode("ProtoInstance");
ProtoInstance198.name = "Joint";
ProtoInstance198.DEF = "hanim_r_hip";
fieldValue fieldValue199 = createNode("fieldValue");
fieldValue199.name = "name";
fieldValue199.value = "r_hip";
ProtoInstance198.fieldValue = new MFNode();

ProtoInstance198.fieldValue[0] = fieldValue199;

fieldValue fieldValue200 = createNode("fieldValue");
fieldValue200.name = "center";
fieldValue200.value = "-0.11 0.892362 -0.0732533";
ProtoInstance198.fieldValue[1] = fieldValue200;

fieldValue fieldValue201 = createNode("fieldValue");
fieldValue201.name = "children";
ProtoInstance ProtoInstance202 = createNode("ProtoInstance");
ProtoInstance202.name = "Segment";
ProtoInstance202.DEF = "hanim_r_thigh";
fieldValue fieldValue203 = createNode("fieldValue");
fieldValue203.name = "name";
fieldValue203.value = "r_thigh";
ProtoInstance202.fieldValue = new MFNode();

ProtoInstance202.fieldValue[0] = fieldValue203;

fieldValue fieldValue204 = createNode("fieldValue");
fieldValue204.name = "children";
Shape Shape205 = createNode("Shape");
Appearance Appearance206 = createNode("Appearance");
Material Material207 = createNode("Material");
Material207.USE = "Pants_Color";
Appearance206.material = Material207;

Shape205.appearance = Appearance206;

IndexedFaceSet IndexedFaceSet208 = createNode("IndexedFaceSet");
IndexedFaceSet208.coordIndex = new MFInt32(new int[5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1]);
IndexedFaceSet208.creaseAngle = 1.61;
Coordinate Coordinate209 = createNode("Coordinate");
Coordinate209.point = new MFVec3f(new float[-0.0969,0.804,-0.0486,-0.101,0.876,0.0336,-0.17,0.894,-0.00778,-0.17,0.891,-0.076,-0.124,0.858,-0.129,-0.076,0.843,-0.143,-0.025,0.819,-0.0889,-0.0507,0.847,0.0196,-0.00349,0.826,-0.0287,-0.0991,0.808,0.0406,-0.161,0.814,-0.00187,-0.165,0.808,-0.0755,-0.122,0.788,-0.126,-0.00993,0.762,-0.0937,-0.00993,0.762,-0.0309,-0.0491,0.777,0.0185,-0.0755,0.766,-0.139,-0.13,0.597,-0.00618,-0.132,0.6,-0.0593,-0.108,0.603,-0.105,-0.0722,0.601,-0.118,-0.0314,0.59,-0.0953,-0.0239,0.566,-0.0427,-0.047,0.566,0.0051,-0.0878,0.581,0.0217,-0.114,0.499,-0.0132,-0.116,0.488,-0.061,-0.103,0.567,-0.0991,-0.0362,0.557,-0.0926,-0.025,0.486,-0.047,-0.0507,0.497,-0.00188,-0.0862,0.513,0.018]);
IndexedFaceSet208.coord = Coordinate209;

Shape205.geometry = IndexedFaceSet208;

fieldValue204.children = new MFNode();

fieldValue204.children[0] = Shape205;

ProtoInstance202.fieldValue[1] = fieldValue204;

fieldValue201.children = new MFNode();

fieldValue201.children[0] = ProtoInstance202;

ProtoInstance ProtoInstance210 = createNode("ProtoInstance");
ProtoInstance210.name = "Joint";
ProtoInstance210.DEF = "hanim_r_knee";
fieldValue fieldValue211 = createNode("fieldValue");
fieldValue211.name = "name";
fieldValue211.value = "r_knee";
ProtoInstance210.fieldValue = new MFNode();

ProtoInstance210.fieldValue[0] = fieldValue211;

fieldValue fieldValue212 = createNode("fieldValue");
fieldValue212.name = "center";
fieldValue212.value = "-0.0699 0.51 -0.0166";
ProtoInstance210.fieldValue[1] = fieldValue212;

fieldValue fieldValue213 = createNode("fieldValue");
fieldValue213.name = "children";
ProtoInstance ProtoInstance214 = createNode("ProtoInstance");
ProtoInstance214.name = "Segment";
ProtoInstance214.DEF = "hanim_r_calf";
fieldValue fieldValue215 = createNode("fieldValue");
fieldValue215.name = "name";
fieldValue215.value = "r_calf";
ProtoInstance214.fieldValue = new MFNode();

ProtoInstance214.fieldValue[0] = fieldValue215;

fieldValue fieldValue216 = createNode("fieldValue");
fieldValue216.name = "children";
Shape Shape217 = createNode("Shape");
Appearance Appearance218 = createNode("Appearance");
Material Material219 = createNode("Material");
Material219.USE = "Pants_Color";
Appearance218.material = Material219;

Shape217.appearance = Appearance218;

IndexedFaceSet IndexedFaceSet220 = createNode("IndexedFaceSet");
IndexedFaceSet220.coordIndex = new MFInt32(new int[14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1]);
IndexedFaceSet220.creaseAngle = 1.57;
Coordinate Coordinate221 = createNode("Coordinate");
Coordinate221.point = new MFVec3f(new float[-0.123,0.363,-0.0663,-0.123,0.363,-0.04,-0.118,0.309,-0.0685,-0.118,0.311,-0.0411,-0.117,0.508,-0.0169,-0.107,0.367,-0.107,-0.105,0.539,-0.0438,-0.105,0.31,-0.108,-0.104,0.539,-0.0223,-0.101,0.51,-0.0798,-0.0975,0.54,-0.0647,-0.0948,0.0897,-0.0368,-0.0916,0.0779,-0.0604,-0.0905,0.12,-0.0647,-0.0883,0.532,-0.00349,-0.0883,0.309,-0.018,-0.0878,0.361,-0.0126,-0.0862,0.506,0.0158,-0.0814,0.55,-0.0395,-0.0765,0.11,-0.0169,-0.0744,0.13,-0.0212,-0.0738,0.117,-0.0814,-0.0722,0.546,-0.0717,-0.0717,0.0854,-0.0765,-0.0706,0.51,-0.101,-0.0609,0.533,-0.00833,-0.0588,0.365,-0.122,-0.0577,0.544,-0.0577,-0.0572,0.308,-0.123,-0.0561,0.13,-0.0245,-0.0556,0.506,-0.000272,-0.054,0.0972,-0.0175,-0.0529,0.536,-0.0368,-0.0529,0.121,-0.0873,-0.0497,0.358,-0.0234,-0.0486,0.0999,-0.0835,-0.0475,0.307,-0.0282,-0.0416,0.124,-0.0416,-0.0406,0.0918,-0.0626,-0.0406,0.513,-0.0744,-0.0384,0.0881,-0.0363,-0.0373,0.121,-0.0636,-0.0368,0.51,-0.0357,-0.0239,0.358,-0.0475,-0.0228,0.358,-0.0926,-0.0201,0.309,-0.0937,-0.0191,0.311,-0.0508,-0.0985,0.125,-0.0375]);
IndexedFaceSet220.coord = Coordinate221;

Shape217.geometry = IndexedFaceSet220;

fieldValue216.children = new MFNode();

fieldValue216.children[0] = Shape217;

ProtoInstance214.fieldValue[1] = fieldValue216;

fieldValue213.children = new MFNode();

fieldValue213.children[0] = ProtoInstance214;

ProtoInstance ProtoInstance222 = createNode("ProtoInstance");
ProtoInstance222.name = "Joint";
ProtoInstance222.DEF = "hanim_r_ankle";
fieldValue fieldValue223 = createNode("fieldValue");
fieldValue223.name = "name";
fieldValue223.value = "r_ankle";
ProtoInstance222.fieldValue = new MFNode();

ProtoInstance222.fieldValue[0] = fieldValue223;

fieldValue fieldValue224 = createNode("fieldValue");
fieldValue224.name = "center";
fieldValue224.value = "-0.064 0.0753 -0.0412";
ProtoInstance222.fieldValue[1] = fieldValue224;

fieldValue fieldValue225 = createNode("fieldValue");
fieldValue225.name = "children";
ProtoInstance ProtoInstance226 = createNode("ProtoInstance");
ProtoInstance226.name = "Segment";
ProtoInstance226.DEF = "hanim_r_hindfoot";
fieldValue fieldValue227 = createNode("fieldValue");
fieldValue227.name = "name";
fieldValue227.value = "r_hindfoot";
ProtoInstance226.fieldValue = new MFNode();

ProtoInstance226.fieldValue[0] = fieldValue227;

fieldValue fieldValue228 = createNode("fieldValue");
fieldValue228.name = "children";
Shape Shape229 = createNode("Shape");
Appearance Appearance230 = createNode("Appearance");
Material Material231 = createNode("Material");
Material231.USE = "Shoe_Color";
Appearance230.material = Material231;

Shape229.appearance = Appearance230;

IndexedFaceSet IndexedFaceSet232 = createNode("IndexedFaceSet");
IndexedFaceSet232.coordIndex = new MFInt32(new int[6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1]);
IndexedFaceSet232.creaseAngle = 1.57;
Coordinate Coordinate233 = createNode("Coordinate");
Coordinate233.point = new MFVec3f(new float[-0.0727,0,-0.0994,-0.1,0,-0.0594,-0.0701,0,0.146,-0.0468,0,0.153,-0.0215,0,0.146,-0.0433,0,-0.0534,-0.0529,0,-0.0923,-0.0727,0.0219,-0.0994,-0.0863,0.0219,-0.0862,-0.1,0.0219,-0.0594,-0.108,0.0219,-0.00479,-0.112,0.0156,0.117,-0.0701,0.0156,0.146,-0.0468,0.0156,0.153,-0.0215,0.0156,0.146,-0.0165,0.017,0.0777,-0.0433,0.0219,-0.0534,-0.0529,0.0219,-0.0923,-0.0445,0.0273,-0.0189,-0.0265,0.0253,0.0549,-0.0305,0.0253,0.0938,-0.069,0.0253,0.0938,-0.102,0.0253,0.0707,-0.0568,0.0573,-0.0918,-0.0492,0.0573,-0.0497,-0.0424,0.0573,-0.00142,-0.0478,0.0573,0.0341,-0.0623,0.0573,0.0366,-0.0864,0.0573,0.0245,-0.0962,0.0573,-0.0121,-0.0845,0.0573,-0.0764,-0.0758,0.0573,-0.0899,-0.0676,0.0573,-0.0962,-0.0578,0.0953,-0.0896,-0.0489,0.0953,-0.0757,-0.0459,0.0953,-0.0615,-0.0435,0.0953,-0.0292,-0.0485,0.0953,-0.00582,-0.0624,0.0953,-0.00466,-0.0857,0.0953,-0.0134,-0.0953,0.0953,-0.038,-0.0843,0.0953,-0.0803,-0.0761,0.0953,-0.0889,-0.0682,0.0953,-0.0929,-0.0675,0.13,-0.0608,-0.0165,0,0.125,-0.112,0,0.117,-0.0165,0,0.0777,-0.0393,0,-0.0129,-0.108,0,-0.00479,-0.0863,0,-0.0862]);
IndexedFaceSet232.coord = Coordinate233;

Shape229.geometry = IndexedFaceSet232;

fieldValue228.children = new MFNode();

fieldValue228.children[0] = Shape229;

ProtoInstance226.fieldValue[1] = fieldValue228;

fieldValue225.children = new MFNode();

fieldValue225.children[0] = ProtoInstance226;

ProtoInstance222.fieldValue[2] = fieldValue225;

fieldValue213.children[1] = ProtoInstance222;

ProtoInstance210.fieldValue[2] = fieldValue213;

fieldValue201.children[1] = ProtoInstance210;

ProtoInstance198.fieldValue[2] = fieldValue201;

fieldValue153.children[2] = ProtoInstance198;

ProtoInstance150.fieldValue[2] = fieldValue153;

fieldValue149.children = new MFNode();

fieldValue149.children[0] = ProtoInstance150;

ProtoInstance ProtoInstance234 = createNode("ProtoInstance");
ProtoInstance234.name = "Joint";
ProtoInstance234.DEF = "hanim_vl1";
fieldValue fieldValue235 = createNode("fieldValue");
fieldValue235.name = "name";
fieldValue235.value = "vl1";
ProtoInstance234.fieldValue = new MFNode();

ProtoInstance234.fieldValue[0] = fieldValue235;

fieldValue fieldValue236 = createNode("fieldValue");
fieldValue236.name = "center";
fieldValue236.value = "-0.00405 1.07 -0.0275";
ProtoInstance234.fieldValue[1] = fieldValue236;

fieldValue fieldValue237 = createNode("fieldValue");
fieldValue237.name = "children";
ProtoInstance ProtoInstance238 = createNode("ProtoInstance");
ProtoInstance238.name = "Segment";
ProtoInstance238.DEF = "hanim_c7";
fieldValue fieldValue239 = createNode("fieldValue");
fieldValue239.name = "name";
fieldValue239.value = "l1";
ProtoInstance238.fieldValue = new MFNode();

ProtoInstance238.fieldValue[0] = fieldValue239;

fieldValue fieldValue240 = createNode("fieldValue");
fieldValue240.name = "children";
Shape Shape241 = createNode("Shape");
Appearance Appearance242 = createNode("Appearance");
Material Material243 = createNode("Material");
Material243.DEF = "Shirt_Color";
Material243.ambientIntensity = 0.25;
Material243.diffuseColor = new SFColor(new float[0.6,0.0745,0.1137]);
Appearance242.material = Material243;

ImageTexture ImageTexture244 = createNode("ImageTexture");
ImageTexture244.DEF = "small_logo_Tex";
ImageTexture244.url = new MFString(new java.lang.String["small_logo.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/small_logo.gif"]);
Appearance242.texture = ImageTexture244;

Shape241.appearance = Appearance242;

IndexedFaceSet IndexedFaceSet245 = createNode("IndexedFaceSet");
IndexedFaceSet245.coordIndex = new MFInt32(new int[0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1]);
IndexedFaceSet245.creaseAngle = 1.59;
Coordinate Coordinate246 = createNode("Coordinate");
Coordinate246.point = new MFVec3f(new float[0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168]);
IndexedFaceSet245.coord = Coordinate246;

TextureCoordinate TextureCoordinate247 = createNode("TextureCoordinate");
TextureCoordinate247.point = new MFVec2f(new float[0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
IndexedFaceSet245.texCoord = TextureCoordinate247;

Shape241.geometry = IndexedFaceSet245;

fieldValue240.children = new MFNode();

fieldValue240.children[0] = Shape241;

ProtoInstance238.fieldValue[1] = fieldValue240;

fieldValue237.children = new MFNode();

fieldValue237.children[0] = ProtoInstance238;

ProtoInstance ProtoInstance248 = createNode("ProtoInstance");
ProtoInstance248.name = "Joint";
ProtoInstance248.DEF = "hanim_l_shoulder";
fieldValue fieldValue249 = createNode("fieldValue");
fieldValue249.name = "name";
fieldValue249.value = "l_shoulder";
ProtoInstance248.fieldValue = new MFNode();

ProtoInstance248.fieldValue[0] = fieldValue249;

fieldValue fieldValue250 = createNode("fieldValue");
fieldValue250.name = "center";
fieldValue250.value = "0.167 1.36 -0.0518";
ProtoInstance248.fieldValue[1] = fieldValue250;

fieldValue fieldValue251 = createNode("fieldValue");
fieldValue251.name = "children";
ProtoInstance ProtoInstance252 = createNode("ProtoInstance");
ProtoInstance252.name = "Segment";
ProtoInstance252.DEF = "hanim_l_upperarm";
fieldValue fieldValue253 = createNode("fieldValue");
fieldValue253.name = "name";
fieldValue253.value = "l_upperarm";
ProtoInstance252.fieldValue = new MFNode();

ProtoInstance252.fieldValue[0] = fieldValue253;

fieldValue fieldValue254 = createNode("fieldValue");
fieldValue254.name = "children";
Transform Transform255 = createNode("Transform");
Transform255.DEF = "l_upperarm_adjust";
Transform255.center = new SFVec3f(new float[0.182,1.22,-0.047]);
Transform255.rotation = new SFRotation(new float[1,0,0,0.119]);
Transform255.translation = new SFVec3f(new float[0,0.0004203,-0.01665]);
Shape Shape256 = createNode("Shape");
Appearance Appearance257 = createNode("Appearance");
Material Material258 = createNode("Material");
Material258.DEF = "Skin_Color";
Material258.ambientIntensity = 0.25;
Material258.diffuseColor = new SFColor(new float[0.749,0.601,0.462]);
Appearance257.material = Material258;

Shape256.appearance = Appearance257;

IndexedFaceSet IndexedFaceSet259 = createNode("IndexedFaceSet");
IndexedFaceSet259.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1]);
IndexedFaceSet259.creaseAngle = 1.65;
Coordinate Coordinate260 = createNode("Coordinate");
Coordinate260.point = new MFVec3f(new float[0.174,1.37,-0.0625,0.185,1.38,-0.0395,0.156,1.39,-0.0464,0.174,1.37,-0.0158,0.154,1.37,-0.0185,0.157,1.38,-0.0733,0.182,1.33,-0.0728,0.151,1.33,-0.0937,0.15,1.34,-0.000787,0.185,1.33,-0.00025,0.201,1.33,-0.0411,0.189,1.26,-0.0808,0.155,1.26,-0.0867,0.151,1.26,-0.000789,0.19,1.26,-0.00401,0.209,1.26,-0.0427,0.141,1.26,-0.0421,0.203,1.08,-0.0744,0.162,1.05,-0.0561,0.169,1.08,-0.00885,0.208,1.07,-0.00133,0.221,1.08,-0.0352]);
IndexedFaceSet259.coord = Coordinate260;

Shape256.geometry = IndexedFaceSet259;

Transform255.children = new MFNode();

Transform255.children[0] = Shape256;

fieldValue254.children = new MFNode();

fieldValue254.children[0] = Transform255;

ProtoInstance252.fieldValue[1] = fieldValue254;

fieldValue251.children = new MFNode();

fieldValue251.children[0] = ProtoInstance252;

ProtoInstance ProtoInstance261 = createNode("ProtoInstance");
ProtoInstance261.name = "Joint";
ProtoInstance261.DEF = "hanim_l_elbow";
fieldValue fieldValue262 = createNode("fieldValue");
fieldValue262.name = "name";
fieldValue262.value = "l_elbow";
ProtoInstance261.fieldValue = new MFNode();

ProtoInstance261.fieldValue[0] = fieldValue262;

fieldValue fieldValue263 = createNode("fieldValue");
fieldValue263.name = "center";
fieldValue263.value = "0.196 1.07 -0.0518";
ProtoInstance261.fieldValue[1] = fieldValue263;

fieldValue fieldValue264 = createNode("fieldValue");
fieldValue264.name = "children";
ProtoInstance ProtoInstance265 = createNode("ProtoInstance");
ProtoInstance265.name = "Segment";
ProtoInstance265.DEF = "hanim_l_forearm";
fieldValue fieldValue266 = createNode("fieldValue");
fieldValue266.name = "name";
fieldValue266.value = "l_forearm";
ProtoInstance265.fieldValue = new MFNode();

ProtoInstance265.fieldValue[0] = fieldValue266;

fieldValue fieldValue267 = createNode("fieldValue");
fieldValue267.name = "children";
Transform Transform268 = createNode("Transform");
Transform268.DEF = "l_forearm_adjust";
Transform268.center = new SFVec3f(new float[0.198,0.961,-0.0405]);
Transform268.rotation = new SFRotation(new float[-1,0,0,0.1]);
Transform268.translation = new SFVec3f(new float[0,0.003724,-0.0236]);
Shape Shape269 = createNode("Shape");
Appearance Appearance270 = createNode("Appearance");
Material Material271 = createNode("Material");
Material271.USE = "Skin_Color";
Appearance270.material = Material271;

Shape269.appearance = Appearance270;

IndexedFaceSet IndexedFaceSet272 = createNode("IndexedFaceSet");
IndexedFaceSet272.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1]);
IndexedFaceSet272.creaseAngle = 1.75;
Coordinate Coordinate273 = createNode("Coordinate");
Coordinate273.point = new MFVec3f(new float[0.177,1.09,-0.0609,0.202,1.1,-0.0566,0.189,1.1,-0.0395,0.213,1.1,-0.025,0.203,1.1,-0.0158,0.182,1.09,-0.00563,0.167,1.09,-0.0325,0.176,1.08,-0.0781,0.16,1.06,-0.0373,0.214,1.07,-0.00402,0.228,1.07,-0.0319,0.208,1.08,-0.0765,0.179,1.07,-0.00294,0.21,0.818,-0.0615,0.201,0.82,-0.0405,0.205,0.819,-0.00832,0.224,0.818,-0.00778,0.237,0.82,-0.0282,0.231,0.819,-0.0609]);
IndexedFaceSet272.coord = Coordinate273;

Shape269.geometry = IndexedFaceSet272;

Transform268.children = new MFNode();

Transform268.children[0] = Shape269;

fieldValue267.children = new MFNode();

fieldValue267.children[0] = Transform268;

ProtoInstance265.fieldValue[1] = fieldValue267;

fieldValue264.children = new MFNode();

fieldValue264.children[0] = ProtoInstance265;

ProtoInstance ProtoInstance274 = createNode("ProtoInstance");
ProtoInstance274.name = "Joint";
ProtoInstance274.DEF = "hanim_l_wrist";
fieldValue fieldValue275 = createNode("fieldValue");
fieldValue275.name = "name";
fieldValue275.value = "l_wrist";
ProtoInstance274.fieldValue = new MFNode();

ProtoInstance274.fieldValue[0] = fieldValue275;

fieldValue fieldValue276 = createNode("fieldValue");
fieldValue276.name = "center";
fieldValue276.value = "0.213 0.811 -0.0338";
ProtoInstance274.fieldValue[1] = fieldValue276;

fieldValue fieldValue277 = createNode("fieldValue");
fieldValue277.name = "children";
ProtoInstance ProtoInstance278 = createNode("ProtoInstance");
ProtoInstance278.name = "Segment";
ProtoInstance278.DEF = "hanim_l_hand";
fieldValue fieldValue279 = createNode("fieldValue");
fieldValue279.name = "name";
fieldValue279.value = "l_hand";
ProtoInstance278.fieldValue = new MFNode();

ProtoInstance278.fieldValue[0] = fieldValue279;

fieldValue fieldValue280 = createNode("fieldValue");
fieldValue280.name = "children";
Transform Transform281 = createNode("Transform");
Transform281.DEF = "l_hand_adjust";
Transform281.center = new SFVec3f(new float[0.213,0.811,-0.0338]);
Transform281.rotation = new SFRotation(new float[-0.06361,-0.9967,0.04988,1.333]);
Transform281.translation = new SFVec3f(new float[0,0.005142,-0.008662]);
Shape Shape282 = createNode("Shape");
Appearance Appearance283 = createNode("Appearance");
Material Material284 = createNode("Material");
Material284.USE = "Skin_Color";
Appearance283.material = Material284;

Shape282.appearance = Appearance283;

IndexedFaceSet IndexedFaceSet285 = createNode("IndexedFaceSet");
IndexedFaceSet285.coordIndex = new MFInt32(new int[2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1]);
IndexedFaceSet285.creaseAngle = 1.48;
Coordinate Coordinate286 = createNode("Coordinate");
Coordinate286.point = new MFVec3f(new float[0.211,0.828,-0.0434,0.194,0.81,-0.0445,0.237,0.82,-0.0425,0.236,0.82,-0.0237,0.194,0.81,-0.0254,0.21,0.828,-0.0247,0.252,0.801,-0.0424,0.252,0.801,-0.0231,0.269,0.765,-0.0426,0.268,0.765,-0.0225,0.273,0.732,-0.0395,0.272,0.732,-0.0223,0.27,0.704,-0.0342,0.27,0.704,-0.0224,0.262,0.703,-0.0345,0.261,0.703,-0.0227,0.256,0.717,-0.0389,0.256,0.717,-0.023,0.255,0.738,-0.0408,0.255,0.738,-0.023,0.251,0.734,-0.0406,0.251,0.734,-0.0232,0.251,0.692,-0.0232,0.248,0.657,-0.0233,0.24,0.645,-0.0236,0.226,0.637,-0.0241,0.213,0.639,-0.0246,0.197,0.652,-0.0253,0.188,0.669,-0.0256,0.184,0.697,-0.0258,0.183,0.73,-0.0258,0.187,0.77,-0.0257,0.244,0.696,-0.0375,0.244,0.692,-0.0372,0.242,0.661,-0.0345,0.241,0.658,-0.0343,0.241,0.656,-0.0341,0.231,0.646,-0.0336,0.206,0.65,-0.0349,0.218,0.644,-0.034,0.205,0.652,-0.0352,0.198,0.667,-0.0367,0.195,0.691,-0.039,0.194,0.696,-0.0395,0.193,0.725,-0.042,0.193,0.731,-0.0425,0.197,0.765,-0.0449,0.197,0.77,-0.0453]);
IndexedFaceSet285.coord = Coordinate286;

Shape282.geometry = IndexedFaceSet285;

Transform281.children = new MFNode();

Transform281.children[0] = Shape282;

fieldValue280.children = new MFNode();

fieldValue280.children[0] = Transform281;

ProtoInstance278.fieldValue[1] = fieldValue280;

fieldValue277.children = new MFNode();

fieldValue277.children[0] = ProtoInstance278;

ProtoInstance274.fieldValue[2] = fieldValue277;

fieldValue264.children[1] = ProtoInstance274;

ProtoInstance261.fieldValue[2] = fieldValue264;

fieldValue251.children[1] = ProtoInstance261;

ProtoInstance248.fieldValue[2] = fieldValue251;

fieldValue237.children[1] = ProtoInstance248;

ProtoInstance ProtoInstance287 = createNode("ProtoInstance");
ProtoInstance287.name = "Joint";
ProtoInstance287.DEF = "hanim_r_shoulder";
fieldValue fieldValue288 = createNode("fieldValue");
fieldValue288.name = "name";
fieldValue288.value = "r_shoulder";
ProtoInstance287.fieldValue = new MFNode();

ProtoInstance287.fieldValue[0] = fieldValue288;

fieldValue fieldValue289 = createNode("fieldValue");
fieldValue289.name = "center";
fieldValue289.value = "-0.167 1.36 -0.0458";
ProtoInstance287.fieldValue[1] = fieldValue289;

fieldValue fieldValue290 = createNode("fieldValue");
fieldValue290.name = "children";
ProtoInstance ProtoInstance291 = createNode("ProtoInstance");
ProtoInstance291.name = "Segment";
ProtoInstance291.DEF = "hanim_r_upperarm";
fieldValue fieldValue292 = createNode("fieldValue");
fieldValue292.name = "name";
fieldValue292.value = "r_upperarm";
ProtoInstance291.fieldValue = new MFNode();

ProtoInstance291.fieldValue[0] = fieldValue292;

fieldValue fieldValue293 = createNode("fieldValue");
fieldValue293.name = "children";
Transform Transform294 = createNode("Transform");
Transform294.DEF = "r_upperarm_adjust";
Transform294.center = new SFVec3f(new float[-0.182,1.22,-0.047]);
Transform294.rotation = new SFRotation(new float[1,0,0,0.0836]);
Transform294.translation = new SFVec3f(new float[0,0.000589,-0.01169]);
Shape Shape295 = createNode("Shape");
Appearance Appearance296 = createNode("Appearance");
Material Material297 = createNode("Material");
Material297.USE = "Skin_Color";
Appearance296.material = Material297;

Shape295.appearance = Appearance296;

IndexedFaceSet IndexedFaceSet298 = createNode("IndexedFaceSet");
IndexedFaceSet298.coordIndex = new MFInt32(new int[14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1]);
IndexedFaceSet298.creaseAngle = 1.53;
Coordinate Coordinate299 = createNode("Coordinate");
Coordinate299.point = new MFVec3f(new float[-0.221,1.08,-0.0352,-0.214,1.14,-0.0405,-0.209,1.26,-0.0427,-0.208,1.07,-0.00133,-0.203,1.08,-0.0744,-0.201,1.33,-0.0411,-0.198,1.14,-0.0024,-0.198,1.13,-0.076,-0.19,1.26,-0.00401,-0.189,1.26,-0.0808,-0.185,1.38,-0.0395,-0.185,1.33,-0.00025,-0.182,1.33,-0.0728,-0.174,1.37,-0.0158,-0.174,1.37,-0.0625,-0.169,1.08,-0.00885,-0.167,1.13,-0.0744,-0.162,1.05,-0.0561,-0.16,1.13,-0.000793,-0.157,1.38,-0.0733,-0.156,1.39,-0.0464,-0.155,1.26,-0.0867,-0.154,1.37,-0.0185,-0.151,1.26,-0.000789,-0.151,1.33,-0.0937,-0.15,1.34,-0.000787,-0.15,1.13,-0.0411,-0.141,1.26,-0.0421]);
IndexedFaceSet298.coord = Coordinate299;

Shape295.geometry = IndexedFaceSet298;

Transform294.children = new MFNode();

Transform294.children[0] = Shape295;

fieldValue293.children = new MFNode();

fieldValue293.children[0] = Transform294;

ProtoInstance291.fieldValue[1] = fieldValue293;

fieldValue290.children = new MFNode();

fieldValue290.children[0] = ProtoInstance291;

ProtoInstance ProtoInstance300 = createNode("ProtoInstance");
ProtoInstance300.name = "Joint";
ProtoInstance300.DEF = "hanim_r_elbow";
fieldValue fieldValue301 = createNode("fieldValue");
fieldValue301.name = "name";
fieldValue301.value = "r_elbow";
ProtoInstance300.fieldValue = new MFNode();

ProtoInstance300.fieldValue[0] = fieldValue301;

fieldValue fieldValue302 = createNode("fieldValue");
fieldValue302.name = "center";
fieldValue302.value = "-0.192 1.07 -0.0498";
ProtoInstance300.fieldValue[1] = fieldValue302;

fieldValue fieldValue303 = createNode("fieldValue");
fieldValue303.name = "children";
ProtoInstance ProtoInstance304 = createNode("ProtoInstance");
ProtoInstance304.name = "Segment";
ProtoInstance304.DEF = "hanim_r_forearm";
fieldValue fieldValue305 = createNode("fieldValue");
fieldValue305.name = "name";
fieldValue305.value = "r_forearm";
ProtoInstance304.fieldValue = new MFNode();

ProtoInstance304.fieldValue[0] = fieldValue305;

fieldValue fieldValue306 = createNode("fieldValue");
fieldValue306.name = "children";
Transform Transform307 = createNode("Transform");
Transform307.DEF = "r_forearm_adjust";
Transform307.center = new SFVec3f(new float[-0.198,0.961,-0.0397]);
Transform307.rotation = new SFRotation(new float[-1,0,0,0.1254]);
Transform307.translation = new SFVec3f(new float[0,0.003466,-0.01065]);
Shape Shape308 = createNode("Shape");
Appearance Appearance309 = createNode("Appearance");
Material Material310 = createNode("Material");
Material310.USE = "Skin_Color";
Appearance309.material = Material310;

Shape308.appearance = Appearance309;

IndexedFaceSet IndexedFaceSet311 = createNode("IndexedFaceSet");
IndexedFaceSet311.coordIndex = new MFInt32(new int[20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1]);
IndexedFaceSet311.creaseAngle = 1.73;
Coordinate Coordinate312 = createNode("Coordinate");
Coordinate312.point = new MFVec3f(new float[-0.237,0.82,-0.0282,-0.235,1.02,-0.033,-0.231,0.819,-0.0609,-0.228,1.07,-0.0319,-0.224,0.818,-0.00778,-0.221,1.01,-0.0744,-0.218,1.01,-0.00133,-0.214,1.07,-0.00402,-0.213,1.1,-0.025,-0.21,0.818,-0.0615,-0.208,1.08,-0.0765,-0.205,0.819,-0.00832,-0.203,1.1,-0.0158,-0.202,1.1,-0.0566,-0.201,0.82,-0.0405,-0.189,1.1,-0.0395,-0.183,1.01,-0.00831,-0.183,1.01,-0.0781,-0.182,1.09,-0.00563,-0.179,1.07,-0.00294,-0.177,1.09,-0.0609,-0.176,1.08,-0.0781,-0.167,1.09,-0.0325,-0.166,1,-0.0405,-0.16,1.06,-0.0373]);
IndexedFaceSet311.coord = Coordinate312;

Shape308.geometry = IndexedFaceSet311;

Transform307.children = new MFNode();

Transform307.children[0] = Shape308;

fieldValue306.children = new MFNode();

fieldValue306.children[0] = Transform307;

ProtoInstance304.fieldValue[1] = fieldValue306;

fieldValue303.children = new MFNode();

fieldValue303.children[0] = ProtoInstance304;

ProtoInstance ProtoInstance313 = createNode("ProtoInstance");
ProtoInstance313.name = "Joint";
ProtoInstance313.DEF = "hanim_r_wrist";
fieldValue fieldValue314 = createNode("fieldValue");
fieldValue314.name = "name";
fieldValue314.value = "r_wrist";
ProtoInstance313.fieldValue = new MFNode();

ProtoInstance313.fieldValue[0] = fieldValue314;

fieldValue fieldValue315 = createNode("fieldValue");
fieldValue315.name = "center";
fieldValue315.value = "-0.217 0.811 -0.0338";
ProtoInstance313.fieldValue[1] = fieldValue315;

fieldValue fieldValue316 = createNode("fieldValue");
fieldValue316.name = "children";
ProtoInstance ProtoInstance317 = createNode("ProtoInstance");
ProtoInstance317.name = "Segment";
ProtoInstance317.DEF = "hanim_r_hand";
fieldValue fieldValue318 = createNode("fieldValue");
fieldValue318.name = "name";
fieldValue318.value = "r_hand";
ProtoInstance317.fieldValue = new MFNode();

ProtoInstance317.fieldValue[0] = fieldValue318;

fieldValue fieldValue319 = createNode("fieldValue");
fieldValue319.name = "children";
Transform Transform320 = createNode("Transform");
Transform320.DEF = "r_hand_adjust";
Transform320.center = new SFVec3f(new float[-0.217,0.811,-0.0338]);
Transform320.rotation = new SFRotation(new float[-0.09024,0.994,-0.0624,1.216]);
Shape Shape321 = createNode("Shape");
Appearance Appearance322 = createNode("Appearance");
Material Material323 = createNode("Material");
Material323.USE = "Skin_Color";
Appearance322.material = Material323;

Shape321.appearance = Appearance322;

IndexedFaceSet IndexedFaceSet324 = createNode("IndexedFaceSet");
IndexedFaceSet324.coordIndex = new MFInt32(new int[10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1]);
IndexedFaceSet324.creaseAngle = 1.57;
Coordinate Coordinate325 = createNode("Coordinate");
Coordinate325.point = new MFVec3f(new float[-0.237,0.82,-0.0425,-0.252,0.801,-0.0424,-0.269,0.765,-0.0426,-0.273,0.732,-0.0395,-0.27,0.704,-0.0342,-0.262,0.703,-0.0345,-0.256,0.717,-0.0389,-0.255,0.738,-0.0408,-0.251,0.734,-0.0406,-0.194,0.81,-0.0445,-0.211,0.828,-0.0434,-0.236,0.82,-0.0237,-0.252,0.801,-0.0231,-0.268,0.765,-0.0225,-0.272,0.732,-0.0223,-0.27,0.704,-0.0224,-0.261,0.703,-0.0227,-0.256,0.717,-0.023,-0.255,0.738,-0.023,-0.251,0.734,-0.0232,-0.251,0.692,-0.0232,-0.248,0.657,-0.0233,-0.24,0.645,-0.0236,-0.226,0.637,-0.0241,-0.213,0.639,-0.0246,-0.197,0.652,-0.0253,-0.188,0.669,-0.0256,-0.184,0.697,-0.0258,-0.183,0.73,-0.0258,-0.187,0.77,-0.0257,-0.194,0.81,-0.0254,-0.21,0.828,-0.0247,-0.221,0.641,-0.0336,-0.21,0.65,-0.0348,-0.206,0.652,-0.0352,-0.198,0.667,-0.0368,-0.193,0.692,-0.0392,-0.192,0.696,-0.0396,-0.231,0.646,-0.0336,-0.238,0.656,-0.0342,-0.24,0.658,-0.0344,-0.24,0.662,-0.0347,-0.243,0.692,-0.0372,-0.243,0.696,-0.0376,-0.192,0.725,-0.0421,-0.192,0.73,-0.0426,-0.195,0.766,-0.0451,-0.196,0.77,-0.0454]);
IndexedFaceSet324.coord = Coordinate325;

Shape321.geometry = IndexedFaceSet324;

Transform320.children = new MFNode();

Transform320.children[0] = Shape321;

fieldValue319.children = new MFNode();

fieldValue319.children[0] = Transform320;

ProtoInstance317.fieldValue[1] = fieldValue319;

fieldValue316.children = new MFNode();

fieldValue316.children[0] = ProtoInstance317;

ProtoInstance313.fieldValue[2] = fieldValue316;

fieldValue303.children[1] = ProtoInstance313;

ProtoInstance300.fieldValue[2] = fieldValue303;

fieldValue290.children[1] = ProtoInstance300;

ProtoInstance287.fieldValue[2] = fieldValue290;

fieldValue237.children[2] = ProtoInstance287;

ProtoInstance ProtoInstance326 = createNode("ProtoInstance");
ProtoInstance326.name = "Joint";
ProtoInstance326.DEF = "hanim_vc4";
fieldValue fieldValue327 = createNode("fieldValue");
fieldValue327.name = "name";
fieldValue327.value = "vc4";
ProtoInstance326.fieldValue = new MFNode();

ProtoInstance326.fieldValue[0] = fieldValue327;

fieldValue fieldValue328 = createNode("fieldValue");
fieldValue328.name = "center";
fieldValue328.value = "0 1.43 -0.0458";
ProtoInstance326.fieldValue[1] = fieldValue328;

fieldValue fieldValue329 = createNode("fieldValue");
fieldValue329.name = "children";
ProtoInstance ProtoInstance330 = createNode("ProtoInstance");
ProtoInstance330.name = "Segment";
ProtoInstance330.DEF = "hanim_c4";
fieldValue fieldValue331 = createNode("fieldValue");
fieldValue331.name = "name";
fieldValue331.value = "c4";
ProtoInstance330.fieldValue = new MFNode();

ProtoInstance330.fieldValue[0] = fieldValue331;

fieldValue fieldValue332 = createNode("fieldValue");
fieldValue332.name = "children";
Shape Shape333 = createNode("Shape");
Appearance Appearance334 = createNode("Appearance");
Material Material335 = createNode("Material");
Material335.USE = "Skin_Color";
Appearance334.material = Material335;

Shape333.appearance = Appearance334;

IndexedFaceSet IndexedFaceSet336 = createNode("IndexedFaceSet");
IndexedFaceSet336.DEF = "neck";
IndexedFaceSet336.coordIndex = new MFInt32(new int[6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1]);
IndexedFaceSet336.creaseAngle = 1.91;
Coordinate Coordinate337 = createNode("Coordinate");
Coordinate337.point = new MFVec3f(new float[0.0105,1.54,-0.1,0.0357,1.54,-0.0685,0.0382,1.55,-0.0474,0.0105,1.55,-0.0204,0.0373,1.4,-0.0593,0.0577,1.4,-0.0266,0.0158,1.4,0.00512,0.0132,1.41,-0.0824,-0.0158,1.4,0.00512,-0.0577,1.4,-0.0266,-0.0382,1.55,-0.0474,-0.0105,1.55,-0.0204,-0.0373,1.4,-0.0593,-0.0357,1.54,-0.0685,-0.0132,1.41,-0.0824,-0.0105,1.54,-0.1]);
IndexedFaceSet336.coord = Coordinate337;

Shape333.geometry = IndexedFaceSet336;

fieldValue332.children = new MFNode();

fieldValue332.children[0] = Shape333;

ProtoInstance330.fieldValue[1] = fieldValue332;

fieldValue329.children = new MFNode();

fieldValue329.children[0] = ProtoInstance330;

ProtoInstance ProtoInstance338 = createNode("ProtoInstance");
ProtoInstance338.name = "Joint";
ProtoInstance338.DEF = "hanim_skullbase";
fieldValue fieldValue339 = createNode("fieldValue");
fieldValue339.name = "name";
fieldValue339.value = "skullbase";
ProtoInstance338.fieldValue = new MFNode();

ProtoInstance338.fieldValue[0] = fieldValue339;

fieldValue fieldValue340 = createNode("fieldValue");
fieldValue340.name = "center";
fieldValue340.value = "0 1.54 -0.0409";
ProtoInstance338.fieldValue[1] = fieldValue340;

fieldValue fieldValue341 = createNode("fieldValue");
fieldValue341.name = "children";
ProtoInstance ProtoInstance342 = createNode("ProtoInstance");
ProtoInstance342.name = "Segment";
ProtoInstance342.DEF = "hanim_skull";
fieldValue fieldValue343 = createNode("fieldValue");
fieldValue343.name = "name";
fieldValue343.value = "skull";
ProtoInstance342.fieldValue = new MFNode();

ProtoInstance342.fieldValue[0] = fieldValue343;

fieldValue fieldValue344 = createNode("fieldValue");
fieldValue344.name = "children";
Shape Shape345 = createNode("Shape");
Appearance Appearance346 = createNode("Appearance");
Material Material347 = createNode("Material");
Material347.USE = "Skin_Color";
Appearance346.material = Material347;

Shape345.appearance = Appearance346;

IndexedFaceSet IndexedFaceSet348 = createNode("IndexedFaceSet");
IndexedFaceSet348.DEF = "headIFS";
IndexedFaceSet348.colorIndex = new MFInt32(new int[1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1]);
IndexedFaceSet348.coordIndex = new MFInt32(new int[48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1]);
IndexedFaceSet348.creaseAngle = 0.7854;
Coordinate Coordinate349 = createNode("Coordinate");
Coordinate349.DEF = "Face";
Coordinate349.point = new MFVec3f(new float[0,1.708,-0.0435,0,1.655,0.04322,0,1.486,0.02335,0,1.694,0.007789,0,1.631,0.051,0,1.524,-0.102,0.04,1.51,-0.07278,0.04029,1.514,-0.08254,0.03528,1.502,-0.05013,0.03479,1.517,-0.09269,0.0116,1.494,0.03382,0.01946,1.52,0.03421,0.02204,1.494,0.0272,0.02734,1.498,0.02215,0.02788,1.528,0.03084,0.0338,1.503,0.0124,0.04008,1.509,0.002821,0.05122,1.518,-0.02784,0.05867,1.544,-0.03316,0.06433,1.563,-0.03678,0.06732,1.583,-0.03683,0.06769,1.617,-0.03436,0.06641,1.637,-0.03046,0.06818,1.637,-0.04285,0.06308,1.666,-0.04036,0.05305,1.685,-0.03987,0.03136,1.7,-0.0413,0.02919,1.688,0.0091,0.05272,1.674,-0.001657,0.06061,1.66,-0.0101,0.05254,1.541,-0.01363,0.04099,1.527,0.008832,0.03528,1.524,0.02097,0.05792,1.557,-0.004307,0.04413,1.539,0.0149,0.03746,1.539,0.02656,0.003407,1.524,0.04155,0.01481,1.526,0.03912,0.005112,1.532,0.04358,0.02438,1.542,0.03578,0.02636,1.55,0.03808,0.006135,1.55,0.0545,0,1.559,0.05502,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06194,1.6,0.002668,0.01489,1.583,0.04109,0.05282,1.569,0.02821,0.05767,1.58,0.0184,0.04643,1.625,0.03705,0.0264,1.628,0.04807,0.0556,1.609,0.02579,0.05467,1.599,0.02153,0.05316,1.589,0.0207,0.03603,1.58,0.03536,0.04597,1.586,0.02904,0.02106,1.592,0.03748,0.03428,1.595,0.03294,0.06808,1.617,-0.06112,0.06714,1.564,-0.07003,0.06993,1.594,-0.08238,0.05324,1.536,-0.05922,0.04904,1.521,-0.05132,0.04758,1.514,-0.03107,0.03539,1.503,-0.00093,0.02999,1.498,0.006194,0.02308,1.492,0.01628,0.01772,1.488,0.02135,0.01378,1.488,0.02484,0.04349,1.512,-0.03987,0.02308,1.499,-0.02088,0,1.487,-0.018,0.04795,1.531,-0.08973,0.05739,1.555,-0.0982,0.06815,1.622,-0.107,0.06872,1.655,-0.08466,0.05233,1.678,-0.09642,0.05334,1.631,-0.1239,0.05011,1.581,-0.1193,0.04359,1.551,-0.1067,0.03839,1.528,-0.09652,0.03399,1.636,-0.1304,0.03224,1.685,-0.1024,0,1.557,-0.1126,0.01864,1.566,0.04105,0.0249,1.58,0.0387,0.02735,1.596,0.03552,0.04317,1.564,0.03643,0.01246,1.577,0.04276,0.04354,1.59,0.02822,0.04557,1.601,0.03652,0.0291,1.603,0.04274,0.01856,1.6,0.04349,0,1.579,0.04893,0.01064,1.558,0.04476,0.005501,1.578,0.04574,0.01405,1.531,0.04152,0.01037,1.544,0.04266,0,1.515,0.03836,0.00797,1.515,0.03774,0.01824,1.55,0.04063,-0.0249,1.58,0.0387,-0.04354,1.59,0.02822,-0.0291,1.603,0.04274,-0.04317,1.564,0.03643,-0.04597,1.586,0.02904,-0.05316,1.589,0.0207,-0.01824,1.55,0.04063,-0.01246,1.577,0.04276,-0.006135,1.55,0.0545,-0.01037,1.544,0.04266,-0.02636,1.55,0.03808,-0.03428,1.595,0.03294,-0.02735,1.596,0.03552,-0.03603,1.58,0.03536,-0.05282,1.569,0.02821,-0.05767,1.58,0.0184,-0.01864,1.566,0.04105,-0.01489,1.583,0.04109,-0.0556,1.609,0.02579,-0.04557,1.601,0.03652,-0.02106,1.592,0.03748,-0.01856,1.6,0.04349,-0.005501,1.578,0.04574,-0.01064,1.558,0.04476,0,1.592,0.04694,-0.06182,1.614,0.008199,-0.05467,1.599,0.02153,-0.06194,1.6,0.002668,-0.05792,1.557,-0.004307,-0.04413,1.539,0.0149,-0.03746,1.539,0.02656,-0.04099,1.527,0.008832,-0.03528,1.524,0.02097,-0.02788,1.528,0.03084,0,1.53,0.04236,-0.005112,1.532,0.04358,-0.01481,1.526,0.03912,-0.01946,1.52,0.03421,0,1.495,0.0348,-0.0116,1.494,0.03382,-0.02734,1.498,0.02215,-0.0338,1.503,0.0124,-0.01772,1.488,0.02135,-0.02308,1.492,0.01628,-0.02999,1.498,0.006194,-0.01405,1.531,0.04152,-0.003407,1.524,0.04155,-0.02204,1.494,0.0272,-0.00797,1.515,0.03774,-0.02438,1.542,0.03578,0,1.543,0.04432,0,1.555,0.05692,0.02295,1.492,-0.02694,0.007322,1.489,-0.01677,-0.05254,1.541,-0.01363,-0.04008,1.509,0.002821,-0.05122,1.518,-0.02784,-0.03539,1.503,-0.00093,-0.01378,1.488,0.02484,-0.02308,1.499,-0.02088,-0.04349,1.512,-0.03987,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.05856,1.63,0.01803,-0.04847,1.643,0.02895,-0.04643,1.625,0.03705,-0.02958,1.651,0.03965,-0.0264,1.628,0.04807,-0.02919,1.688,0.0091,-0.05272,1.674,-0.001657,-0.06641,1.637,-0.03046,-0.06061,1.66,-0.0101,-0.03136,1.7,-0.0413,-0.05305,1.685,-0.03987,-0.06308,1.666,-0.04036,-0.06818,1.637,-0.04285,-0.06808,1.617,-0.06112,-0.06993,1.594,-0.08238,-0.06714,1.564,-0.07003,-0.05324,1.536,-0.05922,-0.04904,1.521,-0.05132,-0.04795,1.531,-0.08973,-0.05739,1.555,-0.0982,-0.06815,1.622,-0.107,-0.06872,1.655,-0.08466,-0.05233,1.678,-0.09642,-0.03224,1.685,-0.1024,0,1.69,-0.1047,0,1.64,-0.1342,-0.05334,1.631,-0.1239,-0.05011,1.581,-0.1193,-0.04359,1.551,-0.1067,-0.03839,1.528,-0.09652,-0.03528,1.502,-0.05013,-0.04,1.51,-0.07278,-0.04029,1.514,-0.08254,-0.03479,1.517,-0.09269,-0.02295,1.492,-0.02694,-0.007322,1.489,-0.01677,0,1.588,-0.1329,-0.03399,1.636,-0.1304,-0.04758,1.514,-0.03107,-0.03428,1.595,0.03294,-0.02106,1.592,0.03748,-0.02735,1.596,0.03552,-0.0249,1.58,0.0387,-0.01489,1.583,0.04109,-0.04597,1.586,0.02904,-0.04354,1.59,0.02822,-0.03603,1.58,0.03536,-0.05856,1.63,0.01803,-0.06182,1.614,0.008199,-0.02788,1.528,0.03084,-0.005112,1.532,0.04358,-0.01405,1.531,0.04152,-0.00797,1.515,0.03774,-0.01946,1.52,0.03421,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.04847,1.643,0.02895,-0.02958,1.651,0.03965,-0.05324,1.536,-0.05922,-0.04795,1.531,-0.08973,-0.03839,1.528,-0.09652,0.02106,1.592,0.03748,0.01489,1.583,0.04109,0.0249,1.58,0.0387,0.03603,1.58,0.03536,0.04354,1.59,0.02822,0.03428,1.595,0.03294,0.02735,1.596,0.03552,0.02788,1.528,0.03084,0.01405,1.531,0.04152,0,1.53,0.04236,0,1.515,0.03836,0.00797,1.515,0.03774,0.01946,1.52,0.03421,0.005112,1.532,0.04358,0,1.655,0.04322,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06769,1.617,-0.03436,0.06732,1.583,-0.03683,0.06433,1.563,-0.03678,0.05867,1.544,-0.03316,0.05324,1.536,-0.05922,0.04795,1.531,-0.08973,0.03839,1.528,-0.09652,0,1.524,-0.102]);
IndexedFaceSet348.coord = Coordinate349;

Color Color350 = createNode("Color");
Color350.color = new MFColor(new float[0.749,0.601,0.462,0.1735,0.2602,0.749,0.6364,0.133,0.1526,0.4545,0.2759,0.1902]);
IndexedFaceSet348.color = Color350;

Shape345.geometry = IndexedFaceSet348;

fieldValue344.children = new MFNode();

fieldValue344.children[0] = Shape345;

ProtoInstance342.fieldValue[1] = fieldValue344;

fieldValue341.children = new MFNode();

fieldValue341.children[0] = ProtoInstance342;

ProtoInstance338.fieldValue[2] = fieldValue341;

fieldValue329.children[1] = ProtoInstance338;

ProtoInstance326.fieldValue[2] = fieldValue329;

fieldValue237.children[3] = ProtoInstance326;

ProtoInstance234.fieldValue[2] = fieldValue237;

fieldValue149.children[1] = ProtoInstance234;

ProtoInstance146.fieldValue[2] = fieldValue149;

fieldValue145.children = new MFNode();

fieldValue145.children[0] = ProtoInstance146;

Group Group351 = createNode("Group");
fieldValue145.children[1] = Group351;

ProtoInstance141.fieldValue[3] = fieldValue145;

fieldValue fieldValue352 = createNode("fieldValue");
fieldValue352.name = "joints";
ProtoInstance ProtoInstance353 = createNode("ProtoInstance");
ProtoInstance353.USE = "hanim_humanoid_root";
fieldValue352.children = new MFNode();

fieldValue352.children[0] = ProtoInstance353;

ProtoInstance ProtoInstance354 = createNode("ProtoInstance");
ProtoInstance354.USE = "hanim_sacroiliac";
fieldValue352.children[1] = ProtoInstance354;

ProtoInstance ProtoInstance355 = createNode("ProtoInstance");
ProtoInstance355.USE = "hanim_l_hip";
fieldValue352.children[2] = ProtoInstance355;

ProtoInstance ProtoInstance356 = createNode("ProtoInstance");
ProtoInstance356.USE = "hanim_l_knee";
fieldValue352.children[3] = ProtoInstance356;

ProtoInstance ProtoInstance357 = createNode("ProtoInstance");
ProtoInstance357.USE = "hanim_l_ankle";
fieldValue352.children[4] = ProtoInstance357;

ProtoInstance ProtoInstance358 = createNode("ProtoInstance");
ProtoInstance358.USE = "hanim_r_hip";
fieldValue352.children[5] = ProtoInstance358;

ProtoInstance ProtoInstance359 = createNode("ProtoInstance");
ProtoInstance359.USE = "hanim_r_knee";
fieldValue352.children[6] = ProtoInstance359;

ProtoInstance ProtoInstance360 = createNode("ProtoInstance");
ProtoInstance360.USE = "hanim_r_ankle";
fieldValue352.children[7] = ProtoInstance360;

ProtoInstance ProtoInstance361 = createNode("ProtoInstance");
ProtoInstance361.USE = "hanim_vl1";
fieldValue352.children[8] = ProtoInstance361;

ProtoInstance ProtoInstance362 = createNode("ProtoInstance");
ProtoInstance362.USE = "hanim_l_shoulder";
fieldValue352.children[9] = ProtoInstance362;

ProtoInstance ProtoInstance363 = createNode("ProtoInstance");
ProtoInstance363.USE = "hanim_l_elbow";
fieldValue352.children[10] = ProtoInstance363;

ProtoInstance ProtoInstance364 = createNode("ProtoInstance");
ProtoInstance364.USE = "hanim_l_wrist";
fieldValue352.children[11] = ProtoInstance364;

ProtoInstance ProtoInstance365 = createNode("ProtoInstance");
ProtoInstance365.USE = "hanim_r_shoulder";
fieldValue352.children[12] = ProtoInstance365;

ProtoInstance ProtoInstance366 = createNode("ProtoInstance");
ProtoInstance366.USE = "hanim_r_elbow";
fieldValue352.children[13] = ProtoInstance366;

ProtoInstance ProtoInstance367 = createNode("ProtoInstance");
ProtoInstance367.USE = "hanim_r_wrist";
fieldValue352.children[14] = ProtoInstance367;

ProtoInstance ProtoInstance368 = createNode("ProtoInstance");
ProtoInstance368.USE = "hanim_vc4";
fieldValue352.children[15] = ProtoInstance368;

ProtoInstance ProtoInstance369 = createNode("ProtoInstance");
ProtoInstance369.USE = "hanim_skullbase";
fieldValue352.children[16] = ProtoInstance369;

ProtoInstance141.fieldValue[4] = fieldValue352;

fieldValue fieldValue370 = createNode("fieldValue");
fieldValue370.name = "segments";
ProtoInstance ProtoInstance371 = createNode("ProtoInstance");
ProtoInstance371.USE = "hanim_pelvis";
fieldValue370.children = new MFNode();

fieldValue370.children[0] = ProtoInstance371;

ProtoInstance ProtoInstance372 = createNode("ProtoInstance");
ProtoInstance372.USE = "hanim_l_thigh";
fieldValue370.children[1] = ProtoInstance372;

ProtoInstance ProtoInstance373 = createNode("ProtoInstance");
ProtoInstance373.USE = "hanim_l_calf";
fieldValue370.children[2] = ProtoInstance373;

ProtoInstance ProtoInstance374 = createNode("ProtoInstance");
ProtoInstance374.USE = "hanim_l_hindfoot";
fieldValue370.children[3] = ProtoInstance374;

ProtoInstance ProtoInstance375 = createNode("ProtoInstance");
ProtoInstance375.USE = "hanim_r_thigh";
fieldValue370.children[4] = ProtoInstance375;

ProtoInstance ProtoInstance376 = createNode("ProtoInstance");
ProtoInstance376.USE = "hanim_r_calf";
fieldValue370.children[5] = ProtoInstance376;

ProtoInstance ProtoInstance377 = createNode("ProtoInstance");
ProtoInstance377.USE = "hanim_r_hindfoot";
fieldValue370.children[6] = ProtoInstance377;

ProtoInstance ProtoInstance378 = createNode("ProtoInstance");
ProtoInstance378.USE = "hanim_c7";
fieldValue370.children[7] = ProtoInstance378;

ProtoInstance ProtoInstance379 = createNode("ProtoInstance");
ProtoInstance379.USE = "hanim_l_upperarm";
fieldValue370.children[8] = ProtoInstance379;

ProtoInstance ProtoInstance380 = createNode("ProtoInstance");
ProtoInstance380.USE = "hanim_l_forearm";
fieldValue370.children[9] = ProtoInstance380;

ProtoInstance ProtoInstance381 = createNode("ProtoInstance");
ProtoInstance381.USE = "hanim_l_hand";
fieldValue370.children[10] = ProtoInstance381;

ProtoInstance ProtoInstance382 = createNode("ProtoInstance");
ProtoInstance382.USE = "hanim_r_upperarm";
fieldValue370.children[11] = ProtoInstance382;

ProtoInstance ProtoInstance383 = createNode("ProtoInstance");
ProtoInstance383.USE = "hanim_r_forearm";
fieldValue370.children[12] = ProtoInstance383;

ProtoInstance ProtoInstance384 = createNode("ProtoInstance");
ProtoInstance384.USE = "hanim_r_hand";
fieldValue370.children[13] = ProtoInstance384;

ProtoInstance ProtoInstance385 = createNode("ProtoInstance");
ProtoInstance385.USE = "hanim_c4";
fieldValue370.children[14] = ProtoInstance385;

ProtoInstance ProtoInstance386 = createNode("ProtoInstance");
ProtoInstance386.USE = "hanim_skull";
fieldValue370.children[15] = ProtoInstance386;

ProtoInstance141.fieldValue[5] = fieldValue370;

fieldValue fieldValue387 = createNode("fieldValue");
fieldValue387.name = "viewpoints";
Viewpoint Viewpoint388 = createNode("Viewpoint");
Viewpoint388.DEF = "InclinedView";
Viewpoint388.description = "Inclined View";
Viewpoint388.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
Viewpoint388.position = new SFVec3f(new float[1.62,1.05,2.06]);
fieldValue387.children = new MFNode();

fieldValue387.children[0] = Viewpoint388;

Viewpoint Viewpoint389 = createNode("Viewpoint");
Viewpoint389.DEF = "FrontView";
Viewpoint389.description = "Front View";
Viewpoint389.position = new SFVec3f(new float[0,0.854,2.57665]);
fieldValue387.children[1] = Viewpoint389;

Viewpoint Viewpoint390 = createNode("Viewpoint");
Viewpoint390.DEF = "SideView";
Viewpoint390.description = "Side View";
Viewpoint390.orientation = new SFRotation(new float[0,1,0,1.57079]);
Viewpoint390.position = new SFVec3f(new float[2.5929,0.854,0]);
fieldValue387.children[2] = Viewpoint390;

Viewpoint Viewpoint391 = createNode("Viewpoint");
Viewpoint391.DEF = "TopView";
Viewpoint391.description = "Top View";
Viewpoint391.orientation = new SFRotation(new float[1,0,0,-1.57079]);
Viewpoint391.position = new SFVec3f(new float[0,3.4495,0]);
fieldValue387.children[3] = Viewpoint391;

ProtoInstance141.fieldValue[6] = fieldValue387;

children[5] = ProtoInstance141;

WorldInfo WorldInfo392 = createNode("WorldInfo");
WorldInfo392.info = new MFString(new java.lang.String["Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc."]);
WorldInfo392.title = "Nancy - an HAnim compliant avatar by 3Name3D";
children[6] = WorldInfo392;

NavigationInfo NavigationInfo393 = createNode("NavigationInfo");
NavigationInfo393.avatarSize = new MFFloat(new float[0.15,1.53,0.75]);
NavigationInfo393.speed = 0.5;
NavigationInfo393.type = new MFString(new java.lang.String["EXAMINE"]);
children[7] = NavigationInfo393;

Group Group394 = createNode("Group");
Group394.DEF = "Interface";
Transform Transform395 = createNode("Transform");
ProximitySensor ProximitySensor396 = createNode("ProximitySensor");
ProximitySensor396.DEF = "HudProx";
ProximitySensor396.center = new SFVec3f(new float[0,20,0]);
ProximitySensor396.size = new SFVec3f(new float[500,100,500]);
Transform395.children = new MFNode();

Transform395.children[0] = ProximitySensor396;

Group394.children = new MFNode();

Group394.children[0] = Transform395;

Collision Collision397 = createNode("Collision");
Collision397.DEF = "HUD";
Collision397.enabled = False;
Transform Transform398 = createNode("Transform");
Transform398.DEF = "HudXform";
Transform Transform399 = createNode("Transform");
Transform399.scale = new SFVec3f(new float[0.012,0.012,0.012]);
Transform399.translation = new SFVec3f(new float[0.01107,-0.025,-0.08]);
Transform Transform400 = createNode("Transform");
Transform400.DEF = "Stand_Text";
TouchSensor TouchSensor401 = createNode("TouchSensor");
TouchSensor401.DEF = "Stand_Touch";
TouchSensor401.description = "click for behavior";
Transform400.children = new MFNode();

Transform400.children[0] = TouchSensor401;

Shape Shape402 = createNode("Shape");
Shape402.DEF = "Stand";
IndexedFaceSet IndexedFaceSet403 = createNode("IndexedFaceSet");
IndexedFaceSet403.coordIndex = new MFInt32(new int[1,30,29,-1,1,29,2,-1,31,47,46,-1,31,46,32,-1,78,77,80,-1,78,80,79,-1,96,113,112,-1,96,112,95,-1,95,112,111,-1,95,111,94,-1,94,111,110,-1,94,110,93,-1,93,110,109,-1,93,109,108,-1,93,108,100,-1,107,99,100,-1,107,100,108,-1,107,106,99,-1,106,105,98,-1,106,98,99,-1,104,97,98,-1,104,98,105,-1,103,102,104,-1,104,102,101,-1,104,101,97,-1,101,96,97,-1,101,97,101,-1,101,101,96,-1,96,101,113,-1,113,101,114,-1,115,86,85,-1,115,85,116,-1,117,87,84,-1,117,84,118,-1,119,83,120,-1,121,88,82,-1,121,82,122,-1,123,89,81,-1,123,81,124,-1,125,90,126,-1,127,92,128,-1,129,91,130,-1,54,49,50,-1,54,50,55,-1,76,75,74,-1,76,74,54,-1,54,74,73,-1,54,73,49,-1,49,73,48,-1,48,73,62,-1,48,62,61,-1,48,61,60,-1,48,60,53,-1,53,60,59,-1,53,59,53,-1,53,59,58,-1,53,58,52,-1,52,58,57,-1,52,57,51,-1,56,51,57,-1,56,55,50,-1,56,50,51,-1,62,73,72,-1,62,72,63,-1,63,72,71,-1,63,71,64,-1,64,71,70,-1,64,70,69,-1,64,69,65,-1,65,69,68,-1,65,68,67,-1,65,67,66,-1,131,40,39,-1,131,39,132,-1,133,43,42,-1,133,42,134,-1,135,37,36,-1,135,36,136,-1,137,41,38,-1,137,38,138,-1,139,44,35,-1,139,35,140,-1,141,34,142,-1,143,45,33,-1,143,33,144,-1,145,16,15,-1,145,15,146,-1,147,14,148,-1,149,17,13,-1,149,13,150,-1,151,18,12,-1,151,12,152,-1,153,19,11,-1,153,11,154,-1,155,20,10,-1,155,10,156,-1,157,9,158,-1,159,21,8,-1,159,8,160,-1,161,22,7,-1,161,7,162,-1,163,23,164,-1,165,24,6,-1,165,6,166,-1,167,25,5,-1,167,5,168,-1,169,26,170,-1,171,27,4,-1,171,4,172,-1,173,28,3,-1,173,3,174,-1,175,0,176,-1]);
Coordinate Coordinate404 = createNode("Coordinate");
Coordinate404.point = new MFVec3f(new float[-3.21,-0.0154,0,-3.15,-0.0154,0,-3.14,-0.0467,0,-3.1,-0.0601,0,-3.05,-0.051,0,-3.04,-0.0254,0,-3.05,-0.00248,0,-3.1,0.0122,0,-3.16,0.03,0,-3.2,0.0684,0,-3.2,0.133,0,-3.16,0.17,0,-3.1,0.182,0,-3.04,0.171,0,-3.01,0.136,0,-3,0.095,0,-3.05,0.095,0,-3.06,0.125,0,-3.1,0.136,0,-3.14,0.126,0,-3.15,0.103,0,-3.14,0.0815,0,-3.1,0.0689,0,-3.04,0.0512,0,-3,0.0249,0,-2.99,-0.0195,0,-3,-0.0708,0,-3.05,-0.104,0,-3.1,-0.108,0,-3.16,-0.0947,0,-3.2,-0.0586,0,-2.86,-0.102,0,-2.9,-0.102,0,-2.94,-0.0832,0,-2.94,-0.0457,0,-2.94,0.0645,0,-2.97,0.0645,0,-2.97,0.103,0,-2.94,0.103,0,-2.94,0.158,0,-2.89,0.158,0,-2.89,0.103,0,-2.86,0.103,0,-2.86,0.0645,0,-2.89,0.0645,0,-2.89,-0.0483,0,-2.88,-0.0608,0,-2.86,-0.0612,0,-2.71,-0.000798,0,-2.71,-0.0373,0,-2.74,-0.0637,0,-2.77,-0.0624,0,-2.78,-0.0416,0,-2.77,-0.0195,0,-2.71,-0.0754,0,-2.74,-0.103,0,-2.79,-0.106,0,-2.82,-0.0865,0,-2.84,-0.0431,0,-2.82,0.000177,0,-2.78,0.0201,0,-2.73,0.0275,0,-2.71,0.0446,0,-2.72,0.0614,0,-2.74,0.0675,0,-2.77,0.0573,0,-2.78,0.039,0,-2.83,0.039,0,-2.82,0.0765,0,-2.78,0.105,0,-2.74,0.11,0,-2.71,0.107,0,-2.67,0.0849,0,-2.66,0.0526,0,-2.66,-0.0763,0,-2.65,-0.101,0,-2.7,-0.101,0,-2.61,-0.101,0,-2.61,0.103,0,-2.56,0.103,0,-2.56,0.0787,0,-2.52,0.104,0,-2.47,0.105,0,-2.43,0.0743,0,-2.43,0.038,0,-2.43,-0.101,0,-2.48,-0.101,0,-2.48,0.0224,0,-2.49,0.0514,0,-2.52,0.0627,0,-2.54,0.0505,0,-2.55,0.02,0,-2.55,-0.101,0,-2.33,0.0279,0,-2.31,0.0587,0,-2.27,0.0589,0,-2.25,0.0281,0,-2.25,-0.0232,0,-2.27,-0.0563,0,-2.31,-0.057,0,-2.33,-0.0245,0,-2.19,0.175,0,-2.19,-0.101,0,-2.25,-0.101,0,-2.25,-0.073,0,-2.26,-0.0913,0,-2.31,-0.108,0,-2.35,-0.0915,0,-2.38,-0.0424,0,-2.39,0.0243,0,-2.37,0.0809,0,-2.32,0.108,0,-2.28,0.106,0,-2.25,0.0776,0,-2.25,0.175,0,-2.48,0.0224,0,-2.43,0.038,0,-2.49,0.0514,0,-2.43,0.0743,0,-2.49,0.0514,0,-2.47,0.105,0,-2.52,0.0627,0,-2.52,0.104,0,-2.54,0.0505,0,-2.56,0.0787,0,-2.55,0.02,0,-2.56,0.0787,0,-2.61,-0.101,0,-2.55,0.02,0,-2.61,-0.101,0,-2.56,0.0787,0,-2.89,0.103,0,-2.94,0.103,0,-2.89,0.0645,0,-2.89,0.103,0,-2.94,0.103,0,-2.94,0.0645,0,-2.89,0.0645,0,-2.94,0.0645,0,-2.89,-0.0483,0,-2.94,-0.0457,0,-2.89,-0.0483,0,-2.94,-0.0832,0,-2.88,-0.0608,0,-2.9,-0.102,0,-3.06,0.125,0,-3.01,0.136,0,-3.06,0.125,0,-3.04,0.171,0,-3.1,0.136,0,-3.1,0.182,0,-3.14,0.126,0,-3.16,0.17,0,-3.15,0.103,0,-3.2,0.133,0,-3.14,0.0815,0,-3.2,0.0684,0,-3.14,0.0815,0,-3.16,0.03,0,-3.1,0.0689,0,-3.1,0.0122,0,-3.04,0.0512,0,-3.05,-0.00248,0,-3,0.0249,0,-3.05,-0.00248,0,-2.99,-0.0195,0,-3.04,-0.0254,0,-3,-0.0708,0,-3.05,-0.051,0,-3.05,-0.104,0,-3.05,-0.051,0,-3.1,-0.108,0,-3.1,-0.0601,0,-3.16,-0.0947,0,-3.14,-0.0467,0,-3.15,-0.0154,0,-3.2,-0.0586,0]);
IndexedFaceSet403.coord = Coordinate404;

Shape402.geometry = IndexedFaceSet403;

Appearance Appearance405 = createNode("Appearance");
Material Material406 = createNode("Material");
Material406.DEF = "text_color";
Material406.ambientIntensity = 0;
Material406.diffuseColor = new SFColor(new float[0,0,0]);
Material406.emissiveColor = new SFColor(new float[0.819,0.521,0.169]);
Appearance405.material = Material406;

Shape402.appearance = Appearance405;

Transform400.children[1] = Shape402;

Transform Transform407 = createNode("Transform");
Transform407.scale = new SFVec3f(new float[84.89,77.52,77.52]);
Transform407.translation = new SFVec3f(new float[0.04092,1.843,3.826]);
Shape Shape408 = createNode("Shape");
Shape408.DEF = "Stand_Back";
IndexedFaceSet IndexedFaceSet409 = createNode("IndexedFaceSet");
IndexedFaceSet409.coordIndex = new MFInt32(new int[0,2,3,-1,2,0,1,-1]);
Coordinate Coordinate410 = createNode("Coordinate");
Coordinate410.point = new MFVec3f(new float[-0.02572,-0.02535,-0.05,-0.02578,-0.02131,-0.05,-0.03871,-0.02131,-0.05,-0.03877,-0.02541,-0.05]);
IndexedFaceSet409.coord = Coordinate410;

Shape408.geometry = IndexedFaceSet409;

Appearance Appearance411 = createNode("Appearance");
Material Material412 = createNode("Material");
Material412.DEF = "Clear";
Material412.ambientIntensity = 0;
Material412.diffuseColor = new SFColor(new float[0,0,0]);
Material412.transparency = 1;
Appearance411.material = Material412;

Shape408.appearance = Appearance411;

Transform407.children = new MFNode();

Transform407.children[0] = Shape408;

Transform400.children[2] = Transform407;

Transform399.children = new MFNode();

Transform399.children[0] = Transform400;

Transform Transform413 = createNode("Transform");
Transform413.DEF = "Walk_Text";
TouchSensor TouchSensor414 = createNode("TouchSensor");
TouchSensor414.DEF = "Walk_Touch";
TouchSensor414.description = "click for behavior";
Transform413.children = new MFNode();

Transform413.children[0] = TouchSensor414;

Shape Shape415 = createNode("Shape");
Shape415.DEF = "WALK";
IndexedFaceSet IndexedFaceSet416 = createNode("IndexedFaceSet");
IndexedFaceSet416.coordIndex = new MFInt32(new int[0,2,1,-1,3,2,0,-1,12,3,0,-1,4,3,12,-1,11,4,12,-1,5,4,11,-1,10,5,11,-1,6,5,10,-1,9,6,10,-1,7,6,9,-1,8,7,9,-1,15,14,13,-1,16,15,13,-1,19,18,17,-1,20,19,17,-1,27,20,17,-1,28,27,17,-1,26,20,27,-1,23,20,26,-1,21,20,23,-1,25,23,26,-1,22,21,23,-1,24,23,25,-1,29,30,31,-1,29,31,32,-1,33,34,35,-1,33,35,29,-1,29,35,36,-1,29,36,30,-1,30,36,37,-1,37,36,38,-1,37,38,39,-1,37,39,40,-1,37,40,41,-1,41,40,42,-1,41,42,41,-1,41,42,43,-1,41,43,44,-1,44,43,45,-1,44,45,46,-1,47,46,45,-1,47,32,31,-1,47,31,46,-1,38,36,48,-1,38,48,49,-1,49,48,50,-1,49,50,51,-1,51,50,52,-1,51,52,53,-1,51,53,54,-1,54,53,55,-1,54,55,56,-1,54,56,57,-1]);
Coordinate Coordinate417 = createNode("Coordinate");
Coordinate417.point = new MFVec3f(new float[-1.88,-0.101,0,-1.96,0.175,0,-1.91,0.175,0,-1.86,-0.0195,0,-1.82,0.175,0,-1.76,0.175,0,-1.72,-0.0195,0,-1.67,0.175,0,-1.61,0.175,0,-1.69,-0.101,0,-1.75,-0.101,0,-1.79,0.111,0,-1.83,-0.101,0,-1.38,-0.101,0,-1.38,0.175,0,-1.32,0.175,0,-1.32,-0.101,0,-1.27,-0.101,0,-1.27,0.175,0,-1.22,0.175,0,-1.22,0.0304,0,-1.16,0.103,0,-1.09,0.103,0,-1.16,0.0272,0,-1.09,-0.101,0,-1.15,-0.101,0,-1.2,-0.0141,0,-1.22,-0.0363,0,-1.22,-0.101,0,-1.48,-0.0754,0,-1.48,-0.0373,0,-1.51,-0.0637,0,-1.51,-0.103,0,-1.47,-0.101,0,-1.42,-0.101,0,-1.43,-0.0763,0,-1.43,0.0526,0,-1.48,-0.000798,0,-1.48,0.0446,0,-1.5,0.0275,0,-1.55,0.0201,0,-1.54,-0.0195,0,-1.59,0.000177,0,-1.61,-0.0431,0,-1.55,-0.0416,0,-1.59,-0.0865,0,-1.54,-0.0624,0,-1.56,-0.106,0,-1.44,0.0849,0,-1.49,0.0614,0,-1.48,0.107,0,-1.51,0.0675,0,-1.52,0.11,0,-1.55,0.105,0,-1.54,0.0573,0,-1.59,0.0765,0,-1.6,0.039,0,-1.55,0.039,0]);
IndexedFaceSet416.coord = Coordinate417;

Shape415.geometry = IndexedFaceSet416;

Appearance Appearance418 = createNode("Appearance");
Material Material419 = createNode("Material");
Material419.USE = "text_color";
Appearance418.material = Material419;

Shape415.appearance = Appearance418;

Transform413.children[1] = Shape415;

Transform Transform420 = createNode("Transform");
Transform420.scale = new SFVec3f(new float[81.3,81.3,81.31]);
Transform420.translation = new SFVec3f(new float[-0.0414,1.941,4.015]);
Shape Shape421 = createNode("Shape");
Shape421.DEF = "Walk_Back";
IndexedFaceSet IndexedFaceSet422 = createNode("IndexedFaceSet");
IndexedFaceSet422.coordIndex = new MFInt32(new int[1,3,0,-1,3,1,2,-1]);
Coordinate Coordinate423 = createNode("Coordinate");
Coordinate423.point = new MFVec3f(new float[-0.02381,-0.02541,-0.05,-0.0127,-0.02541,-0.05,-0.01263,-0.02139,-0.05,-0.02381,-0.02146,-0.05]);
IndexedFaceSet422.coord = Coordinate423;

Shape421.geometry = IndexedFaceSet422;

Appearance Appearance424 = createNode("Appearance");
Material Material425 = createNode("Material");
Material425.USE = "Clear";
Appearance424.material = Material425;

Shape421.appearance = Appearance424;

Transform420.children = new MFNode();

Transform420.children[0] = Shape421;

Transform413.children[2] = Transform420;

Transform399.children[1] = Transform413;

Transform Transform426 = createNode("Transform");
Transform426.DEF = "Run_Text";
TouchSensor TouchSensor427 = createNode("TouchSensor");
TouchSensor427.DEF = "Run_Touch";
TouchSensor427.description = "click for behavior";
Transform426.children = new MFNode();

Transform426.children[0] = TouchSensor427;

Shape Shape428 = createNode("Shape");
Shape428.DEF = "Run";
IndexedFaceSet IndexedFaceSet429 = createNode("IndexedFaceSet");
IndexedFaceSet429.coordIndex = new MFInt32(new int[24,26,25,-1,53,39,54,-1,17,1,0,-1,17,0,16,-1,0,14,16,-1,0,15,14,-1,14,13,22,-1,14,22,16,-1,13,12,21,-1,13,21,22,-1,12,6,21,-1,12,11,7,-1,12,7,6,-1,11,8,7,-1,10,8,11,-1,10,9,8,-1,6,5,21,-1,5,4,20,-1,5,20,21,-1,4,3,19,-1,4,19,20,-1,3,2,18,-1,3,18,19,-1,18,2,1,-1,18,1,17,-1,55,32,31,-1,55,31,56,-1,57,33,30,-1,57,30,58,-1,59,29,60,-1,61,34,28,-1,61,28,62,-1,63,35,27,-1,63,27,64,-1,65,36,66,-1,67,38,68,-1,69,37,70,-1,71,23,72,-1,73,48,47,-1,73,47,74,-1,75,49,46,-1,75,46,76,-1,77,45,78,-1,79,50,44,-1,79,44,80,-1,81,51,43,-1,81,43,82,-1,83,41,84,-1,85,40,86,-1,87,52,88,-1,89,42,90,-1]);
Coordinate Coordinate430 = createNode("Coordinate");
Coordinate430.point = new MFVec3f(new float[-0.829,-0.101,0,-0.829,0.175,0,-0.662,0.172,0,-0.622,0.148,0,-0.607,0.103,0,-0.62,0.0501,0,-0.648,0.0316,0,-0.615,-0.0063,0,-0.611,-0.0764,0,-0.601,-0.101,0,-0.664,-0.101,0,-0.671,-0.0373,0,-0.68,-0.00372,0,-0.712,0.00648,0,-0.772,0.00648,0,-0.772,-0.101,0,-0.772,0.0546,0,-0.772,0.127,0,-0.703,0.127,0,-0.673,0.118,0,-0.663,0.091,0,-0.674,0.063,0,-0.705,0.0546,0,-0.379,0.103,0,-0.379,-0.101,0,-0.432,-0.101,0,-0.432,-0.0764,0,-0.466,-0.101,0,-0.518,-0.102,0,-0.555,-0.072,0,-0.56,-0.0357,0,-0.56,0.103,0,-0.506,0.103,0,-0.506,-0.0201,0,-0.5,-0.0491,0,-0.472,-0.0604,0,-0.443,-0.0482,0,-0.433,-0.0177,0,-0.433,0.103,0,-0.331,-0.101,0,-0.331,0.103,0,-0.278,0.103,0,-0.278,0.0787,0,-0.244,0.104,0,-0.192,0.105,0,-0.154,0.0743,0,-0.149,0.038,0,-0.149,-0.101,0,-0.203,-0.101,0,-0.203,0.0224,0,-0.209,0.0514,0,-0.238,0.0627,0,-0.266,0.0505,0,-0.277,0.02,0,-0.277,-0.101,0,-0.506,-0.0201,0,-0.56,-0.0357,0,-0.5,-0.0491,0,-0.555,-0.072,0,-0.5,-0.0491,0,-0.518,-0.102,0,-0.472,-0.0604,0,-0.466,-0.101,0,-0.443,-0.0482,0,-0.432,-0.0764,0,-0.433,-0.0177,0,-0.432,-0.0764,0,-0.379,0.103,0,-0.433,-0.0177,0,-0.379,0.103,0,-0.432,-0.0764,0,-0.379,-0.101,0,-0.432,-0.0764,0,-0.203,0.0224,0,-0.149,0.038,0,-0.209,0.0514,0,-0.154,0.0743,0,-0.209,0.0514,0,-0.192,0.105,0,-0.238,0.0627,0,-0.244,0.104,0,-0.266,0.0505,0,-0.278,0.0787,0,-0.278,0.0787,0,-0.331,0.103,0,-0.277,0.02,0,-0.331,-0.101,0,-0.277,0.02,0,-0.278,0.0787,0,-0.277,0.02,0,-0.331,0.103,0]);
IndexedFaceSet429.coord = Coordinate430;

Shape428.geometry = IndexedFaceSet429;

Appearance Appearance431 = createNode("Appearance");
Material Material432 = createNode("Material");
Material432.USE = "text_color";
Appearance431.material = Material432;

Shape428.appearance = Appearance431;

Transform426.children[1] = Shape428;

Transform Transform433 = createNode("Transform");
Transform433.scale = new SFVec3f(new float[82.47,82.47,82.48]);
Transform433.translation = new SFVec3f(new float[-0.01579,1.968,4.074]);
Shape Shape434 = createNode("Shape");
Shape434.DEF = "Run_Back";
IndexedFaceSet IndexedFaceSet435 = createNode("IndexedFaceSet");
IndexedFaceSet435.coordIndex = new MFInt32(new int[0,2,3,-1,2,0,1,-1]);
Coordinate Coordinate436 = createNode("Coordinate");
Coordinate436.point = new MFVec3f(new float[-0.01009,-0.02534,-0.05,-0.001382,-0.02541,-0.05,-0.001315,-0.02146,-0.05,-0.01022,-0.02146,-0.05]);
IndexedFaceSet435.coord = Coordinate436;

Shape434.geometry = IndexedFaceSet435;

Appearance Appearance437 = createNode("Appearance");
Material Material438 = createNode("Material");
Material438.USE = "Clear";
Appearance437.material = Material438;

Shape434.appearance = Appearance437;

Transform433.children = new MFNode();

Transform433.children[0] = Shape434;

Transform426.children[2] = Transform433;

Transform399.children[2] = Transform426;

Transform Transform439 = createNode("Transform");
Transform439.DEF = "Jump_Text";
TouchSensor TouchSensor440 = createNode("TouchSensor");
TouchSensor440.DEF = "Jump_Touch";
TouchSensor440.description = "click for behavior";
Transform439.children = new MFNode();

Transform439.children[0] = TouchSensor440;

Shape Shape441 = createNode("Shape");
Shape441.DEF = "Jump";
IndexedFaceSet IndexedFaceSet442 = createNode("IndexedFaceSet");
IndexedFaceSet442.coordIndex = new MFInt32(new int[1,0,14,-1,1,14,2,-1,16,15,18,-1,16,18,17,-1,64,65,66,-1,67,68,69,-1,67,69,70,-1,71,72,73,-1,71,73,74,-1,75,76,77,-1,78,79,80,-1,78,80,81,-1,82,83,84,-1,82,84,85,-1,86,87,88,-1,89,90,91,-1,92,93,94,-1,95,96,97,-1,98,7,6,-1,98,6,99,-1,100,8,5,-1,100,5,101,-1,102,9,4,-1,102,4,103,-1,104,10,105,-1,106,11,3,-1,106,3,107,-1,108,12,109,-1,110,13,111,-1,112,27,26,-1,112,26,113,-1,114,28,25,-1,114,25,115,-1,116,24,117,-1,118,29,23,-1,118,23,119,-1,120,30,22,-1,120,22,121,-1,122,31,123,-1,124,34,33,-1,124,33,125,-1,126,35,32,-1,126,32,127,-1,128,21,129,-1,130,36,20,-1,130,20,131,-1,132,37,19,-1,132,19,133,-1,134,38,135,-1,136,40,137,-1,138,39,139,-1,53,58,59,-1,53,59,54,-1,53,52,58,-1,52,51,57,-1,52,57,58,-1,51,50,56,-1,51,56,57,-1,50,49,56,-1,49,48,63,-1,49,63,56,-1,48,47,63,-1,63,47,46,-1,63,46,62,-1,62,46,45,-1,62,45,44,-1,62,44,61,-1,61,44,60,-1,54,59,60,-1,44,43,42,-1,60,44,42,-1,41,55,54,-1,41,54,60,-1,41,60,42,-1]);
Coordinate Coordinate443 = createNode("Coordinate");
Coordinate443.point = new MFVec3f(new float[0.108,0.00195,0,0.163,0.00195,0,0.166,-0.0473,0,0.194,-0.0608,0,0.222,-0.0492,0,0.228,-0.017,0,0.228,0.175,0,0.284,0.175,0,0.284,-0.02,0,0.271,-0.0798,0,0.23,-0.104,0,0.193,-0.108,0,0.155,-0.102,0,0.117,-0.0714,0,0.108,-0.0357,0,0.563,-0.101,0,0.563,0.103,0,0.615,0.103,0,0.615,0.0803,0,0.649,0.105,0,0.696,0.105,0,0.728,0.0788,0,0.76,0.104,0,0.811,0.104,0,0.842,0.081,0,0.853,0.0416,0,0.853,-0.101,0,0.799,-0.101,0,0.799,0.0305,0,0.79,0.0544,0,0.767,0.0616,0,0.743,0.0507,0,0.734,0.0228,0,0.734,-0.101,0,0.681,-0.101,0,0.681,0.0301,0,0.673,0.0532,0,0.65,0.0611,0,0.626,0.0506,0,0.617,0.0224,0,0.617,-0.101,0,0.9,-0.182,0,0.9,0.103,0,0.952,0.103,0,0.952,0.0751,0,0.968,0.0934,0,1.01,0.11,0,1.05,0.103,0,1.07,0.0796,0,1.1,0.0251,0,1.1,-0.0222,0,1.07,-0.0788,0,1.03,-0.106,0,0.988,-0.103,0,0.953,-0.0755,0,0.953,-0.182,0,1.04,-0.000177,0,1.03,-0.0446,0,0.999,-0.0603,0,0.966,-0.0453,0,0.953,-0.000177,0,0.963,0.045,0,0.998,0.063,0,1.03,0.0462,0,0.515,-0.101,0,0.462,-0.0764,0,0.462,-0.101,0,0.388,-0.0201,0,0.388,0.103,0,0.334,0.103,0,0.334,-0.0357,0,0.394,-0.0491,0,0.388,-0.0201,0,0.334,-0.0357,0,0.339,-0.072,0,0.394,-0.0491,0,0.339,-0.072,0,0.376,-0.102,0,0.422,-0.0604,0,0.394,-0.0491,0,0.376,-0.102,0,0.428,-0.101,0,0.451,-0.0482,0,0.422,-0.0604,0,0.428,-0.101,0,0.462,-0.0764,0,0.461,-0.0177,0,0.451,-0.0482,0,0.462,-0.0764,0,0.515,0.103,0,0.461,0.103,0,0.461,-0.0177,0,0.515,0.103,0,0.461,-0.0177,0,0.462,-0.0764,0,0.515,-0.101,0,0.515,0.103,0,0.462,-0.0764,0,0.284,-0.02,0,0.228,-0.017,0,0.271,-0.0798,0,0.222,-0.0492,0,0.23,-0.104,0,0.194,-0.0608,0,0.193,-0.108,0,0.194,-0.0608,0,0.155,-0.102,0,0.166,-0.0473,0,0.117,-0.0714,0,0.166,-0.0473,0,0.108,-0.0357,0,0.166,-0.0473,0,0.799,0.0305,0,0.853,0.0416,0,0.79,0.0544,0,0.842,0.081,0,0.79,0.0544,0,0.811,0.104,0,0.767,0.0616,0,0.76,0.104,0,0.743,0.0507,0,0.728,0.0788,0,0.734,0.0228,0,0.728,0.0788,0,0.681,0.0301,0,0.734,0.0228,0,0.673,0.0532,0,0.728,0.0788,0,0.673,0.0532,0,0.696,0.105,0,0.65,0.0611,0,0.649,0.105,0,0.626,0.0506,0,0.615,0.0803,0,0.617,0.0224,0,0.615,0.0803,0,0.563,-0.101,0,0.617,0.0224,0,0.563,-0.101,0,0.615,0.0803,0]);
IndexedFaceSet442.coord = Coordinate443;

Shape441.geometry = IndexedFaceSet442;

Appearance Appearance444 = createNode("Appearance");
Material Material445 = createNode("Material");
Material445.USE = "text_color";
Appearance444.material = Material445;

Shape441.appearance = Appearance444;

Transform439.children[1] = Shape441;

Transform Transform446 = createNode("Transform");
Transform446.scale = new SFVec3f(new float[83.79,83.79,83.79]);
Transform446.translation = new SFVec3f(new float[-0.008979,1.99,4.14]);
Shape Shape447 = createNode("Shape");
Shape447.DEF = "Jump_Back";
IndexedFaceSet IndexedFaceSet448 = createNode("IndexedFaceSet");
IndexedFaceSet448.coordIndex = new MFInt32(new int[0,2,3,-1,2,0,1,-1]);
Coordinate Coordinate449 = createNode("Coordinate");
Coordinate449.point = new MFVec3f(new float[0.001296,-0.02541,-0.05,0.01335,-0.02527,-0.05,0.01328,-0.02152,-0.05,0.001229,-0.02146,-0.05]);
IndexedFaceSet448.coord = Coordinate449;

Shape447.geometry = IndexedFaceSet448;

Appearance Appearance450 = createNode("Appearance");
Material Material451 = createNode("Material");
Material451.USE = "Clear";
Appearance450.material = Material451;

Shape447.appearance = Appearance450;

Transform446.children = new MFNode();

Transform446.children[0] = Shape447;

Transform439.children[2] = Transform446;

Transform399.children[3] = Transform439;

Transform398.children = new MFNode();

Transform398.children[0] = Transform399;

Collision397.proxy = Transform398;

Group394.children[1] = Collision397;

Transform Transform452 = createNode("Transform");
Transform452.DEF = "Floor";
Transform452.scale = new SFVec3f(new float[1,0.0125,1]);
Transform452.translation = new SFVec3f(new float[0,-0.0125,0]);
Shape Shape453 = createNode("Shape");
Box Box454 = createNode("Box");
Shape453.geometry = Box454;

Appearance Appearance455 = createNode("Appearance");
Material Material456 = createNode("Material");
Appearance455.material = Material456;

Shape453.appearance = Appearance455;

Transform452.children = new MFNode();

Transform452.children[0] = Shape453;

Group394.children[2] = Transform452;

children[8] = Group394;

Group Group457 = createNode("Group");
Group457.DEF = "Animations";
Group Group458 = createNode("Group");
Group458.DEF = "Stand_Animation";
OrientationInterpolator OrientationInterpolator459 = createNode("OrientationInterpolator");
OrientationInterpolator459.DEF = "r_ankle_RotationInterpolator_Stand";
OrientationInterpolator459.key = new MFFloat(new float[0,1]);
OrientationInterpolator459.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group458.children = new MFNode();

Group458.children[0] = OrientationInterpolator459;

OrientationInterpolator OrientationInterpolator460 = createNode("OrientationInterpolator");
OrientationInterpolator460.DEF = "r_knee_RotationInterpolator_Stand";
OrientationInterpolator460.key = new MFFloat(new float[0,1]);
OrientationInterpolator460.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group458.children[1] = OrientationInterpolator460;

OrientationInterpolator OrientationInterpolator461 = createNode("OrientationInterpolator");
OrientationInterpolator461.DEF = "r_hip_RotationInterpolator_Stand";
OrientationInterpolator461.key = new MFFloat(new float[0,1]);
OrientationInterpolator461.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group458.children[2] = OrientationInterpolator461;

OrientationInterpolator OrientationInterpolator462 = createNode("OrientationInterpolator");
OrientationInterpolator462.DEF = "l_ankle_RotationInterpolator_Stand";
OrientationInterpolator462.key = new MFFloat(new float[0,1]);
OrientationInterpolator462.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group458.children[3] = OrientationInterpolator462;

OrientationInterpolator OrientationInterpolator463 = createNode("OrientationInterpolator");
OrientationInterpolator463.DEF = "l_knee_RotationInterpolator_Stand";
OrientationInterpolator463.key = new MFFloat(new float[0,1]);
OrientationInterpolator463.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group458.children[4] = OrientationInterpolator463;

OrientationInterpolator OrientationInterpolator464 = createNode("OrientationInterpolator");
OrientationInterpolator464.DEF = "l_hip_RotationInterpolator_Stand";
OrientationInterpolator464.key = new MFFloat(new float[0,1]);
OrientationInterpolator464.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group458.children[5] = OrientationInterpolator464;

OrientationInterpolator OrientationInterpolator465 = createNode("OrientationInterpolator");
OrientationInterpolator465.DEF = "lower_body_RotationInterpolator_Stand";
OrientationInterpolator465.key = new MFFloat(new float[0,1]);
OrientationInterpolator465.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group458.children[6] = OrientationInterpolator465;

OrientationInterpolator OrientationInterpolator466 = createNode("OrientationInterpolator");
OrientationInterpolator466.DEF = "r_wrist_RotationInterpolator_Stand";
OrientationInterpolator466.key = new MFFloat(new float[0,1]);
OrientationInterpolator466.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group458.children[7] = OrientationInterpolator466;

OrientationInterpolator OrientationInterpolator467 = createNode("OrientationInterpolator");
OrientationInterpolator467.DEF = "r_elbow_RotationInterpolator_Stand";
OrientationInterpolator467.key = new MFFloat(new float[0,1]);
OrientationInterpolator467.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group458.children[8] = OrientationInterpolator467;

OrientationInterpolator OrientationInterpolator468 = createNode("OrientationInterpolator");
OrientationInterpolator468.DEF = "r_shoulder_RotationInterpolator_Stand";
OrientationInterpolator468.key = new MFFloat(new float[0,1]);
OrientationInterpolator468.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group458.children[9] = OrientationInterpolator468;

OrientationInterpolator OrientationInterpolator469 = createNode("OrientationInterpolator");
OrientationInterpolator469.DEF = "l_wrist_RotationInterpolator_Stand";
OrientationInterpolator469.key = new MFFloat(new float[0,1]);
OrientationInterpolator469.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group458.children[10] = OrientationInterpolator469;

OrientationInterpolator OrientationInterpolator470 = createNode("OrientationInterpolator");
OrientationInterpolator470.DEF = "l_elbow_RotationInterpolator_Stand";
OrientationInterpolator470.key = new MFFloat(new float[0,1]);
OrientationInterpolator470.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group458.children[11] = OrientationInterpolator470;

OrientationInterpolator OrientationInterpolator471 = createNode("OrientationInterpolator");
OrientationInterpolator471.DEF = "l_shoulder_RotationInterpolator_Stand";
OrientationInterpolator471.key = new MFFloat(new float[0,1]);
OrientationInterpolator471.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group458.children[12] = OrientationInterpolator471;

OrientationInterpolator OrientationInterpolator472 = createNode("OrientationInterpolator");
OrientationInterpolator472.DEF = "head_RotationInterpolator_Stand";
OrientationInterpolator472.key = new MFFloat(new float[0,1]);
OrientationInterpolator472.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group458.children[13] = OrientationInterpolator472;

OrientationInterpolator OrientationInterpolator473 = createNode("OrientationInterpolator");
OrientationInterpolator473.DEF = "neck_RotationInterpolator_Stand";
OrientationInterpolator473.key = new MFFloat(new float[0,1]);
OrientationInterpolator473.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group458.children[14] = OrientationInterpolator473;

OrientationInterpolator OrientationInterpolator474 = createNode("OrientationInterpolator");
OrientationInterpolator474.DEF = "upper_body_RotationInterpolator_Stand";
OrientationInterpolator474.key = new MFFloat(new float[0,1]);
OrientationInterpolator474.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group458.children[15] = OrientationInterpolator474;

OrientationInterpolator OrientationInterpolator475 = createNode("OrientationInterpolator");
OrientationInterpolator475.DEF = "whole_body_RotationInterpolator_Stand";
OrientationInterpolator475.key = new MFFloat(new float[0,1]);
OrientationInterpolator475.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group458.children[16] = OrientationInterpolator475;

PositionInterpolator PositionInterpolator476 = createNode("PositionInterpolator");
PositionInterpolator476.DEF = "whole_body_TranslationInterpolator_Stand";
PositionInterpolator476.key = new MFFloat(new float[0,1]);
PositionInterpolator476.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
Group458.children[17] = PositionInterpolator476;

TimeSensor TimeSensor477 = createNode("TimeSensor");
TimeSensor477.DEF = "Stand_Time";
TimeSensor477.cycleInterval = 0.009999999776482582;
Group458.children[18] = TimeSensor477;

Group457.children = new MFNode();

Group457.children[0] = Group458;

Group Group478 = createNode("Group");
Group478.DEF = "Walk_Animation";
OrientationInterpolator OrientationInterpolator479 = createNode("OrientationInterpolator");
OrientationInterpolator479.DEF = "r_ankle_RotationInterpolator_BasicWalk";
OrientationInterpolator479.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator479.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0]);
Group478.children = new MFNode();

Group478.children[0] = OrientationInterpolator479;

OrientationInterpolator OrientationInterpolator480 = createNode("OrientationInterpolator");
OrientationInterpolator480.DEF = "r_knee_RotationInterpolator_BasicWalk";
OrientationInterpolator480.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator480.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573]);
Group478.children[1] = OrientationInterpolator480;

OrientationInterpolator OrientationInterpolator481 = createNode("OrientationInterpolator");
OrientationInterpolator481.DEF = "r_hip_RotationInterpolator_BasicWalk";
OrientationInterpolator481.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator481.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group478.children[2] = OrientationInterpolator481;

OrientationInterpolator OrientationInterpolator482 = createNode("OrientationInterpolator");
OrientationInterpolator482.DEF = "l_ankle_RotationInterpolator_BasicWalk";
OrientationInterpolator482.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator482.keyValue = new MFRotation(new float[-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714]);
Group478.children[3] = OrientationInterpolator482;

OrientationInterpolator OrientationInterpolator483 = createNode("OrientationInterpolator");
OrientationInterpolator483.DEF = "l_knee_RotationInterpolator_BasicWalk";
OrientationInterpolator483.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator483.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group478.children[4] = OrientationInterpolator483;

OrientationInterpolator OrientationInterpolator484 = createNode("OrientationInterpolator");
OrientationInterpolator484.DEF = "l_hip_RotationInterpolator_BasicWalk";
OrientationInterpolator484.key = new MFFloat(new float[0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator484.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group478.children[5] = OrientationInterpolator484;

OrientationInterpolator OrientationInterpolator485 = createNode("OrientationInterpolator");
OrientationInterpolator485.DEF = "lower_body_RotationInterpolator_BasicWalk";
OrientationInterpolator485.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator485.keyValue = new MFRotation(new float[0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group478.children[6] = OrientationInterpolator485;

OrientationInterpolator OrientationInterpolator486 = createNode("OrientationInterpolator");
OrientationInterpolator486.DEF = "r_wrist_RotationInterpolator_BasicWalk";
OrientationInterpolator486.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator486.keyValue = new MFRotation(new float[-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]);
Group478.children[7] = OrientationInterpolator486;

OrientationInterpolator OrientationInterpolator487 = createNode("OrientationInterpolator");
OrientationInterpolator487.DEF = "r_elbow_RotationInterpolator_BasicWalk";
OrientationInterpolator487.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator487.keyValue = new MFRotation(new float[-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508]);
Group478.children[8] = OrientationInterpolator487;

OrientationInterpolator OrientationInterpolator488 = createNode("OrientationInterpolator");
OrientationInterpolator488.DEF = "r_shoulder_RotationInterpolator_BasicWalk";
OrientationInterpolator488.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator488.keyValue = new MFRotation(new float[-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346]);
Group478.children[9] = OrientationInterpolator488;

OrientationInterpolator OrientationInterpolator489 = createNode("OrientationInterpolator");
OrientationInterpolator489.DEF = "l_wrist_RotationInterpolator_BasicWalk";
OrientationInterpolator489.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator489.keyValue = new MFRotation(new float[0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076]);
Group478.children[10] = OrientationInterpolator489;

OrientationInterpolator OrientationInterpolator490 = createNode("OrientationInterpolator");
OrientationInterpolator490.DEF = "l_elbow_RotationInterpolator_BasicWalk";
OrientationInterpolator490.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator490.keyValue = new MFRotation(new float[-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878]);
Group478.children[11] = OrientationInterpolator490;

OrientationInterpolator OrientationInterpolator491 = createNode("OrientationInterpolator");
OrientationInterpolator491.DEF = "l_shoulder_RotationInterpolator_BasicWalk";
OrientationInterpolator491.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator491.keyValue = new MFRotation(new float[1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189]);
Group478.children[12] = OrientationInterpolator491;

OrientationInterpolator OrientationInterpolator492 = createNode("OrientationInterpolator");
OrientationInterpolator492.DEF = "head_RotationInterpolator_BasicWalk";
OrientationInterpolator492.key = new MFFloat(new float[0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator492.keyValue = new MFRotation(new float[0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642]);
Group478.children[13] = OrientationInterpolator492;

OrientationInterpolator OrientationInterpolator493 = createNode("OrientationInterpolator");
OrientationInterpolator493.DEF = "neck_RotationInterpolator_BasicWalk";
OrientationInterpolator493.key = new MFFloat(new float[0,1]);
OrientationInterpolator493.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group478.children[14] = OrientationInterpolator493;

OrientationInterpolator OrientationInterpolator494 = createNode("OrientationInterpolator");
OrientationInterpolator494.DEF = "upper_body_RotationInterpolator_BasicWalk";
OrientationInterpolator494.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator494.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group478.children[15] = OrientationInterpolator494;

OrientationInterpolator OrientationInterpolator495 = createNode("OrientationInterpolator");
OrientationInterpolator495.DEF = "whole_body_RotationInterpolator_BasicWalk";
OrientationInterpolator495.key = new MFFloat(new float[0,1]);
OrientationInterpolator495.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group478.children[16] = OrientationInterpolator495;

PositionInterpolator PositionInterpolator496 = createNode("PositionInterpolator");
PositionInterpolator496.DEF = "whole_body_TranslationInterpolator_BasicWalk";
PositionInterpolator496.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator496.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group478.children[17] = PositionInterpolator496;

TimeSensor TimeSensor497 = createNode("TimeSensor");
TimeSensor497.DEF = "Walk_Time";
TimeSensor497.cycleInterval = 2;
TimeSensor497.loop = True;
TimeSensor497.startTime = -1;
Group478.children[18] = TimeSensor497;

Group457.children[1] = Group478;

Group Group498 = createNode("Group");
Group498.DEF = "Run_Animation";
OrientationInterpolator OrientationInterpolator499 = createNode("OrientationInterpolator");
OrientationInterpolator499.DEF = "r_ankle_RotationInterpolator_Run";
OrientationInterpolator499.key = new MFFloat(new float[0,0.4909,0.7091,0.8,0.8182,1]);
OrientationInterpolator499.keyValue = new MFRotation(new float[1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.09676,-1,0,0,0.3274,-1,0,0,0.3278,1,0,0,0.2323]);
Group498.children = new MFNode();

Group498.children[0] = OrientationInterpolator499;

OrientationInterpolator OrientationInterpolator500 = createNode("OrientationInterpolator");
OrientationInterpolator500.DEF = "r_knee_RotationInterpolator_Run";
OrientationInterpolator500.key = new MFFloat(new float[0,0.03636,0.2182,0.4909,0.7455,1]);
OrientationInterpolator500.keyValue = new MFRotation(new float[1,0,0,0.7004,1,0,0,1.011,1,0,0,1.892,1,0,0,1.188,1,0,0,0.3964,1,0,0,0.7004]);
Group498.children[1] = OrientationInterpolator500;

OrientationInterpolator OrientationInterpolator501 = createNode("OrientationInterpolator");
OrientationInterpolator501.DEF = "r_hip_RotationInterpolator_Run";
OrientationInterpolator501.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator501.keyValue = new MFRotation(new float[0.9999,0.00293,-0.00989,0.402,-1,0.004977,-0.00497,0.5943,-1,0.003265,-0.001752,1.178,-0.9999,0.00815,-0.01093,0.3031,0.9999,0.00293,-0.00989,0.402]);
Group498.children[2] = OrientationInterpolator501;

OrientationInterpolator OrientationInterpolator502 = createNode("OrientationInterpolator");
OrientationInterpolator502.DEF = "l_ankle_RotationInterpolator_Run";
OrientationInterpolator502.key = new MFFloat(new float[0,0.2182,0.3091,0.4909,1]);
OrientationInterpolator502.keyValue = new MFRotation(new float[1,0,0,0.03543,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03543]);
Group498.children[3] = OrientationInterpolator502;

OrientationInterpolator OrientationInterpolator503 = createNode("OrientationInterpolator");
OrientationInterpolator503.DEF = "l_knee_RotationInterpolator_Run";
OrientationInterpolator503.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator503.keyValue = new MFRotation(new float[1,0,0,1.108,1,0,0,0.4265,1,0,0,0.7052,1,0,0,2.179,1,0,0,1.108]);
Group498.children[4] = OrientationInterpolator503;

OrientationInterpolator OrientationInterpolator504 = createNode("OrientationInterpolator");
OrientationInterpolator504.DEF = "l_hip_RotationInterpolator_Run";
OrientationInterpolator504.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator504.keyValue = new MFRotation(new float[-0.9986,0.03354,0.04001,1.212,-0.9889,0.1328,0.06696,0.4025,0.9894,0.1453,0.009351,0.4114,-0.9963,0.07032,0.05003,0.7035,-0.9986,0.03354,0.04001,1.212]);
Group498.children[5] = OrientationInterpolator504;

OrientationInterpolator OrientationInterpolator505 = createNode("OrientationInterpolator");
OrientationInterpolator505.DEF = "lower_body_RotationInterpolator_Run";
OrientationInterpolator505.key = new MFFloat(new float[0,1]);
OrientationInterpolator505.keyValue = new MFRotation(new float[0.9969,-0.05444,0.05596,0.07687,0.9969,-0.05444,0.05596,0.07687]);
Group498.children[6] = OrientationInterpolator505;

OrientationInterpolator OrientationInterpolator506 = createNode("OrientationInterpolator");
OrientationInterpolator506.DEF = "r_wrist_RotationInterpolator_Run";
OrientationInterpolator506.key = new MFFloat(new float[0,1]);
OrientationInterpolator506.keyValue = new MFRotation(new float[-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273]);
Group498.children[7] = OrientationInterpolator506;

OrientationInterpolator OrientationInterpolator507 = createNode("OrientationInterpolator");
OrientationInterpolator507.DEF = "r_elbow_RotationInterpolator_Run";
OrientationInterpolator507.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator507.keyValue = new MFRotation(new float[0.9353,-0.2978,-0.191,4.222,-0.9362,0.2924,-0.1952,1.05,0.9941,-0.09719,-0.04725,4.512,-0.9594,0.2653,0.09579,1.525,0.9353,-0.2978,-0.191,4.222]);
Group498.children[8] = OrientationInterpolator507;

OrientationInterpolator OrientationInterpolator508 = createNode("OrientationInterpolator");
OrientationInterpolator508.DEF = "r_shoulder_RotationInterpolator_Run";
OrientationInterpolator508.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator508.keyValue = new MFRotation(new float[-1,0,0,0.6979,0.9094,0.2062,-0.3613,0.4157,0.9637,0.1537,-0.2185,1.353,0.4864,0.08841,-0.8693,0.1716,-1,0,0,0.6979]);
Group498.children[9] = OrientationInterpolator508;

OrientationInterpolator OrientationInterpolator509 = createNode("OrientationInterpolator");
OrientationInterpolator509.DEF = "l_wrist_RotationInterpolator_Run";
OrientationInterpolator509.key = new MFFloat(new float[0,1]);
OrientationInterpolator509.keyValue = new MFRotation(new float[-0.0240995,-0.999682,0.00741506,0.120409,-0.0240995,-0.999682,0.00741506,0.120409]);
Group498.children[10] = OrientationInterpolator509;

OrientationInterpolator OrientationInterpolator510 = createNode("OrientationInterpolator");
OrientationInterpolator510.DEF = "l_elbow_RotationInterpolator_Run";
OrientationInterpolator510.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator510.keyValue = new MFRotation(new float[0.9985,0.03887,0.03802,4.689,-0.965,-0.1889,-0.1821,1.415,0.9758,0.1563,0.1529,4.666,-0.9956,-0.0936,0.009826,1.126,0.9985,0.03887,0.03802,4.689]);
Group498.children[11] = OrientationInterpolator510;

OrientationInterpolator OrientationInterpolator511 = createNode("OrientationInterpolator");
OrientationInterpolator511.DEF = "l_shoulder_RotationInterpolator_Run";
OrientationInterpolator511.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator511.keyValue = new MFRotation(new float[0.9907,-0.07264,0.115,1.135,0.9291,-0.1222,0.349,0.1695,-0.9892,0.1364,-0.05394,0.5112,0.9942,-0.0002052,0.1073,0.4975,0.9907,-0.07264,0.115,1.135]);
Group498.children[12] = OrientationInterpolator511;

OrientationInterpolator OrientationInterpolator512 = createNode("OrientationInterpolator");
OrientationInterpolator512.DEF = "head_RotationInterpolator_Run";
OrientationInterpolator512.key = new MFFloat(new float[0,0.4909,1]);
OrientationInterpolator512.keyValue = new MFRotation(new float[0.6517,-0.7559,0.06211,0.2508,0.6467,0.7527,-0.1238,0.2344,0.6517,-0.7559,0.06211,0.2508]);
Group498.children[13] = OrientationInterpolator512;

OrientationInterpolator OrientationInterpolator513 = createNode("OrientationInterpolator");
OrientationInterpolator513.DEF = "neck_RotationInterpolator_Run";
OrientationInterpolator513.key = new MFFloat(new float[0,1]);
OrientationInterpolator513.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group498.children[14] = OrientationInterpolator513;

OrientationInterpolator OrientationInterpolator514 = createNode("OrientationInterpolator");
OrientationInterpolator514.DEF = "upper_body_RotationInterpolator_Run";
OrientationInterpolator514.key = new MFFloat(new float[0,0.2545,0.4909,0.7636,1]);
OrientationInterpolator514.keyValue = new MFRotation(new float[0.7651,0.6382,0.08586,0.2712,0.9999,0.002845,-0.01547,0.3756,0.7459,-0.6505,-0.1432,0.2416,0.9984,0.05536,-0.01154,0.3488,0.7651,0.6382,0.08586,0.2712]);
Group498.children[15] = OrientationInterpolator514;

OrientationInterpolator OrientationInterpolator515 = createNode("OrientationInterpolator");
OrientationInterpolator515.DEF = "whole_body_RotationInterpolator_Run";
OrientationInterpolator515.key = new MFFloat(new float[0,1]);
OrientationInterpolator515.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group498.children[16] = OrientationInterpolator515;

PositionInterpolator PositionInterpolator516 = createNode("PositionInterpolator");
PositionInterpolator516.DEF = "whole_body_TranslationInterpolator_Run";
PositionInterpolator516.key = new MFFloat(new float[0,0.2182,0.2909,0.3091,0.7091,0.8,0.8182,1]);
PositionInterpolator516.keyValue = new MFVec3f(new float[0,-0.0351,0,0,-0.0351,0,0,-0.04087,0,0,-0.04886,0,0,-0.04051,0,0,-0.03666,0,0,-0.03666,0,0,-0.0351,0]);
Group498.children[17] = PositionInterpolator516;

TimeSensor TimeSensor517 = createNode("TimeSensor");
TimeSensor517.DEF = "Run_Time";
TimeSensor517.loop = True;
TimeSensor517.startTime = -1;
Group498.children[18] = TimeSensor517;

Group457.children[2] = Group498;

Group Group518 = createNode("Group");
Group518.DEF = "Jump_Animation";
OrientationInterpolator OrientationInterpolator519 = createNode("OrientationInterpolator");
OrientationInterpolator519.DEF = "r_ankle_RotationInterpolator_Jump";
OrientationInterpolator519.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator519.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,0.3001,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0]);
Group518.children = new MFNode();

Group518.children[0] = OrientationInterpolator519;

OrientationInterpolator OrientationInterpolator520 = createNode("OrientationInterpolator");
OrientationInterpolator520.DEF = "r_knee_RotationInterpolator_Jump";
OrientationInterpolator520.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator520.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.005,1,0,0,2.005,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0]);
Group518.children[1] = OrientationInterpolator520;

OrientationInterpolator OrientationInterpolator521 = createNode("OrientationInterpolator");
OrientationInterpolator521.DEF = "r_hip_RotationInterpolator_Jump";
OrientationInterpolator521.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator521.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,4.433,1,0,0,4.433,1,0,0,4.647,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0]);
Group518.children[2] = OrientationInterpolator521;

OrientationInterpolator OrientationInterpolator522 = createNode("OrientationInterpolator");
OrientationInterpolator522.DEF = "l_ankle_RotationInterpolator_Jump";
OrientationInterpolator522.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator522.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0]);
Group518.children[3] = OrientationInterpolator522;

OrientationInterpolator OrientationInterpolator523 = createNode("OrientationInterpolator");
OrientationInterpolator523.DEF = "l_knee_RotationInterpolator_Jump";
OrientationInterpolator523.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator523.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0]);
Group518.children[4] = OrientationInterpolator523;

OrientationInterpolator OrientationInterpolator524 = createNode("OrientationInterpolator");
OrientationInterpolator524.DEF = "l_hip_RotationInterpolator_Jump";
OrientationInterpolator524.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator524.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0]);
Group518.children[5] = OrientationInterpolator524;

OrientationInterpolator OrientationInterpolator525 = createNode("OrientationInterpolator");
OrientationInterpolator525.DEF = "lower_body_RotationInterpolator_Jump";
OrientationInterpolator525.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator525.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0]);
Group518.children[6] = OrientationInterpolator525;

OrientationInterpolator OrientationInterpolator526 = createNode("OrientationInterpolator");
OrientationInterpolator526.DEF = "r_wrist_RotationInterpolator_Jump";
OrientationInterpolator526.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator526.keyValue = new MFRotation(new float[0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group518.children[7] = OrientationInterpolator526;

OrientationInterpolator OrientationInterpolator527 = createNode("OrientationInterpolator");
OrientationInterpolator527.DEF = "r_elbow_RotationInterpolator_Jump";
OrientationInterpolator527.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator527.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group518.children[8] = OrientationInterpolator527;

OrientationInterpolator OrientationInterpolator528 = createNode("OrientationInterpolator");
OrientationInterpolator528.DEF = "r_shoulder_RotationInterpolator_Jump";
OrientationInterpolator528.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator528.keyValue = new MFRotation(new float[0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group518.children[9] = OrientationInterpolator528;

OrientationInterpolator OrientationInterpolator529 = createNode("OrientationInterpolator");
OrientationInterpolator529.DEF = "l_wrist_RotationInterpolator_Jump";
OrientationInterpolator529.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator529.keyValue = new MFRotation(new float[0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0]);
Group518.children[10] = OrientationInterpolator529;

OrientationInterpolator OrientationInterpolator530 = createNode("OrientationInterpolator");
OrientationInterpolator530.DEF = "l_elbow_RotationInterpolator_Jump";
OrientationInterpolator530.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator530.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0]);
Group518.children[11] = OrientationInterpolator530;

OrientationInterpolator OrientationInterpolator531 = createNode("OrientationInterpolator");
OrientationInterpolator531.DEF = "l_shoulder_RotationInterpolator_Jump";
OrientationInterpolator531.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator531.keyValue = new MFRotation(new float[0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0]);
Group518.children[12] = OrientationInterpolator531;

OrientationInterpolator OrientationInterpolator532 = createNode("OrientationInterpolator");
OrientationInterpolator532.DEF = "head_RotationInterpolator_Jump";
OrientationInterpolator532.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator532.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0]);
Group518.children[13] = OrientationInterpolator532;

OrientationInterpolator OrientationInterpolator533 = createNode("OrientationInterpolator");
OrientationInterpolator533.DEF = "neck_RotationInterpolator_Jump";
OrientationInterpolator533.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator533.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0]);
Group518.children[14] = OrientationInterpolator533;

OrientationInterpolator OrientationInterpolator534 = createNode("OrientationInterpolator");
OrientationInterpolator534.DEF = "upper_body_RotationInterpolator_Jump";
OrientationInterpolator534.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,0.88,1]);
OrientationInterpolator534.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.038,1,0,0,1.038,-1,0,0,0.1057,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0]);
Group518.children[15] = OrientationInterpolator534;

OrientationInterpolator OrientationInterpolator535 = createNode("OrientationInterpolator");
OrientationInterpolator535.DEF = "whole_body_RotationInterpolator_Jump";
OrientationInterpolator535.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,1]);
OrientationInterpolator535.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group518.children[16] = OrientationInterpolator535;

PositionInterpolator PositionInterpolator536 = createNode("PositionInterpolator");
PositionInterpolator536.DEF = "whole_body_TranslationInterpolator_Jump";
PositionInterpolator536.key = new MFFloat(new float[0,0.04,0.08,0.12,0.16,0.2,0.24,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.8,0.84,0.88,0.92,0.96,1]);
PositionInterpolator536.keyValue = new MFVec3f(new float[0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.3269,-0.1499,-0.0008616,-0.13,-0.06358,-0.0005128,-0.03123,-0.05488,0.0004779,0.053,0.02732,0.0001728,0.4148,0.006873,0,0.03045,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0]);
Group518.children[17] = PositionInterpolator536;

TimeSensor TimeSensor537 = createNode("TimeSensor");
TimeSensor537.DEF = "Jump_Time";
TimeSensor537.cycleInterval = 2;
TimeSensor537.startTime = -1;
Group518.children[18] = TimeSensor537;

Group457.children[3] = Group518;

children[9] = Group457;

ROUTE ROUTE538 = createNode("ROUTE");
ROUTE538.fromField = "position_changed";
ROUTE538.fromNode = "HudProx";
ROUTE538.toField = "set_translation";
ROUTE538.toNode = "HudXform";
children[10] = ROUTE538;

ROUTE ROUTE539 = createNode("ROUTE");
ROUTE539.fromField = "orientation_changed";
ROUTE539.fromNode = "HudProx";
ROUTE539.toField = "set_rotation";
ROUTE539.toNode = "HudXform";
children[11] = ROUTE539;

ROUTE ROUTE540 = createNode("ROUTE");
ROUTE540.fromField = "touchTime";
ROUTE540.fromNode = "Stand_Touch";
ROUTE540.toField = "stopTime";
ROUTE540.toNode = "Walk_Time";
children[12] = ROUTE540;

ROUTE ROUTE541 = createNode("ROUTE");
ROUTE541.fromField = "touchTime";
ROUTE541.fromNode = "Stand_Touch";
ROUTE541.toField = "stopTime";
ROUTE541.toNode = "Run_Time";
children[13] = ROUTE541;

ROUTE ROUTE542 = createNode("ROUTE");
ROUTE542.fromField = "touchTime";
ROUTE542.fromNode = "Stand_Touch";
ROUTE542.toField = "stopTime";
ROUTE542.toNode = "Jump_Time";
children[14] = ROUTE542;

ROUTE ROUTE543 = createNode("ROUTE");
ROUTE543.fromField = "touchTime";
ROUTE543.fromNode = "Stand_Touch";
ROUTE543.toField = "startTime";
ROUTE543.toNode = "Stand_Time";
children[15] = ROUTE543;

ROUTE ROUTE544 = createNode("ROUTE");
ROUTE544.fromField = "touchTime";
ROUTE544.fromNode = "Walk_Touch";
ROUTE544.toField = "stopTime";
ROUTE544.toNode = "Stand_Time";
children[16] = ROUTE544;

ROUTE ROUTE545 = createNode("ROUTE");
ROUTE545.fromField = "touchTime";
ROUTE545.fromNode = "Walk_Touch";
ROUTE545.toField = "stopTime";
ROUTE545.toNode = "Run_Time";
children[17] = ROUTE545;

ROUTE ROUTE546 = createNode("ROUTE");
ROUTE546.fromField = "touchTime";
ROUTE546.fromNode = "Walk_Touch";
ROUTE546.toField = "stopTime";
ROUTE546.toNode = "Jump_Time";
children[18] = ROUTE546;

ROUTE ROUTE547 = createNode("ROUTE");
ROUTE547.fromField = "touchTime";
ROUTE547.fromNode = "Walk_Touch";
ROUTE547.toField = "startTime";
ROUTE547.toNode = "Walk_Time";
children[19] = ROUTE547;

ROUTE ROUTE548 = createNode("ROUTE");
ROUTE548.fromField = "touchTime";
ROUTE548.fromNode = "Run_Touch";
ROUTE548.toField = "stopTime";
ROUTE548.toNode = "Stand_Time";
children[20] = ROUTE548;

ROUTE ROUTE549 = createNode("ROUTE");
ROUTE549.fromField = "touchTime";
ROUTE549.fromNode = "Run_Touch";
ROUTE549.toField = "stopTime";
ROUTE549.toNode = "Walk_Time";
children[21] = ROUTE549;

ROUTE ROUTE550 = createNode("ROUTE");
ROUTE550.fromField = "touchTime";
ROUTE550.fromNode = "Run_Touch";
ROUTE550.toField = "stopTime";
ROUTE550.toNode = "Jump_Time";
children[22] = ROUTE550;

ROUTE ROUTE551 = createNode("ROUTE");
ROUTE551.fromField = "touchTime";
ROUTE551.fromNode = "Run_Touch";
ROUTE551.toField = "startTime";
ROUTE551.toNode = "Run_Time";
children[23] = ROUTE551;

ROUTE ROUTE552 = createNode("ROUTE");
ROUTE552.fromField = "touchTime";
ROUTE552.fromNode = "Jump_Touch";
ROUTE552.toField = "stopTime";
ROUTE552.toNode = "Stand_Time";
children[24] = ROUTE552;

ROUTE ROUTE553 = createNode("ROUTE");
ROUTE553.fromField = "touchTime";
ROUTE553.fromNode = "Jump_Touch";
ROUTE553.toField = "stopTime";
ROUTE553.toNode = "Walk_Time";
children[25] = ROUTE553;

ROUTE ROUTE554 = createNode("ROUTE");
ROUTE554.fromField = "touchTime";
ROUTE554.fromNode = "Jump_Touch";
ROUTE554.toField = "stopTime";
ROUTE554.toNode = "Run_Time";
children[26] = ROUTE554;

ROUTE ROUTE555 = createNode("ROUTE");
ROUTE555.fromField = "touchTime";
ROUTE555.fromNode = "Jump_Touch";
ROUTE555.toField = "startTime";
ROUTE555.toNode = "Jump_Time";
children[27] = ROUTE555;

ROUTE ROUTE556 = createNode("ROUTE");
ROUTE556.fromField = "fraction_changed";
ROUTE556.fromNode = "Stand_Time";
ROUTE556.toField = "set_fraction";
ROUTE556.toNode = "r_ankle_RotationInterpolator_Stand";
children[28] = ROUTE556;

ROUTE ROUTE557 = createNode("ROUTE");
ROUTE557.fromField = "fraction_changed";
ROUTE557.fromNode = "Stand_Time";
ROUTE557.toField = "set_fraction";
ROUTE557.toNode = "r_knee_RotationInterpolator_Stand";
children[29] = ROUTE557;

ROUTE ROUTE558 = createNode("ROUTE");
ROUTE558.fromField = "fraction_changed";
ROUTE558.fromNode = "Stand_Time";
ROUTE558.toField = "set_fraction";
ROUTE558.toNode = "r_hip_RotationInterpolator_Stand";
children[30] = ROUTE558;

ROUTE ROUTE559 = createNode("ROUTE");
ROUTE559.fromField = "fraction_changed";
ROUTE559.fromNode = "Stand_Time";
ROUTE559.toField = "set_fraction";
ROUTE559.toNode = "l_ankle_RotationInterpolator_Stand";
children[31] = ROUTE559;

ROUTE ROUTE560 = createNode("ROUTE");
ROUTE560.fromField = "fraction_changed";
ROUTE560.fromNode = "Stand_Time";
ROUTE560.toField = "set_fraction";
ROUTE560.toNode = "l_knee_RotationInterpolator_Stand";
children[32] = ROUTE560;

ROUTE ROUTE561 = createNode("ROUTE");
ROUTE561.fromField = "fraction_changed";
ROUTE561.fromNode = "Stand_Time";
ROUTE561.toField = "set_fraction";
ROUTE561.toNode = "l_hip_RotationInterpolator_Stand";
children[33] = ROUTE561;

ROUTE ROUTE562 = createNode("ROUTE");
ROUTE562.fromField = "fraction_changed";
ROUTE562.fromNode = "Stand_Time";
ROUTE562.toField = "set_fraction";
ROUTE562.toNode = "lower_body_RotationInterpolator_Stand";
children[34] = ROUTE562;

ROUTE ROUTE563 = createNode("ROUTE");
ROUTE563.fromField = "fraction_changed";
ROUTE563.fromNode = "Stand_Time";
ROUTE563.toField = "set_fraction";
ROUTE563.toNode = "r_wrist_RotationInterpolator_Stand";
children[35] = ROUTE563;

ROUTE ROUTE564 = createNode("ROUTE");
ROUTE564.fromField = "fraction_changed";
ROUTE564.fromNode = "Stand_Time";
ROUTE564.toField = "set_fraction";
ROUTE564.toNode = "r_elbow_RotationInterpolator_Stand";
children[36] = ROUTE564;

ROUTE ROUTE565 = createNode("ROUTE");
ROUTE565.fromField = "fraction_changed";
ROUTE565.fromNode = "Stand_Time";
ROUTE565.toField = "set_fraction";
ROUTE565.toNode = "r_shoulder_RotationInterpolator_Stand";
children[37] = ROUTE565;

ROUTE ROUTE566 = createNode("ROUTE");
ROUTE566.fromField = "fraction_changed";
ROUTE566.fromNode = "Stand_Time";
ROUTE566.toField = "set_fraction";
ROUTE566.toNode = "l_wrist_RotationInterpolator_Stand";
children[38] = ROUTE566;

ROUTE ROUTE567 = createNode("ROUTE");
ROUTE567.fromField = "fraction_changed";
ROUTE567.fromNode = "Stand_Time";
ROUTE567.toField = "set_fraction";
ROUTE567.toNode = "l_elbow_RotationInterpolator_Stand";
children[39] = ROUTE567;

ROUTE ROUTE568 = createNode("ROUTE");
ROUTE568.fromField = "fraction_changed";
ROUTE568.fromNode = "Stand_Time";
ROUTE568.toField = "set_fraction";
ROUTE568.toNode = "l_shoulder_RotationInterpolator_Stand";
children[40] = ROUTE568;

ROUTE ROUTE569 = createNode("ROUTE");
ROUTE569.fromField = "fraction_changed";
ROUTE569.fromNode = "Stand_Time";
ROUTE569.toField = "set_fraction";
ROUTE569.toNode = "head_RotationInterpolator_Stand";
children[41] = ROUTE569;

ROUTE ROUTE570 = createNode("ROUTE");
ROUTE570.fromField = "fraction_changed";
ROUTE570.fromNode = "Stand_Time";
ROUTE570.toField = "set_fraction";
ROUTE570.toNode = "neck_RotationInterpolator_Stand";
children[42] = ROUTE570;

ROUTE ROUTE571 = createNode("ROUTE");
ROUTE571.fromField = "fraction_changed";
ROUTE571.fromNode = "Stand_Time";
ROUTE571.toField = "set_fraction";
ROUTE571.toNode = "upper_body_RotationInterpolator_Stand";
children[43] = ROUTE571;

ROUTE ROUTE572 = createNode("ROUTE");
ROUTE572.fromField = "fraction_changed";
ROUTE572.fromNode = "Stand_Time";
ROUTE572.toField = "set_fraction";
ROUTE572.toNode = "whole_body_RotationInterpolator_Stand";
children[44] = ROUTE572;

ROUTE ROUTE573 = createNode("ROUTE");
ROUTE573.fromField = "fraction_changed";
ROUTE573.fromNode = "Stand_Time";
ROUTE573.toField = "set_fraction";
ROUTE573.toNode = "whole_body_TranslationInterpolator_Stand";
children[45] = ROUTE573;

ROUTE ROUTE574 = createNode("ROUTE");
ROUTE574.fromField = "value_changed";
ROUTE574.fromNode = "r_ankle_RotationInterpolator_Stand";
ROUTE574.toField = "set_rotation";
ROUTE574.toNode = "hanim_r_ankle";
children[46] = ROUTE574;

ROUTE ROUTE575 = createNode("ROUTE");
ROUTE575.fromField = "value_changed";
ROUTE575.fromNode = "r_knee_RotationInterpolator_Stand";
ROUTE575.toField = "set_rotation";
ROUTE575.toNode = "hanim_r_knee";
children[47] = ROUTE575;

ROUTE ROUTE576 = createNode("ROUTE");
ROUTE576.fromField = "value_changed";
ROUTE576.fromNode = "r_hip_RotationInterpolator_Stand";
ROUTE576.toField = "set_rotation";
ROUTE576.toNode = "hanim_r_hip";
children[48] = ROUTE576;

ROUTE ROUTE577 = createNode("ROUTE");
ROUTE577.fromField = "value_changed";
ROUTE577.fromNode = "l_ankle_RotationInterpolator_Stand";
ROUTE577.toField = "set_rotation";
ROUTE577.toNode = "hanim_l_ankle";
children[49] = ROUTE577;

ROUTE ROUTE578 = createNode("ROUTE");
ROUTE578.fromField = "value_changed";
ROUTE578.fromNode = "l_knee_RotationInterpolator_Stand";
ROUTE578.toField = "set_rotation";
ROUTE578.toNode = "hanim_l_knee";
children[50] = ROUTE578;

ROUTE ROUTE579 = createNode("ROUTE");
ROUTE579.fromField = "value_changed";
ROUTE579.fromNode = "l_hip_RotationInterpolator_Stand";
ROUTE579.toField = "set_rotation";
ROUTE579.toNode = "hanim_l_hip";
children[51] = ROUTE579;

ROUTE ROUTE580 = createNode("ROUTE");
ROUTE580.fromField = "value_changed";
ROUTE580.fromNode = "lower_body_RotationInterpolator_Stand";
ROUTE580.toField = "set_rotation";
ROUTE580.toNode = "hanim_sacroiliac";
children[52] = ROUTE580;

ROUTE ROUTE581 = createNode("ROUTE");
ROUTE581.fromField = "value_changed";
ROUTE581.fromNode = "r_wrist_RotationInterpolator_Stand";
ROUTE581.toField = "set_rotation";
ROUTE581.toNode = "hanim_r_wrist";
children[53] = ROUTE581;

ROUTE ROUTE582 = createNode("ROUTE");
ROUTE582.fromField = "value_changed";
ROUTE582.fromNode = "r_elbow_RotationInterpolator_Stand";
ROUTE582.toField = "set_rotation";
ROUTE582.toNode = "hanim_r_elbow";
children[54] = ROUTE582;

ROUTE ROUTE583 = createNode("ROUTE");
ROUTE583.fromField = "value_changed";
ROUTE583.fromNode = "r_shoulder_RotationInterpolator_Stand";
ROUTE583.toField = "set_rotation";
ROUTE583.toNode = "hanim_r_shoulder";
children[55] = ROUTE583;

ROUTE ROUTE584 = createNode("ROUTE");
ROUTE584.fromField = "value_changed";
ROUTE584.fromNode = "l_wrist_RotationInterpolator_Stand";
ROUTE584.toField = "set_rotation";
ROUTE584.toNode = "hanim_l_wrist";
children[56] = ROUTE584;

ROUTE ROUTE585 = createNode("ROUTE");
ROUTE585.fromField = "value_changed";
ROUTE585.fromNode = "l_elbow_RotationInterpolator_Stand";
ROUTE585.toField = "set_rotation";
ROUTE585.toNode = "hanim_l_elbow";
children[57] = ROUTE585;

ROUTE ROUTE586 = createNode("ROUTE");
ROUTE586.fromField = "value_changed";
ROUTE586.fromNode = "l_shoulder_RotationInterpolator_Stand";
ROUTE586.toField = "set_rotation";
ROUTE586.toNode = "hanim_l_shoulder";
children[58] = ROUTE586;

ROUTE ROUTE587 = createNode("ROUTE");
ROUTE587.fromField = "value_changed";
ROUTE587.fromNode = "head_RotationInterpolator_Stand";
ROUTE587.toField = "set_rotation";
ROUTE587.toNode = "hanim_skullbase";
children[59] = ROUTE587;

ROUTE ROUTE588 = createNode("ROUTE");
ROUTE588.fromField = "value_changed";
ROUTE588.fromNode = "neck_RotationInterpolator_Stand";
ROUTE588.toField = "set_rotation";
ROUTE588.toNode = "hanim_vc4";
children[60] = ROUTE588;

ROUTE ROUTE589 = createNode("ROUTE");
ROUTE589.fromField = "value_changed";
ROUTE589.fromNode = "upper_body_RotationInterpolator_Stand";
ROUTE589.toField = "set_rotation";
ROUTE589.toNode = "hanim_vl1";
children[61] = ROUTE589;

ROUTE ROUTE590 = createNode("ROUTE");
ROUTE590.fromField = "value_changed";
ROUTE590.fromNode = "whole_body_RotationInterpolator_Stand";
ROUTE590.toField = "set_rotation";
ROUTE590.toNode = "hanim_humanoid_root";
children[62] = ROUTE590;

ROUTE ROUTE591 = createNode("ROUTE");
ROUTE591.fromField = "value_changed";
ROUTE591.fromNode = "whole_body_TranslationInterpolator_Stand";
ROUTE591.toField = "set_translation";
ROUTE591.toNode = "hanim_humanoid_root";
children[63] = ROUTE591;

ROUTE ROUTE592 = createNode("ROUTE");
ROUTE592.fromField = "fraction_changed";
ROUTE592.fromNode = "Walk_Time";
ROUTE592.toField = "set_fraction";
ROUTE592.toNode = "r_ankle_RotationInterpolator_BasicWalk";
children[64] = ROUTE592;

ROUTE ROUTE593 = createNode("ROUTE");
ROUTE593.fromField = "fraction_changed";
ROUTE593.fromNode = "Walk_Time";
ROUTE593.toField = "set_fraction";
ROUTE593.toNode = "r_knee_RotationInterpolator_BasicWalk";
children[65] = ROUTE593;

ROUTE ROUTE594 = createNode("ROUTE");
ROUTE594.fromField = "fraction_changed";
ROUTE594.fromNode = "Walk_Time";
ROUTE594.toField = "set_fraction";
ROUTE594.toNode = "r_hip_RotationInterpolator_BasicWalk";
children[66] = ROUTE594;

ROUTE ROUTE595 = createNode("ROUTE");
ROUTE595.fromField = "fraction_changed";
ROUTE595.fromNode = "Walk_Time";
ROUTE595.toField = "set_fraction";
ROUTE595.toNode = "l_ankle_RotationInterpolator_BasicWalk";
children[67] = ROUTE595;

ROUTE ROUTE596 = createNode("ROUTE");
ROUTE596.fromField = "fraction_changed";
ROUTE596.fromNode = "Walk_Time";
ROUTE596.toField = "set_fraction";
ROUTE596.toNode = "l_knee_RotationInterpolator_BasicWalk";
children[68] = ROUTE596;

ROUTE ROUTE597 = createNode("ROUTE");
ROUTE597.fromField = "fraction_changed";
ROUTE597.fromNode = "Walk_Time";
ROUTE597.toField = "set_fraction";
ROUTE597.toNode = "l_hip_RotationInterpolator_BasicWalk";
children[69] = ROUTE597;

ROUTE ROUTE598 = createNode("ROUTE");
ROUTE598.fromField = "fraction_changed";
ROUTE598.fromNode = "Walk_Time";
ROUTE598.toField = "set_fraction";
ROUTE598.toNode = "lower_body_RotationInterpolator_BasicWalk";
children[70] = ROUTE598;

ROUTE ROUTE599 = createNode("ROUTE");
ROUTE599.fromField = "fraction_changed";
ROUTE599.fromNode = "Walk_Time";
ROUTE599.toField = "set_fraction";
ROUTE599.toNode = "r_wrist_RotationInterpolator_BasicWalk";
children[71] = ROUTE599;

ROUTE ROUTE600 = createNode("ROUTE");
ROUTE600.fromField = "fraction_changed";
ROUTE600.fromNode = "Walk_Time";
ROUTE600.toField = "set_fraction";
ROUTE600.toNode = "r_elbow_RotationInterpolator_BasicWalk";
children[72] = ROUTE600;

ROUTE ROUTE601 = createNode("ROUTE");
ROUTE601.fromField = "fraction_changed";
ROUTE601.fromNode = "Walk_Time";
ROUTE601.toField = "set_fraction";
ROUTE601.toNode = "r_shoulder_RotationInterpolator_BasicWalk";
children[73] = ROUTE601;

ROUTE ROUTE602 = createNode("ROUTE");
ROUTE602.fromField = "fraction_changed";
ROUTE602.fromNode = "Walk_Time";
ROUTE602.toField = "set_fraction";
ROUTE602.toNode = "l_wrist_RotationInterpolator_BasicWalk";
children[74] = ROUTE602;

ROUTE ROUTE603 = createNode("ROUTE");
ROUTE603.fromField = "fraction_changed";
ROUTE603.fromNode = "Walk_Time";
ROUTE603.toField = "set_fraction";
ROUTE603.toNode = "l_elbow_RotationInterpolator_BasicWalk";
children[75] = ROUTE603;

ROUTE ROUTE604 = createNode("ROUTE");
ROUTE604.fromField = "fraction_changed";
ROUTE604.fromNode = "Walk_Time";
ROUTE604.toField = "set_fraction";
ROUTE604.toNode = "l_shoulder_RotationInterpolator_BasicWalk";
children[76] = ROUTE604;

ROUTE ROUTE605 = createNode("ROUTE");
ROUTE605.fromField = "fraction_changed";
ROUTE605.fromNode = "Walk_Time";
ROUTE605.toField = "set_fraction";
ROUTE605.toNode = "head_RotationInterpolator_BasicWalk";
children[77] = ROUTE605;

ROUTE ROUTE606 = createNode("ROUTE");
ROUTE606.fromField = "fraction_changed";
ROUTE606.fromNode = "Walk_Time";
ROUTE606.toField = "set_fraction";
ROUTE606.toNode = "neck_RotationInterpolator_BasicWalk";
children[78] = ROUTE606;

ROUTE ROUTE607 = createNode("ROUTE");
ROUTE607.fromField = "fraction_changed";
ROUTE607.fromNode = "Walk_Time";
ROUTE607.toField = "set_fraction";
ROUTE607.toNode = "upper_body_RotationInterpolator_BasicWalk";
children[79] = ROUTE607;

ROUTE ROUTE608 = createNode("ROUTE");
ROUTE608.fromField = "fraction_changed";
ROUTE608.fromNode = "Walk_Time";
ROUTE608.toField = "set_fraction";
ROUTE608.toNode = "whole_body_RotationInterpolator_BasicWalk";
children[80] = ROUTE608;

ROUTE ROUTE609 = createNode("ROUTE");
ROUTE609.fromField = "fraction_changed";
ROUTE609.fromNode = "Walk_Time";
ROUTE609.toField = "set_fraction";
ROUTE609.toNode = "whole_body_TranslationInterpolator_BasicWalk";
children[81] = ROUTE609;

ROUTE ROUTE610 = createNode("ROUTE");
ROUTE610.fromField = "value_changed";
ROUTE610.fromNode = "r_ankle_RotationInterpolator_BasicWalk";
ROUTE610.toField = "set_rotation";
ROUTE610.toNode = "hanim_r_ankle";
children[82] = ROUTE610;

ROUTE ROUTE611 = createNode("ROUTE");
ROUTE611.fromField = "value_changed";
ROUTE611.fromNode = "r_knee_RotationInterpolator_BasicWalk";
ROUTE611.toField = "set_rotation";
ROUTE611.toNode = "hanim_r_knee";
children[83] = ROUTE611;

ROUTE ROUTE612 = createNode("ROUTE");
ROUTE612.fromField = "value_changed";
ROUTE612.fromNode = "r_hip_RotationInterpolator_BasicWalk";
ROUTE612.toField = "set_rotation";
ROUTE612.toNode = "hanim_r_hip";
children[84] = ROUTE612;

ROUTE ROUTE613 = createNode("ROUTE");
ROUTE613.fromField = "value_changed";
ROUTE613.fromNode = "l_ankle_RotationInterpolator_BasicWalk";
ROUTE613.toField = "set_rotation";
ROUTE613.toNode = "hanim_l_ankle";
children[85] = ROUTE613;

ROUTE ROUTE614 = createNode("ROUTE");
ROUTE614.fromField = "value_changed";
ROUTE614.fromNode = "l_knee_RotationInterpolator_BasicWalk";
ROUTE614.toField = "set_rotation";
ROUTE614.toNode = "hanim_l_knee";
children[86] = ROUTE614;

ROUTE ROUTE615 = createNode("ROUTE");
ROUTE615.fromField = "value_changed";
ROUTE615.fromNode = "l_hip_RotationInterpolator_BasicWalk";
ROUTE615.toField = "set_rotation";
ROUTE615.toNode = "hanim_l_hip";
children[87] = ROUTE615;

ROUTE ROUTE616 = createNode("ROUTE");
ROUTE616.fromField = "value_changed";
ROUTE616.fromNode = "lower_body_RotationInterpolator_BasicWalk";
ROUTE616.toField = "set_rotation";
ROUTE616.toNode = "hanim_sacroiliac";
children[88] = ROUTE616;

ROUTE ROUTE617 = createNode("ROUTE");
ROUTE617.fromField = "value_changed";
ROUTE617.fromNode = "r_wrist_RotationInterpolator_BasicWalk";
ROUTE617.toField = "set_rotation";
ROUTE617.toNode = "hanim_r_wrist";
children[89] = ROUTE617;

ROUTE ROUTE618 = createNode("ROUTE");
ROUTE618.fromField = "value_changed";
ROUTE618.fromNode = "r_elbow_RotationInterpolator_BasicWalk";
ROUTE618.toField = "set_rotation";
ROUTE618.toNode = "hanim_r_elbow";
children[90] = ROUTE618;

ROUTE ROUTE619 = createNode("ROUTE");
ROUTE619.fromField = "value_changed";
ROUTE619.fromNode = "r_shoulder_RotationInterpolator_BasicWalk";
ROUTE619.toField = "set_rotation";
ROUTE619.toNode = "hanim_r_shoulder";
children[91] = ROUTE619;

ROUTE ROUTE620 = createNode("ROUTE");
ROUTE620.fromField = "value_changed";
ROUTE620.fromNode = "l_wrist_RotationInterpolator_BasicWalk";
ROUTE620.toField = "set_rotation";
ROUTE620.toNode = "hanim_l_wrist";
children[92] = ROUTE620;

ROUTE ROUTE621 = createNode("ROUTE");
ROUTE621.fromField = "value_changed";
ROUTE621.fromNode = "l_elbow_RotationInterpolator_BasicWalk";
ROUTE621.toField = "set_rotation";
ROUTE621.toNode = "hanim_l_elbow";
children[93] = ROUTE621;

ROUTE ROUTE622 = createNode("ROUTE");
ROUTE622.fromField = "value_changed";
ROUTE622.fromNode = "l_shoulder_RotationInterpolator_BasicWalk";
ROUTE622.toField = "set_rotation";
ROUTE622.toNode = "hanim_l_shoulder";
children[94] = ROUTE622;

ROUTE ROUTE623 = createNode("ROUTE");
ROUTE623.fromField = "value_changed";
ROUTE623.fromNode = "head_RotationInterpolator_BasicWalk";
ROUTE623.toField = "set_rotation";
ROUTE623.toNode = "hanim_skullbase";
children[95] = ROUTE623;

ROUTE ROUTE624 = createNode("ROUTE");
ROUTE624.fromField = "value_changed";
ROUTE624.fromNode = "neck_RotationInterpolator_BasicWalk";
ROUTE624.toField = "set_rotation";
ROUTE624.toNode = "hanim_vc4";
children[96] = ROUTE624;

ROUTE ROUTE625 = createNode("ROUTE");
ROUTE625.fromField = "value_changed";
ROUTE625.fromNode = "upper_body_RotationInterpolator_BasicWalk";
ROUTE625.toField = "set_rotation";
ROUTE625.toNode = "hanim_vl1";
children[97] = ROUTE625;

ROUTE ROUTE626 = createNode("ROUTE");
ROUTE626.fromField = "value_changed";
ROUTE626.fromNode = "whole_body_RotationInterpolator_BasicWalk";
ROUTE626.toField = "set_rotation";
ROUTE626.toNode = "hanim_humanoid_root";
children[98] = ROUTE626;

ROUTE ROUTE627 = createNode("ROUTE");
ROUTE627.fromField = "value_changed";
ROUTE627.fromNode = "whole_body_TranslationInterpolator_BasicWalk";
ROUTE627.toField = "set_translation";
ROUTE627.toNode = "hanim_humanoid_root";
children[99] = ROUTE627;

ROUTE ROUTE628 = createNode("ROUTE");
ROUTE628.fromField = "fraction_changed";
ROUTE628.fromNode = "Run_Time";
ROUTE628.toField = "set_fraction";
ROUTE628.toNode = "r_ankle_RotationInterpolator_Run";
children[100] = ROUTE628;

ROUTE ROUTE629 = createNode("ROUTE");
ROUTE629.fromField = "fraction_changed";
ROUTE629.fromNode = "Run_Time";
ROUTE629.toField = "set_fraction";
ROUTE629.toNode = "r_knee_RotationInterpolator_Run";
children[101] = ROUTE629;

ROUTE ROUTE630 = createNode("ROUTE");
ROUTE630.fromField = "fraction_changed";
ROUTE630.fromNode = "Run_Time";
ROUTE630.toField = "set_fraction";
ROUTE630.toNode = "r_hip_RotationInterpolator_Run";
children[102] = ROUTE630;

ROUTE ROUTE631 = createNode("ROUTE");
ROUTE631.fromField = "fraction_changed";
ROUTE631.fromNode = "Run_Time";
ROUTE631.toField = "set_fraction";
ROUTE631.toNode = "l_ankle_RotationInterpolator_Run";
children[103] = ROUTE631;

ROUTE ROUTE632 = createNode("ROUTE");
ROUTE632.fromField = "fraction_changed";
ROUTE632.fromNode = "Run_Time";
ROUTE632.toField = "set_fraction";
ROUTE632.toNode = "l_knee_RotationInterpolator_Run";
children[104] = ROUTE632;

ROUTE ROUTE633 = createNode("ROUTE");
ROUTE633.fromField = "fraction_changed";
ROUTE633.fromNode = "Run_Time";
ROUTE633.toField = "set_fraction";
ROUTE633.toNode = "l_hip_RotationInterpolator_Run";
children[105] = ROUTE633;

ROUTE ROUTE634 = createNode("ROUTE");
ROUTE634.fromField = "fraction_changed";
ROUTE634.fromNode = "Run_Time";
ROUTE634.toField = "set_fraction";
ROUTE634.toNode = "lower_body_RotationInterpolator_Run";
children[106] = ROUTE634;

ROUTE ROUTE635 = createNode("ROUTE");
ROUTE635.fromField = "fraction_changed";
ROUTE635.fromNode = "Run_Time";
ROUTE635.toField = "set_fraction";
ROUTE635.toNode = "r_wrist_RotationInterpolator_Run";
children[107] = ROUTE635;

ROUTE ROUTE636 = createNode("ROUTE");
ROUTE636.fromField = "fraction_changed";
ROUTE636.fromNode = "Run_Time";
ROUTE636.toField = "set_fraction";
ROUTE636.toNode = "r_elbow_RotationInterpolator_Run";
children[108] = ROUTE636;

ROUTE ROUTE637 = createNode("ROUTE");
ROUTE637.fromField = "fraction_changed";
ROUTE637.fromNode = "Run_Time";
ROUTE637.toField = "set_fraction";
ROUTE637.toNode = "r_shoulder_RotationInterpolator_Run";
children[109] = ROUTE637;

ROUTE ROUTE638 = createNode("ROUTE");
ROUTE638.fromField = "fraction_changed";
ROUTE638.fromNode = "Run_Time";
ROUTE638.toField = "set_fraction";
ROUTE638.toNode = "l_wrist_RotationInterpolator_Run";
children[110] = ROUTE638;

ROUTE ROUTE639 = createNode("ROUTE");
ROUTE639.fromField = "fraction_changed";
ROUTE639.fromNode = "Run_Time";
ROUTE639.toField = "set_fraction";
ROUTE639.toNode = "l_elbow_RotationInterpolator_Run";
children[111] = ROUTE639;

ROUTE ROUTE640 = createNode("ROUTE");
ROUTE640.fromField = "fraction_changed";
ROUTE640.fromNode = "Run_Time";
ROUTE640.toField = "set_fraction";
ROUTE640.toNode = "l_shoulder_RotationInterpolator_Run";
children[112] = ROUTE640;

ROUTE ROUTE641 = createNode("ROUTE");
ROUTE641.fromField = "fraction_changed";
ROUTE641.fromNode = "Run_Time";
ROUTE641.toField = "set_fraction";
ROUTE641.toNode = "head_RotationInterpolator_Run";
children[113] = ROUTE641;

ROUTE ROUTE642 = createNode("ROUTE");
ROUTE642.fromField = "fraction_changed";
ROUTE642.fromNode = "Run_Time";
ROUTE642.toField = "set_fraction";
ROUTE642.toNode = "neck_RotationInterpolator_Run";
children[114] = ROUTE642;

ROUTE ROUTE643 = createNode("ROUTE");
ROUTE643.fromField = "fraction_changed";
ROUTE643.fromNode = "Run_Time";
ROUTE643.toField = "set_fraction";
ROUTE643.toNode = "upper_body_RotationInterpolator_Run";
children[115] = ROUTE643;

ROUTE ROUTE644 = createNode("ROUTE");
ROUTE644.fromField = "fraction_changed";
ROUTE644.fromNode = "Run_Time";
ROUTE644.toField = "set_fraction";
ROUTE644.toNode = "whole_body_RotationInterpolator_Run";
children[116] = ROUTE644;

ROUTE ROUTE645 = createNode("ROUTE");
ROUTE645.fromField = "fraction_changed";
ROUTE645.fromNode = "Run_Time";
ROUTE645.toField = "set_fraction";
ROUTE645.toNode = "whole_body_TranslationInterpolator_Run";
children[117] = ROUTE645;

ROUTE ROUTE646 = createNode("ROUTE");
ROUTE646.fromField = "value_changed";
ROUTE646.fromNode = "r_ankle_RotationInterpolator_Run";
ROUTE646.toField = "set_rotation";
ROUTE646.toNode = "hanim_r_ankle";
children[118] = ROUTE646;

ROUTE ROUTE647 = createNode("ROUTE");
ROUTE647.fromField = "value_changed";
ROUTE647.fromNode = "r_knee_RotationInterpolator_Run";
ROUTE647.toField = "set_rotation";
ROUTE647.toNode = "hanim_r_knee";
children[119] = ROUTE647;

ROUTE ROUTE648 = createNode("ROUTE");
ROUTE648.fromField = "value_changed";
ROUTE648.fromNode = "r_hip_RotationInterpolator_Run";
ROUTE648.toField = "set_rotation";
ROUTE648.toNode = "hanim_r_hip";
children[120] = ROUTE648;

ROUTE ROUTE649 = createNode("ROUTE");
ROUTE649.fromField = "value_changed";
ROUTE649.fromNode = "l_ankle_RotationInterpolator_Run";
ROUTE649.toField = "set_rotation";
ROUTE649.toNode = "hanim_l_ankle";
children[121] = ROUTE649;

ROUTE ROUTE650 = createNode("ROUTE");
ROUTE650.fromField = "value_changed";
ROUTE650.fromNode = "l_knee_RotationInterpolator_Run";
ROUTE650.toField = "set_rotation";
ROUTE650.toNode = "hanim_l_knee";
children[122] = ROUTE650;

ROUTE ROUTE651 = createNode("ROUTE");
ROUTE651.fromField = "value_changed";
ROUTE651.fromNode = "l_hip_RotationInterpolator_Run";
ROUTE651.toField = "set_rotation";
ROUTE651.toNode = "hanim_l_hip";
children[123] = ROUTE651;

ROUTE ROUTE652 = createNode("ROUTE");
ROUTE652.fromField = "value_changed";
ROUTE652.fromNode = "lower_body_RotationInterpolator_Run";
ROUTE652.toField = "set_rotation";
ROUTE652.toNode = "hanim_sacroiliac";
children[124] = ROUTE652;

ROUTE ROUTE653 = createNode("ROUTE");
ROUTE653.fromField = "value_changed";
ROUTE653.fromNode = "r_wrist_RotationInterpolator_Run";
ROUTE653.toField = "set_rotation";
ROUTE653.toNode = "hanim_r_wrist";
children[125] = ROUTE653;

ROUTE ROUTE654 = createNode("ROUTE");
ROUTE654.fromField = "value_changed";
ROUTE654.fromNode = "r_elbow_RotationInterpolator_Run";
ROUTE654.toField = "set_rotation";
ROUTE654.toNode = "hanim_r_elbow";
children[126] = ROUTE654;

ROUTE ROUTE655 = createNode("ROUTE");
ROUTE655.fromField = "value_changed";
ROUTE655.fromNode = "r_shoulder_RotationInterpolator_Run";
ROUTE655.toField = "set_rotation";
ROUTE655.toNode = "hanim_r_shoulder";
children[127] = ROUTE655;

ROUTE ROUTE656 = createNode("ROUTE");
ROUTE656.fromField = "value_changed";
ROUTE656.fromNode = "l_wrist_RotationInterpolator_Run";
ROUTE656.toField = "set_rotation";
ROUTE656.toNode = "hanim_l_wrist";
children[128] = ROUTE656;

ROUTE ROUTE657 = createNode("ROUTE");
ROUTE657.fromField = "value_changed";
ROUTE657.fromNode = "l_elbow_RotationInterpolator_Run";
ROUTE657.toField = "set_rotation";
ROUTE657.toNode = "hanim_l_elbow";
children[129] = ROUTE657;

ROUTE ROUTE658 = createNode("ROUTE");
ROUTE658.fromField = "value_changed";
ROUTE658.fromNode = "l_shoulder_RotationInterpolator_Run";
ROUTE658.toField = "set_rotation";
ROUTE658.toNode = "hanim_l_shoulder";
children[130] = ROUTE658;

ROUTE ROUTE659 = createNode("ROUTE");
ROUTE659.fromField = "value_changed";
ROUTE659.fromNode = "head_RotationInterpolator_Run";
ROUTE659.toField = "set_rotation";
ROUTE659.toNode = "hanim_skullbase";
children[131] = ROUTE659;

ROUTE ROUTE660 = createNode("ROUTE");
ROUTE660.fromField = "value_changed";
ROUTE660.fromNode = "neck_RotationInterpolator_Run";
ROUTE660.toField = "set_rotation";
ROUTE660.toNode = "hanim_vc4";
children[132] = ROUTE660;

ROUTE ROUTE661 = createNode("ROUTE");
ROUTE661.fromField = "value_changed";
ROUTE661.fromNode = "upper_body_RotationInterpolator_Run";
ROUTE661.toField = "set_rotation";
ROUTE661.toNode = "hanim_vl1";
children[133] = ROUTE661;

ROUTE ROUTE662 = createNode("ROUTE");
ROUTE662.fromField = "value_changed";
ROUTE662.fromNode = "whole_body_RotationInterpolator_Run";
ROUTE662.toField = "set_rotation";
ROUTE662.toNode = "hanim_humanoid_root";
children[134] = ROUTE662;

ROUTE ROUTE663 = createNode("ROUTE");
ROUTE663.fromField = "value_changed";
ROUTE663.fromNode = "whole_body_TranslationInterpolator_Run";
ROUTE663.toField = "set_translation";
ROUTE663.toNode = "hanim_humanoid_root";
children[135] = ROUTE663;

ROUTE ROUTE664 = createNode("ROUTE");
ROUTE664.fromField = "fraction_changed";
ROUTE664.fromNode = "Jump_Time";
ROUTE664.toField = "set_fraction";
ROUTE664.toNode = "r_ankle_RotationInterpolator_Jump";
children[136] = ROUTE664;

ROUTE ROUTE665 = createNode("ROUTE");
ROUTE665.fromField = "fraction_changed";
ROUTE665.fromNode = "Jump_Time";
ROUTE665.toField = "set_fraction";
ROUTE665.toNode = "r_knee_RotationInterpolator_Jump";
children[137] = ROUTE665;

ROUTE ROUTE666 = createNode("ROUTE");
ROUTE666.fromField = "fraction_changed";
ROUTE666.fromNode = "Jump_Time";
ROUTE666.toField = "set_fraction";
ROUTE666.toNode = "r_hip_RotationInterpolator_Jump";
children[138] = ROUTE666;

ROUTE ROUTE667 = createNode("ROUTE");
ROUTE667.fromField = "fraction_changed";
ROUTE667.fromNode = "Jump_Time";
ROUTE667.toField = "set_fraction";
ROUTE667.toNode = "l_ankle_RotationInterpolator_Jump";
children[139] = ROUTE667;

ROUTE ROUTE668 = createNode("ROUTE");
ROUTE668.fromField = "fraction_changed";
ROUTE668.fromNode = "Jump_Time";
ROUTE668.toField = "set_fraction";
ROUTE668.toNode = "l_knee_RotationInterpolator_Jump";
children[140] = ROUTE668;

ROUTE ROUTE669 = createNode("ROUTE");
ROUTE669.fromField = "fraction_changed";
ROUTE669.fromNode = "Jump_Time";
ROUTE669.toField = "set_fraction";
ROUTE669.toNode = "l_hip_RotationInterpolator_Jump";
children[141] = ROUTE669;

ROUTE ROUTE670 = createNode("ROUTE");
ROUTE670.fromField = "fraction_changed";
ROUTE670.fromNode = "Jump_Time";
ROUTE670.toField = "set_fraction";
ROUTE670.toNode = "lower_body_RotationInterpolator_Jump";
children[142] = ROUTE670;

ROUTE ROUTE671 = createNode("ROUTE");
ROUTE671.fromField = "fraction_changed";
ROUTE671.fromNode = "Jump_Time";
ROUTE671.toField = "set_fraction";
ROUTE671.toNode = "r_wrist_RotationInterpolator_Jump";
children[143] = ROUTE671;

ROUTE ROUTE672 = createNode("ROUTE");
ROUTE672.fromField = "fraction_changed";
ROUTE672.fromNode = "Jump_Time";
ROUTE672.toField = "set_fraction";
ROUTE672.toNode = "r_elbow_RotationInterpolator_Jump";
children[144] = ROUTE672;

ROUTE ROUTE673 = createNode("ROUTE");
ROUTE673.fromField = "fraction_changed";
ROUTE673.fromNode = "Jump_Time";
ROUTE673.toField = "set_fraction";
ROUTE673.toNode = "r_shoulder_RotationInterpolator_Jump";
children[145] = ROUTE673;

ROUTE ROUTE674 = createNode("ROUTE");
ROUTE674.fromField = "fraction_changed";
ROUTE674.fromNode = "Jump_Time";
ROUTE674.toField = "set_fraction";
ROUTE674.toNode = "l_wrist_RotationInterpolator_Jump";
children[146] = ROUTE674;

ROUTE ROUTE675 = createNode("ROUTE");
ROUTE675.fromField = "fraction_changed";
ROUTE675.fromNode = "Jump_Time";
ROUTE675.toField = "set_fraction";
ROUTE675.toNode = "l_elbow_RotationInterpolator_Jump";
children[147] = ROUTE675;

ROUTE ROUTE676 = createNode("ROUTE");
ROUTE676.fromField = "fraction_changed";
ROUTE676.fromNode = "Jump_Time";
ROUTE676.toField = "set_fraction";
ROUTE676.toNode = "l_shoulder_RotationInterpolator_Jump";
children[148] = ROUTE676;

ROUTE ROUTE677 = createNode("ROUTE");
ROUTE677.fromField = "fraction_changed";
ROUTE677.fromNode = "Jump_Time";
ROUTE677.toField = "set_fraction";
ROUTE677.toNode = "head_RotationInterpolator_Jump";
children[149] = ROUTE677;

ROUTE ROUTE678 = createNode("ROUTE");
ROUTE678.fromField = "fraction_changed";
ROUTE678.fromNode = "Jump_Time";
ROUTE678.toField = "set_fraction";
ROUTE678.toNode = "neck_RotationInterpolator_Jump";
children[150] = ROUTE678;

ROUTE ROUTE679 = createNode("ROUTE");
ROUTE679.fromField = "fraction_changed";
ROUTE679.fromNode = "Jump_Time";
ROUTE679.toField = "set_fraction";
ROUTE679.toNode = "upper_body_RotationInterpolator_Jump";
children[151] = ROUTE679;

ROUTE ROUTE680 = createNode("ROUTE");
ROUTE680.fromField = "fraction_changed";
ROUTE680.fromNode = "Jump_Time";
ROUTE680.toField = "set_fraction";
ROUTE680.toNode = "whole_body_RotationInterpolator_Jump";
children[152] = ROUTE680;

ROUTE ROUTE681 = createNode("ROUTE");
ROUTE681.fromField = "fraction_changed";
ROUTE681.fromNode = "Jump_Time";
ROUTE681.toField = "set_fraction";
ROUTE681.toNode = "whole_body_TranslationInterpolator_Jump";
children[153] = ROUTE681;

ROUTE ROUTE682 = createNode("ROUTE");
ROUTE682.fromField = "value_changed";
ROUTE682.fromNode = "r_ankle_RotationInterpolator_Jump";
ROUTE682.toField = "set_rotation";
ROUTE682.toNode = "hanim_r_ankle";
children[154] = ROUTE682;

ROUTE ROUTE683 = createNode("ROUTE");
ROUTE683.fromField = "value_changed";
ROUTE683.fromNode = "r_knee_RotationInterpolator_Jump";
ROUTE683.toField = "set_rotation";
ROUTE683.toNode = "hanim_r_knee";
children[155] = ROUTE683;

ROUTE ROUTE684 = createNode("ROUTE");
ROUTE684.fromField = "value_changed";
ROUTE684.fromNode = "r_hip_RotationInterpolator_Jump";
ROUTE684.toField = "set_rotation";
ROUTE684.toNode = "hanim_r_hip";
children[156] = ROUTE684;

ROUTE ROUTE685 = createNode("ROUTE");
ROUTE685.fromField = "value_changed";
ROUTE685.fromNode = "l_ankle_RotationInterpolator_Jump";
ROUTE685.toField = "set_rotation";
ROUTE685.toNode = "hanim_l_ankle";
children[157] = ROUTE685;

ROUTE ROUTE686 = createNode("ROUTE");
ROUTE686.fromField = "value_changed";
ROUTE686.fromNode = "l_knee_RotationInterpolator_Jump";
ROUTE686.toField = "set_rotation";
ROUTE686.toNode = "hanim_l_knee";
children[158] = ROUTE686;

ROUTE ROUTE687 = createNode("ROUTE");
ROUTE687.fromField = "value_changed";
ROUTE687.fromNode = "l_hip_RotationInterpolator_Jump";
ROUTE687.toField = "set_rotation";
ROUTE687.toNode = "hanim_l_hip";
children[159] = ROUTE687;

ROUTE ROUTE688 = createNode("ROUTE");
ROUTE688.fromField = "value_changed";
ROUTE688.fromNode = "lower_body_RotationInterpolator_Jump";
ROUTE688.toField = "set_rotation";
ROUTE688.toNode = "hanim_sacroiliac";
children[160] = ROUTE688;

ROUTE ROUTE689 = createNode("ROUTE");
ROUTE689.fromField = "value_changed";
ROUTE689.fromNode = "r_wrist_RotationInterpolator_Jump";
ROUTE689.toField = "set_rotation";
ROUTE689.toNode = "hanim_r_wrist";
children[161] = ROUTE689;

ROUTE ROUTE690 = createNode("ROUTE");
ROUTE690.fromField = "value_changed";
ROUTE690.fromNode = "r_elbow_RotationInterpolator_Jump";
ROUTE690.toField = "set_rotation";
ROUTE690.toNode = "hanim_r_elbow";
children[162] = ROUTE690;

ROUTE ROUTE691 = createNode("ROUTE");
ROUTE691.fromField = "value_changed";
ROUTE691.fromNode = "r_shoulder_RotationInterpolator_Jump";
ROUTE691.toField = "set_rotation";
ROUTE691.toNode = "hanim_r_shoulder";
children[163] = ROUTE691;

ROUTE ROUTE692 = createNode("ROUTE");
ROUTE692.fromField = "value_changed";
ROUTE692.fromNode = "l_wrist_RotationInterpolator_Jump";
ROUTE692.toField = "set_rotation";
ROUTE692.toNode = "hanim_l_wrist";
children[164] = ROUTE692;

ROUTE ROUTE693 = createNode("ROUTE");
ROUTE693.fromField = "value_changed";
ROUTE693.fromNode = "l_elbow_RotationInterpolator_Jump";
ROUTE693.toField = "set_rotation";
ROUTE693.toNode = "hanim_l_elbow";
children[165] = ROUTE693;

ROUTE ROUTE694 = createNode("ROUTE");
ROUTE694.fromField = "value_changed";
ROUTE694.fromNode = "l_shoulder_RotationInterpolator_Jump";
ROUTE694.toField = "set_rotation";
ROUTE694.toNode = "hanim_l_shoulder";
children[166] = ROUTE694;

ROUTE ROUTE695 = createNode("ROUTE");
ROUTE695.fromField = "value_changed";
ROUTE695.fromNode = "head_RotationInterpolator_Jump";
ROUTE695.toField = "set_rotation";
ROUTE695.toNode = "hanim_skullbase";
children[167] = ROUTE695;

ROUTE ROUTE696 = createNode("ROUTE");
ROUTE696.fromField = "value_changed";
ROUTE696.fromNode = "neck_RotationInterpolator_Jump";
ROUTE696.toField = "set_rotation";
ROUTE696.toNode = "hanim_vc4";
children[168] = ROUTE696;

ROUTE ROUTE697 = createNode("ROUTE");
ROUTE697.fromField = "value_changed";
ROUTE697.fromNode = "upper_body_RotationInterpolator_Jump";
ROUTE697.toField = "set_rotation";
ROUTE697.toNode = "hanim_vl1";
children[169] = ROUTE697;

ROUTE ROUTE698 = createNode("ROUTE");
ROUTE698.fromField = "value_changed";
ROUTE698.fromNode = "whole_body_RotationInterpolator_Jump";
ROUTE698.toField = "set_rotation";
ROUTE698.toNode = "hanim_humanoid_root";
children[170] = ROUTE698;

ROUTE ROUTE699 = createNode("ROUTE");
ROUTE699.fromField = "value_changed";
ROUTE699.fromNode = "whole_body_TranslationInterpolator_Jump";
ROUTE699.toField = "set_translation";
ROUTE699.toNode = "hanim_humanoid_root";
children[171] = ROUTE699;

}
