const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "LOA1_SwimmingFlutterKickAnimation.x3d");
scene.addMetaData("description", "Humanoid animation prototype reusable by any Humanoid.");
scene.addMetaData("creator", "Etsuko Lippi");
scene.addMetaData("created", "13 December 2001");
scene.addMetaData("modified", "23 May 2020");
scene.addMetaData("warning", "not yet tested, need to compare with NancyDivingExample interpolators");
scene.addMetaData("reference", "http://www.HAnim.org");
scene.addMetaData("reference", "http://HAnim.org/Models");
scene.addMetaData("reference", "http://HAnim.org/Nodes");
scene.addMetaData("subject", "Swimming flutter kick Animation HAnim 2001");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_SwimmingFlutterKickAnimation.x3d");
scene.addMetaData("generator", "X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo16 = browser.currentScene.createNode("WorldInfo");
WorldInfo16.title = "LOA1_SwimmingFlutterKickAnimation.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo16;

let ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="LOA1_DivingAnimation" ><ProtoInterface><field name="cycleInterval" accessType="inputOutput" type="SFTime" value="7"></field>
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
<ProtoBody><Group><TimeSensor DEF="TIMER" loop="true"><IS><connect nodeField="cycleInterval" protoField="cycleInterval"></connect>
<connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="loop" protoField="loop"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
<connect nodeField="fraction_changed" protoField="fraction_changed"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
</IS>
</TimeSensor>
<PositionInterpolator DEF="HUMANOIDROOT_POSITION_ANIMATOR" key="0 0.04167 0.125 0.1667 0.2083 0.25 0.2917 0.375 0.4583 0.5 0.5417 0.5833 0.625 0.7083 0.75 0.7917 0.875 0.9167 1" keyValue="0 -0.00928 0 0 -0.003858 0 0 -0.008847 0 0 -0.01486 0 0 -0.02641 0 0 -0.03934 0 0 -0.0502 0 0 -0.07469 0 0 -0.02732 0 0 -0.01608 0 0 -0.01129 0 0 -0.005819 0 0 -0.002004 0 0 -0.002579 0 0 -0.0143 0 0 -0.03799 0 0 -0.05648 0 0 -0.045 0 0 -0.00928 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_translation_changed"></connect>
</IS>
</PositionInterpolator>
<OrientationInterpolator DEF="HUMANOIDROOT_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<!--no SACROILIAC_ANIMATOR--><OrientationInterpolator DEF="L_HIP_ANIMATOR" key="0 0.25 0.375 0.6667 0.7917 0.9167 1" keyValue="-0.873 0.06094 0.484 0.2865 0.9963 -0.01057 0.08481 0.2488 0.9965 0.01591 -0.08222 0.3836 -1 0 0 0.5518 -0.9964 0.02231 0.0817 0.5351 -0.9809 0.04912 0.1881 0.5204 -0.873 0.06094 0.484 0.2865"><IS><connect nodeField="value_changed" protoField="l_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_KNEE_ANIMATOR" key="0 0.2083 0.375 0.5 0.6667 0.7917 0.9167 1" keyValue="1 0 0 0.3226 1 0 0 0.1556 1 0 0 0.08678 1 0 0 0.8751 1 0 0 1.131 1 0 0 0.09961 1 0 0 0.3942 1 0 0 0.3226"><IS><connect nodeField="value_changed" protoField="l_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ANKLE_ANIMATOR" key="0 0.125 0.2083 0.375 0.4583 0.5 0.6667 0.75 0.7917 0.9167 1" keyValue="1 0 0 0.6001 1 0 0 0.6509 1 0 0 0.6001 1 0 0 0.6001 1 0 0 0.6509 1 0 0 0.6001 1 0 0 0.6001 1 0 0 0.6509 1 0 0 0.6001 1 0 0 0.6509 1 0 0 0.6001"><IS><connect nodeField="value_changed" protoField="l_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<!--no L_MIDTARSAL_ANIMATOR--><OrientationInterpolator DEF="R_HIP_ANIMATOR" key="0 0.125 0.2083 0.2917 0.5 0.7917 0.9167 1" keyValue="-0.5831 0.03511 0.8116 0.1481 -0.995 0.02296 0.09674 0.4683 -1 0.00192 0.007964 0.4732 -0.998 -0.0158 -0.06102 0.5079 -0.9131 -0.06243 -0.403 0.3361 1 0 0 0.2571 0.9891 -0.02805 0.1444 0.3879 -0.5831 0.03511 0.8116 0.1481"><IS><connect nodeField="value_changed" protoField="r_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_KNEE_ANIMATOR" key="0 0.125 0.2083 0.375 0.5 0.6667 0.9167 1" keyValue="1 0 0 0.8573 1 0 0 0.5351 1 0 0 0.1756 1 0 0 0.1194 1 0 0 0.3153 1 0 0 0.09354 1 0 0 0.08558 1 0 0 0.8573"><IS><connect nodeField="value_changed" protoField="r_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ANKLE_ANIMATOR" key="0 0.125 0.2083 0.375 0.4583 0.5 0.6667 0.75 0.7917 0.9167 1" keyValue="1 0 0 0.8001 1 0 0 0.8509 1 0 0 0.8001 1 0 0 0.8001 1 0 0 0.8509 1 0 0 0.8001 1 0 0 0.8001 1 0 0 0.8001 1 0 0 0.8001 1 0 0 0.8509 1 0 0 0.86001"><IS><connect nodeField="value_changed" protoField="r_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<!--no L_MIDTARSAL_ANIMATOR--><OrientationInterpolator DEF="VL5_ANIMATOR" key="0 0.2083 0.375 0.75 0.8333 1" keyValue="0 1 0 0.0826 -0.01972 -0.5974 0.8017 0.08231 0.009296 -0.9648 0.2627 0.1734 -0.01238 0.9549 -0.2968 0.08732 -0.008125 0.9691 -0.2463 0.158 0 1 0 0.0826"><IS><connect nodeField="value_changed" protoField="vl5_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="SKULLBASE_ANIMATOR" key="0 0.28 0.3 0.32 0.4 0.45 0.6 0.65 0.7 0.75 0.85 0.9 0.95 1" keyValue="-1 0 0 1 -1 0 0 1 -1 0 0 0.999 -1 0 0 0.99 -1 0 0 0.99 -1 0 0 0.9 -1 0 0 0.9 -1 0 0 0.9 -1 0 0 0.9 -1 0 0 0.9 -1 0 0 0.9 -1 0 0 0.9 -1 0 0 0.9 -1 0 0 1"><IS><connect nodeField="value_changed" protoField="skullbase_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_SHOULDER_ANIMATOR" key="0 0.25 0.375 0.6667 0.7917 0.9167 1" keyValue="0 0 1 0.1 0 0 1 0.2 0 0 1 0.2 0.86 0.25 0.42 0.5 0.86 0.25 0.42 0.8 0.86 0.25 0.42 0.4 0.86 0.25 0.42 0.2"><IS><connect nodeField="value_changed" protoField="l_shoulder_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ELBOW_ANIMATOR" key="0 0.28 0.32 0.64 0.76 1" keyValue="0 0 1 0 -1 0 0 0.1229 -1 0 0 0.1229 -1 0 0 0.5976 -1 0 0 0.3917 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_elbow_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_WRIST_ANIMATOR" key="0 0.32 0.64 0.88 1" keyValue="0 0 1 0 0.067 0.98 -0.128 4.15 0.067 0.98 -0.128 4.15 0.067 0.98 -0.128 4.15 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_wrist_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_SHOULDER_ANIMATOR" key="0 0.45 0.64 0.76 0.88 1" keyValue="0 0 1 0 0.9992 0.02042 0.03558 7.2 0.9989 -0.04623 0.005159 4.079 -0.8687 -0.2525 -0.4261 1.501 -0.941 -0.2893 -0.1754 0.4788 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_shoulder_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ELBOW_ANIMATOR" key="0 0.28 0.32 0.64 0.76 1" keyValue="0 0 1 0 -1 0 0 0.04151 -1 0 0 0.04151 -1 0 0 0.5855 -1 0 0 0.5852 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_elbow_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_WRIST_ANIMATOR" key="0 0.28 0.32 0.64 0.76 1" keyValue="0 0 1 0 -0.0585279 0.983903 -0.168849 1.85956 -0.0585279 0.983903 -0.168849 1.85956 -0.00222418 0.99801 -0.0630095 1.46072 0 1 0 0.497349 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_wrist_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
</Group>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="HUMANOIDROOT_POSITION_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="HUMANOIDROOT_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="SKULLBASE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="VL5_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_HIP_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_KNEE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_ANKLE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_HIP_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_KNEE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_ANKLE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_SHOULDER_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_ELBOW_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_WRIST_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_SHOULDER_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_ELBOW_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_WRIST_ANIMATOR"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "LOA1_DivingAnimation";
ProtoInterface19.getField("cycleInterval").setValue("7");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface20.getField("enabled").setValue("true");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface21.getField("loop").setValue("true");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface22.getField("startTime").setValue("0");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface23.getField("stopTime").setValue("-1");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface24.getField("fraction_changed")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface25.getField("isActive")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface26.getField("HumanoidRoot_translation_changed")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface27.getField("HumanoidRoot_rotation_changed")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface28.getField("lower_body_rotation_changed")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface29.getField("l_hip_rotation_changed")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface30.getField("l_knee_rotation_changed")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface31.getField("l_ankle_rotation_changed")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface32.getField("l_midtarsal_rotation_changed")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface33.getField("r_hip_rotation_changed")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface34.getField("r_knee_rotation_changed")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface35.getField("r_ankle_rotation_changed")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface36.getField("r_midtarsal_rotation_changed")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface37.getField("vl5_rotation_changed")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface38.getField("skullbase_rotation_changed")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface39.getField("l_shoulder_rotation_changed")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface40.getField("l_elbow_rotation_changed")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface41.getField("l_wrist_rotation_changed")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface42.getField("r_shoulder_rotation_changed")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface43.getField("r_elbow_rotation_changed")ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface44.getField("r_wrist_rotation_changed")ProtoInterface18YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface18;

let ProtoBody45 = browser.currentScene.createNode("ProtoBody");
let Group46 = browser.currentScene.createNode("Group");
let TimeSensor47 = browser.currentScene.createNode("TimeSensor");
TimeSensor47.DEF = "TIMER";
TimeSensor47.loop = True;
let IS48 = browser.currentScene.createNode("IS");
let connect49 = browser.currentScene.createNode("connect");
connect49.nodeField = "cycleInterval";
connect49.protoField = "cycleInterval";
IS48YYY.connect = new X3D.MFNode();

IS48ZZZ.connect[0] = connect49;

let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "enabled";
connect50.protoField = "enabled";
IS48ZZZ.connect[1] = connect50;

let connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "loop";
connect51.protoField = "loop";
IS48ZZZ.connect[2] = connect51;

let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "startTime";
connect52.protoField = "startTime";
IS48ZZZ.connect[3] = connect52;

let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "stopTime";
connect53.protoField = "stopTime";
IS48ZZZ.connect[4] = connect53;

let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "fraction_changed";
connect54.protoField = "fraction_changed";
IS48ZZZ.connect[5] = connect54;

let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "isActive";
connect55.protoField = "isActive";
IS48ZZZ.connect[6] = connect55;

iS = IS48;

Group46YYY.children = new X3D.MFNode();

Group46ZZZ.children[0] = TimeSensor47;

let PositionInterpolator56 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator56.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator56.key = new X3D.MFFloat([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator56.keyValue = new X3D.MFVec3f([0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
let IS57 = browser.currentScene.createNode("IS");
let connect58 = browser.currentScene.createNode("connect");
connect58.nodeField = "value_changed";
connect58.protoField = "HumanoidRoot_translation_changed";
IS57YYY.connect = new X3D.MFNode();

IS57ZZZ.connect[0] = connect58;

iS = IS57;

Group46ZZZ.children[1] = PositionInterpolator56;

let OrientationInterpolator59 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator59.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator59.key = new X3D.MFFloat([0,1]);
OrientationInterpolator59.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,0]);
let IS60 = browser.currentScene.createNode("IS");
let connect61 = browser.currentScene.createNode("connect");
connect61.nodeField = "value_changed";
connect61.protoField = "HumanoidRoot_rotation_changed";
IS60YYY.connect = new X3D.MFNode();

IS60ZZZ.connect[0] = connect61;

iS = IS60;

Group46ZZZ.children[2] = OrientationInterpolator59;

//no SACROILIAC_ANIMATOR
let OrientationInterpolator62 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator62.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator62.key = new X3D.MFFloat([0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator62.keyValue = new X3D.MFRotation([-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
let IS63 = browser.currentScene.createNode("IS");
let connect64 = browser.currentScene.createNode("connect");
connect64.nodeField = "value_changed";
connect64.protoField = "l_hip_rotation_changed";
IS63YYY.connect = new X3D.MFNode();

IS63ZZZ.connect[0] = connect64;

iS = IS63;

Group46ZZZ.children[3] = OrientationInterpolator62;

let OrientationInterpolator65 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator65.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator65.key = new X3D.MFFloat([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator65.keyValue = new X3D.MFRotation([1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
let IS66 = browser.currentScene.createNode("IS");
let connect67 = browser.currentScene.createNode("connect");
connect67.nodeField = "value_changed";
connect67.protoField = "l_knee_rotation_changed";
IS66YYY.connect = new X3D.MFNode();

IS66ZZZ.connect[0] = connect67;

iS = IS66;

Group46ZZZ.children[4] = OrientationInterpolator65;

let OrientationInterpolator68 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator68.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator68.key = new X3D.MFFloat([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator68.keyValue = new X3D.MFRotation([1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001]);
let IS69 = browser.currentScene.createNode("IS");
let connect70 = browser.currentScene.createNode("connect");
connect70.nodeField = "value_changed";
connect70.protoField = "l_ankle_rotation_changed";
IS69YYY.connect = new X3D.MFNode();

IS69ZZZ.connect[0] = connect70;

iS = IS69;

Group46ZZZ.children[5] = OrientationInterpolator68;

//no L_MIDTARSAL_ANIMATOR
let OrientationInterpolator71 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator71.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator71.key = new X3D.MFFloat([0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1]);
OrientationInterpolator71.keyValue = new X3D.MFRotation([-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9131,-0.06243,-0.403,0.3361,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
let IS72 = browser.currentScene.createNode("IS");
let connect73 = browser.currentScene.createNode("connect");
connect73.nodeField = "value_changed";
connect73.protoField = "r_hip_rotation_changed";
IS72YYY.connect = new X3D.MFNode();

IS72ZZZ.connect[0] = connect73;

iS = IS72;

Group46ZZZ.children[6] = OrientationInterpolator71;

let OrientationInterpolator74 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator74.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator74.key = new X3D.MFFloat([0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1]);
OrientationInterpolator74.keyValue = new X3D.MFRotation([1,0,0,0.8573,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.8573]);
let IS75 = browser.currentScene.createNode("IS");
let connect76 = browser.currentScene.createNode("connect");
connect76.nodeField = "value_changed";
connect76.protoField = "r_knee_rotation_changed";
IS75YYY.connect = new X3D.MFNode();

IS75ZZZ.connect[0] = connect76;

iS = IS75;

Group46ZZZ.children[7] = OrientationInterpolator74;

let OrientationInterpolator77 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator77.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator77.key = new X3D.MFFloat([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator77.keyValue = new X3D.MFRotation([1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.86001]);
let IS78 = browser.currentScene.createNode("IS");
let connect79 = browser.currentScene.createNode("connect");
connect79.nodeField = "value_changed";
connect79.protoField = "r_ankle_rotation_changed";
IS78YYY.connect = new X3D.MFNode();

IS78ZZZ.connect[0] = connect79;

iS = IS78;

Group46ZZZ.children[8] = OrientationInterpolator77;

//no L_MIDTARSAL_ANIMATOR
let OrientationInterpolator80 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator80.DEF = "VL5_ANIMATOR";
OrientationInterpolator80.key = new X3D.MFFloat([0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator80.keyValue = new X3D.MFRotation([0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
let IS81 = browser.currentScene.createNode("IS");
let connect82 = browser.currentScene.createNode("connect");
connect82.nodeField = "value_changed";
connect82.protoField = "vl5_rotation_changed";
IS81YYY.connect = new X3D.MFNode();

IS81ZZZ.connect[0] = connect82;

iS = IS81;

Group46ZZZ.children[9] = OrientationInterpolator80;

let OrientationInterpolator83 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator83.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator83.key = new X3D.MFFloat([0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1]);
OrientationInterpolator83.keyValue = new X3D.MFRotation([-1,0,0,1,-1,0,0,1,-1,0,0,0.999,-1,0,0,0.99,-1,0,0,0.99,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,1]);
let IS84 = browser.currentScene.createNode("IS");
let connect85 = browser.currentScene.createNode("connect");
connect85.nodeField = "value_changed";
connect85.protoField = "skullbase_rotation_changed";
IS84YYY.connect = new X3D.MFNode();

IS84ZZZ.connect[0] = connect85;

iS = IS84;

Group46ZZZ.children[10] = OrientationInterpolator83;

let OrientationInterpolator86 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator86.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator86.key = new X3D.MFFloat([0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator86.keyValue = new X3D.MFRotation([0,0,1,0.1,0,0,1,0.2,0,0,1,0.2,0.86,0.25,0.42,0.5,0.86,0.25,0.42,0.8,0.86,0.25,0.42,0.4,0.86,0.25,0.42,0.2]);
let IS87 = browser.currentScene.createNode("IS");
let connect88 = browser.currentScene.createNode("connect");
connect88.nodeField = "value_changed";
connect88.protoField = "l_shoulder_rotation_changed";
IS87YYY.connect = new X3D.MFNode();

IS87ZZZ.connect[0] = connect88;

iS = IS87;

Group46ZZZ.children[11] = OrientationInterpolator86;

let OrientationInterpolator89 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator89.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator89.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator89.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0]);
let IS90 = browser.currentScene.createNode("IS");
let connect91 = browser.currentScene.createNode("connect");
connect91.nodeField = "value_changed";
connect91.protoField = "l_elbow_rotation_changed";
IS90YYY.connect = new X3D.MFNode();

IS90ZZZ.connect[0] = connect91;

iS = IS90;

Group46ZZZ.children[12] = OrientationInterpolator89;

let OrientationInterpolator92 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator92.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator92.key = new X3D.MFFloat([0,0.32,0.64,0.88,1]);
OrientationInterpolator92.keyValue = new X3D.MFRotation([0,0,1,0,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0,0,1,0]);
let IS93 = browser.currentScene.createNode("IS");
let connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "value_changed";
connect94.protoField = "l_wrist_rotation_changed";
IS93YYY.connect = new X3D.MFNode();

IS93ZZZ.connect[0] = connect94;

iS = IS93;

Group46ZZZ.children[13] = OrientationInterpolator92;

let OrientationInterpolator95 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator95.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator95.key = new X3D.MFFloat([0,0.45,0.64,0.76,0.88,1]);
OrientationInterpolator95.keyValue = new X3D.MFRotation([0,0,1,0,0.9992,0.02042,0.03558,7.2,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
let IS96 = browser.currentScene.createNode("IS");
let connect97 = browser.currentScene.createNode("connect");
connect97.nodeField = "value_changed";
connect97.protoField = "r_shoulder_rotation_changed";
IS96YYY.connect = new X3D.MFNode();

IS96ZZZ.connect[0] = connect97;

iS = IS96;

Group46ZZZ.children[14] = OrientationInterpolator95;

let OrientationInterpolator98 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator98.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator98.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator98.keyValue = new X3D.MFRotation([0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
let IS99 = browser.currentScene.createNode("IS");
let connect100 = browser.currentScene.createNode("connect");
connect100.nodeField = "value_changed";
connect100.protoField = "r_elbow_rotation_changed";
IS99YYY.connect = new X3D.MFNode();

IS99ZZZ.connect[0] = connect100;

iS = IS99;

Group46ZZZ.children[15] = OrientationInterpolator98;

let OrientationInterpolator101 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator101.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator101.key = new X3D.MFFloat([0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator101.keyValue = new X3D.MFRotation([0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
let IS102 = browser.currentScene.createNode("IS");
let connect103 = browser.currentScene.createNode("connect");
connect103.nodeField = "value_changed";
connect103.protoField = "r_wrist_rotation_changed";
IS102YYY.connect = new X3D.MFNode();

IS102ZZZ.connect[0] = connect103;

iS = IS102;

Group46ZZZ.children[16] = OrientationInterpolator101;

ProtoBody45YYY.children = new X3D.MFNode();

ProtoBody45ZZZ.children[0] = Group46;

let ROUTE104 = browser.currentScene.createNode("ROUTE");
ROUTE104.fromField = "fraction_changed";
ROUTE104.fromNode = "TIMER";
ROUTE104.toField = "set_fraction";
ROUTE104.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ProtoBody45ZZZ.children[1] = ROUTE104;

let ROUTE105 = browser.currentScene.createNode("ROUTE");
ROUTE105.fromField = "fraction_changed";
ROUTE105.fromNode = "TIMER";
ROUTE105.toField = "set_fraction";
ROUTE105.toNode = "HUMANOIDROOT_ANIMATOR";
ProtoBody45ZZZ.children[2] = ROUTE105;

let ROUTE106 = browser.currentScene.createNode("ROUTE");
ROUTE106.fromField = "fraction_changed";
ROUTE106.fromNode = "TIMER";
ROUTE106.toField = "set_fraction";
ROUTE106.toNode = "SKULLBASE_ANIMATOR";
ProtoBody45ZZZ.children[3] = ROUTE106;

let ROUTE107 = browser.currentScene.createNode("ROUTE");
ROUTE107.fromField = "fraction_changed";
ROUTE107.fromNode = "TIMER";
ROUTE107.toField = "set_fraction";
ROUTE107.toNode = "VL5_ANIMATOR";
ProtoBody45ZZZ.children[4] = ROUTE107;

let ROUTE108 = browser.currentScene.createNode("ROUTE");
ROUTE108.fromField = "fraction_changed";
ROUTE108.fromNode = "TIMER";
ROUTE108.toField = "set_fraction";
ROUTE108.toNode = "L_HIP_ANIMATOR";
ProtoBody45ZZZ.children[5] = ROUTE108;

let ROUTE109 = browser.currentScene.createNode("ROUTE");
ROUTE109.fromField = "fraction_changed";
ROUTE109.fromNode = "TIMER";
ROUTE109.toField = "set_fraction";
ROUTE109.toNode = "L_KNEE_ANIMATOR";
ProtoBody45ZZZ.children[6] = ROUTE109;

let ROUTE110 = browser.currentScene.createNode("ROUTE");
ROUTE110.fromField = "fraction_changed";
ROUTE110.fromNode = "TIMER";
ROUTE110.toField = "set_fraction";
ROUTE110.toNode = "L_ANKLE_ANIMATOR";
ProtoBody45ZZZ.children[7] = ROUTE110;

let ROUTE111 = browser.currentScene.createNode("ROUTE");
ROUTE111.fromField = "fraction_changed";
ROUTE111.fromNode = "TIMER";
ROUTE111.toField = "set_fraction";
ROUTE111.toNode = "R_HIP_ANIMATOR";
ProtoBody45ZZZ.children[8] = ROUTE111;

let ROUTE112 = browser.currentScene.createNode("ROUTE");
ROUTE112.fromField = "fraction_changed";
ROUTE112.fromNode = "TIMER";
ROUTE112.toField = "set_fraction";
ROUTE112.toNode = "R_KNEE_ANIMATOR";
ProtoBody45ZZZ.children[9] = ROUTE112;

let ROUTE113 = browser.currentScene.createNode("ROUTE");
ROUTE113.fromField = "fraction_changed";
ROUTE113.fromNode = "TIMER";
ROUTE113.toField = "set_fraction";
ROUTE113.toNode = "R_ANKLE_ANIMATOR";
ProtoBody45ZZZ.children[10] = ROUTE113;

let ROUTE114 = browser.currentScene.createNode("ROUTE");
ROUTE114.fromField = "fraction_changed";
ROUTE114.fromNode = "TIMER";
ROUTE114.toField = "set_fraction";
ROUTE114.toNode = "L_SHOULDER_ANIMATOR";
ProtoBody45ZZZ.children[11] = ROUTE114;

let ROUTE115 = browser.currentScene.createNode("ROUTE");
ROUTE115.fromField = "fraction_changed";
ROUTE115.fromNode = "TIMER";
ROUTE115.toField = "set_fraction";
ROUTE115.toNode = "L_ELBOW_ANIMATOR";
ProtoBody45ZZZ.children[12] = ROUTE115;

let ROUTE116 = browser.currentScene.createNode("ROUTE");
ROUTE116.fromField = "fraction_changed";
ROUTE116.fromNode = "TIMER";
ROUTE116.toField = "set_fraction";
ROUTE116.toNode = "L_WRIST_ANIMATOR";
ProtoBody45ZZZ.children[13] = ROUTE116;

let ROUTE117 = browser.currentScene.createNode("ROUTE");
ROUTE117.fromField = "fraction_changed";
ROUTE117.fromNode = "TIMER";
ROUTE117.toField = "set_fraction";
ROUTE117.toNode = "R_SHOULDER_ANIMATOR";
ProtoBody45ZZZ.children[14] = ROUTE117;

let ROUTE118 = browser.currentScene.createNode("ROUTE");
ROUTE118.fromField = "fraction_changed";
ROUTE118.fromNode = "TIMER";
ROUTE118.toField = "set_fraction";
ROUTE118.toNode = "R_ELBOW_ANIMATOR";
ProtoBody45ZZZ.children[15] = ROUTE118;

let ROUTE119 = browser.currentScene.createNode("ROUTE");
ROUTE119.fromField = "fraction_changed";
ROUTE119.fromNode = "TIMER";
ROUTE119.toField = "set_fraction";
ROUTE119.toNode = "R_WRIST_ANIMATOR";
ProtoBody45ZZZ.children[16] = ROUTE119;

protoBody = ProtoBody45;

browser.currentScene.children[1] = ProtoDeclare17;

let Viewpoint120 = browser.currentScene.createNode("Viewpoint");
Viewpoint120.description = "LOA1_SwimmingFlutterKickAnimation scene";
Viewpoint120.position = new X3D.SFVec3f([0,0,12]);
browser.currentScene.children[2] = Viewpoint120;

let Anchor121 = browser.currentScene.createNode("Anchor");
Anchor121.description = "Nancy Diving";
Anchor121.parameter = new X3D.MFString([new X3D.SFString("target=_blank")]);
Anchor121.url = new X3D.MFString([new X3D.SFString("NancyDiving.x3d"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.x3d"), new X3D.SFString("NancyDiving.wrl"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.wrl")]);
let Shape122 = browser.currentScene.createNode("Shape");
let Text123 = browser.currentScene.createNode("Text");
Text123.string = new X3D.MFString([new X3D.SFString("LOA1_SwimmingFlutterKickAnimation.x3d"), new X3D.SFString("defines a prototype"), new X3D.SFString("for animating a humanoid."), new X3D.SFString(""), new X3D.SFString("Click text to see example.")]);
let FontStyle124 = browser.currentScene.createNode("FontStyle");
FontStyle124.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle124.size = 0.8;
fontStyle = FontStyle124;

geometry = Text123;

let Appearance125 = browser.currentScene.createNode("Appearance");
let Material126 = browser.currentScene.createNode("Material");
Material126.diffuseColor = new X3D.SFColor([1,1,0.2]);
material = Material126;

appearance = Appearance125;

Anchor121YYY.children = new X3D.MFNode();

Anchor121ZZZ.children[0] = Shape122;

browser.currentScene.children[3] = Anchor121;

}
main ();
