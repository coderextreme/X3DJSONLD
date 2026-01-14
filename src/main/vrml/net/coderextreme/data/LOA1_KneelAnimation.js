const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "LOA1_KneelAnimation.x3d");
scene.addMetaData("description", "Humanoid animation prototype reusable by any Humanoid.");
scene.addMetaData("creator", "Tom Miller");
scene.addMetaData("translator", "Curt Blais");
scene.addMetaData("translated", "1 December 2001");
scene.addMetaData("modified", "23 May 2020");
scene.addMetaData("reference", "http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl");
scene.addMetaData("reference", "http://www.HAnim.org/Models/HAnim2001/boxman/protos/LOA1_WalkAnimation.wrl");
scene.addMetaData("reference", "http://www.HAnim.org");
scene.addMetaData("reference", "http://HAnim.org/Models");
scene.addMetaData("reference", "http://HAnim.org/Nodes");
scene.addMetaData("subject", "Nancy kneel Animation HAnim 2001");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo18 = browser.currentScene.createNode("WorldInfo");
WorldInfo18.title = "LOA1_KneelAnimation.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo18;

let ProtoDeclare19 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="LOA1_KneelAnimation" ><ProtoInterface><field name="cycleInterval" accessType="inputOutput" type="SFTime" value="2"></field>
<field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="loop" accessType="inputOutput" type="SFBool" value="false"></field>
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
<PositionInterpolator DEF="HUMANOIDROOT_POSITION_ANIMATOR" key="0 0.3125 0.625 1" keyValue="0 0 0 0 -0.049999 0 0 -0.195 0 0 -0.439997 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_translation_changed"></connect>
</IS>
</PositionInterpolator>
<OrientationInterpolator DEF="HUMANOIDROOT_ANIMATOR" key="0 1" keyValue="0 1 0 0 0 1 0 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<!--no SACROILIAC_ANIMATOR--><OrientationInterpolator DEF="L_HIP_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.619393 -1 0 0 1.069302 -1 0 0 1.937315"><IS><connect nodeField="value_changed" protoField="l_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_KNEE_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 1 0 0 0.615228 1 0 0 0.984524 1 0 0 2.076941"><IS><connect nodeField="value_changed" protoField="l_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ANKLE_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.017453 -1 0 0 0.069812 1 0 0 0.261799"><IS><connect nodeField="value_changed" protoField="l_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<!--no L_MIDTARSAL_ANIMATOR--><OrientationInterpolator DEF="R_HIP_ANIMATOR" key="0 0.3125 1" keyValue="1 0 0 0 1 0 0 0.523598 -1 0 0 0.157079"><IS><connect nodeField="value_changed" protoField="r_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_KNEE_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 1 0 0 0.349065 1 0 0 1.023397 0.999934 0.008043 0.008185 1.727938"><IS><connect nodeField="value_changed" protoField="r_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ANKLE_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -0.991692 -0.072372 0.106338 0.205053 -0.981083 -0.103267 0.163741 0.272231 -1 0 0 0.349065"><IS><connect nodeField="value_changed" protoField="r_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<!--no R_MIDTARSAL_ANIMATOR--><OrientationInterpolator DEF="VL5_ANIMATOR" key="0 1" keyValue="1 0 0 0 1 0 0 0.174533"><IS><connect nodeField="value_changed" protoField="vl5_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<!--no SKULLBASE_ANIMATOR--><OrientationInterpolator DEF="L_SHOULDER_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.279252 -1 0 0 0.506145 -1 0 0 0.191986"><IS><connect nodeField="value_changed" protoField="l_shoulder_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ELBOW_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.052359 -1 0 0 0.296706 -1 0 0 1.431169"><IS><connect nodeField="value_changed" protoField="l_elbow_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<!--no L_WRIST_ANIMATOR--><OrientationInterpolator DEF="R_SHOULDER_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.104719 -1 0 0 0.157079 1 0 0 0.314159"><IS><connect nodeField="value_changed" protoField="r_shoulder_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ELBOW_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.837757 -1 0 0 1.239183 -1 0 0 1.500983"><IS><connect nodeField="value_changed" protoField="r_elbow_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<!--no R_WRIST_ANIMATOR--></Group>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="HUMANOIDROOT_POSITION_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="HUMANOIDROOT_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_HIP_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_KNEE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_ANKLE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_HIP_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_KNEE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_ANKLE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="VL5_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_SHOULDER_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_ELBOW_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_SHOULDER_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_ELBOW_ANIMATOR"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare19.name = "LOA1_KneelAnimation";
ProtoInterface21.getField("cycleInterval").setValue("2");
ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface22.getField("enabled").setValue("true");
ProtoInterface20YYY.field = new X3D.MFNode();

ProtoInterface23.getField("loop").setValue("false");
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
PositionInterpolator58.key = new X3D.MFFloat([0,0.3125,0.625,1]);
PositionInterpolator58.keyValue = new X3D.MFVec3f([0,0,0,0,-0.049999,0,0,-0.195,0,0,-0.439997,0]);
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
OrientationInterpolator61.keyValue = new X3D.MFRotation([0,1,0,0,0,1,0,0]);
let IS62 = browser.currentScene.createNode("IS");
let connect63 = browser.currentScene.createNode("connect");
connect63.nodeField = "value_changed";
connect63.protoField = "HumanoidRoot_rotation_changed";
IS62YYY.connect = new X3D.MFNode();

IS62ZZZ.connect[0] = connect63;

iS = IS62;

Group48ZZZ.children[2] = OrientationInterpolator61;

//no SACROILIAC_ANIMATOR
let OrientationInterpolator64 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator64.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator64.key = new X3D.MFFloat([0,0.3125,0.625,1]);
OrientationInterpolator64.keyValue = new X3D.MFRotation([1,0,0,0,-1,0,0,0.619393,-1,0,0,1.069302,-1,0,0,1.937315]);
let IS65 = browser.currentScene.createNode("IS");
let connect66 = browser.currentScene.createNode("connect");
connect66.nodeField = "value_changed";
connect66.protoField = "l_hip_rotation_changed";
IS65YYY.connect = new X3D.MFNode();

IS65ZZZ.connect[0] = connect66;

iS = IS65;

Group48ZZZ.children[3] = OrientationInterpolator64;

let OrientationInterpolator67 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator67.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator67.key = new X3D.MFFloat([0,0.3125,0.625,1]);
OrientationInterpolator67.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.615228,1,0,0,0.984524,1,0,0,2.076941]);
let IS68 = browser.currentScene.createNode("IS");
let connect69 = browser.currentScene.createNode("connect");
connect69.nodeField = "value_changed";
connect69.protoField = "l_knee_rotation_changed";
IS68YYY.connect = new X3D.MFNode();

IS68ZZZ.connect[0] = connect69;

iS = IS68;

Group48ZZZ.children[4] = OrientationInterpolator67;

let OrientationInterpolator70 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator70.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator70.key = new X3D.MFFloat([0,0.3125,0.625,1]);
OrientationInterpolator70.keyValue = new X3D.MFRotation([1,0,0,0,-1,0,0,0.017453,-1,0,0,0.069812,1,0,0,0.261799]);
let IS71 = browser.currentScene.createNode("IS");
let connect72 = browser.currentScene.createNode("connect");
connect72.nodeField = "value_changed";
connect72.protoField = "l_ankle_rotation_changed";
IS71YYY.connect = new X3D.MFNode();

IS71ZZZ.connect[0] = connect72;

iS = IS71;

Group48ZZZ.children[5] = OrientationInterpolator70;

//no L_MIDTARSAL_ANIMATOR
let OrientationInterpolator73 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator73.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator73.key = new X3D.MFFloat([0,0.3125,1]);
OrientationInterpolator73.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.523598,-1,0,0,0.157079]);
let IS74 = browser.currentScene.createNode("IS");
let connect75 = browser.currentScene.createNode("connect");
connect75.nodeField = "value_changed";
connect75.protoField = "r_hip_rotation_changed";
IS74YYY.connect = new X3D.MFNode();

IS74ZZZ.connect[0] = connect75;

iS = IS74;

Group48ZZZ.children[6] = OrientationInterpolator73;

let OrientationInterpolator76 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator76.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator76.key = new X3D.MFFloat([0,0.3125,0.625,1]);
OrientationInterpolator76.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.349065,1,0,0,1.023397,0.999934,0.008043,0.008185,1.727938]);
let IS77 = browser.currentScene.createNode("IS");
let connect78 = browser.currentScene.createNode("connect");
connect78.nodeField = "value_changed";
connect78.protoField = "r_knee_rotation_changed";
IS77YYY.connect = new X3D.MFNode();

IS77ZZZ.connect[0] = connect78;

iS = IS77;

Group48ZZZ.children[7] = OrientationInterpolator76;

let OrientationInterpolator79 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator79.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator79.key = new X3D.MFFloat([0,0.3125,0.625,1]);
OrientationInterpolator79.keyValue = new X3D.MFRotation([1,0,0,0,-0.991692,-0.072372,0.106338,0.205053,-0.981083,-0.103267,0.163741,0.272231,-1,0,0,0.349065]);
let IS80 = browser.currentScene.createNode("IS");
let connect81 = browser.currentScene.createNode("connect");
connect81.nodeField = "value_changed";
connect81.protoField = "r_ankle_rotation_changed";
IS80YYY.connect = new X3D.MFNode();

IS80ZZZ.connect[0] = connect81;

iS = IS80;

Group48ZZZ.children[8] = OrientationInterpolator79;

//no R_MIDTARSAL_ANIMATOR
let OrientationInterpolator82 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator82.DEF = "VL5_ANIMATOR";
OrientationInterpolator82.key = new X3D.MFFloat([0,1]);
OrientationInterpolator82.keyValue = new X3D.MFRotation([1,0,0,0,1,0,0,0.174533]);
let IS83 = browser.currentScene.createNode("IS");
let connect84 = browser.currentScene.createNode("connect");
connect84.nodeField = "value_changed";
connect84.protoField = "vl5_rotation_changed";
IS83YYY.connect = new X3D.MFNode();

IS83ZZZ.connect[0] = connect84;

iS = IS83;

Group48ZZZ.children[9] = OrientationInterpolator82;

//no SKULLBASE_ANIMATOR
let OrientationInterpolator85 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator85.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator85.key = new X3D.MFFloat([0,0.3125,0.625,1]);
OrientationInterpolator85.keyValue = new X3D.MFRotation([1,0,0,0,-1,0,0,0.279252,-1,0,0,0.506145,-1,0,0,0.191986]);
let IS86 = browser.currentScene.createNode("IS");
let connect87 = browser.currentScene.createNode("connect");
connect87.nodeField = "value_changed";
connect87.protoField = "l_shoulder_rotation_changed";
IS86YYY.connect = new X3D.MFNode();

IS86ZZZ.connect[0] = connect87;

iS = IS86;

Group48ZZZ.children[10] = OrientationInterpolator85;

let OrientationInterpolator88 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator88.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator88.key = new X3D.MFFloat([0,0.3125,0.625,1]);
OrientationInterpolator88.keyValue = new X3D.MFRotation([1,0,0,0,-1,0,0,0.052359,-1,0,0,0.296706,-1,0,0,1.431169]);
let IS89 = browser.currentScene.createNode("IS");
let connect90 = browser.currentScene.createNode("connect");
connect90.nodeField = "value_changed";
connect90.protoField = "l_elbow_rotation_changed";
IS89YYY.connect = new X3D.MFNode();

IS89ZZZ.connect[0] = connect90;

iS = IS89;

Group48ZZZ.children[11] = OrientationInterpolator88;

//no L_WRIST_ANIMATOR
let OrientationInterpolator91 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator91.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator91.key = new X3D.MFFloat([0,0.3125,0.625,1]);
OrientationInterpolator91.keyValue = new X3D.MFRotation([1,0,0,0,-1,0,0,0.104719,-1,0,0,0.157079,1,0,0,0.314159]);
let IS92 = browser.currentScene.createNode("IS");
let connect93 = browser.currentScene.createNode("connect");
connect93.nodeField = "value_changed";
connect93.protoField = "r_shoulder_rotation_changed";
IS92YYY.connect = new X3D.MFNode();

IS92ZZZ.connect[0] = connect93;

iS = IS92;

Group48ZZZ.children[12] = OrientationInterpolator91;

let OrientationInterpolator94 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator94.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator94.key = new X3D.MFFloat([0,0.3125,0.625,1]);
OrientationInterpolator94.keyValue = new X3D.MFRotation([1,0,0,0,-1,0,0,0.837757,-1,0,0,1.239183,-1,0,0,1.500983]);
let IS95 = browser.currentScene.createNode("IS");
let connect96 = browser.currentScene.createNode("connect");
connect96.nodeField = "value_changed";
connect96.protoField = "r_elbow_rotation_changed";
IS95YYY.connect = new X3D.MFNode();

IS95ZZZ.connect[0] = connect96;

iS = IS95;

Group48ZZZ.children[13] = OrientationInterpolator94;

//no R_WRIST_ANIMATOR
ProtoBody47YYY.children = new X3D.MFNode();

ProtoBody47ZZZ.children[0] = Group48;

let ROUTE97 = browser.currentScene.createNode("ROUTE");
ROUTE97.fromField = "fraction_changed";
ROUTE97.fromNode = "TIMER";
ROUTE97.toField = "set_fraction";
ROUTE97.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ProtoBody47ZZZ.children[1] = ROUTE97;

let ROUTE98 = browser.currentScene.createNode("ROUTE");
ROUTE98.fromField = "fraction_changed";
ROUTE98.fromNode = "TIMER";
ROUTE98.toField = "set_fraction";
ROUTE98.toNode = "HUMANOIDROOT_ANIMATOR";
ProtoBody47ZZZ.children[2] = ROUTE98;

let ROUTE99 = browser.currentScene.createNode("ROUTE");
ROUTE99.fromField = "fraction_changed";
ROUTE99.fromNode = "TIMER";
ROUTE99.toField = "set_fraction";
ROUTE99.toNode = "L_HIP_ANIMATOR";
ProtoBody47ZZZ.children[3] = ROUTE99;

let ROUTE100 = browser.currentScene.createNode("ROUTE");
ROUTE100.fromField = "fraction_changed";
ROUTE100.fromNode = "TIMER";
ROUTE100.toField = "set_fraction";
ROUTE100.toNode = "L_KNEE_ANIMATOR";
ProtoBody47ZZZ.children[4] = ROUTE100;

let ROUTE101 = browser.currentScene.createNode("ROUTE");
ROUTE101.fromField = "fraction_changed";
ROUTE101.fromNode = "TIMER";
ROUTE101.toField = "set_fraction";
ROUTE101.toNode = "L_ANKLE_ANIMATOR";
ProtoBody47ZZZ.children[5] = ROUTE101;

let ROUTE102 = browser.currentScene.createNode("ROUTE");
ROUTE102.fromField = "fraction_changed";
ROUTE102.fromNode = "TIMER";
ROUTE102.toField = "set_fraction";
ROUTE102.toNode = "R_HIP_ANIMATOR";
ProtoBody47ZZZ.children[6] = ROUTE102;

let ROUTE103 = browser.currentScene.createNode("ROUTE");
ROUTE103.fromField = "fraction_changed";
ROUTE103.fromNode = "TIMER";
ROUTE103.toField = "set_fraction";
ROUTE103.toNode = "R_KNEE_ANIMATOR";
ProtoBody47ZZZ.children[7] = ROUTE103;

let ROUTE104 = browser.currentScene.createNode("ROUTE");
ROUTE104.fromField = "fraction_changed";
ROUTE104.fromNode = "TIMER";
ROUTE104.toField = "set_fraction";
ROUTE104.toNode = "R_ANKLE_ANIMATOR";
ProtoBody47ZZZ.children[8] = ROUTE104;

let ROUTE105 = browser.currentScene.createNode("ROUTE");
ROUTE105.fromField = "fraction_changed";
ROUTE105.fromNode = "TIMER";
ROUTE105.toField = "set_fraction";
ROUTE105.toNode = "VL5_ANIMATOR";
ProtoBody47ZZZ.children[9] = ROUTE105;

let ROUTE106 = browser.currentScene.createNode("ROUTE");
ROUTE106.fromField = "fraction_changed";
ROUTE106.fromNode = "TIMER";
ROUTE106.toField = "set_fraction";
ROUTE106.toNode = "L_SHOULDER_ANIMATOR";
ProtoBody47ZZZ.children[10] = ROUTE106;

let ROUTE107 = browser.currentScene.createNode("ROUTE");
ROUTE107.fromField = "fraction_changed";
ROUTE107.fromNode = "TIMER";
ROUTE107.toField = "set_fraction";
ROUTE107.toNode = "L_ELBOW_ANIMATOR";
ProtoBody47ZZZ.children[11] = ROUTE107;

let ROUTE108 = browser.currentScene.createNode("ROUTE");
ROUTE108.fromField = "fraction_changed";
ROUTE108.fromNode = "TIMER";
ROUTE108.toField = "set_fraction";
ROUTE108.toNode = "R_SHOULDER_ANIMATOR";
ProtoBody47ZZZ.children[12] = ROUTE108;

let ROUTE109 = browser.currentScene.createNode("ROUTE");
ROUTE109.fromField = "fraction_changed";
ROUTE109.fromNode = "TIMER";
ROUTE109.toField = "set_fraction";
ROUTE109.toNode = "R_ELBOW_ANIMATOR";
ProtoBody47ZZZ.children[13] = ROUTE109;

protoBody = ProtoBody47;

browser.currentScene.children[1] = ProtoDeclare19;

let Anchor110 = browser.currentScene.createNode("Anchor");
Anchor110.description = "InterchangableActorsViaDynamicRouting";
Anchor110.parameter = new X3D.MFString([new X3D.SFString("target=_blank")]);
Anchor110.url = new X3D.MFString([new X3D.SFString("InterchangableActorsViaDynamicRouting.x3d"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d"), new X3D.SFString("InterchangableActorsViaDynamicRouting.wrl"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl")]);
let Shape111 = browser.currentScene.createNode("Shape");
let Text112 = browser.currentScene.createNode("Text");
Text112.string = new X3D.MFString([new X3D.SFString("LOA1_KneelAnimation.x3d"), new X3D.SFString("defines a prototype"), new X3D.SFString("for animating a humanoid."), new X3D.SFString(""), new X3D.SFString("Click this text to see"), new X3D.SFString("InterchangableActorsViaDynamicRouting example.")]);
let FontStyle113 = browser.currentScene.createNode("FontStyle");
FontStyle113.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle113.size = 0.8;
fontStyle = FontStyle113;

geometry = Text112;

let Appearance114 = browser.currentScene.createNode("Appearance");
let Material115 = browser.currentScene.createNode("Material");
Material115.diffuseColor = new X3D.SFColor([1,1,0.2]);
material = Material115;

appearance = Appearance114;

Anchor110YYY.children = new X3D.MFNode();

Anchor110ZZZ.children[0] = Shape111;

browser.currentScene.children[2] = Anchor110;

}
main ();
