#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "LOA1_SwimmingFlutterKickAnimation.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Humanoid animation prototype reusable by any Humanoid.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Etsuko Lippi";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "created";
meta5.content = "13 December 2001";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "23 May 2020";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "warning";
meta7.content = "not yet tested, need to compare with NancyDivingExample interpolators";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "https://www.HAnim.org";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "https://HAnim.org/Models";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "https://HAnim.org/Nodes";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "subject";
meta11.content = "Swimming flutter kick Animation HAnim 2001";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "identifier";
meta12.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_SwimmingFlutterKickAnimation.x3d";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "generator";
meta13.content = "X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "license";
meta14.content = "../license.html";
head1.meta[12] = meta14;

head = head1;

WorldInfo WorldInfo16 = createNode("WorldInfo");
WorldInfo16.title = "LOA1_SwimmingFlutterKickAnimation.x3d";
children = new MFNode();

children[0] = WorldInfo16;

ProtoDeclare ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface ProtoInterface18 = createNode("ProtoInterface");
field field19 = createNode("field");
field19.name = "cycleInterval";
field19.accessType = "inputOutput";
field19.type = "SFTime";
field19.value = "7";
ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

field field20 = createNode("field");
field20.name = "enabled";
field20.accessType = "inputOutput";
field20.type = "SFBool";
field20.value = "true";
ProtoInterface18.field[1] = field20;

field field21 = createNode("field");
field21.name = "loop";
field21.accessType = "inputOutput";
field21.type = "SFBool";
field21.value = "true";
ProtoInterface18.field[2] = field21;

field field22 = createNode("field");
field22.name = "startTime";
field22.accessType = "inputOutput";
field22.type = "SFTime";
field22.value = "0";
ProtoInterface18.field[3] = field22;

field field23 = createNode("field");
field23.name = "stopTime";
field23.accessType = "inputOutput";
field23.type = "SFTime";
field23.value = "-1";
ProtoInterface18.field[4] = field23;

field field24 = createNode("field");
field24.name = "fraction_changed";
field24.accessType = "outputOnly";
field24.type = "SFFloat";
ProtoInterface18.field[5] = field24;

field field25 = createNode("field");
field25.name = "isActive";
field25.accessType = "outputOnly";
field25.type = "SFBool";
ProtoInterface18.field[6] = field25;

field field26 = createNode("field");
field26.name = "HumanoidRoot_translation_changed";
field26.accessType = "outputOnly";
field26.type = "SFVec3f";
ProtoInterface18.field[7] = field26;

field field27 = createNode("field");
field27.name = "HumanoidRoot_rotation_changed";
field27.accessType = "outputOnly";
field27.type = "SFRotation";
ProtoInterface18.field[8] = field27;

field field28 = createNode("field");
field28.name = "lower_body_rotation_changed";
field28.accessType = "outputOnly";
field28.type = "SFRotation";
ProtoInterface18.field[9] = field28;

field field29 = createNode("field");
field29.name = "l_hip_rotation_changed";
field29.accessType = "outputOnly";
field29.type = "SFRotation";
ProtoInterface18.field[10] = field29;

field field30 = createNode("field");
field30.name = "l_knee_rotation_changed";
field30.accessType = "outputOnly";
field30.type = "SFRotation";
ProtoInterface18.field[11] = field30;

field field31 = createNode("field");
field31.name = "l_ankle_rotation_changed";
field31.accessType = "outputOnly";
field31.type = "SFRotation";
ProtoInterface18.field[12] = field31;

field field32 = createNode("field");
field32.name = "l_midtarsal_rotation_changed";
field32.accessType = "outputOnly";
field32.type = "SFRotation";
ProtoInterface18.field[13] = field32;

field field33 = createNode("field");
field33.name = "r_hip_rotation_changed";
field33.accessType = "outputOnly";
field33.type = "SFRotation";
ProtoInterface18.field[14] = field33;

field field34 = createNode("field");
field34.name = "r_knee_rotation_changed";
field34.accessType = "outputOnly";
field34.type = "SFRotation";
ProtoInterface18.field[15] = field34;

field field35 = createNode("field");
field35.name = "r_ankle_rotation_changed";
field35.accessType = "outputOnly";
field35.type = "SFRotation";
ProtoInterface18.field[16] = field35;

field field36 = createNode("field");
field36.name = "r_midtarsal_rotation_changed";
field36.accessType = "outputOnly";
field36.type = "SFRotation";
ProtoInterface18.field[17] = field36;

field field37 = createNode("field");
field37.name = "vl5_rotation_changed";
field37.accessType = "outputOnly";
field37.type = "SFRotation";
ProtoInterface18.field[18] = field37;

field field38 = createNode("field");
field38.name = "skullbase_rotation_changed";
field38.accessType = "outputOnly";
field38.type = "SFRotation";
ProtoInterface18.field[19] = field38;

field field39 = createNode("field");
field39.name = "l_shoulder_rotation_changed";
field39.accessType = "outputOnly";
field39.type = "SFRotation";
ProtoInterface18.field[20] = field39;

field field40 = createNode("field");
field40.name = "l_elbow_rotation_changed";
field40.accessType = "outputOnly";
field40.type = "SFRotation";
ProtoInterface18.field[21] = field40;

field field41 = createNode("field");
field41.name = "l_wrist_rotation_changed";
field41.accessType = "outputOnly";
field41.type = "SFRotation";
ProtoInterface18.field[22] = field41;

field field42 = createNode("field");
field42.name = "r_shoulder_rotation_changed";
field42.accessType = "outputOnly";
field42.type = "SFRotation";
ProtoInterface18.field[23] = field42;

field field43 = createNode("field");
field43.name = "r_elbow_rotation_changed";
field43.accessType = "outputOnly";
field43.type = "SFRotation";
ProtoInterface18.field[24] = field43;

field field44 = createNode("field");
field44.name = "r_wrist_rotation_changed";
field44.accessType = "outputOnly";
field44.type = "SFRotation";
ProtoInterface18.field[25] = field44;

ProtoDeclare17.protoInterface = ProtoInterface18;

ProtoBody ProtoBody45 = createNode("ProtoBody");
Group Group46 = createNode("Group");
TimeSensor TimeSensor47 = createNode("TimeSensor");
TimeSensor47.DEF = "TIMER";
TimeSensor47.loop = True;
IS IS48 = createNode("IS");
connect connect49 = createNode("connect");
connect49.nodeField = "cycleInterval";
connect49.protoField = "cycleInterval";
IS48.connect = new MFNode();

IS48.connect[0] = connect49;

connect connect50 = createNode("connect");
connect50.nodeField = "enabled";
connect50.protoField = "enabled";
IS48.connect[1] = connect50;

connect connect51 = createNode("connect");
connect51.nodeField = "loop";
connect51.protoField = "loop";
IS48.connect[2] = connect51;

connect connect52 = createNode("connect");
connect52.nodeField = "startTime";
connect52.protoField = "startTime";
IS48.connect[3] = connect52;

connect connect53 = createNode("connect");
connect53.nodeField = "stopTime";
connect53.protoField = "stopTime";
IS48.connect[4] = connect53;

connect connect54 = createNode("connect");
connect54.nodeField = "fraction_changed";
connect54.protoField = "fraction_changed";
IS48.connect[5] = connect54;

connect connect55 = createNode("connect");
connect55.nodeField = "isActive";
connect55.protoField = "isActive";
IS48.connect[6] = connect55;

TimeSensor47.iS = IS48;

Group46.children = new MFNode();

Group46.children[0] = TimeSensor47;

PositionInterpolator PositionInterpolator56 = createNode("PositionInterpolator");
PositionInterpolator56.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator56.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator56.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
IS IS57 = createNode("IS");
connect connect58 = createNode("connect");
connect58.nodeField = "value_changed";
connect58.protoField = "HumanoidRoot_translation_changed";
IS57.connect = new MFNode();

IS57.connect[0] = connect58;

PositionInterpolator56.iS = IS57;

Group46.children[1] = PositionInterpolator56;

OrientationInterpolator OrientationInterpolator59 = createNode("OrientationInterpolator");
OrientationInterpolator59.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator59.key = new MFFloat(new float[0,1]);
OrientationInterpolator59.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS60 = createNode("IS");
connect connect61 = createNode("connect");
connect61.nodeField = "value_changed";
connect61.protoField = "HumanoidRoot_rotation_changed";
IS60.connect = new MFNode();

IS60.connect[0] = connect61;

OrientationInterpolator59.iS = IS60;

Group46.children[2] = OrientationInterpolator59;

//no SACROILIAC_ANIMATOR
OrientationInterpolator OrientationInterpolator62 = createNode("OrientationInterpolator");
OrientationInterpolator62.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator62.key = new MFFloat(new float[0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator62.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
IS IS63 = createNode("IS");
connect connect64 = createNode("connect");
connect64.nodeField = "value_changed";
connect64.protoField = "l_hip_rotation_changed";
IS63.connect = new MFNode();

IS63.connect[0] = connect64;

OrientationInterpolator62.iS = IS63;

Group46.children[3] = OrientationInterpolator62;

OrientationInterpolator OrientationInterpolator65 = createNode("OrientationInterpolator");
OrientationInterpolator65.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator65.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator65.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
IS IS66 = createNode("IS");
connect connect67 = createNode("connect");
connect67.nodeField = "value_changed";
connect67.protoField = "l_knee_rotation_changed";
IS66.connect = new MFNode();

IS66.connect[0] = connect67;

OrientationInterpolator65.iS = IS66;

Group46.children[4] = OrientationInterpolator65;

OrientationInterpolator OrientationInterpolator68 = createNode("OrientationInterpolator");
OrientationInterpolator68.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator68.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator68.keyValue = new MFRotation(new float[1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001]);
IS IS69 = createNode("IS");
connect connect70 = createNode("connect");
connect70.nodeField = "value_changed";
connect70.protoField = "l_ankle_rotation_changed";
IS69.connect = new MFNode();

IS69.connect[0] = connect70;

OrientationInterpolator68.iS = IS69;

Group46.children[5] = OrientationInterpolator68;

//no L_MIDTARSAL_ANIMATOR
OrientationInterpolator OrientationInterpolator71 = createNode("OrientationInterpolator");
OrientationInterpolator71.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator71.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1]);
OrientationInterpolator71.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9131,-0.06243,-0.403,0.3361,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
IS IS72 = createNode("IS");
connect connect73 = createNode("connect");
connect73.nodeField = "value_changed";
connect73.protoField = "r_hip_rotation_changed";
IS72.connect = new MFNode();

IS72.connect[0] = connect73;

OrientationInterpolator71.iS = IS72;

Group46.children[6] = OrientationInterpolator71;

OrientationInterpolator OrientationInterpolator74 = createNode("OrientationInterpolator");
OrientationInterpolator74.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator74.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1]);
OrientationInterpolator74.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.8573]);
IS IS75 = createNode("IS");
connect connect76 = createNode("connect");
connect76.nodeField = "value_changed";
connect76.protoField = "r_knee_rotation_changed";
IS75.connect = new MFNode();

IS75.connect[0] = connect76;

OrientationInterpolator74.iS = IS75;

Group46.children[7] = OrientationInterpolator74;

OrientationInterpolator OrientationInterpolator77 = createNode("OrientationInterpolator");
OrientationInterpolator77.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator77.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator77.keyValue = new MFRotation(new float[1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.86001]);
IS IS78 = createNode("IS");
connect connect79 = createNode("connect");
connect79.nodeField = "value_changed";
connect79.protoField = "r_ankle_rotation_changed";
IS78.connect = new MFNode();

IS78.connect[0] = connect79;

OrientationInterpolator77.iS = IS78;

Group46.children[8] = OrientationInterpolator77;

//no L_MIDTARSAL_ANIMATOR
OrientationInterpolator OrientationInterpolator80 = createNode("OrientationInterpolator");
OrientationInterpolator80.DEF = "VL5_ANIMATOR";
OrientationInterpolator80.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator80.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
IS IS81 = createNode("IS");
connect connect82 = createNode("connect");
connect82.nodeField = "value_changed";
connect82.protoField = "vl5_rotation_changed";
IS81.connect = new MFNode();

IS81.connect[0] = connect82;

OrientationInterpolator80.iS = IS81;

Group46.children[9] = OrientationInterpolator80;

OrientationInterpolator OrientationInterpolator83 = createNode("OrientationInterpolator");
OrientationInterpolator83.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator83.key = new MFFloat(new float[0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1]);
OrientationInterpolator83.keyValue = new MFRotation(new float[-1,0,0,1,-1,0,0,1,-1,0,0,0.999,-1,0,0,0.99,-1,0,0,0.99,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,1]);
IS IS84 = createNode("IS");
connect connect85 = createNode("connect");
connect85.nodeField = "value_changed";
connect85.protoField = "skullbase_rotation_changed";
IS84.connect = new MFNode();

IS84.connect[0] = connect85;

OrientationInterpolator83.iS = IS84;

Group46.children[10] = OrientationInterpolator83;

OrientationInterpolator OrientationInterpolator86 = createNode("OrientationInterpolator");
OrientationInterpolator86.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator86.key = new MFFloat(new float[0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator86.keyValue = new MFRotation(new float[0,0,1,0.1,0,0,1,0.2,0,0,1,0.2,0.86,0.25,0.42,0.5,0.86,0.25,0.42,0.8,0.86,0.25,0.42,0.4,0.86,0.25,0.42,0.2]);
IS IS87 = createNode("IS");
connect connect88 = createNode("connect");
connect88.nodeField = "value_changed";
connect88.protoField = "l_shoulder_rotation_changed";
IS87.connect = new MFNode();

IS87.connect[0] = connect88;

OrientationInterpolator86.iS = IS87;

Group46.children[11] = OrientationInterpolator86;

OrientationInterpolator OrientationInterpolator89 = createNode("OrientationInterpolator");
OrientationInterpolator89.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator89.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator89.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0]);
IS IS90 = createNode("IS");
connect connect91 = createNode("connect");
connect91.nodeField = "value_changed";
connect91.protoField = "l_elbow_rotation_changed";
IS90.connect = new MFNode();

IS90.connect[0] = connect91;

OrientationInterpolator89.iS = IS90;

Group46.children[12] = OrientationInterpolator89;

OrientationInterpolator OrientationInterpolator92 = createNode("OrientationInterpolator");
OrientationInterpolator92.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator92.key = new MFFloat(new float[0,0.32,0.64,0.88,1]);
OrientationInterpolator92.keyValue = new MFRotation(new float[0,0,1,0,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0,0,1,0]);
IS IS93 = createNode("IS");
connect connect94 = createNode("connect");
connect94.nodeField = "value_changed";
connect94.protoField = "l_wrist_rotation_changed";
IS93.connect = new MFNode();

IS93.connect[0] = connect94;

OrientationInterpolator92.iS = IS93;

Group46.children[13] = OrientationInterpolator92;

OrientationInterpolator OrientationInterpolator95 = createNode("OrientationInterpolator");
OrientationInterpolator95.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator95.key = new MFFloat(new float[0,0.45,0.64,0.76,0.88,1]);
OrientationInterpolator95.keyValue = new MFRotation(new float[0,0,1,0,0.9992,0.02042,0.03558,7.2,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
IS IS96 = createNode("IS");
connect connect97 = createNode("connect");
connect97.nodeField = "value_changed";
connect97.protoField = "r_shoulder_rotation_changed";
IS96.connect = new MFNode();

IS96.connect[0] = connect97;

OrientationInterpolator95.iS = IS96;

Group46.children[14] = OrientationInterpolator95;

OrientationInterpolator OrientationInterpolator98 = createNode("OrientationInterpolator");
OrientationInterpolator98.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator98.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator98.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
IS IS99 = createNode("IS");
connect connect100 = createNode("connect");
connect100.nodeField = "value_changed";
connect100.protoField = "r_elbow_rotation_changed";
IS99.connect = new MFNode();

IS99.connect[0] = connect100;

OrientationInterpolator98.iS = IS99;

Group46.children[15] = OrientationInterpolator98;

OrientationInterpolator OrientationInterpolator101 = createNode("OrientationInterpolator");
OrientationInterpolator101.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator101.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator101.keyValue = new MFRotation(new float[0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
IS IS102 = createNode("IS");
connect connect103 = createNode("connect");
connect103.nodeField = "value_changed";
connect103.protoField = "r_wrist_rotation_changed";
IS102.connect = new MFNode();

IS102.connect[0] = connect103;

OrientationInterpolator101.iS = IS102;

Group46.children[16] = OrientationInterpolator101;

ProtoBody45.children = new MFNode();

ProtoBody45.children[0] = Group46;

ROUTE ROUTE104 = createNode("ROUTE");
ROUTE104.fromField = "fraction_changed";
ROUTE104.fromNode = "TIMER";
ROUTE104.toField = "set_fraction";
ROUTE104.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ProtoBody45.children[1] = ROUTE104;

ROUTE ROUTE105 = createNode("ROUTE");
ROUTE105.fromField = "fraction_changed";
ROUTE105.fromNode = "TIMER";
ROUTE105.toField = "set_fraction";
ROUTE105.toNode = "HUMANOIDROOT_ANIMATOR";
ProtoBody45.children[2] = ROUTE105;

ROUTE ROUTE106 = createNode("ROUTE");
ROUTE106.fromField = "fraction_changed";
ROUTE106.fromNode = "TIMER";
ROUTE106.toField = "set_fraction";
ROUTE106.toNode = "SKULLBASE_ANIMATOR";
ProtoBody45.children[3] = ROUTE106;

ROUTE ROUTE107 = createNode("ROUTE");
ROUTE107.fromField = "fraction_changed";
ROUTE107.fromNode = "TIMER";
ROUTE107.toField = "set_fraction";
ROUTE107.toNode = "VL5_ANIMATOR";
ProtoBody45.children[4] = ROUTE107;

ROUTE ROUTE108 = createNode("ROUTE");
ROUTE108.fromField = "fraction_changed";
ROUTE108.fromNode = "TIMER";
ROUTE108.toField = "set_fraction";
ROUTE108.toNode = "L_HIP_ANIMATOR";
ProtoBody45.children[5] = ROUTE108;

ROUTE ROUTE109 = createNode("ROUTE");
ROUTE109.fromField = "fraction_changed";
ROUTE109.fromNode = "TIMER";
ROUTE109.toField = "set_fraction";
ROUTE109.toNode = "L_KNEE_ANIMATOR";
ProtoBody45.children[6] = ROUTE109;

ROUTE ROUTE110 = createNode("ROUTE");
ROUTE110.fromField = "fraction_changed";
ROUTE110.fromNode = "TIMER";
ROUTE110.toField = "set_fraction";
ROUTE110.toNode = "L_ANKLE_ANIMATOR";
ProtoBody45.children[7] = ROUTE110;

ROUTE ROUTE111 = createNode("ROUTE");
ROUTE111.fromField = "fraction_changed";
ROUTE111.fromNode = "TIMER";
ROUTE111.toField = "set_fraction";
ROUTE111.toNode = "R_HIP_ANIMATOR";
ProtoBody45.children[8] = ROUTE111;

ROUTE ROUTE112 = createNode("ROUTE");
ROUTE112.fromField = "fraction_changed";
ROUTE112.fromNode = "TIMER";
ROUTE112.toField = "set_fraction";
ROUTE112.toNode = "R_KNEE_ANIMATOR";
ProtoBody45.children[9] = ROUTE112;

ROUTE ROUTE113 = createNode("ROUTE");
ROUTE113.fromField = "fraction_changed";
ROUTE113.fromNode = "TIMER";
ROUTE113.toField = "set_fraction";
ROUTE113.toNode = "R_ANKLE_ANIMATOR";
ProtoBody45.children[10] = ROUTE113;

ROUTE ROUTE114 = createNode("ROUTE");
ROUTE114.fromField = "fraction_changed";
ROUTE114.fromNode = "TIMER";
ROUTE114.toField = "set_fraction";
ROUTE114.toNode = "L_SHOULDER_ANIMATOR";
ProtoBody45.children[11] = ROUTE114;

ROUTE ROUTE115 = createNode("ROUTE");
ROUTE115.fromField = "fraction_changed";
ROUTE115.fromNode = "TIMER";
ROUTE115.toField = "set_fraction";
ROUTE115.toNode = "L_ELBOW_ANIMATOR";
ProtoBody45.children[12] = ROUTE115;

ROUTE ROUTE116 = createNode("ROUTE");
ROUTE116.fromField = "fraction_changed";
ROUTE116.fromNode = "TIMER";
ROUTE116.toField = "set_fraction";
ROUTE116.toNode = "L_WRIST_ANIMATOR";
ProtoBody45.children[13] = ROUTE116;

ROUTE ROUTE117 = createNode("ROUTE");
ROUTE117.fromField = "fraction_changed";
ROUTE117.fromNode = "TIMER";
ROUTE117.toField = "set_fraction";
ROUTE117.toNode = "R_SHOULDER_ANIMATOR";
ProtoBody45.children[14] = ROUTE117;

ROUTE ROUTE118 = createNode("ROUTE");
ROUTE118.fromField = "fraction_changed";
ROUTE118.fromNode = "TIMER";
ROUTE118.toField = "set_fraction";
ROUTE118.toNode = "R_ELBOW_ANIMATOR";
ProtoBody45.children[15] = ROUTE118;

ROUTE ROUTE119 = createNode("ROUTE");
ROUTE119.fromField = "fraction_changed";
ROUTE119.fromNode = "TIMER";
ROUTE119.toField = "set_fraction";
ROUTE119.toNode = "R_WRIST_ANIMATOR";
ProtoBody45.children[16] = ROUTE119;

ProtoDeclare17.protoBody = ProtoBody45;

children[1] = ProtoDeclare17;

Viewpoint Viewpoint120 = createNode("Viewpoint");
Viewpoint120.description = "LOA1_SwimmingFlutterKickAnimation scene";
Viewpoint120.position = new SFVec3f(new float[0,0,12]);
children[2] = Viewpoint120;

Anchor Anchor121 = createNode("Anchor");
Anchor121.description = "Nancy Diving";
Anchor121.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor121.url = new MFString(new java.lang.String["NancyDiving.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.x3d","NancyDiving.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.wrl"]);
Shape Shape122 = createNode("Shape");
Text Text123 = createNode("Text");
Text123.string = new MFString(new java.lang.String["LOA1_SwimmingFlutterKickAnimation.x3d","defines a prototype","for animating a humanoid.","","Click text to see example."]);
FontStyle FontStyle124 = createNode("FontStyle");
FontStyle124.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle124.size = 0.8;
Text123.fontStyle = FontStyle124;

Shape122.geometry = Text123;

Appearance Appearance125 = createNode("Appearance");
Material Material126 = createNode("Material");
Material126.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance125.material = Material126;

Shape122.appearance = Appearance125;

Anchor121.children = new MFNode();

Anchor121.children[0] = Shape122;

children[3] = Anchor121;

}
