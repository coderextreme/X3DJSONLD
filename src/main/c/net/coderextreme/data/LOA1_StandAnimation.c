#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "LOA1_StandAnimation.x3d";
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
meta9.name = "TODO";
meta9.content = "consider adding eyeball animation";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "http://www.HAnim.org";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "http://HAnim.org/Models";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "http://HAnim.org/Nodes";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "subject";
meta14.content = "Nancy Stand Animation HAnim 2001";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "identifier";
meta15.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StandAnimation.x3d";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "generator";
meta16.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[14] = meta16;

head = head1;

ProtoDeclare ProtoDeclare18 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="LOA1_StandAnimation" ><ProtoInterface><field accessType="inputOutput" type="SFTime" name="cycleInterval" value="0.00999999977648258"></field>
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
ProtoDeclare18.name = "LOA1_StandAnimation";
ProtoInterface ProtoInterface19 = createNode("ProtoInterface");
field field20 = createNode("field");
field20.accessType = "inputOutput";
field20.type = "SFTime";
field20.name = "cycleInterval";
field20.value = "0.00999999977648258";
ProtoInterface19.field = new MFNode();

ProtoInterface19.field[0] = field20;

field field21 = createNode("field");
field21.accessType = "inputOutput";
field21.type = "SFBool";
field21.name = "enabled";
field21.value = "true";
ProtoInterface19.field[1] = field21;

field field22 = createNode("field");
field22.accessType = "inputOutput";
field22.type = "SFBool";
field22.name = "loop";
field22.value = "true";
ProtoInterface19.field[2] = field22;

field field23 = createNode("field");
field23.accessType = "inputOutput";
field23.type = "SFTime";
field23.name = "startTime";
ProtoInterface19.field[3] = field23;

field field24 = createNode("field");
field24.accessType = "inputOutput";
field24.type = "SFTime";
field24.name = "stopTime";
field24.value = "-1";
ProtoInterface19.field[4] = field24;

field field25 = createNode("field");
field25.accessType = "outputOnly";
field25.type = "SFFloat";
field25.name = "fraction_changed";
ProtoInterface19.field[5] = field25;

field field26 = createNode("field");
field26.accessType = "outputOnly";
field26.type = "SFBool";
field26.name = "isActive";
ProtoInterface19.field[6] = field26;

field field27 = createNode("field");
field27.accessType = "outputOnly";
field27.type = "SFVec3f";
field27.name = "HumanoidRoot_translation_changed";
ProtoInterface19.field[7] = field27;

field field28 = createNode("field");
field28.accessType = "outputOnly";
field28.type = "SFRotation";
field28.name = "HumanoidRoot_rotation_changed";
ProtoInterface19.field[8] = field28;

field field29 = createNode("field");
field29.accessType = "outputOnly";
field29.type = "SFRotation";
field29.name = "lower_body_rotation_changed";
ProtoInterface19.field[9] = field29;

field field30 = createNode("field");
field30.accessType = "outputOnly";
field30.type = "SFRotation";
field30.name = "l_hip_rotation_changed";
ProtoInterface19.field[10] = field30;

field field31 = createNode("field");
field31.accessType = "outputOnly";
field31.type = "SFRotation";
field31.name = "l_knee_rotation_changed";
ProtoInterface19.field[11] = field31;

field field32 = createNode("field");
field32.accessType = "outputOnly";
field32.type = "SFRotation";
field32.name = "l_ankle_rotation_changed";
ProtoInterface19.field[12] = field32;

field field33 = createNode("field");
field33.accessType = "outputOnly";
field33.type = "SFRotation";
field33.name = "l_midtarsal_rotation_changed";
ProtoInterface19.field[13] = field33;

field field34 = createNode("field");
field34.accessType = "outputOnly";
field34.type = "SFRotation";
field34.name = "r_hip_rotation_changed";
ProtoInterface19.field[14] = field34;

field field35 = createNode("field");
field35.accessType = "outputOnly";
field35.type = "SFRotation";
field35.name = "r_knee_rotation_changed";
ProtoInterface19.field[15] = field35;

field field36 = createNode("field");
field36.accessType = "outputOnly";
field36.type = "SFRotation";
field36.name = "r_ankle_rotation_changed";
ProtoInterface19.field[16] = field36;

field field37 = createNode("field");
field37.accessType = "outputOnly";
field37.type = "SFRotation";
field37.name = "r_midtarsal_rotation_changed";
ProtoInterface19.field[17] = field37;

field field38 = createNode("field");
field38.accessType = "outputOnly";
field38.type = "SFRotation";
field38.name = "vl5_rotation_changed";
ProtoInterface19.field[18] = field38;

field field39 = createNode("field");
field39.accessType = "outputOnly";
field39.type = "SFRotation";
field39.name = "skullbase_rotation_changed";
ProtoInterface19.field[19] = field39;

field field40 = createNode("field");
field40.accessType = "outputOnly";
field40.type = "SFRotation";
field40.name = "l_shoulder_rotation_changed";
ProtoInterface19.field[20] = field40;

field field41 = createNode("field");
field41.accessType = "outputOnly";
field41.type = "SFRotation";
field41.name = "l_elbow_rotation_changed";
ProtoInterface19.field[21] = field41;

field field42 = createNode("field");
field42.accessType = "outputOnly";
field42.type = "SFRotation";
field42.name = "l_wrist_rotation_changed";
ProtoInterface19.field[22] = field42;

field field43 = createNode("field");
field43.accessType = "outputOnly";
field43.type = "SFRotation";
field43.name = "r_shoulder_rotation_changed";
ProtoInterface19.field[23] = field43;

field field44 = createNode("field");
field44.accessType = "outputOnly";
field44.type = "SFRotation";
field44.name = "r_elbow_rotation_changed";
ProtoInterface19.field[24] = field44;

field field45 = createNode("field");
field45.accessType = "outputOnly";
field45.type = "SFRotation";
field45.name = "r_wrist_rotation_changed";
ProtoInterface19.field[25] = field45;

ProtoDeclare18.protoInterface = ProtoInterface19;

ProtoBody ProtoBody46 = createNode("ProtoBody");
Group Group47 = createNode("Group");
TimeSensor TimeSensor48 = createNode("TimeSensor");
TimeSensor48.DEF = "TIMER";
IS IS49 = createNode("IS");
connect connect50 = createNode("connect");
connect50.nodeField = "enabled";
connect50.protoField = "enabled";
IS49.connect = new MFNode();

IS49.connect[0] = connect50;

connect connect51 = createNode("connect");
connect51.nodeField = "cycleInterval";
connect51.protoField = "cycleInterval";
IS49.connect[1] = connect51;

connect connect52 = createNode("connect");
connect52.nodeField = "loop";
connect52.protoField = "loop";
IS49.connect[2] = connect52;

connect connect53 = createNode("connect");
connect53.nodeField = "startTime";
connect53.protoField = "startTime";
IS49.connect[3] = connect53;

connect connect54 = createNode("connect");
connect54.nodeField = "stopTime";
connect54.protoField = "stopTime";
IS49.connect[4] = connect54;

connect connect55 = createNode("connect");
connect55.nodeField = "isActive";
connect55.protoField = "isActive";
IS49.connect[5] = connect55;

connect connect56 = createNode("connect");
connect56.nodeField = "fraction_changed";
connect56.protoField = "fraction_changed";
IS49.connect[6] = connect56;

TimeSensor48.iS = IS49;

Group47.children = new MFNode();

Group47.children[0] = TimeSensor48;

PositionInterpolator PositionInterpolator57 = createNode("PositionInterpolator");
PositionInterpolator57.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator57.key = new MFFloat(new float[0,1]);
PositionInterpolator57.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
IS IS58 = createNode("IS");
connect connect59 = createNode("connect");
connect59.nodeField = "value_changed";
connect59.protoField = "HumanoidRoot_translation_changed";
IS58.connect = new MFNode();

IS58.connect[0] = connect59;

PositionInterpolator57.iS = IS58;

Group47.children[1] = PositionInterpolator57;

OrientationInterpolator OrientationInterpolator60 = createNode("OrientationInterpolator");
OrientationInterpolator60.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator60.key = new MFFloat(new float[0,1]);
OrientationInterpolator60.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS61 = createNode("IS");
connect connect62 = createNode("connect");
connect62.nodeField = "value_changed";
connect62.protoField = "HumanoidRoot_rotation_changed";
IS61.connect = new MFNode();

IS61.connect[0] = connect62;

OrientationInterpolator60.iS = IS61;

Group47.children[2] = OrientationInterpolator60;

OrientationInterpolator OrientationInterpolator63 = createNode("OrientationInterpolator");
OrientationInterpolator63.DEF = "SACROILIAC_ANIMATOR";
OrientationInterpolator63.key = new MFFloat(new float[0,1]);
OrientationInterpolator63.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS64 = createNode("IS");
connect connect65 = createNode("connect");
connect65.nodeField = "value_changed";
connect65.protoField = "lower_body_rotation_changed";
IS64.connect = new MFNode();

IS64.connect[0] = connect65;

OrientationInterpolator63.iS = IS64;

Group47.children[3] = OrientationInterpolator63;

OrientationInterpolator OrientationInterpolator66 = createNode("OrientationInterpolator");
OrientationInterpolator66.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator66.key = new MFFloat(new float[0,1]);
OrientationInterpolator66.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS67 = createNode("IS");
connect connect68 = createNode("connect");
connect68.nodeField = "value_changed";
connect68.protoField = "l_hip_rotation_changed";
IS67.connect = new MFNode();

IS67.connect[0] = connect68;

OrientationInterpolator66.iS = IS67;

Group47.children[4] = OrientationInterpolator66;

OrientationInterpolator OrientationInterpolator69 = createNode("OrientationInterpolator");
OrientationInterpolator69.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator69.key = new MFFloat(new float[0,1]);
OrientationInterpolator69.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS70 = createNode("IS");
connect connect71 = createNode("connect");
connect71.nodeField = "value_changed";
connect71.protoField = "l_knee_rotation_changed";
IS70.connect = new MFNode();

IS70.connect[0] = connect71;

OrientationInterpolator69.iS = IS70;

Group47.children[5] = OrientationInterpolator69;

OrientationInterpolator OrientationInterpolator72 = createNode("OrientationInterpolator");
OrientationInterpolator72.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator72.key = new MFFloat(new float[0,1]);
OrientationInterpolator72.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS73 = createNode("IS");
connect connect74 = createNode("connect");
connect74.nodeField = "value_changed";
connect74.protoField = "l_ankle_rotation_changed";
IS73.connect = new MFNode();

IS73.connect[0] = connect74;

OrientationInterpolator72.iS = IS73;

Group47.children[6] = OrientationInterpolator72;

OrientationInterpolator OrientationInterpolator75 = createNode("OrientationInterpolator");
OrientationInterpolator75.DEF = "L_MIDTARSAL_ANIMATOR";
OrientationInterpolator75.key = new MFFloat(new float[0,1]);
OrientationInterpolator75.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0]);
IS IS76 = createNode("IS");
connect connect77 = createNode("connect");
connect77.nodeField = "value_changed";
connect77.protoField = "l_midtarsal_rotation_changed";
IS76.connect = new MFNode();

IS76.connect[0] = connect77;

OrientationInterpolator75.iS = IS76;

Group47.children[7] = OrientationInterpolator75;

OrientationInterpolator OrientationInterpolator78 = createNode("OrientationInterpolator");
OrientationInterpolator78.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator78.key = new MFFloat(new float[0,1]);
OrientationInterpolator78.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS79 = createNode("IS");
connect connect80 = createNode("connect");
connect80.nodeField = "value_changed";
connect80.protoField = "r_hip_rotation_changed";
IS79.connect = new MFNode();

IS79.connect[0] = connect80;

OrientationInterpolator78.iS = IS79;

Group47.children[8] = OrientationInterpolator78;

OrientationInterpolator OrientationInterpolator81 = createNode("OrientationInterpolator");
OrientationInterpolator81.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator81.key = new MFFloat(new float[0,1]);
OrientationInterpolator81.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS82 = createNode("IS");
connect connect83 = createNode("connect");
connect83.nodeField = "value_changed";
connect83.protoField = "r_knee_rotation_changed";
IS82.connect = new MFNode();

IS82.connect[0] = connect83;

OrientationInterpolator81.iS = IS82;

Group47.children[9] = OrientationInterpolator81;

OrientationInterpolator OrientationInterpolator84 = createNode("OrientationInterpolator");
OrientationInterpolator84.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator84.key = new MFFloat(new float[0,1]);
OrientationInterpolator84.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS85 = createNode("IS");
connect connect86 = createNode("connect");
connect86.nodeField = "value_changed";
connect86.protoField = "r_ankle_rotation_changed";
IS85.connect = new MFNode();

IS85.connect[0] = connect86;

OrientationInterpolator84.iS = IS85;

Group47.children[10] = OrientationInterpolator84;

OrientationInterpolator OrientationInterpolator87 = createNode("OrientationInterpolator");
OrientationInterpolator87.DEF = "R_MIDTARSAL_ANIMATOR";
OrientationInterpolator87.key = new MFFloat(new float[0,1]);
OrientationInterpolator87.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0]);
IS IS88 = createNode("IS");
connect connect89 = createNode("connect");
connect89.nodeField = "value_changed";
connect89.protoField = "r_midtarsal_rotation_changed";
IS88.connect = new MFNode();

IS88.connect[0] = connect89;

OrientationInterpolator87.iS = IS88;

Group47.children[11] = OrientationInterpolator87;

OrientationInterpolator OrientationInterpolator90 = createNode("OrientationInterpolator");
OrientationInterpolator90.DEF = "VL5_ANIMATOR";
OrientationInterpolator90.key = new MFFloat(new float[0,1]);
OrientationInterpolator90.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS91 = createNode("IS");
connect connect92 = createNode("connect");
connect92.nodeField = "value_changed";
connect92.protoField = "vl5_rotation_changed";
IS91.connect = new MFNode();

IS91.connect[0] = connect92;

OrientationInterpolator90.iS = IS91;

Group47.children[12] = OrientationInterpolator90;

OrientationInterpolator OrientationInterpolator93 = createNode("OrientationInterpolator");
OrientationInterpolator93.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator93.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator93.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,0,0,1,0]);
IS IS94 = createNode("IS");
connect connect95 = createNode("connect");
connect95.nodeField = "value_changed";
connect95.protoField = "skullbase_rotation_changed";
IS94.connect = new MFNode();

IS94.connect[0] = connect95;

OrientationInterpolator93.iS = IS94;

Group47.children[13] = OrientationInterpolator93;

OrientationInterpolator OrientationInterpolator96 = createNode("OrientationInterpolator");
OrientationInterpolator96.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator96.key = new MFFloat(new float[0,1]);
OrientationInterpolator96.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS97 = createNode("IS");
connect connect98 = createNode("connect");
connect98.nodeField = "value_changed";
connect98.protoField = "l_shoulder_rotation_changed";
IS97.connect = new MFNode();

IS97.connect[0] = connect98;

OrientationInterpolator96.iS = IS97;

Group47.children[14] = OrientationInterpolator96;

OrientationInterpolator OrientationInterpolator99 = createNode("OrientationInterpolator");
OrientationInterpolator99.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator99.key = new MFFloat(new float[0,1]);
OrientationInterpolator99.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS100 = createNode("IS");
connect connect101 = createNode("connect");
connect101.nodeField = "value_changed";
connect101.protoField = "l_elbow_rotation_changed";
IS100.connect = new MFNode();

IS100.connect[0] = connect101;

OrientationInterpolator99.iS = IS100;

Group47.children[15] = OrientationInterpolator99;

OrientationInterpolator OrientationInterpolator102 = createNode("OrientationInterpolator");
OrientationInterpolator102.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator102.key = new MFFloat(new float[0,1]);
OrientationInterpolator102.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS103 = createNode("IS");
connect connect104 = createNode("connect");
connect104.nodeField = "value_changed";
connect104.protoField = "l_wrist_rotation_changed";
IS103.connect = new MFNode();

IS103.connect[0] = connect104;

OrientationInterpolator102.iS = IS103;

Group47.children[16] = OrientationInterpolator102;

OrientationInterpolator OrientationInterpolator105 = createNode("OrientationInterpolator");
OrientationInterpolator105.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator105.key = new MFFloat(new float[0,1]);
OrientationInterpolator105.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS106 = createNode("IS");
connect connect107 = createNode("connect");
connect107.nodeField = "value_changed";
connect107.protoField = "r_shoulder_rotation_changed";
IS106.connect = new MFNode();

IS106.connect[0] = connect107;

OrientationInterpolator105.iS = IS106;

Group47.children[17] = OrientationInterpolator105;

OrientationInterpolator OrientationInterpolator108 = createNode("OrientationInterpolator");
OrientationInterpolator108.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator108.key = new MFFloat(new float[0,1]);
OrientationInterpolator108.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS109 = createNode("IS");
connect connect110 = createNode("connect");
connect110.nodeField = "value_changed";
connect110.protoField = "r_elbow_rotation_changed";
IS109.connect = new MFNode();

IS109.connect[0] = connect110;

OrientationInterpolator108.iS = IS109;

Group47.children[18] = OrientationInterpolator108;

OrientationInterpolator OrientationInterpolator111 = createNode("OrientationInterpolator");
OrientationInterpolator111.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator111.key = new MFFloat(new float[0,1]);
OrientationInterpolator111.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
IS IS112 = createNode("IS");
connect connect113 = createNode("connect");
connect113.nodeField = "value_changed";
connect113.protoField = "r_wrist_rotation_changed";
IS112.connect = new MFNode();

IS112.connect[0] = connect113;

OrientationInterpolator111.iS = IS112;

Group47.children[19] = OrientationInterpolator111;

ProtoBody46.children = new MFNode();

ProtoBody46.children[0] = Group47;

ROUTE ROUTE114 = createNode("ROUTE");
ROUTE114.fromNode = "TIMER";
ROUTE114.fromField = "fraction_changed";
ROUTE114.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ROUTE114.toField = "set_fraction";
ProtoBody46.children[1] = ROUTE114;

ROUTE ROUTE115 = createNode("ROUTE");
ROUTE115.fromNode = "TIMER";
ROUTE115.fromField = "fraction_changed";
ROUTE115.toNode = "HUMANOIDROOT_ANIMATOR";
ROUTE115.toField = "set_fraction";
ProtoBody46.children[2] = ROUTE115;

ROUTE ROUTE116 = createNode("ROUTE");
ROUTE116.fromNode = "TIMER";
ROUTE116.fromField = "fraction_changed";
ROUTE116.toNode = "SACROILIAC_ANIMATOR";
ROUTE116.toField = "set_fraction";
ProtoBody46.children[3] = ROUTE116;

ROUTE ROUTE117 = createNode("ROUTE");
ROUTE117.fromNode = "TIMER";
ROUTE117.fromField = "fraction_changed";
ROUTE117.toNode = "L_HIP_ANIMATOR";
ROUTE117.toField = "set_fraction";
ProtoBody46.children[4] = ROUTE117;

ROUTE ROUTE118 = createNode("ROUTE");
ROUTE118.fromNode = "TIMER";
ROUTE118.fromField = "fraction_changed";
ROUTE118.toNode = "L_KNEE_ANIMATOR";
ROUTE118.toField = "set_fraction";
ProtoBody46.children[5] = ROUTE118;

ROUTE ROUTE119 = createNode("ROUTE");
ROUTE119.fromNode = "TIMER";
ROUTE119.fromField = "fraction_changed";
ROUTE119.toNode = "L_ANKLE_ANIMATOR";
ROUTE119.toField = "set_fraction";
ProtoBody46.children[6] = ROUTE119;

ROUTE ROUTE120 = createNode("ROUTE");
ROUTE120.fromNode = "TIMER";
ROUTE120.fromField = "fraction_changed";
ROUTE120.toNode = "L_MIDTARSAL_ANIMATOR";
ROUTE120.toField = "set_fraction";
ProtoBody46.children[7] = ROUTE120;

ROUTE ROUTE121 = createNode("ROUTE");
ROUTE121.fromNode = "TIMER";
ROUTE121.fromField = "fraction_changed";
ROUTE121.toNode = "R_HIP_ANIMATOR";
ROUTE121.toField = "set_fraction";
ProtoBody46.children[8] = ROUTE121;

ROUTE ROUTE122 = createNode("ROUTE");
ROUTE122.fromNode = "TIMER";
ROUTE122.fromField = "fraction_changed";
ROUTE122.toNode = "R_KNEE_ANIMATOR";
ROUTE122.toField = "set_fraction";
ProtoBody46.children[9] = ROUTE122;

ROUTE ROUTE123 = createNode("ROUTE");
ROUTE123.fromNode = "TIMER";
ROUTE123.fromField = "fraction_changed";
ROUTE123.toNode = "R_ANKLE_ANIMATOR";
ROUTE123.toField = "set_fraction";
ProtoBody46.children[10] = ROUTE123;

ROUTE ROUTE124 = createNode("ROUTE");
ROUTE124.fromNode = "TIMER";
ROUTE124.fromField = "fraction_changed";
ROUTE124.toNode = "R_MIDTARSAL_ANIMATOR";
ROUTE124.toField = "set_fraction";
ProtoBody46.children[11] = ROUTE124;

ROUTE ROUTE125 = createNode("ROUTE");
ROUTE125.fromNode = "TIMER";
ROUTE125.fromField = "fraction_changed";
ROUTE125.toNode = "VL5_ANIMATOR";
ROUTE125.toField = "set_fraction";
ProtoBody46.children[12] = ROUTE125;

ROUTE ROUTE126 = createNode("ROUTE");
ROUTE126.fromNode = "TIMER";
ROUTE126.fromField = "fraction_changed";
ROUTE126.toNode = "SKULLBASE_ANIMATOR";
ROUTE126.toField = "set_fraction";
ProtoBody46.children[13] = ROUTE126;

ROUTE ROUTE127 = createNode("ROUTE");
ROUTE127.fromNode = "TIMER";
ROUTE127.fromField = "fraction_changed";
ROUTE127.toNode = "L_SHOULDER_ANIMATOR";
ROUTE127.toField = "set_fraction";
ProtoBody46.children[14] = ROUTE127;

ROUTE ROUTE128 = createNode("ROUTE");
ROUTE128.fromNode = "TIMER";
ROUTE128.fromField = "fraction_changed";
ROUTE128.toNode = "L_ELBOW_ANIMATOR";
ROUTE128.toField = "set_fraction";
ProtoBody46.children[15] = ROUTE128;

ROUTE ROUTE129 = createNode("ROUTE");
ROUTE129.fromNode = "TIMER";
ROUTE129.fromField = "fraction_changed";
ROUTE129.toNode = "L_WRIST_ANIMATOR";
ROUTE129.toField = "set_fraction";
ProtoBody46.children[16] = ROUTE129;

ROUTE ROUTE130 = createNode("ROUTE");
ROUTE130.fromNode = "TIMER";
ROUTE130.fromField = "fraction_changed";
ROUTE130.toNode = "R_SHOULDER_ANIMATOR";
ROUTE130.toField = "set_fraction";
ProtoBody46.children[17] = ROUTE130;

ROUTE ROUTE131 = createNode("ROUTE");
ROUTE131.fromNode = "TIMER";
ROUTE131.fromField = "fraction_changed";
ROUTE131.toNode = "R_ELBOW_ANIMATOR";
ROUTE131.toField = "set_fraction";
ProtoBody46.children[18] = ROUTE131;

ROUTE ROUTE132 = createNode("ROUTE");
ROUTE132.fromNode = "TIMER";
ROUTE132.fromField = "fraction_changed";
ROUTE132.toNode = "R_WRIST_ANIMATOR";
ROUTE132.toField = "set_fraction";
ProtoBody46.children[19] = ROUTE132;

ProtoDeclare18.protoBody = ProtoBody46;

children = new MFNode();

children[0] = ProtoDeclare18;

WorldInfo WorldInfo133 = createNode("WorldInfo");
WorldInfo133.title = "LOA1_StandAnimation.x3d";
children[1] = WorldInfo133;

Anchor Anchor134 = createNode("Anchor");
Anchor134.description = "InterchangableActorsViaDynamicRouting";
Anchor134.url = new MFString(new java.lang.String["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"]);
Anchor134.parameter = new MFString(new java.lang.String["target=_blank"]);
Shape Shape135 = createNode("Shape");
Appearance Appearance136 = createNode("Appearance");
Material Material137 = createNode("Material");
Material137.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance136.material = Material137;

Shape135.appearance = Appearance136;

Text Text138 = createNode("Text");
Text138.string = new MFString(new java.lang.String["LOA1_StandAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."]);
FontStyle FontStyle139 = createNode("FontStyle");
FontStyle139.size = 0.8;
FontStyle139.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text138.fontStyle = FontStyle139;

Shape135.geometry = Text138;

Anchor134.children = new MFNode();

Anchor134.children[0] = Shape135;

children[2] = Anchor134;

}
