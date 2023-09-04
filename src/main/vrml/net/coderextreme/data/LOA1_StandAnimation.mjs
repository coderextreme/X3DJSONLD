let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "LOA1_StandAnimation.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Humanoid animation prototype reusable by any Humanoid.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Cindy Ballreich cindy@ballreich.net 3Name3D, Joe Williams, Don Brutzman";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "rights";
meta5.content = "1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "translator";
meta6.content = "Ozan APAYDIN";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "created";
meta7.content = "1 December 2001";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "modified";
meta8.content = "23 May 2020";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "TODO";
meta9.content = "consider adding eyeball animation";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "reference";
meta11.content = "http://www.HAnim.org";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "reference";
meta12.content = "http://HAnim.org/Models";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "reference";
meta13.content = "http://HAnim.org/Nodes";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "subject";
meta14.content = "Nancy Stand Animation HAnim 2001";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "identifier";
meta15.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StandAnimation.x3d";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "generator";
meta16.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[14] = meta16;

head = head1;

let ProtoDeclare18 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
let ProtoInterface19 = browser.currentScene.createNode("ProtoInterface");
let field20 = browser.currentScene.createNode("field");
field20.accessType = "inputOutput";
field20.type = "SFTime";
field20.name = "cycleInterval";
field20.value = "0.00999999977648258";
ProtoInterface19.field = new MFNode();

ProtoInterface19.field[0] = field20;

let field21 = browser.currentScene.createNode("field");
field21.accessType = "inputOutput";
field21.type = "SFBool";
field21.name = "enabled";
field21.value = "true";
ProtoInterface19.field[1] = field21;

let field22 = browser.currentScene.createNode("field");
field22.accessType = "inputOutput";
field22.type = "SFBool";
field22.name = "loop";
field22.value = "true";
ProtoInterface19.field[2] = field22;

let field23 = browser.currentScene.createNode("field");
field23.accessType = "inputOutput";
field23.type = "SFTime";
field23.name = "startTime";
ProtoInterface19.field[3] = field23;

let field24 = browser.currentScene.createNode("field");
field24.accessType = "inputOutput";
field24.type = "SFTime";
field24.name = "stopTime";
field24.value = "-1";
ProtoInterface19.field[4] = field24;

let field25 = browser.currentScene.createNode("field");
field25.accessType = "outputOnly";
field25.type = "SFFloat";
field25.name = "fraction_changed";
ProtoInterface19.field[5] = field25;

let field26 = browser.currentScene.createNode("field");
field26.accessType = "outputOnly";
field26.type = "SFBool";
field26.name = "isActive";
ProtoInterface19.field[6] = field26;

let field27 = browser.currentScene.createNode("field");
field27.accessType = "outputOnly";
field27.type = "SFVec3f";
field27.name = "HumanoidRoot_translation_changed";
ProtoInterface19.field[7] = field27;

let field28 = browser.currentScene.createNode("field");
field28.accessType = "outputOnly";
field28.type = "SFRotation";
field28.name = "HumanoidRoot_rotation_changed";
ProtoInterface19.field[8] = field28;

let field29 = browser.currentScene.createNode("field");
field29.accessType = "outputOnly";
field29.type = "SFRotation";
field29.name = "lower_body_rotation_changed";
ProtoInterface19.field[9] = field29;

let field30 = browser.currentScene.createNode("field");
field30.accessType = "outputOnly";
field30.type = "SFRotation";
field30.name = "l_hip_rotation_changed";
ProtoInterface19.field[10] = field30;

let field31 = browser.currentScene.createNode("field");
field31.accessType = "outputOnly";
field31.type = "SFRotation";
field31.name = "l_knee_rotation_changed";
ProtoInterface19.field[11] = field31;

let field32 = browser.currentScene.createNode("field");
field32.accessType = "outputOnly";
field32.type = "SFRotation";
field32.name = "l_ankle_rotation_changed";
ProtoInterface19.field[12] = field32;

let field33 = browser.currentScene.createNode("field");
field33.accessType = "outputOnly";
field33.type = "SFRotation";
field33.name = "l_midtarsal_rotation_changed";
ProtoInterface19.field[13] = field33;

let field34 = browser.currentScene.createNode("field");
field34.accessType = "outputOnly";
field34.type = "SFRotation";
field34.name = "r_hip_rotation_changed";
ProtoInterface19.field[14] = field34;

let field35 = browser.currentScene.createNode("field");
field35.accessType = "outputOnly";
field35.type = "SFRotation";
field35.name = "r_knee_rotation_changed";
ProtoInterface19.field[15] = field35;

let field36 = browser.currentScene.createNode("field");
field36.accessType = "outputOnly";
field36.type = "SFRotation";
field36.name = "r_ankle_rotation_changed";
ProtoInterface19.field[16] = field36;

let field37 = browser.currentScene.createNode("field");
field37.accessType = "outputOnly";
field37.type = "SFRotation";
field37.name = "r_midtarsal_rotation_changed";
ProtoInterface19.field[17] = field37;

let field38 = browser.currentScene.createNode("field");
field38.accessType = "outputOnly";
field38.type = "SFRotation";
field38.name = "vl5_rotation_changed";
ProtoInterface19.field[18] = field38;

let field39 = browser.currentScene.createNode("field");
field39.accessType = "outputOnly";
field39.type = "SFRotation";
field39.name = "skullbase_rotation_changed";
ProtoInterface19.field[19] = field39;

let field40 = browser.currentScene.createNode("field");
field40.accessType = "outputOnly";
field40.type = "SFRotation";
field40.name = "l_shoulder_rotation_changed";
ProtoInterface19.field[20] = field40;

let field41 = browser.currentScene.createNode("field");
field41.accessType = "outputOnly";
field41.type = "SFRotation";
field41.name = "l_elbow_rotation_changed";
ProtoInterface19.field[21] = field41;

let field42 = browser.currentScene.createNode("field");
field42.accessType = "outputOnly";
field42.type = "SFRotation";
field42.name = "l_wrist_rotation_changed";
ProtoInterface19.field[22] = field42;

let field43 = browser.currentScene.createNode("field");
field43.accessType = "outputOnly";
field43.type = "SFRotation";
field43.name = "r_shoulder_rotation_changed";
ProtoInterface19.field[23] = field43;

let field44 = browser.currentScene.createNode("field");
field44.accessType = "outputOnly";
field44.type = "SFRotation";
field44.name = "r_elbow_rotation_changed";
ProtoInterface19.field[24] = field44;

let field45 = browser.currentScene.createNode("field");
field45.accessType = "outputOnly";
field45.type = "SFRotation";
field45.name = "r_wrist_rotation_changed";
ProtoInterface19.field[25] = field45;

ProtoDeclare18.protoInterface = ProtoInterface19;

let ProtoBody46 = browser.currentScene.createNode("ProtoBody");
let Group47 = browser.currentScene.createNode("Group");
let TimeSensor48 = browser.currentScene.createNode("TimeSensor");
TimeSensor48.DEF = "TIMER";
let IS49 = browser.currentScene.createNode("IS");
let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "enabled";
connect50.protoField = "enabled";
IS49.connect = new MFNode();

IS49.connect[0] = connect50;

let connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "cycleInterval";
connect51.protoField = "cycleInterval";
IS49.connect[1] = connect51;

let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "loop";
connect52.protoField = "loop";
IS49.connect[2] = connect52;

let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "startTime";
connect53.protoField = "startTime";
IS49.connect[3] = connect53;

let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "stopTime";
connect54.protoField = "stopTime";
IS49.connect[4] = connect54;

let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "isActive";
connect55.protoField = "isActive";
IS49.connect[5] = connect55;

let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "fraction_changed";
connect56.protoField = "fraction_changed";
IS49.connect[6] = connect56;

TimeSensor48.iS = IS49;

Group47.children = new MFNode();

Group47.children[0] = TimeSensor48;

let PositionInterpolator57 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator57.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator57.key = new MFFloat(new float[0,1]);
PositionInterpolator57.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
let IS58 = browser.currentScene.createNode("IS");
let connect59 = browser.currentScene.createNode("connect");
connect59.nodeField = "value_changed";
connect59.protoField = "HumanoidRoot_translation_changed";
IS58.connect = new MFNode();

IS58.connect[0] = connect59;

PositionInterpolator57.iS = IS58;

Group47.children[1] = PositionInterpolator57;

let OrientationInterpolator60 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator60.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator60.key = new MFFloat(new float[0,1]);
OrientationInterpolator60.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS61 = browser.currentScene.createNode("IS");
let connect62 = browser.currentScene.createNode("connect");
connect62.nodeField = "value_changed";
connect62.protoField = "HumanoidRoot_rotation_changed";
IS61.connect = new MFNode();

IS61.connect[0] = connect62;

OrientationInterpolator60.iS = IS61;

Group47.children[2] = OrientationInterpolator60;

let OrientationInterpolator63 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator63.DEF = "SACROILIAC_ANIMATOR";
OrientationInterpolator63.key = new MFFloat(new float[0,1]);
OrientationInterpolator63.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS64 = browser.currentScene.createNode("IS");
let connect65 = browser.currentScene.createNode("connect");
connect65.nodeField = "value_changed";
connect65.protoField = "lower_body_rotation_changed";
IS64.connect = new MFNode();

IS64.connect[0] = connect65;

OrientationInterpolator63.iS = IS64;

Group47.children[3] = OrientationInterpolator63;

let OrientationInterpolator66 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator66.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator66.key = new MFFloat(new float[0,1]);
OrientationInterpolator66.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS67 = browser.currentScene.createNode("IS");
let connect68 = browser.currentScene.createNode("connect");
connect68.nodeField = "value_changed";
connect68.protoField = "l_hip_rotation_changed";
IS67.connect = new MFNode();

IS67.connect[0] = connect68;

OrientationInterpolator66.iS = IS67;

Group47.children[4] = OrientationInterpolator66;

let OrientationInterpolator69 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator69.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator69.key = new MFFloat(new float[0,1]);
OrientationInterpolator69.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS70 = browser.currentScene.createNode("IS");
let connect71 = browser.currentScene.createNode("connect");
connect71.nodeField = "value_changed";
connect71.protoField = "l_knee_rotation_changed";
IS70.connect = new MFNode();

IS70.connect[0] = connect71;

OrientationInterpolator69.iS = IS70;

Group47.children[5] = OrientationInterpolator69;

let OrientationInterpolator72 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator72.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator72.key = new MFFloat(new float[0,1]);
OrientationInterpolator72.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS73 = browser.currentScene.createNode("IS");
let connect74 = browser.currentScene.createNode("connect");
connect74.nodeField = "value_changed";
connect74.protoField = "l_ankle_rotation_changed";
IS73.connect = new MFNode();

IS73.connect[0] = connect74;

OrientationInterpolator72.iS = IS73;

Group47.children[6] = OrientationInterpolator72;

let OrientationInterpolator75 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator75.DEF = "L_MIDTARSAL_ANIMATOR";
OrientationInterpolator75.key = new MFFloat(new float[0,1]);
OrientationInterpolator75.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0]);
let IS76 = browser.currentScene.createNode("IS");
let connect77 = browser.currentScene.createNode("connect");
connect77.nodeField = "value_changed";
connect77.protoField = "l_midtarsal_rotation_changed";
IS76.connect = new MFNode();

IS76.connect[0] = connect77;

OrientationInterpolator75.iS = IS76;

Group47.children[7] = OrientationInterpolator75;

let OrientationInterpolator78 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator78.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator78.key = new MFFloat(new float[0,1]);
OrientationInterpolator78.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS79 = browser.currentScene.createNode("IS");
let connect80 = browser.currentScene.createNode("connect");
connect80.nodeField = "value_changed";
connect80.protoField = "r_hip_rotation_changed";
IS79.connect = new MFNode();

IS79.connect[0] = connect80;

OrientationInterpolator78.iS = IS79;

Group47.children[8] = OrientationInterpolator78;

let OrientationInterpolator81 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator81.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator81.key = new MFFloat(new float[0,1]);
OrientationInterpolator81.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS82 = browser.currentScene.createNode("IS");
let connect83 = browser.currentScene.createNode("connect");
connect83.nodeField = "value_changed";
connect83.protoField = "r_knee_rotation_changed";
IS82.connect = new MFNode();

IS82.connect[0] = connect83;

OrientationInterpolator81.iS = IS82;

Group47.children[9] = OrientationInterpolator81;

let OrientationInterpolator84 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator84.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator84.key = new MFFloat(new float[0,1]);
OrientationInterpolator84.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS85 = browser.currentScene.createNode("IS");
let connect86 = browser.currentScene.createNode("connect");
connect86.nodeField = "value_changed";
connect86.protoField = "r_ankle_rotation_changed";
IS85.connect = new MFNode();

IS85.connect[0] = connect86;

OrientationInterpolator84.iS = IS85;

Group47.children[10] = OrientationInterpolator84;

let OrientationInterpolator87 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator87.DEF = "R_MIDTARSAL_ANIMATOR";
OrientationInterpolator87.key = new MFFloat(new float[0,1]);
OrientationInterpolator87.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0]);
let IS88 = browser.currentScene.createNode("IS");
let connect89 = browser.currentScene.createNode("connect");
connect89.nodeField = "value_changed";
connect89.protoField = "r_midtarsal_rotation_changed";
IS88.connect = new MFNode();

IS88.connect[0] = connect89;

OrientationInterpolator87.iS = IS88;

Group47.children[11] = OrientationInterpolator87;

let OrientationInterpolator90 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator90.DEF = "VL5_ANIMATOR";
OrientationInterpolator90.key = new MFFloat(new float[0,1]);
OrientationInterpolator90.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS91 = browser.currentScene.createNode("IS");
let connect92 = browser.currentScene.createNode("connect");
connect92.nodeField = "value_changed";
connect92.protoField = "vl5_rotation_changed";
IS91.connect = new MFNode();

IS91.connect[0] = connect92;

OrientationInterpolator90.iS = IS91;

Group47.children[12] = OrientationInterpolator90;

let OrientationInterpolator93 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator93.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator93.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator93.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,0,0,1,0]);
let IS94 = browser.currentScene.createNode("IS");
let connect95 = browser.currentScene.createNode("connect");
connect95.nodeField = "value_changed";
connect95.protoField = "skullbase_rotation_changed";
IS94.connect = new MFNode();

IS94.connect[0] = connect95;

OrientationInterpolator93.iS = IS94;

Group47.children[13] = OrientationInterpolator93;

let OrientationInterpolator96 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator96.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator96.key = new MFFloat(new float[0,1]);
OrientationInterpolator96.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS97 = browser.currentScene.createNode("IS");
let connect98 = browser.currentScene.createNode("connect");
connect98.nodeField = "value_changed";
connect98.protoField = "l_shoulder_rotation_changed";
IS97.connect = new MFNode();

IS97.connect[0] = connect98;

OrientationInterpolator96.iS = IS97;

Group47.children[14] = OrientationInterpolator96;

let OrientationInterpolator99 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator99.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator99.key = new MFFloat(new float[0,1]);
OrientationInterpolator99.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS100 = browser.currentScene.createNode("IS");
let connect101 = browser.currentScene.createNode("connect");
connect101.nodeField = "value_changed";
connect101.protoField = "l_elbow_rotation_changed";
IS100.connect = new MFNode();

IS100.connect[0] = connect101;

OrientationInterpolator99.iS = IS100;

Group47.children[15] = OrientationInterpolator99;

let OrientationInterpolator102 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator102.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator102.key = new MFFloat(new float[0,1]);
OrientationInterpolator102.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS103 = browser.currentScene.createNode("IS");
let connect104 = browser.currentScene.createNode("connect");
connect104.nodeField = "value_changed";
connect104.protoField = "l_wrist_rotation_changed";
IS103.connect = new MFNode();

IS103.connect[0] = connect104;

OrientationInterpolator102.iS = IS103;

Group47.children[16] = OrientationInterpolator102;

let OrientationInterpolator105 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator105.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator105.key = new MFFloat(new float[0,1]);
OrientationInterpolator105.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS106 = browser.currentScene.createNode("IS");
let connect107 = browser.currentScene.createNode("connect");
connect107.nodeField = "value_changed";
connect107.protoField = "r_shoulder_rotation_changed";
IS106.connect = new MFNode();

IS106.connect[0] = connect107;

OrientationInterpolator105.iS = IS106;

Group47.children[17] = OrientationInterpolator105;

let OrientationInterpolator108 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator108.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator108.key = new MFFloat(new float[0,1]);
OrientationInterpolator108.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS109 = browser.currentScene.createNode("IS");
let connect110 = browser.currentScene.createNode("connect");
connect110.nodeField = "value_changed";
connect110.protoField = "r_elbow_rotation_changed";
IS109.connect = new MFNode();

IS109.connect[0] = connect110;

OrientationInterpolator108.iS = IS109;

Group47.children[18] = OrientationInterpolator108;

let OrientationInterpolator111 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator111.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator111.key = new MFFloat(new float[0,1]);
OrientationInterpolator111.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS112 = browser.currentScene.createNode("IS");
let connect113 = browser.currentScene.createNode("connect");
connect113.nodeField = "value_changed";
connect113.protoField = "r_wrist_rotation_changed";
IS112.connect = new MFNode();

IS112.connect[0] = connect113;

OrientationInterpolator111.iS = IS112;

Group47.children[19] = OrientationInterpolator111;

ProtoBody46.children = new MFNode();

ProtoBody46.children[0] = Group47;

let ROUTE114 = browser.currentScene.createNode("ROUTE");
ROUTE114.fromNode = "TIMER";
ROUTE114.fromField = "fraction_changed";
ROUTE114.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ROUTE114.toField = "set_fraction";
ProtoBody46.children[1] = ROUTE114;

let ROUTE115 = browser.currentScene.createNode("ROUTE");
ROUTE115.fromNode = "TIMER";
ROUTE115.fromField = "fraction_changed";
ROUTE115.toNode = "HUMANOIDROOT_ANIMATOR";
ROUTE115.toField = "set_fraction";
ProtoBody46.children[2] = ROUTE115;

let ROUTE116 = browser.currentScene.createNode("ROUTE");
ROUTE116.fromNode = "TIMER";
ROUTE116.fromField = "fraction_changed";
ROUTE116.toNode = "SACROILIAC_ANIMATOR";
ROUTE116.toField = "set_fraction";
ProtoBody46.children[3] = ROUTE116;

let ROUTE117 = browser.currentScene.createNode("ROUTE");
ROUTE117.fromNode = "TIMER";
ROUTE117.fromField = "fraction_changed";
ROUTE117.toNode = "L_HIP_ANIMATOR";
ROUTE117.toField = "set_fraction";
ProtoBody46.children[4] = ROUTE117;

let ROUTE118 = browser.currentScene.createNode("ROUTE");
ROUTE118.fromNode = "TIMER";
ROUTE118.fromField = "fraction_changed";
ROUTE118.toNode = "L_KNEE_ANIMATOR";
ROUTE118.toField = "set_fraction";
ProtoBody46.children[5] = ROUTE118;

let ROUTE119 = browser.currentScene.createNode("ROUTE");
ROUTE119.fromNode = "TIMER";
ROUTE119.fromField = "fraction_changed";
ROUTE119.toNode = "L_ANKLE_ANIMATOR";
ROUTE119.toField = "set_fraction";
ProtoBody46.children[6] = ROUTE119;

let ROUTE120 = browser.currentScene.createNode("ROUTE");
ROUTE120.fromNode = "TIMER";
ROUTE120.fromField = "fraction_changed";
ROUTE120.toNode = "L_MIDTARSAL_ANIMATOR";
ROUTE120.toField = "set_fraction";
ProtoBody46.children[7] = ROUTE120;

let ROUTE121 = browser.currentScene.createNode("ROUTE");
ROUTE121.fromNode = "TIMER";
ROUTE121.fromField = "fraction_changed";
ROUTE121.toNode = "R_HIP_ANIMATOR";
ROUTE121.toField = "set_fraction";
ProtoBody46.children[8] = ROUTE121;

let ROUTE122 = browser.currentScene.createNode("ROUTE");
ROUTE122.fromNode = "TIMER";
ROUTE122.fromField = "fraction_changed";
ROUTE122.toNode = "R_KNEE_ANIMATOR";
ROUTE122.toField = "set_fraction";
ProtoBody46.children[9] = ROUTE122;

let ROUTE123 = browser.currentScene.createNode("ROUTE");
ROUTE123.fromNode = "TIMER";
ROUTE123.fromField = "fraction_changed";
ROUTE123.toNode = "R_ANKLE_ANIMATOR";
ROUTE123.toField = "set_fraction";
ProtoBody46.children[10] = ROUTE123;

let ROUTE124 = browser.currentScene.createNode("ROUTE");
ROUTE124.fromNode = "TIMER";
ROUTE124.fromField = "fraction_changed";
ROUTE124.toNode = "R_MIDTARSAL_ANIMATOR";
ROUTE124.toField = "set_fraction";
ProtoBody46.children[11] = ROUTE124;

let ROUTE125 = browser.currentScene.createNode("ROUTE");
ROUTE125.fromNode = "TIMER";
ROUTE125.fromField = "fraction_changed";
ROUTE125.toNode = "VL5_ANIMATOR";
ROUTE125.toField = "set_fraction";
ProtoBody46.children[12] = ROUTE125;

let ROUTE126 = browser.currentScene.createNode("ROUTE");
ROUTE126.fromNode = "TIMER";
ROUTE126.fromField = "fraction_changed";
ROUTE126.toNode = "SKULLBASE_ANIMATOR";
ROUTE126.toField = "set_fraction";
ProtoBody46.children[13] = ROUTE126;

let ROUTE127 = browser.currentScene.createNode("ROUTE");
ROUTE127.fromNode = "TIMER";
ROUTE127.fromField = "fraction_changed";
ROUTE127.toNode = "L_SHOULDER_ANIMATOR";
ROUTE127.toField = "set_fraction";
ProtoBody46.children[14] = ROUTE127;

let ROUTE128 = browser.currentScene.createNode("ROUTE");
ROUTE128.fromNode = "TIMER";
ROUTE128.fromField = "fraction_changed";
ROUTE128.toNode = "L_ELBOW_ANIMATOR";
ROUTE128.toField = "set_fraction";
ProtoBody46.children[15] = ROUTE128;

let ROUTE129 = browser.currentScene.createNode("ROUTE");
ROUTE129.fromNode = "TIMER";
ROUTE129.fromField = "fraction_changed";
ROUTE129.toNode = "L_WRIST_ANIMATOR";
ROUTE129.toField = "set_fraction";
ProtoBody46.children[16] = ROUTE129;

let ROUTE130 = browser.currentScene.createNode("ROUTE");
ROUTE130.fromNode = "TIMER";
ROUTE130.fromField = "fraction_changed";
ROUTE130.toNode = "R_SHOULDER_ANIMATOR";
ROUTE130.toField = "set_fraction";
ProtoBody46.children[17] = ROUTE130;

let ROUTE131 = browser.currentScene.createNode("ROUTE");
ROUTE131.fromNode = "TIMER";
ROUTE131.fromField = "fraction_changed";
ROUTE131.toNode = "R_ELBOW_ANIMATOR";
ROUTE131.toField = "set_fraction";
ProtoBody46.children[18] = ROUTE131;

let ROUTE132 = browser.currentScene.createNode("ROUTE");
ROUTE132.fromNode = "TIMER";
ROUTE132.fromField = "fraction_changed";
ROUTE132.toNode = "R_WRIST_ANIMATOR";
ROUTE132.toField = "set_fraction";
ProtoBody46.children[19] = ROUTE132;

ProtoDeclare18.protoBody = ProtoBody46;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare18;

let WorldInfo133 = browser.currentScene.createNode("WorldInfo");
WorldInfo133.title = "LOA1_StandAnimation.x3d";
browser.currentScene.children[1] = WorldInfo133;

let Anchor134 = browser.currentScene.createNode("Anchor");
Anchor134.description = "InterchangableActorsViaDynamicRouting";
Anchor134.url = new MFString(new java.lang.String["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"]);
Anchor134.parameter = new MFString(new java.lang.String["target=_blank"]);
let Shape135 = browser.currentScene.createNode("Shape");
let Appearance136 = browser.currentScene.createNode("Appearance");
let Material137 = browser.currentScene.createNode("Material");
Material137.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance136.material = Material137;

Shape135.appearance = Appearance136;

let Text138 = browser.currentScene.createNode("Text");
Text138.string = new MFString(new java.lang.String["LOA1_StandAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."]);
let FontStyle139 = browser.currentScene.createNode("FontStyle");
FontStyle139.size = 0.8;
FontStyle139.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text138.fontStyle = FontStyle139;

Shape135.geometry = Text138;

Anchor134.children = new MFNode();

Anchor134.children[0] = Shape135;

browser.currentScene.children[2] = Anchor134;

