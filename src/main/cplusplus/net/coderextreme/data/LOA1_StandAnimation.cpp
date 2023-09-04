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
meta2->setContent("LOA1_StandAnimation.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Humanoid animation prototype reusable by any Humanoid.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Cindy Ballreich cindy@ballreich.net 3Name3D, Joe Williams, Don Brutzman");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("rights");
meta5->setContent("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("translator");
meta6->setContent("Ozan APAYDIN");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("created");
meta7->setContent("1 December 2001");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("modified");
meta8->setContent("23 May 2020");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("TODO");
meta9->setContent("consider adding eyeball animation");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("http://www.HAnim.org");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("http://HAnim.org/Models");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("http://HAnim.org/Nodes");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("subject");
meta14->setContent("Nancy Stand Animation HAnim 2001");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("identifier");
meta15->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StandAnimation.x3d");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("generator");
meta16->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta16);

X3D0->setHead(*head1);

CScene* Scene17 = new CScene();
CProtoDeclare ProtoDeclare18 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="LOA1_StandAnimation" ><ProtoInterface><field accessType="inputOutput" type="SFTime" name="cycleInterval" value="0.00999999977648258"></field>
<field accessType="inputOutput" type="SFBool" name="enabled" value="true"></field>
<field accessType="inputOutput" type="SFBool" name="loop" value="true"></field>
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
<PositionInterpolator DEF="HUMANOIDROOT_POSITION_ANIMATOR" key="0 1" keyValue="0 0 0 0 0 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_translation_changed"></connect>
</IS>
</PositionInterpolator>
<OrientationInterpolator DEF="HUMANOIDROOT_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="SACROILIAC_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="lower_body_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_HIP_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_KNEE_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ANKLE_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_MIDTARSAL_ANIMATOR" key="0 1" keyValue="1 0 0 0 1 0 0 0"><IS><connect nodeField="value_changed" protoField="l_midtarsal_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_HIP_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_KNEE_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ANKLE_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_MIDTARSAL_ANIMATOR" key="0 1" keyValue="1 0 0 0 1 0 0 0"><IS><connect nodeField="value_changed" protoField="r_midtarsal_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="VL5_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="vl5_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="SKULLBASE_ANIMATOR" key="0 0.5 1" keyValue="0 0 1 0 -1 0 0 0.5 0 0 1 0"><IS><connect nodeField="value_changed" protoField="skullbase_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_SHOULDER_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_shoulder_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ELBOW_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_elbow_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_WRIST_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_wrist_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_SHOULDER_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_shoulder_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ELBOW_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_elbow_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_WRIST_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_wrist_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
</Group>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="HUMANOIDROOT_POSITION_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="HUMANOIDROOT_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="SACROILIAC_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_HIP_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_KNEE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_ANKLE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_MIDTARSAL_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_HIP_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_KNEE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_ANKLE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_MIDTARSAL_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="VL5_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="SKULLBASE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_SHOULDER_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_ELBOW_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_WRIST_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_SHOULDER_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_ELBOW_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_WRIST_ANIMATOR" toField="set_fraction"></ROUTE>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare18->setName("LOA1_StandAnimation");
CProtoInterface* ProtoInterface19 = new CProtoInterface();
Cfield* field20 = new Cfield();
field20->setAccessType("inputOutput");
field20->setType("SFTime");
field20->setName("cycleInterval");
field20->setValue("0.00999999977648258");
ProtoInterface19->addField(*field20);

Cfield* field21 = new Cfield();
field21->setAccessType("inputOutput");
field21->setType("SFBool");
field21->setName("enabled");
field21->setValue("true");
ProtoInterface19->addField(*field21);

Cfield* field22 = new Cfield();
field22->setAccessType("inputOutput");
field22->setType("SFBool");
field22->setName("loop");
field22->setValue("true");
ProtoInterface19->addField(*field22);

Cfield* field23 = new Cfield();
field23->setAccessType("inputOutput");
field23->setType("SFTime");
field23->setName("startTime");
ProtoInterface19->addField(*field23);

Cfield* field24 = new Cfield();
field24->setAccessType("inputOutput");
field24->setType("SFTime");
field24->setName("stopTime");
field24->setValue("-1");
ProtoInterface19->addField(*field24);

Cfield* field25 = new Cfield();
field25->setAccessType("outputOnly");
field25->setType("SFFloat");
field25->setName("fraction_changed");
ProtoInterface19->addField(*field25);

Cfield* field26 = new Cfield();
field26->setAccessType("outputOnly");
field26->setType("SFBool");
field26->setName("isActive");
ProtoInterface19->addField(*field26);

Cfield* field27 = new Cfield();
field27->setAccessType("outputOnly");
field27->setType("SFVec3f");
field27->setName("HumanoidRoot_translation_changed");
ProtoInterface19->addField(*field27);

Cfield* field28 = new Cfield();
field28->setAccessType("outputOnly");
field28->setType("SFRotation");
field28->setName("HumanoidRoot_rotation_changed");
ProtoInterface19->addField(*field28);

Cfield* field29 = new Cfield();
field29->setAccessType("outputOnly");
field29->setType("SFRotation");
field29->setName("lower_body_rotation_changed");
ProtoInterface19->addField(*field29);

Cfield* field30 = new Cfield();
field30->setAccessType("outputOnly");
field30->setType("SFRotation");
field30->setName("l_hip_rotation_changed");
ProtoInterface19->addField(*field30);

Cfield* field31 = new Cfield();
field31->setAccessType("outputOnly");
field31->setType("SFRotation");
field31->setName("l_knee_rotation_changed");
ProtoInterface19->addField(*field31);

Cfield* field32 = new Cfield();
field32->setAccessType("outputOnly");
field32->setType("SFRotation");
field32->setName("l_ankle_rotation_changed");
ProtoInterface19->addField(*field32);

Cfield* field33 = new Cfield();
field33->setAccessType("outputOnly");
field33->setType("SFRotation");
field33->setName("l_midtarsal_rotation_changed");
ProtoInterface19->addField(*field33);

Cfield* field34 = new Cfield();
field34->setAccessType("outputOnly");
field34->setType("SFRotation");
field34->setName("r_hip_rotation_changed");
ProtoInterface19->addField(*field34);

Cfield* field35 = new Cfield();
field35->setAccessType("outputOnly");
field35->setType("SFRotation");
field35->setName("r_knee_rotation_changed");
ProtoInterface19->addField(*field35);

Cfield* field36 = new Cfield();
field36->setAccessType("outputOnly");
field36->setType("SFRotation");
field36->setName("r_ankle_rotation_changed");
ProtoInterface19->addField(*field36);

Cfield* field37 = new Cfield();
field37->setAccessType("outputOnly");
field37->setType("SFRotation");
field37->setName("r_midtarsal_rotation_changed");
ProtoInterface19->addField(*field37);

Cfield* field38 = new Cfield();
field38->setAccessType("outputOnly");
field38->setType("SFRotation");
field38->setName("vl5_rotation_changed");
ProtoInterface19->addField(*field38);

Cfield* field39 = new Cfield();
field39->setAccessType("outputOnly");
field39->setType("SFRotation");
field39->setName("skullbase_rotation_changed");
ProtoInterface19->addField(*field39);

Cfield* field40 = new Cfield();
field40->setAccessType("outputOnly");
field40->setType("SFRotation");
field40->setName("l_shoulder_rotation_changed");
ProtoInterface19->addField(*field40);

Cfield* field41 = new Cfield();
field41->setAccessType("outputOnly");
field41->setType("SFRotation");
field41->setName("l_elbow_rotation_changed");
ProtoInterface19->addField(*field41);

Cfield* field42 = new Cfield();
field42->setAccessType("outputOnly");
field42->setType("SFRotation");
field42->setName("l_wrist_rotation_changed");
ProtoInterface19->addField(*field42);

Cfield* field43 = new Cfield();
field43->setAccessType("outputOnly");
field43->setType("SFRotation");
field43->setName("r_shoulder_rotation_changed");
ProtoInterface19->addField(*field43);

Cfield* field44 = new Cfield();
field44->setAccessType("outputOnly");
field44->setType("SFRotation");
field44->setName("r_elbow_rotation_changed");
ProtoInterface19->addField(*field44);

Cfield* field45 = new Cfield();
field45->setAccessType("outputOnly");
field45->setType("SFRotation");
field45->setName("r_wrist_rotation_changed");
ProtoInterface19->addField(*field45);

ProtoDeclare18->setProtoInterface(*ProtoInterface19);

CProtoBody* ProtoBody46 = new CProtoBody();
CGroup* Group47 = (CGroup *)(m_pScene.createNode("Group"));
CTimeSensor* TimeSensor48 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor48->setDEF("TIMER");
CIS* IS49 = new CIS();
Cconnect* connect50 = new Cconnect();
connect50->setNodeField("enabled");
connect50->setProtoField("enabled");
IS49->addConnect(*connect50);

Cconnect* connect51 = new Cconnect();
connect51->setNodeField("cycleInterval");
connect51->setProtoField("cycleInterval");
IS49->addConnect(*connect51);

Cconnect* connect52 = new Cconnect();
connect52->setNodeField("loop");
connect52->setProtoField("loop");
IS49->addConnect(*connect52);

Cconnect* connect53 = new Cconnect();
connect53->setNodeField("startTime");
connect53->setProtoField("startTime");
IS49->addConnect(*connect53);

Cconnect* connect54 = new Cconnect();
connect54->setNodeField("stopTime");
connect54->setProtoField("stopTime");
IS49->addConnect(*connect54);

Cconnect* connect55 = new Cconnect();
connect55->setNodeField("isActive");
connect55->setProtoField("isActive");
IS49->addConnect(*connect55);

Cconnect* connect56 = new Cconnect();
connect56->setNodeField("fraction_changed");
connect56->setProtoField("fraction_changed");
IS49->addConnect(*connect56);

TimeSensor48->setIS(*IS49);

Group47->addChildren(*TimeSensor48);

CPositionInterpolator* PositionInterpolator57 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator57->setDEF("HUMANOIDROOT_POSITION_ANIMATOR");
PositionInterpolator57->setKey(new float[2]{0,1}, 2);
PositionInterpolator57->setKeyValue(new float[6]{0,0,0,0,0,0});
CIS* IS58 = new CIS();
Cconnect* connect59 = new Cconnect();
connect59->setNodeField("value_changed");
connect59->setProtoField("HumanoidRoot_translation_changed");
IS58->addConnect(*connect59);

PositionInterpolator57->setIS(*IS58);

Group47->addChildren(*PositionInterpolator57);

COrientationInterpolator* OrientationInterpolator60 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator60->setDEF("HUMANOIDROOT_ANIMATOR");
OrientationInterpolator60->setKey(new float[2]{0,1}, 2);
OrientationInterpolator60->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS61 = new CIS();
Cconnect* connect62 = new Cconnect();
connect62->setNodeField("value_changed");
connect62->setProtoField("HumanoidRoot_rotation_changed");
IS61->addConnect(*connect62);

OrientationInterpolator60->setIS(*IS61);

Group47->addChildren(*OrientationInterpolator60);

COrientationInterpolator* OrientationInterpolator63 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator63->setDEF("SACROILIAC_ANIMATOR");
OrientationInterpolator63->setKey(new float[2]{0,1}, 2);
OrientationInterpolator63->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS64 = new CIS();
Cconnect* connect65 = new Cconnect();
connect65->setNodeField("value_changed");
connect65->setProtoField("lower_body_rotation_changed");
IS64->addConnect(*connect65);

OrientationInterpolator63->setIS(*IS64);

Group47->addChildren(*OrientationInterpolator63);

COrientationInterpolator* OrientationInterpolator66 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator66->setDEF("L_HIP_ANIMATOR");
OrientationInterpolator66->setKey(new float[2]{0,1}, 2);
OrientationInterpolator66->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS67 = new CIS();
Cconnect* connect68 = new Cconnect();
connect68->setNodeField("value_changed");
connect68->setProtoField("l_hip_rotation_changed");
IS67->addConnect(*connect68);

OrientationInterpolator66->setIS(*IS67);

Group47->addChildren(*OrientationInterpolator66);

COrientationInterpolator* OrientationInterpolator69 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator69->setDEF("L_KNEE_ANIMATOR");
OrientationInterpolator69->setKey(new float[2]{0,1}, 2);
OrientationInterpolator69->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS70 = new CIS();
Cconnect* connect71 = new Cconnect();
connect71->setNodeField("value_changed");
connect71->setProtoField("l_knee_rotation_changed");
IS70->addConnect(*connect71);

OrientationInterpolator69->setIS(*IS70);

Group47->addChildren(*OrientationInterpolator69);

COrientationInterpolator* OrientationInterpolator72 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator72->setDEF("L_ANKLE_ANIMATOR");
OrientationInterpolator72->setKey(new float[2]{0,1}, 2);
OrientationInterpolator72->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS73 = new CIS();
Cconnect* connect74 = new Cconnect();
connect74->setNodeField("value_changed");
connect74->setProtoField("l_ankle_rotation_changed");
IS73->addConnect(*connect74);

OrientationInterpolator72->setIS(*IS73);

Group47->addChildren(*OrientationInterpolator72);

COrientationInterpolator* OrientationInterpolator75 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator75->setDEF("L_MIDTARSAL_ANIMATOR");
OrientationInterpolator75->setKey(new float[2]{0,1}, 2);
OrientationInterpolator75->setKeyValue(new float[8]{1,0,0,0,1,0,0,0});
CIS* IS76 = new CIS();
Cconnect* connect77 = new Cconnect();
connect77->setNodeField("value_changed");
connect77->setProtoField("l_midtarsal_rotation_changed");
IS76->addConnect(*connect77);

OrientationInterpolator75->setIS(*IS76);

Group47->addChildren(*OrientationInterpolator75);

COrientationInterpolator* OrientationInterpolator78 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator78->setDEF("R_HIP_ANIMATOR");
OrientationInterpolator78->setKey(new float[2]{0,1}, 2);
OrientationInterpolator78->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS79 = new CIS();
Cconnect* connect80 = new Cconnect();
connect80->setNodeField("value_changed");
connect80->setProtoField("r_hip_rotation_changed");
IS79->addConnect(*connect80);

OrientationInterpolator78->setIS(*IS79);

Group47->addChildren(*OrientationInterpolator78);

COrientationInterpolator* OrientationInterpolator81 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator81->setDEF("R_KNEE_ANIMATOR");
OrientationInterpolator81->setKey(new float[2]{0,1}, 2);
OrientationInterpolator81->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS82 = new CIS();
Cconnect* connect83 = new Cconnect();
connect83->setNodeField("value_changed");
connect83->setProtoField("r_knee_rotation_changed");
IS82->addConnect(*connect83);

OrientationInterpolator81->setIS(*IS82);

Group47->addChildren(*OrientationInterpolator81);

COrientationInterpolator* OrientationInterpolator84 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator84->setDEF("R_ANKLE_ANIMATOR");
OrientationInterpolator84->setKey(new float[2]{0,1}, 2);
OrientationInterpolator84->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS85 = new CIS();
Cconnect* connect86 = new Cconnect();
connect86->setNodeField("value_changed");
connect86->setProtoField("r_ankle_rotation_changed");
IS85->addConnect(*connect86);

OrientationInterpolator84->setIS(*IS85);

Group47->addChildren(*OrientationInterpolator84);

COrientationInterpolator* OrientationInterpolator87 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator87->setDEF("R_MIDTARSAL_ANIMATOR");
OrientationInterpolator87->setKey(new float[2]{0,1}, 2);
OrientationInterpolator87->setKeyValue(new float[8]{1,0,0,0,1,0,0,0});
CIS* IS88 = new CIS();
Cconnect* connect89 = new Cconnect();
connect89->setNodeField("value_changed");
connect89->setProtoField("r_midtarsal_rotation_changed");
IS88->addConnect(*connect89);

OrientationInterpolator87->setIS(*IS88);

Group47->addChildren(*OrientationInterpolator87);

COrientationInterpolator* OrientationInterpolator90 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator90->setDEF("VL5_ANIMATOR");
OrientationInterpolator90->setKey(new float[2]{0,1}, 2);
OrientationInterpolator90->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS91 = new CIS();
Cconnect* connect92 = new Cconnect();
connect92->setNodeField("value_changed");
connect92->setProtoField("vl5_rotation_changed");
IS91->addConnect(*connect92);

OrientationInterpolator90->setIS(*IS91);

Group47->addChildren(*OrientationInterpolator90);

COrientationInterpolator* OrientationInterpolator93 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator93->setDEF("SKULLBASE_ANIMATOR");
OrientationInterpolator93->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator93->setKeyValue(new float[12]{0,0,1,0,-1,0,0,0.5,0,0,1,0});
CIS* IS94 = new CIS();
Cconnect* connect95 = new Cconnect();
connect95->setNodeField("value_changed");
connect95->setProtoField("skullbase_rotation_changed");
IS94->addConnect(*connect95);

OrientationInterpolator93->setIS(*IS94);

Group47->addChildren(*OrientationInterpolator93);

COrientationInterpolator* OrientationInterpolator96 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator96->setDEF("L_SHOULDER_ANIMATOR");
OrientationInterpolator96->setKey(new float[2]{0,1}, 2);
OrientationInterpolator96->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS97 = new CIS();
Cconnect* connect98 = new Cconnect();
connect98->setNodeField("value_changed");
connect98->setProtoField("l_shoulder_rotation_changed");
IS97->addConnect(*connect98);

OrientationInterpolator96->setIS(*IS97);

Group47->addChildren(*OrientationInterpolator96);

COrientationInterpolator* OrientationInterpolator99 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator99->setDEF("L_ELBOW_ANIMATOR");
OrientationInterpolator99->setKey(new float[2]{0,1}, 2);
OrientationInterpolator99->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS100 = new CIS();
Cconnect* connect101 = new Cconnect();
connect101->setNodeField("value_changed");
connect101->setProtoField("l_elbow_rotation_changed");
IS100->addConnect(*connect101);

OrientationInterpolator99->setIS(*IS100);

Group47->addChildren(*OrientationInterpolator99);

COrientationInterpolator* OrientationInterpolator102 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator102->setDEF("L_WRIST_ANIMATOR");
OrientationInterpolator102->setKey(new float[2]{0,1}, 2);
OrientationInterpolator102->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS103 = new CIS();
Cconnect* connect104 = new Cconnect();
connect104->setNodeField("value_changed");
connect104->setProtoField("l_wrist_rotation_changed");
IS103->addConnect(*connect104);

OrientationInterpolator102->setIS(*IS103);

Group47->addChildren(*OrientationInterpolator102);

COrientationInterpolator* OrientationInterpolator105 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator105->setDEF("R_SHOULDER_ANIMATOR");
OrientationInterpolator105->setKey(new float[2]{0,1}, 2);
OrientationInterpolator105->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS106 = new CIS();
Cconnect* connect107 = new Cconnect();
connect107->setNodeField("value_changed");
connect107->setProtoField("r_shoulder_rotation_changed");
IS106->addConnect(*connect107);

OrientationInterpolator105->setIS(*IS106);

Group47->addChildren(*OrientationInterpolator105);

COrientationInterpolator* OrientationInterpolator108 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator108->setDEF("R_ELBOW_ANIMATOR");
OrientationInterpolator108->setKey(new float[2]{0,1}, 2);
OrientationInterpolator108->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS109 = new CIS();
Cconnect* connect110 = new Cconnect();
connect110->setNodeField("value_changed");
connect110->setProtoField("r_elbow_rotation_changed");
IS109->addConnect(*connect110);

OrientationInterpolator108->setIS(*IS109);

Group47->addChildren(*OrientationInterpolator108);

COrientationInterpolator* OrientationInterpolator111 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator111->setDEF("R_WRIST_ANIMATOR");
OrientationInterpolator111->setKey(new float[2]{0,1}, 2);
OrientationInterpolator111->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS112 = new CIS();
Cconnect* connect113 = new Cconnect();
connect113->setNodeField("value_changed");
connect113->setProtoField("r_wrist_rotation_changed");
IS112->addConnect(*connect113);

OrientationInterpolator111->setIS(*IS112);

Group47->addChildren(*OrientationInterpolator111);

ProtoBody46->addChildren(*Group47);

CROUTE* ROUTE114 = new CROUTE();
ROUTE114->setFromNode("TIMER");
ROUTE114->setFromField("fraction_changed");
ROUTE114->setToNode("HUMANOIDROOT_POSITION_ANIMATOR");
ROUTE114->setToField("set_fraction");
ProtoBody46->addChildren(*ROUTE114);

CROUTE* ROUTE115 = new CROUTE();
ROUTE115->setFromNode("TIMER");
ROUTE115->setFromField("fraction_changed");
ROUTE115->setToNode("HUMANOIDROOT_ANIMATOR");
ROUTE115->setToField("set_fraction");
ProtoBody46->addChildren(*ROUTE115);

CROUTE* ROUTE116 = new CROUTE();
ROUTE116->setFromNode("TIMER");
ROUTE116->setFromField("fraction_changed");
ROUTE116->setToNode("SACROILIAC_ANIMATOR");
ROUTE116->setToField("set_fraction");
ProtoBody46->addChildren(*ROUTE116);

CROUTE* ROUTE117 = new CROUTE();
ROUTE117->setFromNode("TIMER");
ROUTE117->setFromField("fraction_changed");
ROUTE117->setToNode("L_HIP_ANIMATOR");
ROUTE117->setToField("set_fraction");
ProtoBody46->addChildren(*ROUTE117);

CROUTE* ROUTE118 = new CROUTE();
ROUTE118->setFromNode("TIMER");
ROUTE118->setFromField("fraction_changed");
ROUTE118->setToNode("L_KNEE_ANIMATOR");
ROUTE118->setToField("set_fraction");
ProtoBody46->addChildren(*ROUTE118);

CROUTE* ROUTE119 = new CROUTE();
ROUTE119->setFromNode("TIMER");
ROUTE119->setFromField("fraction_changed");
ROUTE119->setToNode("L_ANKLE_ANIMATOR");
ROUTE119->setToField("set_fraction");
ProtoBody46->addChildren(*ROUTE119);

CROUTE* ROUTE120 = new CROUTE();
ROUTE120->setFromNode("TIMER");
ROUTE120->setFromField("fraction_changed");
ROUTE120->setToNode("L_MIDTARSAL_ANIMATOR");
ROUTE120->setToField("set_fraction");
ProtoBody46->addChildren(*ROUTE120);

CROUTE* ROUTE121 = new CROUTE();
ROUTE121->setFromNode("TIMER");
ROUTE121->setFromField("fraction_changed");
ROUTE121->setToNode("R_HIP_ANIMATOR");
ROUTE121->setToField("set_fraction");
ProtoBody46->addChildren(*ROUTE121);

CROUTE* ROUTE122 = new CROUTE();
ROUTE122->setFromNode("TIMER");
ROUTE122->setFromField("fraction_changed");
ROUTE122->setToNode("R_KNEE_ANIMATOR");
ROUTE122->setToField("set_fraction");
ProtoBody46->addChildren(*ROUTE122);

CROUTE* ROUTE123 = new CROUTE();
ROUTE123->setFromNode("TIMER");
ROUTE123->setFromField("fraction_changed");
ROUTE123->setToNode("R_ANKLE_ANIMATOR");
ROUTE123->setToField("set_fraction");
ProtoBody46->addChildren(*ROUTE123);

CROUTE* ROUTE124 = new CROUTE();
ROUTE124->setFromNode("TIMER");
ROUTE124->setFromField("fraction_changed");
ROUTE124->setToNode("R_MIDTARSAL_ANIMATOR");
ROUTE124->setToField("set_fraction");
ProtoBody46->addChildren(*ROUTE124);

CROUTE* ROUTE125 = new CROUTE();
ROUTE125->setFromNode("TIMER");
ROUTE125->setFromField("fraction_changed");
ROUTE125->setToNode("VL5_ANIMATOR");
ROUTE125->setToField("set_fraction");
ProtoBody46->addChildren(*ROUTE125);

CROUTE* ROUTE126 = new CROUTE();
ROUTE126->setFromNode("TIMER");
ROUTE126->setFromField("fraction_changed");
ROUTE126->setToNode("SKULLBASE_ANIMATOR");
ROUTE126->setToField("set_fraction");
ProtoBody46->addChildren(*ROUTE126);

CROUTE* ROUTE127 = new CROUTE();
ROUTE127->setFromNode("TIMER");
ROUTE127->setFromField("fraction_changed");
ROUTE127->setToNode("L_SHOULDER_ANIMATOR");
ROUTE127->setToField("set_fraction");
ProtoBody46->addChildren(*ROUTE127);

CROUTE* ROUTE128 = new CROUTE();
ROUTE128->setFromNode("TIMER");
ROUTE128->setFromField("fraction_changed");
ROUTE128->setToNode("L_ELBOW_ANIMATOR");
ROUTE128->setToField("set_fraction");
ProtoBody46->addChildren(*ROUTE128);

CROUTE* ROUTE129 = new CROUTE();
ROUTE129->setFromNode("TIMER");
ROUTE129->setFromField("fraction_changed");
ROUTE129->setToNode("L_WRIST_ANIMATOR");
ROUTE129->setToField("set_fraction");
ProtoBody46->addChildren(*ROUTE129);

CROUTE* ROUTE130 = new CROUTE();
ROUTE130->setFromNode("TIMER");
ROUTE130->setFromField("fraction_changed");
ROUTE130->setToNode("R_SHOULDER_ANIMATOR");
ROUTE130->setToField("set_fraction");
ProtoBody46->addChildren(*ROUTE130);

CROUTE* ROUTE131 = new CROUTE();
ROUTE131->setFromNode("TIMER");
ROUTE131->setFromField("fraction_changed");
ROUTE131->setToNode("R_ELBOW_ANIMATOR");
ROUTE131->setToField("set_fraction");
ProtoBody46->addChildren(*ROUTE131);

CROUTE* ROUTE132 = new CROUTE();
ROUTE132->setFromNode("TIMER");
ROUTE132->setFromField("fraction_changed");
ROUTE132->setToNode("R_WRIST_ANIMATOR");
ROUTE132->setToField("set_fraction");
ProtoBody46->addChildren(*ROUTE132);

ProtoDeclare18->setProtoBody(*ProtoBody46);

group->addChildren(*ProtoDeclare18);

CWorldInfo* WorldInfo133 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo133->setTitle("LOA1_StandAnimation.x3d");
group->addChildren(*WorldInfo133);

CAnchor* Anchor134 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor134->setDescription("InterchangableActorsViaDynamicRouting");
Anchor134->setUrl(new CString[4]{"InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"}, 4);
Anchor134->setParameter(new CString[1]{"target=_blank"}, 1);
CShape* Shape135 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance136 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material137 = (CMaterial *)(m_pScene.createNode("Material"));
Material137->setDiffuseColor(new float[3]{1,1,0.2});
Appearance136->setMaterial(*Material137);

Shape135->setAppearance(*Appearance136);

CText* Text138 = (CText *)(m_pScene.createNode("Text"));
Text138->setString(new CString[6]{"LOA1_StandAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."}, 6);
CFontStyle* FontStyle139 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle139->setSize(0.8);
FontStyle139->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text138->setFontStyle(*FontStyle139);

Shape135->setGeometry(Text138);

Anchor134->addChildren(*Shape135);

group->addChildren(*Anchor134);

X3D0->setScene(*Scene17);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
