#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "LOA1_KneelAnimation.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Humanoid animation prototype reusable by any Humanoid.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Tom Miller";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "translator";
meta5.content = "Curt Blais";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "translated";
meta6.content = "1 December 2001";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "23 May 2020";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "http://www.HAnim.org/Models/HAnim2001/boxman/protos/LOA1_WalkAnimation.wrl";
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
meta13.content = "Nancy kneel Animation HAnim 2001";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "identifier";
meta14.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d";
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
WorldInfo18.title = "LOA1_KneelAnimation.x3d";
children = new MFNode();

children[0] = WorldInfo18;

ProtoDeclare ProtoDeclare19 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
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
ProtoInterface ProtoInterface20 = createNode("ProtoInterface");
field field21 = createNode("field");
field21.name = "cycleInterval";
field21.accessType = "inputOutput";
field21.type = "SFTime";
field21.value = "2";
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
field23.value = "false";
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
PositionInterpolator58.key = new MFFloat(new float[0,0.3125,0.625,1]);
PositionInterpolator58.keyValue = new MFVec3f(new float[0,0,0,0,-0.049999,0,0,-0.195,0,0,-0.439997,0]);
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
OrientationInterpolator61.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0]);
IS IS62 = createNode("IS");
connect connect63 = createNode("connect");
connect63.nodeField = "value_changed";
connect63.protoField = "HumanoidRoot_rotation_changed";
IS62.connect = new MFNode();

IS62.connect[0] = connect63;

OrientationInterpolator61.iS = IS62;

Group48.children[2] = OrientationInterpolator61;

//no SACROILIAC_ANIMATOR
OrientationInterpolator OrientationInterpolator64 = createNode("OrientationInterpolator");
OrientationInterpolator64.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator64.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator64.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.619393,-1,0,0,1.069302,-1,0,0,1.937315]);
IS IS65 = createNode("IS");
connect connect66 = createNode("connect");
connect66.nodeField = "value_changed";
connect66.protoField = "l_hip_rotation_changed";
IS65.connect = new MFNode();

IS65.connect[0] = connect66;

OrientationInterpolator64.iS = IS65;

Group48.children[3] = OrientationInterpolator64;

OrientationInterpolator OrientationInterpolator67 = createNode("OrientationInterpolator");
OrientationInterpolator67.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator67.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator67.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.615228,1,0,0,0.984524,1,0,0,2.076941]);
IS IS68 = createNode("IS");
connect connect69 = createNode("connect");
connect69.nodeField = "value_changed";
connect69.protoField = "l_knee_rotation_changed";
IS68.connect = new MFNode();

IS68.connect[0] = connect69;

OrientationInterpolator67.iS = IS68;

Group48.children[4] = OrientationInterpolator67;

OrientationInterpolator OrientationInterpolator70 = createNode("OrientationInterpolator");
OrientationInterpolator70.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator70.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator70.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.017453,-1,0,0,0.069812,1,0,0,0.261799]);
IS IS71 = createNode("IS");
connect connect72 = createNode("connect");
connect72.nodeField = "value_changed";
connect72.protoField = "l_ankle_rotation_changed";
IS71.connect = new MFNode();

IS71.connect[0] = connect72;

OrientationInterpolator70.iS = IS71;

Group48.children[5] = OrientationInterpolator70;

//no L_MIDTARSAL_ANIMATOR
OrientationInterpolator OrientationInterpolator73 = createNode("OrientationInterpolator");
OrientationInterpolator73.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator73.key = new MFFloat(new float[0,0.3125,1]);
OrientationInterpolator73.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.523598,-1,0,0,0.157079]);
IS IS74 = createNode("IS");
connect connect75 = createNode("connect");
connect75.nodeField = "value_changed";
connect75.protoField = "r_hip_rotation_changed";
IS74.connect = new MFNode();

IS74.connect[0] = connect75;

OrientationInterpolator73.iS = IS74;

Group48.children[6] = OrientationInterpolator73;

OrientationInterpolator OrientationInterpolator76 = createNode("OrientationInterpolator");
OrientationInterpolator76.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator76.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator76.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.349065,1,0,0,1.023397,0.999934,0.008043,0.008185,1.727938]);
IS IS77 = createNode("IS");
connect connect78 = createNode("connect");
connect78.nodeField = "value_changed";
connect78.protoField = "r_knee_rotation_changed";
IS77.connect = new MFNode();

IS77.connect[0] = connect78;

OrientationInterpolator76.iS = IS77;

Group48.children[7] = OrientationInterpolator76;

OrientationInterpolator OrientationInterpolator79 = createNode("OrientationInterpolator");
OrientationInterpolator79.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator79.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator79.keyValue = new MFRotation(new float[1,0,0,0,-0.991692,-0.072372,0.106338,0.205053,-0.981083,-0.103267,0.163741,0.272231,-1,0,0,0.349065]);
IS IS80 = createNode("IS");
connect connect81 = createNode("connect");
connect81.nodeField = "value_changed";
connect81.protoField = "r_ankle_rotation_changed";
IS80.connect = new MFNode();

IS80.connect[0] = connect81;

OrientationInterpolator79.iS = IS80;

Group48.children[8] = OrientationInterpolator79;

//no R_MIDTARSAL_ANIMATOR
OrientationInterpolator OrientationInterpolator82 = createNode("OrientationInterpolator");
OrientationInterpolator82.DEF = "VL5_ANIMATOR";
OrientationInterpolator82.key = new MFFloat(new float[0,1]);
OrientationInterpolator82.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.174533]);
IS IS83 = createNode("IS");
connect connect84 = createNode("connect");
connect84.nodeField = "value_changed";
connect84.protoField = "vl5_rotation_changed";
IS83.connect = new MFNode();

IS83.connect[0] = connect84;

OrientationInterpolator82.iS = IS83;

Group48.children[9] = OrientationInterpolator82;

//no SKULLBASE_ANIMATOR
OrientationInterpolator OrientationInterpolator85 = createNode("OrientationInterpolator");
OrientationInterpolator85.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator85.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator85.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.279252,-1,0,0,0.506145,-1,0,0,0.191986]);
IS IS86 = createNode("IS");
connect connect87 = createNode("connect");
connect87.nodeField = "value_changed";
connect87.protoField = "l_shoulder_rotation_changed";
IS86.connect = new MFNode();

IS86.connect[0] = connect87;

OrientationInterpolator85.iS = IS86;

Group48.children[10] = OrientationInterpolator85;

OrientationInterpolator OrientationInterpolator88 = createNode("OrientationInterpolator");
OrientationInterpolator88.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator88.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator88.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.052359,-1,0,0,0.296706,-1,0,0,1.431169]);
IS IS89 = createNode("IS");
connect connect90 = createNode("connect");
connect90.nodeField = "value_changed";
connect90.protoField = "l_elbow_rotation_changed";
IS89.connect = new MFNode();

IS89.connect[0] = connect90;

OrientationInterpolator88.iS = IS89;

Group48.children[11] = OrientationInterpolator88;

//no L_WRIST_ANIMATOR
OrientationInterpolator OrientationInterpolator91 = createNode("OrientationInterpolator");
OrientationInterpolator91.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator91.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator91.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.104719,-1,0,0,0.157079,1,0,0,0.314159]);
IS IS92 = createNode("IS");
connect connect93 = createNode("connect");
connect93.nodeField = "value_changed";
connect93.protoField = "r_shoulder_rotation_changed";
IS92.connect = new MFNode();

IS92.connect[0] = connect93;

OrientationInterpolator91.iS = IS92;

Group48.children[12] = OrientationInterpolator91;

OrientationInterpolator OrientationInterpolator94 = createNode("OrientationInterpolator");
OrientationInterpolator94.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator94.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator94.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.837757,-1,0,0,1.239183,-1,0,0,1.500983]);
IS IS95 = createNode("IS");
connect connect96 = createNode("connect");
connect96.nodeField = "value_changed";
connect96.protoField = "r_elbow_rotation_changed";
IS95.connect = new MFNode();

IS95.connect[0] = connect96;

OrientationInterpolator94.iS = IS95;

Group48.children[13] = OrientationInterpolator94;

//no R_WRIST_ANIMATOR
ProtoBody47.children = new MFNode();

ProtoBody47.children[0] = Group48;

ROUTE ROUTE97 = createNode("ROUTE");
ROUTE97.fromField = "fraction_changed";
ROUTE97.fromNode = "TIMER";
ROUTE97.toField = "set_fraction";
ROUTE97.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ProtoBody47.children[1] = ROUTE97;

ROUTE ROUTE98 = createNode("ROUTE");
ROUTE98.fromField = "fraction_changed";
ROUTE98.fromNode = "TIMER";
ROUTE98.toField = "set_fraction";
ROUTE98.toNode = "HUMANOIDROOT_ANIMATOR";
ProtoBody47.children[2] = ROUTE98;

ROUTE ROUTE99 = createNode("ROUTE");
ROUTE99.fromField = "fraction_changed";
ROUTE99.fromNode = "TIMER";
ROUTE99.toField = "set_fraction";
ROUTE99.toNode = "L_HIP_ANIMATOR";
ProtoBody47.children[3] = ROUTE99;

ROUTE ROUTE100 = createNode("ROUTE");
ROUTE100.fromField = "fraction_changed";
ROUTE100.fromNode = "TIMER";
ROUTE100.toField = "set_fraction";
ROUTE100.toNode = "L_KNEE_ANIMATOR";
ProtoBody47.children[4] = ROUTE100;

ROUTE ROUTE101 = createNode("ROUTE");
ROUTE101.fromField = "fraction_changed";
ROUTE101.fromNode = "TIMER";
ROUTE101.toField = "set_fraction";
ROUTE101.toNode = "L_ANKLE_ANIMATOR";
ProtoBody47.children[5] = ROUTE101;

ROUTE ROUTE102 = createNode("ROUTE");
ROUTE102.fromField = "fraction_changed";
ROUTE102.fromNode = "TIMER";
ROUTE102.toField = "set_fraction";
ROUTE102.toNode = "R_HIP_ANIMATOR";
ProtoBody47.children[6] = ROUTE102;

ROUTE ROUTE103 = createNode("ROUTE");
ROUTE103.fromField = "fraction_changed";
ROUTE103.fromNode = "TIMER";
ROUTE103.toField = "set_fraction";
ROUTE103.toNode = "R_KNEE_ANIMATOR";
ProtoBody47.children[7] = ROUTE103;

ROUTE ROUTE104 = createNode("ROUTE");
ROUTE104.fromField = "fraction_changed";
ROUTE104.fromNode = "TIMER";
ROUTE104.toField = "set_fraction";
ROUTE104.toNode = "R_ANKLE_ANIMATOR";
ProtoBody47.children[8] = ROUTE104;

ROUTE ROUTE105 = createNode("ROUTE");
ROUTE105.fromField = "fraction_changed";
ROUTE105.fromNode = "TIMER";
ROUTE105.toField = "set_fraction";
ROUTE105.toNode = "VL5_ANIMATOR";
ProtoBody47.children[9] = ROUTE105;

ROUTE ROUTE106 = createNode("ROUTE");
ROUTE106.fromField = "fraction_changed";
ROUTE106.fromNode = "TIMER";
ROUTE106.toField = "set_fraction";
ROUTE106.toNode = "L_SHOULDER_ANIMATOR";
ProtoBody47.children[10] = ROUTE106;

ROUTE ROUTE107 = createNode("ROUTE");
ROUTE107.fromField = "fraction_changed";
ROUTE107.fromNode = "TIMER";
ROUTE107.toField = "set_fraction";
ROUTE107.toNode = "L_ELBOW_ANIMATOR";
ProtoBody47.children[11] = ROUTE107;

ROUTE ROUTE108 = createNode("ROUTE");
ROUTE108.fromField = "fraction_changed";
ROUTE108.fromNode = "TIMER";
ROUTE108.toField = "set_fraction";
ROUTE108.toNode = "R_SHOULDER_ANIMATOR";
ProtoBody47.children[12] = ROUTE108;

ROUTE ROUTE109 = createNode("ROUTE");
ROUTE109.fromField = "fraction_changed";
ROUTE109.fromNode = "TIMER";
ROUTE109.toField = "set_fraction";
ROUTE109.toNode = "R_ELBOW_ANIMATOR";
ProtoBody47.children[13] = ROUTE109;

ProtoDeclare19.protoBody = ProtoBody47;

children[1] = ProtoDeclare19;

Anchor Anchor110 = createNode("Anchor");
Anchor110.description = "InterchangableActorsViaDynamicRouting";
Anchor110.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor110.url = new MFString(new java.lang.String["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"]);
Shape Shape111 = createNode("Shape");
Text Text112 = createNode("Text");
Text112.string = new MFString(new java.lang.String["LOA1_KneelAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."]);
FontStyle FontStyle113 = createNode("FontStyle");
FontStyle113.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle113.size = 0.8;
Text112.fontStyle = FontStyle113;

Shape111.geometry = Text112;

Appearance Appearance114 = createNode("Appearance");
Material Material115 = createNode("Material");
Material115.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance114.material = Material115;

Shape111.appearance = Appearance114;

Anchor110.children = new MFNode();

Anchor110.children[0] = Shape111;

children[2] = Anchor110;

}
