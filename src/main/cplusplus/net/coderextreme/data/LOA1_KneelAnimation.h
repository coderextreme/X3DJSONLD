//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("LOA1_KneelAnimation.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Humanoid animation prototype reusable by any Humanoid."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Tom Miller"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("translator"));
meta5.setContent(CString("Curt Blais"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("translated"));
meta6.setContent(CString("1 December 2001"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("23 May 2020"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("reference"));
meta8.setContent(CString("https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("reference"));
meta9.setContent(CString("https://www.HAnim.org/Models/HAnim2001/boxman/protos/LOA1_WalkAnimation.wrl"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("https://www.HAnim.org"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("reference"));
meta11.setContent(CString("https://HAnim.org/Models"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("reference"));
meta12.setContent(CString("https://HAnim.org/Nodes"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("subject"));
meta13.setContent(CString("Nancy kneel Animation HAnim 2001"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("identifier"));
meta14.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("generator"));
meta15.setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("license"));
meta16.setContent(CString("../license.html"));
head1.addMeta(&meta16);

X3D0.setHead(&head1);

Scene& Scene17 =  Scene();
WorldInfo& WorldInfo18 =  WorldInfo();
WorldInfo18.setTitle(CString("LOA1_KneelAnimation.x3d"));
Scene17.addChild(&WorldInfo18);

ProtoDeclare& ProtoDeclare19 =  ProtoDeclare();
ProtoDeclare19.setName(CString("LOA1_KneelAnimation"));
ProtoInterface& ProtoInterface20 =  ProtoInterface();
field& field21 =  field();
field21.setName(CString("cycleInterval"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFTime"));
field21.setValue(CString("2"));
ProtoInterface20.addChild(&field21);

field& field22 =  field();
field22.setName(CString("enabled"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("SFBool"));
field22.setValue(CString("true"));
ProtoInterface20.addChild(&field22);

field& field23 =  field();
field23.setName(CString("loop"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFBool"));
field23.setValue(CString("false"));
ProtoInterface20.addChild(&field23);

field& field24 =  field();
field24.setName(CString("startTime"));
field24.setAccessType(CString("inputOutput"));
field24.setType(CString("SFTime"));
field24.setValue(CString("0"));
ProtoInterface20.addChild(&field24);

field& field25 =  field();
field25.setName(CString("stopTime"));
field25.setAccessType(CString("inputOutput"));
field25.setType(CString("SFTime"));
field25.setValue(CString("-1"));
ProtoInterface20.addChild(&field25);

field& field26 =  field();
field26.setName(CString("fraction_changed"));
field26.setAccessType(CString("outputOnly"));
field26.setType(CString("SFFloat"));
ProtoInterface20.addChild(&field26);

field& field27 =  field();
field27.setName(CString("isActive"));
field27.setAccessType(CString("outputOnly"));
field27.setType(CString("SFBool"));
ProtoInterface20.addChild(&field27);

field& field28 =  field();
field28.setName(CString("HumanoidRoot_translation_changed"));
field28.setAccessType(CString("outputOnly"));
field28.setType(CString("SFVec3f"));
ProtoInterface20.addChild(&field28);

field& field29 =  field();
field29.setName(CString("HumanoidRoot_rotation_changed"));
field29.setAccessType(CString("outputOnly"));
field29.setType(CString("SFRotation"));
ProtoInterface20.addChild(&field29);

field& field30 =  field();
field30.setName(CString("lower_body_rotation_changed"));
field30.setAccessType(CString("outputOnly"));
field30.setType(CString("SFRotation"));
ProtoInterface20.addChild(&field30);

field& field31 =  field();
field31.setName(CString("l_hip_rotation_changed"));
field31.setAccessType(CString("outputOnly"));
field31.setType(CString("SFRotation"));
ProtoInterface20.addChild(&field31);

field& field32 =  field();
field32.setName(CString("l_knee_rotation_changed"));
field32.setAccessType(CString("outputOnly"));
field32.setType(CString("SFRotation"));
ProtoInterface20.addChild(&field32);

field& field33 =  field();
field33.setName(CString("l_ankle_rotation_changed"));
field33.setAccessType(CString("outputOnly"));
field33.setType(CString("SFRotation"));
ProtoInterface20.addChild(&field33);

field& field34 =  field();
field34.setName(CString("l_midtarsal_rotation_changed"));
field34.setAccessType(CString("outputOnly"));
field34.setType(CString("SFRotation"));
ProtoInterface20.addChild(&field34);

field& field35 =  field();
field35.setName(CString("r_hip_rotation_changed"));
field35.setAccessType(CString("outputOnly"));
field35.setType(CString("SFRotation"));
ProtoInterface20.addChild(&field35);

field& field36 =  field();
field36.setName(CString("r_knee_rotation_changed"));
field36.setAccessType(CString("outputOnly"));
field36.setType(CString("SFRotation"));
ProtoInterface20.addChild(&field36);

field& field37 =  field();
field37.setName(CString("r_ankle_rotation_changed"));
field37.setAccessType(CString("outputOnly"));
field37.setType(CString("SFRotation"));
ProtoInterface20.addChild(&field37);

field& field38 =  field();
field38.setName(CString("r_midtarsal_rotation_changed"));
field38.setAccessType(CString("outputOnly"));
field38.setType(CString("SFRotation"));
ProtoInterface20.addChild(&field38);

field& field39 =  field();
field39.setName(CString("vl5_rotation_changed"));
field39.setAccessType(CString("outputOnly"));
field39.setType(CString("SFRotation"));
ProtoInterface20.addChild(&field39);

field& field40 =  field();
field40.setName(CString("skullbase_rotation_changed"));
field40.setAccessType(CString("outputOnly"));
field40.setType(CString("SFRotation"));
ProtoInterface20.addChild(&field40);

field& field41 =  field();
field41.setName(CString("l_shoulder_rotation_changed"));
field41.setAccessType(CString("outputOnly"));
field41.setType(CString("SFRotation"));
ProtoInterface20.addChild(&field41);

field& field42 =  field();
field42.setName(CString("l_elbow_rotation_changed"));
field42.setAccessType(CString("outputOnly"));
field42.setType(CString("SFRotation"));
ProtoInterface20.addChild(&field42);

field& field43 =  field();
field43.setName(CString("l_wrist_rotation_changed"));
field43.setAccessType(CString("outputOnly"));
field43.setType(CString("SFRotation"));
ProtoInterface20.addChild(&field43);

field& field44 =  field();
field44.setName(CString("r_shoulder_rotation_changed"));
field44.setAccessType(CString("outputOnly"));
field44.setType(CString("SFRotation"));
ProtoInterface20.addChild(&field44);

field& field45 =  field();
field45.setName(CString("r_elbow_rotation_changed"));
field45.setAccessType(CString("outputOnly"));
field45.setType(CString("SFRotation"));
ProtoInterface20.addChild(&field45);

field& field46 =  field();
field46.setName(CString("r_wrist_rotation_changed"));
field46.setAccessType(CString("outputOnly"));
field46.setType(CString("SFRotation"));
ProtoInterface20.addChild(&field46);

ProtoDeclare19.addChild(&ProtoInterface20);

ProtoBody& ProtoBody47 =  ProtoBody();
Group& Group48 =  Group();
TimeSensor& TimeSensor49 =  TimeSensor();
TimeSensor49.setDEF(CString("TIMER"));
IS& IS50 =  IS();
Connect& connect51 =  Connect();
connect51.setNodeField(CString("cycleInterval"));
connect51.setProtoField(CString("cycleInterval"));
IS50.addChild(&connect51);

Connect& connect52 =  Connect();
connect52.setNodeField(CString("enabled"));
connect52.setProtoField(CString("enabled"));
IS50.addChild(&connect52);

Connect& connect53 =  Connect();
connect53.setNodeField(CString("loop"));
connect53.setProtoField(CString("loop"));
IS50.addChild(&connect53);

Connect& connect54 =  Connect();
connect54.setNodeField(CString("startTime"));
connect54.setProtoField(CString("startTime"));
IS50.addChild(&connect54);

Connect& connect55 =  Connect();
connect55.setNodeField(CString("stopTime"));
connect55.setProtoField(CString("stopTime"));
IS50.addChild(&connect55);

Connect& connect56 =  Connect();
connect56.setNodeField(CString("fraction_changed"));
connect56.setProtoField(CString("fraction_changed"));
IS50.addChild(&connect56);

Connect& connect57 =  Connect();
connect57.setNodeField(CString("isActive"));
connect57.setProtoField(CString("isActive"));
IS50.addChild(&connect57);

TimeSensor49.addChild(&IS50);

Group48.addChild(&TimeSensor49);

PositionInterpolator& PositionInterpolator58 =  PositionInterpolator();
PositionInterpolator58.setDEF(CString("HUMANOIDROOT_POSITION_ANIMATOR"));
PositionInterpolator58.setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
PositionInterpolator58.setKeyValue(new float[]{0.0,0.0,0.0,0.0,-0.049999,0.0,0.0,-0.195,0.0,0.0,-0.439997,0.0}, 12);
IS& IS59 =  IS();
Connect& connect60 =  Connect();
connect60.setNodeField(CString("value_changed"));
connect60.setProtoField(CString("HumanoidRoot_translation_changed"));
IS59.addChild(&connect60);

PositionInterpolator58.addChild(&IS59);

Group48.addChild(&PositionInterpolator58);

OrientationInterpolator& OrientationInterpolator61 =  OrientationInterpolator();
OrientationInterpolator61.setDEF(CString("HUMANOIDROOT_ANIMATOR"));
OrientationInterpolator61.setKey(new float[]{0.0,1.0}, 2);
OrientationInterpolator61.setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0}, 8);
IS& IS62 =  IS();
Connect& connect63 =  Connect();
connect63.setNodeField(CString("value_changed"));
connect63.setProtoField(CString("HumanoidRoot_rotation_changed"));
IS62.addChild(&connect63);

OrientationInterpolator61.addChild(&IS62);

Group48.addChild(&OrientationInterpolator61);

//no SACROILIAC_ANIMATOR
OrientationInterpolator& OrientationInterpolator64 =  OrientationInterpolator();
OrientationInterpolator64.setDEF(CString("L_HIP_ANIMATOR"));
OrientationInterpolator64.setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
OrientationInterpolator64.setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.619393,-1.0,0.0,0.0,1.069302,-1.0,0.0,0.0,1.937315}, 16);
IS& IS65 =  IS();
Connect& connect66 =  Connect();
connect66.setNodeField(CString("value_changed"));
connect66.setProtoField(CString("l_hip_rotation_changed"));
IS65.addChild(&connect66);

OrientationInterpolator64.addChild(&IS65);

Group48.addChild(&OrientationInterpolator64);

OrientationInterpolator& OrientationInterpolator67 =  OrientationInterpolator();
OrientationInterpolator67.setDEF(CString("L_KNEE_ANIMATOR"));
OrientationInterpolator67.setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
OrientationInterpolator67.setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.615228,1.0,0.0,0.0,0.984524,1.0,0.0,0.0,2.076941}, 16);
IS& IS68 =  IS();
Connect& connect69 =  Connect();
connect69.setNodeField(CString("value_changed"));
connect69.setProtoField(CString("l_knee_rotation_changed"));
IS68.addChild(&connect69);

OrientationInterpolator67.addChild(&IS68);

Group48.addChild(&OrientationInterpolator67);

OrientationInterpolator& OrientationInterpolator70 =  OrientationInterpolator();
OrientationInterpolator70.setDEF(CString("L_ANKLE_ANIMATOR"));
OrientationInterpolator70.setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
OrientationInterpolator70.setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.017453,-1.0,0.0,0.0,0.069812,1.0,0.0,0.0,0.261799}, 16);
IS& IS71 =  IS();
Connect& connect72 =  Connect();
connect72.setNodeField(CString("value_changed"));
connect72.setProtoField(CString("l_ankle_rotation_changed"));
IS71.addChild(&connect72);

OrientationInterpolator70.addChild(&IS71);

Group48.addChild(&OrientationInterpolator70);

//no L_MIDTARSAL_ANIMATOR
OrientationInterpolator& OrientationInterpolator73 =  OrientationInterpolator();
OrientationInterpolator73.setDEF(CString("R_HIP_ANIMATOR"));
OrientationInterpolator73.setKey(new float[]{0.0,0.3125,1.0}, 3);
OrientationInterpolator73.setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.523598,-1.0,0.0,0.0,0.157079}, 12);
IS& IS74 =  IS();
Connect& connect75 =  Connect();
connect75.setNodeField(CString("value_changed"));
connect75.setProtoField(CString("r_hip_rotation_changed"));
IS74.addChild(&connect75);

OrientationInterpolator73.addChild(&IS74);

Group48.addChild(&OrientationInterpolator73);

OrientationInterpolator& OrientationInterpolator76 =  OrientationInterpolator();
OrientationInterpolator76.setDEF(CString("R_KNEE_ANIMATOR"));
OrientationInterpolator76.setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
OrientationInterpolator76.setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.349065,1.0,0.0,0.0,1.023397,0.999934,0.008043,0.008185,1.727938}, 16);
IS& IS77 =  IS();
Connect& connect78 =  Connect();
connect78.setNodeField(CString("value_changed"));
connect78.setProtoField(CString("r_knee_rotation_changed"));
IS77.addChild(&connect78);

OrientationInterpolator76.addChild(&IS77);

Group48.addChild(&OrientationInterpolator76);

OrientationInterpolator& OrientationInterpolator79 =  OrientationInterpolator();
OrientationInterpolator79.setDEF(CString("R_ANKLE_ANIMATOR"));
OrientationInterpolator79.setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
OrientationInterpolator79.setKeyValue(new float[]{1.0,0.0,0.0,0.0,-0.991692,-0.072372,0.106338,0.205053,-0.981083,-0.103267,0.163741,0.272231,-1.0,0.0,0.0,0.349065}, 16);
IS& IS80 =  IS();
Connect& connect81 =  Connect();
connect81.setNodeField(CString("value_changed"));
connect81.setProtoField(CString("r_ankle_rotation_changed"));
IS80.addChild(&connect81);

OrientationInterpolator79.addChild(&IS80);

Group48.addChild(&OrientationInterpolator79);

//no R_MIDTARSAL_ANIMATOR
OrientationInterpolator& OrientationInterpolator82 =  OrientationInterpolator();
OrientationInterpolator82.setDEF(CString("VL5_ANIMATOR"));
OrientationInterpolator82.setKey(new float[]{0.0,1.0}, 2);
OrientationInterpolator82.setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.174533}, 8);
IS& IS83 =  IS();
Connect& connect84 =  Connect();
connect84.setNodeField(CString("value_changed"));
connect84.setProtoField(CString("vl5_rotation_changed"));
IS83.addChild(&connect84);

OrientationInterpolator82.addChild(&IS83);

Group48.addChild(&OrientationInterpolator82);

//no SKULLBASE_ANIMATOR
OrientationInterpolator& OrientationInterpolator85 =  OrientationInterpolator();
OrientationInterpolator85.setDEF(CString("L_SHOULDER_ANIMATOR"));
OrientationInterpolator85.setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
OrientationInterpolator85.setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.279252,-1.0,0.0,0.0,0.506145,-1.0,0.0,0.0,0.191986}, 16);
IS& IS86 =  IS();
Connect& connect87 =  Connect();
connect87.setNodeField(CString("value_changed"));
connect87.setProtoField(CString("l_shoulder_rotation_changed"));
IS86.addChild(&connect87);

OrientationInterpolator85.addChild(&IS86);

Group48.addChild(&OrientationInterpolator85);

OrientationInterpolator& OrientationInterpolator88 =  OrientationInterpolator();
OrientationInterpolator88.setDEF(CString("L_ELBOW_ANIMATOR"));
OrientationInterpolator88.setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
OrientationInterpolator88.setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.052359,-1.0,0.0,0.0,0.296706,-1.0,0.0,0.0,1.431169}, 16);
IS& IS89 =  IS();
Connect& connect90 =  Connect();
connect90.setNodeField(CString("value_changed"));
connect90.setProtoField(CString("l_elbow_rotation_changed"));
IS89.addChild(&connect90);

OrientationInterpolator88.addChild(&IS89);

Group48.addChild(&OrientationInterpolator88);

//no L_WRIST_ANIMATOR
OrientationInterpolator& OrientationInterpolator91 =  OrientationInterpolator();
OrientationInterpolator91.setDEF(CString("R_SHOULDER_ANIMATOR"));
OrientationInterpolator91.setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
OrientationInterpolator91.setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.104719,-1.0,0.0,0.0,0.157079,1.0,0.0,0.0,0.314159}, 16);
IS& IS92 =  IS();
Connect& connect93 =  Connect();
connect93.setNodeField(CString("value_changed"));
connect93.setProtoField(CString("r_shoulder_rotation_changed"));
IS92.addChild(&connect93);

OrientationInterpolator91.addChild(&IS92);

Group48.addChild(&OrientationInterpolator91);

OrientationInterpolator& OrientationInterpolator94 =  OrientationInterpolator();
OrientationInterpolator94.setDEF(CString("R_ELBOW_ANIMATOR"));
OrientationInterpolator94.setKey(new float[]{0.0,0.3125,0.625,1.0}, 4);
OrientationInterpolator94.setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.837757,-1.0,0.0,0.0,1.239183,-1.0,0.0,0.0,1.500983}, 16);
IS& IS95 =  IS();
Connect& connect96 =  Connect();
connect96.setNodeField(CString("value_changed"));
connect96.setProtoField(CString("r_elbow_rotation_changed"));
IS95.addChild(&connect96);

OrientationInterpolator94.addChild(&IS95);

Group48.addChild(&OrientationInterpolator94);

//no R_WRIST_ANIMATOR
ProtoBody47.addChild(&Group48);

ROUTE& ROUTE97 =  ROUTE();
ROUTE97.setFromField(CString("fraction_changed"));
ROUTE97.setFromNode(CString("TIMER"));
ROUTE97.setToField(CString("set_fraction"));
ROUTE97.setToNode(CString("HUMANOIDROOT_POSITION_ANIMATOR"));
ProtoBody47.addChild(&ROUTE97);

ROUTE& ROUTE98 =  ROUTE();
ROUTE98.setFromField(CString("fraction_changed"));
ROUTE98.setFromNode(CString("TIMER"));
ROUTE98.setToField(CString("set_fraction"));
ROUTE98.setToNode(CString("HUMANOIDROOT_ANIMATOR"));
ProtoBody47.addChild(&ROUTE98);

ROUTE& ROUTE99 =  ROUTE();
ROUTE99.setFromField(CString("fraction_changed"));
ROUTE99.setFromNode(CString("TIMER"));
ROUTE99.setToField(CString("set_fraction"));
ROUTE99.setToNode(CString("L_HIP_ANIMATOR"));
ProtoBody47.addChild(&ROUTE99);

ROUTE& ROUTE100 =  ROUTE();
ROUTE100.setFromField(CString("fraction_changed"));
ROUTE100.setFromNode(CString("TIMER"));
ROUTE100.setToField(CString("set_fraction"));
ROUTE100.setToNode(CString("L_KNEE_ANIMATOR"));
ProtoBody47.addChild(&ROUTE100);

ROUTE& ROUTE101 =  ROUTE();
ROUTE101.setFromField(CString("fraction_changed"));
ROUTE101.setFromNode(CString("TIMER"));
ROUTE101.setToField(CString("set_fraction"));
ROUTE101.setToNode(CString("L_ANKLE_ANIMATOR"));
ProtoBody47.addChild(&ROUTE101);

ROUTE& ROUTE102 =  ROUTE();
ROUTE102.setFromField(CString("fraction_changed"));
ROUTE102.setFromNode(CString("TIMER"));
ROUTE102.setToField(CString("set_fraction"));
ROUTE102.setToNode(CString("R_HIP_ANIMATOR"));
ProtoBody47.addChild(&ROUTE102);

ROUTE& ROUTE103 =  ROUTE();
ROUTE103.setFromField(CString("fraction_changed"));
ROUTE103.setFromNode(CString("TIMER"));
ROUTE103.setToField(CString("set_fraction"));
ROUTE103.setToNode(CString("R_KNEE_ANIMATOR"));
ProtoBody47.addChild(&ROUTE103);

ROUTE& ROUTE104 =  ROUTE();
ROUTE104.setFromField(CString("fraction_changed"));
ROUTE104.setFromNode(CString("TIMER"));
ROUTE104.setToField(CString("set_fraction"));
ROUTE104.setToNode(CString("R_ANKLE_ANIMATOR"));
ProtoBody47.addChild(&ROUTE104);

ROUTE& ROUTE105 =  ROUTE();
ROUTE105.setFromField(CString("fraction_changed"));
ROUTE105.setFromNode(CString("TIMER"));
ROUTE105.setToField(CString("set_fraction"));
ROUTE105.setToNode(CString("VL5_ANIMATOR"));
ProtoBody47.addChild(&ROUTE105);

ROUTE& ROUTE106 =  ROUTE();
ROUTE106.setFromField(CString("fraction_changed"));
ROUTE106.setFromNode(CString("TIMER"));
ROUTE106.setToField(CString("set_fraction"));
ROUTE106.setToNode(CString("L_SHOULDER_ANIMATOR"));
ProtoBody47.addChild(&ROUTE106);

ROUTE& ROUTE107 =  ROUTE();
ROUTE107.setFromField(CString("fraction_changed"));
ROUTE107.setFromNode(CString("TIMER"));
ROUTE107.setToField(CString("set_fraction"));
ROUTE107.setToNode(CString("L_ELBOW_ANIMATOR"));
ProtoBody47.addChild(&ROUTE107);

ROUTE& ROUTE108 =  ROUTE();
ROUTE108.setFromField(CString("fraction_changed"));
ROUTE108.setFromNode(CString("TIMER"));
ROUTE108.setToField(CString("set_fraction"));
ROUTE108.setToNode(CString("R_SHOULDER_ANIMATOR"));
ProtoBody47.addChild(&ROUTE108);

ROUTE& ROUTE109 =  ROUTE();
ROUTE109.setFromField(CString("fraction_changed"));
ROUTE109.setFromNode(CString("TIMER"));
ROUTE109.setToField(CString("set_fraction"));
ROUTE109.setToNode(CString("R_ELBOW_ANIMATOR"));
ProtoBody47.addChild(&ROUTE109);

ProtoDeclare19.addChild(&ProtoBody47);

Scene17.addChild(&ProtoDeclare19);

Anchor& Anchor110 =  Anchor();
Anchor110.setDescription(CString("InterchangableActorsViaDynamicRouting"));
Anchor110.setParameter(new CString[]{CString("target=_blank")}, 1);
Anchor110.setUrl(new CString[]{CString("InterchangableActorsViaDynamicRouting.x3d"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d"), CString("InterchangableActorsViaDynamicRouting.wrl"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl")}, 4);
Shape& Shape111 =  Shape();
Text& Text112 =  Text();
Text112.setString(new CString[]{CString("LOA1_KneelAnimation.x3d"), CString("defines a prototype"), CString("for animating a humanoid."), CString(""), CString("Click this text to see"), CString("InterchangableActorsViaDynamicRouting example.")}, 6);
CFontStyle& FontStyle113 =  CFontStyle();
FontStyle113.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle113.setSize(0.8);
Text112.setFontStyle(&FontStyle113);

Shape111.setGeometry(&Text112);

Appearance& Appearance114 =  Appearance();
Material& Material115 =  Material();
Material115.setDiffuseColor(new float[]{1.0,1.0,0.2});
Appearance114.addChild(&Material115);

Shape111.addChild(&Appearance114);

Anchor110.addChild(&Shape111);

Scene17.addChild(&Anchor110);

X3D0.setScene(&Scene17);

//}
