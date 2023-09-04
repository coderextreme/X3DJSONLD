let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "LOA1_KneelAnimation.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Humanoid animation prototype reusable by any Humanoid.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Tom Miller";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "translator";
meta5.content = "Curt Blais";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "translated";
meta6.content = "1 December 2001";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "modified";
meta7.content = "23 May 2020";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "http://www.HAnim.org/Models/HAnim2001/boxman/protos/LOA1_WalkAnimation.wrl";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "http://www.HAnim.org";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "reference";
meta11.content = "http://HAnim.org/Models";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "reference";
meta12.content = "http://HAnim.org/Nodes";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "subject";
meta13.content = "Nancy kneel Animation HAnim 2001";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "identifier";
meta14.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "generator";
meta15.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[13] = meta15;

head = head1;

let ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="LOA1_KneelAnimation" ><ProtoInterface><field accessType="inputOutput" type="SFTime" name="cycleInterval" value="2"></field>
<field accessType="inputOutput" type="SFBool" name="enabled" value="true"></field>
<field accessType="inputOutput" type="SFBool" name="loop"></field>
<field accessType="inputOutput" type="SFTime" name="startTime"></field>
<field accessType="inputOutput" type="SFTime" name="stopTime" value="-1"></field>
<field accessType="outputOnly" type="SFFloat" name="fraction_changed"></field>
<field accessType="outputOnly" type="SFBool" name="isActive"></field>
<field accessType="outputOnly" type="SFVec3f" name="HumanoidRoot_translation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="HumanoidRoot_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="lower_body_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="l_hip_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="l_knee_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="l_ankle_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="l_midtarsal_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="r_hip_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="r_knee_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="r_ankle_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="r_midtarsal_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="vl5_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="skullbase_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="l_shoulder_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="l_elbow_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="l_wrist_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="r_shoulder_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="r_elbow_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="r_wrist_rotation_changed"></field>
</ProtoInterface>
<ProtoBody><Group><TimeSensor DEF="TIMER"><IS><connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="cycleInterval" protoField="cycleInterval"></connect>
<connect nodeField="loop" protoField="loop"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="fraction_changed" protoField="fraction_changed"></connect>
</IS>
</TimeSensor>
<PositionInterpolator DEF="HUMANOIDROOT_POSITION_ANIMATOR" key="0 0.3125 0.625 1" keyValue="0 0 0 0 -0.049999 0 0 -0.195 0 0 -0.439997 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_translation_changed"></connect>
</IS>
</PositionInterpolator>
<OrientationInterpolator DEF="HUMANOIDROOT_ANIMATOR" key="0 1" keyValue="0 1 0 0 0 1 0 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_HIP_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.619393 -1 0 0 1.069302 -1 0 0 1.937315"><IS><connect nodeField="value_changed" protoField="l_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_KNEE_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 1 0 0 0.615228 1 0 0 0.984524 1 0 0 2.076941"><IS><connect nodeField="value_changed" protoField="l_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ANKLE_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.017453 -1 0 0 0.069812 1 0 0 0.261799"><IS><connect nodeField="value_changed" protoField="l_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_HIP_ANIMATOR" key="0 0.3125 1" keyValue="1 0 0 0 1 0 0 0.523598 -1 0 0 0.157079"><IS><connect nodeField="value_changed" protoField="r_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_KNEE_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 1 0 0 0.349065 1 0 0 1.023397 0.999934 0.008043 0.008185 1.727938"><IS><connect nodeField="value_changed" protoField="r_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ANKLE_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -0.991692 -0.072372 0.106338 0.205053 -0.981083 -0.103267 0.163741 0.272231 -1 0 0 0.349065"><IS><connect nodeField="value_changed" protoField="r_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="VL5_ANIMATOR" key="0 1" keyValue="1 0 0 0 1 0 0 0.174533"><IS><connect nodeField="value_changed" protoField="vl5_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_SHOULDER_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.279252 -1 0 0 0.506145 -1 0 0 0.191986"><IS><connect nodeField="value_changed" protoField="l_shoulder_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ELBOW_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.052359 -1 0 0 0.296706 -1 0 0 1.431169"><IS><connect nodeField="value_changed" protoField="l_elbow_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_SHOULDER_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.104719 -1 0 0 0.157079 1 0 0 0.314159"><IS><connect nodeField="value_changed" protoField="r_shoulder_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ELBOW_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.837757 -1 0 0 1.239183 -1 0 0 1.500983"><IS><connect nodeField="value_changed" protoField="r_elbow_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
</Group>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="HUMANOIDROOT_POSITION_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="HUMANOIDROOT_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_HIP_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_KNEE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_ANKLE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_HIP_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_KNEE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_ANKLE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="VL5_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_SHOULDER_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_ELBOW_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_SHOULDER_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_ELBOW_ANIMATOR" toField="set_fraction"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "LOA1_KneelAnimation";
let ProtoInterface18 = browser.currentScene.createNode("ProtoInterface");
let field19 = browser.currentScene.createNode("field");
field19.accessType = "inputOutput";
field19.type = "SFTime";
field19.name = "cycleInterval";
field19.value = "2";
ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

let field20 = browser.currentScene.createNode("field");
field20.accessType = "inputOutput";
field20.type = "SFBool";
field20.name = "enabled";
field20.value = "true";
ProtoInterface18.field[1] = field20;

let field21 = browser.currentScene.createNode("field");
field21.accessType = "inputOutput";
field21.type = "SFBool";
field21.name = "loop";
ProtoInterface18.field[2] = field21;

let field22 = browser.currentScene.createNode("field");
field22.accessType = "inputOutput";
field22.type = "SFTime";
field22.name = "startTime";
ProtoInterface18.field[3] = field22;

let field23 = browser.currentScene.createNode("field");
field23.accessType = "inputOutput";
field23.type = "SFTime";
field23.name = "stopTime";
field23.value = "-1";
ProtoInterface18.field[4] = field23;

let field24 = browser.currentScene.createNode("field");
field24.accessType = "outputOnly";
field24.type = "SFFloat";
field24.name = "fraction_changed";
ProtoInterface18.field[5] = field24;

let field25 = browser.currentScene.createNode("field");
field25.accessType = "outputOnly";
field25.type = "SFBool";
field25.name = "isActive";
ProtoInterface18.field[6] = field25;

let field26 = browser.currentScene.createNode("field");
field26.accessType = "outputOnly";
field26.type = "SFVec3f";
field26.name = "HumanoidRoot_translation_changed";
ProtoInterface18.field[7] = field26;

let field27 = browser.currentScene.createNode("field");
field27.accessType = "outputOnly";
field27.type = "SFRotation";
field27.name = "HumanoidRoot_rotation_changed";
ProtoInterface18.field[8] = field27;

let field28 = browser.currentScene.createNode("field");
field28.accessType = "outputOnly";
field28.type = "SFRotation";
field28.name = "lower_body_rotation_changed";
ProtoInterface18.field[9] = field28;

let field29 = browser.currentScene.createNode("field");
field29.accessType = "outputOnly";
field29.type = "SFRotation";
field29.name = "l_hip_rotation_changed";
ProtoInterface18.field[10] = field29;

let field30 = browser.currentScene.createNode("field");
field30.accessType = "outputOnly";
field30.type = "SFRotation";
field30.name = "l_knee_rotation_changed";
ProtoInterface18.field[11] = field30;

let field31 = browser.currentScene.createNode("field");
field31.accessType = "outputOnly";
field31.type = "SFRotation";
field31.name = "l_ankle_rotation_changed";
ProtoInterface18.field[12] = field31;

let field32 = browser.currentScene.createNode("field");
field32.accessType = "outputOnly";
field32.type = "SFRotation";
field32.name = "l_midtarsal_rotation_changed";
ProtoInterface18.field[13] = field32;

let field33 = browser.currentScene.createNode("field");
field33.accessType = "outputOnly";
field33.type = "SFRotation";
field33.name = "r_hip_rotation_changed";
ProtoInterface18.field[14] = field33;

let field34 = browser.currentScene.createNode("field");
field34.accessType = "outputOnly";
field34.type = "SFRotation";
field34.name = "r_knee_rotation_changed";
ProtoInterface18.field[15] = field34;

let field35 = browser.currentScene.createNode("field");
field35.accessType = "outputOnly";
field35.type = "SFRotation";
field35.name = "r_ankle_rotation_changed";
ProtoInterface18.field[16] = field35;

let field36 = browser.currentScene.createNode("field");
field36.accessType = "outputOnly";
field36.type = "SFRotation";
field36.name = "r_midtarsal_rotation_changed";
ProtoInterface18.field[17] = field36;

let field37 = browser.currentScene.createNode("field");
field37.accessType = "outputOnly";
field37.type = "SFRotation";
field37.name = "vl5_rotation_changed";
ProtoInterface18.field[18] = field37;

let field38 = browser.currentScene.createNode("field");
field38.accessType = "outputOnly";
field38.type = "SFRotation";
field38.name = "skullbase_rotation_changed";
ProtoInterface18.field[19] = field38;

let field39 = browser.currentScene.createNode("field");
field39.accessType = "outputOnly";
field39.type = "SFRotation";
field39.name = "l_shoulder_rotation_changed";
ProtoInterface18.field[20] = field39;

let field40 = browser.currentScene.createNode("field");
field40.accessType = "outputOnly";
field40.type = "SFRotation";
field40.name = "l_elbow_rotation_changed";
ProtoInterface18.field[21] = field40;

let field41 = browser.currentScene.createNode("field");
field41.accessType = "outputOnly";
field41.type = "SFRotation";
field41.name = "l_wrist_rotation_changed";
ProtoInterface18.field[22] = field41;

let field42 = browser.currentScene.createNode("field");
field42.accessType = "outputOnly";
field42.type = "SFRotation";
field42.name = "r_shoulder_rotation_changed";
ProtoInterface18.field[23] = field42;

let field43 = browser.currentScene.createNode("field");
field43.accessType = "outputOnly";
field43.type = "SFRotation";
field43.name = "r_elbow_rotation_changed";
ProtoInterface18.field[24] = field43;

let field44 = browser.currentScene.createNode("field");
field44.accessType = "outputOnly";
field44.type = "SFRotation";
field44.name = "r_wrist_rotation_changed";
ProtoInterface18.field[25] = field44;

ProtoDeclare17.protoInterface = ProtoInterface18;

let ProtoBody45 = browser.currentScene.createNode("ProtoBody");
let Group46 = browser.currentScene.createNode("Group");
let TimeSensor47 = browser.currentScene.createNode("TimeSensor");
TimeSensor47.DEF = "TIMER";
let IS48 = browser.currentScene.createNode("IS");
let connect49 = browser.currentScene.createNode("connect");
connect49.nodeField = "enabled";
connect49.protoField = "enabled";
IS48.connect = new MFNode();

IS48.connect[0] = connect49;

let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "cycleInterval";
connect50.protoField = "cycleInterval";
IS48.connect[1] = connect50;

let connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "loop";
connect51.protoField = "loop";
IS48.connect[2] = connect51;

let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "startTime";
connect52.protoField = "startTime";
IS48.connect[3] = connect52;

let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "stopTime";
connect53.protoField = "stopTime";
IS48.connect[4] = connect53;

let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "isActive";
connect54.protoField = "isActive";
IS48.connect[5] = connect54;

let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "fraction_changed";
connect55.protoField = "fraction_changed";
IS48.connect[6] = connect55;

TimeSensor47.iS = IS48;

Group46.children = new MFNode();

Group46.children[0] = TimeSensor47;

let PositionInterpolator56 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator56.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator56.key = new MFFloat(new float[0,0.3125,0.625,1]);
PositionInterpolator56.keyValue = new MFVec3f(new float[0,0,0,0,-0.049999,0,0,-0.195,0,0,-0.439997,0]);
let IS57 = browser.currentScene.createNode("IS");
let connect58 = browser.currentScene.createNode("connect");
connect58.nodeField = "value_changed";
connect58.protoField = "HumanoidRoot_translation_changed";
IS57.connect = new MFNode();

IS57.connect[0] = connect58;

PositionInterpolator56.iS = IS57;

Group46.children[1] = PositionInterpolator56;

let OrientationInterpolator59 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator59.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator59.key = new MFFloat(new float[0,1]);
OrientationInterpolator59.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0]);
let IS60 = browser.currentScene.createNode("IS");
let connect61 = browser.currentScene.createNode("connect");
connect61.nodeField = "value_changed";
connect61.protoField = "HumanoidRoot_rotation_changed";
IS60.connect = new MFNode();

IS60.connect[0] = connect61;

OrientationInterpolator59.iS = IS60;

Group46.children[2] = OrientationInterpolator59;

let OrientationInterpolator62 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator62.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator62.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator62.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.619393,-1,0,0,1.069302,-1,0,0,1.937315]);
let IS63 = browser.currentScene.createNode("IS");
let connect64 = browser.currentScene.createNode("connect");
connect64.nodeField = "value_changed";
connect64.protoField = "l_hip_rotation_changed";
IS63.connect = new MFNode();

IS63.connect[0] = connect64;

OrientationInterpolator62.iS = IS63;

Group46.children[3] = OrientationInterpolator62;

let OrientationInterpolator65 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator65.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator65.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator65.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.615228,1,0,0,0.984524,1,0,0,2.076941]);
let IS66 = browser.currentScene.createNode("IS");
let connect67 = browser.currentScene.createNode("connect");
connect67.nodeField = "value_changed";
connect67.protoField = "l_knee_rotation_changed";
IS66.connect = new MFNode();

IS66.connect[0] = connect67;

OrientationInterpolator65.iS = IS66;

Group46.children[4] = OrientationInterpolator65;

let OrientationInterpolator68 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator68.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator68.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator68.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.017453,-1,0,0,0.069812,1,0,0,0.261799]);
let IS69 = browser.currentScene.createNode("IS");
let connect70 = browser.currentScene.createNode("connect");
connect70.nodeField = "value_changed";
connect70.protoField = "l_ankle_rotation_changed";
IS69.connect = new MFNode();

IS69.connect[0] = connect70;

OrientationInterpolator68.iS = IS69;

Group46.children[5] = OrientationInterpolator68;

let OrientationInterpolator71 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator71.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator71.key = new MFFloat(new float[0,0.3125,1]);
OrientationInterpolator71.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.523598,-1,0,0,0.157079]);
let IS72 = browser.currentScene.createNode("IS");
let connect73 = browser.currentScene.createNode("connect");
connect73.nodeField = "value_changed";
connect73.protoField = "r_hip_rotation_changed";
IS72.connect = new MFNode();

IS72.connect[0] = connect73;

OrientationInterpolator71.iS = IS72;

Group46.children[6] = OrientationInterpolator71;

let OrientationInterpolator74 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator74.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator74.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator74.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.349065,1,0,0,1.023397,0.999934,0.008043,0.008185,1.727938]);
let IS75 = browser.currentScene.createNode("IS");
let connect76 = browser.currentScene.createNode("connect");
connect76.nodeField = "value_changed";
connect76.protoField = "r_knee_rotation_changed";
IS75.connect = new MFNode();

IS75.connect[0] = connect76;

OrientationInterpolator74.iS = IS75;

Group46.children[7] = OrientationInterpolator74;

let OrientationInterpolator77 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator77.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator77.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator77.keyValue = new MFRotation(new float[1,0,0,0,-0.991692,-0.072372,0.106338,0.205053,-0.981083,-0.103267,0.163741,0.272231,-1,0,0,0.349065]);
let IS78 = browser.currentScene.createNode("IS");
let connect79 = browser.currentScene.createNode("connect");
connect79.nodeField = "value_changed";
connect79.protoField = "r_ankle_rotation_changed";
IS78.connect = new MFNode();

IS78.connect[0] = connect79;

OrientationInterpolator77.iS = IS78;

Group46.children[8] = OrientationInterpolator77;

let OrientationInterpolator80 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator80.DEF = "VL5_ANIMATOR";
OrientationInterpolator80.key = new MFFloat(new float[0,1]);
OrientationInterpolator80.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.174533]);
let IS81 = browser.currentScene.createNode("IS");
let connect82 = browser.currentScene.createNode("connect");
connect82.nodeField = "value_changed";
connect82.protoField = "vl5_rotation_changed";
IS81.connect = new MFNode();

IS81.connect[0] = connect82;

OrientationInterpolator80.iS = IS81;

Group46.children[9] = OrientationInterpolator80;

let OrientationInterpolator83 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator83.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator83.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator83.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.279252,-1,0,0,0.506145,-1,0,0,0.191986]);
let IS84 = browser.currentScene.createNode("IS");
let connect85 = browser.currentScene.createNode("connect");
connect85.nodeField = "value_changed";
connect85.protoField = "l_shoulder_rotation_changed";
IS84.connect = new MFNode();

IS84.connect[0] = connect85;

OrientationInterpolator83.iS = IS84;

Group46.children[10] = OrientationInterpolator83;

let OrientationInterpolator86 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator86.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator86.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator86.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.052359,-1,0,0,0.296706,-1,0,0,1.431169]);
let IS87 = browser.currentScene.createNode("IS");
let connect88 = browser.currentScene.createNode("connect");
connect88.nodeField = "value_changed";
connect88.protoField = "l_elbow_rotation_changed";
IS87.connect = new MFNode();

IS87.connect[0] = connect88;

OrientationInterpolator86.iS = IS87;

Group46.children[11] = OrientationInterpolator86;

let OrientationInterpolator89 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator89.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator89.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator89.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.104719,-1,0,0,0.157079,1,0,0,0.314159]);
let IS90 = browser.currentScene.createNode("IS");
let connect91 = browser.currentScene.createNode("connect");
connect91.nodeField = "value_changed";
connect91.protoField = "r_shoulder_rotation_changed";
IS90.connect = new MFNode();

IS90.connect[0] = connect91;

OrientationInterpolator89.iS = IS90;

Group46.children[12] = OrientationInterpolator89;

let OrientationInterpolator92 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator92.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator92.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator92.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.837757,-1,0,0,1.239183,-1,0,0,1.500983]);
let IS93 = browser.currentScene.createNode("IS");
let connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "value_changed";
connect94.protoField = "r_elbow_rotation_changed";
IS93.connect = new MFNode();

IS93.connect[0] = connect94;

OrientationInterpolator92.iS = IS93;

Group46.children[13] = OrientationInterpolator92;

ProtoBody45.children = new MFNode();

ProtoBody45.children[0] = Group46;

let ROUTE95 = browser.currentScene.createNode("ROUTE");
ROUTE95.fromNode = "TIMER";
ROUTE95.fromField = "fraction_changed";
ROUTE95.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ROUTE95.toField = "set_fraction";
ProtoBody45.children[1] = ROUTE95;

let ROUTE96 = browser.currentScene.createNode("ROUTE");
ROUTE96.fromNode = "TIMER";
ROUTE96.fromField = "fraction_changed";
ROUTE96.toNode = "HUMANOIDROOT_ANIMATOR";
ROUTE96.toField = "set_fraction";
ProtoBody45.children[2] = ROUTE96;

let ROUTE97 = browser.currentScene.createNode("ROUTE");
ROUTE97.fromNode = "TIMER";
ROUTE97.fromField = "fraction_changed";
ROUTE97.toNode = "L_HIP_ANIMATOR";
ROUTE97.toField = "set_fraction";
ProtoBody45.children[3] = ROUTE97;

let ROUTE98 = browser.currentScene.createNode("ROUTE");
ROUTE98.fromNode = "TIMER";
ROUTE98.fromField = "fraction_changed";
ROUTE98.toNode = "L_KNEE_ANIMATOR";
ROUTE98.toField = "set_fraction";
ProtoBody45.children[4] = ROUTE98;

let ROUTE99 = browser.currentScene.createNode("ROUTE");
ROUTE99.fromNode = "TIMER";
ROUTE99.fromField = "fraction_changed";
ROUTE99.toNode = "L_ANKLE_ANIMATOR";
ROUTE99.toField = "set_fraction";
ProtoBody45.children[5] = ROUTE99;

let ROUTE100 = browser.currentScene.createNode("ROUTE");
ROUTE100.fromNode = "TIMER";
ROUTE100.fromField = "fraction_changed";
ROUTE100.toNode = "R_HIP_ANIMATOR";
ROUTE100.toField = "set_fraction";
ProtoBody45.children[6] = ROUTE100;

let ROUTE101 = browser.currentScene.createNode("ROUTE");
ROUTE101.fromNode = "TIMER";
ROUTE101.fromField = "fraction_changed";
ROUTE101.toNode = "R_KNEE_ANIMATOR";
ROUTE101.toField = "set_fraction";
ProtoBody45.children[7] = ROUTE101;

let ROUTE102 = browser.currentScene.createNode("ROUTE");
ROUTE102.fromNode = "TIMER";
ROUTE102.fromField = "fraction_changed";
ROUTE102.toNode = "R_ANKLE_ANIMATOR";
ROUTE102.toField = "set_fraction";
ProtoBody45.children[8] = ROUTE102;

let ROUTE103 = browser.currentScene.createNode("ROUTE");
ROUTE103.fromNode = "TIMER";
ROUTE103.fromField = "fraction_changed";
ROUTE103.toNode = "VL5_ANIMATOR";
ROUTE103.toField = "set_fraction";
ProtoBody45.children[9] = ROUTE103;

let ROUTE104 = browser.currentScene.createNode("ROUTE");
ROUTE104.fromNode = "TIMER";
ROUTE104.fromField = "fraction_changed";
ROUTE104.toNode = "L_SHOULDER_ANIMATOR";
ROUTE104.toField = "set_fraction";
ProtoBody45.children[10] = ROUTE104;

let ROUTE105 = browser.currentScene.createNode("ROUTE");
ROUTE105.fromNode = "TIMER";
ROUTE105.fromField = "fraction_changed";
ROUTE105.toNode = "L_ELBOW_ANIMATOR";
ROUTE105.toField = "set_fraction";
ProtoBody45.children[11] = ROUTE105;

let ROUTE106 = browser.currentScene.createNode("ROUTE");
ROUTE106.fromNode = "TIMER";
ROUTE106.fromField = "fraction_changed";
ROUTE106.toNode = "R_SHOULDER_ANIMATOR";
ROUTE106.toField = "set_fraction";
ProtoBody45.children[12] = ROUTE106;

let ROUTE107 = browser.currentScene.createNode("ROUTE");
ROUTE107.fromNode = "TIMER";
ROUTE107.fromField = "fraction_changed";
ROUTE107.toNode = "R_ELBOW_ANIMATOR";
ROUTE107.toField = "set_fraction";
ProtoBody45.children[13] = ROUTE107;

ProtoDeclare17.protoBody = ProtoBody45;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare17;

let WorldInfo108 = browser.currentScene.createNode("WorldInfo");
WorldInfo108.title = "LOA1_KneelAnimation.x3d";
browser.currentScene.children[1] = WorldInfo108;

let Anchor109 = browser.currentScene.createNode("Anchor");
Anchor109.description = "InterchangableActorsViaDynamicRouting";
Anchor109.url = new MFString(new java.lang.String["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"]);
Anchor109.parameter = new MFString(new java.lang.String["target=_blank"]);
let Shape110 = browser.currentScene.createNode("Shape");
let Appearance111 = browser.currentScene.createNode("Appearance");
let Material112 = browser.currentScene.createNode("Material");
Material112.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance111.material = Material112;

Shape110.appearance = Appearance111;

let Text113 = browser.currentScene.createNode("Text");
Text113.string = new MFString(new java.lang.String["LOA1_KneelAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."]);
let FontStyle114 = browser.currentScene.createNode("FontStyle");
FontStyle114.size = 0.8;
FontStyle114.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text113.fontStyle = FontStyle114;

Shape110.geometry = Text113;

Anchor109.children = new MFNode();

Anchor109.children[0] = Shape110;

browser.currentScene.children[2] = Anchor109;

