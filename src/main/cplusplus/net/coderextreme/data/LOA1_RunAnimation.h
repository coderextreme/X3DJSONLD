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
meta2.setContent(CString("LOA1_RunAnimation.x3d"));
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
meta6.setContent(CString("Ozan APAYDIN"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("translated"));
meta7.setContent(CString("30 October 2001"));
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
meta10.setContent(CString("http://www.HAnim.org"));
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
meta13.setContent(CString("Nancy Run Animation HAnim 2001"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("identifier"));
meta14.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_RunAnimation.x3d"));
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
WorldInfo18.setTitle(CString("LOA1_RunAnimation.x3d"));
Scene17.addChild(&WorldInfo18);

ProtoDeclare& ProtoDeclare19 =  ProtoDeclare();
ProtoDeclare19.setName(CString("LOA1_RunAnimation"));
ProtoInterface& ProtoInterface20 =  ProtoInterface();
field& field21 =  field();
field21.setName(CString("cycleInterval"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFTime"));
field21.setValue(CString("1"));
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
PositionInterpolator58.setKey(new float[]{0.0,0.2182,0.2909,0.3091,0.7091,0.8,0.8182,1.0}, 8);
PositionInterpolator58.setKeyValue(new float[]{0.0,-0.0351,0.0,0.0,-0.0351,0.0,0.0,-0.04087,0.0,0.0,-0.04886,0.0,0.0,-0.04051,0.0,0.0,-0.03666,0.0,0.0,-0.03666,0.0,0.0,-0.0351,0.0}, 24);
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

OrientationInterpolator& OrientationInterpolator64 =  OrientationInterpolator();
OrientationInterpolator64.setDEF(CString("SACROILIAC_ANIMATOR"));
OrientationInterpolator64.setKey(new float[]{0.0,1.0}, 2);
OrientationInterpolator64.setKeyValue(new float[]{0.9969,-0.05444,0.05596,0.07687,0.9969,-0.05444,0.05596,0.07687}, 8);
IS& IS65 =  IS();
Connect& connect66 =  Connect();
connect66.setNodeField(CString("value_changed"));
connect66.setProtoField(CString("lower_body_rotation_changed"));
IS65.addChild(&connect66);

OrientationInterpolator64.addChild(&IS65);

Group48.addChild(&OrientationInterpolator64);

OrientationInterpolator& OrientationInterpolator67 =  OrientationInterpolator();
OrientationInterpolator67.setDEF(CString("L_HIP_ANIMATOR"));
OrientationInterpolator67.setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
OrientationInterpolator67.setKeyValue(new float[]{-0.9986,0.03354,0.04001,1.212,-0.9889,0.1328,0.06696,0.4025,0.9894,0.1453,0.009351,0.4114,-0.9963,0.07032,0.05003,0.7035,-0.9986,0.03354,0.04001,1.212}, 20);
IS& IS68 =  IS();
Connect& connect69 =  Connect();
connect69.setNodeField(CString("value_changed"));
connect69.setProtoField(CString("l_hip_rotation_changed"));
IS68.addChild(&connect69);

OrientationInterpolator67.addChild(&IS68);

Group48.addChild(&OrientationInterpolator67);

OrientationInterpolator& OrientationInterpolator70 =  OrientationInterpolator();
OrientationInterpolator70.setDEF(CString("L_KNEE_ANIMATOR"));
OrientationInterpolator70.setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
OrientationInterpolator70.setKeyValue(new float[]{1.0,0.0,0.0,1.108,1.0,0.0,0.0,0.4265,1.0,0.0,0.0,0.7052,1.0,0.0,0.0,2.179,1.0,0.0,0.0,1.108}, 20);
IS& IS71 =  IS();
Connect& connect72 =  Connect();
connect72.setNodeField(CString("value_changed"));
connect72.setProtoField(CString("l_knee_rotation_changed"));
IS71.addChild(&connect72);

OrientationInterpolator70.addChild(&IS71);

Group48.addChild(&OrientationInterpolator70);

OrientationInterpolator& OrientationInterpolator73 =  OrientationInterpolator();
OrientationInterpolator73.setDEF(CString("L_ANKLE_ANIMATOR"));
OrientationInterpolator73.setKey(new float[]{0.0,0.2182,0.3091,0.4909,1.0}, 5);
OrientationInterpolator73.setKeyValue(new float[]{1.0,0.0,0.0,0.03543,-1.0,0.0,0.0,0.1037,-1.0,0.0,0.0,0.4328,1.0,0.0,0.0,0.1929,1.0,0.0,0.0,0.03543}, 20);
IS& IS74 =  IS();
Connect& connect75 =  Connect();
connect75.setNodeField(CString("value_changed"));
connect75.setProtoField(CString("l_ankle_rotation_changed"));
IS74.addChild(&connect75);

OrientationInterpolator73.addChild(&IS74);

Group48.addChild(&OrientationInterpolator73);

OrientationInterpolator& OrientationInterpolator76 =  OrientationInterpolator();
OrientationInterpolator76.setDEF(CString("L_MIDTARSAL_ANIMATOR"));
OrientationInterpolator76.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator76.setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.2,1.0,0.0,0.0,0.0}, 12);
IS& IS77 =  IS();
Connect& connect78 =  Connect();
connect78.setNodeField(CString("value_changed"));
connect78.setProtoField(CString("l_midtarsal_rotation_changed"));
IS77.addChild(&connect78);

OrientationInterpolator76.addChild(&IS77);

Group48.addChild(&OrientationInterpolator76);

OrientationInterpolator& OrientationInterpolator79 =  OrientationInterpolator();
OrientationInterpolator79.setDEF(CString("R_HIP_ANIMATOR"));
OrientationInterpolator79.setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
OrientationInterpolator79.setKeyValue(new float[]{0.9999,0.00293,-0.00989,0.402,-1.0,0.004977,-0.00497,0.5943,-1.0,0.003265,-0.001752,1.178,-0.9999,0.00815,-0.01093,0.3031,0.9999,0.00293,-0.00989,0.402}, 20);
IS& IS80 =  IS();
Connect& connect81 =  Connect();
connect81.setNodeField(CString("value_changed"));
connect81.setProtoField(CString("r_hip_rotation_changed"));
IS80.addChild(&connect81);

OrientationInterpolator79.addChild(&IS80);

Group48.addChild(&OrientationInterpolator79);

OrientationInterpolator& OrientationInterpolator82 =  OrientationInterpolator();
OrientationInterpolator82.setDEF(CString("R_KNEE_ANIMATOR"));
OrientationInterpolator82.setKey(new float[]{0.0,0.03636,0.2182,0.4909,0.7455,1.0}, 6);
OrientationInterpolator82.setKeyValue(new float[]{1.0,0.0,0.0,0.7004,1.0,0.0,0.0,1.011,1.0,0.0,0.0,1.892,1.0,0.0,0.0,1.188,1.0,0.0,0.0,0.3964,1.0,0.0,0.0,0.7004}, 24);
IS& IS83 =  IS();
Connect& connect84 =  Connect();
connect84.setNodeField(CString("value_changed"));
connect84.setProtoField(CString("r_knee_rotation_changed"));
IS83.addChild(&connect84);

OrientationInterpolator82.addChild(&IS83);

Group48.addChild(&OrientationInterpolator82);

OrientationInterpolator& OrientationInterpolator85 =  OrientationInterpolator();
OrientationInterpolator85.setDEF(CString("R_ANKLE_ANIMATOR"));
OrientationInterpolator85.setKey(new float[]{0.0,0.4909,0.7091,0.8,0.8182,1.0}, 6);
OrientationInterpolator85.setKeyValue(new float[]{1.0,0.0,0.0,0.2323,-1.0,0.0,0.0,0.07843,-1.0,0.0,0.0,0.09676,-1.0,0.0,0.0,0.3274,-1.0,0.0,0.0,0.3278,1.0,0.0,0.0,0.2323}, 24);
IS& IS86 =  IS();
Connect& connect87 =  Connect();
connect87.setNodeField(CString("value_changed"));
connect87.setProtoField(CString("r_ankle_rotation_changed"));
IS86.addChild(&connect87);

OrientationInterpolator85.addChild(&IS86);

Group48.addChild(&OrientationInterpolator85);

OrientationInterpolator& OrientationInterpolator88 =  OrientationInterpolator();
OrientationInterpolator88.setDEF(CString("R_MIDTARSAL_ANIMATOR"));
OrientationInterpolator88.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator88.setKeyValue(new float[]{1.0,0.0,0.0,-0.2,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.2}, 12);
IS& IS89 =  IS();
Connect& connect90 =  Connect();
connect90.setNodeField(CString("value_changed"));
connect90.setProtoField(CString("r_midtarsal_rotation_changed"));
IS89.addChild(&connect90);

OrientationInterpolator88.addChild(&IS89);

Group48.addChild(&OrientationInterpolator88);

OrientationInterpolator& OrientationInterpolator91 =  OrientationInterpolator();
OrientationInterpolator91.setDEF(CString("VL5_ANIMATOR"));
OrientationInterpolator91.setKey(new float[]{0.0,0.2545,0.4909,0.7636,1.0}, 5);
OrientationInterpolator91.setKeyValue(new float[]{0.7651,0.6382,0.08586,0.2712,0.9999,0.002845,-0.01547,0.3756,0.7459,-0.6505,-0.1432,0.2416,0.9984,0.05536,-0.01154,0.3488,0.7651,0.6382,0.08586,0.2712}, 20);
IS& IS92 =  IS();
Connect& connect93 =  Connect();
connect93.setNodeField(CString("value_changed"));
connect93.setProtoField(CString("vl5_rotation_changed"));
IS92.addChild(&connect93);

OrientationInterpolator91.addChild(&IS92);

Group48.addChild(&OrientationInterpolator91);

OrientationInterpolator& OrientationInterpolator94 =  OrientationInterpolator();
OrientationInterpolator94.setDEF(CString("SKULLBASE_ANIMATOR"));
OrientationInterpolator94.setKey(new float[]{0.0,0.4909,1.0}, 3);
OrientationInterpolator94.setKeyValue(new float[]{0.6517,-0.7559,0.06211,0.2508,0.6467,0.7527,-0.1238,0.2344,0.6517,-0.7559,0.06211,0.2508}, 12);
IS& IS95 =  IS();
Connect& connect96 =  Connect();
connect96.setNodeField(CString("value_changed"));
connect96.setProtoField(CString("skullbase_rotation_changed"));
IS95.addChild(&connect96);

OrientationInterpolator94.addChild(&IS95);

Group48.addChild(&OrientationInterpolator94);

OrientationInterpolator& OrientationInterpolator97 =  OrientationInterpolator();
OrientationInterpolator97.setDEF(CString("L_SHOULDER_ANIMATOR"));
OrientationInterpolator97.setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
OrientationInterpolator97.setKeyValue(new float[]{0.9907,-0.07264,0.115,1.135,0.9291,-0.1222,0.349,0.1695,-0.9892,0.1364,-0.05394,0.5112,0.9942,-0.0002052,0.1073,0.4975,0.9907,-0.07264,0.115,1.135}, 20);
IS& IS98 =  IS();
Connect& connect99 =  Connect();
connect99.setNodeField(CString("value_changed"));
connect99.setProtoField(CString("l_shoulder_rotation_changed"));
IS98.addChild(&connect99);

OrientationInterpolator97.addChild(&IS98);

Group48.addChild(&OrientationInterpolator97);

OrientationInterpolator& OrientationInterpolator100 =  OrientationInterpolator();
OrientationInterpolator100.setDEF(CString("L_ELBOW_ANIMATOR"));
OrientationInterpolator100.setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
OrientationInterpolator100.setKeyValue(new float[]{0.9985,0.03887,0.03802,4.689,-0.965,-0.1889,-0.1821,1.415,0.9758,0.1563,0.1529,4.666,-0.9956,-0.0936,0.009826,1.126,0.9985,0.03887,0.03802,4.689}, 20);
IS& IS101 =  IS();
Connect& connect102 =  Connect();
connect102.setNodeField(CString("value_changed"));
connect102.setProtoField(CString("l_elbow_rotation_changed"));
IS101.addChild(&connect102);

OrientationInterpolator100.addChild(&IS101);

Group48.addChild(&OrientationInterpolator100);

OrientationInterpolator& OrientationInterpolator103 =  OrientationInterpolator();
OrientationInterpolator103.setDEF(CString("L_WRIST_ANIMATOR"));
OrientationInterpolator103.setKey(new float[]{0.0,1.0}, 2);
OrientationInterpolator103.setKeyValue(new float[]{-0.0240995,-0.999682,0.00741506,0.120409,-0.0240995,-0.999682,0.00741506,0.120409}, 8);
IS& IS104 =  IS();
Connect& connect105 =  Connect();
connect105.setNodeField(CString("value_changed"));
connect105.setProtoField(CString("l_wrist_rotation_changed"));
IS104.addChild(&connect105);

OrientationInterpolator103.addChild(&IS104);

Group48.addChild(&OrientationInterpolator103);

OrientationInterpolator& OrientationInterpolator106 =  OrientationInterpolator();
OrientationInterpolator106.setDEF(CString("R_SHOULDER_ANIMATOR"));
OrientationInterpolator106.setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
OrientationInterpolator106.setKeyValue(new float[]{-1.0,0.0,0.0,0.6979,0.9094,0.2062,-0.3613,0.4157,0.9637,0.1537,-0.2185,1.353,0.4864,0.08841,-0.8693,0.1716,-1.0,0.0,0.0,0.6979}, 20);
IS& IS107 =  IS();
Connect& connect108 =  Connect();
connect108.setNodeField(CString("value_changed"));
connect108.setProtoField(CString("r_shoulder_rotation_changed"));
IS107.addChild(&connect108);

OrientationInterpolator106.addChild(&IS107);

Group48.addChild(&OrientationInterpolator106);

OrientationInterpolator& OrientationInterpolator109 =  OrientationInterpolator();
OrientationInterpolator109.setDEF(CString("R_ELBOW_ANIMATOR"));
OrientationInterpolator109.setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
OrientationInterpolator109.setKeyValue(new float[]{0.9353,-0.2978,-0.191,4.222,-0.9362,0.2924,-0.1952,1.05,0.9941,-0.09719,-0.04725,4.512,-0.9594,0.2653,0.09579,1.525,0.9353,-0.2978,-0.191,4.222}, 20);
IS& IS110 =  IS();
Connect& connect111 =  Connect();
connect111.setNodeField(CString("value_changed"));
connect111.setProtoField(CString("r_elbow_rotation_changed"));
IS110.addChild(&connect111);

OrientationInterpolator109.addChild(&IS110);

Group48.addChild(&OrientationInterpolator109);

OrientationInterpolator& OrientationInterpolator112 =  OrientationInterpolator();
OrientationInterpolator112.setDEF(CString("R_WRIST_ANIMATOR"));
OrientationInterpolator112.setKey(new float[]{0.0,1.0}, 2);
OrientationInterpolator112.setKeyValue(new float[]{-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273}, 8);
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
Anchor134.setParameter(new CString[]{CString("target=_blank")}, 1);
Anchor134.setUrl(new CString[]{CString("InterchangableActorsViaDynamicRouting.x3d"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d"), CString("InterchangableActorsViaDynamicRouting.wrl"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl")}, 4);
Shape& Shape135 =  Shape();
Text& Text136 =  Text();
Text136.setString(new CString[]{CString("LOA1_RunAnimation.x3d"), CString("defines a prototype"), CString("for animating a humanoid."), CString(""), CString("Click this text to see"), CString("InterchangableActorsViaDynamicRouting example.")}, 6);
CFontStyle& FontStyle137 =  CFontStyle();
FontStyle137.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle137.setSize(0.8);
Text136.setFontStyle(&FontStyle137);

Shape135.setGeometry(&Text136);

Appearance& Appearance138 =  Appearance();
Material& Material139 =  Material();
Material139.setDiffuseColor(new float[]{1.0,1.0,0.2});
Appearance138.addChild(&Material139);

Shape135.addChild(&Appearance138);

Anchor134.addChild(&Shape135);

Scene17.addChild(&Anchor134);

X3D0.setScene(&Scene17);

//}
