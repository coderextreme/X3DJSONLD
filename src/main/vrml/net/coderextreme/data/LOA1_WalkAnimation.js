let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "LOA1_WalkAnimation.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Humanoid animation prototype reusable by any Humanoid.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Cindy Ballreich cindy@ballreich.net 3Name3D";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "rights";
meta5.content = "1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "translator";
meta6.content = "Don Brutzman";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "translated";
meta7.content = "1 October 2001";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "modified";
meta8.content = "23 May 2020";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "http://HAnim.org/Specifications/HAnim2001";
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
meta13.content = "Nancy Walk Animation HAnim 2001";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "identifier";
meta14.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "generator";
meta15.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "license";
meta16.content = "../license.html";
head1.meta[14] = meta16;

head = head1;

let WorldInfo18 = browser.currentScene.createNode("WorldInfo");
WorldInfo18.title = "LOA1_WalkAnimation.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo18;

let ProtoDeclare19 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="LOA1_WalkAnimation" ><ProtoInterface><field name="cycleInterval" accessType="inputOutput" type="SFTime" value="2"></field>
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
<PositionInterpolator DEF="HUMANOIDROOT_POSITION_ANIMATOR" key="0 0.04167 0.125 0.1667 0.2083 0.25 0.2917 0.375 0.4583 0.5 0.5417 0.5833 0.625 0.7083 0.75 0.7917 0.875 0.9167 1" keyValue="0 -0.00928 0 0 -0.003858 0 0 -0.008847 0 0 -0.01486 0 0 -0.02641 0 0 -0.03934 0 0 -0.0502 0 0 -0.07469 0 0 -0.02732 0 0 -0.01608 0 0 -0.01129 0 0 -0.005819 0 0 -0.002004 0 0 -0.002579 0 0 -0.0143 0 0 -0.03799 0 0 -0.05648 0 0 -0.045 0 0 -0.00928 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_translation_changed"></connect>
</IS>
</PositionInterpolator>
<OrientationInterpolator DEF="HUMANOIDROOT_ANIMATOR" key="0 1" keyValue="0 1 0 0 0 1 0 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="SACROILIAC_ANIMATOR" key="0 0.5 1" keyValue="0 0 -1 0.1056 0 0 1 0.09018 0 0 -1 0.1056"><IS><connect nodeField="value_changed" protoField="lower_body_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_HIP_ANIMATOR" key="0 0.25 0.375 0.5 0.6667 0.7917 0.9167 1" keyValue="-0.873 0.06094 0.484 0.2865 0.9963 -0.01057 0.08481 0.2488 0.9965 0.01591 -0.08222 0.3836 -0.7018 -0.03223 -0.7117 0.1289 -1 0 0 0.5518 -0.9964 0.02231 0.0817 0.5351 -0.9809 0.04912 0.1881 0.5204 -0.873 0.06094 0.484 0.2865"><IS><connect nodeField="value_changed" protoField="l_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_KNEE_ANIMATOR" key="0 0.2083 0.375 0.5 0.6667 0.7917 0.9167 1" keyValue="1 0 0 0.3226 1 0 0 0.1556 1 0 0 0.08678 1 0 0 0.8751 1 0 0 1.131 1 0 0 0.09961 1 0 0 0.3942 1 0 0 0.3226"><IS><connect nodeField="value_changed" protoField="l_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ANKLE_ANIMATOR" key="0 0.125 0.2083 0.375 0.6667 0.9167 1" keyValue="-1 0 0 0.06714 -1 0 0 0.2152 -1 0 0 0.3184 -1 0 0 0.4717 -1 0 0 0.2912 1 0 0 0.1222 -1 0 0 0.06714"><IS><connect nodeField="value_changed" protoField="l_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_MIDTARSAL_ANIMATOR" key="0 0.5 1" keyValue="1 0 0 0 1 0 0 -0.2 1 0 0 0"><IS><connect nodeField="value_changed" protoField="l_midtarsal_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_HIP_ANIMATOR" key="0 0.125 0.2083 0.2917 0.375 0.5 0.6667 0.7917 0.9167 1" keyValue="-0.5831 0.03511 0.8116 0.1481 -0.995 0.02296 0.09674 0.4683 -1 0.00192 0.007964 0.4732 -0.998 -0.0158 -0.06102 0.5079 -0.9911 -0.03541 -0.1286 0.5419 -0.9131 -0.06243 -0.403 0.3361 -0.4306 -0.07962 -0.899 0.07038 1 0 0 0.2571 0.9891 -0.02805 0.1444 0.3879 -0.5831 0.03511 0.8116 0.1481"><IS><connect nodeField="value_changed" protoField="r_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_KNEE_ANIMATOR" key="0 0.125 0.2083 0.2917 0.375 0.5 0.6667 0.7917 0.9167 1" keyValue="1 0 0 0.8573 1 0 0 0.8926 1 0 0 0.5351 1 0 0 0.1756 1 0 0 0.1194 1 0 0 0.3153 1 -1.176e-8 -4.971e-9 0.09354 1 0 0 0.08558 1 0 0 0.2475 1 0 0 0.8573"><IS><connect nodeField="value_changed" protoField="r_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ANKLE_ANIMATOR" key="0 0.125 0.2083 0.375 0.4583 0.5 0.6667 0.75 0.7917 0.9167 1" keyValue="0 0 1 0 -1 0 0 0.3533 -1 0 0 0.1072 1 0 0 0.2612 1 -1.641e-7 1.827e-8 0.1268 -1 0 0 0.01793 -1 0 0 0.05824 -1 0 0 0.2398 -1 0 0 0.35 -1 0 0 0.3322 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_MIDTARSAL_ANIMATOR" key="0 0.5 1" keyValue="1 0 0 -0.2 1 0 0 0 1 0 0 -0.2"><IS><connect nodeField="value_changed" protoField="r_midtarsal_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="VL5_ANIMATOR" key="0 0.2083 0.375 0.75 0.8333 1" keyValue="0 1 0 0.0826 -0.01972 -0.5974 0.8017 0.08231 0.009296 -0.9648 0.2627 0.1734 -0.01238 0.9549 -0.2968 0.08732 -0.008125 0.9691 -0.2463 0.158 0 1 0 0.0826"><IS><connect nodeField="value_changed" protoField="vl5_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="SKULLBASE_ANIMATOR" key="0 0.375 0.4167 0.5 0.5833 0.6667 0.75 0.8333 0.9167 1" keyValue="0 -1 0 0.08642 0 1 0 0.1825 0 1 0 0.1505 0 1 0 0.1053 0 1 0 0.04391 0 -1 0 0.03119 0 -1 0 0.07936 0 -1 0 0.1616 0 -1 0 0.155 0 -1 0 0.08642"><IS><connect nodeField="value_changed" protoField="skullbase_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_SHOULDER_ANIMATOR" key="0 0.375 0.9167 1" keyValue="1 0 0 0.1189 -1 -5.928e-7 1.525e-7 0.1861 1 -2.038e-7 -1.257e-7 0.3357 1 0 0 0.1189"><IS><connect nodeField="value_changed" protoField="l_shoulder_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ELBOW_ANIMATOR" key="0 0.375 0.9167 1" keyValue="-1 -1.58298e-7 8.15967e-8 0.0659878 -1 -3.28826e-8 -2.31665e-8 0.488383 -1 0.00000306462 -0.00000311947 0.0177536 -1 -1.58298e-7 8.15967e-8 0.0659878"><IS><connect nodeField="value_changed" protoField="l_elbow_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_WRIST_ANIMATOR" key="0 0.375 0.9167 1" keyValue="0.00000151276 -1 0.0000017724 0.461076 -0.330195 -0.927451 0.175516 0.538852 0.0327774 -0.999314 -0.0172185 0.492033 0.00000151276 -1 0.0000017724 0.461076"><IS><connect nodeField="value_changed" protoField="l_wrist_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_SHOULDER_ANIMATOR" key="0 0.375 0.9167 1" keyValue="-1 -7.689e-7 -1.48e-7 0.09346 1 5.004e-8 2.254e-8 0.3197 -1 -1.104e-7 5.267e-10 0.1564 -1 -7.689e-7 -1.48e-7 0.09346"><IS><connect nodeField="value_changed" protoField="r_shoulder_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ELBOW_ANIMATOR" key="0 0.375 0.9167 1" keyValue="-1 -4.45619e-8 2.70318e-8 0.411508 -1 8.16742e-7 -1.09556e-7 0.0925011 -1 -2.47628e-8 -7.02862e-9 0.572568 -1 -4.45619e-8 2.70318e-8 0.411508"><IS><connect nodeField="value_changed" protoField="r_elbow_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_WRIST_ANIMATOR" key="0 0.375 0.9167 1" keyValue="-0.8129 0.4759 -0.3357 0.1346 0.1533 -0.9878 0.02582 0.3902 -0.5701 0.7604 -0.311 0.366 -0.8129 0.4759 -0.3357 0.1346"><IS><connect nodeField="value_changed" protoField="r_wrist_rotation_changed"></connect>
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
ProtoDeclare19.name = "LOA1_WalkAnimation";
let ProtoInterface20 = browser.currentScene.createNode("ProtoInterface");
let field21 = browser.currentScene.createNode("field");
field21.name = "cycleInterval";
field21.accessType = "inputOutput";
field21.type = "SFTime";
field21.value = "2";
ProtoInterface20.field = new MFNode();

ProtoInterface20.field[0] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "enabled";
field22.accessType = "inputOutput";
field22.type = "SFBool";
field22.value = "true";
ProtoInterface20.field[1] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "loop";
field23.accessType = "inputOutput";
field23.type = "SFBool";
field23.value = "true";
ProtoInterface20.field[2] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "startTime";
field24.accessType = "inputOutput";
field24.type = "SFTime";
field24.value = "0";
ProtoInterface20.field[3] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "stopTime";
field25.accessType = "inputOutput";
field25.type = "SFTime";
field25.value = "-1";
ProtoInterface20.field[4] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "fraction_changed";
field26.accessType = "outputOnly";
field26.type = "SFFloat";
ProtoInterface20.field[5] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "isActive";
field27.accessType = "outputOnly";
field27.type = "SFBool";
ProtoInterface20.field[6] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "HumanoidRoot_translation_changed";
field28.accessType = "outputOnly";
field28.type = "SFVec3f";
ProtoInterface20.field[7] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "HumanoidRoot_rotation_changed";
field29.accessType = "outputOnly";
field29.type = "SFRotation";
ProtoInterface20.field[8] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "lower_body_rotation_changed";
field30.accessType = "outputOnly";
field30.type = "SFRotation";
ProtoInterface20.field[9] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "l_hip_rotation_changed";
field31.accessType = "outputOnly";
field31.type = "SFRotation";
ProtoInterface20.field[10] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "l_knee_rotation_changed";
field32.accessType = "outputOnly";
field32.type = "SFRotation";
ProtoInterface20.field[11] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "l_ankle_rotation_changed";
field33.accessType = "outputOnly";
field33.type = "SFRotation";
ProtoInterface20.field[12] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "l_midtarsal_rotation_changed";
field34.accessType = "outputOnly";
field34.type = "SFRotation";
ProtoInterface20.field[13] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "r_hip_rotation_changed";
field35.accessType = "outputOnly";
field35.type = "SFRotation";
ProtoInterface20.field[14] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "r_knee_rotation_changed";
field36.accessType = "outputOnly";
field36.type = "SFRotation";
ProtoInterface20.field[15] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "r_ankle_rotation_changed";
field37.accessType = "outputOnly";
field37.type = "SFRotation";
ProtoInterface20.field[16] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "r_midtarsal_rotation_changed";
field38.accessType = "outputOnly";
field38.type = "SFRotation";
ProtoInterface20.field[17] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "vl5_rotation_changed";
field39.accessType = "outputOnly";
field39.type = "SFRotation";
ProtoInterface20.field[18] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "skullbase_rotation_changed";
field40.accessType = "outputOnly";
field40.type = "SFRotation";
ProtoInterface20.field[19] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "l_shoulder_rotation_changed";
field41.accessType = "outputOnly";
field41.type = "SFRotation";
ProtoInterface20.field[20] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "l_elbow_rotation_changed";
field42.accessType = "outputOnly";
field42.type = "SFRotation";
ProtoInterface20.field[21] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "l_wrist_rotation_changed";
field43.accessType = "outputOnly";
field43.type = "SFRotation";
ProtoInterface20.field[22] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "r_shoulder_rotation_changed";
field44.accessType = "outputOnly";
field44.type = "SFRotation";
ProtoInterface20.field[23] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "r_elbow_rotation_changed";
field45.accessType = "outputOnly";
field45.type = "SFRotation";
ProtoInterface20.field[24] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "r_wrist_rotation_changed";
field46.accessType = "outputOnly";
field46.type = "SFRotation";
ProtoInterface20.field[25] = field46;

ProtoDeclare19.protoInterface = ProtoInterface20;

let ProtoBody47 = browser.currentScene.createNode("ProtoBody");
let Group48 = browser.currentScene.createNode("Group");
let TimeSensor49 = browser.currentScene.createNode("TimeSensor");
TimeSensor49.DEF = "TIMER";
let IS50 = browser.currentScene.createNode("IS");
let connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "cycleInterval";
connect51.protoField = "cycleInterval";
IS50.connect = new MFNode();

IS50.connect[0] = connect51;

let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "enabled";
connect52.protoField = "enabled";
IS50.connect[1] = connect52;

let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "loop";
connect53.protoField = "loop";
IS50.connect[2] = connect53;

let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "startTime";
connect54.protoField = "startTime";
IS50.connect[3] = connect54;

let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "stopTime";
connect55.protoField = "stopTime";
IS50.connect[4] = connect55;

let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "fraction_changed";
connect56.protoField = "fraction_changed";
IS50.connect[5] = connect56;

let connect57 = browser.currentScene.createNode("connect");
connect57.nodeField = "isActive";
connect57.protoField = "isActive";
IS50.connect[6] = connect57;

TimeSensor49.iS = IS50;

Group48.children = new MFNode();

Group48.children[0] = TimeSensor49;

let PositionInterpolator58 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator58.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator58.key = new MFFloat(new float[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]);
PositionInterpolator58.keyValue = new MFVec3f(new float[0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]);
let IS59 = browser.currentScene.createNode("IS");
let connect60 = browser.currentScene.createNode("connect");
connect60.nodeField = "value_changed";
connect60.protoField = "HumanoidRoot_translation_changed";
IS59.connect = new MFNode();

IS59.connect[0] = connect60;

PositionInterpolator58.iS = IS59;

Group48.children[1] = PositionInterpolator58;

let OrientationInterpolator61 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator61.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator61.key = new MFFloat(new float[0,1]);
OrientationInterpolator61.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0]);
let IS62 = browser.currentScene.createNode("IS");
let connect63 = browser.currentScene.createNode("connect");
connect63.nodeField = "value_changed";
connect63.protoField = "HumanoidRoot_rotation_changed";
IS62.connect = new MFNode();

IS62.connect[0] = connect63;

OrientationInterpolator61.iS = IS62;

Group48.children[2] = OrientationInterpolator61;

let OrientationInterpolator64 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator64.DEF = "SACROILIAC_ANIMATOR";
OrientationInterpolator64.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator64.keyValue = new MFRotation(new float[0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]);
let IS65 = browser.currentScene.createNode("IS");
let connect66 = browser.currentScene.createNode("connect");
connect66.nodeField = "value_changed";
connect66.protoField = "lower_body_rotation_changed";
IS65.connect = new MFNode();

IS65.connect[0] = connect66;

OrientationInterpolator64.iS = IS65;

Group48.children[3] = OrientationInterpolator64;

let OrientationInterpolator67 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator67.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator67.key = new MFFloat(new float[0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator67.keyValue = new MFRotation(new float[-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]);
let IS68 = browser.currentScene.createNode("IS");
let connect69 = browser.currentScene.createNode("connect");
connect69.nodeField = "value_changed";
connect69.protoField = "l_hip_rotation_changed";
IS68.connect = new MFNode();

IS68.connect[0] = connect69;

OrientationInterpolator67.iS = IS68;

Group48.children[4] = OrientationInterpolator67;

let OrientationInterpolator70 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator70.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator70.key = new MFFloat(new float[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator70.keyValue = new MFRotation(new float[1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]);
let IS71 = browser.currentScene.createNode("IS");
let connect72 = browser.currentScene.createNode("connect");
connect72.nodeField = "value_changed";
connect72.protoField = "l_knee_rotation_changed";
IS71.connect = new MFNode();

IS71.connect[0] = connect72;

OrientationInterpolator70.iS = IS71;

Group48.children[5] = OrientationInterpolator70;

let OrientationInterpolator73 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator73.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator73.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.6667,0.9167,1]);
OrientationInterpolator73.keyValue = new MFRotation(new float[-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714]);
let IS74 = browser.currentScene.createNode("IS");
let connect75 = browser.currentScene.createNode("connect");
connect75.nodeField = "value_changed";
connect75.protoField = "l_ankle_rotation_changed";
IS74.connect = new MFNode();

IS74.connect[0] = connect75;

OrientationInterpolator73.iS = IS74;

Group48.children[6] = OrientationInterpolator73;

let OrientationInterpolator76 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator76.DEF = "L_MIDTARSAL_ANIMATOR";
OrientationInterpolator76.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator76.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.2,1,0,0,0]);
let IS77 = browser.currentScene.createNode("IS");
let connect78 = browser.currentScene.createNode("connect");
connect78.nodeField = "value_changed";
connect78.protoField = "l_midtarsal_rotation_changed";
IS77.connect = new MFNode();

IS77.connect[0] = connect78;

OrientationInterpolator76.iS = IS77;

Group48.children[7] = OrientationInterpolator76;

let OrientationInterpolator79 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator79.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator79.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator79.keyValue = new MFRotation(new float[-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]);
let IS80 = browser.currentScene.createNode("IS");
let connect81 = browser.currentScene.createNode("connect");
connect81.nodeField = "value_changed";
connect81.protoField = "r_hip_rotation_changed";
IS80.connect = new MFNode();

IS80.connect[0] = connect81;

OrientationInterpolator79.iS = IS80;

Group48.children[8] = OrientationInterpolator79;

let OrientationInterpolator82 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator82.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator82.key = new MFFloat(new float[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]);
OrientationInterpolator82.keyValue = new MFRotation(new float[1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,-1.176e-8,-4.971e-9,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573]);
let IS83 = browser.currentScene.createNode("IS");
let connect84 = browser.currentScene.createNode("connect");
connect84.nodeField = "value_changed";
connect84.protoField = "r_knee_rotation_changed";
IS83.connect = new MFNode();

IS83.connect[0] = connect84;

OrientationInterpolator82.iS = IS83;

Group48.children[9] = OrientationInterpolator82;

let OrientationInterpolator85 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator85.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator85.key = new MFFloat(new float[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]);
OrientationInterpolator85.keyValue = new MFRotation(new float[0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,-1.641e-7,1.827e-8,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0]);
let IS86 = browser.currentScene.createNode("IS");
let connect87 = browser.currentScene.createNode("connect");
connect87.nodeField = "value_changed";
connect87.protoField = "r_ankle_rotation_changed";
IS86.connect = new MFNode();

IS86.connect[0] = connect87;

OrientationInterpolator85.iS = IS86;

Group48.children[10] = OrientationInterpolator85;

let OrientationInterpolator88 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator88.DEF = "R_MIDTARSAL_ANIMATOR";
OrientationInterpolator88.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator88.keyValue = new MFRotation(new float[1,0,0,-0.2,1,0,0,0,1,0,0,-0.2]);
let IS89 = browser.currentScene.createNode("IS");
let connect90 = browser.currentScene.createNode("connect");
connect90.nodeField = "value_changed";
connect90.protoField = "r_midtarsal_rotation_changed";
IS89.connect = new MFNode();

IS89.connect[0] = connect90;

OrientationInterpolator88.iS = IS89;

Group48.children[11] = OrientationInterpolator88;

let OrientationInterpolator91 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator91.DEF = "VL5_ANIMATOR";
OrientationInterpolator91.key = new MFFloat(new float[0,0.2083,0.375,0.75,0.8333,1]);
OrientationInterpolator91.keyValue = new MFRotation(new float[0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]);
let IS92 = browser.currentScene.createNode("IS");
let connect93 = browser.currentScene.createNode("connect");
connect93.nodeField = "value_changed";
connect93.protoField = "vl5_rotation_changed";
IS92.connect = new MFNode();

IS92.connect[0] = connect93;

OrientationInterpolator91.iS = IS92;

Group48.children[12] = OrientationInterpolator91;

let OrientationInterpolator94 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator94.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator94.key = new MFFloat(new float[0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]);
OrientationInterpolator94.keyValue = new MFRotation(new float[0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642]);
let IS95 = browser.currentScene.createNode("IS");
let connect96 = browser.currentScene.createNode("connect");
connect96.nodeField = "value_changed";
connect96.protoField = "skullbase_rotation_changed";
IS95.connect = new MFNode();

IS95.connect[0] = connect96;

OrientationInterpolator94.iS = IS95;

Group48.children[13] = OrientationInterpolator94;

let OrientationInterpolator97 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator97.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator97.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator97.keyValue = new MFRotation(new float[1,0,0,0.1189,-1,-5.928e-7,1.525e-7,0.1861,1,-2.038e-7,-1.257e-7,0.3357,1,0,0,0.1189]);
let IS98 = browser.currentScene.createNode("IS");
let connect99 = browser.currentScene.createNode("connect");
connect99.nodeField = "value_changed";
connect99.protoField = "l_shoulder_rotation_changed";
IS98.connect = new MFNode();

IS98.connect[0] = connect99;

OrientationInterpolator97.iS = IS98;

Group48.children[14] = OrientationInterpolator97;

let OrientationInterpolator100 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator100.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator100.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator100.keyValue = new MFRotation(new float[-1,-1.58298e-7,8.15967e-8,0.0659878,-1,-3.28826e-8,-2.31665e-8,0.488383,-1,0.00000306462,-0.00000311947,0.0177536,-1,-1.58298e-7,8.15967e-8,0.0659878]);
let IS101 = browser.currentScene.createNode("IS");
let connect102 = browser.currentScene.createNode("connect");
connect102.nodeField = "value_changed";
connect102.protoField = "l_elbow_rotation_changed";
IS101.connect = new MFNode();

IS101.connect[0] = connect102;

OrientationInterpolator100.iS = IS101;

Group48.children[15] = OrientationInterpolator100;

let OrientationInterpolator103 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator103.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator103.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator103.keyValue = new MFRotation(new float[0.00000151276,-1,0.0000017724,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0.00000151276,-1,0.0000017724,0.461076]);
let IS104 = browser.currentScene.createNode("IS");
let connect105 = browser.currentScene.createNode("connect");
connect105.nodeField = "value_changed";
connect105.protoField = "l_wrist_rotation_changed";
IS104.connect = new MFNode();

IS104.connect[0] = connect105;

OrientationInterpolator103.iS = IS104;

Group48.children[16] = OrientationInterpolator103;

let OrientationInterpolator106 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator106.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator106.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator106.keyValue = new MFRotation(new float[-1,-7.689e-7,-1.48e-7,0.09346,1,5.004e-8,2.254e-8,0.3197,-1,-1.104e-7,5.267e-10,0.1564,-1,-7.689e-7,-1.48e-7,0.09346]);
let IS107 = browser.currentScene.createNode("IS");
let connect108 = browser.currentScene.createNode("connect");
connect108.nodeField = "value_changed";
connect108.protoField = "r_shoulder_rotation_changed";
IS107.connect = new MFNode();

IS107.connect[0] = connect108;

OrientationInterpolator106.iS = IS107;

Group48.children[17] = OrientationInterpolator106;

let OrientationInterpolator109 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator109.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator109.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator109.keyValue = new MFRotation(new float[-1,-4.45619e-8,2.70318e-8,0.411508,-1,8.16742e-7,-1.09556e-7,0.0925011,-1,-2.47628e-8,-7.02862e-9,0.572568,-1,-4.45619e-8,2.70318e-8,0.411508]);
let IS110 = browser.currentScene.createNode("IS");
let connect111 = browser.currentScene.createNode("connect");
connect111.nodeField = "value_changed";
connect111.protoField = "r_elbow_rotation_changed";
IS110.connect = new MFNode();

IS110.connect[0] = connect111;

OrientationInterpolator109.iS = IS110;

Group48.children[18] = OrientationInterpolator109;

let OrientationInterpolator112 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator112.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator112.key = new MFFloat(new float[0,0.375,0.9167,1]);
OrientationInterpolator112.keyValue = new MFRotation(new float[-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]);
let IS113 = browser.currentScene.createNode("IS");
let connect114 = browser.currentScene.createNode("connect");
connect114.nodeField = "value_changed";
connect114.protoField = "r_wrist_rotation_changed";
IS113.connect = new MFNode();

IS113.connect[0] = connect114;

OrientationInterpolator112.iS = IS113;

Group48.children[19] = OrientationInterpolator112;

ProtoBody47.children = new MFNode();

ProtoBody47.children[0] = Group48;

let ROUTE115 = browser.currentScene.createNode("ROUTE");
ROUTE115.fromField = "fraction_changed";
ROUTE115.fromNode = "TIMER";
ROUTE115.toField = "set_fraction";
ROUTE115.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ProtoBody47.children[1] = ROUTE115;

let ROUTE116 = browser.currentScene.createNode("ROUTE");
ROUTE116.fromField = "fraction_changed";
ROUTE116.fromNode = "TIMER";
ROUTE116.toField = "set_fraction";
ROUTE116.toNode = "HUMANOIDROOT_ANIMATOR";
ProtoBody47.children[2] = ROUTE116;

let ROUTE117 = browser.currentScene.createNode("ROUTE");
ROUTE117.fromField = "fraction_changed";
ROUTE117.fromNode = "TIMER";
ROUTE117.toField = "set_fraction";
ROUTE117.toNode = "SACROILIAC_ANIMATOR";
ProtoBody47.children[3] = ROUTE117;

let ROUTE118 = browser.currentScene.createNode("ROUTE");
ROUTE118.fromField = "fraction_changed";
ROUTE118.fromNode = "TIMER";
ROUTE118.toField = "set_fraction";
ROUTE118.toNode = "L_HIP_ANIMATOR";
ProtoBody47.children[4] = ROUTE118;

let ROUTE119 = browser.currentScene.createNode("ROUTE");
ROUTE119.fromField = "fraction_changed";
ROUTE119.fromNode = "TIMER";
ROUTE119.toField = "set_fraction";
ROUTE119.toNode = "L_KNEE_ANIMATOR";
ProtoBody47.children[5] = ROUTE119;

let ROUTE120 = browser.currentScene.createNode("ROUTE");
ROUTE120.fromField = "fraction_changed";
ROUTE120.fromNode = "TIMER";
ROUTE120.toField = "set_fraction";
ROUTE120.toNode = "L_ANKLE_ANIMATOR";
ProtoBody47.children[6] = ROUTE120;

let ROUTE121 = browser.currentScene.createNode("ROUTE");
ROUTE121.fromField = "fraction_changed";
ROUTE121.fromNode = "TIMER";
ROUTE121.toField = "set_fraction";
ROUTE121.toNode = "L_MIDTARSAL_ANIMATOR";
ProtoBody47.children[7] = ROUTE121;

let ROUTE122 = browser.currentScene.createNode("ROUTE");
ROUTE122.fromField = "fraction_changed";
ROUTE122.fromNode = "TIMER";
ROUTE122.toField = "set_fraction";
ROUTE122.toNode = "R_HIP_ANIMATOR";
ProtoBody47.children[8] = ROUTE122;

let ROUTE123 = browser.currentScene.createNode("ROUTE");
ROUTE123.fromField = "fraction_changed";
ROUTE123.fromNode = "TIMER";
ROUTE123.toField = "set_fraction";
ROUTE123.toNode = "R_KNEE_ANIMATOR";
ProtoBody47.children[9] = ROUTE123;

let ROUTE124 = browser.currentScene.createNode("ROUTE");
ROUTE124.fromField = "fraction_changed";
ROUTE124.fromNode = "TIMER";
ROUTE124.toField = "set_fraction";
ROUTE124.toNode = "R_ANKLE_ANIMATOR";
ProtoBody47.children[10] = ROUTE124;

let ROUTE125 = browser.currentScene.createNode("ROUTE");
ROUTE125.fromField = "fraction_changed";
ROUTE125.fromNode = "TIMER";
ROUTE125.toField = "set_fraction";
ROUTE125.toNode = "R_MIDTARSAL_ANIMATOR";
ProtoBody47.children[11] = ROUTE125;

let ROUTE126 = browser.currentScene.createNode("ROUTE");
ROUTE126.fromField = "fraction_changed";
ROUTE126.fromNode = "TIMER";
ROUTE126.toField = "set_fraction";
ROUTE126.toNode = "VL5_ANIMATOR";
ProtoBody47.children[12] = ROUTE126;

let ROUTE127 = browser.currentScene.createNode("ROUTE");
ROUTE127.fromField = "fraction_changed";
ROUTE127.fromNode = "TIMER";
ROUTE127.toField = "set_fraction";
ROUTE127.toNode = "SKULLBASE_ANIMATOR";
ProtoBody47.children[13] = ROUTE127;

let ROUTE128 = browser.currentScene.createNode("ROUTE");
ROUTE128.fromField = "fraction_changed";
ROUTE128.fromNode = "TIMER";
ROUTE128.toField = "set_fraction";
ROUTE128.toNode = "L_SHOULDER_ANIMATOR";
ProtoBody47.children[14] = ROUTE128;

let ROUTE129 = browser.currentScene.createNode("ROUTE");
ROUTE129.fromField = "fraction_changed";
ROUTE129.fromNode = "TIMER";
ROUTE129.toField = "set_fraction";
ROUTE129.toNode = "L_ELBOW_ANIMATOR";
ProtoBody47.children[15] = ROUTE129;

let ROUTE130 = browser.currentScene.createNode("ROUTE");
ROUTE130.fromField = "fraction_changed";
ROUTE130.fromNode = "TIMER";
ROUTE130.toField = "set_fraction";
ROUTE130.toNode = "L_WRIST_ANIMATOR";
ProtoBody47.children[16] = ROUTE130;

let ROUTE131 = browser.currentScene.createNode("ROUTE");
ROUTE131.fromField = "fraction_changed";
ROUTE131.fromNode = "TIMER";
ROUTE131.toField = "set_fraction";
ROUTE131.toNode = "R_SHOULDER_ANIMATOR";
ProtoBody47.children[17] = ROUTE131;

let ROUTE132 = browser.currentScene.createNode("ROUTE");
ROUTE132.fromField = "fraction_changed";
ROUTE132.fromNode = "TIMER";
ROUTE132.toField = "set_fraction";
ROUTE132.toNode = "R_ELBOW_ANIMATOR";
ProtoBody47.children[18] = ROUTE132;

let ROUTE133 = browser.currentScene.createNode("ROUTE");
ROUTE133.fromField = "fraction_changed";
ROUTE133.fromNode = "TIMER";
ROUTE133.toField = "set_fraction";
ROUTE133.toNode = "R_WRIST_ANIMATOR";
ProtoBody47.children[19] = ROUTE133;

ProtoDeclare19.protoBody = ProtoBody47;

browser.currentScene.children[1] = ProtoDeclare19;

//======================================
//Point to example use in case someone inspects this file
let Anchor134 = browser.currentScene.createNode("Anchor");
Anchor134.description = "InterchangableActorsViaDynamicRouting";
Anchor134.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor134.url = new MFString(new java.lang.String["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"]);
let Shape135 = browser.currentScene.createNode("Shape");
let Text136 = browser.currentScene.createNode("Text");
Text136.string = new MFString(new java.lang.String["LOA1_WalkAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."]);
let FontStyle137 = browser.currentScene.createNode("FontStyle");
FontStyle137.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle137.size = 0.8;
Text136.fontStyle = FontStyle137;

Shape135.geometry = Text136;

let Appearance138 = browser.currentScene.createNode("Appearance");
let Material139 = browser.currentScene.createNode("Material");
Material139.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance138.material = Material139;

Shape135.appearance = Appearance138;

Anchor134.children = new MFNode();

Anchor134.children[0] = Shape135;

browser.currentScene.children[2] = Anchor134;

