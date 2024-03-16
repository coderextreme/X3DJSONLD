/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Abstracts.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Concretes.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile("Immersive");
X3D0->setVersion("3.3");
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName("title");
meta2->setContent("LOA1_SwimmingFlutterKickAnimation.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("description");
meta3->setContent("Humanoid animation prototype reusable by any Humanoid.");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("creator");
meta4->setContent("Etsuko Lippi");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("created");
meta5->setContent("13 December 2001");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("modified");
meta6->setContent("23 May 2020");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("warning");
meta7->setContent("not yet tested, need to compare with NancyDivingExample interpolators");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("reference");
meta8->setContent("http://www.HAnim.org");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("reference");
meta9->setContent("http://HAnim.org/Models");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("reference");
meta10->setContent("http://HAnim.org/Nodes");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("subject");
meta11->setContent("Swimming flutter kick Animation HAnim 2001");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("identifier");
meta12->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_SwimmingFlutterKickAnimation.x3d");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("generator");
meta13->setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("license");
meta14->setContent("../license.html");
head1->addMeta(meta14);

X3D0->setHead(head1);

Scene* Scene15 = new Scene();
WorldInfo* WorldInfo16 = new WorldInfo();
WorldInfo16->setTitle("LOA1_SwimmingFlutterKickAnimation.x3d");
Scene15->addChild(WorldInfo16);

ProtoDeclare* ProtoDeclare17 = new ProtoDeclare();
ProtoDeclare17->setName("LOA1_DivingAnimation");
ProtoInterface* ProtoInterface18 = new ProtoInterface();
field* field19 = new field();
field19->setName("cycleInterval");
field19->setAccessType("inputOutput");
field19->setType("SFTime");
field19->setValue("7");
ProtoInterface18->addField(field19);

field* field20 = new field();
field20->setName("enabled");
field20->setAccessType("inputOutput");
field20->setType("SFBool");
field20->setValue("true");
ProtoInterface18->addField(field20);

field* field21 = new field();
field21->setName("loop");
field21->setAccessType("inputOutput");
field21->setType("SFBool");
field21->setValue("true");
ProtoInterface18->addField(field21);

field* field22 = new field();
field22->setName("startTime");
field22->setAccessType("inputOutput");
field22->setType("SFTime");
field22->setValue("0");
ProtoInterface18->addField(field22);

field* field23 = new field();
field23->setName("stopTime");
field23->setAccessType("inputOutput");
field23->setType("SFTime");
field23->setValue("-1");
ProtoInterface18->addField(field23);

field* field24 = new field();
field24->setName("fraction_changed");
field24->setAccessType("outputOnly");
field24->setType("SFFloat");
ProtoInterface18->addField(field24);

field* field25 = new field();
field25->setName("isActive");
field25->setAccessType("outputOnly");
field25->setType("SFBool");
ProtoInterface18->addField(field25);

field* field26 = new field();
field26->setName("HumanoidRoot_translation_changed");
field26->setAccessType("outputOnly");
field26->setType("SFVec3f");
ProtoInterface18->addField(field26);

field* field27 = new field();
field27->setName("HumanoidRoot_rotation_changed");
field27->setAccessType("outputOnly");
field27->setType("SFRotation");
ProtoInterface18->addField(field27);

field* field28 = new field();
field28->setName("lower_body_rotation_changed");
field28->setAccessType("outputOnly");
field28->setType("SFRotation");
ProtoInterface18->addField(field28);

field* field29 = new field();
field29->setName("l_hip_rotation_changed");
field29->setAccessType("outputOnly");
field29->setType("SFRotation");
ProtoInterface18->addField(field29);

field* field30 = new field();
field30->setName("l_knee_rotation_changed");
field30->setAccessType("outputOnly");
field30->setType("SFRotation");
ProtoInterface18->addField(field30);

field* field31 = new field();
field31->setName("l_ankle_rotation_changed");
field31->setAccessType("outputOnly");
field31->setType("SFRotation");
ProtoInterface18->addField(field31);

field* field32 = new field();
field32->setName("l_midtarsal_rotation_changed");
field32->setAccessType("outputOnly");
field32->setType("SFRotation");
ProtoInterface18->addField(field32);

field* field33 = new field();
field33->setName("r_hip_rotation_changed");
field33->setAccessType("outputOnly");
field33->setType("SFRotation");
ProtoInterface18->addField(field33);

field* field34 = new field();
field34->setName("r_knee_rotation_changed");
field34->setAccessType("outputOnly");
field34->setType("SFRotation");
ProtoInterface18->addField(field34);

field* field35 = new field();
field35->setName("r_ankle_rotation_changed");
field35->setAccessType("outputOnly");
field35->setType("SFRotation");
ProtoInterface18->addField(field35);

field* field36 = new field();
field36->setName("r_midtarsal_rotation_changed");
field36->setAccessType("outputOnly");
field36->setType("SFRotation");
ProtoInterface18->addField(field36);

field* field37 = new field();
field37->setName("vl5_rotation_changed");
field37->setAccessType("outputOnly");
field37->setType("SFRotation");
ProtoInterface18->addField(field37);

field* field38 = new field();
field38->setName("skullbase_rotation_changed");
field38->setAccessType("outputOnly");
field38->setType("SFRotation");
ProtoInterface18->addField(field38);

field* field39 = new field();
field39->setName("l_shoulder_rotation_changed");
field39->setAccessType("outputOnly");
field39->setType("SFRotation");
ProtoInterface18->addField(field39);

field* field40 = new field();
field40->setName("l_elbow_rotation_changed");
field40->setAccessType("outputOnly");
field40->setType("SFRotation");
ProtoInterface18->addField(field40);

field* field41 = new field();
field41->setName("l_wrist_rotation_changed");
field41->setAccessType("outputOnly");
field41->setType("SFRotation");
ProtoInterface18->addField(field41);

field* field42 = new field();
field42->setName("r_shoulder_rotation_changed");
field42->setAccessType("outputOnly");
field42->setType("SFRotation");
ProtoInterface18->addField(field42);

field* field43 = new field();
field43->setName("r_elbow_rotation_changed");
field43->setAccessType("outputOnly");
field43->setType("SFRotation");
ProtoInterface18->addField(field43);

field* field44 = new field();
field44->setName("r_wrist_rotation_changed");
field44->setAccessType("outputOnly");
field44->setType("SFRotation");
ProtoInterface18->addField(field44);

ProtoDeclare17->setProtoInterface(ProtoInterface18);

ProtoBody* ProtoBody45 = new ProtoBody();
Group* Group46 = new Group();
TimeSensor* TimeSensor47 = new TimeSensor();
TimeSensor47->setDEF("TIMER");
TimeSensor47->setLoop(True);
IS* IS48 = new IS();
Connect* connect49 = new Connect();
connect49->setNodeField("cycleInterval");
connect49->setProtoField("cycleInterval");
IS48->addConnect(connect49);

Connect* connect50 = new Connect();
connect50->setNodeField("enabled");
connect50->setProtoField("enabled");
IS48->addConnect(connect50);

Connect* connect51 = new Connect();
connect51->setNodeField("loop");
connect51->setProtoField("loop");
IS48->addConnect(connect51);

Connect* connect52 = new Connect();
connect52->setNodeField("startTime");
connect52->setProtoField("startTime");
IS48->addConnect(connect52);

Connect* connect53 = new Connect();
connect53->setNodeField("stopTime");
connect53->setProtoField("stopTime");
IS48->addConnect(connect53);

Connect* connect54 = new Connect();
connect54->setNodeField("fraction_changed");
connect54->setProtoField("fraction_changed");
IS48->addConnect(connect54);

Connect* connect55 = new Connect();
connect55->setNodeField("isActive");
connect55->setProtoField("isActive");
IS48->addConnect(connect55);

TimeSensor47->setIS(IS48);

Group46->addChild(TimeSensor47);

PositionInterpolator* PositionInterpolator56 = new PositionInterpolator();
PositionInterpolator56->setDEF("HUMANOIDROOT_POSITION_ANIMATOR");
PositionInterpolator56->setKey(new float[19]{0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1}, 19);
PositionInterpolator56->setKeyValue(new float[57]{0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0});
IS* IS57 = new IS();
Connect* connect58 = new Connect();
connect58->setNodeField("value_changed");
connect58->setProtoField("HumanoidRoot_translation_changed");
IS57->addConnect(connect58);

PositionInterpolator56->setIS(IS57);

Group46->addChild(PositionInterpolator56);

OrientationInterpolator* OrientationInterpolator59 = new OrientationInterpolator();
OrientationInterpolator59->setDEF("HUMANOIDROOT_ANIMATOR");
OrientationInterpolator59->setKey(new float[2]{0,1}, 2);
OrientationInterpolator59->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
IS* IS60 = new IS();
Connect* connect61 = new Connect();
connect61->setNodeField("value_changed");
connect61->setProtoField("HumanoidRoot_rotation_changed");
IS60->addConnect(connect61);

OrientationInterpolator59->setIS(IS60);

Group46->addChild(OrientationInterpolator59);

//no SACROILIAC_ANIMATOR
OrientationInterpolator* OrientationInterpolator62 = new OrientationInterpolator();
OrientationInterpolator62->setDEF("L_HIP_ANIMATOR");
OrientationInterpolator62->setKey(new float[7]{0,0.25,0.375,0.6667,0.7917,0.9167,1}, 7);
OrientationInterpolator62->setKeyValue(new float[28]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865});
IS* IS63 = new IS();
Connect* connect64 = new Connect();
connect64->setNodeField("value_changed");
connect64->setProtoField("l_hip_rotation_changed");
IS63->addConnect(connect64);

OrientationInterpolator62->setIS(IS63);

Group46->addChild(OrientationInterpolator62);

OrientationInterpolator* OrientationInterpolator65 = new OrientationInterpolator();
OrientationInterpolator65->setDEF("L_KNEE_ANIMATOR");
OrientationInterpolator65->setKey(new float[8]{0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1}, 8);
OrientationInterpolator65->setKeyValue(new float[32]{1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226});
IS* IS66 = new IS();
Connect* connect67 = new Connect();
connect67->setNodeField("value_changed");
connect67->setProtoField("l_knee_rotation_changed");
IS66->addConnect(connect67);

OrientationInterpolator65->setIS(IS66);

Group46->addChild(OrientationInterpolator65);

OrientationInterpolator* OrientationInterpolator68 = new OrientationInterpolator();
OrientationInterpolator68->setDEF("L_ANKLE_ANIMATOR");
OrientationInterpolator68->setKey(new float[11]{0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1}, 11);
OrientationInterpolator68->setKeyValue(new float[44]{1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001});
IS* IS69 = new IS();
Connect* connect70 = new Connect();
connect70->setNodeField("value_changed");
connect70->setProtoField("l_ankle_rotation_changed");
IS69->addConnect(connect70);

OrientationInterpolator68->setIS(IS69);

Group46->addChild(OrientationInterpolator68);

//no L_MIDTARSAL_ANIMATOR
OrientationInterpolator* OrientationInterpolator71 = new OrientationInterpolator();
OrientationInterpolator71->setDEF("R_HIP_ANIMATOR");
OrientationInterpolator71->setKey(new float[8]{0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1}, 8);
OrientationInterpolator71->setKeyValue(new float[32]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9131,-0.06243,-0.403,0.3361,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481});
IS* IS72 = new IS();
Connect* connect73 = new Connect();
connect73->setNodeField("value_changed");
connect73->setProtoField("r_hip_rotation_changed");
IS72->addConnect(connect73);

OrientationInterpolator71->setIS(IS72);

Group46->addChild(OrientationInterpolator71);

OrientationInterpolator* OrientationInterpolator74 = new OrientationInterpolator();
OrientationInterpolator74->setDEF("R_KNEE_ANIMATOR");
OrientationInterpolator74->setKey(new float[8]{0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1}, 8);
OrientationInterpolator74->setKeyValue(new float[32]{1,0,0,0.8573,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.8573});
IS* IS75 = new IS();
Connect* connect76 = new Connect();
connect76->setNodeField("value_changed");
connect76->setProtoField("r_knee_rotation_changed");
IS75->addConnect(connect76);

OrientationInterpolator74->setIS(IS75);

Group46->addChild(OrientationInterpolator74);

OrientationInterpolator* OrientationInterpolator77 = new OrientationInterpolator();
OrientationInterpolator77->setDEF("R_ANKLE_ANIMATOR");
OrientationInterpolator77->setKey(new float[11]{0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1}, 11);
OrientationInterpolator77->setKeyValue(new float[44]{1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.86001});
IS* IS78 = new IS();
Connect* connect79 = new Connect();
connect79->setNodeField("value_changed");
connect79->setProtoField("r_ankle_rotation_changed");
IS78->addConnect(connect79);

OrientationInterpolator77->setIS(IS78);

Group46->addChild(OrientationInterpolator77);

//no L_MIDTARSAL_ANIMATOR
OrientationInterpolator* OrientationInterpolator80 = new OrientationInterpolator();
OrientationInterpolator80->setDEF("VL5_ANIMATOR");
OrientationInterpolator80->setKey(new float[6]{0,0.2083,0.375,0.75,0.8333,1}, 6);
OrientationInterpolator80->setKeyValue(new float[24]{0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826});
IS* IS81 = new IS();
Connect* connect82 = new Connect();
connect82->setNodeField("value_changed");
connect82->setProtoField("vl5_rotation_changed");
IS81->addConnect(connect82);

OrientationInterpolator80->setIS(IS81);

Group46->addChild(OrientationInterpolator80);

OrientationInterpolator* OrientationInterpolator83 = new OrientationInterpolator();
OrientationInterpolator83->setDEF("SKULLBASE_ANIMATOR");
OrientationInterpolator83->setKey(new float[14]{0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1}, 14);
OrientationInterpolator83->setKeyValue(new float[56]{-1,0,0,1,-1,0,0,1,-1,0,0,0.999,-1,0,0,0.99,-1,0,0,0.99,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,1});
IS* IS84 = new IS();
Connect* connect85 = new Connect();
connect85->setNodeField("value_changed");
connect85->setProtoField("skullbase_rotation_changed");
IS84->addConnect(connect85);

OrientationInterpolator83->setIS(IS84);

Group46->addChild(OrientationInterpolator83);

OrientationInterpolator* OrientationInterpolator86 = new OrientationInterpolator();
OrientationInterpolator86->setDEF("L_SHOULDER_ANIMATOR");
OrientationInterpolator86->setKey(new float[7]{0,0.25,0.375,0.6667,0.7917,0.9167,1}, 7);
OrientationInterpolator86->setKeyValue(new float[28]{0,0,1,0.1,0,0,1,0.2,0,0,1,0.2,0.86,0.25,0.42,0.5,0.86,0.25,0.42,0.8,0.86,0.25,0.42,0.4,0.86,0.25,0.42,0.2});
IS* IS87 = new IS();
Connect* connect88 = new Connect();
connect88->setNodeField("value_changed");
connect88->setProtoField("l_shoulder_rotation_changed");
IS87->addConnect(connect88);

OrientationInterpolator86->setIS(IS87);

Group46->addChild(OrientationInterpolator86);

OrientationInterpolator* OrientationInterpolator89 = new OrientationInterpolator();
OrientationInterpolator89->setDEF("L_ELBOW_ANIMATOR");
OrientationInterpolator89->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator89->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0});
IS* IS90 = new IS();
Connect* connect91 = new Connect();
connect91->setNodeField("value_changed");
connect91->setProtoField("l_elbow_rotation_changed");
IS90->addConnect(connect91);

OrientationInterpolator89->setIS(IS90);

Group46->addChild(OrientationInterpolator89);

OrientationInterpolator* OrientationInterpolator92 = new OrientationInterpolator();
OrientationInterpolator92->setDEF("L_WRIST_ANIMATOR");
OrientationInterpolator92->setKey(new float[5]{0,0.32,0.64,0.88,1}, 5);
OrientationInterpolator92->setKeyValue(new float[20]{0,0,1,0,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0,0,1,0});
IS* IS93 = new IS();
Connect* connect94 = new Connect();
connect94->setNodeField("value_changed");
connect94->setProtoField("l_wrist_rotation_changed");
IS93->addConnect(connect94);

OrientationInterpolator92->setIS(IS93);

Group46->addChild(OrientationInterpolator92);

OrientationInterpolator* OrientationInterpolator95 = new OrientationInterpolator();
OrientationInterpolator95->setDEF("R_SHOULDER_ANIMATOR");
OrientationInterpolator95->setKey(new float[6]{0,0.45,0.64,0.76,0.88,1}, 6);
OrientationInterpolator95->setKeyValue(new float[24]{0,0,1,0,0.9992,0.02042,0.03558,7.2,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0});
IS* IS96 = new IS();
Connect* connect97 = new Connect();
connect97->setNodeField("value_changed");
connect97->setProtoField("r_shoulder_rotation_changed");
IS96->addConnect(connect97);

OrientationInterpolator95->setIS(IS96);

Group46->addChild(OrientationInterpolator95);

OrientationInterpolator* OrientationInterpolator98 = new OrientationInterpolator();
OrientationInterpolator98->setDEF("R_ELBOW_ANIMATOR");
OrientationInterpolator98->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator98->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0});
IS* IS99 = new IS();
Connect* connect100 = new Connect();
connect100->setNodeField("value_changed");
connect100->setProtoField("r_elbow_rotation_changed");
IS99->addConnect(connect100);

OrientationInterpolator98->setIS(IS99);

Group46->addChild(OrientationInterpolator98);

OrientationInterpolator* OrientationInterpolator101 = new OrientationInterpolator();
OrientationInterpolator101->setDEF("R_WRIST_ANIMATOR");
OrientationInterpolator101->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator101->setKeyValue(new float[24]{0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0});
IS* IS102 = new IS();
Connect* connect103 = new Connect();
connect103->setNodeField("value_changed");
connect103->setProtoField("r_wrist_rotation_changed");
IS102->addConnect(connect103);

OrientationInterpolator101->setIS(IS102);

Group46->addChild(OrientationInterpolator101);

ProtoBody45->addChild(Group46);

ROUTE* ROUTE104 = new ROUTE();
ROUTE104->setFromField("fraction_changed");
ROUTE104->setFromNode("TIMER");
ROUTE104->setToField("set_fraction");
ROUTE104->setToNode("HUMANOIDROOT_POSITION_ANIMATOR");
ProtoBody45->addChild(ROUTE104);

ROUTE* ROUTE105 = new ROUTE();
ROUTE105->setFromField("fraction_changed");
ROUTE105->setFromNode("TIMER");
ROUTE105->setToField("set_fraction");
ROUTE105->setToNode("HUMANOIDROOT_ANIMATOR");
ProtoBody45->addChild(ROUTE105);

ROUTE* ROUTE106 = new ROUTE();
ROUTE106->setFromField("fraction_changed");
ROUTE106->setFromNode("TIMER");
ROUTE106->setToField("set_fraction");
ROUTE106->setToNode("SKULLBASE_ANIMATOR");
ProtoBody45->addChild(ROUTE106);

ROUTE* ROUTE107 = new ROUTE();
ROUTE107->setFromField("fraction_changed");
ROUTE107->setFromNode("TIMER");
ROUTE107->setToField("set_fraction");
ROUTE107->setToNode("VL5_ANIMATOR");
ProtoBody45->addChild(ROUTE107);

ROUTE* ROUTE108 = new ROUTE();
ROUTE108->setFromField("fraction_changed");
ROUTE108->setFromNode("TIMER");
ROUTE108->setToField("set_fraction");
ROUTE108->setToNode("L_HIP_ANIMATOR");
ProtoBody45->addChild(ROUTE108);

ROUTE* ROUTE109 = new ROUTE();
ROUTE109->setFromField("fraction_changed");
ROUTE109->setFromNode("TIMER");
ROUTE109->setToField("set_fraction");
ROUTE109->setToNode("L_KNEE_ANIMATOR");
ProtoBody45->addChild(ROUTE109);

ROUTE* ROUTE110 = new ROUTE();
ROUTE110->setFromField("fraction_changed");
ROUTE110->setFromNode("TIMER");
ROUTE110->setToField("set_fraction");
ROUTE110->setToNode("L_ANKLE_ANIMATOR");
ProtoBody45->addChild(ROUTE110);

ROUTE* ROUTE111 = new ROUTE();
ROUTE111->setFromField("fraction_changed");
ROUTE111->setFromNode("TIMER");
ROUTE111->setToField("set_fraction");
ROUTE111->setToNode("R_HIP_ANIMATOR");
ProtoBody45->addChild(ROUTE111);

ROUTE* ROUTE112 = new ROUTE();
ROUTE112->setFromField("fraction_changed");
ROUTE112->setFromNode("TIMER");
ROUTE112->setToField("set_fraction");
ROUTE112->setToNode("R_KNEE_ANIMATOR");
ProtoBody45->addChild(ROUTE112);

ROUTE* ROUTE113 = new ROUTE();
ROUTE113->setFromField("fraction_changed");
ROUTE113->setFromNode("TIMER");
ROUTE113->setToField("set_fraction");
ROUTE113->setToNode("R_ANKLE_ANIMATOR");
ProtoBody45->addChild(ROUTE113);

ROUTE* ROUTE114 = new ROUTE();
ROUTE114->setFromField("fraction_changed");
ROUTE114->setFromNode("TIMER");
ROUTE114->setToField("set_fraction");
ROUTE114->setToNode("L_SHOULDER_ANIMATOR");
ProtoBody45->addChild(ROUTE114);

ROUTE* ROUTE115 = new ROUTE();
ROUTE115->setFromField("fraction_changed");
ROUTE115->setFromNode("TIMER");
ROUTE115->setToField("set_fraction");
ROUTE115->setToNode("L_ELBOW_ANIMATOR");
ProtoBody45->addChild(ROUTE115);

ROUTE* ROUTE116 = new ROUTE();
ROUTE116->setFromField("fraction_changed");
ROUTE116->setFromNode("TIMER");
ROUTE116->setToField("set_fraction");
ROUTE116->setToNode("L_WRIST_ANIMATOR");
ProtoBody45->addChild(ROUTE116);

ROUTE* ROUTE117 = new ROUTE();
ROUTE117->setFromField("fraction_changed");
ROUTE117->setFromNode("TIMER");
ROUTE117->setToField("set_fraction");
ROUTE117->setToNode("R_SHOULDER_ANIMATOR");
ProtoBody45->addChild(ROUTE117);

ROUTE* ROUTE118 = new ROUTE();
ROUTE118->setFromField("fraction_changed");
ROUTE118->setFromNode("TIMER");
ROUTE118->setToField("set_fraction");
ROUTE118->setToNode("R_ELBOW_ANIMATOR");
ProtoBody45->addChild(ROUTE118);

ROUTE* ROUTE119 = new ROUTE();
ROUTE119->setFromField("fraction_changed");
ROUTE119->setFromNode("TIMER");
ROUTE119->setToField("set_fraction");
ROUTE119->setToNode("R_WRIST_ANIMATOR");
ProtoBody45->addChild(ROUTE119);

ProtoDeclare17->setProtoBody(ProtoBody45);

Scene15->addChild(ProtoDeclare17);

Viewpoint* Viewpoint120 = new Viewpoint();
Viewpoint120->setDescription("LOA1_SwimmingFlutterKickAnimation scene");
Viewpoint120->setPosition(new float[3]{0,0,12});
Scene15->addChild(Viewpoint120);

Anchor* Anchor121 = new Anchor();
Anchor121->setDescription("Nancy Diving");
Anchor121->setParameter(new String[1]{"target=_blank"}, 1);
Anchor121->setUrl(new String[4]{"NancyDiving.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.x3d","NancyDiving.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.wrl"}, 4);
Shape* Shape122 = new Shape();
Text* Text123 = new Text();
Text123->setString(new String[5]{"LOA1_SwimmingFlutterKickAnimation.x3d","defines a prototype","for animating a humanoid.","","Click text to see example."}, 5);
FontStyle* FontStyle124 = new FontStyle();
FontStyle124->setJustify(new String[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle124->setSize(0.8);
Text123->setFontStyle(FontStyle124);

Shape122->setGeometry(Text123);

Appearance* Appearance125 = new Appearance();
Material* Material126 = new Material();
Material126->setDiffuseColor(new float[3]{1,1,0.2});
Appearance125->setMaterial(Material126);

Shape122->setAppearance(Appearance125);

Anchor121->addChild(Shape122);

Scene15->addChild(Anchor121);

X3D0->setScene(Scene15);

X3D0->toXMLString();
}
