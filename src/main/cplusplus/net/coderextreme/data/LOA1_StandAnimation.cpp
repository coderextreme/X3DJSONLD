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

Cmeta* meta17 = new Cmeta();
meta17->setName("license");
meta17->setContent("../license.html");
head1->addMeta(*meta17);

X3D0->setHead(*head1);

CScene* Scene18 = new CScene();
CWorldInfo* WorldInfo19 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo19->setTitle("LOA1_StandAnimation.x3d");
group->addChildren(*WorldInfo19);

CProtoDeclare ProtoDeclare20 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="LOA1_StandAnimation" ><ProtoInterface><field name="cycleInterval" accessType="inputOutput" type="SFTime" value="0.009999999776482582"></field>
<field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="loop" accessType="inputOutput" type="SFBool" value="true"></field>
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
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="HUMANOIDROOT_POSITION_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="HUMANOIDROOT_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="SACROILIAC_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_HIP_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_KNEE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_ANKLE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_MIDTARSAL_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_HIP_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_KNEE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_ANKLE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_MIDTARSAL_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="VL5_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="SKULLBASE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_SHOULDER_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_ELBOW_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_WRIST_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_SHOULDER_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_ELBOW_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_WRIST_ANIMATOR"></ROUTE>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare20->setName("LOA1_StandAnimation");
CProtoInterface* ProtoInterface21 = new CProtoInterface();
Cfield* field22 = new Cfield();
field22->setName("cycleInterval");
field22->setAccessType("inputOutput");
field22->setType("SFTime");
field22->setValue("0.009999999776482582");
ProtoInterface21->addField(*field22);

Cfield* field23 = new Cfield();
field23->setName("enabled");
field23->setAccessType("inputOutput");
field23->setType("SFBool");
field23->setValue("true");
ProtoInterface21->addField(*field23);

Cfield* field24 = new Cfield();
field24->setName("loop");
field24->setAccessType("inputOutput");
field24->setType("SFBool");
field24->setValue("true");
ProtoInterface21->addField(*field24);

Cfield* field25 = new Cfield();
field25->setName("startTime");
field25->setAccessType("inputOutput");
field25->setType("SFTime");
field25->setValue("0");
ProtoInterface21->addField(*field25);

Cfield* field26 = new Cfield();
field26->setName("stopTime");
field26->setAccessType("inputOutput");
field26->setType("SFTime");
field26->setValue("-1");
ProtoInterface21->addField(*field26);

Cfield* field27 = new Cfield();
field27->setName("fraction_changed");
field27->setAccessType("outputOnly");
field27->setType("SFFloat");
ProtoInterface21->addField(*field27);

Cfield* field28 = new Cfield();
field28->setName("isActive");
field28->setAccessType("outputOnly");
field28->setType("SFBool");
ProtoInterface21->addField(*field28);

Cfield* field29 = new Cfield();
field29->setName("HumanoidRoot_translation_changed");
field29->setAccessType("outputOnly");
field29->setType("SFVec3f");
ProtoInterface21->addField(*field29);

Cfield* field30 = new Cfield();
field30->setName("HumanoidRoot_rotation_changed");
field30->setAccessType("outputOnly");
field30->setType("SFRotation");
ProtoInterface21->addField(*field30);

Cfield* field31 = new Cfield();
field31->setName("lower_body_rotation_changed");
field31->setAccessType("outputOnly");
field31->setType("SFRotation");
ProtoInterface21->addField(*field31);

Cfield* field32 = new Cfield();
field32->setName("l_hip_rotation_changed");
field32->setAccessType("outputOnly");
field32->setType("SFRotation");
ProtoInterface21->addField(*field32);

Cfield* field33 = new Cfield();
field33->setName("l_knee_rotation_changed");
field33->setAccessType("outputOnly");
field33->setType("SFRotation");
ProtoInterface21->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("l_ankle_rotation_changed");
field34->setAccessType("outputOnly");
field34->setType("SFRotation");
ProtoInterface21->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("l_midtarsal_rotation_changed");
field35->setAccessType("outputOnly");
field35->setType("SFRotation");
ProtoInterface21->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("r_hip_rotation_changed");
field36->setAccessType("outputOnly");
field36->setType("SFRotation");
ProtoInterface21->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("r_knee_rotation_changed");
field37->setAccessType("outputOnly");
field37->setType("SFRotation");
ProtoInterface21->addField(*field37);

Cfield* field38 = new Cfield();
field38->setName("r_ankle_rotation_changed");
field38->setAccessType("outputOnly");
field38->setType("SFRotation");
ProtoInterface21->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("r_midtarsal_rotation_changed");
field39->setAccessType("outputOnly");
field39->setType("SFRotation");
ProtoInterface21->addField(*field39);

Cfield* field40 = new Cfield();
field40->setName("vl5_rotation_changed");
field40->setAccessType("outputOnly");
field40->setType("SFRotation");
ProtoInterface21->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("skullbase_rotation_changed");
field41->setAccessType("outputOnly");
field41->setType("SFRotation");
ProtoInterface21->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("l_shoulder_rotation_changed");
field42->setAccessType("outputOnly");
field42->setType("SFRotation");
ProtoInterface21->addField(*field42);

Cfield* field43 = new Cfield();
field43->setName("l_elbow_rotation_changed");
field43->setAccessType("outputOnly");
field43->setType("SFRotation");
ProtoInterface21->addField(*field43);

Cfield* field44 = new Cfield();
field44->setName("l_wrist_rotation_changed");
field44->setAccessType("outputOnly");
field44->setType("SFRotation");
ProtoInterface21->addField(*field44);

Cfield* field45 = new Cfield();
field45->setName("r_shoulder_rotation_changed");
field45->setAccessType("outputOnly");
field45->setType("SFRotation");
ProtoInterface21->addField(*field45);

Cfield* field46 = new Cfield();
field46->setName("r_elbow_rotation_changed");
field46->setAccessType("outputOnly");
field46->setType("SFRotation");
ProtoInterface21->addField(*field46);

Cfield* field47 = new Cfield();
field47->setName("r_wrist_rotation_changed");
field47->setAccessType("outputOnly");
field47->setType("SFRotation");
ProtoInterface21->addField(*field47);

ProtoDeclare20->setProtoInterface(*ProtoInterface21);

CProtoBody* ProtoBody48 = new CProtoBody();
CGroup* Group49 = (CGroup *)(m_pScene.createNode("Group"));
CTimeSensor* TimeSensor50 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor50->setDEF("TIMER");
CIS* IS51 = new CIS();
Cconnect* connect52 = new Cconnect();
connect52->setNodeField("cycleInterval");
connect52->setProtoField("cycleInterval");
IS51->addConnect(*connect52);

Cconnect* connect53 = new Cconnect();
connect53->setNodeField("enabled");
connect53->setProtoField("enabled");
IS51->addConnect(*connect53);

Cconnect* connect54 = new Cconnect();
connect54->setNodeField("loop");
connect54->setProtoField("loop");
IS51->addConnect(*connect54);

Cconnect* connect55 = new Cconnect();
connect55->setNodeField("startTime");
connect55->setProtoField("startTime");
IS51->addConnect(*connect55);

Cconnect* connect56 = new Cconnect();
connect56->setNodeField("stopTime");
connect56->setProtoField("stopTime");
IS51->addConnect(*connect56);

Cconnect* connect57 = new Cconnect();
connect57->setNodeField("fraction_changed");
connect57->setProtoField("fraction_changed");
IS51->addConnect(*connect57);

Cconnect* connect58 = new Cconnect();
connect58->setNodeField("isActive");
connect58->setProtoField("isActive");
IS51->addConnect(*connect58);

TimeSensor50->setIS(*IS51);

Group49->addChildren(*TimeSensor50);

CPositionInterpolator* PositionInterpolator59 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator59->setDEF("HUMANOIDROOT_POSITION_ANIMATOR");
PositionInterpolator59->setKey(new float[2]{0,1}, 2);
PositionInterpolator59->setKeyValue(new float[6]{0,0,0,0,0,0});
CIS* IS60 = new CIS();
Cconnect* connect61 = new Cconnect();
connect61->setNodeField("value_changed");
connect61->setProtoField("HumanoidRoot_translation_changed");
IS60->addConnect(*connect61);

PositionInterpolator59->setIS(*IS60);

Group49->addChildren(*PositionInterpolator59);

COrientationInterpolator* OrientationInterpolator62 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator62->setDEF("HUMANOIDROOT_ANIMATOR");
OrientationInterpolator62->setKey(new float[2]{0,1}, 2);
OrientationInterpolator62->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS63 = new CIS();
Cconnect* connect64 = new Cconnect();
connect64->setNodeField("value_changed");
connect64->setProtoField("HumanoidRoot_rotation_changed");
IS63->addConnect(*connect64);

OrientationInterpolator62->setIS(*IS63);

Group49->addChildren(*OrientationInterpolator62);

COrientationInterpolator* OrientationInterpolator65 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator65->setDEF("SACROILIAC_ANIMATOR");
OrientationInterpolator65->setKey(new float[2]{0,1}, 2);
OrientationInterpolator65->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS66 = new CIS();
Cconnect* connect67 = new Cconnect();
connect67->setNodeField("value_changed");
connect67->setProtoField("lower_body_rotation_changed");
IS66->addConnect(*connect67);

OrientationInterpolator65->setIS(*IS66);

Group49->addChildren(*OrientationInterpolator65);

COrientationInterpolator* OrientationInterpolator68 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator68->setDEF("L_HIP_ANIMATOR");
OrientationInterpolator68->setKey(new float[2]{0,1}, 2);
OrientationInterpolator68->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS69 = new CIS();
Cconnect* connect70 = new Cconnect();
connect70->setNodeField("value_changed");
connect70->setProtoField("l_hip_rotation_changed");
IS69->addConnect(*connect70);

OrientationInterpolator68->setIS(*IS69);

Group49->addChildren(*OrientationInterpolator68);

COrientationInterpolator* OrientationInterpolator71 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator71->setDEF("L_KNEE_ANIMATOR");
OrientationInterpolator71->setKey(new float[2]{0,1}, 2);
OrientationInterpolator71->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS72 = new CIS();
Cconnect* connect73 = new Cconnect();
connect73->setNodeField("value_changed");
connect73->setProtoField("l_knee_rotation_changed");
IS72->addConnect(*connect73);

OrientationInterpolator71->setIS(*IS72);

Group49->addChildren(*OrientationInterpolator71);

COrientationInterpolator* OrientationInterpolator74 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator74->setDEF("L_ANKLE_ANIMATOR");
OrientationInterpolator74->setKey(new float[2]{0,1}, 2);
OrientationInterpolator74->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS75 = new CIS();
Cconnect* connect76 = new Cconnect();
connect76->setNodeField("value_changed");
connect76->setProtoField("l_ankle_rotation_changed");
IS75->addConnect(*connect76);

OrientationInterpolator74->setIS(*IS75);

Group49->addChildren(*OrientationInterpolator74);

COrientationInterpolator* OrientationInterpolator77 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator77->setDEF("L_MIDTARSAL_ANIMATOR");
OrientationInterpolator77->setKey(new float[2]{0,1}, 2);
OrientationInterpolator77->setKeyValue(new float[8]{1,0,0,0,1,0,0,0});
CIS* IS78 = new CIS();
Cconnect* connect79 = new Cconnect();
connect79->setNodeField("value_changed");
connect79->setProtoField("l_midtarsal_rotation_changed");
IS78->addConnect(*connect79);

OrientationInterpolator77->setIS(*IS78);

Group49->addChildren(*OrientationInterpolator77);

COrientationInterpolator* OrientationInterpolator80 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator80->setDEF("R_HIP_ANIMATOR");
OrientationInterpolator80->setKey(new float[2]{0,1}, 2);
OrientationInterpolator80->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS81 = new CIS();
Cconnect* connect82 = new Cconnect();
connect82->setNodeField("value_changed");
connect82->setProtoField("r_hip_rotation_changed");
IS81->addConnect(*connect82);

OrientationInterpolator80->setIS(*IS81);

Group49->addChildren(*OrientationInterpolator80);

COrientationInterpolator* OrientationInterpolator83 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator83->setDEF("R_KNEE_ANIMATOR");
OrientationInterpolator83->setKey(new float[2]{0,1}, 2);
OrientationInterpolator83->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS84 = new CIS();
Cconnect* connect85 = new Cconnect();
connect85->setNodeField("value_changed");
connect85->setProtoField("r_knee_rotation_changed");
IS84->addConnect(*connect85);

OrientationInterpolator83->setIS(*IS84);

Group49->addChildren(*OrientationInterpolator83);

COrientationInterpolator* OrientationInterpolator86 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator86->setDEF("R_ANKLE_ANIMATOR");
OrientationInterpolator86->setKey(new float[2]{0,1}, 2);
OrientationInterpolator86->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS87 = new CIS();
Cconnect* connect88 = new Cconnect();
connect88->setNodeField("value_changed");
connect88->setProtoField("r_ankle_rotation_changed");
IS87->addConnect(*connect88);

OrientationInterpolator86->setIS(*IS87);

Group49->addChildren(*OrientationInterpolator86);

COrientationInterpolator* OrientationInterpolator89 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator89->setDEF("R_MIDTARSAL_ANIMATOR");
OrientationInterpolator89->setKey(new float[2]{0,1}, 2);
OrientationInterpolator89->setKeyValue(new float[8]{1,0,0,0,1,0,0,0});
CIS* IS90 = new CIS();
Cconnect* connect91 = new Cconnect();
connect91->setNodeField("value_changed");
connect91->setProtoField("r_midtarsal_rotation_changed");
IS90->addConnect(*connect91);

OrientationInterpolator89->setIS(*IS90);

Group49->addChildren(*OrientationInterpolator89);

COrientationInterpolator* OrientationInterpolator92 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator92->setDEF("VL5_ANIMATOR");
OrientationInterpolator92->setKey(new float[2]{0,1}, 2);
OrientationInterpolator92->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS93 = new CIS();
Cconnect* connect94 = new Cconnect();
connect94->setNodeField("value_changed");
connect94->setProtoField("vl5_rotation_changed");
IS93->addConnect(*connect94);

OrientationInterpolator92->setIS(*IS93);

Group49->addChildren(*OrientationInterpolator92);

COrientationInterpolator* OrientationInterpolator95 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator95->setDEF("SKULLBASE_ANIMATOR");
OrientationInterpolator95->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator95->setKeyValue(new float[12]{0,0,1,0,-1,0,0,0.5,0,0,1,0});
CIS* IS96 = new CIS();
Cconnect* connect97 = new Cconnect();
connect97->setNodeField("value_changed");
connect97->setProtoField("skullbase_rotation_changed");
IS96->addConnect(*connect97);

OrientationInterpolator95->setIS(*IS96);

Group49->addChildren(*OrientationInterpolator95);

COrientationInterpolator* OrientationInterpolator98 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator98->setDEF("L_SHOULDER_ANIMATOR");
OrientationInterpolator98->setKey(new float[2]{0,1}, 2);
OrientationInterpolator98->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS99 = new CIS();
Cconnect* connect100 = new Cconnect();
connect100->setNodeField("value_changed");
connect100->setProtoField("l_shoulder_rotation_changed");
IS99->addConnect(*connect100);

OrientationInterpolator98->setIS(*IS99);

Group49->addChildren(*OrientationInterpolator98);

COrientationInterpolator* OrientationInterpolator101 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator101->setDEF("L_ELBOW_ANIMATOR");
OrientationInterpolator101->setKey(new float[2]{0,1}, 2);
OrientationInterpolator101->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS102 = new CIS();
Cconnect* connect103 = new Cconnect();
connect103->setNodeField("value_changed");
connect103->setProtoField("l_elbow_rotation_changed");
IS102->addConnect(*connect103);

OrientationInterpolator101->setIS(*IS102);

Group49->addChildren(*OrientationInterpolator101);

COrientationInterpolator* OrientationInterpolator104 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator104->setDEF("L_WRIST_ANIMATOR");
OrientationInterpolator104->setKey(new float[2]{0,1}, 2);
OrientationInterpolator104->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS105 = new CIS();
Cconnect* connect106 = new Cconnect();
connect106->setNodeField("value_changed");
connect106->setProtoField("l_wrist_rotation_changed");
IS105->addConnect(*connect106);

OrientationInterpolator104->setIS(*IS105);

Group49->addChildren(*OrientationInterpolator104);

COrientationInterpolator* OrientationInterpolator107 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator107->setDEF("R_SHOULDER_ANIMATOR");
OrientationInterpolator107->setKey(new float[2]{0,1}, 2);
OrientationInterpolator107->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS108 = new CIS();
Cconnect* connect109 = new Cconnect();
connect109->setNodeField("value_changed");
connect109->setProtoField("r_shoulder_rotation_changed");
IS108->addConnect(*connect109);

OrientationInterpolator107->setIS(*IS108);

Group49->addChildren(*OrientationInterpolator107);

COrientationInterpolator* OrientationInterpolator110 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator110->setDEF("R_ELBOW_ANIMATOR");
OrientationInterpolator110->setKey(new float[2]{0,1}, 2);
OrientationInterpolator110->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS111 = new CIS();
Cconnect* connect112 = new Cconnect();
connect112->setNodeField("value_changed");
connect112->setProtoField("r_elbow_rotation_changed");
IS111->addConnect(*connect112);

OrientationInterpolator110->setIS(*IS111);

Group49->addChildren(*OrientationInterpolator110);

COrientationInterpolator* OrientationInterpolator113 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator113->setDEF("R_WRIST_ANIMATOR");
OrientationInterpolator113->setKey(new float[2]{0,1}, 2);
OrientationInterpolator113->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS114 = new CIS();
Cconnect* connect115 = new Cconnect();
connect115->setNodeField("value_changed");
connect115->setProtoField("r_wrist_rotation_changed");
IS114->addConnect(*connect115);

OrientationInterpolator113->setIS(*IS114);

Group49->addChildren(*OrientationInterpolator113);

ProtoBody48->addChildren(*Group49);

CROUTE* ROUTE116 = new CROUTE();
ROUTE116->setFromField("fraction_changed");
ROUTE116->setFromNode("TIMER");
ROUTE116->setToField("set_fraction");
ROUTE116->setToNode("HUMANOIDROOT_POSITION_ANIMATOR");
ProtoBody48->addChildren(*ROUTE116);

CROUTE* ROUTE117 = new CROUTE();
ROUTE117->setFromField("fraction_changed");
ROUTE117->setFromNode("TIMER");
ROUTE117->setToField("set_fraction");
ROUTE117->setToNode("HUMANOIDROOT_ANIMATOR");
ProtoBody48->addChildren(*ROUTE117);

CROUTE* ROUTE118 = new CROUTE();
ROUTE118->setFromField("fraction_changed");
ROUTE118->setFromNode("TIMER");
ROUTE118->setToField("set_fraction");
ROUTE118->setToNode("SACROILIAC_ANIMATOR");
ProtoBody48->addChildren(*ROUTE118);

CROUTE* ROUTE119 = new CROUTE();
ROUTE119->setFromField("fraction_changed");
ROUTE119->setFromNode("TIMER");
ROUTE119->setToField("set_fraction");
ROUTE119->setToNode("L_HIP_ANIMATOR");
ProtoBody48->addChildren(*ROUTE119);

CROUTE* ROUTE120 = new CROUTE();
ROUTE120->setFromField("fraction_changed");
ROUTE120->setFromNode("TIMER");
ROUTE120->setToField("set_fraction");
ROUTE120->setToNode("L_KNEE_ANIMATOR");
ProtoBody48->addChildren(*ROUTE120);

CROUTE* ROUTE121 = new CROUTE();
ROUTE121->setFromField("fraction_changed");
ROUTE121->setFromNode("TIMER");
ROUTE121->setToField("set_fraction");
ROUTE121->setToNode("L_ANKLE_ANIMATOR");
ProtoBody48->addChildren(*ROUTE121);

CROUTE* ROUTE122 = new CROUTE();
ROUTE122->setFromField("fraction_changed");
ROUTE122->setFromNode("TIMER");
ROUTE122->setToField("set_fraction");
ROUTE122->setToNode("L_MIDTARSAL_ANIMATOR");
ProtoBody48->addChildren(*ROUTE122);

CROUTE* ROUTE123 = new CROUTE();
ROUTE123->setFromField("fraction_changed");
ROUTE123->setFromNode("TIMER");
ROUTE123->setToField("set_fraction");
ROUTE123->setToNode("R_HIP_ANIMATOR");
ProtoBody48->addChildren(*ROUTE123);

CROUTE* ROUTE124 = new CROUTE();
ROUTE124->setFromField("fraction_changed");
ROUTE124->setFromNode("TIMER");
ROUTE124->setToField("set_fraction");
ROUTE124->setToNode("R_KNEE_ANIMATOR");
ProtoBody48->addChildren(*ROUTE124);

CROUTE* ROUTE125 = new CROUTE();
ROUTE125->setFromField("fraction_changed");
ROUTE125->setFromNode("TIMER");
ROUTE125->setToField("set_fraction");
ROUTE125->setToNode("R_ANKLE_ANIMATOR");
ProtoBody48->addChildren(*ROUTE125);

CROUTE* ROUTE126 = new CROUTE();
ROUTE126->setFromField("fraction_changed");
ROUTE126->setFromNode("TIMER");
ROUTE126->setToField("set_fraction");
ROUTE126->setToNode("R_MIDTARSAL_ANIMATOR");
ProtoBody48->addChildren(*ROUTE126);

CROUTE* ROUTE127 = new CROUTE();
ROUTE127->setFromField("fraction_changed");
ROUTE127->setFromNode("TIMER");
ROUTE127->setToField("set_fraction");
ROUTE127->setToNode("VL5_ANIMATOR");
ProtoBody48->addChildren(*ROUTE127);

CROUTE* ROUTE128 = new CROUTE();
ROUTE128->setFromField("fraction_changed");
ROUTE128->setFromNode("TIMER");
ROUTE128->setToField("set_fraction");
ROUTE128->setToNode("SKULLBASE_ANIMATOR");
ProtoBody48->addChildren(*ROUTE128);

CROUTE* ROUTE129 = new CROUTE();
ROUTE129->setFromField("fraction_changed");
ROUTE129->setFromNode("TIMER");
ROUTE129->setToField("set_fraction");
ROUTE129->setToNode("L_SHOULDER_ANIMATOR");
ProtoBody48->addChildren(*ROUTE129);

CROUTE* ROUTE130 = new CROUTE();
ROUTE130->setFromField("fraction_changed");
ROUTE130->setFromNode("TIMER");
ROUTE130->setToField("set_fraction");
ROUTE130->setToNode("L_ELBOW_ANIMATOR");
ProtoBody48->addChildren(*ROUTE130);

CROUTE* ROUTE131 = new CROUTE();
ROUTE131->setFromField("fraction_changed");
ROUTE131->setFromNode("TIMER");
ROUTE131->setToField("set_fraction");
ROUTE131->setToNode("L_WRIST_ANIMATOR");
ProtoBody48->addChildren(*ROUTE131);

CROUTE* ROUTE132 = new CROUTE();
ROUTE132->setFromField("fraction_changed");
ROUTE132->setFromNode("TIMER");
ROUTE132->setToField("set_fraction");
ROUTE132->setToNode("R_SHOULDER_ANIMATOR");
ProtoBody48->addChildren(*ROUTE132);

CROUTE* ROUTE133 = new CROUTE();
ROUTE133->setFromField("fraction_changed");
ROUTE133->setFromNode("TIMER");
ROUTE133->setToField("set_fraction");
ROUTE133->setToNode("R_ELBOW_ANIMATOR");
ProtoBody48->addChildren(*ROUTE133);

CROUTE* ROUTE134 = new CROUTE();
ROUTE134->setFromField("fraction_changed");
ROUTE134->setFromNode("TIMER");
ROUTE134->setToField("set_fraction");
ROUTE134->setToNode("R_WRIST_ANIMATOR");
ProtoBody48->addChildren(*ROUTE134);

ProtoDeclare20->setProtoBody(*ProtoBody48);

group->addChildren(*ProtoDeclare20);

//======================================
//Point to example use in case someone inspects this file
CAnchor* Anchor135 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor135->setDescription("InterchangableActorsViaDynamicRouting");
Anchor135->setParameter(new CString[1]{"target=_blank"}, 1);
Anchor135->setUrl(new CString[4]{"InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"}, 4);
CShape* Shape136 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text137 = (CText *)(m_pScene.createNode("Text"));
Text137->setString(new CString[6]{"LOA1_StandAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."}, 6);
CFontStyle* FontStyle138 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle138->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle138->setSize(0.8);
Text137->setFontStyle(*FontStyle138);

Shape136->setGeometry(Text137);

CAppearance* Appearance139 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material140 = (CMaterial *)(m_pScene.createNode("Material"));
Material140->setDiffuseColor(new float[3]{1,1,0.2});
Appearance139->setMaterial(*Material140);

Shape136->setAppearance(*Appearance139);

Anchor135->addChildren(*Shape136);

group->addChildren(*Anchor135);

X3D0->setScene(*Scene18);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
