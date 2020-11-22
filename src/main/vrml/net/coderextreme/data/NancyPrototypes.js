let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let ProtoDeclare2 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Displacer" appinfo="A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment." documentation="http://H-Anim.org/Specifications/H-Anim2001/part1/Displacer.html" ><ProtoInterface><field name="name" accessType="inputOutput" type="SFString"></field>
<field name="coordIndex" accessType="inputOutput" type="MFInt32"></field>
<field name="displacements" accessType="inputOutput" type="MFVec3f"></field>
</ProtoInterface>
<ProtoBody><WorldInfo info="&quot;null body node&quot;"></WorldInfo>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare2.name = "Displacer";
ProtoDeclare2.appinfo = "A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment.";
ProtoDeclare2.documentation = "http://H-Anim.org/Specifications/H-Anim2001/part1/Displacer.html";
let ProtoInterface3 = browser.currentScene.createNode("ProtoInterface");
let field4 = browser.currentScene.createNode("field");
field4.name = "name";
field4.accessType = "inputOutput";
field4.type = "SFString";
ProtoInterface3.field = new MFNode();

ProtoInterface3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "coordIndex";
field5.accessType = "inputOutput";
field5.type = "MFInt32";
ProtoInterface3.field[1] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "displacements";
field6.accessType = "inputOutput";
field6.type = "MFVec3f";
ProtoInterface3.field[2] = field6;

ProtoDeclare2.protoInterface = ProtoInterface3;

let ProtoBody7 = browser.currentScene.createNode("ProtoBody");
let WorldInfo8 = browser.currentScene.createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String["null body node"]);
ProtoBody7.children = new MFNode();

ProtoBody7.children[0] = WorldInfo8;

ProtoDeclare2.protoBody = ProtoBody7;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare2;

let ProtoDeclare9 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Humanoid" appinfo="The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model." documentation="http://H-Anim.org/Specifications/H-Anim2001/part1/Humanoid.html" ><ProtoInterface><!--H-Anim v1.1 field definitions--><field name="name" accessType="inputOutput" type="SFString"></field>
<field name="version" accessType="inputOutput" appinfo="legal values: 1.1 or 2.0" type="SFString" value="1.1"></field>
<field name="humanoidVersion" accessType="inputOutput" appinfo="Version of the humanoid being modeled. Hint: H-anim version 2.0" type="SFString"></field>
<field name="info" accessType="inputOutput" type="MFString"></field>
<field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="rotation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="center" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="scaleOrientation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="bboxCenter" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="bboxSize" accessType="initializeOnly" type="SFVec3f" value="-1 -1 -1"></field>
<field name="humanoidBody" accessType="inputOutput" appinfo="H-Anim 1.1 field container for body geometry Hint: replaced by 2.0 skeleton" documentation="http://H-Anim.org/Specifications/H-Anim1.1/#humanoid" type="MFNode"></field>
<field name="skeleton" accessType="inputOutput" appinfo="H-Anim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody" documentation="http://H-Anim.org/Specifications/H-Anim2001/part1/Humanoid.html" type="MFNode"></field>
<field name="joints" accessType="inputOutput" appinfo="Container field for Joint nodes" type="MFNode"></field>
<field name="segments" accessType="inputOutput" appinfo="Container field for Segment nodes" type="MFNode"></field>
<field name="sites" accessType="inputOutput" appinfo="Container field for Site nodes" type="MFNode"></field>
<field name="viewpoints" accessType="inputOutput" appinfo="Container field for Viewpoint nodes" type="MFNode"></field>
<field name="skinCoord" accessType="inputOutput" appinfo="Hint: H-anim version 2.0" type="SFNode"><!--NULL node--></field>
<field name="skinNormal" accessType="inputOutput" appinfo="Hint: H-anim version 2.0" type="SFNode"><!--NULL node--></field>
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
ProtoDeclare9.name = "Humanoid";
ProtoDeclare9.appinfo = "The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.";
ProtoDeclare9.documentation = "http://H-Anim.org/Specifications/H-Anim2001/part1/Humanoid.html";
let ProtoInterface10 = browser.currentScene.createNode("ProtoInterface");
//H-Anim v1.1 field definitions
let field11 = browser.currentScene.createNode("field");
field11.name = "name";
field11.accessType = "inputOutput";
field11.type = "SFString";
ProtoInterface10.field = new MFNode();

ProtoInterface10.field[0] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "version";
field12.accessType = "inputOutput";
field12.appinfo = "legal values: 1.1 or 2.0";
field12.type = "SFString";
field12.value = "1.1";
ProtoInterface10.field[1] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "humanoidVersion";
field13.accessType = "inputOutput";
field13.appinfo = "Version of the humanoid being modeled. Hint: H-anim version 2.0";
field13.type = "SFString";
ProtoInterface10.field[2] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "info";
field14.accessType = "inputOutput";
field14.type = "MFString";
ProtoInterface10.field[3] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "translation";
field15.accessType = "inputOutput";
field15.type = "SFVec3f";
field15.value = "0 0 0";
ProtoInterface10.field[4] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "rotation";
field16.accessType = "inputOutput";
field16.type = "SFRotation";
field16.value = "0 0 1 0";
ProtoInterface10.field[5] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "center";
field17.accessType = "inputOutput";
field17.type = "SFVec3f";
field17.value = "0 0 0";
ProtoInterface10.field[6] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "scale";
field18.accessType = "inputOutput";
field18.type = "SFVec3f";
field18.value = "1 1 1";
ProtoInterface10.field[7] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "scaleOrientation";
field19.accessType = "inputOutput";
field19.type = "SFRotation";
field19.value = "0 0 1 0";
ProtoInterface10.field[8] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "bboxCenter";
field20.accessType = "initializeOnly";
field20.type = "SFVec3f";
field20.value = "0 0 0";
ProtoInterface10.field[9] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "bboxSize";
field21.accessType = "initializeOnly";
field21.type = "SFVec3f";
field21.value = "-1 -1 -1";
ProtoInterface10.field[10] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "humanoidBody";
field22.accessType = "inputOutput";
field22.appinfo = "H-Anim 1.1 field container for body geometry Hint: replaced by 2.0 skeleton";
field22.documentation = "http://H-Anim.org/Specifications/H-Anim1.1/#humanoid";
field22.type = "MFNode";
ProtoInterface10.field[11] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "skeleton";
field23.accessType = "inputOutput";
field23.appinfo = "H-Anim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody";
field23.documentation = "http://H-Anim.org/Specifications/H-Anim2001/part1/Humanoid.html";
field23.type = "MFNode";
ProtoInterface10.field[12] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "joints";
field24.accessType = "inputOutput";
field24.appinfo = "Container field for Joint nodes";
field24.type = "MFNode";
ProtoInterface10.field[13] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "segments";
field25.accessType = "inputOutput";
field25.appinfo = "Container field for Segment nodes";
field25.type = "MFNode";
ProtoInterface10.field[14] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "sites";
field26.accessType = "inputOutput";
field26.appinfo = "Container field for Site nodes";
field26.type = "MFNode";
ProtoInterface10.field[15] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "viewpoints";
field27.accessType = "inputOutput";
field27.appinfo = "Container field for Viewpoint nodes";
field27.type = "MFNode";
ProtoInterface10.field[16] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "skinCoord";
field28.accessType = "inputOutput";
field28.appinfo = "Hint: H-anim version 2.0";
field28.type = "SFNode";
//NULL node
ProtoInterface10.field[17] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "skinNormal";
field29.accessType = "inputOutput";
field29.appinfo = "Hint: H-anim version 2.0";
field29.type = "SFNode";
//NULL node
ProtoInterface10.field[18] = field29;

ProtoDeclare9.protoInterface = ProtoInterface10;

let ProtoBody30 = browser.currentScene.createNode("ProtoBody");
let Transform31 = browser.currentScene.createNode("Transform");
Transform31.DEF = "HumanoidTransform";
let IS32 = browser.currentScene.createNode("IS");
let connect33 = browser.currentScene.createNode("connect");
connect33.nodeField = "translation";
connect33.protoField = "translation";
IS32.connect = new MFNode();

IS32.connect[0] = connect33;

let connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "rotation";
connect34.protoField = "rotation";
IS32.connect[1] = connect34;

let connect35 = browser.currentScene.createNode("connect");
connect35.nodeField = "scale";
connect35.protoField = "scale";
IS32.connect[2] = connect35;

let connect36 = browser.currentScene.createNode("connect");
connect36.nodeField = "scaleOrientation";
connect36.protoField = "scaleOrientation";
IS32.connect[3] = connect36;

let connect37 = browser.currentScene.createNode("connect");
connect37.nodeField = "center";
connect37.protoField = "center";
IS32.connect[4] = connect37;

let connect38 = browser.currentScene.createNode("connect");
connect38.nodeField = "bboxCenter";
connect38.protoField = "bboxCenter";
IS32.connect[5] = connect38;

let connect39 = browser.currentScene.createNode("connect");
connect39.nodeField = "bboxSize";
connect39.protoField = "bboxSize";
IS32.connect[6] = connect39;

Transform31.iS = IS32;

let Group40 = browser.currentScene.createNode("Group");
Group40.DEF = "HumanoidGroup1";
let IS41 = browser.currentScene.createNode("IS");
let connect42 = browser.currentScene.createNode("connect");
connect42.nodeField = "children";
connect42.protoField = "humanoidBody";
IS41.connect = new MFNode();

IS41.connect[0] = connect42;

Group40.iS = IS41;

Transform31.children = new MFNode();

Transform31.children[0] = Group40;

let Group43 = browser.currentScene.createNode("Group");
Group43.DEF = "HumanoidGroup2";
let IS44 = browser.currentScene.createNode("IS");
let connect45 = browser.currentScene.createNode("connect");
connect45.nodeField = "children";
connect45.protoField = "skeleton";
IS44.connect = new MFNode();

IS44.connect[0] = connect45;

Group43.iS = IS44;

Transform31.children[1] = Group43;

let Group46 = browser.currentScene.createNode("Group");
Group46.DEF = "HumanoidGroup3";
let IS47 = browser.currentScene.createNode("IS");
let connect48 = browser.currentScene.createNode("connect");
connect48.nodeField = "children";
connect48.protoField = "viewpoints";
IS47.connect = new MFNode();

IS47.connect[0] = connect48;

Group46.iS = IS47;

Transform31.children[2] = Group46;

ProtoBody30.children = new MFNode();

ProtoBody30.children[0] = Transform31;

ProtoDeclare9.protoBody = ProtoBody30;

browser.currentScene.children[1] = ProtoDeclare9;

let ProtoDeclare49 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Joint" appinfo="The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid." documentation="http://H-Anim.org/Specifications/H-Anim2001/part1/Joint.html" ><ProtoInterface><field name="name" accessType="inputOutput" type="SFString"></field>
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
ProtoDeclare49.name = "Joint";
ProtoDeclare49.appinfo = "The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.";
ProtoDeclare49.documentation = "http://H-Anim.org/Specifications/H-Anim2001/part1/Joint.html";
let ProtoInterface50 = browser.currentScene.createNode("ProtoInterface");
let field51 = browser.currentScene.createNode("field");
field51.name = "name";
field51.accessType = "inputOutput";
field51.type = "SFString";
ProtoInterface50.field = new MFNode();

ProtoInterface50.field[0] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "ulimit";
field52.accessType = "inputOutput";
field52.type = "MFFloat";
ProtoInterface50.field[1] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "llimit";
field53.accessType = "inputOutput";
field53.type = "MFFloat";
ProtoInterface50.field[2] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "limitOrientation";
field54.accessType = "inputOutput";
field54.type = "SFRotation";
field54.value = "0 0 1 0";
ProtoInterface50.field[3] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "skinCoordIndex";
field55.accessType = "inputOutput";
field55.type = "MFInt32";
ProtoInterface50.field[4] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "skinCoordWeight";
field56.accessType = "inputOutput";
field56.type = "MFFloat";
ProtoInterface50.field[5] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "stiffness";
field57.accessType = "inputOutput";
field57.type = "MFFloat";
field57.value = "0 0 0";
ProtoInterface50.field[6] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "translation";
field58.accessType = "inputOutput";
field58.type = "SFVec3f";
field58.value = "0 0 0";
ProtoInterface50.field[7] = field58;

let field59 = browser.currentScene.createNode("field");
field59.name = "rotation";
field59.accessType = "inputOutput";
field59.type = "SFRotation";
field59.value = "0 0 1 0";
ProtoInterface50.field[8] = field59;

let field60 = browser.currentScene.createNode("field");
field60.name = "scale";
field60.accessType = "inputOutput";
field60.type = "SFVec3f";
field60.value = "1 1 1";
ProtoInterface50.field[9] = field60;

let field61 = browser.currentScene.createNode("field");
field61.name = "scaleOrientation";
field61.accessType = "inputOutput";
field61.type = "SFRotation";
field61.value = "0 0 1 0";
ProtoInterface50.field[10] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "center";
field62.accessType = "inputOutput";
field62.type = "SFVec3f";
field62.value = "0 0 0";
ProtoInterface50.field[11] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "bboxCenter";
field63.accessType = "initializeOnly";
field63.type = "SFVec3f";
field63.value = "0 0 0";
ProtoInterface50.field[12] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "bboxSize";
field64.accessType = "initializeOnly";
field64.type = "SFVec3f";
field64.value = "-1 -1 -1";
ProtoInterface50.field[13] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "children";
field65.accessType = "inputOutput";
field65.type = "MFNode";
ProtoInterface50.field[14] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "addChildren";
field66.accessType = "inputOnly";
field66.type = "MFNode";
ProtoInterface50.field[15] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "removeChildren";
field67.accessType = "inputOnly";
field67.type = "MFNode";
ProtoInterface50.field[16] = field67;

ProtoDeclare49.protoInterface = ProtoInterface50;

let ProtoBody68 = browser.currentScene.createNode("ProtoBody");
let Transform69 = browser.currentScene.createNode("Transform");
Transform69.DEF = "JointTransform";
let IS70 = browser.currentScene.createNode("IS");
let connect71 = browser.currentScene.createNode("connect");
connect71.nodeField = "translation";
connect71.protoField = "translation";
IS70.connect = new MFNode();

IS70.connect[0] = connect71;

let connect72 = browser.currentScene.createNode("connect");
connect72.nodeField = "rotation";
connect72.protoField = "rotation";
IS70.connect[1] = connect72;

let connect73 = browser.currentScene.createNode("connect");
connect73.nodeField = "scale";
connect73.protoField = "scale";
IS70.connect[2] = connect73;

let connect74 = browser.currentScene.createNode("connect");
connect74.nodeField = "scaleOrientation";
connect74.protoField = "scaleOrientation";
IS70.connect[3] = connect74;

let connect75 = browser.currentScene.createNode("connect");
connect75.nodeField = "center";
connect75.protoField = "center";
IS70.connect[4] = connect75;

let connect76 = browser.currentScene.createNode("connect");
connect76.nodeField = "bboxCenter";
connect76.protoField = "bboxCenter";
IS70.connect[5] = connect76;

let connect77 = browser.currentScene.createNode("connect");
connect77.nodeField = "bboxSize";
connect77.protoField = "bboxSize";
IS70.connect[6] = connect77;

let connect78 = browser.currentScene.createNode("connect");
connect78.nodeField = "children";
connect78.protoField = "children";
IS70.connect[7] = connect78;

let connect79 = browser.currentScene.createNode("connect");
connect79.nodeField = "addChildren";
connect79.protoField = "addChildren";
IS70.connect[8] = connect79;

let connect80 = browser.currentScene.createNode("connect");
connect80.nodeField = "removeChildren";
connect80.protoField = "removeChildren";
IS70.connect[9] = connect80;

Transform69.iS = IS70;

ProtoBody68.children = new MFNode();

ProtoBody68.children[0] = Transform69;

ProtoDeclare49.protoBody = ProtoBody68;

browser.currentScene.children[2] = ProtoDeclare49;

let ProtoDeclare81 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Segment" appinfo="The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node." documentation="http://H-Anim.org/Specifications/H-Anim2001/part1/Segment.html" ><ProtoInterface><field name="name" accessType="inputOutput" type="SFString"></field>
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
ProtoDeclare81.name = "Segment";
ProtoDeclare81.appinfo = "The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node.";
ProtoDeclare81.documentation = "http://H-Anim.org/Specifications/H-Anim2001/part1/Segment.html";
let ProtoInterface82 = browser.currentScene.createNode("ProtoInterface");
let field83 = browser.currentScene.createNode("field");
field83.name = "name";
field83.accessType = "inputOutput";
field83.type = "SFString";
ProtoInterface82.field = new MFNode();

ProtoInterface82.field[0] = field83;

let field84 = browser.currentScene.createNode("field");
field84.name = "mass";
field84.accessType = "inputOutput";
field84.type = "SFFloat";
field84.value = "0";
ProtoInterface82.field[1] = field84;

let field85 = browser.currentScene.createNode("field");
field85.name = "centerOfMass";
field85.accessType = "inputOutput";
field85.type = "SFVec3f";
field85.value = "0 0 0";
ProtoInterface82.field[2] = field85;

let field86 = browser.currentScene.createNode("field");
field86.name = "momentsOfInertia";
field86.accessType = "inputOutput";
field86.type = "MFFloat";
field86.value = "0 0 0 0 0 0 0 0 0";
ProtoInterface82.field[3] = field86;

let field87 = browser.currentScene.createNode("field");
field87.name = "bboxCenter";
field87.accessType = "initializeOnly";
field87.type = "SFVec3f";
field87.value = "0 0 0";
ProtoInterface82.field[4] = field87;

let field88 = browser.currentScene.createNode("field");
field88.name = "bboxSize";
field88.accessType = "initializeOnly";
field88.type = "SFVec3f";
field88.value = "-1 -1 -1";
ProtoInterface82.field[5] = field88;

let field89 = browser.currentScene.createNode("field");
field89.name = "children";
field89.accessType = "inputOutput";
field89.type = "MFNode";
ProtoInterface82.field[6] = field89;

let field90 = browser.currentScene.createNode("field");
field90.name = "addChildren";
field90.accessType = "inputOnly";
field90.type = "MFNode";
ProtoInterface82.field[7] = field90;

let field91 = browser.currentScene.createNode("field");
field91.name = "removeChildren";
field91.accessType = "inputOnly";
field91.type = "MFNode";
ProtoInterface82.field[8] = field91;

let field92 = browser.currentScene.createNode("field");
field92.name = "coord";
field92.accessType = "inputOutput";
field92.appinfo = "contains Coordinate nodes";
field92.type = "SFNode";
//NULL node
ProtoInterface82.field[9] = field92;

let field93 = browser.currentScene.createNode("field");
field93.name = "displacers";
field93.accessType = "inputOutput";
field93.appinfo = "contains Displacer nodes";
field93.type = "MFNode";
ProtoInterface82.field[10] = field93;

ProtoDeclare81.protoInterface = ProtoInterface82;

let ProtoBody94 = browser.currentScene.createNode("ProtoBody");
let Group95 = browser.currentScene.createNode("Group");
Group95.DEF = "SegmentGroup";
let IS96 = browser.currentScene.createNode("IS");
let connect97 = browser.currentScene.createNode("connect");
connect97.nodeField = "bboxCenter";
connect97.protoField = "bboxCenter";
IS96.connect = new MFNode();

IS96.connect[0] = connect97;

let connect98 = browser.currentScene.createNode("connect");
connect98.nodeField = "bboxSize";
connect98.protoField = "bboxSize";
IS96.connect[1] = connect98;

let connect99 = browser.currentScene.createNode("connect");
connect99.nodeField = "children";
connect99.protoField = "children";
IS96.connect[2] = connect99;

let connect100 = browser.currentScene.createNode("connect");
connect100.nodeField = "addChildren";
connect100.protoField = "addChildren";
IS96.connect[3] = connect100;

let connect101 = browser.currentScene.createNode("connect");
connect101.nodeField = "removeChildren";
connect101.protoField = "removeChildren";
IS96.connect[4] = connect101;

Group95.iS = IS96;

ProtoBody94.children = new MFNode();

ProtoBody94.children[0] = Group95;

ProtoDeclare81.protoBody = ProtoBody94;

browser.currentScene.children[3] = ProtoDeclare81;

let ProtoDeclare102 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Site" appinfo="The Site node can be used for three purposes: (a) to define an &quot;end effector&quot; location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view &quot;through the eyes&quot; of the humanoid for use in multi-user worlds)." documentation="http://H-Anim.org/Specifications/H-Anim2001/part1/Site.html" ><ProtoInterface><field name="name" accessType="inputOutput" type="SFString"></field>
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
ProtoDeclare102.name = "Site";
ProtoDeclare102.appinfo = "The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds).";
ProtoDeclare102.documentation = "http://H-Anim.org/Specifications/H-Anim2001/part1/Site.html";
let ProtoInterface103 = browser.currentScene.createNode("ProtoInterface");
let field104 = browser.currentScene.createNode("field");
field104.name = "name";
field104.accessType = "inputOutput";
field104.type = "SFString";
ProtoInterface103.field = new MFNode();

ProtoInterface103.field[0] = field104;

let field105 = browser.currentScene.createNode("field");
field105.name = "translation";
field105.accessType = "inputOutput";
field105.type = "SFVec3f";
field105.value = "0 0 0";
ProtoInterface103.field[1] = field105;

let field106 = browser.currentScene.createNode("field");
field106.name = "rotation";
field106.accessType = "inputOutput";
field106.type = "SFRotation";
field106.value = "0 0 1 0";
ProtoInterface103.field[2] = field106;

let field107 = browser.currentScene.createNode("field");
field107.name = "scale";
field107.accessType = "inputOutput";
field107.type = "SFVec3f";
field107.value = "1 1 1";
ProtoInterface103.field[3] = field107;

let field108 = browser.currentScene.createNode("field");
field108.name = "scaleOrientation";
field108.accessType = "inputOutput";
field108.type = "SFRotation";
field108.value = "0 0 1 0";
ProtoInterface103.field[4] = field108;

let field109 = browser.currentScene.createNode("field");
field109.name = "center";
field109.accessType = "inputOutput";
field109.type = "SFVec3f";
field109.value = "0 0 0";
ProtoInterface103.field[5] = field109;

let field110 = browser.currentScene.createNode("field");
field110.name = "bboxCenter";
field110.accessType = "initializeOnly";
field110.type = "SFVec3f";
field110.value = "0 0 0";
ProtoInterface103.field[6] = field110;

let field111 = browser.currentScene.createNode("field");
field111.name = "bboxSize";
field111.accessType = "initializeOnly";
field111.type = "SFVec3f";
field111.value = "-1 -1 -1";
ProtoInterface103.field[7] = field111;

let field112 = browser.currentScene.createNode("field");
field112.name = "children";
field112.accessType = "inputOutput";
field112.type = "MFNode";
ProtoInterface103.field[8] = field112;

let field113 = browser.currentScene.createNode("field");
field113.name = "addChildren";
field113.accessType = "inputOnly";
field113.type = "MFNode";
ProtoInterface103.field[9] = field113;

let field114 = browser.currentScene.createNode("field");
field114.name = "removeChildren";
field114.accessType = "inputOnly";
field114.type = "MFNode";
ProtoInterface103.field[10] = field114;

ProtoDeclare102.protoInterface = ProtoInterface103;

let ProtoBody115 = browser.currentScene.createNode("ProtoBody");
let Transform116 = browser.currentScene.createNode("Transform");
Transform116.DEF = "SiteTransform";
let IS117 = browser.currentScene.createNode("IS");
let connect118 = browser.currentScene.createNode("connect");
connect118.nodeField = "translation";
connect118.protoField = "translation";
IS117.connect = new MFNode();

IS117.connect[0] = connect118;

let connect119 = browser.currentScene.createNode("connect");
connect119.nodeField = "rotation";
connect119.protoField = "rotation";
IS117.connect[1] = connect119;

let connect120 = browser.currentScene.createNode("connect");
connect120.nodeField = "scale";
connect120.protoField = "scale";
IS117.connect[2] = connect120;

let connect121 = browser.currentScene.createNode("connect");
connect121.nodeField = "scaleOrientation";
connect121.protoField = "scaleOrientation";
IS117.connect[3] = connect121;

let connect122 = browser.currentScene.createNode("connect");
connect122.nodeField = "center";
connect122.protoField = "center";
IS117.connect[4] = connect122;

let connect123 = browser.currentScene.createNode("connect");
connect123.nodeField = "bboxCenter";
connect123.protoField = "bboxCenter";
IS117.connect[5] = connect123;

let connect124 = browser.currentScene.createNode("connect");
connect124.nodeField = "bboxSize";
connect124.protoField = "bboxSize";
IS117.connect[6] = connect124;

let connect125 = browser.currentScene.createNode("connect");
connect125.nodeField = "children";
connect125.protoField = "children";
IS117.connect[7] = connect125;

let connect126 = browser.currentScene.createNode("connect");
connect126.nodeField = "addChildren";
connect126.protoField = "addChildren";
IS117.connect[8] = connect126;

let connect127 = browser.currentScene.createNode("connect");
connect127.nodeField = "removeChildren";
connect127.protoField = "removeChildren";
IS117.connect[9] = connect127;

Transform116.iS = IS117;

ProtoBody115.children = new MFNode();

ProtoBody115.children[0] = Transform116;

ProtoDeclare102.protoBody = ProtoBody115;

browser.currentScene.children[4] = ProtoDeclare102;

//Start scene graph.
let ProtoInstance128 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance128.name = "Humanoid";
ProtoInstance128.DEF = "Humanoid";
let fieldValue129 = browser.currentScene.createNode("fieldValue");
fieldValue129.name = "name";
fieldValue129.value = "nancy";
ProtoInstance128.fieldValue = new MFNode();

ProtoInstance128.fieldValue[0] = fieldValue129;

let fieldValue130 = browser.currentScene.createNode("fieldValue");
fieldValue130.name = "version";
fieldValue130.value = "1.1";
ProtoInstance128.fieldValue[1] = fieldValue130;

let fieldValue131 = browser.currentScene.createNode("fieldValue");
fieldValue131.name = "info";
fieldValue131.value = "\"humanoidVersion=Nancy V1.2b\" \"authorName=Cindy Ballreich\" \"authorEmail=cindy@ballreich.net\" \"copyright=1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved.\" \"creationDate=Tue Dec 30 08:30:08 PST 1997\" \"usageRestrictions=Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/h-anim/small_logo.gif> is present and proper credit is given.\"";
ProtoInstance128.fieldValue[2] = fieldValue131;

let fieldValue132 = browser.currentScene.createNode("fieldValue");
fieldValue132.name = "humanoidBody";
let ProtoInstance133 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance133.name = "Joint";
ProtoInstance133.DEF = "hanim_HumanoidRoot";
let fieldValue134 = browser.currentScene.createNode("fieldValue");
fieldValue134.name = "name";
fieldValue134.value = "humanoid_root";
ProtoInstance133.fieldValue = new MFNode();

ProtoInstance133.fieldValue[0] = fieldValue134;

let fieldValue135 = browser.currentScene.createNode("fieldValue");
fieldValue135.name = "center";
fieldValue135.value = "-0.00405 0.855 -0.000113";
ProtoInstance133.fieldValue[1] = fieldValue135;

let fieldValue136 = browser.currentScene.createNode("fieldValue");
fieldValue136.name = "children";
let ProtoInstance137 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance137.name = "Joint";
ProtoInstance137.DEF = "hanim_sacroiliac";
let fieldValue138 = browser.currentScene.createNode("fieldValue");
fieldValue138.name = "name";
fieldValue138.value = "sacroiliac";
ProtoInstance137.fieldValue = new MFNode();

ProtoInstance137.fieldValue[0] = fieldValue138;

let fieldValue139 = browser.currentScene.createNode("fieldValue");
fieldValue139.name = "center";
fieldValue139.value = "0 1.01 -0.0204";
ProtoInstance137.fieldValue[1] = fieldValue139;

let fieldValue140 = browser.currentScene.createNode("fieldValue");
fieldValue140.name = "children";
let ProtoInstance141 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance141.name = "Segment";
ProtoInstance141.DEF = "hanim_pelvis";
let fieldValue142 = browser.currentScene.createNode("fieldValue");
fieldValue142.name = "name";
fieldValue142.value = "pelvis";
ProtoInstance141.fieldValue = new MFNode();

ProtoInstance141.fieldValue[0] = fieldValue142;

let fieldValue143 = browser.currentScene.createNode("fieldValue");
fieldValue143.name = "children";
let Shape144 = browser.currentScene.createNode("Shape");
let Appearance145 = browser.currentScene.createNode("Appearance");
let Material146 = browser.currentScene.createNode("Material");
Material146.DEF = "Pants_Color";
Material146.ambientIntensity = 0.25;
Material146.diffuseColor = new SFColor(new float[0.054,0.233,0.39]);
Appearance145.material = Material146;

Shape144.appearance = Appearance145;

let IndexedFaceSet147 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet147.coordIndex = new MFInt32(new int[0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1]);
IndexedFaceSet147.creaseAngle = 1.14;
let Coordinate148 = browser.currentScene.createNode("Coordinate");
Coordinate148.point = new MFVec3f(new float[0,1.06,0.0218,0.0561,1.07,0.00726,0.0851,1.07,-0.0115,0.104,1.07,-0.0497,0.0851,1.07,-0.0851,0.032,1.06,-0.0985,0.0873,1.04,0.0078,0.033,1.04,0.0395,0.123,1.05,-0.0405,0.0609,1.02,-0.106,0.0894,0.996,-0.106,0.143,1,-0.0309,0.117,1,0.0164,0.0314,0.999,0.0502,0.0314,0.96,-0.13,0.156,0.966,-0.0405,0.156,0.968,-0.00724,0.0341,0.954,0.0513,0.115,0.96,-0.0916,0.121,0.926,0.0352,0.0357,0.92,0.0497,0.0314,0.91,-0.146,0.0991,0.91,-0.131,0.169,0.883,-0.0448,0.169,0.885,-0.00939,0.123,0.873,0.0384,0.0926,0.872,0.047,0.0325,0.873,0.0287,0.0293,0.866,-0.142,0.102,0.869,-0.131,0.129,0.868,-0.103,0.0314,0.84,-0.125,0.101,0.844,-0.122,0.133,0.846,-0.0878,0.0653,0.835,0.0132,0.0615,0.824,-0.111,0.0985,0.823,-0.101,0.132,0.826,-0.0448,0.0609,0.821,-0.0158,0.0599,0.812,-0.0545,0,1.08,-0.0266,-0.0561,1.07,0.00726,-0.0851,1.07,-0.0115,-0.104,1.07,-0.0497,-0.0851,1.07,-0.0851,-0.032,1.06,-0.0985,-0.0873,1.04,0.0078,-0.033,1.04,0.0395,-0.123,1.05,-0.0405,-0.0609,1.02,-0.106,0,1.02,-0.108,-0.0894,0.996,-0.106,-0.143,1,-0.0309,-0.144,1,-0.011,-0.117,1,0.0164,-0.0314,0.999,0.0502,0,0.961,-0.123,-0.0314,0.96,-0.13,-0.156,0.966,-0.0405,-0.156,0.968,-0.00724,-0.0341,0.954,0.0513,-0.115,0.96,-0.0916,-0.121,0.926,0.0352,-0.0357,0.92,0.0497,0,0.91,-0.127,-0.0314,0.91,-0.146,-0.0991,0.91,-0.131,-0.167,0.911,-0.0448,-0.167,0.912,-0.00671,0,0.883,-0.129,-0.123,0.873,0.0384,-0.0926,0.872,0.047,-0.0325,0.873,0.0287,-0.0293,0.866,-0.142,-0.102,0.869,-0.131,-0.129,0.868,-0.103,-0.166,0.863,-0.0148,0,0.863,-0.00456,-0.166,0.862,-0.0459,0,0.858,-0.1,-0.0314,0.84,-0.125,-0.101,0.844,-0.122,-0.0653,0.835,0.0132,0,0.839,-0.0217,0,0.835,-0.0867,-0.0615,0.824,-0.111,-0.0985,0.823,-0.101,-0.132,0.826,-0.0448,-0.0609,0.821,-0.0158,0,0.831,-0.0626,-0.0599,0.812,-0.0545]);
IndexedFaceSet147.coord = Coordinate148;

Shape144.geometry = IndexedFaceSet147;

fieldValue143.children = new MFNode();

fieldValue143.children[0] = Shape144;

ProtoInstance141.fieldValue[1] = fieldValue143;

fieldValue140.children = new MFNode();

fieldValue140.children[0] = ProtoInstance141;

let ProtoInstance149 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance149.name = "Joint";
ProtoInstance149.DEF = "hanim_l_hip";
let fieldValue150 = browser.currentScene.createNode("fieldValue");
fieldValue150.name = "name";
fieldValue150.value = "l_hip";
ProtoInstance149.fieldValue = new MFNode();

ProtoInstance149.fieldValue[0] = fieldValue150;

let fieldValue151 = browser.currentScene.createNode("fieldValue");
fieldValue151.name = "center";
fieldValue151.value = "0.122 0.888271 -0.0693267";
ProtoInstance149.fieldValue[1] = fieldValue151;

let fieldValue152 = browser.currentScene.createNode("fieldValue");
fieldValue152.name = "children";
let ProtoInstance153 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance153.name = "Segment";
ProtoInstance153.DEF = "hanim_l_thigh";
let fieldValue154 = browser.currentScene.createNode("fieldValue");
fieldValue154.name = "name";
fieldValue154.value = "l_thigh";
ProtoInstance153.fieldValue = new MFNode();

ProtoInstance153.fieldValue[0] = fieldValue154;

let fieldValue155 = browser.currentScene.createNode("fieldValue");
fieldValue155.name = "children";
let Shape156 = browser.currentScene.createNode("Shape");
let Appearance157 = browser.currentScene.createNode("Appearance");
let Material158 = browser.currentScene.createNode("Material");
Material158.USE = "Pants_Color";
Appearance157.material = Material158;

Shape156.appearance = Appearance157;

let IndexedFaceSet159 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet159.coordIndex = new MFInt32(new int[0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1]);
IndexedFaceSet159.creaseAngle = 1.32;
let Coordinate160 = browser.currentScene.createNode("Coordinate");
Coordinate160.point = new MFVec3f(new float[0.0969,0.804,-0.0486,0.101,0.876,0.0336,0.17,0.894,-0.00778,0.17,0.891,-0.076,0.124,0.858,-0.129,0.076,0.843,-0.143,0.025,0.819,-0.0889,0.0507,0.847,0.0196,0.00349,0.826,-0.0287,0.0991,0.808,0.0406,0.161,0.814,-0.00187,0.165,0.808,-0.0755,0.122,0.788,-0.126,0.00993,0.762,-0.0937,0.00993,0.762,-0.0309,0.0491,0.777,0.0185,0.0755,0.766,-0.139,0.13,0.597,-0.00618,0.132,0.6,-0.0593,0.108,0.603,-0.105,0.0722,0.601,-0.118,0.0314,0.59,-0.0953,0.0239,0.566,-0.0427,0.047,0.566,0.0051,0.0878,0.581,0.0217,0.114,0.499,-0.0132,0.116,0.488,-0.061,0.103,0.567,-0.0991,0.0362,0.557,-0.0926,0.025,0.486,-0.047,0.0507,0.497,-0.00188,0.0862,0.513,0.018,0.0733,0.579,-0.108]);
IndexedFaceSet159.coord = Coordinate160;

Shape156.geometry = IndexedFaceSet159;

fieldValue155.children = new MFNode();

fieldValue155.children[0] = Shape156;

ProtoInstance153.fieldValue[1] = fieldValue155;

fieldValue152.children = new MFNode();

fieldValue152.children[0] = ProtoInstance153;

let ProtoInstance161 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance161.name = "Joint";
ProtoInstance161.DEF = "hanim_l_knee";
let fieldValue162 = browser.currentScene.createNode("fieldValue");
fieldValue162.name = "name";
fieldValue162.value = "l_knee";
ProtoInstance161.fieldValue = new MFNode();

ProtoInstance161.fieldValue[0] = fieldValue162;

let fieldValue163 = browser.currentScene.createNode("fieldValue");
fieldValue163.name = "center";
fieldValue163.value = "0.0738 0.517 -0.0284";
ProtoInstance161.fieldValue[1] = fieldValue163;

let fieldValue164 = browser.currentScene.createNode("fieldValue");
fieldValue164.name = "children";
let ProtoInstance165 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance165.name = "Segment";
ProtoInstance165.DEF = "hanim_l_calf";
let fieldValue166 = browser.currentScene.createNode("fieldValue");
fieldValue166.name = "name";
fieldValue166.value = "l_calf";
ProtoInstance165.fieldValue = new MFNode();

ProtoInstance165.fieldValue[0] = fieldValue166;

let fieldValue167 = browser.currentScene.createNode("fieldValue");
fieldValue167.name = "children";
let Shape168 = browser.currentScene.createNode("Shape");
let Appearance169 = browser.currentScene.createNode("Appearance");
let Material170 = browser.currentScene.createNode("Material");
Material170.USE = "Pants_Color";
Appearance169.material = Material170;

Shape168.appearance = Appearance169;

let IndexedFaceSet171 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet171.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1]);
IndexedFaceSet171.creaseAngle = 1.57;
let Coordinate172 = browser.currentScene.createNode("Coordinate");
Coordinate172.point = new MFVec3f(new float[0.0883,0.532,-0.00349,0.0609,0.533,-0.00833,0.0814,0.55,-0.0395,0.0529,0.536,-0.0368,0.0577,0.544,-0.0577,0.0722,0.546,-0.0717,0.0975,0.54,-0.0647,0.105,0.539,-0.0438,0.104,0.539,-0.0223,0.0862,0.506,0.0158,0.101,0.51,-0.0798,0.0706,0.51,-0.101,0.0406,0.513,-0.0744,0.0368,0.51,-0.0357,0.0556,0.506,-0.000272,0.117,0.508,-0.0169,0.0878,0.361,-0.0126,0.123,0.363,-0.04,0.123,0.363,-0.0663,0.107,0.367,-0.107,0.0588,0.365,-0.122,0.0228,0.358,-0.0926,0.0239,0.358,-0.0475,0.0497,0.358,-0.0234,0.118,0.311,-0.0411,0.118,0.309,-0.0685,0.105,0.31,-0.108,0.0572,0.308,-0.123,0.0201,0.309,-0.0937,0.0191,0.311,-0.0508,0.0475,0.307,-0.0282,0.0883,0.309,-0.018,0.0959,0.124,-0.04,0.0905,0.12,-0.0647,0.0738,0.117,-0.0814,0.0373,0.121,-0.0636,0.0416,0.124,-0.0416,0.0744,0.13,-0.0212,0.0561,0.13,-0.0245,0.0529,0.121,-0.0873,0.0948,0.0897,-0.0368,0.0916,0.0779,-0.0604,0.0717,0.0854,-0.0765,0.0406,0.0918,-0.0626,0.0384,0.0881,-0.0363,0.054,0.0972,-0.0175,0.0765,0.11,-0.0169,0.0486,0.0999,-0.0835]);
IndexedFaceSet171.coord = Coordinate172;

Shape168.geometry = IndexedFaceSet171;

fieldValue167.children = new MFNode();

fieldValue167.children[0] = Shape168;

ProtoInstance165.fieldValue[1] = fieldValue167;

fieldValue164.children = new MFNode();

fieldValue164.children[0] = ProtoInstance165;

let ProtoInstance173 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance173.name = "Joint";
ProtoInstance173.DEF = "hanim_l_ankle";
let fieldValue174 = browser.currentScene.createNode("fieldValue");
fieldValue174.name = "name";
fieldValue174.value = "l_ankle";
ProtoInstance173.fieldValue = new MFNode();

ProtoInstance173.fieldValue[0] = fieldValue174;

let fieldValue175 = browser.currentScene.createNode("fieldValue");
fieldValue175.name = "center";
fieldValue175.value = "0.0645 0.0719 -0.048";
ProtoInstance173.fieldValue[1] = fieldValue175;

let fieldValue176 = browser.currentScene.createNode("fieldValue");
fieldValue176.name = "children";
let ProtoInstance177 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance177.name = "Segment";
ProtoInstance177.DEF = "hanim_l_hindfoot";
let fieldValue178 = browser.currentScene.createNode("fieldValue");
fieldValue178.name = "name";
fieldValue178.value = "l_hindfoot";
ProtoInstance177.fieldValue = new MFNode();

ProtoInstance177.fieldValue[0] = fieldValue178;

let fieldValue179 = browser.currentScene.createNode("fieldValue");
fieldValue179.name = "children";
let Shape180 = browser.currentScene.createNode("Shape");
let Appearance181 = browser.currentScene.createNode("Appearance");
let Material182 = browser.currentScene.createNode("Material");
Material182.DEF = "Shoe_Color";
Material182.ambientIntensity = 0.25;
Appearance181.material = Material182;

Shape180.appearance = Appearance181;

let IndexedFaceSet183 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet183.coordIndex = new MFInt32(new int[2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1]);
IndexedFaceSet183.creaseAngle = 1.57;
let Coordinate184 = browser.currentScene.createNode("Coordinate");
Coordinate184.point = new MFVec3f(new float[0.0529,0,-0.0923,0.0863,0,-0.0862,0.0727,0,-0.0994,0.0863,0.0219,-0.0862,0.0727,0.0219,-0.0994,0.1,0,-0.0594,0.1,0.0219,-0.0594,0.113,0,0.0645,0.113,0.0219,0.0645,0.112,0,0.117,0.112,0.0156,0.117,0.0701,0,0.146,0.0701,0.0156,0.146,0.0468,0,0.153,0.0468,0.0156,0.153,0.0215,0,0.146,0.0215,0.0156,0.146,0.0165,0,0.125,0.0165,0.0156,0.125,0.0211,0,0.0377,0.0211,0.0219,0.0377,0.0393,0,-0.0129,0.0393,0.0219,-0.0129,0.0433,0,-0.0534,0.0433,0.0219,-0.0534,0.0529,0.0219,-0.0923,0.0305,0.0253,0.0938,0.0505,0.0253,0.099,0.0854,0.0253,0.0834,0.102,0.0253,0.0707,0.0568,0.0573,-0.0918,0.0492,0.0573,-0.0497,0.0435,0.0573,-0.0225,0.0442,0.0573,0.0235,0.0623,0.0573,0.0366,0.0911,0.0573,0.0159,0.0962,0.0573,-0.0121,0.0911,0.0573,-0.0482,0.0758,0.0573,-0.0899,0.0676,0.0573,-0.0962,0.0578,0.0953,-0.0896,0.0489,0.0953,-0.0757,0.0447,0.0953,-0.0432,0.0451,0.0953,-0.0128,0.0624,0.0953,-0.00466,0.0857,0.0953,-0.0134,0.0953,0.0953,-0.038,0.0843,0.0953,-0.0803,0.0761,0.0953,-0.0889,0.0682,0.0953,-0.0929,0.0675,0.13,-0.0608]);
IndexedFaceSet183.coord = Coordinate184;

Shape180.geometry = IndexedFaceSet183;

fieldValue179.children = new MFNode();

fieldValue179.children[0] = Shape180;

ProtoInstance177.fieldValue[1] = fieldValue179;

fieldValue176.children = new MFNode();

fieldValue176.children[0] = ProtoInstance177;

ProtoInstance173.fieldValue[2] = fieldValue176;

fieldValue164.children[1] = ProtoInstance173;

ProtoInstance161.fieldValue[2] = fieldValue164;

fieldValue152.children[1] = ProtoInstance161;

ProtoInstance149.fieldValue[2] = fieldValue152;

fieldValue140.children[1] = ProtoInstance149;

let ProtoInstance185 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance185.name = "Joint";
ProtoInstance185.DEF = "hanim_r_hip";
let fieldValue186 = browser.currentScene.createNode("fieldValue");
fieldValue186.name = "name";
fieldValue186.value = "r_hip";
ProtoInstance185.fieldValue = new MFNode();

ProtoInstance185.fieldValue[0] = fieldValue186;

let fieldValue187 = browser.currentScene.createNode("fieldValue");
fieldValue187.name = "center";
fieldValue187.value = "-0.11 0.892362 -0.0732533";
ProtoInstance185.fieldValue[1] = fieldValue187;

let fieldValue188 = browser.currentScene.createNode("fieldValue");
fieldValue188.name = "children";
let ProtoInstance189 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance189.name = "Segment";
ProtoInstance189.DEF = "hanim_r_thigh";
let fieldValue190 = browser.currentScene.createNode("fieldValue");
fieldValue190.name = "name";
fieldValue190.value = "r_thigh";
ProtoInstance189.fieldValue = new MFNode();

ProtoInstance189.fieldValue[0] = fieldValue190;

let fieldValue191 = browser.currentScene.createNode("fieldValue");
fieldValue191.name = "children";
let Shape192 = browser.currentScene.createNode("Shape");
let Appearance193 = browser.currentScene.createNode("Appearance");
let Material194 = browser.currentScene.createNode("Material");
Material194.USE = "Pants_Color";
Appearance193.material = Material194;

Shape192.appearance = Appearance193;

let IndexedFaceSet195 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet195.coordIndex = new MFInt32(new int[5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1]);
IndexedFaceSet195.creaseAngle = 1.61;
let Coordinate196 = browser.currentScene.createNode("Coordinate");
Coordinate196.point = new MFVec3f(new float[-0.0969,0.804,-0.0486,-0.101,0.876,0.0336,-0.17,0.894,-0.00778,-0.17,0.891,-0.076,-0.124,0.858,-0.129,-0.076,0.843,-0.143,-0.025,0.819,-0.0889,-0.0507,0.847,0.0196,-0.00349,0.826,-0.0287,-0.0991,0.808,0.0406,-0.161,0.814,-0.00187,-0.165,0.808,-0.0755,-0.122,0.788,-0.126,-0.00993,0.762,-0.0937,-0.00993,0.762,-0.0309,-0.0491,0.777,0.0185,-0.0755,0.766,-0.139,-0.13,0.597,-0.00618,-0.132,0.6,-0.0593,-0.108,0.603,-0.105,-0.0722,0.601,-0.118,-0.0314,0.59,-0.0953,-0.0239,0.566,-0.0427,-0.047,0.566,0.0051,-0.0878,0.581,0.0217,-0.114,0.499,-0.0132,-0.116,0.488,-0.061,-0.103,0.567,-0.0991,-0.0362,0.557,-0.0926,-0.025,0.486,-0.047,-0.0507,0.497,-0.00188,-0.0862,0.513,0.018]);
IndexedFaceSet195.coord = Coordinate196;

Shape192.geometry = IndexedFaceSet195;

fieldValue191.children = new MFNode();

fieldValue191.children[0] = Shape192;

ProtoInstance189.fieldValue[1] = fieldValue191;

fieldValue188.children = new MFNode();

fieldValue188.children[0] = ProtoInstance189;

let ProtoInstance197 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance197.name = "Joint";
ProtoInstance197.DEF = "hanim_r_knee";
let fieldValue198 = browser.currentScene.createNode("fieldValue");
fieldValue198.name = "name";
fieldValue198.value = "r_knee";
ProtoInstance197.fieldValue = new MFNode();

ProtoInstance197.fieldValue[0] = fieldValue198;

let fieldValue199 = browser.currentScene.createNode("fieldValue");
fieldValue199.name = "center";
fieldValue199.value = "-0.0699 0.51 -0.0166";
ProtoInstance197.fieldValue[1] = fieldValue199;

let fieldValue200 = browser.currentScene.createNode("fieldValue");
fieldValue200.name = "children";
let ProtoInstance201 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance201.name = "Segment";
ProtoInstance201.DEF = "hanim_r_calf";
let fieldValue202 = browser.currentScene.createNode("fieldValue");
fieldValue202.name = "name";
fieldValue202.value = "r_calf";
ProtoInstance201.fieldValue = new MFNode();

ProtoInstance201.fieldValue[0] = fieldValue202;

let fieldValue203 = browser.currentScene.createNode("fieldValue");
fieldValue203.name = "children";
let Shape204 = browser.currentScene.createNode("Shape");
let Appearance205 = browser.currentScene.createNode("Appearance");
let Material206 = browser.currentScene.createNode("Material");
Material206.USE = "Pants_Color";
Appearance205.material = Material206;

Shape204.appearance = Appearance205;

let IndexedFaceSet207 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet207.coordIndex = new MFInt32(new int[14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1]);
IndexedFaceSet207.creaseAngle = 1.57;
let Coordinate208 = browser.currentScene.createNode("Coordinate");
Coordinate208.point = new MFVec3f(new float[-0.123,0.363,-0.0663,-0.123,0.363,-0.04,-0.118,0.309,-0.0685,-0.118,0.311,-0.0411,-0.117,0.508,-0.0169,-0.107,0.367,-0.107,-0.105,0.539,-0.0438,-0.105,0.31,-0.108,-0.104,0.539,-0.0223,-0.101,0.51,-0.0798,-0.0975,0.54,-0.0647,-0.0948,0.0897,-0.0368,-0.0916,0.0779,-0.0604,-0.0905,0.12,-0.0647,-0.0883,0.532,-0.00349,-0.0883,0.309,-0.018,-0.0878,0.361,-0.0126,-0.0862,0.506,0.0158,-0.0814,0.55,-0.0395,-0.0765,0.11,-0.0169,-0.0744,0.13,-0.0212,-0.0738,0.117,-0.0814,-0.0722,0.546,-0.0717,-0.0717,0.0854,-0.0765,-0.0706,0.51,-0.101,-0.0609,0.533,-0.00833,-0.0588,0.365,-0.122,-0.0577,0.544,-0.0577,-0.0572,0.308,-0.123,-0.0561,0.13,-0.0245,-0.0556,0.506,-0.000272,-0.054,0.0972,-0.0175,-0.0529,0.536,-0.0368,-0.0529,0.121,-0.0873,-0.0497,0.358,-0.0234,-0.0486,0.0999,-0.0835,-0.0475,0.307,-0.0282,-0.0416,0.124,-0.0416,-0.0406,0.0918,-0.0626,-0.0406,0.513,-0.0744,-0.0384,0.0881,-0.0363,-0.0373,0.121,-0.0636,-0.0368,0.51,-0.0357,-0.0239,0.358,-0.0475,-0.0228,0.358,-0.0926,-0.0201,0.309,-0.0937,-0.0191,0.311,-0.0508,-0.0985,0.125,-0.0375]);
IndexedFaceSet207.coord = Coordinate208;

Shape204.geometry = IndexedFaceSet207;

fieldValue203.children = new MFNode();

fieldValue203.children[0] = Shape204;

ProtoInstance201.fieldValue[1] = fieldValue203;

fieldValue200.children = new MFNode();

fieldValue200.children[0] = ProtoInstance201;

let ProtoInstance209 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance209.name = "Joint";
ProtoInstance209.DEF = "hanim_r_ankle";
let fieldValue210 = browser.currentScene.createNode("fieldValue");
fieldValue210.name = "name";
fieldValue210.value = "r_ankle";
ProtoInstance209.fieldValue = new MFNode();

ProtoInstance209.fieldValue[0] = fieldValue210;

let fieldValue211 = browser.currentScene.createNode("fieldValue");
fieldValue211.name = "center";
fieldValue211.value = "-0.064 0.0753 -0.0412";
ProtoInstance209.fieldValue[1] = fieldValue211;

let fieldValue212 = browser.currentScene.createNode("fieldValue");
fieldValue212.name = "children";
let ProtoInstance213 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance213.name = "Segment";
ProtoInstance213.DEF = "hanim_r_hindfoot";
let fieldValue214 = browser.currentScene.createNode("fieldValue");
fieldValue214.name = "name";
fieldValue214.value = "r_hindfoot";
ProtoInstance213.fieldValue = new MFNode();

ProtoInstance213.fieldValue[0] = fieldValue214;

let fieldValue215 = browser.currentScene.createNode("fieldValue");
fieldValue215.name = "children";
let Shape216 = browser.currentScene.createNode("Shape");
let Appearance217 = browser.currentScene.createNode("Appearance");
let Material218 = browser.currentScene.createNode("Material");
Material218.USE = "Shoe_Color";
Appearance217.material = Material218;

Shape216.appearance = Appearance217;

let IndexedFaceSet219 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet219.coordIndex = new MFInt32(new int[6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1]);
IndexedFaceSet219.creaseAngle = 1.57;
let Coordinate220 = browser.currentScene.createNode("Coordinate");
Coordinate220.point = new MFVec3f(new float[-0.0727,0,-0.0994,-0.1,0,-0.0594,-0.0701,0,0.146,-0.0468,0,0.153,-0.0215,0,0.146,-0.0433,0,-0.0534,-0.0529,0,-0.0923,-0.0727,0.0219,-0.0994,-0.0863,0.0219,-0.0862,-0.1,0.0219,-0.0594,-0.108,0.0219,-0.00479,-0.112,0.0156,0.117,-0.0701,0.0156,0.146,-0.0468,0.0156,0.153,-0.0215,0.0156,0.146,-0.0165,0.017,0.0777,-0.0433,0.0219,-0.0534,-0.0529,0.0219,-0.0923,-0.0445,0.0273,-0.0189,-0.0265,0.0253,0.0549,-0.0305,0.0253,0.0938,-0.069,0.0253,0.0938,-0.102,0.0253,0.0707,-0.0568,0.0573,-0.0918,-0.0492,0.0573,-0.0497,-0.0424,0.0573,-0.00142,-0.0478,0.0573,0.0341,-0.0623,0.0573,0.0366,-0.0864,0.0573,0.0245,-0.0962,0.0573,-0.0121,-0.0845,0.0573,-0.0764,-0.0758,0.0573,-0.0899,-0.0676,0.0573,-0.0962,-0.0578,0.0953,-0.0896,-0.0489,0.0953,-0.0757,-0.0459,0.0953,-0.0615,-0.0435,0.0953,-0.0292,-0.0485,0.0953,-0.00582,-0.0624,0.0953,-0.00466,-0.0857,0.0953,-0.0134,-0.0953,0.0953,-0.038,-0.0843,0.0953,-0.0803,-0.0761,0.0953,-0.0889,-0.0682,0.0953,-0.0929,-0.0675,0.13,-0.0608,-0.0165,0,0.125,-0.112,0,0.117,-0.0165,0,0.0777,-0.0393,0,-0.0129,-0.108,0,-0.00479,-0.0863,0,-0.0862]);
IndexedFaceSet219.coord = Coordinate220;

Shape216.geometry = IndexedFaceSet219;

fieldValue215.children = new MFNode();

fieldValue215.children[0] = Shape216;

ProtoInstance213.fieldValue[1] = fieldValue215;

fieldValue212.children = new MFNode();

fieldValue212.children[0] = ProtoInstance213;

ProtoInstance209.fieldValue[2] = fieldValue212;

fieldValue200.children[1] = ProtoInstance209;

ProtoInstance197.fieldValue[2] = fieldValue200;

fieldValue188.children[1] = ProtoInstance197;

ProtoInstance185.fieldValue[2] = fieldValue188;

fieldValue140.children[2] = ProtoInstance185;

ProtoInstance137.fieldValue[2] = fieldValue140;

fieldValue136.children = new MFNode();

fieldValue136.children[0] = ProtoInstance137;

let ProtoInstance221 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance221.name = "Joint";
ProtoInstance221.DEF = "hanim_vl1";
let fieldValue222 = browser.currentScene.createNode("fieldValue");
fieldValue222.name = "name";
fieldValue222.value = "vl1";
ProtoInstance221.fieldValue = new MFNode();

ProtoInstance221.fieldValue[0] = fieldValue222;

let fieldValue223 = browser.currentScene.createNode("fieldValue");
fieldValue223.name = "center";
fieldValue223.value = "-0.00405 1.07 -0.0275";
ProtoInstance221.fieldValue[1] = fieldValue223;

let fieldValue224 = browser.currentScene.createNode("fieldValue");
fieldValue224.name = "children";
let ProtoInstance225 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance225.name = "Segment";
ProtoInstance225.DEF = "hanim_c7";
let fieldValue226 = browser.currentScene.createNode("fieldValue");
fieldValue226.name = "name";
fieldValue226.value = "l1";
ProtoInstance225.fieldValue = new MFNode();

ProtoInstance225.fieldValue[0] = fieldValue226;

let fieldValue227 = browser.currentScene.createNode("fieldValue");
fieldValue227.name = "children";
let Shape228 = browser.currentScene.createNode("Shape");
let Appearance229 = browser.currentScene.createNode("Appearance");
let Material230 = browser.currentScene.createNode("Material");
Material230.DEF = "Shirt_Color";
Material230.ambientIntensity = 0.25;
Material230.diffuseColor = new SFColor(new float[0.6,0.0745,0.1137]);
Appearance229.material = Material230;

let ImageTexture231 = browser.currentScene.createNode("ImageTexture");
ImageTexture231.DEF = "small_logo_Tex";
ImageTexture231.url = new MFString(new java.lang.String["small_logo.gif","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/small_logo.gif"]);
Appearance229.texture = ImageTexture231;

Shape228.appearance = Appearance229;

let IndexedFaceSet232 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet232.coordIndex = new MFInt32(new int[0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1]);
IndexedFaceSet232.creaseAngle = 1.59;
let Coordinate233 = browser.currentScene.createNode("Coordinate");
Coordinate233.point = new MFVec3f(new float[0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168]);
IndexedFaceSet232.coord = Coordinate233;

let TextureCoordinate234 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate234.point = new MFVec2f(new float[0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
IndexedFaceSet232.texCoord = TextureCoordinate234;

Shape228.geometry = IndexedFaceSet232;

fieldValue227.children = new MFNode();

fieldValue227.children[0] = Shape228;

ProtoInstance225.fieldValue[1] = fieldValue227;

fieldValue224.children = new MFNode();

fieldValue224.children[0] = ProtoInstance225;

let ProtoInstance235 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance235.name = "Joint";
ProtoInstance235.DEF = "hanim_l_shoulder";
let fieldValue236 = browser.currentScene.createNode("fieldValue");
fieldValue236.name = "name";
fieldValue236.value = "l_shoulder";
ProtoInstance235.fieldValue = new MFNode();

ProtoInstance235.fieldValue[0] = fieldValue236;

let fieldValue237 = browser.currentScene.createNode("fieldValue");
fieldValue237.name = "center";
fieldValue237.value = "0.167 1.36 -0.0518";
ProtoInstance235.fieldValue[1] = fieldValue237;

let fieldValue238 = browser.currentScene.createNode("fieldValue");
fieldValue238.name = "children";
let ProtoInstance239 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance239.name = "Segment";
ProtoInstance239.DEF = "hanim_l_upperarm";
let fieldValue240 = browser.currentScene.createNode("fieldValue");
fieldValue240.name = "name";
fieldValue240.value = "l_upperarm";
ProtoInstance239.fieldValue = new MFNode();

ProtoInstance239.fieldValue[0] = fieldValue240;

let fieldValue241 = browser.currentScene.createNode("fieldValue");
fieldValue241.name = "children";
let Transform242 = browser.currentScene.createNode("Transform");
Transform242.DEF = "l_upperarm_adjust";
Transform242.center = new SFVec3f(new float[0.182,1.22,-0.047]);
Transform242.rotation = new SFRotation(new float[1,0,0,0.119]);
Transform242.translation = new SFVec3f(new float[0,0.0004203,-0.01665]);
let Shape243 = browser.currentScene.createNode("Shape");
let Appearance244 = browser.currentScene.createNode("Appearance");
let Material245 = browser.currentScene.createNode("Material");
Material245.DEF = "Skin_Color";
Material245.ambientIntensity = 0.25;
Material245.diffuseColor = new SFColor(new float[0.749,0.601,0.462]);
Appearance244.material = Material245;

Shape243.appearance = Appearance244;

let IndexedFaceSet246 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet246.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1]);
IndexedFaceSet246.creaseAngle = 1.65;
let Coordinate247 = browser.currentScene.createNode("Coordinate");
Coordinate247.point = new MFVec3f(new float[0.174,1.37,-0.0625,0.185,1.38,-0.0395,0.156,1.39,-0.0464,0.174,1.37,-0.0158,0.154,1.37,-0.0185,0.157,1.38,-0.0733,0.182,1.33,-0.0728,0.151,1.33,-0.0937,0.15,1.34,-0.000787,0.185,1.33,-0.00025,0.201,1.33,-0.0411,0.189,1.26,-0.0808,0.155,1.26,-0.0867,0.151,1.26,-0.000789,0.19,1.26,-0.00401,0.209,1.26,-0.0427,0.141,1.26,-0.0421,0.203,1.08,-0.0744,0.162,1.05,-0.0561,0.169,1.08,-0.00885,0.208,1.07,-0.00133,0.221,1.08,-0.0352]);
IndexedFaceSet246.coord = Coordinate247;

Shape243.geometry = IndexedFaceSet246;

Transform242.children = new MFNode();

Transform242.children[0] = Shape243;

fieldValue241.children = new MFNode();

fieldValue241.children[0] = Transform242;

ProtoInstance239.fieldValue[1] = fieldValue241;

fieldValue238.children = new MFNode();

fieldValue238.children[0] = ProtoInstance239;

let ProtoInstance248 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance248.name = "Joint";
ProtoInstance248.DEF = "hanim_l_elbow";
let fieldValue249 = browser.currentScene.createNode("fieldValue");
fieldValue249.name = "name";
fieldValue249.value = "l_elbow";
ProtoInstance248.fieldValue = new MFNode();

ProtoInstance248.fieldValue[0] = fieldValue249;

let fieldValue250 = browser.currentScene.createNode("fieldValue");
fieldValue250.name = "center";
fieldValue250.value = "0.196 1.07 -0.0518";
ProtoInstance248.fieldValue[1] = fieldValue250;

let fieldValue251 = browser.currentScene.createNode("fieldValue");
fieldValue251.name = "children";
let ProtoInstance252 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance252.name = "Segment";
ProtoInstance252.DEF = "hanim_l_forearm";
let fieldValue253 = browser.currentScene.createNode("fieldValue");
fieldValue253.name = "name";
fieldValue253.value = "l_forearm";
ProtoInstance252.fieldValue = new MFNode();

ProtoInstance252.fieldValue[0] = fieldValue253;

let fieldValue254 = browser.currentScene.createNode("fieldValue");
fieldValue254.name = "children";
let Transform255 = browser.currentScene.createNode("Transform");
Transform255.DEF = "l_forearm_adjust";
Transform255.center = new SFVec3f(new float[0.198,0.961,-0.0405]);
Transform255.rotation = new SFRotation(new float[-1,0,0,0.1]);
Transform255.translation = new SFVec3f(new float[0,0.003724,-0.0236]);
let Shape256 = browser.currentScene.createNode("Shape");
let Appearance257 = browser.currentScene.createNode("Appearance");
let Material258 = browser.currentScene.createNode("Material");
Material258.USE = "Skin_Color";
Appearance257.material = Material258;

Shape256.appearance = Appearance257;

let IndexedFaceSet259 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet259.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1]);
IndexedFaceSet259.creaseAngle = 1.75;
let Coordinate260 = browser.currentScene.createNode("Coordinate");
Coordinate260.point = new MFVec3f(new float[0.177,1.09,-0.0609,0.202,1.1,-0.0566,0.189,1.1,-0.0395,0.213,1.1,-0.025,0.203,1.1,-0.0158,0.182,1.09,-0.00563,0.167,1.09,-0.0325,0.176,1.08,-0.0781,0.16,1.06,-0.0373,0.214,1.07,-0.00402,0.228,1.07,-0.0319,0.208,1.08,-0.0765,0.179,1.07,-0.00294,0.21,0.818,-0.0615,0.201,0.82,-0.0405,0.205,0.819,-0.00832,0.224,0.818,-0.00778,0.237,0.82,-0.0282,0.231,0.819,-0.0609]);
IndexedFaceSet259.coord = Coordinate260;

Shape256.geometry = IndexedFaceSet259;

Transform255.children = new MFNode();

Transform255.children[0] = Shape256;

fieldValue254.children = new MFNode();

fieldValue254.children[0] = Transform255;

ProtoInstance252.fieldValue[1] = fieldValue254;

fieldValue251.children = new MFNode();

fieldValue251.children[0] = ProtoInstance252;

let ProtoInstance261 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance261.name = "Joint";
ProtoInstance261.DEF = "hanim_l_wrist";
let fieldValue262 = browser.currentScene.createNode("fieldValue");
fieldValue262.name = "name";
fieldValue262.value = "l_wrist";
ProtoInstance261.fieldValue = new MFNode();

ProtoInstance261.fieldValue[0] = fieldValue262;

let fieldValue263 = browser.currentScene.createNode("fieldValue");
fieldValue263.name = "center";
fieldValue263.value = "0.213 0.811 -0.0338";
ProtoInstance261.fieldValue[1] = fieldValue263;

let fieldValue264 = browser.currentScene.createNode("fieldValue");
fieldValue264.name = "children";
let ProtoInstance265 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance265.name = "Segment";
ProtoInstance265.DEF = "hanim_l_hand";
let fieldValue266 = browser.currentScene.createNode("fieldValue");
fieldValue266.name = "name";
fieldValue266.value = "l_hand";
ProtoInstance265.fieldValue = new MFNode();

ProtoInstance265.fieldValue[0] = fieldValue266;

let fieldValue267 = browser.currentScene.createNode("fieldValue");
fieldValue267.name = "children";
let Transform268 = browser.currentScene.createNode("Transform");
Transform268.DEF = "l_hand_adjust";
Transform268.center = new SFVec3f(new float[0.213,0.811,-0.0338]);
Transform268.rotation = new SFRotation(new float[-0.06361,-0.9967,0.04988,1.333]);
Transform268.translation = new SFVec3f(new float[0,0.005142,-0.008662]);
let Shape269 = browser.currentScene.createNode("Shape");
let Appearance270 = browser.currentScene.createNode("Appearance");
let Material271 = browser.currentScene.createNode("Material");
Material271.USE = "Skin_Color";
Appearance270.material = Material271;

Shape269.appearance = Appearance270;

let IndexedFaceSet272 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet272.coordIndex = new MFInt32(new int[2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1]);
IndexedFaceSet272.creaseAngle = 1.48;
let Coordinate273 = browser.currentScene.createNode("Coordinate");
Coordinate273.point = new MFVec3f(new float[0.211,0.828,-0.0434,0.194,0.81,-0.0445,0.237,0.82,-0.0425,0.236,0.82,-0.0237,0.194,0.81,-0.0254,0.21,0.828,-0.0247,0.252,0.801,-0.0424,0.252,0.801,-0.0231,0.269,0.765,-0.0426,0.268,0.765,-0.0225,0.273,0.732,-0.0395,0.272,0.732,-0.0223,0.27,0.704,-0.0342,0.27,0.704,-0.0224,0.262,0.703,-0.0345,0.261,0.703,-0.0227,0.256,0.717,-0.0389,0.256,0.717,-0.023,0.255,0.738,-0.0408,0.255,0.738,-0.023,0.251,0.734,-0.0406,0.251,0.734,-0.0232,0.251,0.692,-0.0232,0.248,0.657,-0.0233,0.24,0.645,-0.0236,0.226,0.637,-0.0241,0.213,0.639,-0.0246,0.197,0.652,-0.0253,0.188,0.669,-0.0256,0.184,0.697,-0.0258,0.183,0.73,-0.0258,0.187,0.77,-0.0257,0.244,0.696,-0.0375,0.244,0.692,-0.0372,0.242,0.661,-0.0345,0.241,0.658,-0.0343,0.241,0.656,-0.0341,0.231,0.646,-0.0336,0.206,0.65,-0.0349,0.218,0.644,-0.034,0.205,0.652,-0.0352,0.198,0.667,-0.0367,0.195,0.691,-0.039,0.194,0.696,-0.0395,0.193,0.725,-0.042,0.193,0.731,-0.0425,0.197,0.765,-0.0449,0.197,0.77,-0.0453]);
IndexedFaceSet272.coord = Coordinate273;

Shape269.geometry = IndexedFaceSet272;

Transform268.children = new MFNode();

Transform268.children[0] = Shape269;

fieldValue267.children = new MFNode();

fieldValue267.children[0] = Transform268;

ProtoInstance265.fieldValue[1] = fieldValue267;

fieldValue264.children = new MFNode();

fieldValue264.children[0] = ProtoInstance265;

ProtoInstance261.fieldValue[2] = fieldValue264;

fieldValue251.children[1] = ProtoInstance261;

ProtoInstance248.fieldValue[2] = fieldValue251;

fieldValue238.children[1] = ProtoInstance248;

ProtoInstance235.fieldValue[2] = fieldValue238;

fieldValue224.children[1] = ProtoInstance235;

let ProtoInstance274 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance274.name = "Joint";
ProtoInstance274.DEF = "hanim_r_shoulder";
let fieldValue275 = browser.currentScene.createNode("fieldValue");
fieldValue275.name = "name";
fieldValue275.value = "r_shoulder";
ProtoInstance274.fieldValue = new MFNode();

ProtoInstance274.fieldValue[0] = fieldValue275;

let fieldValue276 = browser.currentScene.createNode("fieldValue");
fieldValue276.name = "center";
fieldValue276.value = "-0.167 1.36 -0.0458";
ProtoInstance274.fieldValue[1] = fieldValue276;

let fieldValue277 = browser.currentScene.createNode("fieldValue");
fieldValue277.name = "children";
let ProtoInstance278 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance278.name = "Segment";
ProtoInstance278.DEF = "hanim_r_upperarm";
let fieldValue279 = browser.currentScene.createNode("fieldValue");
fieldValue279.name = "name";
fieldValue279.value = "r_upperarm";
ProtoInstance278.fieldValue = new MFNode();

ProtoInstance278.fieldValue[0] = fieldValue279;

let fieldValue280 = browser.currentScene.createNode("fieldValue");
fieldValue280.name = "children";
let Transform281 = browser.currentScene.createNode("Transform");
Transform281.DEF = "r_upperarm_adjust";
Transform281.center = new SFVec3f(new float[-0.182,1.22,-0.047]);
Transform281.rotation = new SFRotation(new float[1,0,0,0.0836]);
Transform281.translation = new SFVec3f(new float[0,0.000589,-0.01169]);
let Shape282 = browser.currentScene.createNode("Shape");
let Appearance283 = browser.currentScene.createNode("Appearance");
let Material284 = browser.currentScene.createNode("Material");
Material284.USE = "Skin_Color";
Appearance283.material = Material284;

Shape282.appearance = Appearance283;

let IndexedFaceSet285 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet285.coordIndex = new MFInt32(new int[14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1]);
IndexedFaceSet285.creaseAngle = 1.53;
let Coordinate286 = browser.currentScene.createNode("Coordinate");
Coordinate286.point = new MFVec3f(new float[-0.221,1.08,-0.0352,-0.214,1.14,-0.0405,-0.209,1.26,-0.0427,-0.208,1.07,-0.00133,-0.203,1.08,-0.0744,-0.201,1.33,-0.0411,-0.198,1.14,-0.0024,-0.198,1.13,-0.076,-0.19,1.26,-0.00401,-0.189,1.26,-0.0808,-0.185,1.38,-0.0395,-0.185,1.33,-0.00025,-0.182,1.33,-0.0728,-0.174,1.37,-0.0158,-0.174,1.37,-0.0625,-0.169,1.08,-0.00885,-0.167,1.13,-0.0744,-0.162,1.05,-0.0561,-0.16,1.13,-0.000793,-0.157,1.38,-0.0733,-0.156,1.39,-0.0464,-0.155,1.26,-0.0867,-0.154,1.37,-0.0185,-0.151,1.26,-0.000789,-0.151,1.33,-0.0937,-0.15,1.34,-0.000787,-0.15,1.13,-0.0411,-0.141,1.26,-0.0421]);
IndexedFaceSet285.coord = Coordinate286;

Shape282.geometry = IndexedFaceSet285;

Transform281.children = new MFNode();

Transform281.children[0] = Shape282;

fieldValue280.children = new MFNode();

fieldValue280.children[0] = Transform281;

ProtoInstance278.fieldValue[1] = fieldValue280;

fieldValue277.children = new MFNode();

fieldValue277.children[0] = ProtoInstance278;

let ProtoInstance287 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance287.name = "Joint";
ProtoInstance287.DEF = "hanim_r_elbow";
let fieldValue288 = browser.currentScene.createNode("fieldValue");
fieldValue288.name = "name";
fieldValue288.value = "r_elbow";
ProtoInstance287.fieldValue = new MFNode();

ProtoInstance287.fieldValue[0] = fieldValue288;

let fieldValue289 = browser.currentScene.createNode("fieldValue");
fieldValue289.name = "center";
fieldValue289.value = "-0.192 1.07 -0.0498";
ProtoInstance287.fieldValue[1] = fieldValue289;

let fieldValue290 = browser.currentScene.createNode("fieldValue");
fieldValue290.name = "children";
let ProtoInstance291 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance291.name = "Segment";
ProtoInstance291.DEF = "hanim_r_forearm";
let fieldValue292 = browser.currentScene.createNode("fieldValue");
fieldValue292.name = "name";
fieldValue292.value = "r_forearm";
ProtoInstance291.fieldValue = new MFNode();

ProtoInstance291.fieldValue[0] = fieldValue292;

let fieldValue293 = browser.currentScene.createNode("fieldValue");
fieldValue293.name = "children";
let Transform294 = browser.currentScene.createNode("Transform");
Transform294.DEF = "r_forearm_adjust";
Transform294.center = new SFVec3f(new float[-0.198,0.961,-0.0397]);
Transform294.rotation = new SFRotation(new float[-1,0,0,0.1254]);
Transform294.translation = new SFVec3f(new float[0,0.003466,-0.01065]);
let Shape295 = browser.currentScene.createNode("Shape");
let Appearance296 = browser.currentScene.createNode("Appearance");
let Material297 = browser.currentScene.createNode("Material");
Material297.USE = "Skin_Color";
Appearance296.material = Material297;

Shape295.appearance = Appearance296;

let IndexedFaceSet298 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet298.coordIndex = new MFInt32(new int[20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1]);
IndexedFaceSet298.creaseAngle = 1.73;
let Coordinate299 = browser.currentScene.createNode("Coordinate");
Coordinate299.point = new MFVec3f(new float[-0.237,0.82,-0.0282,-0.235,1.02,-0.033,-0.231,0.819,-0.0609,-0.228,1.07,-0.0319,-0.224,0.818,-0.00778,-0.221,1.01,-0.0744,-0.218,1.01,-0.00133,-0.214,1.07,-0.00402,-0.213,1.1,-0.025,-0.21,0.818,-0.0615,-0.208,1.08,-0.0765,-0.205,0.819,-0.00832,-0.203,1.1,-0.0158,-0.202,1.1,-0.0566,-0.201,0.82,-0.0405,-0.189,1.1,-0.0395,-0.183,1.01,-0.00831,-0.183,1.01,-0.0781,-0.182,1.09,-0.00563,-0.179,1.07,-0.00294,-0.177,1.09,-0.0609,-0.176,1.08,-0.0781,-0.167,1.09,-0.0325,-0.166,1,-0.0405,-0.16,1.06,-0.0373]);
IndexedFaceSet298.coord = Coordinate299;

Shape295.geometry = IndexedFaceSet298;

Transform294.children = new MFNode();

Transform294.children[0] = Shape295;

fieldValue293.children = new MFNode();

fieldValue293.children[0] = Transform294;

ProtoInstance291.fieldValue[1] = fieldValue293;

fieldValue290.children = new MFNode();

fieldValue290.children[0] = ProtoInstance291;

let ProtoInstance300 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance300.name = "Joint";
ProtoInstance300.DEF = "hanim_r_wrist";
let fieldValue301 = browser.currentScene.createNode("fieldValue");
fieldValue301.name = "name";
fieldValue301.value = "r_wrist";
ProtoInstance300.fieldValue = new MFNode();

ProtoInstance300.fieldValue[0] = fieldValue301;

let fieldValue302 = browser.currentScene.createNode("fieldValue");
fieldValue302.name = "center";
fieldValue302.value = "-0.217 0.811 -0.0338";
ProtoInstance300.fieldValue[1] = fieldValue302;

let fieldValue303 = browser.currentScene.createNode("fieldValue");
fieldValue303.name = "children";
let ProtoInstance304 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance304.name = "Segment";
ProtoInstance304.DEF = "hanim_r_hand";
let fieldValue305 = browser.currentScene.createNode("fieldValue");
fieldValue305.name = "name";
fieldValue305.value = "r_hand";
ProtoInstance304.fieldValue = new MFNode();

ProtoInstance304.fieldValue[0] = fieldValue305;

let fieldValue306 = browser.currentScene.createNode("fieldValue");
fieldValue306.name = "children";
let Transform307 = browser.currentScene.createNode("Transform");
Transform307.DEF = "r_hand_adjust";
Transform307.center = new SFVec3f(new float[-0.217,0.811,-0.0338]);
Transform307.rotation = new SFRotation(new float[-0.09024,0.994,-0.0624,1.216]);
let Shape308 = browser.currentScene.createNode("Shape");
let Appearance309 = browser.currentScene.createNode("Appearance");
let Material310 = browser.currentScene.createNode("Material");
Material310.USE = "Skin_Color";
Appearance309.material = Material310;

Shape308.appearance = Appearance309;

let IndexedFaceSet311 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet311.coordIndex = new MFInt32(new int[10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1]);
IndexedFaceSet311.creaseAngle = 1.57;
let Coordinate312 = browser.currentScene.createNode("Coordinate");
Coordinate312.point = new MFVec3f(new float[-0.237,0.82,-0.0425,-0.252,0.801,-0.0424,-0.269,0.765,-0.0426,-0.273,0.732,-0.0395,-0.27,0.704,-0.0342,-0.262,0.703,-0.0345,-0.256,0.717,-0.0389,-0.255,0.738,-0.0408,-0.251,0.734,-0.0406,-0.194,0.81,-0.0445,-0.211,0.828,-0.0434,-0.236,0.82,-0.0237,-0.252,0.801,-0.0231,-0.268,0.765,-0.0225,-0.272,0.732,-0.0223,-0.27,0.704,-0.0224,-0.261,0.703,-0.0227,-0.256,0.717,-0.023,-0.255,0.738,-0.023,-0.251,0.734,-0.0232,-0.251,0.692,-0.0232,-0.248,0.657,-0.0233,-0.24,0.645,-0.0236,-0.226,0.637,-0.0241,-0.213,0.639,-0.0246,-0.197,0.652,-0.0253,-0.188,0.669,-0.0256,-0.184,0.697,-0.0258,-0.183,0.73,-0.0258,-0.187,0.77,-0.0257,-0.194,0.81,-0.0254,-0.21,0.828,-0.0247,-0.221,0.641,-0.0336,-0.21,0.65,-0.0348,-0.206,0.652,-0.0352,-0.198,0.667,-0.0368,-0.193,0.692,-0.0392,-0.192,0.696,-0.0396,-0.231,0.646,-0.0336,-0.238,0.656,-0.0342,-0.24,0.658,-0.0344,-0.24,0.662,-0.0347,-0.243,0.692,-0.0372,-0.243,0.696,-0.0376,-0.192,0.725,-0.0421,-0.192,0.73,-0.0426,-0.195,0.766,-0.0451,-0.196,0.77,-0.0454]);
IndexedFaceSet311.coord = Coordinate312;

Shape308.geometry = IndexedFaceSet311;

Transform307.children = new MFNode();

Transform307.children[0] = Shape308;

fieldValue306.children = new MFNode();

fieldValue306.children[0] = Transform307;

ProtoInstance304.fieldValue[1] = fieldValue306;

fieldValue303.children = new MFNode();

fieldValue303.children[0] = ProtoInstance304;

ProtoInstance300.fieldValue[2] = fieldValue303;

fieldValue290.children[1] = ProtoInstance300;

ProtoInstance287.fieldValue[2] = fieldValue290;

fieldValue277.children[1] = ProtoInstance287;

ProtoInstance274.fieldValue[2] = fieldValue277;

fieldValue224.children[2] = ProtoInstance274;

let ProtoInstance313 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance313.name = "Joint";
ProtoInstance313.DEF = "hanim_vc4";
let fieldValue314 = browser.currentScene.createNode("fieldValue");
fieldValue314.name = "name";
fieldValue314.value = "vc4";
ProtoInstance313.fieldValue = new MFNode();

ProtoInstance313.fieldValue[0] = fieldValue314;

let fieldValue315 = browser.currentScene.createNode("fieldValue");
fieldValue315.name = "center";
fieldValue315.value = "0 1.43 -0.0458";
ProtoInstance313.fieldValue[1] = fieldValue315;

let fieldValue316 = browser.currentScene.createNode("fieldValue");
fieldValue316.name = "children";
let ProtoInstance317 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance317.name = "Segment";
ProtoInstance317.DEF = "hanim_c4";
let fieldValue318 = browser.currentScene.createNode("fieldValue");
fieldValue318.name = "name";
fieldValue318.value = "c4";
ProtoInstance317.fieldValue = new MFNode();

ProtoInstance317.fieldValue[0] = fieldValue318;

let fieldValue319 = browser.currentScene.createNode("fieldValue");
fieldValue319.name = "children";
let Shape320 = browser.currentScene.createNode("Shape");
let Appearance321 = browser.currentScene.createNode("Appearance");
let Material322 = browser.currentScene.createNode("Material");
Material322.USE = "Skin_Color";
Appearance321.material = Material322;

Shape320.appearance = Appearance321;

let IndexedFaceSet323 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet323.DEF = "neck";
IndexedFaceSet323.coordIndex = new MFInt32(new int[6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1]);
IndexedFaceSet323.creaseAngle = 1.91;
let Coordinate324 = browser.currentScene.createNode("Coordinate");
Coordinate324.point = new MFVec3f(new float[0.0105,1.54,-0.1,0.0357,1.54,-0.0685,0.0382,1.55,-0.0474,0.0105,1.55,-0.0204,0.0373,1.4,-0.0593,0.0577,1.4,-0.0266,0.0158,1.4,0.00512,0.0132,1.41,-0.0824,-0.0158,1.4,0.00512,-0.0577,1.4,-0.0266,-0.0382,1.55,-0.0474,-0.0105,1.55,-0.0204,-0.0373,1.4,-0.0593,-0.0357,1.54,-0.0685,-0.0132,1.41,-0.0824,-0.0105,1.54,-0.1]);
IndexedFaceSet323.coord = Coordinate324;

Shape320.geometry = IndexedFaceSet323;

fieldValue319.children = new MFNode();

fieldValue319.children[0] = Shape320;

ProtoInstance317.fieldValue[1] = fieldValue319;

fieldValue316.children = new MFNode();

fieldValue316.children[0] = ProtoInstance317;

let ProtoInstance325 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance325.name = "Joint";
ProtoInstance325.DEF = "hanim_skullbase";
let fieldValue326 = browser.currentScene.createNode("fieldValue");
fieldValue326.name = "name";
fieldValue326.value = "skullbase";
ProtoInstance325.fieldValue = new MFNode();

ProtoInstance325.fieldValue[0] = fieldValue326;

let fieldValue327 = browser.currentScene.createNode("fieldValue");
fieldValue327.name = "center";
fieldValue327.value = "0 1.54 -0.0409";
ProtoInstance325.fieldValue[1] = fieldValue327;

let fieldValue328 = browser.currentScene.createNode("fieldValue");
fieldValue328.name = "children";
let ProtoInstance329 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance329.name = "Segment";
ProtoInstance329.DEF = "hanim_skull";
let fieldValue330 = browser.currentScene.createNode("fieldValue");
fieldValue330.name = "name";
fieldValue330.value = "skull";
ProtoInstance329.fieldValue = new MFNode();

ProtoInstance329.fieldValue[0] = fieldValue330;

let fieldValue331 = browser.currentScene.createNode("fieldValue");
fieldValue331.name = "children";
let Shape332 = browser.currentScene.createNode("Shape");
let Appearance333 = browser.currentScene.createNode("Appearance");
let Material334 = browser.currentScene.createNode("Material");
Material334.USE = "Skin_Color";
Appearance333.material = Material334;

Shape332.appearance = Appearance333;

let IndexedFaceSet335 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet335.DEF = "headIFS";
IndexedFaceSet335.colorIndex = new MFInt32(new int[1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1]);
IndexedFaceSet335.coordIndex = new MFInt32(new int[48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1]);
IndexedFaceSet335.creaseAngle = 0.7854;
let Coordinate336 = browser.currentScene.createNode("Coordinate");
Coordinate336.DEF = "Face";
Coordinate336.point = new MFVec3f(new float[0,1.708,-0.0435,0,1.655,0.04322,0,1.486,0.02335,0,1.694,0.007789,0,1.631,0.051,0,1.524,-0.102,0.04,1.51,-0.07278,0.04029,1.514,-0.08254,0.03528,1.502,-0.05013,0.03479,1.517,-0.09269,0.0116,1.494,0.03382,0.01946,1.52,0.03421,0.02204,1.494,0.0272,0.02734,1.498,0.02215,0.02788,1.528,0.03084,0.0338,1.503,0.0124,0.04008,1.509,0.002821,0.05122,1.518,-0.02784,0.05867,1.544,-0.03316,0.06433,1.563,-0.03678,0.06732,1.583,-0.03683,0.06769,1.617,-0.03436,0.06641,1.637,-0.03046,0.06818,1.637,-0.04285,0.06308,1.666,-0.04036,0.05305,1.685,-0.03987,0.03136,1.7,-0.0413,0.02919,1.688,0.0091,0.05272,1.674,-0.001657,0.06061,1.66,-0.0101,0.05254,1.541,-0.01363,0.04099,1.527,0.008832,0.03528,1.524,0.02097,0.05792,1.557,-0.004307,0.04413,1.539,0.0149,0.03746,1.539,0.02656,0.003407,1.524,0.04155,0.01481,1.526,0.03912,0.005112,1.532,0.04358,0.02438,1.542,0.03578,0.02636,1.55,0.03808,0.006135,1.55,0.0545,0,1.559,0.05502,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06194,1.6,0.002668,0.01489,1.583,0.04109,0.05282,1.569,0.02821,0.05767,1.58,0.0184,0.04643,1.625,0.03705,0.0264,1.628,0.04807,0.0556,1.609,0.02579,0.05467,1.599,0.02153,0.05316,1.589,0.0207,0.03603,1.58,0.03536,0.04597,1.586,0.02904,0.02106,1.592,0.03748,0.03428,1.595,0.03294,0.06808,1.617,-0.06112,0.06714,1.564,-0.07003,0.06993,1.594,-0.08238,0.05324,1.536,-0.05922,0.04904,1.521,-0.05132,0.04758,1.514,-0.03107,0.03539,1.503,-0.00093,0.02999,1.498,0.006194,0.02308,1.492,0.01628,0.01772,1.488,0.02135,0.01378,1.488,0.02484,0.04349,1.512,-0.03987,0.02308,1.499,-0.02088,0,1.487,-0.018,0.04795,1.531,-0.08973,0.05739,1.555,-0.0982,0.06815,1.622,-0.107,0.06872,1.655,-0.08466,0.05233,1.678,-0.09642,0.05334,1.631,-0.1239,0.05011,1.581,-0.1193,0.04359,1.551,-0.1067,0.03839,1.528,-0.09652,0.03399,1.636,-0.1304,0.03224,1.685,-0.1024,0,1.557,-0.1126,0.01864,1.566,0.04105,0.0249,1.58,0.0387,0.02735,1.596,0.03552,0.04317,1.564,0.03643,0.01246,1.577,0.04276,0.04354,1.59,0.02822,0.04557,1.601,0.03652,0.0291,1.603,0.04274,0.01856,1.6,0.04349,0,1.579,0.04893,0.01064,1.558,0.04476,0.005501,1.578,0.04574,0.01405,1.531,0.04152,0.01037,1.544,0.04266,0,1.515,0.03836,0.00797,1.515,0.03774,0.01824,1.55,0.04063,-0.0249,1.58,0.0387,-0.04354,1.59,0.02822,-0.0291,1.603,0.04274,-0.04317,1.564,0.03643,-0.04597,1.586,0.02904,-0.05316,1.589,0.0207,-0.01824,1.55,0.04063,-0.01246,1.577,0.04276,-0.006135,1.55,0.0545,-0.01037,1.544,0.04266,-0.02636,1.55,0.03808,-0.03428,1.595,0.03294,-0.02735,1.596,0.03552,-0.03603,1.58,0.03536,-0.05282,1.569,0.02821,-0.05767,1.58,0.0184,-0.01864,1.566,0.04105,-0.01489,1.583,0.04109,-0.0556,1.609,0.02579,-0.04557,1.601,0.03652,-0.02106,1.592,0.03748,-0.01856,1.6,0.04349,-0.005501,1.578,0.04574,-0.01064,1.558,0.04476,0,1.592,0.04694,-0.06182,1.614,0.008199,-0.05467,1.599,0.02153,-0.06194,1.6,0.002668,-0.05792,1.557,-0.004307,-0.04413,1.539,0.0149,-0.03746,1.539,0.02656,-0.04099,1.527,0.008832,-0.03528,1.524,0.02097,-0.02788,1.528,0.03084,0,1.53,0.04236,-0.005112,1.532,0.04358,-0.01481,1.526,0.03912,-0.01946,1.52,0.03421,0,1.495,0.0348,-0.0116,1.494,0.03382,-0.02734,1.498,0.02215,-0.0338,1.503,0.0124,-0.01772,1.488,0.02135,-0.02308,1.492,0.01628,-0.02999,1.498,0.006194,-0.01405,1.531,0.04152,-0.003407,1.524,0.04155,-0.02204,1.494,0.0272,-0.00797,1.515,0.03774,-0.02438,1.542,0.03578,0,1.543,0.04432,0,1.555,0.05692,0.02295,1.492,-0.02694,0.007322,1.489,-0.01677,-0.05254,1.541,-0.01363,-0.04008,1.509,0.002821,-0.05122,1.518,-0.02784,-0.03539,1.503,-0.00093,-0.01378,1.488,0.02484,-0.02308,1.499,-0.02088,-0.04349,1.512,-0.03987,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.05856,1.63,0.01803,-0.04847,1.643,0.02895,-0.04643,1.625,0.03705,-0.02958,1.651,0.03965,-0.0264,1.628,0.04807,-0.02919,1.688,0.0091,-0.05272,1.674,-0.001657,-0.06641,1.637,-0.03046,-0.06061,1.66,-0.0101,-0.03136,1.7,-0.0413,-0.05305,1.685,-0.03987,-0.06308,1.666,-0.04036,-0.06818,1.637,-0.04285,-0.06808,1.617,-0.06112,-0.06993,1.594,-0.08238,-0.06714,1.564,-0.07003,-0.05324,1.536,-0.05922,-0.04904,1.521,-0.05132,-0.04795,1.531,-0.08973,-0.05739,1.555,-0.0982,-0.06815,1.622,-0.107,-0.06872,1.655,-0.08466,-0.05233,1.678,-0.09642,-0.03224,1.685,-0.1024,0,1.69,-0.1047,0,1.64,-0.1342,-0.05334,1.631,-0.1239,-0.05011,1.581,-0.1193,-0.04359,1.551,-0.1067,-0.03839,1.528,-0.09652,-0.03528,1.502,-0.05013,-0.04,1.51,-0.07278,-0.04029,1.514,-0.08254,-0.03479,1.517,-0.09269,-0.02295,1.492,-0.02694,-0.007322,1.489,-0.01677,0,1.588,-0.1329,-0.03399,1.636,-0.1304,-0.04758,1.514,-0.03107,-0.03428,1.595,0.03294,-0.02106,1.592,0.03748,-0.02735,1.596,0.03552,-0.0249,1.58,0.0387,-0.01489,1.583,0.04109,-0.04597,1.586,0.02904,-0.04354,1.59,0.02822,-0.03603,1.58,0.03536,-0.05856,1.63,0.01803,-0.06182,1.614,0.008199,-0.02788,1.528,0.03084,-0.005112,1.532,0.04358,-0.01405,1.531,0.04152,-0.00797,1.515,0.03774,-0.01946,1.52,0.03421,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.04847,1.643,0.02895,-0.02958,1.651,0.03965,-0.05324,1.536,-0.05922,-0.04795,1.531,-0.08973,-0.03839,1.528,-0.09652,0.02106,1.592,0.03748,0.01489,1.583,0.04109,0.0249,1.58,0.0387,0.03603,1.58,0.03536,0.04354,1.59,0.02822,0.03428,1.595,0.03294,0.02735,1.596,0.03552,0.02788,1.528,0.03084,0.01405,1.531,0.04152,0,1.53,0.04236,0,1.515,0.03836,0.00797,1.515,0.03774,0.01946,1.52,0.03421,0.005112,1.532,0.04358,0,1.655,0.04322,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06769,1.617,-0.03436,0.06732,1.583,-0.03683,0.06433,1.563,-0.03678,0.05867,1.544,-0.03316,0.05324,1.536,-0.05922,0.04795,1.531,-0.08973,0.03839,1.528,-0.09652,0,1.524,-0.102]);
IndexedFaceSet335.coord = Coordinate336;

let Color337 = browser.currentScene.createNode("Color");
Color337.color = new MFColor(new float[0.749,0.601,0.462,0.1735,0.2602,0.749,0.6364,0.133,0.1526,0.4545,0.2759,0.1902]);
IndexedFaceSet335.color = Color337;

Shape332.geometry = IndexedFaceSet335;

fieldValue331.children = new MFNode();

fieldValue331.children[0] = Shape332;

ProtoInstance329.fieldValue[1] = fieldValue331;

fieldValue328.children = new MFNode();

fieldValue328.children[0] = ProtoInstance329;

ProtoInstance325.fieldValue[2] = fieldValue328;

fieldValue316.children[1] = ProtoInstance325;

ProtoInstance313.fieldValue[2] = fieldValue316;

fieldValue224.children[3] = ProtoInstance313;

ProtoInstance221.fieldValue[2] = fieldValue224;

fieldValue136.children[1] = ProtoInstance221;

ProtoInstance133.fieldValue[2] = fieldValue136;

fieldValue132.children = new MFNode();

fieldValue132.children[0] = ProtoInstance133;

let Group338 = browser.currentScene.createNode("Group");
fieldValue132.children[1] = Group338;

ProtoInstance128.fieldValue[3] = fieldValue132;

let fieldValue339 = browser.currentScene.createNode("fieldValue");
fieldValue339.name = "joints";
let ProtoInstance340 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance340.USE = "hanim_HumanoidRoot";
fieldValue339.children = new MFNode();

fieldValue339.children[0] = ProtoInstance340;

let ProtoInstance341 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance341.USE = "hanim_sacroiliac";
fieldValue339.children[1] = ProtoInstance341;

let ProtoInstance342 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance342.USE = "hanim_l_hip";
fieldValue339.children[2] = ProtoInstance342;

let ProtoInstance343 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance343.USE = "hanim_l_knee";
fieldValue339.children[3] = ProtoInstance343;

let ProtoInstance344 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance344.USE = "hanim_l_ankle";
fieldValue339.children[4] = ProtoInstance344;

let ProtoInstance345 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance345.USE = "hanim_r_hip";
fieldValue339.children[5] = ProtoInstance345;

let ProtoInstance346 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance346.USE = "hanim_r_knee";
fieldValue339.children[6] = ProtoInstance346;

let ProtoInstance347 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance347.USE = "hanim_r_ankle";
fieldValue339.children[7] = ProtoInstance347;

let ProtoInstance348 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance348.USE = "hanim_vl1";
fieldValue339.children[8] = ProtoInstance348;

let ProtoInstance349 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance349.USE = "hanim_l_shoulder";
fieldValue339.children[9] = ProtoInstance349;

let ProtoInstance350 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance350.USE = "hanim_l_elbow";
fieldValue339.children[10] = ProtoInstance350;

let ProtoInstance351 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance351.USE = "hanim_l_wrist";
fieldValue339.children[11] = ProtoInstance351;

let ProtoInstance352 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance352.USE = "hanim_r_shoulder";
fieldValue339.children[12] = ProtoInstance352;

let ProtoInstance353 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance353.USE = "hanim_r_elbow";
fieldValue339.children[13] = ProtoInstance353;

let ProtoInstance354 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance354.USE = "hanim_r_wrist";
fieldValue339.children[14] = ProtoInstance354;

let ProtoInstance355 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance355.USE = "hanim_vc4";
fieldValue339.children[15] = ProtoInstance355;

let ProtoInstance356 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance356.USE = "hanim_skullbase";
fieldValue339.children[16] = ProtoInstance356;

ProtoInstance128.fieldValue[4] = fieldValue339;

let fieldValue357 = browser.currentScene.createNode("fieldValue");
fieldValue357.name = "segments";
let ProtoInstance358 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance358.USE = "hanim_pelvis";
fieldValue357.children = new MFNode();

fieldValue357.children[0] = ProtoInstance358;

let ProtoInstance359 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance359.USE = "hanim_l_thigh";
fieldValue357.children[1] = ProtoInstance359;

let ProtoInstance360 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance360.USE = "hanim_l_calf";
fieldValue357.children[2] = ProtoInstance360;

let ProtoInstance361 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance361.USE = "hanim_l_hindfoot";
fieldValue357.children[3] = ProtoInstance361;

let ProtoInstance362 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance362.USE = "hanim_r_thigh";
fieldValue357.children[4] = ProtoInstance362;

let ProtoInstance363 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance363.USE = "hanim_r_calf";
fieldValue357.children[5] = ProtoInstance363;

let ProtoInstance364 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance364.USE = "hanim_r_hindfoot";
fieldValue357.children[6] = ProtoInstance364;

let ProtoInstance365 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance365.USE = "hanim_c7";
fieldValue357.children[7] = ProtoInstance365;

let ProtoInstance366 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance366.USE = "hanim_l_upperarm";
fieldValue357.children[8] = ProtoInstance366;

let ProtoInstance367 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance367.USE = "hanim_l_forearm";
fieldValue357.children[9] = ProtoInstance367;

let ProtoInstance368 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance368.USE = "hanim_l_hand";
fieldValue357.children[10] = ProtoInstance368;

let ProtoInstance369 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance369.USE = "hanim_r_upperarm";
fieldValue357.children[11] = ProtoInstance369;

let ProtoInstance370 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance370.USE = "hanim_r_forearm";
fieldValue357.children[12] = ProtoInstance370;

let ProtoInstance371 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance371.USE = "hanim_r_hand";
fieldValue357.children[13] = ProtoInstance371;

let ProtoInstance372 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance372.USE = "hanim_c4";
fieldValue357.children[14] = ProtoInstance372;

let ProtoInstance373 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance373.USE = "hanim_skull";
fieldValue357.children[15] = ProtoInstance373;

ProtoInstance128.fieldValue[5] = fieldValue357;

let fieldValue374 = browser.currentScene.createNode("fieldValue");
fieldValue374.name = "viewpoints";
let Viewpoint375 = browser.currentScene.createNode("Viewpoint");
Viewpoint375.DEF = "InclinedView";
Viewpoint375.description = "Inclined View";
Viewpoint375.orientation = new SFRotation(new float[-0.113,0.993,0.0347,0.671]);
Viewpoint375.position = new SFVec3f(new float[1.62,1.05,2.06]);
fieldValue374.children = new MFNode();

fieldValue374.children[0] = Viewpoint375;

let Viewpoint376 = browser.currentScene.createNode("Viewpoint");
Viewpoint376.DEF = "FrontView";
Viewpoint376.description = "Front View";
Viewpoint376.position = new SFVec3f(new float[0,0.854,2.57665]);
fieldValue374.children[1] = Viewpoint376;

let Viewpoint377 = browser.currentScene.createNode("Viewpoint");
Viewpoint377.DEF = "SideView";
Viewpoint377.description = "Side View";
Viewpoint377.orientation = new SFRotation(new float[0,1,0,1.57079]);
Viewpoint377.position = new SFVec3f(new float[2.5929,0.854,0]);
fieldValue374.children[2] = Viewpoint377;

let Viewpoint378 = browser.currentScene.createNode("Viewpoint");
Viewpoint378.DEF = "TopView";
Viewpoint378.description = "Top View";
Viewpoint378.orientation = new SFRotation(new float[1,0,0,-1.57079]);
Viewpoint378.position = new SFVec3f(new float[0,3.4495,0]);
fieldValue374.children[3] = Viewpoint378;

ProtoInstance128.fieldValue[6] = fieldValue374;

browser.currentScene.children[5] = ProtoInstance128;

let WorldInfo379 = browser.currentScene.createNode("WorldInfo");
WorldInfo379.info = new MFString(new java.lang.String["Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc."]);
WorldInfo379.title = "Nancy - an H-Anim compliant avatar by 3Name3D";
browser.currentScene.children[6] = WorldInfo379;

let NavigationInfo380 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo380.avatarSize = new MFFloat(new float[0.15,1.53,0.75]);
NavigationInfo380.speed = 0.5;
NavigationInfo380.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children[7] = NavigationInfo380;

let Group381 = browser.currentScene.createNode("Group");
Group381.DEF = "Interface";
let Transform382 = browser.currentScene.createNode("Transform");
let ProximitySensor383 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor383.DEF = "HudProx";
ProximitySensor383.center = new SFVec3f(new float[0,20,0]);
ProximitySensor383.size = new SFVec3f(new float[500,100,500]);
Transform382.children = new MFNode();

Transform382.children[0] = ProximitySensor383;

Group381.children = new MFNode();

Group381.children[0] = Transform382;

let Collision384 = browser.currentScene.createNode("Collision");
Collision384.DEF = "HUD";
Collision384.enabled = False;
let Transform385 = browser.currentScene.createNode("Transform");
Transform385.DEF = "HudXform";
let Transform386 = browser.currentScene.createNode("Transform");
Transform386.scale = new SFVec3f(new float[0.012,0.012,0.012]);
Transform386.translation = new SFVec3f(new float[0.01107,-0.025,-0.08]);
let Transform387 = browser.currentScene.createNode("Transform");
Transform387.DEF = "Stand_Text";
let TouchSensor388 = browser.currentScene.createNode("TouchSensor");
TouchSensor388.DEF = "Stand_Touch";
TouchSensor388.description = "click for behavior";
Transform387.children = new MFNode();

Transform387.children[0] = TouchSensor388;

let Shape389 = browser.currentScene.createNode("Shape");
Shape389.DEF = "Stand";
let IndexedFaceSet390 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet390.coordIndex = new MFInt32(new int[1,30,29,-1,1,29,2,-1,31,47,46,-1,31,46,32,-1,78,77,80,-1,78,80,79,-1,96,113,112,-1,96,112,95,-1,95,112,111,-1,95,111,94,-1,94,111,110,-1,94,110,93,-1,93,110,109,-1,93,109,108,-1,93,108,100,-1,107,99,100,-1,107,100,108,-1,107,106,99,-1,106,105,98,-1,106,98,99,-1,104,97,98,-1,104,98,105,-1,103,102,104,-1,104,102,101,-1,104,101,97,-1,101,96,97,-1,101,97,101,-1,101,101,96,-1,96,101,113,-1,113,101,114,-1,115,86,85,-1,115,85,116,-1,117,87,84,-1,117,84,118,-1,119,83,120,-1,121,88,82,-1,121,82,122,-1,123,89,81,-1,123,81,124,-1,125,90,126,-1,127,92,128,-1,129,91,130,-1,54,49,50,-1,54,50,55,-1,76,75,74,-1,76,74,54,-1,54,74,73,-1,54,73,49,-1,49,73,48,-1,48,73,62,-1,48,62,61,-1,48,61,60,-1,48,60,53,-1,53,60,59,-1,53,59,53,-1,53,59,58,-1,53,58,52,-1,52,58,57,-1,52,57,51,-1,56,51,57,-1,56,55,50,-1,56,50,51,-1,62,73,72,-1,62,72,63,-1,63,72,71,-1,63,71,64,-1,64,71,70,-1,64,70,69,-1,64,69,65,-1,65,69,68,-1,65,68,67,-1,65,67,66,-1,131,40,39,-1,131,39,132,-1,133,43,42,-1,133,42,134,-1,135,37,36,-1,135,36,136,-1,137,41,38,-1,137,38,138,-1,139,44,35,-1,139,35,140,-1,141,34,142,-1,143,45,33,-1,143,33,144,-1,145,16,15,-1,145,15,146,-1,147,14,148,-1,149,17,13,-1,149,13,150,-1,151,18,12,-1,151,12,152,-1,153,19,11,-1,153,11,154,-1,155,20,10,-1,155,10,156,-1,157,9,158,-1,159,21,8,-1,159,8,160,-1,161,22,7,-1,161,7,162,-1,163,23,164,-1,165,24,6,-1,165,6,166,-1,167,25,5,-1,167,5,168,-1,169,26,170,-1,171,27,4,-1,171,4,172,-1,173,28,3,-1,173,3,174,-1,175,0,176,-1]);
let Coordinate391 = browser.currentScene.createNode("Coordinate");
Coordinate391.point = new MFVec3f(new float[-3.21,-0.0154,0,-3.15,-0.0154,0,-3.14,-0.0467,0,-3.1,-0.0601,0,-3.05,-0.051,0,-3.04,-0.0254,0,-3.05,-0.00248,0,-3.1,0.0122,0,-3.16,0.03,0,-3.2,0.0684,0,-3.2,0.133,0,-3.16,0.17,0,-3.1,0.182,0,-3.04,0.171,0,-3.01,0.136,0,-3,0.095,0,-3.05,0.095,0,-3.06,0.125,0,-3.1,0.136,0,-3.14,0.126,0,-3.15,0.103,0,-3.14,0.0815,0,-3.1,0.0689,0,-3.04,0.0512,0,-3,0.0249,0,-2.99,-0.0195,0,-3,-0.0708,0,-3.05,-0.104,0,-3.1,-0.108,0,-3.16,-0.0947,0,-3.2,-0.0586,0,-2.86,-0.102,0,-2.9,-0.102,0,-2.94,-0.0832,0,-2.94,-0.0457,0,-2.94,0.0645,0,-2.97,0.0645,0,-2.97,0.103,0,-2.94,0.103,0,-2.94,0.158,0,-2.89,0.158,0,-2.89,0.103,0,-2.86,0.103,0,-2.86,0.0645,0,-2.89,0.0645,0,-2.89,-0.0483,0,-2.88,-0.0608,0,-2.86,-0.0612,0,-2.71,-0.000798,0,-2.71,-0.0373,0,-2.74,-0.0637,0,-2.77,-0.0624,0,-2.78,-0.0416,0,-2.77,-0.0195,0,-2.71,-0.0754,0,-2.74,-0.103,0,-2.79,-0.106,0,-2.82,-0.0865,0,-2.84,-0.0431,0,-2.82,0.000177,0,-2.78,0.0201,0,-2.73,0.0275,0,-2.71,0.0446,0,-2.72,0.0614,0,-2.74,0.0675,0,-2.77,0.0573,0,-2.78,0.039,0,-2.83,0.039,0,-2.82,0.0765,0,-2.78,0.105,0,-2.74,0.11,0,-2.71,0.107,0,-2.67,0.0849,0,-2.66,0.0526,0,-2.66,-0.0763,0,-2.65,-0.101,0,-2.7,-0.101,0,-2.61,-0.101,0,-2.61,0.103,0,-2.56,0.103,0,-2.56,0.0787,0,-2.52,0.104,0,-2.47,0.105,0,-2.43,0.0743,0,-2.43,0.038,0,-2.43,-0.101,0,-2.48,-0.101,0,-2.48,0.0224,0,-2.49,0.0514,0,-2.52,0.0627,0,-2.54,0.0505,0,-2.55,0.02,0,-2.55,-0.101,0,-2.33,0.0279,0,-2.31,0.0587,0,-2.27,0.0589,0,-2.25,0.0281,0,-2.25,-0.0232,0,-2.27,-0.0563,0,-2.31,-0.057,0,-2.33,-0.0245,0,-2.19,0.175,0,-2.19,-0.101,0,-2.25,-0.101,0,-2.25,-0.073,0,-2.26,-0.0913,0,-2.31,-0.108,0,-2.35,-0.0915,0,-2.38,-0.0424,0,-2.39,0.0243,0,-2.37,0.0809,0,-2.32,0.108,0,-2.28,0.106,0,-2.25,0.0776,0,-2.25,0.175,0,-2.48,0.0224,0,-2.43,0.038,0,-2.49,0.0514,0,-2.43,0.0743,0,-2.49,0.0514,0,-2.47,0.105,0,-2.52,0.0627,0,-2.52,0.104,0,-2.54,0.0505,0,-2.56,0.0787,0,-2.55,0.02,0,-2.56,0.0787,0,-2.61,-0.101,0,-2.55,0.02,0,-2.61,-0.101,0,-2.56,0.0787,0,-2.89,0.103,0,-2.94,0.103,0,-2.89,0.0645,0,-2.89,0.103,0,-2.94,0.103,0,-2.94,0.0645,0,-2.89,0.0645,0,-2.94,0.0645,0,-2.89,-0.0483,0,-2.94,-0.0457,0,-2.89,-0.0483,0,-2.94,-0.0832,0,-2.88,-0.0608,0,-2.9,-0.102,0,-3.06,0.125,0,-3.01,0.136,0,-3.06,0.125,0,-3.04,0.171,0,-3.1,0.136,0,-3.1,0.182,0,-3.14,0.126,0,-3.16,0.17,0,-3.15,0.103,0,-3.2,0.133,0,-3.14,0.0815,0,-3.2,0.0684,0,-3.14,0.0815,0,-3.16,0.03,0,-3.1,0.0689,0,-3.1,0.0122,0,-3.04,0.0512,0,-3.05,-0.00248,0,-3,0.0249,0,-3.05,-0.00248,0,-2.99,-0.0195,0,-3.04,-0.0254,0,-3,-0.0708,0,-3.05,-0.051,0,-3.05,-0.104,0,-3.05,-0.051,0,-3.1,-0.108,0,-3.1,-0.0601,0,-3.16,-0.0947,0,-3.14,-0.0467,0,-3.15,-0.0154,0,-3.2,-0.0586,0]);
IndexedFaceSet390.coord = Coordinate391;

Shape389.geometry = IndexedFaceSet390;

let Appearance392 = browser.currentScene.createNode("Appearance");
let Material393 = browser.currentScene.createNode("Material");
Material393.DEF = "text_color";
Material393.ambientIntensity = 0;
Material393.diffuseColor = new SFColor(new float[0,0,0]);
Material393.emissiveColor = new SFColor(new float[0.819,0.521,0.169]);
Appearance392.material = Material393;

Shape389.appearance = Appearance392;

Transform387.children[1] = Shape389;

let Transform394 = browser.currentScene.createNode("Transform");
Transform394.scale = new SFVec3f(new float[84.89,77.52,77.52]);
Transform394.translation = new SFVec3f(new float[0.04092,1.843,3.826]);
let Shape395 = browser.currentScene.createNode("Shape");
Shape395.DEF = "Stand_Back";
let IndexedFaceSet396 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet396.coordIndex = new MFInt32(new int[0,2,3,-1,2,0,1,-1]);
let Coordinate397 = browser.currentScene.createNode("Coordinate");
Coordinate397.point = new MFVec3f(new float[-0.02572,-0.02535,-0.05,-0.02578,-0.02131,-0.05,-0.03871,-0.02131,-0.05,-0.03877,-0.02541,-0.05]);
IndexedFaceSet396.coord = Coordinate397;

Shape395.geometry = IndexedFaceSet396;

let Appearance398 = browser.currentScene.createNode("Appearance");
let Material399 = browser.currentScene.createNode("Material");
Material399.DEF = "Clear";
Material399.ambientIntensity = 0;
Material399.diffuseColor = new SFColor(new float[0,0,0]);
Material399.transparency = 1;
Appearance398.material = Material399;

Shape395.appearance = Appearance398;

Transform394.children = new MFNode();

Transform394.children[0] = Shape395;

Transform387.children[2] = Transform394;

Transform386.children = new MFNode();

Transform386.children[0] = Transform387;

let Transform400 = browser.currentScene.createNode("Transform");
Transform400.DEF = "Walk_Text";
let TouchSensor401 = browser.currentScene.createNode("TouchSensor");
TouchSensor401.DEF = "Walk_Touch";
TouchSensor401.description = "click for behavior";
Transform400.children = new MFNode();

Transform400.children[0] = TouchSensor401;

let Shape402 = browser.currentScene.createNode("Shape");
Shape402.DEF = "WALK";
let IndexedFaceSet403 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet403.coordIndex = new MFInt32(new int[0,2,1,-1,3,2,0,-1,12,3,0,-1,4,3,12,-1,11,4,12,-1,5,4,11,-1,10,5,11,-1,6,5,10,-1,9,6,10,-1,7,6,9,-1,8,7,9,-1,15,14,13,-1,16,15,13,-1,19,18,17,-1,20,19,17,-1,27,20,17,-1,28,27,17,-1,26,20,27,-1,23,20,26,-1,21,20,23,-1,25,23,26,-1,22,21,23,-1,24,23,25,-1,29,30,31,-1,29,31,32,-1,33,34,35,-1,33,35,29,-1,29,35,36,-1,29,36,30,-1,30,36,37,-1,37,36,38,-1,37,38,39,-1,37,39,40,-1,37,40,41,-1,41,40,42,-1,41,42,41,-1,41,42,43,-1,41,43,44,-1,44,43,45,-1,44,45,46,-1,47,46,45,-1,47,32,31,-1,47,31,46,-1,38,36,48,-1,38,48,49,-1,49,48,50,-1,49,50,51,-1,51,50,52,-1,51,52,53,-1,51,53,54,-1,54,53,55,-1,54,55,56,-1,54,56,57,-1]);
let Coordinate404 = browser.currentScene.createNode("Coordinate");
Coordinate404.point = new MFVec3f(new float[-1.88,-0.101,0,-1.96,0.175,0,-1.91,0.175,0,-1.86,-0.0195,0,-1.82,0.175,0,-1.76,0.175,0,-1.72,-0.0195,0,-1.67,0.175,0,-1.61,0.175,0,-1.69,-0.101,0,-1.75,-0.101,0,-1.79,0.111,0,-1.83,-0.101,0,-1.38,-0.101,0,-1.38,0.175,0,-1.32,0.175,0,-1.32,-0.101,0,-1.27,-0.101,0,-1.27,0.175,0,-1.22,0.175,0,-1.22,0.0304,0,-1.16,0.103,0,-1.09,0.103,0,-1.16,0.0272,0,-1.09,-0.101,0,-1.15,-0.101,0,-1.2,-0.0141,0,-1.22,-0.0363,0,-1.22,-0.101,0,-1.48,-0.0754,0,-1.48,-0.0373,0,-1.51,-0.0637,0,-1.51,-0.103,0,-1.47,-0.101,0,-1.42,-0.101,0,-1.43,-0.0763,0,-1.43,0.0526,0,-1.48,-0.000798,0,-1.48,0.0446,0,-1.5,0.0275,0,-1.55,0.0201,0,-1.54,-0.0195,0,-1.59,0.000177,0,-1.61,-0.0431,0,-1.55,-0.0416,0,-1.59,-0.0865,0,-1.54,-0.0624,0,-1.56,-0.106,0,-1.44,0.0849,0,-1.49,0.0614,0,-1.48,0.107,0,-1.51,0.0675,0,-1.52,0.11,0,-1.55,0.105,0,-1.54,0.0573,0,-1.59,0.0765,0,-1.6,0.039,0,-1.55,0.039,0]);
IndexedFaceSet403.coord = Coordinate404;

Shape402.geometry = IndexedFaceSet403;

let Appearance405 = browser.currentScene.createNode("Appearance");
let Material406 = browser.currentScene.createNode("Material");
Material406.USE = "text_color";
Appearance405.material = Material406;

Shape402.appearance = Appearance405;

Transform400.children[1] = Shape402;

let Transform407 = browser.currentScene.createNode("Transform");
Transform407.scale = new SFVec3f(new float[81.3,81.3,81.31]);
Transform407.translation = new SFVec3f(new float[-0.0414,1.941,4.015]);
let Shape408 = browser.currentScene.createNode("Shape");
Shape408.DEF = "Walk_Back";
let IndexedFaceSet409 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet409.coordIndex = new MFInt32(new int[1,3,0,-1,3,1,2,-1]);
let Coordinate410 = browser.currentScene.createNode("Coordinate");
Coordinate410.point = new MFVec3f(new float[-0.02381,-0.02541,-0.05,-0.0127,-0.02541,-0.05,-0.01263,-0.02139,-0.05,-0.02381,-0.02146,-0.05]);
IndexedFaceSet409.coord = Coordinate410;

Shape408.geometry = IndexedFaceSet409;

let Appearance411 = browser.currentScene.createNode("Appearance");
let Material412 = browser.currentScene.createNode("Material");
Material412.USE = "Clear";
Appearance411.material = Material412;

Shape408.appearance = Appearance411;

Transform407.children = new MFNode();

Transform407.children[0] = Shape408;

Transform400.children[2] = Transform407;

Transform386.children[1] = Transform400;

let Transform413 = browser.currentScene.createNode("Transform");
Transform413.DEF = "Run_Text";
let TouchSensor414 = browser.currentScene.createNode("TouchSensor");
TouchSensor414.DEF = "Run_Touch";
TouchSensor414.description = "click for behavior";
Transform413.children = new MFNode();

Transform413.children[0] = TouchSensor414;

let Shape415 = browser.currentScene.createNode("Shape");
Shape415.DEF = "Run";
let IndexedFaceSet416 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet416.coordIndex = new MFInt32(new int[24,26,25,-1,53,39,54,-1,17,1,0,-1,17,0,16,-1,0,14,16,-1,0,15,14,-1,14,13,22,-1,14,22,16,-1,13,12,21,-1,13,21,22,-1,12,6,21,-1,12,11,7,-1,12,7,6,-1,11,8,7,-1,10,8,11,-1,10,9,8,-1,6,5,21,-1,5,4,20,-1,5,20,21,-1,4,3,19,-1,4,19,20,-1,3,2,18,-1,3,18,19,-1,18,2,1,-1,18,1,17,-1,55,32,31,-1,55,31,56,-1,57,33,30,-1,57,30,58,-1,59,29,60,-1,61,34,28,-1,61,28,62,-1,63,35,27,-1,63,27,64,-1,65,36,66,-1,67,38,68,-1,69,37,70,-1,71,23,72,-1,73,48,47,-1,73,47,74,-1,75,49,46,-1,75,46,76,-1,77,45,78,-1,79,50,44,-1,79,44,80,-1,81,51,43,-1,81,43,82,-1,83,41,84,-1,85,40,86,-1,87,52,88,-1,89,42,90,-1]);
let Coordinate417 = browser.currentScene.createNode("Coordinate");
Coordinate417.point = new MFVec3f(new float[-0.829,-0.101,0,-0.829,0.175,0,-0.662,0.172,0,-0.622,0.148,0,-0.607,0.103,0,-0.62,0.0501,0,-0.648,0.0316,0,-0.615,-0.0063,0,-0.611,-0.0764,0,-0.601,-0.101,0,-0.664,-0.101,0,-0.671,-0.0373,0,-0.68,-0.00372,0,-0.712,0.00648,0,-0.772,0.00648,0,-0.772,-0.101,0,-0.772,0.0546,0,-0.772,0.127,0,-0.703,0.127,0,-0.673,0.118,0,-0.663,0.091,0,-0.674,0.063,0,-0.705,0.0546,0,-0.379,0.103,0,-0.379,-0.101,0,-0.432,-0.101,0,-0.432,-0.0764,0,-0.466,-0.101,0,-0.518,-0.102,0,-0.555,-0.072,0,-0.56,-0.0357,0,-0.56,0.103,0,-0.506,0.103,0,-0.506,-0.0201,0,-0.5,-0.0491,0,-0.472,-0.0604,0,-0.443,-0.0482,0,-0.433,-0.0177,0,-0.433,0.103,0,-0.331,-0.101,0,-0.331,0.103,0,-0.278,0.103,0,-0.278,0.0787,0,-0.244,0.104,0,-0.192,0.105,0,-0.154,0.0743,0,-0.149,0.038,0,-0.149,-0.101,0,-0.203,-0.101,0,-0.203,0.0224,0,-0.209,0.0514,0,-0.238,0.0627,0,-0.266,0.0505,0,-0.277,0.02,0,-0.277,-0.101,0,-0.506,-0.0201,0,-0.56,-0.0357,0,-0.5,-0.0491,0,-0.555,-0.072,0,-0.5,-0.0491,0,-0.518,-0.102,0,-0.472,-0.0604,0,-0.466,-0.101,0,-0.443,-0.0482,0,-0.432,-0.0764,0,-0.433,-0.0177,0,-0.432,-0.0764,0,-0.379,0.103,0,-0.433,-0.0177,0,-0.379,0.103,0,-0.432,-0.0764,0,-0.379,-0.101,0,-0.432,-0.0764,0,-0.203,0.0224,0,-0.149,0.038,0,-0.209,0.0514,0,-0.154,0.0743,0,-0.209,0.0514,0,-0.192,0.105,0,-0.238,0.0627,0,-0.244,0.104,0,-0.266,0.0505,0,-0.278,0.0787,0,-0.278,0.0787,0,-0.331,0.103,0,-0.277,0.02,0,-0.331,-0.101,0,-0.277,0.02,0,-0.278,0.0787,0,-0.277,0.02,0,-0.331,0.103,0]);
IndexedFaceSet416.coord = Coordinate417;

Shape415.geometry = IndexedFaceSet416;

let Appearance418 = browser.currentScene.createNode("Appearance");
let Material419 = browser.currentScene.createNode("Material");
Material419.USE = "text_color";
Appearance418.material = Material419;

Shape415.appearance = Appearance418;

Transform413.children[1] = Shape415;

let Transform420 = browser.currentScene.createNode("Transform");
Transform420.scale = new SFVec3f(new float[82.47,82.47,82.48]);
Transform420.translation = new SFVec3f(new float[-0.01579,1.968,4.074]);
let Shape421 = browser.currentScene.createNode("Shape");
Shape421.DEF = "Run_Back";
let IndexedFaceSet422 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet422.coordIndex = new MFInt32(new int[0,2,3,-1,2,0,1,-1]);
let Coordinate423 = browser.currentScene.createNode("Coordinate");
Coordinate423.point = new MFVec3f(new float[-0.01009,-0.02534,-0.05,-0.001382,-0.02541,-0.05,-0.001315,-0.02146,-0.05,-0.01022,-0.02146,-0.05]);
IndexedFaceSet422.coord = Coordinate423;

Shape421.geometry = IndexedFaceSet422;

let Appearance424 = browser.currentScene.createNode("Appearance");
let Material425 = browser.currentScene.createNode("Material");
Material425.USE = "Clear";
Appearance424.material = Material425;

Shape421.appearance = Appearance424;

Transform420.children = new MFNode();

Transform420.children[0] = Shape421;

Transform413.children[2] = Transform420;

Transform386.children[2] = Transform413;

let Transform426 = browser.currentScene.createNode("Transform");
Transform426.DEF = "Jump_Text";
let TouchSensor427 = browser.currentScene.createNode("TouchSensor");
TouchSensor427.DEF = "Jump_Touch";
TouchSensor427.description = "click for behavior";
Transform426.children = new MFNode();

Transform426.children[0] = TouchSensor427;

let Shape428 = browser.currentScene.createNode("Shape");
Shape428.DEF = "Jump";
let IndexedFaceSet429 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet429.coordIndex = new MFInt32(new int[1,0,14,-1,1,14,2,-1,16,15,18,-1,16,18,17,-1,64,65,66,-1,67,68,69,-1,67,69,70,-1,71,72,73,-1,71,73,74,-1,75,76,77,-1,78,79,80,-1,78,80,81,-1,82,83,84,-1,82,84,85,-1,86,87,88,-1,89,90,91,-1,92,93,94,-1,95,96,97,-1,98,7,6,-1,98,6,99,-1,100,8,5,-1,100,5,101,-1,102,9,4,-1,102,4,103,-1,104,10,105,-1,106,11,3,-1,106,3,107,-1,108,12,109,-1,110,13,111,-1,112,27,26,-1,112,26,113,-1,114,28,25,-1,114,25,115,-1,116,24,117,-1,118,29,23,-1,118,23,119,-1,120,30,22,-1,120,22,121,-1,122,31,123,-1,124,34,33,-1,124,33,125,-1,126,35,32,-1,126,32,127,-1,128,21,129,-1,130,36,20,-1,130,20,131,-1,132,37,19,-1,132,19,133,-1,134,38,135,-1,136,40,137,-1,138,39,139,-1,53,58,59,-1,53,59,54,-1,53,52,58,-1,52,51,57,-1,52,57,58,-1,51,50,56,-1,51,56,57,-1,50,49,56,-1,49,48,63,-1,49,63,56,-1,48,47,63,-1,63,47,46,-1,63,46,62,-1,62,46,45,-1,62,45,44,-1,62,44,61,-1,61,44,60,-1,54,59,60,-1,44,43,42,-1,60,44,42,-1,41,55,54,-1,41,54,60,-1,41,60,42,-1]);
let Coordinate430 = browser.currentScene.createNode("Coordinate");
Coordinate430.point = new MFVec3f(new float[0.108,0.00195,0,0.163,0.00195,0,0.166,-0.0473,0,0.194,-0.0608,0,0.222,-0.0492,0,0.228,-0.017,0,0.228,0.175,0,0.284,0.175,0,0.284,-0.02,0,0.271,-0.0798,0,0.23,-0.104,0,0.193,-0.108,0,0.155,-0.102,0,0.117,-0.0714,0,0.108,-0.0357,0,0.563,-0.101,0,0.563,0.103,0,0.615,0.103,0,0.615,0.0803,0,0.649,0.105,0,0.696,0.105,0,0.728,0.0788,0,0.76,0.104,0,0.811,0.104,0,0.842,0.081,0,0.853,0.0416,0,0.853,-0.101,0,0.799,-0.101,0,0.799,0.0305,0,0.79,0.0544,0,0.767,0.0616,0,0.743,0.0507,0,0.734,0.0228,0,0.734,-0.101,0,0.681,-0.101,0,0.681,0.0301,0,0.673,0.0532,0,0.65,0.0611,0,0.626,0.0506,0,0.617,0.0224,0,0.617,-0.101,0,0.9,-0.182,0,0.9,0.103,0,0.952,0.103,0,0.952,0.0751,0,0.968,0.0934,0,1.01,0.11,0,1.05,0.103,0,1.07,0.0796,0,1.1,0.0251,0,1.1,-0.0222,0,1.07,-0.0788,0,1.03,-0.106,0,0.988,-0.103,0,0.953,-0.0755,0,0.953,-0.182,0,1.04,-0.000177,0,1.03,-0.0446,0,0.999,-0.0603,0,0.966,-0.0453,0,0.953,-0.000177,0,0.963,0.045,0,0.998,0.063,0,1.03,0.0462,0,0.515,-0.101,0,0.462,-0.0764,0,0.462,-0.101,0,0.388,-0.0201,0,0.388,0.103,0,0.334,0.103,0,0.334,-0.0357,0,0.394,-0.0491,0,0.388,-0.0201,0,0.334,-0.0357,0,0.339,-0.072,0,0.394,-0.0491,0,0.339,-0.072,0,0.376,-0.102,0,0.422,-0.0604,0,0.394,-0.0491,0,0.376,-0.102,0,0.428,-0.101,0,0.451,-0.0482,0,0.422,-0.0604,0,0.428,-0.101,0,0.462,-0.0764,0,0.461,-0.0177,0,0.451,-0.0482,0,0.462,-0.0764,0,0.515,0.103,0,0.461,0.103,0,0.461,-0.0177,0,0.515,0.103,0,0.461,-0.0177,0,0.462,-0.0764,0,0.515,-0.101,0,0.515,0.103,0,0.462,-0.0764,0,0.284,-0.02,0,0.228,-0.017,0,0.271,-0.0798,0,0.222,-0.0492,0,0.23,-0.104,0,0.194,-0.0608,0,0.193,-0.108,0,0.194,-0.0608,0,0.155,-0.102,0,0.166,-0.0473,0,0.117,-0.0714,0,0.166,-0.0473,0,0.108,-0.0357,0,0.166,-0.0473,0,0.799,0.0305,0,0.853,0.0416,0,0.79,0.0544,0,0.842,0.081,0,0.79,0.0544,0,0.811,0.104,0,0.767,0.0616,0,0.76,0.104,0,0.743,0.0507,0,0.728,0.0788,0,0.734,0.0228,0,0.728,0.0788,0,0.681,0.0301,0,0.734,0.0228,0,0.673,0.0532,0,0.728,0.0788,0,0.673,0.0532,0,0.696,0.105,0,0.65,0.0611,0,0.649,0.105,0,0.626,0.0506,0,0.615,0.0803,0,0.617,0.0224,0,0.615,0.0803,0,0.563,-0.101,0,0.617,0.0224,0,0.563,-0.101,0,0.615,0.0803,0]);
IndexedFaceSet429.coord = Coordinate430;

Shape428.geometry = IndexedFaceSet429;

let Appearance431 = browser.currentScene.createNode("Appearance");
let Material432 = browser.currentScene.createNode("Material");
Material432.USE = "text_color";
Appearance431.material = Material432;

Shape428.appearance = Appearance431;

Transform426.children[1] = Shape428;

let Transform433 = browser.currentScene.createNode("Transform");
Transform433.scale = new SFVec3f(new float[83.79,83.79,83.79]);
Transform433.translation = new SFVec3f(new float[-0.008979,1.99,4.14]);
let Shape434 = browser.currentScene.createNode("Shape");
Shape434.DEF = "Jump_Back";
let IndexedFaceSet435 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet435.coordIndex = new MFInt32(new int[0,2,3,-1,2,0,1,-1]);
let Coordinate436 = browser.currentScene.createNode("Coordinate");
Coordinate436.point = new MFVec3f(new float[0.001296,-0.02541,-0.05,0.01335,-0.02527,-0.05,0.01328,-0.02152,-0.05,0.001229,-0.02146,-0.05]);
IndexedFaceSet435.coord = Coordinate436;

Shape434.geometry = IndexedFaceSet435;

let Appearance437 = browser.currentScene.createNode("Appearance");
let Material438 = browser.currentScene.createNode("Material");
Material438.USE = "Clear";
Appearance437.material = Material438;

Shape434.appearance = Appearance437;

Transform433.children = new MFNode();

Transform433.children[0] = Shape434;

Transform426.children[2] = Transform433;

Transform386.children[3] = Transform426;

Transform385.children = new MFNode();

Transform385.children[0] = Transform386;

Collision384.proxy = Transform385;

Group381.children[1] = Collision384;

let Transform439 = browser.currentScene.createNode("Transform");
Transform439.DEF = "Floor";
Transform439.scale = new SFVec3f(new float[1,0.0125,1]);
Transform439.translation = new SFVec3f(new float[0,-0.0125,0]);
let Shape440 = browser.currentScene.createNode("Shape");
let Box441 = browser.currentScene.createNode("Box");
Shape440.geometry = Box441;

let Appearance442 = browser.currentScene.createNode("Appearance");
let Material443 = browser.currentScene.createNode("Material");
Appearance442.material = Material443;

Shape440.appearance = Appearance442;

Transform439.children = new MFNode();

Transform439.children[0] = Shape440;

Group381.children[2] = Transform439;

browser.currentScene.children[8] = Group381;

let Group444 = browser.currentScene.createNode("Group");
Group444.DEF = "Animations";
let Group445 = browser.currentScene.createNode("Group");
Group445.DEF = "Stand_Animation";
let OrientationInterpolator446 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator446.DEF = "r_ankleRotInterp_Stand";
OrientationInterpolator446.key = new MFFloat(new float[0,1]);
OrientationInterpolator446.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group445.children = new MFNode();

Group445.children[0] = OrientationInterpolator446;

let OrientationInterpolator447 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator447.DEF = "r_kneeRotInterp_Stand";
OrientationInterpolator447.key = new MFFloat(new float[0,1]);
OrientationInterpolator447.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group445.children[1] = OrientationInterpolator447;

let OrientationInterpolator448 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator448.DEF = "r_hipRotInterp_Stand";
OrientationInterpolator448.key = new MFFloat(new float[0,1]);
OrientationInterpolator448.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group445.children[2] = OrientationInterpolator448;

let OrientationInterpolator449 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator449.DEF = "l_ankleRotInterp_Stand";
OrientationInterpolator449.key = new MFFloat(new float[0,1]);
OrientationInterpolator449.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group445.children[3] = OrientationInterpolator449;

let OrientationInterpolator450 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator450.DEF = "l_kneeRotInterp_Stand";
OrientationInterpolator450.key = new MFFloat(new float[0,1]);
OrientationInterpolator450.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group445.children[4] = OrientationInterpolator450;

let OrientationInterpolator451 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator451.DEF = "l_hipRotInterp_Stand";
OrientationInterpolator451.key = new MFFloat(new float[0,1]);
OrientationInterpolator451.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group445.children[5] = OrientationInterpolator451;

let OrientationInterpolator452 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator452.DEF = "lower_bodyRotInterp_Stand";
OrientationInterpolator452.key = new MFFloat(new float[0,1]);
OrientationInterpolator452.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group445.children[6] = OrientationInterpolator452;

let OrientationInterpolator453 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator453.DEF = "r_wristRotInterp_Stand";
OrientationInterpolator453.key = new MFFloat(new float[0,1]);
OrientationInterpolator453.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group445.children[7] = OrientationInterpolator453;

let OrientationInterpolator454 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator454.DEF = "r_elbowRotInterp_Stand";
OrientationInterpolator454.key = new MFFloat(new float[0,1]);
OrientationInterpolator454.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group445.children[8] = OrientationInterpolator454;

let OrientationInterpolator455 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator455.DEF = "r_shoulderRotInterp_Stand";
OrientationInterpolator455.key = new MFFloat(new float[0,1]);
OrientationInterpolator455.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group445.children[9] = OrientationInterpolator455;

let OrientationInterpolator456 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator456.DEF = "l_wristRotInterp_Stand";
OrientationInterpolator456.key = new MFFloat(new float[0,1]);
OrientationInterpolator456.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group445.children[10] = OrientationInterpolator456;

let OrientationInterpolator457 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator457.DEF = "l_elbowRotInterp_Stand";
OrientationInterpolator457.key = new MFFloat(new float[0,1]);
OrientationInterpolator457.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group445.children[11] = OrientationInterpolator457;

let OrientationInterpolator458 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator458.DEF = "l_shoulderRotInterp_Stand";
OrientationInterpolator458.key = new MFFloat(new float[0,1]);
OrientationInterpolator458.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group445.children[12] = OrientationInterpolator458;

let OrientationInterpolator459 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator459.DEF = "headRotInterp_Stand";
OrientationInterpolator459.key = new MFFloat(new float[0,1]);
OrientationInterpolator459.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group445.children[13] = OrientationInterpolator459;

let OrientationInterpolator460 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator460.DEF = "neckRotInterp_Stand";
OrientationInterpolator460.key = new MFFloat(new float[0,1]);
OrientationInterpolator460.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group445.children[14] = OrientationInterpolator460;

let OrientationInterpolator461 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator461.DEF = "upper_bodyRotInterp_Stand";
OrientationInterpolator461.key = new MFFloat(new float[0,1]);
OrientationInterpolator461.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group445.children[15] = OrientationInterpolator461;

let OrientationInterpolator462 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator462.DEF = "whole_bodyRotInterp_Stand";
OrientationInterpolator462.key = new MFFloat(new float[0,1]);
OrientationInterpolator462.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group445.children[16] = OrientationInterpolator462;

let PositionInterpolator463 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator463.DEF = "whole_bodyTranInterp_Stand";
PositionInterpolator463.key = new MFFloat(new float[0,1]);
PositionInterpolator463.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
Group445.children[17] = PositionInterpolator463;

let TimeSensor464 = browser.currentScene.createNode("TimeSensor");
TimeSensor464.DEF = "Stand_Time";
TimeSensor464.cycleInterval = 0.009999999776482582;
Group445.children[18] = TimeSensor464;

Group444.children = new MFNode();

Group444.children[0] = Group445;

let Group465 = browser.currentScene.createNode("Group");
Group465.DEF = "Walk_Animation";
let OrientationInterpolator466 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator466.DEF = "r_ankleRotInterp_BasicWalk";
OrientationInterpolator466.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator466.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0]);
Group465.children = new MFNode();

Group465.children[0] = OrientationInterpolator466;

let OrientationInterpolator467 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator467.DEF = "r_kneeRotInterp_BasicWalk";
OrientationInterpolator467.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator467.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573]);
Group465.children[1] = OrientationInterpolator467;

let OrientationInterpolator468 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator468.DEF = "r_hipRotInterp_BasicWalk";
OrientationInterpolator468.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator468.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group465.children[2] = OrientationInterpolator468;

let OrientationInterpolator469 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator469.DEF = "l_ankleRotInterp_BasicWalk";
OrientationInterpolator469.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator469.keyValue = new MFRotation(new float[-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714]);
Group465.children[3] = OrientationInterpolator469;

let OrientationInterpolator470 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator470.DEF = "l_kneeRotInterp_BasicWalk";
OrientationInterpolator470.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator470.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group465.children[4] = OrientationInterpolator470;

let OrientationInterpolator471 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator471.DEF = "l_hipRotInterp_BasicWalk";
OrientationInterpolator471.key = new MFFloat(new float[0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator471.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group465.children[5] = OrientationInterpolator471;

let OrientationInterpolator472 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator472.DEF = "lower_bodyRotInterp_BasicWalk";
OrientationInterpolator472.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator472.keyValue = new MFRotation(new float[0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group465.children[6] = OrientationInterpolator472;

let OrientationInterpolator473 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator473.DEF = "r_wristRotInterp_BasicWalk";
OrientationInterpolator473.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator473.keyValue = new MFRotation(new float[-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]);
Group465.children[7] = OrientationInterpolator473;

let OrientationInterpolator474 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator474.DEF = "r_elbowRotInterp_BasicWalk";
OrientationInterpolator474.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator474.keyValue = new MFRotation(new float[-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508]);
Group465.children[8] = OrientationInterpolator474;

let OrientationInterpolator475 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator475.DEF = "r_shoulderRotInterp_BasicWalk";
OrientationInterpolator475.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator475.keyValue = new MFRotation(new float[-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346]);
Group465.children[9] = OrientationInterpolator475;

let OrientationInterpolator476 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator476.DEF = "l_wristRotInterp_BasicWalk";
OrientationInterpolator476.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator476.keyValue = new MFRotation(new float[0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076]);
Group465.children[10] = OrientationInterpolator476;

let OrientationInterpolator477 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator477.DEF = "l_elbowRotInterp_BasicWalk";
OrientationInterpolator477.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator477.keyValue = new MFRotation(new float[-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878]);
Group465.children[11] = OrientationInterpolator477;

let OrientationInterpolator478 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator478.DEF = "l_shoulderRotInterp_BasicWalk";
OrientationInterpolator478.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator478.keyValue = new MFRotation(new float[1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189]);
Group465.children[12] = OrientationInterpolator478;

let OrientationInterpolator479 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator479.DEF = "headRotInterp_BasicWalk";
OrientationInterpolator479.key = new MFFloat(new float[0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator479.keyValue = new MFRotation(new float[0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642]);
Group465.children[13] = OrientationInterpolator479;

let OrientationInterpolator480 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator480.DEF = "neckRotInterp_BasicWalk";
OrientationInterpolator480.key = new MFFloat(new float[0,1]);
OrientationInterpolator480.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group465.children[14] = OrientationInterpolator480;

let OrientationInterpolator481 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator481.DEF = "upper_bodyRotInterp_BasicWalk";
OrientationInterpolator481.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator481.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group465.children[15] = OrientationInterpolator481;

let OrientationInterpolator482 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator482.DEF = "whole_bodyRotInterp_BasicWalk";
OrientationInterpolator482.key = new MFFloat(new float[0,1]);
OrientationInterpolator482.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group465.children[16] = OrientationInterpolator482;

let PositionInterpolator483 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator483.DEF = "whole_bodyTranInterp_BasicWalk";
PositionInterpolator483.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator483.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group465.children[17] = PositionInterpolator483;

let TimeSensor484 = browser.currentScene.createNode("TimeSensor");
TimeSensor484.DEF = "Walk_Time";
TimeSensor484.cycleInterval = 2;
TimeSensor484.loop = True;
TimeSensor484.startTime = -1;
Group465.children[18] = TimeSensor484;

Group444.children[1] = Group465;

let Group485 = browser.currentScene.createNode("Group");
Group485.DEF = "Run_Animation";
let OrientationInterpolator486 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator486.DEF = "r_ankleRotInterp_Run";
OrientationInterpolator486.key = new MFFloat(new float[0,0.4909,0.7091,0.8,0.8182,1]);
OrientationInterpolator486.keyValue = new MFRotation(new float[1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.09676,-1,0,0,0.3274,-1,0,0,0.3278,1,0,0,0.2323]);
Group485.children = new MFNode();

Group485.children[0] = OrientationInterpolator486;

let OrientationInterpolator487 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator487.DEF = "r_kneeRotInterp_Run";
OrientationInterpolator487.key = new MFFloat(new float[0,0.03636,0.2182,0.4909,0.7455,1]);
OrientationInterpolator487.keyValue = new MFRotation(new float[1,0,0,0.7004,1,0,0,1.011,1,0,0,1.892,1,0,0,1.188,1,0,0,0.3964,1,0,0,0.7004]);
Group485.children[1] = OrientationInterpolator487;

let OrientationInterpolator488 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator488.DEF = "r_hipRotInterp_Run";
OrientationInterpolator488.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator488.keyValue = new MFRotation(new float[0.9999,0.00293,-0.00989,0.402,-1,0.004977,-0.00497,0.5943,-1,0.003265,-0.001752,1.178,-0.9999,0.00815,-0.01093,0.3031,0.9999,0.00293,-0.00989,0.402]);
Group485.children[2] = OrientationInterpolator488;

let OrientationInterpolator489 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator489.DEF = "l_ankleRotInterp_Run";
OrientationInterpolator489.key = new MFFloat(new float[0,0.2182,0.3091,0.4909,1]);
OrientationInterpolator489.keyValue = new MFRotation(new float[1,0,0,0.03543,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03543]);
Group485.children[3] = OrientationInterpolator489;

let OrientationInterpolator490 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator490.DEF = "l_kneeRotInterp_Run";
OrientationInterpolator490.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator490.keyValue = new MFRotation(new float[1,0,0,1.108,1,0,0,0.4265,1,0,0,0.7052,1,0,0,2.179,1,0,0,1.108]);
Group485.children[4] = OrientationInterpolator490;

let OrientationInterpolator491 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator491.DEF = "l_hipRotInterp_Run";
OrientationInterpolator491.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator491.keyValue = new MFRotation(new float[-0.9986,0.03354,0.04001,1.212,-0.9889,0.1328,0.06696,0.4025,0.9894,0.1453,0.009351,0.4114,-0.9963,0.07032,0.05003,0.7035,-0.9986,0.03354,0.04001,1.212]);
Group485.children[5] = OrientationInterpolator491;

let OrientationInterpolator492 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator492.DEF = "lower_bodyRotInterp_Run";
OrientationInterpolator492.key = new MFFloat(new float[0,1]);
OrientationInterpolator492.keyValue = new MFRotation(new float[0.9969,-0.05444,0.05596,0.07687,0.9969,-0.05444,0.05596,0.07687]);
Group485.children[6] = OrientationInterpolator492;

let OrientationInterpolator493 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator493.DEF = "r_wristRotInterp_Run";
OrientationInterpolator493.key = new MFFloat(new float[0,1]);
OrientationInterpolator493.keyValue = new MFRotation(new float[-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273]);
Group485.children[7] = OrientationInterpolator493;

let OrientationInterpolator494 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator494.DEF = "r_elbowRotInterp_Run";
OrientationInterpolator494.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator494.keyValue = new MFRotation(new float[0.9353,-0.2978,-0.191,4.222,-0.9362,0.2924,-0.1952,1.05,0.9941,-0.09719,-0.04725,4.512,-0.9594,0.2653,0.09579,1.525,0.9353,-0.2978,-0.191,4.222]);
Group485.children[8] = OrientationInterpolator494;

let OrientationInterpolator495 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator495.DEF = "r_shoulderRotInterp_Run";
OrientationInterpolator495.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator495.keyValue = new MFRotation(new float[-1,0,0,0.6979,0.9094,0.2062,-0.3613,0.4157,0.9637,0.1537,-0.2185,1.353,0.4864,0.08841,-0.8693,0.1716,-1,0,0,0.6979]);
Group485.children[9] = OrientationInterpolator495;

let OrientationInterpolator496 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator496.DEF = "l_wristRotInterp_Run";
OrientationInterpolator496.key = new MFFloat(new float[0,1]);
OrientationInterpolator496.keyValue = new MFRotation(new float[-0.0240995,-0.999682,0.00741506,0.120409,-0.0240995,-0.999682,0.00741506,0.120409]);
Group485.children[10] = OrientationInterpolator496;

let OrientationInterpolator497 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator497.DEF = "l_elbowRotInterp_Run";
OrientationInterpolator497.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator497.keyValue = new MFRotation(new float[0.9985,0.03887,0.03802,4.689,-0.965,-0.1889,-0.1821,1.415,0.9758,0.1563,0.1529,4.666,-0.9956,-0.0936,0.009826,1.126,0.9985,0.03887,0.03802,4.689]);
Group485.children[11] = OrientationInterpolator497;

let OrientationInterpolator498 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator498.DEF = "l_shoulderRotInterp_Run";
OrientationInterpolator498.key = new MFFloat(new float[0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator498.keyValue = new MFRotation(new float[0.9907,-0.07264,0.115,1.135,0.9291,-0.1222,0.349,0.1695,-0.9892,0.1364,-0.05394,0.5112,0.9942,-0.0002052,0.1073,0.4975,0.9907,-0.07264,0.115,1.135]);
Group485.children[12] = OrientationInterpolator498;

let OrientationInterpolator499 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator499.DEF = "headRotInterp_Run";
OrientationInterpolator499.key = new MFFloat(new float[0,0.4909,1]);
OrientationInterpolator499.keyValue = new MFRotation(new float[0.6517,-0.7559,0.06211,0.2508,0.6467,0.7527,-0.1238,0.2344,0.6517,-0.7559,0.06211,0.2508]);
Group485.children[13] = OrientationInterpolator499;

let OrientationInterpolator500 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator500.DEF = "neckRotInterp_Run";
OrientationInterpolator500.key = new MFFloat(new float[0,1]);
OrientationInterpolator500.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group485.children[14] = OrientationInterpolator500;

let OrientationInterpolator501 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator501.DEF = "upper_bodyRotInterp_Run";
OrientationInterpolator501.key = new MFFloat(new float[0,0.2545,0.4909,0.7636,1]);
OrientationInterpolator501.keyValue = new MFRotation(new float[0.7651,0.6382,0.08586,0.2712,0.9999,0.002845,-0.01547,0.3756,0.7459,-0.6505,-0.1432,0.2416,0.9984,0.05536,-0.01154,0.3488,0.7651,0.6382,0.08586,0.2712]);
Group485.children[15] = OrientationInterpolator501;

let OrientationInterpolator502 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator502.DEF = "whole_bodyRotInterp_Run";
OrientationInterpolator502.key = new MFFloat(new float[0,1]);
OrientationInterpolator502.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group485.children[16] = OrientationInterpolator502;

let PositionInterpolator503 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator503.DEF = "whole_bodyTranInterp_Run";
PositionInterpolator503.key = new MFFloat(new float[0,0.2182,0.2909,0.3091,0.7091,0.8,0.8182,1]);
PositionInterpolator503.keyValue = new MFVec3f(new float[0,-0.0351,0,0,-0.0351,0,0,-0.04087,0,0,-0.04886,0,0,-0.04051,0,0,-0.03666,0,0,-0.03666,0,0,-0.0351,0]);
Group485.children[17] = PositionInterpolator503;

let TimeSensor504 = browser.currentScene.createNode("TimeSensor");
TimeSensor504.DEF = "Run_Time";
TimeSensor504.loop = True;
TimeSensor504.startTime = -1;
Group485.children[18] = TimeSensor504;

Group444.children[2] = Group485;

let Group505 = browser.currentScene.createNode("Group");
Group505.DEF = "Jump_Animation";
let OrientationInterpolator506 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator506.DEF = "r_ankleRotInterp_Jump";
OrientationInterpolator506.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator506.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,0.3001,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0]);
Group505.children = new MFNode();

Group505.children[0] = OrientationInterpolator506;

let OrientationInterpolator507 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator507.DEF = "r_kneeRotInterp_Jump";
OrientationInterpolator507.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator507.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.005,1,0,0,2.005,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0]);
Group505.children[1] = OrientationInterpolator507;

let OrientationInterpolator508 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator508.DEF = "r_hipRotInterp_Jump";
OrientationInterpolator508.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator508.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,4.433,1,0,0,4.433,1,0,0,4.647,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0]);
Group505.children[2] = OrientationInterpolator508;

let OrientationInterpolator509 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator509.DEF = "l_ankleRotInterp_Jump";
OrientationInterpolator509.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator509.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0]);
Group505.children[3] = OrientationInterpolator509;

let OrientationInterpolator510 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator510.DEF = "l_kneeRotInterp_Jump";
OrientationInterpolator510.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator510.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0]);
Group505.children[4] = OrientationInterpolator510;

let OrientationInterpolator511 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator511.DEF = "l_hipRotInterp_Jump";
OrientationInterpolator511.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator511.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0]);
Group505.children[5] = OrientationInterpolator511;

let OrientationInterpolator512 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator512.DEF = "lower_bodyRotInterp_Jump";
OrientationInterpolator512.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator512.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0]);
Group505.children[6] = OrientationInterpolator512;

let OrientationInterpolator513 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator513.DEF = "r_wristRotInterp_Jump";
OrientationInterpolator513.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator513.keyValue = new MFRotation(new float[0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group505.children[7] = OrientationInterpolator513;

let OrientationInterpolator514 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator514.DEF = "r_elbowRotInterp_Jump";
OrientationInterpolator514.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator514.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group505.children[8] = OrientationInterpolator514;

let OrientationInterpolator515 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator515.DEF = "r_shoulderRotInterp_Jump";
OrientationInterpolator515.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator515.keyValue = new MFRotation(new float[0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group505.children[9] = OrientationInterpolator515;

let OrientationInterpolator516 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator516.DEF = "l_wristRotInterp_Jump";
OrientationInterpolator516.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator516.keyValue = new MFRotation(new float[0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0]);
Group505.children[10] = OrientationInterpolator516;

let OrientationInterpolator517 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator517.DEF = "l_elbowRotInterp_Jump";
OrientationInterpolator517.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator517.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0]);
Group505.children[11] = OrientationInterpolator517;

let OrientationInterpolator518 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator518.DEF = "l_shoulderRotInterp_Jump";
OrientationInterpolator518.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator518.keyValue = new MFRotation(new float[0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0]);
Group505.children[12] = OrientationInterpolator518;

let OrientationInterpolator519 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator519.DEF = "headRotInterp_Jump";
OrientationInterpolator519.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator519.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0]);
Group505.children[13] = OrientationInterpolator519;

let OrientationInterpolator520 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator520.DEF = "neckRotInterp_Jump";
OrientationInterpolator520.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator520.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0]);
Group505.children[14] = OrientationInterpolator520;

let OrientationInterpolator521 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator521.DEF = "upper_bodyRotInterp_Jump";
OrientationInterpolator521.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,0.88,1]);
OrientationInterpolator521.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,1.038,1,0,0,1.038,-1,0,0,0.1057,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0]);
Group505.children[15] = OrientationInterpolator521;

let OrientationInterpolator522 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator522.DEF = "whole_bodyRotInterp_Jump";
OrientationInterpolator522.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,1]);
OrientationInterpolator522.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group505.children[16] = OrientationInterpolator522;

let PositionInterpolator523 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator523.DEF = "whole_bodyTranInterp_Jump";
PositionInterpolator523.key = new MFFloat(new float[0,0.04,0.08,0.12,0.16,0.2,0.24,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.8,0.84,0.88,0.92,0.96,1]);
PositionInterpolator523.keyValue = new MFVec3f(new float[0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.3269,-0.1499,-0.0008616,-0.13,-0.06358,-0.0005128,-0.03123,-0.05488,0.0004779,0.053,0.02732,0.0001728,0.4148,0.006873,0,0.03045,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0]);
Group505.children[17] = PositionInterpolator523;

let TimeSensor524 = browser.currentScene.createNode("TimeSensor");
TimeSensor524.DEF = "Jump_Time";
TimeSensor524.cycleInterval = 2;
TimeSensor524.startTime = -1;
Group505.children[18] = TimeSensor524;

Group444.children[3] = Group505;

browser.currentScene.children[9] = Group444;

let ROUTE525 = browser.currentScene.createNode("ROUTE");
ROUTE525.fromField = "position_changed";
ROUTE525.fromNode = "HudProx";
ROUTE525.toField = "set_translation";
ROUTE525.toNode = "HudXform";
browser.currentScene.children[10] = ROUTE525;

let ROUTE526 = browser.currentScene.createNode("ROUTE");
ROUTE526.fromField = "orientation_changed";
ROUTE526.fromNode = "HudProx";
ROUTE526.toField = "set_rotation";
ROUTE526.toNode = "HudXform";
browser.currentScene.children[11] = ROUTE526;

let ROUTE527 = browser.currentScene.createNode("ROUTE");
ROUTE527.fromField = "touchTime";
ROUTE527.fromNode = "Stand_Touch";
ROUTE527.toField = "stopTime";
ROUTE527.toNode = "Walk_Time";
browser.currentScene.children[12] = ROUTE527;

let ROUTE528 = browser.currentScene.createNode("ROUTE");
ROUTE528.fromField = "touchTime";
ROUTE528.fromNode = "Stand_Touch";
ROUTE528.toField = "stopTime";
ROUTE528.toNode = "Run_Time";
browser.currentScene.children[13] = ROUTE528;

let ROUTE529 = browser.currentScene.createNode("ROUTE");
ROUTE529.fromField = "touchTime";
ROUTE529.fromNode = "Stand_Touch";
ROUTE529.toField = "stopTime";
ROUTE529.toNode = "Jump_Time";
browser.currentScene.children[14] = ROUTE529;

let ROUTE530 = browser.currentScene.createNode("ROUTE");
ROUTE530.fromField = "touchTime";
ROUTE530.fromNode = "Stand_Touch";
ROUTE530.toField = "startTime";
ROUTE530.toNode = "Stand_Time";
browser.currentScene.children[15] = ROUTE530;

let ROUTE531 = browser.currentScene.createNode("ROUTE");
ROUTE531.fromField = "touchTime";
ROUTE531.fromNode = "Walk_Touch";
ROUTE531.toField = "stopTime";
ROUTE531.toNode = "Stand_Time";
browser.currentScene.children[16] = ROUTE531;

let ROUTE532 = browser.currentScene.createNode("ROUTE");
ROUTE532.fromField = "touchTime";
ROUTE532.fromNode = "Walk_Touch";
ROUTE532.toField = "stopTime";
ROUTE532.toNode = "Run_Time";
browser.currentScene.children[17] = ROUTE532;

let ROUTE533 = browser.currentScene.createNode("ROUTE");
ROUTE533.fromField = "touchTime";
ROUTE533.fromNode = "Walk_Touch";
ROUTE533.toField = "stopTime";
ROUTE533.toNode = "Jump_Time";
browser.currentScene.children[18] = ROUTE533;

let ROUTE534 = browser.currentScene.createNode("ROUTE");
ROUTE534.fromField = "touchTime";
ROUTE534.fromNode = "Walk_Touch";
ROUTE534.toField = "startTime";
ROUTE534.toNode = "Walk_Time";
browser.currentScene.children[19] = ROUTE534;

let ROUTE535 = browser.currentScene.createNode("ROUTE");
ROUTE535.fromField = "touchTime";
ROUTE535.fromNode = "Run_Touch";
ROUTE535.toField = "stopTime";
ROUTE535.toNode = "Stand_Time";
browser.currentScene.children[20] = ROUTE535;

let ROUTE536 = browser.currentScene.createNode("ROUTE");
ROUTE536.fromField = "touchTime";
ROUTE536.fromNode = "Run_Touch";
ROUTE536.toField = "stopTime";
ROUTE536.toNode = "Walk_Time";
browser.currentScene.children[21] = ROUTE536;

let ROUTE537 = browser.currentScene.createNode("ROUTE");
ROUTE537.fromField = "touchTime";
ROUTE537.fromNode = "Run_Touch";
ROUTE537.toField = "stopTime";
ROUTE537.toNode = "Jump_Time";
browser.currentScene.children[22] = ROUTE537;

let ROUTE538 = browser.currentScene.createNode("ROUTE");
ROUTE538.fromField = "touchTime";
ROUTE538.fromNode = "Run_Touch";
ROUTE538.toField = "startTime";
ROUTE538.toNode = "Run_Time";
browser.currentScene.children[23] = ROUTE538;

let ROUTE539 = browser.currentScene.createNode("ROUTE");
ROUTE539.fromField = "touchTime";
ROUTE539.fromNode = "Jump_Touch";
ROUTE539.toField = "stopTime";
ROUTE539.toNode = "Stand_Time";
browser.currentScene.children[24] = ROUTE539;

let ROUTE540 = browser.currentScene.createNode("ROUTE");
ROUTE540.fromField = "touchTime";
ROUTE540.fromNode = "Jump_Touch";
ROUTE540.toField = "stopTime";
ROUTE540.toNode = "Walk_Time";
browser.currentScene.children[25] = ROUTE540;

let ROUTE541 = browser.currentScene.createNode("ROUTE");
ROUTE541.fromField = "touchTime";
ROUTE541.fromNode = "Jump_Touch";
ROUTE541.toField = "stopTime";
ROUTE541.toNode = "Run_Time";
browser.currentScene.children[26] = ROUTE541;

let ROUTE542 = browser.currentScene.createNode("ROUTE");
ROUTE542.fromField = "touchTime";
ROUTE542.fromNode = "Jump_Touch";
ROUTE542.toField = "startTime";
ROUTE542.toNode = "Jump_Time";
browser.currentScene.children[27] = ROUTE542;

let ROUTE543 = browser.currentScene.createNode("ROUTE");
ROUTE543.fromField = "fraction_changed";
ROUTE543.fromNode = "Stand_Time";
ROUTE543.toField = "set_fraction";
ROUTE543.toNode = "r_ankleRotInterp_Stand";
browser.currentScene.children[28] = ROUTE543;

let ROUTE544 = browser.currentScene.createNode("ROUTE");
ROUTE544.fromField = "fraction_changed";
ROUTE544.fromNode = "Stand_Time";
ROUTE544.toField = "set_fraction";
ROUTE544.toNode = "r_kneeRotInterp_Stand";
browser.currentScene.children[29] = ROUTE544;

let ROUTE545 = browser.currentScene.createNode("ROUTE");
ROUTE545.fromField = "fraction_changed";
ROUTE545.fromNode = "Stand_Time";
ROUTE545.toField = "set_fraction";
ROUTE545.toNode = "r_hipRotInterp_Stand";
browser.currentScene.children[30] = ROUTE545;

let ROUTE546 = browser.currentScene.createNode("ROUTE");
ROUTE546.fromField = "fraction_changed";
ROUTE546.fromNode = "Stand_Time";
ROUTE546.toField = "set_fraction";
ROUTE546.toNode = "l_ankleRotInterp_Stand";
browser.currentScene.children[31] = ROUTE546;

let ROUTE547 = browser.currentScene.createNode("ROUTE");
ROUTE547.fromField = "fraction_changed";
ROUTE547.fromNode = "Stand_Time";
ROUTE547.toField = "set_fraction";
ROUTE547.toNode = "l_kneeRotInterp_Stand";
browser.currentScene.children[32] = ROUTE547;

let ROUTE548 = browser.currentScene.createNode("ROUTE");
ROUTE548.fromField = "fraction_changed";
ROUTE548.fromNode = "Stand_Time";
ROUTE548.toField = "set_fraction";
ROUTE548.toNode = "l_hipRotInterp_Stand";
browser.currentScene.children[33] = ROUTE548;

let ROUTE549 = browser.currentScene.createNode("ROUTE");
ROUTE549.fromField = "fraction_changed";
ROUTE549.fromNode = "Stand_Time";
ROUTE549.toField = "set_fraction";
ROUTE549.toNode = "lower_bodyRotInterp_Stand";
browser.currentScene.children[34] = ROUTE549;

let ROUTE550 = browser.currentScene.createNode("ROUTE");
ROUTE550.fromField = "fraction_changed";
ROUTE550.fromNode = "Stand_Time";
ROUTE550.toField = "set_fraction";
ROUTE550.toNode = "r_wristRotInterp_Stand";
browser.currentScene.children[35] = ROUTE550;

let ROUTE551 = browser.currentScene.createNode("ROUTE");
ROUTE551.fromField = "fraction_changed";
ROUTE551.fromNode = "Stand_Time";
ROUTE551.toField = "set_fraction";
ROUTE551.toNode = "r_elbowRotInterp_Stand";
browser.currentScene.children[36] = ROUTE551;

let ROUTE552 = browser.currentScene.createNode("ROUTE");
ROUTE552.fromField = "fraction_changed";
ROUTE552.fromNode = "Stand_Time";
ROUTE552.toField = "set_fraction";
ROUTE552.toNode = "r_shoulderRotInterp_Stand";
browser.currentScene.children[37] = ROUTE552;

let ROUTE553 = browser.currentScene.createNode("ROUTE");
ROUTE553.fromField = "fraction_changed";
ROUTE553.fromNode = "Stand_Time";
ROUTE553.toField = "set_fraction";
ROUTE553.toNode = "l_wristRotInterp_Stand";
browser.currentScene.children[38] = ROUTE553;

let ROUTE554 = browser.currentScene.createNode("ROUTE");
ROUTE554.fromField = "fraction_changed";
ROUTE554.fromNode = "Stand_Time";
ROUTE554.toField = "set_fraction";
ROUTE554.toNode = "l_elbowRotInterp_Stand";
browser.currentScene.children[39] = ROUTE554;

let ROUTE555 = browser.currentScene.createNode("ROUTE");
ROUTE555.fromField = "fraction_changed";
ROUTE555.fromNode = "Stand_Time";
ROUTE555.toField = "set_fraction";
ROUTE555.toNode = "l_shoulderRotInterp_Stand";
browser.currentScene.children[40] = ROUTE555;

let ROUTE556 = browser.currentScene.createNode("ROUTE");
ROUTE556.fromField = "fraction_changed";
ROUTE556.fromNode = "Stand_Time";
ROUTE556.toField = "set_fraction";
ROUTE556.toNode = "headRotInterp_Stand";
browser.currentScene.children[41] = ROUTE556;

let ROUTE557 = browser.currentScene.createNode("ROUTE");
ROUTE557.fromField = "fraction_changed";
ROUTE557.fromNode = "Stand_Time";
ROUTE557.toField = "set_fraction";
ROUTE557.toNode = "neckRotInterp_Stand";
browser.currentScene.children[42] = ROUTE557;

let ROUTE558 = browser.currentScene.createNode("ROUTE");
ROUTE558.fromField = "fraction_changed";
ROUTE558.fromNode = "Stand_Time";
ROUTE558.toField = "set_fraction";
ROUTE558.toNode = "upper_bodyRotInterp_Stand";
browser.currentScene.children[43] = ROUTE558;

let ROUTE559 = browser.currentScene.createNode("ROUTE");
ROUTE559.fromField = "fraction_changed";
ROUTE559.fromNode = "Stand_Time";
ROUTE559.toField = "set_fraction";
ROUTE559.toNode = "whole_bodyRotInterp_Stand";
browser.currentScene.children[44] = ROUTE559;

let ROUTE560 = browser.currentScene.createNode("ROUTE");
ROUTE560.fromField = "fraction_changed";
ROUTE560.fromNode = "Stand_Time";
ROUTE560.toField = "set_fraction";
ROUTE560.toNode = "whole_bodyTranInterp_Stand";
browser.currentScene.children[45] = ROUTE560;

let ROUTE561 = browser.currentScene.createNode("ROUTE");
ROUTE561.fromField = "value_changed";
ROUTE561.fromNode = "r_ankleRotInterp_Stand";
ROUTE561.toField = "set_rotation";
ROUTE561.toNode = "hanim_r_ankle";
browser.currentScene.children[46] = ROUTE561;

let ROUTE562 = browser.currentScene.createNode("ROUTE");
ROUTE562.fromField = "value_changed";
ROUTE562.fromNode = "r_kneeRotInterp_Stand";
ROUTE562.toField = "set_rotation";
ROUTE562.toNode = "hanim_r_knee";
browser.currentScene.children[47] = ROUTE562;

let ROUTE563 = browser.currentScene.createNode("ROUTE");
ROUTE563.fromField = "value_changed";
ROUTE563.fromNode = "r_hipRotInterp_Stand";
ROUTE563.toField = "set_rotation";
ROUTE563.toNode = "hanim_r_hip";
browser.currentScene.children[48] = ROUTE563;

let ROUTE564 = browser.currentScene.createNode("ROUTE");
ROUTE564.fromField = "value_changed";
ROUTE564.fromNode = "l_ankleRotInterp_Stand";
ROUTE564.toField = "set_rotation";
ROUTE564.toNode = "hanim_l_ankle";
browser.currentScene.children[49] = ROUTE564;

let ROUTE565 = browser.currentScene.createNode("ROUTE");
ROUTE565.fromField = "value_changed";
ROUTE565.fromNode = "l_kneeRotInterp_Stand";
ROUTE565.toField = "set_rotation";
ROUTE565.toNode = "hanim_l_knee";
browser.currentScene.children[50] = ROUTE565;

let ROUTE566 = browser.currentScene.createNode("ROUTE");
ROUTE566.fromField = "value_changed";
ROUTE566.fromNode = "l_hipRotInterp_Stand";
ROUTE566.toField = "set_rotation";
ROUTE566.toNode = "hanim_l_hip";
browser.currentScene.children[51] = ROUTE566;

let ROUTE567 = browser.currentScene.createNode("ROUTE");
ROUTE567.fromField = "value_changed";
ROUTE567.fromNode = "lower_bodyRotInterp_Stand";
ROUTE567.toField = "set_rotation";
ROUTE567.toNode = "hanim_sacroiliac";
browser.currentScene.children[52] = ROUTE567;

let ROUTE568 = browser.currentScene.createNode("ROUTE");
ROUTE568.fromField = "value_changed";
ROUTE568.fromNode = "r_wristRotInterp_Stand";
ROUTE568.toField = "set_rotation";
ROUTE568.toNode = "hanim_r_wrist";
browser.currentScene.children[53] = ROUTE568;

let ROUTE569 = browser.currentScene.createNode("ROUTE");
ROUTE569.fromField = "value_changed";
ROUTE569.fromNode = "r_elbowRotInterp_Stand";
ROUTE569.toField = "set_rotation";
ROUTE569.toNode = "hanim_r_elbow";
browser.currentScene.children[54] = ROUTE569;

let ROUTE570 = browser.currentScene.createNode("ROUTE");
ROUTE570.fromField = "value_changed";
ROUTE570.fromNode = "r_shoulderRotInterp_Stand";
ROUTE570.toField = "set_rotation";
ROUTE570.toNode = "hanim_r_shoulder";
browser.currentScene.children[55] = ROUTE570;

let ROUTE571 = browser.currentScene.createNode("ROUTE");
ROUTE571.fromField = "value_changed";
ROUTE571.fromNode = "l_wristRotInterp_Stand";
ROUTE571.toField = "set_rotation";
ROUTE571.toNode = "hanim_l_wrist";
browser.currentScene.children[56] = ROUTE571;

let ROUTE572 = browser.currentScene.createNode("ROUTE");
ROUTE572.fromField = "value_changed";
ROUTE572.fromNode = "l_elbowRotInterp_Stand";
ROUTE572.toField = "set_rotation";
ROUTE572.toNode = "hanim_l_elbow";
browser.currentScene.children[57] = ROUTE572;

let ROUTE573 = browser.currentScene.createNode("ROUTE");
ROUTE573.fromField = "value_changed";
ROUTE573.fromNode = "l_shoulderRotInterp_Stand";
ROUTE573.toField = "set_rotation";
ROUTE573.toNode = "hanim_l_shoulder";
browser.currentScene.children[58] = ROUTE573;

let ROUTE574 = browser.currentScene.createNode("ROUTE");
ROUTE574.fromField = "value_changed";
ROUTE574.fromNode = "headRotInterp_Stand";
ROUTE574.toField = "set_rotation";
ROUTE574.toNode = "hanim_skullbase";
browser.currentScene.children[59] = ROUTE574;

let ROUTE575 = browser.currentScene.createNode("ROUTE");
ROUTE575.fromField = "value_changed";
ROUTE575.fromNode = "neckRotInterp_Stand";
ROUTE575.toField = "set_rotation";
ROUTE575.toNode = "hanim_vc4";
browser.currentScene.children[60] = ROUTE575;

let ROUTE576 = browser.currentScene.createNode("ROUTE");
ROUTE576.fromField = "value_changed";
ROUTE576.fromNode = "upper_bodyRotInterp_Stand";
ROUTE576.toField = "set_rotation";
ROUTE576.toNode = "hanim_vl1";
browser.currentScene.children[61] = ROUTE576;

let ROUTE577 = browser.currentScene.createNode("ROUTE");
ROUTE577.fromField = "value_changed";
ROUTE577.fromNode = "whole_bodyRotInterp_Stand";
ROUTE577.toField = "set_rotation";
ROUTE577.toNode = "hanim_HumanoidRoot";
browser.currentScene.children[62] = ROUTE577;

let ROUTE578 = browser.currentScene.createNode("ROUTE");
ROUTE578.fromField = "value_changed";
ROUTE578.fromNode = "whole_bodyTranInterp_Stand";
ROUTE578.toField = "set_translation";
ROUTE578.toNode = "hanim_HumanoidRoot";
browser.currentScene.children[63] = ROUTE578;

let ROUTE579 = browser.currentScene.createNode("ROUTE");
ROUTE579.fromField = "fraction_changed";
ROUTE579.fromNode = "Walk_Time";
ROUTE579.toField = "set_fraction";
ROUTE579.toNode = "r_ankleRotInterp_BasicWalk";
browser.currentScene.children[64] = ROUTE579;

let ROUTE580 = browser.currentScene.createNode("ROUTE");
ROUTE580.fromField = "fraction_changed";
ROUTE580.fromNode = "Walk_Time";
ROUTE580.toField = "set_fraction";
ROUTE580.toNode = "r_kneeRotInterp_BasicWalk";
browser.currentScene.children[65] = ROUTE580;

let ROUTE581 = browser.currentScene.createNode("ROUTE");
ROUTE581.fromField = "fraction_changed";
ROUTE581.fromNode = "Walk_Time";
ROUTE581.toField = "set_fraction";
ROUTE581.toNode = "r_hipRotInterp_BasicWalk";
browser.currentScene.children[66] = ROUTE581;

let ROUTE582 = browser.currentScene.createNode("ROUTE");
ROUTE582.fromField = "fraction_changed";
ROUTE582.fromNode = "Walk_Time";
ROUTE582.toField = "set_fraction";
ROUTE582.toNode = "l_ankleRotInterp_BasicWalk";
browser.currentScene.children[67] = ROUTE582;

let ROUTE583 = browser.currentScene.createNode("ROUTE");
ROUTE583.fromField = "fraction_changed";
ROUTE583.fromNode = "Walk_Time";
ROUTE583.toField = "set_fraction";
ROUTE583.toNode = "l_kneeRotInterp_BasicWalk";
browser.currentScene.children[68] = ROUTE583;

let ROUTE584 = browser.currentScene.createNode("ROUTE");
ROUTE584.fromField = "fraction_changed";
ROUTE584.fromNode = "Walk_Time";
ROUTE584.toField = "set_fraction";
ROUTE584.toNode = "l_hipRotInterp_BasicWalk";
browser.currentScene.children[69] = ROUTE584;

let ROUTE585 = browser.currentScene.createNode("ROUTE");
ROUTE585.fromField = "fraction_changed";
ROUTE585.fromNode = "Walk_Time";
ROUTE585.toField = "set_fraction";
ROUTE585.toNode = "lower_bodyRotInterp_BasicWalk";
browser.currentScene.children[70] = ROUTE585;

let ROUTE586 = browser.currentScene.createNode("ROUTE");
ROUTE586.fromField = "fraction_changed";
ROUTE586.fromNode = "Walk_Time";
ROUTE586.toField = "set_fraction";
ROUTE586.toNode = "r_wristRotInterp_BasicWalk";
browser.currentScene.children[71] = ROUTE586;

let ROUTE587 = browser.currentScene.createNode("ROUTE");
ROUTE587.fromField = "fraction_changed";
ROUTE587.fromNode = "Walk_Time";
ROUTE587.toField = "set_fraction";
ROUTE587.toNode = "r_elbowRotInterp_BasicWalk";
browser.currentScene.children[72] = ROUTE587;

let ROUTE588 = browser.currentScene.createNode("ROUTE");
ROUTE588.fromField = "fraction_changed";
ROUTE588.fromNode = "Walk_Time";
ROUTE588.toField = "set_fraction";
ROUTE588.toNode = "r_shoulderRotInterp_BasicWalk";
browser.currentScene.children[73] = ROUTE588;

let ROUTE589 = browser.currentScene.createNode("ROUTE");
ROUTE589.fromField = "fraction_changed";
ROUTE589.fromNode = "Walk_Time";
ROUTE589.toField = "set_fraction";
ROUTE589.toNode = "l_wristRotInterp_BasicWalk";
browser.currentScene.children[74] = ROUTE589;

let ROUTE590 = browser.currentScene.createNode("ROUTE");
ROUTE590.fromField = "fraction_changed";
ROUTE590.fromNode = "Walk_Time";
ROUTE590.toField = "set_fraction";
ROUTE590.toNode = "l_elbowRotInterp_BasicWalk";
browser.currentScene.children[75] = ROUTE590;

let ROUTE591 = browser.currentScene.createNode("ROUTE");
ROUTE591.fromField = "fraction_changed";
ROUTE591.fromNode = "Walk_Time";
ROUTE591.toField = "set_fraction";
ROUTE591.toNode = "l_shoulderRotInterp_BasicWalk";
browser.currentScene.children[76] = ROUTE591;

let ROUTE592 = browser.currentScene.createNode("ROUTE");
ROUTE592.fromField = "fraction_changed";
ROUTE592.fromNode = "Walk_Time";
ROUTE592.toField = "set_fraction";
ROUTE592.toNode = "headRotInterp_BasicWalk";
browser.currentScene.children[77] = ROUTE592;

let ROUTE593 = browser.currentScene.createNode("ROUTE");
ROUTE593.fromField = "fraction_changed";
ROUTE593.fromNode = "Walk_Time";
ROUTE593.toField = "set_fraction";
ROUTE593.toNode = "neckRotInterp_BasicWalk";
browser.currentScene.children[78] = ROUTE593;

let ROUTE594 = browser.currentScene.createNode("ROUTE");
ROUTE594.fromField = "fraction_changed";
ROUTE594.fromNode = "Walk_Time";
ROUTE594.toField = "set_fraction";
ROUTE594.toNode = "upper_bodyRotInterp_BasicWalk";
browser.currentScene.children[79] = ROUTE594;

let ROUTE595 = browser.currentScene.createNode("ROUTE");
ROUTE595.fromField = "fraction_changed";
ROUTE595.fromNode = "Walk_Time";
ROUTE595.toField = "set_fraction";
ROUTE595.toNode = "whole_bodyRotInterp_BasicWalk";
browser.currentScene.children[80] = ROUTE595;

let ROUTE596 = browser.currentScene.createNode("ROUTE");
ROUTE596.fromField = "fraction_changed";
ROUTE596.fromNode = "Walk_Time";
ROUTE596.toField = "set_fraction";
ROUTE596.toNode = "whole_bodyTranInterp_BasicWalk";
browser.currentScene.children[81] = ROUTE596;

let ROUTE597 = browser.currentScene.createNode("ROUTE");
ROUTE597.fromField = "value_changed";
ROUTE597.fromNode = "r_ankleRotInterp_BasicWalk";
ROUTE597.toField = "set_rotation";
ROUTE597.toNode = "hanim_r_ankle";
browser.currentScene.children[82] = ROUTE597;

let ROUTE598 = browser.currentScene.createNode("ROUTE");
ROUTE598.fromField = "value_changed";
ROUTE598.fromNode = "r_kneeRotInterp_BasicWalk";
ROUTE598.toField = "set_rotation";
ROUTE598.toNode = "hanim_r_knee";
browser.currentScene.children[83] = ROUTE598;

let ROUTE599 = browser.currentScene.createNode("ROUTE");
ROUTE599.fromField = "value_changed";
ROUTE599.fromNode = "r_hipRotInterp_BasicWalk";
ROUTE599.toField = "set_rotation";
ROUTE599.toNode = "hanim_r_hip";
browser.currentScene.children[84] = ROUTE599;

let ROUTE600 = browser.currentScene.createNode("ROUTE");
ROUTE600.fromField = "value_changed";
ROUTE600.fromNode = "l_ankleRotInterp_BasicWalk";
ROUTE600.toField = "set_rotation";
ROUTE600.toNode = "hanim_l_ankle";
browser.currentScene.children[85] = ROUTE600;

let ROUTE601 = browser.currentScene.createNode("ROUTE");
ROUTE601.fromField = "value_changed";
ROUTE601.fromNode = "l_kneeRotInterp_BasicWalk";
ROUTE601.toField = "set_rotation";
ROUTE601.toNode = "hanim_l_knee";
browser.currentScene.children[86] = ROUTE601;

let ROUTE602 = browser.currentScene.createNode("ROUTE");
ROUTE602.fromField = "value_changed";
ROUTE602.fromNode = "l_hipRotInterp_BasicWalk";
ROUTE602.toField = "set_rotation";
ROUTE602.toNode = "hanim_l_hip";
browser.currentScene.children[87] = ROUTE602;

let ROUTE603 = browser.currentScene.createNode("ROUTE");
ROUTE603.fromField = "value_changed";
ROUTE603.fromNode = "lower_bodyRotInterp_BasicWalk";
ROUTE603.toField = "set_rotation";
ROUTE603.toNode = "hanim_sacroiliac";
browser.currentScene.children[88] = ROUTE603;

let ROUTE604 = browser.currentScene.createNode("ROUTE");
ROUTE604.fromField = "value_changed";
ROUTE604.fromNode = "r_wristRotInterp_BasicWalk";
ROUTE604.toField = "set_rotation";
ROUTE604.toNode = "hanim_r_wrist";
browser.currentScene.children[89] = ROUTE604;

let ROUTE605 = browser.currentScene.createNode("ROUTE");
ROUTE605.fromField = "value_changed";
ROUTE605.fromNode = "r_elbowRotInterp_BasicWalk";
ROUTE605.toField = "set_rotation";
ROUTE605.toNode = "hanim_r_elbow";
browser.currentScene.children[90] = ROUTE605;

let ROUTE606 = browser.currentScene.createNode("ROUTE");
ROUTE606.fromField = "value_changed";
ROUTE606.fromNode = "r_shoulderRotInterp_BasicWalk";
ROUTE606.toField = "set_rotation";
ROUTE606.toNode = "hanim_r_shoulder";
browser.currentScene.children[91] = ROUTE606;

let ROUTE607 = browser.currentScene.createNode("ROUTE");
ROUTE607.fromField = "value_changed";
ROUTE607.fromNode = "l_wristRotInterp_BasicWalk";
ROUTE607.toField = "set_rotation";
ROUTE607.toNode = "hanim_l_wrist";
browser.currentScene.children[92] = ROUTE607;

let ROUTE608 = browser.currentScene.createNode("ROUTE");
ROUTE608.fromField = "value_changed";
ROUTE608.fromNode = "l_elbowRotInterp_BasicWalk";
ROUTE608.toField = "set_rotation";
ROUTE608.toNode = "hanim_l_elbow";
browser.currentScene.children[93] = ROUTE608;

let ROUTE609 = browser.currentScene.createNode("ROUTE");
ROUTE609.fromField = "value_changed";
ROUTE609.fromNode = "l_shoulderRotInterp_BasicWalk";
ROUTE609.toField = "set_rotation";
ROUTE609.toNode = "hanim_l_shoulder";
browser.currentScene.children[94] = ROUTE609;

let ROUTE610 = browser.currentScene.createNode("ROUTE");
ROUTE610.fromField = "value_changed";
ROUTE610.fromNode = "headRotInterp_BasicWalk";
ROUTE610.toField = "set_rotation";
ROUTE610.toNode = "hanim_skullbase";
browser.currentScene.children[95] = ROUTE610;

let ROUTE611 = browser.currentScene.createNode("ROUTE");
ROUTE611.fromField = "value_changed";
ROUTE611.fromNode = "neckRotInterp_BasicWalk";
ROUTE611.toField = "set_rotation";
ROUTE611.toNode = "hanim_vc4";
browser.currentScene.children[96] = ROUTE611;

let ROUTE612 = browser.currentScene.createNode("ROUTE");
ROUTE612.fromField = "value_changed";
ROUTE612.fromNode = "upper_bodyRotInterp_BasicWalk";
ROUTE612.toField = "set_rotation";
ROUTE612.toNode = "hanim_vl1";
browser.currentScene.children[97] = ROUTE612;

let ROUTE613 = browser.currentScene.createNode("ROUTE");
ROUTE613.fromField = "value_changed";
ROUTE613.fromNode = "whole_bodyRotInterp_BasicWalk";
ROUTE613.toField = "set_rotation";
ROUTE613.toNode = "hanim_HumanoidRoot";
browser.currentScene.children[98] = ROUTE613;

let ROUTE614 = browser.currentScene.createNode("ROUTE");
ROUTE614.fromField = "value_changed";
ROUTE614.fromNode = "whole_bodyTranInterp_BasicWalk";
ROUTE614.toField = "set_translation";
ROUTE614.toNode = "hanim_HumanoidRoot";
browser.currentScene.children[99] = ROUTE614;

let ROUTE615 = browser.currentScene.createNode("ROUTE");
ROUTE615.fromField = "fraction_changed";
ROUTE615.fromNode = "Run_Time";
ROUTE615.toField = "set_fraction";
ROUTE615.toNode = "r_ankleRotInterp_Run";
browser.currentScene.children[100] = ROUTE615;

let ROUTE616 = browser.currentScene.createNode("ROUTE");
ROUTE616.fromField = "fraction_changed";
ROUTE616.fromNode = "Run_Time";
ROUTE616.toField = "set_fraction";
ROUTE616.toNode = "r_kneeRotInterp_Run";
browser.currentScene.children[101] = ROUTE616;

let ROUTE617 = browser.currentScene.createNode("ROUTE");
ROUTE617.fromField = "fraction_changed";
ROUTE617.fromNode = "Run_Time";
ROUTE617.toField = "set_fraction";
ROUTE617.toNode = "r_hipRotInterp_Run";
browser.currentScene.children[102] = ROUTE617;

let ROUTE618 = browser.currentScene.createNode("ROUTE");
ROUTE618.fromField = "fraction_changed";
ROUTE618.fromNode = "Run_Time";
ROUTE618.toField = "set_fraction";
ROUTE618.toNode = "l_ankleRotInterp_Run";
browser.currentScene.children[103] = ROUTE618;

let ROUTE619 = browser.currentScene.createNode("ROUTE");
ROUTE619.fromField = "fraction_changed";
ROUTE619.fromNode = "Run_Time";
ROUTE619.toField = "set_fraction";
ROUTE619.toNode = "l_kneeRotInterp_Run";
browser.currentScene.children[104] = ROUTE619;

let ROUTE620 = browser.currentScene.createNode("ROUTE");
ROUTE620.fromField = "fraction_changed";
ROUTE620.fromNode = "Run_Time";
ROUTE620.toField = "set_fraction";
ROUTE620.toNode = "l_hipRotInterp_Run";
browser.currentScene.children[105] = ROUTE620;

let ROUTE621 = browser.currentScene.createNode("ROUTE");
ROUTE621.fromField = "fraction_changed";
ROUTE621.fromNode = "Run_Time";
ROUTE621.toField = "set_fraction";
ROUTE621.toNode = "lower_bodyRotInterp_Run";
browser.currentScene.children[106] = ROUTE621;

let ROUTE622 = browser.currentScene.createNode("ROUTE");
ROUTE622.fromField = "fraction_changed";
ROUTE622.fromNode = "Run_Time";
ROUTE622.toField = "set_fraction";
ROUTE622.toNode = "r_wristRotInterp_Run";
browser.currentScene.children[107] = ROUTE622;

let ROUTE623 = browser.currentScene.createNode("ROUTE");
ROUTE623.fromField = "fraction_changed";
ROUTE623.fromNode = "Run_Time";
ROUTE623.toField = "set_fraction";
ROUTE623.toNode = "r_elbowRotInterp_Run";
browser.currentScene.children[108] = ROUTE623;

let ROUTE624 = browser.currentScene.createNode("ROUTE");
ROUTE624.fromField = "fraction_changed";
ROUTE624.fromNode = "Run_Time";
ROUTE624.toField = "set_fraction";
ROUTE624.toNode = "r_shoulderRotInterp_Run";
browser.currentScene.children[109] = ROUTE624;

let ROUTE625 = browser.currentScene.createNode("ROUTE");
ROUTE625.fromField = "fraction_changed";
ROUTE625.fromNode = "Run_Time";
ROUTE625.toField = "set_fraction";
ROUTE625.toNode = "l_wristRotInterp_Run";
browser.currentScene.children[110] = ROUTE625;

let ROUTE626 = browser.currentScene.createNode("ROUTE");
ROUTE626.fromField = "fraction_changed";
ROUTE626.fromNode = "Run_Time";
ROUTE626.toField = "set_fraction";
ROUTE626.toNode = "l_elbowRotInterp_Run";
browser.currentScene.children[111] = ROUTE626;

let ROUTE627 = browser.currentScene.createNode("ROUTE");
ROUTE627.fromField = "fraction_changed";
ROUTE627.fromNode = "Run_Time";
ROUTE627.toField = "set_fraction";
ROUTE627.toNode = "l_shoulderRotInterp_Run";
browser.currentScene.children[112] = ROUTE627;

let ROUTE628 = browser.currentScene.createNode("ROUTE");
ROUTE628.fromField = "fraction_changed";
ROUTE628.fromNode = "Run_Time";
ROUTE628.toField = "set_fraction";
ROUTE628.toNode = "headRotInterp_Run";
browser.currentScene.children[113] = ROUTE628;

let ROUTE629 = browser.currentScene.createNode("ROUTE");
ROUTE629.fromField = "fraction_changed";
ROUTE629.fromNode = "Run_Time";
ROUTE629.toField = "set_fraction";
ROUTE629.toNode = "neckRotInterp_Run";
browser.currentScene.children[114] = ROUTE629;

let ROUTE630 = browser.currentScene.createNode("ROUTE");
ROUTE630.fromField = "fraction_changed";
ROUTE630.fromNode = "Run_Time";
ROUTE630.toField = "set_fraction";
ROUTE630.toNode = "upper_bodyRotInterp_Run";
browser.currentScene.children[115] = ROUTE630;

let ROUTE631 = browser.currentScene.createNode("ROUTE");
ROUTE631.fromField = "fraction_changed";
ROUTE631.fromNode = "Run_Time";
ROUTE631.toField = "set_fraction";
ROUTE631.toNode = "whole_bodyRotInterp_Run";
browser.currentScene.children[116] = ROUTE631;

let ROUTE632 = browser.currentScene.createNode("ROUTE");
ROUTE632.fromField = "fraction_changed";
ROUTE632.fromNode = "Run_Time";
ROUTE632.toField = "set_fraction";
ROUTE632.toNode = "whole_bodyTranInterp_Run";
browser.currentScene.children[117] = ROUTE632;

let ROUTE633 = browser.currentScene.createNode("ROUTE");
ROUTE633.fromField = "value_changed";
ROUTE633.fromNode = "r_ankleRotInterp_Run";
ROUTE633.toField = "set_rotation";
ROUTE633.toNode = "hanim_r_ankle";
browser.currentScene.children[118] = ROUTE633;

let ROUTE634 = browser.currentScene.createNode("ROUTE");
ROUTE634.fromField = "value_changed";
ROUTE634.fromNode = "r_kneeRotInterp_Run";
ROUTE634.toField = "set_rotation";
ROUTE634.toNode = "hanim_r_knee";
browser.currentScene.children[119] = ROUTE634;

let ROUTE635 = browser.currentScene.createNode("ROUTE");
ROUTE635.fromField = "value_changed";
ROUTE635.fromNode = "r_hipRotInterp_Run";
ROUTE635.toField = "set_rotation";
ROUTE635.toNode = "hanim_r_hip";
browser.currentScene.children[120] = ROUTE635;

let ROUTE636 = browser.currentScene.createNode("ROUTE");
ROUTE636.fromField = "value_changed";
ROUTE636.fromNode = "l_ankleRotInterp_Run";
ROUTE636.toField = "set_rotation";
ROUTE636.toNode = "hanim_l_ankle";
browser.currentScene.children[121] = ROUTE636;

let ROUTE637 = browser.currentScene.createNode("ROUTE");
ROUTE637.fromField = "value_changed";
ROUTE637.fromNode = "l_kneeRotInterp_Run";
ROUTE637.toField = "set_rotation";
ROUTE637.toNode = "hanim_l_knee";
browser.currentScene.children[122] = ROUTE637;

let ROUTE638 = browser.currentScene.createNode("ROUTE");
ROUTE638.fromField = "value_changed";
ROUTE638.fromNode = "l_hipRotInterp_Run";
ROUTE638.toField = "set_rotation";
ROUTE638.toNode = "hanim_l_hip";
browser.currentScene.children[123] = ROUTE638;

let ROUTE639 = browser.currentScene.createNode("ROUTE");
ROUTE639.fromField = "value_changed";
ROUTE639.fromNode = "lower_bodyRotInterp_Run";
ROUTE639.toField = "set_rotation";
ROUTE639.toNode = "hanim_sacroiliac";
browser.currentScene.children[124] = ROUTE639;

let ROUTE640 = browser.currentScene.createNode("ROUTE");
ROUTE640.fromField = "value_changed";
ROUTE640.fromNode = "r_wristRotInterp_Run";
ROUTE640.toField = "set_rotation";
ROUTE640.toNode = "hanim_r_wrist";
browser.currentScene.children[125] = ROUTE640;

let ROUTE641 = browser.currentScene.createNode("ROUTE");
ROUTE641.fromField = "value_changed";
ROUTE641.fromNode = "r_elbowRotInterp_Run";
ROUTE641.toField = "set_rotation";
ROUTE641.toNode = "hanim_r_elbow";
browser.currentScene.children[126] = ROUTE641;

let ROUTE642 = browser.currentScene.createNode("ROUTE");
ROUTE642.fromField = "value_changed";
ROUTE642.fromNode = "r_shoulderRotInterp_Run";
ROUTE642.toField = "set_rotation";
ROUTE642.toNode = "hanim_r_shoulder";
browser.currentScene.children[127] = ROUTE642;

let ROUTE643 = browser.currentScene.createNode("ROUTE");
ROUTE643.fromField = "value_changed";
ROUTE643.fromNode = "l_wristRotInterp_Run";
ROUTE643.toField = "set_rotation";
ROUTE643.toNode = "hanim_l_wrist";
browser.currentScene.children[128] = ROUTE643;

let ROUTE644 = browser.currentScene.createNode("ROUTE");
ROUTE644.fromField = "value_changed";
ROUTE644.fromNode = "l_elbowRotInterp_Run";
ROUTE644.toField = "set_rotation";
ROUTE644.toNode = "hanim_l_elbow";
browser.currentScene.children[129] = ROUTE644;

let ROUTE645 = browser.currentScene.createNode("ROUTE");
ROUTE645.fromField = "value_changed";
ROUTE645.fromNode = "l_shoulderRotInterp_Run";
ROUTE645.toField = "set_rotation";
ROUTE645.toNode = "hanim_l_shoulder";
browser.currentScene.children[130] = ROUTE645;

let ROUTE646 = browser.currentScene.createNode("ROUTE");
ROUTE646.fromField = "value_changed";
ROUTE646.fromNode = "headRotInterp_Run";
ROUTE646.toField = "set_rotation";
ROUTE646.toNode = "hanim_skullbase";
browser.currentScene.children[131] = ROUTE646;

let ROUTE647 = browser.currentScene.createNode("ROUTE");
ROUTE647.fromField = "value_changed";
ROUTE647.fromNode = "neckRotInterp_Run";
ROUTE647.toField = "set_rotation";
ROUTE647.toNode = "hanim_vc4";
browser.currentScene.children[132] = ROUTE647;

let ROUTE648 = browser.currentScene.createNode("ROUTE");
ROUTE648.fromField = "value_changed";
ROUTE648.fromNode = "upper_bodyRotInterp_Run";
ROUTE648.toField = "set_rotation";
ROUTE648.toNode = "hanim_vl1";
browser.currentScene.children[133] = ROUTE648;

let ROUTE649 = browser.currentScene.createNode("ROUTE");
ROUTE649.fromField = "value_changed";
ROUTE649.fromNode = "whole_bodyRotInterp_Run";
ROUTE649.toField = "set_rotation";
ROUTE649.toNode = "hanim_HumanoidRoot";
browser.currentScene.children[134] = ROUTE649;

let ROUTE650 = browser.currentScene.createNode("ROUTE");
ROUTE650.fromField = "value_changed";
ROUTE650.fromNode = "whole_bodyTranInterp_Run";
ROUTE650.toField = "set_translation";
ROUTE650.toNode = "hanim_HumanoidRoot";
browser.currentScene.children[135] = ROUTE650;

let ROUTE651 = browser.currentScene.createNode("ROUTE");
ROUTE651.fromField = "fraction_changed";
ROUTE651.fromNode = "Jump_Time";
ROUTE651.toField = "set_fraction";
ROUTE651.toNode = "r_ankleRotInterp_Jump";
browser.currentScene.children[136] = ROUTE651;

let ROUTE652 = browser.currentScene.createNode("ROUTE");
ROUTE652.fromField = "fraction_changed";
ROUTE652.fromNode = "Jump_Time";
ROUTE652.toField = "set_fraction";
ROUTE652.toNode = "r_kneeRotInterp_Jump";
browser.currentScene.children[137] = ROUTE652;

let ROUTE653 = browser.currentScene.createNode("ROUTE");
ROUTE653.fromField = "fraction_changed";
ROUTE653.fromNode = "Jump_Time";
ROUTE653.toField = "set_fraction";
ROUTE653.toNode = "r_hipRotInterp_Jump";
browser.currentScene.children[138] = ROUTE653;

let ROUTE654 = browser.currentScene.createNode("ROUTE");
ROUTE654.fromField = "fraction_changed";
ROUTE654.fromNode = "Jump_Time";
ROUTE654.toField = "set_fraction";
ROUTE654.toNode = "l_ankleRotInterp_Jump";
browser.currentScene.children[139] = ROUTE654;

let ROUTE655 = browser.currentScene.createNode("ROUTE");
ROUTE655.fromField = "fraction_changed";
ROUTE655.fromNode = "Jump_Time";
ROUTE655.toField = "set_fraction";
ROUTE655.toNode = "l_kneeRotInterp_Jump";
browser.currentScene.children[140] = ROUTE655;

let ROUTE656 = browser.currentScene.createNode("ROUTE");
ROUTE656.fromField = "fraction_changed";
ROUTE656.fromNode = "Jump_Time";
ROUTE656.toField = "set_fraction";
ROUTE656.toNode = "l_hipRotInterp_Jump";
browser.currentScene.children[141] = ROUTE656;

let ROUTE657 = browser.currentScene.createNode("ROUTE");
ROUTE657.fromField = "fraction_changed";
ROUTE657.fromNode = "Jump_Time";
ROUTE657.toField = "set_fraction";
ROUTE657.toNode = "lower_bodyRotInterp_Jump";
browser.currentScene.children[142] = ROUTE657;

let ROUTE658 = browser.currentScene.createNode("ROUTE");
ROUTE658.fromField = "fraction_changed";
ROUTE658.fromNode = "Jump_Time";
ROUTE658.toField = "set_fraction";
ROUTE658.toNode = "r_wristRotInterp_Jump";
browser.currentScene.children[143] = ROUTE658;

let ROUTE659 = browser.currentScene.createNode("ROUTE");
ROUTE659.fromField = "fraction_changed";
ROUTE659.fromNode = "Jump_Time";
ROUTE659.toField = "set_fraction";
ROUTE659.toNode = "r_elbowRotInterp_Jump";
browser.currentScene.children[144] = ROUTE659;

let ROUTE660 = browser.currentScene.createNode("ROUTE");
ROUTE660.fromField = "fraction_changed";
ROUTE660.fromNode = "Jump_Time";
ROUTE660.toField = "set_fraction";
ROUTE660.toNode = "r_shoulderRotInterp_Jump";
browser.currentScene.children[145] = ROUTE660;

let ROUTE661 = browser.currentScene.createNode("ROUTE");
ROUTE661.fromField = "fraction_changed";
ROUTE661.fromNode = "Jump_Time";
ROUTE661.toField = "set_fraction";
ROUTE661.toNode = "l_wristRotInterp_Jump";
browser.currentScene.children[146] = ROUTE661;

let ROUTE662 = browser.currentScene.createNode("ROUTE");
ROUTE662.fromField = "fraction_changed";
ROUTE662.fromNode = "Jump_Time";
ROUTE662.toField = "set_fraction";
ROUTE662.toNode = "l_elbowRotInterp_Jump";
browser.currentScene.children[147] = ROUTE662;

let ROUTE663 = browser.currentScene.createNode("ROUTE");
ROUTE663.fromField = "fraction_changed";
ROUTE663.fromNode = "Jump_Time";
ROUTE663.toField = "set_fraction";
ROUTE663.toNode = "l_shoulderRotInterp_Jump";
browser.currentScene.children[148] = ROUTE663;

let ROUTE664 = browser.currentScene.createNode("ROUTE");
ROUTE664.fromField = "fraction_changed";
ROUTE664.fromNode = "Jump_Time";
ROUTE664.toField = "set_fraction";
ROUTE664.toNode = "headRotInterp_Jump";
browser.currentScene.children[149] = ROUTE664;

let ROUTE665 = browser.currentScene.createNode("ROUTE");
ROUTE665.fromField = "fraction_changed";
ROUTE665.fromNode = "Jump_Time";
ROUTE665.toField = "set_fraction";
ROUTE665.toNode = "neckRotInterp_Jump";
browser.currentScene.children[150] = ROUTE665;

let ROUTE666 = browser.currentScene.createNode("ROUTE");
ROUTE666.fromField = "fraction_changed";
ROUTE666.fromNode = "Jump_Time";
ROUTE666.toField = "set_fraction";
ROUTE666.toNode = "upper_bodyRotInterp_Jump";
browser.currentScene.children[151] = ROUTE666;

let ROUTE667 = browser.currentScene.createNode("ROUTE");
ROUTE667.fromField = "fraction_changed";
ROUTE667.fromNode = "Jump_Time";
ROUTE667.toField = "set_fraction";
ROUTE667.toNode = "whole_bodyRotInterp_Jump";
browser.currentScene.children[152] = ROUTE667;

let ROUTE668 = browser.currentScene.createNode("ROUTE");
ROUTE668.fromField = "fraction_changed";
ROUTE668.fromNode = "Jump_Time";
ROUTE668.toField = "set_fraction";
ROUTE668.toNode = "whole_bodyTranInterp_Jump";
browser.currentScene.children[153] = ROUTE668;

let ROUTE669 = browser.currentScene.createNode("ROUTE");
ROUTE669.fromField = "value_changed";
ROUTE669.fromNode = "r_ankleRotInterp_Jump";
ROUTE669.toField = "set_rotation";
ROUTE669.toNode = "hanim_r_ankle";
browser.currentScene.children[154] = ROUTE669;

let ROUTE670 = browser.currentScene.createNode("ROUTE");
ROUTE670.fromField = "value_changed";
ROUTE670.fromNode = "r_kneeRotInterp_Jump";
ROUTE670.toField = "set_rotation";
ROUTE670.toNode = "hanim_r_knee";
browser.currentScene.children[155] = ROUTE670;

let ROUTE671 = browser.currentScene.createNode("ROUTE");
ROUTE671.fromField = "value_changed";
ROUTE671.fromNode = "r_hipRotInterp_Jump";
ROUTE671.toField = "set_rotation";
ROUTE671.toNode = "hanim_r_hip";
browser.currentScene.children[156] = ROUTE671;

let ROUTE672 = browser.currentScene.createNode("ROUTE");
ROUTE672.fromField = "value_changed";
ROUTE672.fromNode = "l_ankleRotInterp_Jump";
ROUTE672.toField = "set_rotation";
ROUTE672.toNode = "hanim_l_ankle";
browser.currentScene.children[157] = ROUTE672;

let ROUTE673 = browser.currentScene.createNode("ROUTE");
ROUTE673.fromField = "value_changed";
ROUTE673.fromNode = "l_kneeRotInterp_Jump";
ROUTE673.toField = "set_rotation";
ROUTE673.toNode = "hanim_l_knee";
browser.currentScene.children[158] = ROUTE673;

let ROUTE674 = browser.currentScene.createNode("ROUTE");
ROUTE674.fromField = "value_changed";
ROUTE674.fromNode = "l_hipRotInterp_Jump";
ROUTE674.toField = "set_rotation";
ROUTE674.toNode = "hanim_l_hip";
browser.currentScene.children[159] = ROUTE674;

let ROUTE675 = browser.currentScene.createNode("ROUTE");
ROUTE675.fromField = "value_changed";
ROUTE675.fromNode = "lower_bodyRotInterp_Jump";
ROUTE675.toField = "set_rotation";
ROUTE675.toNode = "hanim_sacroiliac";
browser.currentScene.children[160] = ROUTE675;

let ROUTE676 = browser.currentScene.createNode("ROUTE");
ROUTE676.fromField = "value_changed";
ROUTE676.fromNode = "r_wristRotInterp_Jump";
ROUTE676.toField = "set_rotation";
ROUTE676.toNode = "hanim_r_wrist";
browser.currentScene.children[161] = ROUTE676;

let ROUTE677 = browser.currentScene.createNode("ROUTE");
ROUTE677.fromField = "value_changed";
ROUTE677.fromNode = "r_elbowRotInterp_Jump";
ROUTE677.toField = "set_rotation";
ROUTE677.toNode = "hanim_r_elbow";
browser.currentScene.children[162] = ROUTE677;

let ROUTE678 = browser.currentScene.createNode("ROUTE");
ROUTE678.fromField = "value_changed";
ROUTE678.fromNode = "r_shoulderRotInterp_Jump";
ROUTE678.toField = "set_rotation";
ROUTE678.toNode = "hanim_r_shoulder";
browser.currentScene.children[163] = ROUTE678;

let ROUTE679 = browser.currentScene.createNode("ROUTE");
ROUTE679.fromField = "value_changed";
ROUTE679.fromNode = "l_wristRotInterp_Jump";
ROUTE679.toField = "set_rotation";
ROUTE679.toNode = "hanim_l_wrist";
browser.currentScene.children[164] = ROUTE679;

let ROUTE680 = browser.currentScene.createNode("ROUTE");
ROUTE680.fromField = "value_changed";
ROUTE680.fromNode = "l_elbowRotInterp_Jump";
ROUTE680.toField = "set_rotation";
ROUTE680.toNode = "hanim_l_elbow";
browser.currentScene.children[165] = ROUTE680;

let ROUTE681 = browser.currentScene.createNode("ROUTE");
ROUTE681.fromField = "value_changed";
ROUTE681.fromNode = "l_shoulderRotInterp_Jump";
ROUTE681.toField = "set_rotation";
ROUTE681.toNode = "hanim_l_shoulder";
browser.currentScene.children[166] = ROUTE681;

let ROUTE682 = browser.currentScene.createNode("ROUTE");
ROUTE682.fromField = "value_changed";
ROUTE682.fromNode = "headRotInterp_Jump";
ROUTE682.toField = "set_rotation";
ROUTE682.toNode = "hanim_skullbase";
browser.currentScene.children[167] = ROUTE682;

let ROUTE683 = browser.currentScene.createNode("ROUTE");
ROUTE683.fromField = "value_changed";
ROUTE683.fromNode = "neckRotInterp_Jump";
ROUTE683.toField = "set_rotation";
ROUTE683.toNode = "hanim_vc4";
browser.currentScene.children[168] = ROUTE683;

let ROUTE684 = browser.currentScene.createNode("ROUTE");
ROUTE684.fromField = "value_changed";
ROUTE684.fromNode = "upper_bodyRotInterp_Jump";
ROUTE684.toField = "set_rotation";
ROUTE684.toNode = "hanim_vl1";
browser.currentScene.children[169] = ROUTE684;

let ROUTE685 = browser.currentScene.createNode("ROUTE");
ROUTE685.fromField = "value_changed";
ROUTE685.fromNode = "whole_bodyRotInterp_Jump";
ROUTE685.toField = "set_rotation";
ROUTE685.toNode = "hanim_HumanoidRoot";
browser.currentScene.children[170] = ROUTE685;

let ROUTE686 = browser.currentScene.createNode("ROUTE");
ROUTE686.fromField = "value_changed";
ROUTE686.fromNode = "whole_bodyTranInterp_Jump";
ROUTE686.toField = "set_translation";
ROUTE686.toNode = "hanim_HumanoidRoot";
browser.currentScene.children[171] = ROUTE686;

