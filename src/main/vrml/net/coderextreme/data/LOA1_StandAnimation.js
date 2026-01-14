const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "LOA1_StandAnimation.x3d");
scene.addMetaData("description", "Humanoid animation prototype reusable by any Humanoid.");
scene.addMetaData("creator", "Cindy Ballreich cindy@ballreich.net 3Name3D, Joe Williams, Don Brutzman");
scene.addMetaData("rights", "1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.");
scene.addMetaData("translator", "Ozan APAYDIN");
scene.addMetaData("created", "1 December 2001");
scene.addMetaData("modified", "23 May 2020");
scene.addMetaData("TODO", "consider adding eyeball animation");
scene.addMetaData("reference", "http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl");
scene.addMetaData("reference", "http://www.HAnim.org");
scene.addMetaData("reference", "http://HAnim.org/Models");
scene.addMetaData("reference", "http://HAnim.org/Nodes");
scene.addMetaData("subject", "Nancy Stand Animation HAnim 2001");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StandAnimation.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo19 = browser.currentScene.createNode("WorldInfo");
WorldInfo19.title = "LOA1_StandAnimation.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo19;

let ProtoDeclare20 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="LOA1_StandAnimation" ><ProtoInterface><field name="cycleInterval" accessType="inputOutput" type="SFTime" value="0.009999999776482582"></field>
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
<OrientationInterpolator DEF="SKULLBASE_ANIMATOR" key="0 0.5 1" keyValue="0 0 1 0 -1 0 0 0.5 0 0 1 0"><IS><connect nodeField="value_changed" protoField="skullbase_rotation_changed"></connect>
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
ProtoDeclare20.name = "LOA1_StandAnimation";
ProtoInterface22.getField("cycleInterval").setValue("0.009999999776482582");
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface23.getField("enabled").setValue("true");
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface24.getField("loop").setValue("true");
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface25.getField("startTime").setValue("0");
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface26.getField("stopTime").setValue("-1");
ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface27.getField("fraction_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface28.getField("isActive")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface29.getField("HumanoidRoot_translation_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface30.getField("HumanoidRoot_rotation_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface31.getField("lower_body_rotation_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface32.getField("l_hip_rotation_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface33.getField("l_knee_rotation_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface34.getField("l_ankle_rotation_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface35.getField("l_midtarsal_rotation_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface36.getField("r_hip_rotation_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface37.getField("r_knee_rotation_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface38.getField("r_ankle_rotation_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface39.getField("r_midtarsal_rotation_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface40.getField("vl5_rotation_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface41.getField("skullbase_rotation_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface42.getField("l_shoulder_rotation_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface43.getField("l_elbow_rotation_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface44.getField("l_wrist_rotation_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface45.getField("r_shoulder_rotation_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface46.getField("r_elbow_rotation_changed")ProtoInterface21YYY.field = new X3D.MFNode();

ProtoInterface47.getField("r_wrist_rotation_changed")ProtoInterface21YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface21;

let ProtoBody48 = browser.currentScene.createNode("ProtoBody");
let Group49 = browser.currentScene.createNode("Group");
let TimeSensor50 = browser.currentScene.createNode("TimeSensor");
TimeSensor50.DEF = "TIMER";
let IS51 = browser.currentScene.createNode("IS");
let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "cycleInterval";
connect52.protoField = "cycleInterval";
IS51YYY.connect = new X3D.MFNode();

IS51ZZZ.connect[0] = connect52;

let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "enabled";
connect53.protoField = "enabled";
IS51ZZZ.connect[1] = connect53;

let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "loop";
connect54.protoField = "loop";
IS51ZZZ.connect[2] = connect54;

let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "startTime";
connect55.protoField = "startTime";
IS51ZZZ.connect[3] = connect55;

let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "stopTime";
connect56.protoField = "stopTime";
IS51ZZZ.connect[4] = connect56;

let connect57 = browser.currentScene.createNode("connect");
connect57.nodeField = "fraction_changed";
connect57.protoField = "fraction_changed";
IS51ZZZ.connect[5] = connect57;

let connect58 = browser.currentScene.createNode("connect");
connect58.nodeField = "isActive";
connect58.protoField = "isActive";
IS51ZZZ.connect[6] = connect58;

iS = IS51;

Group49YYY.children = new X3D.MFNode();

Group49ZZZ.children[0] = TimeSensor50;

let PositionInterpolator59 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator59.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator59.key = new X3D.MFFloat([0,1]);
PositionInterpolator59.keyValue = new X3D.MFVec3f([0,0,0,0,0,0]);
let IS60 = browser.currentScene.createNode("IS");
let connect61 = browser.currentScene.createNode("connect");
connect61.nodeField = "value_changed";
connect61.protoField = "HumanoidRoot_translation_changed";
IS60YYY.connect = new X3D.MFNode();

IS60ZZZ.connect[0] = connect61;

iS = IS60;

Group49ZZZ.children[1] = PositionInterpolator59;

let OrientationInterpolator62 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator62.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator62.key = new X3D.MFFloat([0,1]);
OrientationInterpolator62.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS63 = browser.currentScene.createNode("IS");
let connect64 = browser.currentScene.createNode("connect");
connect64.nodeField = "value_changed";
connect64.protoField = "HumanoidRoot_rotation_changed";
IS63YYY.connect = new X3D.MFNode();

IS63ZZZ.connect[0] = connect64;

iS = IS63;

Group49ZZZ.children[2] = OrientationInterpolator62;

let OrientationInterpolator65 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator65.DEF = "SACROILIAC_ANIMATOR";
OrientationInterpolator65.key = new X3D.MFFloat([0,1]);
OrientationInterpolator65.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS66 = browser.currentScene.createNode("IS");
let connect67 = browser.currentScene.createNode("connect");
connect67.nodeField = "value_changed";
connect67.protoField = "lower_body_rotation_changed";
IS66YYY.connect = new X3D.MFNode();

IS66ZZZ.connect[0] = connect67;

iS = IS66;

Group49ZZZ.children[3] = OrientationInterpolator65;

let OrientationInterpolator68 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator68.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator68.key = new X3D.MFFloat([0,1]);
OrientationInterpolator68.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS69 = browser.currentScene.createNode("IS");
let connect70 = browser.currentScene.createNode("connect");
connect70.nodeField = "value_changed";
connect70.protoField = "l_hip_rotation_changed";
IS69YYY.connect = new X3D.MFNode();

IS69ZZZ.connect[0] = connect70;

iS = IS69;

Group49ZZZ.children[4] = OrientationInterpolator68;

let OrientationInterpolator71 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator71.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator71.key = new X3D.MFFloat([0,1]);
OrientationInterpolator71.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS72 = browser.currentScene.createNode("IS");
let connect73 = browser.currentScene.createNode("connect");
connect73.nodeField = "value_changed";
connect73.protoField = "l_knee_rotation_changed";
IS72YYY.connect = new X3D.MFNode();

IS72ZZZ.connect[0] = connect73;

iS = IS72;

Group49ZZZ.children[5] = OrientationInterpolator71;

let OrientationInterpolator74 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator74.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator74.key = new X3D.MFFloat([0,1]);
OrientationInterpolator74.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS75 = browser.currentScene.createNode("IS");
let connect76 = browser.currentScene.createNode("connect");
connect76.nodeField = "value_changed";
connect76.protoField = "l_ankle_rotation_changed";
IS75YYY.connect = new X3D.MFNode();

IS75ZZZ.connect[0] = connect76;

iS = IS75;

Group49ZZZ.children[6] = OrientationInterpolator74;

let OrientationInterpolator77 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator77.DEF = "L_MIDTARSAL_ANIMATOR";
OrientationInterpolator77.key = new X3D.MFFloat([0,1]);
OrientationInterpolator77.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0]);
let IS78 = browser.currentScene.createNode("IS");
let connect79 = browser.currentScene.createNode("connect");
connect79.nodeField = "value_changed";
connect79.protoField = "l_midtarsal_rotation_changed";
IS78YYY.connect = new X3D.MFNode();

IS78ZZZ.connect[0] = connect79;

iS = IS78;

Group49ZZZ.children[7] = OrientationInterpolator77;

let OrientationInterpolator80 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator80.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator80.key = new X3D.MFFloat([0,1]);
OrientationInterpolator80.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS81 = browser.currentScene.createNode("IS");
let connect82 = browser.currentScene.createNode("connect");
connect82.nodeField = "value_changed";
connect82.protoField = "r_hip_rotation_changed";
IS81YYY.connect = new X3D.MFNode();

IS81ZZZ.connect[0] = connect82;

iS = IS81;

Group49ZZZ.children[8] = OrientationInterpolator80;

let OrientationInterpolator83 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator83.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator83.key = new X3D.MFFloat([0,1]);
OrientationInterpolator83.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS84 = browser.currentScene.createNode("IS");
let connect85 = browser.currentScene.createNode("connect");
connect85.nodeField = "value_changed";
connect85.protoField = "r_knee_rotation_changed";
IS84YYY.connect = new X3D.MFNode();

IS84ZZZ.connect[0] = connect85;

iS = IS84;

Group49ZZZ.children[9] = OrientationInterpolator83;

let OrientationInterpolator86 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator86.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator86.key = new X3D.MFFloat([0,1]);
OrientationInterpolator86.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS87 = browser.currentScene.createNode("IS");
let connect88 = browser.currentScene.createNode("connect");
connect88.nodeField = "value_changed";
connect88.protoField = "r_ankle_rotation_changed";
IS87YYY.connect = new X3D.MFNode();

IS87ZZZ.connect[0] = connect88;

iS = IS87;

Group49ZZZ.children[10] = OrientationInterpolator86;

let OrientationInterpolator89 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator89.DEF = "R_MIDTARSAL_ANIMATOR";
OrientationInterpolator89.key = new X3D.MFFloat([0,1]);
OrientationInterpolator89.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0]);
let IS90 = browser.currentScene.createNode("IS");
let connect91 = browser.currentScene.createNode("connect");
connect91.nodeField = "value_changed";
connect91.protoField = "r_midtarsal_rotation_changed";
IS90YYY.connect = new X3D.MFNode();

IS90ZZZ.connect[0] = connect91;

iS = IS90;

Group49ZZZ.children[11] = OrientationInterpolator89;

let OrientationInterpolator92 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator92.DEF = "VL5_ANIMATOR";
OrientationInterpolator92.key = new X3D.MFFloat([0,1]);
OrientationInterpolator92.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS93 = browser.currentScene.createNode("IS");
let connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "value_changed";
connect94.protoField = "vl5_rotation_changed";
IS93YYY.connect = new X3D.MFNode();

IS93ZZZ.connect[0] = connect94;

iS = IS93;

Group49ZZZ.children[12] = OrientationInterpolator92;

let OrientationInterpolator95 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator95.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator95.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator95.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.5,0,0,1,0]);
let IS96 = browser.currentScene.createNode("IS");
let connect97 = browser.currentScene.createNode("connect");
connect97.nodeField = "value_changed";
connect97.protoField = "skullbase_rotation_changed";
IS96YYY.connect = new X3D.MFNode();

IS96ZZZ.connect[0] = connect97;

iS = IS96;

Group49ZZZ.children[13] = OrientationInterpolator95;

let OrientationInterpolator98 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator98.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator98.key = new X3D.MFFloat([0,1]);
OrientationInterpolator98.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS99 = browser.currentScene.createNode("IS");
let connect100 = browser.currentScene.createNode("connect");
connect100.nodeField = "value_changed";
connect100.protoField = "l_shoulder_rotation_changed";
IS99YYY.connect = new X3D.MFNode();

IS99ZZZ.connect[0] = connect100;

iS = IS99;

Group49ZZZ.children[14] = OrientationInterpolator98;

let OrientationInterpolator101 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator101.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator101.key = new X3D.MFFloat([0,1]);
OrientationInterpolator101.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS102 = browser.currentScene.createNode("IS");
let connect103 = browser.currentScene.createNode("connect");
connect103.nodeField = "value_changed";
connect103.protoField = "l_elbow_rotation_changed";
IS102YYY.connect = new X3D.MFNode();

IS102ZZZ.connect[0] = connect103;

iS = IS102;

Group49ZZZ.children[15] = OrientationInterpolator101;

let OrientationInterpolator104 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator104.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator104.key = new X3D.MFFloat([0,1]);
OrientationInterpolator104.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS105 = browser.currentScene.createNode("IS");
let connect106 = browser.currentScene.createNode("connect");
connect106.nodeField = "value_changed";
connect106.protoField = "l_wrist_rotation_changed";
IS105YYY.connect = new X3D.MFNode();

IS105ZZZ.connect[0] = connect106;

iS = IS105;

Group49ZZZ.children[16] = OrientationInterpolator104;

let OrientationInterpolator107 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator107.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator107.key = new X3D.MFFloat([0,1]);
OrientationInterpolator107.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS108 = browser.currentScene.createNode("IS");
let connect109 = browser.currentScene.createNode("connect");
connect109.nodeField = "value_changed";
connect109.protoField = "r_shoulder_rotation_changed";
IS108YYY.connect = new X3D.MFNode();

IS108ZZZ.connect[0] = connect109;

iS = IS108;

Group49ZZZ.children[17] = OrientationInterpolator107;

let OrientationInterpolator110 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator110.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator110.key = new X3D.MFFloat([0,1]);
OrientationInterpolator110.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS111 = browser.currentScene.createNode("IS");
let connect112 = browser.currentScene.createNode("connect");
connect112.nodeField = "value_changed";
connect112.protoField = "r_elbow_rotation_changed";
IS111YYY.connect = new X3D.MFNode();

IS111ZZZ.connect[0] = connect112;

iS = IS111;

Group49ZZZ.children[18] = OrientationInterpolator110;

let OrientationInterpolator113 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator113.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator113.key = new X3D.MFFloat([0,1]);
OrientationInterpolator113.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS114 = browser.currentScene.createNode("IS");
let connect115 = browser.currentScene.createNode("connect");
connect115.nodeField = "value_changed";
connect115.protoField = "r_wrist_rotation_changed";
IS114YYY.connect = new X3D.MFNode();

IS114ZZZ.connect[0] = connect115;

iS = IS114;

Group49ZZZ.children[19] = OrientationInterpolator113;

ProtoBody48YYY.children = new X3D.MFNode();

ProtoBody48ZZZ.children[0] = Group49;

let ROUTE116 = browser.currentScene.createNode("ROUTE");
ROUTE116.fromField = "fraction_changed";
ROUTE116.fromNode = "TIMER";
ROUTE116.toField = "set_fraction";
ROUTE116.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ProtoBody48ZZZ.children[1] = ROUTE116;

let ROUTE117 = browser.currentScene.createNode("ROUTE");
ROUTE117.fromField = "fraction_changed";
ROUTE117.fromNode = "TIMER";
ROUTE117.toField = "set_fraction";
ROUTE117.toNode = "HUMANOIDROOT_ANIMATOR";
ProtoBody48ZZZ.children[2] = ROUTE117;

let ROUTE118 = browser.currentScene.createNode("ROUTE");
ROUTE118.fromField = "fraction_changed";
ROUTE118.fromNode = "TIMER";
ROUTE118.toField = "set_fraction";
ROUTE118.toNode = "SACROILIAC_ANIMATOR";
ProtoBody48ZZZ.children[3] = ROUTE118;

let ROUTE119 = browser.currentScene.createNode("ROUTE");
ROUTE119.fromField = "fraction_changed";
ROUTE119.fromNode = "TIMER";
ROUTE119.toField = "set_fraction";
ROUTE119.toNode = "L_HIP_ANIMATOR";
ProtoBody48ZZZ.children[4] = ROUTE119;

let ROUTE120 = browser.currentScene.createNode("ROUTE");
ROUTE120.fromField = "fraction_changed";
ROUTE120.fromNode = "TIMER";
ROUTE120.toField = "set_fraction";
ROUTE120.toNode = "L_KNEE_ANIMATOR";
ProtoBody48ZZZ.children[5] = ROUTE120;

let ROUTE121 = browser.currentScene.createNode("ROUTE");
ROUTE121.fromField = "fraction_changed";
ROUTE121.fromNode = "TIMER";
ROUTE121.toField = "set_fraction";
ROUTE121.toNode = "L_ANKLE_ANIMATOR";
ProtoBody48ZZZ.children[6] = ROUTE121;

let ROUTE122 = browser.currentScene.createNode("ROUTE");
ROUTE122.fromField = "fraction_changed";
ROUTE122.fromNode = "TIMER";
ROUTE122.toField = "set_fraction";
ROUTE122.toNode = "L_MIDTARSAL_ANIMATOR";
ProtoBody48ZZZ.children[7] = ROUTE122;

let ROUTE123 = browser.currentScene.createNode("ROUTE");
ROUTE123.fromField = "fraction_changed";
ROUTE123.fromNode = "TIMER";
ROUTE123.toField = "set_fraction";
ROUTE123.toNode = "R_HIP_ANIMATOR";
ProtoBody48ZZZ.children[8] = ROUTE123;

let ROUTE124 = browser.currentScene.createNode("ROUTE");
ROUTE124.fromField = "fraction_changed";
ROUTE124.fromNode = "TIMER";
ROUTE124.toField = "set_fraction";
ROUTE124.toNode = "R_KNEE_ANIMATOR";
ProtoBody48ZZZ.children[9] = ROUTE124;

let ROUTE125 = browser.currentScene.createNode("ROUTE");
ROUTE125.fromField = "fraction_changed";
ROUTE125.fromNode = "TIMER";
ROUTE125.toField = "set_fraction";
ROUTE125.toNode = "R_ANKLE_ANIMATOR";
ProtoBody48ZZZ.children[10] = ROUTE125;

let ROUTE126 = browser.currentScene.createNode("ROUTE");
ROUTE126.fromField = "fraction_changed";
ROUTE126.fromNode = "TIMER";
ROUTE126.toField = "set_fraction";
ROUTE126.toNode = "R_MIDTARSAL_ANIMATOR";
ProtoBody48ZZZ.children[11] = ROUTE126;

let ROUTE127 = browser.currentScene.createNode("ROUTE");
ROUTE127.fromField = "fraction_changed";
ROUTE127.fromNode = "TIMER";
ROUTE127.toField = "set_fraction";
ROUTE127.toNode = "VL5_ANIMATOR";
ProtoBody48ZZZ.children[12] = ROUTE127;

let ROUTE128 = browser.currentScene.createNode("ROUTE");
ROUTE128.fromField = "fraction_changed";
ROUTE128.fromNode = "TIMER";
ROUTE128.toField = "set_fraction";
ROUTE128.toNode = "SKULLBASE_ANIMATOR";
ProtoBody48ZZZ.children[13] = ROUTE128;

let ROUTE129 = browser.currentScene.createNode("ROUTE");
ROUTE129.fromField = "fraction_changed";
ROUTE129.fromNode = "TIMER";
ROUTE129.toField = "set_fraction";
ROUTE129.toNode = "L_SHOULDER_ANIMATOR";
ProtoBody48ZZZ.children[14] = ROUTE129;

let ROUTE130 = browser.currentScene.createNode("ROUTE");
ROUTE130.fromField = "fraction_changed";
ROUTE130.fromNode = "TIMER";
ROUTE130.toField = "set_fraction";
ROUTE130.toNode = "L_ELBOW_ANIMATOR";
ProtoBody48ZZZ.children[15] = ROUTE130;

let ROUTE131 = browser.currentScene.createNode("ROUTE");
ROUTE131.fromField = "fraction_changed";
ROUTE131.fromNode = "TIMER";
ROUTE131.toField = "set_fraction";
ROUTE131.toNode = "L_WRIST_ANIMATOR";
ProtoBody48ZZZ.children[16] = ROUTE131;

let ROUTE132 = browser.currentScene.createNode("ROUTE");
ROUTE132.fromField = "fraction_changed";
ROUTE132.fromNode = "TIMER";
ROUTE132.toField = "set_fraction";
ROUTE132.toNode = "R_SHOULDER_ANIMATOR";
ProtoBody48ZZZ.children[17] = ROUTE132;

let ROUTE133 = browser.currentScene.createNode("ROUTE");
ROUTE133.fromField = "fraction_changed";
ROUTE133.fromNode = "TIMER";
ROUTE133.toField = "set_fraction";
ROUTE133.toNode = "R_ELBOW_ANIMATOR";
ProtoBody48ZZZ.children[18] = ROUTE133;

let ROUTE134 = browser.currentScene.createNode("ROUTE");
ROUTE134.fromField = "fraction_changed";
ROUTE134.fromNode = "TIMER";
ROUTE134.toField = "set_fraction";
ROUTE134.toNode = "R_WRIST_ANIMATOR";
ProtoBody48ZZZ.children[19] = ROUTE134;

protoBody = ProtoBody48;

browser.currentScene.children[1] = ProtoDeclare20;

//======================================
//Point to example use in case someone inspects this file
let Anchor135 = browser.currentScene.createNode("Anchor");
Anchor135.description = "InterchangableActorsViaDynamicRouting";
Anchor135.parameter = new X3D.MFString([new X3D.SFString("target=_blank")]);
Anchor135.url = new X3D.MFString([new X3D.SFString("InterchangableActorsViaDynamicRouting.x3d"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d"), new X3D.SFString("InterchangableActorsViaDynamicRouting.wrl"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl")]);
let Shape136 = browser.currentScene.createNode("Shape");
let Text137 = browser.currentScene.createNode("Text");
Text137.string = new X3D.MFString([new X3D.SFString("LOA1_StandAnimation.x3d"), new X3D.SFString("defines a prototype"), new X3D.SFString("for animating a humanoid."), new X3D.SFString(""), new X3D.SFString("Click this text to see"), new X3D.SFString("InterchangableActorsViaDynamicRouting example.")]);
let FontStyle138 = browser.currentScene.createNode("FontStyle");
FontStyle138.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle138.size = 0.8;
fontStyle = FontStyle138;

geometry = Text137;

let Appearance139 = browser.currentScene.createNode("Appearance");
let Material140 = browser.currentScene.createNode("Material");
Material140.diffuseColor = new X3D.SFColor([1,1,0.2]);
material = Material140;

appearance = Appearance139;

Anchor135YYY.children = new X3D.MFNode();

Anchor135ZZZ.children[0] = Shape136;

browser.currentScene.children[2] = Anchor135;

}
main ();
