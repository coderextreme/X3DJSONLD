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
meta2->setContent("LOA1_KneelAnimation.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("description");
meta3->setContent("Humanoid animation prototype reusable by any Humanoid.");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("creator");
meta4->setContent("Tom Miller");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("translator");
meta5->setContent("Curt Blais");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("translated");
meta6->setContent("1 December 2001");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("modified");
meta7->setContent("23 May 2020");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("reference");
meta8->setContent("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("reference");
meta9->setContent("http://www.HAnim.org/Models/HAnim2001/boxman/protos/LOA1_WalkAnimation.wrl");
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
meta13->setContent("Nancy kneel Animation HAnim 2001");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("identifier");
meta14->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d");
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
WorldInfo18->setTitle("LOA1_KneelAnimation.x3d");
Scene17->addChild(WorldInfo18);

ProtoDeclare* ProtoDeclare19 = new ProtoDeclare();
ProtoDeclare19->setName("LOA1_KneelAnimation");
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
field23->setValue("false");
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
PositionInterpolator58->setKey(new float[4]{0,0.3125,0.625,1}, 4);
PositionInterpolator58->setKeyValue(new float[12]{0,0,0,0,-0.049999,0,0,-0.195,0,0,-0.439997,0});
IS* IS59 = new IS();
Connect* connect60 = new Connect();
connect60->setNodeField("value_changed");
connect60->setProtoField("HumanoidRoot_translation_changed");
IS59->addConnect(connect60);

PositionInterpolator58->setIS(IS59);

Group48->addChild(PositionInterpolator58);

OrientationInterpolator* OrientationInterpolator61 = new OrientationInterpolator();
OrientationInterpolator61->setDEF("HUMANOIDROOT_ANIMATOR");
OrientationInterpolator61->setKey(new float[2]{0,1}, 2);
OrientationInterpolator61->setKeyValue(new float[8]{0,1,0,0,0,1,0,0});
IS* IS62 = new IS();
Connect* connect63 = new Connect();
connect63->setNodeField("value_changed");
connect63->setProtoField("HumanoidRoot_rotation_changed");
IS62->addConnect(connect63);

OrientationInterpolator61->setIS(IS62);

Group48->addChild(OrientationInterpolator61);

//no SACROILIAC_ANIMATOR
OrientationInterpolator* OrientationInterpolator64 = new OrientationInterpolator();
OrientationInterpolator64->setDEF("L_HIP_ANIMATOR");
OrientationInterpolator64->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator64->setKeyValue(new float[16]{1,0,0,0,-1,0,0,0.619393,-1,0,0,1.069302,-1,0,0,1.937315});
IS* IS65 = new IS();
Connect* connect66 = new Connect();
connect66->setNodeField("value_changed");
connect66->setProtoField("l_hip_rotation_changed");
IS65->addConnect(connect66);

OrientationInterpolator64->setIS(IS65);

Group48->addChild(OrientationInterpolator64);

OrientationInterpolator* OrientationInterpolator67 = new OrientationInterpolator();
OrientationInterpolator67->setDEF("L_KNEE_ANIMATOR");
OrientationInterpolator67->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator67->setKeyValue(new float[16]{1,0,0,0,1,0,0,0.615228,1,0,0,0.984524,1,0,0,2.076941});
IS* IS68 = new IS();
Connect* connect69 = new Connect();
connect69->setNodeField("value_changed");
connect69->setProtoField("l_knee_rotation_changed");
IS68->addConnect(connect69);

OrientationInterpolator67->setIS(IS68);

Group48->addChild(OrientationInterpolator67);

OrientationInterpolator* OrientationInterpolator70 = new OrientationInterpolator();
OrientationInterpolator70->setDEF("L_ANKLE_ANIMATOR");
OrientationInterpolator70->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator70->setKeyValue(new float[16]{1,0,0,0,-1,0,0,0.017453,-1,0,0,0.069812,1,0,0,0.261799});
IS* IS71 = new IS();
Connect* connect72 = new Connect();
connect72->setNodeField("value_changed");
connect72->setProtoField("l_ankle_rotation_changed");
IS71->addConnect(connect72);

OrientationInterpolator70->setIS(IS71);

Group48->addChild(OrientationInterpolator70);

//no L_MIDTARSAL_ANIMATOR
OrientationInterpolator* OrientationInterpolator73 = new OrientationInterpolator();
OrientationInterpolator73->setDEF("R_HIP_ANIMATOR");
OrientationInterpolator73->setKey(new float[3]{0,0.3125,1}, 3);
OrientationInterpolator73->setKeyValue(new float[12]{1,0,0,0,1,0,0,0.523598,-1,0,0,0.157079});
IS* IS74 = new IS();
Connect* connect75 = new Connect();
connect75->setNodeField("value_changed");
connect75->setProtoField("r_hip_rotation_changed");
IS74->addConnect(connect75);

OrientationInterpolator73->setIS(IS74);

Group48->addChild(OrientationInterpolator73);

OrientationInterpolator* OrientationInterpolator76 = new OrientationInterpolator();
OrientationInterpolator76->setDEF("R_KNEE_ANIMATOR");
OrientationInterpolator76->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator76->setKeyValue(new float[16]{1,0,0,0,1,0,0,0.349065,1,0,0,1.023397,0.999934,0.008043,0.008185,1.727938});
IS* IS77 = new IS();
Connect* connect78 = new Connect();
connect78->setNodeField("value_changed");
connect78->setProtoField("r_knee_rotation_changed");
IS77->addConnect(connect78);

OrientationInterpolator76->setIS(IS77);

Group48->addChild(OrientationInterpolator76);

OrientationInterpolator* OrientationInterpolator79 = new OrientationInterpolator();
OrientationInterpolator79->setDEF("R_ANKLE_ANIMATOR");
OrientationInterpolator79->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator79->setKeyValue(new float[16]{1,0,0,0,-0.991692,-0.072372,0.106338,0.205053,-0.981083,-0.103267,0.163741,0.272231,-1,0,0,0.349065});
IS* IS80 = new IS();
Connect* connect81 = new Connect();
connect81->setNodeField("value_changed");
connect81->setProtoField("r_ankle_rotation_changed");
IS80->addConnect(connect81);

OrientationInterpolator79->setIS(IS80);

Group48->addChild(OrientationInterpolator79);

//no R_MIDTARSAL_ANIMATOR
OrientationInterpolator* OrientationInterpolator82 = new OrientationInterpolator();
OrientationInterpolator82->setDEF("VL5_ANIMATOR");
OrientationInterpolator82->setKey(new float[2]{0,1}, 2);
OrientationInterpolator82->setKeyValue(new float[8]{1,0,0,0,1,0,0,0.174533});
IS* IS83 = new IS();
Connect* connect84 = new Connect();
connect84->setNodeField("value_changed");
connect84->setProtoField("vl5_rotation_changed");
IS83->addConnect(connect84);

OrientationInterpolator82->setIS(IS83);

Group48->addChild(OrientationInterpolator82);

//no SKULLBASE_ANIMATOR
OrientationInterpolator* OrientationInterpolator85 = new OrientationInterpolator();
OrientationInterpolator85->setDEF("L_SHOULDER_ANIMATOR");
OrientationInterpolator85->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator85->setKeyValue(new float[16]{1,0,0,0,-1,0,0,0.279252,-1,0,0,0.506145,-1,0,0,0.191986});
IS* IS86 = new IS();
Connect* connect87 = new Connect();
connect87->setNodeField("value_changed");
connect87->setProtoField("l_shoulder_rotation_changed");
IS86->addConnect(connect87);

OrientationInterpolator85->setIS(IS86);

Group48->addChild(OrientationInterpolator85);

OrientationInterpolator* OrientationInterpolator88 = new OrientationInterpolator();
OrientationInterpolator88->setDEF("L_ELBOW_ANIMATOR");
OrientationInterpolator88->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator88->setKeyValue(new float[16]{1,0,0,0,-1,0,0,0.052359,-1,0,0,0.296706,-1,0,0,1.431169});
IS* IS89 = new IS();
Connect* connect90 = new Connect();
connect90->setNodeField("value_changed");
connect90->setProtoField("l_elbow_rotation_changed");
IS89->addConnect(connect90);

OrientationInterpolator88->setIS(IS89);

Group48->addChild(OrientationInterpolator88);

//no L_WRIST_ANIMATOR
OrientationInterpolator* OrientationInterpolator91 = new OrientationInterpolator();
OrientationInterpolator91->setDEF("R_SHOULDER_ANIMATOR");
OrientationInterpolator91->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator91->setKeyValue(new float[16]{1,0,0,0,-1,0,0,0.104719,-1,0,0,0.157079,1,0,0,0.314159});
IS* IS92 = new IS();
Connect* connect93 = new Connect();
connect93->setNodeField("value_changed");
connect93->setProtoField("r_shoulder_rotation_changed");
IS92->addConnect(connect93);

OrientationInterpolator91->setIS(IS92);

Group48->addChild(OrientationInterpolator91);

OrientationInterpolator* OrientationInterpolator94 = new OrientationInterpolator();
OrientationInterpolator94->setDEF("R_ELBOW_ANIMATOR");
OrientationInterpolator94->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator94->setKeyValue(new float[16]{1,0,0,0,-1,0,0,0.837757,-1,0,0,1.239183,-1,0,0,1.500983});
IS* IS95 = new IS();
Connect* connect96 = new Connect();
connect96->setNodeField("value_changed");
connect96->setProtoField("r_elbow_rotation_changed");
IS95->addConnect(connect96);

OrientationInterpolator94->setIS(IS95);

Group48->addChild(OrientationInterpolator94);

//no R_WRIST_ANIMATOR
ProtoBody47->addChild(Group48);

ROUTE* ROUTE97 = new ROUTE();
ROUTE97->setFromField("fraction_changed");
ROUTE97->setFromNode("TIMER");
ROUTE97->setToField("set_fraction");
ROUTE97->setToNode("HUMANOIDROOT_POSITION_ANIMATOR");
ProtoBody47->addChild(ROUTE97);

ROUTE* ROUTE98 = new ROUTE();
ROUTE98->setFromField("fraction_changed");
ROUTE98->setFromNode("TIMER");
ROUTE98->setToField("set_fraction");
ROUTE98->setToNode("HUMANOIDROOT_ANIMATOR");
ProtoBody47->addChild(ROUTE98);

ROUTE* ROUTE99 = new ROUTE();
ROUTE99->setFromField("fraction_changed");
ROUTE99->setFromNode("TIMER");
ROUTE99->setToField("set_fraction");
ROUTE99->setToNode("L_HIP_ANIMATOR");
ProtoBody47->addChild(ROUTE99);

ROUTE* ROUTE100 = new ROUTE();
ROUTE100->setFromField("fraction_changed");
ROUTE100->setFromNode("TIMER");
ROUTE100->setToField("set_fraction");
ROUTE100->setToNode("L_KNEE_ANIMATOR");
ProtoBody47->addChild(ROUTE100);

ROUTE* ROUTE101 = new ROUTE();
ROUTE101->setFromField("fraction_changed");
ROUTE101->setFromNode("TIMER");
ROUTE101->setToField("set_fraction");
ROUTE101->setToNode("L_ANKLE_ANIMATOR");
ProtoBody47->addChild(ROUTE101);

ROUTE* ROUTE102 = new ROUTE();
ROUTE102->setFromField("fraction_changed");
ROUTE102->setFromNode("TIMER");
ROUTE102->setToField("set_fraction");
ROUTE102->setToNode("R_HIP_ANIMATOR");
ProtoBody47->addChild(ROUTE102);

ROUTE* ROUTE103 = new ROUTE();
ROUTE103->setFromField("fraction_changed");
ROUTE103->setFromNode("TIMER");
ROUTE103->setToField("set_fraction");
ROUTE103->setToNode("R_KNEE_ANIMATOR");
ProtoBody47->addChild(ROUTE103);

ROUTE* ROUTE104 = new ROUTE();
ROUTE104->setFromField("fraction_changed");
ROUTE104->setFromNode("TIMER");
ROUTE104->setToField("set_fraction");
ROUTE104->setToNode("R_ANKLE_ANIMATOR");
ProtoBody47->addChild(ROUTE104);

ROUTE* ROUTE105 = new ROUTE();
ROUTE105->setFromField("fraction_changed");
ROUTE105->setFromNode("TIMER");
ROUTE105->setToField("set_fraction");
ROUTE105->setToNode("VL5_ANIMATOR");
ProtoBody47->addChild(ROUTE105);

ROUTE* ROUTE106 = new ROUTE();
ROUTE106->setFromField("fraction_changed");
ROUTE106->setFromNode("TIMER");
ROUTE106->setToField("set_fraction");
ROUTE106->setToNode("L_SHOULDER_ANIMATOR");
ProtoBody47->addChild(ROUTE106);

ROUTE* ROUTE107 = new ROUTE();
ROUTE107->setFromField("fraction_changed");
ROUTE107->setFromNode("TIMER");
ROUTE107->setToField("set_fraction");
ROUTE107->setToNode("L_ELBOW_ANIMATOR");
ProtoBody47->addChild(ROUTE107);

ROUTE* ROUTE108 = new ROUTE();
ROUTE108->setFromField("fraction_changed");
ROUTE108->setFromNode("TIMER");
ROUTE108->setToField("set_fraction");
ROUTE108->setToNode("R_SHOULDER_ANIMATOR");
ProtoBody47->addChild(ROUTE108);

ROUTE* ROUTE109 = new ROUTE();
ROUTE109->setFromField("fraction_changed");
ROUTE109->setFromNode("TIMER");
ROUTE109->setToField("set_fraction");
ROUTE109->setToNode("R_ELBOW_ANIMATOR");
ProtoBody47->addChild(ROUTE109);

ProtoDeclare19->setProtoBody(ProtoBody47);

Scene17->addChild(ProtoDeclare19);

Anchor* Anchor110 = new Anchor();
Anchor110->setDescription("InterchangableActorsViaDynamicRouting");
Anchor110->setParameter(new String[1]{"target=_blank"}, 1);
Anchor110->setUrl(new String[4]{"InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"}, 4);
Shape* Shape111 = new Shape();
Text* Text112 = new Text();
Text112->setString(new String[6]{"LOA1_KneelAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."}, 6);
FontStyle* FontStyle113 = new FontStyle();
FontStyle113->setJustify(new String[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle113->setSize(0.8);
Text112->setFontStyle(FontStyle113);

Shape111->setGeometry(Text112);

Appearance* Appearance114 = new Appearance();
Material* Material115 = new Material();
Material115->setDiffuseColor(new float[3]{1,1,0.2});
Appearance114->setMaterial(Material115);

Shape111->setAppearance(Appearance114);

Anchor110->addChild(Shape111);

Scene17->addChild(Anchor110);

X3D0->setScene(Scene17);

X3D0->toXMLString();
}
