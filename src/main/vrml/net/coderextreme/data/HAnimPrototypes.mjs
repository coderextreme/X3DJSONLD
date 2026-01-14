const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "HAnimPrototypes.x3d");
scene.addMetaData("description", "Example implementation of X3D Humanoid Animation (HAnim) nodes using X3D prototypes.");
scene.addMetaData("warning", "These are developmental examples that can assist X3D player implementations and support interoperability. They are not intended for author use in regular X3D scenes.");
scene.addMetaData("warning", "Developer note: names for these HAnim Prototypes need to be corrected if used internally in an X3D player implementation (e.g. Joint to HAnimJoint).");
scene.addMetaData("warning", "Need support for skin");
scene.addMetaData("creator", "Ozan APAYDIN, Don Brutzman");
scene.addMetaData("translator", "Ozan APAYDIN, Don Brutzman");
scene.addMetaData("created", "15 November 2001");
scene.addMetaData("modified", "Mon, 15 Sep 2025 05:20:09 GMT");
scene.addMetaData("TODO", "upgrade to match support requirements for HAnim 2.2");
scene.addMetaData("reference", "https://www.web3d.org/files/specifications/19774/V1.0/HAnim/HAnim.html");
scene.addMetaData("reference", "https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/hanim.html");
scene.addMetaData("reference", "http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl");
scene.addMetaData("reference", "http://HAnim.org/Specifications/HAnim2001");
scene.addMetaData("reference", "http://www.HAnim.org");
scene.addMetaData("reference", "http://HAnim.org/Models");
scene.addMetaData("reference", "http://HAnim.org/Specifications");
scene.addMetaData("reference", "InterchangableActorsViaDynamicRoutingPrototypes.x3d");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimPrototypes.x3d");
await browser .loadComponents (scene);
let ProtoDeclare22 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface24.getField("name")ProtoInterface23YYY.field = new X3D.MFNode();

ProtoInterface25.getField("version").setValue("1.1");
ProtoInterface23YYY.field = new X3D.MFNode();

ProtoInterface26.getField("humanoidVersion")ProtoInterface23YYY.field = new X3D.MFNode();

ProtoInterface27.getField("info")ProtoInterface23YYY.field = new X3D.MFNode();

ProtoInterface28.getField("translation")ProtoInterface23YYY.field = new X3D.MFNode();

ProtoInterface29.getField("rotation")ProtoInterface23YYY.field = new X3D.MFNode();

ProtoInterface30.getField("center")ProtoInterface23YYY.field = new X3D.MFNode();

ProtoInterface31.getField("scale").setValue("1 1 1");
ProtoInterface23YYY.field = new X3D.MFNode();

ProtoInterface32.getField("scaleOrientation")ProtoInterface23YYY.field = new X3D.MFNode();

ProtoInterface33.getField("bboxCenter")ProtoInterface23YYY.field = new X3D.MFNode();

ProtoInterface34.getField("bboxSize").setValue("-1 -1 -1");
ProtoInterface23YYY.field = new X3D.MFNode();

ProtoInterface35.getField("humanoidBody")ProtoInterface23YYY.field = new X3D.MFNode();

ProtoInterface36.getField("skeleton")ProtoInterface23YYY.field = new X3D.MFNode();

ProtoInterface37.getField("joints")ProtoInterface23YYY.field = new X3D.MFNode();

ProtoInterface38.getField("segments")ProtoInterface23YYY.field = new X3D.MFNode();

ProtoInterface39.getField("sites")ProtoInterface23YYY.field = new X3D.MFNode();

ProtoInterface40.getField("viewpoints")ProtoInterface23YYY.field = new X3D.MFNode();

ProtoInterface41.getField("skinCoord")ProtoInterface23YYY.field = new X3D.MFNode();

ProtoInterface42.getField("skinNormal")ProtoInterface23YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface23;

let ProtoBody43 = browser.currentScene.createNode("ProtoBody");
let Transform44 = browser.currentScene.createNode("Transform");
Transform44.DEF = "HumanoidTransform";
let Group45 = browser.currentScene.createNode("Group");
Group45.DEF = "HumanoidGroup1";
let IS46 = browser.currentScene.createNode("IS");
let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "children";
connect47.protoField = "humanoidBody";
IS46YYY.connect = new X3D.MFNode();

IS46ZZZ.connect[0] = connect47;

iS = IS46;

Transform44YYY.children = new X3D.MFNode();

Transform44ZZZ.children[0] = Group45;

let Group48 = browser.currentScene.createNode("Group");
Group48.DEF = "HumanoidGroup2";
let IS49 = browser.currentScene.createNode("IS");
let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "children";
connect50.protoField = "skeleton";
IS49YYY.connect = new X3D.MFNode();

IS49ZZZ.connect[0] = connect50;

iS = IS49;

Transform44ZZZ.children[1] = Group48;

let Group51 = browser.currentScene.createNode("Group");
Group51.DEF = "HumanoidGroup3";
let IS52 = browser.currentScene.createNode("IS");
let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "children";
connect53.protoField = "viewpoints";
IS52YYY.connect = new X3D.MFNode();

IS52ZZZ.connect[0] = connect53;

iS = IS52;

Transform44ZZZ.children[2] = Group51;

let IS54 = browser.currentScene.createNode("IS");
let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "translation";
connect55.protoField = "translation";
IS54YYY.connect = new X3D.MFNode();

IS54ZZZ.connect[0] = connect55;

let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "rotation";
connect56.protoField = "rotation";
IS54ZZZ.connect[1] = connect56;

let connect57 = browser.currentScene.createNode("connect");
connect57.nodeField = "scale";
connect57.protoField = "scale";
IS54ZZZ.connect[2] = connect57;

let connect58 = browser.currentScene.createNode("connect");
connect58.nodeField = "scaleOrientation";
connect58.protoField = "scaleOrientation";
IS54ZZZ.connect[3] = connect58;

let connect59 = browser.currentScene.createNode("connect");
connect59.nodeField = "center";
connect59.protoField = "center";
IS54ZZZ.connect[4] = connect59;

let connect60 = browser.currentScene.createNode("connect");
connect60.nodeField = "bboxSize";
connect60.protoField = "bboxSize";
IS54ZZZ.connect[5] = connect60;

let connect61 = browser.currentScene.createNode("connect");
connect61.nodeField = "bboxCenter";
connect61.protoField = "bboxCenter";
IS54ZZZ.connect[6] = connect61;

iS = IS54;

ProtoBody43YYY.children = new X3D.MFNode();

ProtoBody43ZZZ.children[0] = Transform44;

protoBody = ProtoBody43;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ProtoDeclare22;

let ProtoDeclare62 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface64.getField("name")ProtoInterface63YYY.field = new X3D.MFNode();

ProtoInterface65.getField("ulimit")ProtoInterface63YYY.field = new X3D.MFNode();

ProtoInterface66.getField("llimit")ProtoInterface63YYY.field = new X3D.MFNode();

ProtoInterface67.getField("limitOrientation")ProtoInterface63YYY.field = new X3D.MFNode();

ProtoInterface68.getField("skinCoordIndex")ProtoInterface63YYY.field = new X3D.MFNode();

ProtoInterface69.getField("skinCoordWeight")ProtoInterface63YYY.field = new X3D.MFNode();

ProtoInterface70.getField("stiffness").setValue("0 0 0");
ProtoInterface63YYY.field = new X3D.MFNode();

ProtoInterface71.getField("translation")ProtoInterface63YYY.field = new X3D.MFNode();

ProtoInterface72.getField("rotation")ProtoInterface63YYY.field = new X3D.MFNode();

ProtoInterface73.getField("scale").setValue("1 1 1");
ProtoInterface63YYY.field = new X3D.MFNode();

ProtoInterface74.getField("scaleOrientation")ProtoInterface63YYY.field = new X3D.MFNode();

ProtoInterface75.getField("center")ProtoInterface63YYY.field = new X3D.MFNode();

ProtoInterface76.getField("bboxCenter")ProtoInterface63YYY.field = new X3D.MFNode();

ProtoInterface77.getField("bboxSize").setValue("-1 -1 -1");
ProtoInterface63YYY.field = new X3D.MFNode();

ProtoInterface78.getField("children")ProtoInterface63YYY.field = new X3D.MFNode();

ProtoInterface79.getField("addChildren")ProtoInterface63YYY.field = new X3D.MFNode();

ProtoInterface80.getField("removeChildren")ProtoInterface63YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface63;

let ProtoBody81 = browser.currentScene.createNode("ProtoBody");
let Transform82 = browser.currentScene.createNode("Transform");
Transform82.DEF = "JointTransform";
let IS83 = browser.currentScene.createNode("IS");
let connect84 = browser.currentScene.createNode("connect");
connect84.nodeField = "translation";
connect84.protoField = "translation";
IS83YYY.connect = new X3D.MFNode();

IS83ZZZ.connect[0] = connect84;

let connect85 = browser.currentScene.createNode("connect");
connect85.nodeField = "rotation";
connect85.protoField = "rotation";
IS83ZZZ.connect[1] = connect85;

let connect86 = browser.currentScene.createNode("connect");
connect86.nodeField = "scale";
connect86.protoField = "scale";
IS83ZZZ.connect[2] = connect86;

let connect87 = browser.currentScene.createNode("connect");
connect87.nodeField = "scaleOrientation";
connect87.protoField = "scaleOrientation";
IS83ZZZ.connect[3] = connect87;

let connect88 = browser.currentScene.createNode("connect");
connect88.nodeField = "center";
connect88.protoField = "center";
IS83ZZZ.connect[4] = connect88;

let connect89 = browser.currentScene.createNode("connect");
connect89.nodeField = "bboxSize";
connect89.protoField = "bboxSize";
IS83ZZZ.connect[5] = connect89;

let connect90 = browser.currentScene.createNode("connect");
connect90.nodeField = "bboxCenter";
connect90.protoField = "bboxCenter";
IS83ZZZ.connect[6] = connect90;

let connect91 = browser.currentScene.createNode("connect");
connect91.nodeField = "addChildren";
connect91.protoField = "addChildren";
IS83ZZZ.connect[7] = connect91;

let connect92 = browser.currentScene.createNode("connect");
connect92.nodeField = "removeChildren";
connect92.protoField = "removeChildren";
IS83ZZZ.connect[8] = connect92;

let connect93 = browser.currentScene.createNode("connect");
connect93.nodeField = "children";
connect93.protoField = "children";
IS83ZZZ.connect[9] = connect93;

iS = IS83;

ProtoBody81YYY.children = new X3D.MFNode();

ProtoBody81ZZZ.children[0] = Transform82;

protoBody = ProtoBody81;

browser.currentScene.children[1] = ProtoDeclare62;

let ProtoDeclare94 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface96.getField("name")ProtoInterface95YYY.field = new X3D.MFNode();

ProtoInterface97.getField("mass")ProtoInterface95YYY.field = new X3D.MFNode();

ProtoInterface98.getField("centerOfMass")ProtoInterface95YYY.field = new X3D.MFNode();

ProtoInterface99.getField("momentsOfInertia").setValue("0 0 0 0 0 0 0 0 0");
ProtoInterface95YYY.field = new X3D.MFNode();

ProtoInterface100.getField("bboxCenter")ProtoInterface95YYY.field = new X3D.MFNode();

ProtoInterface101.getField("bboxSize").setValue("-1 -1 -1");
ProtoInterface95YYY.field = new X3D.MFNode();

ProtoInterface102.getField("children")ProtoInterface95YYY.field = new X3D.MFNode();

ProtoInterface103.getField("addChildren")ProtoInterface95YYY.field = new X3D.MFNode();

ProtoInterface104.getField("removeChildren")ProtoInterface95YYY.field = new X3D.MFNode();

ProtoInterface105.getField("coord")ProtoInterface95YYY.field = new X3D.MFNode();

ProtoInterface106.getField("displacers")ProtoInterface95YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface95;

let ProtoBody107 = browser.currentScene.createNode("ProtoBody");
let Group108 = browser.currentScene.createNode("Group");
Group108.DEF = "SegmentGroup";
let IS109 = browser.currentScene.createNode("IS");
let connect110 = browser.currentScene.createNode("connect");
connect110.nodeField = "bboxSize";
connect110.protoField = "bboxSize";
IS109YYY.connect = new X3D.MFNode();

IS109ZZZ.connect[0] = connect110;

let connect111 = browser.currentScene.createNode("connect");
connect111.nodeField = "bboxCenter";
connect111.protoField = "bboxCenter";
IS109ZZZ.connect[1] = connect111;

let connect112 = browser.currentScene.createNode("connect");
connect112.nodeField = "addChildren";
connect112.protoField = "addChildren";
IS109ZZZ.connect[2] = connect112;

let connect113 = browser.currentScene.createNode("connect");
connect113.nodeField = "removeChildren";
connect113.protoField = "removeChildren";
IS109ZZZ.connect[3] = connect113;

let connect114 = browser.currentScene.createNode("connect");
connect114.nodeField = "children";
connect114.protoField = "children";
IS109ZZZ.connect[4] = connect114;

iS = IS109;

ProtoBody107YYY.children = new X3D.MFNode();

ProtoBody107ZZZ.children[0] = Group108;

protoBody = ProtoBody107;

browser.currentScene.children[2] = ProtoDeclare94;

let ProtoDeclare115 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface117.getField("name")ProtoInterface116YYY.field = new X3D.MFNode();

ProtoInterface118.getField("translation")ProtoInterface116YYY.field = new X3D.MFNode();

ProtoInterface119.getField("rotation")ProtoInterface116YYY.field = new X3D.MFNode();

ProtoInterface120.getField("scale").setValue("1 1 1");
ProtoInterface116YYY.field = new X3D.MFNode();

ProtoInterface121.getField("scaleOrientation")ProtoInterface116YYY.field = new X3D.MFNode();

ProtoInterface122.getField("center")ProtoInterface116YYY.field = new X3D.MFNode();

ProtoInterface123.getField("bboxCenter")ProtoInterface116YYY.field = new X3D.MFNode();

ProtoInterface124.getField("bboxSize").setValue("-1 -1 -1");
ProtoInterface116YYY.field = new X3D.MFNode();

ProtoInterface125.getField("children")ProtoInterface116YYY.field = new X3D.MFNode();

ProtoInterface126.getField("addChildren")ProtoInterface116YYY.field = new X3D.MFNode();

ProtoInterface127.getField("removeChildren")ProtoInterface116YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface116;

let ProtoBody128 = browser.currentScene.createNode("ProtoBody");
let Transform129 = browser.currentScene.createNode("Transform");
Transform129.DEF = "SiteTransform";
let IS130 = browser.currentScene.createNode("IS");
let connect131 = browser.currentScene.createNode("connect");
connect131.nodeField = "translation";
connect131.protoField = "translation";
IS130YYY.connect = new X3D.MFNode();

IS130ZZZ.connect[0] = connect131;

let connect132 = browser.currentScene.createNode("connect");
connect132.nodeField = "rotation";
connect132.protoField = "rotation";
IS130ZZZ.connect[1] = connect132;

let connect133 = browser.currentScene.createNode("connect");
connect133.nodeField = "scale";
connect133.protoField = "scale";
IS130ZZZ.connect[2] = connect133;

let connect134 = browser.currentScene.createNode("connect");
connect134.nodeField = "scaleOrientation";
connect134.protoField = "scaleOrientation";
IS130ZZZ.connect[3] = connect134;

let connect135 = browser.currentScene.createNode("connect");
connect135.nodeField = "center";
connect135.protoField = "center";
IS130ZZZ.connect[4] = connect135;

let connect136 = browser.currentScene.createNode("connect");
connect136.nodeField = "bboxSize";
connect136.protoField = "bboxSize";
IS130ZZZ.connect[5] = connect136;

let connect137 = browser.currentScene.createNode("connect");
connect137.nodeField = "bboxCenter";
connect137.protoField = "bboxCenter";
IS130ZZZ.connect[6] = connect137;

let connect138 = browser.currentScene.createNode("connect");
connect138.nodeField = "addChildren";
connect138.protoField = "addChildren";
IS130ZZZ.connect[7] = connect138;

let connect139 = browser.currentScene.createNode("connect");
connect139.nodeField = "removeChildren";
connect139.protoField = "removeChildren";
IS130ZZZ.connect[8] = connect139;

let connect140 = browser.currentScene.createNode("connect");
connect140.nodeField = "children";
connect140.protoField = "children";
IS130ZZZ.connect[9] = connect140;

iS = IS130;

ProtoBody128YYY.children = new X3D.MFNode();

ProtoBody128ZZZ.children[0] = Transform129;

protoBody = ProtoBody128;

browser.currentScene.children[3] = ProtoDeclare115;

let ProtoDeclare141 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface143.getField("name")ProtoInterface142YYY.field = new X3D.MFNode();

ProtoInterface144.getField("coordIndex")ProtoInterface142YYY.field = new X3D.MFNode();

ProtoInterface145.getField("displacements")ProtoInterface142YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface142;

let ProtoBody146 = browser.currentScene.createNode("ProtoBody");
let WorldInfo147 = browser.currentScene.createNode("WorldInfo");
WorldInfo147.info = new X3D.MFString([new X3D.SFString("null body node")]);
ProtoBody146YYY.children = new X3D.MFNode();

ProtoBody146ZZZ.children[0] = WorldInfo147;

protoBody = ProtoBody146;

browser.currentScene.children[4] = ProtoDeclare141;

let Shape148 = browser.currentScene.createNode("Shape");
let Appearance149 = browser.currentScene.createNode("Appearance");
let Material150 = browser.currentScene.createNode("Material");
Material150.ambientIntensity = 0.25;
Material150.diffuseColor = new X3D.SFColor([0.795918,0.505869,0.093315]);
Material150.specularColor = new X3D.SFColor([0.923469,0.428866,0.006369]);
Material150.shininess = 0.39;
material = Material150;

appearance = Appearance149;

let Text151 = browser.currentScene.createNode("Text");
Text151.string = new X3D.MFString([new X3D.SFString("Humanoid Animation"), new X3D.SFString("(HAnim) prototype"), new X3D.SFString("implementations")]);
let FontStyle152 = browser.currentScene.createNode("FontStyle");
FontStyle152.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle152;

geometry = Text151;

browser.currentScene.children[5] = Shape148;

}
main ();
