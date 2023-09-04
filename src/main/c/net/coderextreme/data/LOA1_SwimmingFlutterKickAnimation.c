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
meta8.content = "http://www.HAnim.org";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "http://HAnim.org/Models";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "http://HAnim.org/Nodes";
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

head = head1;

ProtoDeclare ProtoDeclare15 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="LOA1_DivingAnimation" ><ProtoInterface><field accessType="inputOutput" type="SFTime" name="cycleInterval" value="7"></field>
<field accessType="inputOutput" type="SFBool" name="enabled" value="true"></field>
<field accessType="inputOutput" type="SFBool" name="loop" value="true"></field>
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
<PositionInterpolator DEF="HUMANOIDROOT_POSITION_ANIMATOR" key="0 0.04167 0.125 0.1667 0.2083 0.25 0.2917 0.375 0.4583 0.5 0.5417 0.5833 0.625 0.7083 0.75 0.7917 0.875 0.9167 1" keyValue="0 -0.00928 0 0 -0.003858 0 0 -0.008847 0 0 -0.01486 0 0 -0.02641 0 0 -0.03934 0 0 -0.0502 0 0 -0.07469 0 0 -0.02732 0 0 -0.01608 0 0 -0.01129 0 0 -0.005819 0 0 -0.002004 0 0 -0.002579 0 0 -0.0143 0 0 -0.03799 0 0 -0.05648 0 0 -0.045 0 0 -0.00928 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_translation_changed"></connect>
</IS>
</PositionInterpolator>
<OrientationInterpolator DEF="HUMANOIDROOT_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_HIP_ANIMATOR" key="0 0.25 0.375 0.6667 0.7917 0.9167 1" keyValue="-0.873 0.06094 0.484 0.2865 0.9963 -0.01057 0.08481 0.2488 0.9965 0.01591 -0.08222 0.3836 -1 0 0 0.5518 -0.9964 0.02231 0.0817 0.5351 -0.9809 0.04912 0.1881 0.5204 -0.873 0.06094 0.484 0.2865"><IS><connect nodeField="value_changed" protoField="l_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_KNEE_ANIMATOR" key="0 0.2083 0.375 0.5 0.6667 0.7917 0.9167 1" keyValue="1 0 0 0.3226 1 0 0 0.1556 1 0 0 0.08678 1 0 0 0.8751 1 0 0 1.131 1 0 0 0.09961 1 0 0 0.3942 1 0 0 0.3226"><IS><connect nodeField="value_changed" protoField="l_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ANKLE_ANIMATOR" key="0 0.125 0.2083 0.375 0.4583 0.5 0.6667 0.75 0.7917 0.9167 1" keyValue="1 0 0 0.6001 1 0 0 0.6509 1 0 0 0.6001 1 0 0 0.6001 1 0 0 0.6509 1 0 0 0.6001 1 0 0 0.6001 1 0 0 0.6509 1 0 0 0.6001 1 0 0 0.6509 1 0 0 0.6001"><IS><connect nodeField="value_changed" protoField="l_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_HIP_ANIMATOR" key="0 0.125 0.2083 0.2917 0.5 0.7917 0.9167 1" keyValue="-0.5831 0.03511 0.8116 0.1481 -0.995 0.02296 0.09674 0.4683 -1 0.00192 0.007964 0.4732 -0.998 -0.0158 -0.06102 0.5079 -0.9131 -0.06243 -0.403 0.3361 1 0 0 0.2571 0.9891 -0.02805 0.1444 0.3879 -0.5831 0.03511 0.8116 0.1481"><IS><connect nodeField="value_changed" protoField="r_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_KNEE_ANIMATOR" key="0 0.125 0.2083 0.375 0.5 0.6667 0.9167 1" keyValue="1 0 0 0.8573 1 0 0 0.5351 1 0 0 0.1756 1 0 0 0.1194 1 0 0 0.3153 1 0 0 0.09354 1 0 0 0.08558 1 0 0 0.8573"><IS><connect nodeField="value_changed" protoField="r_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ANKLE_ANIMATOR" key="0 0.125 0.2083 0.375 0.4583 0.5 0.6667 0.75 0.7917 0.9167 1" keyValue="1 0 0 0.8001 1 0 0 0.8509 1 0 0 0.8001 1 0 0 0.8001 1 0 0 0.8509 1 0 0 0.8001 1 0 0 0.8001 1 0 0 0.8001 1 0 0 0.8001 1 0 0 0.8509 1 0 0 0.86001"><IS><connect nodeField="value_changed" protoField="r_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="VL5_ANIMATOR" key="0 0.2083 0.375 0.75 0.8333 1" keyValue="0 1 0 0.0826 -0.01972 -0.5974 0.8017 0.08231 0.009296 -0.9648 0.2627 0.1734 -0.01238 0.9549 -0.2968 0.08732 -0.008125 0.9691 -0.2463 0.158 0 1 0 0.0826"><IS><connect nodeField="value_changed" protoField="vl5_rotation_changed"></connect>
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
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="HUMANOIDROOT_POSITION_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="HUMANOIDROOT_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="SKULLBASE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="VL5_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_HIP_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_KNEE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_ANKLE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_HIP_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_KNEE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_ANKLE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_SHOULDER_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_ELBOW_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_WRIST_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_SHOULDER_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_ELBOW_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_WRIST_ANIMATOR" toField="set_fraction"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare15.name = "LOA1_DivingAnimation";
ProtoInterface ProtoInterface16 = createNode("ProtoInterface");
field field17 = createNode("field");
field17.accessType = "inputOutput";
field17.type = "SFTime";
field17.name = "cycleInterval";
field17.value = "7";
ProtoInterface16.field = new MFNode();

ProtoInterface16.field[0] = field17;

field field18 = createNode("field");
field18.accessType = "inputOutput";
field18.type = "SFBool";
field18.name = "enabled";
field18.value = "true";
ProtoInterface16.field[1] = field18;

field field19 = createNode("field");
field19.accessType = "inputOutput";
field19.type = "SFBool";
field19.name = "loop";
field19.value = "true";
ProtoInterface16.field[2] = field19;

field field20 = createNode("field");
field20.accessType = "inputOutput";
field20.type = "SFTime";
field20.name = "startTime";
ProtoInterface16.field[3] = field20;

field field21 = createNode("field");
field21.accessType = "inputOutput";
field21.type = "SFTime";
field21.name = "stopTime";
field21.value = "-1";
ProtoInterface16.field[4] = field21;

field field22 = createNode("field");
field22.accessType = "outputOnly";
field22.type = "SFFloat";
field22.name = "fraction_changed";
ProtoInterface16.field[5] = field22;

field field23 = createNode("field");
field23.accessType = "outputOnly";
field23.type = "SFBool";
field23.name = "isActive";
ProtoInterface16.field[6] = field23;

field field24 = createNode("field");
field24.accessType = "outputOnly";
field24.type = "SFVec3f";
field24.name = "HumanoidRoot_translation_changed";
ProtoInterface16.field[7] = field24;

field field25 = createNode("field");
field25.accessType = "outputOnly";
field25.type = "SFRotation";
field25.name = "HumanoidRoot_rotation_changed";
ProtoInterface16.field[8] = field25;

field field26 = createNode("field");
field26.accessType = "outputOnly";
field26.type = "SFRotation";
field26.name = "lower_body_rotation_changed";
ProtoInterface16.field[9] = field26;

field field27 = createNode("field");
field27.accessType = "outputOnly";
field27.type = "SFRotation";
field27.name = "l_hip_rotation_changed";
ProtoInterface16.field[10] = field27;

field field28 = createNode("field");
field28.accessType = "outputOnly";
field28.type = "SFRotation";
field28.name = "l_knee_rotation_changed";
ProtoInterface16.field[11] = field28;

field field29 = createNode("field");
field29.accessType = "outputOnly";
field29.type = "SFRotation";
field29.name = "l_ankle_rotation_changed";
ProtoInterface16.field[12] = field29;

field field30 = createNode("field");
field30.accessType = "outputOnly";
field30.type = "SFRotation";
field30.name = "l_midtarsal_rotation_changed";
ProtoInterface16.field[13] = field30;

field field31 = createNode("field");
field31.accessType = "outputOnly";
field31.type = "SFRotation";
field31.name = "r_hip_rotation_changed";
ProtoInterface16.field[14] = field31;

field field32 = createNode("field");
field32.accessType = "outputOnly";
field32.type = "SFRotation";
field32.name = "r_knee_rotation_changed";
ProtoInterface16.field[15] = field32;

field field33 = createNode("field");
field33.accessType = "outputOnly";
field33.type = "SFRotation";
field33.name = "r_ankle_rotation_changed";
ProtoInterface16.field[16] = field33;

field field34 = createNode("field");
field34.accessType = "outputOnly";
field34.type = "SFRotation";
field34.name = "r_midtarsal_rotation_changed";
ProtoInterface16.field[17] = field34;

field field35 = createNode("field");
field35.accessType = "outputOnly";
field35.type = "SFRotation";
field35.name = "vl5_rotation_changed";
ProtoInterface16.field[18] = field35;

field field36 = createNode("field");
field36.accessType = "outputOnly";
field36.type = "SFRotation";
field36.name = "skullbase_rotation_changed";
ProtoInterface16.field[19] = field36;

field field37 = createNode("field");
field37.accessType = "outputOnly";
field37.type = "SFRotation";
field37.name = "l_shoulder_rotation_changed";
ProtoInterface16.field[20] = field37;

field field38 = createNode("field");
field38.accessType = "outputOnly";
field38.type = "SFRotation";
field38.name = "l_elbow_rotation_changed";
ProtoInterface16.field[21] = field38;

field field39 = createNode("field");
field39.accessType = "outputOnly";
field39.type = "SFRotation";
field39.name = "l_wrist_rotation_changed";
ProtoInterface16.field[22] = field39;

field field40 = createNode("field");
field40.accessType = "outputOnly";
field40.type = "SFRotation";
field40.name = "r_shoulder_rotation_changed";
ProtoInterface16.field[23] = field40;

field field41 = createNode("field");
field41.accessType = "outputOnly";
field41.type = "SFRotation";
field41.name = "r_elbow_rotation_changed";
ProtoInterface16.field[24] = field41;

field field42 = createNode("field");
field42.accessType = "outputOnly";
field42.type = "SFRotation";
field42.name = "r_wrist_rotation_changed";
ProtoInterface16.field[25] = field42;

ProtoDeclare15.protoInterface = ProtoInterface16;

ProtoBody ProtoBody43 = createNode("ProtoBody");
Group Group44 = createNode("Group");
TimeSensor TimeSensor45 = createNode("TimeSensor");
TimeSensor45.DEF = "TIMER";
IS IS46 = createNode("IS");
connect connect47 = createNode("connect");
connect47.nodeField = "enabled";
connect47.protoField = "enabled";
IS46.connect = new MFNode();

IS46.connect[0] = connect47;

connect connect48 = createNode("connect");
connect48.nodeField = "cycleInterval";
connect48.protoField = "cycleInterval";
IS46.connect[1] = connect48;

connect connect49 = createNode("connect");
connect49.nodeField = "loop";
connect49.protoField = "loop";
IS46.connect[2] = connect49;

connect connect50 = createNode("connect");
connect50.nodeField = "startTime";
connect50.protoField = "startTime";
IS46.connect[3] = connect50;

connect connect51 = createNode("connect");
connect51.nodeField = "stopTime";
connect51.protoField = "stopTime";
IS46.connect[4] = connect51;

connect connect52 = createNode("connect");
connect52.nodeField = "isActive";
connect52.protoField = "isActive";
IS46.connect[5] = connect52;

connect connect53 = createNode("connect");
connect53.nodeField = "fraction_changed";
connect53.protoField = "fraction_changed";
IS46.connect[6] = connect53;

TimeSensor45.iS = IS46;

Group44.children = new MFNode();

Group44.children[0] = TimeSensor45;

PositionInterpolator PositionInterpolator54 = createNode("PositionInterpolator");
PositionInterpolator54.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator54.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator54.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
IS IS55 = createNode("IS");
connect connect56 = createNode("connect");
connect56.nodeField = "value_changed";
connect56.protoField = "HumanoidRoot_translation_changed";
IS55.connect = new MFNode();

IS55.connect[0] = connect56;

PositionInterpolator54.iS = IS55;

Group44.children[1] = PositionInterpolator54;

OrientationInterpolator OrientationInterpolator57 = createNode("OrientationInterpolator");
OrientationInterpolator57.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator57.key = new MFFloat(new float[0,1]);
OrientationInterpolator57.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS58 = createNode("IS");
connect connect59 = createNode("connect");
connect59.nodeField = "value_changed";
connect59.protoField = "HumanoidRoot_rotation_changed";
IS58.connect = new MFNode();

IS58.connect[0] = connect59;

OrientationInterpolator57.iS = IS58;

Group44.children[2] = OrientationInterpolator57;

OrientationInterpolator OrientationInterpolator60 = createNode("OrientationInterpolator");
OrientationInterpolator60.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator60.key = new MFFloat(new float[0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator60.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
IS IS61 = createNode("IS");
connect connect62 = createNode("connect");
connect62.nodeField = "value_changed";
connect62.protoField = "l_hip_rotation_changed";
IS61.connect = new MFNode();

IS61.connect[0] = connect62;

OrientationInterpolator60.iS = IS61;

Group44.children[3] = OrientationInterpolator60;

OrientationInterpolator OrientationInterpolator63 = createNode("OrientationInterpolator");
OrientationInterpolator63.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator63.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator63.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
IS IS64 = createNode("IS");
connect connect65 = createNode("connect");
connect65.nodeField = "value_changed";
connect65.protoField = "l_knee_rotation_changed";
IS64.connect = new MFNode();

IS64.connect[0] = connect65;

OrientationInterpolator63.iS = IS64;

Group44.children[4] = OrientationInterpolator63;

OrientationInterpolator OrientationInterpolator66 = createNode("OrientationInterpolator");
OrientationInterpolator66.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator66.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator66.keyValue = new MFRotation(new float[1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001]);
IS IS67 = createNode("IS");
connect connect68 = createNode("connect");
connect68.nodeField = "value_changed";
connect68.protoField = "l_ankle_rotation_changed";
IS67.connect = new MFNode();

IS67.connect[0] = connect68;

OrientationInterpolator66.iS = IS67;

Group44.children[5] = OrientationInterpolator66;

OrientationInterpolator OrientationInterpolator69 = createNode("OrientationInterpolator");
OrientationInterpolator69.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator69.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1]);
OrientationInterpolator69.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9131,-0.06243,-0.403,0.3361,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
IS IS70 = createNode("IS");
connect connect71 = createNode("connect");
connect71.nodeField = "value_changed";
connect71.protoField = "r_hip_rotation_changed";
IS70.connect = new MFNode();

IS70.connect[0] = connect71;

OrientationInterpolator69.iS = IS70;

Group44.children[6] = OrientationInterpolator69;

OrientationInterpolator OrientationInterpolator72 = createNode("OrientationInterpolator");
OrientationInterpolator72.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator72.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1]);
OrientationInterpolator72.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.8573]);
IS IS73 = createNode("IS");
connect connect74 = createNode("connect");
connect74.nodeField = "value_changed";
connect74.protoField = "r_knee_rotation_changed";
IS73.connect = new MFNode();

IS73.connect[0] = connect74;

OrientationInterpolator72.iS = IS73;

Group44.children[7] = OrientationInterpolator72;

OrientationInterpolator OrientationInterpolator75 = createNode("OrientationInterpolator");
OrientationInterpolator75.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator75.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator75.keyValue = new MFRotation(new float[1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.86001]);
IS IS76 = createNode("IS");
connect connect77 = createNode("connect");
connect77.nodeField = "value_changed";
connect77.protoField = "r_ankle_rotation_changed";
IS76.connect = new MFNode();

IS76.connect[0] = connect77;

OrientationInterpolator75.iS = IS76;

Group44.children[8] = OrientationInterpolator75;

OrientationInterpolator OrientationInterpolator78 = createNode("OrientationInterpolator");
OrientationInterpolator78.DEF = "VL5_ANIMATOR";
OrientationInterpolator78.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator78.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
IS IS79 = createNode("IS");
connect connect80 = createNode("connect");
connect80.nodeField = "value_changed";
connect80.protoField = "vl5_rotation_changed";
IS79.connect = new MFNode();

IS79.connect[0] = connect80;

OrientationInterpolator78.iS = IS79;

Group44.children[9] = OrientationInterpolator78;

OrientationInterpolator OrientationInterpolator81 = createNode("OrientationInterpolator");
OrientationInterpolator81.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator81.key = new MFFloat(new float[0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1]);
OrientationInterpolator81.keyValue = new MFRotation(new float[-1,0,0,1,-1,0,0,1,-1,0,0,0.999,-1,0,0,0.99,-1,0,0,0.99,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,1]);
IS IS82 = createNode("IS");
connect connect83 = createNode("connect");
connect83.nodeField = "value_changed";
connect83.protoField = "skullbase_rotation_changed";
IS82.connect = new MFNode();

IS82.connect[0] = connect83;

OrientationInterpolator81.iS = IS82;

Group44.children[10] = OrientationInterpolator81;

OrientationInterpolator OrientationInterpolator84 = createNode("OrientationInterpolator");
OrientationInterpolator84.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator84.key = new MFFloat(new float[0,0.25,0.375,0.6667,0.7917,0.9167,1]);
OrientationInterpolator84.keyValue = new MFRotation(new float[0,0,1,0.1,0,0,1,0.2,0,0,1,0.2,0.86,0.25,0.42,0.5,0.86,0.25,0.42,0.8,0.86,0.25,0.42,0.4,0.86,0.25,0.42,0.2]);
IS IS85 = createNode("IS");
connect connect86 = createNode("connect");
connect86.nodeField = "value_changed";
connect86.protoField = "l_shoulder_rotation_changed";
IS85.connect = new MFNode();

IS85.connect[0] = connect86;

OrientationInterpolator84.iS = IS85;

Group44.children[11] = OrientationInterpolator84;

OrientationInterpolator OrientationInterpolator87 = createNode("OrientationInterpolator");
OrientationInterpolator87.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator87.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator87.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0]);
IS IS88 = createNode("IS");
connect connect89 = createNode("connect");
connect89.nodeField = "value_changed";
connect89.protoField = "l_elbow_rotation_changed";
IS88.connect = new MFNode();

IS88.connect[0] = connect89;

OrientationInterpolator87.iS = IS88;

Group44.children[12] = OrientationInterpolator87;

OrientationInterpolator OrientationInterpolator90 = createNode("OrientationInterpolator");
OrientationInterpolator90.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator90.key = new MFFloat(new float[0,0.32,0.64,0.88,1]);
OrientationInterpolator90.keyValue = new MFRotation(new float[0,0,1,0,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0,0,1,0]);
IS IS91 = createNode("IS");
connect connect92 = createNode("connect");
connect92.nodeField = "value_changed";
connect92.protoField = "l_wrist_rotation_changed";
IS91.connect = new MFNode();

IS91.connect[0] = connect92;

OrientationInterpolator90.iS = IS91;

Group44.children[13] = OrientationInterpolator90;

OrientationInterpolator OrientationInterpolator93 = createNode("OrientationInterpolator");
OrientationInterpolator93.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator93.key = new MFFloat(new float[0,0.45,0.64,0.76,0.88,1]);
OrientationInterpolator93.keyValue = new MFRotation(new float[0,0,1,0,0.9992,0.02042,0.03558,7.2,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]);
IS IS94 = createNode("IS");
connect connect95 = createNode("connect");
connect95.nodeField = "value_changed";
connect95.protoField = "r_shoulder_rotation_changed";
IS94.connect = new MFNode();

IS94.connect[0] = connect95;

OrientationInterpolator93.iS = IS94;

Group44.children[14] = OrientationInterpolator93;

OrientationInterpolator OrientationInterpolator96 = createNode("OrientationInterpolator");
OrientationInterpolator96.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator96.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator96.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]);
IS IS97 = createNode("IS");
connect connect98 = createNode("connect");
connect98.nodeField = "value_changed";
connect98.protoField = "r_elbow_rotation_changed";
IS97.connect = new MFNode();

IS97.connect[0] = connect98;

OrientationInterpolator96.iS = IS97;

Group44.children[15] = OrientationInterpolator96;

OrientationInterpolator OrientationInterpolator99 = createNode("OrientationInterpolator");
OrientationInterpolator99.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator99.key = new MFFloat(new float[0,0.28,0.32,0.64,0.76,1]);
OrientationInterpolator99.keyValue = new MFRotation(new float[0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]);
IS IS100 = createNode("IS");
connect connect101 = createNode("connect");
connect101.nodeField = "value_changed";
connect101.protoField = "r_wrist_rotation_changed";
IS100.connect = new MFNode();

IS100.connect[0] = connect101;

OrientationInterpolator99.iS = IS100;

Group44.children[16] = OrientationInterpolator99;

ProtoBody43.children = new MFNode();

ProtoBody43.children[0] = Group44;

ROUTE ROUTE102 = createNode("ROUTE");
ROUTE102.fromNode = "TIMER";
ROUTE102.fromField = "fraction_changed";
ROUTE102.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ROUTE102.toField = "set_fraction";
ProtoBody43.children[1] = ROUTE102;

ROUTE ROUTE103 = createNode("ROUTE");
ROUTE103.fromNode = "TIMER";
ROUTE103.fromField = "fraction_changed";
ROUTE103.toNode = "HUMANOIDROOT_ANIMATOR";
ROUTE103.toField = "set_fraction";
ProtoBody43.children[2] = ROUTE103;

ROUTE ROUTE104 = createNode("ROUTE");
ROUTE104.fromNode = "TIMER";
ROUTE104.fromField = "fraction_changed";
ROUTE104.toNode = "SKULLBASE_ANIMATOR";
ROUTE104.toField = "set_fraction";
ProtoBody43.children[3] = ROUTE104;

ROUTE ROUTE105 = createNode("ROUTE");
ROUTE105.fromNode = "TIMER";
ROUTE105.fromField = "fraction_changed";
ROUTE105.toNode = "VL5_ANIMATOR";
ROUTE105.toField = "set_fraction";
ProtoBody43.children[4] = ROUTE105;

ROUTE ROUTE106 = createNode("ROUTE");
ROUTE106.fromNode = "TIMER";
ROUTE106.fromField = "fraction_changed";
ROUTE106.toNode = "L_HIP_ANIMATOR";
ROUTE106.toField = "set_fraction";
ProtoBody43.children[5] = ROUTE106;

ROUTE ROUTE107 = createNode("ROUTE");
ROUTE107.fromNode = "TIMER";
ROUTE107.fromField = "fraction_changed";
ROUTE107.toNode = "L_KNEE_ANIMATOR";
ROUTE107.toField = "set_fraction";
ProtoBody43.children[6] = ROUTE107;

ROUTE ROUTE108 = createNode("ROUTE");
ROUTE108.fromNode = "TIMER";
ROUTE108.fromField = "fraction_changed";
ROUTE108.toNode = "L_ANKLE_ANIMATOR";
ROUTE108.toField = "set_fraction";
ProtoBody43.children[7] = ROUTE108;

ROUTE ROUTE109 = createNode("ROUTE");
ROUTE109.fromNode = "TIMER";
ROUTE109.fromField = "fraction_changed";
ROUTE109.toNode = "R_HIP_ANIMATOR";
ROUTE109.toField = "set_fraction";
ProtoBody43.children[8] = ROUTE109;

ROUTE ROUTE110 = createNode("ROUTE");
ROUTE110.fromNode = "TIMER";
ROUTE110.fromField = "fraction_changed";
ROUTE110.toNode = "R_KNEE_ANIMATOR";
ROUTE110.toField = "set_fraction";
ProtoBody43.children[9] = ROUTE110;

ROUTE ROUTE111 = createNode("ROUTE");
ROUTE111.fromNode = "TIMER";
ROUTE111.fromField = "fraction_changed";
ROUTE111.toNode = "R_ANKLE_ANIMATOR";
ROUTE111.toField = "set_fraction";
ProtoBody43.children[10] = ROUTE111;

ROUTE ROUTE112 = createNode("ROUTE");
ROUTE112.fromNode = "TIMER";
ROUTE112.fromField = "fraction_changed";
ROUTE112.toNode = "L_SHOULDER_ANIMATOR";
ROUTE112.toField = "set_fraction";
ProtoBody43.children[11] = ROUTE112;

ROUTE ROUTE113 = createNode("ROUTE");
ROUTE113.fromNode = "TIMER";
ROUTE113.fromField = "fraction_changed";
ROUTE113.toNode = "L_ELBOW_ANIMATOR";
ROUTE113.toField = "set_fraction";
ProtoBody43.children[12] = ROUTE113;

ROUTE ROUTE114 = createNode("ROUTE");
ROUTE114.fromNode = "TIMER";
ROUTE114.fromField = "fraction_changed";
ROUTE114.toNode = "L_WRIST_ANIMATOR";
ROUTE114.toField = "set_fraction";
ProtoBody43.children[13] = ROUTE114;

ROUTE ROUTE115 = createNode("ROUTE");
ROUTE115.fromNode = "TIMER";
ROUTE115.fromField = "fraction_changed";
ROUTE115.toNode = "R_SHOULDER_ANIMATOR";
ROUTE115.toField = "set_fraction";
ProtoBody43.children[14] = ROUTE115;

ROUTE ROUTE116 = createNode("ROUTE");
ROUTE116.fromNode = "TIMER";
ROUTE116.fromField = "fraction_changed";
ROUTE116.toNode = "R_ELBOW_ANIMATOR";
ROUTE116.toField = "set_fraction";
ProtoBody43.children[15] = ROUTE116;

ROUTE ROUTE117 = createNode("ROUTE");
ROUTE117.fromNode = "TIMER";
ROUTE117.fromField = "fraction_changed";
ROUTE117.toNode = "R_WRIST_ANIMATOR";
ROUTE117.toField = "set_fraction";
ProtoBody43.children[16] = ROUTE117;

ProtoDeclare15.protoBody = ProtoBody43;

children = new MFNode();

children[0] = ProtoDeclare15;

WorldInfo WorldInfo118 = createNode("WorldInfo");
WorldInfo118.title = "LOA1_SwimmingFlutterKickAnimation.x3d";
children[1] = WorldInfo118;

Viewpoint Viewpoint119 = createNode("Viewpoint");
Viewpoint119.description = "LOA1_SwimmingFlutterKickAnimation scene";
Viewpoint119.position = new SFVec3f(new float[0,0,12]);
children[2] = Viewpoint119;

Anchor Anchor120 = createNode("Anchor");
Anchor120.description = "Nancy Diving";
Anchor120.url = new MFString(new java.lang.String["NancyDiving.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.x3d","NancyDiving.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.wrl"]);
Anchor120.parameter = new MFString(new java.lang.String["target=_blank"]);
Shape Shape121 = createNode("Shape");
Appearance Appearance122 = createNode("Appearance");
Material Material123 = createNode("Material");
Material123.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance122.material = Material123;

Shape121.appearance = Appearance122;

Text Text124 = createNode("Text");
Text124.string = new MFString(new java.lang.String["LOA1_SwimmingFlutterKickAnimation.x3d","defines a prototype","for animating a humanoid.","","Click text to see example."]);
FontStyle FontStyle125 = createNode("FontStyle");
FontStyle125.size = 0.8;
FontStyle125.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text124.fontStyle = FontStyle125;

Shape121.geometry = Text124;

Anchor120.children = new MFNode();

Anchor120.children[0] = Shape121;

children[3] = Anchor120;

}
