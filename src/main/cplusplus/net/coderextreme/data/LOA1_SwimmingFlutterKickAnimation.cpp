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

X3D0->setHead(*head1);

CScene* Scene14 = new CScene();
CProtoDeclare ProtoDeclare15 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="LOA1_DivingAnimation" ><ProtoInterface><field accessType="inputOutput" type="SFTime" name="cycleInterval" value="7"></field>
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
<PositionInterpolator DEF="HUMANOIDROOT_POSITION_ANIMATOR" key="0 0.04167 0.125 0.1667 0.2083 0.25 0.2917 0.375 0.4583 0.5 0.5417 0.5833 0.625 0.7083 0.75 0.7917 0.875 0.9167 1" keyValue="0 -0.00928 0 0 -0.003858 0 0 -0.008847 0 0 -0.01486 0 0 -0.02641 0 0 -0.03934 0 0 -0.0502 0 0 -0.07469 0 0 -0.02732 0 0 -0.01608 0 0 -0.01129 0 0 -0.005819 0 0 -0.002004 0 0 -0.002579 0 0 -0.0143 0 0 -0.03799 0 0 -0.05648 0 0 -0.045 0 0 -0.00928 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_translation_changed"></connect>
</IS>
</PositionInterpolator>
<OrientationInterpolator DEF="HUMANOIDROOT_ANIMATOR" key="0 1" keyValue="0 0 1 0 0 0 1 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_HIP_ANIMATOR" key="0 0.25 0.375 0.6667 0.7917 0.9167 1" keyValue="-0.873 0.06094 0.484 0.2865 0.9963 -0.01057 0.08481 0.2488 0.9965 0.01591 -0.08222 0.3836 -1 0 0 0.5518 -0.9964 0.02231 0.0817 0.5351 -0.9809 0.04912 0.1881 0.5204 -0.873 0.06094 0.484 0.2865"><IS><connect nodeField="value_changed" protoField="l_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_KNEE_ANIMATOR" key="0 0.2083 0.375 0.5 0.6667 0.7917 0.9167 1" keyValue="1 0 0 0.3226 1 0 0 0.1556 1 0 0 0.08678 1 0 0 0.8751 1 0 0 1.131 1 0 0 0.09961 1 0 0 0.3942 1 0 0 0.3226"><IS><connect nodeField="value_changed" protoField="l_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ANKLE_ANIMATOR" key="0 0.125 0.2083 0.375 0.4583 0.5 0.6667 0.75 0.7917 0.9167 1" keyValue="1 0 0 0.6001 1 0 0 0.6509 1 0 0 0.6001 1 0 0 0.6001 1 0 0 0.6509 1 0 0 0.6001 1 0 0 0.6001 1 0 0 0.6509 1 0 0 0.6001 1 0 0 0.6509 1 0 0 0.6001"><IS><connect nodeField="value_changed" protoField="l_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_HIP_ANIMATOR" key="0 0.125 0.2083 0.2917 0.5 0.7917 0.9167 1" keyValue="-0.5831 0.03511 0.8116 0.1481 -0.995 0.02296 0.09674 0.4683 -1 0.00192 0.007964 0.4732 -0.998 -0.0158 -0.06102 0.5079 -0.9131 -0.06243 -0.403 0.3361 1 0 0 0.2571 0.9891 -0.02805 0.1444 0.3879 -0.5831 0.03511 0.8116 0.1481"><IS><connect nodeField="value_changed" protoField="r_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_KNEE_ANIMATOR" key="0 0.125 0.2083 0.375 0.5 0.6667 0.9167 1" keyValue="1 0 0 0.8573 1 0 0 0.5351 1 0 0 0.1756 1 0 0 0.1194 1 0 0 0.3153 1 0 0 0.09354 1 0 0 0.08558 1 0 0 0.8573"><IS><connect nodeField="value_changed" protoField="r_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ANKLE_ANIMATOR" key="0 0.125 0.2083 0.375 0.4583 0.5 0.6667 0.75 0.7917 0.9167 1" keyValue="1 0 0 0.8001 1 0 0 0.8509 1 0 0 0.8001 1 0 0 0.8001 1 0 0 0.8509 1 0 0 0.8001 1 0 0 0.8001 1 0 0 0.8001 1 0 0 0.8001 1 0 0 0.8509 1 0 0 0.86001"><IS><connect nodeField="value_changed" protoField="r_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="VL5_ANIMATOR" key="0 0.2083 0.375 0.75 0.8333 1" keyValue="0 1 0 0.0826 -0.01972 -0.5974 0.8017 0.08231 0.009296 -0.9648 0.2627 0.1734 -0.01238 0.9549 -0.2968 0.08732 -0.008125 0.9691 -0.2463 0.158 0 1 0 0.0826"><IS><connect nodeField="value_changed" protoField="vl5_rotation_changed"></connect>
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
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="HUMANOIDROOT_POSITION_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="HUMANOIDROOT_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="SKULLBASE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="VL5_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_HIP_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_KNEE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_ANKLE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_HIP_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_KNEE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_ANKLE_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_SHOULDER_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_ELBOW_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="L_WRIST_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_SHOULDER_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_ELBOW_ANIMATOR" toField="set_fraction"></ROUTE>
<ROUTE fromNode="TIMER" fromField="fraction_changed" toNode="R_WRIST_ANIMATOR" toField="set_fraction"></ROUTE>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare15->setName("LOA1_DivingAnimation");
CProtoInterface* ProtoInterface16 = new CProtoInterface();
Cfield* field17 = new Cfield();
field17->setAccessType("inputOutput");
field17->setType("SFTime");
field17->setName("cycleInterval");
field17->setValue("7");
ProtoInterface16->addField(*field17);

Cfield* field18 = new Cfield();
field18->setAccessType("inputOutput");
field18->setType("SFBool");
field18->setName("enabled");
field18->setValue("true");
ProtoInterface16->addField(*field18);

Cfield* field19 = new Cfield();
field19->setAccessType("inputOutput");
field19->setType("SFBool");
field19->setName("loop");
field19->setValue("true");
ProtoInterface16->addField(*field19);

Cfield* field20 = new Cfield();
field20->setAccessType("inputOutput");
field20->setType("SFTime");
field20->setName("startTime");
ProtoInterface16->addField(*field20);

Cfield* field21 = new Cfield();
field21->setAccessType("inputOutput");
field21->setType("SFTime");
field21->setName("stopTime");
field21->setValue("-1");
ProtoInterface16->addField(*field21);

Cfield* field22 = new Cfield();
field22->setAccessType("outputOnly");
field22->setType("SFFloat");
field22->setName("fraction_changed");
ProtoInterface16->addField(*field22);

Cfield* field23 = new Cfield();
field23->setAccessType("outputOnly");
field23->setType("SFBool");
field23->setName("isActive");
ProtoInterface16->addField(*field23);

Cfield* field24 = new Cfield();
field24->setAccessType("outputOnly");
field24->setType("SFVec3f");
field24->setName("HumanoidRoot_translation_changed");
ProtoInterface16->addField(*field24);

Cfield* field25 = new Cfield();
field25->setAccessType("outputOnly");
field25->setType("SFRotation");
field25->setName("HumanoidRoot_rotation_changed");
ProtoInterface16->addField(*field25);

Cfield* field26 = new Cfield();
field26->setAccessType("outputOnly");
field26->setType("SFRotation");
field26->setName("lower_body_rotation_changed");
ProtoInterface16->addField(*field26);

Cfield* field27 = new Cfield();
field27->setAccessType("outputOnly");
field27->setType("SFRotation");
field27->setName("l_hip_rotation_changed");
ProtoInterface16->addField(*field27);

Cfield* field28 = new Cfield();
field28->setAccessType("outputOnly");
field28->setType("SFRotation");
field28->setName("l_knee_rotation_changed");
ProtoInterface16->addField(*field28);

Cfield* field29 = new Cfield();
field29->setAccessType("outputOnly");
field29->setType("SFRotation");
field29->setName("l_ankle_rotation_changed");
ProtoInterface16->addField(*field29);

Cfield* field30 = new Cfield();
field30->setAccessType("outputOnly");
field30->setType("SFRotation");
field30->setName("l_midtarsal_rotation_changed");
ProtoInterface16->addField(*field30);

Cfield* field31 = new Cfield();
field31->setAccessType("outputOnly");
field31->setType("SFRotation");
field31->setName("r_hip_rotation_changed");
ProtoInterface16->addField(*field31);

Cfield* field32 = new Cfield();
field32->setAccessType("outputOnly");
field32->setType("SFRotation");
field32->setName("r_knee_rotation_changed");
ProtoInterface16->addField(*field32);

Cfield* field33 = new Cfield();
field33->setAccessType("outputOnly");
field33->setType("SFRotation");
field33->setName("r_ankle_rotation_changed");
ProtoInterface16->addField(*field33);

Cfield* field34 = new Cfield();
field34->setAccessType("outputOnly");
field34->setType("SFRotation");
field34->setName("r_midtarsal_rotation_changed");
ProtoInterface16->addField(*field34);

Cfield* field35 = new Cfield();
field35->setAccessType("outputOnly");
field35->setType("SFRotation");
field35->setName("vl5_rotation_changed");
ProtoInterface16->addField(*field35);

Cfield* field36 = new Cfield();
field36->setAccessType("outputOnly");
field36->setType("SFRotation");
field36->setName("skullbase_rotation_changed");
ProtoInterface16->addField(*field36);

Cfield* field37 = new Cfield();
field37->setAccessType("outputOnly");
field37->setType("SFRotation");
field37->setName("l_shoulder_rotation_changed");
ProtoInterface16->addField(*field37);

Cfield* field38 = new Cfield();
field38->setAccessType("outputOnly");
field38->setType("SFRotation");
field38->setName("l_elbow_rotation_changed");
ProtoInterface16->addField(*field38);

Cfield* field39 = new Cfield();
field39->setAccessType("outputOnly");
field39->setType("SFRotation");
field39->setName("l_wrist_rotation_changed");
ProtoInterface16->addField(*field39);

Cfield* field40 = new Cfield();
field40->setAccessType("outputOnly");
field40->setType("SFRotation");
field40->setName("r_shoulder_rotation_changed");
ProtoInterface16->addField(*field40);

Cfield* field41 = new Cfield();
field41->setAccessType("outputOnly");
field41->setType("SFRotation");
field41->setName("r_elbow_rotation_changed");
ProtoInterface16->addField(*field41);

Cfield* field42 = new Cfield();
field42->setAccessType("outputOnly");
field42->setType("SFRotation");
field42->setName("r_wrist_rotation_changed");
ProtoInterface16->addField(*field42);

ProtoDeclare15->setProtoInterface(*ProtoInterface16);

CProtoBody* ProtoBody43 = new CProtoBody();
CGroup* Group44 = (CGroup *)(m_pScene.createNode("Group"));
CTimeSensor* TimeSensor45 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor45->setDEF("TIMER");
CIS* IS46 = new CIS();
Cconnect* connect47 = new Cconnect();
connect47->setNodeField("enabled");
connect47->setProtoField("enabled");
IS46->addConnect(*connect47);

Cconnect* connect48 = new Cconnect();
connect48->setNodeField("cycleInterval");
connect48->setProtoField("cycleInterval");
IS46->addConnect(*connect48);

Cconnect* connect49 = new Cconnect();
connect49->setNodeField("loop");
connect49->setProtoField("loop");
IS46->addConnect(*connect49);

Cconnect* connect50 = new Cconnect();
connect50->setNodeField("startTime");
connect50->setProtoField("startTime");
IS46->addConnect(*connect50);

Cconnect* connect51 = new Cconnect();
connect51->setNodeField("stopTime");
connect51->setProtoField("stopTime");
IS46->addConnect(*connect51);

Cconnect* connect52 = new Cconnect();
connect52->setNodeField("isActive");
connect52->setProtoField("isActive");
IS46->addConnect(*connect52);

Cconnect* connect53 = new Cconnect();
connect53->setNodeField("fraction_changed");
connect53->setProtoField("fraction_changed");
IS46->addConnect(*connect53);

TimeSensor45->setIS(*IS46);

Group44->addChildren(*TimeSensor45);

CPositionInterpolator* PositionInterpolator54 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator54->setDEF("HUMANOIDROOT_POSITION_ANIMATOR");
PositionInterpolator54->setKey(new float[19]{0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1}, 19);
PositionInterpolator54->setKeyValue(new float[57]{0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0});
CIS* IS55 = new CIS();
Cconnect* connect56 = new Cconnect();
connect56->setNodeField("value_changed");
connect56->setProtoField("HumanoidRoot_translation_changed");
IS55->addConnect(*connect56);

PositionInterpolator54->setIS(*IS55);

Group44->addChildren(*PositionInterpolator54);

COrientationInterpolator* OrientationInterpolator57 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator57->setDEF("HUMANOIDROOT_ANIMATOR");
OrientationInterpolator57->setKey(new float[2]{0,1}, 2);
OrientationInterpolator57->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
CIS* IS58 = new CIS();
Cconnect* connect59 = new Cconnect();
connect59->setNodeField("value_changed");
connect59->setProtoField("HumanoidRoot_rotation_changed");
IS58->addConnect(*connect59);

OrientationInterpolator57->setIS(*IS58);

Group44->addChildren(*OrientationInterpolator57);

COrientationInterpolator* OrientationInterpolator60 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator60->setDEF("L_HIP_ANIMATOR");
OrientationInterpolator60->setKey(new float[7]{0,0.25,0.375,0.6667,0.7917,0.9167,1}, 7);
OrientationInterpolator60->setKeyValue(new float[28]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865});
CIS* IS61 = new CIS();
Cconnect* connect62 = new Cconnect();
connect62->setNodeField("value_changed");
connect62->setProtoField("l_hip_rotation_changed");
IS61->addConnect(*connect62);

OrientationInterpolator60->setIS(*IS61);

Group44->addChildren(*OrientationInterpolator60);

COrientationInterpolator* OrientationInterpolator63 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator63->setDEF("L_KNEE_ANIMATOR");
OrientationInterpolator63->setKey(new float[8]{0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1}, 8);
OrientationInterpolator63->setKeyValue(new float[32]{1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226});
CIS* IS64 = new CIS();
Cconnect* connect65 = new Cconnect();
connect65->setNodeField("value_changed");
connect65->setProtoField("l_knee_rotation_changed");
IS64->addConnect(*connect65);

OrientationInterpolator63->setIS(*IS64);

Group44->addChildren(*OrientationInterpolator63);

COrientationInterpolator* OrientationInterpolator66 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator66->setDEF("L_ANKLE_ANIMATOR");
OrientationInterpolator66->setKey(new float[11]{0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1}, 11);
OrientationInterpolator66->setKeyValue(new float[44]{1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001});
CIS* IS67 = new CIS();
Cconnect* connect68 = new Cconnect();
connect68->setNodeField("value_changed");
connect68->setProtoField("l_ankle_rotation_changed");
IS67->addConnect(*connect68);

OrientationInterpolator66->setIS(*IS67);

Group44->addChildren(*OrientationInterpolator66);

COrientationInterpolator* OrientationInterpolator69 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator69->setDEF("R_HIP_ANIMATOR");
OrientationInterpolator69->setKey(new float[8]{0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1}, 8);
OrientationInterpolator69->setKeyValue(new float[32]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9131,-0.06243,-0.403,0.3361,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481});
CIS* IS70 = new CIS();
Cconnect* connect71 = new Cconnect();
connect71->setNodeField("value_changed");
connect71->setProtoField("r_hip_rotation_changed");
IS70->addConnect(*connect71);

OrientationInterpolator69->setIS(*IS70);

Group44->addChildren(*OrientationInterpolator69);

COrientationInterpolator* OrientationInterpolator72 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator72->setDEF("R_KNEE_ANIMATOR");
OrientationInterpolator72->setKey(new float[8]{0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1}, 8);
OrientationInterpolator72->setKeyValue(new float[32]{1,0,0,0.8573,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.8573});
CIS* IS73 = new CIS();
Cconnect* connect74 = new Cconnect();
connect74->setNodeField("value_changed");
connect74->setProtoField("r_knee_rotation_changed");
IS73->addConnect(*connect74);

OrientationInterpolator72->setIS(*IS73);

Group44->addChildren(*OrientationInterpolator72);

COrientationInterpolator* OrientationInterpolator75 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator75->setDEF("R_ANKLE_ANIMATOR");
OrientationInterpolator75->setKey(new float[11]{0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1}, 11);
OrientationInterpolator75->setKeyValue(new float[44]{1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.86001});
CIS* IS76 = new CIS();
Cconnect* connect77 = new Cconnect();
connect77->setNodeField("value_changed");
connect77->setProtoField("r_ankle_rotation_changed");
IS76->addConnect(*connect77);

OrientationInterpolator75->setIS(*IS76);

Group44->addChildren(*OrientationInterpolator75);

COrientationInterpolator* OrientationInterpolator78 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator78->setDEF("VL5_ANIMATOR");
OrientationInterpolator78->setKey(new float[6]{0,0.2083,0.375,0.75,0.8333,1}, 6);
OrientationInterpolator78->setKeyValue(new float[24]{0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826});
CIS* IS79 = new CIS();
Cconnect* connect80 = new Cconnect();
connect80->setNodeField("value_changed");
connect80->setProtoField("vl5_rotation_changed");
IS79->addConnect(*connect80);

OrientationInterpolator78->setIS(*IS79);

Group44->addChildren(*OrientationInterpolator78);

COrientationInterpolator* OrientationInterpolator81 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator81->setDEF("SKULLBASE_ANIMATOR");
OrientationInterpolator81->setKey(new float[14]{0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1}, 14);
OrientationInterpolator81->setKeyValue(new float[56]{-1,0,0,1,-1,0,0,1,-1,0,0,0.999,-1,0,0,0.99,-1,0,0,0.99,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,1});
CIS* IS82 = new CIS();
Cconnect* connect83 = new Cconnect();
connect83->setNodeField("value_changed");
connect83->setProtoField("skullbase_rotation_changed");
IS82->addConnect(*connect83);

OrientationInterpolator81->setIS(*IS82);

Group44->addChildren(*OrientationInterpolator81);

COrientationInterpolator* OrientationInterpolator84 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator84->setDEF("L_SHOULDER_ANIMATOR");
OrientationInterpolator84->setKey(new float[7]{0,0.25,0.375,0.6667,0.7917,0.9167,1}, 7);
OrientationInterpolator84->setKeyValue(new float[28]{0,0,1,0.1,0,0,1,0.2,0,0,1,0.2,0.86,0.25,0.42,0.5,0.86,0.25,0.42,0.8,0.86,0.25,0.42,0.4,0.86,0.25,0.42,0.2});
CIS* IS85 = new CIS();
Cconnect* connect86 = new Cconnect();
connect86->setNodeField("value_changed");
connect86->setProtoField("l_shoulder_rotation_changed");
IS85->addConnect(*connect86);

OrientationInterpolator84->setIS(*IS85);

Group44->addChildren(*OrientationInterpolator84);

COrientationInterpolator* OrientationInterpolator87 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator87->setDEF("L_ELBOW_ANIMATOR");
OrientationInterpolator87->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator87->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0});
CIS* IS88 = new CIS();
Cconnect* connect89 = new Cconnect();
connect89->setNodeField("value_changed");
connect89->setProtoField("l_elbow_rotation_changed");
IS88->addConnect(*connect89);

OrientationInterpolator87->setIS(*IS88);

Group44->addChildren(*OrientationInterpolator87);

COrientationInterpolator* OrientationInterpolator90 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator90->setDEF("L_WRIST_ANIMATOR");
OrientationInterpolator90->setKey(new float[5]{0,0.32,0.64,0.88,1}, 5);
OrientationInterpolator90->setKeyValue(new float[20]{0,0,1,0,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0,0,1,0});
CIS* IS91 = new CIS();
Cconnect* connect92 = new Cconnect();
connect92->setNodeField("value_changed");
connect92->setProtoField("l_wrist_rotation_changed");
IS91->addConnect(*connect92);

OrientationInterpolator90->setIS(*IS91);

Group44->addChildren(*OrientationInterpolator90);

COrientationInterpolator* OrientationInterpolator93 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator93->setDEF("R_SHOULDER_ANIMATOR");
OrientationInterpolator93->setKey(new float[6]{0,0.45,0.64,0.76,0.88,1}, 6);
OrientationInterpolator93->setKeyValue(new float[24]{0,0,1,0,0.9992,0.02042,0.03558,7.2,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0});
CIS* IS94 = new CIS();
Cconnect* connect95 = new Cconnect();
connect95->setNodeField("value_changed");
connect95->setProtoField("r_shoulder_rotation_changed");
IS94->addConnect(*connect95);

OrientationInterpolator93->setIS(*IS94);

Group44->addChildren(*OrientationInterpolator93);

COrientationInterpolator* OrientationInterpolator96 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator96->setDEF("R_ELBOW_ANIMATOR");
OrientationInterpolator96->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator96->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0});
CIS* IS97 = new CIS();
Cconnect* connect98 = new Cconnect();
connect98->setNodeField("value_changed");
connect98->setProtoField("r_elbow_rotation_changed");
IS97->addConnect(*connect98);

OrientationInterpolator96->setIS(*IS97);

Group44->addChildren(*OrientationInterpolator96);

COrientationInterpolator* OrientationInterpolator99 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator99->setDEF("R_WRIST_ANIMATOR");
OrientationInterpolator99->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator99->setKeyValue(new float[24]{0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0});
CIS* IS100 = new CIS();
Cconnect* connect101 = new Cconnect();
connect101->setNodeField("value_changed");
connect101->setProtoField("r_wrist_rotation_changed");
IS100->addConnect(*connect101);

OrientationInterpolator99->setIS(*IS100);

Group44->addChildren(*OrientationInterpolator99);

ProtoBody43->addChildren(*Group44);

CROUTE* ROUTE102 = new CROUTE();
ROUTE102->setFromNode("TIMER");
ROUTE102->setFromField("fraction_changed");
ROUTE102->setToNode("HUMANOIDROOT_POSITION_ANIMATOR");
ROUTE102->setToField("set_fraction");
ProtoBody43->addChildren(*ROUTE102);

CROUTE* ROUTE103 = new CROUTE();
ROUTE103->setFromNode("TIMER");
ROUTE103->setFromField("fraction_changed");
ROUTE103->setToNode("HUMANOIDROOT_ANIMATOR");
ROUTE103->setToField("set_fraction");
ProtoBody43->addChildren(*ROUTE103);

CROUTE* ROUTE104 = new CROUTE();
ROUTE104->setFromNode("TIMER");
ROUTE104->setFromField("fraction_changed");
ROUTE104->setToNode("SKULLBASE_ANIMATOR");
ROUTE104->setToField("set_fraction");
ProtoBody43->addChildren(*ROUTE104);

CROUTE* ROUTE105 = new CROUTE();
ROUTE105->setFromNode("TIMER");
ROUTE105->setFromField("fraction_changed");
ROUTE105->setToNode("VL5_ANIMATOR");
ROUTE105->setToField("set_fraction");
ProtoBody43->addChildren(*ROUTE105);

CROUTE* ROUTE106 = new CROUTE();
ROUTE106->setFromNode("TIMER");
ROUTE106->setFromField("fraction_changed");
ROUTE106->setToNode("L_HIP_ANIMATOR");
ROUTE106->setToField("set_fraction");
ProtoBody43->addChildren(*ROUTE106);

CROUTE* ROUTE107 = new CROUTE();
ROUTE107->setFromNode("TIMER");
ROUTE107->setFromField("fraction_changed");
ROUTE107->setToNode("L_KNEE_ANIMATOR");
ROUTE107->setToField("set_fraction");
ProtoBody43->addChildren(*ROUTE107);

CROUTE* ROUTE108 = new CROUTE();
ROUTE108->setFromNode("TIMER");
ROUTE108->setFromField("fraction_changed");
ROUTE108->setToNode("L_ANKLE_ANIMATOR");
ROUTE108->setToField("set_fraction");
ProtoBody43->addChildren(*ROUTE108);

CROUTE* ROUTE109 = new CROUTE();
ROUTE109->setFromNode("TIMER");
ROUTE109->setFromField("fraction_changed");
ROUTE109->setToNode("R_HIP_ANIMATOR");
ROUTE109->setToField("set_fraction");
ProtoBody43->addChildren(*ROUTE109);

CROUTE* ROUTE110 = new CROUTE();
ROUTE110->setFromNode("TIMER");
ROUTE110->setFromField("fraction_changed");
ROUTE110->setToNode("R_KNEE_ANIMATOR");
ROUTE110->setToField("set_fraction");
ProtoBody43->addChildren(*ROUTE110);

CROUTE* ROUTE111 = new CROUTE();
ROUTE111->setFromNode("TIMER");
ROUTE111->setFromField("fraction_changed");
ROUTE111->setToNode("R_ANKLE_ANIMATOR");
ROUTE111->setToField("set_fraction");
ProtoBody43->addChildren(*ROUTE111);

CROUTE* ROUTE112 = new CROUTE();
ROUTE112->setFromNode("TIMER");
ROUTE112->setFromField("fraction_changed");
ROUTE112->setToNode("L_SHOULDER_ANIMATOR");
ROUTE112->setToField("set_fraction");
ProtoBody43->addChildren(*ROUTE112);

CROUTE* ROUTE113 = new CROUTE();
ROUTE113->setFromNode("TIMER");
ROUTE113->setFromField("fraction_changed");
ROUTE113->setToNode("L_ELBOW_ANIMATOR");
ROUTE113->setToField("set_fraction");
ProtoBody43->addChildren(*ROUTE113);

CROUTE* ROUTE114 = new CROUTE();
ROUTE114->setFromNode("TIMER");
ROUTE114->setFromField("fraction_changed");
ROUTE114->setToNode("L_WRIST_ANIMATOR");
ROUTE114->setToField("set_fraction");
ProtoBody43->addChildren(*ROUTE114);

CROUTE* ROUTE115 = new CROUTE();
ROUTE115->setFromNode("TIMER");
ROUTE115->setFromField("fraction_changed");
ROUTE115->setToNode("R_SHOULDER_ANIMATOR");
ROUTE115->setToField("set_fraction");
ProtoBody43->addChildren(*ROUTE115);

CROUTE* ROUTE116 = new CROUTE();
ROUTE116->setFromNode("TIMER");
ROUTE116->setFromField("fraction_changed");
ROUTE116->setToNode("R_ELBOW_ANIMATOR");
ROUTE116->setToField("set_fraction");
ProtoBody43->addChildren(*ROUTE116);

CROUTE* ROUTE117 = new CROUTE();
ROUTE117->setFromNode("TIMER");
ROUTE117->setFromField("fraction_changed");
ROUTE117->setToNode("R_WRIST_ANIMATOR");
ROUTE117->setToField("set_fraction");
ProtoBody43->addChildren(*ROUTE117);

ProtoDeclare15->setProtoBody(*ProtoBody43);

group->addChildren(*ProtoDeclare15);

CWorldInfo* WorldInfo118 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo118->setTitle("LOA1_SwimmingFlutterKickAnimation.x3d");
group->addChildren(*WorldInfo118);

CViewpoint* Viewpoint119 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint119->setDescription("LOA1_SwimmingFlutterKickAnimation scene");
Viewpoint119->setPosition(new float[3]{0,0,12});
group->addChildren(*Viewpoint119);

CAnchor* Anchor120 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor120->setDescription("Nancy Diving");
Anchor120->setUrl(new CString[4]{"NancyDiving.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.x3d","NancyDiving.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.wrl"}, 4);
Anchor120->setParameter(new CString[1]{"target=_blank"}, 1);
CShape* Shape121 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance122 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material123 = (CMaterial *)(m_pScene.createNode("Material"));
Material123->setDiffuseColor(new float[3]{1,1,0.2});
Appearance122->setMaterial(*Material123);

Shape121->setAppearance(*Appearance122);

CText* Text124 = (CText *)(m_pScene.createNode("Text"));
Text124->setString(new CString[5]{"LOA1_SwimmingFlutterKickAnimation.x3d","defines a prototype","for animating a humanoid.","","Click text to see example."}, 5);
CFontStyle* FontStyle125 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle125->setSize(0.8);
FontStyle125->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text124->setFontStyle(*FontStyle125);

Shape121->setGeometry(Text124);

Anchor120->addChildren(*Shape121);

group->addChildren(*Anchor120);

X3D0->setScene(*Scene14);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
