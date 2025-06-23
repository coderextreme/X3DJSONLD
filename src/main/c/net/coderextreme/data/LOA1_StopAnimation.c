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

meta meta16 = createNode("meta");
meta16.name = "license";
meta16.content = "../license.html";
head1.meta[14] = meta16;

head = head1;

WorldInfo WorldInfo18 = createNode("WorldInfo");
WorldInfo18.title = "LOA1_StopAnimation.x3d";
children = new MFNode();

children[0] = WorldInfo18;

ProtoDeclare ProtoDeclare19 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface ProtoInterface20 = createNode("ProtoInterface");
field field21 = createNode("field");
field21.name = "cycleInterval";
field21.accessType = "inputOutput";
field21.type = "SFTime";
field21.value = "0.009999999776482582";
ProtoInterface20.field = new MFNode();

ProtoInterface20.field[0] = field21;

field field22 = createNode("field");
field22.name = "enabled";
field22.accessType = "inputOutput";
field22.type = "SFBool";
field22.value = "true";
ProtoInterface20.field[1] = field22;

field field23 = createNode("field");
field23.name = "loop";
field23.accessType = "inputOutput";
field23.type = "SFBool";
field23.value = "true";
ProtoInterface20.field[2] = field23;

field field24 = createNode("field");
field24.name = "startTime";
field24.accessType = "inputOutput";
field24.type = "SFTime";
field24.value = "0";
ProtoInterface20.field[3] = field24;

field field25 = createNode("field");
field25.name = "stopTime";
field25.accessType = "inputOutput";
field25.type = "SFTime";
field25.value = "-1";
ProtoInterface20.field[4] = field25;

field field26 = createNode("field");
field26.name = "fraction_changed";
field26.accessType = "outputOnly";
field26.type = "SFFloat";
ProtoInterface20.field[5] = field26;

field field27 = createNode("field");
field27.name = "isActive";
field27.accessType = "outputOnly";
field27.type = "SFBool";
ProtoInterface20.field[6] = field27;

field field28 = createNode("field");
field28.name = "HumanoidRoot_translation_changed";
field28.accessType = "outputOnly";
field28.type = "SFVec3f";
ProtoInterface20.field[7] = field28;

field field29 = createNode("field");
field29.name = "HumanoidRoot_rotation_changed";
field29.accessType = "outputOnly";
field29.type = "SFRotation";
ProtoInterface20.field[8] = field29;

field field30 = createNode("field");
field30.name = "lower_body_rotation_changed";
field30.accessType = "outputOnly";
field30.type = "SFRotation";
ProtoInterface20.field[9] = field30;

field field31 = createNode("field");
field31.name = "l_hip_rotation_changed";
field31.accessType = "outputOnly";
field31.type = "SFRotation";
ProtoInterface20.field[10] = field31;

field field32 = createNode("field");
field32.name = "l_knee_rotation_changed";
field32.accessType = "outputOnly";
field32.type = "SFRotation";
ProtoInterface20.field[11] = field32;

field field33 = createNode("field");
field33.name = "l_ankle_rotation_changed";
field33.accessType = "outputOnly";
field33.type = "SFRotation";
ProtoInterface20.field[12] = field33;

field field34 = createNode("field");
field34.name = "l_midtarsal_rotation_changed";
field34.accessType = "outputOnly";
field34.type = "SFRotation";
ProtoInterface20.field[13] = field34;

field field35 = createNode("field");
field35.name = "r_hip_rotation_changed";
field35.accessType = "outputOnly";
field35.type = "SFRotation";
ProtoInterface20.field[14] = field35;

field field36 = createNode("field");
field36.name = "r_knee_rotation_changed";
field36.accessType = "outputOnly";
field36.type = "SFRotation";
ProtoInterface20.field[15] = field36;

field field37 = createNode("field");
field37.name = "r_ankle_rotation_changed";
field37.accessType = "outputOnly";
field37.type = "SFRotation";
ProtoInterface20.field[16] = field37;

field field38 = createNode("field");
field38.name = "r_midtarsal_rotation_changed";
field38.accessType = "outputOnly";
field38.type = "SFRotation";
ProtoInterface20.field[17] = field38;

field field39 = createNode("field");
field39.name = "vl5_rotation_changed";
field39.accessType = "outputOnly";
field39.type = "SFRotation";
ProtoInterface20.field[18] = field39;

field field40 = createNode("field");
field40.name = "skullbase_rotation_changed";
field40.accessType = "outputOnly";
field40.type = "SFRotation";
ProtoInterface20.field[19] = field40;

field field41 = createNode("field");
field41.name = "l_shoulder_rotation_changed";
field41.accessType = "outputOnly";
field41.type = "SFRotation";
ProtoInterface20.field[20] = field41;

field field42 = createNode("field");
field42.name = "l_elbow_rotation_changed";
field42.accessType = "outputOnly";
field42.type = "SFRotation";
ProtoInterface20.field[21] = field42;

field field43 = createNode("field");
field43.name = "l_wrist_rotation_changed";
field43.accessType = "outputOnly";
field43.type = "SFRotation";
ProtoInterface20.field[22] = field43;

field field44 = createNode("field");
field44.name = "r_shoulder_rotation_changed";
field44.accessType = "outputOnly";
field44.type = "SFRotation";
ProtoInterface20.field[23] = field44;

field field45 = createNode("field");
field45.name = "r_elbow_rotation_changed";
field45.accessType = "outputOnly";
field45.type = "SFRotation";
ProtoInterface20.field[24] = field45;

field field46 = createNode("field");
field46.name = "r_wrist_rotation_changed";
field46.accessType = "outputOnly";
field46.type = "SFRotation";
ProtoInterface20.field[25] = field46;

ProtoDeclare19.protoInterface = ProtoInterface20;

ProtoBody ProtoBody47 = createNode("ProtoBody");
Group Group48 = createNode("Group");
TimeSensor TimeSensor49 = createNode("TimeSensor");
TimeSensor49.DEF = "TIMER";
IS IS50 = createNode("IS");
connect connect51 = createNode("connect");
connect51.nodeField = "cycleInterval";
connect51.protoField = "cycleInterval";
IS50.connect = new MFNode();

IS50.connect[0] = connect51;

connect connect52 = createNode("connect");
connect52.nodeField = "enabled";
connect52.protoField = "enabled";
IS50.connect[1] = connect52;

connect connect53 = createNode("connect");
connect53.nodeField = "loop";
connect53.protoField = "loop";
IS50.connect[2] = connect53;

connect connect54 = createNode("connect");
connect54.nodeField = "startTime";
connect54.protoField = "startTime";
IS50.connect[3] = connect54;

connect connect55 = createNode("connect");
connect55.nodeField = "stopTime";
connect55.protoField = "stopTime";
IS50.connect[4] = connect55;

connect connect56 = createNode("connect");
connect56.nodeField = "fraction_changed";
connect56.protoField = "fraction_changed";
IS50.connect[5] = connect56;

connect connect57 = createNode("connect");
connect57.nodeField = "isActive";
connect57.protoField = "isActive";
IS50.connect[6] = connect57;

TimeSensor49.iS = IS50;

Group48.children = new MFNode();

Group48.children[0] = TimeSensor49;

PositionInterpolator PositionInterpolator58 = createNode("PositionInterpolator");
PositionInterpolator58.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator58.key = new MFFloat(new float[0,1]);
PositionInterpolator58.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
IS IS59 = createNode("IS");
connect connect60 = createNode("connect");
connect60.nodeField = "value_changed";
connect60.protoField = "HumanoidRoot_translation_changed";
IS59.connect = new MFNode();

IS59.connect[0] = connect60;

PositionInterpolator58.iS = IS59;

Group48.children[1] = PositionInterpolator58;

OrientationInterpolator OrientationInterpolator61 = createNode("OrientationInterpolator");
OrientationInterpolator61.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator61.key = new MFFloat(new float[0,1]);
OrientationInterpolator61.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS62 = createNode("IS");
connect connect63 = createNode("connect");
connect63.nodeField = "value_changed";
connect63.protoField = "HumanoidRoot_rotation_changed";
IS62.connect = new MFNode();

IS62.connect[0] = connect63;

OrientationInterpolator61.iS = IS62;

Group48.children[2] = OrientationInterpolator61;

OrientationInterpolator OrientationInterpolator64 = createNode("OrientationInterpolator");
OrientationInterpolator64.DEF = "SACROILIAC_ANIMATOR";
OrientationInterpolator64.key = new MFFloat(new float[0,1]);
OrientationInterpolator64.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS65 = createNode("IS");
connect connect66 = createNode("connect");
connect66.nodeField = "value_changed";
connect66.protoField = "lower_body_rotation_changed";
IS65.connect = new MFNode();

IS65.connect[0] = connect66;

OrientationInterpolator64.iS = IS65;

Group48.children[3] = OrientationInterpolator64;

OrientationInterpolator OrientationInterpolator67 = createNode("OrientationInterpolator");
OrientationInterpolator67.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator67.key = new MFFloat(new float[0,1]);
OrientationInterpolator67.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS68 = createNode("IS");
connect connect69 = createNode("connect");
connect69.nodeField = "value_changed";
connect69.protoField = "l_hip_rotation_changed";
IS68.connect = new MFNode();

IS68.connect[0] = connect69;

OrientationInterpolator67.iS = IS68;

Group48.children[4] = OrientationInterpolator67;

OrientationInterpolator OrientationInterpolator70 = createNode("OrientationInterpolator");
OrientationInterpolator70.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator70.key = new MFFloat(new float[0,1]);
OrientationInterpolator70.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS71 = createNode("IS");
connect connect72 = createNode("connect");
connect72.nodeField = "value_changed";
connect72.protoField = "l_knee_rotation_changed";
IS71.connect = new MFNode();

IS71.connect[0] = connect72;

OrientationInterpolator70.iS = IS71;

Group48.children[5] = OrientationInterpolator70;

OrientationInterpolator OrientationInterpolator73 = createNode("OrientationInterpolator");
OrientationInterpolator73.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator73.key = new MFFloat(new float[0,1]);
OrientationInterpolator73.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS74 = createNode("IS");
connect connect75 = createNode("connect");
connect75.nodeField = "value_changed";
connect75.protoField = "l_ankle_rotation_changed";
IS74.connect = new MFNode();

IS74.connect[0] = connect75;

OrientationInterpolator73.iS = IS74;

Group48.children[6] = OrientationInterpolator73;

OrientationInterpolator OrientationInterpolator76 = createNode("OrientationInterpolator");
OrientationInterpolator76.DEF = "L_MIDTARSAL_ANIMATOR";
OrientationInterpolator76.key = new MFFloat(new float[0,1]);
OrientationInterpolator76.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0]);
IS IS77 = createNode("IS");
connect connect78 = createNode("connect");
connect78.nodeField = "value_changed";
connect78.protoField = "l_midtarsal_rotation_changed";
IS77.connect = new MFNode();

IS77.connect[0] = connect78;

OrientationInterpolator76.iS = IS77;

Group48.children[7] = OrientationInterpolator76;

OrientationInterpolator OrientationInterpolator79 = createNode("OrientationInterpolator");
OrientationInterpolator79.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator79.key = new MFFloat(new float[0,1]);
OrientationInterpolator79.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS80 = createNode("IS");
connect connect81 = createNode("connect");
connect81.nodeField = "value_changed";
connect81.protoField = "r_hip_rotation_changed";
IS80.connect = new MFNode();

IS80.connect[0] = connect81;

OrientationInterpolator79.iS = IS80;

Group48.children[8] = OrientationInterpolator79;

OrientationInterpolator OrientationInterpolator82 = createNode("OrientationInterpolator");
OrientationInterpolator82.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator82.key = new MFFloat(new float[0,1]);
OrientationInterpolator82.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS83 = createNode("IS");
connect connect84 = createNode("connect");
connect84.nodeField = "value_changed";
connect84.protoField = "r_knee_rotation_changed";
IS83.connect = new MFNode();

IS83.connect[0] = connect84;

OrientationInterpolator82.iS = IS83;

Group48.children[9] = OrientationInterpolator82;

OrientationInterpolator OrientationInterpolator85 = createNode("OrientationInterpolator");
OrientationInterpolator85.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator85.key = new MFFloat(new float[0,1]);
OrientationInterpolator85.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS86 = createNode("IS");
connect connect87 = createNode("connect");
connect87.nodeField = "value_changed";
connect87.protoField = "r_ankle_rotation_changed";
IS86.connect = new MFNode();

IS86.connect[0] = connect87;

OrientationInterpolator85.iS = IS86;

Group48.children[10] = OrientationInterpolator85;

OrientationInterpolator OrientationInterpolator88 = createNode("OrientationInterpolator");
OrientationInterpolator88.DEF = "R_MIDTARSAL_ANIMATOR";
OrientationInterpolator88.key = new MFFloat(new float[0,1]);
OrientationInterpolator88.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0]);
IS IS89 = createNode("IS");
connect connect90 = createNode("connect");
connect90.nodeField = "value_changed";
connect90.protoField = "r_midtarsal_rotation_changed";
IS89.connect = new MFNode();

IS89.connect[0] = connect90;

OrientationInterpolator88.iS = IS89;

Group48.children[11] = OrientationInterpolator88;

OrientationInterpolator OrientationInterpolator91 = createNode("OrientationInterpolator");
OrientationInterpolator91.DEF = "VL5_ANIMATOR";
OrientationInterpolator91.key = new MFFloat(new float[0,1]);
OrientationInterpolator91.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS92 = createNode("IS");
connect connect93 = createNode("connect");
connect93.nodeField = "value_changed";
connect93.protoField = "vl5_rotation_changed";
IS92.connect = new MFNode();

IS92.connect[0] = connect93;

OrientationInterpolator91.iS = IS92;

Group48.children[12] = OrientationInterpolator91;

OrientationInterpolator OrientationInterpolator94 = createNode("OrientationInterpolator");
OrientationInterpolator94.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator94.key = new MFFloat(new float[0,1]);
OrientationInterpolator94.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS95 = createNode("IS");
connect connect96 = createNode("connect");
connect96.nodeField = "value_changed";
connect96.protoField = "skullbase_rotation_changed";
IS95.connect = new MFNode();

IS95.connect[0] = connect96;

OrientationInterpolator94.iS = IS95;

Group48.children[13] = OrientationInterpolator94;

OrientationInterpolator OrientationInterpolator97 = createNode("OrientationInterpolator");
OrientationInterpolator97.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator97.key = new MFFloat(new float[0,1]);
OrientationInterpolator97.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS98 = createNode("IS");
connect connect99 = createNode("connect");
connect99.nodeField = "value_changed";
connect99.protoField = "l_shoulder_rotation_changed";
IS98.connect = new MFNode();

IS98.connect[0] = connect99;

OrientationInterpolator97.iS = IS98;

Group48.children[14] = OrientationInterpolator97;

OrientationInterpolator OrientationInterpolator100 = createNode("OrientationInterpolator");
OrientationInterpolator100.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator100.key = new MFFloat(new float[0,1]);
OrientationInterpolator100.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS101 = createNode("IS");
connect connect102 = createNode("connect");
connect102.nodeField = "value_changed";
connect102.protoField = "l_elbow_rotation_changed";
IS101.connect = new MFNode();

IS101.connect[0] = connect102;

OrientationInterpolator100.iS = IS101;

Group48.children[15] = OrientationInterpolator100;

OrientationInterpolator OrientationInterpolator103 = createNode("OrientationInterpolator");
OrientationInterpolator103.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator103.key = new MFFloat(new float[0,1]);
OrientationInterpolator103.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS104 = createNode("IS");
connect connect105 = createNode("connect");
connect105.nodeField = "value_changed";
connect105.protoField = "l_wrist_rotation_changed";
IS104.connect = new MFNode();

IS104.connect[0] = connect105;

OrientationInterpolator103.iS = IS104;

Group48.children[16] = OrientationInterpolator103;

OrientationInterpolator OrientationInterpolator106 = createNode("OrientationInterpolator");
OrientationInterpolator106.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator106.key = new MFFloat(new float[0,1]);
OrientationInterpolator106.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS107 = createNode("IS");
connect connect108 = createNode("connect");
connect108.nodeField = "value_changed";
connect108.protoField = "r_shoulder_rotation_changed";
IS107.connect = new MFNode();

IS107.connect[0] = connect108;

OrientationInterpolator106.iS = IS107;

Group48.children[17] = OrientationInterpolator106;

OrientationInterpolator OrientationInterpolator109 = createNode("OrientationInterpolator");
OrientationInterpolator109.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator109.key = new MFFloat(new float[0,1]);
OrientationInterpolator109.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS110 = createNode("IS");
connect connect111 = createNode("connect");
connect111.nodeField = "value_changed";
connect111.protoField = "r_elbow_rotation_changed";
IS110.connect = new MFNode();

IS110.connect[0] = connect111;

OrientationInterpolator109.iS = IS110;

Group48.children[18] = OrientationInterpolator109;

OrientationInterpolator OrientationInterpolator112 = createNode("OrientationInterpolator");
OrientationInterpolator112.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator112.key = new MFFloat(new float[0,1]);
OrientationInterpolator112.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS113 = createNode("IS");
connect connect114 = createNode("connect");
connect114.nodeField = "value_changed";
connect114.protoField = "r_wrist_rotation_changed";
IS113.connect = new MFNode();

IS113.connect[0] = connect114;

OrientationInterpolator112.iS = IS113;

Group48.children[19] = OrientationInterpolator112;

ProtoBody47.children = new MFNode();

ProtoBody47.children[0] = Group48;

ROUTE ROUTE115 = createNode("ROUTE");
ROUTE115.fromField = "fraction_changed";
ROUTE115.fromNode = "TIMER";
ROUTE115.toField = "set_fraction";
ROUTE115.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ProtoBody47.children[1] = ROUTE115;

ROUTE ROUTE116 = createNode("ROUTE");
ROUTE116.fromField = "fraction_changed";
ROUTE116.fromNode = "TIMER";
ROUTE116.toField = "set_fraction";
ROUTE116.toNode = "HUMANOIDROOT_ANIMATOR";
ProtoBody47.children[2] = ROUTE116;

ROUTE ROUTE117 = createNode("ROUTE");
ROUTE117.fromField = "fraction_changed";
ROUTE117.fromNode = "TIMER";
ROUTE117.toField = "set_fraction";
ROUTE117.toNode = "SACROILIAC_ANIMATOR";
ProtoBody47.children[3] = ROUTE117;

ROUTE ROUTE118 = createNode("ROUTE");
ROUTE118.fromField = "fraction_changed";
ROUTE118.fromNode = "TIMER";
ROUTE118.toField = "set_fraction";
ROUTE118.toNode = "L_HIP_ANIMATOR";
ProtoBody47.children[4] = ROUTE118;

ROUTE ROUTE119 = createNode("ROUTE");
ROUTE119.fromField = "fraction_changed";
ROUTE119.fromNode = "TIMER";
ROUTE119.toField = "set_fraction";
ROUTE119.toNode = "L_KNEE_ANIMATOR";
ProtoBody47.children[5] = ROUTE119;

ROUTE ROUTE120 = createNode("ROUTE");
ROUTE120.fromField = "fraction_changed";
ROUTE120.fromNode = "TIMER";
ROUTE120.toField = "set_fraction";
ROUTE120.toNode = "L_ANKLE_ANIMATOR";
ProtoBody47.children[6] = ROUTE120;

ROUTE ROUTE121 = createNode("ROUTE");
ROUTE121.fromField = "fraction_changed";
ROUTE121.fromNode = "TIMER";
ROUTE121.toField = "set_fraction";
ROUTE121.toNode = "L_MIDTARSAL_ANIMATOR";
ProtoBody47.children[7] = ROUTE121;

ROUTE ROUTE122 = createNode("ROUTE");
ROUTE122.fromField = "fraction_changed";
ROUTE122.fromNode = "TIMER";
ROUTE122.toField = "set_fraction";
ROUTE122.toNode = "R_HIP_ANIMATOR";
ProtoBody47.children[8] = ROUTE122;

ROUTE ROUTE123 = createNode("ROUTE");
ROUTE123.fromField = "fraction_changed";
ROUTE123.fromNode = "TIMER";
ROUTE123.toField = "set_fraction";
ROUTE123.toNode = "R_KNEE_ANIMATOR";
ProtoBody47.children[9] = ROUTE123;

ROUTE ROUTE124 = createNode("ROUTE");
ROUTE124.fromField = "fraction_changed";
ROUTE124.fromNode = "TIMER";
ROUTE124.toField = "set_fraction";
ROUTE124.toNode = "R_ANKLE_ANIMATOR";
ProtoBody47.children[10] = ROUTE124;

ROUTE ROUTE125 = createNode("ROUTE");
ROUTE125.fromField = "fraction_changed";
ROUTE125.fromNode = "TIMER";
ROUTE125.toField = "set_fraction";
ROUTE125.toNode = "R_MIDTARSAL_ANIMATOR";
ProtoBody47.children[11] = ROUTE125;

ROUTE ROUTE126 = createNode("ROUTE");
ROUTE126.fromField = "fraction_changed";
ROUTE126.fromNode = "TIMER";
ROUTE126.toField = "set_fraction";
ROUTE126.toNode = "VL5_ANIMATOR";
ProtoBody47.children[12] = ROUTE126;

ROUTE ROUTE127 = createNode("ROUTE");
ROUTE127.fromField = "fraction_changed";
ROUTE127.fromNode = "TIMER";
ROUTE127.toField = "set_fraction";
ROUTE127.toNode = "SKULLBASE_ANIMATOR";
ProtoBody47.children[13] = ROUTE127;

ROUTE ROUTE128 = createNode("ROUTE");
ROUTE128.fromField = "fraction_changed";
ROUTE128.fromNode = "TIMER";
ROUTE128.toField = "set_fraction";
ROUTE128.toNode = "L_SHOULDER_ANIMATOR";
ProtoBody47.children[14] = ROUTE128;

ROUTE ROUTE129 = createNode("ROUTE");
ROUTE129.fromField = "fraction_changed";
ROUTE129.fromNode = "TIMER";
ROUTE129.toField = "set_fraction";
ROUTE129.toNode = "L_ELBOW_ANIMATOR";
ProtoBody47.children[15] = ROUTE129;

ROUTE ROUTE130 = createNode("ROUTE");
ROUTE130.fromField = "fraction_changed";
ROUTE130.fromNode = "TIMER";
ROUTE130.toField = "set_fraction";
ROUTE130.toNode = "L_WRIST_ANIMATOR";
ProtoBody47.children[16] = ROUTE130;

ROUTE ROUTE131 = createNode("ROUTE");
ROUTE131.fromField = "fraction_changed";
ROUTE131.fromNode = "TIMER";
ROUTE131.toField = "set_fraction";
ROUTE131.toNode = "R_SHOULDER_ANIMATOR";
ProtoBody47.children[17] = ROUTE131;

ROUTE ROUTE132 = createNode("ROUTE");
ROUTE132.fromField = "fraction_changed";
ROUTE132.fromNode = "TIMER";
ROUTE132.toField = "set_fraction";
ROUTE132.toNode = "R_ELBOW_ANIMATOR";
ProtoBody47.children[18] = ROUTE132;

ROUTE ROUTE133 = createNode("ROUTE");
ROUTE133.fromField = "fraction_changed";
ROUTE133.fromNode = "TIMER";
ROUTE133.toField = "set_fraction";
ROUTE133.toNode = "R_WRIST_ANIMATOR";
ProtoBody47.children[19] = ROUTE133;

ProtoDeclare19.protoBody = ProtoBody47;

children[1] = ProtoDeclare19;

//======================================
//Point to example use in case someone inspects this file
Anchor Anchor134 = createNode("Anchor");
Anchor134.description = "InterchangableActorsViaDynamicRouting";
Anchor134.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor134.url = new MFString(new java.lang.String["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"]);
Shape Shape135 = createNode("Shape");
Text Text136 = createNode("Text");
Text136.string = new MFString(new java.lang.String["LOA1_StopAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."]);
FontStyle FontStyle137 = createNode("FontStyle");
FontStyle137.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle137.size = 0.8;
Text136.fontStyle = FontStyle137;

Shape135.geometry = Text136;

Appearance Appearance138 = createNode("Appearance");
Material Material139 = createNode("Material");
Material139.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance138.material = Material139;

Shape135.appearance = Appearance138;

Anchor134.children = new MFNode();

Anchor134.children[0] = Shape135;

children[2] = Anchor134;

}
