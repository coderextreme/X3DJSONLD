let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "H-Anim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "title";
meta3.content = "NancyStandShootRifleM24.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "Canonical HAnim 1.1 specification example, using native X3D tags instead of ProtoDeclaration/ExternProtoDeclaration and ProtoInstance.";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "creator";
meta5.content = "Etsuko Lippi";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "created";
meta6.content = "4 January 2002";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "modified";
meta7.content = "23 May 2020";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "warning";
meta8.content = "ProtoBody missing content";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "warning";
meta9.content = "Numerous QA warnings need to be corrected";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "warning";
meta10.content = "LOA1_ShootAnimation ought to be moved out as a separate prototype.";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "identifier";
meta11.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/NancyStandShootRifleM24.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "generator";
meta12.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "license";
meta13.content = "../license.html";
head1.meta[11] = meta13;

head = head1;

let ExternProtoDeclare15 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare15.name = "RifleM24";
ExternProtoDeclare15.appinfo = "Rifle M24";
ExternProtoDeclare15.url = new MFString(new java.lang.String["../../Savage/Weapons/SmallArms/RifleM24Prototype.x3d#RifleM24","https://savage.nps.edu/Savage/Weapons/SmallArms/RifleM24Prototype.x3d#RifleM24","../../Savage/Weapons/SmallArms/RifleM24Prototype.wrl#RifleM24","https://savage.nps.edu/Savage/Weapons/SmallArms/RifleM24Prototype.wrl#RifleM24"]);
let field16 = browser.currentScene.createNode("field");
field16.name = "trigger";
field16.accessType = "inputOnly";
field16.appinfo = "input true to fire";
field16.type = "SFBool";
ExternProtoDeclare15.field = new MFNode();

ExternProtoDeclare15.field[0] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "fire";
field17.accessType = "outputOnly";
field17.appinfo = "output true when fired";
field17.type = "SFBool";
ExternProtoDeclare15.field[1] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "animationStartTime";
field18.accessType = "inputOnly";
field18.appinfo = "trigger animation";
field18.type = "SFTime";
ExternProtoDeclare15.field[2] = field18;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ExternProtoDeclare15;

let ProtoDeclare19 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="LOA1_ShootAnimation" ><ProtoInterface><field name="cycleInterval" accessType="inputOutput" type="SFTime" value="0.009999999776482582"></field>
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
<ProtoBody><Group DEF="ErrorLostContentCheckVersionControl"></Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare19.name = "LOA1_ShootAnimation";
let ProtoInterface20 = browser.currentScene.createNode("ProtoInterface");
let field21 = browser.currentScene.createNode("field");
field21.name = "cycleInterval";
field21.accessType = "inputOutput";
field21.type = "SFTime";
field21.value = "0.009999999776482582";
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
Group48.DEF = "ErrorLostContentCheckVersionControl";
ProtoBody47.children = new MFNode();

ProtoBody47.children[0] = Group48;

ProtoDeclare19.protoBody = ProtoBody47;

browser.currentScene.children[1] = ProtoDeclare19;

//Start scene graph.
let Background49 = browser.currentScene.createNode("Background");
Background49.skyColor = new MFColor(new float[0.6,0.6,0.6]);
browser.currentScene.children[2] = Background49;

let Viewpoint50 = browser.currentScene.createNode("Viewpoint");
Viewpoint50.description = "Nancy Rifle Shooting Position";
Viewpoint50.position = new SFVec3f(new float[0,0.9,2.7]);
browser.currentScene.children[3] = Viewpoint50;

let Viewpoint51 = browser.currentScene.createNode("Viewpoint");
Viewpoint51.description = "Nancy Side Viewpoint";
Viewpoint51.orientation = new SFRotation(new float[0,-1,0,1.4925]);
Viewpoint51.position = new SFVec3f(new float[-2.7,0.9,0.4]);
browser.currentScene.children[4] = Viewpoint51;

let Viewpoint52 = browser.currentScene.createNode("Viewpoint");
Viewpoint52.description = "Nancy Above Viewpoint";
Viewpoint52.orientation = new SFRotation(new float[0.954,0.244,0.172,4.6369]);
Viewpoint52.position = new SFVec3f(new float[0.1,4.1,-0.2]);
browser.currentScene.children[5] = Viewpoint52;

let LOD53 = browser.currentScene.createNode("LOD");
LOD53.range = new MFFloat(new float[50,100]);
let Group54 = browser.currentScene.createNode("Group");
Group54.DEF = "Viewpoint";
//High Resolution
let Group55 = browser.currentScene.createNode("Group");
Group55.DEF = "HighResolution";
let Transform56 = browser.currentScene.createNode("Transform");
let HAnimHumanoid57 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid57.name = "Nancy";
HAnimHumanoid57.DEF = "hanim_Nancy";
HAnimHumanoid57.version = "1.0";
let HAnimJoint58 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint58.name = "humanoid_root";
HAnimJoint58.DEF = "hanim_humanoid_root";
HAnimJoint58.center = new SFVec3f(new float[-0.00405,0.855,-0.000113]);
HAnimJoint58.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimJoint59 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint59.name = "sacroiliac";
HAnimJoint59.DEF = "hanim_sacroiliac";
HAnimJoint59.center = new SFVec3f(new float[0,1.01,-0.0204]);
HAnimJoint59.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment60 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment60.name = "pelvis";
HAnimSegment60.DEF = "hanim_pelvis";
let Shape61 = browser.currentScene.createNode("Shape");
let Appearance62 = browser.currentScene.createNode("Appearance");
let Material63 = browser.currentScene.createNode("Material");
Material63.DEF = "Pants_Color";
Material63.ambientIntensity = 0.25;
Material63.diffuseColor = new SFColor(new float[0.054,0.233,0.39]);
Appearance62.material = Material63;

let ImageTexture64 = browser.currentScene.createNode("ImageTexture");
ImageTexture64.DEF = "camo";
ImageTexture64.repeatS = False;
ImageTexture64.repeatT = False;
ImageTexture64.url = new MFString(new java.lang.String["greenCamo.jpg","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/greenCamo.jpg"]);
Appearance62.texture = ImageTexture64;

Shape61.appearance = Appearance62;

let IndexedFaceSet65 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet65.coordIndex = new MFInt32(new int[0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1]);
IndexedFaceSet65.creaseAngle = 1.14;
let Coordinate66 = browser.currentScene.createNode("Coordinate");
Coordinate66.point = new MFVec3f(new float[0,1.06,0.0218,0.0561,1.07,0.00726,0.0851,1.07,-0.0115,0.104,1.07,-0.0497,0.0851,1.07,-0.0851,0.032,1.06,-0.0985,0.0873,1.04,0.0078,0.033,1.04,0.0395,0.123,1.05,-0.0405,0.0609,1.02,-0.106,0.0894,0.996,-0.106,0.143,1,-0.0309,0.117,1,0.0164,0.0314,0.999,0.0502,0.0314,0.96,-0.13,0.156,0.966,-0.0405,0.156,0.968,-0.00724,0.0341,0.954,0.0513,0.115,0.96,-0.0916,0.121,0.926,0.0352,0.0357,0.92,0.0497,0.0314,0.91,-0.146,0.0991,0.91,-0.131,0.169,0.883,-0.0448,0.169,0.885,-0.00939,0.123,0.873,0.0384,0.0926,0.872,0.047,0.0325,0.873,0.0287,0.0293,0.866,-0.142,0.102,0.869,-0.131,0.129,0.868,-0.103,0.0314,0.84,-0.125,0.101,0.844,-0.122,0.133,0.846,-0.0878,0.0653,0.835,0.0132,0.0615,0.824,-0.111,0.0985,0.823,-0.101,0.132,0.826,-0.0448,0.0609,0.821,-0.0158,0.0599,0.812,-0.0545,0,1.08,-0.0266,-0.0561,1.07,0.00726,-0.0851,1.07,-0.0115,-0.104,1.07,-0.0497,-0.0851,1.07,-0.0851,-0.032,1.06,-0.0985,-0.0873,1.04,0.0078,-0.033,1.04,0.0395,-0.123,1.05,-0.0405,-0.0609,1.02,-0.106,0,1.02,-0.108,-0.0894,0.996,-0.106,-0.143,1,-0.0309,-0.144,1,-0.011,-0.117,1,0.0164,-0.0314,0.999,0.0502,0,0.961,-0.123,-0.0314,0.96,-0.13,-0.156,0.966,-0.0405,-0.156,0.968,-0.00724,-0.0341,0.954,0.0513,-0.115,0.96,-0.0916,-0.121,0.926,0.0352,-0.0357,0.92,0.0497,0,0.91,-0.127,-0.0314,0.91,-0.146,-0.0991,0.91,-0.131,-0.167,0.911,-0.0448,-0.167,0.912,-0.00671,0,0.883,-0.129,-0.123,0.873,0.0384,-0.0926,0.872,0.047,-0.0325,0.873,0.0287,-0.0293,0.866,-0.142,-0.102,0.869,-0.131,-0.129,0.868,-0.103,-0.166,0.863,-0.0148,0,0.863,-0.00456,-0.166,0.862,-0.0459,0,0.858,-0.1,-0.0314,0.84,-0.125,-0.101,0.844,-0.122,-0.0653,0.835,0.0132,0,0.839,-0.0217,0,0.835,-0.0867,-0.0615,0.824,-0.111,-0.0985,0.823,-0.101,-0.132,0.826,-0.0448,-0.0609,0.821,-0.0158,0,0.831,-0.0626,-0.0599,0.812,-0.0545]);
IndexedFaceSet65.coord = Coordinate66;

Shape61.geometry = IndexedFaceSet65;

HAnimSegment60.children = new MFNode();

HAnimSegment60.children[0] = Shape61;

HAnimJoint59.children = new MFNode();

HAnimJoint59.children[0] = HAnimSegment60;

let HAnimJoint67 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint67.name = "l_hip";
HAnimJoint67.DEF = "hanim_l_hip";
HAnimJoint67.center = new SFVec3f(new float[0.122,0.888271,-0.0693267]);
HAnimJoint67.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment68 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment68.name = "l_thigh";
HAnimSegment68.DEF = "hanim_l_thigh";
let Shape69 = browser.currentScene.createNode("Shape");
let Appearance70 = browser.currentScene.createNode("Appearance");
let Material71 = browser.currentScene.createNode("Material");
Material71.USE = "Pants_Color";
Appearance70.material = Material71;

let ImageTexture72 = browser.currentScene.createNode("ImageTexture");
ImageTexture72.USE = "camo";
Appearance70.texture = ImageTexture72;

Shape69.appearance = Appearance70;

let IndexedFaceSet73 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet73.coordIndex = new MFInt32(new int[0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1]);
IndexedFaceSet73.creaseAngle = 1.32;
let Coordinate74 = browser.currentScene.createNode("Coordinate");
Coordinate74.point = new MFVec3f(new float[0.0969,0.804,-0.0486,0.101,0.876,0.0336,0.17,0.894,-0.00778,0.17,0.891,-0.076,0.124,0.858,-0.129,0.076,0.843,-0.143,0.025,0.819,-0.0889,0.0507,0.847,0.0196,0.00349,0.826,-0.0287,0.0991,0.808,0.0406,0.161,0.814,-0.00187,0.165,0.808,-0.0755,0.122,0.788,-0.126,0.00993,0.762,-0.0937,0.00993,0.762,-0.0309,0.0491,0.777,0.0185,0.0755,0.766,-0.139,0.13,0.597,-0.00618,0.132,0.6,-0.0593,0.108,0.603,-0.105,0.0722,0.601,-0.118,0.0314,0.59,-0.0953,0.0239,0.566,-0.0427,0.047,0.566,0.0051,0.0878,0.581,0.0217,0.114,0.499,-0.0132,0.116,0.488,-0.061,0.103,0.567,-0.0991,0.0362,0.557,-0.0926,0.025,0.486,-0.047,0.0507,0.497,-0.00188,0.0862,0.513,0.018,0.0733,0.579,-0.108]);
IndexedFaceSet73.coord = Coordinate74;

Shape69.geometry = IndexedFaceSet73;

HAnimSegment68.children = new MFNode();

HAnimSegment68.children[0] = Shape69;

HAnimJoint67.children = new MFNode();

HAnimJoint67.children[0] = HAnimSegment68;

let HAnimJoint75 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint75.name = "l_knee";
HAnimJoint75.DEF = "hanim_l_knee";
HAnimJoint75.center = new SFVec3f(new float[0.0738,0.517,-0.0284]);
HAnimJoint75.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment76 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment76.name = "l_calf";
HAnimSegment76.DEF = "hanim_l_calf";
let Shape77 = browser.currentScene.createNode("Shape");
let Appearance78 = browser.currentScene.createNode("Appearance");
let Material79 = browser.currentScene.createNode("Material");
Material79.USE = "Pants_Color";
Appearance78.material = Material79;

let ImageTexture80 = browser.currentScene.createNode("ImageTexture");
ImageTexture80.USE = "camo";
Appearance78.texture = ImageTexture80;

Shape77.appearance = Appearance78;

let IndexedFaceSet81 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet81.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1]);
IndexedFaceSet81.creaseAngle = 1.57;
let Coordinate82 = browser.currentScene.createNode("Coordinate");
Coordinate82.point = new MFVec3f(new float[0.0883,0.532,-0.00349,0.0609,0.533,-0.00833,0.0814,0.55,-0.0395,0.0529,0.536,-0.0368,0.0577,0.544,-0.0577,0.0722,0.546,-0.0717,0.0975,0.54,-0.0647,0.105,0.539,-0.0438,0.104,0.539,-0.0223,0.0862,0.506,0.0158,0.101,0.51,-0.0798,0.0706,0.51,-0.101,0.0406,0.513,-0.0744,0.0368,0.51,-0.0357,0.0556,0.506,-0.000272,0.117,0.508,-0.0169,0.0878,0.361,-0.0126,0.123,0.363,-0.04,0.123,0.363,-0.0663,0.107,0.367,-0.107,0.0588,0.365,-0.122,0.0228,0.358,-0.0926,0.0239,0.358,-0.0475,0.0497,0.358,-0.0234,0.118,0.311,-0.0411,0.118,0.309,-0.0685,0.105,0.31,-0.108,0.0572,0.308,-0.123,0.0201,0.309,-0.0937,0.0191,0.311,-0.0508,0.0475,0.307,-0.0282,0.0883,0.309,-0.018,0.0959,0.124,-0.04,0.0905,0.12,-0.0647,0.0738,0.117,-0.0814,0.0373,0.121,-0.0636,0.0416,0.124,-0.0416,0.0744,0.13,-0.0212,0.0561,0.13,-0.0245,0.0529,0.121,-0.0873,0.0948,0.0897,-0.0368,0.0916,0.0779,-0.0604,0.0717,0.0854,-0.0765,0.0406,0.0918,-0.0626,0.0384,0.0881,-0.0363,0.054,0.0972,-0.0175,0.0765,0.11,-0.0169,0.0486,0.0999,-0.0835]);
IndexedFaceSet81.coord = Coordinate82;

Shape77.geometry = IndexedFaceSet81;

HAnimSegment76.children = new MFNode();

HAnimSegment76.children[0] = Shape77;

HAnimJoint75.children = new MFNode();

HAnimJoint75.children[0] = HAnimSegment76;

let HAnimJoint83 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint83.name = "l_ankle";
HAnimJoint83.DEF = "hanim_l_ankle";
HAnimJoint83.center = new SFVec3f(new float[0.0645,0.0719,-0.048]);
HAnimJoint83.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment84 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment84.name = "l_hindfoot";
HAnimSegment84.DEF = "hanim_l_hindfoot";
let Shape85 = browser.currentScene.createNode("Shape");
let Appearance86 = browser.currentScene.createNode("Appearance");
let Material87 = browser.currentScene.createNode("Material");
Material87.DEF = "Shoe_Color";
Material87.ambientIntensity = 0.25;
Material87.diffuseColor = new SFColor(new float[0,0,0]);
Appearance86.material = Material87;

Shape85.appearance = Appearance86;

let IndexedFaceSet88 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet88.coordIndex = new MFInt32(new int[2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1]);
IndexedFaceSet88.creaseAngle = 1.57;
let Coordinate89 = browser.currentScene.createNode("Coordinate");
Coordinate89.point = new MFVec3f(new float[0.0529,0,-0.0923,0.0863,0,-0.0862,0.0727,0,-0.0994,0.0863,0.0219,-0.0862,0.0727,0.0219,-0.0994,0.1,0,-0.0594,0.1,0.0219,-0.0594,0.113,0,0.0645,0.113,0.0219,0.0645,0.112,0,0.117,0.112,0.0156,0.117,0.0701,0,0.146,0.0701,0.0156,0.146,0.0468,0,0.153,0.0468,0.0156,0.153,0.0215,0,0.146,0.0215,0.0156,0.146,0.0165,0,0.125,0.0165,0.0156,0.125,0.0211,0,0.0377,0.0211,0.0219,0.0377,0.0393,0,-0.0129,0.0393,0.0219,-0.0129,0.0433,0,-0.0534,0.0433,0.0219,-0.0534,0.0529,0.0219,-0.0923,0.0305,0.0253,0.0938,0.0505,0.0253,0.099,0.0854,0.0253,0.0834,0.102,0.0253,0.0707,0.0568,0.0573,-0.0918,0.0492,0.0573,-0.0497,0.0435,0.0573,-0.0225,0.0442,0.0573,0.0235,0.0623,0.0573,0.0366,0.0911,0.0573,0.0159,0.0962,0.0573,-0.0121,0.0911,0.0573,-0.0482,0.0758,0.0573,-0.0899,0.0676,0.0573,-0.0962,0.0578,0.0953,-0.0896,0.0489,0.0953,-0.0757,0.0447,0.0953,-0.0432,0.0451,0.0953,-0.0128,0.0624,0.0953,-0.00466,0.0857,0.0953,-0.0134,0.0953,0.0953,-0.038,0.0843,0.0953,-0.0803,0.0761,0.0953,-0.0889,0.0682,0.0953,-0.0929,0.0675,0.13,-0.0608]);
IndexedFaceSet88.coord = Coordinate89;

Shape85.geometry = IndexedFaceSet88;

HAnimSegment84.children = new MFNode();

HAnimSegment84.children[0] = Shape85;

HAnimJoint83.children = new MFNode();

HAnimJoint83.children[0] = HAnimSegment84;

HAnimJoint75.children[1] = HAnimJoint83;

HAnimJoint67.children[1] = HAnimJoint75;

HAnimJoint59.children[1] = HAnimJoint67;

let HAnimJoint90 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint90.name = "r_hip";
HAnimJoint90.DEF = "hanim_r_hip";
HAnimJoint90.center = new SFVec3f(new float[-0.11,0.892362,-0.0732533]);
HAnimJoint90.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment91 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment91.name = "r_thigh";
HAnimSegment91.DEF = "hanim_r_thigh";
let Shape92 = browser.currentScene.createNode("Shape");
let Appearance93 = browser.currentScene.createNode("Appearance");
let Material94 = browser.currentScene.createNode("Material");
Material94.USE = "Pants_Color";
Appearance93.material = Material94;

let ImageTexture95 = browser.currentScene.createNode("ImageTexture");
ImageTexture95.USE = "camo";
Appearance93.texture = ImageTexture95;

Shape92.appearance = Appearance93;

let IndexedFaceSet96 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet96.coordIndex = new MFInt32(new int[5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1]);
IndexedFaceSet96.creaseAngle = 1.61;
let Coordinate97 = browser.currentScene.createNode("Coordinate");
Coordinate97.point = new MFVec3f(new float[-0.0969,0.804,-0.0486,-0.101,0.876,0.0336,-0.17,0.894,-0.00778,-0.17,0.891,-0.076,-0.124,0.858,-0.129,-0.076,0.843,-0.143,-0.025,0.819,-0.0889,-0.0507,0.847,0.0196,-0.00349,0.826,-0.0287,-0.0991,0.808,0.0406,-0.161,0.814,-0.00187,-0.165,0.808,-0.0755,-0.122,0.788,-0.126,-0.00993,0.762,-0.0937,-0.00993,0.762,-0.0309,-0.0491,0.777,0.0185,-0.0755,0.766,-0.139,-0.13,0.597,-0.00618,-0.132,0.6,-0.0593,-0.108,0.603,-0.105,-0.0722,0.601,-0.118,-0.0314,0.59,-0.0953,-0.0239,0.566,-0.0427,-0.047,0.566,0.0051,-0.0878,0.581,0.0217,-0.114,0.499,-0.0132,-0.116,0.488,-0.061,-0.103,0.567,-0.0991,-0.0362,0.557,-0.0926,-0.025,0.486,-0.047,-0.0507,0.497,-0.00188,-0.0862,0.513,0.018]);
IndexedFaceSet96.coord = Coordinate97;

Shape92.geometry = IndexedFaceSet96;

HAnimSegment91.children = new MFNode();

HAnimSegment91.children[0] = Shape92;

HAnimJoint90.children = new MFNode();

HAnimJoint90.children[0] = HAnimSegment91;

let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.name = "r_knee";
HAnimJoint98.DEF = "hanim_r_knee";
HAnimJoint98.center = new SFVec3f(new float[-0.0699,0.51,-0.0166]);
HAnimJoint98.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment99 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment99.name = "r_calf";
HAnimSegment99.DEF = "hanim_r_calf";
let Shape100 = browser.currentScene.createNode("Shape");
let Appearance101 = browser.currentScene.createNode("Appearance");
let Material102 = browser.currentScene.createNode("Material");
Material102.USE = "Pants_Color";
Appearance101.material = Material102;

let ImageTexture103 = browser.currentScene.createNode("ImageTexture");
ImageTexture103.USE = "camo";
Appearance101.texture = ImageTexture103;

Shape100.appearance = Appearance101;

let IndexedFaceSet104 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet104.coordIndex = new MFInt32(new int[14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1]);
IndexedFaceSet104.creaseAngle = 1.57;
let Coordinate105 = browser.currentScene.createNode("Coordinate");
Coordinate105.point = new MFVec3f(new float[-0.123,0.363,-0.0663,-0.123,0.363,-0.04,-0.118,0.309,-0.0685,-0.118,0.311,-0.0411,-0.117,0.508,-0.0169,-0.107,0.367,-0.107,-0.105,0.539,-0.0438,-0.105,0.31,-0.108,-0.104,0.539,-0.0223,-0.101,0.51,-0.0798,-0.0975,0.54,-0.0647,-0.0948,0.0897,-0.0368,-0.0916,0.0779,-0.0604,-0.0905,0.12,-0.0647,-0.0883,0.532,-0.00349,-0.0883,0.309,-0.018,-0.0878,0.361,-0.0126,-0.0862,0.506,0.0158,-0.0814,0.55,-0.0395,-0.0765,0.11,-0.0169,-0.0744,0.13,-0.0212,-0.0738,0.117,-0.0814,-0.0722,0.546,-0.0717,-0.0717,0.0854,-0.0765,-0.0706,0.51,-0.101,-0.0609,0.533,-0.00833,-0.0588,0.365,-0.122,-0.0577,0.544,-0.0577,-0.0572,0.308,-0.123,-0.0561,0.13,-0.0245,-0.0556,0.506,-0.000272,-0.054,0.0972,-0.0175,-0.0529,0.536,-0.0368,-0.0529,0.121,-0.0873,-0.0497,0.358,-0.0234,-0.0486,0.0999,-0.0835,-0.0475,0.307,-0.0282,-0.0416,0.124,-0.0416,-0.0406,0.0918,-0.0626,-0.0406,0.513,-0.0744,-0.0384,0.0881,-0.0363,-0.0373,0.121,-0.0636,-0.0368,0.51,-0.0357,-0.0239,0.358,-0.0475,-0.0228,0.358,-0.0926,-0.0201,0.309,-0.0937,-0.0191,0.311,-0.0508,-0.0985,0.125,-0.0375]);
IndexedFaceSet104.coord = Coordinate105;

Shape100.geometry = IndexedFaceSet104;

HAnimSegment99.children = new MFNode();

HAnimSegment99.children[0] = Shape100;

HAnimJoint98.children = new MFNode();

HAnimJoint98.children[0] = HAnimSegment99;

let HAnimJoint106 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint106.name = "r_ankle";
HAnimJoint106.DEF = "hanim_r_ankle";
HAnimJoint106.center = new SFVec3f(new float[-0.064,0.0753,-0.0412]);
HAnimJoint106.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment107 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment107.name = "r_hindfoot";
HAnimSegment107.DEF = "hanim_r_hindfoot";
let Shape108 = browser.currentScene.createNode("Shape");
let Appearance109 = browser.currentScene.createNode("Appearance");
let Material110 = browser.currentScene.createNode("Material");
Material110.USE = "Shoe_Color";
Appearance109.material = Material110;

Shape108.appearance = Appearance109;

let IndexedFaceSet111 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet111.coordIndex = new MFInt32(new int[6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1]);
IndexedFaceSet111.creaseAngle = 1.57;
let Coordinate112 = browser.currentScene.createNode("Coordinate");
Coordinate112.point = new MFVec3f(new float[-0.0727,0,-0.0994,-0.1,0,-0.0594,-0.0701,0,0.146,-0.0468,0,0.153,-0.0215,0,0.146,-0.0433,0,-0.0534,-0.0529,0,-0.0923,-0.0727,0.0219,-0.0994,-0.0863,0.0219,-0.0862,-0.1,0.0219,-0.0594,-0.108,0.0219,-0.00479,-0.112,0.0156,0.117,-0.0701,0.0156,0.146,-0.0468,0.0156,0.153,-0.0215,0.0156,0.146,-0.0165,0.017,0.0777,-0.0433,0.0219,-0.0534,-0.0529,0.0219,-0.0923,-0.0445,0.0273,-0.0189,-0.0265,0.0253,0.0549,-0.0305,0.0253,0.0938,-0.069,0.0253,0.0938,-0.102,0.0253,0.0707,-0.0568,0.0573,-0.0918,-0.0492,0.0573,-0.0497,-0.0424,0.0573,-0.00142,-0.0478,0.0573,0.0341,-0.0623,0.0573,0.0366,-0.0864,0.0573,0.0245,-0.0962,0.0573,-0.0121,-0.0845,0.0573,-0.0764,-0.0758,0.0573,-0.0899,-0.0676,0.0573,-0.0962,-0.0578,0.0953,-0.0896,-0.0489,0.0953,-0.0757,-0.0459,0.0953,-0.0615,-0.0435,0.0953,-0.0292,-0.0485,0.0953,-0.00582,-0.0624,0.0953,-0.00466,-0.0857,0.0953,-0.0134,-0.0953,0.0953,-0.038,-0.0843,0.0953,-0.0803,-0.0761,0.0953,-0.0889,-0.0682,0.0953,-0.0929,-0.0675,0.13,-0.0608,-0.0165,0,0.125,-0.112,0,0.117,-0.0165,0,0.0777,-0.0393,0,-0.0129,-0.108,0,-0.00479,-0.0863,0,-0.0862]);
IndexedFaceSet111.coord = Coordinate112;

Shape108.geometry = IndexedFaceSet111;

HAnimSegment107.children = new MFNode();

HAnimSegment107.children[0] = Shape108;

HAnimJoint106.children = new MFNode();

HAnimJoint106.children[0] = HAnimSegment107;

HAnimJoint98.children[1] = HAnimJoint106;

HAnimJoint90.children[1] = HAnimJoint98;

HAnimJoint59.children[2] = HAnimJoint90;

HAnimJoint58.children = new MFNode();

HAnimJoint58.children[0] = HAnimJoint59;

let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.name = "vl1";
HAnimJoint113.DEF = "hanim_vl1";
HAnimJoint113.center = new SFVec3f(new float[-0.00405,1.07,-0.0275]);
HAnimJoint113.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment114 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment114.name = "l1";
HAnimSegment114.DEF = "hanim_l1";
let Transform115 = browser.currentScene.createNode("Transform");
let Group116 = browser.currentScene.createNode("Group");
let Transform117 = browser.currentScene.createNode("Transform");
Transform117.scale = new SFVec3f(new float[1.1,1.1,1.1]);
Transform117.translation = new SFVec3f(new float[0,-0.12,0]);
let Shape118 = browser.currentScene.createNode("Shape");
let Appearance119 = browser.currentScene.createNode("Appearance");
let Material120 = browser.currentScene.createNode("Material");
Material120.DEF = "JacketColor";
Material120.diffuseColor = new SFColor(new float[0.01,0.28,0.01]);
Appearance119.material = Material120;

Shape118.appearance = Appearance119;

let IndexedFaceSet121 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet121.coordIndex = new MFInt32(new int[4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,43,47,42,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,33,39,53,-1,49,54,47,-1,59,58,53,-1,53,39,59,-1,58,59,60,-1,54,49,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,73,76,82,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,113,110,108,-1,110,113,114,-1,119,108,109,-1,108,119,113,-1,120,113,119,-1,119,121,120,-1,117,124,125,-1,106,117,125,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,140,146,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,76,157,60,-1,76,73,158,157,-1,60,162,58,-1,162,60,157,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,98,117,106,-1]);
IndexedFaceSet121.creaseAngle = 1.59;
let Coordinate122 = browser.currentScene.createNode("Coordinate");
Coordinate122.point = new MFVec3f(new float[0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168]);
IndexedFaceSet121.coord = Coordinate122;

let TextureCoordinate123 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate123.point = new MFVec2f(new float[0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
IndexedFaceSet121.texCoord = TextureCoordinate123;

Shape118.geometry = IndexedFaceSet121;

Transform117.children = new MFNode();

Transform117.children[0] = Shape118;

Group116.children = new MFNode();

Group116.children[0] = Transform117;

Transform115.children = new MFNode();

Transform115.children[0] = Group116;

HAnimSegment114.children = new MFNode();

HAnimSegment114.children[0] = Transform115;

let Shape124 = browser.currentScene.createNode("Shape");
let Appearance125 = browser.currentScene.createNode("Appearance");
let Material126 = browser.currentScene.createNode("Material");
Material126.DEF = "Shirt_Color";
Material126.ambientIntensity = 0.25;
Material126.diffuseColor = new SFColor(new float[0.6,0.0745,0.1137]);
Appearance125.material = Material126;

let ImageTexture127 = browser.currentScene.createNode("ImageTexture");
ImageTexture127.DEF = "small_logo_Tex";
ImageTexture127.url = new MFString(new java.lang.String["small_logo.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/small_logo.gif"]);
Appearance125.texture = ImageTexture127;

Shape124.appearance = Appearance125;

let IndexedFaceSet128 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet128.coordIndex = new MFInt32(new int[0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1]);
IndexedFaceSet128.creaseAngle = 1.59;
let Coordinate129 = browser.currentScene.createNode("Coordinate");
Coordinate129.point = new MFVec3f(new float[0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168]);
IndexedFaceSet128.coord = Coordinate129;

let TextureCoordinate130 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate130.point = new MFVec2f(new float[0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
IndexedFaceSet128.texCoord = TextureCoordinate130;

Shape124.geometry = IndexedFaceSet128;

HAnimSegment114.children[1] = Shape124;

HAnimJoint113.children = new MFNode();

HAnimJoint113.children[0] = HAnimSegment114;

let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.name = "l_shoulder";
HAnimJoint131.DEF = "hanim_l_shoulder";
HAnimJoint131.center = new SFVec3f(new float[0.167,1.36,-0.0518]);
HAnimJoint131.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment132 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment132.name = "l_upperarm";
HAnimSegment132.DEF = "hanim_l_upperarm";
let Transform133 = browser.currentScene.createNode("Transform");
Transform133.DEF = "l_upperarm_adjust";
Transform133.center = new SFVec3f(new float[0.182,1.22,-0.047]);
Transform133.rotation = new SFRotation(new float[1,0,0,0.119]);
Transform133.translation = new SFVec3f(new float[0.167,1.36,-0.0518]);
let Shape134 = browser.currentScene.createNode("Shape");
let Appearance135 = browser.currentScene.createNode("Appearance");
let Material136 = browser.currentScene.createNode("Material");
Material136.DEF = "Skin_Color";
Material136.ambientIntensity = 0.25;
Material136.diffuseColor = new SFColor(new float[0.749,0.601,0.462]);
Appearance135.material = Material136;

Shape134.appearance = Appearance135;

let IndexedFaceSet137 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet137.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1]);
IndexedFaceSet137.creaseAngle = 1.65;
let Coordinate138 = browser.currentScene.createNode("Coordinate");
Coordinate138.point = new MFVec3f(new float[0.174,1.37,-0.0625,0.185,1.38,-0.0395,0.156,1.39,-0.0464,0.174,1.37,-0.0158,0.154,1.37,-0.0185,0.157,1.38,-0.0733,0.182,1.33,-0.0728,0.151,1.33,-0.0937,0.15,1.34,-0.000787,0.185,1.33,-0.00025,0.201,1.33,-0.0411,0.189,1.26,-0.0808,0.155,1.26,-0.0867,0.151,1.26,-0.000789,0.19,1.26,-0.00401,0.209,1.26,-0.0427,0.141,1.26,-0.0421,0.203,1.08,-0.0744,0.162,1.05,-0.0561,0.169,1.08,-0.00885,0.208,1.07,-0.00133,0.221,1.08,-0.0352]);
IndexedFaceSet137.coord = Coordinate138;

Shape134.geometry = IndexedFaceSet137;

Transform133.children = new MFNode();

Transform133.children[0] = Shape134;

HAnimSegment132.children = new MFNode();

HAnimSegment132.children[0] = Transform133;

HAnimJoint131.children = new MFNode();

HAnimJoint131.children[0] = HAnimSegment132;

let HAnimJoint139 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint139.name = "l_elbow";
HAnimJoint139.DEF = "hanim_l_elbow";
HAnimJoint139.center = new SFVec3f(new float[0.196,1.07,-0.0518]);
HAnimJoint139.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment140 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment140.name = "l_forearm";
HAnimSegment140.DEF = "hanim_l_forearm";
let Transform141 = browser.currentScene.createNode("Transform");
Transform141.DEF = "l_forearm_adjust";
Transform141.center = new SFVec3f(new float[0.198,0.961,-0.0405]);
Transform141.rotation = new SFRotation(new float[-1,0,0,0.1]);
Transform141.translation = new SFVec3f(new float[0.196,1.07,-0.0518]);
let Shape142 = browser.currentScene.createNode("Shape");
let Appearance143 = browser.currentScene.createNode("Appearance");
let Material144 = browser.currentScene.createNode("Material");
Material144.USE = "Skin_Color";
Appearance143.material = Material144;

Shape142.appearance = Appearance143;

let IndexedFaceSet145 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet145.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1]);
IndexedFaceSet145.creaseAngle = 1.75;
let Coordinate146 = browser.currentScene.createNode("Coordinate");
Coordinate146.point = new MFVec3f(new float[0.177,1.09,-0.0609,0.202,1.1,-0.0566,0.189,1.1,-0.0395,0.213,1.1,-0.025,0.203,1.1,-0.0158,0.182,1.09,-0.00563,0.167,1.09,-0.0325,0.176,1.08,-0.0781,0.16,1.06,-0.0373,0.214,1.07,-0.00402,0.228,1.07,-0.0319,0.208,1.08,-0.0765,0.179,1.07,-0.00294,0.21,0.818,-0.0615,0.201,0.82,-0.0405,0.205,0.819,-0.00832,0.224,0.818,-0.00778,0.237,0.82,-0.0282,0.231,0.819,-0.0609]);
IndexedFaceSet145.coord = Coordinate146;

Shape142.geometry = IndexedFaceSet145;

Transform141.children = new MFNode();

Transform141.children[0] = Shape142;

HAnimSegment140.children = new MFNode();

HAnimSegment140.children[0] = Transform141;

HAnimJoint139.children = new MFNode();

HAnimJoint139.children[0] = HAnimSegment140;

let HAnimJoint147 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint147.name = "l_wrist";
HAnimJoint147.DEF = "hanim_l_wrist";
HAnimJoint147.center = new SFVec3f(new float[0.213,0.811,-0.0338]);
HAnimJoint147.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment148 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment148.name = "l_hand";
HAnimSegment148.DEF = "hanim_l_hand";
let Transform149 = browser.currentScene.createNode("Transform");
Transform149.DEF = "l_hand_adjust";
Transform149.center = new SFVec3f(new float[0.213,0.811,-0.0338]);
Transform149.rotation = new SFRotation(new float[-0.06361,-0.9967,0.04988,1.333]);
Transform149.translation = new SFVec3f(new float[0.213,0.811,-0.0338]);
let Shape150 = browser.currentScene.createNode("Shape");
let Appearance151 = browser.currentScene.createNode("Appearance");
let Material152 = browser.currentScene.createNode("Material");
Material152.USE = "Skin_Color";
Appearance151.material = Material152;

Shape150.appearance = Appearance151;

let IndexedFaceSet153 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet153.coordIndex = new MFInt32(new int[2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1]);
IndexedFaceSet153.creaseAngle = 1.48;
let Coordinate154 = browser.currentScene.createNode("Coordinate");
Coordinate154.point = new MFVec3f(new float[0.211,0.828,-0.0434,0.194,0.81,-0.0445,0.237,0.82,-0.0425,0.236,0.82,-0.0237,0.194,0.81,-0.0254,0.21,0.828,-0.0247,0.252,0.801,-0.0424,0.252,0.801,-0.0231,0.269,0.765,-0.0426,0.268,0.765,-0.0225,0.273,0.732,-0.0395,0.272,0.732,-0.0223,0.27,0.704,-0.0342,0.27,0.704,-0.0224,0.262,0.703,-0.0345,0.261,0.703,-0.0227,0.256,0.717,-0.0389,0.256,0.717,-0.023,0.255,0.738,-0.0408,0.255,0.738,-0.023,0.251,0.734,-0.0406,0.251,0.734,-0.0232,0.251,0.692,-0.0232,0.248,0.657,-0.0233,0.24,0.645,-0.0236,0.226,0.637,-0.0241,0.213,0.639,-0.0246,0.197,0.652,-0.0253,0.188,0.669,-0.0256,0.184,0.697,-0.0258,0.183,0.73,-0.0258,0.187,0.77,-0.0257,0.244,0.696,-0.0375,0.244,0.692,-0.0372,0.242,0.661,-0.0345,0.241,0.658,-0.0343,0.241,0.656,-0.0341,0.231,0.646,-0.0336,0.206,0.65,-0.0349,0.218,0.644,-0.034,0.205,0.652,-0.0352,0.198,0.667,-0.0367,0.195,0.691,-0.039,0.194,0.696,-0.0395,0.193,0.725,-0.042,0.193,0.731,-0.0425,0.197,0.765,-0.0449,0.197,0.77,-0.0453]);
IndexedFaceSet153.coord = Coordinate154;

Shape150.geometry = IndexedFaceSet153;

Transform149.children = new MFNode();

Transform149.children[0] = Shape150;

HAnimSegment148.children = new MFNode();

HAnimSegment148.children[0] = Transform149;

HAnimJoint147.children = new MFNode();

HAnimJoint147.children[0] = HAnimSegment148;

HAnimJoint139.children[1] = HAnimJoint147;

HAnimJoint131.children[1] = HAnimJoint139;

HAnimJoint113.children[1] = HAnimJoint131;

let HAnimJoint155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint155.name = "r_shoulder";
HAnimJoint155.DEF = "hanim_r_shoulder";
HAnimJoint155.center = new SFVec3f(new float[-0.167,1.36,-0.0458]);
HAnimJoint155.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment156 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment156.name = "r_upperarm";
HAnimSegment156.DEF = "hanim_r_upperarm";
let Transform157 = browser.currentScene.createNode("Transform");
Transform157.DEF = "r_upperarm_adjust";
Transform157.center = new SFVec3f(new float[-0.182,1.22,-0.047]);
Transform157.rotation = new SFRotation(new float[1,0,0,0.0836]);
Transform157.translation = new SFVec3f(new float[-0.167,1.36,-0.0458]);
let Shape158 = browser.currentScene.createNode("Shape");
let Appearance159 = browser.currentScene.createNode("Appearance");
let Material160 = browser.currentScene.createNode("Material");
Material160.USE = "Skin_Color";
Appearance159.material = Material160;

Shape158.appearance = Appearance159;

let IndexedFaceSet161 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet161.coordIndex = new MFInt32(new int[14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1]);
IndexedFaceSet161.creaseAngle = 1.53;
let Coordinate162 = browser.currentScene.createNode("Coordinate");
Coordinate162.point = new MFVec3f(new float[-0.221,1.08,-0.0352,-0.214,1.14,-0.0405,-0.209,1.26,-0.0427,-0.208,1.07,-0.00133,-0.203,1.08,-0.0744,-0.201,1.33,-0.0411,-0.198,1.14,-0.0024,-0.198,1.13,-0.076,-0.19,1.26,-0.00401,-0.189,1.26,-0.0808,-0.185,1.38,-0.0395,-0.185,1.33,-0.00025,-0.182,1.33,-0.0728,-0.174,1.37,-0.0158,-0.174,1.37,-0.0625,-0.169,1.08,-0.00885,-0.167,1.13,-0.0744,-0.162,1.05,-0.0561,-0.16,1.13,-0.000793,-0.157,1.38,-0.0733,-0.156,1.39,-0.0464,-0.155,1.26,-0.0867,-0.154,1.37,-0.0185,-0.151,1.26,-0.000789,-0.151,1.33,-0.0937,-0.15,1.34,-0.000787,-0.15,1.13,-0.0411,-0.141,1.26,-0.0421]);
IndexedFaceSet161.coord = Coordinate162;

Shape158.geometry = IndexedFaceSet161;

Transform157.children = new MFNode();

Transform157.children[0] = Shape158;

HAnimSegment156.children = new MFNode();

HAnimSegment156.children[0] = Transform157;

HAnimJoint155.children = new MFNode();

HAnimJoint155.children[0] = HAnimSegment156;

let HAnimJoint163 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint163.name = "r_elbow";
HAnimJoint163.DEF = "hanim_r_elbow";
HAnimJoint163.center = new SFVec3f(new float[-0.192,1.07,-0.0498]);
HAnimJoint163.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment164 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment164.name = "r_forearm";
HAnimSegment164.DEF = "hanim_r_forearm";
let Transform165 = browser.currentScene.createNode("Transform");
Transform165.DEF = "r_forearm_adjust";
Transform165.center = new SFVec3f(new float[-0.198,0.961,-0.0397]);
Transform165.rotation = new SFRotation(new float[-1,0,0,0.1254]);
Transform165.translation = new SFVec3f(new float[-0.192,1.07,-0.0498]);
let Shape166 = browser.currentScene.createNode("Shape");
let Appearance167 = browser.currentScene.createNode("Appearance");
let Material168 = browser.currentScene.createNode("Material");
Material168.USE = "Skin_Color";
Appearance167.material = Material168;

Shape166.appearance = Appearance167;

let IndexedFaceSet169 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet169.coordIndex = new MFInt32(new int[20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1]);
IndexedFaceSet169.creaseAngle = 1.73;
let Coordinate170 = browser.currentScene.createNode("Coordinate");
Coordinate170.point = new MFVec3f(new float[-0.237,0.82,-0.0282,-0.235,1.02,-0.033,-0.231,0.819,-0.0609,-0.228,1.07,-0.0319,-0.224,0.818,-0.00778,-0.221,1.01,-0.0744,-0.218,1.01,-0.00133,-0.214,1.07,-0.00402,-0.213,1.1,-0.025,-0.21,0.818,-0.0615,-0.208,1.08,-0.0765,-0.205,0.819,-0.00832,-0.203,1.1,-0.0158,-0.202,1.1,-0.0566,-0.201,0.82,-0.0405,-0.189,1.1,-0.0395,-0.183,1.01,-0.00831,-0.183,1.01,-0.0781,-0.182,1.09,-0.00563,-0.179,1.07,-0.00294,-0.177,1.09,-0.0609,-0.176,1.08,-0.0781,-0.167,1.09,-0.0325,-0.166,1,-0.0405,-0.16,1.06,-0.0373]);
IndexedFaceSet169.coord = Coordinate170;

Shape166.geometry = IndexedFaceSet169;

Transform165.children = new MFNode();

Transform165.children[0] = Shape166;

HAnimSegment164.children = new MFNode();

HAnimSegment164.children[0] = Transform165;

HAnimJoint163.children = new MFNode();

HAnimJoint163.children[0] = HAnimSegment164;

let HAnimJoint171 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint171.name = "r_wrist";
HAnimJoint171.DEF = "hanim_r_wrist";
HAnimJoint171.center = new SFVec3f(new float[-0.217,0.811,-0.0338]);
HAnimJoint171.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment172 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment172.name = "r_hand";
HAnimSegment172.DEF = "hanim_r_hand";
let Group173 = browser.currentScene.createNode("Group");
let Transform174 = browser.currentScene.createNode("Transform");
Transform174.DEF = "r_hand_adjust";
Transform174.center = new SFVec3f(new float[-0.217,0.811,-0.0338]);
Transform174.rotation = new SFRotation(new float[-0.09024,0.994,-0.0624,1.216]);
let Shape175 = browser.currentScene.createNode("Shape");
let Appearance176 = browser.currentScene.createNode("Appearance");
let Material177 = browser.currentScene.createNode("Material");
Material177.USE = "Skin_Color";
Appearance176.material = Material177;

Shape175.appearance = Appearance176;

let IndexedFaceSet178 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet178.coordIndex = new MFInt32(new int[10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1]);
IndexedFaceSet178.creaseAngle = 1.57;
let Coordinate179 = browser.currentScene.createNode("Coordinate");
Coordinate179.point = new MFVec3f(new float[-0.237,0.82,-0.0425,-0.252,0.801,-0.0424,-0.269,0.765,-0.0426,-0.273,0.732,-0.0395,-0.27,0.704,-0.0342,-0.262,0.703,-0.0345,-0.256,0.717,-0.0389,-0.255,0.738,-0.0408,-0.251,0.734,-0.0406,-0.194,0.81,-0.0445,-0.211,0.828,-0.0434,-0.236,0.82,-0.0237,-0.252,0.801,-0.0231,-0.268,0.765,-0.0225,-0.272,0.732,-0.0223,-0.27,0.704,-0.0224,-0.261,0.703,-0.0227,-0.256,0.717,-0.023,-0.255,0.738,-0.023,-0.251,0.734,-0.0232,-0.251,0.692,-0.0232,-0.248,0.657,-0.0233,-0.24,0.645,-0.0236,-0.226,0.637,-0.0241,-0.213,0.639,-0.0246,-0.197,0.652,-0.0253,-0.188,0.669,-0.0256,-0.184,0.697,-0.0258,-0.183,0.73,-0.0258,-0.187,0.77,-0.0257,-0.194,0.81,-0.0254,-0.21,0.828,-0.0247,-0.221,0.641,-0.0336,-0.21,0.65,-0.0348,-0.206,0.652,-0.0352,-0.198,0.667,-0.0368,-0.193,0.692,-0.0392,-0.192,0.696,-0.0396,-0.231,0.646,-0.0336,-0.238,0.656,-0.0342,-0.24,0.658,-0.0344,-0.24,0.662,-0.0347,-0.243,0.692,-0.0372,-0.243,0.696,-0.0376,-0.192,0.725,-0.0421,-0.192,0.73,-0.0426,-0.195,0.766,-0.0451,-0.196,0.77,-0.0454]);
IndexedFaceSet178.coord = Coordinate179;

Shape175.geometry = IndexedFaceSet178;

Transform174.children = new MFNode();

Transform174.children[0] = Shape175;

Group173.children = new MFNode();

Group173.children[0] = Transform174;

let Transform180 = browser.currentScene.createNode("Transform");
Transform180.center = new SFVec3f(new float[-0.8,0.45,0.1]);
Transform180.rotation = new SFRotation(new float[0,0,1,-2.7]);
Transform180.scale = new SFVec3f(new float[0.1,0.1,0.1]);
let Transform181 = browser.currentScene.createNode("Transform");
Transform181.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform181.translation = new SFVec3f(new float[-0.7,0,0]);
let ProtoInstance182 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance182.name = "RifleM24";
ProtoInstance182.DEF = "rifleM24";
Transform181.children = new MFNode();

Transform181.children[0] = ProtoInstance182;

let Script183 = browser.currentScene.createNode("Script");
Script183.DEF = "FireScript";
let field184 = browser.currentScene.createNode("field");
field184.name = "fire";
field184.accessType = "outputOnly";
field184.type = "SFBool";
Script183.field = new MFNode();

Script183.field[0] = field184;

let field185 = browser.currentScene.createNode("field");
field185.name = "enabled";
field185.accessType = "inputOnly";
field185.type = "SFBool";
Script183.field[1] = field185;


Script183.setSourceCode(`ecmascript:\n"+
"\n"+
"function enabled (value, timeStamp)\n"+
"{\n"+
"        //print ('enabled value =' + value);\n"+
"        if (value == true)\n"+
"           fire = value;\n"+
"}`)
Transform181.children[1] = Script183;

let TouchSensor186 = browser.currentScene.createNode("TouchSensor");
TouchSensor186.DEF = "FireTouchSensor";
TouchSensor186.description = "click for shoot rifle";
Transform181.children[2] = TouchSensor186;

let ROUTE187 = browser.currentScene.createNode("ROUTE");
ROUTE187.fromField = "isOver";
ROUTE187.fromNode = "FireTouchSensor";
ROUTE187.toField = "enabled";
ROUTE187.toNode = "FireScript";
Transform181.children[3] = ROUTE187;

let ROUTE188 = browser.currentScene.createNode("ROUTE");
ROUTE188.fromField = "touchTime";
ROUTE188.fromNode = "FireTouchSensor";
ROUTE188.toField = "animationStartTime";
ROUTE188.toNode = "rifleM24";
Transform181.children[4] = ROUTE188;

let ROUTE189 = browser.currentScene.createNode("ROUTE");
ROUTE189.fromField = "fire";
ROUTE189.fromNode = "FireScript";
ROUTE189.toField = "trigger";
ROUTE189.toNode = "rifleM24";
Transform181.children[5] = ROUTE189;

Transform180.children = new MFNode();

Transform180.children[0] = Transform181;

Group173.children[1] = Transform180;

HAnimSegment172.children = new MFNode();

HAnimSegment172.children[0] = Group173;

HAnimJoint171.children = new MFNode();

HAnimJoint171.children[0] = HAnimSegment172;

HAnimJoint163.children[1] = HAnimJoint171;

HAnimJoint155.children[1] = HAnimJoint163;

HAnimJoint113.children[2] = HAnimJoint155;

let HAnimJoint190 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint190.name = "vc4";
HAnimJoint190.DEF = "hanim_vc4";
HAnimJoint190.center = new SFVec3f(new float[0,1.43,-0.0458]);
HAnimJoint190.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment191 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment191.name = "c4";
HAnimSegment191.DEF = "hanim_c4";
let Shape192 = browser.currentScene.createNode("Shape");
let Appearance193 = browser.currentScene.createNode("Appearance");
let Material194 = browser.currentScene.createNode("Material");
Material194.USE = "Skin_Color";
Appearance193.material = Material194;

Shape192.appearance = Appearance193;

let IndexedFaceSet195 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet195.DEF = "neck";
IndexedFaceSet195.coordIndex = new MFInt32(new int[6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1]);
IndexedFaceSet195.creaseAngle = 1.91;
let Coordinate196 = browser.currentScene.createNode("Coordinate");
Coordinate196.point = new MFVec3f(new float[0.0105,1.54,-0.1,0.0357,1.54,-0.0685,0.0382,1.55,-0.0474,0.0105,1.55,-0.0204,0.0373,1.4,-0.0593,0.0577,1.4,-0.0266,0.0158,1.4,0.00512,0.0132,1.41,-0.0824,-0.0158,1.4,0.00512,-0.0577,1.4,-0.0266,-0.0382,1.55,-0.0474,-0.0105,1.55,-0.0204,-0.0373,1.4,-0.0593,-0.0357,1.54,-0.0685,-0.0132,1.41,-0.0824,-0.0105,1.54,-0.1]);
IndexedFaceSet195.coord = Coordinate196;

Shape192.geometry = IndexedFaceSet195;

HAnimSegment191.children = new MFNode();

HAnimSegment191.children[0] = Shape192;

HAnimJoint190.children = new MFNode();

HAnimJoint190.children[0] = HAnimSegment191;

let HAnimJoint197 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint197.name = "skullbase";
HAnimJoint197.DEF = "hanim_skullbase";
HAnimJoint197.center = new SFVec3f(new float[0,1.54,-0.0409]);
HAnimJoint197.stiffness = new SFVec3f(new float[0,0,0]);
let HAnimSegment198 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment198.name = "skull";
HAnimSegment198.DEF = "hanim_skull";
let Group199 = browser.currentScene.createNode("Group");
let Transform200 = browser.currentScene.createNode("Transform");
Transform200.DEF = "helmet";
Transform200.scale = new SFVec3f(new float[0.105,0.135,0.125]);
Transform200.translation = new SFVec3f(new float[0,1.6,-0.05]);
let Shape201 = browser.currentScene.createNode("Shape");
let Appearance202 = browser.currentScene.createNode("Appearance");
let Material203 = browser.currentScene.createNode("Material");
Appearance202.material = Material203;

let ImageTexture204 = browser.currentScene.createNode("ImageTexture");
ImageTexture204.USE = "camo";
Appearance202.texture = ImageTexture204;

Shape201.appearance = Appearance202;

let IndexedFaceSet205 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet205.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,4,-1,2,4,5,-1,3,6,7,-1,4,7,8,-1,5,8,9,-1,6,10,11,-1,7,11,12,-1,8,12,13,-1,9,13,14,-1,10,15,16,-1,11,16,17,-1,12,17,18,-1,13,18,19,-1,14,19,20,-1,1,4,2,-1,3,7,4,-1,4,8,5,-1,6,11,7,-1,7,12,8,-1,8,13,9,-1,10,16,11,-1,11,17,12,-1,12,18,13,-1,13,19,14,-1,21,22,23,-1,22,24,25,-1,23,25,26,-1,24,27,28,-1,25,28,29,-1,26,29,30,-1,27,31,32,-1,28,32,33,-1,29,33,34,-1,30,34,35,-1,31,0,2,-1,32,2,5,-1,33,5,9,-1,34,9,14,-1,35,14,20,-1,22,25,23,-1,24,28,25,-1,25,29,26,-1,27,32,28,-1,28,33,29,-1,29,34,30,-1,31,2,32,-1,32,5,33,-1,33,9,34,-1,34,14,35,-1,21,36,22,-1,36,37,38,-1,22,38,24,-1,37,39,40,-1,38,40,41,-1,24,41,27,-1,41,42,43,-1,27,43,31,-1,31,44,0,-1,36,38,22,-1,37,40,38,-1,38,41,24,-1,40,42,41,-1,41,43,27,-1,43,44,31,-1,15,45,16,-1,45,46,47,-1,16,47,17,-1,46,48,49,-1,47,49,50,-1,17,50,18,-1,48,51,52,-1,49,52,53,-1,50,53,54,-1,18,54,19,-1,51,55,56,-1,52,56,57,-1,53,57,58,-1,54,58,59,-1,19,59,20,-1,45,47,16,-1,46,49,47,-1,47,50,17,-1,48,52,49,-1,49,53,50,-1,50,54,18,-1,51,56,52,-1,52,57,53,-1,53,58,54,-1,54,59,19,-1,15,60,45,-1,45,61,46,-1,61,62,63,-1,46,63,48,-1,63,64,65,-1,48,65,51,-1,64,66,67,-1,65,67,68,-1,51,68,55,-1,60,61,45,-1,61,63,46,-1,62,64,63,-1,63,65,48,-1,64,67,65,-1,65,68,51,-1,55,69,56,-1,69,70,71,-1,56,71,57,-1,70,72,73,-1,71,73,74,-1,57,74,58,-1,72,75,76,-1,73,76,77,-1,74,77,78,-1,58,78,59,-1,75,79,80,-1,76,80,81,-1,77,81,82,-1,78,82,83,-1,59,83,20,-1,69,71,56,-1,70,73,71,-1,71,74,57,-1,72,76,73,-1,73,77,74,-1,74,78,58,-1,75,80,76,-1,76,81,77,-1,77,82,78,-1,78,83,59,-1,55,84,69,-1,84,85,86,-1,69,86,70,-1,85,87,88,-1,86,88,89,-1,70,89,72,-1,87,90,91,-1,88,91,92,-1,89,92,93,-1,72,93,75,-1,90,94,95,-1,91,95,96,-1,92,96,97,-1,93,97,98,-1,75,98,79,-1,84,86,69,-1,85,88,86,-1,86,89,70,-1,87,91,88,-1,88,92,89,-1,89,93,72,-1,90,95,91,-1,91,96,92,-1,92,97,93,-1,93,98,75,-1,79,99,80,-1,99,100,101,-1,80,101,81,-1,100,102,103,-1,101,103,104,-1,81,104,82,-1,102,105,106,-1,103,106,107,-1,104,107,108,-1,82,108,83,-1,105,21,23,-1,106,23,26,-1,107,26,30,-1,108,30,35,-1,83,35,20,-1,99,101,80,-1,100,103,101,-1,101,104,81,-1,102,106,103,-1,103,107,104,-1,104,108,82,-1,105,23,106,-1,106,26,107,-1,107,30,108,-1,108,35,83,-1,79,109,99,-1,109,110,111,-1,99,111,100,-1,110,112,113,-1,111,113,114,-1,100,114,102,-1,112,115,116,-1,113,116,117,-1,114,117,118,-1,102,118,105,-1,115,119,120,-1,116,120,121,-1,117,121,122,-1,118,122,123,-1,105,123,21,-1,109,111,99,-1,110,113,111,-1,111,114,100,-1,112,116,113,-1,113,117,114,-1,114,118,102,-1,115,120,116,-1,116,121,117,-1,117,122,118,-1,118,123,105,-1,119,115,124,-1,115,112,128,-1,124,128,125,-1,112,110,129,-1,128,129,130,-1,125,130,126,-1,110,109,131,-1,129,131,132,-1,130,132,133,-1,126,133,127,-1,109,79,98,-1,131,98,97,-1,132,97,96,-1,133,96,95,-1,127,95,94,-1,115,128,124,-1,112,129,128,-1,128,130,125,-1,110,131,129,-1,129,132,130,-1,130,133,126,-1,109,98,131,-1,131,97,132,-1,132,96,133,-1,133,95,127,-1,39,37,135,-1,37,36,137,-1,135,137,138,-1,136,138,139,-1,36,21,123,-1,137,123,122,-1,138,122,121,-1,139,121,120,-1,134,120,119,-1,37,137,135,-1,135,138,136,-1,36,123,137,-1,137,122,138,-1,138,121,139,-1,139,120,134,-1,94,90,140,-1,90,87,141,-1,87,85,142,-1,141,142,143,-1,85,84,144,-1,142,144,145,-1,84,55,68,-1,144,68,67,-1,145,67,66,-1,90,141,140,-1,87,142,141,-1,85,144,142,-1,142,145,143,-1,84,68,144,-1,144,67,145,-1]);
IndexedFaceSet205.creaseAngle = 0.1;
IndexedFaceSet205.solid = False;
let Coordinate206 = browser.currentScene.createNode("Coordinate");
Coordinate206.point = new MFVec3f(new float[0.5257,0,0.8507,0.3477,0,0.9376,0.4636,0.1875,0.866,0.1227,0,0.9924,0.2531,0.2047,0.9455,0.368,0.397,0.8408,-0.1227,0,0.9924,0,0.2116,0.9773,0.1308,0.4233,0.8965,0.2453,0.5955,0.765,-0.3477,0,0.9376,-0.2531,0.2047,0.9455,-0.1308,0.4233,0.8965,0,0.6142,0.7891,0.1159,0.7501,0.6511,-0.5257,0,0.8507,-0.4636,0.1875,0.866,-0.368,0.397,0.8408,-0.2453,0.5955,0.765,-0.1159,0.7501,0.6511,0,0.8507,0.5257,0.8507,0.5257,0,0.866,0.4636,0.1875,0.7501,0.6511,0.1159,0.8408,0.368,0.397,0.7408,0.5844,0.3313,0.5955,0.765,0.2453,0.765,0.2453,0.5955,0.6849,0.4732,0.5541,0.5541,0.6849,0.4732,0.397,0.8408,0.368,0.6511,0.1159,0.7501,0.5844,0.3313,0.7408,0.4732,0.5541,0.6849,0.3313,0.7408,0.5844,0.1875,0.866,0.4636,0.9376,0.3477,0,0.9924,0.1227,0,0.9455,0.2531,0.2047,0.9924,0,0,0.9773,0,0.2116,0.8965,0.1308,0.4233,0.8965,0,0.4233,0.7891,0,0.6142,0.6511,0,0.7501,-0.6511,0.1159,0.7501,-0.765,0.2453,0.5955,-0.5844,0.3313,0.7408,-0.8408,0.368,0.397,-0.6849,0.4732,0.5541,-0.4732,0.5541,0.6849,-0.866,0.4636,0.1875,-0.7408,0.5844,0.3313,-0.5541,0.6849,0.4732,-0.3313,0.7408,0.5844,-0.8507,0.5257,0,-0.7501,0.6511,0.1159,-0.5955,0.765,0.2453,-0.397,0.8408,0.368,-0.1875,0.866,0.4636,-0.6511,0,0.7501,-0.7891,0,0.6142,-0.8965,0,0.4233,-0.8965,0.1308,0.4233,-0.9773,0,0.2116,-0.9455,0.2531,0.2047,-0.9924,0,0,-0.9924,0.1227,0,-0.9376,0.3477,0,-0.7501,0.6511,-0.1159,-0.5955,0.765,-0.2453,-0.6142,0.7891,0,-0.397,0.8408,-0.368,-0.4233,0.8965,-0.1308,-0.4233,0.8965,0.1308,-0.1875,0.866,-0.4636,-0.2047,0.9455,-0.2531,-0.2116,0.9773,0,-0.2047,0.9455,0.2531,0,0.8507,-0.5257,0,0.9376,-0.3477,0,0.9924,-0.1227,0,0.9924,0.1227,0,0.9376,0.3477,-0.866,0.4636,-0.1875,-0.8408,0.368,-0.397,-0.7408,0.5844,-0.3313,-0.765,0.2453,-0.5955,-0.6849,0.4732,-0.5541,-0.5541,0.6849,-0.4732,-0.6511,0.1159,-0.7501,-0.5844,0.3313,-0.7408,-0.4732,0.5541,-0.6849,-0.3313,0.7408,-0.5844,-0.5257,0,-0.8507,-0.4636,0.1875,-0.866,-0.368,0.397,-0.8408,-0.2453,0.5955,-0.765,-0.1159,0.7501,-0.6511,0.1875,0.866,-0.4636,0.397,0.8408,-0.368,0.2047,0.9455,-0.2531,0.5955,0.765,-0.2453,0.4233,0.8965,-0.1308,0.2116,0.9773,0,0.7501,0.6511,-0.1159,0.6142,0.7891,0,0.4233,0.8965,0.1308,0.2047,0.9455,0.2531,0.1159,0.7501,-0.6511,0.2453,0.5955,-0.765,0.3313,0.7408,-0.5844,0.368,0.397,-0.8408,0.4732,0.5541,-0.6849,0.5541,0.6849,-0.4732,0.4636,0.1875,-0.866,0.5844,0.3313,-0.7408,0.6849,0.4732,-0.5541,0.7408,0.5844,-0.3313,0.5257,0,-0.8507,0.6511,0.1159,-0.7501,0.765,0.2453,-0.5955,0.8408,0.368,-0.397,0.866,0.4636,-0.1875,0.3477,0,-0.9376,0.1227,0,-0.9924,-0.1227,0,-0.9924,-0.3477,0,-0.9376,0.2531,0.2047,-0.9455,0.1308,0.4233,-0.8965,0,0.2116,-0.9773,0,0.6142,-0.7891,-0.1308,0.4233,-0.8965,-0.2531,0.2047,-0.9455,0.6511,0,-0.7501,0.9773,0,-0.2116,0.8965,0,-0.4233,0.9455,0.2531,-0.2047,0.8965,0.1308,-0.4233,0.7891,0,-0.6142,-0.6511,0,-0.7501,-0.7891,0,-0.6142,-0.8965,0.1308,-0.4233,-0.8965,0,-0.4233,-0.9455,0.2531,-0.2047,-0.9773,0,-0.2116]);
IndexedFaceSet205.coord = Coordinate206;

Shape201.geometry = IndexedFaceSet205;

Transform200.children = new MFNode();

Transform200.children[0] = Shape201;

Group199.children = new MFNode();

Group199.children[0] = Transform200;

let Transform207 = browser.currentScene.createNode("Transform");
Transform207.DEF = "helmetBelt";
Transform207.scale = new SFVec3f(new float[3,3.5,3]);
Transform207.translation = new SFVec3f(new float[0,1.61,0]);
let Shape208 = browser.currentScene.createNode("Shape");
let Appearance209 = browser.currentScene.createNode("Appearance");
Appearance209.DEF = "BeltColor";
let Material210 = browser.currentScene.createNode("Material");
Material210.USE = "JacketColor";
Appearance209.material = Material210;

Shape208.appearance = Appearance209;

let Extrusion211 = browser.currentScene.createNode("Extrusion");
Extrusion211.creaseAngle = 1.57;
Extrusion211.crossSection = new MFVec2f(new float[0,0.006,0.001,0.0057,0.001,-0.0057,0,-0.006,-0.001,-0.0057,-0.001,0.0057,0,0.006]);
Extrusion211.spine = new MFVec3f(new float[-0.03,0,0,-0.022,-0.015,0,-0.017,-0.03,0,-0.009,-0.037,0,0,-0.037,0,0.009,-0.037,0,0.017,-0.03,0,0.022,-0.015,0,0.03,0,0]);
Shape208.geometry = Extrusion211;

Transform207.children = new MFNode();

Transform207.children[0] = Shape208;

Group199.children[1] = Transform207;

let Shape212 = browser.currentScene.createNode("Shape");
let Appearance213 = browser.currentScene.createNode("Appearance");
let Material214 = browser.currentScene.createNode("Material");
Material214.USE = "Skin_Color";
Appearance213.material = Material214;

Shape212.appearance = Appearance213;

let IndexedFaceSet215 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet215.DEF = "headIFS";
IndexedFaceSet215.colorIndex = new MFInt32(new int[1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1]);
IndexedFaceSet215.coordIndex = new MFInt32(new int[48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1]);
IndexedFaceSet215.creaseAngle = 0.7854;
let Coordinate216 = browser.currentScene.createNode("Coordinate");
Coordinate216.DEF = "Face";
Coordinate216.point = new MFVec3f(new float[0,1.708,-0.0435,0,1.655,0.04322,0,1.486,0.02335,0,1.694,0.007789,0,1.631,0.051,0,1.524,-0.102,0.04,1.51,-0.07278,0.04029,1.514,-0.08254,0.03528,1.502,-0.05013,0.03479,1.517,-0.09269,0.0116,1.494,0.03382,0.01946,1.52,0.03421,0.02204,1.494,0.0272,0.02734,1.498,0.02215,0.02788,1.528,0.03084,0.0338,1.503,0.0124,0.04008,1.509,0.002821,0.05122,1.518,-0.02784,0.05867,1.544,-0.03316,0.06433,1.563,-0.03678,0.06732,1.583,-0.03683,0.06769,1.617,-0.03436,0.06641,1.637,-0.03046,0.06818,1.637,-0.04285,0.06308,1.666,-0.04036,0.05305,1.685,-0.03987,0.03136,1.7,-0.0413,0.02919,1.688,0.0091,0.05272,1.674,-0.001657,0.06061,1.66,-0.0101,0.05254,1.541,-0.01363,0.04099,1.527,0.008832,0.03528,1.524,0.02097,0.05792,1.557,-0.004307,0.04413,1.539,0.0149,0.03746,1.539,0.02656,0.003407,1.524,0.04155,0.01481,1.526,0.03912,0.005112,1.532,0.04358,0.02438,1.542,0.03578,0.02636,1.55,0.03808,0.006135,1.55,0.0545,0,1.559,0.05502,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06194,1.6,0.002668,0.01489,1.583,0.04109,0.05282,1.569,0.02821,0.05767,1.58,0.0184,0.04643,1.625,0.03705,0.0264,1.628,0.04807,0.0556,1.609,0.02579,0.05467,1.599,0.02153,0.05316,1.589,0.0207,0.03603,1.58,0.03536,0.04597,1.586,0.02904,0.02106,1.592,0.03748,0.03428,1.595,0.03294,0.06808,1.617,-0.06112,0.06714,1.564,-0.07003,0.06993,1.594,-0.08238,0.05324,1.536,-0.05922,0.04904,1.521,-0.05132,0.04758,1.514,-0.03107,0.03539,1.503,-0.00093,0.02999,1.498,0.006194,0.02308,1.492,0.01628,0.01772,1.488,0.02135,0.01378,1.488,0.02484,0.04349,1.512,-0.03987,0.02308,1.499,-0.02088,0,1.487,-0.018,0.04795,1.531,-0.08973,0.05739,1.555,-0.0982,0.06815,1.622,-0.107,0.06872,1.655,-0.08466,0.05233,1.678,-0.09642,0.05334,1.631,-0.1239,0.05011,1.581,-0.1193,0.04359,1.551,-0.1067,0.03839,1.528,-0.09652,0.03399,1.636,-0.1304,0.03224,1.685,-0.1024,0,1.557,-0.1126,0.01864,1.566,0.04105,0.0249,1.58,0.0387,0.02735,1.596,0.03552,0.04317,1.564,0.03643,0.01246,1.577,0.04276,0.04354,1.59,0.02822,0.04557,1.601,0.03652,0.0291,1.603,0.04274,0.01856,1.6,0.04349,0,1.579,0.04893,0.01064,1.558,0.04476,0.005501,1.578,0.04574,0.01405,1.531,0.04152,0.01037,1.544,0.04266,0,1.515,0.03836,0.00797,1.515,0.03774,0.01824,1.55,0.04063,-0.0249,1.58,0.0387,-0.04354,1.59,0.02822,-0.0291,1.603,0.04274,-0.04317,1.564,0.03643,-0.04597,1.586,0.02904,-0.05316,1.589,0.0207,-0.01824,1.55,0.04063,-0.01246,1.577,0.04276,-0.006135,1.55,0.0545,-0.01037,1.544,0.04266,-0.02636,1.55,0.03808,-0.03428,1.595,0.03294,-0.02735,1.596,0.03552,-0.03603,1.58,0.03536,-0.05282,1.569,0.02821,-0.05767,1.58,0.0184,-0.01864,1.566,0.04105,-0.01489,1.583,0.04109,-0.0556,1.609,0.02579,-0.04557,1.601,0.03652,-0.02106,1.592,0.03748,-0.01856,1.6,0.04349,-0.005501,1.578,0.04574,-0.01064,1.558,0.04476,0,1.592,0.04694,-0.06182,1.614,0.008199,-0.05467,1.599,0.02153,-0.06194,1.6,0.002668,-0.05792,1.557,-0.004307,-0.04413,1.539,0.0149,-0.03746,1.539,0.02656,-0.04099,1.527,0.008832,-0.03528,1.524,0.02097,-0.02788,1.528,0.03084,0,1.53,0.04236,-0.005112,1.532,0.04358,-0.01481,1.526,0.03912,-0.01946,1.52,0.03421,0,1.495,0.0348,-0.0116,1.494,0.03382,-0.02734,1.498,0.02215,-0.0338,1.503,0.0124,-0.01772,1.488,0.02135,-0.02308,1.492,0.01628,-0.02999,1.498,0.006194,-0.01405,1.531,0.04152,-0.003407,1.524,0.04155,-0.02204,1.494,0.0272,-0.00797,1.515,0.03774,-0.02438,1.542,0.03578,0,1.543,0.04432,0,1.555,0.05692,0.02295,1.492,-0.02694,0.007322,1.489,-0.01677,-0.05254,1.541,-0.01363,-0.04008,1.509,0.002821,-0.05122,1.518,-0.02784,-0.03539,1.503,-0.00093,-0.01378,1.488,0.02484,-0.02308,1.499,-0.02088,-0.04349,1.512,-0.03987,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.05856,1.63,0.01803,-0.04847,1.643,0.02895,-0.04643,1.625,0.03705,-0.02958,1.651,0.03965,-0.0264,1.628,0.04807,-0.02919,1.688,0.0091,-0.05272,1.674,-0.001657,-0.06641,1.637,-0.03046,-0.06061,1.66,-0.0101,-0.03136,1.7,-0.0413,-0.05305,1.685,-0.03987,-0.06308,1.666,-0.04036,-0.06818,1.637,-0.04285,-0.06808,1.617,-0.06112,-0.06993,1.594,-0.08238,-0.06714,1.564,-0.07003,-0.05324,1.536,-0.05922,-0.04904,1.521,-0.05132,-0.04795,1.531,-0.08973,-0.05739,1.555,-0.0982,-0.06815,1.622,-0.107,-0.06872,1.655,-0.08466,-0.05233,1.678,-0.09642,-0.03224,1.685,-0.1024,0,1.69,-0.1047,0,1.64,-0.1342,-0.05334,1.631,-0.1239,-0.05011,1.581,-0.1193,-0.04359,1.551,-0.1067,-0.03839,1.528,-0.09652,-0.03528,1.502,-0.05013,-0.04,1.51,-0.07278,-0.04029,1.514,-0.08254,-0.03479,1.517,-0.09269,-0.02295,1.492,-0.02694,-0.007322,1.489,-0.01677,0,1.588,-0.1329,-0.03399,1.636,-0.1304,-0.04758,1.514,-0.03107,-0.03428,1.595,0.03294,-0.02106,1.592,0.03748,-0.02735,1.596,0.03552,-0.0249,1.58,0.0387,-0.01489,1.583,0.04109,-0.04597,1.586,0.02904,-0.04354,1.59,0.02822,-0.03603,1.58,0.03536,-0.05856,1.63,0.01803,-0.06182,1.614,0.008199,-0.02788,1.528,0.03084,-0.005112,1.532,0.04358,-0.01405,1.531,0.04152,-0.00797,1.515,0.03774,-0.01946,1.52,0.03421,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.04847,1.643,0.02895,-0.02958,1.651,0.03965,-0.05324,1.536,-0.05922,-0.04795,1.531,-0.08973,-0.03839,1.528,-0.09652,0.02106,1.592,0.03748,0.01489,1.583,0.04109,0.0249,1.58,0.0387,0.03603,1.58,0.03536,0.04354,1.59,0.02822,0.03428,1.595,0.03294,0.02735,1.596,0.03552,0.02788,1.528,0.03084,0.01405,1.531,0.04152,0,1.53,0.04236,0,1.515,0.03836,0.00797,1.515,0.03774,0.01946,1.52,0.03421,0.005112,1.532,0.04358,0,1.655,0.04322,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06769,1.617,-0.03436,0.06732,1.583,-0.03683,0.06433,1.563,-0.03678,0.05867,1.544,-0.03316,0.05324,1.536,-0.05922,0.04795,1.531,-0.08973,0.03839,1.528,-0.09652,0,1.524,-0.102]);
IndexedFaceSet215.coord = Coordinate216;

let Color217 = browser.currentScene.createNode("Color");
Color217.color = new MFColor(new float[0.749,0.601,0.462,0.1735,0.2602,0.749,0.6364,0.133,0.1526,0.4545,0.2759,0.1902]);
IndexedFaceSet215.color = Color217;

Shape212.geometry = IndexedFaceSet215;

Group199.children[2] = Shape212;

HAnimSegment198.children = new MFNode();

HAnimSegment198.children[0] = Group199;

HAnimJoint197.children = new MFNode();

HAnimJoint197.children[0] = HAnimSegment198;

HAnimJoint190.children[1] = HAnimJoint197;

HAnimJoint113.children[3] = HAnimJoint190;

HAnimJoint58.children[1] = HAnimJoint113;

HAnimHumanoid57.joints = new MFNode();

HAnimHumanoid57.joints[0] = HAnimJoint58;

let HAnimJoint218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint218.USE = "hanim_humanoid_root";
HAnimHumanoid57.joints[1] = HAnimJoint218;

let HAnimJoint219 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint219.USE = "hanim_sacroiliac";
HAnimHumanoid57.joints[2] = HAnimJoint219;

let HAnimJoint220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint220.USE = "hanim_vl1";
HAnimHumanoid57.joints[3] = HAnimJoint220;

let HAnimJoint221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint221.USE = "hanim_vc4";
HAnimHumanoid57.joints[4] = HAnimJoint221;

let HAnimJoint222 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint222.USE = "hanim_skullbase";
HAnimHumanoid57.joints[5] = HAnimJoint222;

let HAnimJoint223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint223.USE = "hanim_l_ankle";
HAnimHumanoid57.joints[6] = HAnimJoint223;

let HAnimJoint224 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint224.USE = "hanim_r_ankle";
HAnimHumanoid57.joints[7] = HAnimJoint224;

let HAnimJoint225 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint225.USE = "hanim_l_elbow";
HAnimHumanoid57.joints[8] = HAnimJoint225;

let HAnimJoint226 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint226.USE = "hanim_r_elbow";
HAnimHumanoid57.joints[9] = HAnimJoint226;

let HAnimJoint227 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint227.USE = "hanim_l_hip";
HAnimHumanoid57.joints[10] = HAnimJoint227;

let HAnimJoint228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint228.USE = "hanim_r_hip";
HAnimHumanoid57.joints[11] = HAnimJoint228;

let HAnimJoint229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint229.USE = "hanim_l_knee";
HAnimHumanoid57.joints[12] = HAnimJoint229;

let HAnimJoint230 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint230.USE = "hanim_r_knee";
HAnimHumanoid57.joints[13] = HAnimJoint230;

let HAnimJoint231 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint231.USE = "hanim_l_shoulder";
HAnimHumanoid57.joints[14] = HAnimJoint231;

let HAnimJoint232 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint232.USE = "hanim_r_shoulder";
HAnimHumanoid57.joints[15] = HAnimJoint232;

let HAnimJoint233 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint233.USE = "hanim_l_wrist";
HAnimHumanoid57.joints[16] = HAnimJoint233;

let HAnimJoint234 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint234.USE = "hanim_r_wrist";
HAnimHumanoid57.joints[17] = HAnimJoint234;

let HAnimSegment235 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment235.USE = "hanim_pelvis";
HAnimHumanoid57.segments[18] = HAnimSegment235;

let HAnimSegment236 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment236.USE = "hanim_l1";
HAnimHumanoid57.segments[19] = HAnimSegment236;

let HAnimSegment237 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment237.USE = "hanim_c4";
HAnimHumanoid57.segments[20] = HAnimSegment237;

let HAnimSegment238 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment238.USE = "hanim_skull";
HAnimHumanoid57.segments[21] = HAnimSegment238;

let HAnimSegment239 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment239.USE = "hanim_l_calf";
HAnimHumanoid57.segments[22] = HAnimSegment239;

let HAnimSegment240 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment240.USE = "hanim_r_calf";
HAnimHumanoid57.segments[23] = HAnimSegment240;

let HAnimSegment241 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment241.USE = "hanim_l_forearm";
HAnimHumanoid57.segments[24] = HAnimSegment241;

let HAnimSegment242 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment242.USE = "hanim_r_forearm";
HAnimHumanoid57.segments[25] = HAnimSegment242;

let HAnimSegment243 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment243.USE = "hanim_l_hand";
HAnimHumanoid57.segments[26] = HAnimSegment243;

let HAnimSegment244 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment244.USE = "hanim_r_hand";
HAnimHumanoid57.segments[27] = HAnimSegment244;

let HAnimSegment245 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment245.USE = "hanim_l_hindfoot";
HAnimHumanoid57.segments[28] = HAnimSegment245;

let HAnimSegment246 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment246.USE = "hanim_r_hindfoot";
HAnimHumanoid57.segments[29] = HAnimSegment246;

let HAnimSegment247 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment247.USE = "hanim_l_thigh";
HAnimHumanoid57.segments[30] = HAnimSegment247;

let HAnimSegment248 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment248.USE = "hanim_r_thigh";
HAnimHumanoid57.segments[31] = HAnimSegment248;

let HAnimSegment249 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment249.USE = "hanim_l_upperarm";
HAnimHumanoid57.segments[32] = HAnimSegment249;

let HAnimSegment250 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment250.USE = "hanim_r_upperarm";
HAnimHumanoid57.segments[33] = HAnimSegment250;

Transform56.children = new MFNode();

Transform56.children[0] = HAnimHumanoid57;

Group55.children = new MFNode();

Group55.children[0] = Transform56;

let ProtoInstance251 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance251.name = "LOA1_ShootAnimation";
let fieldValue252 = browser.currentScene.createNode("fieldValue");
fieldValue252.name = "cycleInterval";
fieldValue252.value = "0.009999999776482582";
ProtoInstance251.fieldValue = new MFNode();

ProtoInstance251.fieldValue[0] = fieldValue252;

Group55.children[1] = ProtoInstance251;

let TimeSensor253 = browser.currentScene.createNode("TimeSensor");
TimeSensor253.DEF = "TIMER";
TimeSensor253.cycleInterval = 4;
Group55.children[2] = TimeSensor253;

Group54.children = new MFNode();

Group54.children[0] = Group55;

LOD53.children = new MFNode();

LOD53.children[0] = Group54;

let Transform254 = browser.currentScene.createNode("Transform");
LOD53.children[1] = Transform254;

let Transform255 = browser.currentScene.createNode("Transform");
Transform255.translation = new SFVec3f(new float[0,1,0]);
let Shape256 = browser.currentScene.createNode("Shape");
let Box257 = browser.currentScene.createNode("Box");
Box257.size = new SFVec3f(new float[0.5,2,0.3]);
Shape256.geometry = Box257;

let Appearance258 = browser.currentScene.createNode("Appearance");
let Material259 = browser.currentScene.createNode("Material");
Material259.diffuseColor = new SFColor(new float[0.1,0.4,0.1]);
Appearance258.material = Material259;

Shape256.appearance = Appearance258;

Transform255.children = new MFNode();

Transform255.children[0] = Shape256;

LOD53.children[2] = Transform255;

browser.currentScene.children[6] = LOD53;

let NavigationInfo260 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo260.avatarSize = new MFFloat(new float[0.15,1.53,0.75]);
NavigationInfo260.speed = 0.5;
NavigationInfo260.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children[7] = NavigationInfo260;

let WorldInfo261 = browser.currentScene.createNode("WorldInfo");
WorldInfo261.info = new MFString(new java.lang.String["Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc."]);
WorldInfo261.title = "Nancy - an HAnim compliant avatar by 3Name3D";
browser.currentScene.children[8] = WorldInfo261;

let Group262 = browser.currentScene.createNode("Group");
let ProximitySensor263 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor263.DEF = "TriggerProximitySensor";
ProximitySensor263.size = new SFVec3f(new float[50,50,50]);
Group262.children = new MFNode();

Group262.children[0] = ProximitySensor263;

let PositionInterpolator264 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator264.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator264.key = new MFFloat(new float[0,1]);
PositionInterpolator264.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
Group262.children[1] = PositionInterpolator264;

let OrientationInterpolator265 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator265.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator265.key = new MFFloat(new float[0,1]);
OrientationInterpolator265.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group262.children[2] = OrientationInterpolator265;

let OrientationInterpolator266 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator266.DEF = "SACROILIAC_ANIMATOR";
OrientationInterpolator266.key = new MFFloat(new float[0,1]);
OrientationInterpolator266.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group262.children[3] = OrientationInterpolator266;

let OrientationInterpolator267 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator267.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator267.key = new MFFloat(new float[0,1]);
OrientationInterpolator267.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,0.4]);
Group262.children[4] = OrientationInterpolator267;

let OrientationInterpolator268 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator268.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator268.key = new MFFloat(new float[0,1]);
OrientationInterpolator268.keyValue = new MFRotation(new float[0,0,1,0,0.15,0.99,0.09,1.06]);
Group262.children[5] = OrientationInterpolator268;

let OrientationInterpolator269 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator269.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator269.key = new MFFloat(new float[0,1]);
OrientationInterpolator269.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,0.2]);
Group262.children[6] = OrientationInterpolator269;

let OrientationInterpolator270 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator270.DEF = "L_MIDTARSAL_ANIMATOR";
OrientationInterpolator270.key = new MFFloat(new float[0,1]);
OrientationInterpolator270.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0]);
Group262.children[7] = OrientationInterpolator270;

let OrientationInterpolator271 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator271.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator271.key = new MFFloat(new float[0,1]);
OrientationInterpolator271.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2]);
Group262.children[8] = OrientationInterpolator271;

let OrientationInterpolator272 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator272.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator272.key = new MFFloat(new float[0,1]);
OrientationInterpolator272.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group262.children[9] = OrientationInterpolator272;

let OrientationInterpolator273 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator273.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator273.key = new MFFloat(new float[0,1]);
OrientationInterpolator273.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group262.children[10] = OrientationInterpolator273;

let OrientationInterpolator274 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator274.DEF = "R_MIDTARSAL_ANIMATOR";
OrientationInterpolator274.key = new MFFloat(new float[0,1]);
OrientationInterpolator274.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0]);
Group262.children[11] = OrientationInterpolator274;

let OrientationInterpolator275 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator275.DEF = "VL5_ANIMATOR";
OrientationInterpolator275.key = new MFFloat(new float[0,1]);
OrientationInterpolator275.keyValue = new MFRotation(new float[0,1,0,-0.4,0,1,0,-1]);
Group262.children[12] = OrientationInterpolator275;

let OrientationInterpolator276 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator276.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator276.key = new MFFloat(new float[0,0.1,0.5,0.7,1]);
OrientationInterpolator276.keyValue = new MFRotation(new float[0,1,0,0.2,0,1,0,0.3,0,1,0,0.4,0,1,0,0.9,0.47,0.85,0.23,1.04]);
Group262.children[13] = OrientationInterpolator276;

let OrientationInterpolator277 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator277.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator277.key = new MFFloat(new float[0,0.08,0.8,1]);
OrientationInterpolator277.keyValue = new MFRotation(new float[-0.95,-0.08,-0.31,0.55,-0.95,-0.08,-0.31,0.55,-0.95,-0.08,-0.31,0.55,-0.84,0.23,0.49,1.01]);
Group262.children[14] = OrientationInterpolator277;

let OrientationInterpolator278 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator278.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator278.key = new MFFloat(new float[0,0.3,0.4,0.45,1]);
OrientationInterpolator278.keyValue = new MFRotation(new float[0,0,1,-0.4,0,0,1,-0.4,0,0,1,-0.4,0,0,1,-0.4,1,0,0,-1.65]);
Group262.children[15] = OrientationInterpolator278;

let OrientationInterpolator279 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator279.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator279.key = new MFFloat(new float[0,0.3,1]);
OrientationInterpolator279.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0,0.25,0.32,0.92,1.4]);
Group262.children[16] = OrientationInterpolator279;

let OrientationInterpolator280 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator280.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator280.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator280.keyValue = new MFRotation(new float[1,0,0,-0.3,1,0,0,-0.45,1,0,0,-0.5,1,0,0,-0.55,1,0,0,-0.6,1,0,0,-0.65,1,0,0,-0.9,1,0,0,-1,1,0,0,-1,1,0,0,-1.2,1,0,0,-1.6]);
Group262.children[17] = OrientationInterpolator280;

let OrientationInterpolator281 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator281.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator281.key = new MFFloat(new float[0,0.1,0.2,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator281.keyValue = new MFRotation(new float[0,0,1,0.5,0,0,1,0.55,0,0,1,0.75,0,0,1,0.8,0,0,1,1,0,0,1,1.15,0,0,1,1.3,0,0,1,2.27]);
Group262.children[18] = OrientationInterpolator281;

let OrientationInterpolator282 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator282.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator282.key = new MFFloat(new float[0,1]);
OrientationInterpolator282.keyValue = new MFRotation(new float[1,0,0,-0.79,0.22,0.48,-0.85,1.71]);
Group262.children[19] = OrientationInterpolator282;

browser.currentScene.children[9] = Group262;

let ROUTE283 = browser.currentScene.createNode("ROUTE");
ROUTE283.fromField = "enterTime";
ROUTE283.fromNode = "TriggerProximitySensor";
ROUTE283.toField = "startTime";
ROUTE283.toNode = "TIMER";
browser.currentScene.children[10] = ROUTE283;

let ROUTE284 = browser.currentScene.createNode("ROUTE");
ROUTE284.fromField = "fraction_changed";
ROUTE284.fromNode = "TIMER";
ROUTE284.toField = "set_fraction";
ROUTE284.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
browser.currentScene.children[11] = ROUTE284;

let ROUTE285 = browser.currentScene.createNode("ROUTE");
ROUTE285.fromField = "fraction_changed";
ROUTE285.fromNode = "TIMER";
ROUTE285.toField = "set_fraction";
ROUTE285.toNode = "HUMANOIDROOT_ANIMATOR";
browser.currentScene.children[12] = ROUTE285;

let ROUTE286 = browser.currentScene.createNode("ROUTE");
ROUTE286.fromField = "fraction_changed";
ROUTE286.fromNode = "TIMER";
ROUTE286.toField = "set_fraction";
ROUTE286.toNode = "SACROILIAC_ANIMATOR";
browser.currentScene.children[13] = ROUTE286;

let ROUTE287 = browser.currentScene.createNode("ROUTE");
ROUTE287.fromField = "fraction_changed";
ROUTE287.fromNode = "TIMER";
ROUTE287.toField = "set_fraction";
ROUTE287.toNode = "L_HIP_ANIMATOR";
browser.currentScene.children[14] = ROUTE287;

let ROUTE288 = browser.currentScene.createNode("ROUTE");
ROUTE288.fromField = "fraction_changed";
ROUTE288.fromNode = "TIMER";
ROUTE288.toField = "set_fraction";
ROUTE288.toNode = "L_KNEE_ANIMATOR";
browser.currentScene.children[15] = ROUTE288;

let ROUTE289 = browser.currentScene.createNode("ROUTE");
ROUTE289.fromField = "fraction_changed";
ROUTE289.fromNode = "TIMER";
ROUTE289.toField = "set_fraction";
ROUTE289.toNode = "L_ANKLE_ANIMATOR";
browser.currentScene.children[16] = ROUTE289;

let ROUTE290 = browser.currentScene.createNode("ROUTE");
ROUTE290.fromField = "fraction_changed";
ROUTE290.fromNode = "TIMER";
ROUTE290.toField = "set_fraction";
ROUTE290.toNode = "L_MIDTARSAL_ANIMATOR";
browser.currentScene.children[17] = ROUTE290;

let ROUTE291 = browser.currentScene.createNode("ROUTE");
ROUTE291.fromField = "fraction_changed";
ROUTE291.fromNode = "TIMER";
ROUTE291.toField = "set_fraction";
ROUTE291.toNode = "R_HIP_ANIMATOR";
browser.currentScene.children[18] = ROUTE291;

let ROUTE292 = browser.currentScene.createNode("ROUTE");
ROUTE292.fromField = "fraction_changed";
ROUTE292.fromNode = "TIMER";
ROUTE292.toField = "set_fraction";
ROUTE292.toNode = "R_KNEE_ANIMATOR";
browser.currentScene.children[19] = ROUTE292;

let ROUTE293 = browser.currentScene.createNode("ROUTE");
ROUTE293.fromField = "fraction_changed";
ROUTE293.fromNode = "TIMER";
ROUTE293.toField = "set_fraction";
ROUTE293.toNode = "R_ANKLE_ANIMATOR";
browser.currentScene.children[20] = ROUTE293;

let ROUTE294 = browser.currentScene.createNode("ROUTE");
ROUTE294.fromField = "fraction_changed";
ROUTE294.fromNode = "TIMER";
ROUTE294.toField = "set_fraction";
ROUTE294.toNode = "R_MIDTARSAL_ANIMATOR";
browser.currentScene.children[21] = ROUTE294;

let ROUTE295 = browser.currentScene.createNode("ROUTE");
ROUTE295.fromField = "fraction_changed";
ROUTE295.fromNode = "TIMER";
ROUTE295.toField = "set_fraction";
ROUTE295.toNode = "VL5_ANIMATOR";
browser.currentScene.children[22] = ROUTE295;

let ROUTE296 = browser.currentScene.createNode("ROUTE");
ROUTE296.fromField = "fraction_changed";
ROUTE296.fromNode = "TIMER";
ROUTE296.toField = "set_fraction";
ROUTE296.toNode = "SKULLBASE_ANIMATOR";
browser.currentScene.children[23] = ROUTE296;

let ROUTE297 = browser.currentScene.createNode("ROUTE");
ROUTE297.fromField = "fraction_changed";
ROUTE297.fromNode = "TIMER";
ROUTE297.toField = "set_fraction";
ROUTE297.toNode = "L_SHOULDER_ANIMATOR";
browser.currentScene.children[24] = ROUTE297;

let ROUTE298 = browser.currentScene.createNode("ROUTE");
ROUTE298.fromField = "fraction_changed";
ROUTE298.fromNode = "TIMER";
ROUTE298.toField = "set_fraction";
ROUTE298.toNode = "L_ELBOW_ANIMATOR";
browser.currentScene.children[25] = ROUTE298;

let ROUTE299 = browser.currentScene.createNode("ROUTE");
ROUTE299.fromField = "fraction_changed";
ROUTE299.fromNode = "TIMER";
ROUTE299.toField = "set_fraction";
ROUTE299.toNode = "L_WRIST_ANIMATOR";
browser.currentScene.children[26] = ROUTE299;

let ROUTE300 = browser.currentScene.createNode("ROUTE");
ROUTE300.fromField = "fraction_changed";
ROUTE300.fromNode = "TIMER";
ROUTE300.toField = "set_fraction";
ROUTE300.toNode = "R_SHOULDER_ANIMATOR";
browser.currentScene.children[27] = ROUTE300;

let ROUTE301 = browser.currentScene.createNode("ROUTE");
ROUTE301.fromField = "fraction_changed";
ROUTE301.fromNode = "TIMER";
ROUTE301.toField = "set_fraction";
ROUTE301.toNode = "R_ELBOW_ANIMATOR";
browser.currentScene.children[28] = ROUTE301;

let ROUTE302 = browser.currentScene.createNode("ROUTE");
ROUTE302.fromField = "fraction_changed";
ROUTE302.fromNode = "TIMER";
ROUTE302.toField = "set_fraction";
ROUTE302.toNode = "R_WRIST_ANIMATOR";
browser.currentScene.children[29] = ROUTE302;

//Animation
let ROUTE303 = browser.currentScene.createNode("ROUTE");
ROUTE303.fromField = "value_changed";
ROUTE303.fromNode = "R_ANKLE_ANIMATOR";
ROUTE303.toField = "set_rotation";
ROUTE303.toNode = "hanim_r_ankle";
browser.currentScene.children[30] = ROUTE303;

let ROUTE304 = browser.currentScene.createNode("ROUTE");
ROUTE304.fromField = "value_changed";
ROUTE304.fromNode = "R_KNEE_ANIMATOR";
ROUTE304.toField = "set_rotation";
ROUTE304.toNode = "hanim_r_knee";
browser.currentScene.children[31] = ROUTE304;

let ROUTE305 = browser.currentScene.createNode("ROUTE");
ROUTE305.fromField = "value_changed";
ROUTE305.fromNode = "R_HIP_ANIMATOR";
ROUTE305.toField = "set_rotation";
ROUTE305.toNode = "hanim_r_hip";
browser.currentScene.children[32] = ROUTE305;

let ROUTE306 = browser.currentScene.createNode("ROUTE");
ROUTE306.fromField = "value_changed";
ROUTE306.fromNode = "L_ANKLE_ANIMATOR";
ROUTE306.toField = "set_rotation";
ROUTE306.toNode = "hanim_l_ankle";
browser.currentScene.children[33] = ROUTE306;

let ROUTE307 = browser.currentScene.createNode("ROUTE");
ROUTE307.fromField = "value_changed";
ROUTE307.fromNode = "L_KNEE_ANIMATOR";
ROUTE307.toField = "set_rotation";
ROUTE307.toNode = "hanim_l_knee";
browser.currentScene.children[34] = ROUTE307;

let ROUTE308 = browser.currentScene.createNode("ROUTE");
ROUTE308.fromField = "value_changed";
ROUTE308.fromNode = "L_HIP_ANIMATOR";
ROUTE308.toField = "set_rotation";
ROUTE308.toNode = "hanim_l_hip";
browser.currentScene.children[35] = ROUTE308;

let ROUTE309 = browser.currentScene.createNode("ROUTE");
ROUTE309.fromField = "value_changed";
ROUTE309.fromNode = "VL5_ANIMATOR";
ROUTE309.toField = "set_rotation";
ROUTE309.toNode = "hanim_sacroiliac";
browser.currentScene.children[36] = ROUTE309;

let ROUTE310 = browser.currentScene.createNode("ROUTE");
ROUTE310.fromField = "value_changed";
ROUTE310.fromNode = "R_WRIST_ANIMATOR";
ROUTE310.toField = "set_rotation";
ROUTE310.toNode = "r_hand_adjust";
browser.currentScene.children[37] = ROUTE310;

let ROUTE311 = browser.currentScene.createNode("ROUTE");
ROUTE311.fromField = "value_changed";
ROUTE311.fromNode = "R_ELBOW_ANIMATOR";
ROUTE311.toField = "set_rotation";
ROUTE311.toNode = "hanim_r_elbow";
browser.currentScene.children[38] = ROUTE311;

let ROUTE312 = browser.currentScene.createNode("ROUTE");
ROUTE312.fromField = "value_changed";
ROUTE312.fromNode = "R_SHOULDER_ANIMATOR";
ROUTE312.toField = "set_rotation";
ROUTE312.toNode = "hanim_r_shoulder";
browser.currentScene.children[39] = ROUTE312;

let ROUTE313 = browser.currentScene.createNode("ROUTE");
ROUTE313.fromField = "value_changed";
ROUTE313.fromNode = "L_WRIST_ANIMATOR";
ROUTE313.toField = "set_rotation";
ROUTE313.toNode = "hanim_l_wrist";
browser.currentScene.children[40] = ROUTE313;

let ROUTE314 = browser.currentScene.createNode("ROUTE");
ROUTE314.fromField = "value_changed";
ROUTE314.fromNode = "L_ELBOW_ANIMATOR";
ROUTE314.toField = "set_rotation";
ROUTE314.toNode = "hanim_l_elbow";
browser.currentScene.children[41] = ROUTE314;

let ROUTE315 = browser.currentScene.createNode("ROUTE");
ROUTE315.fromField = "value_changed";
ROUTE315.fromNode = "L_SHOULDER_ANIMATOR";
ROUTE315.toField = "set_rotation";
ROUTE315.toNode = "hanim_l_shoulder";
browser.currentScene.children[42] = ROUTE315;

let ROUTE316 = browser.currentScene.createNode("ROUTE");
ROUTE316.fromField = "value_changed";
ROUTE316.fromNode = "SKULLBASE_ANIMATOR";
ROUTE316.toField = "set_rotation";
ROUTE316.toNode = "hanim_skullbase";
browser.currentScene.children[43] = ROUTE316;
