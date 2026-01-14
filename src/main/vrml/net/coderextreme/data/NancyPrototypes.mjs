const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "NancyPrototypes.x3d");
scene.addMetaData("creator", "Cindy Ballreich");
scene.addMetaData("translator", "Tom Miller");
scene.addMetaData("translator", "Don Brutzman");
scene.addMetaData("created", "9 July 2000");
scene.addMetaData("modified", "Mon, 15 Sep 2025 05:20:50 GMT");
scene.addMetaData("description", "Canonical HAnim 1.1 specification example, using ProtoDeclaration and ProtoInstance instead of native X3D tags. Prototype definitions are a compatible combination of version 1.0 and 2.0 prototype interfaces.");
scene.addMetaData("warning", "using ProtoDeclare is only for developmental experimentation, use X3D native tags for Humanoids instead");
scene.addMetaData("reference", "NancyNativeTags.x3d");
scene.addMetaData("TODO", "Material color of neck and arms is ignored/incorrect in Xj3D, possily DEF/USE problem.");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d");
await browser .loadComponents (scene);
let ProtoDeclare14 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Displacer" appinfo="A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html" ><ProtoInterface><field accessType="inputOutput" type="SFString" name="name"></field>
<field accessType="inputOutput" type="MFInt32" name="coordIndex"></field>
<field accessType="inputOutput" type="MFVec3f" name="displacements"></field>
</ProtoInterface>
<ProtoBody><WorldInfo info="&quot;null body node&quot;"></WorldInfo>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare14.name = "Displacer";
ProtoDeclare14.appinfo = "A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment.";
ProtoDeclare14.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html";
ProtoInterface16.getField("name")ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface17.getField("coordIndex")ProtoInterface15YYY.field = new X3D.MFNode();

ProtoInterface18.getField("displacements")ProtoInterface15YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface15;

let ProtoBody19 = browser.currentScene.createNode("ProtoBody");
let WorldInfo20 = browser.currentScene.createNode("WorldInfo");
WorldInfo20.info = new X3D.MFString([new X3D.SFString("null body node")]);
ProtoBody19YYY.children = new X3D.MFNode();

ProtoBody19ZZZ.children[0] = WorldInfo20;

protoBody = ProtoBody19;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ProtoDeclare14;

let ProtoDeclare21 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Humanoid" appinfo="The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html" ><ProtoInterface><field accessType="inputOutput" type="SFString" name="name"></field>
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
<field accessType="inputOutput" type="MFNode" name="humanoidBody" appinfo="HAnim 1.1 field container for body geometry Hint: replaced by 2.0 skeleton" documentation="http://HAnim.org/Specifications/HAnim1.1/#humanoid"></field>
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
ProtoDeclare21.name = "Humanoid";
ProtoDeclare21.appinfo = "The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.";
ProtoDeclare21.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html";
ProtoInterface23.getField("name")ProtoInterface22YYY.field = new X3D.MFNode();

ProtoInterface24.getField("version").setValue("1.1");
ProtoInterface22YYY.field = new X3D.MFNode();

ProtoInterface25.getField("humanoidVersion")ProtoInterface22YYY.field = new X3D.MFNode();

ProtoInterface26.getField("info")ProtoInterface22YYY.field = new X3D.MFNode();

ProtoInterface27.getField("translation")ProtoInterface22YYY.field = new X3D.MFNode();

ProtoInterface28.getField("rotation")ProtoInterface22YYY.field = new X3D.MFNode();

ProtoInterface29.getField("center")ProtoInterface22YYY.field = new X3D.MFNode();

ProtoInterface30.getField("scale").setValue("1 1 1");
ProtoInterface22YYY.field = new X3D.MFNode();

ProtoInterface31.getField("scaleOrientation")ProtoInterface22YYY.field = new X3D.MFNode();

ProtoInterface32.getField("bboxCenter")ProtoInterface22YYY.field = new X3D.MFNode();

ProtoInterface33.getField("bboxSize").setValue("-1 -1 -1");
ProtoInterface22YYY.field = new X3D.MFNode();

ProtoInterface34.getField("humanoidBody")ProtoInterface22YYY.field = new X3D.MFNode();

ProtoInterface35.getField("skeleton")ProtoInterface22YYY.field = new X3D.MFNode();

ProtoInterface36.getField("joints")ProtoInterface22YYY.field = new X3D.MFNode();

ProtoInterface37.getField("segments")ProtoInterface22YYY.field = new X3D.MFNode();

ProtoInterface38.getField("sites")ProtoInterface22YYY.field = new X3D.MFNode();

ProtoInterface39.getField("viewpoints")ProtoInterface22YYY.field = new X3D.MFNode();

ProtoInterface40.getField("skinCoord")ProtoInterface22YYY.field = new X3D.MFNode();

ProtoInterface41.getField("skinNormal")ProtoInterface22YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface22;

let ProtoBody42 = browser.currentScene.createNode("ProtoBody");
let Transform43 = browser.currentScene.createNode("Transform");
Transform43.DEF = "HumanoidTransform";
let Group44 = browser.currentScene.createNode("Group");
Group44.DEF = "HumanoidGroup1";
let IS45 = browser.currentScene.createNode("IS");
let connect46 = browser.currentScene.createNode("connect");
connect46.nodeField = "children";
connect46.protoField = "humanoidBody";
IS45YYY.connect = new X3D.MFNode();

IS45ZZZ.connect[0] = connect46;

iS = IS45;

Transform43YYY.children = new X3D.MFNode();

Transform43ZZZ.children[0] = Group44;

let Group47 = browser.currentScene.createNode("Group");
Group47.DEF = "HumanoidGroup2";
let IS48 = browser.currentScene.createNode("IS");
let connect49 = browser.currentScene.createNode("connect");
connect49.nodeField = "children";
connect49.protoField = "skeleton";
IS48YYY.connect = new X3D.MFNode();

IS48ZZZ.connect[0] = connect49;

iS = IS48;

Transform43ZZZ.children[1] = Group47;

let Group50 = browser.currentScene.createNode("Group");
Group50.DEF = "HumanoidGroup3";
let IS51 = browser.currentScene.createNode("IS");
let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "children";
connect52.protoField = "viewpoints";
IS51YYY.connect = new X3D.MFNode();

IS51ZZZ.connect[0] = connect52;

iS = IS51;

Transform43ZZZ.children[2] = Group50;

let IS53 = browser.currentScene.createNode("IS");
let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "translation";
connect54.protoField = "translation";
IS53YYY.connect = new X3D.MFNode();

IS53ZZZ.connect[0] = connect54;

let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "rotation";
connect55.protoField = "rotation";
IS53ZZZ.connect[1] = connect55;

let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "scale";
connect56.protoField = "scale";
IS53ZZZ.connect[2] = connect56;

let connect57 = browser.currentScene.createNode("connect");
connect57.nodeField = "scaleOrientation";
connect57.protoField = "scaleOrientation";
IS53ZZZ.connect[3] = connect57;

let connect58 = browser.currentScene.createNode("connect");
connect58.nodeField = "center";
connect58.protoField = "center";
IS53ZZZ.connect[4] = connect58;

let connect59 = browser.currentScene.createNode("connect");
connect59.nodeField = "bboxSize";
connect59.protoField = "bboxSize";
IS53ZZZ.connect[5] = connect59;

let connect60 = browser.currentScene.createNode("connect");
connect60.nodeField = "bboxCenter";
connect60.protoField = "bboxCenter";
IS53ZZZ.connect[6] = connect60;

iS = IS53;

ProtoBody42YYY.children = new X3D.MFNode();

ProtoBody42ZZZ.children[0] = Transform43;

protoBody = ProtoBody42;

browser.currentScene.children[1] = ProtoDeclare21;

let ProtoDeclare61 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare61.name = "Joint";
ProtoDeclare61.appinfo = "The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.";
ProtoDeclare61.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Joint.html";
ProtoInterface63.getField("name")ProtoInterface62YYY.field = new X3D.MFNode();

ProtoInterface64.getField("ulimit")ProtoInterface62YYY.field = new X3D.MFNode();

ProtoInterface65.getField("llimit")ProtoInterface62YYY.field = new X3D.MFNode();

ProtoInterface66.getField("limitOrientation")ProtoInterface62YYY.field = new X3D.MFNode();

ProtoInterface67.getField("skinCoordIndex")ProtoInterface62YYY.field = new X3D.MFNode();

ProtoInterface68.getField("skinCoordWeight")ProtoInterface62YYY.field = new X3D.MFNode();

ProtoInterface69.getField("stiffness").setValue("0 0 0");
ProtoInterface62YYY.field = new X3D.MFNode();

ProtoInterface70.getField("translation")ProtoInterface62YYY.field = new X3D.MFNode();

ProtoInterface71.getField("rotation")ProtoInterface62YYY.field = new X3D.MFNode();

ProtoInterface72.getField("scale").setValue("1 1 1");
ProtoInterface62YYY.field = new X3D.MFNode();

ProtoInterface73.getField("scaleOrientation")ProtoInterface62YYY.field = new X3D.MFNode();

ProtoInterface74.getField("center")ProtoInterface62YYY.field = new X3D.MFNode();

ProtoInterface75.getField("bboxCenter")ProtoInterface62YYY.field = new X3D.MFNode();

ProtoInterface76.getField("bboxSize").setValue("-1 -1 -1");
ProtoInterface62YYY.field = new X3D.MFNode();

ProtoInterface77.getField("children")ProtoInterface62YYY.field = new X3D.MFNode();

ProtoInterface78.getField("addChildren")ProtoInterface62YYY.field = new X3D.MFNode();

ProtoInterface79.getField("removeChildren")ProtoInterface62YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface62;

let ProtoBody80 = browser.currentScene.createNode("ProtoBody");
let Transform81 = browser.currentScene.createNode("Transform");
Transform81.DEF = "JointTransform";
let IS82 = browser.currentScene.createNode("IS");
let connect83 = browser.currentScene.createNode("connect");
connect83.nodeField = "translation";
connect83.protoField = "translation";
IS82YYY.connect = new X3D.MFNode();

IS82ZZZ.connect[0] = connect83;

let connect84 = browser.currentScene.createNode("connect");
connect84.nodeField = "rotation";
connect84.protoField = "rotation";
IS82ZZZ.connect[1] = connect84;

let connect85 = browser.currentScene.createNode("connect");
connect85.nodeField = "scale";
connect85.protoField = "scale";
IS82ZZZ.connect[2] = connect85;

let connect86 = browser.currentScene.createNode("connect");
connect86.nodeField = "scaleOrientation";
connect86.protoField = "scaleOrientation";
IS82ZZZ.connect[3] = connect86;

let connect87 = browser.currentScene.createNode("connect");
connect87.nodeField = "center";
connect87.protoField = "center";
IS82ZZZ.connect[4] = connect87;

let connect88 = browser.currentScene.createNode("connect");
connect88.nodeField = "bboxSize";
connect88.protoField = "bboxSize";
IS82ZZZ.connect[5] = connect88;

let connect89 = browser.currentScene.createNode("connect");
connect89.nodeField = "bboxCenter";
connect89.protoField = "bboxCenter";
IS82ZZZ.connect[6] = connect89;

let connect90 = browser.currentScene.createNode("connect");
connect90.nodeField = "addChildren";
connect90.protoField = "addChildren";
IS82ZZZ.connect[7] = connect90;

let connect91 = browser.currentScene.createNode("connect");
connect91.nodeField = "removeChildren";
connect91.protoField = "removeChildren";
IS82ZZZ.connect[8] = connect91;

let connect92 = browser.currentScene.createNode("connect");
connect92.nodeField = "children";
connect92.protoField = "children";
IS82ZZZ.connect[9] = connect92;

iS = IS82;

ProtoBody80YYY.children = new X3D.MFNode();

ProtoBody80ZZZ.children[0] = Transform81;

protoBody = ProtoBody80;

browser.currentScene.children[2] = ProtoDeclare61;

let ProtoDeclare93 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Segment" appinfo="The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node." documentation="http://HAnim.org/Specifications/HAnim2001/part1/Segment.html" ><ProtoInterface><field accessType="inputOutput" type="SFString" name="name"></field>
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
ProtoDeclare93.name = "Segment";
ProtoDeclare93.appinfo = "The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node.";
ProtoDeclare93.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Segment.html";
ProtoInterface95.getField("name")ProtoInterface94YYY.field = new X3D.MFNode();

ProtoInterface96.getField("mass")ProtoInterface94YYY.field = new X3D.MFNode();

ProtoInterface97.getField("centerOfMass")ProtoInterface94YYY.field = new X3D.MFNode();

ProtoInterface98.getField("momentsOfInertia").setValue("0 0 0 0 0 0 0 0 0");
ProtoInterface94YYY.field = new X3D.MFNode();

ProtoInterface99.getField("bboxCenter")ProtoInterface94YYY.field = new X3D.MFNode();

ProtoInterface100.getField("bboxSize").setValue("-1 -1 -1");
ProtoInterface94YYY.field = new X3D.MFNode();

ProtoInterface101.getField("children")ProtoInterface94YYY.field = new X3D.MFNode();

ProtoInterface102.getField("addChildren")ProtoInterface94YYY.field = new X3D.MFNode();

ProtoInterface103.getField("removeChildren")ProtoInterface94YYY.field = new X3D.MFNode();

ProtoInterface104.getField("coord")ProtoInterface94YYY.field = new X3D.MFNode();

ProtoInterface105.getField("displacers")ProtoInterface94YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface94;

let ProtoBody106 = browser.currentScene.createNode("ProtoBody");
let Group107 = browser.currentScene.createNode("Group");
Group107.DEF = "SegmentGroup";
let IS108 = browser.currentScene.createNode("IS");
let connect109 = browser.currentScene.createNode("connect");
connect109.nodeField = "bboxSize";
connect109.protoField = "bboxSize";
IS108YYY.connect = new X3D.MFNode();

IS108ZZZ.connect[0] = connect109;

let connect110 = browser.currentScene.createNode("connect");
connect110.nodeField = "bboxCenter";
connect110.protoField = "bboxCenter";
IS108ZZZ.connect[1] = connect110;

let connect111 = browser.currentScene.createNode("connect");
connect111.nodeField = "addChildren";
connect111.protoField = "addChildren";
IS108ZZZ.connect[2] = connect111;

let connect112 = browser.currentScene.createNode("connect");
connect112.nodeField = "removeChildren";
connect112.protoField = "removeChildren";
IS108ZZZ.connect[3] = connect112;

let connect113 = browser.currentScene.createNode("connect");
connect113.nodeField = "children";
connect113.protoField = "children";
IS108ZZZ.connect[4] = connect113;

iS = IS108;

ProtoBody106YYY.children = new X3D.MFNode();

ProtoBody106ZZZ.children[0] = Group107;

protoBody = ProtoBody106;

browser.currentScene.children[3] = ProtoDeclare93;

let ProtoDeclare114 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare114.name = "Site";
ProtoDeclare114.appinfo = "The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds).";
ProtoDeclare114.documentation = "http://HAnim.org/Specifications/HAnim2001/part1/Site.html";
ProtoInterface116.getField("name")ProtoInterface115YYY.field = new X3D.MFNode();

ProtoInterface117.getField("translation")ProtoInterface115YYY.field = new X3D.MFNode();

ProtoInterface118.getField("rotation")ProtoInterface115YYY.field = new X3D.MFNode();

ProtoInterface119.getField("scale").setValue("1 1 1");
ProtoInterface115YYY.field = new X3D.MFNode();

ProtoInterface120.getField("scaleOrientation")ProtoInterface115YYY.field = new X3D.MFNode();

ProtoInterface121.getField("center")ProtoInterface115YYY.field = new X3D.MFNode();

ProtoInterface122.getField("bboxCenter")ProtoInterface115YYY.field = new X3D.MFNode();

ProtoInterface123.getField("bboxSize").setValue("-1 -1 -1");
ProtoInterface115YYY.field = new X3D.MFNode();

ProtoInterface124.getField("children")ProtoInterface115YYY.field = new X3D.MFNode();

ProtoInterface125.getField("addChildren")ProtoInterface115YYY.field = new X3D.MFNode();

ProtoInterface126.getField("removeChildren")ProtoInterface115YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface115;

let ProtoBody127 = browser.currentScene.createNode("ProtoBody");
let Transform128 = browser.currentScene.createNode("Transform");
Transform128.DEF = "SiteTransform";
let IS129 = browser.currentScene.createNode("IS");
let connect130 = browser.currentScene.createNode("connect");
connect130.nodeField = "translation";
connect130.protoField = "translation";
IS129YYY.connect = new X3D.MFNode();

IS129ZZZ.connect[0] = connect130;

let connect131 = browser.currentScene.createNode("connect");
connect131.nodeField = "rotation";
connect131.protoField = "rotation";
IS129ZZZ.connect[1] = connect131;

let connect132 = browser.currentScene.createNode("connect");
connect132.nodeField = "scale";
connect132.protoField = "scale";
IS129ZZZ.connect[2] = connect132;

let connect133 = browser.currentScene.createNode("connect");
connect133.nodeField = "scaleOrientation";
connect133.protoField = "scaleOrientation";
IS129ZZZ.connect[3] = connect133;

let connect134 = browser.currentScene.createNode("connect");
connect134.nodeField = "center";
connect134.protoField = "center";
IS129ZZZ.connect[4] = connect134;

let connect135 = browser.currentScene.createNode("connect");
connect135.nodeField = "bboxSize";
connect135.protoField = "bboxSize";
IS129ZZZ.connect[5] = connect135;

let connect136 = browser.currentScene.createNode("connect");
connect136.nodeField = "bboxCenter";
connect136.protoField = "bboxCenter";
IS129ZZZ.connect[6] = connect136;

let connect137 = browser.currentScene.createNode("connect");
connect137.nodeField = "addChildren";
connect137.protoField = "addChildren";
IS129ZZZ.connect[7] = connect137;

let connect138 = browser.currentScene.createNode("connect");
connect138.nodeField = "removeChildren";
connect138.protoField = "removeChildren";
IS129ZZZ.connect[8] = connect138;

let connect139 = browser.currentScene.createNode("connect");
connect139.nodeField = "children";
connect139.protoField = "children";
IS129ZZZ.connect[9] = connect139;

iS = IS129;

ProtoBody127YYY.children = new X3D.MFNode();

ProtoBody127ZZZ.children[0] = Transform128;

protoBody = ProtoBody127;

browser.currentScene.children[4] = ProtoDeclare114;

let ProtoInstance140 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance140.DEF = "Humanoid";
ProtoInstance140.name = "Humanoid";
let fieldValue141 = browser.currentScene.createNode("fieldValue");
fieldValue141.name = "name";
fieldValue141.value = "nancy";
ProtoInstance140YYY.fieldValue = new X3D.MFNode();

ProtoInstance140ZZZ.fieldValue[0] = fieldValue141;

let fieldValue142 = browser.currentScene.createNode("fieldValue");
fieldValue142.name = "info";
fieldValue142.value = "\"humanoidVersion=Nancy V1.2b\" \"authorName=Cindy Ballreich\" \"authorEmail=cindy@ballreich.net\" \"copyright=1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved.\" \"creationDate=Tue Dec 30 08:30:08 PST 1997\" \"usageRestrictions=Noncommercial usage is ok if 3Name3D name and logo www.ballreich.net/vrml/HAnim/small_logo.gif is present and proper credit is given.\"";
ProtoInstance140ZZZ.fieldValue[1] = fieldValue142;

let fieldValue143 = browser.currentScene.createNode("fieldValue");
fieldValue143.name = "humanoidBody";
let ProtoInstance144 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance144.DEF = "hanim_humanoid_root";
ProtoInstance144.name = "Joint";
let fieldValue145 = browser.currentScene.createNode("fieldValue");
fieldValue145.name = "name";
fieldValue145.value = "humanoid_root";
ProtoInstance144YYY.fieldValue = new X3D.MFNode();

ProtoInstance144ZZZ.fieldValue[0] = fieldValue145;

let fieldValue146 = browser.currentScene.createNode("fieldValue");
fieldValue146.name = "center";
fieldValue146.value = "-0.00405 0.855 -0.000113";
ProtoInstance144ZZZ.fieldValue[1] = fieldValue146;

let fieldValue147 = browser.currentScene.createNode("fieldValue");
fieldValue147.name = "children";
let ProtoInstance148 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance148.DEF = "hanim_sacroiliac";
ProtoInstance148.name = "Joint";
let fieldValue149 = browser.currentScene.createNode("fieldValue");
fieldValue149.name = "name";
fieldValue149.value = "sacroiliac";
ProtoInstance148YYY.fieldValue = new X3D.MFNode();

ProtoInstance148ZZZ.fieldValue[0] = fieldValue149;

let fieldValue150 = browser.currentScene.createNode("fieldValue");
fieldValue150.name = "center";
fieldValue150.value = "0 1.01 -0.0204";
ProtoInstance148ZZZ.fieldValue[1] = fieldValue150;

let fieldValue151 = browser.currentScene.createNode("fieldValue");
fieldValue151.name = "children";
let ProtoInstance152 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance152.DEF = "hanim_pelvis";
ProtoInstance152.name = "Segment";
let fieldValue153 = browser.currentScene.createNode("fieldValue");
fieldValue153.name = "name";
fieldValue153.value = "pelvis";
ProtoInstance152YYY.fieldValue = new X3D.MFNode();

ProtoInstance152ZZZ.fieldValue[0] = fieldValue153;

let fieldValue154 = browser.currentScene.createNode("fieldValue");
fieldValue154.name = "children";
let Shape155 = browser.currentScene.createNode("Shape");
Shape155.DEF = "_1";
let Appearance156 = browser.currentScene.createNode("Appearance");
let Material157 = browser.currentScene.createNode("Material");
Material157.DEF = "Pants_Color";
Material157.ambientIntensity = 0.25;
Material157.diffuseColor = new X3D.SFColor([0.054,0.233,0.39]);
material = Material157;

appearance = Appearance156;

let IndexedFaceSet158 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet158.creaseAngle = 1.14;
IndexedFaceSet158.coordIndex = new X3D.MFInt32([0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1]);
let Coordinate159 = browser.currentScene.createNode("Coordinate");
Coordinate159.point = new X3D.MFVec3f([0,1.06,0.0218,0.0561,1.07,0.00726,0.0851,1.07,-0.0115,0.104,1.07,-0.0497,0.0851,1.07,-0.0851,0.032,1.06,-0.0985,0.0873,1.04,0.0078,0.033,1.04,0.0395,0.123,1.05,-0.0405,0.0609,1.02,-0.106,0.0894,0.996,-0.106,0.143,1,-0.0309,0.117,1,0.0164,0.0314,0.999,0.0502,0.0314,0.96,-0.13,0.156,0.966,-0.0405,0.156,0.968,-0.00724,0.0341,0.954,0.0513,0.115,0.96,-0.0916,0.121,0.926,0.0352,0.0357,0.92,0.0497,0.0314,0.91,-0.146,0.0991,0.91,-0.131,0.169,0.883,-0.0448,0.169,0.885,-0.00939,0.123,0.873,0.0384,0.0926,0.872,0.047,0.0325,0.873,0.0287,0.0293,0.866,-0.142,0.102,0.869,-0.131,0.129,0.868,-0.103,0.0314,0.84,-0.125,0.101,0.844,-0.122,0.133,0.846,-0.0878,0.0653,0.835,0.0132,0.0615,0.824,-0.111,0.0985,0.823,-0.101,0.132,0.826,-0.0448,0.0609,0.821,-0.0158,0.0599,0.812,-0.0545,0,1.08,-0.0266,-0.0561,1.07,0.00726,-0.0851,1.07,-0.0115,-0.104,1.07,-0.0497,-0.0851,1.07,-0.0851,-0.032,1.06,-0.0985,-0.0873,1.04,0.0078,-0.033,1.04,0.0395,-0.123,1.05,-0.0405,-0.0609,1.02,-0.106,0,1.02,-0.108,-0.0894,0.996,-0.106,-0.143,1,-0.0309,-0.144,1,-0.011,-0.117,1,0.0164,-0.0314,0.999,0.0502,0,0.961,-0.123,-0.0314,0.96,-0.13,-0.156,0.966,-0.0405,-0.156,0.968,-0.00724,-0.0341,0.954,0.0513,-0.115,0.96,-0.0916,-0.121,0.926,0.0352,-0.0357,0.92,0.0497,0,0.91,-0.127,-0.0314,0.91,-0.146,-0.0991,0.91,-0.131,-0.167,0.911,-0.0448,-0.167,0.912,-0.00671,0,0.883,-0.129,-0.123,0.873,0.0384,-0.0926,0.872,0.047,-0.0325,0.873,0.0287,-0.0293,0.866,-0.142,-0.102,0.869,-0.131,-0.129,0.868,-0.103,-0.166,0.863,-0.0148,0,0.863,-0.00456,-0.166,0.862,-0.0459,0,0.858,-0.1,-0.0314,0.84,-0.125,-0.101,0.844,-0.122,-0.0653,0.835,0.0132,0,0.839,-0.0217,0,0.835,-0.0867,-0.0615,0.824,-0.111,-0.0985,0.823,-0.101,-0.132,0.826,-0.0448,-0.0609,0.821,-0.0158,0,0.831,-0.0626,-0.0599,0.812,-0.0545]);
coord = Coordinate159;

geometry = IndexedFaceSet158;

fieldValue154YYY.children = new X3D.MFNode();

fieldValue154ZZZ.children[0] = Shape155;

ProtoInstance152ZZZ.fieldValue[1] = fieldValue154;

fieldValue151YYY.children = new X3D.MFNode();

fieldValue151ZZZ.children[0] = ProtoInstance152;

let ProtoInstance160 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance160.DEF = "hanim_l_hip";
ProtoInstance160.name = "Joint";
let fieldValue161 = browser.currentScene.createNode("fieldValue");
fieldValue161.name = "name";
fieldValue161.value = "l_hip";
ProtoInstance160YYY.fieldValue = new X3D.MFNode();

ProtoInstance160ZZZ.fieldValue[0] = fieldValue161;

let fieldValue162 = browser.currentScene.createNode("fieldValue");
fieldValue162.name = "center";
fieldValue162.value = "0.122 0.888271 -0.0693267";
ProtoInstance160ZZZ.fieldValue[1] = fieldValue162;

let fieldValue163 = browser.currentScene.createNode("fieldValue");
fieldValue163.name = "children";
let ProtoInstance164 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance164.DEF = "hanim_l_thigh";
ProtoInstance164.name = "Segment";
let fieldValue165 = browser.currentScene.createNode("fieldValue");
fieldValue165.name = "name";
fieldValue165.value = "l_thigh";
ProtoInstance164YYY.fieldValue = new X3D.MFNode();

ProtoInstance164ZZZ.fieldValue[0] = fieldValue165;

let fieldValue166 = browser.currentScene.createNode("fieldValue");
fieldValue166.name = "children";
let Shape167 = browser.currentScene.createNode("Shape");
Shape167.DEF = "_2";
let Appearance168 = browser.currentScene.createNode("Appearance");
let Material169 = browser.currentScene.createNode("Material");
Material169.USE = "Pants_Color";
material = Material169;

appearance = Appearance168;

let IndexedFaceSet170 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet170.creaseAngle = 1.32;
IndexedFaceSet170.coordIndex = new X3D.MFInt32([0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1]);
let Coordinate171 = browser.currentScene.createNode("Coordinate");
Coordinate171.point = new X3D.MFVec3f([0.0969,0.804,-0.0486,0.101,0.876,0.0336,0.17,0.894,-0.00778,0.17,0.891,-0.076,0.124,0.858,-0.129,0.076,0.843,-0.143,0.025,0.819,-0.0889,0.0507,0.847,0.0196,0.00349,0.826,-0.0287,0.0991,0.808,0.0406,0.161,0.814,-0.00187,0.165,0.808,-0.0755,0.122,0.788,-0.126,0.00993,0.762,-0.0937,0.00993,0.762,-0.0309,0.0491,0.777,0.0185,0.0755,0.766,-0.139,0.13,0.597,-0.00618,0.132,0.6,-0.0593,0.108,0.603,-0.105,0.0722,0.601,-0.118,0.0314,0.59,-0.0953,0.0239,0.566,-0.0427,0.047,0.566,0.0051,0.0878,0.581,0.0217,0.114,0.499,-0.0132,0.116,0.488,-0.061,0.103,0.567,-0.0991,0.0362,0.557,-0.0926,0.025,0.486,-0.047,0.0507,0.497,-0.00188,0.0862,0.513,0.018,0.0733,0.579,-0.108]);
coord = Coordinate171;

geometry = IndexedFaceSet170;

fieldValue166YYY.children = new X3D.MFNode();

fieldValue166ZZZ.children[0] = Shape167;

ProtoInstance164ZZZ.fieldValue[1] = fieldValue166;

fieldValue163YYY.children = new X3D.MFNode();

fieldValue163ZZZ.children[0] = ProtoInstance164;

let ProtoInstance172 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance172.DEF = "hanim_l_knee";
ProtoInstance172.name = "Joint";
let fieldValue173 = browser.currentScene.createNode("fieldValue");
fieldValue173.name = "name";
fieldValue173.value = "l_knee";
ProtoInstance172YYY.fieldValue = new X3D.MFNode();

ProtoInstance172ZZZ.fieldValue[0] = fieldValue173;

let fieldValue174 = browser.currentScene.createNode("fieldValue");
fieldValue174.name = "center";
fieldValue174.value = "0.0738 0.517 -0.0284";
ProtoInstance172ZZZ.fieldValue[1] = fieldValue174;

let fieldValue175 = browser.currentScene.createNode("fieldValue");
fieldValue175.name = "children";
let ProtoInstance176 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance176.DEF = "hanim_l_calf";
ProtoInstance176.name = "Segment";
let fieldValue177 = browser.currentScene.createNode("fieldValue");
fieldValue177.name = "name";
fieldValue177.value = "l_calf";
ProtoInstance176YYY.fieldValue = new X3D.MFNode();

ProtoInstance176ZZZ.fieldValue[0] = fieldValue177;

let fieldValue178 = browser.currentScene.createNode("fieldValue");
fieldValue178.name = "children";
let Shape179 = browser.currentScene.createNode("Shape");
Shape179.DEF = "_3";
let Appearance180 = browser.currentScene.createNode("Appearance");
let Material181 = browser.currentScene.createNode("Material");
Material181.USE = "Pants_Color";
material = Material181;

appearance = Appearance180;

let IndexedFaceSet182 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet182.creaseAngle = 1.57;
IndexedFaceSet182.coordIndex = new X3D.MFInt32([2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1]);
let Coordinate183 = browser.currentScene.createNode("Coordinate");
Coordinate183.point = new X3D.MFVec3f([0.0883,0.532,-0.00349,0.0609,0.533,-0.00833,0.0814,0.55,-0.0395,0.0529,0.536,-0.0368,0.0577,0.544,-0.0577,0.0722,0.546,-0.0717,0.0975,0.54,-0.0647,0.105,0.539,-0.0438,0.104,0.539,-0.0223,0.0862,0.506,0.0158,0.101,0.51,-0.0798,0.0706,0.51,-0.101,0.0406,0.513,-0.0744,0.0368,0.51,-0.0357,0.0556,0.506,-0.000272,0.117,0.508,-0.0169,0.0878,0.361,-0.0126,0.123,0.363,-0.04,0.123,0.363,-0.0663,0.107,0.367,-0.107,0.0588,0.365,-0.122,0.0228,0.358,-0.0926,0.0239,0.358,-0.0475,0.0497,0.358,-0.0234,0.118,0.311,-0.0411,0.118,0.309,-0.0685,0.105,0.31,-0.108,0.0572,0.308,-0.123,0.0201,0.309,-0.0937,0.0191,0.311,-0.0508,0.0475,0.307,-0.0282,0.0883,0.309,-0.018,0.0959,0.124,-0.04,0.0905,0.12,-0.0647,0.0738,0.117,-0.0814,0.0373,0.121,-0.0636,0.0416,0.124,-0.0416,0.0744,0.13,-0.0212,0.0561,0.13,-0.0245,0.0529,0.121,-0.0873,0.0948,0.0897,-0.0368,0.0916,0.0779,-0.0604,0.0717,0.0854,-0.0765,0.0406,0.0918,-0.0626,0.0384,0.0881,-0.0363,0.054,0.0972,-0.0175,0.0765,0.11,-0.0169,0.0486,0.0999,-0.0835]);
coord = Coordinate183;

geometry = IndexedFaceSet182;

fieldValue178YYY.children = new X3D.MFNode();

fieldValue178ZZZ.children[0] = Shape179;

ProtoInstance176ZZZ.fieldValue[1] = fieldValue178;

fieldValue175YYY.children = new X3D.MFNode();

fieldValue175ZZZ.children[0] = ProtoInstance176;

let ProtoInstance184 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance184.DEF = "hanim_l_ankle";
ProtoInstance184.name = "Joint";
let fieldValue185 = browser.currentScene.createNode("fieldValue");
fieldValue185.name = "name";
fieldValue185.value = "l_ankle";
ProtoInstance184YYY.fieldValue = new X3D.MFNode();

ProtoInstance184ZZZ.fieldValue[0] = fieldValue185;

let fieldValue186 = browser.currentScene.createNode("fieldValue");
fieldValue186.name = "center";
fieldValue186.value = "0.0645 0.0719 -0.048";
ProtoInstance184ZZZ.fieldValue[1] = fieldValue186;

let fieldValue187 = browser.currentScene.createNode("fieldValue");
fieldValue187.name = "children";
let ProtoInstance188 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance188.DEF = "hanim_l_hindfoot";
ProtoInstance188.name = "Segment";
let fieldValue189 = browser.currentScene.createNode("fieldValue");
fieldValue189.name = "name";
fieldValue189.value = "l_hindfoot";
ProtoInstance188YYY.fieldValue = new X3D.MFNode();

ProtoInstance188ZZZ.fieldValue[0] = fieldValue189;

let fieldValue190 = browser.currentScene.createNode("fieldValue");
fieldValue190.name = "children";
let Shape191 = browser.currentScene.createNode("Shape");
Shape191.DEF = "_4";
let Appearance192 = browser.currentScene.createNode("Appearance");
let Material193 = browser.currentScene.createNode("Material");
Material193.DEF = "Shoe_Color";
Material193.ambientIntensity = 0.25;
material = Material193;

appearance = Appearance192;

let IndexedFaceSet194 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet194.creaseAngle = 1.57;
IndexedFaceSet194.coordIndex = new X3D.MFInt32([2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1]);
let Coordinate195 = browser.currentScene.createNode("Coordinate");
Coordinate195.point = new X3D.MFVec3f([0.0529,0,-0.0923,0.0863,0,-0.0862,0.0727,0,-0.0994,0.0863,0.0219,-0.0862,0.0727,0.0219,-0.0994,0.1,0,-0.0594,0.1,0.0219,-0.0594,0.113,0,0.0645,0.113,0.0219,0.0645,0.112,0,0.117,0.112,0.0156,0.117,0.0701,0,0.146,0.0701,0.0156,0.146,0.0468,0,0.153,0.0468,0.0156,0.153,0.0215,0,0.146,0.0215,0.0156,0.146,0.0165,0,0.125,0.0165,0.0156,0.125,0.0211,0,0.0377,0.0211,0.0219,0.0377,0.0393,0,-0.0129,0.0393,0.0219,-0.0129,0.0433,0,-0.0534,0.0433,0.0219,-0.0534,0.0529,0.0219,-0.0923,0.0305,0.0253,0.0938,0.0505,0.0253,0.099,0.0854,0.0253,0.0834,0.102,0.0253,0.0707,0.0568,0.0573,-0.0918,0.0492,0.0573,-0.0497,0.0435,0.0573,-0.0225,0.0442,0.0573,0.0235,0.0623,0.0573,0.0366,0.0911,0.0573,0.0159,0.0962,0.0573,-0.0121,0.0911,0.0573,-0.0482,0.0758,0.0573,-0.0899,0.0676,0.0573,-0.0962,0.0578,0.0953,-0.0896,0.0489,0.0953,-0.0757,0.0447,0.0953,-0.0432,0.0451,0.0953,-0.0128,0.0624,0.0953,-0.00466,0.0857,0.0953,-0.0134,0.0953,0.0953,-0.038,0.0843,0.0953,-0.0803,0.0761,0.0953,-0.0889,0.0682,0.0953,-0.0929,0.0675,0.13,-0.0608]);
coord = Coordinate195;

geometry = IndexedFaceSet194;

fieldValue190YYY.children = new X3D.MFNode();

fieldValue190ZZZ.children[0] = Shape191;

ProtoInstance188ZZZ.fieldValue[1] = fieldValue190;

fieldValue187YYY.children = new X3D.MFNode();

fieldValue187ZZZ.children[0] = ProtoInstance188;

ProtoInstance184ZZZ.fieldValue[2] = fieldValue187;

fieldValue175ZZZ.children[1] = ProtoInstance184;

ProtoInstance172ZZZ.fieldValue[2] = fieldValue175;

fieldValue163ZZZ.children[1] = ProtoInstance172;

ProtoInstance160ZZZ.fieldValue[2] = fieldValue163;

fieldValue151ZZZ.children[1] = ProtoInstance160;

let ProtoInstance196 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance196.DEF = "hanim_r_hip";
ProtoInstance196.name = "Joint";
let fieldValue197 = browser.currentScene.createNode("fieldValue");
fieldValue197.name = "name";
fieldValue197.value = "r_hip";
ProtoInstance196YYY.fieldValue = new X3D.MFNode();

ProtoInstance196ZZZ.fieldValue[0] = fieldValue197;

let fieldValue198 = browser.currentScene.createNode("fieldValue");
fieldValue198.name = "center";
fieldValue198.value = "-0.11 0.892362 -0.0732533";
ProtoInstance196ZZZ.fieldValue[1] = fieldValue198;

let fieldValue199 = browser.currentScene.createNode("fieldValue");
fieldValue199.name = "children";
let ProtoInstance200 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance200.DEF = "hanim_r_thigh";
ProtoInstance200.name = "Segment";
let fieldValue201 = browser.currentScene.createNode("fieldValue");
fieldValue201.name = "name";
fieldValue201.value = "r_thigh";
ProtoInstance200YYY.fieldValue = new X3D.MFNode();

ProtoInstance200ZZZ.fieldValue[0] = fieldValue201;

let fieldValue202 = browser.currentScene.createNode("fieldValue");
fieldValue202.name = "children";
let Shape203 = browser.currentScene.createNode("Shape");
Shape203.DEF = "_5";
let Appearance204 = browser.currentScene.createNode("Appearance");
let Material205 = browser.currentScene.createNode("Material");
Material205.USE = "Pants_Color";
material = Material205;

appearance = Appearance204;

let IndexedFaceSet206 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet206.creaseAngle = 1.61;
IndexedFaceSet206.coordIndex = new X3D.MFInt32([5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1]);
let Coordinate207 = browser.currentScene.createNode("Coordinate");
Coordinate207.point = new X3D.MFVec3f([-0.0969,0.804,-0.0486,-0.101,0.876,0.0336,-0.17,0.894,-0.00778,-0.17,0.891,-0.076,-0.124,0.858,-0.129,-0.076,0.843,-0.143,-0.025,0.819,-0.0889,-0.0507,0.847,0.0196,-0.00349,0.826,-0.0287,-0.0991,0.808,0.0406,-0.161,0.814,-0.00187,-0.165,0.808,-0.0755,-0.122,0.788,-0.126,-0.00993,0.762,-0.0937,-0.00993,0.762,-0.0309,-0.0491,0.777,0.0185,-0.0755,0.766,-0.139,-0.13,0.597,-0.00618,-0.132,0.6,-0.0593,-0.108,0.603,-0.105,-0.0722,0.601,-0.118,-0.0314,0.59,-0.0953,-0.0239,0.566,-0.0427,-0.047,0.566,0.0051,-0.0878,0.581,0.0217,-0.114,0.499,-0.0132,-0.116,0.488,-0.061,-0.103,0.567,-0.0991,-0.0362,0.557,-0.0926,-0.025,0.486,-0.047,-0.0507,0.497,-0.00188,-0.0862,0.513,0.018]);
coord = Coordinate207;

geometry = IndexedFaceSet206;

fieldValue202YYY.children = new X3D.MFNode();

fieldValue202ZZZ.children[0] = Shape203;

ProtoInstance200ZZZ.fieldValue[1] = fieldValue202;

fieldValue199YYY.children = new X3D.MFNode();

fieldValue199ZZZ.children[0] = ProtoInstance200;

let ProtoInstance208 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance208.DEF = "hanim_r_knee";
ProtoInstance208.name = "Joint";
let fieldValue209 = browser.currentScene.createNode("fieldValue");
fieldValue209.name = "name";
fieldValue209.value = "r_knee";
ProtoInstance208YYY.fieldValue = new X3D.MFNode();

ProtoInstance208ZZZ.fieldValue[0] = fieldValue209;

let fieldValue210 = browser.currentScene.createNode("fieldValue");
fieldValue210.name = "center";
fieldValue210.value = "-0.0699 0.51 -0.0166";
ProtoInstance208ZZZ.fieldValue[1] = fieldValue210;

let fieldValue211 = browser.currentScene.createNode("fieldValue");
fieldValue211.name = "children";
let ProtoInstance212 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance212.DEF = "hanim_r_calf";
ProtoInstance212.name = "Segment";
let fieldValue213 = browser.currentScene.createNode("fieldValue");
fieldValue213.name = "name";
fieldValue213.value = "r_calf";
ProtoInstance212YYY.fieldValue = new X3D.MFNode();

ProtoInstance212ZZZ.fieldValue[0] = fieldValue213;

let fieldValue214 = browser.currentScene.createNode("fieldValue");
fieldValue214.name = "children";
let Shape215 = browser.currentScene.createNode("Shape");
Shape215.DEF = "_6";
let Appearance216 = browser.currentScene.createNode("Appearance");
let Material217 = browser.currentScene.createNode("Material");
Material217.USE = "Pants_Color";
material = Material217;

appearance = Appearance216;

let IndexedFaceSet218 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet218.creaseAngle = 1.57;
IndexedFaceSet218.coordIndex = new X3D.MFInt32([14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1]);
let Coordinate219 = browser.currentScene.createNode("Coordinate");
Coordinate219.point = new X3D.MFVec3f([-0.123,0.363,-0.0663,-0.123,0.363,-0.04,-0.118,0.309,-0.0685,-0.118,0.311,-0.0411,-0.117,0.508,-0.0169,-0.107,0.367,-0.107,-0.105,0.539,-0.0438,-0.105,0.31,-0.108,-0.104,0.539,-0.0223,-0.101,0.51,-0.0798,-0.0975,0.54,-0.0647,-0.0948,0.0897,-0.0368,-0.0916,0.0779,-0.0604,-0.0905,0.12,-0.0647,-0.0883,0.532,-0.00349,-0.0883,0.309,-0.018,-0.0878,0.361,-0.0126,-0.0862,0.506,0.0158,-0.0814,0.55,-0.0395,-0.0765,0.11,-0.0169,-0.0744,0.13,-0.0212,-0.0738,0.117,-0.0814,-0.0722,0.546,-0.0717,-0.0717,0.0854,-0.0765,-0.0706,0.51,-0.101,-0.0609,0.533,-0.00833,-0.0588,0.365,-0.122,-0.0577,0.544,-0.0577,-0.0572,0.308,-0.123,-0.0561,0.13,-0.0245,-0.0556,0.506,-0.000272,-0.054,0.0972,-0.0175,-0.0529,0.536,-0.0368,-0.0529,0.121,-0.0873,-0.0497,0.358,-0.0234,-0.0486,0.0999,-0.0835,-0.0475,0.307,-0.0282,-0.0416,0.124,-0.0416,-0.0406,0.0918,-0.0626,-0.0406,0.513,-0.0744,-0.0384,0.0881,-0.0363,-0.0373,0.121,-0.0636,-0.0368,0.51,-0.0357,-0.0239,0.358,-0.0475,-0.0228,0.358,-0.0926,-0.0201,0.309,-0.0937,-0.0191,0.311,-0.0508,-0.0985,0.125,-0.0375]);
coord = Coordinate219;

geometry = IndexedFaceSet218;

fieldValue214YYY.children = new X3D.MFNode();

fieldValue214ZZZ.children[0] = Shape215;

ProtoInstance212ZZZ.fieldValue[1] = fieldValue214;

fieldValue211YYY.children = new X3D.MFNode();

fieldValue211ZZZ.children[0] = ProtoInstance212;

let ProtoInstance220 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance220.DEF = "hanim_r_ankle";
ProtoInstance220.name = "Joint";
let fieldValue221 = browser.currentScene.createNode("fieldValue");
fieldValue221.name = "name";
fieldValue221.value = "r_ankle";
ProtoInstance220YYY.fieldValue = new X3D.MFNode();

ProtoInstance220ZZZ.fieldValue[0] = fieldValue221;

let fieldValue222 = browser.currentScene.createNode("fieldValue");
fieldValue222.name = "center";
fieldValue222.value = "-0.064 0.0753 -0.0412";
ProtoInstance220ZZZ.fieldValue[1] = fieldValue222;

let fieldValue223 = browser.currentScene.createNode("fieldValue");
fieldValue223.name = "children";
let ProtoInstance224 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance224.DEF = "hanim_r_hindfoot";
ProtoInstance224.name = "Segment";
let fieldValue225 = browser.currentScene.createNode("fieldValue");
fieldValue225.name = "name";
fieldValue225.value = "r_hindfoot";
ProtoInstance224YYY.fieldValue = new X3D.MFNode();

ProtoInstance224ZZZ.fieldValue[0] = fieldValue225;

let fieldValue226 = browser.currentScene.createNode("fieldValue");
fieldValue226.name = "children";
let Shape227 = browser.currentScene.createNode("Shape");
Shape227.DEF = "_7";
let Appearance228 = browser.currentScene.createNode("Appearance");
let Material229 = browser.currentScene.createNode("Material");
Material229.USE = "Shoe_Color";
material = Material229;

appearance = Appearance228;

let IndexedFaceSet230 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet230.creaseAngle = 1.57;
IndexedFaceSet230.coordIndex = new X3D.MFInt32([6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1]);
let Coordinate231 = browser.currentScene.createNode("Coordinate");
Coordinate231.point = new X3D.MFVec3f([-0.0727,0,-0.0994,-0.1,0,-0.0594,-0.0701,0,0.146,-0.0468,0,0.153,-0.0215,0,0.146,-0.0433,0,-0.0534,-0.0529,0,-0.0923,-0.0727,0.0219,-0.0994,-0.0863,0.0219,-0.0862,-0.1,0.0219,-0.0594,-0.108,0.0219,-0.00479,-0.112,0.0156,0.117,-0.0701,0.0156,0.146,-0.0468,0.0156,0.153,-0.0215,0.0156,0.146,-0.0165,0.017,0.0777,-0.0433,0.0219,-0.0534,-0.0529,0.0219,-0.0923,-0.0445,0.0273,-0.0189,-0.0265,0.0253,0.0549,-0.0305,0.0253,0.0938,-0.069,0.0253,0.0938,-0.102,0.0253,0.0707,-0.0568,0.0573,-0.0918,-0.0492,0.0573,-0.0497,-0.0424,0.0573,-0.00142,-0.0478,0.0573,0.0341,-0.0623,0.0573,0.0366,-0.0864,0.0573,0.0245,-0.0962,0.0573,-0.0121,-0.0845,0.0573,-0.0764,-0.0758,0.0573,-0.0899,-0.0676,0.0573,-0.0962,-0.0578,0.0953,-0.0896,-0.0489,0.0953,-0.0757,-0.0459,0.0953,-0.0615,-0.0435,0.0953,-0.0292,-0.0485,0.0953,-0.00582,-0.0624,0.0953,-0.00466,-0.0857,0.0953,-0.0134,-0.0953,0.0953,-0.038,-0.0843,0.0953,-0.0803,-0.0761,0.0953,-0.0889,-0.0682,0.0953,-0.0929,-0.0675,0.13,-0.0608,-0.0165,0,0.125,-0.112,0,0.117,-0.0165,0,0.0777,-0.0393,0,-0.0129,-0.108,0,-0.00479,-0.0863,0,-0.0862]);
coord = Coordinate231;

geometry = IndexedFaceSet230;

fieldValue226YYY.children = new X3D.MFNode();

fieldValue226ZZZ.children[0] = Shape227;

ProtoInstance224ZZZ.fieldValue[1] = fieldValue226;

fieldValue223YYY.children = new X3D.MFNode();

fieldValue223ZZZ.children[0] = ProtoInstance224;

ProtoInstance220ZZZ.fieldValue[2] = fieldValue223;

fieldValue211ZZZ.children[1] = ProtoInstance220;

ProtoInstance208ZZZ.fieldValue[2] = fieldValue211;

fieldValue199ZZZ.children[1] = ProtoInstance208;

ProtoInstance196ZZZ.fieldValue[2] = fieldValue199;

fieldValue151ZZZ.children[2] = ProtoInstance196;

ProtoInstance148ZZZ.fieldValue[2] = fieldValue151;

fieldValue147YYY.children = new X3D.MFNode();

fieldValue147ZZZ.children[0] = ProtoInstance148;

let ProtoInstance232 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance232.DEF = "hanim_vl1";
ProtoInstance232.name = "Joint";
let fieldValue233 = browser.currentScene.createNode("fieldValue");
fieldValue233.name = "name";
fieldValue233.value = "vl1";
ProtoInstance232YYY.fieldValue = new X3D.MFNode();

ProtoInstance232ZZZ.fieldValue[0] = fieldValue233;

let fieldValue234 = browser.currentScene.createNode("fieldValue");
fieldValue234.name = "center";
fieldValue234.value = "-0.00405 1.07 -0.0275";
ProtoInstance232ZZZ.fieldValue[1] = fieldValue234;

let fieldValue235 = browser.currentScene.createNode("fieldValue");
fieldValue235.name = "children";
let ProtoInstance236 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance236.DEF = "hanim_c7";
ProtoInstance236.name = "Segment";
let fieldValue237 = browser.currentScene.createNode("fieldValue");
fieldValue237.name = "name";
fieldValue237.value = "l1";
ProtoInstance236YYY.fieldValue = new X3D.MFNode();

ProtoInstance236ZZZ.fieldValue[0] = fieldValue237;

let fieldValue238 = browser.currentScene.createNode("fieldValue");
fieldValue238.name = "children";
let Shape239 = browser.currentScene.createNode("Shape");
Shape239.DEF = "_8";
let Appearance240 = browser.currentScene.createNode("Appearance");
let Material241 = browser.currentScene.createNode("Material");
Material241.DEF = "Shirt_Color";
Material241.ambientIntensity = 0.25;
Material241.diffuseColor = new X3D.SFColor([0.6,0.0745,0.1137]);
material = Material241;

let ImageTexture242 = browser.currentScene.createNode("ImageTexture");
ImageTexture242.DEF = "small_logo_Tex";
ImageTexture242.url = new X3D.MFString([new X3D.SFString("small_logo.gif"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/small_logo.gif")]);
texture = ImageTexture242;

appearance = Appearance240;

let IndexedFaceSet243 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet243.creaseAngle = 1.59;
IndexedFaceSet243.coordIndex = new X3D.MFInt32([0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1]);
let TextureCoordinate244 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate244.point = new X3D.MFVec2f([0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
texCoord = TextureCoordinate244;

let Coordinate245 = browser.currentScene.createNode("Coordinate");
Coordinate245.point = new X3D.MFVec3f([0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168]);
coord = Coordinate245;

geometry = IndexedFaceSet243;

fieldValue238YYY.children = new X3D.MFNode();

fieldValue238ZZZ.children[0] = Shape239;

ProtoInstance236ZZZ.fieldValue[1] = fieldValue238;

fieldValue235YYY.children = new X3D.MFNode();

fieldValue235ZZZ.children[0] = ProtoInstance236;

let ProtoInstance246 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance246.DEF = "hanim_l_shoulder";
ProtoInstance246.name = "Joint";
let fieldValue247 = browser.currentScene.createNode("fieldValue");
fieldValue247.name = "name";
fieldValue247.value = "l_shoulder";
ProtoInstance246YYY.fieldValue = new X3D.MFNode();

ProtoInstance246ZZZ.fieldValue[0] = fieldValue247;

let fieldValue248 = browser.currentScene.createNode("fieldValue");
fieldValue248.name = "center";
fieldValue248.value = "0.167 1.36 -0.0518";
ProtoInstance246ZZZ.fieldValue[1] = fieldValue248;

let fieldValue249 = browser.currentScene.createNode("fieldValue");
fieldValue249.name = "children";
let ProtoInstance250 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance250.DEF = "hanim_l_upperarm";
ProtoInstance250.name = "Segment";
let fieldValue251 = browser.currentScene.createNode("fieldValue");
fieldValue251.name = "name";
fieldValue251.value = "l_upperarm";
ProtoInstance250YYY.fieldValue = new X3D.MFNode();

ProtoInstance250ZZZ.fieldValue[0] = fieldValue251;

let fieldValue252 = browser.currentScene.createNode("fieldValue");
fieldValue252.name = "children";
let Transform253 = browser.currentScene.createNode("Transform");
Transform253.DEF = "l_upperarm_adjust";
Transform253.translation = new X3D.SFVec3f([0,0.0004203,-0.01665]);
Transform253.rotation = new X3D.SFRotation([1,0,0,0.119]);
Transform253.center = new X3D.SFVec3f([0.182,1.22,-0.047]);
let Shape254 = browser.currentScene.createNode("Shape");
let Appearance255 = browser.currentScene.createNode("Appearance");
let Material256 = browser.currentScene.createNode("Material");
Material256.DEF = "Skin_Color";
Material256.ambientIntensity = 0.25;
Material256.diffuseColor = new X3D.SFColor([0.749,0.601,0.462]);
material = Material256;

appearance = Appearance255;

let IndexedFaceSet257 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet257.creaseAngle = 1.65;
IndexedFaceSet257.coordIndex = new X3D.MFInt32([2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1]);
let Coordinate258 = browser.currentScene.createNode("Coordinate");
Coordinate258.point = new X3D.MFVec3f([0.174,1.37,-0.0625,0.185,1.38,-0.0395,0.156,1.39,-0.0464,0.174,1.37,-0.0158,0.154,1.37,-0.0185,0.157,1.38,-0.0733,0.182,1.33,-0.0728,0.151,1.33,-0.0937,0.15,1.34,-0.000787,0.185,1.33,-0.00025,0.201,1.33,-0.0411,0.189,1.26,-0.0808,0.155,1.26,-0.0867,0.151,1.26,-0.000789,0.19,1.26,-0.00401,0.209,1.26,-0.0427,0.141,1.26,-0.0421,0.203,1.08,-0.0744,0.162,1.05,-0.0561,0.169,1.08,-0.00885,0.208,1.07,-0.00133,0.221,1.08,-0.0352]);
coord = Coordinate258;

geometry = IndexedFaceSet257;

Transform253YYY.child = new X3D.undefined();

Transform253ZZZ.child[0] = Shape254;

fieldValue252YYY.children = new X3D.MFNode();

fieldValue252ZZZ.children[0] = Transform253;

ProtoInstance250ZZZ.fieldValue[1] = fieldValue252;

fieldValue249YYY.children = new X3D.MFNode();

fieldValue249ZZZ.children[0] = ProtoInstance250;

let ProtoInstance259 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance259.DEF = "hanim_l_elbow";
ProtoInstance259.name = "Joint";
let fieldValue260 = browser.currentScene.createNode("fieldValue");
fieldValue260.name = "name";
fieldValue260.value = "l_elbow";
ProtoInstance259YYY.fieldValue = new X3D.MFNode();

ProtoInstance259ZZZ.fieldValue[0] = fieldValue260;

let fieldValue261 = browser.currentScene.createNode("fieldValue");
fieldValue261.name = "center";
fieldValue261.value = "0.196 1.07 -0.0518";
ProtoInstance259ZZZ.fieldValue[1] = fieldValue261;

let fieldValue262 = browser.currentScene.createNode("fieldValue");
fieldValue262.name = "children";
let ProtoInstance263 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance263.DEF = "hanim_l_forearm";
ProtoInstance263.name = "Segment";
let fieldValue264 = browser.currentScene.createNode("fieldValue");
fieldValue264.name = "name";
fieldValue264.value = "l_forearm";
ProtoInstance263YYY.fieldValue = new X3D.MFNode();

ProtoInstance263ZZZ.fieldValue[0] = fieldValue264;

let fieldValue265 = browser.currentScene.createNode("fieldValue");
fieldValue265.name = "children";
let Transform266 = browser.currentScene.createNode("Transform");
Transform266.DEF = "l_forearm_adjust";
Transform266.translation = new X3D.SFVec3f([0,0.003724,-0.0236]);
Transform266.rotation = new X3D.SFRotation([-1,0,0,0.1]);
Transform266.center = new X3D.SFVec3f([0.198,0.961,-0.0405]);
let Shape267 = browser.currentScene.createNode("Shape");
let Appearance268 = browser.currentScene.createNode("Appearance");
let Material269 = browser.currentScene.createNode("Material");
Material269.USE = "Skin_Color";
material = Material269;

appearance = Appearance268;

let IndexedFaceSet270 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet270.creaseAngle = 1.75;
IndexedFaceSet270.coordIndex = new X3D.MFInt32([2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1]);
let Coordinate271 = browser.currentScene.createNode("Coordinate");
Coordinate271.point = new X3D.MFVec3f([0.177,1.09,-0.0609,0.202,1.1,-0.0566,0.189,1.1,-0.0395,0.213,1.1,-0.025,0.203,1.1,-0.0158,0.182,1.09,-0.00563,0.167,1.09,-0.0325,0.176,1.08,-0.0781,0.16,1.06,-0.0373,0.214,1.07,-0.00402,0.228,1.07,-0.0319,0.208,1.08,-0.0765,0.179,1.07,-0.00294,0.21,0.818,-0.0615,0.201,0.82,-0.0405,0.205,0.819,-0.00832,0.224,0.818,-0.00778,0.237,0.82,-0.0282,0.231,0.819,-0.0609]);
coord = Coordinate271;

geometry = IndexedFaceSet270;

Transform266YYY.child = new X3D.undefined();

Transform266ZZZ.child[0] = Shape267;

fieldValue265YYY.children = new X3D.MFNode();

fieldValue265ZZZ.children[0] = Transform266;

ProtoInstance263ZZZ.fieldValue[1] = fieldValue265;

fieldValue262YYY.children = new X3D.MFNode();

fieldValue262ZZZ.children[0] = ProtoInstance263;

let ProtoInstance272 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance272.DEF = "hanim_l_wrist";
ProtoInstance272.name = "Joint";
let fieldValue273 = browser.currentScene.createNode("fieldValue");
fieldValue273.name = "name";
fieldValue273.value = "l_wrist";
ProtoInstance272YYY.fieldValue = new X3D.MFNode();

ProtoInstance272ZZZ.fieldValue[0] = fieldValue273;

let fieldValue274 = browser.currentScene.createNode("fieldValue");
fieldValue274.name = "center";
fieldValue274.value = "0.213 0.811 -0.0338";
ProtoInstance272ZZZ.fieldValue[1] = fieldValue274;

let fieldValue275 = browser.currentScene.createNode("fieldValue");
fieldValue275.name = "children";
let ProtoInstance276 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance276.DEF = "hanim_l_hand";
ProtoInstance276.name = "Segment";
let fieldValue277 = browser.currentScene.createNode("fieldValue");
fieldValue277.name = "name";
fieldValue277.value = "l_hand";
ProtoInstance276YYY.fieldValue = new X3D.MFNode();

ProtoInstance276ZZZ.fieldValue[0] = fieldValue277;

let fieldValue278 = browser.currentScene.createNode("fieldValue");
fieldValue278.name = "children";
let Transform279 = browser.currentScene.createNode("Transform");
Transform279.DEF = "l_hand_adjust";
Transform279.translation = new X3D.SFVec3f([0,0.005142,-0.008662]);
Transform279.rotation = new X3D.SFRotation([-0.06361,-0.9967,0.04988,1.333]);
Transform279.center = new X3D.SFVec3f([0.213,0.811,-0.0338]);
let Shape280 = browser.currentScene.createNode("Shape");
let Appearance281 = browser.currentScene.createNode("Appearance");
let Material282 = browser.currentScene.createNode("Material");
Material282.USE = "Skin_Color";
material = Material282;

appearance = Appearance281;

let IndexedFaceSet283 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet283.creaseAngle = 1.48;
IndexedFaceSet283.coordIndex = new X3D.MFInt32([2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1]);
let Coordinate284 = browser.currentScene.createNode("Coordinate");
Coordinate284.point = new X3D.MFVec3f([0.211,0.828,-0.0434,0.194,0.81,-0.0445,0.237,0.82,-0.0425,0.236,0.82,-0.0237,0.194,0.81,-0.0254,0.21,0.828,-0.0247,0.252,0.801,-0.0424,0.252,0.801,-0.0231,0.269,0.765,-0.0426,0.268,0.765,-0.0225,0.273,0.732,-0.0395,0.272,0.732,-0.0223,0.27,0.704,-0.0342,0.27,0.704,-0.0224,0.262,0.703,-0.0345,0.261,0.703,-0.0227,0.256,0.717,-0.0389,0.256,0.717,-0.023,0.255,0.738,-0.0408,0.255,0.738,-0.023,0.251,0.734,-0.0406,0.251,0.734,-0.0232,0.251,0.692,-0.0232,0.248,0.657,-0.0233,0.24,0.645,-0.0236,0.226,0.637,-0.0241,0.213,0.639,-0.0246,0.197,0.652,-0.0253,0.188,0.669,-0.0256,0.184,0.697,-0.0258,0.183,0.73,-0.0258,0.187,0.77,-0.0257,0.244,0.696,-0.0375,0.244,0.692,-0.0372,0.242,0.661,-0.0345,0.241,0.658,-0.0343,0.241,0.656,-0.0341,0.231,0.646,-0.0336,0.206,0.65,-0.0349,0.218,0.644,-0.034,0.205,0.652,-0.0352,0.198,0.667,-0.0367,0.195,0.691,-0.039,0.194,0.696,-0.0395,0.193,0.725,-0.042,0.193,0.731,-0.0425,0.197,0.765,-0.0449,0.197,0.77,-0.0453]);
coord = Coordinate284;

geometry = IndexedFaceSet283;

Transform279YYY.child = new X3D.undefined();

Transform279ZZZ.child[0] = Shape280;

fieldValue278YYY.children = new X3D.MFNode();

fieldValue278ZZZ.children[0] = Transform279;

ProtoInstance276ZZZ.fieldValue[1] = fieldValue278;

fieldValue275YYY.children = new X3D.MFNode();

fieldValue275ZZZ.children[0] = ProtoInstance276;

ProtoInstance272ZZZ.fieldValue[2] = fieldValue275;

fieldValue262ZZZ.children[1] = ProtoInstance272;

ProtoInstance259ZZZ.fieldValue[2] = fieldValue262;

fieldValue249ZZZ.children[1] = ProtoInstance259;

ProtoInstance246ZZZ.fieldValue[2] = fieldValue249;

fieldValue235ZZZ.children[1] = ProtoInstance246;

let ProtoInstance285 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance285.DEF = "hanim_r_shoulder";
ProtoInstance285.name = "Joint";
let fieldValue286 = browser.currentScene.createNode("fieldValue");
fieldValue286.name = "name";
fieldValue286.value = "r_shoulder";
ProtoInstance285YYY.fieldValue = new X3D.MFNode();

ProtoInstance285ZZZ.fieldValue[0] = fieldValue286;

let fieldValue287 = browser.currentScene.createNode("fieldValue");
fieldValue287.name = "center";
fieldValue287.value = "-0.167 1.36 -0.0458";
ProtoInstance285ZZZ.fieldValue[1] = fieldValue287;

let fieldValue288 = browser.currentScene.createNode("fieldValue");
fieldValue288.name = "children";
let ProtoInstance289 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance289.DEF = "hanim_r_upperarm";
ProtoInstance289.name = "Segment";
let fieldValue290 = browser.currentScene.createNode("fieldValue");
fieldValue290.name = "name";
fieldValue290.value = "r_upperarm";
ProtoInstance289YYY.fieldValue = new X3D.MFNode();

ProtoInstance289ZZZ.fieldValue[0] = fieldValue290;

let fieldValue291 = browser.currentScene.createNode("fieldValue");
fieldValue291.name = "children";
let Transform292 = browser.currentScene.createNode("Transform");
Transform292.DEF = "r_upperarm_adjust";
Transform292.translation = new X3D.SFVec3f([0,0.000589,-0.01169]);
Transform292.rotation = new X3D.SFRotation([1,0,0,0.0836]);
Transform292.center = new X3D.SFVec3f([-0.182,1.22,-0.047]);
let Shape293 = browser.currentScene.createNode("Shape");
let Appearance294 = browser.currentScene.createNode("Appearance");
let Material295 = browser.currentScene.createNode("Material");
Material295.USE = "Skin_Color";
material = Material295;

appearance = Appearance294;

let IndexedFaceSet296 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet296.creaseAngle = 1.53;
IndexedFaceSet296.coordIndex = new X3D.MFInt32([14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1]);
let Coordinate297 = browser.currentScene.createNode("Coordinate");
Coordinate297.point = new X3D.MFVec3f([-0.221,1.08,-0.0352,-0.214,1.14,-0.0405,-0.209,1.26,-0.0427,-0.208,1.07,-0.00133,-0.203,1.08,-0.0744,-0.201,1.33,-0.0411,-0.198,1.14,-0.0024,-0.198,1.13,-0.076,-0.19,1.26,-0.00401,-0.189,1.26,-0.0808,-0.185,1.38,-0.0395,-0.185,1.33,-0.00025,-0.182,1.33,-0.0728,-0.174,1.37,-0.0158,-0.174,1.37,-0.0625,-0.169,1.08,-0.00885,-0.167,1.13,-0.0744,-0.162,1.05,-0.0561,-0.16,1.13,-0.000793,-0.157,1.38,-0.0733,-0.156,1.39,-0.0464,-0.155,1.26,-0.0867,-0.154,1.37,-0.0185,-0.151,1.26,-0.000789,-0.151,1.33,-0.0937,-0.15,1.34,-0.000787,-0.15,1.13,-0.0411,-0.141,1.26,-0.0421]);
coord = Coordinate297;

geometry = IndexedFaceSet296;

Transform292YYY.child = new X3D.undefined();

Transform292ZZZ.child[0] = Shape293;

fieldValue291YYY.children = new X3D.MFNode();

fieldValue291ZZZ.children[0] = Transform292;

ProtoInstance289ZZZ.fieldValue[1] = fieldValue291;

fieldValue288YYY.children = new X3D.MFNode();

fieldValue288ZZZ.children[0] = ProtoInstance289;

let ProtoInstance298 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance298.DEF = "hanim_r_elbow";
ProtoInstance298.name = "Joint";
let fieldValue299 = browser.currentScene.createNode("fieldValue");
fieldValue299.name = "name";
fieldValue299.value = "r_elbow";
ProtoInstance298YYY.fieldValue = new X3D.MFNode();

ProtoInstance298ZZZ.fieldValue[0] = fieldValue299;

let fieldValue300 = browser.currentScene.createNode("fieldValue");
fieldValue300.name = "center";
fieldValue300.value = "-0.192 1.07 -0.0498";
ProtoInstance298ZZZ.fieldValue[1] = fieldValue300;

let fieldValue301 = browser.currentScene.createNode("fieldValue");
fieldValue301.name = "children";
let ProtoInstance302 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance302.DEF = "hanim_r_forearm";
ProtoInstance302.name = "Segment";
let fieldValue303 = browser.currentScene.createNode("fieldValue");
fieldValue303.name = "name";
fieldValue303.value = "r_forearm";
ProtoInstance302YYY.fieldValue = new X3D.MFNode();

ProtoInstance302ZZZ.fieldValue[0] = fieldValue303;

let fieldValue304 = browser.currentScene.createNode("fieldValue");
fieldValue304.name = "children";
let Transform305 = browser.currentScene.createNode("Transform");
Transform305.DEF = "r_forearm_adjust";
Transform305.translation = new X3D.SFVec3f([0,0.003466,-0.01065]);
Transform305.rotation = new X3D.SFRotation([-1,0,0,0.1254]);
Transform305.center = new X3D.SFVec3f([-0.198,0.961,-0.0397]);
let Shape306 = browser.currentScene.createNode("Shape");
let Appearance307 = browser.currentScene.createNode("Appearance");
let Material308 = browser.currentScene.createNode("Material");
Material308.USE = "Skin_Color";
material = Material308;

appearance = Appearance307;

let IndexedFaceSet309 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet309.creaseAngle = 1.73;
IndexedFaceSet309.coordIndex = new X3D.MFInt32([20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1]);
let Coordinate310 = browser.currentScene.createNode("Coordinate");
Coordinate310.point = new X3D.MFVec3f([-0.237,0.82,-0.0282,-0.235,1.02,-0.033,-0.231,0.819,-0.0609,-0.228,1.07,-0.0319,-0.224,0.818,-0.00778,-0.221,1.01,-0.0744,-0.218,1.01,-0.00133,-0.214,1.07,-0.00402,-0.213,1.1,-0.025,-0.21,0.818,-0.0615,-0.208,1.08,-0.0765,-0.205,0.819,-0.00832,-0.203,1.1,-0.0158,-0.202,1.1,-0.0566,-0.201,0.82,-0.0405,-0.189,1.1,-0.0395,-0.183,1.01,-0.00831,-0.183,1.01,-0.0781,-0.182,1.09,-0.00563,-0.179,1.07,-0.00294,-0.177,1.09,-0.0609,-0.176,1.08,-0.0781,-0.167,1.09,-0.0325,-0.166,1,-0.0405,-0.16,1.06,-0.0373]);
coord = Coordinate310;

geometry = IndexedFaceSet309;

Transform305YYY.child = new X3D.undefined();

Transform305ZZZ.child[0] = Shape306;

fieldValue304YYY.children = new X3D.MFNode();

fieldValue304ZZZ.children[0] = Transform305;

ProtoInstance302ZZZ.fieldValue[1] = fieldValue304;

fieldValue301YYY.children = new X3D.MFNode();

fieldValue301ZZZ.children[0] = ProtoInstance302;

let ProtoInstance311 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance311.DEF = "hanim_r_wrist";
ProtoInstance311.name = "Joint";
let fieldValue312 = browser.currentScene.createNode("fieldValue");
fieldValue312.name = "name";
fieldValue312.value = "r_wrist";
ProtoInstance311YYY.fieldValue = new X3D.MFNode();

ProtoInstance311ZZZ.fieldValue[0] = fieldValue312;

let fieldValue313 = browser.currentScene.createNode("fieldValue");
fieldValue313.name = "center";
fieldValue313.value = "-0.217 0.811 -0.0338";
ProtoInstance311ZZZ.fieldValue[1] = fieldValue313;

let fieldValue314 = browser.currentScene.createNode("fieldValue");
fieldValue314.name = "children";
let ProtoInstance315 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance315.DEF = "hanim_r_hand";
ProtoInstance315.name = "Segment";
let fieldValue316 = browser.currentScene.createNode("fieldValue");
fieldValue316.name = "name";
fieldValue316.value = "r_hand";
ProtoInstance315YYY.fieldValue = new X3D.MFNode();

ProtoInstance315ZZZ.fieldValue[0] = fieldValue316;

let fieldValue317 = browser.currentScene.createNode("fieldValue");
fieldValue317.name = "children";
let Transform318 = browser.currentScene.createNode("Transform");
Transform318.DEF = "r_hand_adjust";
Transform318.rotation = new X3D.SFRotation([-0.09024,0.994,-0.0624,1.216]);
Transform318.center = new X3D.SFVec3f([-0.217,0.811,-0.0338]);
let Shape319 = browser.currentScene.createNode("Shape");
let Appearance320 = browser.currentScene.createNode("Appearance");
let Material321 = browser.currentScene.createNode("Material");
Material321.USE = "Skin_Color";
material = Material321;

appearance = Appearance320;

let IndexedFaceSet322 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet322.creaseAngle = 1.57;
IndexedFaceSet322.coordIndex = new X3D.MFInt32([10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1]);
let Coordinate323 = browser.currentScene.createNode("Coordinate");
Coordinate323.point = new X3D.MFVec3f([-0.237,0.82,-0.0425,-0.252,0.801,-0.0424,-0.269,0.765,-0.0426,-0.273,0.732,-0.0395,-0.27,0.704,-0.0342,-0.262,0.703,-0.0345,-0.256,0.717,-0.0389,-0.255,0.738,-0.0408,-0.251,0.734,-0.0406,-0.194,0.81,-0.0445,-0.211,0.828,-0.0434,-0.236,0.82,-0.0237,-0.252,0.801,-0.0231,-0.268,0.765,-0.0225,-0.272,0.732,-0.0223,-0.27,0.704,-0.0224,-0.261,0.703,-0.0227,-0.256,0.717,-0.023,-0.255,0.738,-0.023,-0.251,0.734,-0.0232,-0.251,0.692,-0.0232,-0.248,0.657,-0.0233,-0.24,0.645,-0.0236,-0.226,0.637,-0.0241,-0.213,0.639,-0.0246,-0.197,0.652,-0.0253,-0.188,0.669,-0.0256,-0.184,0.697,-0.0258,-0.183,0.73,-0.0258,-0.187,0.77,-0.0257,-0.194,0.81,-0.0254,-0.21,0.828,-0.0247,-0.221,0.641,-0.0336,-0.21,0.65,-0.0348,-0.206,0.652,-0.0352,-0.198,0.667,-0.0368,-0.193,0.692,-0.0392,-0.192,0.696,-0.0396,-0.231,0.646,-0.0336,-0.238,0.656,-0.0342,-0.24,0.658,-0.0344,-0.24,0.662,-0.0347,-0.243,0.692,-0.0372,-0.243,0.696,-0.0376,-0.192,0.725,-0.0421,-0.192,0.73,-0.0426,-0.195,0.766,-0.0451,-0.196,0.77,-0.0454]);
coord = Coordinate323;

geometry = IndexedFaceSet322;

Transform318YYY.child = new X3D.undefined();

Transform318ZZZ.child[0] = Shape319;

fieldValue317YYY.children = new X3D.MFNode();

fieldValue317ZZZ.children[0] = Transform318;

ProtoInstance315ZZZ.fieldValue[1] = fieldValue317;

fieldValue314YYY.children = new X3D.MFNode();

fieldValue314ZZZ.children[0] = ProtoInstance315;

ProtoInstance311ZZZ.fieldValue[2] = fieldValue314;

fieldValue301ZZZ.children[1] = ProtoInstance311;

ProtoInstance298ZZZ.fieldValue[2] = fieldValue301;

fieldValue288ZZZ.children[1] = ProtoInstance298;

ProtoInstance285ZZZ.fieldValue[2] = fieldValue288;

fieldValue235ZZZ.children[2] = ProtoInstance285;

let ProtoInstance324 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance324.DEF = "hanim_vc4";
ProtoInstance324.name = "Joint";
let fieldValue325 = browser.currentScene.createNode("fieldValue");
fieldValue325.name = "name";
fieldValue325.value = "vc4";
ProtoInstance324YYY.fieldValue = new X3D.MFNode();

ProtoInstance324ZZZ.fieldValue[0] = fieldValue325;

let fieldValue326 = browser.currentScene.createNode("fieldValue");
fieldValue326.name = "center";
fieldValue326.value = "0 1.43 -0.0458";
ProtoInstance324ZZZ.fieldValue[1] = fieldValue326;

let fieldValue327 = browser.currentScene.createNode("fieldValue");
fieldValue327.name = "children";
let ProtoInstance328 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance328.DEF = "hanim_c4";
ProtoInstance328.name = "Segment";
let fieldValue329 = browser.currentScene.createNode("fieldValue");
fieldValue329.name = "name";
fieldValue329.value = "c4";
ProtoInstance328YYY.fieldValue = new X3D.MFNode();

ProtoInstance328ZZZ.fieldValue[0] = fieldValue329;

let fieldValue330 = browser.currentScene.createNode("fieldValue");
fieldValue330.name = "children";
let Shape331 = browser.currentScene.createNode("Shape");
Shape331.DEF = "_9";
let Appearance332 = browser.currentScene.createNode("Appearance");
let Material333 = browser.currentScene.createNode("Material");
Material333.USE = "Skin_Color";
material = Material333;

appearance = Appearance332;

let IndexedFaceSet334 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet334.DEF = "neck";
IndexedFaceSet334.creaseAngle = 1.91;
IndexedFaceSet334.coordIndex = new X3D.MFInt32([6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1]);
let Coordinate335 = browser.currentScene.createNode("Coordinate");
Coordinate335.point = new X3D.MFVec3f([0.0105,1.54,-0.1,0.0357,1.54,-0.0685,0.0382,1.55,-0.0474,0.0105,1.55,-0.0204,0.0373,1.4,-0.0593,0.0577,1.4,-0.0266,0.0158,1.4,0.00512,0.0132,1.41,-0.0824,-0.0158,1.4,0.00512,-0.0577,1.4,-0.0266,-0.0382,1.55,-0.0474,-0.0105,1.55,-0.0204,-0.0373,1.4,-0.0593,-0.0357,1.54,-0.0685,-0.0132,1.41,-0.0824,-0.0105,1.54,-0.1]);
coord = Coordinate335;

geometry = IndexedFaceSet334;

fieldValue330YYY.children = new X3D.MFNode();

fieldValue330ZZZ.children[0] = Shape331;

ProtoInstance328ZZZ.fieldValue[1] = fieldValue330;

fieldValue327YYY.children = new X3D.MFNode();

fieldValue327ZZZ.children[0] = ProtoInstance328;

let ProtoInstance336 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance336.DEF = "hanim_skullbase";
ProtoInstance336.name = "Joint";
let fieldValue337 = browser.currentScene.createNode("fieldValue");
fieldValue337.name = "name";
fieldValue337.value = "skullbase";
ProtoInstance336YYY.fieldValue = new X3D.MFNode();

ProtoInstance336ZZZ.fieldValue[0] = fieldValue337;

let fieldValue338 = browser.currentScene.createNode("fieldValue");
fieldValue338.name = "center";
fieldValue338.value = "0 1.54 -0.0409";
ProtoInstance336ZZZ.fieldValue[1] = fieldValue338;

let fieldValue339 = browser.currentScene.createNode("fieldValue");
fieldValue339.name = "children";
let ProtoInstance340 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance340.DEF = "hanim_skull";
ProtoInstance340.name = "Segment";
let fieldValue341 = browser.currentScene.createNode("fieldValue");
fieldValue341.name = "name";
fieldValue341.value = "skull";
ProtoInstance340YYY.fieldValue = new X3D.MFNode();

ProtoInstance340ZZZ.fieldValue[0] = fieldValue341;

let fieldValue342 = browser.currentScene.createNode("fieldValue");
fieldValue342.name = "children";
let Shape343 = browser.currentScene.createNode("Shape");
Shape343.DEF = "_10";
let Appearance344 = browser.currentScene.createNode("Appearance");
let Material345 = browser.currentScene.createNode("Material");
Material345.USE = "Skin_Color";
material = Material345;

appearance = Appearance344;

let IndexedFaceSet346 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet346.DEF = "headIFS";
IndexedFaceSet346.creaseAngle = 0.7854;
IndexedFaceSet346.colorIndex = new X3D.MFInt32([1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1]);
IndexedFaceSet346.coordIndex = new X3D.MFInt32([48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1]);
let Color347 = browser.currentScene.createNode("Color");
Color347.color = new X3D.MFColor([0.749,0.601,0.462,0.1735,0.2602,0.749,0.6364,0.133,0.1526,0.4545,0.2759,0.1902]);
color = Color347;

let Coordinate348 = browser.currentScene.createNode("Coordinate");
Coordinate348.DEF = "Face";
Coordinate348.point = new X3D.MFVec3f([0,1.708,-0.0435,0,1.655,0.04322,0,1.486,0.02335,0,1.694,0.007789,0,1.631,0.051,0,1.524,-0.102,0.04,1.51,-0.07278,0.04029,1.514,-0.08254,0.03528,1.502,-0.05013,0.03479,1.517,-0.09269,0.0116,1.494,0.03382,0.01946,1.52,0.03421,0.02204,1.494,0.0272,0.02734,1.498,0.02215,0.02788,1.528,0.03084,0.0338,1.503,0.0124,0.04008,1.509,0.002821,0.05122,1.518,-0.02784,0.05867,1.544,-0.03316,0.06433,1.563,-0.03678,0.06732,1.583,-0.03683,0.06769,1.617,-0.03436,0.06641,1.637,-0.03046,0.06818,1.637,-0.04285,0.06308,1.666,-0.04036,0.05305,1.685,-0.03987,0.03136,1.7,-0.0413,0.02919,1.688,0.0091,0.05272,1.674,-0.001657,0.06061,1.66,-0.0101,0.05254,1.541,-0.01363,0.04099,1.527,0.008832,0.03528,1.524,0.02097,0.05792,1.557,-0.004307,0.04413,1.539,0.0149,0.03746,1.539,0.02656,0.003407,1.524,0.04155,0.01481,1.526,0.03912,0.005112,1.532,0.04358,0.02438,1.542,0.03578,0.02636,1.55,0.03808,0.006135,1.55,0.0545,0,1.559,0.05502,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06194,1.6,0.002668,0.01489,1.583,0.04109,0.05282,1.569,0.02821,0.05767,1.58,0.0184,0.04643,1.625,0.03705,0.0264,1.628,0.04807,0.0556,1.609,0.02579,0.05467,1.599,0.02153,0.05316,1.589,0.0207,0.03603,1.58,0.03536,0.04597,1.586,0.02904,0.02106,1.592,0.03748,0.03428,1.595,0.03294,0.06808,1.617,-0.06112,0.06714,1.564,-0.07003,0.06993,1.594,-0.08238,0.05324,1.536,-0.05922,0.04904,1.521,-0.05132,0.04758,1.514,-0.03107,0.03539,1.503,-0.00093,0.02999,1.498,0.006194,0.02308,1.492,0.01628,0.01772,1.488,0.02135,0.01378,1.488,0.02484,0.04349,1.512,-0.03987,0.02308,1.499,-0.02088,0,1.487,-0.018,0.04795,1.531,-0.08973,0.05739,1.555,-0.0982,0.06815,1.622,-0.107,0.06872,1.655,-0.08466,0.05233,1.678,-0.09642,0.05334,1.631,-0.1239,0.05011,1.581,-0.1193,0.04359,1.551,-0.1067,0.03839,1.528,-0.09652,0.03399,1.636,-0.1304,0.03224,1.685,-0.1024,0,1.557,-0.1126,0.01864,1.566,0.04105,0.0249,1.58,0.0387,0.02735,1.596,0.03552,0.04317,1.564,0.03643,0.01246,1.577,0.04276,0.04354,1.59,0.02822,0.04557,1.601,0.03652,0.0291,1.603,0.04274,0.01856,1.6,0.04349,0,1.579,0.04893,0.01064,1.558,0.04476,0.005501,1.578,0.04574,0.01405,1.531,0.04152,0.01037,1.544,0.04266,0,1.515,0.03836,0.00797,1.515,0.03774,0.01824,1.55,0.04063,-0.0249,1.58,0.0387,-0.04354,1.59,0.02822,-0.0291,1.603,0.04274,-0.04317,1.564,0.03643,-0.04597,1.586,0.02904,-0.05316,1.589,0.0207,-0.01824,1.55,0.04063,-0.01246,1.577,0.04276,-0.006135,1.55,0.0545,-0.01037,1.544,0.04266,-0.02636,1.55,0.03808,-0.03428,1.595,0.03294,-0.02735,1.596,0.03552,-0.03603,1.58,0.03536,-0.05282,1.569,0.02821,-0.05767,1.58,0.0184,-0.01864,1.566,0.04105,-0.01489,1.583,0.04109,-0.0556,1.609,0.02579,-0.04557,1.601,0.03652,-0.02106,1.592,0.03748,-0.01856,1.6,0.04349,-0.005501,1.578,0.04574,-0.01064,1.558,0.04476,0,1.592,0.04694,-0.06182,1.614,0.008199,-0.05467,1.599,0.02153,-0.06194,1.6,0.002668,-0.05792,1.557,-0.004307,-0.04413,1.539,0.0149,-0.03746,1.539,0.02656,-0.04099,1.527,0.008832,-0.03528,1.524,0.02097,-0.02788,1.528,0.03084,0,1.53,0.04236,-0.005112,1.532,0.04358,-0.01481,1.526,0.03912,-0.01946,1.52,0.03421,0,1.495,0.0348,-0.0116,1.494,0.03382,-0.02734,1.498,0.02215,-0.0338,1.503,0.0124,-0.01772,1.488,0.02135,-0.02308,1.492,0.01628,-0.02999,1.498,0.006194,-0.01405,1.531,0.04152,-0.003407,1.524,0.04155,-0.02204,1.494,0.0272,-0.00797,1.515,0.03774,-0.02438,1.542,0.03578,0,1.543,0.04432,0,1.555,0.05692,0.02295,1.492,-0.02694,0.007322,1.489,-0.01677,-0.05254,1.541,-0.01363,-0.04008,1.509,0.002821,-0.05122,1.518,-0.02784,-0.03539,1.503,-0.00093,-0.01378,1.488,0.02484,-0.02308,1.499,-0.02088,-0.04349,1.512,-0.03987,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.05856,1.63,0.01803,-0.04847,1.643,0.02895,-0.04643,1.625,0.03705,-0.02958,1.651,0.03965,-0.0264,1.628,0.04807,-0.02919,1.688,0.0091,-0.05272,1.674,-0.001657,-0.06641,1.637,-0.03046,-0.06061,1.66,-0.0101,-0.03136,1.7,-0.0413,-0.05305,1.685,-0.03987,-0.06308,1.666,-0.04036,-0.06818,1.637,-0.04285,-0.06808,1.617,-0.06112,-0.06993,1.594,-0.08238,-0.06714,1.564,-0.07003,-0.05324,1.536,-0.05922,-0.04904,1.521,-0.05132,-0.04795,1.531,-0.08973,-0.05739,1.555,-0.0982,-0.06815,1.622,-0.107,-0.06872,1.655,-0.08466,-0.05233,1.678,-0.09642,-0.03224,1.685,-0.1024,0,1.69,-0.1047,0,1.64,-0.1342,-0.05334,1.631,-0.1239,-0.05011,1.581,-0.1193,-0.04359,1.551,-0.1067,-0.03839,1.528,-0.09652,-0.03528,1.502,-0.05013,-0.04,1.51,-0.07278,-0.04029,1.514,-0.08254,-0.03479,1.517,-0.09269,-0.02295,1.492,-0.02694,-0.007322,1.489,-0.01677,0,1.588,-0.1329,-0.03399,1.636,-0.1304,-0.04758,1.514,-0.03107,-0.03428,1.595,0.03294,-0.02106,1.592,0.03748,-0.02735,1.596,0.03552,-0.0249,1.58,0.0387,-0.01489,1.583,0.04109,-0.04597,1.586,0.02904,-0.04354,1.59,0.02822,-0.03603,1.58,0.03536,-0.05856,1.63,0.01803,-0.06182,1.614,0.008199,-0.02788,1.528,0.03084,-0.005112,1.532,0.04358,-0.01405,1.531,0.04152,-0.00797,1.515,0.03774,-0.01946,1.52,0.03421,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.04847,1.643,0.02895,-0.02958,1.651,0.03965,-0.05324,1.536,-0.05922,-0.04795,1.531,-0.08973,-0.03839,1.528,-0.09652,0.02106,1.592,0.03748,0.01489,1.583,0.04109,0.0249,1.58,0.0387,0.03603,1.58,0.03536,0.04354,1.59,0.02822,0.03428,1.595,0.03294,0.02735,1.596,0.03552,0.02788,1.528,0.03084,0.01405,1.531,0.04152,0,1.53,0.04236,0,1.515,0.03836,0.00797,1.515,0.03774,0.01946,1.52,0.03421,0.005112,1.532,0.04358,0,1.655,0.04322,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06769,1.617,-0.03436,0.06732,1.583,-0.03683,0.06433,1.563,-0.03678,0.05867,1.544,-0.03316,0.05324,1.536,-0.05922,0.04795,1.531,-0.08973,0.03839,1.528,-0.09652,0,1.524,-0.102]);
coord = Coordinate348;

geometry = IndexedFaceSet346;

fieldValue342YYY.children = new X3D.MFNode();

fieldValue342ZZZ.children[0] = Shape343;

ProtoInstance340ZZZ.fieldValue[1] = fieldValue342;

fieldValue339YYY.children = new X3D.MFNode();

fieldValue339ZZZ.children[0] = ProtoInstance340;

ProtoInstance336ZZZ.fieldValue[2] = fieldValue339;

fieldValue327ZZZ.children[1] = ProtoInstance336;

ProtoInstance324ZZZ.fieldValue[2] = fieldValue327;

fieldValue235ZZZ.children[3] = ProtoInstance324;

ProtoInstance232ZZZ.fieldValue[2] = fieldValue235;

fieldValue147ZZZ.children[1] = ProtoInstance232;

ProtoInstance144ZZZ.fieldValue[2] = fieldValue147;

fieldValue143YYY.children = new X3D.MFNode();

fieldValue143ZZZ.children[0] = ProtoInstance144;

let Group349 = browser.currentScene.createNode("Group");
Group349.DEF = "_11";
fieldValue143ZZZ.children[1] = Group349;

ProtoInstance140ZZZ.fieldValue[2] = fieldValue143;

let fieldValue350 = browser.currentScene.createNode("fieldValue");
fieldValue350.name = "joints";
let ProtoInstance351 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance351.name = "Joint";
ProtoInstance351.USE = "hanim_humanoid_root";
fieldValue350YYY.children = new X3D.MFNode();

fieldValue350ZZZ.children[0] = ProtoInstance351;

let ProtoInstance352 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance352.name = "Joint";
ProtoInstance352.USE = "hanim_sacroiliac";
fieldValue350ZZZ.children[1] = ProtoInstance352;

let ProtoInstance353 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance353.name = "Joint";
ProtoInstance353.USE = "hanim_l_hip";
fieldValue350ZZZ.children[2] = ProtoInstance353;

let ProtoInstance354 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance354.name = "Joint";
ProtoInstance354.USE = "hanim_l_knee";
fieldValue350ZZZ.children[3] = ProtoInstance354;

let ProtoInstance355 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance355.name = "Joint";
ProtoInstance355.USE = "hanim_l_ankle";
fieldValue350ZZZ.children[4] = ProtoInstance355;

let ProtoInstance356 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance356.name = "Joint";
ProtoInstance356.USE = "hanim_r_hip";
fieldValue350ZZZ.children[5] = ProtoInstance356;

let ProtoInstance357 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance357.name = "Joint";
ProtoInstance357.USE = "hanim_r_knee";
fieldValue350ZZZ.children[6] = ProtoInstance357;

let ProtoInstance358 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance358.name = "Joint";
ProtoInstance358.USE = "hanim_r_ankle";
fieldValue350ZZZ.children[7] = ProtoInstance358;

let ProtoInstance359 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance359.name = "Joint";
ProtoInstance359.USE = "hanim_vl1";
fieldValue350ZZZ.children[8] = ProtoInstance359;

let ProtoInstance360 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance360.name = "Joint";
ProtoInstance360.USE = "hanim_l_shoulder";
fieldValue350ZZZ.children[9] = ProtoInstance360;

let ProtoInstance361 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance361.name = "Joint";
ProtoInstance361.USE = "hanim_l_elbow";
fieldValue350ZZZ.children[10] = ProtoInstance361;

let ProtoInstance362 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance362.name = "Joint";
ProtoInstance362.USE = "hanim_l_wrist";
fieldValue350ZZZ.children[11] = ProtoInstance362;

let ProtoInstance363 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance363.name = "Joint";
ProtoInstance363.USE = "hanim_r_shoulder";
fieldValue350ZZZ.children[12] = ProtoInstance363;

let ProtoInstance364 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance364.name = "Joint";
ProtoInstance364.USE = "hanim_r_elbow";
fieldValue350ZZZ.children[13] = ProtoInstance364;

let ProtoInstance365 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance365.name = "Joint";
ProtoInstance365.USE = "hanim_r_wrist";
fieldValue350ZZZ.children[14] = ProtoInstance365;

let ProtoInstance366 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance366.name = "Joint";
ProtoInstance366.USE = "hanim_vc4";
fieldValue350ZZZ.children[15] = ProtoInstance366;

let ProtoInstance367 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance367.name = "Joint";
ProtoInstance367.USE = "hanim_skullbase";
fieldValue350ZZZ.children[16] = ProtoInstance367;

ProtoInstance140ZZZ.fieldValue[3] = fieldValue350;

let fieldValue368 = browser.currentScene.createNode("fieldValue");
fieldValue368.name = "segments";
let ProtoInstance369 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance369.name = "Segment";
ProtoInstance369.USE = "hanim_pelvis";
fieldValue368YYY.children = new X3D.MFNode();

fieldValue368ZZZ.children[0] = ProtoInstance369;

let ProtoInstance370 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance370.name = "Segment";
ProtoInstance370.USE = "hanim_l_thigh";
fieldValue368ZZZ.children[1] = ProtoInstance370;

let ProtoInstance371 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance371.name = "Segment";
ProtoInstance371.USE = "hanim_l_calf";
fieldValue368ZZZ.children[2] = ProtoInstance371;

let ProtoInstance372 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance372.name = "Segment";
ProtoInstance372.USE = "hanim_l_hindfoot";
fieldValue368ZZZ.children[3] = ProtoInstance372;

let ProtoInstance373 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance373.name = "Segment";
ProtoInstance373.USE = "hanim_r_thigh";
fieldValue368ZZZ.children[4] = ProtoInstance373;

let ProtoInstance374 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance374.name = "Segment";
ProtoInstance374.USE = "hanim_r_calf";
fieldValue368ZZZ.children[5] = ProtoInstance374;

let ProtoInstance375 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance375.name = "Segment";
ProtoInstance375.USE = "hanim_r_hindfoot";
fieldValue368ZZZ.children[6] = ProtoInstance375;

let ProtoInstance376 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance376.name = "Segment";
ProtoInstance376.USE = "hanim_c7";
fieldValue368ZZZ.children[7] = ProtoInstance376;

let ProtoInstance377 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance377.name = "Segment";
ProtoInstance377.USE = "hanim_l_upperarm";
fieldValue368ZZZ.children[8] = ProtoInstance377;

let ProtoInstance378 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance378.name = "Segment";
ProtoInstance378.USE = "hanim_l_forearm";
fieldValue368ZZZ.children[9] = ProtoInstance378;

let ProtoInstance379 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance379.name = "Segment";
ProtoInstance379.USE = "hanim_l_hand";
fieldValue368ZZZ.children[10] = ProtoInstance379;

let ProtoInstance380 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance380.name = "Segment";
ProtoInstance380.USE = "hanim_r_upperarm";
fieldValue368ZZZ.children[11] = ProtoInstance380;

let ProtoInstance381 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance381.name = "Segment";
ProtoInstance381.USE = "hanim_r_forearm";
fieldValue368ZZZ.children[12] = ProtoInstance381;

let ProtoInstance382 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance382.name = "Segment";
ProtoInstance382.USE = "hanim_r_hand";
fieldValue368ZZZ.children[13] = ProtoInstance382;

let ProtoInstance383 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance383.name = "Segment";
ProtoInstance383.USE = "hanim_c4";
fieldValue368ZZZ.children[14] = ProtoInstance383;

let ProtoInstance384 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance384.name = "Segment";
ProtoInstance384.USE = "hanim_skull";
fieldValue368ZZZ.children[15] = ProtoInstance384;

ProtoInstance140ZZZ.fieldValue[4] = fieldValue368;

let fieldValue385 = browser.currentScene.createNode("fieldValue");
fieldValue385.name = "viewpoints";
let Viewpoint386 = browser.currentScene.createNode("Viewpoint");
Viewpoint386.DEF = "InclinedView";
Viewpoint386.description = "Inclined View";
Viewpoint386.position = new X3D.SFVec3f([1.62,1.05,2.06]);
Viewpoint386.orientation = new X3D.SFRotation([-0.113,0.993,0.0347,0.671]);
fieldValue385YYY.children = new X3D.MFNode();

fieldValue385ZZZ.children[0] = Viewpoint386;

let Viewpoint387 = browser.currentScene.createNode("Viewpoint");
Viewpoint387.DEF = "FrontView";
Viewpoint387.description = "Front View";
Viewpoint387.position = new X3D.SFVec3f([0,0.854,2.57665]);
fieldValue385ZZZ.children[1] = Viewpoint387;

let Viewpoint388 = browser.currentScene.createNode("Viewpoint");
Viewpoint388.DEF = "SideView";
Viewpoint388.description = "Side View";
Viewpoint388.position = new X3D.SFVec3f([2.5929,0.854,0]);
Viewpoint388.orientation = new X3D.SFRotation([0,1,0,1.57079]);
fieldValue385ZZZ.children[2] = Viewpoint388;

let Viewpoint389 = browser.currentScene.createNode("Viewpoint");
Viewpoint389.DEF = "TopView";
Viewpoint389.description = "Top View";
Viewpoint389.position = new X3D.SFVec3f([0,3.4495,0]);
Viewpoint389.orientation = new X3D.SFRotation([1,0,0,-1.57079]);
fieldValue385ZZZ.children[3] = Viewpoint389;

ProtoInstance140ZZZ.fieldValue[5] = fieldValue385;

browser.currentScene.children[5] = ProtoInstance140;

let WorldInfo390 = browser.currentScene.createNode("WorldInfo");
WorldInfo390.title = "Nancy - an HAnim compliant avatar by 3Name3D";
WorldInfo390.info = new X3D.MFString([new X3D.SFString("Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc.")]);
browser.currentScene.children[6] = WorldInfo390;

let NavigationInfo391 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo391.type = new X3D.MFString([new X3D.SFString("EXAMINE")]);
NavigationInfo391.avatarSize = new X3D.MFFloat([0.15,1.53,0.75]);
NavigationInfo391.speed = 0.5;
browser.currentScene.children[7] = NavigationInfo391;

let Group392 = browser.currentScene.createNode("Group");
Group392.DEF = "Interface";
let Transform393 = browser.currentScene.createNode("Transform");
let ProximitySensor394 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor394.DEF = "HudProx";
ProximitySensor394.size = new X3D.SFVec3f([500,100,500]);
ProximitySensor394.center = new X3D.SFVec3f([0,20,0]);
Transform393YYY.children = new X3D.MFNode();

Transform393ZZZ.children[0] = ProximitySensor394;

Group392YYY.children = new X3D.MFNode();

Group392ZZZ.children[0] = Transform393;

let Collision395 = browser.currentScene.createNode("Collision");
Collision395.DEF = "HUD";
Collision395.enabled = False;
let Transform396 = browser.currentScene.createNode("Transform");
Transform396.DEF = "HudXform";
let Transform397 = browser.currentScene.createNode("Transform");
Transform397.translation = new X3D.SFVec3f([0.01107,-0.025,-0.08]);
Transform397.scale = new X3D.SFVec3f([0.012,0.012,0.012]);
let Transform398 = browser.currentScene.createNode("Transform");
Transform398.DEF = "Stand_Text";
let TouchSensor399 = browser.currentScene.createNode("TouchSensor");
TouchSensor399.DEF = "Stand_Touch";
TouchSensor399.description = "click for behavior";
Transform398YYY.children = new X3D.MFNode();

Transform398ZZZ.children[0] = TouchSensor399;

let Shape400 = browser.currentScene.createNode("Shape");
Shape400.DEF = "Stand";
let Appearance401 = browser.currentScene.createNode("Appearance");
let Material402 = browser.currentScene.createNode("Material");
Material402.DEF = "text_color";
Material402.ambientIntensity = 0;
Material402.diffuseColor = new X3D.SFColor([0,0,0]);
Material402.emissiveColor = new X3D.SFColor([0.819,0.521,0.169]);
material = Material402;

appearance = Appearance401;

let IndexedFaceSet403 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet403.coordIndex = new X3D.MFInt32([1,30,29,-1,1,29,2,-1,31,47,46,-1,31,46,32,-1,78,77,80,-1,78,80,79,-1,96,113,112,-1,96,112,95,-1,95,112,111,-1,95,111,94,-1,94,111,110,-1,94,110,93,-1,93,110,109,-1,93,109,108,-1,93,108,100,-1,107,99,100,-1,107,100,108,-1,107,106,99,-1,106,105,98,-1,106,98,99,-1,104,97,98,-1,104,98,105,-1,103,102,104,-1,104,102,101,-1,104,101,97,-1,101,96,97,-1,101,97,101,-1,101,101,96,-1,96,101,113,-1,113,101,114,-1,115,86,85,-1,115,85,116,-1,117,87,84,-1,117,84,118,-1,119,83,120,-1,121,88,82,-1,121,82,122,-1,123,89,81,-1,123,81,124,-1,125,90,126,-1,127,92,128,-1,129,91,130,-1,54,49,50,-1,54,50,55,-1,76,75,74,-1,76,74,54,-1,54,74,73,-1,54,73,49,-1,49,73,48,-1,48,73,62,-1,48,62,61,-1,48,61,60,-1,48,60,53,-1,53,60,59,-1,53,59,53,-1,53,59,58,-1,53,58,52,-1,52,58,57,-1,52,57,51,-1,56,51,57,-1,56,55,50,-1,56,50,51,-1,62,73,72,-1,62,72,63,-1,63,72,71,-1,63,71,64,-1,64,71,70,-1,64,70,69,-1,64,69,65,-1,65,69,68,-1,65,68,67,-1,65,67,66,-1,131,40,39,-1,131,39,132,-1,133,43,42,-1,133,42,134,-1,135,37,36,-1,135,36,136,-1,137,41,38,-1,137,38,138,-1,139,44,35,-1,139,35,140,-1,141,34,142,-1,143,45,33,-1,143,33,144,-1,145,16,15,-1,145,15,146,-1,147,14,148,-1,149,17,13,-1,149,13,150,-1,151,18,12,-1,151,12,152,-1,153,19,11,-1,153,11,154,-1,155,20,10,-1,155,10,156,-1,157,9,158,-1,159,21,8,-1,159,8,160,-1,161,22,7,-1,161,7,162,-1,163,23,164,-1,165,24,6,-1,165,6,166,-1,167,25,5,-1,167,5,168,-1,169,26,170,-1,171,27,4,-1,171,4,172,-1,173,28,3,-1,173,3,174,-1,175,0,176,-1]);
let Coordinate404 = browser.currentScene.createNode("Coordinate");
Coordinate404.point = new X3D.MFVec3f([-3.21,-0.0154,0,-3.15,-0.0154,0,-3.14,-0.0467,0,-3.1,-0.0601,0,-3.05,-0.051,0,-3.04,-0.0254,0,-3.05,-0.00248,0,-3.1,0.0122,0,-3.16,0.03,0,-3.2,0.0684,0,-3.2,0.133,0,-3.16,0.17,0,-3.1,0.182,0,-3.04,0.171,0,-3.01,0.136,0,-3,0.095,0,-3.05,0.095,0,-3.06,0.125,0,-3.1,0.136,0,-3.14,0.126,0,-3.15,0.103,0,-3.14,0.0815,0,-3.1,0.0689,0,-3.04,0.0512,0,-3,0.0249,0,-2.99,-0.0195,0,-3,-0.0708,0,-3.05,-0.104,0,-3.1,-0.108,0,-3.16,-0.0947,0,-3.2,-0.0586,0,-2.86,-0.102,0,-2.9,-0.102,0,-2.94,-0.0832,0,-2.94,-0.0457,0,-2.94,0.0645,0,-2.97,0.0645,0,-2.97,0.103,0,-2.94,0.103,0,-2.94,0.158,0,-2.89,0.158,0,-2.89,0.103,0,-2.86,0.103,0,-2.86,0.0645,0,-2.89,0.0645,0,-2.89,-0.0483,0,-2.88,-0.0608,0,-2.86,-0.0612,0,-2.71,-0.000798,0,-2.71,-0.0373,0,-2.74,-0.0637,0,-2.77,-0.0624,0,-2.78,-0.0416,0,-2.77,-0.0195,0,-2.71,-0.0754,0,-2.74,-0.103,0,-2.79,-0.106,0,-2.82,-0.0865,0,-2.84,-0.0431,0,-2.82,0.000177,0,-2.78,0.0201,0,-2.73,0.0275,0,-2.71,0.0446,0,-2.72,0.0614,0,-2.74,0.0675,0,-2.77,0.0573,0,-2.78,0.039,0,-2.83,0.039,0,-2.82,0.0765,0,-2.78,0.105,0,-2.74,0.11,0,-2.71,0.107,0,-2.67,0.0849,0,-2.66,0.0526,0,-2.66,-0.0763,0,-2.65,-0.101,0,-2.7,-0.101,0,-2.61,-0.101,0,-2.61,0.103,0,-2.56,0.103,0,-2.56,0.0787,0,-2.52,0.104,0,-2.47,0.105,0,-2.43,0.0743,0,-2.43,0.038,0,-2.43,-0.101,0,-2.48,-0.101,0,-2.48,0.0224,0,-2.49,0.0514,0,-2.52,0.0627,0,-2.54,0.0505,0,-2.55,0.02,0,-2.55,-0.101,0,-2.33,0.0279,0,-2.31,0.0587,0,-2.27,0.0589,0,-2.25,0.0281,0,-2.25,-0.0232,0,-2.27,-0.0563,0,-2.31,-0.057,0,-2.33,-0.0245,0,-2.19,0.175,0,-2.19,-0.101,0,-2.25,-0.101,0,-2.25,-0.073,0,-2.26,-0.0913,0,-2.31,-0.108,0,-2.35,-0.0915,0,-2.38,-0.0424,0,-2.39,0.0243,0,-2.37,0.0809,0,-2.32,0.108,0,-2.28,0.106,0,-2.25,0.0776,0,-2.25,0.175,0,-2.48,0.0224,0,-2.43,0.038,0,-2.49,0.0514,0,-2.43,0.0743,0,-2.49,0.0514,0,-2.47,0.105,0,-2.52,0.0627,0,-2.52,0.104,0,-2.54,0.0505,0,-2.56,0.0787,0,-2.55,0.02,0,-2.56,0.0787,0,-2.61,-0.101,0,-2.55,0.02,0,-2.61,-0.101,0,-2.56,0.0787,0,-2.89,0.103,0,-2.94,0.103,0,-2.89,0.0645,0,-2.89,0.103,0,-2.94,0.103,0,-2.94,0.0645,0,-2.89,0.0645,0,-2.94,0.0645,0,-2.89,-0.0483,0,-2.94,-0.0457,0,-2.89,-0.0483,0,-2.94,-0.0832,0,-2.88,-0.0608,0,-2.9,-0.102,0,-3.06,0.125,0,-3.01,0.136,0,-3.06,0.125,0,-3.04,0.171,0,-3.1,0.136,0,-3.1,0.182,0,-3.14,0.126,0,-3.16,0.17,0,-3.15,0.103,0,-3.2,0.133,0,-3.14,0.0815,0,-3.2,0.0684,0,-3.14,0.0815,0,-3.16,0.03,0,-3.1,0.0689,0,-3.1,0.0122,0,-3.04,0.0512,0,-3.05,-0.00248,0,-3,0.0249,0,-3.05,-0.00248,0,-2.99,-0.0195,0,-3.04,-0.0254,0,-3,-0.0708,0,-3.05,-0.051,0,-3.05,-0.104,0,-3.05,-0.051,0,-3.1,-0.108,0,-3.1,-0.0601,0,-3.16,-0.0947,0,-3.14,-0.0467,0,-3.15,-0.0154,0,-3.2,-0.0586,0]);
coord = Coordinate404;

geometry = IndexedFaceSet403;

Transform398ZZZ.child[1] = Shape400;

let Transform405 = browser.currentScene.createNode("Transform");
Transform405.translation = new X3D.SFVec3f([0.04092,1.843,3.826]);
Transform405.scale = new X3D.SFVec3f([84.89,77.52,77.52]);
let Shape406 = browser.currentScene.createNode("Shape");
Shape406.DEF = "Stand_Back";
let Appearance407 = browser.currentScene.createNode("Appearance");
let Material408 = browser.currentScene.createNode("Material");
Material408.DEF = "Clear";
Material408.ambientIntensity = 0;
Material408.diffuseColor = new X3D.SFColor([0,0,0]);
Material408.transparency = 1;
material = Material408;

appearance = Appearance407;

let IndexedFaceSet409 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet409.coordIndex = new X3D.MFInt32([0,2,3,-1,2,0,1,-1]);
let Coordinate410 = browser.currentScene.createNode("Coordinate");
Coordinate410.point = new X3D.MFVec3f([-0.02572,-0.02535,-0.05,-0.02578,-0.02131,-0.05,-0.03871,-0.02131,-0.05,-0.03877,-0.02541,-0.05]);
coord = Coordinate410;

geometry = IndexedFaceSet409;

Transform405YYY.child = new X3D.undefined();

Transform405ZZZ.child[0] = Shape406;

Transform398ZZZ.children[2] = Transform405;

Transform397YYY.children = new X3D.MFNode();

Transform397ZZZ.children[0] = Transform398;

let Transform411 = browser.currentScene.createNode("Transform");
Transform411.DEF = "Walk_Text";
let TouchSensor412 = browser.currentScene.createNode("TouchSensor");
TouchSensor412.DEF = "Walk_Touch";
TouchSensor412.description = "click for behavior";
Transform411YYY.children = new X3D.MFNode();

Transform411ZZZ.children[0] = TouchSensor412;

let Shape413 = browser.currentScene.createNode("Shape");
Shape413.DEF = "WALK";
let Appearance414 = browser.currentScene.createNode("Appearance");
let Material415 = browser.currentScene.createNode("Material");
Material415.USE = "text_color";
material = Material415;

appearance = Appearance414;

let IndexedFaceSet416 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet416.coordIndex = new X3D.MFInt32([0,2,1,-1,3,2,0,-1,12,3,0,-1,4,3,12,-1,11,4,12,-1,5,4,11,-1,10,5,11,-1,6,5,10,-1,9,6,10,-1,7,6,9,-1,8,7,9,-1,15,14,13,-1,16,15,13,-1,19,18,17,-1,20,19,17,-1,27,20,17,-1,28,27,17,-1,26,20,27,-1,23,20,26,-1,21,20,23,-1,25,23,26,-1,22,21,23,-1,24,23,25,-1,29,30,31,-1,29,31,32,-1,33,34,35,-1,33,35,29,-1,29,35,36,-1,29,36,30,-1,30,36,37,-1,37,36,38,-1,37,38,39,-1,37,39,40,-1,37,40,41,-1,41,40,42,-1,41,42,41,-1,41,42,43,-1,41,43,44,-1,44,43,45,-1,44,45,46,-1,47,46,45,-1,47,32,31,-1,47,31,46,-1,38,36,48,-1,38,48,49,-1,49,48,50,-1,49,50,51,-1,51,50,52,-1,51,52,53,-1,51,53,54,-1,54,53,55,-1,54,55,56,-1,54,56,57,-1]);
let Coordinate417 = browser.currentScene.createNode("Coordinate");
Coordinate417.point = new X3D.MFVec3f([-1.88,-0.101,0,-1.96,0.175,0,-1.91,0.175,0,-1.86,-0.0195,0,-1.82,0.175,0,-1.76,0.175,0,-1.72,-0.0195,0,-1.67,0.175,0,-1.61,0.175,0,-1.69,-0.101,0,-1.75,-0.101,0,-1.79,0.111,0,-1.83,-0.101,0,-1.38,-0.101,0,-1.38,0.175,0,-1.32,0.175,0,-1.32,-0.101,0,-1.27,-0.101,0,-1.27,0.175,0,-1.22,0.175,0,-1.22,0.0304,0,-1.16,0.103,0,-1.09,0.103,0,-1.16,0.0272,0,-1.09,-0.101,0,-1.15,-0.101,0,-1.2,-0.0141,0,-1.22,-0.0363,0,-1.22,-0.101,0,-1.48,-0.0754,0,-1.48,-0.0373,0,-1.51,-0.0637,0,-1.51,-0.103,0,-1.47,-0.101,0,-1.42,-0.101,0,-1.43,-0.0763,0,-1.43,0.0526,0,-1.48,-0.000798,0,-1.48,0.0446,0,-1.5,0.0275,0,-1.55,0.0201,0,-1.54,-0.0195,0,-1.59,0.000177,0,-1.61,-0.0431,0,-1.55,-0.0416,0,-1.59,-0.0865,0,-1.54,-0.0624,0,-1.56,-0.106,0,-1.44,0.0849,0,-1.49,0.0614,0,-1.48,0.107,0,-1.51,0.0675,0,-1.52,0.11,0,-1.55,0.105,0,-1.54,0.0573,0,-1.59,0.0765,0,-1.6,0.039,0,-1.55,0.039,0]);
coord = Coordinate417;

geometry = IndexedFaceSet416;

Transform411ZZZ.child[1] = Shape413;

let Transform418 = browser.currentScene.createNode("Transform");
Transform418.translation = new X3D.SFVec3f([-0.0414,1.941,4.015]);
Transform418.scale = new X3D.SFVec3f([81.3,81.3,81.31]);
let Shape419 = browser.currentScene.createNode("Shape");
Shape419.DEF = "Walk_Back";
let Appearance420 = browser.currentScene.createNode("Appearance");
let Material421 = browser.currentScene.createNode("Material");
Material421.USE = "Clear";
material = Material421;

appearance = Appearance420;

let IndexedFaceSet422 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet422.coordIndex = new X3D.MFInt32([1,3,0,-1,3,1,2,-1]);
let Coordinate423 = browser.currentScene.createNode("Coordinate");
Coordinate423.point = new X3D.MFVec3f([-0.02381,-0.02541,-0.05,-0.0127,-0.02541,-0.05,-0.01263,-0.02139,-0.05,-0.02381,-0.02146,-0.05]);
coord = Coordinate423;

geometry = IndexedFaceSet422;

Transform418YYY.child = new X3D.undefined();

Transform418ZZZ.child[0] = Shape419;

Transform411ZZZ.children[2] = Transform418;

Transform397ZZZ.children[1] = Transform411;

let Transform424 = browser.currentScene.createNode("Transform");
Transform424.DEF = "Run_Text";
let TouchSensor425 = browser.currentScene.createNode("TouchSensor");
TouchSensor425.DEF = "Run_Touch";
TouchSensor425.description = "click for behavior";
Transform424YYY.children = new X3D.MFNode();

Transform424ZZZ.children[0] = TouchSensor425;

let Shape426 = browser.currentScene.createNode("Shape");
Shape426.DEF = "Run";
let Appearance427 = browser.currentScene.createNode("Appearance");
let Material428 = browser.currentScene.createNode("Material");
Material428.USE = "text_color";
material = Material428;

appearance = Appearance427;

let IndexedFaceSet429 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet429.coordIndex = new X3D.MFInt32([24,26,25,-1,53,39,54,-1,17,1,0,-1,17,0,16,-1,0,14,16,-1,0,15,14,-1,14,13,22,-1,14,22,16,-1,13,12,21,-1,13,21,22,-1,12,6,21,-1,12,11,7,-1,12,7,6,-1,11,8,7,-1,10,8,11,-1,10,9,8,-1,6,5,21,-1,5,4,20,-1,5,20,21,-1,4,3,19,-1,4,19,20,-1,3,2,18,-1,3,18,19,-1,18,2,1,-1,18,1,17,-1,55,32,31,-1,55,31,56,-1,57,33,30,-1,57,30,58,-1,59,29,60,-1,61,34,28,-1,61,28,62,-1,63,35,27,-1,63,27,64,-1,65,36,66,-1,67,38,68,-1,69,37,70,-1,71,23,72,-1,73,48,47,-1,73,47,74,-1,75,49,46,-1,75,46,76,-1,77,45,78,-1,79,50,44,-1,79,44,80,-1,81,51,43,-1,81,43,82,-1,83,41,84,-1,85,40,86,-1,87,52,88,-1,89,42,90,-1]);
let Coordinate430 = browser.currentScene.createNode("Coordinate");
Coordinate430.point = new X3D.MFVec3f([-0.829,-0.101,0,-0.829,0.175,0,-0.662,0.172,0,-0.622,0.148,0,-0.607,0.103,0,-0.62,0.0501,0,-0.648,0.0316,0,-0.615,-0.0063,0,-0.611,-0.0764,0,-0.601,-0.101,0,-0.664,-0.101,0,-0.671,-0.0373,0,-0.68,-0.00372,0,-0.712,0.00648,0,-0.772,0.00648,0,-0.772,-0.101,0,-0.772,0.0546,0,-0.772,0.127,0,-0.703,0.127,0,-0.673,0.118,0,-0.663,0.091,0,-0.674,0.063,0,-0.705,0.0546,0,-0.379,0.103,0,-0.379,-0.101,0,-0.432,-0.101,0,-0.432,-0.0764,0,-0.466,-0.101,0,-0.518,-0.102,0,-0.555,-0.072,0,-0.56,-0.0357,0,-0.56,0.103,0,-0.506,0.103,0,-0.506,-0.0201,0,-0.5,-0.0491,0,-0.472,-0.0604,0,-0.443,-0.0482,0,-0.433,-0.0177,0,-0.433,0.103,0,-0.331,-0.101,0,-0.331,0.103,0,-0.278,0.103,0,-0.278,0.0787,0,-0.244,0.104,0,-0.192,0.105,0,-0.154,0.0743,0,-0.149,0.038,0,-0.149,-0.101,0,-0.203,-0.101,0,-0.203,0.0224,0,-0.209,0.0514,0,-0.238,0.0627,0,-0.266,0.0505,0,-0.277,0.02,0,-0.277,-0.101,0,-0.506,-0.0201,0,-0.56,-0.0357,0,-0.5,-0.0491,0,-0.555,-0.072,0,-0.5,-0.0491,0,-0.518,-0.102,0,-0.472,-0.0604,0,-0.466,-0.101,0,-0.443,-0.0482,0,-0.432,-0.0764,0,-0.433,-0.0177,0,-0.432,-0.0764,0,-0.379,0.103,0,-0.433,-0.0177,0,-0.379,0.103,0,-0.432,-0.0764,0,-0.379,-0.101,0,-0.432,-0.0764,0,-0.203,0.0224,0,-0.149,0.038,0,-0.209,0.0514,0,-0.154,0.0743,0,-0.209,0.0514,0,-0.192,0.105,0,-0.238,0.0627,0,-0.244,0.104,0,-0.266,0.0505,0,-0.278,0.0787,0,-0.278,0.0787,0,-0.331,0.103,0,-0.277,0.02,0,-0.331,-0.101,0,-0.277,0.02,0,-0.278,0.0787,0,-0.277,0.02,0,-0.331,0.103,0]);
coord = Coordinate430;

geometry = IndexedFaceSet429;

Transform424ZZZ.child[1] = Shape426;

let Transform431 = browser.currentScene.createNode("Transform");
Transform431.translation = new X3D.SFVec3f([-0.01579,1.968,4.074]);
Transform431.scale = new X3D.SFVec3f([82.47,82.47,82.48]);
let Shape432 = browser.currentScene.createNode("Shape");
Shape432.DEF = "Run_Back";
let Appearance433 = browser.currentScene.createNode("Appearance");
let Material434 = browser.currentScene.createNode("Material");
Material434.USE = "Clear";
material = Material434;

appearance = Appearance433;

let IndexedFaceSet435 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet435.coordIndex = new X3D.MFInt32([0,2,3,-1,2,0,1,-1]);
let Coordinate436 = browser.currentScene.createNode("Coordinate");
Coordinate436.point = new X3D.MFVec3f([-0.01009,-0.02534,-0.05,-0.001382,-0.02541,-0.05,-0.001315,-0.02146,-0.05,-0.01022,-0.02146,-0.05]);
coord = Coordinate436;

geometry = IndexedFaceSet435;

Transform431YYY.child = new X3D.undefined();

Transform431ZZZ.child[0] = Shape432;

Transform424ZZZ.children[2] = Transform431;

Transform397ZZZ.children[2] = Transform424;

let Transform437 = browser.currentScene.createNode("Transform");
Transform437.DEF = "Jump_Text";
let TouchSensor438 = browser.currentScene.createNode("TouchSensor");
TouchSensor438.DEF = "Jump_Touch";
TouchSensor438.description = "click for behavior";
Transform437YYY.children = new X3D.MFNode();

Transform437ZZZ.children[0] = TouchSensor438;

let Shape439 = browser.currentScene.createNode("Shape");
Shape439.DEF = "Jump";
let Appearance440 = browser.currentScene.createNode("Appearance");
let Material441 = browser.currentScene.createNode("Material");
Material441.USE = "text_color";
material = Material441;

appearance = Appearance440;

let IndexedFaceSet442 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet442.coordIndex = new X3D.MFInt32([1,0,14,-1,1,14,2,-1,16,15,18,-1,16,18,17,-1,64,65,66,-1,67,68,69,-1,67,69,70,-1,71,72,73,-1,71,73,74,-1,75,76,77,-1,78,79,80,-1,78,80,81,-1,82,83,84,-1,82,84,85,-1,86,87,88,-1,89,90,91,-1,92,93,94,-1,95,96,97,-1,98,7,6,-1,98,6,99,-1,100,8,5,-1,100,5,101,-1,102,9,4,-1,102,4,103,-1,104,10,105,-1,106,11,3,-1,106,3,107,-1,108,12,109,-1,110,13,111,-1,112,27,26,-1,112,26,113,-1,114,28,25,-1,114,25,115,-1,116,24,117,-1,118,29,23,-1,118,23,119,-1,120,30,22,-1,120,22,121,-1,122,31,123,-1,124,34,33,-1,124,33,125,-1,126,35,32,-1,126,32,127,-1,128,21,129,-1,130,36,20,-1,130,20,131,-1,132,37,19,-1,132,19,133,-1,134,38,135,-1,136,40,137,-1,138,39,139,-1,53,58,59,-1,53,59,54,-1,53,52,58,-1,52,51,57,-1,52,57,58,-1,51,50,56,-1,51,56,57,-1,50,49,56,-1,49,48,63,-1,49,63,56,-1,48,47,63,-1,63,47,46,-1,63,46,62,-1,62,46,45,-1,62,45,44,-1,62,44,61,-1,61,44,60,-1,54,59,60,-1,44,43,42,-1,60,44,42,-1,41,55,54,-1,41,54,60,-1,41,60,42,-1]);
let Coordinate443 = browser.currentScene.createNode("Coordinate");
Coordinate443.point = new X3D.MFVec3f([0.108,0.00195,0,0.163,0.00195,0,0.166,-0.0473,0,0.194,-0.0608,0,0.222,-0.0492,0,0.228,-0.017,0,0.228,0.175,0,0.284,0.175,0,0.284,-0.02,0,0.271,-0.0798,0,0.23,-0.104,0,0.193,-0.108,0,0.155,-0.102,0,0.117,-0.0714,0,0.108,-0.0357,0,0.563,-0.101,0,0.563,0.103,0,0.615,0.103,0,0.615,0.0803,0,0.649,0.105,0,0.696,0.105,0,0.728,0.0788,0,0.76,0.104,0,0.811,0.104,0,0.842,0.081,0,0.853,0.0416,0,0.853,-0.101,0,0.799,-0.101,0,0.799,0.0305,0,0.79,0.0544,0,0.767,0.0616,0,0.743,0.0507,0,0.734,0.0228,0,0.734,-0.101,0,0.681,-0.101,0,0.681,0.0301,0,0.673,0.0532,0,0.65,0.0611,0,0.626,0.0506,0,0.617,0.0224,0,0.617,-0.101,0,0.9,-0.182,0,0.9,0.103,0,0.952,0.103,0,0.952,0.0751,0,0.968,0.0934,0,1.01,0.11,0,1.05,0.103,0,1.07,0.0796,0,1.1,0.0251,0,1.1,-0.0222,0,1.07,-0.0788,0,1.03,-0.106,0,0.988,-0.103,0,0.953,-0.0755,0,0.953,-0.182,0,1.04,-0.000177,0,1.03,-0.0446,0,0.999,-0.0603,0,0.966,-0.0453,0,0.953,-0.000177,0,0.963,0.045,0,0.998,0.063,0,1.03,0.0462,0,0.515,-0.101,0,0.462,-0.0764,0,0.462,-0.101,0,0.388,-0.0201,0,0.388,0.103,0,0.334,0.103,0,0.334,-0.0357,0,0.394,-0.0491,0,0.388,-0.0201,0,0.334,-0.0357,0,0.339,-0.072,0,0.394,-0.0491,0,0.339,-0.072,0,0.376,-0.102,0,0.422,-0.0604,0,0.394,-0.0491,0,0.376,-0.102,0,0.428,-0.101,0,0.451,-0.0482,0,0.422,-0.0604,0,0.428,-0.101,0,0.462,-0.0764,0,0.461,-0.0177,0,0.451,-0.0482,0,0.462,-0.0764,0,0.515,0.103,0,0.461,0.103,0,0.461,-0.0177,0,0.515,0.103,0,0.461,-0.0177,0,0.462,-0.0764,0,0.515,-0.101,0,0.515,0.103,0,0.462,-0.0764,0,0.284,-0.02,0,0.228,-0.017,0,0.271,-0.0798,0,0.222,-0.0492,0,0.23,-0.104,0,0.194,-0.0608,0,0.193,-0.108,0,0.194,-0.0608,0,0.155,-0.102,0,0.166,-0.0473,0,0.117,-0.0714,0,0.166,-0.0473,0,0.108,-0.0357,0,0.166,-0.0473,0,0.799,0.0305,0,0.853,0.0416,0,0.79,0.0544,0,0.842,0.081,0,0.79,0.0544,0,0.811,0.104,0,0.767,0.0616,0,0.76,0.104,0,0.743,0.0507,0,0.728,0.0788,0,0.734,0.0228,0,0.728,0.0788,0,0.681,0.0301,0,0.734,0.0228,0,0.673,0.0532,0,0.728,0.0788,0,0.673,0.0532,0,0.696,0.105,0,0.65,0.0611,0,0.649,0.105,0,0.626,0.0506,0,0.615,0.0803,0,0.617,0.0224,0,0.615,0.0803,0,0.563,-0.101,0,0.617,0.0224,0,0.563,-0.101,0,0.615,0.0803,0]);
coord = Coordinate443;

geometry = IndexedFaceSet442;

Transform437ZZZ.child[1] = Shape439;

let Transform444 = browser.currentScene.createNode("Transform");
Transform444.translation = new X3D.SFVec3f([-0.008979,1.99,4.14]);
Transform444.scale = new X3D.SFVec3f([83.79,83.79,83.79]);
let Shape445 = browser.currentScene.createNode("Shape");
Shape445.DEF = "Jump_Back";
let Appearance446 = browser.currentScene.createNode("Appearance");
let Material447 = browser.currentScene.createNode("Material");
Material447.USE = "Clear";
material = Material447;

appearance = Appearance446;

let IndexedFaceSet448 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet448.coordIndex = new X3D.MFInt32([0,2,3,-1,2,0,1,-1]);
let Coordinate449 = browser.currentScene.createNode("Coordinate");
Coordinate449.point = new X3D.MFVec3f([0.001296,-0.02541,-0.05,0.01335,-0.02527,-0.05,0.01328,-0.02152,-0.05,0.001229,-0.02146,-0.05]);
coord = Coordinate449;

geometry = IndexedFaceSet448;

Transform444YYY.child = new X3D.undefined();

Transform444ZZZ.child[0] = Shape445;

Transform437ZZZ.children[2] = Transform444;

Transform397ZZZ.children[3] = Transform437;

Transform396YYY.children = new X3D.MFNode();

Transform396ZZZ.children[0] = Transform397;

proxy = Transform396;

Group392ZZZ.children[1] = Collision395;

let Transform450 = browser.currentScene.createNode("Transform");
Transform450.DEF = "Floor";
Transform450.translation = new X3D.SFVec3f([0,-0.0125,0]);
Transform450.scale = new X3D.SFVec3f([1,0.0125,1]);
let Shape451 = browser.currentScene.createNode("Shape");
let Appearance452 = browser.currentScene.createNode("Appearance");
let Material453 = browser.currentScene.createNode("Material");
material = Material453;

appearance = Appearance452;

let Box454 = browser.currentScene.createNode("Box");
geometry = Box454;

Transform450YYY.child = new X3D.undefined();

Transform450ZZZ.child[0] = Shape451;

Group392ZZZ.children[2] = Transform450;

browser.currentScene.children[8] = Group392;

let Group455 = browser.currentScene.createNode("Group");
Group455.DEF = "Animations";
let Group456 = browser.currentScene.createNode("Group");
Group456.DEF = "Stand_Animation";
let OrientationInterpolator457 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator457.DEF = "r_ankle_RotationInterpolator_Stand";
OrientationInterpolator457.key = new X3D.MFFloat([0,1]);
OrientationInterpolator457.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group456YYY.children = new X3D.MFNode();

Group456ZZZ.children[0] = OrientationInterpolator457;

let OrientationInterpolator458 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator458.DEF = "r_knee_RotationInterpolator_Stand";
OrientationInterpolator458.key = new X3D.MFFloat([0,1]);
OrientationInterpolator458.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group456ZZZ.children[1] = OrientationInterpolator458;

let OrientationInterpolator459 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator459.DEF = "r_hip_RotationInterpolator_Stand";
OrientationInterpolator459.key = new X3D.MFFloat([0,1]);
OrientationInterpolator459.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group456ZZZ.children[2] = OrientationInterpolator459;

let OrientationInterpolator460 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator460.DEF = "l_ankle_RotationInterpolator_Stand";
OrientationInterpolator460.key = new X3D.MFFloat([0,1]);
OrientationInterpolator460.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group456ZZZ.children[3] = OrientationInterpolator460;

let OrientationInterpolator461 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator461.DEF = "l_knee_RotationInterpolator_Stand";
OrientationInterpolator461.key = new X3D.MFFloat([0,1]);
OrientationInterpolator461.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group456ZZZ.children[4] = OrientationInterpolator461;

let OrientationInterpolator462 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator462.DEF = "l_hip_RotationInterpolator_Stand";
OrientationInterpolator462.key = new X3D.MFFloat([0,1]);
OrientationInterpolator462.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group456ZZZ.children[5] = OrientationInterpolator462;

let OrientationInterpolator463 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator463.DEF = "lower_body_RotationInterpolator_Stand";
OrientationInterpolator463.key = new X3D.MFFloat([0,1]);
OrientationInterpolator463.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group456ZZZ.children[6] = OrientationInterpolator463;

let OrientationInterpolator464 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator464.DEF = "r_wrist_RotationInterpolator_Stand";
OrientationInterpolator464.key = new X3D.MFFloat([0,1]);
OrientationInterpolator464.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group456ZZZ.children[7] = OrientationInterpolator464;

let OrientationInterpolator465 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator465.DEF = "r_elbow_RotationInterpolator_Stand";
OrientationInterpolator465.key = new X3D.MFFloat([0,1]);
OrientationInterpolator465.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group456ZZZ.children[8] = OrientationInterpolator465;

let OrientationInterpolator466 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator466.DEF = "r_shoulder_RotationInterpolator_Stand";
OrientationInterpolator466.key = new X3D.MFFloat([0,1]);
OrientationInterpolator466.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group456ZZZ.children[9] = OrientationInterpolator466;

let OrientationInterpolator467 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator467.DEF = "l_wrist_RotationInterpolator_Stand";
OrientationInterpolator467.key = new X3D.MFFloat([0,1]);
OrientationInterpolator467.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group456ZZZ.children[10] = OrientationInterpolator467;

let OrientationInterpolator468 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator468.DEF = "l_elbow_RotationInterpolator_Stand";
OrientationInterpolator468.key = new X3D.MFFloat([0,1]);
OrientationInterpolator468.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group456ZZZ.children[11] = OrientationInterpolator468;

let OrientationInterpolator469 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator469.DEF = "l_shoulder_RotationInterpolator_Stand";
OrientationInterpolator469.key = new X3D.MFFloat([0,1]);
OrientationInterpolator469.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group456ZZZ.children[12] = OrientationInterpolator469;

let OrientationInterpolator470 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator470.DEF = "head_RotationInterpolator_Stand";
OrientationInterpolator470.key = new X3D.MFFloat([0,1]);
OrientationInterpolator470.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group456ZZZ.children[13] = OrientationInterpolator470;

let OrientationInterpolator471 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator471.DEF = "neck_RotationInterpolator_Stand";
OrientationInterpolator471.key = new X3D.MFFloat([0,1]);
OrientationInterpolator471.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group456ZZZ.children[14] = OrientationInterpolator471;

let OrientationInterpolator472 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator472.DEF = "upper_body_RotationInterpolator_Stand";
OrientationInterpolator472.key = new X3D.MFFloat([0,1]);
OrientationInterpolator472.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group456ZZZ.children[15] = OrientationInterpolator472;

let OrientationInterpolator473 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator473.DEF = "whole_body_RotationInterpolator_Stand";
OrientationInterpolator473.key = new X3D.MFFloat([0,1]);
OrientationInterpolator473.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group456ZZZ.children[16] = OrientationInterpolator473;

let PositionInterpolator474 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator474.DEF = "whole_body_TranslationInterpolator_Stand";
PositionInterpolator474.key = new X3D.MFFloat([0,1]);
PositionInterpolator474.keyValue = new X3D.MFVec3f([0,0,0,0,0,0]);
Group456ZZZ.children[17] = PositionInterpolator474;

let TimeSensor475 = browser.currentScene.createNode("TimeSensor");
TimeSensor475.DEF = "Stand_Time";
TimeSensor475.cycleInterval = 0.00999999977648258;
Group456ZZZ.children[18] = TimeSensor475;

Group455YYY.children = new X3D.MFNode();

Group455ZZZ.children[0] = Group456;

let Group476 = browser.currentScene.createNode("Group");
Group476.DEF = "Walk_Animation";
let OrientationInterpolator477 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator477.DEF = "r_ankle_RotationInterpolator_BasicWalk";
OrientationInterpolator477.key = new X3D.MFFloat([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator477.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0]);
Group476YYY.children = new X3D.MFNode();

Group476ZZZ.children[0] = OrientationInterpolator477;

let OrientationInterpolator478 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator478.DEF = "r_knee_RotationInterpolator_BasicWalk";
OrientationInterpolator478.key = new X3D.MFFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator478.keyValue = new X3D.MFRotation([1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573]);
Group476ZZZ.children[1] = OrientationInterpolator478;

let OrientationInterpolator479 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator479.DEF = "r_hip_RotationInterpolator_BasicWalk";
OrientationInterpolator479.key = new X3D.MFFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator479.keyValue = new X3D.MFRotation([-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
Group476ZZZ.children[2] = OrientationInterpolator479;

let OrientationInterpolator480 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator480.DEF = "l_ankle_RotationInterpolator_BasicWalk";
OrientationInterpolator480.key = new X3D.MFFloat([0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator480.keyValue = new X3D.MFRotation([-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714]);
Group476ZZZ.children[3] = OrientationInterpolator480;

let OrientationInterpolator481 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator481.DEF = "l_knee_RotationInterpolator_BasicWalk";
OrientationInterpolator481.key = new X3D.MFFloat([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator481.keyValue = new X3D.MFRotation([1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
Group476ZZZ.children[4] = OrientationInterpolator481;

let OrientationInterpolator482 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator482.DEF = "l_hip_RotationInterpolator_BasicWalk";
OrientationInterpolator482.key = new X3D.MFFloat([0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator482.keyValue = new X3D.MFRotation([-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
Group476ZZZ.children[5] = OrientationInterpolator482;

let OrientationInterpolator483 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator483.DEF = "lower_body_RotationInterpolator_BasicWalk";
OrientationInterpolator483.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator483.keyValue = new X3D.MFRotation([0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
Group476ZZZ.children[6] = OrientationInterpolator483;

let OrientationInterpolator484 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator484.DEF = "r_wrist_RotationInterpolator_BasicWalk";
OrientationInterpolator484.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator484.keyValue = new X3D.MFRotation([-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]);
Group476ZZZ.children[7] = OrientationInterpolator484;

let OrientationInterpolator485 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator485.DEF = "r_elbow_RotationInterpolator_BasicWalk";
OrientationInterpolator485.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator485.keyValue = new X3D.MFRotation([-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508]);
Group476ZZZ.children[8] = OrientationInterpolator485;

let OrientationInterpolator486 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator486.DEF = "r_shoulder_RotationInterpolator_BasicWalk";
OrientationInterpolator486.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator486.keyValue = new X3D.MFRotation([-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346]);
Group476ZZZ.children[9] = OrientationInterpolator486;

let OrientationInterpolator487 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator487.DEF = "l_wrist_RotationInterpolator_BasicWalk";
OrientationInterpolator487.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator487.keyValue = new X3D.MFRotation([0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076]);
Group476ZZZ.children[10] = OrientationInterpolator487;

let OrientationInterpolator488 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator488.DEF = "l_elbow_RotationInterpolator_BasicWalk";
OrientationInterpolator488.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator488.keyValue = new X3D.MFRotation([-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878]);
Group476ZZZ.children[11] = OrientationInterpolator488;

let OrientationInterpolator489 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator489.DEF = "l_shoulder_RotationInterpolator_BasicWalk";
OrientationInterpolator489.key = new X3D.MFFloat([0,0.375,0.9167,1]);
OrientationInterpolator489.keyValue = new X3D.MFRotation([1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189]);
Group476ZZZ.children[12] = OrientationInterpolator489;

let OrientationInterpolator490 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator490.DEF = "head_RotationInterpolator_BasicWalk";
OrientationInterpolator490.key = new X3D.MFFloat([0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator490.keyValue = new X3D.MFRotation([0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642]);
Group476ZZZ.children[13] = OrientationInterpolator490;

let OrientationInterpolator491 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator491.DEF = "neck_RotationInterpolator_BasicWalk";
OrientationInterpolator491.key = new X3D.MFFloat([0,1]);
OrientationInterpolator491.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group476ZZZ.children[14] = OrientationInterpolator491;

let OrientationInterpolator492 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator492.DEF = "upper_body_RotationInterpolator_BasicWalk";
OrientationInterpolator492.key = new X3D.MFFloat([0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator492.keyValue = new X3D.MFRotation([0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
Group476ZZZ.children[15] = OrientationInterpolator492;

let OrientationInterpolator493 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator493.DEF = "whole_body_RotationInterpolator_BasicWalk";
OrientationInterpolator493.key = new X3D.MFFloat([0,1]);
OrientationInterpolator493.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group476ZZZ.children[16] = OrientationInterpolator493;

let PositionInterpolator494 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator494.DEF = "whole_body_TranslationInterpolator_BasicWalk";
PositionInterpolator494.key = new X3D.MFFloat([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator494.keyValue = new X3D.MFVec3f([0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
Group476ZZZ.children[17] = PositionInterpolator494;

let TimeSensor495 = browser.currentScene.createNode("TimeSensor");
TimeSensor495.DEF = "Walk_Time";
TimeSensor495.cycleInterval = 2;
TimeSensor495.loop = True;
TimeSensor495.startTime = -1;
Group476ZZZ.children[18] = TimeSensor495;

Group455ZZZ.children[1] = Group476;

let Group496 = browser.currentScene.createNode("Group");
Group496.DEF = "Run_Animation";
let OrientationInterpolator497 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator497.DEF = "r_ankle_RotationInterpolator_Run";
OrientationInterpolator497.key = new X3D.MFFloat([0,0.4909,0.7091,0.8,0.8182,1]);
OrientationInterpolator497.keyValue = new X3D.MFRotation([1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.09676,-1,0,0,0.3274,-1,0,0,0.3278,1,0,0,0.2323]);
Group496YYY.children = new X3D.MFNode();

Group496ZZZ.children[0] = OrientationInterpolator497;

let OrientationInterpolator498 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator498.DEF = "r_knee_RotationInterpolator_Run";
OrientationInterpolator498.key = new X3D.MFFloat([0,0.03636,0.2182,0.4909,0.7455,1]);
OrientationInterpolator498.keyValue = new X3D.MFRotation([1,0,0,0.7004,1,0,0,1.011,1,0,0,1.892,1,0,0,1.188,1,0,0,0.3964,1,0,0,0.7004]);
Group496ZZZ.children[1] = OrientationInterpolator498;

let OrientationInterpolator499 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator499.DEF = "r_hip_RotationInterpolator_Run";
OrientationInterpolator499.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator499.keyValue = new X3D.MFRotation([0.9999,0.00293,-0.00989,0.402,-1,0.004977,-0.00497,0.5943,-1,0.003265,-0.001752,1.178,-0.9999,0.00815,-0.01093,0.3031,0.9999,0.00293,-0.00989,0.402]);
Group496ZZZ.children[2] = OrientationInterpolator499;

let OrientationInterpolator500 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator500.DEF = "l_ankle_RotationInterpolator_Run";
OrientationInterpolator500.key = new X3D.MFFloat([0,0.2182,0.3091,0.4909,1]);
OrientationInterpolator500.keyValue = new X3D.MFRotation([1,0,0,0.03543,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03543]);
Group496ZZZ.children[3] = OrientationInterpolator500;

let OrientationInterpolator501 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator501.DEF = "l_knee_RotationInterpolator_Run";
OrientationInterpolator501.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator501.keyValue = new X3D.MFRotation([1,0,0,1.108,1,0,0,0.4265,1,0,0,0.7052,1,0,0,2.179,1,0,0,1.108]);
Group496ZZZ.children[4] = OrientationInterpolator501;

let OrientationInterpolator502 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator502.DEF = "l_hip_RotationInterpolator_Run";
OrientationInterpolator502.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator502.keyValue = new X3D.MFRotation([-0.9986,0.03354,0.04001,1.212,-0.9889,0.1328,0.06696,0.4025,0.9894,0.1453,0.009351,0.4114,-0.9963,0.07032,0.05003,0.7035,-0.9986,0.03354,0.04001,1.212]);
Group496ZZZ.children[5] = OrientationInterpolator502;

let OrientationInterpolator503 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator503.DEF = "lower_body_RotationInterpolator_Run";
OrientationInterpolator503.key = new X3D.MFFloat([0,1]);
OrientationInterpolator503.keyValue = new X3D.MFRotation([0.9969,-0.05444,0.05596,0.07687,0.9969,-0.05444,0.05596,0.07687]);
Group496ZZZ.children[6] = OrientationInterpolator503;

let OrientationInterpolator504 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator504.DEF = "r_wrist_RotationInterpolator_Run";
OrientationInterpolator504.key = new X3D.MFFloat([0,1]);
OrientationInterpolator504.keyValue = new X3D.MFRotation([-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273]);
Group496ZZZ.children[7] = OrientationInterpolator504;

let OrientationInterpolator505 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator505.DEF = "r_elbow_RotationInterpolator_Run";
OrientationInterpolator505.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator505.keyValue = new X3D.MFRotation([0.9353,-0.2978,-0.191,4.222,-0.9362,0.2924,-0.1952,1.05,0.9941,-0.09719,-0.04725,4.512,-0.9594,0.2653,0.09579,1.525,0.9353,-0.2978,-0.191,4.222]);
Group496ZZZ.children[8] = OrientationInterpolator505;

let OrientationInterpolator506 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator506.DEF = "r_shoulder_RotationInterpolator_Run";
OrientationInterpolator506.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator506.keyValue = new X3D.MFRotation([-1,0,0,0.6979,0.9094,0.2062,-0.3613,0.4157,0.9637,0.1537,-0.2185,1.353,0.4864,0.08841,-0.8693,0.1716,-1,0,0,0.6979]);
Group496ZZZ.children[9] = OrientationInterpolator506;

let OrientationInterpolator507 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator507.DEF = "l_wrist_RotationInterpolator_Run";
OrientationInterpolator507.key = new X3D.MFFloat([0,1]);
OrientationInterpolator507.keyValue = new X3D.MFRotation([-0.0240995,-0.999682,0.00741506,0.120409,-0.0240995,-0.999682,0.00741506,0.120409]);
Group496ZZZ.children[10] = OrientationInterpolator507;

let OrientationInterpolator508 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator508.DEF = "l_elbow_RotationInterpolator_Run";
OrientationInterpolator508.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator508.keyValue = new X3D.MFRotation([0.9985,0.03887,0.03802,4.689,-0.965,-0.1889,-0.1821,1.415,0.9758,0.1563,0.1529,4.666,-0.9956,-0.0936,0.009826,1.126,0.9985,0.03887,0.03802,4.689]);
Group496ZZZ.children[11] = OrientationInterpolator508;

let OrientationInterpolator509 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator509.DEF = "l_shoulder_RotationInterpolator_Run";
OrientationInterpolator509.key = new X3D.MFFloat([0,0.2182,0.4909,0.7455,1]);
OrientationInterpolator509.keyValue = new X3D.MFRotation([0.9907,-0.07264,0.115,1.135,0.9291,-0.1222,0.349,0.1695,-0.9892,0.1364,-0.05394,0.5112,0.9942,-0.0002052,0.1073,0.4975,0.9907,-0.07264,0.115,1.135]);
Group496ZZZ.children[12] = OrientationInterpolator509;

let OrientationInterpolator510 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator510.DEF = "head_RotationInterpolator_Run";
OrientationInterpolator510.key = new X3D.MFFloat([0,0.4909,1]);
OrientationInterpolator510.keyValue = new X3D.MFRotation([0.6517,-0.7559,0.06211,0.2508,0.6467,0.7527,-0.1238,0.2344,0.6517,-0.7559,0.06211,0.2508]);
Group496ZZZ.children[13] = OrientationInterpolator510;

let OrientationInterpolator511 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator511.DEF = "neck_RotationInterpolator_Run";
OrientationInterpolator511.key = new X3D.MFFloat([0,1]);
OrientationInterpolator511.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group496ZZZ.children[14] = OrientationInterpolator511;

let OrientationInterpolator512 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator512.DEF = "upper_body_RotationInterpolator_Run";
OrientationInterpolator512.key = new X3D.MFFloat([0,0.2545,0.4909,0.7636,1]);
OrientationInterpolator512.keyValue = new X3D.MFRotation([0.7651,0.6382,0.08586,0.2712,0.9999,0.002845,-0.01547,0.3756,0.7459,-0.6505,-0.1432,0.2416,0.9984,0.05536,-0.01154,0.3488,0.7651,0.6382,0.08586,0.2712]);
Group496ZZZ.children[15] = OrientationInterpolator512;

let OrientationInterpolator513 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator513.DEF = "whole_body_RotationInterpolator_Run";
OrientationInterpolator513.key = new X3D.MFFloat([0,1]);
OrientationInterpolator513.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
Group496ZZZ.children[16] = OrientationInterpolator513;

let PositionInterpolator514 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator514.DEF = "whole_body_TranslationInterpolator_Run";
PositionInterpolator514.key = new X3D.MFFloat([0,0.2182,0.2909,0.3091,0.7091,0.8,0.8182,1]);
PositionInterpolator514.keyValue = new X3D.MFVec3f([0,-0.0351,0,0,-0.0351,0,0,-0.04087,0,0,-0.04886,0,0,-0.04051,0,0,-0.03666,0,0,-0.03666,0,0,-0.0351,0]);
Group496ZZZ.children[17] = PositionInterpolator514;

let TimeSensor515 = browser.currentScene.createNode("TimeSensor");
TimeSensor515.DEF = "Run_Time";
TimeSensor515.loop = True;
TimeSensor515.startTime = -1;
Group496ZZZ.children[18] = TimeSensor515;

Group455ZZZ.children[2] = Group496;

let Group516 = browser.currentScene.createNode("Group");
Group516.DEF = "Jump_Animation";
let OrientationInterpolator517 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator517.DEF = "r_ankle_RotationInterpolator_Jump";
OrientationInterpolator517.key = new X3D.MFFloat([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator517.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,0.3001,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0]);
Group516YYY.children = new X3D.MFNode();

Group516ZZZ.children[0] = OrientationInterpolator517;

let OrientationInterpolator518 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator518.DEF = "r_knee_RotationInterpolator_Jump";
OrientationInterpolator518.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator518.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,2.005,1,0,0,2.005,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0]);
Group516ZZZ.children[1] = OrientationInterpolator518;

let OrientationInterpolator519 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator519.DEF = "r_hip_RotationInterpolator_Jump";
OrientationInterpolator519.key = new X3D.MFFloat([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator519.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,4.433,1,0,0,4.433,1,0,0,4.647,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0]);
Group516ZZZ.children[2] = OrientationInterpolator519;

let OrientationInterpolator520 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator520.DEF = "l_ankle_RotationInterpolator_Jump";
OrientationInterpolator520.key = new X3D.MFFloat([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator520.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0]);
Group516ZZZ.children[3] = OrientationInterpolator520;

let OrientationInterpolator521 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator521.DEF = "l_knee_RotationInterpolator_Jump";
OrientationInterpolator521.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator521.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0]);
Group516ZZZ.children[4] = OrientationInterpolator521;

let OrientationInterpolator522 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator522.DEF = "l_hip_RotationInterpolator_Jump";
OrientationInterpolator522.key = new X3D.MFFloat([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator522.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0]);
Group516ZZZ.children[5] = OrientationInterpolator522;

let OrientationInterpolator523 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator523.DEF = "lower_body_RotationInterpolator_Jump";
OrientationInterpolator523.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator523.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0]);
Group516ZZZ.children[6] = OrientationInterpolator523;

let OrientationInterpolator524 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator524.DEF = "r_wrist_RotationInterpolator_Jump";
OrientationInterpolator524.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator524.keyValue = new X3D.MFRotation([0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
Group516ZZZ.children[7] = OrientationInterpolator524;

let OrientationInterpolator525 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator525.DEF = "r_elbow_RotationInterpolator_Jump";
OrientationInterpolator525.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator525.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
Group516ZZZ.children[8] = OrientationInterpolator525;

let OrientationInterpolator526 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator526.DEF = "r_shoulder_RotationInterpolator_Jump";
OrientationInterpolator526.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator526.keyValue = new X3D.MFRotation([0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
Group516ZZZ.children[9] = OrientationInterpolator526;

let OrientationInterpolator527 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator527.DEF = "l_wrist_RotationInterpolator_Jump";
OrientationInterpolator527.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator527.keyValue = new X3D.MFRotation([0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0]);
Group516ZZZ.children[10] = OrientationInterpolator527;

let OrientationInterpolator528 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator528.DEF = "l_elbow_RotationInterpolator_Jump";
OrientationInterpolator528.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator528.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0]);
Group516ZZZ.children[11] = OrientationInterpolator528;

let OrientationInterpolator529 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator529.DEF = "l_shoulder_RotationInterpolator_Jump";
OrientationInterpolator529.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator529.keyValue = new X3D.MFRotation([0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0]);
Group516ZZZ.children[12] = OrientationInterpolator529;

let OrientationInterpolator530 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator530.DEF = "head_RotationInterpolator_Jump";
OrientationInterpolator530.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator530.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0]);
Group516ZZZ.children[13] = OrientationInterpolator530;

let OrientationInterpolator531 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator531.DEF = "neck_RotationInterpolator_Jump";
OrientationInterpolator531.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator531.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0]);
Group516ZZZ.children[14] = OrientationInterpolator531;

let OrientationInterpolator532 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator532.DEF = "upper_body_RotationInterpolator_Jump";
OrientationInterpolator532.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.76,0.88,1]);
OrientationInterpolator532.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,1.038,1,0,0,1.038,-1,0,0,0.1057,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0]);
Group516ZZZ.children[15] = OrientationInterpolator532;

let OrientationInterpolator533 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator533.DEF = "whole_body_RotationInterpolator_Jump";
OrientationInterpolator533.key = new X3D.MFFloat([0,0.28,0.32,0.48,0.64,0.76,1]);
OrientationInterpolator533.keyValue = new X3D.MFRotation([0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
Group516ZZZ.children[16] = OrientationInterpolator533;

let PositionInterpolator534 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator534.DEF = "whole_body_TranslationInterpolator_Jump";
PositionInterpolator534.key = new X3D.MFFloat([0,0.04,0.08,0.12,0.16,0.2,0.24,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.8,0.84,0.88,0.92,0.96,1]);
PositionInterpolator534.keyValue = new X3D.MFVec3f([0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.3269,-0.1499,-0.0008616,-0.13,-0.06358,-0.0005128,-0.03123,-0.05488,0.0004779,0.053,0.02732,0.0001728,0.4148,0.006873,0,0.03045,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0]);
Group516ZZZ.children[17] = PositionInterpolator534;

let TimeSensor535 = browser.currentScene.createNode("TimeSensor");
TimeSensor535.DEF = "Jump_Time";
TimeSensor535.cycleInterval = 2;
TimeSensor535.startTime = -1;
Group516ZZZ.children[18] = TimeSensor535;

Group455ZZZ.children[3] = Group516;

browser.currentScene.children[9] = Group455;

let ROUTE536 = browser.currentScene.createNode("ROUTE");
ROUTE536.fromNode = "HudProx";
ROUTE536.fromField = "position_changed";
ROUTE536.toNode = "HudXform";
ROUTE536.toField = "set_translation";
browser.currentScene.children[10] = ROUTE536;

let ROUTE537 = browser.currentScene.createNode("ROUTE");
ROUTE537.fromNode = "HudProx";
ROUTE537.fromField = "orientation_changed";
ROUTE537.toNode = "HudXform";
ROUTE537.toField = "set_rotation";
browser.currentScene.children[11] = ROUTE537;

let ROUTE538 = browser.currentScene.createNode("ROUTE");
ROUTE538.fromNode = "Stand_Touch";
ROUTE538.fromField = "touchTime";
ROUTE538.toNode = "Walk_Time";
ROUTE538.toField = "set_stopTime";
browser.currentScene.children[12] = ROUTE538;

let ROUTE539 = browser.currentScene.createNode("ROUTE");
ROUTE539.fromNode = "Stand_Touch";
ROUTE539.fromField = "touchTime";
ROUTE539.toNode = "Run_Time";
ROUTE539.toField = "set_stopTime";
browser.currentScene.children[13] = ROUTE539;

let ROUTE540 = browser.currentScene.createNode("ROUTE");
ROUTE540.fromNode = "Stand_Touch";
ROUTE540.fromField = "touchTime";
ROUTE540.toNode = "Jump_Time";
ROUTE540.toField = "set_stopTime";
browser.currentScene.children[14] = ROUTE540;

let ROUTE541 = browser.currentScene.createNode("ROUTE");
ROUTE541.fromNode = "Stand_Touch";
ROUTE541.fromField = "touchTime";
ROUTE541.toNode = "Stand_Time";
ROUTE541.toField = "set_startTime";
browser.currentScene.children[15] = ROUTE541;

let ROUTE542 = browser.currentScene.createNode("ROUTE");
ROUTE542.fromNode = "Walk_Touch";
ROUTE542.fromField = "touchTime";
ROUTE542.toNode = "Stand_Time";
ROUTE542.toField = "set_stopTime";
browser.currentScene.children[16] = ROUTE542;

let ROUTE543 = browser.currentScene.createNode("ROUTE");
ROUTE543.fromNode = "Walk_Touch";
ROUTE543.fromField = "touchTime";
ROUTE543.toNode = "Run_Time";
ROUTE543.toField = "set_stopTime";
browser.currentScene.children[17] = ROUTE543;

let ROUTE544 = browser.currentScene.createNode("ROUTE");
ROUTE544.fromNode = "Walk_Touch";
ROUTE544.fromField = "touchTime";
ROUTE544.toNode = "Jump_Time";
ROUTE544.toField = "set_stopTime";
browser.currentScene.children[18] = ROUTE544;

let ROUTE545 = browser.currentScene.createNode("ROUTE");
ROUTE545.fromNode = "Walk_Touch";
ROUTE545.fromField = "touchTime";
ROUTE545.toNode = "Walk_Time";
ROUTE545.toField = "set_startTime";
browser.currentScene.children[19] = ROUTE545;

let ROUTE546 = browser.currentScene.createNode("ROUTE");
ROUTE546.fromNode = "Run_Touch";
ROUTE546.fromField = "touchTime";
ROUTE546.toNode = "Stand_Time";
ROUTE546.toField = "set_stopTime";
browser.currentScene.children[20] = ROUTE546;

let ROUTE547 = browser.currentScene.createNode("ROUTE");
ROUTE547.fromNode = "Run_Touch";
ROUTE547.fromField = "touchTime";
ROUTE547.toNode = "Walk_Time";
ROUTE547.toField = "set_stopTime";
browser.currentScene.children[21] = ROUTE547;

let ROUTE548 = browser.currentScene.createNode("ROUTE");
ROUTE548.fromNode = "Run_Touch";
ROUTE548.fromField = "touchTime";
ROUTE548.toNode = "Jump_Time";
ROUTE548.toField = "set_stopTime";
browser.currentScene.children[22] = ROUTE548;

let ROUTE549 = browser.currentScene.createNode("ROUTE");
ROUTE549.fromNode = "Run_Touch";
ROUTE549.fromField = "touchTime";
ROUTE549.toNode = "Run_Time";
ROUTE549.toField = "set_startTime";
browser.currentScene.children[23] = ROUTE549;

let ROUTE550 = browser.currentScene.createNode("ROUTE");
ROUTE550.fromNode = "Jump_Touch";
ROUTE550.fromField = "touchTime";
ROUTE550.toNode = "Stand_Time";
ROUTE550.toField = "set_stopTime";
browser.currentScene.children[24] = ROUTE550;

let ROUTE551 = browser.currentScene.createNode("ROUTE");
ROUTE551.fromNode = "Jump_Touch";
ROUTE551.fromField = "touchTime";
ROUTE551.toNode = "Walk_Time";
ROUTE551.toField = "set_stopTime";
browser.currentScene.children[25] = ROUTE551;

let ROUTE552 = browser.currentScene.createNode("ROUTE");
ROUTE552.fromNode = "Jump_Touch";
ROUTE552.fromField = "touchTime";
ROUTE552.toNode = "Run_Time";
ROUTE552.toField = "set_stopTime";
browser.currentScene.children[26] = ROUTE552;

let ROUTE553 = browser.currentScene.createNode("ROUTE");
ROUTE553.fromNode = "Jump_Touch";
ROUTE553.fromField = "touchTime";
ROUTE553.toNode = "Jump_Time";
ROUTE553.toField = "set_startTime";
browser.currentScene.children[27] = ROUTE553;

let ROUTE554 = browser.currentScene.createNode("ROUTE");
ROUTE554.fromNode = "Stand_Time";
ROUTE554.fromField = "fraction_changed";
ROUTE554.toNode = "r_ankle_RotationInterpolator_Stand";
ROUTE554.toField = "set_fraction";
browser.currentScene.children[28] = ROUTE554;

let ROUTE555 = browser.currentScene.createNode("ROUTE");
ROUTE555.fromNode = "Stand_Time";
ROUTE555.fromField = "fraction_changed";
ROUTE555.toNode = "r_knee_RotationInterpolator_Stand";
ROUTE555.toField = "set_fraction";
browser.currentScene.children[29] = ROUTE555;

let ROUTE556 = browser.currentScene.createNode("ROUTE");
ROUTE556.fromNode = "Stand_Time";
ROUTE556.fromField = "fraction_changed";
ROUTE556.toNode = "r_hip_RotationInterpolator_Stand";
ROUTE556.toField = "set_fraction";
browser.currentScene.children[30] = ROUTE556;

let ROUTE557 = browser.currentScene.createNode("ROUTE");
ROUTE557.fromNode = "Stand_Time";
ROUTE557.fromField = "fraction_changed";
ROUTE557.toNode = "l_ankle_RotationInterpolator_Stand";
ROUTE557.toField = "set_fraction";
browser.currentScene.children[31] = ROUTE557;

let ROUTE558 = browser.currentScene.createNode("ROUTE");
ROUTE558.fromNode = "Stand_Time";
ROUTE558.fromField = "fraction_changed";
ROUTE558.toNode = "l_knee_RotationInterpolator_Stand";
ROUTE558.toField = "set_fraction";
browser.currentScene.children[32] = ROUTE558;

let ROUTE559 = browser.currentScene.createNode("ROUTE");
ROUTE559.fromNode = "Stand_Time";
ROUTE559.fromField = "fraction_changed";
ROUTE559.toNode = "l_hip_RotationInterpolator_Stand";
ROUTE559.toField = "set_fraction";
browser.currentScene.children[33] = ROUTE559;

let ROUTE560 = browser.currentScene.createNode("ROUTE");
ROUTE560.fromNode = "Stand_Time";
ROUTE560.fromField = "fraction_changed";
ROUTE560.toNode = "lower_body_RotationInterpolator_Stand";
ROUTE560.toField = "set_fraction";
browser.currentScene.children[34] = ROUTE560;

let ROUTE561 = browser.currentScene.createNode("ROUTE");
ROUTE561.fromNode = "Stand_Time";
ROUTE561.fromField = "fraction_changed";
ROUTE561.toNode = "r_wrist_RotationInterpolator_Stand";
ROUTE561.toField = "set_fraction";
browser.currentScene.children[35] = ROUTE561;

let ROUTE562 = browser.currentScene.createNode("ROUTE");
ROUTE562.fromNode = "Stand_Time";
ROUTE562.fromField = "fraction_changed";
ROUTE562.toNode = "r_elbow_RotationInterpolator_Stand";
ROUTE562.toField = "set_fraction";
browser.currentScene.children[36] = ROUTE562;

let ROUTE563 = browser.currentScene.createNode("ROUTE");
ROUTE563.fromNode = "Stand_Time";
ROUTE563.fromField = "fraction_changed";
ROUTE563.toNode = "r_shoulder_RotationInterpolator_Stand";
ROUTE563.toField = "set_fraction";
browser.currentScene.children[37] = ROUTE563;

let ROUTE564 = browser.currentScene.createNode("ROUTE");
ROUTE564.fromNode = "Stand_Time";
ROUTE564.fromField = "fraction_changed";
ROUTE564.toNode = "l_wrist_RotationInterpolator_Stand";
ROUTE564.toField = "set_fraction";
browser.currentScene.children[38] = ROUTE564;

let ROUTE565 = browser.currentScene.createNode("ROUTE");
ROUTE565.fromNode = "Stand_Time";
ROUTE565.fromField = "fraction_changed";
ROUTE565.toNode = "l_elbow_RotationInterpolator_Stand";
ROUTE565.toField = "set_fraction";
browser.currentScene.children[39] = ROUTE565;

let ROUTE566 = browser.currentScene.createNode("ROUTE");
ROUTE566.fromNode = "Stand_Time";
ROUTE566.fromField = "fraction_changed";
ROUTE566.toNode = "l_shoulder_RotationInterpolator_Stand";
ROUTE566.toField = "set_fraction";
browser.currentScene.children[40] = ROUTE566;

let ROUTE567 = browser.currentScene.createNode("ROUTE");
ROUTE567.fromNode = "Stand_Time";
ROUTE567.fromField = "fraction_changed";
ROUTE567.toNode = "head_RotationInterpolator_Stand";
ROUTE567.toField = "set_fraction";
browser.currentScene.children[41] = ROUTE567;

let ROUTE568 = browser.currentScene.createNode("ROUTE");
ROUTE568.fromNode = "Stand_Time";
ROUTE568.fromField = "fraction_changed";
ROUTE568.toNode = "neck_RotationInterpolator_Stand";
ROUTE568.toField = "set_fraction";
browser.currentScene.children[42] = ROUTE568;

let ROUTE569 = browser.currentScene.createNode("ROUTE");
ROUTE569.fromNode = "Stand_Time";
ROUTE569.fromField = "fraction_changed";
ROUTE569.toNode = "upper_body_RotationInterpolator_Stand";
ROUTE569.toField = "set_fraction";
browser.currentScene.children[43] = ROUTE569;

let ROUTE570 = browser.currentScene.createNode("ROUTE");
ROUTE570.fromNode = "Stand_Time";
ROUTE570.fromField = "fraction_changed";
ROUTE570.toNode = "whole_body_RotationInterpolator_Stand";
ROUTE570.toField = "set_fraction";
browser.currentScene.children[44] = ROUTE570;

let ROUTE571 = browser.currentScene.createNode("ROUTE");
ROUTE571.fromNode = "Stand_Time";
ROUTE571.fromField = "fraction_changed";
ROUTE571.toNode = "whole_body_TranslationInterpolator_Stand";
ROUTE571.toField = "set_fraction";
browser.currentScene.children[45] = ROUTE571;

let ROUTE572 = browser.currentScene.createNode("ROUTE");
ROUTE572.fromNode = "r_ankle_RotationInterpolator_Stand";
ROUTE572.fromField = "value_changed";
ROUTE572.toNode = "hanim_r_ankle";
ROUTE572.toField = "set_rotation";
browser.currentScene.children[46] = ROUTE572;

let ROUTE573 = browser.currentScene.createNode("ROUTE");
ROUTE573.fromNode = "r_knee_RotationInterpolator_Stand";
ROUTE573.fromField = "value_changed";
ROUTE573.toNode = "hanim_r_knee";
ROUTE573.toField = "set_rotation";
browser.currentScene.children[47] = ROUTE573;

let ROUTE574 = browser.currentScene.createNode("ROUTE");
ROUTE574.fromNode = "r_hip_RotationInterpolator_Stand";
ROUTE574.fromField = "value_changed";
ROUTE574.toNode = "hanim_r_hip";
ROUTE574.toField = "set_rotation";
browser.currentScene.children[48] = ROUTE574;

let ROUTE575 = browser.currentScene.createNode("ROUTE");
ROUTE575.fromNode = "l_ankle_RotationInterpolator_Stand";
ROUTE575.fromField = "value_changed";
ROUTE575.toNode = "hanim_l_ankle";
ROUTE575.toField = "set_rotation";
browser.currentScene.children[49] = ROUTE575;

let ROUTE576 = browser.currentScene.createNode("ROUTE");
ROUTE576.fromNode = "l_knee_RotationInterpolator_Stand";
ROUTE576.fromField = "value_changed";
ROUTE576.toNode = "hanim_l_knee";
ROUTE576.toField = "set_rotation";
browser.currentScene.children[50] = ROUTE576;

let ROUTE577 = browser.currentScene.createNode("ROUTE");
ROUTE577.fromNode = "l_hip_RotationInterpolator_Stand";
ROUTE577.fromField = "value_changed";
ROUTE577.toNode = "hanim_l_hip";
ROUTE577.toField = "set_rotation";
browser.currentScene.children[51] = ROUTE577;

let ROUTE578 = browser.currentScene.createNode("ROUTE");
ROUTE578.fromNode = "lower_body_RotationInterpolator_Stand";
ROUTE578.fromField = "value_changed";
ROUTE578.toNode = "hanim_sacroiliac";
ROUTE578.toField = "set_rotation";
browser.currentScene.children[52] = ROUTE578;

let ROUTE579 = browser.currentScene.createNode("ROUTE");
ROUTE579.fromNode = "r_wrist_RotationInterpolator_Stand";
ROUTE579.fromField = "value_changed";
ROUTE579.toNode = "hanim_r_wrist";
ROUTE579.toField = "set_rotation";
browser.currentScene.children[53] = ROUTE579;

let ROUTE580 = browser.currentScene.createNode("ROUTE");
ROUTE580.fromNode = "r_elbow_RotationInterpolator_Stand";
ROUTE580.fromField = "value_changed";
ROUTE580.toNode = "hanim_r_elbow";
ROUTE580.toField = "set_rotation";
browser.currentScene.children[54] = ROUTE580;

let ROUTE581 = browser.currentScene.createNode("ROUTE");
ROUTE581.fromNode = "r_shoulder_RotationInterpolator_Stand";
ROUTE581.fromField = "value_changed";
ROUTE581.toNode = "hanim_r_shoulder";
ROUTE581.toField = "set_rotation";
browser.currentScene.children[55] = ROUTE581;

let ROUTE582 = browser.currentScene.createNode("ROUTE");
ROUTE582.fromNode = "l_wrist_RotationInterpolator_Stand";
ROUTE582.fromField = "value_changed";
ROUTE582.toNode = "hanim_l_wrist";
ROUTE582.toField = "set_rotation";
browser.currentScene.children[56] = ROUTE582;

let ROUTE583 = browser.currentScene.createNode("ROUTE");
ROUTE583.fromNode = "l_elbow_RotationInterpolator_Stand";
ROUTE583.fromField = "value_changed";
ROUTE583.toNode = "hanim_l_elbow";
ROUTE583.toField = "set_rotation";
browser.currentScene.children[57] = ROUTE583;

let ROUTE584 = browser.currentScene.createNode("ROUTE");
ROUTE584.fromNode = "l_shoulder_RotationInterpolator_Stand";
ROUTE584.fromField = "value_changed";
ROUTE584.toNode = "hanim_l_shoulder";
ROUTE584.toField = "set_rotation";
browser.currentScene.children[58] = ROUTE584;

let ROUTE585 = browser.currentScene.createNode("ROUTE");
ROUTE585.fromNode = "head_RotationInterpolator_Stand";
ROUTE585.fromField = "value_changed";
ROUTE585.toNode = "hanim_skullbase";
ROUTE585.toField = "set_rotation";
browser.currentScene.children[59] = ROUTE585;

let ROUTE586 = browser.currentScene.createNode("ROUTE");
ROUTE586.fromNode = "neck_RotationInterpolator_Stand";
ROUTE586.fromField = "value_changed";
ROUTE586.toNode = "hanim_vc4";
ROUTE586.toField = "set_rotation";
browser.currentScene.children[60] = ROUTE586;

let ROUTE587 = browser.currentScene.createNode("ROUTE");
ROUTE587.fromNode = "upper_body_RotationInterpolator_Stand";
ROUTE587.fromField = "value_changed";
ROUTE587.toNode = "hanim_vl1";
ROUTE587.toField = "set_rotation";
browser.currentScene.children[61] = ROUTE587;

let ROUTE588 = browser.currentScene.createNode("ROUTE");
ROUTE588.fromNode = "whole_body_RotationInterpolator_Stand";
ROUTE588.fromField = "value_changed";
ROUTE588.toNode = "hanim_humanoid_root";
ROUTE588.toField = "set_rotation";
browser.currentScene.children[62] = ROUTE588;

let ROUTE589 = browser.currentScene.createNode("ROUTE");
ROUTE589.fromNode = "whole_body_TranslationInterpolator_Stand";
ROUTE589.fromField = "value_changed";
ROUTE589.toNode = "hanim_humanoid_root";
ROUTE589.toField = "set_translation";
browser.currentScene.children[63] = ROUTE589;

let ROUTE590 = browser.currentScene.createNode("ROUTE");
ROUTE590.fromNode = "Walk_Time";
ROUTE590.fromField = "fraction_changed";
ROUTE590.toNode = "r_ankle_RotationInterpolator_BasicWalk";
ROUTE590.toField = "set_fraction";
browser.currentScene.children[64] = ROUTE590;

let ROUTE591 = browser.currentScene.createNode("ROUTE");
ROUTE591.fromNode = "Walk_Time";
ROUTE591.fromField = "fraction_changed";
ROUTE591.toNode = "r_knee_RotationInterpolator_BasicWalk";
ROUTE591.toField = "set_fraction";
browser.currentScene.children[65] = ROUTE591;

let ROUTE592 = browser.currentScene.createNode("ROUTE");
ROUTE592.fromNode = "Walk_Time";
ROUTE592.fromField = "fraction_changed";
ROUTE592.toNode = "r_hip_RotationInterpolator_BasicWalk";
ROUTE592.toField = "set_fraction";
browser.currentScene.children[66] = ROUTE592;

let ROUTE593 = browser.currentScene.createNode("ROUTE");
ROUTE593.fromNode = "Walk_Time";
ROUTE593.fromField = "fraction_changed";
ROUTE593.toNode = "l_ankle_RotationInterpolator_BasicWalk";
ROUTE593.toField = "set_fraction";
browser.currentScene.children[67] = ROUTE593;

let ROUTE594 = browser.currentScene.createNode("ROUTE");
ROUTE594.fromNode = "Walk_Time";
ROUTE594.fromField = "fraction_changed";
ROUTE594.toNode = "l_knee_RotationInterpolator_BasicWalk";
ROUTE594.toField = "set_fraction";
browser.currentScene.children[68] = ROUTE594;

let ROUTE595 = browser.currentScene.createNode("ROUTE");
ROUTE595.fromNode = "Walk_Time";
ROUTE595.fromField = "fraction_changed";
ROUTE595.toNode = "l_hip_RotationInterpolator_BasicWalk";
ROUTE595.toField = "set_fraction";
browser.currentScene.children[69] = ROUTE595;

let ROUTE596 = browser.currentScene.createNode("ROUTE");
ROUTE596.fromNode = "Walk_Time";
ROUTE596.fromField = "fraction_changed";
ROUTE596.toNode = "lower_body_RotationInterpolator_BasicWalk";
ROUTE596.toField = "set_fraction";
browser.currentScene.children[70] = ROUTE596;

let ROUTE597 = browser.currentScene.createNode("ROUTE");
ROUTE597.fromNode = "Walk_Time";
ROUTE597.fromField = "fraction_changed";
ROUTE597.toNode = "r_wrist_RotationInterpolator_BasicWalk";
ROUTE597.toField = "set_fraction";
browser.currentScene.children[71] = ROUTE597;

let ROUTE598 = browser.currentScene.createNode("ROUTE");
ROUTE598.fromNode = "Walk_Time";
ROUTE598.fromField = "fraction_changed";
ROUTE598.toNode = "r_elbow_RotationInterpolator_BasicWalk";
ROUTE598.toField = "set_fraction";
browser.currentScene.children[72] = ROUTE598;

let ROUTE599 = browser.currentScene.createNode("ROUTE");
ROUTE599.fromNode = "Walk_Time";
ROUTE599.fromField = "fraction_changed";
ROUTE599.toNode = "r_shoulder_RotationInterpolator_BasicWalk";
ROUTE599.toField = "set_fraction";
browser.currentScene.children[73] = ROUTE599;

let ROUTE600 = browser.currentScene.createNode("ROUTE");
ROUTE600.fromNode = "Walk_Time";
ROUTE600.fromField = "fraction_changed";
ROUTE600.toNode = "l_wrist_RotationInterpolator_BasicWalk";
ROUTE600.toField = "set_fraction";
browser.currentScene.children[74] = ROUTE600;

let ROUTE601 = browser.currentScene.createNode("ROUTE");
ROUTE601.fromNode = "Walk_Time";
ROUTE601.fromField = "fraction_changed";
ROUTE601.toNode = "l_elbow_RotationInterpolator_BasicWalk";
ROUTE601.toField = "set_fraction";
browser.currentScene.children[75] = ROUTE601;

let ROUTE602 = browser.currentScene.createNode("ROUTE");
ROUTE602.fromNode = "Walk_Time";
ROUTE602.fromField = "fraction_changed";
ROUTE602.toNode = "l_shoulder_RotationInterpolator_BasicWalk";
ROUTE602.toField = "set_fraction";
browser.currentScene.children[76] = ROUTE602;

let ROUTE603 = browser.currentScene.createNode("ROUTE");
ROUTE603.fromNode = "Walk_Time";
ROUTE603.fromField = "fraction_changed";
ROUTE603.toNode = "head_RotationInterpolator_BasicWalk";
ROUTE603.toField = "set_fraction";
browser.currentScene.children[77] = ROUTE603;

let ROUTE604 = browser.currentScene.createNode("ROUTE");
ROUTE604.fromNode = "Walk_Time";
ROUTE604.fromField = "fraction_changed";
ROUTE604.toNode = "neck_RotationInterpolator_BasicWalk";
ROUTE604.toField = "set_fraction";
browser.currentScene.children[78] = ROUTE604;

let ROUTE605 = browser.currentScene.createNode("ROUTE");
ROUTE605.fromNode = "Walk_Time";
ROUTE605.fromField = "fraction_changed";
ROUTE605.toNode = "upper_body_RotationInterpolator_BasicWalk";
ROUTE605.toField = "set_fraction";
browser.currentScene.children[79] = ROUTE605;

let ROUTE606 = browser.currentScene.createNode("ROUTE");
ROUTE606.fromNode = "Walk_Time";
ROUTE606.fromField = "fraction_changed";
ROUTE606.toNode = "whole_body_RotationInterpolator_BasicWalk";
ROUTE606.toField = "set_fraction";
browser.currentScene.children[80] = ROUTE606;

let ROUTE607 = browser.currentScene.createNode("ROUTE");
ROUTE607.fromNode = "Walk_Time";
ROUTE607.fromField = "fraction_changed";
ROUTE607.toNode = "whole_body_TranslationInterpolator_BasicWalk";
ROUTE607.toField = "set_fraction";
browser.currentScene.children[81] = ROUTE607;

let ROUTE608 = browser.currentScene.createNode("ROUTE");
ROUTE608.fromNode = "r_ankle_RotationInterpolator_BasicWalk";
ROUTE608.fromField = "value_changed";
ROUTE608.toNode = "hanim_r_ankle";
ROUTE608.toField = "set_rotation";
browser.currentScene.children[82] = ROUTE608;

let ROUTE609 = browser.currentScene.createNode("ROUTE");
ROUTE609.fromNode = "r_knee_RotationInterpolator_BasicWalk";
ROUTE609.fromField = "value_changed";
ROUTE609.toNode = "hanim_r_knee";
ROUTE609.toField = "set_rotation";
browser.currentScene.children[83] = ROUTE609;

let ROUTE610 = browser.currentScene.createNode("ROUTE");
ROUTE610.fromNode = "r_hip_RotationInterpolator_BasicWalk";
ROUTE610.fromField = "value_changed";
ROUTE610.toNode = "hanim_r_hip";
ROUTE610.toField = "set_rotation";
browser.currentScene.children[84] = ROUTE610;

let ROUTE611 = browser.currentScene.createNode("ROUTE");
ROUTE611.fromNode = "l_ankle_RotationInterpolator_BasicWalk";
ROUTE611.fromField = "value_changed";
ROUTE611.toNode = "hanim_l_ankle";
ROUTE611.toField = "set_rotation";
browser.currentScene.children[85] = ROUTE611;

let ROUTE612 = browser.currentScene.createNode("ROUTE");
ROUTE612.fromNode = "l_knee_RotationInterpolator_BasicWalk";
ROUTE612.fromField = "value_changed";
ROUTE612.toNode = "hanim_l_knee";
ROUTE612.toField = "set_rotation";
browser.currentScene.children[86] = ROUTE612;

let ROUTE613 = browser.currentScene.createNode("ROUTE");
ROUTE613.fromNode = "l_hip_RotationInterpolator_BasicWalk";
ROUTE613.fromField = "value_changed";
ROUTE613.toNode = "hanim_l_hip";
ROUTE613.toField = "set_rotation";
browser.currentScene.children[87] = ROUTE613;

let ROUTE614 = browser.currentScene.createNode("ROUTE");
ROUTE614.fromNode = "lower_body_RotationInterpolator_BasicWalk";
ROUTE614.fromField = "value_changed";
ROUTE614.toNode = "hanim_sacroiliac";
ROUTE614.toField = "set_rotation";
browser.currentScene.children[88] = ROUTE614;

let ROUTE615 = browser.currentScene.createNode("ROUTE");
ROUTE615.fromNode = "r_wrist_RotationInterpolator_BasicWalk";
ROUTE615.fromField = "value_changed";
ROUTE615.toNode = "hanim_r_wrist";
ROUTE615.toField = "set_rotation";
browser.currentScene.children[89] = ROUTE615;

let ROUTE616 = browser.currentScene.createNode("ROUTE");
ROUTE616.fromNode = "r_elbow_RotationInterpolator_BasicWalk";
ROUTE616.fromField = "value_changed";
ROUTE616.toNode = "hanim_r_elbow";
ROUTE616.toField = "set_rotation";
browser.currentScene.children[90] = ROUTE616;

let ROUTE617 = browser.currentScene.createNode("ROUTE");
ROUTE617.fromNode = "r_shoulder_RotationInterpolator_BasicWalk";
ROUTE617.fromField = "value_changed";
ROUTE617.toNode = "hanim_r_shoulder";
ROUTE617.toField = "set_rotation";
browser.currentScene.children[91] = ROUTE617;

let ROUTE618 = browser.currentScene.createNode("ROUTE");
ROUTE618.fromNode = "l_wrist_RotationInterpolator_BasicWalk";
ROUTE618.fromField = "value_changed";
ROUTE618.toNode = "hanim_l_wrist";
ROUTE618.toField = "set_rotation";
browser.currentScene.children[92] = ROUTE618;

let ROUTE619 = browser.currentScene.createNode("ROUTE");
ROUTE619.fromNode = "l_elbow_RotationInterpolator_BasicWalk";
ROUTE619.fromField = "value_changed";
ROUTE619.toNode = "hanim_l_elbow";
ROUTE619.toField = "set_rotation";
browser.currentScene.children[93] = ROUTE619;

let ROUTE620 = browser.currentScene.createNode("ROUTE");
ROUTE620.fromNode = "l_shoulder_RotationInterpolator_BasicWalk";
ROUTE620.fromField = "value_changed";
ROUTE620.toNode = "hanim_l_shoulder";
ROUTE620.toField = "set_rotation";
browser.currentScene.children[94] = ROUTE620;

let ROUTE621 = browser.currentScene.createNode("ROUTE");
ROUTE621.fromNode = "head_RotationInterpolator_BasicWalk";
ROUTE621.fromField = "value_changed";
ROUTE621.toNode = "hanim_skullbase";
ROUTE621.toField = "set_rotation";
browser.currentScene.children[95] = ROUTE621;

let ROUTE622 = browser.currentScene.createNode("ROUTE");
ROUTE622.fromNode = "neck_RotationInterpolator_BasicWalk";
ROUTE622.fromField = "value_changed";
ROUTE622.toNode = "hanim_vc4";
ROUTE622.toField = "set_rotation";
browser.currentScene.children[96] = ROUTE622;

let ROUTE623 = browser.currentScene.createNode("ROUTE");
ROUTE623.fromNode = "upper_body_RotationInterpolator_BasicWalk";
ROUTE623.fromField = "value_changed";
ROUTE623.toNode = "hanim_vl1";
ROUTE623.toField = "set_rotation";
browser.currentScene.children[97] = ROUTE623;

let ROUTE624 = browser.currentScene.createNode("ROUTE");
ROUTE624.fromNode = "whole_body_RotationInterpolator_BasicWalk";
ROUTE624.fromField = "value_changed";
ROUTE624.toNode = "hanim_humanoid_root";
ROUTE624.toField = "set_rotation";
browser.currentScene.children[98] = ROUTE624;

let ROUTE625 = browser.currentScene.createNode("ROUTE");
ROUTE625.fromNode = "whole_body_TranslationInterpolator_BasicWalk";
ROUTE625.fromField = "value_changed";
ROUTE625.toNode = "hanim_humanoid_root";
ROUTE625.toField = "set_translation";
browser.currentScene.children[99] = ROUTE625;

let ROUTE626 = browser.currentScene.createNode("ROUTE");
ROUTE626.fromNode = "Run_Time";
ROUTE626.fromField = "fraction_changed";
ROUTE626.toNode = "r_ankle_RotationInterpolator_Run";
ROUTE626.toField = "set_fraction";
browser.currentScene.children[100] = ROUTE626;

let ROUTE627 = browser.currentScene.createNode("ROUTE");
ROUTE627.fromNode = "Run_Time";
ROUTE627.fromField = "fraction_changed";
ROUTE627.toNode = "r_knee_RotationInterpolator_Run";
ROUTE627.toField = "set_fraction";
browser.currentScene.children[101] = ROUTE627;

let ROUTE628 = browser.currentScene.createNode("ROUTE");
ROUTE628.fromNode = "Run_Time";
ROUTE628.fromField = "fraction_changed";
ROUTE628.toNode = "r_hip_RotationInterpolator_Run";
ROUTE628.toField = "set_fraction";
browser.currentScene.children[102] = ROUTE628;

let ROUTE629 = browser.currentScene.createNode("ROUTE");
ROUTE629.fromNode = "Run_Time";
ROUTE629.fromField = "fraction_changed";
ROUTE629.toNode = "l_ankle_RotationInterpolator_Run";
ROUTE629.toField = "set_fraction";
browser.currentScene.children[103] = ROUTE629;

let ROUTE630 = browser.currentScene.createNode("ROUTE");
ROUTE630.fromNode = "Run_Time";
ROUTE630.fromField = "fraction_changed";
ROUTE630.toNode = "l_knee_RotationInterpolator_Run";
ROUTE630.toField = "set_fraction";
browser.currentScene.children[104] = ROUTE630;

let ROUTE631 = browser.currentScene.createNode("ROUTE");
ROUTE631.fromNode = "Run_Time";
ROUTE631.fromField = "fraction_changed";
ROUTE631.toNode = "l_hip_RotationInterpolator_Run";
ROUTE631.toField = "set_fraction";
browser.currentScene.children[105] = ROUTE631;

let ROUTE632 = browser.currentScene.createNode("ROUTE");
ROUTE632.fromNode = "Run_Time";
ROUTE632.fromField = "fraction_changed";
ROUTE632.toNode = "lower_body_RotationInterpolator_Run";
ROUTE632.toField = "set_fraction";
browser.currentScene.children[106] = ROUTE632;

let ROUTE633 = browser.currentScene.createNode("ROUTE");
ROUTE633.fromNode = "Run_Time";
ROUTE633.fromField = "fraction_changed";
ROUTE633.toNode = "r_wrist_RotationInterpolator_Run";
ROUTE633.toField = "set_fraction";
browser.currentScene.children[107] = ROUTE633;

let ROUTE634 = browser.currentScene.createNode("ROUTE");
ROUTE634.fromNode = "Run_Time";
ROUTE634.fromField = "fraction_changed";
ROUTE634.toNode = "r_elbow_RotationInterpolator_Run";
ROUTE634.toField = "set_fraction";
browser.currentScene.children[108] = ROUTE634;

let ROUTE635 = browser.currentScene.createNode("ROUTE");
ROUTE635.fromNode = "Run_Time";
ROUTE635.fromField = "fraction_changed";
ROUTE635.toNode = "r_shoulder_RotationInterpolator_Run";
ROUTE635.toField = "set_fraction";
browser.currentScene.children[109] = ROUTE635;

let ROUTE636 = browser.currentScene.createNode("ROUTE");
ROUTE636.fromNode = "Run_Time";
ROUTE636.fromField = "fraction_changed";
ROUTE636.toNode = "l_wrist_RotationInterpolator_Run";
ROUTE636.toField = "set_fraction";
browser.currentScene.children[110] = ROUTE636;

let ROUTE637 = browser.currentScene.createNode("ROUTE");
ROUTE637.fromNode = "Run_Time";
ROUTE637.fromField = "fraction_changed";
ROUTE637.toNode = "l_elbow_RotationInterpolator_Run";
ROUTE637.toField = "set_fraction";
browser.currentScene.children[111] = ROUTE637;

let ROUTE638 = browser.currentScene.createNode("ROUTE");
ROUTE638.fromNode = "Run_Time";
ROUTE638.fromField = "fraction_changed";
ROUTE638.toNode = "l_shoulder_RotationInterpolator_Run";
ROUTE638.toField = "set_fraction";
browser.currentScene.children[112] = ROUTE638;

let ROUTE639 = browser.currentScene.createNode("ROUTE");
ROUTE639.fromNode = "Run_Time";
ROUTE639.fromField = "fraction_changed";
ROUTE639.toNode = "head_RotationInterpolator_Run";
ROUTE639.toField = "set_fraction";
browser.currentScene.children[113] = ROUTE639;

let ROUTE640 = browser.currentScene.createNode("ROUTE");
ROUTE640.fromNode = "Run_Time";
ROUTE640.fromField = "fraction_changed";
ROUTE640.toNode = "neck_RotationInterpolator_Run";
ROUTE640.toField = "set_fraction";
browser.currentScene.children[114] = ROUTE640;

let ROUTE641 = browser.currentScene.createNode("ROUTE");
ROUTE641.fromNode = "Run_Time";
ROUTE641.fromField = "fraction_changed";
ROUTE641.toNode = "upper_body_RotationInterpolator_Run";
ROUTE641.toField = "set_fraction";
browser.currentScene.children[115] = ROUTE641;

let ROUTE642 = browser.currentScene.createNode("ROUTE");
ROUTE642.fromNode = "Run_Time";
ROUTE642.fromField = "fraction_changed";
ROUTE642.toNode = "whole_body_RotationInterpolator_Run";
ROUTE642.toField = "set_fraction";
browser.currentScene.children[116] = ROUTE642;

let ROUTE643 = browser.currentScene.createNode("ROUTE");
ROUTE643.fromNode = "Run_Time";
ROUTE643.fromField = "fraction_changed";
ROUTE643.toNode = "whole_body_TranslationInterpolator_Run";
ROUTE643.toField = "set_fraction";
browser.currentScene.children[117] = ROUTE643;

let ROUTE644 = browser.currentScene.createNode("ROUTE");
ROUTE644.fromNode = "r_ankle_RotationInterpolator_Run";
ROUTE644.fromField = "value_changed";
ROUTE644.toNode = "hanim_r_ankle";
ROUTE644.toField = "set_rotation";
browser.currentScene.children[118] = ROUTE644;

let ROUTE645 = browser.currentScene.createNode("ROUTE");
ROUTE645.fromNode = "r_knee_RotationInterpolator_Run";
ROUTE645.fromField = "value_changed";
ROUTE645.toNode = "hanim_r_knee";
ROUTE645.toField = "set_rotation";
browser.currentScene.children[119] = ROUTE645;

let ROUTE646 = browser.currentScene.createNode("ROUTE");
ROUTE646.fromNode = "r_hip_RotationInterpolator_Run";
ROUTE646.fromField = "value_changed";
ROUTE646.toNode = "hanim_r_hip";
ROUTE646.toField = "set_rotation";
browser.currentScene.children[120] = ROUTE646;

let ROUTE647 = browser.currentScene.createNode("ROUTE");
ROUTE647.fromNode = "l_ankle_RotationInterpolator_Run";
ROUTE647.fromField = "value_changed";
ROUTE647.toNode = "hanim_l_ankle";
ROUTE647.toField = "set_rotation";
browser.currentScene.children[121] = ROUTE647;

let ROUTE648 = browser.currentScene.createNode("ROUTE");
ROUTE648.fromNode = "l_knee_RotationInterpolator_Run";
ROUTE648.fromField = "value_changed";
ROUTE648.toNode = "hanim_l_knee";
ROUTE648.toField = "set_rotation";
browser.currentScene.children[122] = ROUTE648;

let ROUTE649 = browser.currentScene.createNode("ROUTE");
ROUTE649.fromNode = "l_hip_RotationInterpolator_Run";
ROUTE649.fromField = "value_changed";
ROUTE649.toNode = "hanim_l_hip";
ROUTE649.toField = "set_rotation";
browser.currentScene.children[123] = ROUTE649;

let ROUTE650 = browser.currentScene.createNode("ROUTE");
ROUTE650.fromNode = "lower_body_RotationInterpolator_Run";
ROUTE650.fromField = "value_changed";
ROUTE650.toNode = "hanim_sacroiliac";
ROUTE650.toField = "set_rotation";
browser.currentScene.children[124] = ROUTE650;

let ROUTE651 = browser.currentScene.createNode("ROUTE");
ROUTE651.fromNode = "r_wrist_RotationInterpolator_Run";
ROUTE651.fromField = "value_changed";
ROUTE651.toNode = "hanim_r_wrist";
ROUTE651.toField = "set_rotation";
browser.currentScene.children[125] = ROUTE651;

let ROUTE652 = browser.currentScene.createNode("ROUTE");
ROUTE652.fromNode = "r_elbow_RotationInterpolator_Run";
ROUTE652.fromField = "value_changed";
ROUTE652.toNode = "hanim_r_elbow";
ROUTE652.toField = "set_rotation";
browser.currentScene.children[126] = ROUTE652;

let ROUTE653 = browser.currentScene.createNode("ROUTE");
ROUTE653.fromNode = "r_shoulder_RotationInterpolator_Run";
ROUTE653.fromField = "value_changed";
ROUTE653.toNode = "hanim_r_shoulder";
ROUTE653.toField = "set_rotation";
browser.currentScene.children[127] = ROUTE653;

let ROUTE654 = browser.currentScene.createNode("ROUTE");
ROUTE654.fromNode = "l_wrist_RotationInterpolator_Run";
ROUTE654.fromField = "value_changed";
ROUTE654.toNode = "hanim_l_wrist";
ROUTE654.toField = "set_rotation";
browser.currentScene.children[128] = ROUTE654;

let ROUTE655 = browser.currentScene.createNode("ROUTE");
ROUTE655.fromNode = "l_elbow_RotationInterpolator_Run";
ROUTE655.fromField = "value_changed";
ROUTE655.toNode = "hanim_l_elbow";
ROUTE655.toField = "set_rotation";
browser.currentScene.children[129] = ROUTE655;

let ROUTE656 = browser.currentScene.createNode("ROUTE");
ROUTE656.fromNode = "l_shoulder_RotationInterpolator_Run";
ROUTE656.fromField = "value_changed";
ROUTE656.toNode = "hanim_l_shoulder";
ROUTE656.toField = "set_rotation";
browser.currentScene.children[130] = ROUTE656;

let ROUTE657 = browser.currentScene.createNode("ROUTE");
ROUTE657.fromNode = "head_RotationInterpolator_Run";
ROUTE657.fromField = "value_changed";
ROUTE657.toNode = "hanim_skullbase";
ROUTE657.toField = "set_rotation";
browser.currentScene.children[131] = ROUTE657;

let ROUTE658 = browser.currentScene.createNode("ROUTE");
ROUTE658.fromNode = "neck_RotationInterpolator_Run";
ROUTE658.fromField = "value_changed";
ROUTE658.toNode = "hanim_vc4";
ROUTE658.toField = "set_rotation";
browser.currentScene.children[132] = ROUTE658;

let ROUTE659 = browser.currentScene.createNode("ROUTE");
ROUTE659.fromNode = "upper_body_RotationInterpolator_Run";
ROUTE659.fromField = "value_changed";
ROUTE659.toNode = "hanim_vl1";
ROUTE659.toField = "set_rotation";
browser.currentScene.children[133] = ROUTE659;

let ROUTE660 = browser.currentScene.createNode("ROUTE");
ROUTE660.fromNode = "whole_body_RotationInterpolator_Run";
ROUTE660.fromField = "value_changed";
ROUTE660.toNode = "hanim_humanoid_root";
ROUTE660.toField = "set_rotation";
browser.currentScene.children[134] = ROUTE660;

let ROUTE661 = browser.currentScene.createNode("ROUTE");
ROUTE661.fromNode = "whole_body_TranslationInterpolator_Run";
ROUTE661.fromField = "value_changed";
ROUTE661.toNode = "hanim_humanoid_root";
ROUTE661.toField = "set_translation";
browser.currentScene.children[135] = ROUTE661;

let ROUTE662 = browser.currentScene.createNode("ROUTE");
ROUTE662.fromNode = "Jump_Time";
ROUTE662.fromField = "fraction_changed";
ROUTE662.toNode = "r_ankle_RotationInterpolator_Jump";
ROUTE662.toField = "set_fraction";
browser.currentScene.children[136] = ROUTE662;

let ROUTE663 = browser.currentScene.createNode("ROUTE");
ROUTE663.fromNode = "Jump_Time";
ROUTE663.fromField = "fraction_changed";
ROUTE663.toNode = "r_knee_RotationInterpolator_Jump";
ROUTE663.toField = "set_fraction";
browser.currentScene.children[137] = ROUTE663;

let ROUTE664 = browser.currentScene.createNode("ROUTE");
ROUTE664.fromNode = "Jump_Time";
ROUTE664.fromField = "fraction_changed";
ROUTE664.toNode = "r_hip_RotationInterpolator_Jump";
ROUTE664.toField = "set_fraction";
browser.currentScene.children[138] = ROUTE664;

let ROUTE665 = browser.currentScene.createNode("ROUTE");
ROUTE665.fromNode = "Jump_Time";
ROUTE665.fromField = "fraction_changed";
ROUTE665.toNode = "l_ankle_RotationInterpolator_Jump";
ROUTE665.toField = "set_fraction";
browser.currentScene.children[139] = ROUTE665;

let ROUTE666 = browser.currentScene.createNode("ROUTE");
ROUTE666.fromNode = "Jump_Time";
ROUTE666.fromField = "fraction_changed";
ROUTE666.toNode = "l_knee_RotationInterpolator_Jump";
ROUTE666.toField = "set_fraction";
browser.currentScene.children[140] = ROUTE666;

let ROUTE667 = browser.currentScene.createNode("ROUTE");
ROUTE667.fromNode = "Jump_Time";
ROUTE667.fromField = "fraction_changed";
ROUTE667.toNode = "l_hip_RotationInterpolator_Jump";
ROUTE667.toField = "set_fraction";
browser.currentScene.children[141] = ROUTE667;

let ROUTE668 = browser.currentScene.createNode("ROUTE");
ROUTE668.fromNode = "Jump_Time";
ROUTE668.fromField = "fraction_changed";
ROUTE668.toNode = "lower_body_RotationInterpolator_Jump";
ROUTE668.toField = "set_fraction";
browser.currentScene.children[142] = ROUTE668;

let ROUTE669 = browser.currentScene.createNode("ROUTE");
ROUTE669.fromNode = "Jump_Time";
ROUTE669.fromField = "fraction_changed";
ROUTE669.toNode = "r_wrist_RotationInterpolator_Jump";
ROUTE669.toField = "set_fraction";
browser.currentScene.children[143] = ROUTE669;

let ROUTE670 = browser.currentScene.createNode("ROUTE");
ROUTE670.fromNode = "Jump_Time";
ROUTE670.fromField = "fraction_changed";
ROUTE670.toNode = "r_elbow_RotationInterpolator_Jump";
ROUTE670.toField = "set_fraction";
browser.currentScene.children[144] = ROUTE670;

let ROUTE671 = browser.currentScene.createNode("ROUTE");
ROUTE671.fromNode = "Jump_Time";
ROUTE671.fromField = "fraction_changed";
ROUTE671.toNode = "r_shoulder_RotationInterpolator_Jump";
ROUTE671.toField = "set_fraction";
browser.currentScene.children[145] = ROUTE671;

let ROUTE672 = browser.currentScene.createNode("ROUTE");
ROUTE672.fromNode = "Jump_Time";
ROUTE672.fromField = "fraction_changed";
ROUTE672.toNode = "l_wrist_RotationInterpolator_Jump";
ROUTE672.toField = "set_fraction";
browser.currentScene.children[146] = ROUTE672;

let ROUTE673 = browser.currentScene.createNode("ROUTE");
ROUTE673.fromNode = "Jump_Time";
ROUTE673.fromField = "fraction_changed";
ROUTE673.toNode = "l_elbow_RotationInterpolator_Jump";
ROUTE673.toField = "set_fraction";
browser.currentScene.children[147] = ROUTE673;

let ROUTE674 = browser.currentScene.createNode("ROUTE");
ROUTE674.fromNode = "Jump_Time";
ROUTE674.fromField = "fraction_changed";
ROUTE674.toNode = "l_shoulder_RotationInterpolator_Jump";
ROUTE674.toField = "set_fraction";
browser.currentScene.children[148] = ROUTE674;

let ROUTE675 = browser.currentScene.createNode("ROUTE");
ROUTE675.fromNode = "Jump_Time";
ROUTE675.fromField = "fraction_changed";
ROUTE675.toNode = "head_RotationInterpolator_Jump";
ROUTE675.toField = "set_fraction";
browser.currentScene.children[149] = ROUTE675;

let ROUTE676 = browser.currentScene.createNode("ROUTE");
ROUTE676.fromNode = "Jump_Time";
ROUTE676.fromField = "fraction_changed";
ROUTE676.toNode = "neck_RotationInterpolator_Jump";
ROUTE676.toField = "set_fraction";
browser.currentScene.children[150] = ROUTE676;

let ROUTE677 = browser.currentScene.createNode("ROUTE");
ROUTE677.fromNode = "Jump_Time";
ROUTE677.fromField = "fraction_changed";
ROUTE677.toNode = "upper_body_RotationInterpolator_Jump";
ROUTE677.toField = "set_fraction";
browser.currentScene.children[151] = ROUTE677;

let ROUTE678 = browser.currentScene.createNode("ROUTE");
ROUTE678.fromNode = "Jump_Time";
ROUTE678.fromField = "fraction_changed";
ROUTE678.toNode = "whole_body_RotationInterpolator_Jump";
ROUTE678.toField = "set_fraction";
browser.currentScene.children[152] = ROUTE678;

let ROUTE679 = browser.currentScene.createNode("ROUTE");
ROUTE679.fromNode = "Jump_Time";
ROUTE679.fromField = "fraction_changed";
ROUTE679.toNode = "whole_body_TranslationInterpolator_Jump";
ROUTE679.toField = "set_fraction";
browser.currentScene.children[153] = ROUTE679;

let ROUTE680 = browser.currentScene.createNode("ROUTE");
ROUTE680.fromNode = "r_ankle_RotationInterpolator_Jump";
ROUTE680.fromField = "value_changed";
ROUTE680.toNode = "hanim_r_ankle";
ROUTE680.toField = "set_rotation";
browser.currentScene.children[154] = ROUTE680;

let ROUTE681 = browser.currentScene.createNode("ROUTE");
ROUTE681.fromNode = "r_knee_RotationInterpolator_Jump";
ROUTE681.fromField = "value_changed";
ROUTE681.toNode = "hanim_r_knee";
ROUTE681.toField = "set_rotation";
browser.currentScene.children[155] = ROUTE681;

let ROUTE682 = browser.currentScene.createNode("ROUTE");
ROUTE682.fromNode = "r_hip_RotationInterpolator_Jump";
ROUTE682.fromField = "value_changed";
ROUTE682.toNode = "hanim_r_hip";
ROUTE682.toField = "set_rotation";
browser.currentScene.children[156] = ROUTE682;

let ROUTE683 = browser.currentScene.createNode("ROUTE");
ROUTE683.fromNode = "l_ankle_RotationInterpolator_Jump";
ROUTE683.fromField = "value_changed";
ROUTE683.toNode = "hanim_l_ankle";
ROUTE683.toField = "set_rotation";
browser.currentScene.children[157] = ROUTE683;

let ROUTE684 = browser.currentScene.createNode("ROUTE");
ROUTE684.fromNode = "l_knee_RotationInterpolator_Jump";
ROUTE684.fromField = "value_changed";
ROUTE684.toNode = "hanim_l_knee";
ROUTE684.toField = "set_rotation";
browser.currentScene.children[158] = ROUTE684;

let ROUTE685 = browser.currentScene.createNode("ROUTE");
ROUTE685.fromNode = "l_hip_RotationInterpolator_Jump";
ROUTE685.fromField = "value_changed";
ROUTE685.toNode = "hanim_l_hip";
ROUTE685.toField = "set_rotation";
browser.currentScene.children[159] = ROUTE685;

let ROUTE686 = browser.currentScene.createNode("ROUTE");
ROUTE686.fromNode = "lower_body_RotationInterpolator_Jump";
ROUTE686.fromField = "value_changed";
ROUTE686.toNode = "hanim_sacroiliac";
ROUTE686.toField = "set_rotation";
browser.currentScene.children[160] = ROUTE686;

let ROUTE687 = browser.currentScene.createNode("ROUTE");
ROUTE687.fromNode = "r_wrist_RotationInterpolator_Jump";
ROUTE687.fromField = "value_changed";
ROUTE687.toNode = "hanim_r_wrist";
ROUTE687.toField = "set_rotation";
browser.currentScene.children[161] = ROUTE687;

let ROUTE688 = browser.currentScene.createNode("ROUTE");
ROUTE688.fromNode = "r_elbow_RotationInterpolator_Jump";
ROUTE688.fromField = "value_changed";
ROUTE688.toNode = "hanim_r_elbow";
ROUTE688.toField = "set_rotation";
browser.currentScene.children[162] = ROUTE688;

let ROUTE689 = browser.currentScene.createNode("ROUTE");
ROUTE689.fromNode = "r_shoulder_RotationInterpolator_Jump";
ROUTE689.fromField = "value_changed";
ROUTE689.toNode = "hanim_r_shoulder";
ROUTE689.toField = "set_rotation";
browser.currentScene.children[163] = ROUTE689;

let ROUTE690 = browser.currentScene.createNode("ROUTE");
ROUTE690.fromNode = "l_wrist_RotationInterpolator_Jump";
ROUTE690.fromField = "value_changed";
ROUTE690.toNode = "hanim_l_wrist";
ROUTE690.toField = "set_rotation";
browser.currentScene.children[164] = ROUTE690;

let ROUTE691 = browser.currentScene.createNode("ROUTE");
ROUTE691.fromNode = "l_elbow_RotationInterpolator_Jump";
ROUTE691.fromField = "value_changed";
ROUTE691.toNode = "hanim_l_elbow";
ROUTE691.toField = "set_rotation";
browser.currentScene.children[165] = ROUTE691;

let ROUTE692 = browser.currentScene.createNode("ROUTE");
ROUTE692.fromNode = "l_shoulder_RotationInterpolator_Jump";
ROUTE692.fromField = "value_changed";
ROUTE692.toNode = "hanim_l_shoulder";
ROUTE692.toField = "set_rotation";
browser.currentScene.children[166] = ROUTE692;

let ROUTE693 = browser.currentScene.createNode("ROUTE");
ROUTE693.fromNode = "head_RotationInterpolator_Jump";
ROUTE693.fromField = "value_changed";
ROUTE693.toNode = "hanim_skullbase";
ROUTE693.toField = "set_rotation";
browser.currentScene.children[167] = ROUTE693;

let ROUTE694 = browser.currentScene.createNode("ROUTE");
ROUTE694.fromNode = "neck_RotationInterpolator_Jump";
ROUTE694.fromField = "value_changed";
ROUTE694.toNode = "hanim_vc4";
ROUTE694.toField = "set_rotation";
browser.currentScene.children[168] = ROUTE694;

let ROUTE695 = browser.currentScene.createNode("ROUTE");
ROUTE695.fromNode = "upper_body_RotationInterpolator_Jump";
ROUTE695.fromField = "value_changed";
ROUTE695.toNode = "hanim_vl1";
ROUTE695.toField = "set_rotation";
browser.currentScene.children[169] = ROUTE695;

let ROUTE696 = browser.currentScene.createNode("ROUTE");
ROUTE696.fromNode = "whole_body_RotationInterpolator_Jump";
ROUTE696.fromField = "value_changed";
ROUTE696.toNode = "hanim_humanoid_root";
ROUTE696.toField = "set_rotation";
browser.currentScene.children[170] = ROUTE696;

let ROUTE697 = browser.currentScene.createNode("ROUTE");
ROUTE697.fromNode = "whole_body_TranslationInterpolator_Jump";
ROUTE697.fromField = "value_changed";
ROUTE697.toNode = "hanim_humanoid_root";
ROUTE697.toField = "set_translation";
browser.currentScene.children[171] = ROUTE697;

}
main ();
