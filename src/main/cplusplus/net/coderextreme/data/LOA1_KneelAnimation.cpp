/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/stylesheets/cpp/concretes.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Immersive");
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("LOA1_KneelAnimation.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Humanoid animation prototype reusable by any Humanoid.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Tom Miller");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("translator");
meta5->setContent("Curt Blais");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("translated");
meta6->setContent("1 December 2001");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("23 May 2020");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("http://www.HAnim.org/Models/HAnim2001/boxman/protos/LOA1_WalkAnimation.wrl");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("http://www.HAnim.org");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("http://HAnim.org/Models");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("http://HAnim.org/Nodes");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("subject");
meta13->setContent("Nancy kneel Animation HAnim 2001");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("identifier");
meta14->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("generator");
meta15->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("license");
meta16->setContent("../license.html");
head1->addMeta(*meta16);

X3D0->setHead(*head1);

CScene* Scene17 = new CScene();
CWorldInfo* WorldInfo18 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo18->setTitle("LOA1_KneelAnimation.x3d");
group->addChildren(*WorldInfo18);

CProtoDeclare ProtoDeclare19 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="LOA1_KneelAnimation" ><ProtoInterface><field name="cycleInterval" accessType="inputOutput" type="SFTime" value="2"></field>
<field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="loop" accessType="inputOutput" type="SFBool" value="false"></field>
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
<ProtoBody><Group><TimeSensor DEF="TIMER"><IS><connect nodeField="cycleInterval" protoField="cycleInterval"></connect>
<connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="loop" protoField="loop"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
<connect nodeField="fraction_changed" protoField="fraction_changed"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
</IS>
</TimeSensor>
<PositionInterpolator DEF="HUMANOIDROOT_POSITION_ANIMATOR" key="0 0.3125 0.625 1" keyValue="0 0 0 0 -0.049999 0 0 -0.195 0 0 -0.439997 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_translation_changed"></connect>
</IS>
</PositionInterpolator>
<OrientationInterpolator DEF="HUMANOIDROOT_ANIMATOR" key="0 1" keyValue="0 1 0 0 0 1 0 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<!--no SACROILIAC_ANIMATOR--><OrientationInterpolator DEF="L_HIP_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.619393 -1 0 0 1.069302 -1 0 0 1.937315"><IS><connect nodeField="value_changed" protoField="l_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_KNEE_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 1 0 0 0.615228 1 0 0 0.984524 1 0 0 2.076941"><IS><connect nodeField="value_changed" protoField="l_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ANKLE_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.017453 -1 0 0 0.069812 1 0 0 0.261799"><IS><connect nodeField="value_changed" protoField="l_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<!--no L_MIDTARSAL_ANIMATOR--><OrientationInterpolator DEF="R_HIP_ANIMATOR" key="0 0.3125 1" keyValue="1 0 0 0 1 0 0 0.523598 -1 0 0 0.157079"><IS><connect nodeField="value_changed" protoField="r_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_KNEE_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 1 0 0 0.349065 1 0 0 1.023397 0.999934 0.008043 0.008185 1.727938"><IS><connect nodeField="value_changed" protoField="r_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ANKLE_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -0.991692 -0.072372 0.106338 0.205053 -0.981083 -0.103267 0.163741 0.272231 -1 0 0 0.349065"><IS><connect nodeField="value_changed" protoField="r_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<!--no R_MIDTARSAL_ANIMATOR--><OrientationInterpolator DEF="VL5_ANIMATOR" key="0 1" keyValue="1 0 0 0 1 0 0 0.174533"><IS><connect nodeField="value_changed" protoField="vl5_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<!--no SKULLBASE_ANIMATOR--><OrientationInterpolator DEF="L_SHOULDER_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.279252 -1 0 0 0.506145 -1 0 0 0.191986"><IS><connect nodeField="value_changed" protoField="l_shoulder_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ELBOW_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.052359 -1 0 0 0.296706 -1 0 0 1.431169"><IS><connect nodeField="value_changed" protoField="l_elbow_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<!--no L_WRIST_ANIMATOR--><OrientationInterpolator DEF="R_SHOULDER_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.104719 -1 0 0 0.157079 1 0 0 0.314159"><IS><connect nodeField="value_changed" protoField="r_shoulder_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ELBOW_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.837757 -1 0 0 1.239183 -1 0 0 1.500983"><IS><connect nodeField="value_changed" protoField="r_elbow_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<!--no R_WRIST_ANIMATOR--></Group>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="HUMANOIDROOT_POSITION_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="HUMANOIDROOT_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_HIP_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_KNEE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_ANKLE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_HIP_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_KNEE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_ANKLE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="VL5_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_SHOULDER_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_ELBOW_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_SHOULDER_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_ELBOW_ANIMATOR"></ROUTE>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare19->setName("LOA1_KneelAnimation");
CProtoInterface* ProtoInterface20 = new CProtoInterface();
Cfield* field21 = new Cfield();
field21->setName("cycleInterval");
field21->setAccessType("inputOutput");
field21->setType("SFTime");
field21->setValue("2");
ProtoInterface20->addField(*field21);

Cfield* field22 = new Cfield();
field22->setName("enabled");
field22->setAccessType("inputOutput");
field22->setType("SFBool");
field22->setValue("true");
ProtoInterface20->addField(*field22);

Cfield* field23 = new Cfield();
field23->setName("loop");
field23->setAccessType("inputOutput");
field23->setType("SFBool");
field23->setValue("false");
ProtoInterface20->addField(*field23);

Cfield* field24 = new Cfield();
field24->setName("startTime");
field24->setAccessType("inputOutput");
field24->setType("SFTime");
field24->setValue("0");
ProtoInterface20->addField(*field24);

Cfield* field25 = new Cfield();
field25->setName("stopTime");
field25->setAccessType("inputOutput");
field25->setType("SFTime");
field25->setValue("-1");
ProtoInterface20->addField(*field25);

Cfield* field26 = new Cfield();
field26->setName("fraction_changed");
field26->setAccessType("outputOnly");
field26->setType("SFFloat");
ProtoInterface20->addField(*field26);

Cfield* field27 = new Cfield();
field27->setName("isActive");
field27->setAccessType("outputOnly");
field27->setType("SFBool");
ProtoInterface20->addField(*field27);

Cfield* field28 = new Cfield();
field28->setName("HumanoidRoot_translation_changed");
field28->setAccessType("outputOnly");
field28->setType("SFVec3f");
ProtoInterface20->addField(*field28);

Cfield* field29 = new Cfield();
field29->setName("HumanoidRoot_rotation_changed");
field29->setAccessType("outputOnly");
field29->setType("SFRotation");
ProtoInterface20->addField(*field29);

Cfield* field30 = new Cfield();
field30->setName("lower_body_rotation_changed");
field30->setAccessType("outputOnly");
field30->setType("SFRotation");
ProtoInterface20->addField(*field30);

Cfield* field31 = new Cfield();
field31->setName("l_hip_rotation_changed");
field31->setAccessType("outputOnly");
field31->setType("SFRotation");
ProtoInterface20->addField(*field31);

Cfield* field32 = new Cfield();
field32->setName("l_knee_rotation_changed");
field32->setAccessType("outputOnly");
field32->setType("SFRotation");
ProtoInterface20->addField(*field32);

Cfield* field33 = new Cfield();
field33->setName("l_ankle_rotation_changed");
field33->setAccessType("outputOnly");
field33->setType("SFRotation");
ProtoInterface20->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("l_midtarsal_rotation_changed");
field34->setAccessType("outputOnly");
field34->setType("SFRotation");
ProtoInterface20->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("r_hip_rotation_changed");
field35->setAccessType("outputOnly");
field35->setType("SFRotation");
ProtoInterface20->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("r_knee_rotation_changed");
field36->setAccessType("outputOnly");
field36->setType("SFRotation");
ProtoInterface20->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("r_ankle_rotation_changed");
field37->setAccessType("outputOnly");
field37->setType("SFRotation");
ProtoInterface20->addField(*field37);

Cfield* field38 = new Cfield();
field38->setName("r_midtarsal_rotation_changed");
field38->setAccessType("outputOnly");
field38->setType("SFRotation");
ProtoInterface20->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("vl5_rotation_changed");
field39->setAccessType("outputOnly");
field39->setType("SFRotation");
ProtoInterface20->addField(*field39);

Cfield* field40 = new Cfield();
field40->setName("skullbase_rotation_changed");
field40->setAccessType("outputOnly");
field40->setType("SFRotation");
ProtoInterface20->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("l_shoulder_rotation_changed");
field41->setAccessType("outputOnly");
field41->setType("SFRotation");
ProtoInterface20->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("l_elbow_rotation_changed");
field42->setAccessType("outputOnly");
field42->setType("SFRotation");
ProtoInterface20->addField(*field42);

Cfield* field43 = new Cfield();
field43->setName("l_wrist_rotation_changed");
field43->setAccessType("outputOnly");
field43->setType("SFRotation");
ProtoInterface20->addField(*field43);

Cfield* field44 = new Cfield();
field44->setName("r_shoulder_rotation_changed");
field44->setAccessType("outputOnly");
field44->setType("SFRotation");
ProtoInterface20->addField(*field44);

Cfield* field45 = new Cfield();
field45->setName("r_elbow_rotation_changed");
field45->setAccessType("outputOnly");
field45->setType("SFRotation");
ProtoInterface20->addField(*field45);

Cfield* field46 = new Cfield();
field46->setName("r_wrist_rotation_changed");
field46->setAccessType("outputOnly");
field46->setType("SFRotation");
ProtoInterface20->addField(*field46);

ProtoDeclare19->setProtoInterface(*ProtoInterface20);

CProtoBody* ProtoBody47 = new CProtoBody();
CGroup* Group48 = (CGroup *)(m_pScene.createNode("Group"));
CTimeSensor* TimeSensor49 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor49->setDEF("TIMER");
CIS* IS50 = new CIS();
Cconnect* connect51 = new Cconnect();
connect51->setNodeField("cycleInterval");
connect51->setProtoField("cycleInterval");
IS50->addConnect(*connect51);

Cconnect* connect52 = new Cconnect();
connect52->setNodeField("enabled");
connect52->setProtoField("enabled");
IS50->addConnect(*connect52);

Cconnect* connect53 = new Cconnect();
connect53->setNodeField("loop");
connect53->setProtoField("loop");
IS50->addConnect(*connect53);

Cconnect* connect54 = new Cconnect();
connect54->setNodeField("startTime");
connect54->setProtoField("startTime");
IS50->addConnect(*connect54);

Cconnect* connect55 = new Cconnect();
connect55->setNodeField("stopTime");
connect55->setProtoField("stopTime");
IS50->addConnect(*connect55);

Cconnect* connect56 = new Cconnect();
connect56->setNodeField("fraction_changed");
connect56->setProtoField("fraction_changed");
IS50->addConnect(*connect56);

Cconnect* connect57 = new Cconnect();
connect57->setNodeField("isActive");
connect57->setProtoField("isActive");
IS50->addConnect(*connect57);

TimeSensor49->setIS(*IS50);

Group48->addChildren(*TimeSensor49);

CPositionInterpolator* PositionInterpolator58 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator58->setDEF("HUMANOIDROOT_POSITION_ANIMATOR");
PositionInterpolator58->setKey(new float[4]{0,0.3125,0.625,1}, 4);
PositionInterpolator58->setKeyValue(new float[12]{0,0,0,0,-0.049999,0,0,-0.195,0,0,-0.439997,0});
CIS* IS59 = new CIS();
Cconnect* connect60 = new Cconnect();
connect60->setNodeField("value_changed");
connect60->setProtoField("HumanoidRoot_translation_changed");
IS59->addConnect(*connect60);

PositionInterpolator58->setIS(*IS59);

Group48->addChildren(*PositionInterpolator58);

COrientationInterpolator* OrientationInterpolator61 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator61->setDEF("HUMANOIDROOT_ANIMATOR");
OrientationInterpolator61->setKey(new float[2]{0,1}, 2);
OrientationInterpolator61->setKeyValue(new float[8]{0,1,0,0,0,1,0,0});
CIS* IS62 = new CIS();
Cconnect* connect63 = new Cconnect();
connect63->setNodeField("value_changed");
connect63->setProtoField("HumanoidRoot_rotation_changed");
IS62->addConnect(*connect63);

OrientationInterpolator61->setIS(*IS62);

Group48->addChildren(*OrientationInterpolator61);

//no SACROILIAC_ANIMATOR
COrientationInterpolator* OrientationInterpolator64 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator64->setDEF("L_HIP_ANIMATOR");
OrientationInterpolator64->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator64->setKeyValue(new float[16]{1,0,0,0,-1,0,0,0.619393,-1,0,0,1.069302,-1,0,0,1.937315});
CIS* IS65 = new CIS();
Cconnect* connect66 = new Cconnect();
connect66->setNodeField("value_changed");
connect66->setProtoField("l_hip_rotation_changed");
IS65->addConnect(*connect66);

OrientationInterpolator64->setIS(*IS65);

Group48->addChildren(*OrientationInterpolator64);

COrientationInterpolator* OrientationInterpolator67 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator67->setDEF("L_KNEE_ANIMATOR");
OrientationInterpolator67->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator67->setKeyValue(new float[16]{1,0,0,0,1,0,0,0.615228,1,0,0,0.984524,1,0,0,2.076941});
CIS* IS68 = new CIS();
Cconnect* connect69 = new Cconnect();
connect69->setNodeField("value_changed");
connect69->setProtoField("l_knee_rotation_changed");
IS68->addConnect(*connect69);

OrientationInterpolator67->setIS(*IS68);

Group48->addChildren(*OrientationInterpolator67);

COrientationInterpolator* OrientationInterpolator70 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator70->setDEF("L_ANKLE_ANIMATOR");
OrientationInterpolator70->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator70->setKeyValue(new float[16]{1,0,0,0,-1,0,0,0.017453,-1,0,0,0.069812,1,0,0,0.261799});
CIS* IS71 = new CIS();
Cconnect* connect72 = new Cconnect();
connect72->setNodeField("value_changed");
connect72->setProtoField("l_ankle_rotation_changed");
IS71->addConnect(*connect72);

OrientationInterpolator70->setIS(*IS71);

Group48->addChildren(*OrientationInterpolator70);

//no L_MIDTARSAL_ANIMATOR
COrientationInterpolator* OrientationInterpolator73 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator73->setDEF("R_HIP_ANIMATOR");
OrientationInterpolator73->setKey(new float[3]{0,0.3125,1}, 3);
OrientationInterpolator73->setKeyValue(new float[12]{1,0,0,0,1,0,0,0.523598,-1,0,0,0.157079});
CIS* IS74 = new CIS();
Cconnect* connect75 = new Cconnect();
connect75->setNodeField("value_changed");
connect75->setProtoField("r_hip_rotation_changed");
IS74->addConnect(*connect75);

OrientationInterpolator73->setIS(*IS74);

Group48->addChildren(*OrientationInterpolator73);

COrientationInterpolator* OrientationInterpolator76 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator76->setDEF("R_KNEE_ANIMATOR");
OrientationInterpolator76->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator76->setKeyValue(new float[16]{1,0,0,0,1,0,0,0.349065,1,0,0,1.023397,0.999934,0.008043,0.008185,1.727938});
CIS* IS77 = new CIS();
Cconnect* connect78 = new Cconnect();
connect78->setNodeField("value_changed");
connect78->setProtoField("r_knee_rotation_changed");
IS77->addConnect(*connect78);

OrientationInterpolator76->setIS(*IS77);

Group48->addChildren(*OrientationInterpolator76);

COrientationInterpolator* OrientationInterpolator79 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator79->setDEF("R_ANKLE_ANIMATOR");
OrientationInterpolator79->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator79->setKeyValue(new float[16]{1,0,0,0,-0.991692,-0.072372,0.106338,0.205053,-0.981083,-0.103267,0.163741,0.272231,-1,0,0,0.349065});
CIS* IS80 = new CIS();
Cconnect* connect81 = new Cconnect();
connect81->setNodeField("value_changed");
connect81->setProtoField("r_ankle_rotation_changed");
IS80->addConnect(*connect81);

OrientationInterpolator79->setIS(*IS80);

Group48->addChildren(*OrientationInterpolator79);

//no R_MIDTARSAL_ANIMATOR
COrientationInterpolator* OrientationInterpolator82 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator82->setDEF("VL5_ANIMATOR");
OrientationInterpolator82->setKey(new float[2]{0,1}, 2);
OrientationInterpolator82->setKeyValue(new float[8]{1,0,0,0,1,0,0,0.174533});
CIS* IS83 = new CIS();
Cconnect* connect84 = new Cconnect();
connect84->setNodeField("value_changed");
connect84->setProtoField("vl5_rotation_changed");
IS83->addConnect(*connect84);

OrientationInterpolator82->setIS(*IS83);

Group48->addChildren(*OrientationInterpolator82);

//no SKULLBASE_ANIMATOR
COrientationInterpolator* OrientationInterpolator85 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator85->setDEF("L_SHOULDER_ANIMATOR");
OrientationInterpolator85->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator85->setKeyValue(new float[16]{1,0,0,0,-1,0,0,0.279252,-1,0,0,0.506145,-1,0,0,0.191986});
CIS* IS86 = new CIS();
Cconnect* connect87 = new Cconnect();
connect87->setNodeField("value_changed");
connect87->setProtoField("l_shoulder_rotation_changed");
IS86->addConnect(*connect87);

OrientationInterpolator85->setIS(*IS86);

Group48->addChildren(*OrientationInterpolator85);

COrientationInterpolator* OrientationInterpolator88 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator88->setDEF("L_ELBOW_ANIMATOR");
OrientationInterpolator88->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator88->setKeyValue(new float[16]{1,0,0,0,-1,0,0,0.052359,-1,0,0,0.296706,-1,0,0,1.431169});
CIS* IS89 = new CIS();
Cconnect* connect90 = new Cconnect();
connect90->setNodeField("value_changed");
connect90->setProtoField("l_elbow_rotation_changed");
IS89->addConnect(*connect90);

OrientationInterpolator88->setIS(*IS89);

Group48->addChildren(*OrientationInterpolator88);

//no L_WRIST_ANIMATOR
COrientationInterpolator* OrientationInterpolator91 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator91->setDEF("R_SHOULDER_ANIMATOR");
OrientationInterpolator91->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator91->setKeyValue(new float[16]{1,0,0,0,-1,0,0,0.104719,-1,0,0,0.157079,1,0,0,0.314159});
CIS* IS92 = new CIS();
Cconnect* connect93 = new Cconnect();
connect93->setNodeField("value_changed");
connect93->setProtoField("r_shoulder_rotation_changed");
IS92->addConnect(*connect93);

OrientationInterpolator91->setIS(*IS92);

Group48->addChildren(*OrientationInterpolator91);

COrientationInterpolator* OrientationInterpolator94 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator94->setDEF("R_ELBOW_ANIMATOR");
OrientationInterpolator94->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator94->setKeyValue(new float[16]{1,0,0,0,-1,0,0,0.837757,-1,0,0,1.239183,-1,0,0,1.500983});
CIS* IS95 = new CIS();
Cconnect* connect96 = new Cconnect();
connect96->setNodeField("value_changed");
connect96->setProtoField("r_elbow_rotation_changed");
IS95->addConnect(*connect96);

OrientationInterpolator94->setIS(*IS95);

Group48->addChildren(*OrientationInterpolator94);

//no R_WRIST_ANIMATOR
ProtoBody47->addChildren(*Group48);

CROUTE* ROUTE97 = new CROUTE();
ROUTE97->setFromField("fraction_changed");
ROUTE97->setFromNode("TIMER");
ROUTE97->setToField("set_fraction");
ROUTE97->setToNode("HUMANOIDROOT_POSITION_ANIMATOR");
ProtoBody47->addChildren(*ROUTE97);

CROUTE* ROUTE98 = new CROUTE();
ROUTE98->setFromField("fraction_changed");
ROUTE98->setFromNode("TIMER");
ROUTE98->setToField("set_fraction");
ROUTE98->setToNode("HUMANOIDROOT_ANIMATOR");
ProtoBody47->addChildren(*ROUTE98);

CROUTE* ROUTE99 = new CROUTE();
ROUTE99->setFromField("fraction_changed");
ROUTE99->setFromNode("TIMER");
ROUTE99->setToField("set_fraction");
ROUTE99->setToNode("L_HIP_ANIMATOR");
ProtoBody47->addChildren(*ROUTE99);

CROUTE* ROUTE100 = new CROUTE();
ROUTE100->setFromField("fraction_changed");
ROUTE100->setFromNode("TIMER");
ROUTE100->setToField("set_fraction");
ROUTE100->setToNode("L_KNEE_ANIMATOR");
ProtoBody47->addChildren(*ROUTE100);

CROUTE* ROUTE101 = new CROUTE();
ROUTE101->setFromField("fraction_changed");
ROUTE101->setFromNode("TIMER");
ROUTE101->setToField("set_fraction");
ROUTE101->setToNode("L_ANKLE_ANIMATOR");
ProtoBody47->addChildren(*ROUTE101);

CROUTE* ROUTE102 = new CROUTE();
ROUTE102->setFromField("fraction_changed");
ROUTE102->setFromNode("TIMER");
ROUTE102->setToField("set_fraction");
ROUTE102->setToNode("R_HIP_ANIMATOR");
ProtoBody47->addChildren(*ROUTE102);

CROUTE* ROUTE103 = new CROUTE();
ROUTE103->setFromField("fraction_changed");
ROUTE103->setFromNode("TIMER");
ROUTE103->setToField("set_fraction");
ROUTE103->setToNode("R_KNEE_ANIMATOR");
ProtoBody47->addChildren(*ROUTE103);

CROUTE* ROUTE104 = new CROUTE();
ROUTE104->setFromField("fraction_changed");
ROUTE104->setFromNode("TIMER");
ROUTE104->setToField("set_fraction");
ROUTE104->setToNode("R_ANKLE_ANIMATOR");
ProtoBody47->addChildren(*ROUTE104);

CROUTE* ROUTE105 = new CROUTE();
ROUTE105->setFromField("fraction_changed");
ROUTE105->setFromNode("TIMER");
ROUTE105->setToField("set_fraction");
ROUTE105->setToNode("VL5_ANIMATOR");
ProtoBody47->addChildren(*ROUTE105);

CROUTE* ROUTE106 = new CROUTE();
ROUTE106->setFromField("fraction_changed");
ROUTE106->setFromNode("TIMER");
ROUTE106->setToField("set_fraction");
ROUTE106->setToNode("L_SHOULDER_ANIMATOR");
ProtoBody47->addChildren(*ROUTE106);

CROUTE* ROUTE107 = new CROUTE();
ROUTE107->setFromField("fraction_changed");
ROUTE107->setFromNode("TIMER");
ROUTE107->setToField("set_fraction");
ROUTE107->setToNode("L_ELBOW_ANIMATOR");
ProtoBody47->addChildren(*ROUTE107);

CROUTE* ROUTE108 = new CROUTE();
ROUTE108->setFromField("fraction_changed");
ROUTE108->setFromNode("TIMER");
ROUTE108->setToField("set_fraction");
ROUTE108->setToNode("R_SHOULDER_ANIMATOR");
ProtoBody47->addChildren(*ROUTE108);

CROUTE* ROUTE109 = new CROUTE();
ROUTE109->setFromField("fraction_changed");
ROUTE109->setFromNode("TIMER");
ROUTE109->setToField("set_fraction");
ROUTE109->setToNode("R_ELBOW_ANIMATOR");
ProtoBody47->addChildren(*ROUTE109);

ProtoDeclare19->setProtoBody(*ProtoBody47);

group->addChildren(*ProtoDeclare19);

CAnchor* Anchor110 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor110->setDescription("InterchangableActorsViaDynamicRouting");
Anchor110->setParameter(new CString[1]{"target=_blank"}, 1);
Anchor110->setUrl(new CString[4]{"InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"}, 4);
CShape* Shape111 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text112 = (CText *)(m_pScene.createNode("Text"));
Text112->setString(new CString[6]{"LOA1_KneelAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."}, 6);
CFontStyle* FontStyle113 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle113->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle113->setSize(0.8);
Text112->setFontStyle(*FontStyle113);

Shape111->setGeometry(Text112);

CAppearance* Appearance114 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material115 = (CMaterial *)(m_pScene.createNode("Material"));
Material115->setDiffuseColor(new float[3]{1,1,0.2});
Appearance114->setMaterial(*Material115);

Shape111->setAppearance(*Appearance114);

Anchor110->addChildren(*Shape111);

group->addChildren(*Anchor110);

X3D0->setScene(*Scene17);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
