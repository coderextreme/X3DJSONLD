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
meta2->setContent("LOA1_StandAnimation.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("description");
meta3->setContent("Humanoid animation prototype reusable by any Humanoid.");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("creator");
meta4->setContent("Cindy Ballreich cindy@ballreich.net 3Name3D, Joe Williams, Don Brutzman");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("rights");
meta5->setContent("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("translator");
meta6->setContent("Ozan APAYDIN");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("created");
meta7->setContent("1 December 2001");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("modified");
meta8->setContent("23 May 2020");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("TODO");
meta9->setContent("consider adding eyeball animation");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("reference");
meta10->setContent("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("reference");
meta11->setContent("http://www.HAnim.org");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("reference");
meta12->setContent("http://HAnim.org/Models");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("reference");
meta13->setContent("http://HAnim.org/Nodes");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("subject");
meta14->setContent("Nancy Stand Animation HAnim 2001");
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName("identifier");
meta15->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StandAnimation.x3d");
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName("generator");
meta16->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta16);

meta* meta17 = new meta();
meta17->setName("license");
meta17->setContent("../license.html");
head1->addMeta(meta17);

X3D0->setHead(head1);

Scene* Scene18 = new Scene();
WorldInfo* WorldInfo19 = new WorldInfo();
WorldInfo19->setTitle("LOA1_StandAnimation.x3d");
Scene18->addChild(WorldInfo19);

ProtoDeclare* ProtoDeclare20 = new ProtoDeclare();
ProtoDeclare20->setName("LOA1_StandAnimation");
ProtoInterface* ProtoInterface21 = new ProtoInterface();
field* field22 = new field();
field22->setName("cycleInterval");
field22->setAccessType("inputOutput");
field22->setType("SFTime");
field22->setValue("0.009999999776482582");
ProtoInterface21->addField(field22);

field* field23 = new field();
field23->setName("enabled");
field23->setAccessType("inputOutput");
field23->setType("SFBool");
field23->setValue("true");
ProtoInterface21->addField(field23);

field* field24 = new field();
field24->setName("loop");
field24->setAccessType("inputOutput");
field24->setType("SFBool");
field24->setValue("true");
ProtoInterface21->addField(field24);

field* field25 = new field();
field25->setName("startTime");
field25->setAccessType("inputOutput");
field25->setType("SFTime");
field25->setValue("0");
ProtoInterface21->addField(field25);

field* field26 = new field();
field26->setName("stopTime");
field26->setAccessType("inputOutput");
field26->setType("SFTime");
field26->setValue("-1");
ProtoInterface21->addField(field26);

field* field27 = new field();
field27->setName("fraction_changed");
field27->setAccessType("outputOnly");
field27->setType("SFFloat");
ProtoInterface21->addField(field27);

field* field28 = new field();
field28->setName("isActive");
field28->setAccessType("outputOnly");
field28->setType("SFBool");
ProtoInterface21->addField(field28);

field* field29 = new field();
field29->setName("HumanoidRoot_translation_changed");
field29->setAccessType("outputOnly");
field29->setType("SFVec3f");
ProtoInterface21->addField(field29);

field* field30 = new field();
field30->setName("HumanoidRoot_rotation_changed");
field30->setAccessType("outputOnly");
field30->setType("SFRotation");
ProtoInterface21->addField(field30);

field* field31 = new field();
field31->setName("lower_body_rotation_changed");
field31->setAccessType("outputOnly");
field31->setType("SFRotation");
ProtoInterface21->addField(field31);

field* field32 = new field();
field32->setName("l_hip_rotation_changed");
field32->setAccessType("outputOnly");
field32->setType("SFRotation");
ProtoInterface21->addField(field32);

field* field33 = new field();
field33->setName("l_knee_rotation_changed");
field33->setAccessType("outputOnly");
field33->setType("SFRotation");
ProtoInterface21->addField(field33);

field* field34 = new field();
field34->setName("l_ankle_rotation_changed");
field34->setAccessType("outputOnly");
field34->setType("SFRotation");
ProtoInterface21->addField(field34);

field* field35 = new field();
field35->setName("l_midtarsal_rotation_changed");
field35->setAccessType("outputOnly");
field35->setType("SFRotation");
ProtoInterface21->addField(field35);

field* field36 = new field();
field36->setName("r_hip_rotation_changed");
field36->setAccessType("outputOnly");
field36->setType("SFRotation");
ProtoInterface21->addField(field36);

field* field37 = new field();
field37->setName("r_knee_rotation_changed");
field37->setAccessType("outputOnly");
field37->setType("SFRotation");
ProtoInterface21->addField(field37);

field* field38 = new field();
field38->setName("r_ankle_rotation_changed");
field38->setAccessType("outputOnly");
field38->setType("SFRotation");
ProtoInterface21->addField(field38);

field* field39 = new field();
field39->setName("r_midtarsal_rotation_changed");
field39->setAccessType("outputOnly");
field39->setType("SFRotation");
ProtoInterface21->addField(field39);

field* field40 = new field();
field40->setName("vl5_rotation_changed");
field40->setAccessType("outputOnly");
field40->setType("SFRotation");
ProtoInterface21->addField(field40);

field* field41 = new field();
field41->setName("skullbase_rotation_changed");
field41->setAccessType("outputOnly");
field41->setType("SFRotation");
ProtoInterface21->addField(field41);

field* field42 = new field();
field42->setName("l_shoulder_rotation_changed");
field42->setAccessType("outputOnly");
field42->setType("SFRotation");
ProtoInterface21->addField(field42);

field* field43 = new field();
field43->setName("l_elbow_rotation_changed");
field43->setAccessType("outputOnly");
field43->setType("SFRotation");
ProtoInterface21->addField(field43);

field* field44 = new field();
field44->setName("l_wrist_rotation_changed");
field44->setAccessType("outputOnly");
field44->setType("SFRotation");
ProtoInterface21->addField(field44);

field* field45 = new field();
field45->setName("r_shoulder_rotation_changed");
field45->setAccessType("outputOnly");
field45->setType("SFRotation");
ProtoInterface21->addField(field45);

field* field46 = new field();
field46->setName("r_elbow_rotation_changed");
field46->setAccessType("outputOnly");
field46->setType("SFRotation");
ProtoInterface21->addField(field46);

field* field47 = new field();
field47->setName("r_wrist_rotation_changed");
field47->setAccessType("outputOnly");
field47->setType("SFRotation");
ProtoInterface21->addField(field47);

ProtoDeclare20->setProtoInterface(ProtoInterface21);

ProtoBody* ProtoBody48 = new ProtoBody();
Group* Group49 = new Group();
TimeSensor* TimeSensor50 = new TimeSensor();
TimeSensor50->setDEF("TIMER");
IS* IS51 = new IS();
Connect* connect52 = new Connect();
connect52->setNodeField("cycleInterval");
connect52->setProtoField("cycleInterval");
IS51->addConnect(connect52);

Connect* connect53 = new Connect();
connect53->setNodeField("enabled");
connect53->setProtoField("enabled");
IS51->addConnect(connect53);

Connect* connect54 = new Connect();
connect54->setNodeField("loop");
connect54->setProtoField("loop");
IS51->addConnect(connect54);

Connect* connect55 = new Connect();
connect55->setNodeField("startTime");
connect55->setProtoField("startTime");
IS51->addConnect(connect55);

Connect* connect56 = new Connect();
connect56->setNodeField("stopTime");
connect56->setProtoField("stopTime");
IS51->addConnect(connect56);

Connect* connect57 = new Connect();
connect57->setNodeField("fraction_changed");
connect57->setProtoField("fraction_changed");
IS51->addConnect(connect57);

Connect* connect58 = new Connect();
connect58->setNodeField("isActive");
connect58->setProtoField("isActive");
IS51->addConnect(connect58);

TimeSensor50->setIS(IS51);

Group49->addChild(TimeSensor50);

PositionInterpolator* PositionInterpolator59 = new PositionInterpolator();
PositionInterpolator59->setDEF("HUMANOIDROOT_POSITION_ANIMATOR");
PositionInterpolator59->setKey(new float[2]{0,1}, 2);
PositionInterpolator59->setKeyValue(new float[6]{0,0,0,0,0,0});
IS* IS60 = new IS();
Connect* connect61 = new Connect();
connect61->setNodeField("value_changed");
connect61->setProtoField("HumanoidRoot_translation_changed");
IS60->addConnect(connect61);

PositionInterpolator59->setIS(IS60);

Group49->addChild(PositionInterpolator59);

OrientationInterpolator* OrientationInterpolator62 = new OrientationInterpolator();
OrientationInterpolator62->setDEF("HUMANOIDROOT_ANIMATOR");
OrientationInterpolator62->setKey(new float[2]{0,1}, 2);
OrientationInterpolator62->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
IS* IS63 = new IS();
Connect* connect64 = new Connect();
connect64->setNodeField("value_changed");
connect64->setProtoField("HumanoidRoot_rotation_changed");
IS63->addConnect(connect64);

OrientationInterpolator62->setIS(IS63);

Group49->addChild(OrientationInterpolator62);

OrientationInterpolator* OrientationInterpolator65 = new OrientationInterpolator();
OrientationInterpolator65->setDEF("SACROILIAC_ANIMATOR");
OrientationInterpolator65->setKey(new float[2]{0,1}, 2);
OrientationInterpolator65->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
IS* IS66 = new IS();
Connect* connect67 = new Connect();
connect67->setNodeField("value_changed");
connect67->setProtoField("lower_body_rotation_changed");
IS66->addConnect(connect67);

OrientationInterpolator65->setIS(IS66);

Group49->addChild(OrientationInterpolator65);

OrientationInterpolator* OrientationInterpolator68 = new OrientationInterpolator();
OrientationInterpolator68->setDEF("L_HIP_ANIMATOR");
OrientationInterpolator68->setKey(new float[2]{0,1}, 2);
OrientationInterpolator68->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
IS* IS69 = new IS();
Connect* connect70 = new Connect();
connect70->setNodeField("value_changed");
connect70->setProtoField("l_hip_rotation_changed");
IS69->addConnect(connect70);

OrientationInterpolator68->setIS(IS69);

Group49->addChild(OrientationInterpolator68);

OrientationInterpolator* OrientationInterpolator71 = new OrientationInterpolator();
OrientationInterpolator71->setDEF("L_KNEE_ANIMATOR");
OrientationInterpolator71->setKey(new float[2]{0,1}, 2);
OrientationInterpolator71->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
IS* IS72 = new IS();
Connect* connect73 = new Connect();
connect73->setNodeField("value_changed");
connect73->setProtoField("l_knee_rotation_changed");
IS72->addConnect(connect73);

OrientationInterpolator71->setIS(IS72);

Group49->addChild(OrientationInterpolator71);

OrientationInterpolator* OrientationInterpolator74 = new OrientationInterpolator();
OrientationInterpolator74->setDEF("L_ANKLE_ANIMATOR");
OrientationInterpolator74->setKey(new float[2]{0,1}, 2);
OrientationInterpolator74->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
IS* IS75 = new IS();
Connect* connect76 = new Connect();
connect76->setNodeField("value_changed");
connect76->setProtoField("l_ankle_rotation_changed");
IS75->addConnect(connect76);

OrientationInterpolator74->setIS(IS75);

Group49->addChild(OrientationInterpolator74);

OrientationInterpolator* OrientationInterpolator77 = new OrientationInterpolator();
OrientationInterpolator77->setDEF("L_MIDTARSAL_ANIMATOR");
OrientationInterpolator77->setKey(new float[2]{0,1}, 2);
OrientationInterpolator77->setKeyValue(new float[8]{1,0,0,0,1,0,0,0});
IS* IS78 = new IS();
Connect* connect79 = new Connect();
connect79->setNodeField("value_changed");
connect79->setProtoField("l_midtarsal_rotation_changed");
IS78->addConnect(connect79);

OrientationInterpolator77->setIS(IS78);

Group49->addChild(OrientationInterpolator77);

OrientationInterpolator* OrientationInterpolator80 = new OrientationInterpolator();
OrientationInterpolator80->setDEF("R_HIP_ANIMATOR");
OrientationInterpolator80->setKey(new float[2]{0,1}, 2);
OrientationInterpolator80->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
IS* IS81 = new IS();
Connect* connect82 = new Connect();
connect82->setNodeField("value_changed");
connect82->setProtoField("r_hip_rotation_changed");
IS81->addConnect(connect82);

OrientationInterpolator80->setIS(IS81);

Group49->addChild(OrientationInterpolator80);

OrientationInterpolator* OrientationInterpolator83 = new OrientationInterpolator();
OrientationInterpolator83->setDEF("R_KNEE_ANIMATOR");
OrientationInterpolator83->setKey(new float[2]{0,1}, 2);
OrientationInterpolator83->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
IS* IS84 = new IS();
Connect* connect85 = new Connect();
connect85->setNodeField("value_changed");
connect85->setProtoField("r_knee_rotation_changed");
IS84->addConnect(connect85);

OrientationInterpolator83->setIS(IS84);

Group49->addChild(OrientationInterpolator83);

OrientationInterpolator* OrientationInterpolator86 = new OrientationInterpolator();
OrientationInterpolator86->setDEF("R_ANKLE_ANIMATOR");
OrientationInterpolator86->setKey(new float[2]{0,1}, 2);
OrientationInterpolator86->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
IS* IS87 = new IS();
Connect* connect88 = new Connect();
connect88->setNodeField("value_changed");
connect88->setProtoField("r_ankle_rotation_changed");
IS87->addConnect(connect88);

OrientationInterpolator86->setIS(IS87);

Group49->addChild(OrientationInterpolator86);

OrientationInterpolator* OrientationInterpolator89 = new OrientationInterpolator();
OrientationInterpolator89->setDEF("R_MIDTARSAL_ANIMATOR");
OrientationInterpolator89->setKey(new float[2]{0,1}, 2);
OrientationInterpolator89->setKeyValue(new float[8]{1,0,0,0,1,0,0,0});
IS* IS90 = new IS();
Connect* connect91 = new Connect();
connect91->setNodeField("value_changed");
connect91->setProtoField("r_midtarsal_rotation_changed");
IS90->addConnect(connect91);

OrientationInterpolator89->setIS(IS90);

Group49->addChild(OrientationInterpolator89);

OrientationInterpolator* OrientationInterpolator92 = new OrientationInterpolator();
OrientationInterpolator92->setDEF("VL5_ANIMATOR");
OrientationInterpolator92->setKey(new float[2]{0,1}, 2);
OrientationInterpolator92->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
IS* IS93 = new IS();
Connect* connect94 = new Connect();
connect94->setNodeField("value_changed");
connect94->setProtoField("vl5_rotation_changed");
IS93->addConnect(connect94);

OrientationInterpolator92->setIS(IS93);

Group49->addChild(OrientationInterpolator92);

OrientationInterpolator* OrientationInterpolator95 = new OrientationInterpolator();
OrientationInterpolator95->setDEF("SKULLBASE_ANIMATOR");
OrientationInterpolator95->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator95->setKeyValue(new float[12]{0,0,1,0,-1,0,0,0.5,0,0,1,0});
IS* IS96 = new IS();
Connect* connect97 = new Connect();
connect97->setNodeField("value_changed");
connect97->setProtoField("skullbase_rotation_changed");
IS96->addConnect(connect97);

OrientationInterpolator95->setIS(IS96);

Group49->addChild(OrientationInterpolator95);

OrientationInterpolator* OrientationInterpolator98 = new OrientationInterpolator();
OrientationInterpolator98->setDEF("L_SHOULDER_ANIMATOR");
OrientationInterpolator98->setKey(new float[2]{0,1}, 2);
OrientationInterpolator98->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
IS* IS99 = new IS();
Connect* connect100 = new Connect();
connect100->setNodeField("value_changed");
connect100->setProtoField("l_shoulder_rotation_changed");
IS99->addConnect(connect100);

OrientationInterpolator98->setIS(IS99);

Group49->addChild(OrientationInterpolator98);

OrientationInterpolator* OrientationInterpolator101 = new OrientationInterpolator();
OrientationInterpolator101->setDEF("L_ELBOW_ANIMATOR");
OrientationInterpolator101->setKey(new float[2]{0,1}, 2);
OrientationInterpolator101->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
IS* IS102 = new IS();
Connect* connect103 = new Connect();
connect103->setNodeField("value_changed");
connect103->setProtoField("l_elbow_rotation_changed");
IS102->addConnect(connect103);

OrientationInterpolator101->setIS(IS102);

Group49->addChild(OrientationInterpolator101);

OrientationInterpolator* OrientationInterpolator104 = new OrientationInterpolator();
OrientationInterpolator104->setDEF("L_WRIST_ANIMATOR");
OrientationInterpolator104->setKey(new float[2]{0,1}, 2);
OrientationInterpolator104->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
IS* IS105 = new IS();
Connect* connect106 = new Connect();
connect106->setNodeField("value_changed");
connect106->setProtoField("l_wrist_rotation_changed");
IS105->addConnect(connect106);

OrientationInterpolator104->setIS(IS105);

Group49->addChild(OrientationInterpolator104);

OrientationInterpolator* OrientationInterpolator107 = new OrientationInterpolator();
OrientationInterpolator107->setDEF("R_SHOULDER_ANIMATOR");
OrientationInterpolator107->setKey(new float[2]{0,1}, 2);
OrientationInterpolator107->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
IS* IS108 = new IS();
Connect* connect109 = new Connect();
connect109->setNodeField("value_changed");
connect109->setProtoField("r_shoulder_rotation_changed");
IS108->addConnect(connect109);

OrientationInterpolator107->setIS(IS108);

Group49->addChild(OrientationInterpolator107);

OrientationInterpolator* OrientationInterpolator110 = new OrientationInterpolator();
OrientationInterpolator110->setDEF("R_ELBOW_ANIMATOR");
OrientationInterpolator110->setKey(new float[2]{0,1}, 2);
OrientationInterpolator110->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
IS* IS111 = new IS();
Connect* connect112 = new Connect();
connect112->setNodeField("value_changed");
connect112->setProtoField("r_elbow_rotation_changed");
IS111->addConnect(connect112);

OrientationInterpolator110->setIS(IS111);

Group49->addChild(OrientationInterpolator110);

OrientationInterpolator* OrientationInterpolator113 = new OrientationInterpolator();
OrientationInterpolator113->setDEF("R_WRIST_ANIMATOR");
OrientationInterpolator113->setKey(new float[2]{0,1}, 2);
OrientationInterpolator113->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
IS* IS114 = new IS();
Connect* connect115 = new Connect();
connect115->setNodeField("value_changed");
connect115->setProtoField("r_wrist_rotation_changed");
IS114->addConnect(connect115);

OrientationInterpolator113->setIS(IS114);

Group49->addChild(OrientationInterpolator113);

ProtoBody48->addChild(Group49);

ROUTE* ROUTE116 = new ROUTE();
ROUTE116->setFromField("fraction_changed");
ROUTE116->setFromNode("TIMER");
ROUTE116->setToField("set_fraction");
ROUTE116->setToNode("HUMANOIDROOT_POSITION_ANIMATOR");
ProtoBody48->addChild(ROUTE116);

ROUTE* ROUTE117 = new ROUTE();
ROUTE117->setFromField("fraction_changed");
ROUTE117->setFromNode("TIMER");
ROUTE117->setToField("set_fraction");
ROUTE117->setToNode("HUMANOIDROOT_ANIMATOR");
ProtoBody48->addChild(ROUTE117);

ROUTE* ROUTE118 = new ROUTE();
ROUTE118->setFromField("fraction_changed");
ROUTE118->setFromNode("TIMER");
ROUTE118->setToField("set_fraction");
ROUTE118->setToNode("SACROILIAC_ANIMATOR");
ProtoBody48->addChild(ROUTE118);

ROUTE* ROUTE119 = new ROUTE();
ROUTE119->setFromField("fraction_changed");
ROUTE119->setFromNode("TIMER");
ROUTE119->setToField("set_fraction");
ROUTE119->setToNode("L_HIP_ANIMATOR");
ProtoBody48->addChild(ROUTE119);

ROUTE* ROUTE120 = new ROUTE();
ROUTE120->setFromField("fraction_changed");
ROUTE120->setFromNode("TIMER");
ROUTE120->setToField("set_fraction");
ROUTE120->setToNode("L_KNEE_ANIMATOR");
ProtoBody48->addChild(ROUTE120);

ROUTE* ROUTE121 = new ROUTE();
ROUTE121->setFromField("fraction_changed");
ROUTE121->setFromNode("TIMER");
ROUTE121->setToField("set_fraction");
ROUTE121->setToNode("L_ANKLE_ANIMATOR");
ProtoBody48->addChild(ROUTE121);

ROUTE* ROUTE122 = new ROUTE();
ROUTE122->setFromField("fraction_changed");
ROUTE122->setFromNode("TIMER");
ROUTE122->setToField("set_fraction");
ROUTE122->setToNode("L_MIDTARSAL_ANIMATOR");
ProtoBody48->addChild(ROUTE122);

ROUTE* ROUTE123 = new ROUTE();
ROUTE123->setFromField("fraction_changed");
ROUTE123->setFromNode("TIMER");
ROUTE123->setToField("set_fraction");
ROUTE123->setToNode("R_HIP_ANIMATOR");
ProtoBody48->addChild(ROUTE123);

ROUTE* ROUTE124 = new ROUTE();
ROUTE124->setFromField("fraction_changed");
ROUTE124->setFromNode("TIMER");
ROUTE124->setToField("set_fraction");
ROUTE124->setToNode("R_KNEE_ANIMATOR");
ProtoBody48->addChild(ROUTE124);

ROUTE* ROUTE125 = new ROUTE();
ROUTE125->setFromField("fraction_changed");
ROUTE125->setFromNode("TIMER");
ROUTE125->setToField("set_fraction");
ROUTE125->setToNode("R_ANKLE_ANIMATOR");
ProtoBody48->addChild(ROUTE125);

ROUTE* ROUTE126 = new ROUTE();
ROUTE126->setFromField("fraction_changed");
ROUTE126->setFromNode("TIMER");
ROUTE126->setToField("set_fraction");
ROUTE126->setToNode("R_MIDTARSAL_ANIMATOR");
ProtoBody48->addChild(ROUTE126);

ROUTE* ROUTE127 = new ROUTE();
ROUTE127->setFromField("fraction_changed");
ROUTE127->setFromNode("TIMER");
ROUTE127->setToField("set_fraction");
ROUTE127->setToNode("VL5_ANIMATOR");
ProtoBody48->addChild(ROUTE127);

ROUTE* ROUTE128 = new ROUTE();
ROUTE128->setFromField("fraction_changed");
ROUTE128->setFromNode("TIMER");
ROUTE128->setToField("set_fraction");
ROUTE128->setToNode("SKULLBASE_ANIMATOR");
ProtoBody48->addChild(ROUTE128);

ROUTE* ROUTE129 = new ROUTE();
ROUTE129->setFromField("fraction_changed");
ROUTE129->setFromNode("TIMER");
ROUTE129->setToField("set_fraction");
ROUTE129->setToNode("L_SHOULDER_ANIMATOR");
ProtoBody48->addChild(ROUTE129);

ROUTE* ROUTE130 = new ROUTE();
ROUTE130->setFromField("fraction_changed");
ROUTE130->setFromNode("TIMER");
ROUTE130->setToField("set_fraction");
ROUTE130->setToNode("L_ELBOW_ANIMATOR");
ProtoBody48->addChild(ROUTE130);

ROUTE* ROUTE131 = new ROUTE();
ROUTE131->setFromField("fraction_changed");
ROUTE131->setFromNode("TIMER");
ROUTE131->setToField("set_fraction");
ROUTE131->setToNode("L_WRIST_ANIMATOR");
ProtoBody48->addChild(ROUTE131);

ROUTE* ROUTE132 = new ROUTE();
ROUTE132->setFromField("fraction_changed");
ROUTE132->setFromNode("TIMER");
ROUTE132->setToField("set_fraction");
ROUTE132->setToNode("R_SHOULDER_ANIMATOR");
ProtoBody48->addChild(ROUTE132);

ROUTE* ROUTE133 = new ROUTE();
ROUTE133->setFromField("fraction_changed");
ROUTE133->setFromNode("TIMER");
ROUTE133->setToField("set_fraction");
ROUTE133->setToNode("R_ELBOW_ANIMATOR");
ProtoBody48->addChild(ROUTE133);

ROUTE* ROUTE134 = new ROUTE();
ROUTE134->setFromField("fraction_changed");
ROUTE134->setFromNode("TIMER");
ROUTE134->setToField("set_fraction");
ROUTE134->setToNode("R_WRIST_ANIMATOR");
ProtoBody48->addChild(ROUTE134);

ProtoDeclare20->setProtoBody(ProtoBody48);

Scene18->addChild(ProtoDeclare20);

//======================================
//Point to example use in case someone inspects this file
Anchor* Anchor135 = new Anchor();
Anchor135->setDescription("InterchangableActorsViaDynamicRouting");
Anchor135->setParameter(new String[1]{"target=_blank"}, 1);
Anchor135->setUrl(new String[4]{"InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"}, 4);
Shape* Shape136 = new Shape();
Text* Text137 = new Text();
Text137->setString(new String[6]{"LOA1_StandAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."}, 6);
FontStyle* FontStyle138 = new FontStyle();
FontStyle138->setJustify(new String[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle138->setSize(0.8);
Text137->setFontStyle(FontStyle138);

Shape136->setGeometry(Text137);

Appearance* Appearance139 = new Appearance();
Material* Material140 = new Material();
Material140->setDiffuseColor(new float[3]{1,1,0.2});
Appearance139->setMaterial(Material140);

Shape136->setAppearance(Appearance139);

Anchor135->addChild(Shape136);

Scene18->addChild(Anchor135);

X3D0->setScene(Scene18);

X3D0->toXMLString();
}
