#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("LOA1_WalkAnimation.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Humanoid animation prototype reusable by any Humanoid."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Cindy Ballreich cindy@ballreich.net 3Name3D"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("rights"));
meta5.setContent(CString("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("translator"));
meta6.setContent(CString("Don Brutzman"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("translated"));
meta7.setContent(CString("1 October 2001"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("modified"));
meta8.setContent(CString("23 May 2020"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("reference"));
meta9.setContent(CString("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("http://HAnim.org/Specifications/HAnim2001"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("reference"));
meta11.setContent(CString("http://HAnim.org/Models"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("reference"));
meta12.setContent(CString("http://HAnim.org/Nodes"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("subject"));
meta13.setContent(CString("Nancy Walk Animation HAnim 2001"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("identifier"));
meta14.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d"));
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
WorldInfo18.setTitle(CString("LOA1_WalkAnimation.x3d"));
Scene17.addChild(&WorldInfo18);

ProtoDeclare& ProtoDeclare19 =  ProtoDeclare();
ProtoDeclare19.setName(CString("LOA1_WalkAnimation"));
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
field23.setValue(CString("true"));
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
PositionInterpolator58.setKey(new float[19]{0.0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1.0}, 19);
PositionInterpolator58.setKeyValue(new float[57]{0.0,-0.00928,0.0,0.0,-0.003858,0.0,0.0,-0.008847,0.0,0.0,-0.01486,0.0,0.0,-0.02641,0.0,0.0,-0.03934,0.0,0.0,-0.0502,0.0,0.0,-0.07469,0.0,0.0,-0.02732,0.0,0.0,-0.01608,0.0,0.0,-0.01129,0.0,0.0,-0.005819,0.0,0.0,-0.002004,0.0,0.0,-0.002579,0.0,0.0,-0.0143,0.0,0.0,-0.03799,0.0,0.0,-0.05648,0.0,0.0,-0.045,0.0,0.0,-0.00928,0.0}, 57);
IS& IS59 =  IS();
Connect& connect60 =  Connect();
connect60.setNodeField(CString("value_changed"));
connect60.setProtoField(CString("HumanoidRoot_translation_changed"));
IS59.addChild(&connect60);

PositionInterpolator58.addChild(&IS59);

Group48.addChild(&PositionInterpolator58);

OrientationInterpolator& OrientationInterpolator61 =  OrientationInterpolator();
OrientationInterpolator61.setDEF(CString("HUMANOIDROOT_ANIMATOR"));
OrientationInterpolator61.setKey(new float[2]{0.0,1.0}, 2);
OrientationInterpolator61.setKeyValue(new float[8]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0}, 8);
IS& IS62 =  IS();
Connect& connect63 =  Connect();
connect63.setNodeField(CString("value_changed"));
connect63.setProtoField(CString("HumanoidRoot_rotation_changed"));
IS62.addChild(&connect63);

OrientationInterpolator61.addChild(&IS62);

Group48.addChild(&OrientationInterpolator61);

OrientationInterpolator& OrientationInterpolator64 =  OrientationInterpolator();
OrientationInterpolator64.setDEF(CString("SACROILIAC_ANIMATOR"));
OrientationInterpolator64.setKey(new float[3]{0.0,0.5,1.0}, 3);
OrientationInterpolator64.setKeyValue(new float[12]{0.0,0.0,-1.0,0.1056,0.0,0.0,1.0,0.09018,0.0,0.0,-1.0,0.1056}, 12);
IS& IS65 =  IS();
Connect& connect66 =  Connect();
connect66.setNodeField(CString("value_changed"));
connect66.setProtoField(CString("lower_body_rotation_changed"));
IS65.addChild(&connect66);

OrientationInterpolator64.addChild(&IS65);

Group48.addChild(&OrientationInterpolator64);

OrientationInterpolator& OrientationInterpolator67 =  OrientationInterpolator();
OrientationInterpolator67.setDEF(CString("L_HIP_ANIMATOR"));
OrientationInterpolator67.setKey(new float[8]{0.0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
OrientationInterpolator67.setKeyValue(new float[32]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1.0,0.0,0.0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865}, 32);
IS& IS68 =  IS();
Connect& connect69 =  Connect();
connect69.setNodeField(CString("value_changed"));
connect69.setProtoField(CString("l_hip_rotation_changed"));
IS68.addChild(&connect69);

OrientationInterpolator67.addChild(&IS68);

Group48.addChild(&OrientationInterpolator67);

OrientationInterpolator& OrientationInterpolator70 =  OrientationInterpolator();
OrientationInterpolator70.setDEF(CString("L_KNEE_ANIMATOR"));
OrientationInterpolator70.setKey(new float[8]{0.0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
OrientationInterpolator70.setKeyValue(new float[32]{1.0,0.0,0.0,0.3226,1.0,0.0,0.0,0.1556,1.0,0.0,0.0,0.08678,1.0,0.0,0.0,0.8751,1.0,0.0,0.0,1.131,1.0,0.0,0.0,0.09961,1.0,0.0,0.0,0.3942,1.0,0.0,0.0,0.3226}, 32);
IS& IS71 =  IS();
Connect& connect72 =  Connect();
connect72.setNodeField(CString("value_changed"));
connect72.setProtoField(CString("l_knee_rotation_changed"));
IS71.addChild(&connect72);

OrientationInterpolator70.addChild(&IS71);

Group48.addChild(&OrientationInterpolator70);

OrientationInterpolator& OrientationInterpolator73 =  OrientationInterpolator();
OrientationInterpolator73.setDEF(CString("L_ANKLE_ANIMATOR"));
OrientationInterpolator73.setKey(new float[7]{0.0,0.125,0.2083,0.375,0.6667,0.9167,1.0}, 7);
OrientationInterpolator73.setKeyValue(new float[28]{-1.0,0.0,0.0,0.06714,-1.0,0.0,0.0,0.2152,-1.0,0.0,0.0,0.3184,-1.0,0.0,0.0,0.4717,-1.0,0.0,0.0,0.2912,1.0,0.0,0.0,0.1222,-1.0,0.0,0.0,0.06714}, 28);
IS& IS74 =  IS();
Connect& connect75 =  Connect();
connect75.setNodeField(CString("value_changed"));
connect75.setProtoField(CString("l_ankle_rotation_changed"));
IS74.addChild(&connect75);

OrientationInterpolator73.addChild(&IS74);

Group48.addChild(&OrientationInterpolator73);

OrientationInterpolator& OrientationInterpolator76 =  OrientationInterpolator();
OrientationInterpolator76.setDEF(CString("L_MIDTARSAL_ANIMATOR"));
OrientationInterpolator76.setKey(new float[3]{0.0,0.5,1.0}, 3);
OrientationInterpolator76.setKeyValue(new float[12]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.2,1.0,0.0,0.0,0.0}, 12);
IS& IS77 =  IS();
Connect& connect78 =  Connect();
connect78.setNodeField(CString("value_changed"));
connect78.setProtoField(CString("l_midtarsal_rotation_changed"));
IS77.addChild(&connect78);

OrientationInterpolator76.addChild(&IS77);

Group48.addChild(&OrientationInterpolator76);

OrientationInterpolator& OrientationInterpolator79 =  OrientationInterpolator();
OrientationInterpolator79.setDEF(CString("R_HIP_ANIMATOR"));
OrientationInterpolator79.setKey(new float[10]{0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 10);
OrientationInterpolator79.setKeyValue(new float[40]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1.0,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1.0,0.0,0.0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481}, 40);
IS& IS80 =  IS();
Connect& connect81 =  Connect();
connect81.setNodeField(CString("value_changed"));
connect81.setProtoField(CString("r_hip_rotation_changed"));
IS80.addChild(&connect81);

OrientationInterpolator79.addChild(&IS80);

Group48.addChild(&OrientationInterpolator79);

OrientationInterpolator& OrientationInterpolator82 =  OrientationInterpolator();
OrientationInterpolator82.setDEF(CString("R_KNEE_ANIMATOR"));
OrientationInterpolator82.setKey(new float[10]{0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 10);
OrientationInterpolator82.setKeyValue(new float[40]{1.0,0.0,0.0,0.8573,1.0,0.0,0.0,0.8926,1.0,0.0,0.0,0.5351,1.0,0.0,0.0,0.1756,1.0,0.0,0.0,0.1194,1.0,0.0,0.0,0.3153,1.0,-1.176e-8,-4.971e-9,0.09354,1.0,0.0,0.0,0.08558,1.0,0.0,0.0,0.2475,1.0,0.0,0.0,0.8573}, 40);
IS& IS83 =  IS();
Connect& connect84 =  Connect();
connect84.setNodeField(CString("value_changed"));
connect84.setProtoField(CString("r_knee_rotation_changed"));
IS83.addChild(&connect84);

OrientationInterpolator82.addChild(&IS83);

Group48.addChild(&OrientationInterpolator82);

OrientationInterpolator& OrientationInterpolator85 =  OrientationInterpolator();
OrientationInterpolator85.setDEF(CString("R_ANKLE_ANIMATOR"));
OrientationInterpolator85.setKey(new float[11]{0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0}, 11);
OrientationInterpolator85.setKeyValue(new float[44]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.3533,-1.0,0.0,0.0,0.1072,1.0,0.0,0.0,0.2612,1.0,-1.641e-7,1.827e-8,0.1268,-1.0,0.0,0.0,0.01793,-1.0,0.0,0.0,0.05824,-1.0,0.0,0.0,0.2398,-1.0,0.0,0.0,0.35,-1.0,0.0,0.0,0.3322,0.0,0.0,1.0,0.0}, 44);
IS& IS86 =  IS();
Connect& connect87 =  Connect();
connect87.setNodeField(CString("value_changed"));
connect87.setProtoField(CString("r_ankle_rotation_changed"));
IS86.addChild(&connect87);

OrientationInterpolator85.addChild(&IS86);

Group48.addChild(&OrientationInterpolator85);

OrientationInterpolator& OrientationInterpolator88 =  OrientationInterpolator();
OrientationInterpolator88.setDEF(CString("R_MIDTARSAL_ANIMATOR"));
OrientationInterpolator88.setKey(new float[3]{0.0,0.5,1.0}, 3);
OrientationInterpolator88.setKeyValue(new float[12]{1.0,0.0,0.0,-0.2,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.2}, 12);
IS& IS89 =  IS();
Connect& connect90 =  Connect();
connect90.setNodeField(CString("value_changed"));
connect90.setProtoField(CString("r_midtarsal_rotation_changed"));
IS89.addChild(&connect90);

OrientationInterpolator88.addChild(&IS89);

Group48.addChild(&OrientationInterpolator88);

OrientationInterpolator& OrientationInterpolator91 =  OrientationInterpolator();
OrientationInterpolator91.setDEF(CString("VL5_ANIMATOR"));
OrientationInterpolator91.setKey(new float[6]{0.0,0.2083,0.375,0.75,0.8333,1.0}, 6);
OrientationInterpolator91.setKeyValue(new float[24]{0.0,1.0,0.0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0.0,1.0,0.0,0.0826}, 24);
IS& IS92 =  IS();
Connect& connect93 =  Connect();
connect93.setNodeField(CString("value_changed"));
connect93.setProtoField(CString("vl5_rotation_changed"));
IS92.addChild(&connect93);

OrientationInterpolator91.addChild(&IS92);

Group48.addChild(&OrientationInterpolator91);

OrientationInterpolator& OrientationInterpolator94 =  OrientationInterpolator();
OrientationInterpolator94.setDEF(CString("SKULLBASE_ANIMATOR"));
OrientationInterpolator94.setKey(new float[10]{0.0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1.0}, 10);
OrientationInterpolator94.setKeyValue(new float[40]{0.0,-1.0,0.0,0.08642,0.0,1.0,0.0,0.1825,0.0,1.0,0.0,0.1505,0.0,1.0,0.0,0.1053,0.0,1.0,0.0,0.04391,0.0,-1.0,0.0,0.03119,0.0,-1.0,0.0,0.07936,0.0,-1.0,0.0,0.1616,0.0,-1.0,0.0,0.155,0.0,-1.0,0.0,0.08642}, 40);
IS& IS95 =  IS();
Connect& connect96 =  Connect();
connect96.setNodeField(CString("value_changed"));
connect96.setProtoField(CString("skullbase_rotation_changed"));
IS95.addChild(&connect96);

OrientationInterpolator94.addChild(&IS95);

Group48.addChild(&OrientationInterpolator94);

OrientationInterpolator& OrientationInterpolator97 =  OrientationInterpolator();
OrientationInterpolator97.setDEF(CString("L_SHOULDER_ANIMATOR"));
OrientationInterpolator97.setKey(new float[4]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator97.setKeyValue(new float[16]{1.0,0.0,0.0,0.1189,-1.0,-5.928e-7,1.525e-7,0.1861,1.0,-2.038e-7,-1.257e-7,0.3357,1.0,0.0,0.0,0.1189}, 16);
IS& IS98 =  IS();
Connect& connect99 =  Connect();
connect99.setNodeField(CString("value_changed"));
connect99.setProtoField(CString("l_shoulder_rotation_changed"));
IS98.addChild(&connect99);

OrientationInterpolator97.addChild(&IS98);

Group48.addChild(&OrientationInterpolator97);

OrientationInterpolator& OrientationInterpolator100 =  OrientationInterpolator();
OrientationInterpolator100.setDEF(CString("L_ELBOW_ANIMATOR"));
OrientationInterpolator100.setKey(new float[4]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator100.setKeyValue(new float[16]{-1.0,-1.58298e-7,8.15967e-8,0.0659878,-1.0,-3.28826e-8,-2.31665e-8,0.488383,-1.0,0.00000306462,-0.00000311947,0.0177536,-1.0,-1.58298e-7,8.15967e-8,0.0659878}, 16);
IS& IS101 =  IS();
Connect& connect102 =  Connect();
connect102.setNodeField(CString("value_changed"));
connect102.setProtoField(CString("l_elbow_rotation_changed"));
IS101.addChild(&connect102);

OrientationInterpolator100.addChild(&IS101);

Group48.addChild(&OrientationInterpolator100);

OrientationInterpolator& OrientationInterpolator103 =  OrientationInterpolator();
OrientationInterpolator103.setDEF(CString("L_WRIST_ANIMATOR"));
OrientationInterpolator103.setKey(new float[4]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator103.setKeyValue(new float[16]{0.00000151276,-1.0,0.0000017724,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0.00000151276,-1.0,0.0000017724,0.461076}, 16);
IS& IS104 =  IS();
Connect& connect105 =  Connect();
connect105.setNodeField(CString("value_changed"));
connect105.setProtoField(CString("l_wrist_rotation_changed"));
IS104.addChild(&connect105);

OrientationInterpolator103.addChild(&IS104);

Group48.addChild(&OrientationInterpolator103);

OrientationInterpolator& OrientationInterpolator106 =  OrientationInterpolator();
OrientationInterpolator106.setDEF(CString("R_SHOULDER_ANIMATOR"));
OrientationInterpolator106.setKey(new float[4]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator106.setKeyValue(new float[16]{-1.0,-7.689e-7,-1.48e-7,0.09346,1.0,5.004e-8,2.254e-8,0.3197,-1.0,-1.104e-7,5.267e-10,0.1564,-1.0,-7.689e-7,-1.48e-7,0.09346}, 16);
IS& IS107 =  IS();
Connect& connect108 =  Connect();
connect108.setNodeField(CString("value_changed"));
connect108.setProtoField(CString("r_shoulder_rotation_changed"));
IS107.addChild(&connect108);

OrientationInterpolator106.addChild(&IS107);

Group48.addChild(&OrientationInterpolator106);

OrientationInterpolator& OrientationInterpolator109 =  OrientationInterpolator();
OrientationInterpolator109.setDEF(CString("R_ELBOW_ANIMATOR"));
OrientationInterpolator109.setKey(new float[4]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator109.setKeyValue(new float[16]{-1.0,-4.45619e-8,2.70318e-8,0.411508,-1.0,8.16742e-7,-1.09556e-7,0.0925011,-1.0,-2.47628e-8,-7.02862e-9,0.572568,-1.0,-4.45619e-8,2.70318e-8,0.411508}, 16);
IS& IS110 =  IS();
Connect& connect111 =  Connect();
connect111.setNodeField(CString("value_changed"));
connect111.setProtoField(CString("r_elbow_rotation_changed"));
IS110.addChild(&connect111);

OrientationInterpolator109.addChild(&IS110);

Group48.addChild(&OrientationInterpolator109);

OrientationInterpolator& OrientationInterpolator112 =  OrientationInterpolator();
OrientationInterpolator112.setDEF(CString("R_WRIST_ANIMATOR"));
OrientationInterpolator112.setKey(new float[4]{0.0,0.375,0.9167,1.0}, 4);
OrientationInterpolator112.setKeyValue(new float[16]{-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346}, 16);
IS& IS113 =  IS();
Connect& connect114 =  Connect();
connect114.setNodeField(CString("value_changed"));
connect114.setProtoField(CString("r_wrist_rotation_changed"));
IS113.addChild(&connect114);

OrientationInterpolator112.addChild(&IS113);

Group48.addChild(&OrientationInterpolator112);

ProtoBody47.addChild(&Group48);

ROUTE& ROUTE115 =  ROUTE();
ROUTE115.setFromField(CString("fraction_changed"));
ROUTE115.setFromNode(CString("TIMER"));
ROUTE115.setToField(CString("set_fraction"));
ROUTE115.setToNode(CString("HUMANOIDROOT_POSITION_ANIMATOR"));
ProtoBody47.addChild(&ROUTE115);

ROUTE& ROUTE116 =  ROUTE();
ROUTE116.setFromField(CString("fraction_changed"));
ROUTE116.setFromNode(CString("TIMER"));
ROUTE116.setToField(CString("set_fraction"));
ROUTE116.setToNode(CString("HUMANOIDROOT_ANIMATOR"));
ProtoBody47.addChild(&ROUTE116);

ROUTE& ROUTE117 =  ROUTE();
ROUTE117.setFromField(CString("fraction_changed"));
ROUTE117.setFromNode(CString("TIMER"));
ROUTE117.setToField(CString("set_fraction"));
ROUTE117.setToNode(CString("SACROILIAC_ANIMATOR"));
ProtoBody47.addChild(&ROUTE117);

ROUTE& ROUTE118 =  ROUTE();
ROUTE118.setFromField(CString("fraction_changed"));
ROUTE118.setFromNode(CString("TIMER"));
ROUTE118.setToField(CString("set_fraction"));
ROUTE118.setToNode(CString("L_HIP_ANIMATOR"));
ProtoBody47.addChild(&ROUTE118);

ROUTE& ROUTE119 =  ROUTE();
ROUTE119.setFromField(CString("fraction_changed"));
ROUTE119.setFromNode(CString("TIMER"));
ROUTE119.setToField(CString("set_fraction"));
ROUTE119.setToNode(CString("L_KNEE_ANIMATOR"));
ProtoBody47.addChild(&ROUTE119);

ROUTE& ROUTE120 =  ROUTE();
ROUTE120.setFromField(CString("fraction_changed"));
ROUTE120.setFromNode(CString("TIMER"));
ROUTE120.setToField(CString("set_fraction"));
ROUTE120.setToNode(CString("L_ANKLE_ANIMATOR"));
ProtoBody47.addChild(&ROUTE120);

ROUTE& ROUTE121 =  ROUTE();
ROUTE121.setFromField(CString("fraction_changed"));
ROUTE121.setFromNode(CString("TIMER"));
ROUTE121.setToField(CString("set_fraction"));
ROUTE121.setToNode(CString("L_MIDTARSAL_ANIMATOR"));
ProtoBody47.addChild(&ROUTE121);

ROUTE& ROUTE122 =  ROUTE();
ROUTE122.setFromField(CString("fraction_changed"));
ROUTE122.setFromNode(CString("TIMER"));
ROUTE122.setToField(CString("set_fraction"));
ROUTE122.setToNode(CString("R_HIP_ANIMATOR"));
ProtoBody47.addChild(&ROUTE122);

ROUTE& ROUTE123 =  ROUTE();
ROUTE123.setFromField(CString("fraction_changed"));
ROUTE123.setFromNode(CString("TIMER"));
ROUTE123.setToField(CString("set_fraction"));
ROUTE123.setToNode(CString("R_KNEE_ANIMATOR"));
ProtoBody47.addChild(&ROUTE123);

ROUTE& ROUTE124 =  ROUTE();
ROUTE124.setFromField(CString("fraction_changed"));
ROUTE124.setFromNode(CString("TIMER"));
ROUTE124.setToField(CString("set_fraction"));
ROUTE124.setToNode(CString("R_ANKLE_ANIMATOR"));
ProtoBody47.addChild(&ROUTE124);

ROUTE& ROUTE125 =  ROUTE();
ROUTE125.setFromField(CString("fraction_changed"));
ROUTE125.setFromNode(CString("TIMER"));
ROUTE125.setToField(CString("set_fraction"));
ROUTE125.setToNode(CString("R_MIDTARSAL_ANIMATOR"));
ProtoBody47.addChild(&ROUTE125);

ROUTE& ROUTE126 =  ROUTE();
ROUTE126.setFromField(CString("fraction_changed"));
ROUTE126.setFromNode(CString("TIMER"));
ROUTE126.setToField(CString("set_fraction"));
ROUTE126.setToNode(CString("VL5_ANIMATOR"));
ProtoBody47.addChild(&ROUTE126);

ROUTE& ROUTE127 =  ROUTE();
ROUTE127.setFromField(CString("fraction_changed"));
ROUTE127.setFromNode(CString("TIMER"));
ROUTE127.setToField(CString("set_fraction"));
ROUTE127.setToNode(CString("SKULLBASE_ANIMATOR"));
ProtoBody47.addChild(&ROUTE127);

ROUTE& ROUTE128 =  ROUTE();
ROUTE128.setFromField(CString("fraction_changed"));
ROUTE128.setFromNode(CString("TIMER"));
ROUTE128.setToField(CString("set_fraction"));
ROUTE128.setToNode(CString("L_SHOULDER_ANIMATOR"));
ProtoBody47.addChild(&ROUTE128);

ROUTE& ROUTE129 =  ROUTE();
ROUTE129.setFromField(CString("fraction_changed"));
ROUTE129.setFromNode(CString("TIMER"));
ROUTE129.setToField(CString("set_fraction"));
ROUTE129.setToNode(CString("L_ELBOW_ANIMATOR"));
ProtoBody47.addChild(&ROUTE129);

ROUTE& ROUTE130 =  ROUTE();
ROUTE130.setFromField(CString("fraction_changed"));
ROUTE130.setFromNode(CString("TIMER"));
ROUTE130.setToField(CString("set_fraction"));
ROUTE130.setToNode(CString("L_WRIST_ANIMATOR"));
ProtoBody47.addChild(&ROUTE130);

ROUTE& ROUTE131 =  ROUTE();
ROUTE131.setFromField(CString("fraction_changed"));
ROUTE131.setFromNode(CString("TIMER"));
ROUTE131.setToField(CString("set_fraction"));
ROUTE131.setToNode(CString("R_SHOULDER_ANIMATOR"));
ProtoBody47.addChild(&ROUTE131);

ROUTE& ROUTE132 =  ROUTE();
ROUTE132.setFromField(CString("fraction_changed"));
ROUTE132.setFromNode(CString("TIMER"));
ROUTE132.setToField(CString("set_fraction"));
ROUTE132.setToNode(CString("R_ELBOW_ANIMATOR"));
ProtoBody47.addChild(&ROUTE132);

ROUTE& ROUTE133 =  ROUTE();
ROUTE133.setFromField(CString("fraction_changed"));
ROUTE133.setFromNode(CString("TIMER"));
ROUTE133.setToField(CString("set_fraction"));
ROUTE133.setToNode(CString("R_WRIST_ANIMATOR"));
ProtoBody47.addChild(&ROUTE133);

ProtoDeclare19.addChild(&ProtoBody47);

Scene17.addChild(&ProtoDeclare19);

//======================================
//Point to example use in case someone inspects this file
Anchor& Anchor134 =  Anchor();
Anchor134.setDescription(CString("InterchangableActorsViaDynamicRouting"));
Anchor134.setParameter(new CString[1]{CString("target=_blank")}, 1);
Anchor134.setUrl(new CString[4]{CString("InterchangableActorsViaDynamicRouting.x3d"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d"), CString("InterchangableActorsViaDynamicRouting.wrl"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl")}, 4);
Shape& Shape135 =  Shape();
Text& Text136 =  Text();
Text136.setString(new CString[6]{CString("LOA1_WalkAnimation.x3d"), CString("defines a prototype"), CString("for animating a humanoid."), CString(""), CString("Click this text to see"), CString("InterchangableActorsViaDynamicRouting example.")}, 6);
CFontStyle& FontStyle137 =  CFontStyle();
FontStyle137.setJustify(new CString[2]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle137.setSize(0.8);
Text136.setFontStyle(&FontStyle137);

Shape135.setGeometry(&Text136);

Appearance& Appearance138 =  Appearance();
Material& Material139 =  Material();
Material139.setDiffuseColor(new float[3]{1.0,1.0,0.2});
Appearance138.addChild(&Material139);

Shape135.addChild(&Appearance138);

Anchor134.addChild(&Shape135);

Scene17.addChild(&Anchor134);

X3D0.setScene(&Scene17);

}
