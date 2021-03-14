let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let ExternProtoDeclare2 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare2.name = "RifleM24";
ExternProtoDeclare2.appinfo = "Rifle M24";
ExternProtoDeclare2.url = new MFString(new java.lang.String["../../Savage/Weapons/SmallArms/RifleM24Prototype.x3d#RifleM24","https://savage.nps.edu/Savage/Weapons/SmallArms/RifleM24Prototype.x3d#RifleM24","../../Savage/Weapons/SmallArms/RifleM24Prototype.wrl#RifleM24","https://savage.nps.edu/Savage/Weapons/SmallArms/RifleM24Prototype.wrl#RifleM24"]);
let field3 = browser.currentScene.createNode("field");
field3.name = "trigger";
field3.accessType = "inputOnly";
field3.appinfo = "input true to fire";
field3.type = "SFBool";
ExternProtoDeclare2.field = new MFNode();

ExternProtoDeclare2.field[0] = field3;

let field4 = browser.currentScene.createNode("field");
field4.name = "fire";
field4.accessType = "outputOnly";
field4.appinfo = "output true when fired";
field4.type = "SFBool";
ExternProtoDeclare2.field[1] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "animationStartTime";
field5.accessType = "inputOnly";
field5.appinfo = "trigger animation";
field5.type = "SFTime";
ExternProtoDeclare2.field[2] = field5;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ExternProtoDeclare2;

let ProtoDeclare6 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare6.name = "LOA1_ShootAnimation";
let ProtoInterface7 = browser.currentScene.createNode("ProtoInterface");
let field8 = browser.currentScene.createNode("field");
field8.name = "cycleInterval";
field8.accessType = "inputOutput";
field8.type = "SFTime";
field8.value = "0.009999999776482582";
ProtoInterface7.field = new MFNode();

ProtoInterface7.field[0] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "enabled";
field9.accessType = "inputOutput";
field9.type = "SFBool";
field9.value = "true";
ProtoInterface7.field[1] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "loop";
field10.accessType = "inputOutput";
field10.type = "SFBool";
field10.value = "true";
ProtoInterface7.field[2] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "startTime";
field11.accessType = "inputOutput";
field11.type = "SFTime";
field11.value = "0";
ProtoInterface7.field[3] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "stopTime";
field12.accessType = "inputOutput";
field12.type = "SFTime";
field12.value = "-1";
ProtoInterface7.field[4] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "fraction_changed";
field13.accessType = "outputOnly";
field13.type = "SFFloat";
ProtoInterface7.field[5] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "isActive";
field14.accessType = "outputOnly";
field14.type = "SFBool";
ProtoInterface7.field[6] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "HumanoidRoot_translation_changed";
field15.accessType = "outputOnly";
field15.type = "SFVec3f";
ProtoInterface7.field[7] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "HumanoidRoot_rotation_changed";
field16.accessType = "outputOnly";
field16.type = "SFRotation";
ProtoInterface7.field[8] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "lower_body_rotation_changed";
field17.accessType = "outputOnly";
field17.type = "SFRotation";
ProtoInterface7.field[9] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "l_hip_rotation_changed";
field18.accessType = "outputOnly";
field18.type = "SFRotation";
ProtoInterface7.field[10] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "l_knee_rotation_changed";
field19.accessType = "outputOnly";
field19.type = "SFRotation";
ProtoInterface7.field[11] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "l_ankle_rotation_changed";
field20.accessType = "outputOnly";
field20.type = "SFRotation";
ProtoInterface7.field[12] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "l_midtarsal_rotation_changed";
field21.accessType = "outputOnly";
field21.type = "SFRotation";
ProtoInterface7.field[13] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "r_hip_rotation_changed";
field22.accessType = "outputOnly";
field22.type = "SFRotation";
ProtoInterface7.field[14] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "r_knee_rotation_changed";
field23.accessType = "outputOnly";
field23.type = "SFRotation";
ProtoInterface7.field[15] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "r_ankle_rotation_changed";
field24.accessType = "outputOnly";
field24.type = "SFRotation";
ProtoInterface7.field[16] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "r_midtarsal_rotation_changed";
field25.accessType = "outputOnly";
field25.type = "SFRotation";
ProtoInterface7.field[17] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "vl5_rotation_changed";
field26.accessType = "outputOnly";
field26.type = "SFRotation";
ProtoInterface7.field[18] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "skullbase_rotation_changed";
field27.accessType = "outputOnly";
field27.type = "SFRotation";
ProtoInterface7.field[19] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "l_shoulder_rotation_changed";
field28.accessType = "outputOnly";
field28.type = "SFRotation";
ProtoInterface7.field[20] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "l_elbow_rotation_changed";
field29.accessType = "outputOnly";
field29.type = "SFRotation";
ProtoInterface7.field[21] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "l_wrist_rotation_changed";
field30.accessType = "outputOnly";
field30.type = "SFRotation";
ProtoInterface7.field[22] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "r_shoulder_rotation_changed";
field31.accessType = "outputOnly";
field31.type = "SFRotation";
ProtoInterface7.field[23] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "r_elbow_rotation_changed";
field32.accessType = "outputOnly";
field32.type = "SFRotation";
ProtoInterface7.field[24] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "r_wrist_rotation_changed";
field33.accessType = "outputOnly";
field33.type = "SFRotation";
ProtoInterface7.field[25] = field33;

ProtoDeclare6.protoInterface = ProtoInterface7;

let ProtoBody34 = browser.currentScene.createNode("ProtoBody");
let Group35 = browser.currentScene.createNode("Group");
Group35.DEF = "ErrorLostContentCheckVersionControl";
ProtoBody34.children = new MFNode();

ProtoBody34.children[0] = Group35;

ProtoDeclare6.protoBody = ProtoBody34;

browser.currentScene.children[1] = ProtoDeclare6;

//Start scene graph.
let Background36 = browser.currentScene.createNode("Background");
Background36.skyColor = new MFColor(new float[0.6,0.6,0.6]);
browser.currentScene.children[2] = Background36;

let Viewpoint37 = browser.currentScene.createNode("Viewpoint");
Viewpoint37.description = "Nancy Rifle Shooting Position";
Viewpoint37.position = new SFVec3f(new float[0,0.9,2.7]);
browser.currentScene.children[3] = Viewpoint37;

let Viewpoint38 = browser.currentScene.createNode("Viewpoint");
Viewpoint38.description = "Nancy Side Viewpoint";
Viewpoint38.orientation = new SFRotation(new float[0,-1,0,1.4925]);
Viewpoint38.position = new SFVec3f(new float[-2.7,0.9,0.4]);
browser.currentScene.children[4] = Viewpoint38;

let Viewpoint39 = browser.currentScene.createNode("Viewpoint");
Viewpoint39.description = "Nancy Above Viewpoint";
Viewpoint39.orientation = new SFRotation(new float[0.954,0.244,0.172,4.6369]);
Viewpoint39.position = new SFVec3f(new float[0.1,4.1,-0.2]);
browser.currentScene.children[5] = Viewpoint39;

let LOD40 = browser.currentScene.createNode("LOD");
LOD40.range = new MFFloat(new float[50,100]);
let Group41 = browser.currentScene.createNode("Group");
Group41.DEF = "Viewpoint";
//High Resolution
let Group42 = browser.currentScene.createNode("Group");
Group42.DEF = "HighResolution";
let Transform43 = browser.currentScene.createNode("Transform");
let HAnimHumanoid44 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid44.name = "Nancy";
HAnimHumanoid44.DEF = "hanim_Nancy";
HAnimHumanoid44.version = "1.0";
let HAnimJoint45 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint45.name = "humanoid_root";
HAnimJoint45.DEF = "hanim_humanoid_root";
HAnimJoint45.center = new SFVec3f(new float[-0.00405,0.855,-0.000113]);
let HAnimJoint46 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint46.name = "sacroiliac";
HAnimJoint46.DEF = "hanim_sacroiliac";
HAnimJoint46.center = new SFVec3f(new float[0,1.01,-0.0204]);
let HAnimSegment47 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment47.name = "pelvis";
HAnimSegment47.DEF = "hanim_pelvis";
let Shape48 = browser.currentScene.createNode("Shape");
let Appearance49 = browser.currentScene.createNode("Appearance");
let Material50 = browser.currentScene.createNode("Material");
Material50.DEF = "Pants_Color";
Material50.ambientIntensity = 0.25;
Material50.diffuseColor = new SFColor(new float[0.054,0.233,0.39]);
Appearance49.material = Material50;

let ImageTexture51 = browser.currentScene.createNode("ImageTexture");
ImageTexture51.DEF = "camo";
ImageTexture51.repeatS = False;
ImageTexture51.repeatT = False;
ImageTexture51.url = new MFString(new java.lang.String["greenCamo.jpg","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/greenCamo.jpg"]);
Appearance49.texture = ImageTexture51;

Shape48.appearance = Appearance49;

let IndexedFaceSet52 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet52.coordIndex = new MFInt32(new int[0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1]);
IndexedFaceSet52.creaseAngle = 1.14;
let Coordinate53 = browser.currentScene.createNode("Coordinate");
Coordinate53.point = new MFVec3f(new float[0,1.06,0.0218,0.0561,1.07,0.00726,0.0851,1.07,-0.0115,0.104,1.07,-0.0497,0.0851,1.07,-0.0851,0.032,1.06,-0.0985,0.0873,1.04,0.0078,0.033,1.04,0.0395,0.123,1.05,-0.0405,0.0609,1.02,-0.106,0.0894,0.996,-0.106,0.143,1,-0.0309,0.117,1,0.0164,0.0314,0.999,0.0502,0.0314,0.96,-0.13,0.156,0.966,-0.0405,0.156,0.968,-0.00724,0.0341,0.954,0.0513,0.115,0.96,-0.0916,0.121,0.926,0.0352,0.0357,0.92,0.0497,0.0314,0.91,-0.146,0.0991,0.91,-0.131,0.169,0.883,-0.0448,0.169,0.885,-0.00939,0.123,0.873,0.0384,0.0926,0.872,0.047,0.0325,0.873,0.0287,0.0293,0.866,-0.142,0.102,0.869,-0.131,0.129,0.868,-0.103,0.0314,0.84,-0.125,0.101,0.844,-0.122,0.133,0.846,-0.0878,0.0653,0.835,0.0132,0.0615,0.824,-0.111,0.0985,0.823,-0.101,0.132,0.826,-0.0448,0.0609,0.821,-0.0158,0.0599,0.812,-0.0545,0,1.08,-0.0266,-0.0561,1.07,0.00726,-0.0851,1.07,-0.0115,-0.104,1.07,-0.0497,-0.0851,1.07,-0.0851,-0.032,1.06,-0.0985,-0.0873,1.04,0.0078,-0.033,1.04,0.0395,-0.123,1.05,-0.0405,-0.0609,1.02,-0.106,0,1.02,-0.108,-0.0894,0.996,-0.106,-0.143,1,-0.0309,-0.144,1,-0.011,-0.117,1,0.0164,-0.0314,0.999,0.0502,0,0.961,-0.123,-0.0314,0.96,-0.13,-0.156,0.966,-0.0405,-0.156,0.968,-0.00724,-0.0341,0.954,0.0513,-0.115,0.96,-0.0916,-0.121,0.926,0.0352,-0.0357,0.92,0.0497,0,0.91,-0.127,-0.0314,0.91,-0.146,-0.0991,0.91,-0.131,-0.167,0.911,-0.0448,-0.167,0.912,-0.00671,0,0.883,-0.129,-0.123,0.873,0.0384,-0.0926,0.872,0.047,-0.0325,0.873,0.0287,-0.0293,0.866,-0.142,-0.102,0.869,-0.131,-0.129,0.868,-0.103,-0.166,0.863,-0.0148,0,0.863,-0.00456,-0.166,0.862,-0.0459,0,0.858,-0.1,-0.0314,0.84,-0.125,-0.101,0.844,-0.122,-0.0653,0.835,0.0132,0,0.839,-0.0217,0,0.835,-0.0867,-0.0615,0.824,-0.111,-0.0985,0.823,-0.101,-0.132,0.826,-0.0448,-0.0609,0.821,-0.0158,0,0.831,-0.0626,-0.0599,0.812,-0.0545]);
IndexedFaceSet52.coord = Coordinate53;

Shape48.geometry = IndexedFaceSet52;

HAnimSegment47.children = new MFNode();

HAnimSegment47.children[0] = Shape48;

HAnimJoint46.children = new MFNode();

HAnimJoint46.children[0] = HAnimSegment47;

let HAnimJoint54 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint54.name = "l_hip";
HAnimJoint54.DEF = "hanim_l_hip";
HAnimJoint54.center = new SFVec3f(new float[0.122,0.888271,-0.0693267]);
let HAnimSegment55 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment55.name = "l_thigh";
HAnimSegment55.DEF = "hanim_l_thigh";
let Shape56 = browser.currentScene.createNode("Shape");
let Appearance57 = browser.currentScene.createNode("Appearance");
let Material58 = browser.currentScene.createNode("Material");
Material58.USE = "Pants_Color";
Appearance57.material = Material58;

let ImageTexture59 = browser.currentScene.createNode("ImageTexture");
ImageTexture59.USE = "camo";
Appearance57.texture = ImageTexture59;

Shape56.appearance = Appearance57;

let IndexedFaceSet60 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet60.coordIndex = new MFInt32(new int[0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1]);
IndexedFaceSet60.creaseAngle = 1.32;
let Coordinate61 = browser.currentScene.createNode("Coordinate");
Coordinate61.point = new MFVec3f(new float[0.0969,0.804,-0.0486,0.101,0.876,0.0336,0.17,0.894,-0.00778,0.17,0.891,-0.076,0.124,0.858,-0.129,0.076,0.843,-0.143,0.025,0.819,-0.0889,0.0507,0.847,0.0196,0.00349,0.826,-0.0287,0.0991,0.808,0.0406,0.161,0.814,-0.00187,0.165,0.808,-0.0755,0.122,0.788,-0.126,0.00993,0.762,-0.0937,0.00993,0.762,-0.0309,0.0491,0.777,0.0185,0.0755,0.766,-0.139,0.13,0.597,-0.00618,0.132,0.6,-0.0593,0.108,0.603,-0.105,0.0722,0.601,-0.118,0.0314,0.59,-0.0953,0.0239,0.566,-0.0427,0.047,0.566,0.0051,0.0878,0.581,0.0217,0.114,0.499,-0.0132,0.116,0.488,-0.061,0.103,0.567,-0.0991,0.0362,0.557,-0.0926,0.025,0.486,-0.047,0.0507,0.497,-0.00188,0.0862,0.513,0.018,0.0733,0.579,-0.108]);
IndexedFaceSet60.coord = Coordinate61;

Shape56.geometry = IndexedFaceSet60;

HAnimSegment55.children = new MFNode();

HAnimSegment55.children[0] = Shape56;

HAnimJoint54.children = new MFNode();

HAnimJoint54.children[0] = HAnimSegment55;

let HAnimJoint62 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint62.name = "l_knee";
HAnimJoint62.DEF = "hanim_l_knee";
HAnimJoint62.center = new SFVec3f(new float[0.0738,0.517,-0.0284]);
let HAnimSegment63 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment63.name = "l_calf";
HAnimSegment63.DEF = "hanim_l_calf";
let Shape64 = browser.currentScene.createNode("Shape");
let Appearance65 = browser.currentScene.createNode("Appearance");
let Material66 = browser.currentScene.createNode("Material");
Material66.USE = "Pants_Color";
Appearance65.material = Material66;

let ImageTexture67 = browser.currentScene.createNode("ImageTexture");
ImageTexture67.USE = "camo";
Appearance65.texture = ImageTexture67;

Shape64.appearance = Appearance65;

let IndexedFaceSet68 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet68.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1]);
IndexedFaceSet68.creaseAngle = 1.57;
let Coordinate69 = browser.currentScene.createNode("Coordinate");
Coordinate69.point = new MFVec3f(new float[0.0883,0.532,-0.00349,0.0609,0.533,-0.00833,0.0814,0.55,-0.0395,0.0529,0.536,-0.0368,0.0577,0.544,-0.0577,0.0722,0.546,-0.0717,0.0975,0.54,-0.0647,0.105,0.539,-0.0438,0.104,0.539,-0.0223,0.0862,0.506,0.0158,0.101,0.51,-0.0798,0.0706,0.51,-0.101,0.0406,0.513,-0.0744,0.0368,0.51,-0.0357,0.0556,0.506,-0.000272,0.117,0.508,-0.0169,0.0878,0.361,-0.0126,0.123,0.363,-0.04,0.123,0.363,-0.0663,0.107,0.367,-0.107,0.0588,0.365,-0.122,0.0228,0.358,-0.0926,0.0239,0.358,-0.0475,0.0497,0.358,-0.0234,0.118,0.311,-0.0411,0.118,0.309,-0.0685,0.105,0.31,-0.108,0.0572,0.308,-0.123,0.0201,0.309,-0.0937,0.0191,0.311,-0.0508,0.0475,0.307,-0.0282,0.0883,0.309,-0.018,0.0959,0.124,-0.04,0.0905,0.12,-0.0647,0.0738,0.117,-0.0814,0.0373,0.121,-0.0636,0.0416,0.124,-0.0416,0.0744,0.13,-0.0212,0.0561,0.13,-0.0245,0.0529,0.121,-0.0873,0.0948,0.0897,-0.0368,0.0916,0.0779,-0.0604,0.0717,0.0854,-0.0765,0.0406,0.0918,-0.0626,0.0384,0.0881,-0.0363,0.054,0.0972,-0.0175,0.0765,0.11,-0.0169,0.0486,0.0999,-0.0835]);
IndexedFaceSet68.coord = Coordinate69;

Shape64.geometry = IndexedFaceSet68;

HAnimSegment63.children = new MFNode();

HAnimSegment63.children[0] = Shape64;

HAnimJoint62.children = new MFNode();

HAnimJoint62.children[0] = HAnimSegment63;

let HAnimJoint70 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint70.name = "l_ankle";
HAnimJoint70.DEF = "hanim_l_ankle";
HAnimJoint70.center = new SFVec3f(new float[0.0645,0.0719,-0.048]);
let HAnimSegment71 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment71.name = "l_hindfoot";
HAnimSegment71.DEF = "hanim_l_hindfoot";
let Shape72 = browser.currentScene.createNode("Shape");
let Appearance73 = browser.currentScene.createNode("Appearance");
let Material74 = browser.currentScene.createNode("Material");
Material74.DEF = "Shoe_Color";
Material74.ambientIntensity = 0.25;
Material74.diffuseColor = new SFColor(new float[0,0,0]);
Appearance73.material = Material74;

Shape72.appearance = Appearance73;

let IndexedFaceSet75 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet75.coordIndex = new MFInt32(new int[2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1]);
IndexedFaceSet75.creaseAngle = 1.57;
let Coordinate76 = browser.currentScene.createNode("Coordinate");
Coordinate76.point = new MFVec3f(new float[0.0529,0,-0.0923,0.0863,0,-0.0862,0.0727,0,-0.0994,0.0863,0.0219,-0.0862,0.0727,0.0219,-0.0994,0.1,0,-0.0594,0.1,0.0219,-0.0594,0.113,0,0.0645,0.113,0.0219,0.0645,0.112,0,0.117,0.112,0.0156,0.117,0.0701,0,0.146,0.0701,0.0156,0.146,0.0468,0,0.153,0.0468,0.0156,0.153,0.0215,0,0.146,0.0215,0.0156,0.146,0.0165,0,0.125,0.0165,0.0156,0.125,0.0211,0,0.0377,0.0211,0.0219,0.0377,0.0393,0,-0.0129,0.0393,0.0219,-0.0129,0.0433,0,-0.0534,0.0433,0.0219,-0.0534,0.0529,0.0219,-0.0923,0.0305,0.0253,0.0938,0.0505,0.0253,0.099,0.0854,0.0253,0.0834,0.102,0.0253,0.0707,0.0568,0.0573,-0.0918,0.0492,0.0573,-0.0497,0.0435,0.0573,-0.0225,0.0442,0.0573,0.0235,0.0623,0.0573,0.0366,0.0911,0.0573,0.0159,0.0962,0.0573,-0.0121,0.0911,0.0573,-0.0482,0.0758,0.0573,-0.0899,0.0676,0.0573,-0.0962,0.0578,0.0953,-0.0896,0.0489,0.0953,-0.0757,0.0447,0.0953,-0.0432,0.0451,0.0953,-0.0128,0.0624,0.0953,-0.00466,0.0857,0.0953,-0.0134,0.0953,0.0953,-0.038,0.0843,0.0953,-0.0803,0.0761,0.0953,-0.0889,0.0682,0.0953,-0.0929,0.0675,0.13,-0.0608]);
IndexedFaceSet75.coord = Coordinate76;

Shape72.geometry = IndexedFaceSet75;

HAnimSegment71.children = new MFNode();

HAnimSegment71.children[0] = Shape72;

HAnimJoint70.children = new MFNode();

HAnimJoint70.children[0] = HAnimSegment71;

HAnimJoint62.children[1] = HAnimJoint70;

HAnimJoint54.children[1] = HAnimJoint62;

HAnimJoint46.children[1] = HAnimJoint54;

let HAnimJoint77 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint77.name = "r_hip";
HAnimJoint77.DEF = "hanim_r_hip";
HAnimJoint77.center = new SFVec3f(new float[-0.11,0.892362,-0.0732533]);
let HAnimSegment78 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment78.name = "r_thigh";
HAnimSegment78.DEF = "hanim_r_thigh";
let Shape79 = browser.currentScene.createNode("Shape");
let Appearance80 = browser.currentScene.createNode("Appearance");
let Material81 = browser.currentScene.createNode("Material");
Material81.USE = "Pants_Color";
Appearance80.material = Material81;

let ImageTexture82 = browser.currentScene.createNode("ImageTexture");
ImageTexture82.USE = "camo";
Appearance80.texture = ImageTexture82;

Shape79.appearance = Appearance80;

let IndexedFaceSet83 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet83.coordIndex = new MFInt32(new int[5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1]);
IndexedFaceSet83.creaseAngle = 1.61;
let Coordinate84 = browser.currentScene.createNode("Coordinate");
Coordinate84.point = new MFVec3f(new float[-0.0969,0.804,-0.0486,-0.101,0.876,0.0336,-0.17,0.894,-0.00778,-0.17,0.891,-0.076,-0.124,0.858,-0.129,-0.076,0.843,-0.143,-0.025,0.819,-0.0889,-0.0507,0.847,0.0196,-0.00349,0.826,-0.0287,-0.0991,0.808,0.0406,-0.161,0.814,-0.00187,-0.165,0.808,-0.0755,-0.122,0.788,-0.126,-0.00993,0.762,-0.0937,-0.00993,0.762,-0.0309,-0.0491,0.777,0.0185,-0.0755,0.766,-0.139,-0.13,0.597,-0.00618,-0.132,0.6,-0.0593,-0.108,0.603,-0.105,-0.0722,0.601,-0.118,-0.0314,0.59,-0.0953,-0.0239,0.566,-0.0427,-0.047,0.566,0.0051,-0.0878,0.581,0.0217,-0.114,0.499,-0.0132,-0.116,0.488,-0.061,-0.103,0.567,-0.0991,-0.0362,0.557,-0.0926,-0.025,0.486,-0.047,-0.0507,0.497,-0.00188,-0.0862,0.513,0.018]);
IndexedFaceSet83.coord = Coordinate84;

Shape79.geometry = IndexedFaceSet83;

HAnimSegment78.children = new MFNode();

HAnimSegment78.children[0] = Shape79;

HAnimJoint77.children = new MFNode();

HAnimJoint77.children[0] = HAnimSegment78;

let HAnimJoint85 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint85.name = "r_knee";
HAnimJoint85.DEF = "hanim_r_knee";
HAnimJoint85.center = new SFVec3f(new float[-0.0699,0.51,-0.0166]);
let HAnimSegment86 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment86.name = "r_calf";
HAnimSegment86.DEF = "hanim_r_calf";
let Shape87 = browser.currentScene.createNode("Shape");
let Appearance88 = browser.currentScene.createNode("Appearance");
let Material89 = browser.currentScene.createNode("Material");
Material89.USE = "Pants_Color";
Appearance88.material = Material89;

let ImageTexture90 = browser.currentScene.createNode("ImageTexture");
ImageTexture90.USE = "camo";
Appearance88.texture = ImageTexture90;

Shape87.appearance = Appearance88;

let IndexedFaceSet91 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet91.coordIndex = new MFInt32(new int[14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1]);
IndexedFaceSet91.creaseAngle = 1.57;
let Coordinate92 = browser.currentScene.createNode("Coordinate");
Coordinate92.point = new MFVec3f(new float[-0.123,0.363,-0.0663,-0.123,0.363,-0.04,-0.118,0.309,-0.0685,-0.118,0.311,-0.0411,-0.117,0.508,-0.0169,-0.107,0.367,-0.107,-0.105,0.539,-0.0438,-0.105,0.31,-0.108,-0.104,0.539,-0.0223,-0.101,0.51,-0.0798,-0.0975,0.54,-0.0647,-0.0948,0.0897,-0.0368,-0.0916,0.0779,-0.0604,-0.0905,0.12,-0.0647,-0.0883,0.532,-0.00349,-0.0883,0.309,-0.018,-0.0878,0.361,-0.0126,-0.0862,0.506,0.0158,-0.0814,0.55,-0.0395,-0.0765,0.11,-0.0169,-0.0744,0.13,-0.0212,-0.0738,0.117,-0.0814,-0.0722,0.546,-0.0717,-0.0717,0.0854,-0.0765,-0.0706,0.51,-0.101,-0.0609,0.533,-0.00833,-0.0588,0.365,-0.122,-0.0577,0.544,-0.0577,-0.0572,0.308,-0.123,-0.0561,0.13,-0.0245,-0.0556,0.506,-0.000272,-0.054,0.0972,-0.0175,-0.0529,0.536,-0.0368,-0.0529,0.121,-0.0873,-0.0497,0.358,-0.0234,-0.0486,0.0999,-0.0835,-0.0475,0.307,-0.0282,-0.0416,0.124,-0.0416,-0.0406,0.0918,-0.0626,-0.0406,0.513,-0.0744,-0.0384,0.0881,-0.0363,-0.0373,0.121,-0.0636,-0.0368,0.51,-0.0357,-0.0239,0.358,-0.0475,-0.0228,0.358,-0.0926,-0.0201,0.309,-0.0937,-0.0191,0.311,-0.0508,-0.0985,0.125,-0.0375]);
IndexedFaceSet91.coord = Coordinate92;

Shape87.geometry = IndexedFaceSet91;

HAnimSegment86.children = new MFNode();

HAnimSegment86.children[0] = Shape87;

HAnimJoint85.children = new MFNode();

HAnimJoint85.children[0] = HAnimSegment86;

let HAnimJoint93 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint93.name = "r_ankle";
HAnimJoint93.DEF = "hanim_r_ankle";
HAnimJoint93.center = new SFVec3f(new float[-0.064,0.0753,-0.0412]);
let HAnimSegment94 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment94.name = "r_hindfoot";
HAnimSegment94.DEF = "hanim_r_hindfoot";
let Shape95 = browser.currentScene.createNode("Shape");
let Appearance96 = browser.currentScene.createNode("Appearance");
let Material97 = browser.currentScene.createNode("Material");
Material97.USE = "Shoe_Color";
Appearance96.material = Material97;

Shape95.appearance = Appearance96;

let IndexedFaceSet98 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet98.coordIndex = new MFInt32(new int[6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1]);
IndexedFaceSet98.creaseAngle = 1.57;
let Coordinate99 = browser.currentScene.createNode("Coordinate");
Coordinate99.point = new MFVec3f(new float[-0.0727,0,-0.0994,-0.1,0,-0.0594,-0.0701,0,0.146,-0.0468,0,0.153,-0.0215,0,0.146,-0.0433,0,-0.0534,-0.0529,0,-0.0923,-0.0727,0.0219,-0.0994,-0.0863,0.0219,-0.0862,-0.1,0.0219,-0.0594,-0.108,0.0219,-0.00479,-0.112,0.0156,0.117,-0.0701,0.0156,0.146,-0.0468,0.0156,0.153,-0.0215,0.0156,0.146,-0.0165,0.017,0.0777,-0.0433,0.0219,-0.0534,-0.0529,0.0219,-0.0923,-0.0445,0.0273,-0.0189,-0.0265,0.0253,0.0549,-0.0305,0.0253,0.0938,-0.069,0.0253,0.0938,-0.102,0.0253,0.0707,-0.0568,0.0573,-0.0918,-0.0492,0.0573,-0.0497,-0.0424,0.0573,-0.00142,-0.0478,0.0573,0.0341,-0.0623,0.0573,0.0366,-0.0864,0.0573,0.0245,-0.0962,0.0573,-0.0121,-0.0845,0.0573,-0.0764,-0.0758,0.0573,-0.0899,-0.0676,0.0573,-0.0962,-0.0578,0.0953,-0.0896,-0.0489,0.0953,-0.0757,-0.0459,0.0953,-0.0615,-0.0435,0.0953,-0.0292,-0.0485,0.0953,-0.00582,-0.0624,0.0953,-0.00466,-0.0857,0.0953,-0.0134,-0.0953,0.0953,-0.038,-0.0843,0.0953,-0.0803,-0.0761,0.0953,-0.0889,-0.0682,0.0953,-0.0929,-0.0675,0.13,-0.0608,-0.0165,0,0.125,-0.112,0,0.117,-0.0165,0,0.0777,-0.0393,0,-0.0129,-0.108,0,-0.00479,-0.0863,0,-0.0862]);
IndexedFaceSet98.coord = Coordinate99;

Shape95.geometry = IndexedFaceSet98;

HAnimSegment94.children = new MFNode();

HAnimSegment94.children[0] = Shape95;

HAnimJoint93.children = new MFNode();

HAnimJoint93.children[0] = HAnimSegment94;

HAnimJoint85.children[1] = HAnimJoint93;

HAnimJoint77.children[1] = HAnimJoint85;

HAnimJoint46.children[2] = HAnimJoint77;

HAnimJoint45.children = new MFNode();

HAnimJoint45.children[0] = HAnimJoint46;

let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.name = "vl1";
HAnimJoint100.DEF = "hanim_vl1";
HAnimJoint100.center = new SFVec3f(new float[-0.00405,1.07,-0.0275]);
let HAnimSegment101 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment101.name = "l1";
HAnimSegment101.DEF = "hanim_l1";
let Transform102 = browser.currentScene.createNode("Transform");
let Group103 = browser.currentScene.createNode("Group");
let Transform104 = browser.currentScene.createNode("Transform");
Transform104.scale = new SFVec3f(new float[1.1,1.1,1.1]);
Transform104.translation = new SFVec3f(new float[0,-0.12,0]);
let Shape105 = browser.currentScene.createNode("Shape");
let Appearance106 = browser.currentScene.createNode("Appearance");
let Material107 = browser.currentScene.createNode("Material");
Material107.DEF = "JacketColor";
Material107.diffuseColor = new SFColor(new float[0.01,0.28,0.01]);
Appearance106.material = Material107;

Shape105.appearance = Appearance106;

let IndexedFaceSet108 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet108.coordIndex = new MFInt32(new int[4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,43,47,42,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,33,39,53,-1,49,54,47,-1,59,58,53,-1,53,39,59,-1,58,59,60,-1,54,49,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,73,76,82,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,113,110,108,-1,110,113,114,-1,119,108,109,-1,108,119,113,-1,120,113,119,-1,119,121,120,-1,117,124,125,-1,106,117,125,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,140,146,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,76,157,60,-1,76,73,158,157,-1,60,162,58,-1,162,60,157,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,98,117,106,-1]);
IndexedFaceSet108.creaseAngle = 1.59;
let Coordinate109 = browser.currentScene.createNode("Coordinate");
Coordinate109.point = new MFVec3f(new float[0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168]);
IndexedFaceSet108.coord = Coordinate109;

let TextureCoordinate110 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate110.point = new MFVec2f(new float[0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
IndexedFaceSet108.texCoord = TextureCoordinate110;

Shape105.geometry = IndexedFaceSet108;

Transform104.children = new MFNode();

Transform104.children[0] = Shape105;

Group103.children = new MFNode();

Group103.children[0] = Transform104;

Transform102.children = new MFNode();

Transform102.children[0] = Group103;

HAnimSegment101.children = new MFNode();

HAnimSegment101.children[0] = Transform102;

let Shape111 = browser.currentScene.createNode("Shape");
let Appearance112 = browser.currentScene.createNode("Appearance");
let Material113 = browser.currentScene.createNode("Material");
Material113.DEF = "Shirt_Color";
Material113.ambientIntensity = 0.25;
Material113.diffuseColor = new SFColor(new float[0.6,0.0745,0.1137]);
Appearance112.material = Material113;

let ImageTexture114 = browser.currentScene.createNode("ImageTexture");
ImageTexture114.DEF = "small_logo_Tex";
ImageTexture114.url = new MFString(new java.lang.String["small_logo.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/small_logo.gif"]);
Appearance112.texture = ImageTexture114;

Shape111.appearance = Appearance112;

let IndexedFaceSet115 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet115.coordIndex = new MFInt32(new int[0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1]);
IndexedFaceSet115.creaseAngle = 1.59;
let Coordinate116 = browser.currentScene.createNode("Coordinate");
Coordinate116.point = new MFVec3f(new float[0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168]);
IndexedFaceSet115.coord = Coordinate116;

let TextureCoordinate117 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate117.point = new MFVec2f(new float[0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
IndexedFaceSet115.texCoord = TextureCoordinate117;

Shape111.geometry = IndexedFaceSet115;

HAnimSegment101.children[1] = Shape111;

HAnimJoint100.children = new MFNode();

HAnimJoint100.children[0] = HAnimSegment101;

let HAnimJoint118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint118.name = "l_shoulder";
HAnimJoint118.DEF = "hanim_l_shoulder";
HAnimJoint118.center = new SFVec3f(new float[0.167,1.36,-0.0518]);
let HAnimSegment119 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment119.name = "l_upperarm";
HAnimSegment119.DEF = "hanim_l_upperarm";
let Transform120 = browser.currentScene.createNode("Transform");
Transform120.DEF = "l_upperarm_adjust";
Transform120.center = new SFVec3f(new float[0.182,1.22,-0.047]);
Transform120.rotation = new SFRotation(new float[1,0,0,0.119]);
Transform120.translation = new SFVec3f(new float[0.167,1.36,-0.0518]);
let Shape121 = browser.currentScene.createNode("Shape");
let Appearance122 = browser.currentScene.createNode("Appearance");
let Material123 = browser.currentScene.createNode("Material");
Material123.DEF = "Skin_Color";
Material123.ambientIntensity = 0.25;
Material123.diffuseColor = new SFColor(new float[0.749,0.601,0.462]);
Appearance122.material = Material123;

Shape121.appearance = Appearance122;

let IndexedFaceSet124 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet124.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1]);
IndexedFaceSet124.creaseAngle = 1.65;
let Coordinate125 = browser.currentScene.createNode("Coordinate");
Coordinate125.point = new MFVec3f(new float[0.174,1.37,-0.0625,0.185,1.38,-0.0395,0.156,1.39,-0.0464,0.174,1.37,-0.0158,0.154,1.37,-0.0185,0.157,1.38,-0.0733,0.182,1.33,-0.0728,0.151,1.33,-0.0937,0.15,1.34,-0.000787,0.185,1.33,-0.00025,0.201,1.33,-0.0411,0.189,1.26,-0.0808,0.155,1.26,-0.0867,0.151,1.26,-0.000789,0.19,1.26,-0.00401,0.209,1.26,-0.0427,0.141,1.26,-0.0421,0.203,1.08,-0.0744,0.162,1.05,-0.0561,0.169,1.08,-0.00885,0.208,1.07,-0.00133,0.221,1.08,-0.0352]);
IndexedFaceSet124.coord = Coordinate125;

Shape121.geometry = IndexedFaceSet124;

Transform120.children = new MFNode();

Transform120.children[0] = Shape121;

HAnimSegment119.children = new MFNode();

HAnimSegment119.children[0] = Transform120;

HAnimJoint118.children = new MFNode();

HAnimJoint118.children[0] = HAnimSegment119;

let HAnimJoint126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint126.name = "l_elbow";
HAnimJoint126.DEF = "hanim_l_elbow";
HAnimJoint126.center = new SFVec3f(new float[0.196,1.07,-0.0518]);
let HAnimSegment127 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment127.name = "l_forearm";
HAnimSegment127.DEF = "hanim_l_forearm";
let Transform128 = browser.currentScene.createNode("Transform");
Transform128.DEF = "l_forearm_adjust";
Transform128.center = new SFVec3f(new float[0.198,0.961,-0.0405]);
Transform128.rotation = new SFRotation(new float[-1,0,0,0.1]);
Transform128.translation = new SFVec3f(new float[0.196,1.07,-0.0518]);
let Shape129 = browser.currentScene.createNode("Shape");
let Appearance130 = browser.currentScene.createNode("Appearance");
let Material131 = browser.currentScene.createNode("Material");
Material131.USE = "Skin_Color";
Appearance130.material = Material131;

Shape129.appearance = Appearance130;

let IndexedFaceSet132 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet132.coordIndex = new MFInt32(new int[2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1]);
IndexedFaceSet132.creaseAngle = 1.75;
let Coordinate133 = browser.currentScene.createNode("Coordinate");
Coordinate133.point = new MFVec3f(new float[0.177,1.09,-0.0609,0.202,1.1,-0.0566,0.189,1.1,-0.0395,0.213,1.1,-0.025,0.203,1.1,-0.0158,0.182,1.09,-0.00563,0.167,1.09,-0.0325,0.176,1.08,-0.0781,0.16,1.06,-0.0373,0.214,1.07,-0.00402,0.228,1.07,-0.0319,0.208,1.08,-0.0765,0.179,1.07,-0.00294,0.21,0.818,-0.0615,0.201,0.82,-0.0405,0.205,0.819,-0.00832,0.224,0.818,-0.00778,0.237,0.82,-0.0282,0.231,0.819,-0.0609]);
IndexedFaceSet132.coord = Coordinate133;

Shape129.geometry = IndexedFaceSet132;

Transform128.children = new MFNode();

Transform128.children[0] = Shape129;

HAnimSegment127.children = new MFNode();

HAnimSegment127.children[0] = Transform128;

HAnimJoint126.children = new MFNode();

HAnimJoint126.children[0] = HAnimSegment127;

let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.name = "l_wrist";
HAnimJoint134.DEF = "hanim_l_wrist";
HAnimJoint134.center = new SFVec3f(new float[0.213,0.811,-0.0338]);
let HAnimSegment135 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment135.name = "l_hand";
HAnimSegment135.DEF = "hanim_l_hand";
let Transform136 = browser.currentScene.createNode("Transform");
Transform136.DEF = "l_hand_adjust";
Transform136.center = new SFVec3f(new float[0.213,0.811,-0.0338]);
Transform136.rotation = new SFRotation(new float[-0.06361,-0.9967,0.04988,1.333]);
Transform136.translation = new SFVec3f(new float[0.213,0.811,-0.0338]);
let Shape137 = browser.currentScene.createNode("Shape");
let Appearance138 = browser.currentScene.createNode("Appearance");
let Material139 = browser.currentScene.createNode("Material");
Material139.USE = "Skin_Color";
Appearance138.material = Material139;

Shape137.appearance = Appearance138;

let IndexedFaceSet140 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet140.coordIndex = new MFInt32(new int[2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1]);
IndexedFaceSet140.creaseAngle = 1.48;
let Coordinate141 = browser.currentScene.createNode("Coordinate");
Coordinate141.point = new MFVec3f(new float[0.211,0.828,-0.0434,0.194,0.81,-0.0445,0.237,0.82,-0.0425,0.236,0.82,-0.0237,0.194,0.81,-0.0254,0.21,0.828,-0.0247,0.252,0.801,-0.0424,0.252,0.801,-0.0231,0.269,0.765,-0.0426,0.268,0.765,-0.0225,0.273,0.732,-0.0395,0.272,0.732,-0.0223,0.27,0.704,-0.0342,0.27,0.704,-0.0224,0.262,0.703,-0.0345,0.261,0.703,-0.0227,0.256,0.717,-0.0389,0.256,0.717,-0.023,0.255,0.738,-0.0408,0.255,0.738,-0.023,0.251,0.734,-0.0406,0.251,0.734,-0.0232,0.251,0.692,-0.0232,0.248,0.657,-0.0233,0.24,0.645,-0.0236,0.226,0.637,-0.0241,0.213,0.639,-0.0246,0.197,0.652,-0.0253,0.188,0.669,-0.0256,0.184,0.697,-0.0258,0.183,0.73,-0.0258,0.187,0.77,-0.0257,0.244,0.696,-0.0375,0.244,0.692,-0.0372,0.242,0.661,-0.0345,0.241,0.658,-0.0343,0.241,0.656,-0.0341,0.231,0.646,-0.0336,0.206,0.65,-0.0349,0.218,0.644,-0.034,0.205,0.652,-0.0352,0.198,0.667,-0.0367,0.195,0.691,-0.039,0.194,0.696,-0.0395,0.193,0.725,-0.042,0.193,0.731,-0.0425,0.197,0.765,-0.0449,0.197,0.77,-0.0453]);
IndexedFaceSet140.coord = Coordinate141;

Shape137.geometry = IndexedFaceSet140;

Transform136.children = new MFNode();

Transform136.children[0] = Shape137;

HAnimSegment135.children = new MFNode();

HAnimSegment135.children[0] = Transform136;

HAnimJoint134.children = new MFNode();

HAnimJoint134.children[0] = HAnimSegment135;

HAnimJoint126.children[1] = HAnimJoint134;

HAnimJoint118.children[1] = HAnimJoint126;

HAnimJoint100.children[1] = HAnimJoint118;

let HAnimJoint142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint142.name = "r_shoulder";
HAnimJoint142.DEF = "hanim_r_shoulder";
HAnimJoint142.center = new SFVec3f(new float[-0.167,1.36,-0.0458]);
let HAnimSegment143 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment143.name = "r_upperarm";
HAnimSegment143.DEF = "hanim_r_upperarm";
let Transform144 = browser.currentScene.createNode("Transform");
Transform144.DEF = "r_upperarm_adjust";
Transform144.center = new SFVec3f(new float[-0.182,1.22,-0.047]);
Transform144.rotation = new SFRotation(new float[1,0,0,0.0836]);
Transform144.translation = new SFVec3f(new float[-0.167,1.36,-0.0458]);
let Shape145 = browser.currentScene.createNode("Shape");
let Appearance146 = browser.currentScene.createNode("Appearance");
let Material147 = browser.currentScene.createNode("Material");
Material147.USE = "Skin_Color";
Appearance146.material = Material147;

Shape145.appearance = Appearance146;

let IndexedFaceSet148 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet148.coordIndex = new MFInt32(new int[14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1]);
IndexedFaceSet148.creaseAngle = 1.53;
let Coordinate149 = browser.currentScene.createNode("Coordinate");
Coordinate149.point = new MFVec3f(new float[-0.221,1.08,-0.0352,-0.214,1.14,-0.0405,-0.209,1.26,-0.0427,-0.208,1.07,-0.00133,-0.203,1.08,-0.0744,-0.201,1.33,-0.0411,-0.198,1.14,-0.0024,-0.198,1.13,-0.076,-0.19,1.26,-0.00401,-0.189,1.26,-0.0808,-0.185,1.38,-0.0395,-0.185,1.33,-0.00025,-0.182,1.33,-0.0728,-0.174,1.37,-0.0158,-0.174,1.37,-0.0625,-0.169,1.08,-0.00885,-0.167,1.13,-0.0744,-0.162,1.05,-0.0561,-0.16,1.13,-0.000793,-0.157,1.38,-0.0733,-0.156,1.39,-0.0464,-0.155,1.26,-0.0867,-0.154,1.37,-0.0185,-0.151,1.26,-0.000789,-0.151,1.33,-0.0937,-0.15,1.34,-0.000787,-0.15,1.13,-0.0411,-0.141,1.26,-0.0421]);
IndexedFaceSet148.coord = Coordinate149;

Shape145.geometry = IndexedFaceSet148;

Transform144.children = new MFNode();

Transform144.children[0] = Shape145;

HAnimSegment143.children = new MFNode();

HAnimSegment143.children[0] = Transform144;

HAnimJoint142.children = new MFNode();

HAnimJoint142.children[0] = HAnimSegment143;

let HAnimJoint150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint150.name = "r_elbow";
HAnimJoint150.DEF = "hanim_r_elbow";
HAnimJoint150.center = new SFVec3f(new float[-0.192,1.07,-0.0498]);
let HAnimSegment151 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment151.name = "r_forearm";
HAnimSegment151.DEF = "hanim_r_forearm";
let Transform152 = browser.currentScene.createNode("Transform");
Transform152.DEF = "r_forearm_adjust";
Transform152.center = new SFVec3f(new float[-0.198,0.961,-0.0397]);
Transform152.rotation = new SFRotation(new float[-1,0,0,0.1254]);
Transform152.translation = new SFVec3f(new float[-0.192,1.07,-0.0498]);
let Shape153 = browser.currentScene.createNode("Shape");
let Appearance154 = browser.currentScene.createNode("Appearance");
let Material155 = browser.currentScene.createNode("Material");
Material155.USE = "Skin_Color";
Appearance154.material = Material155;

Shape153.appearance = Appearance154;

let IndexedFaceSet156 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet156.coordIndex = new MFInt32(new int[20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1]);
IndexedFaceSet156.creaseAngle = 1.73;
let Coordinate157 = browser.currentScene.createNode("Coordinate");
Coordinate157.point = new MFVec3f(new float[-0.237,0.82,-0.0282,-0.235,1.02,-0.033,-0.231,0.819,-0.0609,-0.228,1.07,-0.0319,-0.224,0.818,-0.00778,-0.221,1.01,-0.0744,-0.218,1.01,-0.00133,-0.214,1.07,-0.00402,-0.213,1.1,-0.025,-0.21,0.818,-0.0615,-0.208,1.08,-0.0765,-0.205,0.819,-0.00832,-0.203,1.1,-0.0158,-0.202,1.1,-0.0566,-0.201,0.82,-0.0405,-0.189,1.1,-0.0395,-0.183,1.01,-0.00831,-0.183,1.01,-0.0781,-0.182,1.09,-0.00563,-0.179,1.07,-0.00294,-0.177,1.09,-0.0609,-0.176,1.08,-0.0781,-0.167,1.09,-0.0325,-0.166,1,-0.0405,-0.16,1.06,-0.0373]);
IndexedFaceSet156.coord = Coordinate157;

Shape153.geometry = IndexedFaceSet156;

Transform152.children = new MFNode();

Transform152.children[0] = Shape153;

HAnimSegment151.children = new MFNode();

HAnimSegment151.children[0] = Transform152;

HAnimJoint150.children = new MFNode();

HAnimJoint150.children[0] = HAnimSegment151;

let HAnimJoint158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint158.name = "r_wrist";
HAnimJoint158.DEF = "hanim_r_wrist";
HAnimJoint158.center = new SFVec3f(new float[-0.217,0.811,-0.0338]);
let HAnimSegment159 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment159.name = "r_hand";
HAnimSegment159.DEF = "hanim_r_hand";
let Group160 = browser.currentScene.createNode("Group");
let Transform161 = browser.currentScene.createNode("Transform");
Transform161.DEF = "r_hand_adjust";
Transform161.center = new SFVec3f(new float[-0.217,0.811,-0.0338]);
Transform161.rotation = new SFRotation(new float[-0.09024,0.994,-0.0624,1.216]);
let Shape162 = browser.currentScene.createNode("Shape");
let Appearance163 = browser.currentScene.createNode("Appearance");
let Material164 = browser.currentScene.createNode("Material");
Material164.USE = "Skin_Color";
Appearance163.material = Material164;

Shape162.appearance = Appearance163;

let IndexedFaceSet165 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet165.coordIndex = new MFInt32(new int[10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1]);
IndexedFaceSet165.creaseAngle = 1.57;
let Coordinate166 = browser.currentScene.createNode("Coordinate");
Coordinate166.point = new MFVec3f(new float[-0.237,0.82,-0.0425,-0.252,0.801,-0.0424,-0.269,0.765,-0.0426,-0.273,0.732,-0.0395,-0.27,0.704,-0.0342,-0.262,0.703,-0.0345,-0.256,0.717,-0.0389,-0.255,0.738,-0.0408,-0.251,0.734,-0.0406,-0.194,0.81,-0.0445,-0.211,0.828,-0.0434,-0.236,0.82,-0.0237,-0.252,0.801,-0.0231,-0.268,0.765,-0.0225,-0.272,0.732,-0.0223,-0.27,0.704,-0.0224,-0.261,0.703,-0.0227,-0.256,0.717,-0.023,-0.255,0.738,-0.023,-0.251,0.734,-0.0232,-0.251,0.692,-0.0232,-0.248,0.657,-0.0233,-0.24,0.645,-0.0236,-0.226,0.637,-0.0241,-0.213,0.639,-0.0246,-0.197,0.652,-0.0253,-0.188,0.669,-0.0256,-0.184,0.697,-0.0258,-0.183,0.73,-0.0258,-0.187,0.77,-0.0257,-0.194,0.81,-0.0254,-0.21,0.828,-0.0247,-0.221,0.641,-0.0336,-0.21,0.65,-0.0348,-0.206,0.652,-0.0352,-0.198,0.667,-0.0368,-0.193,0.692,-0.0392,-0.192,0.696,-0.0396,-0.231,0.646,-0.0336,-0.238,0.656,-0.0342,-0.24,0.658,-0.0344,-0.24,0.662,-0.0347,-0.243,0.692,-0.0372,-0.243,0.696,-0.0376,-0.192,0.725,-0.0421,-0.192,0.73,-0.0426,-0.195,0.766,-0.0451,-0.196,0.77,-0.0454]);
IndexedFaceSet165.coord = Coordinate166;

Shape162.geometry = IndexedFaceSet165;

Transform161.children = new MFNode();

Transform161.children[0] = Shape162;

Group160.children = new MFNode();

Group160.children[0] = Transform161;

let Transform167 = browser.currentScene.createNode("Transform");
Transform167.center = new SFVec3f(new float[-0.8,0.45,0.1]);
Transform167.rotation = new SFRotation(new float[0,0,1,-2.7]);
Transform167.scale = new SFVec3f(new float[0.1,0.1,0.1]);
let Transform168 = browser.currentScene.createNode("Transform");
Transform168.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform168.translation = new SFVec3f(new float[-0.7,0,0]);
let ProtoInstance169 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance169.name = "RifleM24";
ProtoInstance169.DEF = "rifleM24";
Transform168.children = new MFNode();

Transform168.children[0] = ProtoInstance169;

let Script170 = browser.currentScene.createNode("Script");
Script170.DEF = "FireScript";
let field171 = browser.currentScene.createNode("field");
field171.name = "fire";
field171.accessType = "outputOnly";
field171.type = "SFBool";
Script170.field = new MFNode();

Script170.field[0] = field171;

let field172 = browser.currentScene.createNode("field");
field172.name = "enabled";
field172.accessType = "inputOnly";
field172.type = "SFBool";
Script170.field[1] = field172;


Script170.setSourceCode(`ecmascript:\n"+
"\n"+
"function enabled (value, timeStamp)\n"+
"{\n"+
"        //print ('enabled value =' + value);\n"+
"        if (value == true)\n"+
"           fire = value;\n"+
"}`)
Transform168.children[1] = Script170;

let TouchSensor173 = browser.currentScene.createNode("TouchSensor");
TouchSensor173.DEF = "FireTouchSensor";
TouchSensor173.description = "click for shoot rifle";
Transform168.children[2] = TouchSensor173;

let ROUTE174 = browser.currentScene.createNode("ROUTE");
ROUTE174.fromField = "isOver";
ROUTE174.fromNode = "FireTouchSensor";
ROUTE174.toField = "enabled";
ROUTE174.toNode = "FireScript";
Transform168.children[3] = ROUTE174;

let ROUTE175 = browser.currentScene.createNode("ROUTE");
ROUTE175.fromField = "touchTime";
ROUTE175.fromNode = "FireTouchSensor";
ROUTE175.toField = "animationStartTime";
ROUTE175.toNode = "rifleM24";
Transform168.children[4] = ROUTE175;

let ROUTE176 = browser.currentScene.createNode("ROUTE");
ROUTE176.fromField = "fire";
ROUTE176.fromNode = "FireScript";
ROUTE176.toField = "trigger";
ROUTE176.toNode = "rifleM24";
Transform168.children[5] = ROUTE176;

Transform167.children = new MFNode();

Transform167.children[0] = Transform168;

Group160.children[1] = Transform167;

HAnimSegment159.children = new MFNode();

HAnimSegment159.children[0] = Group160;

HAnimJoint158.children = new MFNode();

HAnimJoint158.children[0] = HAnimSegment159;

HAnimJoint150.children[1] = HAnimJoint158;

HAnimJoint142.children[1] = HAnimJoint150;

HAnimJoint100.children[2] = HAnimJoint142;

let HAnimJoint177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint177.name = "vc4";
HAnimJoint177.DEF = "hanim_vc4";
HAnimJoint177.center = new SFVec3f(new float[0,1.43,-0.0458]);
let HAnimSegment178 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment178.name = "c4";
HAnimSegment178.DEF = "hanim_c4";
let Shape179 = browser.currentScene.createNode("Shape");
let Appearance180 = browser.currentScene.createNode("Appearance");
let Material181 = browser.currentScene.createNode("Material");
Material181.USE = "Skin_Color";
Appearance180.material = Material181;

Shape179.appearance = Appearance180;

let IndexedFaceSet182 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet182.DEF = "neck";
IndexedFaceSet182.coordIndex = new MFInt32(new int[6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1]);
IndexedFaceSet182.creaseAngle = 1.91;
let Coordinate183 = browser.currentScene.createNode("Coordinate");
Coordinate183.point = new MFVec3f(new float[0.0105,1.54,-0.1,0.0357,1.54,-0.0685,0.0382,1.55,-0.0474,0.0105,1.55,-0.0204,0.0373,1.4,-0.0593,0.0577,1.4,-0.0266,0.0158,1.4,0.00512,0.0132,1.41,-0.0824,-0.0158,1.4,0.00512,-0.0577,1.4,-0.0266,-0.0382,1.55,-0.0474,-0.0105,1.55,-0.0204,-0.0373,1.4,-0.0593,-0.0357,1.54,-0.0685,-0.0132,1.41,-0.0824,-0.0105,1.54,-0.1]);
IndexedFaceSet182.coord = Coordinate183;

Shape179.geometry = IndexedFaceSet182;

HAnimSegment178.children = new MFNode();

HAnimSegment178.children[0] = Shape179;

HAnimJoint177.children = new MFNode();

HAnimJoint177.children[0] = HAnimSegment178;

let HAnimJoint184 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint184.name = "skullbase";
HAnimJoint184.DEF = "hanim_skullbase";
HAnimJoint184.center = new SFVec3f(new float[0,1.54,-0.0409]);
let HAnimSegment185 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment185.name = "skull";
HAnimSegment185.DEF = "hanim_skull";
let Group186 = browser.currentScene.createNode("Group");
let Transform187 = browser.currentScene.createNode("Transform");
Transform187.DEF = "helmet";
Transform187.scale = new SFVec3f(new float[0.105,0.135,0.125]);
Transform187.translation = new SFVec3f(new float[0,1.6,-0.05]);
let Shape188 = browser.currentScene.createNode("Shape");
let Appearance189 = browser.currentScene.createNode("Appearance");
let Material190 = browser.currentScene.createNode("Material");
Appearance189.material = Material190;

let ImageTexture191 = browser.currentScene.createNode("ImageTexture");
ImageTexture191.USE = "camo";
Appearance189.texture = ImageTexture191;

Shape188.appearance = Appearance189;

let IndexedFaceSet192 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet192.coordIndex = new MFInt32(new int[0,1,2,-1,1,3,4,-1,2,4,5,-1,3,6,7,-1,4,7,8,-1,5,8,9,-1,6,10,11,-1,7,11,12,-1,8,12,13,-1,9,13,14,-1,10,15,16,-1,11,16,17,-1,12,17,18,-1,13,18,19,-1,14,19,20,-1,1,4,2,-1,3,7,4,-1,4,8,5,-1,6,11,7,-1,7,12,8,-1,8,13,9,-1,10,16,11,-1,11,17,12,-1,12,18,13,-1,13,19,14,-1,21,22,23,-1,22,24,25,-1,23,25,26,-1,24,27,28,-1,25,28,29,-1,26,29,30,-1,27,31,32,-1,28,32,33,-1,29,33,34,-1,30,34,35,-1,31,0,2,-1,32,2,5,-1,33,5,9,-1,34,9,14,-1,35,14,20,-1,22,25,23,-1,24,28,25,-1,25,29,26,-1,27,32,28,-1,28,33,29,-1,29,34,30,-1,31,2,32,-1,32,5,33,-1,33,9,34,-1,34,14,35,-1,21,36,22,-1,36,37,38,-1,22,38,24,-1,37,39,40,-1,38,40,41,-1,24,41,27,-1,41,42,43,-1,27,43,31,-1,31,44,0,-1,36,38,22,-1,37,40,38,-1,38,41,24,-1,40,42,41,-1,41,43,27,-1,43,44,31,-1,15,45,16,-1,45,46,47,-1,16,47,17,-1,46,48,49,-1,47,49,50,-1,17,50,18,-1,48,51,52,-1,49,52,53,-1,50,53,54,-1,18,54,19,-1,51,55,56,-1,52,56,57,-1,53,57,58,-1,54,58,59,-1,19,59,20,-1,45,47,16,-1,46,49,47,-1,47,50,17,-1,48,52,49,-1,49,53,50,-1,50,54,18,-1,51,56,52,-1,52,57,53,-1,53,58,54,-1,54,59,19,-1,15,60,45,-1,45,61,46,-1,61,62,63,-1,46,63,48,-1,63,64,65,-1,48,65,51,-1,64,66,67,-1,65,67,68,-1,51,68,55,-1,60,61,45,-1,61,63,46,-1,62,64,63,-1,63,65,48,-1,64,67,65,-1,65,68,51,-1,55,69,56,-1,69,70,71,-1,56,71,57,-1,70,72,73,-1,71,73,74,-1,57,74,58,-1,72,75,76,-1,73,76,77,-1,74,77,78,-1,58,78,59,-1,75,79,80,-1,76,80,81,-1,77,81,82,-1,78,82,83,-1,59,83,20,-1,69,71,56,-1,70,73,71,-1,71,74,57,-1,72,76,73,-1,73,77,74,-1,74,78,58,-1,75,80,76,-1,76,81,77,-1,77,82,78,-1,78,83,59,-1,55,84,69,-1,84,85,86,-1,69,86,70,-1,85,87,88,-1,86,88,89,-1,70,89,72,-1,87,90,91,-1,88,91,92,-1,89,92,93,-1,72,93,75,-1,90,94,95,-1,91,95,96,-1,92,96,97,-1,93,97,98,-1,75,98,79,-1,84,86,69,-1,85,88,86,-1,86,89,70,-1,87,91,88,-1,88,92,89,-1,89,93,72,-1,90,95,91,-1,91,96,92,-1,92,97,93,-1,93,98,75,-1,79,99,80,-1,99,100,101,-1,80,101,81,-1,100,102,103,-1,101,103,104,-1,81,104,82,-1,102,105,106,-1,103,106,107,-1,104,107,108,-1,82,108,83,-1,105,21,23,-1,106,23,26,-1,107,26,30,-1,108,30,35,-1,83,35,20,-1,99,101,80,-1,100,103,101,-1,101,104,81,-1,102,106,103,-1,103,107,104,-1,104,108,82,-1,105,23,106,-1,106,26,107,-1,107,30,108,-1,108,35,83,-1,79,109,99,-1,109,110,111,-1,99,111,100,-1,110,112,113,-1,111,113,114,-1,100,114,102,-1,112,115,116,-1,113,116,117,-1,114,117,118,-1,102,118,105,-1,115,119,120,-1,116,120,121,-1,117,121,122,-1,118,122,123,-1,105,123,21,-1,109,111,99,-1,110,113,111,-1,111,114,100,-1,112,116,113,-1,113,117,114,-1,114,118,102,-1,115,120,116,-1,116,121,117,-1,117,122,118,-1,118,123,105,-1,119,115,124,-1,115,112,128,-1,124,128,125,-1,112,110,129,-1,128,129,130,-1,125,130,126,-1,110,109,131,-1,129,131,132,-1,130,132,133,-1,126,133,127,-1,109,79,98,-1,131,98,97,-1,132,97,96,-1,133,96,95,-1,127,95,94,-1,115,128,124,-1,112,129,128,-1,128,130,125,-1,110,131,129,-1,129,132,130,-1,130,133,126,-1,109,98,131,-1,131,97,132,-1,132,96,133,-1,133,95,127,-1,39,37,135,-1,37,36,137,-1,135,137,138,-1,136,138,139,-1,36,21,123,-1,137,123,122,-1,138,122,121,-1,139,121,120,-1,134,120,119,-1,37,137,135,-1,135,138,136,-1,36,123,137,-1,137,122,138,-1,138,121,139,-1,139,120,134,-1,94,90,140,-1,90,87,141,-1,87,85,142,-1,141,142,143,-1,85,84,144,-1,142,144,145,-1,84,55,68,-1,144,68,67,-1,145,67,66,-1,90,141,140,-1,87,142,141,-1,85,144,142,-1,142,145,143,-1,84,68,144,-1,144,67,145,-1]);
IndexedFaceSet192.creaseAngle = 0.1;
IndexedFaceSet192.solid = False;
let Coordinate193 = browser.currentScene.createNode("Coordinate");
Coordinate193.point = new MFVec3f(new float[0.5257,0,0.8507,0.3477,0,0.9376,0.4636,0.1875,0.866,0.1227,0,0.9924,0.2531,0.2047,0.9455,0.368,0.397,0.8408,-0.1227,0,0.9924,0,0.2116,0.9773,0.1308,0.4233,0.8965,0.2453,0.5955,0.765,-0.3477,0,0.9376,-0.2531,0.2047,0.9455,-0.1308,0.4233,0.8965,0,0.6142,0.7891,0.1159,0.7501,0.6511,-0.5257,0,0.8507,-0.4636,0.1875,0.866,-0.368,0.397,0.8408,-0.2453,0.5955,0.765,-0.1159,0.7501,0.6511,0,0.8507,0.5257,0.8507,0.5257,0,0.866,0.4636,0.1875,0.7501,0.6511,0.1159,0.8408,0.368,0.397,0.7408,0.5844,0.3313,0.5955,0.765,0.2453,0.765,0.2453,0.5955,0.6849,0.4732,0.5541,0.5541,0.6849,0.4732,0.397,0.8408,0.368,0.6511,0.1159,0.7501,0.5844,0.3313,0.7408,0.4732,0.5541,0.6849,0.3313,0.7408,0.5844,0.1875,0.866,0.4636,0.9376,0.3477,0,0.9924,0.1227,0,0.9455,0.2531,0.2047,0.9924,0,0,0.9773,0,0.2116,0.8965,0.1308,0.4233,0.8965,0,0.4233,0.7891,0,0.6142,0.6511,0,0.7501,-0.6511,0.1159,0.7501,-0.765,0.2453,0.5955,-0.5844,0.3313,0.7408,-0.8408,0.368,0.397,-0.6849,0.4732,0.5541,-0.4732,0.5541,0.6849,-0.866,0.4636,0.1875,-0.7408,0.5844,0.3313,-0.5541,0.6849,0.4732,-0.3313,0.7408,0.5844,-0.8507,0.5257,0,-0.7501,0.6511,0.1159,-0.5955,0.765,0.2453,-0.397,0.8408,0.368,-0.1875,0.866,0.4636,-0.6511,0,0.7501,-0.7891,0,0.6142,-0.8965,0,0.4233,-0.8965,0.1308,0.4233,-0.9773,0,0.2116,-0.9455,0.2531,0.2047,-0.9924,0,0,-0.9924,0.1227,0,-0.9376,0.3477,0,-0.7501,0.6511,-0.1159,-0.5955,0.765,-0.2453,-0.6142,0.7891,0,-0.397,0.8408,-0.368,-0.4233,0.8965,-0.1308,-0.4233,0.8965,0.1308,-0.1875,0.866,-0.4636,-0.2047,0.9455,-0.2531,-0.2116,0.9773,0,-0.2047,0.9455,0.2531,0,0.8507,-0.5257,0,0.9376,-0.3477,0,0.9924,-0.1227,0,0.9924,0.1227,0,0.9376,0.3477,-0.866,0.4636,-0.1875,-0.8408,0.368,-0.397,-0.7408,0.5844,-0.3313,-0.765,0.2453,-0.5955,-0.6849,0.4732,-0.5541,-0.5541,0.6849,-0.4732,-0.6511,0.1159,-0.7501,-0.5844,0.3313,-0.7408,-0.4732,0.5541,-0.6849,-0.3313,0.7408,-0.5844,-0.5257,0,-0.8507,-0.4636,0.1875,-0.866,-0.368,0.397,-0.8408,-0.2453,0.5955,-0.765,-0.1159,0.7501,-0.6511,0.1875,0.866,-0.4636,0.397,0.8408,-0.368,0.2047,0.9455,-0.2531,0.5955,0.765,-0.2453,0.4233,0.8965,-0.1308,0.2116,0.9773,0,0.7501,0.6511,-0.1159,0.6142,0.7891,0,0.4233,0.8965,0.1308,0.2047,0.9455,0.2531,0.1159,0.7501,-0.6511,0.2453,0.5955,-0.765,0.3313,0.7408,-0.5844,0.368,0.397,-0.8408,0.4732,0.5541,-0.6849,0.5541,0.6849,-0.4732,0.4636,0.1875,-0.866,0.5844,0.3313,-0.7408,0.6849,0.4732,-0.5541,0.7408,0.5844,-0.3313,0.5257,0,-0.8507,0.6511,0.1159,-0.7501,0.765,0.2453,-0.5955,0.8408,0.368,-0.397,0.866,0.4636,-0.1875,0.3477,0,-0.9376,0.1227,0,-0.9924,-0.1227,0,-0.9924,-0.3477,0,-0.9376,0.2531,0.2047,-0.9455,0.1308,0.4233,-0.8965,0,0.2116,-0.9773,0,0.6142,-0.7891,-0.1308,0.4233,-0.8965,-0.2531,0.2047,-0.9455,0.6511,0,-0.7501,0.9773,0,-0.2116,0.8965,0,-0.4233,0.9455,0.2531,-0.2047,0.8965,0.1308,-0.4233,0.7891,0,-0.6142,-0.6511,0,-0.7501,-0.7891,0,-0.6142,-0.8965,0.1308,-0.4233,-0.8965,0,-0.4233,-0.9455,0.2531,-0.2047,-0.9773,0,-0.2116]);
IndexedFaceSet192.coord = Coordinate193;

Shape188.geometry = IndexedFaceSet192;

Transform187.children = new MFNode();

Transform187.children[0] = Shape188;

Group186.children = new MFNode();

Group186.children[0] = Transform187;

let Transform194 = browser.currentScene.createNode("Transform");
Transform194.DEF = "helmetBelt";
Transform194.scale = new SFVec3f(new float[3,3.5,3]);
Transform194.translation = new SFVec3f(new float[0,1.61,0]);
let Shape195 = browser.currentScene.createNode("Shape");
let Appearance196 = browser.currentScene.createNode("Appearance");
Appearance196.DEF = "BeltColor";
let Material197 = browser.currentScene.createNode("Material");
Material197.USE = "JacketColor";
Appearance196.material = Material197;

Shape195.appearance = Appearance196;

let Extrusion198 = browser.currentScene.createNode("Extrusion");
Extrusion198.creaseAngle = 1.57;
Extrusion198.crossSection = new MFVec2f(new float[0,0.006,0.001,0.0057,0.001,-0.0057,0,-0.006,-0.001,-0.0057,-0.001,0.0057,0,0.006]);
Extrusion198.spine = new MFVec3f(new float[-0.03,0,0,-0.022,-0.015,0,-0.017,-0.03,0,-0.009,-0.037,0,0,-0.037,0,0.009,-0.037,0,0.017,-0.03,0,0.022,-0.015,0,0.03,0,0]);
Shape195.geometry = Extrusion198;

Transform194.children = new MFNode();

Transform194.children[0] = Shape195;

Group186.children[1] = Transform194;

let Shape199 = browser.currentScene.createNode("Shape");
let Appearance200 = browser.currentScene.createNode("Appearance");
let Material201 = browser.currentScene.createNode("Material");
Material201.USE = "Skin_Color";
Appearance200.material = Material201;

Shape199.appearance = Appearance200;

let IndexedFaceSet202 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet202.DEF = "headIFS";
IndexedFaceSet202.colorIndex = new MFInt32(new int[1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1]);
IndexedFaceSet202.coordIndex = new MFInt32(new int[48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1]);
IndexedFaceSet202.creaseAngle = 0.7854;
let Coordinate203 = browser.currentScene.createNode("Coordinate");
Coordinate203.DEF = "Face";
Coordinate203.point = new MFVec3f(new float[0,1.708,-0.0435,0,1.655,0.04322,0,1.486,0.02335,0,1.694,0.007789,0,1.631,0.051,0,1.524,-0.102,0.04,1.51,-0.07278,0.04029,1.514,-0.08254,0.03528,1.502,-0.05013,0.03479,1.517,-0.09269,0.0116,1.494,0.03382,0.01946,1.52,0.03421,0.02204,1.494,0.0272,0.02734,1.498,0.02215,0.02788,1.528,0.03084,0.0338,1.503,0.0124,0.04008,1.509,0.002821,0.05122,1.518,-0.02784,0.05867,1.544,-0.03316,0.06433,1.563,-0.03678,0.06732,1.583,-0.03683,0.06769,1.617,-0.03436,0.06641,1.637,-0.03046,0.06818,1.637,-0.04285,0.06308,1.666,-0.04036,0.05305,1.685,-0.03987,0.03136,1.7,-0.0413,0.02919,1.688,0.0091,0.05272,1.674,-0.001657,0.06061,1.66,-0.0101,0.05254,1.541,-0.01363,0.04099,1.527,0.008832,0.03528,1.524,0.02097,0.05792,1.557,-0.004307,0.04413,1.539,0.0149,0.03746,1.539,0.02656,0.003407,1.524,0.04155,0.01481,1.526,0.03912,0.005112,1.532,0.04358,0.02438,1.542,0.03578,0.02636,1.55,0.03808,0.006135,1.55,0.0545,0,1.559,0.05502,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06194,1.6,0.002668,0.01489,1.583,0.04109,0.05282,1.569,0.02821,0.05767,1.58,0.0184,0.04643,1.625,0.03705,0.0264,1.628,0.04807,0.0556,1.609,0.02579,0.05467,1.599,0.02153,0.05316,1.589,0.0207,0.03603,1.58,0.03536,0.04597,1.586,0.02904,0.02106,1.592,0.03748,0.03428,1.595,0.03294,0.06808,1.617,-0.06112,0.06714,1.564,-0.07003,0.06993,1.594,-0.08238,0.05324,1.536,-0.05922,0.04904,1.521,-0.05132,0.04758,1.514,-0.03107,0.03539,1.503,-0.00093,0.02999,1.498,0.006194,0.02308,1.492,0.01628,0.01772,1.488,0.02135,0.01378,1.488,0.02484,0.04349,1.512,-0.03987,0.02308,1.499,-0.02088,0,1.487,-0.018,0.04795,1.531,-0.08973,0.05739,1.555,-0.0982,0.06815,1.622,-0.107,0.06872,1.655,-0.08466,0.05233,1.678,-0.09642,0.05334,1.631,-0.1239,0.05011,1.581,-0.1193,0.04359,1.551,-0.1067,0.03839,1.528,-0.09652,0.03399,1.636,-0.1304,0.03224,1.685,-0.1024,0,1.557,-0.1126,0.01864,1.566,0.04105,0.0249,1.58,0.0387,0.02735,1.596,0.03552,0.04317,1.564,0.03643,0.01246,1.577,0.04276,0.04354,1.59,0.02822,0.04557,1.601,0.03652,0.0291,1.603,0.04274,0.01856,1.6,0.04349,0,1.579,0.04893,0.01064,1.558,0.04476,0.005501,1.578,0.04574,0.01405,1.531,0.04152,0.01037,1.544,0.04266,0,1.515,0.03836,0.00797,1.515,0.03774,0.01824,1.55,0.04063,-0.0249,1.58,0.0387,-0.04354,1.59,0.02822,-0.0291,1.603,0.04274,-0.04317,1.564,0.03643,-0.04597,1.586,0.02904,-0.05316,1.589,0.0207,-0.01824,1.55,0.04063,-0.01246,1.577,0.04276,-0.006135,1.55,0.0545,-0.01037,1.544,0.04266,-0.02636,1.55,0.03808,-0.03428,1.595,0.03294,-0.02735,1.596,0.03552,-0.03603,1.58,0.03536,-0.05282,1.569,0.02821,-0.05767,1.58,0.0184,-0.01864,1.566,0.04105,-0.01489,1.583,0.04109,-0.0556,1.609,0.02579,-0.04557,1.601,0.03652,-0.02106,1.592,0.03748,-0.01856,1.6,0.04349,-0.005501,1.578,0.04574,-0.01064,1.558,0.04476,0,1.592,0.04694,-0.06182,1.614,0.008199,-0.05467,1.599,0.02153,-0.06194,1.6,0.002668,-0.05792,1.557,-0.004307,-0.04413,1.539,0.0149,-0.03746,1.539,0.02656,-0.04099,1.527,0.008832,-0.03528,1.524,0.02097,-0.02788,1.528,0.03084,0,1.53,0.04236,-0.005112,1.532,0.04358,-0.01481,1.526,0.03912,-0.01946,1.52,0.03421,0,1.495,0.0348,-0.0116,1.494,0.03382,-0.02734,1.498,0.02215,-0.0338,1.503,0.0124,-0.01772,1.488,0.02135,-0.02308,1.492,0.01628,-0.02999,1.498,0.006194,-0.01405,1.531,0.04152,-0.003407,1.524,0.04155,-0.02204,1.494,0.0272,-0.00797,1.515,0.03774,-0.02438,1.542,0.03578,0,1.543,0.04432,0,1.555,0.05692,0.02295,1.492,-0.02694,0.007322,1.489,-0.01677,-0.05254,1.541,-0.01363,-0.04008,1.509,0.002821,-0.05122,1.518,-0.02784,-0.03539,1.503,-0.00093,-0.01378,1.488,0.02484,-0.02308,1.499,-0.02088,-0.04349,1.512,-0.03987,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.05856,1.63,0.01803,-0.04847,1.643,0.02895,-0.04643,1.625,0.03705,-0.02958,1.651,0.03965,-0.0264,1.628,0.04807,-0.02919,1.688,0.0091,-0.05272,1.674,-0.001657,-0.06641,1.637,-0.03046,-0.06061,1.66,-0.0101,-0.03136,1.7,-0.0413,-0.05305,1.685,-0.03987,-0.06308,1.666,-0.04036,-0.06818,1.637,-0.04285,-0.06808,1.617,-0.06112,-0.06993,1.594,-0.08238,-0.06714,1.564,-0.07003,-0.05324,1.536,-0.05922,-0.04904,1.521,-0.05132,-0.04795,1.531,-0.08973,-0.05739,1.555,-0.0982,-0.06815,1.622,-0.107,-0.06872,1.655,-0.08466,-0.05233,1.678,-0.09642,-0.03224,1.685,-0.1024,0,1.69,-0.1047,0,1.64,-0.1342,-0.05334,1.631,-0.1239,-0.05011,1.581,-0.1193,-0.04359,1.551,-0.1067,-0.03839,1.528,-0.09652,-0.03528,1.502,-0.05013,-0.04,1.51,-0.07278,-0.04029,1.514,-0.08254,-0.03479,1.517,-0.09269,-0.02295,1.492,-0.02694,-0.007322,1.489,-0.01677,0,1.588,-0.1329,-0.03399,1.636,-0.1304,-0.04758,1.514,-0.03107,-0.03428,1.595,0.03294,-0.02106,1.592,0.03748,-0.02735,1.596,0.03552,-0.0249,1.58,0.0387,-0.01489,1.583,0.04109,-0.04597,1.586,0.02904,-0.04354,1.59,0.02822,-0.03603,1.58,0.03536,-0.05856,1.63,0.01803,-0.06182,1.614,0.008199,-0.02788,1.528,0.03084,-0.005112,1.532,0.04358,-0.01405,1.531,0.04152,-0.00797,1.515,0.03774,-0.01946,1.52,0.03421,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.04847,1.643,0.02895,-0.02958,1.651,0.03965,-0.05324,1.536,-0.05922,-0.04795,1.531,-0.08973,-0.03839,1.528,-0.09652,0.02106,1.592,0.03748,0.01489,1.583,0.04109,0.0249,1.58,0.0387,0.03603,1.58,0.03536,0.04354,1.59,0.02822,0.03428,1.595,0.03294,0.02735,1.596,0.03552,0.02788,1.528,0.03084,0.01405,1.531,0.04152,0,1.53,0.04236,0,1.515,0.03836,0.00797,1.515,0.03774,0.01946,1.52,0.03421,0.005112,1.532,0.04358,0,1.655,0.04322,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06769,1.617,-0.03436,0.06732,1.583,-0.03683,0.06433,1.563,-0.03678,0.05867,1.544,-0.03316,0.05324,1.536,-0.05922,0.04795,1.531,-0.08973,0.03839,1.528,-0.09652,0,1.524,-0.102]);
IndexedFaceSet202.coord = Coordinate203;

let Color204 = browser.currentScene.createNode("Color");
Color204.color = new MFColor(new float[0.749,0.601,0.462,0.1735,0.2602,0.749,0.6364,0.133,0.1526,0.4545,0.2759,0.1902]);
IndexedFaceSet202.color = Color204;

Shape199.geometry = IndexedFaceSet202;

Group186.children[2] = Shape199;

HAnimSegment185.children = new MFNode();

HAnimSegment185.children[0] = Group186;

HAnimJoint184.children = new MFNode();

HAnimJoint184.children[0] = HAnimSegment185;

HAnimJoint177.children[1] = HAnimJoint184;

HAnimJoint100.children[3] = HAnimJoint177;

HAnimJoint45.children[1] = HAnimJoint100;

HAnimHumanoid44.joints = new MFNode();

HAnimHumanoid44.joints[0] = HAnimJoint45;

let HAnimJoint205 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint205.USE = "hanim_humanoid_root";
HAnimHumanoid44.joints[1] = HAnimJoint205;

let HAnimJoint206 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint206.USE = "hanim_sacroiliac";
HAnimHumanoid44.joints[2] = HAnimJoint206;

let HAnimJoint207 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint207.USE = "hanim_vl1";
HAnimHumanoid44.joints[3] = HAnimJoint207;

let HAnimJoint208 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint208.USE = "hanim_vc4";
HAnimHumanoid44.joints[4] = HAnimJoint208;

let HAnimJoint209 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint209.USE = "hanim_skullbase";
HAnimHumanoid44.joints[5] = HAnimJoint209;

let HAnimJoint210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint210.USE = "hanim_l_ankle";
HAnimHumanoid44.joints[6] = HAnimJoint210;

let HAnimJoint211 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint211.USE = "hanim_r_ankle";
HAnimHumanoid44.joints[7] = HAnimJoint211;

let HAnimJoint212 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint212.USE = "hanim_l_elbow";
HAnimHumanoid44.joints[8] = HAnimJoint212;

let HAnimJoint213 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint213.USE = "hanim_r_elbow";
HAnimHumanoid44.joints[9] = HAnimJoint213;

let HAnimJoint214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint214.USE = "hanim_l_hip";
HAnimHumanoid44.joints[10] = HAnimJoint214;

let HAnimJoint215 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint215.USE = "hanim_r_hip";
HAnimHumanoid44.joints[11] = HAnimJoint215;

let HAnimJoint216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint216.USE = "hanim_l_knee";
HAnimHumanoid44.joints[12] = HAnimJoint216;

let HAnimJoint217 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint217.USE = "hanim_r_knee";
HAnimHumanoid44.joints[13] = HAnimJoint217;

let HAnimJoint218 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint218.USE = "hanim_l_shoulder";
HAnimHumanoid44.joints[14] = HAnimJoint218;

let HAnimJoint219 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint219.USE = "hanim_r_shoulder";
HAnimHumanoid44.joints[15] = HAnimJoint219;

let HAnimJoint220 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint220.USE = "hanim_l_wrist";
HAnimHumanoid44.joints[16] = HAnimJoint220;

let HAnimJoint221 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint221.USE = "hanim_r_wrist";
HAnimHumanoid44.joints[17] = HAnimJoint221;

let HAnimSegment222 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment222.USE = "hanim_pelvis";
HAnimHumanoid44.segments[18] = HAnimSegment222;

let HAnimSegment223 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment223.USE = "hanim_l1";
HAnimHumanoid44.segments[19] = HAnimSegment223;

let HAnimSegment224 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment224.USE = "hanim_c4";
HAnimHumanoid44.segments[20] = HAnimSegment224;

let HAnimSegment225 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment225.USE = "hanim_skull";
HAnimHumanoid44.segments[21] = HAnimSegment225;

let HAnimSegment226 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment226.USE = "hanim_l_calf";
HAnimHumanoid44.segments[22] = HAnimSegment226;

let HAnimSegment227 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment227.USE = "hanim_r_calf";
HAnimHumanoid44.segments[23] = HAnimSegment227;

let HAnimSegment228 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment228.USE = "hanim_l_forearm";
HAnimHumanoid44.segments[24] = HAnimSegment228;

let HAnimSegment229 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment229.USE = "hanim_r_forearm";
HAnimHumanoid44.segments[25] = HAnimSegment229;

let HAnimSegment230 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment230.USE = "hanim_l_hand";
HAnimHumanoid44.segments[26] = HAnimSegment230;

let HAnimSegment231 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment231.USE = "hanim_r_hand";
HAnimHumanoid44.segments[27] = HAnimSegment231;

let HAnimSegment232 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment232.USE = "hanim_l_hindfoot";
HAnimHumanoid44.segments[28] = HAnimSegment232;

let HAnimSegment233 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment233.USE = "hanim_r_hindfoot";
HAnimHumanoid44.segments[29] = HAnimSegment233;

let HAnimSegment234 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment234.USE = "hanim_l_thigh";
HAnimHumanoid44.segments[30] = HAnimSegment234;

let HAnimSegment235 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment235.USE = "hanim_r_thigh";
HAnimHumanoid44.segments[31] = HAnimSegment235;

let HAnimSegment236 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment236.USE = "hanim_l_upperarm";
HAnimHumanoid44.segments[32] = HAnimSegment236;

let HAnimSegment237 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment237.USE = "hanim_r_upperarm";
HAnimHumanoid44.segments[33] = HAnimSegment237;

Transform43.children = new MFNode();

Transform43.children[0] = HAnimHumanoid44;

Group42.children = new MFNode();

Group42.children[0] = Transform43;

let ProtoInstance238 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance238.name = "LOA1_ShootAnimation";
let fieldValue239 = browser.currentScene.createNode("fieldValue");
fieldValue239.name = "cycleInterval";
fieldValue239.value = "0.009999999776482582";
ProtoInstance238.fieldValue = new MFNode();

ProtoInstance238.fieldValue[0] = fieldValue239;

Group42.children[1] = ProtoInstance238;

let TimeSensor240 = browser.currentScene.createNode("TimeSensor");
TimeSensor240.DEF = "TIMER";
TimeSensor240.cycleInterval = 4;
Group42.children[2] = TimeSensor240;

Group41.children = new MFNode();

Group41.children[0] = Group42;

LOD40.children = new MFNode();

LOD40.children[0] = Group41;

let Transform241 = browser.currentScene.createNode("Transform");
LOD40.children[1] = Transform241;

let Transform242 = browser.currentScene.createNode("Transform");
Transform242.translation = new SFVec3f(new float[0,1,0]);
let Shape243 = browser.currentScene.createNode("Shape");
let Box244 = browser.currentScene.createNode("Box");
Box244.size = new SFVec3f(new float[0.5,2,0.3]);
Shape243.geometry = Box244;

let Appearance245 = browser.currentScene.createNode("Appearance");
let Material246 = browser.currentScene.createNode("Material");
Material246.diffuseColor = new SFColor(new float[0.1,0.4,0.1]);
Appearance245.material = Material246;

Shape243.appearance = Appearance245;

Transform242.children = new MFNode();

Transform242.children[0] = Shape243;

LOD40.children[2] = Transform242;

browser.currentScene.children[6] = LOD40;

let NavigationInfo247 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo247.avatarSize = new MFFloat(new float[0.15,1.53,0.75]);
NavigationInfo247.speed = 0.5;
NavigationInfo247.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children[7] = NavigationInfo247;

let WorldInfo248 = browser.currentScene.createNode("WorldInfo");
WorldInfo248.info = new MFString(new java.lang.String["Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc."]);
WorldInfo248.title = "Nancy - an HAnim compliant avatar by 3Name3D";
browser.currentScene.children[8] = WorldInfo248;

let Group249 = browser.currentScene.createNode("Group");
let ProximitySensor250 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor250.DEF = "TriggerProximitySensor";
ProximitySensor250.size = new SFVec3f(new float[50,50,50]);
Group249.children = new MFNode();

Group249.children[0] = ProximitySensor250;

let PositionInterpolator251 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator251.DEF = "HUMANOIDROOT_POSITION_ANIMATOR";
PositionInterpolator251.key = new MFFloat(new float[0,1]);
PositionInterpolator251.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
Group249.children[1] = PositionInterpolator251;

let OrientationInterpolator252 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator252.DEF = "HUMANOIDROOT_ANIMATOR";
OrientationInterpolator252.key = new MFFloat(new float[0,1]);
OrientationInterpolator252.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group249.children[2] = OrientationInterpolator252;

let OrientationInterpolator253 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator253.DEF = "SACROILIAC_ANIMATOR";
OrientationInterpolator253.key = new MFFloat(new float[0,1]);
OrientationInterpolator253.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group249.children[3] = OrientationInterpolator253;

let OrientationInterpolator254 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator254.DEF = "L_HIP_ANIMATOR";
OrientationInterpolator254.key = new MFFloat(new float[0,1]);
OrientationInterpolator254.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,0.4]);
Group249.children[4] = OrientationInterpolator254;

let OrientationInterpolator255 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator255.DEF = "L_KNEE_ANIMATOR";
OrientationInterpolator255.key = new MFFloat(new float[0,1]);
OrientationInterpolator255.keyValue = new MFRotation(new float[0,0,1,0,0.15,0.99,0.09,1.06]);
Group249.children[5] = OrientationInterpolator255;

let OrientationInterpolator256 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator256.DEF = "L_ANKLE_ANIMATOR";
OrientationInterpolator256.key = new MFFloat(new float[0,1]);
OrientationInterpolator256.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,0.2]);
Group249.children[6] = OrientationInterpolator256;

let OrientationInterpolator257 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator257.DEF = "L_MIDTARSAL_ANIMATOR";
OrientationInterpolator257.key = new MFFloat(new float[0,1]);
OrientationInterpolator257.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0]);
Group249.children[7] = OrientationInterpolator257;

let OrientationInterpolator258 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator258.DEF = "R_HIP_ANIMATOR";
OrientationInterpolator258.key = new MFFloat(new float[0,1]);
OrientationInterpolator258.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,-0.2]);
Group249.children[8] = OrientationInterpolator258;

let OrientationInterpolator259 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator259.DEF = "R_KNEE_ANIMATOR";
OrientationInterpolator259.key = new MFFloat(new float[0,1]);
OrientationInterpolator259.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group249.children[9] = OrientationInterpolator259;

let OrientationInterpolator260 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator260.DEF = "R_ANKLE_ANIMATOR";
OrientationInterpolator260.key = new MFFloat(new float[0,1]);
OrientationInterpolator260.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0]);
Group249.children[10] = OrientationInterpolator260;

let OrientationInterpolator261 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator261.DEF = "R_MIDTARSAL_ANIMATOR";
OrientationInterpolator261.key = new MFFloat(new float[0,1]);
OrientationInterpolator261.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,0]);
Group249.children[11] = OrientationInterpolator261;

let OrientationInterpolator262 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator262.DEF = "VL5_ANIMATOR";
OrientationInterpolator262.key = new MFFloat(new float[0,1]);
OrientationInterpolator262.keyValue = new MFRotation(new float[0,1,0,-0.4,0,1,0,-1]);
Group249.children[12] = OrientationInterpolator262;

let OrientationInterpolator263 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator263.DEF = "SKULLBASE_ANIMATOR";
OrientationInterpolator263.key = new MFFloat(new float[0,0.1,0.5,0.7,1]);
OrientationInterpolator263.keyValue = new MFRotation(new float[0,1,0,0.2,0,1,0,0.3,0,1,0,0.4,0,1,0,0.9,0.47,0.85,0.23,1.04]);
Group249.children[13] = OrientationInterpolator263;

let OrientationInterpolator264 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator264.DEF = "L_SHOULDER_ANIMATOR";
OrientationInterpolator264.key = new MFFloat(new float[0,0.08,0.8,1]);
OrientationInterpolator264.keyValue = new MFRotation(new float[-0.95,-0.08,-0.31,0.55,-0.95,-0.08,-0.31,0.55,-0.95,-0.08,-0.31,0.55,-0.84,0.23,0.49,1.01]);
Group249.children[14] = OrientationInterpolator264;

let OrientationInterpolator265 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator265.DEF = "L_ELBOW_ANIMATOR";
OrientationInterpolator265.key = new MFFloat(new float[0,0.3,0.4,0.45,1]);
OrientationInterpolator265.keyValue = new MFRotation(new float[0,0,1,-0.4,0,0,1,-0.4,0,0,1,-0.4,0,0,1,-0.4,1,0,0,-1.65]);
Group249.children[15] = OrientationInterpolator265;

let OrientationInterpolator266 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator266.DEF = "L_WRIST_ANIMATOR";
OrientationInterpolator266.key = new MFFloat(new float[0,0.3,1]);
OrientationInterpolator266.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,0,0.25,0.32,0.92,1.4]);
Group249.children[16] = OrientationInterpolator266;

let OrientationInterpolator267 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator267.DEF = "R_SHOULDER_ANIMATOR";
OrientationInterpolator267.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
OrientationInterpolator267.keyValue = new MFRotation(new float[1,0,0,-0.3,1,0,0,-0.45,1,0,0,-0.5,1,0,0,-0.55,1,0,0,-0.6,1,0,0,-0.65,1,0,0,-0.9,1,0,0,-1,1,0,0,-1,1,0,0,-1.2,1,0,0,-1.6]);
Group249.children[17] = OrientationInterpolator267;

let OrientationInterpolator268 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator268.DEF = "R_ELBOW_ANIMATOR";
OrientationInterpolator268.key = new MFFloat(new float[0,0.1,0.2,0.5,0.6,0.7,0.8,1]);
OrientationInterpolator268.keyValue = new MFRotation(new float[0,0,1,0.5,0,0,1,0.55,0,0,1,0.75,0,0,1,0.8,0,0,1,1,0,0,1,1.15,0,0,1,1.3,0,0,1,2.27]);
Group249.children[18] = OrientationInterpolator268;

let OrientationInterpolator269 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator269.DEF = "R_WRIST_ANIMATOR";
OrientationInterpolator269.key = new MFFloat(new float[0,1]);
OrientationInterpolator269.keyValue = new MFRotation(new float[1,0,0,-0.79,0.22,0.48,-0.85,1.71]);
Group249.children[19] = OrientationInterpolator269;

browser.currentScene.children[9] = Group249;

let ROUTE270 = browser.currentScene.createNode("ROUTE");
ROUTE270.fromField = "enterTime";
ROUTE270.fromNode = "TriggerProximitySensor";
ROUTE270.toField = "startTime";
ROUTE270.toNode = "TIMER";
browser.currentScene.children[10] = ROUTE270;

let ROUTE271 = browser.currentScene.createNode("ROUTE");
ROUTE271.fromField = "fraction_changed";
ROUTE271.fromNode = "TIMER";
ROUTE271.toField = "set_fraction";
ROUTE271.toNode = "HUMANOIDROOT_POSITION_ANIMATOR";
browser.currentScene.children[11] = ROUTE271;

let ROUTE272 = browser.currentScene.createNode("ROUTE");
ROUTE272.fromField = "fraction_changed";
ROUTE272.fromNode = "TIMER";
ROUTE272.toField = "set_fraction";
ROUTE272.toNode = "HUMANOIDROOT_ANIMATOR";
browser.currentScene.children[12] = ROUTE272;

let ROUTE273 = browser.currentScene.createNode("ROUTE");
ROUTE273.fromField = "fraction_changed";
ROUTE273.fromNode = "TIMER";
ROUTE273.toField = "set_fraction";
ROUTE273.toNode = "SACROILIAC_ANIMATOR";
browser.currentScene.children[13] = ROUTE273;

let ROUTE274 = browser.currentScene.createNode("ROUTE");
ROUTE274.fromField = "fraction_changed";
ROUTE274.fromNode = "TIMER";
ROUTE274.toField = "set_fraction";
ROUTE274.toNode = "L_HIP_ANIMATOR";
browser.currentScene.children[14] = ROUTE274;

let ROUTE275 = browser.currentScene.createNode("ROUTE");
ROUTE275.fromField = "fraction_changed";
ROUTE275.fromNode = "TIMER";
ROUTE275.toField = "set_fraction";
ROUTE275.toNode = "L_KNEE_ANIMATOR";
browser.currentScene.children[15] = ROUTE275;

let ROUTE276 = browser.currentScene.createNode("ROUTE");
ROUTE276.fromField = "fraction_changed";
ROUTE276.fromNode = "TIMER";
ROUTE276.toField = "set_fraction";
ROUTE276.toNode = "L_ANKLE_ANIMATOR";
browser.currentScene.children[16] = ROUTE276;

let ROUTE277 = browser.currentScene.createNode("ROUTE");
ROUTE277.fromField = "fraction_changed";
ROUTE277.fromNode = "TIMER";
ROUTE277.toField = "set_fraction";
ROUTE277.toNode = "L_MIDTARSAL_ANIMATOR";
browser.currentScene.children[17] = ROUTE277;

let ROUTE278 = browser.currentScene.createNode("ROUTE");
ROUTE278.fromField = "fraction_changed";
ROUTE278.fromNode = "TIMER";
ROUTE278.toField = "set_fraction";
ROUTE278.toNode = "R_HIP_ANIMATOR";
browser.currentScene.children[18] = ROUTE278;

let ROUTE279 = browser.currentScene.createNode("ROUTE");
ROUTE279.fromField = "fraction_changed";
ROUTE279.fromNode = "TIMER";
ROUTE279.toField = "set_fraction";
ROUTE279.toNode = "R_KNEE_ANIMATOR";
browser.currentScene.children[19] = ROUTE279;

let ROUTE280 = browser.currentScene.createNode("ROUTE");
ROUTE280.fromField = "fraction_changed";
ROUTE280.fromNode = "TIMER";
ROUTE280.toField = "set_fraction";
ROUTE280.toNode = "R_ANKLE_ANIMATOR";
browser.currentScene.children[20] = ROUTE280;

let ROUTE281 = browser.currentScene.createNode("ROUTE");
ROUTE281.fromField = "fraction_changed";
ROUTE281.fromNode = "TIMER";
ROUTE281.toField = "set_fraction";
ROUTE281.toNode = "R_MIDTARSAL_ANIMATOR";
browser.currentScene.children[21] = ROUTE281;

let ROUTE282 = browser.currentScene.createNode("ROUTE");
ROUTE282.fromField = "fraction_changed";
ROUTE282.fromNode = "TIMER";
ROUTE282.toField = "set_fraction";
ROUTE282.toNode = "VL5_ANIMATOR";
browser.currentScene.children[22] = ROUTE282;

let ROUTE283 = browser.currentScene.createNode("ROUTE");
ROUTE283.fromField = "fraction_changed";
ROUTE283.fromNode = "TIMER";
ROUTE283.toField = "set_fraction";
ROUTE283.toNode = "SKULLBASE_ANIMATOR";
browser.currentScene.children[23] = ROUTE283;

let ROUTE284 = browser.currentScene.createNode("ROUTE");
ROUTE284.fromField = "fraction_changed";
ROUTE284.fromNode = "TIMER";
ROUTE284.toField = "set_fraction";
ROUTE284.toNode = "L_SHOULDER_ANIMATOR";
browser.currentScene.children[24] = ROUTE284;

let ROUTE285 = browser.currentScene.createNode("ROUTE");
ROUTE285.fromField = "fraction_changed";
ROUTE285.fromNode = "TIMER";
ROUTE285.toField = "set_fraction";
ROUTE285.toNode = "L_ELBOW_ANIMATOR";
browser.currentScene.children[25] = ROUTE285;

let ROUTE286 = browser.currentScene.createNode("ROUTE");
ROUTE286.fromField = "fraction_changed";
ROUTE286.fromNode = "TIMER";
ROUTE286.toField = "set_fraction";
ROUTE286.toNode = "L_WRIST_ANIMATOR";
browser.currentScene.children[26] = ROUTE286;

let ROUTE287 = browser.currentScene.createNode("ROUTE");
ROUTE287.fromField = "fraction_changed";
ROUTE287.fromNode = "TIMER";
ROUTE287.toField = "set_fraction";
ROUTE287.toNode = "R_SHOULDER_ANIMATOR";
browser.currentScene.children[27] = ROUTE287;

let ROUTE288 = browser.currentScene.createNode("ROUTE");
ROUTE288.fromField = "fraction_changed";
ROUTE288.fromNode = "TIMER";
ROUTE288.toField = "set_fraction";
ROUTE288.toNode = "R_ELBOW_ANIMATOR";
browser.currentScene.children[28] = ROUTE288;

let ROUTE289 = browser.currentScene.createNode("ROUTE");
ROUTE289.fromField = "fraction_changed";
ROUTE289.fromNode = "TIMER";
ROUTE289.toField = "set_fraction";
ROUTE289.toNode = "R_WRIST_ANIMATOR";
browser.currentScene.children[29] = ROUTE289;

//Animation
let ROUTE290 = browser.currentScene.createNode("ROUTE");
ROUTE290.fromField = "value_changed";
ROUTE290.fromNode = "R_ANKLE_ANIMATOR";
ROUTE290.toField = "set_rotation";
ROUTE290.toNode = "hanim_r_ankle";
browser.currentScene.children[30] = ROUTE290;

let ROUTE291 = browser.currentScene.createNode("ROUTE");
ROUTE291.fromField = "value_changed";
ROUTE291.fromNode = "R_KNEE_ANIMATOR";
ROUTE291.toField = "set_rotation";
ROUTE291.toNode = "hanim_r_knee";
browser.currentScene.children[31] = ROUTE291;

let ROUTE292 = browser.currentScene.createNode("ROUTE");
ROUTE292.fromField = "value_changed";
ROUTE292.fromNode = "R_HIP_ANIMATOR";
ROUTE292.toField = "set_rotation";
ROUTE292.toNode = "hanim_r_hip";
browser.currentScene.children[32] = ROUTE292;

let ROUTE293 = browser.currentScene.createNode("ROUTE");
ROUTE293.fromField = "value_changed";
ROUTE293.fromNode = "L_ANKLE_ANIMATOR";
ROUTE293.toField = "set_rotation";
ROUTE293.toNode = "hanim_l_ankle";
browser.currentScene.children[33] = ROUTE293;

let ROUTE294 = browser.currentScene.createNode("ROUTE");
ROUTE294.fromField = "value_changed";
ROUTE294.fromNode = "L_KNEE_ANIMATOR";
ROUTE294.toField = "set_rotation";
ROUTE294.toNode = "hanim_l_knee";
browser.currentScene.children[34] = ROUTE294;

let ROUTE295 = browser.currentScene.createNode("ROUTE");
ROUTE295.fromField = "value_changed";
ROUTE295.fromNode = "L_HIP_ANIMATOR";
ROUTE295.toField = "set_rotation";
ROUTE295.toNode = "hanim_l_hip";
browser.currentScene.children[35] = ROUTE295;

let ROUTE296 = browser.currentScene.createNode("ROUTE");
ROUTE296.fromField = "value_changed";
ROUTE296.fromNode = "VL5_ANIMATOR";
ROUTE296.toField = "set_rotation";
ROUTE296.toNode = "hanim_sacroiliac";
browser.currentScene.children[36] = ROUTE296;

let ROUTE297 = browser.currentScene.createNode("ROUTE");
ROUTE297.fromField = "value_changed";
ROUTE297.fromNode = "R_WRIST_ANIMATOR";
ROUTE297.toField = "set_rotation";
ROUTE297.toNode = "r_hand_adjust";
browser.currentScene.children[37] = ROUTE297;

let ROUTE298 = browser.currentScene.createNode("ROUTE");
ROUTE298.fromField = "value_changed";
ROUTE298.fromNode = "R_ELBOW_ANIMATOR";
ROUTE298.toField = "set_rotation";
ROUTE298.toNode = "hanim_r_elbow";
browser.currentScene.children[38] = ROUTE298;

let ROUTE299 = browser.currentScene.createNode("ROUTE");
ROUTE299.fromField = "value_changed";
ROUTE299.fromNode = "R_SHOULDER_ANIMATOR";
ROUTE299.toField = "set_rotation";
ROUTE299.toNode = "hanim_r_shoulder";
browser.currentScene.children[39] = ROUTE299;

let ROUTE300 = browser.currentScene.createNode("ROUTE");
ROUTE300.fromField = "value_changed";
ROUTE300.fromNode = "L_WRIST_ANIMATOR";
ROUTE300.toField = "set_rotation";
ROUTE300.toNode = "hanim_l_wrist";
browser.currentScene.children[40] = ROUTE300;

let ROUTE301 = browser.currentScene.createNode("ROUTE");
ROUTE301.fromField = "value_changed";
ROUTE301.fromNode = "L_ELBOW_ANIMATOR";
ROUTE301.toField = "set_rotation";
ROUTE301.toNode = "hanim_l_elbow";
browser.currentScene.children[41] = ROUTE301;

let ROUTE302 = browser.currentScene.createNode("ROUTE");
ROUTE302.fromField = "value_changed";
ROUTE302.fromNode = "L_SHOULDER_ANIMATOR";
ROUTE302.toField = "set_rotation";
ROUTE302.toNode = "hanim_l_shoulder";
browser.currentScene.children[42] = ROUTE302;

let ROUTE303 = browser.currentScene.createNode("ROUTE");
ROUTE303.fromField = "value_changed";
ROUTE303.fromNode = "SKULLBASE_ANIMATOR";
ROUTE303.toField = "set_rotation";
ROUTE303.toNode = "hanim_skullbase";
browser.currentScene.children[43] = ROUTE303;

