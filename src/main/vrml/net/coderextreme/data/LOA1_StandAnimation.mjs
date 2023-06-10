let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
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

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "license";
meta17.content = "../license.html";
head1.meta[15] = meta17;

head = head1;

let WorldInfo19 = browser.currentScene.createNode("WorldInfo");
WorldInfo19.title = "LOA1_StandAnimation.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo19;

let ProtoDeclare20 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="LOA1_StandAnimation" ><ProtoInterface><field name="cycleInterval" accessType="inputOutput" type="SFTime" value="0.009999999776482582"></field>
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
ProtoDeclare20.name = "LOA1_StandAnimation";
let ProtoInterface21 = browser.currentScene.createNode("ProtoInterface");
let field22 = browser.currentScene.createNode("field");
field22.name = "cycleInterval";
field22.accessType = "inputOutput";
field22.type = "SFTime";
field22.value = "0.009999999776482582";
ProtoInterface21.field = new MFNode();

ProtoInterface21.field[0] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "enabled";
field23.accessType = "inputOutput";
field23.type = "SFBool";
field23.value = "true";
ProtoInterface21.field[1] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "loop";
field24.accessType = "inputOutput";
field24.type = "SFBool";
field24.value = "true";
ProtoInterface21.field[2] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "startTime";
field25.accessType = "inputOutput";
field25.type = "SFTime";
field25.value = "0";
ProtoInterface21.field[3] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "stopTime";
field26.accessType = "inputOutput";
field26.type = "SFTime";
field26.value = "-1";
ProtoInterface21.field[4] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "fraction_changed";
field27.accessType = "outputOnly";
field27.type = "SFFloat";
ProtoInterface21.field[5] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "isActive";
field28.accessType = "outputOnly";
field28.type = "SFBool";
ProtoInterface21.field[6] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "HumanoidRoot_translation_changed";
field29.accessType = "outputOnly";
field29.type = "SFVec3f";
ProtoInterface21.field[7] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "HumanoidRoot_rotation_changed";
field30.accessType = "outputOnly";
field30.type = "SFRotation";
ProtoInterface21.field[8] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "lower_body_rotation_changed";
field31.accessType = "outputOnly";
field31.type = "SFRotation";
ProtoInterface21.field[9] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "l_hip_rotation_changed";
field32.accessType = "outputOnly";
field32.type = "SFRotation";
ProtoInterface21.field[10] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "l_knee_rotation_changed";
field33.accessType = "outputOnly";
field33.type = "SFRotation";
ProtoInterface21.field[11] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "l_ankle_rotation_changed";
field34.accessType = "outputOnly";
field34.type = "SFRotation";
ProtoInterface21.field[12] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "l_midtarsal_rotation_changed";
field35.accessType = "outputOnly";
field35.type = "SFRotation";
ProtoInterface21.field[13] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "r_hip_rotation_changed";
field36.accessType = "outputOnly";
field36.type = "SFRotation";
ProtoInterface21.field[14] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "r_knee_rotation_changed";
field37.accessType = "outputOnly";
field37.type = "SFRotation";
ProtoInterface21.field[15] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "r_ankle_rotation_changed";
field38.accessType = "outputOnly";
field38.type = "SFRotation";
ProtoInterface21.field[16] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "r_midtarsal_rotation_changed";
field39.accessType = "outputOnly";
field39.type = "SFRotation";
ProtoInterface21.field[17] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "vl5_rotation_changed";
field40.accessType = "outputOnly";
field40.type = "SFRotation";
ProtoInterface21.field[18] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "skullbase_rotation_changed";
field41.accessType = "outputOnly";
field41.type = "SFRotation";
ProtoInterface21.field[19] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "l_shoulder_rotation_changed";
field42.accessType = "outputOnly";
field42.type = "SFRotation";
ProtoInterface21.field[20] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "l_elbow_rotation_changed";
field43.accessType = "outputOnly";
field43.type = "SFRotation";
ProtoInterface21.field[21] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "l_wrist_rotation_changed";
field44.accessType = "outputOnly";
field44.type = "SFRotation";
ProtoInterface21.field[22] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "r_shoulder_rotation_changed";
field45.accessType = "outputOnly";
field45.type = "SFRotation";
ProtoInterface21.field[23] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "r_elbow_rotation_changed";
field46.accessType = "outputOnly";
field46.type = "SFRotation";
ProtoInterface21.field[24] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "r_wrist_rotation_changed";
field47.accessType = "outputOnly";
field47.type = "SFRotation";
ProtoInterface21.field[25] = field47;

ProtoDeclare20.protoInterface = ProtoInterface21;

let ProtoBody48 = browser.currentScene.createNode("ProtoBody");
let Group49 = browser.currentScene.createNode("Group");
let TimeSensor50 = browser.currentScene.createNode("TimeSensor");
TimeSensor50.DEF = "TIMER";
let IS51 = browser.currentScene.createNode("IS");
let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "cycleInterval";
connect52.protoField = "cycleInterval";
IS51.connect = new MFNode();

IS51.connect[0] = connect52;

let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "enabled";
connect53.protoField = "enabled";
IS51.connect[1] = connect53;

let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "loop";
connect54.protoField = "loop";
IS51.connect[2] = connect54;

let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "startTime";
connect55.protoField = "startTime";
IS51.connect[3] = connect55;

let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "stopTime";
connect56.protoField = "stopTime";
IS51.connect[4] = connect56;

let connect57 = browser.currentScene.createNode("connect");
connect57.nodeField = "fraction_changed";
connect57.protoField = "fraction_changed";
IS51.connect[5] = connect57;

let connect58 = browser.currentScene.createNode("connect");
connect58.nodeField = "isActive";
connect58.protoField = "isActive";
IS51.connect[6] = connect58;

TimeSensor50.iS = IS51;

Group49.children = new MFNode();

Group49.children[0] = TimeSensor50;

let PositionInterpolator59 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator59.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator59.key = new MFFloat(new float[0,1]);
PositionInterpolator59.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
let IS60 = browser.currentScene.createNode("IS");
let connect61 = browser.currentScene.createNode("connect");
connect61.nodeField = "value_changed";
connect61.protoField = "HumanoidRoot_translation_changed";
IS60.connect = new MFNode();

IS60.connect[0] = connect61;

PositionInterpolator59.iS = IS60;

Group49.children[1] = PositionInterpolator59;

let OrientationInterpolator62 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator62.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator62.key = new MFFloat(new float[0,1]);
OrientationInterpolator62.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS63 = browser.currentScene.createNode("IS");
let connect64 = browser.currentScene.createNode("connect");
connect64.nodeField = "value_changed";
connect64.protoField = "HumanoidRoot_rotation_changed";
IS63.connect = new MFNode();

IS63.connect[0] = connect64;

OrientationInterpolator62.iS = IS63;

Group49.children[2] = OrientationInterpolator62;

let OrientationInterpolator65 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator65.DEF = "SACROILIAC_ANIMATOR";
OrientationInterpolator65.key = new MFFloat(new float[0,1]);
OrientationInterpolator65.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS66 = browser.currentScene.createNode("IS");
let connect67 = browser.currentScene.createNode("connect");
connect67.nodeField = "value_changed";
connect67.protoField = "lower_body_rotation_changed";
IS66.connect = new MFNode();

IS66.connect[0] = connect67;

OrientationInterpolator65.iS = IS66;

Group49.children[3] = OrientationInterpolator65;

let OrientationInterpolator68 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator68.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator68.key = new MFFloat(new float[0,1]);
OrientationInterpolator68.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS69 = browser.currentScene.createNode("IS");
let connect70 = browser.currentScene.createNode("connect");
connect70.nodeField = "value_changed";
connect70.protoField = "l_hip_rotation_changed";
IS69.connect = new MFNode();

IS69.connect[0] = connect70;

OrientationInterpolator68.iS = IS69;

Group49.children[4] = OrientationInterpolator68;

let OrientationInterpolator71 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator71.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator71.key = new MFFloat(new float[0,1]);
OrientationInterpolator71.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS72 = browser.currentScene.createNode("IS");
let connect73 = browser.currentScene.createNode("connect");
connect73.nodeField = "value_changed";
connect73.protoField = "l_knee_rotation_changed";
IS72.connect = new MFNode();

IS72.connect[0] = connect73;

OrientationInterpolator71.iS = IS72;

Group49.children[5] = OrientationInterpolator71;

let OrientationInterpolator74 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator74.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator74.key = new MFFloat(new float[0,1]);
OrientationInterpolator74.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS75 = browser.currentScene.createNode("IS");
let connect76 = browser.currentScene.createNode("connect");
connect76.nodeField = "value_changed";
connect76.protoField = "l_ankle_rotation_changed";
IS75.connect = new MFNode();

IS75.connect[0] = connect76;

OrientationInterpolator74.iS = IS75;

Group49.children[6] = OrientationInterpolator74;

let OrientationInterpolator77 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator77.DEF = "L_MIDTARSAL_ANIMATOR";
OrientationInterpolator77.key = new MFFloat(new float[0,1]);
OrientationInterpolator77.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0]);
let IS78 = browser.currentScene.createNode("IS");
let connect79 = browser.currentScene.createNode("connect");
connect79.nodeField = "value_changed";
connect79.protoField = "l_midtarsal_rotation_changed";
IS78.connect = new MFNode();

IS78.connect[0] = connect79;

OrientationInterpolator77.iS = IS78;

Group49.children[7] = OrientationInterpolator77;

let OrientationInterpolator80 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator80.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator80.key = new MFFloat(new float[0,1]);
OrientationInterpolator80.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS81 = browser.currentScene.createNode("IS");
let connect82 = browser.currentScene.createNode("connect");
connect82.nodeField = "value_changed";
connect82.protoField = "r_hip_rotation_changed";
IS81.connect = new MFNode();

IS81.connect[0] = connect82;

OrientationInterpolator80.iS = IS81;

Group49.children[8] = OrientationInterpolator80;

let OrientationInterpolator83 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator83.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator83.key = new MFFloat(new float[0,1]);
OrientationInterpolator83.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS84 = browser.currentScene.createNode("IS");
let connect85 = browser.currentScene.createNode("connect");
connect85.nodeField = "value_changed";
connect85.protoField = "r_knee_rotation_changed";
IS84.connect = new MFNode();

IS84.connect[0] = connect85;

OrientationInterpolator83.iS = IS84;

Group49.children[9] = OrientationInterpolator83;

let OrientationInterpolator86 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator86.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator86.key = new MFFloat(new float[0,1]);
OrientationInterpolator86.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS87 = browser.currentScene.createNode("IS");
let connect88 = browser.currentScene.createNode("connect");
connect88.nodeField = "value_changed";
connect88.protoField = "r_ankle_rotation_changed";
IS87.connect = new MFNode();

IS87.connect[0] = connect88;

OrientationInterpolator86.iS = IS87;

Group49.children[10] = OrientationInterpolator86;

let OrientationInterpolator89 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator89.DEF = "R_MIDTARSAL_ANIMATOR";
OrientationInterpolator89.key = new MFFloat(new float[0,1]);
OrientationInterpolator89.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0]);
let IS90 = browser.currentScene.createNode("IS");
let connect91 = browser.currentScene.createNode("connect");
connect91.nodeField = "value_changed";
connect91.protoField = "r_midtarsal_rotation_changed";
IS90.connect = new MFNode();

IS90.connect[0] = connect91;

OrientationInterpolator89.iS = IS90;

Group49.children[11] = OrientationInterpolator89;

let OrientationInterpolator92 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator92.DEF = "VL5_ANIMATOR";
OrientationInterpolator92.key = new MFFloat(new float[0,1]);
OrientationInterpolator92.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS93 = browser.currentScene.createNode("IS");
let connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "value_changed";
connect94.protoField = "vl5_rotation_changed";
IS93.connect = new MFNode();

IS93.connect[0] = connect94;

OrientationInterpolator92.iS = IS93;

Group49.children[12] = OrientationInterpolator92;

let OrientationInterpolator95 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator95.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator95.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator95.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.5,0,0,1,0]);
let IS96 = browser.currentScene.createNode("IS");
let connect97 = browser.currentScene.createNode("connect");
connect97.nodeField = "value_changed";
connect97.protoField = "skullbase_rotation_changed";
IS96.connect = new MFNode();

IS96.connect[0] = connect97;

OrientationInterpolator95.iS = IS96;

Group49.children[13] = OrientationInterpolator95;

let OrientationInterpolator98 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator98.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator98.key = new MFFloat(new float[0,1]);
OrientationInterpolator98.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS99 = browser.currentScene.createNode("IS");
let connect100 = browser.currentScene.createNode("connect");
connect100.nodeField = "value_changed";
connect100.protoField = "l_shoulder_rotation_changed";
IS99.connect = new MFNode();

IS99.connect[0] = connect100;

OrientationInterpolator98.iS = IS99;

Group49.children[14] = OrientationInterpolator98;

let OrientationInterpolator101 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator101.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator101.key = new MFFloat(new float[0,1]);
OrientationInterpolator101.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS102 = browser.currentScene.createNode("IS");
let connect103 = browser.currentScene.createNode("connect");
connect103.nodeField = "value_changed";
connect103.protoField = "l_elbow_rotation_changed";
IS102.connect = new MFNode();

IS102.connect[0] = connect103;

OrientationInterpolator101.iS = IS102;

Group49.children[15] = OrientationInterpolator101;

let OrientationInterpolator104 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator104.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator104.key = new MFFloat(new float[0,1]);
OrientationInterpolator104.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS105 = browser.currentScene.createNode("IS");
let connect106 = browser.currentScene.createNode("connect");
connect106.nodeField = "value_changed";
connect106.protoField = "l_wrist_rotation_changed";
IS105.connect = new MFNode();

IS105.connect[0] = connect106;

OrientationInterpolator104.iS = IS105;

Group49.children[16] = OrientationInterpolator104;

let OrientationInterpolator107 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator107.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator107.key = new MFFloat(new float[0,1]);
OrientationInterpolator107.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS108 = browser.currentScene.createNode("IS");
let connect109 = browser.currentScene.createNode("connect");
connect109.nodeField = "value_changed";
connect109.protoField = "r_shoulder_rotation_changed";
IS108.connect = new MFNode();

IS108.connect[0] = connect109;

OrientationInterpolator107.iS = IS108;

Group49.children[17] = OrientationInterpolator107;

let OrientationInterpolator110 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator110.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator110.key = new MFFloat(new float[0,1]);
OrientationInterpolator110.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS111 = browser.currentScene.createNode("IS");
let connect112 = browser.currentScene.createNode("connect");
connect112.nodeField = "value_changed";
connect112.protoField = "r_elbow_rotation_changed";
IS111.connect = new MFNode();

IS111.connect[0] = connect112;

OrientationInterpolator110.iS = IS111;

Group49.children[18] = OrientationInterpolator110;

let OrientationInterpolator113 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator113.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator113.key = new MFFloat(new float[0,1]);
OrientationInterpolator113.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
let IS114 = browser.currentScene.createNode("IS");
let connect115 = browser.currentScene.createNode("connect");
connect115.nodeField = "value_changed";
connect115.protoField = "r_wrist_rotation_changed";
IS114.connect = new MFNode();

IS114.connect[0] = connect115;

OrientationInterpolator113.iS = IS114;

Group49.children[19] = OrientationInterpolator113;

ProtoBody48.children = new MFNode();

ProtoBody48.children[0] = Group49;

let ROUTE116 = browser.currentScene.createNode("ROUTE");
ROUTE116.fromField = "fraction_changed";
ROUTE116.fromNode = "TIMER";
ROUTE116.toField = "set_fraction";
ROUTE116.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ProtoBody48.children[1] = ROUTE116;

let ROUTE117 = browser.currentScene.createNode("ROUTE");
ROUTE117.fromField = "fraction_changed";
ROUTE117.fromNode = "TIMER";
ROUTE117.toField = "set_fraction";
ROUTE117.toNode = "HUMANOIDROOT_ANIMATOR";
ProtoBody48.children[2] = ROUTE117;

let ROUTE118 = browser.currentScene.createNode("ROUTE");
ROUTE118.fromField = "fraction_changed";
ROUTE118.fromNode = "TIMER";
ROUTE118.toField = "set_fraction";
ROUTE118.toNode = "SACROILIAC_ANIMATOR";
ProtoBody48.children[3] = ROUTE118;

let ROUTE119 = browser.currentScene.createNode("ROUTE");
ROUTE119.fromField = "fraction_changed";
ROUTE119.fromNode = "TIMER";
ROUTE119.toField = "set_fraction";
ROUTE119.toNode = "L_HIP_ANIMATOR";
ProtoBody48.children[4] = ROUTE119;

let ROUTE120 = browser.currentScene.createNode("ROUTE");
ROUTE120.fromField = "fraction_changed";
ROUTE120.fromNode = "TIMER";
ROUTE120.toField = "set_fraction";
ROUTE120.toNode = "L_KNEE_ANIMATOR";
ProtoBody48.children[5] = ROUTE120;

let ROUTE121 = browser.currentScene.createNode("ROUTE");
ROUTE121.fromField = "fraction_changed";
ROUTE121.fromNode = "TIMER";
ROUTE121.toField = "set_fraction";
ROUTE121.toNode = "L_ANKLE_ANIMATOR";
ProtoBody48.children[6] = ROUTE121;

let ROUTE122 = browser.currentScene.createNode("ROUTE");
ROUTE122.fromField = "fraction_changed";
ROUTE122.fromNode = "TIMER";
ROUTE122.toField = "set_fraction";
ROUTE122.toNode = "L_MIDTARSAL_ANIMATOR";
ProtoBody48.children[7] = ROUTE122;

let ROUTE123 = browser.currentScene.createNode("ROUTE");
ROUTE123.fromField = "fraction_changed";
ROUTE123.fromNode = "TIMER";
ROUTE123.toField = "set_fraction";
ROUTE123.toNode = "R_HIP_ANIMATOR";
ProtoBody48.children[8] = ROUTE123;

let ROUTE124 = browser.currentScene.createNode("ROUTE");
ROUTE124.fromField = "fraction_changed";
ROUTE124.fromNode = "TIMER";
ROUTE124.toField = "set_fraction";
ROUTE124.toNode = "R_KNEE_ANIMATOR";
ProtoBody48.children[9] = ROUTE124;

let ROUTE125 = browser.currentScene.createNode("ROUTE");
ROUTE125.fromField = "fraction_changed";
ROUTE125.fromNode = "TIMER";
ROUTE125.toField = "set_fraction";
ROUTE125.toNode = "R_ANKLE_ANIMATOR";
ProtoBody48.children[10] = ROUTE125;

let ROUTE126 = browser.currentScene.createNode("ROUTE");
ROUTE126.fromField = "fraction_changed";
ROUTE126.fromNode = "TIMER";
ROUTE126.toField = "set_fraction";
ROUTE126.toNode = "R_MIDTARSAL_ANIMATOR";
ProtoBody48.children[11] = ROUTE126;

let ROUTE127 = browser.currentScene.createNode("ROUTE");
ROUTE127.fromField = "fraction_changed";
ROUTE127.fromNode = "TIMER";
ROUTE127.toField = "set_fraction";
ROUTE127.toNode = "VL5_ANIMATOR";
ProtoBody48.children[12] = ROUTE127;

let ROUTE128 = browser.currentScene.createNode("ROUTE");
ROUTE128.fromField = "fraction_changed";
ROUTE128.fromNode = "TIMER";
ROUTE128.toField = "set_fraction";
ROUTE128.toNode = "SKULLBASE_ANIMATOR";
ProtoBody48.children[13] = ROUTE128;

let ROUTE129 = browser.currentScene.createNode("ROUTE");
ROUTE129.fromField = "fraction_changed";
ROUTE129.fromNode = "TIMER";
ROUTE129.toField = "set_fraction";
ROUTE129.toNode = "L_SHOULDER_ANIMATOR";
ProtoBody48.children[14] = ROUTE129;

let ROUTE130 = browser.currentScene.createNode("ROUTE");
ROUTE130.fromField = "fraction_changed";
ROUTE130.fromNode = "TIMER";
ROUTE130.toField = "set_fraction";
ROUTE130.toNode = "L_ELBOW_ANIMATOR";
ProtoBody48.children[15] = ROUTE130;

let ROUTE131 = browser.currentScene.createNode("ROUTE");
ROUTE131.fromField = "fraction_changed";
ROUTE131.fromNode = "TIMER";
ROUTE131.toField = "set_fraction";
ROUTE131.toNode = "L_WRIST_ANIMATOR";
ProtoBody48.children[16] = ROUTE131;

let ROUTE132 = browser.currentScene.createNode("ROUTE");
ROUTE132.fromField = "fraction_changed";
ROUTE132.fromNode = "TIMER";
ROUTE132.toField = "set_fraction";
ROUTE132.toNode = "R_SHOULDER_ANIMATOR";
ProtoBody48.children[17] = ROUTE132;

let ROUTE133 = browser.currentScene.createNode("ROUTE");
ROUTE133.fromField = "fraction_changed";
ROUTE133.fromNode = "TIMER";
ROUTE133.toField = "set_fraction";
ROUTE133.toNode = "R_ELBOW_ANIMATOR";
ProtoBody48.children[18] = ROUTE133;

let ROUTE134 = browser.currentScene.createNode("ROUTE");
ROUTE134.fromField = "fraction_changed";
ROUTE134.fromNode = "TIMER";
ROUTE134.toField = "set_fraction";
ROUTE134.toNode = "R_WRIST_ANIMATOR";
ProtoBody48.children[19] = ROUTE134;

ProtoDeclare20.protoBody = ProtoBody48;

browser.currentScene.children[1] = ProtoDeclare20;

//======================================
//Point to example use in case someone inspects this file
let Anchor135 = browser.currentScene.createNode("Anchor");
Anchor135.description = "InterchangableActorsViaDynamicRouting";
Anchor135.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor135.url = new MFString(new java.lang.String["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"]);
let Shape136 = browser.currentScene.createNode("Shape");
let Text137 = browser.currentScene.createNode("Text");
Text137.string = new MFString(new java.lang.String["LOA1_StandAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."]);
let FontStyle138 = browser.currentScene.createNode("FontStyle");
FontStyle138.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle138.size = 0.8;
Text137.fontStyle = FontStyle138;

Shape136.geometry = Text137;

let Appearance139 = browser.currentScene.createNode("Appearance");
let Material140 = browser.currentScene.createNode("Material");
Material140.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance139.material = Material140;

Shape136.appearance = Appearance139;

Anchor135.children = new MFNode();

Anchor135.children[0] = Shape136;

browser.currentScene.children[2] = Anchor135;

