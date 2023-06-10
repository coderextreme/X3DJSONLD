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
meta2->setContent("LOA1_SwimmingFlutterKickAnimation.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Humanoid animation prototype reusable by any Humanoid.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Etsuko Lippi");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("13 December 2001");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("23 May 2020");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("warning");
meta7->setContent("not yet tested, need to compare with NancyDivingExample interpolators");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("http://www.HAnim.org");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("http://HAnim.org/Models");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("http://HAnim.org/Nodes");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("subject");
meta11->setContent("Swimming flutter kick Animation HAnim 2001");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("identifier");
meta12->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_SwimmingFlutterKickAnimation.x3d");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("generator");
meta13->setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("license");
meta14->setContent("../license.html");
head1->addMeta(*meta14);

X3D0->setHead(*head1);

CScene* Scene15 = new CScene();
CWorldInfo* WorldInfo16 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo16->setTitle("LOA1_SwimmingFlutterKickAnimation.x3d");
group->addChildren(*WorldInfo16);

CProtoDeclare ProtoDeclare17 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="LOA1_DivingAnimation" ><ProtoInterface><field name="cycleInterval" accessType="inputOutput" type="SFTime" value="7"></field>
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
<ProtoBody><Group><TimeSensor DEF="TIMER" loop="true"><IS><connect nodeField="cycleInterval" protoField="cycleInterval"></connect>
<connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="loop" protoField="loop"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
<connect nodeField="fraction_changed" protoField="fraction_changed"></connect>
<connect nodeField="isActive" protoField="isActive"></connect>
</IS>
</TimeSensor>
<PositionInterpolator DEF="HUMANOIDROOT_POSITION_ANIMATOR" key="0 0.04167 0.125 0.1667 0.2083 0.25 0.2917 0.375 0.4583 0.5 0.5417 0.5833 0.625 0.7083 0.75 0.7917 0.875 0.9167 1" keyValue="0 -0.00928 0 0 -0.003858 0 0 -0.008847 0 0 -0.01486 0 0 -0.02641 0 0 -0.03934 0 0 -0.0502 0 0 -0.07469 0 0 -0.02732 0 0 -0.01608 0 0 -0.01129 0 0 -0.005819 0 0 -0.002004 0 0 -0.002579 0 0 -0.0143 0 0 -0.03799 0 0 -0.05648 0 0 -0.045 0 0 -0.00928 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_translation_changed"></connect>
</IS>
</PositionInterpolator>
<OrientationInterpolator DEF="HUMANOIDROOT_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<!--no SACROILIAC_ANIMATOR--><OrientationInterpolator DEF="L_HIP_ANIMATOR" key="0 0.25 0.375 0.6667 0.7917 0.9167 1" keyValue="-0.873 0.06094 0.484 0.2865 0.9963 -0.01057 0.08481 0.2488 0.9965 0.01591 -0.08222 0.3836 -1 0 0 0.5518 -0.9964 0.02231 0.0817 0.5351 -0.9809 0.04912 0.1881 0.5204 -0.873 0.06094 0.484 0.2865"><IS><connect nodeField="value_changed" protoField="l_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_KNEE_ANIMATOR" key="0 0.2083 0.375 0.5 0.6667 0.7917 0.9167 1" keyValue="1 0 0 0.3226 1 0 0 0.1556 1 0 0 0.08678 1 0 0 0.8751 1 0 0 1.131 1 0 0 0.09961 1 0 0 0.3942 1 0 0 0.3226"><IS><connect nodeField="value_changed" protoField="l_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ANKLE_ANIMATOR" key="0 0.125 0.2083 0.375 0.4583 0.5 0.6667 0.75 0.7917 0.9167 1" keyValue="1 0 0 0.6001 1 0 0 0.6509 1 0 0 0.6001 1 0 0 0.6001 1 0 0 0.6509 1 0 0 0.6001 1 0 0 0.6001 1 0 0 0.6509 1 0 0 0.6001 1 0 0 0.6509 1 0 0 0.6001"><IS><connect nodeField="value_changed" protoField="l_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<!--no L_MIDTARSAL_ANIMATOR--><OrientationInterpolator DEF="R_HIP_ANIMATOR" key="0 0.125 0.2083 0.2917 0.5 0.7917 0.9167 1" keyValue="-0.5831 0.03511 0.8116 0.1481 -0.995 0.02296 0.09674 0.4683 -1 0.00192 0.007964 0.4732 -0.998 -0.0158 -0.06102 0.5079 -0.9131 -0.06243 -0.403 0.3361 1 0 0 0.2571 0.9891 -0.02805 0.1444 0.3879 -0.5831 0.03511 0.8116 0.1481"><IS><connect nodeField="value_changed" protoField="r_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_KNEE_ANIMATOR" key="0 0.125 0.2083 0.375 0.5 0.6667 0.9167 1" keyValue="1 0 0 0.8573 1 0 0 0.5351 1 0 0 0.1756 1 0 0 0.1194 1 0 0 0.3153 1 0 0 0.09354 1 0 0 0.08558 1 0 0 0.8573"><IS><connect nodeField="value_changed" protoField="r_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ANKLE_ANIMATOR" key="0 0.125 0.2083 0.375 0.4583 0.5 0.6667 0.75 0.7917 0.9167 1" keyValue="1 0 0 0.8001 1 0 0 0.8509 1 0 0 0.8001 1 0 0 0.8001 1 0 0 0.8509 1 0 0 0.8001 1 0 0 0.8001 1 0 0 0.8001 1 0 0 0.8001 1 0 0 0.8509 1 0 0 0.86001"><IS><connect nodeField="value_changed" protoField="r_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<!--no L_MIDTARSAL_ANIMATOR--><OrientationInterpolator DEF="VL5_ANIMATOR" key="0 0.2083 0.375 0.75 0.8333 1" keyValue="0 1 0 0.0826 -0.01972 -0.5974 0.8017 0.08231 0.009296 -0.9648 0.2627 0.1734 -0.01238 0.9549 -0.2968 0.08732 -0.008125 0.9691 -0.2463 0.158 0 1 0 0.0826"><IS><connect nodeField="value_changed" protoField="vl5_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="SKULLBASE_ANIMATOR" key="0 0.28 0.3 0.32 0.4 0.45 0.6 0.65 0.7 0.75 0.85 0.9 0.95 1" keyValue="-1 0 0 1 -1 0 0 1 -1 0 0 0.999 -1 0 0 0.99 -1 0 0 0.99 -1 0 0 0.9 -1 0 0 0.9 -1 0 0 0.9 -1 0 0 0.9 -1 0 0 0.9 -1 0 0 0.9 -1 0 0 0.9 -1 0 0 0.9 -1 0 0 1"><IS><connect nodeField="value_changed" protoField="skullbase_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_SHOULDER_ANIMATOR" key="0 0.25 0.375 0.6667 0.7917 0.9167 1" keyValue="0 0 1 0.1 0 0 1 0.2 0 0 1 0.2 0.86 0.25 0.42 0.5 0.86 0.25 0.42 0.8 0.86 0.25 0.42 0.4 0.86 0.25 0.42 0.2"><IS><connect nodeField="value_changed" protoField="l_shoulder_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ELBOW_ANIMATOR" key="0 0.28 0.32 0.64 0.76 1" keyValue="0 0 1 0 -1 0 0 0.1229 -1 0 0 0.1229 -1 0 0 0.5976 -1 0 0 0.3917 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_elbow_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_WRIST_ANIMATOR" key="0 0.32 0.64 0.88 1" keyValue="0 0 1 0 0.067 0.98 -0.128 4.15 0.067 0.98 -0.128 4.15 0.067 0.98 -0.128 4.15 0 0 1 0"><IS><connect nodeField="value_changed" protoField="l_wrist_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_SHOULDER_ANIMATOR" key="0 0.45 0.64 0.76 0.88 1" keyValue="0 0 1 0 0.9992 0.02042 0.03558 7.2 0.9989 -0.04623 0.005159 4.079 -0.8687 -0.2525 -0.4261 1.501 -0.941 -0.2893 -0.1754 0.4788 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_shoulder_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ELBOW_ANIMATOR" key="0 0.28 0.32 0.64 0.76 1" keyValue="0 0 1 0 -1 0 0 0.04151 -1 0 0 0.04151 -1 0 0 0.5855 -1 0 0 0.5852 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_elbow_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_WRIST_ANIMATOR" key="0 0.28 0.32 0.64 0.76 1" keyValue="0 0 1 0 -0.0585279 0.983903 -0.168849 1.85956 -0.0585279 0.983903 -0.168849 1.85956 -0.00222418 0.99801 -0.0630095 1.46072 0 1 0 0.497349 0 0 1 0"><IS><connect nodeField="value_changed" protoField="r_wrist_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
</Group>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="HUMANOIDROOT_POSITION_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="HUMANOIDROOT_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="SKULLBASE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="VL5_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_HIP_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_KNEE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_ANKLE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_HIP_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_KNEE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_ANKLE_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_SHOULDER_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_ELBOW_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="L_WRIST_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_SHOULDER_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_ELBOW_ANIMATOR"></ROUTE>
<ROUTE fromField="fraction_changed" fromNode="TIMER" toField="set_fraction" toNode="R_WRIST_ANIMATOR"></ROUTE>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare17->setName("LOA1_DivingAnimation");
CProtoInterface* ProtoInterface18 = new CProtoInterface();
Cfield* field19 = new Cfield();
field19->setName("cycleInterval");
field19->setAccessType("inputOutput");
field19->setType("SFTime");
field19->setValue("7");
ProtoInterface18->addField(*field19);

Cfield* field20 = new Cfield();
field20->setName("enabled");
field20->setAccessType("inputOutput");
field20->setType("SFBool");
field20->setValue("true");
ProtoInterface18->addField(*field20);

Cfield* field21 = new Cfield();
field21->setName("loop");
field21->setAccessType("inputOutput");
field21->setType("SFBool");
field21->setValue("true");
ProtoInterface18->addField(*field21);

Cfield* field22 = new Cfield();
field22->setName("startTime");
field22->setAccessType("inputOutput");
field22->setType("SFTime");
field22->setValue("0");
ProtoInterface18->addField(*field22);

Cfield* field23 = new Cfield();
field23->setName("stopTime");
field23->setAccessType("inputOutput");
field23->setType("SFTime");
field23->setValue("-1");
ProtoInterface18->addField(*field23);

Cfield* field24 = new Cfield();
field24->setName("fraction_changed");
field24->setAccessType("outputOnly");
field24->setType("SFFloat");
ProtoInterface18->addField(*field24);

Cfield* field25 = new Cfield();
field25->setName("isActive");
field25->setAccessType("outputOnly");
field25->setType("SFBool");
ProtoInterface18->addField(*field25);

Cfield* field26 = new Cfield();
field26->setName("HumanoidRoot_translation_changed");
field26->setAccessType("outputOnly");
field26->setType("SFVec3f");
ProtoInterface18->addField(*field26);

Cfield* field27 = new Cfield();
field27->setName("HumanoidRoot_rotation_changed");
field27->setAccessType("outputOnly");
field27->setType("SFRotation");
ProtoInterface18->addField(*field27);

Cfield* field28 = new Cfield();
field28->setName("lower_body_rotation_changed");
field28->setAccessType("outputOnly");
field28->setType("SFRotation");
ProtoInterface18->addField(*field28);

Cfield* field29 = new Cfield();
field29->setName("l_hip_rotation_changed");
field29->setAccessType("outputOnly");
field29->setType("SFRotation");
ProtoInterface18->addField(*field29);

Cfield* field30 = new Cfield();
field30->setName("l_knee_rotation_changed");
field30->setAccessType("outputOnly");
field30->setType("SFRotation");
ProtoInterface18->addField(*field30);

Cfield* field31 = new Cfield();
field31->setName("l_ankle_rotation_changed");
field31->setAccessType("outputOnly");
field31->setType("SFRotation");
ProtoInterface18->addField(*field31);

Cfield* field32 = new Cfield();
field32->setName("l_midtarsal_rotation_changed");
field32->setAccessType("outputOnly");
field32->setType("SFRotation");
ProtoInterface18->addField(*field32);

Cfield* field33 = new Cfield();
field33->setName("r_hip_rotation_changed");
field33->setAccessType("outputOnly");
field33->setType("SFRotation");
ProtoInterface18->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("r_knee_rotation_changed");
field34->setAccessType("outputOnly");
field34->setType("SFRotation");
ProtoInterface18->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("r_ankle_rotation_changed");
field35->setAccessType("outputOnly");
field35->setType("SFRotation");
ProtoInterface18->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("r_midtarsal_rotation_changed");
field36->setAccessType("outputOnly");
field36->setType("SFRotation");
ProtoInterface18->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("vl5_rotation_changed");
field37->setAccessType("outputOnly");
field37->setType("SFRotation");
ProtoInterface18->addField(*field37);

Cfield* field38 = new Cfield();
field38->setName("skullbase_rotation_changed");
field38->setAccessType("outputOnly");
field38->setType("SFRotation");
ProtoInterface18->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("l_shoulder_rotation_changed");
field39->setAccessType("outputOnly");
field39->setType("SFRotation");
ProtoInterface18->addField(*field39);

Cfield* field40 = new Cfield();
field40->setName("l_elbow_rotation_changed");
field40->setAccessType("outputOnly");
field40->setType("SFRotation");
ProtoInterface18->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("l_wrist_rotation_changed");
field41->setAccessType("outputOnly");
field41->setType("SFRotation");
ProtoInterface18->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("r_shoulder_rotation_changed");
field42->setAccessType("outputOnly");
field42->setType("SFRotation");
ProtoInterface18->addField(*field42);

Cfield* field43 = new Cfield();
field43->setName("r_elbow_rotation_changed");
field43->setAccessType("outputOnly");
field43->setType("SFRotation");
ProtoInterface18->addField(*field43);

Cfield* field44 = new Cfield();
field44->setName("r_wrist_rotation_changed");
field44->setAccessType("outputOnly");
field44->setType("SFRotation");
ProtoInterface18->addField(*field44);

ProtoDeclare17->setProtoInterface(*ProtoInterface18);

CProtoBody* ProtoBody45 = new CProtoBody();
CGroup* Group46 = (CGroup *)(m_pScene.createNode("Group"));
CTimeSensor* TimeSensor47 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor47->setDEF("TIMER");
TimeSensor47->setLoop(True);
CIS* IS48 = new CIS();
Cconnect* connect49 = new Cconnect();
connect49->setNodeField("cycleInterval");
connect49->setProtoField("cycleInterval");
IS48->addConnect(*connect49);

Cconnect* connect50 = new Cconnect();
connect50->setNodeField("enabled");
connect50->setProtoField("enabled");
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
connect54->setNodeField("fraction_changed");
connect54->setProtoField("fraction_changed");
IS48->addConnect(*connect54);

Cconnect* connect55 = new Cconnect();
connect55->setNodeField("isActive");
connect55->setProtoField("isActive");
IS48->addConnect(*connect55);

TimeSensor47->setIS(*IS48);

Group46->addChildren(*TimeSensor47);

CPositionInterpolator* PositionInterpolator56 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator56->setDEF("HUMANOIDROOT_POSITION_ANIMATOR");
PositionInterpolator56->setKey(new float[19]{0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1}, 19);
PositionInterpolator56->setKeyValue(new float[57]{0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0});
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
OrientationInterpolator59->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS60 = new CIS();
Cconnect* connect61 = new Cconnect();
connect61->setNodeField("value_changed");
connect61->setProtoField("HumanoidRoot_rotation_changed");
IS60->addConnect(*connect61);

OrientationInterpolator59->setIS(*IS60);

Group46->addChildren(*OrientationInterpolator59);

//no SACROILIAC_ANIMATOR
COrientationInterpolator* OrientationInterpolator62 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator62->setDEF("L_HIP_ANIMATOR");
OrientationInterpolator62->setKey(new float[7]{0,0.25,0.375,0.6667,0.7917,0.9167,1}, 7);
OrientationInterpolator62->setKeyValue(new float[28]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865});
CIS* IS63 = new CIS();
Cconnect* connect64 = new Cconnect();
connect64->setNodeField("value_changed");
connect64->setProtoField("l_hip_rotation_changed");
IS63->addConnect(*connect64);

OrientationInterpolator62->setIS(*IS63);

Group46->addChildren(*OrientationInterpolator62);

COrientationInterpolator* OrientationInterpolator65 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator65->setDEF("L_KNEE_ANIMATOR");
OrientationInterpolator65->setKey(new float[8]{0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1}, 8);
OrientationInterpolator65->setKeyValue(new float[32]{1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226});
CIS* IS66 = new CIS();
Cconnect* connect67 = new Cconnect();
connect67->setNodeField("value_changed");
connect67->setProtoField("l_knee_rotation_changed");
IS66->addConnect(*connect67);

OrientationInterpolator65->setIS(*IS66);

Group46->addChildren(*OrientationInterpolator65);

COrientationInterpolator* OrientationInterpolator68 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator68->setDEF("L_ANKLE_ANIMATOR");
OrientationInterpolator68->setKey(new float[11]{0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1}, 11);
OrientationInterpolator68->setKeyValue(new float[44]{1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001});
CIS* IS69 = new CIS();
Cconnect* connect70 = new Cconnect();
connect70->setNodeField("value_changed");
connect70->setProtoField("l_ankle_rotation_changed");
IS69->addConnect(*connect70);

OrientationInterpolator68->setIS(*IS69);

Group46->addChildren(*OrientationInterpolator68);

//no L_MIDTARSAL_ANIMATOR
COrientationInterpolator* OrientationInterpolator71 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator71->setDEF("R_HIP_ANIMATOR");
OrientationInterpolator71->setKey(new float[8]{0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1}, 8);
OrientationInterpolator71->setKeyValue(new float[32]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9131,-0.06243,-0.403,0.3361,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481});
CIS* IS72 = new CIS();
Cconnect* connect73 = new Cconnect();
connect73->setNodeField("value_changed");
connect73->setProtoField("r_hip_rotation_changed");
IS72->addConnect(*connect73);

OrientationInterpolator71->setIS(*IS72);

Group46->addChildren(*OrientationInterpolator71);

COrientationInterpolator* OrientationInterpolator74 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator74->setDEF("R_KNEE_ANIMATOR");
OrientationInterpolator74->setKey(new float[8]{0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1}, 8);
OrientationInterpolator74->setKeyValue(new float[32]{1,0,0,0.8573,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.8573});
CIS* IS75 = new CIS();
Cconnect* connect76 = new Cconnect();
connect76->setNodeField("value_changed");
connect76->setProtoField("r_knee_rotation_changed");
IS75->addConnect(*connect76);

OrientationInterpolator74->setIS(*IS75);

Group46->addChildren(*OrientationInterpolator74);

COrientationInterpolator* OrientationInterpolator77 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator77->setDEF("R_ANKLE_ANIMATOR");
OrientationInterpolator77->setKey(new float[11]{0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1}, 11);
OrientationInterpolator77->setKeyValue(new float[44]{1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.86001});
CIS* IS78 = new CIS();
Cconnect* connect79 = new Cconnect();
connect79->setNodeField("value_changed");
connect79->setProtoField("r_ankle_rotation_changed");
IS78->addConnect(*connect79);

OrientationInterpolator77->setIS(*IS78);

Group46->addChildren(*OrientationInterpolator77);

//no L_MIDTARSAL_ANIMATOR
COrientationInterpolator* OrientationInterpolator80 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator80->setDEF("VL5_ANIMATOR");
OrientationInterpolator80->setKey(new float[6]{0,0.2083,0.375,0.75,0.8333,1}, 6);
OrientationInterpolator80->setKeyValue(new float[24]{0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826});
CIS* IS81 = new CIS();
Cconnect* connect82 = new Cconnect();
connect82->setNodeField("value_changed");
connect82->setProtoField("vl5_rotation_changed");
IS81->addConnect(*connect82);

OrientationInterpolator80->setIS(*IS81);

Group46->addChildren(*OrientationInterpolator80);

COrientationInterpolator* OrientationInterpolator83 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator83->setDEF("SKULLBASE_ANIMATOR");
OrientationInterpolator83->setKey(new float[14]{0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1}, 14);
OrientationInterpolator83->setKeyValue(new float[56]{-1,0,0,1,-1,0,0,1,-1,0,0,0.999,-1,0,0,0.99,-1,0,0,0.99,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,1});
CIS* IS84 = new CIS();
Cconnect* connect85 = new Cconnect();
connect85->setNodeField("value_changed");
connect85->setProtoField("skullbase_rotation_changed");
IS84->addConnect(*connect85);

OrientationInterpolator83->setIS(*IS84);

Group46->addChildren(*OrientationInterpolator83);

COrientationInterpolator* OrientationInterpolator86 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator86->setDEF("L_SHOULDER_ANIMATOR");
OrientationInterpolator86->setKey(new float[7]{0,0.25,0.375,0.6667,0.7917,0.9167,1}, 7);
OrientationInterpolator86->setKeyValue(new float[28]{0,0,1,0.1,0,0,1,0.2,0,0,1,0.2,0.86,0.25,0.42,0.5,0.86,0.25,0.42,0.8,0.86,0.25,0.42,0.4,0.86,0.25,0.42,0.2});
CIS* IS87 = new CIS();
Cconnect* connect88 = new Cconnect();
connect88->setNodeField("value_changed");
connect88->setProtoField("l_shoulder_rotation_changed");
IS87->addConnect(*connect88);

OrientationInterpolator86->setIS(*IS87);

Group46->addChildren(*OrientationInterpolator86);

COrientationInterpolator* OrientationInterpolator89 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator89->setDEF("L_ELBOW_ANIMATOR");
OrientationInterpolator89->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator89->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0});
CIS* IS90 = new CIS();
Cconnect* connect91 = new Cconnect();
connect91->setNodeField("value_changed");
connect91->setProtoField("l_elbow_rotation_changed");
IS90->addConnect(*connect91);

OrientationInterpolator89->setIS(*IS90);

Group46->addChildren(*OrientationInterpolator89);

COrientationInterpolator* OrientationInterpolator92 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator92->setDEF("L_WRIST_ANIMATOR");
OrientationInterpolator92->setKey(new float[5]{0,0.32,0.64,0.88,1}, 5);
OrientationInterpolator92->setKeyValue(new float[20]{0,0,1,0,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0,0,1,0});
CIS* IS93 = new CIS();
Cconnect* connect94 = new Cconnect();
connect94->setNodeField("value_changed");
connect94->setProtoField("l_wrist_rotation_changed");
IS93->addConnect(*connect94);

OrientationInterpolator92->setIS(*IS93);

Group46->addChildren(*OrientationInterpolator92);

COrientationInterpolator* OrientationInterpolator95 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator95->setDEF("R_SHOULDER_ANIMATOR");
OrientationInterpolator95->setKey(new float[6]{0,0.45,0.64,0.76,0.88,1}, 6);
OrientationInterpolator95->setKeyValue(new float[24]{0,0,1,0,0.9992,0.02042,0.03558,7.2,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0});
CIS* IS96 = new CIS();
Cconnect* connect97 = new Cconnect();
connect97->setNodeField("value_changed");
connect97->setProtoField("r_shoulder_rotation_changed");
IS96->addConnect(*connect97);

OrientationInterpolator95->setIS(*IS96);

Group46->addChildren(*OrientationInterpolator95);

COrientationInterpolator* OrientationInterpolator98 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator98->setDEF("R_ELBOW_ANIMATOR");
OrientationInterpolator98->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator98->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0});
CIS* IS99 = new CIS();
Cconnect* connect100 = new Cconnect();
connect100->setNodeField("value_changed");
connect100->setProtoField("r_elbow_rotation_changed");
IS99->addConnect(*connect100);

OrientationInterpolator98->setIS(*IS99);

Group46->addChildren(*OrientationInterpolator98);

COrientationInterpolator* OrientationInterpolator101 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator101->setDEF("R_WRIST_ANIMATOR");
OrientationInterpolator101->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator101->setKeyValue(new float[24]{0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0});
CIS* IS102 = new CIS();
Cconnect* connect103 = new Cconnect();
connect103->setNodeField("value_changed");
connect103->setProtoField("r_wrist_rotation_changed");
IS102->addConnect(*connect103);

OrientationInterpolator101->setIS(*IS102);

Group46->addChildren(*OrientationInterpolator101);

ProtoBody45->addChildren(*Group46);

CROUTE* ROUTE104 = new CROUTE();
ROUTE104->setFromField("fraction_changed");
ROUTE104->setFromNode("TIMER");
ROUTE104->setToField("set_fraction");
ROUTE104->setToNode("HUMANOIDROOT_POSITION_ANIMATOR");
ProtoBody45->addChildren(*ROUTE104);

CROUTE* ROUTE105 = new CROUTE();
ROUTE105->setFromField("fraction_changed");
ROUTE105->setFromNode("TIMER");
ROUTE105->setToField("set_fraction");
ROUTE105->setToNode("HUMANOIDROOT_ANIMATOR");
ProtoBody45->addChildren(*ROUTE105);

CROUTE* ROUTE106 = new CROUTE();
ROUTE106->setFromField("fraction_changed");
ROUTE106->setFromNode("TIMER");
ROUTE106->setToField("set_fraction");
ROUTE106->setToNode("SKULLBASE_ANIMATOR");
ProtoBody45->addChildren(*ROUTE106);

CROUTE* ROUTE107 = new CROUTE();
ROUTE107->setFromField("fraction_changed");
ROUTE107->setFromNode("TIMER");
ROUTE107->setToField("set_fraction");
ROUTE107->setToNode("VL5_ANIMATOR");
ProtoBody45->addChildren(*ROUTE107);

CROUTE* ROUTE108 = new CROUTE();
ROUTE108->setFromField("fraction_changed");
ROUTE108->setFromNode("TIMER");
ROUTE108->setToField("set_fraction");
ROUTE108->setToNode("L_HIP_ANIMATOR");
ProtoBody45->addChildren(*ROUTE108);

CROUTE* ROUTE109 = new CROUTE();
ROUTE109->setFromField("fraction_changed");
ROUTE109->setFromNode("TIMER");
ROUTE109->setToField("set_fraction");
ROUTE109->setToNode("L_KNEE_ANIMATOR");
ProtoBody45->addChildren(*ROUTE109);

CROUTE* ROUTE110 = new CROUTE();
ROUTE110->setFromField("fraction_changed");
ROUTE110->setFromNode("TIMER");
ROUTE110->setToField("set_fraction");
ROUTE110->setToNode("L_ANKLE_ANIMATOR");
ProtoBody45->addChildren(*ROUTE110);

CROUTE* ROUTE111 = new CROUTE();
ROUTE111->setFromField("fraction_changed");
ROUTE111->setFromNode("TIMER");
ROUTE111->setToField("set_fraction");
ROUTE111->setToNode("R_HIP_ANIMATOR");
ProtoBody45->addChildren(*ROUTE111);

CROUTE* ROUTE112 = new CROUTE();
ROUTE112->setFromField("fraction_changed");
ROUTE112->setFromNode("TIMER");
ROUTE112->setToField("set_fraction");
ROUTE112->setToNode("R_KNEE_ANIMATOR");
ProtoBody45->addChildren(*ROUTE112);

CROUTE* ROUTE113 = new CROUTE();
ROUTE113->setFromField("fraction_changed");
ROUTE113->setFromNode("TIMER");
ROUTE113->setToField("set_fraction");
ROUTE113->setToNode("R_ANKLE_ANIMATOR");
ProtoBody45->addChildren(*ROUTE113);

CROUTE* ROUTE114 = new CROUTE();
ROUTE114->setFromField("fraction_changed");
ROUTE114->setFromNode("TIMER");
ROUTE114->setToField("set_fraction");
ROUTE114->setToNode("L_SHOULDER_ANIMATOR");
ProtoBody45->addChildren(*ROUTE114);

CROUTE* ROUTE115 = new CROUTE();
ROUTE115->setFromField("fraction_changed");
ROUTE115->setFromNode("TIMER");
ROUTE115->setToField("set_fraction");
ROUTE115->setToNode("L_ELBOW_ANIMATOR");
ProtoBody45->addChildren(*ROUTE115);

CROUTE* ROUTE116 = new CROUTE();
ROUTE116->setFromField("fraction_changed");
ROUTE116->setFromNode("TIMER");
ROUTE116->setToField("set_fraction");
ROUTE116->setToNode("L_WRIST_ANIMATOR");
ProtoBody45->addChildren(*ROUTE116);

CROUTE* ROUTE117 = new CROUTE();
ROUTE117->setFromField("fraction_changed");
ROUTE117->setFromNode("TIMER");
ROUTE117->setToField("set_fraction");
ROUTE117->setToNode("R_SHOULDER_ANIMATOR");
ProtoBody45->addChildren(*ROUTE117);

CROUTE* ROUTE118 = new CROUTE();
ROUTE118->setFromField("fraction_changed");
ROUTE118->setFromNode("TIMER");
ROUTE118->setToField("set_fraction");
ROUTE118->setToNode("R_ELBOW_ANIMATOR");
ProtoBody45->addChildren(*ROUTE118);

CROUTE* ROUTE119 = new CROUTE();
ROUTE119->setFromField("fraction_changed");
ROUTE119->setFromNode("TIMER");
ROUTE119->setToField("set_fraction");
ROUTE119->setToNode("R_WRIST_ANIMATOR");
ProtoBody45->addChildren(*ROUTE119);

ProtoDeclare17->setProtoBody(*ProtoBody45);

group->addChildren(*ProtoDeclare17);

CViewpoint* Viewpoint120 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint120->setDescription("LOA1_SwimmingFlutterKickAnimation scene");
Viewpoint120->setPosition(new float[3]{0,0,12});
group->addChildren(*Viewpoint120);

CAnchor* Anchor121 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor121->setDescription("Nancy Diving");
Anchor121->setParameter(new CString[1]{"target=_blank"}, 1);
Anchor121->setUrl(new CString[4]{"NancyDiving.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.x3d","NancyDiving.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.wrl"}, 4);
CShape* Shape122 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text123 = (CText *)(m_pScene.createNode("Text"));
Text123->setString(new CString[5]{"LOA1_SwimmingFlutterKickAnimation.x3d","defines a prototype","for animating a humanoid.","","Click text to see example."}, 5);
CFontStyle* FontStyle124 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle124->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle124->setSize(0.8);
Text123->setFontStyle(*FontStyle124);

Shape122->setGeometry(Text123);

CAppearance* Appearance125 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material126 = (CMaterial *)(m_pScene.createNode("Material"));
Material126->setDiffuseColor(new float[3]{1,1,0.2});
Appearance125->setMaterial(*Material126);

Shape122->setAppearance(*Appearance125);

Anchor121->addChildren(*Shape122);

group->addChildren(*Anchor121);

X3D0->setScene(*Scene15);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
