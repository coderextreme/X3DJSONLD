#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "LOA1_StopAnimation.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Humanoid animation prototype reusable by any Humanoid.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Cindy Ballreich cindy@ballreich.net 3Name3D, Joe Williams, Don Brutzman";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "rights";
meta5.content = "1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "translator";
meta6.content = "Ozan APAYDIN";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "created";
meta7.content = "1 December 2001";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "modified";
meta8.content = "23 May 2020";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "http://www.HAnim.org";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "http://HAnim.org/Models";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "http://HAnim.org/Nodes";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "subject";
meta13.content = "Nancy Stand Animation HAnim 2001";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "identifier";
meta14.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StopAnimation.x3d";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "generator";
meta15.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[13] = meta15;

head = head1;

ProtoDeclare ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="LOA1_StopAnimation" ><ProtoInterface><field accessType="inputOutput" type="SFTime" name="cycleInterval" value="0.00999999977648258"></field>
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
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="HUMANOIDROOT_POSITION_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="HUMANOIDROOT_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="SACROILIAC_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_HIP_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_KNEE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_ANKLE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_MIDTARSAL_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_HIP_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_KNEE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_ANKLE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_MIDTARSAL_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="VL5_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="SKULLBASE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_SHOULDER_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_ELBOW_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_WRIST_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_SHOULDER_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_ELBOW_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_WRIST_ANIMATOR" toField="set_fraction"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare17.name = "LOA1_StopAnimation";
ProtoInterface ProtoInterface18 = createNode("ProtoInterface");
field field19 = createNode("field");
field19.accessType = "inputOutput";
field19.type = "SFTime";
field19.name = "cycleInterval";
field19.value = "0.00999999977648258";
ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

field field20 = createNode("field");
field20.accessType = "inputOutput";
field20.type = "SFBool";
field20.name = "enabled";
field20.value = "true";
ProtoInterface18.field[1] = field20;

field field21 = createNode("field");
field21.accessType = "inputOutput";
field21.type = "SFBool";
field21.name = "loop";
field21.value = "true";
ProtoInterface18.field[2] = field21;

field field22 = createNode("field");
field22.accessType = "inputOutput";
field22.type = "SFTime";
field22.name = "startTime";
ProtoInterface18.field[3] = field22;

field field23 = createNode("field");
field23.accessType = "inputOutput";
field23.type = "SFTime";
field23.name = "stopTime";
field23.value = "-1";
ProtoInterface18.field[4] = field23;

field field24 = createNode("field");
field24.accessType = "outputOnly";
field24.type = "SFFloat";
field24.name = "fraction_changed";
ProtoInterface18.field[5] = field24;

field field25 = createNode("field");
field25.accessType = "outputOnly";
field25.type = "SFBool";
field25.name = "isActive";
ProtoInterface18.field[6] = field25;

field field26 = createNode("field");
field26.accessType = "outputOnly";
field26.type = "SFVec3f";
field26.name = "HumanoidRoot_translation_changed";
ProtoInterface18.field[7] = field26;

field field27 = createNode("field");
field27.accessType = "outputOnly";
field27.type = "SFRotation";
field27.name = "HumanoidRoot_rotation_changed";
ProtoInterface18.field[8] = field27;

field field28 = createNode("field");
field28.accessType = "outputOnly";
field28.type = "SFRotation";
field28.name = "lower_body_rotation_changed";
ProtoInterface18.field[9] = field28;

field field29 = createNode("field");
field29.accessType = "outputOnly";
field29.type = "SFRotation";
field29.name = "l_hip_rotation_changed";
ProtoInterface18.field[10] = field29;

field field30 = createNode("field");
field30.accessType = "outputOnly";
field30.type = "SFRotation";
field30.name = "l_knee_rotation_changed";
ProtoInterface18.field[11] = field30;

field field31 = createNode("field");
field31.accessType = "outputOnly";
field31.type = "SFRotation";
field31.name = "l_ankle_rotation_changed";
ProtoInterface18.field[12] = field31;

field field32 = createNode("field");
field32.accessType = "outputOnly";
field32.type = "SFRotation";
field32.name = "l_midtarsal_rotation_changed";
ProtoInterface18.field[13] = field32;

field field33 = createNode("field");
field33.accessType = "outputOnly";
field33.type = "SFRotation";
field33.name = "r_hip_rotation_changed";
ProtoInterface18.field[14] = field33;

field field34 = createNode("field");
field34.accessType = "outputOnly";
field34.type = "SFRotation";
field34.name = "r_knee_rotation_changed";
ProtoInterface18.field[15] = field34;

field field35 = createNode("field");
field35.accessType = "outputOnly";
field35.type = "SFRotation";
field35.name = "r_ankle_rotation_changed";
ProtoInterface18.field[16] = field35;

field field36 = createNode("field");
field36.accessType = "outputOnly";
field36.type = "SFRotation";
field36.name = "r_midtarsal_rotation_changed";
ProtoInterface18.field[17] = field36;

field field37 = createNode("field");
field37.accessType = "outputOnly";
field37.type = "SFRotation";
field37.name = "vl5_rotation_changed";
ProtoInterface18.field[18] = field37;

field field38 = createNode("field");
field38.accessType = "outputOnly";
field38.type = "SFRotation";
field38.name = "skullbase_rotation_changed";
ProtoInterface18.field[19] = field38;

field field39 = createNode("field");
field39.accessType = "outputOnly";
field39.type = "SFRotation";
field39.name = "l_shoulder_rotation_changed";
ProtoInterface18.field[20] = field39;

field field40 = createNode("field");
field40.accessType = "outputOnly";
field40.type = "SFRotation";
field40.name = "l_elbow_rotation_changed";
ProtoInterface18.field[21] = field40;

field field41 = createNode("field");
field41.accessType = "outputOnly";
field41.type = "SFRotation";
field41.name = "l_wrist_rotation_changed";
ProtoInterface18.field[22] = field41;

field field42 = createNode("field");
field42.accessType = "outputOnly";
field42.type = "SFRotation";
field42.name = "r_shoulder_rotation_changed";
ProtoInterface18.field[23] = field42;

field field43 = createNode("field");
field43.accessType = "outputOnly";
field43.type = "SFRotation";
field43.name = "r_elbow_rotation_changed";
ProtoInterface18.field[24] = field43;

field field44 = createNode("field");
field44.accessType = "outputOnly";
field44.type = "SFRotation";
field44.name = "r_wrist_rotation_changed";
ProtoInterface18.field[25] = field44;

ProtoDeclare17.protoInterface = ProtoInterface18;

ProtoBody ProtoBody45 = createNode("ProtoBody");
Group Group46 = createNode("Group");
TimeSensor TimeSensor47 = createNode("TimeSensor");
TimeSensor47.DEF = "TIMER";
IS IS48 = createNode("IS");
connect connect49 = createNode("connect");
connect49.nodeField = "enabled";
connect49.protoField = "enabled";
IS48.connect = new MFNode();

IS48.connect[0] = connect49;

connect connect50 = createNode("connect");
connect50.nodeField = "cycleInterval";
connect50.protoField = "cycleInterval";
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
connect54.nodeField = "isActive";
connect54.protoField = "isActive";
IS48.connect[5] = connect54;

connect connect55 = createNode("connect");
connect55.nodeField = "fraction_changed";
connect55.protoField = "fraction_changed";
IS48.connect[6] = connect55;

TimeSensor47.iS = IS48;

Group46.children = new MFNode();

Group46.children[0] = TimeSensor47;

PositionInterpolator PositionInterpolator56 = createNode("PositionInterpolator");
PositionInterpolator56.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator56.key = new MFFloat(new float[0,1]);
PositionInterpolator56.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
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

OrientationInterpolator OrientationInterpolator62 = createNode("OrientationInterpolator");
OrientationInterpolator62.DEF = "SACROILIAC_ANIMATOR";
OrientationInterpolator62.key = new MFFloat(new float[0,1]);
OrientationInterpolator62.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS63 = createNode("IS");
connect connect64 = createNode("connect");
connect64.nodeField = "value_changed";
connect64.protoField = "lower_body_rotation_changed";
IS63.connect = new MFNode();

IS63.connect[0] = connect64;

OrientationInterpolator62.iS = IS63;

Group46.children[3] = OrientationInterpolator62;

OrientationInterpolator OrientationInterpolator65 = createNode("OrientationInterpolator");
OrientationInterpolator65.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator65.key = new MFFloat(new float[0,1]);
OrientationInterpolator65.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS66 = createNode("IS");
connect connect67 = createNode("connect");
connect67.nodeField = "value_changed";
connect67.protoField = "l_hip_rotation_changed";
IS66.connect = new MFNode();

IS66.connect[0] = connect67;

OrientationInterpolator65.iS = IS66;

Group46.children[4] = OrientationInterpolator65;

OrientationInterpolator OrientationInterpolator68 = createNode("OrientationInterpolator");
OrientationInterpolator68.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator68.key = new MFFloat(new float[0,1]);
OrientationInterpolator68.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS69 = createNode("IS");
connect connect70 = createNode("connect");
connect70.nodeField = "value_changed";
connect70.protoField = "l_knee_rotation_changed";
IS69.connect = new MFNode();

IS69.connect[0] = connect70;

OrientationInterpolator68.iS = IS69;

Group46.children[5] = OrientationInterpolator68;

OrientationInterpolator OrientationInterpolator71 = createNode("OrientationInterpolator");
OrientationInterpolator71.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator71.key = new MFFloat(new float[0,1]);
OrientationInterpolator71.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS72 = createNode("IS");
connect connect73 = createNode("connect");
connect73.nodeField = "value_changed";
connect73.protoField = "l_ankle_rotation_changed";
IS72.connect = new MFNode();

IS72.connect[0] = connect73;

OrientationInterpolator71.iS = IS72;

Group46.children[6] = OrientationInterpolator71;

OrientationInterpolator OrientationInterpolator74 = createNode("OrientationInterpolator");
OrientationInterpolator74.DEF = "L_MIDTARSAL_ANIMATOR";
OrientationInterpolator74.key = new MFFloat(new float[0,1]);
OrientationInterpolator74.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0]);
IS IS75 = createNode("IS");
connect connect76 = createNode("connect");
connect76.nodeField = "value_changed";
connect76.protoField = "l_midtarsal_rotation_changed";
IS75.connect = new MFNode();

IS75.connect[0] = connect76;

OrientationInterpolator74.iS = IS75;

Group46.children[7] = OrientationInterpolator74;

OrientationInterpolator OrientationInterpolator77 = createNode("OrientationInterpolator");
OrientationInterpolator77.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator77.key = new MFFloat(new float[0,1]);
OrientationInterpolator77.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS78 = createNode("IS");
connect connect79 = createNode("connect");
connect79.nodeField = "value_changed";
connect79.protoField = "r_hip_rotation_changed";
IS78.connect = new MFNode();

IS78.connect[0] = connect79;

OrientationInterpolator77.iS = IS78;

Group46.children[8] = OrientationInterpolator77;

OrientationInterpolator OrientationInterpolator80 = createNode("OrientationInterpolator");
OrientationInterpolator80.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator80.key = new MFFloat(new float[0,1]);
OrientationInterpolator80.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS81 = createNode("IS");
connect connect82 = createNode("connect");
connect82.nodeField = "value_changed";
connect82.protoField = "r_knee_rotation_changed";
IS81.connect = new MFNode();

IS81.connect[0] = connect82;

OrientationInterpolator80.iS = IS81;

Group46.children[9] = OrientationInterpolator80;

OrientationInterpolator OrientationInterpolator83 = createNode("OrientationInterpolator");
OrientationInterpolator83.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator83.key = new MFFloat(new float[0,1]);
OrientationInterpolator83.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS84 = createNode("IS");
connect connect85 = createNode("connect");
connect85.nodeField = "value_changed";
connect85.protoField = "r_ankle_rotation_changed";
IS84.connect = new MFNode();

IS84.connect[0] = connect85;

OrientationInterpolator83.iS = IS84;

Group46.children[10] = OrientationInterpolator83;

OrientationInterpolator OrientationInterpolator86 = createNode("OrientationInterpolator");
OrientationInterpolator86.DEF = "R_MIDTARSAL_ANIMATOR";
OrientationInterpolator86.key = new MFFloat(new float[0,1]);
OrientationInterpolator86.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0]);
IS IS87 = createNode("IS");
connect connect88 = createNode("connect");
connect88.nodeField = "value_changed";
connect88.protoField = "r_midtarsal_rotation_changed";
IS87.connect = new MFNode();

IS87.connect[0] = connect88;

OrientationInterpolator86.iS = IS87;

Group46.children[11] = OrientationInterpolator86;

OrientationInterpolator OrientationInterpolator89 = createNode("OrientationInterpolator");
OrientationInterpolator89.DEF = "VL5_ANIMATOR";
OrientationInterpolator89.key = new MFFloat(new float[0,1]);
OrientationInterpolator89.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS90 = createNode("IS");
connect connect91 = createNode("connect");
connect91.nodeField = "value_changed";
connect91.protoField = "vl5_rotation_changed";
IS90.connect = new MFNode();

IS90.connect[0] = connect91;

OrientationInterpolator89.iS = IS90;

Group46.children[12] = OrientationInterpolator89;

OrientationInterpolator OrientationInterpolator92 = createNode("OrientationInterpolator");
OrientationInterpolator92.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator92.key = new MFFloat(new float[0,1]);
OrientationInterpolator92.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS93 = createNode("IS");
connect connect94 = createNode("connect");
connect94.nodeField = "value_changed";
connect94.protoField = "skullbase_rotation_changed";
IS93.connect = new MFNode();

IS93.connect[0] = connect94;

OrientationInterpolator92.iS = IS93;

Group46.children[13] = OrientationInterpolator92;

OrientationInterpolator OrientationInterpolator95 = createNode("OrientationInterpolator");
OrientationInterpolator95.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator95.key = new MFFloat(new float[0,1]);
OrientationInterpolator95.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS96 = createNode("IS");
connect connect97 = createNode("connect");
connect97.nodeField = "value_changed";
connect97.protoField = "l_shoulder_rotation_changed";
IS96.connect = new MFNode();

IS96.connect[0] = connect97;

OrientationInterpolator95.iS = IS96;

Group46.children[14] = OrientationInterpolator95;

OrientationInterpolator OrientationInterpolator98 = createNode("OrientationInterpolator");
OrientationInterpolator98.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator98.key = new MFFloat(new float[0,1]);
OrientationInterpolator98.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS99 = createNode("IS");
connect connect100 = createNode("connect");
connect100.nodeField = "value_changed";
connect100.protoField = "l_elbow_rotation_changed";
IS99.connect = new MFNode();

IS99.connect[0] = connect100;

OrientationInterpolator98.iS = IS99;

Group46.children[15] = OrientationInterpolator98;

OrientationInterpolator OrientationInterpolator101 = createNode("OrientationInterpolator");
OrientationInterpolator101.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator101.key = new MFFloat(new float[0,1]);
OrientationInterpolator101.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS102 = createNode("IS");
connect connect103 = createNode("connect");
connect103.nodeField = "value_changed";
connect103.protoField = "l_wrist_rotation_changed";
IS102.connect = new MFNode();

IS102.connect[0] = connect103;

OrientationInterpolator101.iS = IS102;

Group46.children[16] = OrientationInterpolator101;

OrientationInterpolator OrientationInterpolator104 = createNode("OrientationInterpolator");
OrientationInterpolator104.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator104.key = new MFFloat(new float[0,1]);
OrientationInterpolator104.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS105 = createNode("IS");
connect connect106 = createNode("connect");
connect106.nodeField = "value_changed";
connect106.protoField = "r_shoulder_rotation_changed";
IS105.connect = new MFNode();

IS105.connect[0] = connect106;

OrientationInterpolator104.iS = IS105;

Group46.children[17] = OrientationInterpolator104;

OrientationInterpolator OrientationInterpolator107 = createNode("OrientationInterpolator");
OrientationInterpolator107.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator107.key = new MFFloat(new float[0,1]);
OrientationInterpolator107.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS108 = createNode("IS");
connect connect109 = createNode("connect");
connect109.nodeField = "value_changed";
connect109.protoField = "r_elbow_rotation_changed";
IS108.connect = new MFNode();

IS108.connect[0] = connect109;

OrientationInterpolator107.iS = IS108;

Group46.children[18] = OrientationInterpolator107;

OrientationInterpolator OrientationInterpolator110 = createNode("OrientationInterpolator");
OrientationInterpolator110.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator110.key = new MFFloat(new float[0,1]);
OrientationInterpolator110.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS111 = createNode("IS");
connect connect112 = createNode("connect");
connect112.nodeField = "value_changed";
connect112.protoField = "r_wrist_rotation_changed";
IS111.connect = new MFNode();

IS111.connect[0] = connect112;

OrientationInterpolator110.iS = IS111;

Group46.children[19] = OrientationInterpolator110;

ProtoBody45.children = new MFNode();

ProtoBody45.children[0] = Group46;

ROUTE ROUTE113 = createNode("ROUTE");
ROUTE113.fromNode = "TIMER";
ROUTE113.fromField = "fraction_changed";
ROUTE113.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ROUTE113.toField = "set_fraction";
ProtoBody45.children[1] = ROUTE113;

ROUTE ROUTE114 = createNode("ROUTE");
ROUTE114.fromNode = "TIMER";
ROUTE114.fromField = "fraction_changed";
ROUTE114.toNode = "HUMANOIDROOT_ANIMATOR";
ROUTE114.toField = "set_fraction";
ProtoBody45.children[2] = ROUTE114;

ROUTE ROUTE115 = createNode("ROUTE");
ROUTE115.fromNode = "TIMER";
ROUTE115.fromField = "fraction_changed";
ROUTE115.toNode = "SACROILIAC_ANIMATOR";
ROUTE115.toField = "set_fraction";
ProtoBody45.children[3] = ROUTE115;

ROUTE ROUTE116 = createNode("ROUTE");
ROUTE116.fromNode = "TIMER";
ROUTE116.fromField = "fraction_changed";
ROUTE116.toNode = "L_HIP_ANIMATOR";
ROUTE116.toField = "set_fraction";
ProtoBody45.children[4] = ROUTE116;

ROUTE ROUTE117 = createNode("ROUTE");
ROUTE117.fromNode = "TIMER";
ROUTE117.fromField = "fraction_changed";
ROUTE117.toNode = "L_KNEE_ANIMATOR";
ROUTE117.toField = "set_fraction";
ProtoBody45.children[5] = ROUTE117;

ROUTE ROUTE118 = createNode("ROUTE");
ROUTE118.fromNode = "TIMER";
ROUTE118.fromField = "fraction_changed";
ROUTE118.toNode = "L_ANKLE_ANIMATOR";
ROUTE118.toField = "set_fraction";
ProtoBody45.children[6] = ROUTE118;

ROUTE ROUTE119 = createNode("ROUTE");
ROUTE119.fromNode = "TIMER";
ROUTE119.fromField = "fraction_changed";
ROUTE119.toNode = "L_MIDTARSAL_ANIMATOR";
ROUTE119.toField = "set_fraction";
ProtoBody45.children[7] = ROUTE119;

ROUTE ROUTE120 = createNode("ROUTE");
ROUTE120.fromNode = "TIMER";
ROUTE120.fromField = "fraction_changed";
ROUTE120.toNode = "R_HIP_ANIMATOR";
ROUTE120.toField = "set_fraction";
ProtoBody45.children[8] = ROUTE120;

ROUTE ROUTE121 = createNode("ROUTE");
ROUTE121.fromNode = "TIMER";
ROUTE121.fromField = "fraction_changed";
ROUTE121.toNode = "R_KNEE_ANIMATOR";
ROUTE121.toField = "set_fraction";
ProtoBody45.children[9] = ROUTE121;

ROUTE ROUTE122 = createNode("ROUTE");
ROUTE122.fromNode = "TIMER";
ROUTE122.fromField = "fraction_changed";
ROUTE122.toNode = "R_ANKLE_ANIMATOR";
ROUTE122.toField = "set_fraction";
ProtoBody45.children[10] = ROUTE122;

ROUTE ROUTE123 = createNode("ROUTE");
ROUTE123.fromNode = "TIMER";
ROUTE123.fromField = "fraction_changed";
ROUTE123.toNode = "R_MIDTARSAL_ANIMATOR";
ROUTE123.toField = "set_fraction";
ProtoBody45.children[11] = ROUTE123;

ROUTE ROUTE124 = createNode("ROUTE");
ROUTE124.fromNode = "TIMER";
ROUTE124.fromField = "fraction_changed";
ROUTE124.toNode = "VL5_ANIMATOR";
ROUTE124.toField = "set_fraction";
ProtoBody45.children[12] = ROUTE124;

ROUTE ROUTE125 = createNode("ROUTE");
ROUTE125.fromNode = "TIMER";
ROUTE125.fromField = "fraction_changed";
ROUTE125.toNode = "SKULLBASE_ANIMATOR";
ROUTE125.toField = "set_fraction";
ProtoBody45.children[13] = ROUTE125;

ROUTE ROUTE126 = createNode("ROUTE");
ROUTE126.fromNode = "TIMER";
ROUTE126.fromField = "fraction_changed";
ROUTE126.toNode = "L_SHOULDER_ANIMATOR";
ROUTE126.toField = "set_fraction";
ProtoBody45.children[14] = ROUTE126;

ROUTE ROUTE127 = createNode("ROUTE");
ROUTE127.fromNode = "TIMER";
ROUTE127.fromField = "fraction_changed";
ROUTE127.toNode = "L_ELBOW_ANIMATOR";
ROUTE127.toField = "set_fraction";
ProtoBody45.children[15] = ROUTE127;

ROUTE ROUTE128 = createNode("ROUTE");
ROUTE128.fromNode = "TIMER";
ROUTE128.fromField = "fraction_changed";
ROUTE128.toNode = "L_WRIST_ANIMATOR";
ROUTE128.toField = "set_fraction";
ProtoBody45.children[16] = ROUTE128;

ROUTE ROUTE129 = createNode("ROUTE");
ROUTE129.fromNode = "TIMER";
ROUTE129.fromField = "fraction_changed";
ROUTE129.toNode = "R_SHOULDER_ANIMATOR";
ROUTE129.toField = "set_fraction";
ProtoBody45.children[17] = ROUTE129;

ROUTE ROUTE130 = createNode("ROUTE");
ROUTE130.fromNode = "TIMER";
ROUTE130.fromField = "fraction_changed";
ROUTE130.toNode = "R_ELBOW_ANIMATOR";
ROUTE130.toField = "set_fraction";
ProtoBody45.children[18] = ROUTE130;

ROUTE ROUTE131 = createNode("ROUTE");
ROUTE131.fromNode = "TIMER";
ROUTE131.fromField = "fraction_changed";
ROUTE131.toNode = "R_WRIST_ANIMATOR";
ROUTE131.toField = "set_fraction";
ProtoBody45.children[19] = ROUTE131;

ProtoDeclare17.protoBody = ProtoBody45;

children = new MFNode();

children[0] = ProtoDeclare17;

WorldInfo WorldInfo132 = createNode("WorldInfo");
WorldInfo132.title = "LOA1_StopAnimation.x3d";
children[1] = WorldInfo132;

Anchor Anchor133 = createNode("Anchor");
Anchor133.description = "InterchangableActorsViaDynamicRouting";
Anchor133.url = new MFString(new java.lang.String["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"]);
Anchor133.parameter = new MFString(new java.lang.String["target=_blank"]);
Shape Shape134 = createNode("Shape");
Appearance Appearance135 = createNode("Appearance");
Material Material136 = createNode("Material");
Material136.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance135.material = Material136;

Shape134.appearance = Appearance135;

Text Text137 = createNode("Text");
Text137.string = new MFString(new java.lang.String["LOA1_StopAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."]);
FontStyle FontStyle138 = createNode("FontStyle");
FontStyle138.size = 0.8;
FontStyle138.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text137.fontStyle = FontStyle138;

Shape134.geometry = Text137;

Anchor133.children = new MFNode();

Anchor133.children[0] = Shape134;

children[2] = Anchor133;

}
