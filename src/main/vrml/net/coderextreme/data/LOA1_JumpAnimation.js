let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "LOA1_JumpAnimation.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="LOA1_JumpAnimation" ><ProtoInterface><field name="cycleInterval" accessType="inputOutput" type="SFTime" value="2"></field>
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
<PositionInterpolator DEF="HUMANOIDROOT_POSITION_ANIMATOR" key="0 0.04 0.08 0.12 0.16 0.2 0.24 0.28 0.32 0.36 0.4 0.44 0.48 0.64 0.76 0.8 0.84 0.88 0.92 0.96 1" keyValue="0 0 0 0 -0.01264 -0.01289 0 -0.04712 -0.03738 -0.0003345 -0.1049 -0.05353 -0.0005712 -0.1892 -0.06561 -0.0008233 -0.286 -0.06276 -0.0009591 -0.3795 -0.05148 -0.00106 -0.4484 -0.03656 -0.00106 -0.4484 -0.03656 -0.001122 -0.3269 -0.1499 -0.0008616 -0.13 -0.06358 -0.0005128 -0.03123 -0.05488 0.0004779 0.053 0.02732 0.0001728 0.4148 0.006873 0 0.03045 0.02148 0 -0.01299 -0.01057 0 -0.06932 -0.01064 0.0001365 -0.1037 -0.005059 0.0001279 -0.07198 -0.007596 0.000141 -0.01626 -0.004935 0 0 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_translation_changed"></connect>
</IS>
</PositionInterpolator>
<OrientationInterpolator DEF="HUMANOIDROOT_ANIMATOR" key="0 0.28 0.32 0.48 0.64 0.76 1" keyValue="0 0 1 0 1 0 0 0.3273 1 0 0 0.3273 0 0 1 0 0 0 1 0 0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="SACROILIAC_ANIMATOR" key="0 0.28 0.32 0.48 0.76 1" keyValue="0 0 1 0 1 0 0 0.1892 1 0 0 0.1892 0 0 1 0 0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="lower_body_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_HIP_ANIMATOR" key="0 0.28 0.32 0.36 0.4 0.44 0.48 0.64 0.76 0.88 1" keyValue="0 0 1 0 1 0 0 4.349 1 0 0 4.349 1 0 0 4.615 -1 0 0 0.9136 -1 0 0 0.3614 0 0 1 0 -1 0 0 0.7869 -1 0 0 0.3918 -1 0 0 0.5433 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_KNEE_ANIMATOR" key="0 0.28 0.32 0.48 0.64 0.76 0.88 1" keyValue="0 0 1 0 1 0 0 2.047 1 0 0 2.047 0 0 1 0 1 0 0 1.566 1 0 0 0.5913 1 0 0 0.9235 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ANKLE_ANIMATOR" key="0 0.28 0.32 0.36 0.4 0.44 0.48 0.64 0.76 0.84 0.88 0.92 0.96 1" keyValue="0 0 1 0 -1 0 0 0.625 -1 0 0 0.625 -1 0 0 0.3364 -1 0 0 0.2742 -1 0 0 0.05078 1 0 0 0.2833 1 0 0 0.6667 1 0 0 0.2833 -1 0 0 0.2108 -1 0 0 0.375 -1 0 0 0.3146 -1 0 0 0.1174 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_MIDTARSAL_ANIMATOR" key="0 0.5 1" keyValue="1 0 0 0 1 0 0 -0.2 1 0 0 0"><IS><connect nodeField="value_changed" protoField="l_midtarsal_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_HIP_ANIMATOR" key="0 0.28 0.32 0.36 0.4 0.44 0.48 0.64 0.76 0.88 1" keyValue="0 0 1 0 1 0 0 4.433 1 0 0 4.433 1 0 0 4.647 -1 0 0 0.8943 -1 0 0 0.3698 0 0 1 0 -1 0 0 0.4963 -1 0 0 0.3829 -1 0 0 0.5169 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_KNEE_ANIMATOR" key="0 0.28 0.32 0.48 0.64 0.76 0.88 1" keyValue="0 0 1 0 1 0 0 2.005 1 0 0 2.005 0 0 1 0 1 0 0 0.9507 1 0 0 0.5845 1 0 0 0.9054 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ANKLE_ANIMATOR" key="0 0.28 0.32 0.36 0.4 0.44 0.48 0.64 0.76 0.84 0.88 0.92 0.96 1" keyValue="0 0 1 0 -1 0 0 0.6735 -1 0 0 0.6735 -1 0 0 0.3527 -1 0 0 0.3038 -1 0 0 0.07964 1 0 0 0.3001 1 0 0 0.6509 1 0 0 0.3001 -1 0 0 0.2087 -1 0 0 0.3756 -1 0 0 0.3279 -1 0 0 0.1193 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_MIDTARSAL_ANIMATOR" key="0 0.5 1" keyValue="1 0 0 -0.2 1 0 0 0 1 0 0 -0.2"><IS><connect nodeField="value_changed" protoField="r_midtarsal_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="VL5_ANIMATOR" key="0 0.2083 0.375 0.75 0.8333 1" keyValue="0 1 0 0.0826 -0.01972 -0.5974 0.8017 0.08231 0.009296 -0.9648 0.2627 0.1734 -0.01238 0.9549 -0.2968 0.08732 -0.008125 0.9691 -0.2463 0.158 0 1 0 0.0826"><IS><connect nodeField="value_changed" protoField="vl5_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="SKULLBASE_ANIMATOR" key="0 0.28 0.32 0.48 0.76 1" keyValue="0 0 1 0 -1 0 0 0.5989 -1 0 0 0.5989 -1 0 0 0.3216 1 0 0 0.06503 0 0 1 0"><IS><connect nodeField="value_changed" protoField="skullbase_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_SHOULDER_ANIMATOR" key="0 0.28 0.32 0.64 0.76 0.88 1" keyValue="0 0 1 0 -0.9987 0.02554 0.04498 1.57 -0.9987 0.02554 0.04498 1.57 1 0.0004113 0.003055 4.114 -0.8413 0.3238 0.4329 1.453 -0.877 0.4198 0.2337 0.6009 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_shoulder_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ELBOW_ANIMATOR" key="0 0.28 0.32 0.64 0.76 1" keyValue="0 0 1 0 -1 0 0 0.1229 -1 0 0 0.1229 -1 0 0 0.5976 -1 0 0 0.3917 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_elbow_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_WRIST_ANIMATOR" key="0 0.28 0.32 0.64 0.76 0.88 1" keyValue="0 0 1 0 0.0672928 0.989475 -0.128107 4.15574 0.0672928 0.989475 -0.128107 4.15574 0.00364942 0.999901 0.0135896 4.5822 0 -1 0 0.655922 -0.00050618 -0.999999 0.0012782 1.28397 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_wrist_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_SHOULDER_ANIMATOR" key="0 0.28 0.32 0.64 0.76 0.88 1" keyValue="0 0 1 0 0.9992 0.02042 0.03558 4.688 0.9992 0.02042 0.03558 4.688 0.9989 -0.04623 0.005159 4.079 -0.8687 -0.2525 -0.4261 1.501 -0.941 -0.2893 -0.1754 0.4788 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_shoulder_rotation_changed"></connect>
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
ProtoDeclare3.name = "LOA1_JumpAnimation";
let ProtoInterface4 = browser.currentScene.createNode("ProtoInterface");
let field5 = browser.currentScene.createNode("field");
field5.name = "cycleInterval";
field5.accessType = "inputOutput";
field5.type = "SFTime";
field5.value = "2";
ProtoInterface4.field = new MFNode();

ProtoInterface4.field[0] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "enabled";
field6.accessType = "inputOutput";
field6.type = "SFBool";
field6.value = "true";
ProtoInterface4.field[1] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "loop";
field7.accessType = "inputOutput";
field7.type = "SFBool";
field7.value = "true";
ProtoInterface4.field[2] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "startTime";
field8.accessType = "inputOutput";
field8.type = "SFTime";
field8.value = "0";
ProtoInterface4.field[3] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "stopTime";
field9.accessType = "inputOutput";
field9.type = "SFTime";
field9.value = "-1";
ProtoInterface4.field[4] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "fraction_changed";
field10.accessType = "outputOnly";
field10.type = "SFFloat";
ProtoInterface4.field[5] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "isActive";
field11.accessType = "outputOnly";
field11.type = "SFBool";
ProtoInterface4.field[6] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "HumanoidRoot_translation_changed";
field12.accessType = "outputOnly";
field12.type = "SFVec3f";
ProtoInterface4.field[7] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "HumanoidRoot_rotation_changed";
field13.accessType = "outputOnly";
field13.type = "SFRotation";
ProtoInterface4.field[8] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "lower_body_rotation_changed";
field14.accessType = "outputOnly";
field14.type = "SFRotation";
ProtoInterface4.field[9] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "l_hip_rotation_changed";
field15.accessType = "outputOnly";
field15.type = "SFRotation";
ProtoInterface4.field[10] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "l_knee_rotation_changed";
field16.accessType = "outputOnly";
field16.type = "SFRotation";
ProtoInterface4.field[11] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "l_ankle_rotation_changed";
field17.accessType = "outputOnly";
field17.type = "SFRotation";
ProtoInterface4.field[12] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "l_midtarsal_rotation_changed";
field18.accessType = "outputOnly";
field18.type = "SFRotation";
ProtoInterface4.field[13] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "r_hip_rotation_changed";
field19.accessType = "outputOnly";
field19.type = "SFRotation";
ProtoInterface4.field[14] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "r_knee_rotation_changed";
field20.accessType = "outputOnly";
field20.type = "SFRotation";
ProtoInterface4.field[15] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "r_ankle_rotation_changed";
field21.accessType = "outputOnly";
field21.type = "SFRotation";
ProtoInterface4.field[16] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "r_midtarsal_rotation_changed";
field22.accessType = "outputOnly";
field22.type = "SFRotation";
ProtoInterface4.field[17] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "vl5_rotation_changed";
field23.accessType = "outputOnly";
field23.type = "SFRotation";
ProtoInterface4.field[18] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "skullbase_rotation_changed";
field24.accessType = "outputOnly";
field24.type = "SFRotation";
ProtoInterface4.field[19] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "l_shoulder_rotation_changed";
field25.accessType = "outputOnly";
field25.type = "SFRotation";
ProtoInterface4.field[20] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "l_elbow_rotation_changed";
field26.accessType = "outputOnly";
field26.type = "SFRotation";
ProtoInterface4.field[21] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "l_wrist_rotation_changed";
field27.accessType = "outputOnly";
field27.type = "SFRotation";
ProtoInterface4.field[22] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "r_shoulder_rotation_changed";
field28.accessType = "outputOnly";
field28.type = "SFRotation";
ProtoInterface4.field[23] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "r_elbow_rotation_changed";
field29.accessType = "outputOnly";
field29.type = "SFRotation";
ProtoInterface4.field[24] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "r_wrist_rotation_changed";
field30.accessType = "outputOnly";
field30.type = "SFRotation";
ProtoInterface4.field[25] = field30;

ProtoDeclare3.protoInterface = ProtoInterface4;

let ProtoBody31 = browser.currentScene.createNode("ProtoBody");
let Group32 = browser.currentScene.createNode("Group");
let TimeSensor33 = browser.currentScene.createNode("TimeSensor");
TimeSensor33.DEF = "TIMER";
TimeSensor33.loop = True;
let IS34 = browser.currentScene.createNode("IS");
let connect35 = browser.currentScene.createNode("connect");
connect35.nodeField = "cycleInterval";
connect35.protoField = "cycleInterval";
IS34.connect = new MFNode();

IS34.connect[0] = connect35;

let connect36 = browser.currentScene.createNode("connect");
connect36.nodeField = "enabled";
connect36.protoField = "enabled";
IS34.connect[1] = connect36;

let connect37 = browser.currentScene.createNode("connect");
connect37.nodeField = "loop";
connect37.protoField = "loop";
IS34.connect[2] = connect37;

let connect38 = browser.currentScene.createNode("connect");
connect38.nodeField = "startTime";
connect38.protoField = "startTime";
IS34.connect[3] = connect38;

let connect39 = browser.currentScene.createNode("connect");
connect39.nodeField = "stopTime";
connect39.protoField = "stopTime";
IS34.connect[4] = connect39;

let connect40 = browser.currentScene.createNode("connect");
connect40.nodeField = "fraction_changed";
connect40.protoField = "fraction_changed";
IS34.connect[5] = connect40;

let connect41 = browser.currentScene.createNode("connect");
connect41.nodeField = "isActive";
connect41.protoField = "isActive";
IS34.connect[6] = connect41;

TimeSensor33.iS = IS34;

Group32.children = new MFNode();

Group32.children[0] = TimeSensor33;

let PositionInterpolator42 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator42.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator42.key = new MFFloat(new float[0,0.04,0.08,0.12,0.16,0.2,0.24,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.8,0.84,0.88,0.92,0.96,1]);
PositionInterpolator42.keyValue = new MFVec3f(new float[0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.3269,-0.1499,-0.0008616,-0.13,-0.06358,-0.0005128,-0.03123,-0.05488,0.0004779,0.053,0.02732,0.0001728,0.4148,0.006873,0,0.03045,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0]);
let IS43 = browser.currentScene.createNode("IS");
let connect44 = browser.currentScene.createNode("connect");
connect44.nodeField = "value_changed";
connect44.protoField = "HumanoidRoot_translation_changed";
IS43.connect = new MFNode();

IS43.connect[0] = connect44;

PositionInterpolator42.iS = IS43;

Group32.children[1] = PositionInterpolator42;

let OrientationInterpolator45 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator45.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator45.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,1]);
OrientationInterpolator45.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
let IS46 = browser.currentScene.createNode("IS");
let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "value_changed";
connect47.protoField = "HumanoidRoot_rotation_changed";
IS46.connect = new MFNode();

IS46.connect[0] = connect47;

OrientationInterpolator45.iS = IS46;

Group32.children[2] = OrientationInterpolator45;

let OrientationInterpolator48 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator48.DEF = "SACROILIAC_ANIMATOR";
OrientationInterpolator48.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator48.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0]);
let IS49 = browser.currentScene.createNode("IS");
let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "value_changed";
connect50.protoField = "lower_body_rotation_changed";
IS49.connect = new MFNode();

IS49.connect[0] = connect50;

OrientationInterpolator48.iS = IS49;

Group32.children[3] = OrientationInterpolator48;

let OrientationInterpolator51 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator51.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator51.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator51.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0]);
let IS52 = browser.currentScene.createNode("IS");
let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "value_changed";
connect53.protoField = "l_hip_rotation_changed";
IS52.connect = new MFNode();

IS52.connect[0] = connect53;

OrientationInterpolator51.iS = IS52;

Group32.children[4] = OrientationInterpolator51;

let OrientationInterpolator54 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator54.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator54.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator54.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0]);
let IS55 = browser.currentScene.createNode("IS");
let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "value_changed";
connect56.protoField = "l_knee_rotation_changed";
IS55.connect = new MFNode();

IS55.connect[0] = connect56;

OrientationInterpolator54.iS = IS55;

Group32.children[5] = OrientationInterpolator54;

let OrientationInterpolator57 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator57.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator57.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator57.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0]);
let IS58 = browser.currentScene.createNode("IS");
let connect59 = browser.currentScene.createNode("connect");
connect59.nodeField = "value_changed";
connect59.protoField = "l_ankle_rotation_changed";
IS58.connect = new MFNode();

IS58.connect[0] = connect59;

OrientationInterpolator57.iS = IS58;

Group32.children[6] = OrientationInterpolator57;

let OrientationInterpolator60 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator60.DEF = "L_MIDTARSAL_ANIMATOR";
OrientationInterpolator60.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator60.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.2,1,0,0,0]);
let IS61 = browser.currentScene.createNode("IS");
let connect62 = browser.currentScene.createNode("connect");
connect62.nodeField = "value_changed";
connect62.protoField = "l_midtarsal_rotation_changed";
IS61.connect = new MFNode();

IS61.connect[0] = connect62;

OrientationInterpolator60.iS = IS61;

Group32.children[7] = OrientationInterpolator60;

let OrientationInterpolator63 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator63.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator63.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator63.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,4.433,1,0,0,4.433,1,0,0,4.647,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0]);
let IS64 = browser.currentScene.createNode("IS");
let connect65 = browser.currentScene.createNode("connect");
connect65.nodeField = "value_changed";
connect65.protoField = "r_hip_rotation_changed";
IS64.connect = new MFNode();

IS64.connect[0] = connect65;

OrientationInterpolator63.iS = IS64;

Group32.children[8] = OrientationInterpolator63;

let OrientationInterpolator66 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator66.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator66.key = new MFFloat(new float[0,0.28,0.32,0.48,0.64,0.76,0.88,1]);
OrientationInterpolator66.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,2.005,1,0,0,2.005,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0]);
let IS67 = browser.currentScene.createNode("IS");
let connect68 = browser.currentScene.createNode("connect");
connect68.nodeField = "value_changed";
connect68.protoField = "r_knee_rotation_changed";
IS67.connect = new MFNode();

IS67.connect[0] = connect68;

OrientationInterpolator66.iS = IS67;

Group32.children[9] = OrientationInterpolator66;

let OrientationInterpolator69 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator69.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator69.key = new MFFloat(new float[0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]);
OrientationInterpolator69.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,0.3001,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0]);
let IS70 = browser.currentScene.createNode("IS");
let connect71 = browser.currentScene.createNode("connect");
connect71.nodeField = "value_changed";
connect71.protoField = "r_ankle_rotation_changed";
IS70.connect = new MFNode();

IS70.connect[0] = connect71;

OrientationInterpolator69.iS = IS70;

Group32.children[10] = OrientationInterpolator69;

let OrientationInterpolator72 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator72.DEF = "R_MIDTARSAL_ANIMATOR";
OrientationInterpolator72.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator72.keyValue = new MFRotation(new float[1,0,0,-0.2,1,0,0,0,1,0,0,-0.2]);
let IS73 = browser.currentScene.createNode("IS");
let connect74 = browser.currentScene.createNode("connect");
connect74.nodeField = "value_changed";
connect74.protoField = "r_midtarsal_rotation_changed";
IS73.connect = new MFNode();

IS73.connect[0] = connect74;

OrientationInterpolator72.iS = IS73;

Group32.children[11] = OrientationInterpolator72;

let OrientationInterpolator75 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator75.DEF = "VL5_ANIMATOR";
OrientationInterpolator75.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator75.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
let IS76 = browser.currentScene.createNode("IS");
let connect77 = browser.currentScene.createNode("connect");
connect77.nodeField = "value_changed";
connect77.protoField = "vl5_rotation_changed";
IS76.connect = new MFNode();

IS76.connect[0] = connect77;

OrientationInterpolator75.iS = IS76;

Group32.children[12] = OrientationInterpolator75;

let OrientationInterpolator78 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator78.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator78.key = new MFFloat(new float[0,0.28,0.32,0.48,0.76,1]);
OrientationInterpolator78.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0]);
let IS79 = browser.currentScene.createNode("IS");
let connect80 = browser.currentScene.createNode("connect");
connect80.nodeField = "value_changed";
connect80.protoField = "skullbase_rotation_changed";
IS79.connect = new MFNode();

IS79.connect[0] = connect80;

OrientationInterpolator78.iS = IS79;

Group32.children[13] = OrientationInterpolator78;

let OrientationInterpolator81 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator81.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator81.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator81.keyValue = new MFRotation(new float[0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0]);
let IS82 = browser.currentScene.createNode("IS");
let connect83 = browser.currentScene.createNode("connect");
connect83.nodeField = "value_changed";
connect83.protoField = "l_shoulder_rotation_changed";
IS82.connect = new MFNode();

IS82.connect[0] = connect83;

OrientationInterpolator81.iS = IS82;

Group32.children[14] = OrientationInterpolator81;

let OrientationInterpolator84 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator84.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator84.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator84.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0]);
let IS85 = browser.currentScene.createNode("IS");
let connect86 = browser.currentScene.createNode("connect");
connect86.nodeField = "value_changed";
connect86.protoField = "l_elbow_rotation_changed";
IS85.connect = new MFNode();

IS85.connect[0] = connect86;

OrientationInterpolator84.iS = IS85;

Group32.children[15] = OrientationInterpolator84;

let OrientationInterpolator87 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator87.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator87.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator87.keyValue = new MFRotation(new float[0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0]);
let IS88 = browser.currentScene.createNode("IS");
let connect89 = browser.currentScene.createNode("connect");
connect89.nodeField = "value_changed";
connect89.protoField = "l_wrist_rotation_changed";
IS88.connect = new MFNode();

IS88.connect[0] = connect89;

OrientationInterpolator87.iS = IS88;

Group32.children[16] = OrientationInterpolator87;

let OrientationInterpolator90 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator90.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator90.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,0.88,1]);
OrientationInterpolator90.keyValue = new MFRotation(new float[0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
let IS91 = browser.currentScene.createNode("IS");
let connect92 = browser.currentScene.createNode("connect");
connect92.nodeField = "value_changed";
connect92.protoField = "r_shoulder_rotation_changed";
IS91.connect = new MFNode();

IS91.connect[0] = connect92;

OrientationInterpolator90.iS = IS91;

Group32.children[17] = OrientationInterpolator90;

let OrientationInterpolator93 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator93.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator93.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator93.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
let IS94 = browser.currentScene.createNode("IS");
let connect95 = browser.currentScene.createNode("connect");
connect95.nodeField = "value_changed";
connect95.protoField = "r_elbow_rotation_changed";
IS94.connect = new MFNode();

IS94.connect[0] = connect95;

OrientationInterpolator93.iS = IS94;

Group32.children[18] = OrientationInterpolator93;

let OrientationInterpolator96 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator96.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator96.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator96.keyValue = new MFRotation(new float[0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
let IS97 = browser.currentScene.createNode("IS");
let connect98 = browser.currentScene.createNode("connect");
connect98.nodeField = "value_changed";
connect98.protoField = "r_wrist_rotation_changed";
IS97.connect = new MFNode();

IS97.connect[0] = connect98;

OrientationInterpolator96.iS = IS97;

Group32.children[19] = OrientationInterpolator96;

ProtoBody31.children = new MFNode();

ProtoBody31.children[0] = Group32;

let ROUTE99 = browser.currentScene.createNode("ROUTE");
ROUTE99.fromField = "fraction_changed";
ROUTE99.fromNode = "TIMER";
ROUTE99.toField = "set_fraction";
ROUTE99.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ProtoBody31.children[1] = ROUTE99;

let ROUTE100 = browser.currentScene.createNode("ROUTE");
ROUTE100.fromField = "fraction_changed";
ROUTE100.fromNode = "TIMER";
ROUTE100.toField = "set_fraction";
ROUTE100.toNode = "HUMANOIDROOT_ANIMATOR";
ProtoBody31.children[2] = ROUTE100;

let ROUTE101 = browser.currentScene.createNode("ROUTE");
ROUTE101.fromField = "fraction_changed";
ROUTE101.fromNode = "TIMER";
ROUTE101.toField = "set_fraction";
ROUTE101.toNode = "SACROILIAC_ANIMATOR";
ProtoBody31.children[3] = ROUTE101;

let ROUTE102 = browser.currentScene.createNode("ROUTE");
ROUTE102.fromField = "fraction_changed";
ROUTE102.fromNode = "TIMER";
ROUTE102.toField = "set_fraction";
ROUTE102.toNode = "L_HIP_ANIMATOR";
ProtoBody31.children[4] = ROUTE102;

let ROUTE103 = browser.currentScene.createNode("ROUTE");
ROUTE103.fromField = "fraction_changed";
ROUTE103.fromNode = "TIMER";
ROUTE103.toField = "set_fraction";
ROUTE103.toNode = "L_KNEE_ANIMATOR";
ProtoBody31.children[5] = ROUTE103;

let ROUTE104 = browser.currentScene.createNode("ROUTE");
ROUTE104.fromField = "fraction_changed";
ROUTE104.fromNode = "TIMER";
ROUTE104.toField = "set_fraction";
ROUTE104.toNode = "L_ANKLE_ANIMATOR";
ProtoBody31.children[6] = ROUTE104;

let ROUTE105 = browser.currentScene.createNode("ROUTE");
ROUTE105.fromField = "fraction_changed";
ROUTE105.fromNode = "TIMER";
ROUTE105.toField = "set_fraction";
ROUTE105.toNode = "L_MIDTARSAL_ANIMATOR";
ProtoBody31.children[7] = ROUTE105;

let ROUTE106 = browser.currentScene.createNode("ROUTE");
ROUTE106.fromField = "fraction_changed";
ROUTE106.fromNode = "TIMER";
ROUTE106.toField = "set_fraction";
ROUTE106.toNode = "R_HIP_ANIMATOR";
ProtoBody31.children[8] = ROUTE106;

let ROUTE107 = browser.currentScene.createNode("ROUTE");
ROUTE107.fromField = "fraction_changed";
ROUTE107.fromNode = "TIMER";
ROUTE107.toField = "set_fraction";
ROUTE107.toNode = "R_KNEE_ANIMATOR";
ProtoBody31.children[9] = ROUTE107;

let ROUTE108 = browser.currentScene.createNode("ROUTE");
ROUTE108.fromField = "fraction_changed";
ROUTE108.fromNode = "TIMER";
ROUTE108.toField = "set_fraction";
ROUTE108.toNode = "R_ANKLE_ANIMATOR";
ProtoBody31.children[10] = ROUTE108;

let ROUTE109 = browser.currentScene.createNode("ROUTE");
ROUTE109.fromField = "fraction_changed";
ROUTE109.fromNode = "TIMER";
ROUTE109.toField = "set_fraction";
ROUTE109.toNode = "R_MIDTARSAL_ANIMATOR";
ProtoBody31.children[11] = ROUTE109;

let ROUTE110 = browser.currentScene.createNode("ROUTE");
ROUTE110.fromField = "fraction_changed";
ROUTE110.fromNode = "TIMER";
ROUTE110.toField = "set_fraction";
ROUTE110.toNode = "VL5_ANIMATOR";
ProtoBody31.children[12] = ROUTE110;

let ROUTE111 = browser.currentScene.createNode("ROUTE");
ROUTE111.fromField = "fraction_changed";
ROUTE111.fromNode = "TIMER";
ROUTE111.toField = "set_fraction";
ROUTE111.toNode = "SKULLBASE_ANIMATOR";
ProtoBody31.children[13] = ROUTE111;

let ROUTE112 = browser.currentScene.createNode("ROUTE");
ROUTE112.fromField = "fraction_changed";
ROUTE112.fromNode = "TIMER";
ROUTE112.toField = "set_fraction";
ROUTE112.toNode = "L_SHOULDER_ANIMATOR";
ProtoBody31.children[14] = ROUTE112;

let ROUTE113 = browser.currentScene.createNode("ROUTE");
ROUTE113.fromField = "fraction_changed";
ROUTE113.fromNode = "TIMER";
ROUTE113.toField = "set_fraction";
ROUTE113.toNode = "L_ELBOW_ANIMATOR";
ProtoBody31.children[15] = ROUTE113;

let ROUTE114 = browser.currentScene.createNode("ROUTE");
ROUTE114.fromField = "fraction_changed";
ROUTE114.fromNode = "TIMER";
ROUTE114.toField = "set_fraction";
ROUTE114.toNode = "L_WRIST_ANIMATOR";
ProtoBody31.children[16] = ROUTE114;

let ROUTE115 = browser.currentScene.createNode("ROUTE");
ROUTE115.fromField = "fraction_changed";
ROUTE115.fromNode = "TIMER";
ROUTE115.toField = "set_fraction";
ROUTE115.toNode = "R_SHOULDER_ANIMATOR";
ProtoBody31.children[17] = ROUTE115;

let ROUTE116 = browser.currentScene.createNode("ROUTE");
ROUTE116.fromField = "fraction_changed";
ROUTE116.fromNode = "TIMER";
ROUTE116.toField = "set_fraction";
ROUTE116.toNode = "R_ELBOW_ANIMATOR";
ProtoBody31.children[18] = ROUTE116;

let ROUTE117 = browser.currentScene.createNode("ROUTE");
ROUTE117.fromField = "fraction_changed";
ROUTE117.fromNode = "TIMER";
ROUTE117.toField = "set_fraction";
ROUTE117.toNode = "R_WRIST_ANIMATOR";
ProtoBody31.children[19] = ROUTE117;

ProtoDeclare3.protoBody = ProtoBody31;

browser.currentScene.children[1] = ProtoDeclare3;

let Anchor118 = browser.currentScene.createNode("Anchor");
Anchor118.description = "see InterchangableActorsViaDynamicRouting scene";
Anchor118.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor118.url = new MFString(new java.lang.String["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"]);
let Shape119 = browser.currentScene.createNode("Shape");
let Text120 = browser.currentScene.createNode("Text");
Text120.string = new MFString(new java.lang.String["LOA1_JumpAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."]);
let FontStyle121 = browser.currentScene.createNode("FontStyle");
FontStyle121.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle121.size = 0.8;
Text120.fontStyle = FontStyle121;

Shape119.geometry = Text120;

let Appearance122 = browser.currentScene.createNode("Appearance");
let Material123 = browser.currentScene.createNode("Material");
Material123.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance122.material = Material123;

Shape119.appearance = Appearance122;

Anchor118.children = new MFNode();

Anchor118.children[0] = Shape119;

browser.currentScene.children[2] = Anchor118;

