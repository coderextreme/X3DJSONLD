const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "LOA1_StopAnimation.x3d");
scene.addMetaData("description", "Humanoid animation prototype reusable by any Humanoid.");
scene.addMetaData("creator", "Cindy Ballreich cindy@ballreich.net 3Name3D, Joe Williams, Don Brutzman");
scene.addMetaData("rights", "1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.");
scene.addMetaData("translator", "Ozan APAYDIN");
scene.addMetaData("created", "1 December 2001");
scene.addMetaData("modified", "23 May 2020");
scene.addMetaData("reference", "http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl");
scene.addMetaData("reference", "http://www.HAnim.org");
scene.addMetaData("reference", "http://HAnim.org/Models");
scene.addMetaData("reference", "http://HAnim.org/Nodes");
scene.addMetaData("subject", "Nancy Stand Animation HAnim 2001");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StopAnimation.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo18 = browser.currentScene.createNode("WorldInfo");
WorldInfo18.title = "LOA1_StopAnimation.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo18;

let ProtoDeclare19 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="LOA1_StopAnimation" ><ProtoInterface><field name="cycleInterval" accessType="inputOutput" type="SFTime" value="0.009999999776482582"></field>
<field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="loop" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="startTime" accessType="inputOutput" type="SFTime" value="0"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime" value="-1"></field>
<field name="fraction_changed" accessType="outputOnly" type="SFFloat"></field>
<field name="isActive" accessType="outputOnly" type="SFBool"></field>
<field name="HumanoidRoot_translation_changed" accessType="outputOnly" type="SFVec3f"></field>
<field name="HumanoidRoot_rotation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="lower_body_rotation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_hip_rotation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_knee_rotation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_ankle_rotation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_midtarsal_rotation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_hip_rotation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_knee_rotation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_ankle_rotation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_midtarsal_rotation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="vl5_rotation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="skullbase_rotation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_shoulder_rotation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_elbow_rotation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="l_wrist_rotation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_shoulder_rotation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_elbow_rotation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="r_wrist_rotation_changed" accessType="outputOnly" type="SFRotation"></field>
</ProtoInterface>
<ProtoBody><Group><TimeSensor DEF="TIMER"><IS><connect nodeField="cycleInterval" protoField="cycleInterval"></connect>
<connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="loop" protoField="loop"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
<connect nodeField="fraction_changed" protoField="fraction_changed"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
</IS>
</TimeSensor>
<PositionInterpolator DEF="HUMANOIDROOT_POSITION_ANIMATOR" key="0 1" keyValue="0 0 0 0 0 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_translation_changed"></connect>
</IS>
</PositionInterpolator>
<OrientationInterpolator DEF="HUMANOIDROOT_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="SACROILIAC_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="lower_body_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_HIP_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_KNEE_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ANKLE_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_MIDTARSAL_ANIMATOR" key="0 1" keyValue="1 0 0 0 1 0 0 0"><IS><connect nodeField="value_changed" protoField="l_midtarsal_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_HIP_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_KNEE_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ANKLE_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_MIDTARSAL_ANIMATOR" key="0 1" keyValue="1 0 0 0 1 0 0 0"><IS><connect nodeField="value_changed" protoField="r_midtarsal_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="VL5_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="vl5_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="SKULLBASE_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="skullbase_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_SHOULDER_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_shoulder_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ELBOW_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_elbow_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_WRIST_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_wrist_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_SHOULDER_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_shoulder_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ELBOW_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_elbow_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_WRIST_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_wrist_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
</Group>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="HUMANOIDROOT_POSITION_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="HUMANOIDROOT_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="SACROILIAC_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_HIP_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_KNEE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_ANKLE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_MIDTARSAL_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_HIP_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_KNEE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_ANKLE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_MIDTARSAL_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="VL5_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="SKULLBASE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_SHOULDER_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_ELBOW_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_WRIST_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_SHOULDER_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_ELBOW_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_WRIST_ANIMATOR"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare19.name = "LOA1_StopAnimation";
ProtoInterface21.getField("cycleInterval").setValue("0.009999999776482582");
ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface22.getField("enabled").setValue("true");
ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface23.getField("loop").setValue("true");
ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface24.getField("startTime").setValue("0");
ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface25.getField("stopTime").setValue("-1");
ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface26.getField("fraction_changed")ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface27.getField("isActive")ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface28.getField("HumanoidRoot_translation_changed")ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface29.getField("HumanoidRoot_rotation_changed")ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface30.getField("lower_body_rotation_changed")ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface31.getField("l_hip_rotation_changed")ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface32.getField("l_knee_rotation_changed")ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface33.getField("l_ankle_rotation_changed")ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface34.getField("l_midtarsal_rotation_changed")ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface35.getField("r_hip_rotation_changed")ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface36.getField("r_knee_rotation_changed")ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface37.getField("r_ankle_rotation_changed")ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface38.getField("r_midtarsal_rotation_changed")ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface39.getField("vl5_rotation_changed")ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface40.getField("skullbase_rotation_changed")ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface41.getField("l_shoulder_rotation_changed")ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface42.getField("l_elbow_rotation_changed")ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface43.getField("l_wrist_rotation_changed")ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface44.getField("r_shoulder_rotation_changed")ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface45.getField("r_elbow_rotation_changed")ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface46.getField("r_wrist_rotation_changed")ProtoInterface20YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface20;

let ProtoBody47 = browser.currentScene.createNode("ProtoBody");
let Group48 = browser.currentScene.createNode("Group");
let TimeSensor49 = browser.currentScene.createNode("TimeSensor");
TimeSensor49.DEF = "TIMER";
let IS50 = browser.currentScene.createNode("IS");
let connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "cycleInterval";
connect51.protoField = "cycleInterval";
IS50YYY.connect = new X3D.MFNode();

IS50ZZZ.connect[0] = connect51;

let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "enabled";
connect52.protoField = "enabled";
IS50ZZZ.connect[1] = connect52;

let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "loop";
connect53.protoField = "loop";
IS50ZZZ.connect[2] = connect53;

let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "startTime";
connect54.protoField = "startTime";
IS50ZZZ.connect[3] = connect54;

let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "stopTime";
connect55.protoField = "stopTime";
IS50ZZZ.connect[4] = connect55;

let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "fraction_changed";
connect56.protoField = "fraction_changed";
IS50ZZZ.connect[5] = connect56;

let connect57 = browser.currentScene.createNode("connect");
connect57.nodeField = "isActive";
connect57.protoField = "isActive";
IS50ZZZ.connect[6] = connect57;

iS = IS50;

Group48YYY.children = new X3D.MFNode();

Group48ZZZ.children[0] = TimeSensor49;

let PositionInterpolator58 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator58.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator58.key = new X3D.MFFloat([0,1]);
PositionInterpolator58.keyValue = new X3D.MFVec3f([0,0,0,0,0,0]);
let IS59 = browser.currentScene.createNode("IS");
let connect60 = browser.currentScene.createNode("connect");
connect60.nodeField = "value_changed";
connect60.protoField = "HumanoidRoot_translation_changed";
IS59YYY.connect = new X3D.MFNode();

IS59ZZZ.connect[0] = connect60;

iS = IS59;

Group48ZZZ.children[1] = PositionInterpolator58;

let OrientationInterpolator61 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator61.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator61.key = new X3D.MFFloat([0,1]);
OrientationInterpolator61.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS62 = browser.currentScene.createNode("IS");
let connect63 = browser.currentScene.createNode("connect");
connect63.nodeField = "value_changed";
connect63.protoField = "HumanoidRoot_rotation_changed";
IS62YYY.connect = new X3D.MFNode();

IS62ZZZ.connect[0] = connect63;

iS = IS62;

Group48ZZZ.children[2] = OrientationInterpolator61;

let OrientationInterpolator64 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator64.DEF = "SACROILIAC_ANIMATOR";
OrientationInterpolator64.key = new X3D.MFFloat([0,1]);
OrientationInterpolator64.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS65 = browser.currentScene.createNode("IS");
let connect66 = browser.currentScene.createNode("connect");
connect66.nodeField = "value_changed";
connect66.protoField = "lower_body_rotation_changed";
IS65YYY.connect = new X3D.MFNode();

IS65ZZZ.connect[0] = connect66;

iS = IS65;

Group48ZZZ.children[3] = OrientationInterpolator64;

let OrientationInterpolator67 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator67.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator67.key = new X3D.MFFloat([0,1]);
OrientationInterpolator67.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS68 = browser.currentScene.createNode("IS");
let connect69 = browser.currentScene.createNode("connect");
connect69.nodeField = "value_changed";
connect69.protoField = "l_hip_rotation_changed";
IS68YYY.connect = new X3D.MFNode();

IS68ZZZ.connect[0] = connect69;

iS = IS68;

Group48ZZZ.children[4] = OrientationInterpolator67;

let OrientationInterpolator70 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator70.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator70.key = new X3D.MFFloat([0,1]);
OrientationInterpolator70.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS71 = browser.currentScene.createNode("IS");
let connect72 = browser.currentScene.createNode("connect");
connect72.nodeField = "value_changed";
connect72.protoField = "l_knee_rotation_changed";
IS71YYY.connect = new X3D.MFNode();

IS71ZZZ.connect[0] = connect72;

iS = IS71;

Group48ZZZ.children[5] = OrientationInterpolator70;

let OrientationInterpolator73 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator73.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator73.key = new X3D.MFFloat([0,1]);
OrientationInterpolator73.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS74 = browser.currentScene.createNode("IS");
let connect75 = browser.currentScene.createNode("connect");
connect75.nodeField = "value_changed";
connect75.protoField = "l_ankle_rotation_changed";
IS74YYY.connect = new X3D.MFNode();

IS74ZZZ.connect[0] = connect75;

iS = IS74;

Group48ZZZ.children[6] = OrientationInterpolator73;

let OrientationInterpolator76 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator76.DEF = "L_MIDTARSAL_ANIMATOR";
OrientationInterpolator76.key = new X3D.MFFloat([0,1]);
OrientationInterpolator76.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0]);
let IS77 = browser.currentScene.createNode("IS");
let connect78 = browser.currentScene.createNode("connect");
connect78.nodeField = "value_changed";
connect78.protoField = "l_midtarsal_rotation_changed";
IS77YYY.connect = new X3D.MFNode();

IS77ZZZ.connect[0] = connect78;

iS = IS77;

Group48ZZZ.children[7] = OrientationInterpolator76;

let OrientationInterpolator79 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator79.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator79.key = new X3D.MFFloat([0,1]);
OrientationInterpolator79.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS80 = browser.currentScene.createNode("IS");
let connect81 = browser.currentScene.createNode("connect");
connect81.nodeField = "value_changed";
connect81.protoField = "r_hip_rotation_changed";
IS80YYY.connect = new X3D.MFNode();

IS80ZZZ.connect[0] = connect81;

iS = IS80;

Group48ZZZ.children[8] = OrientationInterpolator79;

let OrientationInterpolator82 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator82.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator82.key = new X3D.MFFloat([0,1]);
OrientationInterpolator82.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS83 = browser.currentScene.createNode("IS");
let connect84 = browser.currentScene.createNode("connect");
connect84.nodeField = "value_changed";
connect84.protoField = "r_knee_rotation_changed";
IS83YYY.connect = new X3D.MFNode();

IS83ZZZ.connect[0] = connect84;

iS = IS83;

Group48ZZZ.children[9] = OrientationInterpolator82;

let OrientationInterpolator85 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator85.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator85.key = new X3D.MFFloat([0,1]);
OrientationInterpolator85.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS86 = browser.currentScene.createNode("IS");
let connect87 = browser.currentScene.createNode("connect");
connect87.nodeField = "value_changed";
connect87.protoField = "r_ankle_rotation_changed";
IS86YYY.connect = new X3D.MFNode();

IS86ZZZ.connect[0] = connect87;

iS = IS86;

Group48ZZZ.children[10] = OrientationInterpolator85;

let OrientationInterpolator88 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator88.DEF = "R_MIDTARSAL_ANIMATOR";
OrientationInterpolator88.key = new X3D.MFFloat([0,1]);
OrientationInterpolator88.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0]);
let IS89 = browser.currentScene.createNode("IS");
let connect90 = browser.currentScene.createNode("connect");
connect90.nodeField = "value_changed";
connect90.protoField = "r_midtarsal_rotation_changed";
IS89YYY.connect = new X3D.MFNode();

IS89ZZZ.connect[0] = connect90;

iS = IS89;

Group48ZZZ.children[11] = OrientationInterpolator88;

let OrientationInterpolator91 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator91.DEF = "VL5_ANIMATOR";
OrientationInterpolator91.key = new X3D.MFFloat([0,1]);
OrientationInterpolator91.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS92 = browser.currentScene.createNode("IS");
let connect93 = browser.currentScene.createNode("connect");
connect93.nodeField = "value_changed";
connect93.protoField = "vl5_rotation_changed";
IS92YYY.connect = new X3D.MFNode();

IS92ZZZ.connect[0] = connect93;

iS = IS92;

Group48ZZZ.children[12] = OrientationInterpolator91;

let OrientationInterpolator94 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator94.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator94.key = new X3D.MFFloat([0,1]);
OrientationInterpolator94.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS95 = browser.currentScene.createNode("IS");
let connect96 = browser.currentScene.createNode("connect");
connect96.nodeField = "value_changed";
connect96.protoField = "skullbase_rotation_changed";
IS95YYY.connect = new X3D.MFNode();

IS95ZZZ.connect[0] = connect96;

iS = IS95;

Group48ZZZ.children[13] = OrientationInterpolator94;

let OrientationInterpolator97 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator97.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator97.key = new X3D.MFFloat([0,1]);
OrientationInterpolator97.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS98 = browser.currentScene.createNode("IS");
let connect99 = browser.currentScene.createNode("connect");
connect99.nodeField = "value_changed";
connect99.protoField = "l_shoulder_rotation_changed";
IS98YYY.connect = new X3D.MFNode();

IS98ZZZ.connect[0] = connect99;

iS = IS98;

Group48ZZZ.children[14] = OrientationInterpolator97;

let OrientationInterpolator100 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator100.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator100.key = new X3D.MFFloat([0,1]);
OrientationInterpolator100.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS101 = browser.currentScene.createNode("IS");
let connect102 = browser.currentScene.createNode("connect");
connect102.nodeField = "value_changed";
connect102.protoField = "l_elbow_rotation_changed";
IS101YYY.connect = new X3D.MFNode();

IS101ZZZ.connect[0] = connect102;

iS = IS101;

Group48ZZZ.children[15] = OrientationInterpolator100;

let OrientationInterpolator103 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator103.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator103.key = new X3D.MFFloat([0,1]);
OrientationInterpolator103.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS104 = browser.currentScene.createNode("IS");
let connect105 = browser.currentScene.createNode("connect");
connect105.nodeField = "value_changed";
connect105.protoField = "l_wrist_rotation_changed";
IS104YYY.connect = new X3D.MFNode();

IS104ZZZ.connect[0] = connect105;

iS = IS104;

Group48ZZZ.children[16] = OrientationInterpolator103;

let OrientationInterpolator106 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator106.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator106.key = new X3D.MFFloat([0,1]);
OrientationInterpolator106.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS107 = browser.currentScene.createNode("IS");
let connect108 = browser.currentScene.createNode("connect");
connect108.nodeField = "value_changed";
connect108.protoField = "r_shoulder_rotation_changed";
IS107YYY.connect = new X3D.MFNode();

IS107ZZZ.connect[0] = connect108;

iS = IS107;

Group48ZZZ.children[17] = OrientationInterpolator106;

let OrientationInterpolator109 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator109.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator109.key = new X3D.MFFloat([0,1]);
OrientationInterpolator109.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS110 = browser.currentScene.createNode("IS");
let connect111 = browser.currentScene.createNode("connect");
connect111.nodeField = "value_changed";
connect111.protoField = "r_elbow_rotation_changed";
IS110YYY.connect = new X3D.MFNode();

IS110ZZZ.connect[0] = connect111;

iS = IS110;

Group48ZZZ.children[18] = OrientationInterpolator109;

let OrientationInterpolator112 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator112.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator112.key = new X3D.MFFloat([0,1]);
OrientationInterpolator112.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS113 = browser.currentScene.createNode("IS");
let connect114 = browser.currentScene.createNode("connect");
connect114.nodeField = "value_changed";
connect114.protoField = "r_wrist_rotation_changed";
IS113YYY.connect = new X3D.MFNode();

IS113ZZZ.connect[0] = connect114;

iS = IS113;

Group48ZZZ.children[19] = OrientationInterpolator112;

ProtoBody47YYY.children = new X3D.MFNode();

ProtoBody47ZZZ.children[0] = Group48;

let ROUTE115 = browser.currentScene.createNode("ROUTE");
ROUTE115.fromField = "fraction_changed";
ROUTE115.fromNode = "TIMER";
ROUTE115.toField = "set_fraction";
ROUTE115.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ProtoBody47ZZZ.children[1] = ROUTE115;

let ROUTE116 = browser.currentScene.createNode("ROUTE");
ROUTE116.fromField = "fraction_changed";
ROUTE116.fromNode = "TIMER";
ROUTE116.toField = "set_fraction";
ROUTE116.toNode = "HUMANOIDROOT_ANIMATOR";
ProtoBody47ZZZ.children[2] = ROUTE116;

let ROUTE117 = browser.currentScene.createNode("ROUTE");
ROUTE117.fromField = "fraction_changed";
ROUTE117.fromNode = "TIMER";
ROUTE117.toField = "set_fraction";
ROUTE117.toNode = "SACROILIAC_ANIMATOR";
ProtoBody47ZZZ.children[3] = ROUTE117;

let ROUTE118 = browser.currentScene.createNode("ROUTE");
ROUTE118.fromField = "fraction_changed";
ROUTE118.fromNode = "TIMER";
ROUTE118.toField = "set_fraction";
ROUTE118.toNode = "L_HIP_ANIMATOR";
ProtoBody47ZZZ.children[4] = ROUTE118;

let ROUTE119 = browser.currentScene.createNode("ROUTE");
ROUTE119.fromField = "fraction_changed";
ROUTE119.fromNode = "TIMER";
ROUTE119.toField = "set_fraction";
ROUTE119.toNode = "L_KNEE_ANIMATOR";
ProtoBody47ZZZ.children[5] = ROUTE119;

let ROUTE120 = browser.currentScene.createNode("ROUTE");
ROUTE120.fromField = "fraction_changed";
ROUTE120.fromNode = "TIMER";
ROUTE120.toField = "set_fraction";
ROUTE120.toNode = "L_ANKLE_ANIMATOR";
ProtoBody47ZZZ.children[6] = ROUTE120;

let ROUTE121 = browser.currentScene.createNode("ROUTE");
ROUTE121.fromField = "fraction_changed";
ROUTE121.fromNode = "TIMER";
ROUTE121.toField = "set_fraction";
ROUTE121.toNode = "L_MIDTARSAL_ANIMATOR";
ProtoBody47ZZZ.children[7] = ROUTE121;

let ROUTE122 = browser.currentScene.createNode("ROUTE");
ROUTE122.fromField = "fraction_changed";
ROUTE122.fromNode = "TIMER";
ROUTE122.toField = "set_fraction";
ROUTE122.toNode = "R_HIP_ANIMATOR";
ProtoBody47ZZZ.children[8] = ROUTE122;

let ROUTE123 = browser.currentScene.createNode("ROUTE");
ROUTE123.fromField = "fraction_changed";
ROUTE123.fromNode = "TIMER";
ROUTE123.toField = "set_fraction";
ROUTE123.toNode = "R_KNEE_ANIMATOR";
ProtoBody47ZZZ.children[9] = ROUTE123;

let ROUTE124 = browser.currentScene.createNode("ROUTE");
ROUTE124.fromField = "fraction_changed";
ROUTE124.fromNode = "TIMER";
ROUTE124.toField = "set_fraction";
ROUTE124.toNode = "R_ANKLE_ANIMATOR";
ProtoBody47ZZZ.children[10] = ROUTE124;

let ROUTE125 = browser.currentScene.createNode("ROUTE");
ROUTE125.fromField = "fraction_changed";
ROUTE125.fromNode = "TIMER";
ROUTE125.toField = "set_fraction";
ROUTE125.toNode = "R_MIDTARSAL_ANIMATOR";
ProtoBody47ZZZ.children[11] = ROUTE125;

let ROUTE126 = browser.currentScene.createNode("ROUTE");
ROUTE126.fromField = "fraction_changed";
ROUTE126.fromNode = "TIMER";
ROUTE126.toField = "set_fraction";
ROUTE126.toNode = "VL5_ANIMATOR";
ProtoBody47ZZZ.children[12] = ROUTE126;

let ROUTE127 = browser.currentScene.createNode("ROUTE");
ROUTE127.fromField = "fraction_changed";
ROUTE127.fromNode = "TIMER";
ROUTE127.toField = "set_fraction";
ROUTE127.toNode = "SKULLBASE_ANIMATOR";
ProtoBody47ZZZ.children[13] = ROUTE127;

let ROUTE128 = browser.currentScene.createNode("ROUTE");
ROUTE128.fromField = "fraction_changed";
ROUTE128.fromNode = "TIMER";
ROUTE128.toField = "set_fraction";
ROUTE128.toNode = "L_SHOULDER_ANIMATOR";
ProtoBody47ZZZ.children[14] = ROUTE128;

let ROUTE129 = browser.currentScene.createNode("ROUTE");
ROUTE129.fromField = "fraction_changed";
ROUTE129.fromNode = "TIMER";
ROUTE129.toField = "set_fraction";
ROUTE129.toNode = "L_ELBOW_ANIMATOR";
ProtoBody47ZZZ.children[15] = ROUTE129;

let ROUTE130 = browser.currentScene.createNode("ROUTE");
ROUTE130.fromField = "fraction_changed";
ROUTE130.fromNode = "TIMER";
ROUTE130.toField = "set_fraction";
ROUTE130.toNode = "L_WRIST_ANIMATOR";
ProtoBody47ZZZ.children[16] = ROUTE130;

let ROUTE131 = browser.currentScene.createNode("ROUTE");
ROUTE131.fromField = "fraction_changed";
ROUTE131.fromNode = "TIMER";
ROUTE131.toField = "set_fraction";
ROUTE131.toNode = "R_SHOULDER_ANIMATOR";
ProtoBody47ZZZ.children[17] = ROUTE131;

let ROUTE132 = browser.currentScene.createNode("ROUTE");
ROUTE132.fromField = "fraction_changed";
ROUTE132.fromNode = "TIMER";
ROUTE132.toField = "set_fraction";
ROUTE132.toNode = "R_ELBOW_ANIMATOR";
ProtoBody47ZZZ.children[18] = ROUTE132;

let ROUTE133 = browser.currentScene.createNode("ROUTE");
ROUTE133.fromField = "fraction_changed";
ROUTE133.fromNode = "TIMER";
ROUTE133.toField = "set_fraction";
ROUTE133.toNode = "R_WRIST_ANIMATOR";
ProtoBody47ZZZ.children[19] = ROUTE133;

protoBody = ProtoBody47;

browser.currentScene.children[1] = ProtoDeclare19;

//======================================
//Point to example use in case someone inspects this file
let Anchor134 = browser.currentScene.createNode("Anchor");
Anchor134.description = "InterchangableActorsViaDynamicRouting";
Anchor134.parameter = new X3D.MFString([new X3D.SFString("target=_blank")]);
Anchor134.url = new X3D.MFString([new X3D.SFString("InterchangableActorsViaDynamicRouting.x3d"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d"), new X3D.SFString("InterchangableActorsViaDynamicRouting.wrl"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl")]);
let Shape135 = browser.currentScene.createNode("Shape");
let Text136 = browser.currentScene.createNode("Text");
Text136.string = new X3D.MFString([new X3D.SFString("LOA1_StopAnimation.x3d"), new X3D.SFString("defines a prototype"), new X3D.SFString("for animating a humanoid."), new X3D.SFString(""), new X3D.SFString("Click this text to see"), new X3D.SFString("InterchangableActorsViaDynamicRouting example.")]);
let FontStyle137 = browser.currentScene.createNode("FontStyle");
FontStyle137.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle137.size = 0.8;
fontStyle = FontStyle137;

geometry = Text136;

let Appearance138 = browser.currentScene.createNode("Appearance");
let Material139 = browser.currentScene.createNode("Material");
Material139.diffuseColor = new X3D.SFColor([1,1,0.2]);
material = Material139;

appearance = Appearance138;

Anchor134YYY.children = new X3D.MFNode();

Anchor134ZZZ.children[0] = Shape135;

browser.currentScene.children[2] = Anchor134;

}
main ();
