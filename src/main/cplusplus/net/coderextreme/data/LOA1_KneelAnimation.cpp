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
X3D0->setVersion("4.0");
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

X3D0->setHead(*head1);

CScene* Scene16 = new CScene();
CProtoDeclare ProtoDeclare17 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="LOA1_KneelAnimation" ><ProtoInterface><field accessType="inputOutput" type="SFTime" name="cycleInterval" value="2"></field>
<field accessType="inputOutput" type="SFBool" name="enabled" value="true"></field>
<field accessType="inputOutput" type="SFBool" name="loop"></field>
<field accessType="inputOutput" type="SFTime" name="startTime"></field>
<field accessType="inputOutput" type="SFTime" name="stopTime" value="-1"></field>
<field accessType="outputOnly" type="SFFloat" name="fraction_changed"></field>
<field accessType="outputOnly" type="SFBool" name="isActive"></field>
<field accessType="outputOnly" type="SFVec3f" name="HumanoidRoot_translation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="HumanoidRoot_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="lower_body_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="l_hip_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="l_knee_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="l_ankle_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="l_midtarsal_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="r_hip_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="r_knee_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="r_ankle_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="r_midtarsal_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="vl5_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="skullbase_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="l_shoulder_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="l_elbow_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="l_wrist_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="r_shoulder_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="r_elbow_rotation_changed"></field>
<field accessType="outputOnly" type="SFRotation" name="r_wrist_rotation_changed"></field>
</ProtoInterface>
<ProtoBody><Group><TimeSensor DEF="TIMER"><IS><connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="cycleInterval" protoField="cycleInterval"></connect>
<connect nodeField="loop" protoField="loop"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
<connect nodeField="fraction_changed" protoField="fraction_changed"></connect>
</IS>
</TimeSensor>
<PositionInterpolator DEF="HUMANOIDROOT_POSITION_ANIMATOR" key="0 0.3125 0.625 1" keyValue="0 0 0 0 -0.049999 0 0 -0.195 0 0 -0.439997 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_translation_changed"></connect>
</IS>
</PositionInterpolator>
<OrientationInterpolator DEF="HUMANOIDROOT_ANIMATOR" key="0 1" keyValue="0 1 0 0 0 1 0 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_HIP_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.619393 -1 0 0 1.069302 -1 0 0 1.937315"><IS><connect nodeField="value_changed" protoField="l_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_KNEE_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 1 0 0 0.615228 1 0 0 0.984524 1 0 0 2.076941"><IS><connect nodeField="value_changed" protoField="l_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ANKLE_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.017453 -1 0 0 0.069812 1 0 0 0.261799"><IS><connect nodeField="value_changed" protoField="l_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_HIP_ANIMATOR" key="0 0.3125 1" keyValue="1 0 0 0 1 0 0 0.523598 -1 0 0 0.157079"><IS><connect nodeField="value_changed" protoField="r_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_KNEE_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 1 0 0 0.349065 1 0 0 1.023397 0.999934 0.008043 0.008185 1.727938"><IS><connect nodeField="value_changed" protoField="r_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ANKLE_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -0.991692 -0.072372 0.106338 0.205053 -0.981083 -0.103267 0.163741 0.272231 -1 0 0 0.349065"><IS><connect nodeField="value_changed" protoField="r_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="VL5_ANIMATOR" key="0 1" keyValue="1 0 0 0 1 0 0 0.174533"><IS><connect nodeField="value_changed" protoField="vl5_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_SHOULDER_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.279252 -1 0 0 0.506145 -1 0 0 0.191986"><IS><connect nodeField="value_changed" protoField="l_shoulder_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ELBOW_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.052359 -1 0 0 0.296706 -1 0 0 1.431169"><IS><connect nodeField="value_changed" protoField="l_elbow_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_SHOULDER_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.104719 -1 0 0 0.157079 1 0 0 0.314159"><IS><connect nodeField="value_changed" protoField="r_shoulder_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ELBOW_ANIMATOR" key="0 0.3125 0.625 1" keyValue="1 0 0 0 -1 0 0 0.837757 -1 0 0 1.239183 -1 0 0 1.500983"><IS><connect nodeField="value_changed" protoField="r_elbow_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
</Group>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="HUMANOIDROOT_POSITION_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="HUMANOIDROOT_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_HIP_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_KNEE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_ANKLE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_HIP_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_KNEE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_ANKLE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="VL5_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_SHOULDER_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_ELBOW_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_SHOULDER_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_ELBOW_ANIMATOR" toField="set_fraction"></ROUTE>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare17->setName("LOA1_KneelAnimation");
CProtoInterface* ProtoInterface18 = new CProtoInterface();
Cfield* field19 = new Cfield();
field19->setAccessType("inputOutput");
field19->setType("SFTime");
field19->setName("cycleInterval");
field19->setValue("2");
ProtoInterface18->addField(*field19);

Cfield* field20 = new Cfield();
field20->setAccessType("inputOutput");
field20->setType("SFBool");
field20->setName("enabled");
field20->setValue("true");
ProtoInterface18->addField(*field20);

Cfield* field21 = new Cfield();
field21->setAccessType("inputOutput");
field21->setType("SFBool");
field21->setName("loop");
ProtoInterface18->addField(*field21);

Cfield* field22 = new Cfield();
field22->setAccessType("inputOutput");
field22->setType("SFTime");
field22->setName("startTime");
ProtoInterface18->addField(*field22);

Cfield* field23 = new Cfield();
field23->setAccessType("inputOutput");
field23->setType("SFTime");
field23->setName("stopTime");
field23->setValue("-1");
ProtoInterface18->addField(*field23);

Cfield* field24 = new Cfield();
field24->setAccessType("outputOnly");
field24->setType("SFFloat");
field24->setName("fraction_changed");
ProtoInterface18->addField(*field24);

Cfield* field25 = new Cfield();
field25->setAccessType("outputOnly");
field25->setType("SFBool");
field25->setName("isActive");
ProtoInterface18->addField(*field25);

Cfield* field26 = new Cfield();
field26->setAccessType("outputOnly");
field26->setType("SFVec3f");
field26->setName("HumanoidRoot_translation_changed");
ProtoInterface18->addField(*field26);

Cfield* field27 = new Cfield();
field27->setAccessType("outputOnly");
field27->setType("SFRotation");
field27->setName("HumanoidRoot_rotation_changed");
ProtoInterface18->addField(*field27);

Cfield* field28 = new Cfield();
field28->setAccessType("outputOnly");
field28->setType("SFRotation");
field28->setName("lower_body_rotation_changed");
ProtoInterface18->addField(*field28);

Cfield* field29 = new Cfield();
field29->setAccessType("outputOnly");
field29->setType("SFRotation");
field29->setName("l_hip_rotation_changed");
ProtoInterface18->addField(*field29);

Cfield* field30 = new Cfield();
field30->setAccessType("outputOnly");
field30->setType("SFRotation");
field30->setName("l_knee_rotation_changed");
ProtoInterface18->addField(*field30);

Cfield* field31 = new Cfield();
field31->setAccessType("outputOnly");
field31->setType("SFRotation");
field31->setName("l_ankle_rotation_changed");
ProtoInterface18->addField(*field31);

Cfield* field32 = new Cfield();
field32->setAccessType("outputOnly");
field32->setType("SFRotation");
field32->setName("l_midtarsal_rotation_changed");
ProtoInterface18->addField(*field32);

Cfield* field33 = new Cfield();
field33->setAccessType("outputOnly");
field33->setType("SFRotation");
field33->setName("r_hip_rotation_changed");
ProtoInterface18->addField(*field33);

Cfield* field34 = new Cfield();
field34->setAccessType("outputOnly");
field34->setType("SFRotation");
field34->setName("r_knee_rotation_changed");
ProtoInterface18->addField(*field34);

Cfield* field35 = new Cfield();
field35->setAccessType("outputOnly");
field35->setType("SFRotation");
field35->setName("r_ankle_rotation_changed");
ProtoInterface18->addField(*field35);

Cfield* field36 = new Cfield();
field36->setAccessType("outputOnly");
field36->setType("SFRotation");
field36->setName("r_midtarsal_rotation_changed");
ProtoInterface18->addField(*field36);

Cfield* field37 = new Cfield();
field37->setAccessType("outputOnly");
field37->setType("SFRotation");
field37->setName("vl5_rotation_changed");
ProtoInterface18->addField(*field37);

Cfield* field38 = new Cfield();
field38->setAccessType("outputOnly");
field38->setType("SFRotation");
field38->setName("skullbase_rotation_changed");
ProtoInterface18->addField(*field38);

Cfield* field39 = new Cfield();
field39->setAccessType("outputOnly");
field39->setType("SFRotation");
field39->setName("l_shoulder_rotation_changed");
ProtoInterface18->addField(*field39);

Cfield* field40 = new Cfield();
field40->setAccessType("outputOnly");
field40->setType("SFRotation");
field40->setName("l_elbow_rotation_changed");
ProtoInterface18->addField(*field40);

Cfield* field41 = new Cfield();
field41->setAccessType("outputOnly");
field41->setType("SFRotation");
field41->setName("l_wrist_rotation_changed");
ProtoInterface18->addField(*field41);

Cfield* field42 = new Cfield();
field42->setAccessType("outputOnly");
field42->setType("SFRotation");
field42->setName("r_shoulder_rotation_changed");
ProtoInterface18->addField(*field42);

Cfield* field43 = new Cfield();
field43->setAccessType("outputOnly");
field43->setType("SFRotation");
field43->setName("r_elbow_rotation_changed");
ProtoInterface18->addField(*field43);

Cfield* field44 = new Cfield();
field44->setAccessType("outputOnly");
field44->setType("SFRotation");
field44->setName("r_wrist_rotation_changed");
ProtoInterface18->addField(*field44);

ProtoDeclare17->setProtoInterface(*ProtoInterface18);

CProtoBody* ProtoBody45 = new CProtoBody();
CGroup* Group46 = (CGroup *)(m_pScene.createNode("Group"));
CTimeSensor* TimeSensor47 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor47->setDEF("TIMER");
CIS* IS48 = new CIS();
Cconnect* connect49 = new Cconnect();
connect49->setNodeField("enabled");
connect49->setProtoField("enabled");
IS48->addConnect(*connect49);

Cconnect* connect50 = new Cconnect();
connect50->setNodeField("cycleInterval");
connect50->setProtoField("cycleInterval");
IS48->addConnect(*connect50);

Cconnect* connect51 = new Cconnect();
connect51->setNodeField("loop");
connect51->setProtoField("loop");
IS48->addConnect(*connect51);

Cconnect* connect52 = new Cconnect();
connect52->setNodeField("startTime");
connect52->setProtoField("startTime");
IS48->addConnect(*connect52);

Cconnect* connect53 = new Cconnect();
connect53->setNodeField("stopTime");
connect53->setProtoField("stopTime");
IS48->addConnect(*connect53);

Cconnect* connect54 = new Cconnect();
connect54->setNodeField("isActive");
connect54->setProtoField("isActive");
IS48->addConnect(*connect54);

Cconnect* connect55 = new Cconnect();
connect55->setNodeField("fraction_changed");
connect55->setProtoField("fraction_changed");
IS48->addConnect(*connect55);

TimeSensor47->setIS(*IS48);

Group46->addChildren(*TimeSensor47);

CPositionInterpolator* PositionInterpolator56 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator56->setDEF("HUMANOIDROOT_POSITION_ANIMATOR");
PositionInterpolator56->setKey(new float[4]{0,0.3125,0.625,1}, 4);
PositionInterpolator56->setKeyValue(new float[12]{0,0,0,0,-0.049999,0,0,-0.195,0,0,-0.439997,0});
CIS* IS57 = new CIS();
Cconnect* connect58 = new Cconnect();
connect58->setNodeField("value_changed");
connect58->setProtoField("HumanoidRoot_translation_changed");
IS57->addConnect(*connect58);

PositionInterpolator56->setIS(*IS57);

Group46->addChildren(*PositionInterpolator56);

COrientationInterpolator* OrientationInterpolator59 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator59->setDEF("HUMANOIDROOT_ANIMATOR");
OrientationInterpolator59->setKey(new float[2]{0,1}, 2);
OrientationInterpolator59->setKeyValue(new float[8]{0,1,0,0,0,1,0,0});
CIS* IS60 = new CIS();
Cconnect* connect61 = new Cconnect();
connect61->setNodeField("value_changed");
connect61->setProtoField("HumanoidRoot_rotation_changed");
IS60->addConnect(*connect61);

OrientationInterpolator59->setIS(*IS60);

Group46->addChildren(*OrientationInterpolator59);

COrientationInterpolator* OrientationInterpolator62 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator62->setDEF("L_HIP_ANIMATOR");
OrientationInterpolator62->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator62->setKeyValue(new float[16]{1,0,0,0,-1,0,0,0.619393,-1,0,0,1.069302,-1,0,0,1.937315});
CIS* IS63 = new CIS();
Cconnect* connect64 = new Cconnect();
connect64->setNodeField("value_changed");
connect64->setProtoField("l_hip_rotation_changed");
IS63->addConnect(*connect64);

OrientationInterpolator62->setIS(*IS63);

Group46->addChildren(*OrientationInterpolator62);

COrientationInterpolator* OrientationInterpolator65 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator65->setDEF("L_KNEE_ANIMATOR");
OrientationInterpolator65->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator65->setKeyValue(new float[16]{1,0,0,0,1,0,0,0.615228,1,0,0,0.984524,1,0,0,2.076941});
CIS* IS66 = new CIS();
Cconnect* connect67 = new Cconnect();
connect67->setNodeField("value_changed");
connect67->setProtoField("l_knee_rotation_changed");
IS66->addConnect(*connect67);

OrientationInterpolator65->setIS(*IS66);

Group46->addChildren(*OrientationInterpolator65);

COrientationInterpolator* OrientationInterpolator68 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator68->setDEF("L_ANKLE_ANIMATOR");
OrientationInterpolator68->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator68->setKeyValue(new float[16]{1,0,0,0,-1,0,0,0.017453,-1,0,0,0.069812,1,0,0,0.261799});
CIS* IS69 = new CIS();
Cconnect* connect70 = new Cconnect();
connect70->setNodeField("value_changed");
connect70->setProtoField("l_ankle_rotation_changed");
IS69->addConnect(*connect70);

OrientationInterpolator68->setIS(*IS69);

Group46->addChildren(*OrientationInterpolator68);

COrientationInterpolator* OrientationInterpolator71 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator71->setDEF("R_HIP_ANIMATOR");
OrientationInterpolator71->setKey(new float[3]{0,0.3125,1}, 3);
OrientationInterpolator71->setKeyValue(new float[12]{1,0,0,0,1,0,0,0.523598,-1,0,0,0.157079});
CIS* IS72 = new CIS();
Cconnect* connect73 = new Cconnect();
connect73->setNodeField("value_changed");
connect73->setProtoField("r_hip_rotation_changed");
IS72->addConnect(*connect73);

OrientationInterpolator71->setIS(*IS72);

Group46->addChildren(*OrientationInterpolator71);

COrientationInterpolator* OrientationInterpolator74 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator74->setDEF("R_KNEE_ANIMATOR");
OrientationInterpolator74->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator74->setKeyValue(new float[16]{1,0,0,0,1,0,0,0.349065,1,0,0,1.023397,0.999934,0.008043,0.008185,1.727938});
CIS* IS75 = new CIS();
Cconnect* connect76 = new Cconnect();
connect76->setNodeField("value_changed");
connect76->setProtoField("r_knee_rotation_changed");
IS75->addConnect(*connect76);

OrientationInterpolator74->setIS(*IS75);

Group46->addChildren(*OrientationInterpolator74);

COrientationInterpolator* OrientationInterpolator77 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator77->setDEF("R_ANKLE_ANIMATOR");
OrientationInterpolator77->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator77->setKeyValue(new float[16]{1,0,0,0,-0.991692,-0.072372,0.106338,0.205053,-0.981083,-0.103267,0.163741,0.272231,-1,0,0,0.349065});
CIS* IS78 = new CIS();
Cconnect* connect79 = new Cconnect();
connect79->setNodeField("value_changed");
connect79->setProtoField("r_ankle_rotation_changed");
IS78->addConnect(*connect79);

OrientationInterpolator77->setIS(*IS78);

Group46->addChildren(*OrientationInterpolator77);

COrientationInterpolator* OrientationInterpolator80 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator80->setDEF("VL5_ANIMATOR");
OrientationInterpolator80->setKey(new float[2]{0,1}, 2);
OrientationInterpolator80->setKeyValue(new float[8]{1,0,0,0,1,0,0,0.174533});
CIS* IS81 = new CIS();
Cconnect* connect82 = new Cconnect();
connect82->setNodeField("value_changed");
connect82->setProtoField("vl5_rotation_changed");
IS81->addConnect(*connect82);

OrientationInterpolator80->setIS(*IS81);

Group46->addChildren(*OrientationInterpolator80);

COrientationInterpolator* OrientationInterpolator83 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator83->setDEF("L_SHOULDER_ANIMATOR");
OrientationInterpolator83->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator83->setKeyValue(new float[16]{1,0,0,0,-1,0,0,0.279252,-1,0,0,0.506145,-1,0,0,0.191986});
CIS* IS84 = new CIS();
Cconnect* connect85 = new Cconnect();
connect85->setNodeField("value_changed");
connect85->setProtoField("l_shoulder_rotation_changed");
IS84->addConnect(*connect85);

OrientationInterpolator83->setIS(*IS84);

Group46->addChildren(*OrientationInterpolator83);

COrientationInterpolator* OrientationInterpolator86 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator86->setDEF("L_ELBOW_ANIMATOR");
OrientationInterpolator86->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator86->setKeyValue(new float[16]{1,0,0,0,-1,0,0,0.052359,-1,0,0,0.296706,-1,0,0,1.431169});
CIS* IS87 = new CIS();
Cconnect* connect88 = new Cconnect();
connect88->setNodeField("value_changed");
connect88->setProtoField("l_elbow_rotation_changed");
IS87->addConnect(*connect88);

OrientationInterpolator86->setIS(*IS87);

Group46->addChildren(*OrientationInterpolator86);

COrientationInterpolator* OrientationInterpolator89 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator89->setDEF("R_SHOULDER_ANIMATOR");
OrientationInterpolator89->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator89->setKeyValue(new float[16]{1,0,0,0,-1,0,0,0.104719,-1,0,0,0.157079,1,0,0,0.314159});
CIS* IS90 = new CIS();
Cconnect* connect91 = new Cconnect();
connect91->setNodeField("value_changed");
connect91->setProtoField("r_shoulder_rotation_changed");
IS90->addConnect(*connect91);

OrientationInterpolator89->setIS(*IS90);

Group46->addChildren(*OrientationInterpolator89);

COrientationInterpolator* OrientationInterpolator92 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator92->setDEF("R_ELBOW_ANIMATOR");
OrientationInterpolator92->setKey(new float[4]{0,0.3125,0.625,1}, 4);
OrientationInterpolator92->setKeyValue(new float[16]{1,0,0,0,-1,0,0,0.837757,-1,0,0,1.239183,-1,0,0,1.500983});
CIS* IS93 = new CIS();
Cconnect* connect94 = new Cconnect();
connect94->setNodeField("value_changed");
connect94->setProtoField("r_elbow_rotation_changed");
IS93->addConnect(*connect94);

OrientationInterpolator92->setIS(*IS93);

Group46->addChildren(*OrientationInterpolator92);

ProtoBody45->addChildren(*Group46);

CROUTE* ROUTE95 = new CROUTE();
ROUTE95->setFromNode("TIMER");
ROUTE95->setFromField("fraction_changed");
ROUTE95->setToNode("HUMANOIDROOT_POSITION_ANIMATOR");
ROUTE95->setToField("set_fraction");
ProtoBody45->addChildren(*ROUTE95);

CROUTE* ROUTE96 = new CROUTE();
ROUTE96->setFromNode("TIMER");
ROUTE96->setFromField("fraction_changed");
ROUTE96->setToNode("HUMANOIDROOT_ANIMATOR");
ROUTE96->setToField("set_fraction");
ProtoBody45->addChildren(*ROUTE96);

CROUTE* ROUTE97 = new CROUTE();
ROUTE97->setFromNode("TIMER");
ROUTE97->setFromField("fraction_changed");
ROUTE97->setToNode("L_HIP_ANIMATOR");
ROUTE97->setToField("set_fraction");
ProtoBody45->addChildren(*ROUTE97);

CROUTE* ROUTE98 = new CROUTE();
ROUTE98->setFromNode("TIMER");
ROUTE98->setFromField("fraction_changed");
ROUTE98->setToNode("L_KNEE_ANIMATOR");
ROUTE98->setToField("set_fraction");
ProtoBody45->addChildren(*ROUTE98);

CROUTE* ROUTE99 = new CROUTE();
ROUTE99->setFromNode("TIMER");
ROUTE99->setFromField("fraction_changed");
ROUTE99->setToNode("L_ANKLE_ANIMATOR");
ROUTE99->setToField("set_fraction");
ProtoBody45->addChildren(*ROUTE99);

CROUTE* ROUTE100 = new CROUTE();
ROUTE100->setFromNode("TIMER");
ROUTE100->setFromField("fraction_changed");
ROUTE100->setToNode("R_HIP_ANIMATOR");
ROUTE100->setToField("set_fraction");
ProtoBody45->addChildren(*ROUTE100);

CROUTE* ROUTE101 = new CROUTE();
ROUTE101->setFromNode("TIMER");
ROUTE101->setFromField("fraction_changed");
ROUTE101->setToNode("R_KNEE_ANIMATOR");
ROUTE101->setToField("set_fraction");
ProtoBody45->addChildren(*ROUTE101);

CROUTE* ROUTE102 = new CROUTE();
ROUTE102->setFromNode("TIMER");
ROUTE102->setFromField("fraction_changed");
ROUTE102->setToNode("R_ANKLE_ANIMATOR");
ROUTE102->setToField("set_fraction");
ProtoBody45->addChildren(*ROUTE102);

CROUTE* ROUTE103 = new CROUTE();
ROUTE103->setFromNode("TIMER");
ROUTE103->setFromField("fraction_changed");
ROUTE103->setToNode("VL5_ANIMATOR");
ROUTE103->setToField("set_fraction");
ProtoBody45->addChildren(*ROUTE103);

CROUTE* ROUTE104 = new CROUTE();
ROUTE104->setFromNode("TIMER");
ROUTE104->setFromField("fraction_changed");
ROUTE104->setToNode("L_SHOULDER_ANIMATOR");
ROUTE104->setToField("set_fraction");
ProtoBody45->addChildren(*ROUTE104);

CROUTE* ROUTE105 = new CROUTE();
ROUTE105->setFromNode("TIMER");
ROUTE105->setFromField("fraction_changed");
ROUTE105->setToNode("L_ELBOW_ANIMATOR");
ROUTE105->setToField("set_fraction");
ProtoBody45->addChildren(*ROUTE105);

CROUTE* ROUTE106 = new CROUTE();
ROUTE106->setFromNode("TIMER");
ROUTE106->setFromField("fraction_changed");
ROUTE106->setToNode("R_SHOULDER_ANIMATOR");
ROUTE106->setToField("set_fraction");
ProtoBody45->addChildren(*ROUTE106);

CROUTE* ROUTE107 = new CROUTE();
ROUTE107->setFromNode("TIMER");
ROUTE107->setFromField("fraction_changed");
ROUTE107->setToNode("R_ELBOW_ANIMATOR");
ROUTE107->setToField("set_fraction");
ProtoBody45->addChildren(*ROUTE107);

ProtoDeclare17->setProtoBody(*ProtoBody45);

group->addChildren(*ProtoDeclare17);

CWorldInfo* WorldInfo108 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo108->setTitle("LOA1_KneelAnimation.x3d");
group->addChildren(*WorldInfo108);

CAnchor* Anchor109 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor109->setDescription("InterchangableActorsViaDynamicRouting");
Anchor109->setUrl(new CString[4]{"InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"}, 4);
Anchor109->setParameter(new CString[1]{"target=_blank"}, 1);
CShape* Shape110 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance111 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material112 = (CMaterial *)(m_pScene.createNode("Material"));
Material112->setDiffuseColor(new float[3]{1,1,0.2});
Appearance111->setMaterial(*Material112);

Shape110->setAppearance(*Appearance111);

CText* Text113 = (CText *)(m_pScene.createNode("Text"));
Text113->setString(new CString[6]{"LOA1_KneelAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."}, 6);
CFontStyle* FontStyle114 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle114->setSize(0.8);
FontStyle114->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text113->setFontStyle(*FontStyle114);

Shape110->setGeometry(Text113);

Anchor109->addChildren(*Shape110);

group->addChildren(*Anchor109);

X3D0->setScene(*Scene16);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
