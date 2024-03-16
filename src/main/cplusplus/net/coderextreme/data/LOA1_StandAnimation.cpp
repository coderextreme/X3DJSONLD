#ifdef WIN32
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#endif
#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile(CString("Immersive"));
X3D0->setVersion(CString("3.3"));
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName(CString("title"));
meta2->setContent(CString("LOA1_StandAnimation.x3d"));
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName(CString("description"));
meta3->setContent(CString("Humanoid animation prototype reusable by any Humanoid."));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("creator"));
meta4->setContent(CString("Cindy Ballreich cindy@ballreich.net 3Name3D, Joe Williams, Don Brutzman"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("rights"));
meta5->setContent(CString("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("translator"));
meta6->setContent(CString("Ozan APAYDIN"));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("created"));
meta7->setContent(CString("1 December 2001"));
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName(CString("modified"));
meta8->setContent(CString("23 May 2020"));
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName(CString("TODO"));
meta9->setContent(CString("consider adding eyeball animation"));
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName(CString("reference"));
meta10->setContent(CString("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"));
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName(CString("reference"));
meta11->setContent(CString("http://www.HAnim.org"));
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName(CString("reference"));
meta12->setContent(CString("http://HAnim.org/Models"));
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName(CString("reference"));
meta13->setContent(CString("http://HAnim.org/Nodes"));
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName(CString("subject"));
meta14->setContent(CString("Nancy Stand Animation HAnim 2001"));
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName(CString("identifier"));
meta15->setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StandAnimation.x3d"));
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName(CString("generator"));
meta16->setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1->addMeta(meta16);

meta* meta17 = new meta();
meta17->setName(CString("license"));
meta17->setContent(CString("../license.html"));
head1->addMeta(meta17);

X3D0->setHead(head1);

Scene* Scene18 = new Scene();
WorldInfo* WorldInfo19 = new WorldInfo();
WorldInfo19->setTitle(CString("LOA1_StandAnimation.x3d"));
Scene18->addChild(WorldInfo19);

ProtoDeclare* ProtoDeclare20 = new ProtoDeclare();
ProtoDeclare20->setName(CString("LOA1_StandAnimation"));
ProtoInterface* ProtoInterface21 = new ProtoInterface();
field* field22 = new field();
field22->setName(CString("cycleInterval"));
field22->setAccessType(CString("inputOutput"));
field22->setType(CString("SFTime"));
field22->setValue(CString("0.009999999776482582"));
ProtoInterface21->addChild(field22);

field* field23 = new field();
field23->setName(CString("enabled"));
field23->setAccessType(CString("inputOutput"));
field23->setType(CString("SFBool"));
field23->setValue(CString("true"));
ProtoInterface21->addChild(field23);

field* field24 = new field();
field24->setName(CString("loop"));
field24->setAccessType(CString("inputOutput"));
field24->setType(CString("SFBool"));
field24->setValue(CString("true"));
ProtoInterface21->addChild(field24);

field* field25 = new field();
field25->setName(CString("startTime"));
field25->setAccessType(CString("inputOutput"));
field25->setType(CString("SFTime"));
field25->setValue(CString("0"));
ProtoInterface21->addChild(field25);

field* field26 = new field();
field26->setName(CString("stopTime"));
field26->setAccessType(CString("inputOutput"));
field26->setType(CString("SFTime"));
field26->setValue(CString("-1"));
ProtoInterface21->addChild(field26);

field* field27 = new field();
field27->setName(CString("fraction_changed"));
field27->setAccessType(CString("outputOnly"));
field27->setType(CString("SFFloat"));
ProtoInterface21->addChild(field27);

field* field28 = new field();
field28->setName(CString("isActive"));
field28->setAccessType(CString("outputOnly"));
field28->setType(CString("SFBool"));
ProtoInterface21->addChild(field28);

field* field29 = new field();
field29->setName(CString("HumanoidRoot_translation_changed"));
field29->setAccessType(CString("outputOnly"));
field29->setType(CString("SFVec3f"));
ProtoInterface21->addChild(field29);

field* field30 = new field();
field30->setName(CString("HumanoidRoot_rotation_changed"));
field30->setAccessType(CString("outputOnly"));
field30->setType(CString("SFRotation"));
ProtoInterface21->addChild(field30);

field* field31 = new field();
field31->setName(CString("lower_body_rotation_changed"));
field31->setAccessType(CString("outputOnly"));
field31->setType(CString("SFRotation"));
ProtoInterface21->addChild(field31);

field* field32 = new field();
field32->setName(CString("l_hip_rotation_changed"));
field32->setAccessType(CString("outputOnly"));
field32->setType(CString("SFRotation"));
ProtoInterface21->addChild(field32);

field* field33 = new field();
field33->setName(CString("l_knee_rotation_changed"));
field33->setAccessType(CString("outputOnly"));
field33->setType(CString("SFRotation"));
ProtoInterface21->addChild(field33);

field* field34 = new field();
field34->setName(CString("l_ankle_rotation_changed"));
field34->setAccessType(CString("outputOnly"));
field34->setType(CString("SFRotation"));
ProtoInterface21->addChild(field34);

field* field35 = new field();
field35->setName(CString("l_midtarsal_rotation_changed"));
field35->setAccessType(CString("outputOnly"));
field35->setType(CString("SFRotation"));
ProtoInterface21->addChild(field35);

field* field36 = new field();
field36->setName(CString("r_hip_rotation_changed"));
field36->setAccessType(CString("outputOnly"));
field36->setType(CString("SFRotation"));
ProtoInterface21->addChild(field36);

field* field37 = new field();
field37->setName(CString("r_knee_rotation_changed"));
field37->setAccessType(CString("outputOnly"));
field37->setType(CString("SFRotation"));
ProtoInterface21->addChild(field37);

field* field38 = new field();
field38->setName(CString("r_ankle_rotation_changed"));
field38->setAccessType(CString("outputOnly"));
field38->setType(CString("SFRotation"));
ProtoInterface21->addChild(field38);

field* field39 = new field();
field39->setName(CString("r_midtarsal_rotation_changed"));
field39->setAccessType(CString("outputOnly"));
field39->setType(CString("SFRotation"));
ProtoInterface21->addChild(field39);

field* field40 = new field();
field40->setName(CString("vl5_rotation_changed"));
field40->setAccessType(CString("outputOnly"));
field40->setType(CString("SFRotation"));
ProtoInterface21->addChild(field40);

field* field41 = new field();
field41->setName(CString("skullbase_rotation_changed"));
field41->setAccessType(CString("outputOnly"));
field41->setType(CString("SFRotation"));
ProtoInterface21->addChild(field41);

field* field42 = new field();
field42->setName(CString("l_shoulder_rotation_changed"));
field42->setAccessType(CString("outputOnly"));
field42->setType(CString("SFRotation"));
ProtoInterface21->addChild(field42);

field* field43 = new field();
field43->setName(CString("l_elbow_rotation_changed"));
field43->setAccessType(CString("outputOnly"));
field43->setType(CString("SFRotation"));
ProtoInterface21->addChild(field43);

field* field44 = new field();
field44->setName(CString("l_wrist_rotation_changed"));
field44->setAccessType(CString("outputOnly"));
field44->setType(CString("SFRotation"));
ProtoInterface21->addChild(field44);

field* field45 = new field();
field45->setName(CString("r_shoulder_rotation_changed"));
field45->setAccessType(CString("outputOnly"));
field45->setType(CString("SFRotation"));
ProtoInterface21->addChild(field45);

field* field46 = new field();
field46->setName(CString("r_elbow_rotation_changed"));
field46->setAccessType(CString("outputOnly"));
field46->setType(CString("SFRotation"));
ProtoInterface21->addChild(field46);

field* field47 = new field();
field47->setName(CString("r_wrist_rotation_changed"));
field47->setAccessType(CString("outputOnly"));
field47->setType(CString("SFRotation"));
ProtoInterface21->addChild(field47);

ProtoDeclare20->addChild(ProtoInterface21);

ProtoBody* ProtoBody48 = new ProtoBody();
Group* Group49 = new Group();
TimeSensor* TimeSensor50 = new TimeSensor();
TimeSensor50->setDEF(CString("TIMER"));
IS* IS51 = new IS();
Connect* connect52 = new Connect();
connect52->setNodeField(CString("cycleInterval"));
connect52->setProtoField(CString("cycleInterval"));
IS51->addChild(connect52);

Connect* connect53 = new Connect();
connect53->setNodeField(CString("enabled"));
connect53->setProtoField(CString("enabled"));
IS51->addChild(connect53);

Connect* connect54 = new Connect();
connect54->setNodeField(CString("loop"));
connect54->setProtoField(CString("loop"));
IS51->addChild(connect54);

Connect* connect55 = new Connect();
connect55->setNodeField(CString("startTime"));
connect55->setProtoField(CString("startTime"));
IS51->addChild(connect55);

Connect* connect56 = new Connect();
connect56->setNodeField(CString("stopTime"));
connect56->setProtoField(CString("stopTime"));
IS51->addChild(connect56);

Connect* connect57 = new Connect();
connect57->setNodeField(CString("fraction_changed"));
connect57->setProtoField(CString("fraction_changed"));
IS51->addChild(connect57);

Connect* connect58 = new Connect();
connect58->setNodeField(CString("isActive"));
connect58->setProtoField(CString("isActive"));
IS51->addChild(connect58);

TimeSensor50->addChild(IS51);

Group49->addChild(TimeSensor50);

PositionInterpolator* PositionInterpolator59 = new PositionInterpolator();
PositionInterpolator59->setDEF(CString("HUMANOIDROOT_POSITION_ANIMATOR"));
PositionInterpolator59->setKey(new float[2]{0,1}, 2);
PositionInterpolator59->setKeyValue(new float[6]{0,0,0,0,0,0}, 6);
IS* IS60 = new IS();
Connect* connect61 = new Connect();
connect61->setNodeField(CString("value_changed"));
connect61->setProtoField(CString("HumanoidRoot_translation_changed"));
IS60->addChild(connect61);

PositionInterpolator59->addChild(IS60);

Group49->addChild(PositionInterpolator59);

OrientationInterpolator* OrientationInterpolator62 = new OrientationInterpolator();
OrientationInterpolator62->setDEF(CString("HUMANOIDROOT_ANIMATOR"));
OrientationInterpolator62->setKey(new float[2]{0,1}, 2);
OrientationInterpolator62->setKeyValue(new float[8]{0,0,1,0,0,0,1,0}, 8);
IS* IS63 = new IS();
Connect* connect64 = new Connect();
connect64->setNodeField(CString("value_changed"));
connect64->setProtoField(CString("HumanoidRoot_rotation_changed"));
IS63->addChild(connect64);

OrientationInterpolator62->addChild(IS63);

Group49->addChild(OrientationInterpolator62);

OrientationInterpolator* OrientationInterpolator65 = new OrientationInterpolator();
OrientationInterpolator65->setDEF(CString("SACROILIAC_ANIMATOR"));
OrientationInterpolator65->setKey(new float[2]{0,1}, 2);
OrientationInterpolator65->setKeyValue(new float[8]{0,0,1,0,0,0,1,0}, 8);
IS* IS66 = new IS();
Connect* connect67 = new Connect();
connect67->setNodeField(CString("value_changed"));
connect67->setProtoField(CString("lower_body_rotation_changed"));
IS66->addChild(connect67);

OrientationInterpolator65->addChild(IS66);

Group49->addChild(OrientationInterpolator65);

OrientationInterpolator* OrientationInterpolator68 = new OrientationInterpolator();
OrientationInterpolator68->setDEF(CString("L_HIP_ANIMATOR"));
OrientationInterpolator68->setKey(new float[2]{0,1}, 2);
OrientationInterpolator68->setKeyValue(new float[8]{0,0,1,0,0,0,1,0}, 8);
IS* IS69 = new IS();
Connect* connect70 = new Connect();
connect70->setNodeField(CString("value_changed"));
connect70->setProtoField(CString("l_hip_rotation_changed"));
IS69->addChild(connect70);

OrientationInterpolator68->addChild(IS69);

Group49->addChild(OrientationInterpolator68);

OrientationInterpolator* OrientationInterpolator71 = new OrientationInterpolator();
OrientationInterpolator71->setDEF(CString("L_KNEE_ANIMATOR"));
OrientationInterpolator71->setKey(new float[2]{0,1}, 2);
OrientationInterpolator71->setKeyValue(new float[8]{0,0,1,0,0,0,1,0}, 8);
IS* IS72 = new IS();
Connect* connect73 = new Connect();
connect73->setNodeField(CString("value_changed"));
connect73->setProtoField(CString("l_knee_rotation_changed"));
IS72->addChild(connect73);

OrientationInterpolator71->addChild(IS72);

Group49->addChild(OrientationInterpolator71);

OrientationInterpolator* OrientationInterpolator74 = new OrientationInterpolator();
OrientationInterpolator74->setDEF(CString("L_ANKLE_ANIMATOR"));
OrientationInterpolator74->setKey(new float[2]{0,1}, 2);
OrientationInterpolator74->setKeyValue(new float[8]{0,0,1,0,0,0,1,0}, 8);
IS* IS75 = new IS();
Connect* connect76 = new Connect();
connect76->setNodeField(CString("value_changed"));
connect76->setProtoField(CString("l_ankle_rotation_changed"));
IS75->addChild(connect76);

OrientationInterpolator74->addChild(IS75);

Group49->addChild(OrientationInterpolator74);

OrientationInterpolator* OrientationInterpolator77 = new OrientationInterpolator();
OrientationInterpolator77->setDEF(CString("L_MIDTARSAL_ANIMATOR"));
OrientationInterpolator77->setKey(new float[2]{0,1}, 2);
OrientationInterpolator77->setKeyValue(new float[8]{1,0,0,0,1,0,0,0}, 8);
IS* IS78 = new IS();
Connect* connect79 = new Connect();
connect79->setNodeField(CString("value_changed"));
connect79->setProtoField(CString("l_midtarsal_rotation_changed"));
IS78->addChild(connect79);

OrientationInterpolator77->addChild(IS78);

Group49->addChild(OrientationInterpolator77);

OrientationInterpolator* OrientationInterpolator80 = new OrientationInterpolator();
OrientationInterpolator80->setDEF(CString("R_HIP_ANIMATOR"));
OrientationInterpolator80->setKey(new float[2]{0,1}, 2);
OrientationInterpolator80->setKeyValue(new float[8]{0,0,1,0,0,0,1,0}, 8);
IS* IS81 = new IS();
Connect* connect82 = new Connect();
connect82->setNodeField(CString("value_changed"));
connect82->setProtoField(CString("r_hip_rotation_changed"));
IS81->addChild(connect82);

OrientationInterpolator80->addChild(IS81);

Group49->addChild(OrientationInterpolator80);

OrientationInterpolator* OrientationInterpolator83 = new OrientationInterpolator();
OrientationInterpolator83->setDEF(CString("R_KNEE_ANIMATOR"));
OrientationInterpolator83->setKey(new float[2]{0,1}, 2);
OrientationInterpolator83->setKeyValue(new float[8]{0,0,1,0,0,0,1,0}, 8);
IS* IS84 = new IS();
Connect* connect85 = new Connect();
connect85->setNodeField(CString("value_changed"));
connect85->setProtoField(CString("r_knee_rotation_changed"));
IS84->addChild(connect85);

OrientationInterpolator83->addChild(IS84);

Group49->addChild(OrientationInterpolator83);

OrientationInterpolator* OrientationInterpolator86 = new OrientationInterpolator();
OrientationInterpolator86->setDEF(CString("R_ANKLE_ANIMATOR"));
OrientationInterpolator86->setKey(new float[2]{0,1}, 2);
OrientationInterpolator86->setKeyValue(new float[8]{0,0,1,0,0,0,1,0}, 8);
IS* IS87 = new IS();
Connect* connect88 = new Connect();
connect88->setNodeField(CString("value_changed"));
connect88->setProtoField(CString("r_ankle_rotation_changed"));
IS87->addChild(connect88);

OrientationInterpolator86->addChild(IS87);

Group49->addChild(OrientationInterpolator86);

OrientationInterpolator* OrientationInterpolator89 = new OrientationInterpolator();
OrientationInterpolator89->setDEF(CString("R_MIDTARSAL_ANIMATOR"));
OrientationInterpolator89->setKey(new float[2]{0,1}, 2);
OrientationInterpolator89->setKeyValue(new float[8]{1,0,0,0,1,0,0,0}, 8);
IS* IS90 = new IS();
Connect* connect91 = new Connect();
connect91->setNodeField(CString("value_changed"));
connect91->setProtoField(CString("r_midtarsal_rotation_changed"));
IS90->addChild(connect91);

OrientationInterpolator89->addChild(IS90);

Group49->addChild(OrientationInterpolator89);

OrientationInterpolator* OrientationInterpolator92 = new OrientationInterpolator();
OrientationInterpolator92->setDEF(CString("VL5_ANIMATOR"));
OrientationInterpolator92->setKey(new float[2]{0,1}, 2);
OrientationInterpolator92->setKeyValue(new float[8]{0,0,1,0,0,0,1,0}, 8);
IS* IS93 = new IS();
Connect* connect94 = new Connect();
connect94->setNodeField(CString("value_changed"));
connect94->setProtoField(CString("vl5_rotation_changed"));
IS93->addChild(connect94);

OrientationInterpolator92->addChild(IS93);

Group49->addChild(OrientationInterpolator92);

OrientationInterpolator* OrientationInterpolator95 = new OrientationInterpolator();
OrientationInterpolator95->setDEF(CString("SKULLBASE_ANIMATOR"));
OrientationInterpolator95->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator95->setKeyValue(new float[12]{0,0,1,0,-1,0,0,0.5,0,0,1,0}, 12);
IS* IS96 = new IS();
Connect* connect97 = new Connect();
connect97->setNodeField(CString("value_changed"));
connect97->setProtoField(CString("skullbase_rotation_changed"));
IS96->addChild(connect97);

OrientationInterpolator95->addChild(IS96);

Group49->addChild(OrientationInterpolator95);

OrientationInterpolator* OrientationInterpolator98 = new OrientationInterpolator();
OrientationInterpolator98->setDEF(CString("L_SHOULDER_ANIMATOR"));
OrientationInterpolator98->setKey(new float[2]{0,1}, 2);
OrientationInterpolator98->setKeyValue(new float[8]{0,0,1,0,0,0,1,0}, 8);
IS* IS99 = new IS();
Connect* connect100 = new Connect();
connect100->setNodeField(CString("value_changed"));
connect100->setProtoField(CString("l_shoulder_rotation_changed"));
IS99->addChild(connect100);

OrientationInterpolator98->addChild(IS99);

Group49->addChild(OrientationInterpolator98);

OrientationInterpolator* OrientationInterpolator101 = new OrientationInterpolator();
OrientationInterpolator101->setDEF(CString("L_ELBOW_ANIMATOR"));
OrientationInterpolator101->setKey(new float[2]{0,1}, 2);
OrientationInterpolator101->setKeyValue(new float[8]{0,0,1,0,0,0,1,0}, 8);
IS* IS102 = new IS();
Connect* connect103 = new Connect();
connect103->setNodeField(CString("value_changed"));
connect103->setProtoField(CString("l_elbow_rotation_changed"));
IS102->addChild(connect103);

OrientationInterpolator101->addChild(IS102);

Group49->addChild(OrientationInterpolator101);

OrientationInterpolator* OrientationInterpolator104 = new OrientationInterpolator();
OrientationInterpolator104->setDEF(CString("L_WRIST_ANIMATOR"));
OrientationInterpolator104->setKey(new float[2]{0,1}, 2);
OrientationInterpolator104->setKeyValue(new float[8]{0,0,1,0,0,0,1,0}, 8);
IS* IS105 = new IS();
Connect* connect106 = new Connect();
connect106->setNodeField(CString("value_changed"));
connect106->setProtoField(CString("l_wrist_rotation_changed"));
IS105->addChild(connect106);

OrientationInterpolator104->addChild(IS105);

Group49->addChild(OrientationInterpolator104);

OrientationInterpolator* OrientationInterpolator107 = new OrientationInterpolator();
OrientationInterpolator107->setDEF(CString("R_SHOULDER_ANIMATOR"));
OrientationInterpolator107->setKey(new float[2]{0,1}, 2);
OrientationInterpolator107->setKeyValue(new float[8]{0,0,1,0,0,0,1,0}, 8);
IS* IS108 = new IS();
Connect* connect109 = new Connect();
connect109->setNodeField(CString("value_changed"));
connect109->setProtoField(CString("r_shoulder_rotation_changed"));
IS108->addChild(connect109);

OrientationInterpolator107->addChild(IS108);

Group49->addChild(OrientationInterpolator107);

OrientationInterpolator* OrientationInterpolator110 = new OrientationInterpolator();
OrientationInterpolator110->setDEF(CString("R_ELBOW_ANIMATOR"));
OrientationInterpolator110->setKey(new float[2]{0,1}, 2);
OrientationInterpolator110->setKeyValue(new float[8]{0,0,1,0,0,0,1,0}, 8);
IS* IS111 = new IS();
Connect* connect112 = new Connect();
connect112->setNodeField(CString("value_changed"));
connect112->setProtoField(CString("r_elbow_rotation_changed"));
IS111->addChild(connect112);

OrientationInterpolator110->addChild(IS111);

Group49->addChild(OrientationInterpolator110);

OrientationInterpolator* OrientationInterpolator113 = new OrientationInterpolator();
OrientationInterpolator113->setDEF(CString("R_WRIST_ANIMATOR"));
OrientationInterpolator113->setKey(new float[2]{0,1}, 2);
OrientationInterpolator113->setKeyValue(new float[8]{0,0,1,0,0,0,1,0}, 8);
IS* IS114 = new IS();
Connect* connect115 = new Connect();
connect115->setNodeField(CString("value_changed"));
connect115->setProtoField(CString("r_wrist_rotation_changed"));
IS114->addChild(connect115);

OrientationInterpolator113->addChild(IS114);

Group49->addChild(OrientationInterpolator113);

ProtoBody48->addChild(Group49);

ROUTE* ROUTE116 = new ROUTE();
ROUTE116->setFromField(CString("fraction_changed"));
ROUTE116->setFromNode(CString("TIMER"));
ROUTE116->setToField(CString("set_fraction"));
ROUTE116->setToNode(CString("HUMANOIDROOT_POSITION_ANIMATOR"));
ProtoBody48->addChild(ROUTE116);

ROUTE* ROUTE117 = new ROUTE();
ROUTE117->setFromField(CString("fraction_changed"));
ROUTE117->setFromNode(CString("TIMER"));
ROUTE117->setToField(CString("set_fraction"));
ROUTE117->setToNode(CString("HUMANOIDROOT_ANIMATOR"));
ProtoBody48->addChild(ROUTE117);

ROUTE* ROUTE118 = new ROUTE();
ROUTE118->setFromField(CString("fraction_changed"));
ROUTE118->setFromNode(CString("TIMER"));
ROUTE118->setToField(CString("set_fraction"));
ROUTE118->setToNode(CString("SACROILIAC_ANIMATOR"));
ProtoBody48->addChild(ROUTE118);

ROUTE* ROUTE119 = new ROUTE();
ROUTE119->setFromField(CString("fraction_changed"));
ROUTE119->setFromNode(CString("TIMER"));
ROUTE119->setToField(CString("set_fraction"));
ROUTE119->setToNode(CString("L_HIP_ANIMATOR"));
ProtoBody48->addChild(ROUTE119);

ROUTE* ROUTE120 = new ROUTE();
ROUTE120->setFromField(CString("fraction_changed"));
ROUTE120->setFromNode(CString("TIMER"));
ROUTE120->setToField(CString("set_fraction"));
ROUTE120->setToNode(CString("L_KNEE_ANIMATOR"));
ProtoBody48->addChild(ROUTE120);

ROUTE* ROUTE121 = new ROUTE();
ROUTE121->setFromField(CString("fraction_changed"));
ROUTE121->setFromNode(CString("TIMER"));
ROUTE121->setToField(CString("set_fraction"));
ROUTE121->setToNode(CString("L_ANKLE_ANIMATOR"));
ProtoBody48->addChild(ROUTE121);

ROUTE* ROUTE122 = new ROUTE();
ROUTE122->setFromField(CString("fraction_changed"));
ROUTE122->setFromNode(CString("TIMER"));
ROUTE122->setToField(CString("set_fraction"));
ROUTE122->setToNode(CString("L_MIDTARSAL_ANIMATOR"));
ProtoBody48->addChild(ROUTE122);

ROUTE* ROUTE123 = new ROUTE();
ROUTE123->setFromField(CString("fraction_changed"));
ROUTE123->setFromNode(CString("TIMER"));
ROUTE123->setToField(CString("set_fraction"));
ROUTE123->setToNode(CString("R_HIP_ANIMATOR"));
ProtoBody48->addChild(ROUTE123);

ROUTE* ROUTE124 = new ROUTE();
ROUTE124->setFromField(CString("fraction_changed"));
ROUTE124->setFromNode(CString("TIMER"));
ROUTE124->setToField(CString("set_fraction"));
ROUTE124->setToNode(CString("R_KNEE_ANIMATOR"));
ProtoBody48->addChild(ROUTE124);

ROUTE* ROUTE125 = new ROUTE();
ROUTE125->setFromField(CString("fraction_changed"));
ROUTE125->setFromNode(CString("TIMER"));
ROUTE125->setToField(CString("set_fraction"));
ROUTE125->setToNode(CString("R_ANKLE_ANIMATOR"));
ProtoBody48->addChild(ROUTE125);

ROUTE* ROUTE126 = new ROUTE();
ROUTE126->setFromField(CString("fraction_changed"));
ROUTE126->setFromNode(CString("TIMER"));
ROUTE126->setToField(CString("set_fraction"));
ROUTE126->setToNode(CString("R_MIDTARSAL_ANIMATOR"));
ProtoBody48->addChild(ROUTE126);

ROUTE* ROUTE127 = new ROUTE();
ROUTE127->setFromField(CString("fraction_changed"));
ROUTE127->setFromNode(CString("TIMER"));
ROUTE127->setToField(CString("set_fraction"));
ROUTE127->setToNode(CString("VL5_ANIMATOR"));
ProtoBody48->addChild(ROUTE127);

ROUTE* ROUTE128 = new ROUTE();
ROUTE128->setFromField(CString("fraction_changed"));
ROUTE128->setFromNode(CString("TIMER"));
ROUTE128->setToField(CString("set_fraction"));
ROUTE128->setToNode(CString("SKULLBASE_ANIMATOR"));
ProtoBody48->addChild(ROUTE128);

ROUTE* ROUTE129 = new ROUTE();
ROUTE129->setFromField(CString("fraction_changed"));
ROUTE129->setFromNode(CString("TIMER"));
ROUTE129->setToField(CString("set_fraction"));
ROUTE129->setToNode(CString("L_SHOULDER_ANIMATOR"));
ProtoBody48->addChild(ROUTE129);

ROUTE* ROUTE130 = new ROUTE();
ROUTE130->setFromField(CString("fraction_changed"));
ROUTE130->setFromNode(CString("TIMER"));
ROUTE130->setToField(CString("set_fraction"));
ROUTE130->setToNode(CString("L_ELBOW_ANIMATOR"));
ProtoBody48->addChild(ROUTE130);

ROUTE* ROUTE131 = new ROUTE();
ROUTE131->setFromField(CString("fraction_changed"));
ROUTE131->setFromNode(CString("TIMER"));
ROUTE131->setToField(CString("set_fraction"));
ROUTE131->setToNode(CString("L_WRIST_ANIMATOR"));
ProtoBody48->addChild(ROUTE131);

ROUTE* ROUTE132 = new ROUTE();
ROUTE132->setFromField(CString("fraction_changed"));
ROUTE132->setFromNode(CString("TIMER"));
ROUTE132->setToField(CString("set_fraction"));
ROUTE132->setToNode(CString("R_SHOULDER_ANIMATOR"));
ProtoBody48->addChild(ROUTE132);

ROUTE* ROUTE133 = new ROUTE();
ROUTE133->setFromField(CString("fraction_changed"));
ROUTE133->setFromNode(CString("TIMER"));
ROUTE133->setToField(CString("set_fraction"));
ROUTE133->setToNode(CString("R_ELBOW_ANIMATOR"));
ProtoBody48->addChild(ROUTE133);

ROUTE* ROUTE134 = new ROUTE();
ROUTE134->setFromField(CString("fraction_changed"));
ROUTE134->setFromNode(CString("TIMER"));
ROUTE134->setToField(CString("set_fraction"));
ROUTE134->setToNode(CString("R_WRIST_ANIMATOR"));
ProtoBody48->addChild(ROUTE134);

ProtoDeclare20->addChild(ProtoBody48);

Scene18->addChild(ProtoDeclare20);

//======================================
//Point to example use in case someone inspects this file
Anchor* Anchor135 = new Anchor();
Anchor135->setDescription(CString("InterchangableActorsViaDynamicRouting"));
Anchor135->setParameter(new CString[1]{CString("target=_blank")}, 1);
Anchor135->setUrl(new CString[4]{CString("InterchangableActorsViaDynamicRouting.x3d"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d"), CString("InterchangableActorsViaDynamicRouting.wrl"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl")}, 4);
Shape* Shape136 = new Shape();
Text* Text137 = new Text();
Text137->setString(new CString[6]{CString("LOA1_StandAnimation.x3d"), CString("defines a prototype"), CString("for animating a humanoid."), CString(""), CString("Click this text to see"), CString("InterchangableActorsViaDynamicRouting example.")}, 6);
CFontStyle* FontStyle138 = new CFontStyle();
FontStyle138->setJustify(new CString[2]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle138->setSize(0.8);
Text137->setFontStyle(FontStyle138);

Shape136->setGeometry(Text137);

Appearance* Appearance139 = new Appearance();
Material* Material140 = new Material();
Material140->setDiffuseColor(new float[3]{1,1,0.2});
Appearance139->addChild(Material140);

Shape136->addChild(Appearance139);

Anchor135->addChild(Shape136);

Scene18->addChild(Anchor135);

X3D0->setScene(Scene18);

}
