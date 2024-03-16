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
meta2->setContent("LOA1_JumpAnimation.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("description");
meta3->setContent("Humanoid animation prototype reusable by any Humanoid.");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("creator");
meta4->setContent("Cindy Ballreich cindy@ballreich.net 3Name3D");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("rights");
meta5->setContent("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("translator");
meta6->setContent("Scott Tufts");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("translated");
meta7->setContent("1 December 2001");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("modified");
meta8->setContent("23 May 2020");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("reference");
meta9->setContent("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("reference");
meta10->setContent("http://www.HAnim.org");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("reference");
meta11->setContent("http://HAnim.org/Models");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("reference");
meta12->setContent("http://HAnim.org/Nodes");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("subject");
meta13->setContent("InterchangableActorsViaDynamicRouting Nancy jump Animation HAnim 2001");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("identifier");
meta14->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_JumpAnimation.x3d");
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName("generator");
meta15->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName("license");
meta16->setContent("../license.html");
head1->addMeta(meta16);

X3D0->setHead(head1);

Scene* Scene17 = new Scene();
WorldInfo* WorldInfo18 = new WorldInfo();
WorldInfo18->setTitle("LOA1_JumpAnimation.x3d");
Scene17->addChild(WorldInfo18);

ProtoDeclare* ProtoDeclare19 = new ProtoDeclare();
ProtoDeclare19->setName("LOA1_JumpAnimation");
ProtoInterface* ProtoInterface20 = new ProtoInterface();
field* field21 = new field();
field21->setName("cycleInterval");
field21->setAccessType("inputOutput");
field21->setType("SFTime");
field21->setValue("2");
ProtoInterface20->addField(field21);

field* field22 = new field();
field22->setName("enabled");
field22->setAccessType("inputOutput");
field22->setType("SFBool");
field22->setValue("true");
ProtoInterface20->addField(field22);

field* field23 = new field();
field23->setName("loop");
field23->setAccessType("inputOutput");
field23->setType("SFBool");
field23->setValue("true");
ProtoInterface20->addField(field23);

field* field24 = new field();
field24->setName("startTime");
field24->setAccessType("inputOutput");
field24->setType("SFTime");
field24->setValue("0");
ProtoInterface20->addField(field24);

field* field25 = new field();
field25->setName("stopTime");
field25->setAccessType("inputOutput");
field25->setType("SFTime");
field25->setValue("-1");
ProtoInterface20->addField(field25);

field* field26 = new field();
field26->setName("fraction_changed");
field26->setAccessType("outputOnly");
field26->setType("SFFloat");
ProtoInterface20->addField(field26);

field* field27 = new field();
field27->setName("isActive");
field27->setAccessType("outputOnly");
field27->setType("SFBool");
ProtoInterface20->addField(field27);

field* field28 = new field();
field28->setName("HumanoidRoot_translation_changed");
field28->setAccessType("outputOnly");
field28->setType("SFVec3f");
ProtoInterface20->addField(field28);

field* field29 = new field();
field29->setName("HumanoidRoot_rotation_changed");
field29->setAccessType("outputOnly");
field29->setType("SFRotation");
ProtoInterface20->addField(field29);

field* field30 = new field();
field30->setName("lower_body_rotation_changed");
field30->setAccessType("outputOnly");
field30->setType("SFRotation");
ProtoInterface20->addField(field30);

field* field31 = new field();
field31->setName("l_hip_rotation_changed");
field31->setAccessType("outputOnly");
field31->setType("SFRotation");
ProtoInterface20->addField(field31);

field* field32 = new field();
field32->setName("l_knee_rotation_changed");
field32->setAccessType("outputOnly");
field32->setType("SFRotation");
ProtoInterface20->addField(field32);

field* field33 = new field();
field33->setName("l_ankle_rotation_changed");
field33->setAccessType("outputOnly");
field33->setType("SFRotation");
ProtoInterface20->addField(field33);

field* field34 = new field();
field34->setName("l_midtarsal_rotation_changed");
field34->setAccessType("outputOnly");
field34->setType("SFRotation");
ProtoInterface20->addField(field34);

field* field35 = new field();
field35->setName("r_hip_rotation_changed");
field35->setAccessType("outputOnly");
field35->setType("SFRotation");
ProtoInterface20->addField(field35);

field* field36 = new field();
field36->setName("r_knee_rotation_changed");
field36->setAccessType("outputOnly");
field36->setType("SFRotation");
ProtoInterface20->addField(field36);

field* field37 = new field();
field37->setName("r_ankle_rotation_changed");
field37->setAccessType("outputOnly");
field37->setType("SFRotation");
ProtoInterface20->addField(field37);

field* field38 = new field();
field38->setName("r_midtarsal_rotation_changed");
field38->setAccessType("outputOnly");
field38->setType("SFRotation");
ProtoInterface20->addField(field38);

field* field39 = new field();
field39->setName("vl5_rotation_changed");
field39->setAccessType("outputOnly");
field39->setType("SFRotation");
ProtoInterface20->addField(field39);

field* field40 = new field();
field40->setName("skullbase_rotation_changed");
field40->setAccessType("outputOnly");
field40->setType("SFRotation");
ProtoInterface20->addField(field40);

field* field41 = new field();
field41->setName("l_shoulder_rotation_changed");
field41->setAccessType("outputOnly");
field41->setType("SFRotation");
ProtoInterface20->addField(field41);

field* field42 = new field();
field42->setName("l_elbow_rotation_changed");
field42->setAccessType("outputOnly");
field42->setType("SFRotation");
ProtoInterface20->addField(field42);

field* field43 = new field();
field43->setName("l_wrist_rotation_changed");
field43->setAccessType("outputOnly");
field43->setType("SFRotation");
ProtoInterface20->addField(field43);

field* field44 = new field();
field44->setName("r_shoulder_rotation_changed");
field44->setAccessType("outputOnly");
field44->setType("SFRotation");
ProtoInterface20->addField(field44);

field* field45 = new field();
field45->setName("r_elbow_rotation_changed");
field45->setAccessType("outputOnly");
field45->setType("SFRotation");
ProtoInterface20->addField(field45);

field* field46 = new field();
field46->setName("r_wrist_rotation_changed");
field46->setAccessType("outputOnly");
field46->setType("SFRotation");
ProtoInterface20->addField(field46);

ProtoDeclare19->setProtoInterface(ProtoInterface20);

ProtoBody* ProtoBody47 = new ProtoBody();
Group* Group48 = new Group();
TimeSensor* TimeSensor49 = new TimeSensor();
TimeSensor49->setDEF("TIMER");
TimeSensor49->setLoop(True);
IS* IS50 = new IS();
Connect* connect51 = new Connect();
connect51->setNodeField("cycleInterval");
connect51->setProtoField("cycleInterval");
IS50->addConnect(connect51);

Connect* connect52 = new Connect();
connect52->setNodeField("enabled");
connect52->setProtoField("enabled");
IS50->addConnect(connect52);

Connect* connect53 = new Connect();
connect53->setNodeField("loop");
connect53->setProtoField("loop");
IS50->addConnect(connect53);

Connect* connect54 = new Connect();
connect54->setNodeField("startTime");
connect54->setProtoField("startTime");
IS50->addConnect(connect54);

Connect* connect55 = new Connect();
connect55->setNodeField("stopTime");
connect55->setProtoField("stopTime");
IS50->addConnect(connect55);

Connect* connect56 = new Connect();
connect56->setNodeField("fraction_changed");
connect56->setProtoField("fraction_changed");
IS50->addConnect(connect56);

Connect* connect57 = new Connect();
connect57->setNodeField("isActive");
connect57->setProtoField("isActive");
IS50->addConnect(connect57);

TimeSensor49->setIS(IS50);

Group48->addChild(TimeSensor49);

PositionInterpolator* PositionInterpolator58 = new PositionInterpolator();
PositionInterpolator58->setDEF("HUMANOIDROOT_POSITION_ANIMATOR");
PositionInterpolator58->setKey(new float[21]{0,0.04,0.08,0.12,0.16,0.2,0.24,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.8,0.84,0.88,0.92,0.96,1}, 21);
PositionInterpolator58->setKeyValue(new float[63]{0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.3269,-0.1499,-0.0008616,-0.13,-0.06358,-0.0005128,-0.03123,-0.05488,0.0004779,0.053,0.02732,0.0001728,0.4148,0.006873,0,0.03045,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0});
IS* IS59 = new IS();
Connect* connect60 = new Connect();
connect60->setNodeField("value_changed");
connect60->setProtoField("HumanoidRoot_translation_changed");
IS59->addConnect(connect60);

PositionInterpolator58->setIS(IS59);

Group48->addChild(PositionInterpolator58);

OrientationInterpolator* OrientationInterpolator61 = new OrientationInterpolator();
OrientationInterpolator61->setDEF("HUMANOIDROOT_ANIMATOR");
OrientationInterpolator61->setKey(new float[7]{0,0.28,0.32,0.48,0.64,0.76,1}, 7);
OrientationInterpolator61->setKeyValue(new float[28]{0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
IS* IS62 = new IS();
Connect* connect63 = new Connect();
connect63->setNodeField("value_changed");
connect63->setProtoField("HumanoidRoot_rotation_changed");
IS62->addConnect(connect63);

OrientationInterpolator61->setIS(IS62);

Group48->addChild(OrientationInterpolator61);

OrientationInterpolator* OrientationInterpolator64 = new OrientationInterpolator();
OrientationInterpolator64->setDEF("SACROILIAC_ANIMATOR");
OrientationInterpolator64->setKey(new float[6]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator64->setKeyValue(new float[24]{0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0});
IS* IS65 = new IS();
Connect* connect66 = new Connect();
connect66->setNodeField("value_changed");
connect66->setProtoField("lower_body_rotation_changed");
IS65->addConnect(connect66);

OrientationInterpolator64->setIS(IS65);

Group48->addChild(OrientationInterpolator64);

OrientationInterpolator* OrientationInterpolator67 = new OrientationInterpolator();
OrientationInterpolator67->setDEF("L_HIP_ANIMATOR");
OrientationInterpolator67->setKey(new float[11]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1}, 11);
OrientationInterpolator67->setKeyValue(new float[44]{0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0});
IS* IS68 = new IS();
Connect* connect69 = new Connect();
connect69->setNodeField("value_changed");
connect69->setProtoField("l_hip_rotation_changed");
IS68->addConnect(connect69);

OrientationInterpolator67->setIS(IS68);

Group48->addChild(OrientationInterpolator67);

OrientationInterpolator* OrientationInterpolator70 = new OrientationInterpolator();
OrientationInterpolator70->setDEF("L_KNEE_ANIMATOR");
OrientationInterpolator70->setKey(new float[8]{0,0.28,0.32,0.48,0.64,0.76,0.88,1}, 8);
OrientationInterpolator70->setKeyValue(new float[32]{0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0});
IS* IS71 = new IS();
Connect* connect72 = new Connect();
connect72->setNodeField("value_changed");
connect72->setProtoField("l_knee_rotation_changed");
IS71->addConnect(connect72);

OrientationInterpolator70->setIS(IS71);

Group48->addChild(OrientationInterpolator70);

OrientationInterpolator* OrientationInterpolator73 = new OrientationInterpolator();
OrientationInterpolator73->setDEF("L_ANKLE_ANIMATOR");
OrientationInterpolator73->setKey(new float[14]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1}, 14);
OrientationInterpolator73->setKeyValue(new float[56]{0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0});
IS* IS74 = new IS();
Connect* connect75 = new Connect();
connect75->setNodeField("value_changed");
connect75->setProtoField("l_ankle_rotation_changed");
IS74->addConnect(connect75);

OrientationInterpolator73->setIS(IS74);

Group48->addChild(OrientationInterpolator73);

OrientationInterpolator* OrientationInterpolator76 = new OrientationInterpolator();
OrientationInterpolator76->setDEF("L_MIDTARSAL_ANIMATOR");
OrientationInterpolator76->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator76->setKeyValue(new float[12]{1,0,0,0,1,0,0,-0.2,1,0,0,0});
IS* IS77 = new IS();
Connect* connect78 = new Connect();
connect78->setNodeField("value_changed");
connect78->setProtoField("l_midtarsal_rotation_changed");
IS77->addConnect(connect78);

OrientationInterpolator76->setIS(IS77);

Group48->addChild(OrientationInterpolator76);

OrientationInterpolator* OrientationInterpolator79 = new OrientationInterpolator();
OrientationInterpolator79->setDEF("R_HIP_ANIMATOR");
OrientationInterpolator79->setKey(new float[11]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1}, 11);
OrientationInterpolator79->setKeyValue(new float[44]{0,0,1,0,1,0,0,4.433,1,0,0,4.433,1,0,0,4.647,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0});
IS* IS80 = new IS();
Connect* connect81 = new Connect();
connect81->setNodeField("value_changed");
connect81->setProtoField("r_hip_rotation_changed");
IS80->addConnect(connect81);

OrientationInterpolator79->setIS(IS80);

Group48->addChild(OrientationInterpolator79);

OrientationInterpolator* OrientationInterpolator82 = new OrientationInterpolator();
OrientationInterpolator82->setDEF("R_KNEE_ANIMATOR");
OrientationInterpolator82->setKey(new float[8]{0,0.28,0.32,0.48,0.64,0.76,0.88,1}, 8);
OrientationInterpolator82->setKeyValue(new float[32]{0,0,1,0,1,0,0,2.005,1,0,0,2.005,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0});
IS* IS83 = new IS();
Connect* connect84 = new Connect();
connect84->setNodeField("value_changed");
connect84->setProtoField("r_knee_rotation_changed");
IS83->addConnect(connect84);

OrientationInterpolator82->setIS(IS83);

Group48->addChild(OrientationInterpolator82);

OrientationInterpolator* OrientationInterpolator85 = new OrientationInterpolator();
OrientationInterpolator85->setDEF("R_ANKLE_ANIMATOR");
OrientationInterpolator85->setKey(new float[14]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1}, 14);
OrientationInterpolator85->setKeyValue(new float[56]{0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,0.3001,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0});
IS* IS86 = new IS();
Connect* connect87 = new Connect();
connect87->setNodeField("value_changed");
connect87->setProtoField("r_ankle_rotation_changed");
IS86->addConnect(connect87);

OrientationInterpolator85->setIS(IS86);

Group48->addChild(OrientationInterpolator85);

OrientationInterpolator* OrientationInterpolator88 = new OrientationInterpolator();
OrientationInterpolator88->setDEF("R_MIDTARSAL_ANIMATOR");
OrientationInterpolator88->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator88->setKeyValue(new float[12]{1,0,0,-0.2,1,0,0,0,1,0,0,-0.2});
IS* IS89 = new IS();
Connect* connect90 = new Connect();
connect90->setNodeField("value_changed");
connect90->setProtoField("r_midtarsal_rotation_changed");
IS89->addConnect(connect90);

OrientationInterpolator88->setIS(IS89);

Group48->addChild(OrientationInterpolator88);

OrientationInterpolator* OrientationInterpolator91 = new OrientationInterpolator();
OrientationInterpolator91->setDEF("VL5_ANIMATOR");
OrientationInterpolator91->setKey(new float[6]{0,0.2083,0.375,0.75,0.8333,1}, 6);
OrientationInterpolator91->setKeyValue(new float[24]{0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826});
IS* IS92 = new IS();
Connect* connect93 = new Connect();
connect93->setNodeField("value_changed");
connect93->setProtoField("vl5_rotation_changed");
IS92->addConnect(connect93);

OrientationInterpolator91->setIS(IS92);

Group48->addChild(OrientationInterpolator91);

OrientationInterpolator* OrientationInterpolator94 = new OrientationInterpolator();
OrientationInterpolator94->setDEF("SKULLBASE_ANIMATOR");
OrientationInterpolator94->setKey(new float[6]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator94->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0});
IS* IS95 = new IS();
Connect* connect96 = new Connect();
connect96->setNodeField("value_changed");
connect96->setProtoField("skullbase_rotation_changed");
IS95->addConnect(connect96);

OrientationInterpolator94->setIS(IS95);

Group48->addChild(OrientationInterpolator94);

OrientationInterpolator* OrientationInterpolator97 = new OrientationInterpolator();
OrientationInterpolator97->setDEF("L_SHOULDER_ANIMATOR");
OrientationInterpolator97->setKey(new float[7]{0,0.28,0.32,0.64,0.76,0.88,1}, 7);
OrientationInterpolator97->setKeyValue(new float[28]{0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0});
IS* IS98 = new IS();
Connect* connect99 = new Connect();
connect99->setNodeField("value_changed");
connect99->setProtoField("l_shoulder_rotation_changed");
IS98->addConnect(connect99);

OrientationInterpolator97->setIS(IS98);

Group48->addChild(OrientationInterpolator97);

OrientationInterpolator* OrientationInterpolator100 = new OrientationInterpolator();
OrientationInterpolator100->setDEF("L_ELBOW_ANIMATOR");
OrientationInterpolator100->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator100->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0});
IS* IS101 = new IS();
Connect* connect102 = new Connect();
connect102->setNodeField("value_changed");
connect102->setProtoField("l_elbow_rotation_changed");
IS101->addConnect(connect102);

OrientationInterpolator100->setIS(IS101);

Group48->addChild(OrientationInterpolator100);

OrientationInterpolator* OrientationInterpolator103 = new OrientationInterpolator();
OrientationInterpolator103->setDEF("L_WRIST_ANIMATOR");
OrientationInterpolator103->setKey(new float[7]{0,0.28,0.32,0.64,0.76,0.88,1}, 7);
OrientationInterpolator103->setKeyValue(new float[28]{0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0});
IS* IS104 = new IS();
Connect* connect105 = new Connect();
connect105->setNodeField("value_changed");
connect105->setProtoField("l_wrist_rotation_changed");
IS104->addConnect(connect105);

OrientationInterpolator103->setIS(IS104);

Group48->addChild(OrientationInterpolator103);

OrientationInterpolator* OrientationInterpolator106 = new OrientationInterpolator();
OrientationInterpolator106->setDEF("R_SHOULDER_ANIMATOR");
OrientationInterpolator106->setKey(new float[7]{0,0.28,0.32,0.64,0.76,0.88,1}, 7);
OrientationInterpolator106->setKeyValue(new float[28]{0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0});
IS* IS107 = new IS();
Connect* connect108 = new Connect();
connect108->setNodeField("value_changed");
connect108->setProtoField("r_shoulder_rotation_changed");
IS107->addConnect(connect108);

OrientationInterpolator106->setIS(IS107);

Group48->addChild(OrientationInterpolator106);

OrientationInterpolator* OrientationInterpolator109 = new OrientationInterpolator();
OrientationInterpolator109->setDEF("R_ELBOW_ANIMATOR");
OrientationInterpolator109->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator109->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0});
IS* IS110 = new IS();
Connect* connect111 = new Connect();
connect111->setNodeField("value_changed");
connect111->setProtoField("r_elbow_rotation_changed");
IS110->addConnect(connect111);

OrientationInterpolator109->setIS(IS110);

Group48->addChild(OrientationInterpolator109);

OrientationInterpolator* OrientationInterpolator112 = new OrientationInterpolator();
OrientationInterpolator112->setDEF("R_WRIST_ANIMATOR");
OrientationInterpolator112->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator112->setKeyValue(new float[24]{0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0});
IS* IS113 = new IS();
Connect* connect114 = new Connect();
connect114->setNodeField("value_changed");
connect114->setProtoField("r_wrist_rotation_changed");
IS113->addConnect(connect114);

OrientationInterpolator112->setIS(IS113);

Group48->addChild(OrientationInterpolator112);

ProtoBody47->addChild(Group48);

ROUTE* ROUTE115 = new ROUTE();
ROUTE115->setFromField("fraction_changed");
ROUTE115->setFromNode("TIMER");
ROUTE115->setToField("set_fraction");
ROUTE115->setToNode("HUMANOIDROOT_POSITION_ANIMATOR");
ProtoBody47->addChild(ROUTE115);

ROUTE* ROUTE116 = new ROUTE();
ROUTE116->setFromField("fraction_changed");
ROUTE116->setFromNode("TIMER");
ROUTE116->setToField("set_fraction");
ROUTE116->setToNode("HUMANOIDROOT_ANIMATOR");
ProtoBody47->addChild(ROUTE116);

ROUTE* ROUTE117 = new ROUTE();
ROUTE117->setFromField("fraction_changed");
ROUTE117->setFromNode("TIMER");
ROUTE117->setToField("set_fraction");
ROUTE117->setToNode("SACROILIAC_ANIMATOR");
ProtoBody47->addChild(ROUTE117);

ROUTE* ROUTE118 = new ROUTE();
ROUTE118->setFromField("fraction_changed");
ROUTE118->setFromNode("TIMER");
ROUTE118->setToField("set_fraction");
ROUTE118->setToNode("L_HIP_ANIMATOR");
ProtoBody47->addChild(ROUTE118);

ROUTE* ROUTE119 = new ROUTE();
ROUTE119->setFromField("fraction_changed");
ROUTE119->setFromNode("TIMER");
ROUTE119->setToField("set_fraction");
ROUTE119->setToNode("L_KNEE_ANIMATOR");
ProtoBody47->addChild(ROUTE119);

ROUTE* ROUTE120 = new ROUTE();
ROUTE120->setFromField("fraction_changed");
ROUTE120->setFromNode("TIMER");
ROUTE120->setToField("set_fraction");
ROUTE120->setToNode("L_ANKLE_ANIMATOR");
ProtoBody47->addChild(ROUTE120);

ROUTE* ROUTE121 = new ROUTE();
ROUTE121->setFromField("fraction_changed");
ROUTE121->setFromNode("TIMER");
ROUTE121->setToField("set_fraction");
ROUTE121->setToNode("L_MIDTARSAL_ANIMATOR");
ProtoBody47->addChild(ROUTE121);

ROUTE* ROUTE122 = new ROUTE();
ROUTE122->setFromField("fraction_changed");
ROUTE122->setFromNode("TIMER");
ROUTE122->setToField("set_fraction");
ROUTE122->setToNode("R_HIP_ANIMATOR");
ProtoBody47->addChild(ROUTE122);

ROUTE* ROUTE123 = new ROUTE();
ROUTE123->setFromField("fraction_changed");
ROUTE123->setFromNode("TIMER");
ROUTE123->setToField("set_fraction");
ROUTE123->setToNode("R_KNEE_ANIMATOR");
ProtoBody47->addChild(ROUTE123);

ROUTE* ROUTE124 = new ROUTE();
ROUTE124->setFromField("fraction_changed");
ROUTE124->setFromNode("TIMER");
ROUTE124->setToField("set_fraction");
ROUTE124->setToNode("R_ANKLE_ANIMATOR");
ProtoBody47->addChild(ROUTE124);

ROUTE* ROUTE125 = new ROUTE();
ROUTE125->setFromField("fraction_changed");
ROUTE125->setFromNode("TIMER");
ROUTE125->setToField("set_fraction");
ROUTE125->setToNode("R_MIDTARSAL_ANIMATOR");
ProtoBody47->addChild(ROUTE125);

ROUTE* ROUTE126 = new ROUTE();
ROUTE126->setFromField("fraction_changed");
ROUTE126->setFromNode("TIMER");
ROUTE126->setToField("set_fraction");
ROUTE126->setToNode("VL5_ANIMATOR");
ProtoBody47->addChild(ROUTE126);

ROUTE* ROUTE127 = new ROUTE();
ROUTE127->setFromField("fraction_changed");
ROUTE127->setFromNode("TIMER");
ROUTE127->setToField("set_fraction");
ROUTE127->setToNode("SKULLBASE_ANIMATOR");
ProtoBody47->addChild(ROUTE127);

ROUTE* ROUTE128 = new ROUTE();
ROUTE128->setFromField("fraction_changed");
ROUTE128->setFromNode("TIMER");
ROUTE128->setToField("set_fraction");
ROUTE128->setToNode("L_SHOULDER_ANIMATOR");
ProtoBody47->addChild(ROUTE128);

ROUTE* ROUTE129 = new ROUTE();
ROUTE129->setFromField("fraction_changed");
ROUTE129->setFromNode("TIMER");
ROUTE129->setToField("set_fraction");
ROUTE129->setToNode("L_ELBOW_ANIMATOR");
ProtoBody47->addChild(ROUTE129);

ROUTE* ROUTE130 = new ROUTE();
ROUTE130->setFromField("fraction_changed");
ROUTE130->setFromNode("TIMER");
ROUTE130->setToField("set_fraction");
ROUTE130->setToNode("L_WRIST_ANIMATOR");
ProtoBody47->addChild(ROUTE130);

ROUTE* ROUTE131 = new ROUTE();
ROUTE131->setFromField("fraction_changed");
ROUTE131->setFromNode("TIMER");
ROUTE131->setToField("set_fraction");
ROUTE131->setToNode("R_SHOULDER_ANIMATOR");
ProtoBody47->addChild(ROUTE131);

ROUTE* ROUTE132 = new ROUTE();
ROUTE132->setFromField("fraction_changed");
ROUTE132->setFromNode("TIMER");
ROUTE132->setToField("set_fraction");
ROUTE132->setToNode("R_ELBOW_ANIMATOR");
ProtoBody47->addChild(ROUTE132);

ROUTE* ROUTE133 = new ROUTE();
ROUTE133->setFromField("fraction_changed");
ROUTE133->setFromNode("TIMER");
ROUTE133->setToField("set_fraction");
ROUTE133->setToNode("R_WRIST_ANIMATOR");
ProtoBody47->addChild(ROUTE133);

ProtoDeclare19->setProtoBody(ProtoBody47);

Scene17->addChild(ProtoDeclare19);

Anchor* Anchor134 = new Anchor();
Anchor134->setDescription("see InterchangableActorsViaDynamicRouting scene");
Anchor134->setParameter(new String[1]{"target=_blank"}, 1);
Anchor134->setUrl(new String[4]{"InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"}, 4);
Shape* Shape135 = new Shape();
Text* Text136 = new Text();
Text136->setString(new String[6]{"LOA1_JumpAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."}, 6);
FontStyle* FontStyle137 = new FontStyle();
FontStyle137->setJustify(new String[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle137->setSize(0.8);
Text136->setFontStyle(FontStyle137);

Shape135->setGeometry(Text136);

Appearance* Appearance138 = new Appearance();
Material* Material139 = new Material();
Material139->setDiffuseColor(new float[3]{1,1,0.2});
Appearance138->setMaterial(Material139);

Shape135->setAppearance(Appearance138);

Anchor134->addChild(Shape135);

Scene17->addChild(Anchor134);

X3D0->setScene(Scene17);

X3D0->toXMLString();
}
