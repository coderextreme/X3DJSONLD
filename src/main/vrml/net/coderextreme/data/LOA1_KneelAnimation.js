let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "LOA1_KneelAnimation.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
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
ProtoDeclare3.name = "LOA1_KneelAnimation";
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
field7.value = "false";
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
PositionInterpolator42.key = new MFFloat(new float[0,0.3125,0.625,1]);
PositionInterpolator42.keyValue = new MFVec3f(new float[0,0,0,0,-0.049999,0,0,-0.195,0,0,-0.439997,0]);
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
OrientationInterpolator45.key = new MFFloat(new float[0,1]);
OrientationInterpolator45.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0]);
let IS46 = browser.currentScene.createNode("IS");
let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "value_changed";
connect47.protoField = "HumanoidRoot_rotation_changed";
IS46.connect = new MFNode();

IS46.connect[0] = connect47;

OrientationInterpolator45.iS = IS46;

Group32.children[2] = OrientationInterpolator45;

//no SACROILIAC_ANIMATOR
let OrientationInterpolator48 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator48.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator48.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator48.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.619393,-1,0,0,1.069302,-1,0,0,1.937315]);
let IS49 = browser.currentScene.createNode("IS");
let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "value_changed";
connect50.protoField = "l_hip_rotation_changed";
IS49.connect = new MFNode();

IS49.connect[0] = connect50;

OrientationInterpolator48.iS = IS49;

Group32.children[3] = OrientationInterpolator48;

let OrientationInterpolator51 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator51.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator51.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator51.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.615228,1,0,0,0.984524,1,0,0,2.076941]);
let IS52 = browser.currentScene.createNode("IS");
let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "value_changed";
connect53.protoField = "l_knee_rotation_changed";
IS52.connect = new MFNode();

IS52.connect[0] = connect53;

OrientationInterpolator51.iS = IS52;

Group32.children[4] = OrientationInterpolator51;

let OrientationInterpolator54 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator54.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator54.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator54.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.017453,-1,0,0,0.069812,1,0,0,0.261799]);
let IS55 = browser.currentScene.createNode("IS");
let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "value_changed";
connect56.protoField = "l_ankle_rotation_changed";
IS55.connect = new MFNode();

IS55.connect[0] = connect56;

OrientationInterpolator54.iS = IS55;

Group32.children[5] = OrientationInterpolator54;

//no L_MIDTARSAL_ANIMATOR
let OrientationInterpolator57 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator57.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator57.key = new MFFloat(new float[0,0.3125,1]);
OrientationInterpolator57.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.523598,-1,0,0,0.157079]);
let IS58 = browser.currentScene.createNode("IS");
let connect59 = browser.currentScene.createNode("connect");
connect59.nodeField = "value_changed";
connect59.protoField = "r_hip_rotation_changed";
IS58.connect = new MFNode();

IS58.connect[0] = connect59;

OrientationInterpolator57.iS = IS58;

Group32.children[6] = OrientationInterpolator57;

let OrientationInterpolator60 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator60.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator60.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator60.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.349065,1,0,0,1.023397,0.999934,0.008043,0.008185,1.727938]);
let IS61 = browser.currentScene.createNode("IS");
let connect62 = browser.currentScene.createNode("connect");
connect62.nodeField = "value_changed";
connect62.protoField = "r_knee_rotation_changed";
IS61.connect = new MFNode();

IS61.connect[0] = connect62;

OrientationInterpolator60.iS = IS61;

Group32.children[7] = OrientationInterpolator60;

let OrientationInterpolator63 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator63.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator63.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator63.keyValue = new MFRotation(new float[1,0,0,0,-0.991692,-0.072372,0.106338,0.205053,-0.981083,-0.103267,0.163741,0.272231,-1,0,0,0.349065]);
let IS64 = browser.currentScene.createNode("IS");
let connect65 = browser.currentScene.createNode("connect");
connect65.nodeField = "value_changed";
connect65.protoField = "r_ankle_rotation_changed";
IS64.connect = new MFNode();

IS64.connect[0] = connect65;

OrientationInterpolator63.iS = IS64;

Group32.children[8] = OrientationInterpolator63;

//no R_MIDTARSAL_ANIMATOR
let OrientationInterpolator66 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator66.DEF = "VL5_ANIMATOR";
OrientationInterpolator66.key = new MFFloat(new float[0,1]);
OrientationInterpolator66.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0.174533]);
let IS67 = browser.currentScene.createNode("IS");
let connect68 = browser.currentScene.createNode("connect");
connect68.nodeField = "value_changed";
connect68.protoField = "vl5_rotation_changed";
IS67.connect = new MFNode();

IS67.connect[0] = connect68;

OrientationInterpolator66.iS = IS67;

Group32.children[9] = OrientationInterpolator66;

//no SKULLBASE_ANIMATOR
let OrientationInterpolator69 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator69.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator69.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator69.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.279252,-1,0,0,0.506145,-1,0,0,0.191986]);
let IS70 = browser.currentScene.createNode("IS");
let connect71 = browser.currentScene.createNode("connect");
connect71.nodeField = "value_changed";
connect71.protoField = "l_shoulder_rotation_changed";
IS70.connect = new MFNode();

IS70.connect[0] = connect71;

OrientationInterpolator69.iS = IS70;

Group32.children[10] = OrientationInterpolator69;

let OrientationInterpolator72 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator72.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator72.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator72.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.052359,-1,0,0,0.296706,-1,0,0,1.431169]);
let IS73 = browser.currentScene.createNode("IS");
let connect74 = browser.currentScene.createNode("connect");
connect74.nodeField = "value_changed";
connect74.protoField = "l_elbow_rotation_changed";
IS73.connect = new MFNode();

IS73.connect[0] = connect74;

OrientationInterpolator72.iS = IS73;

Group32.children[11] = OrientationInterpolator72;

//no L_WRIST_ANIMATOR
let OrientationInterpolator75 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator75.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator75.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator75.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.104719,-1,0,0,0.157079,1,0,0,0.314159]);
let IS76 = browser.currentScene.createNode("IS");
let connect77 = browser.currentScene.createNode("connect");
connect77.nodeField = "value_changed";
connect77.protoField = "r_shoulder_rotation_changed";
IS76.connect = new MFNode();

IS76.connect[0] = connect77;

OrientationInterpolator75.iS = IS76;

Group32.children[12] = OrientationInterpolator75;

let OrientationInterpolator78 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator78.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator78.key = new MFFloat(new float[0,0.3125,0.625,1]);
OrientationInterpolator78.keyValue = new MFRotation(new float[1,0,0,0,-1,0,0,0.837757,-1,0,0,1.239183,-1,0,0,1.500983]);
let IS79 = browser.currentScene.createNode("IS");
let connect80 = browser.currentScene.createNode("connect");
connect80.nodeField = "value_changed";
connect80.protoField = "r_elbow_rotation_changed";
IS79.connect = new MFNode();

IS79.connect[0] = connect80;

OrientationInterpolator78.iS = IS79;

Group32.children[13] = OrientationInterpolator78;

//no R_WRIST_ANIMATOR
ProtoBody31.children = new MFNode();

ProtoBody31.children[0] = Group32;

let ROUTE81 = browser.currentScene.createNode("ROUTE");
ROUTE81.fromField = "fraction_changed";
ROUTE81.fromNode = "TIMER";
ROUTE81.toField = "set_fraction";
ROUTE81.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
ProtoBody31.children[1] = ROUTE81;

let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromField = "fraction_changed";
ROUTE82.fromNode = "TIMER";
ROUTE82.toField = "set_fraction";
ROUTE82.toNode = "HUMANOIDROOT_ANIMATOR";
ProtoBody31.children[2] = ROUTE82;

let ROUTE83 = browser.currentScene.createNode("ROUTE");
ROUTE83.fromField = "fraction_changed";
ROUTE83.fromNode = "TIMER";
ROUTE83.toField = "set_fraction";
ROUTE83.toNode = "L_HIP_ANIMATOR";
ProtoBody31.children[3] = ROUTE83;

let ROUTE84 = browser.currentScene.createNode("ROUTE");
ROUTE84.fromField = "fraction_changed";
ROUTE84.fromNode = "TIMER";
ROUTE84.toField = "set_fraction";
ROUTE84.toNode = "L_KNEE_ANIMATOR";
ProtoBody31.children[4] = ROUTE84;

let ROUTE85 = browser.currentScene.createNode("ROUTE");
ROUTE85.fromField = "fraction_changed";
ROUTE85.fromNode = "TIMER";
ROUTE85.toField = "set_fraction";
ROUTE85.toNode = "L_ANKLE_ANIMATOR";
ProtoBody31.children[5] = ROUTE85;

let ROUTE86 = browser.currentScene.createNode("ROUTE");
ROUTE86.fromField = "fraction_changed";
ROUTE86.fromNode = "TIMER";
ROUTE86.toField = "set_fraction";
ROUTE86.toNode = "R_HIP_ANIMATOR";
ProtoBody31.children[6] = ROUTE86;

let ROUTE87 = browser.currentScene.createNode("ROUTE");
ROUTE87.fromField = "fraction_changed";
ROUTE87.fromNode = "TIMER";
ROUTE87.toField = "set_fraction";
ROUTE87.toNode = "R_KNEE_ANIMATOR";
ProtoBody31.children[7] = ROUTE87;

let ROUTE88 = browser.currentScene.createNode("ROUTE");
ROUTE88.fromField = "fraction_changed";
ROUTE88.fromNode = "TIMER";
ROUTE88.toField = "set_fraction";
ROUTE88.toNode = "R_ANKLE_ANIMATOR";
ProtoBody31.children[8] = ROUTE88;

let ROUTE89 = browser.currentScene.createNode("ROUTE");
ROUTE89.fromField = "fraction_changed";
ROUTE89.fromNode = "TIMER";
ROUTE89.toField = "set_fraction";
ROUTE89.toNode = "VL5_ANIMATOR";
ProtoBody31.children[9] = ROUTE89;

let ROUTE90 = browser.currentScene.createNode("ROUTE");
ROUTE90.fromField = "fraction_changed";
ROUTE90.fromNode = "TIMER";
ROUTE90.toField = "set_fraction";
ROUTE90.toNode = "L_SHOULDER_ANIMATOR";
ProtoBody31.children[10] = ROUTE90;

let ROUTE91 = browser.currentScene.createNode("ROUTE");
ROUTE91.fromField = "fraction_changed";
ROUTE91.fromNode = "TIMER";
ROUTE91.toField = "set_fraction";
ROUTE91.toNode = "L_ELBOW_ANIMATOR";
ProtoBody31.children[11] = ROUTE91;

let ROUTE92 = browser.currentScene.createNode("ROUTE");
ROUTE92.fromField = "fraction_changed";
ROUTE92.fromNode = "TIMER";
ROUTE92.toField = "set_fraction";
ROUTE92.toNode = "R_SHOULDER_ANIMATOR";
ProtoBody31.children[12] = ROUTE92;

let ROUTE93 = browser.currentScene.createNode("ROUTE");
ROUTE93.fromField = "fraction_changed";
ROUTE93.fromNode = "TIMER";
ROUTE93.toField = "set_fraction";
ROUTE93.toNode = "R_ELBOW_ANIMATOR";
ProtoBody31.children[13] = ROUTE93;

ProtoDeclare3.protoBody = ProtoBody31;

browser.currentScene.children[1] = ProtoDeclare3;

let Anchor94 = browser.currentScene.createNode("Anchor");
Anchor94.description = "InterchangableActorsViaDynamicRouting";
Anchor94.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor94.url = new MFString(new java.lang.String["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"]);
let Shape95 = browser.currentScene.createNode("Shape");
let Text96 = browser.currentScene.createNode("Text");
Text96.string = new MFString(new java.lang.String["LOA1_KneelAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."]);
let FontStyle97 = browser.currentScene.createNode("FontStyle");
FontStyle97.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle97.size = 0.8;
Text96.fontStyle = FontStyle97;

Shape95.geometry = Text96;

let Appearance98 = browser.currentScene.createNode("Appearance");
let Material99 = browser.currentScene.createNode("Material");
Material99.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance98.material = Material99;

Shape95.appearance = Appearance98;

Anchor94.children = new MFNode();

Anchor94.children[0] = Shape95;

browser.currentScene.children[2] = Anchor94;

