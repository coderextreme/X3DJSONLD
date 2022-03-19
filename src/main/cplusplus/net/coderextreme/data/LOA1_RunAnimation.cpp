/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Concretes.h"
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
meta2->setContent("LOA1_RunAnimation.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Humanoid animation prototype reusable by any Humanoid.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Cindy Ballreich cindy@ballreich.net 3Name3D");
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
meta7->setName("translated");
meta7->setContent("30 October 2001");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("modified");
meta8->setContent("23 May 2020");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl");
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
meta13->setContent("Nancy Run Animation HAnim 2001");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("identifier");
meta14->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_RunAnimation.x3d");
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
WorldInfo18->setTitle("LOA1_RunAnimation.x3d");
group->addChildren(*WorldInfo18);

CProtoDeclare ProtoDeclare19 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="LOA1_RunAnimation" ><ProtoInterface><field name="cycleInterval" accessType="inputOutput" type="SFTime" value="1"></field>
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
<PositionInterpolator DEF="HUMANOIDROOT_POSITION_ANIMATOR" key="0 0.2182 0.2909 0.3091 0.7091 0.8 0.8182 1" keyValue="0 -0.0351 0 0 -0.0351 0 0 -0.04087 0 0 -0.04886 0 0 -0.04051 0 0 -0.03666 0 0 -0.03666 0 0 -0.0351 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_translation_changed"></connect>
</IS>
</PositionInterpolator>
<OrientationInterpolator DEF="HUMANOIDROOT_ANIMATOR" key="0 1" keyValue="0 1 0 0 0 1 0 0"><IS><connect nodeField="value_changed" protoField="HumanoidRoot_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="SACROILIAC_ANIMATOR" key="0 1" keyValue="0.9969 -0.05444 0.05596 0.07687 0.9969 -0.05444 0.05596 0.07687"><IS><connect nodeField="value_changed" protoField="lower_body_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_HIP_ANIMATOR" key="0 0.2182 0.4909 0.7455 1" keyValue="-0.9986 0.03354 0.04001 1.212 -0.9889 0.1328 0.06696 0.4025 0.9894 0.1453 0.009351 0.4114 -0.9963 0.07032 0.05003 0.7035 -0.9986 0.03354 0.04001 1.212"><IS><connect nodeField="value_changed" protoField="l_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_KNEE_ANIMATOR" key="0 0.2182 0.4909 0.7455 1" keyValue="1 0 0 1.108 1 0 0 0.4265 1 0 0 0.7052 1 0 0 2.179 1 0 0 1.108"><IS><connect nodeField="value_changed" protoField="l_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ANKLE_ANIMATOR" key="0 0.2182 0.3091 0.4909 1" keyValue="1 0 0 0.03543 -1 0 0 0.1037 -1 0 0 0.4328 1 0 0 0.1929 1 0 0 0.03543"><IS><connect nodeField="value_changed" protoField="l_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_MIDTARSAL_ANIMATOR" key="0 0.5 1" keyValue="1 0 0 0 1 0 0 -0.2 1 0 0 0"><IS><connect nodeField="value_changed" protoField="l_midtarsal_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_HIP_ANIMATOR" key="0 0.2182 0.4909 0.7455 1" keyValue="0.9999 0.00293 -0.00989 0.402 -1 0.004977 -0.00497 0.5943 -1 0.003265 -0.001752 1.178 -0.9999 0.00815 -0.01093 0.3031 0.9999 0.00293 -0.00989 0.402"><IS><connect nodeField="value_changed" protoField="r_hip_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_KNEE_ANIMATOR" key="0 0.03636 0.2182 0.4909 0.7455 1" keyValue="1 0 0 0.7004 1 0 0 1.011 1 0 0 1.892 1 0 0 1.188 1 0 0 0.3964 1 0 0 0.7004"><IS><connect nodeField="value_changed" protoField="r_knee_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ANKLE_ANIMATOR" key="0 0.4909 0.7091 0.8 0.8182 1" keyValue="1 0 0 0.2323 -1 0 0 0.07843 -1 0 0 0.09676 -1 0 0 0.3274 -1 0 0 0.3278 1 0 0 0.2323"><IS><connect nodeField="value_changed" protoField="r_ankle_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_MIDTARSAL_ANIMATOR" key="0 0.5 1" keyValue="1 0 0 -0.2 1 0 0 0 1 0 0 -0.2"><IS><connect nodeField="value_changed" protoField="r_midtarsal_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="VL5_ANIMATOR" key="0 0.2545 0.4909 0.7636 1" keyValue="0.7651 0.6382 0.08586 0.2712 0.9999 0.002845 -0.01547 0.3756 0.7459 -0.6505 -0.1432 0.2416 0.9984 0.05536 -0.01154 0.3488 0.7651 0.6382 0.08586 0.2712"><IS><connect nodeField="value_changed" protoField="vl5_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="SKULLBASE_ANIMATOR" key="0 0.4909 1" keyValue="0.6517 -0.7559 0.06211 0.2508 0.6467 0.7527 -0.1238 0.2344 0.6517 -0.7559 0.06211 0.2508"><IS><connect nodeField="value_changed" protoField="skullbase_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_SHOULDER_ANIMATOR" key="0 0.2182 0.4909 0.7455 1" keyValue="0.9907 -0.07264 0.115 1.135 0.9291 -0.1222 0.349 0.1695 -0.9892 0.1364 -0.05394 0.5112 0.9942 -0.0002052 0.1073 0.4975 0.9907 -0.07264 0.115 1.135"><IS><connect nodeField="value_changed" protoField="l_shoulder_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_ELBOW_ANIMATOR" key="0 0.2182 0.4909 0.7455 1" keyValue="0.9985 0.03887 0.03802 4.689 -0.965 -0.1889 -0.1821 1.415 0.9758 0.1563 0.1529 4.666 -0.9956 -0.0936 0.009826 1.126 0.9985 0.03887 0.03802 4.689"><IS><connect nodeField="value_changed" protoField="l_elbow_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="L_WRIST_ANIMATOR" key="0 1" keyValue="-0.0240995 -0.999682 0.00741506 0.120409 -0.0240995 -0.999682 0.00741506 0.120409"><IS><connect nodeField="value_changed" protoField="l_wrist_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_SHOULDER_ANIMATOR" key="0 0.2182 0.4909 0.7455 1" keyValue="-1 0 0 0.6979 0.9094 0.2062 -0.3613 0.4157 0.9637 0.1537 -0.2185 1.353 0.4864 0.08841 -0.8693 0.1716 -1 0 0 0.6979"><IS><connect nodeField="value_changed" protoField="r_shoulder_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_ELBOW_ANIMATOR" key="0 0.2182 0.4909 0.7455 1" keyValue="0.9353 -0.2978 -0.191 4.222 -0.9362 0.2924 -0.1952 1.05 0.9941 -0.09719 -0.04725 4.512 -0.9594 0.2653 0.09579 1.525 0.9353 -0.2978 -0.191 4.222"><IS><connect nodeField="value_changed" protoField="r_elbow_rotation_changed"></connect>
</IS>
</OrientationInterpolator>
<OrientationInterpolator DEF="R_WRIST_ANIMATOR" key="0 1" keyValue="-0.917742 -0.237244 -0.318536 0.214273 -0.917742 -0.237244 -0.318536 0.214273"><IS><connect nodeField="value_changed" protoField="r_wrist_rotation_changed"></connect>
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
ProtoDeclare19->setName("LOA1_RunAnimation");
CProtoInterface* ProtoInterface20 = new CProtoInterface();
Cfield* field21 = new Cfield();
field21->setName("cycleInterval");
field21->setAccessType("inputOutput");
field21->setType("SFTime");
field21->setValue("1");
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
field23->setValue("true");
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
PositionInterpolator58->setKey(new float[8]{0,0.2182,0.2909,0.3091,0.7091,0.8,0.8182,1}, 8);
PositionInterpolator58->setKeyValue(new float[24]{0,-0.0351,0,0,-0.0351,0,0,-0.04087,0,0,-0.04886,0,0,-0.04051,0,0,-0.03666,0,0,-0.03666,0,0,-0.0351,0});
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

COrientationInterpolator* OrientationInterpolator64 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator64->setDEF("SACROILIAC_ANIMATOR");
OrientationInterpolator64->setKey(new float[2]{0,1}, 2);
OrientationInterpolator64->setKeyValue(new float[8]{0.9969,-0.05444,0.05596,0.07687,0.9969,-0.05444,0.05596,0.07687});
CIS* IS65 = new CIS();
Cconnect* connect66 = new Cconnect();
connect66->setNodeField("value_changed");
connect66->setProtoField("lower_body_rotation_changed");
IS65->addConnect(*connect66);

OrientationInterpolator64->setIS(*IS65);

Group48->addChildren(*OrientationInterpolator64);

COrientationInterpolator* OrientationInterpolator67 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator67->setDEF("L_HIP_ANIMATOR");
OrientationInterpolator67->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator67->setKeyValue(new float[20]{-0.9986,0.03354,0.04001,1.212,-0.9889,0.1328,0.06696,0.4025,0.9894,0.1453,0.009351,0.4114,-0.9963,0.07032,0.05003,0.7035,-0.9986,0.03354,0.04001,1.212});
CIS* IS68 = new CIS();
Cconnect* connect69 = new Cconnect();
connect69->setNodeField("value_changed");
connect69->setProtoField("l_hip_rotation_changed");
IS68->addConnect(*connect69);

OrientationInterpolator67->setIS(*IS68);

Group48->addChildren(*OrientationInterpolator67);

COrientationInterpolator* OrientationInterpolator70 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator70->setDEF("L_KNEE_ANIMATOR");
OrientationInterpolator70->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator70->setKeyValue(new float[20]{1,0,0,1.108,1,0,0,0.4265,1,0,0,0.7052,1,0,0,2.179,1,0,0,1.108});
CIS* IS71 = new CIS();
Cconnect* connect72 = new Cconnect();
connect72->setNodeField("value_changed");
connect72->setProtoField("l_knee_rotation_changed");
IS71->addConnect(*connect72);

OrientationInterpolator70->setIS(*IS71);

Group48->addChildren(*OrientationInterpolator70);

COrientationInterpolator* OrientationInterpolator73 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator73->setDEF("L_ANKLE_ANIMATOR");
OrientationInterpolator73->setKey(new float[5]{0,0.2182,0.3091,0.4909,1}, 5);
OrientationInterpolator73->setKeyValue(new float[20]{1,0,0,0.03543,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03543});
CIS* IS74 = new CIS();
Cconnect* connect75 = new Cconnect();
connect75->setNodeField("value_changed");
connect75->setProtoField("l_ankle_rotation_changed");
IS74->addConnect(*connect75);

OrientationInterpolator73->setIS(*IS74);

Group48->addChildren(*OrientationInterpolator73);

COrientationInterpolator* OrientationInterpolator76 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator76->setDEF("L_MIDTARSAL_ANIMATOR");
OrientationInterpolator76->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator76->setKeyValue(new float[12]{1,0,0,0,1,0,0,-0.2,1,0,0,0});
CIS* IS77 = new CIS();
Cconnect* connect78 = new Cconnect();
connect78->setNodeField("value_changed");
connect78->setProtoField("l_midtarsal_rotation_changed");
IS77->addConnect(*connect78);

OrientationInterpolator76->setIS(*IS77);

Group48->addChildren(*OrientationInterpolator76);

COrientationInterpolator* OrientationInterpolator79 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator79->setDEF("R_HIP_ANIMATOR");
OrientationInterpolator79->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator79->setKeyValue(new float[20]{0.9999,0.00293,-0.00989,0.402,-1,0.004977,-0.00497,0.5943,-1,0.003265,-0.001752,1.178,-0.9999,0.00815,-0.01093,0.3031,0.9999,0.00293,-0.00989,0.402});
CIS* IS80 = new CIS();
Cconnect* connect81 = new Cconnect();
connect81->setNodeField("value_changed");
connect81->setProtoField("r_hip_rotation_changed");
IS80->addConnect(*connect81);

OrientationInterpolator79->setIS(*IS80);

Group48->addChildren(*OrientationInterpolator79);

COrientationInterpolator* OrientationInterpolator82 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator82->setDEF("R_KNEE_ANIMATOR");
OrientationInterpolator82->setKey(new float[6]{0,0.03636,0.2182,0.4909,0.7455,1}, 6);
OrientationInterpolator82->setKeyValue(new float[24]{1,0,0,0.7004,1,0,0,1.011,1,0,0,1.892,1,0,0,1.188,1,0,0,0.3964,1,0,0,0.7004});
CIS* IS83 = new CIS();
Cconnect* connect84 = new Cconnect();
connect84->setNodeField("value_changed");
connect84->setProtoField("r_knee_rotation_changed");
IS83->addConnect(*connect84);

OrientationInterpolator82->setIS(*IS83);

Group48->addChildren(*OrientationInterpolator82);

COrientationInterpolator* OrientationInterpolator85 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator85->setDEF("R_ANKLE_ANIMATOR");
OrientationInterpolator85->setKey(new float[6]{0,0.4909,0.7091,0.8,0.8182,1}, 6);
OrientationInterpolator85->setKeyValue(new float[24]{1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.09676,-1,0,0,0.3274,-1,0,0,0.3278,1,0,0,0.2323});
CIS* IS86 = new CIS();
Cconnect* connect87 = new Cconnect();
connect87->setNodeField("value_changed");
connect87->setProtoField("r_ankle_rotation_changed");
IS86->addConnect(*connect87);

OrientationInterpolator85->setIS(*IS86);

Group48->addChildren(*OrientationInterpolator85);

COrientationInterpolator* OrientationInterpolator88 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator88->setDEF("R_MIDTARSAL_ANIMATOR");
OrientationInterpolator88->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator88->setKeyValue(new float[12]{1,0,0,-0.2,1,0,0,0,1,0,0,-0.2});
CIS* IS89 = new CIS();
Cconnect* connect90 = new Cconnect();
connect90->setNodeField("value_changed");
connect90->setProtoField("r_midtarsal_rotation_changed");
IS89->addConnect(*connect90);

OrientationInterpolator88->setIS(*IS89);

Group48->addChildren(*OrientationInterpolator88);

COrientationInterpolator* OrientationInterpolator91 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator91->setDEF("VL5_ANIMATOR");
OrientationInterpolator91->setKey(new float[5]{0,0.2545,0.4909,0.7636,1}, 5);
OrientationInterpolator91->setKeyValue(new float[20]{0.7651,0.6382,0.08586,0.2712,0.9999,0.002845,-0.01547,0.3756,0.7459,-0.6505,-0.1432,0.2416,0.9984,0.05536,-0.01154,0.3488,0.7651,0.6382,0.08586,0.2712});
CIS* IS92 = new CIS();
Cconnect* connect93 = new Cconnect();
connect93->setNodeField("value_changed");
connect93->setProtoField("vl5_rotation_changed");
IS92->addConnect(*connect93);

OrientationInterpolator91->setIS(*IS92);

Group48->addChildren(*OrientationInterpolator91);

COrientationInterpolator* OrientationInterpolator94 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator94->setDEF("SKULLBASE_ANIMATOR");
OrientationInterpolator94->setKey(new float[3]{0,0.4909,1}, 3);
OrientationInterpolator94->setKeyValue(new float[12]{0.6517,-0.7559,0.06211,0.2508,0.6467,0.7527,-0.1238,0.2344,0.6517,-0.7559,0.06211,0.2508});
CIS* IS95 = new CIS();
Cconnect* connect96 = new Cconnect();
connect96->setNodeField("value_changed");
connect96->setProtoField("skullbase_rotation_changed");
IS95->addConnect(*connect96);

OrientationInterpolator94->setIS(*IS95);

Group48->addChildren(*OrientationInterpolator94);

COrientationInterpolator* OrientationInterpolator97 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator97->setDEF("L_SHOULDER_ANIMATOR");
OrientationInterpolator97->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator97->setKeyValue(new float[20]{0.9907,-0.07264,0.115,1.135,0.9291,-0.1222,0.349,0.1695,-0.9892,0.1364,-0.05394,0.5112,0.9942,-0.0002052,0.1073,0.4975,0.9907,-0.07264,0.115,1.135});
CIS* IS98 = new CIS();
Cconnect* connect99 = new Cconnect();
connect99->setNodeField("value_changed");
connect99->setProtoField("l_shoulder_rotation_changed");
IS98->addConnect(*connect99);

OrientationInterpolator97->setIS(*IS98);

Group48->addChildren(*OrientationInterpolator97);

COrientationInterpolator* OrientationInterpolator100 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator100->setDEF("L_ELBOW_ANIMATOR");
OrientationInterpolator100->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator100->setKeyValue(new float[20]{0.9985,0.03887,0.03802,4.689,-0.965,-0.1889,-0.1821,1.415,0.9758,0.1563,0.1529,4.666,-0.9956,-0.0936,0.009826,1.126,0.9985,0.03887,0.03802,4.689});
CIS* IS101 = new CIS();
Cconnect* connect102 = new Cconnect();
connect102->setNodeField("value_changed");
connect102->setProtoField("l_elbow_rotation_changed");
IS101->addConnect(*connect102);

OrientationInterpolator100->setIS(*IS101);

Group48->addChildren(*OrientationInterpolator100);

COrientationInterpolator* OrientationInterpolator103 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator103->setDEF("L_WRIST_ANIMATOR");
OrientationInterpolator103->setKey(new float[2]{0,1}, 2);
OrientationInterpolator103->setKeyValue(new float[8]{-0.0240995,-0.999682,0.00741506,0.120409,-0.0240995,-0.999682,0.00741506,0.120409});
CIS* IS104 = new CIS();
Cconnect* connect105 = new Cconnect();
connect105->setNodeField("value_changed");
connect105->setProtoField("l_wrist_rotation_changed");
IS104->addConnect(*connect105);

OrientationInterpolator103->setIS(*IS104);

Group48->addChildren(*OrientationInterpolator103);

COrientationInterpolator* OrientationInterpolator106 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator106->setDEF("R_SHOULDER_ANIMATOR");
OrientationInterpolator106->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator106->setKeyValue(new float[20]{-1,0,0,0.6979,0.9094,0.2062,-0.3613,0.4157,0.9637,0.1537,-0.2185,1.353,0.4864,0.08841,-0.8693,0.1716,-1,0,0,0.6979});
CIS* IS107 = new CIS();
Cconnect* connect108 = new Cconnect();
connect108->setNodeField("value_changed");
connect108->setProtoField("r_shoulder_rotation_changed");
IS107->addConnect(*connect108);

OrientationInterpolator106->setIS(*IS107);

Group48->addChildren(*OrientationInterpolator106);

COrientationInterpolator* OrientationInterpolator109 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator109->setDEF("R_ELBOW_ANIMATOR");
OrientationInterpolator109->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator109->setKeyValue(new float[20]{0.9353,-0.2978,-0.191,4.222,-0.9362,0.2924,-0.1952,1.05,0.9941,-0.09719,-0.04725,4.512,-0.9594,0.2653,0.09579,1.525,0.9353,-0.2978,-0.191,4.222});
CIS* IS110 = new CIS();
Cconnect* connect111 = new Cconnect();
connect111->setNodeField("value_changed");
connect111->setProtoField("r_elbow_rotation_changed");
IS110->addConnect(*connect111);

OrientationInterpolator109->setIS(*IS110);

Group48->addChildren(*OrientationInterpolator109);

COrientationInterpolator* OrientationInterpolator112 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator112->setDEF("R_WRIST_ANIMATOR");
OrientationInterpolator112->setKey(new float[2]{0,1}, 2);
OrientationInterpolator112->setKeyValue(new float[8]{-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273});
CIS* IS113 = new CIS();
Cconnect* connect114 = new Cconnect();
connect114->setNodeField("value_changed");
connect114->setProtoField("r_wrist_rotation_changed");
IS113->addConnect(*connect114);

OrientationInterpolator112->setIS(*IS113);

Group48->addChildren(*OrientationInterpolator112);

ProtoBody47->addChildren(*Group48);

CROUTE* ROUTE115 = new CROUTE();
ROUTE115->setFromField("fraction_changed");
ROUTE115->setFromNode("TIMER");
ROUTE115->setToField("set_fraction");
ROUTE115->setToNode("HUMANOIDROOT_POSITION_ANIMATOR");
ProtoBody47->addChildren(*ROUTE115);

CROUTE* ROUTE116 = new CROUTE();
ROUTE116->setFromField("fraction_changed");
ROUTE116->setFromNode("TIMER");
ROUTE116->setToField("set_fraction");
ROUTE116->setToNode("HUMANOIDROOT_ANIMATOR");
ProtoBody47->addChildren(*ROUTE116);

CROUTE* ROUTE117 = new CROUTE();
ROUTE117->setFromField("fraction_changed");
ROUTE117->setFromNode("TIMER");
ROUTE117->setToField("set_fraction");
ROUTE117->setToNode("SACROILIAC_ANIMATOR");
ProtoBody47->addChildren(*ROUTE117);

CROUTE* ROUTE118 = new CROUTE();
ROUTE118->setFromField("fraction_changed");
ROUTE118->setFromNode("TIMER");
ROUTE118->setToField("set_fraction");
ROUTE118->setToNode("L_HIP_ANIMATOR");
ProtoBody47->addChildren(*ROUTE118);

CROUTE* ROUTE119 = new CROUTE();
ROUTE119->setFromField("fraction_changed");
ROUTE119->setFromNode("TIMER");
ROUTE119->setToField("set_fraction");
ROUTE119->setToNode("L_KNEE_ANIMATOR");
ProtoBody47->addChildren(*ROUTE119);

CROUTE* ROUTE120 = new CROUTE();
ROUTE120->setFromField("fraction_changed");
ROUTE120->setFromNode("TIMER");
ROUTE120->setToField("set_fraction");
ROUTE120->setToNode("L_ANKLE_ANIMATOR");
ProtoBody47->addChildren(*ROUTE120);

CROUTE* ROUTE121 = new CROUTE();
ROUTE121->setFromField("fraction_changed");
ROUTE121->setFromNode("TIMER");
ROUTE121->setToField("set_fraction");
ROUTE121->setToNode("L_MIDTARSAL_ANIMATOR");
ProtoBody47->addChildren(*ROUTE121);

CROUTE* ROUTE122 = new CROUTE();
ROUTE122->setFromField("fraction_changed");
ROUTE122->setFromNode("TIMER");
ROUTE122->setToField("set_fraction");
ROUTE122->setToNode("R_HIP_ANIMATOR");
ProtoBody47->addChildren(*ROUTE122);

CROUTE* ROUTE123 = new CROUTE();
ROUTE123->setFromField("fraction_changed");
ROUTE123->setFromNode("TIMER");
ROUTE123->setToField("set_fraction");
ROUTE123->setToNode("R_KNEE_ANIMATOR");
ProtoBody47->addChildren(*ROUTE123);

CROUTE* ROUTE124 = new CROUTE();
ROUTE124->setFromField("fraction_changed");
ROUTE124->setFromNode("TIMER");
ROUTE124->setToField("set_fraction");
ROUTE124->setToNode("R_ANKLE_ANIMATOR");
ProtoBody47->addChildren(*ROUTE124);

CROUTE* ROUTE125 = new CROUTE();
ROUTE125->setFromField("fraction_changed");
ROUTE125->setFromNode("TIMER");
ROUTE125->setToField("set_fraction");
ROUTE125->setToNode("R_MIDTARSAL_ANIMATOR");
ProtoBody47->addChildren(*ROUTE125);

CROUTE* ROUTE126 = new CROUTE();
ROUTE126->setFromField("fraction_changed");
ROUTE126->setFromNode("TIMER");
ROUTE126->setToField("set_fraction");
ROUTE126->setToNode("VL5_ANIMATOR");
ProtoBody47->addChildren(*ROUTE126);

CROUTE* ROUTE127 = new CROUTE();
ROUTE127->setFromField("fraction_changed");
ROUTE127->setFromNode("TIMER");
ROUTE127->setToField("set_fraction");
ROUTE127->setToNode("SKULLBASE_ANIMATOR");
ProtoBody47->addChildren(*ROUTE127);

CROUTE* ROUTE128 = new CROUTE();
ROUTE128->setFromField("fraction_changed");
ROUTE128->setFromNode("TIMER");
ROUTE128->setToField("set_fraction");
ROUTE128->setToNode("L_SHOULDER_ANIMATOR");
ProtoBody47->addChildren(*ROUTE128);

CROUTE* ROUTE129 = new CROUTE();
ROUTE129->setFromField("fraction_changed");
ROUTE129->setFromNode("TIMER");
ROUTE129->setToField("set_fraction");
ROUTE129->setToNode("L_ELBOW_ANIMATOR");
ProtoBody47->addChildren(*ROUTE129);

CROUTE* ROUTE130 = new CROUTE();
ROUTE130->setFromField("fraction_changed");
ROUTE130->setFromNode("TIMER");
ROUTE130->setToField("set_fraction");
ROUTE130->setToNode("L_WRIST_ANIMATOR");
ProtoBody47->addChildren(*ROUTE130);

CROUTE* ROUTE131 = new CROUTE();
ROUTE131->setFromField("fraction_changed");
ROUTE131->setFromNode("TIMER");
ROUTE131->setToField("set_fraction");
ROUTE131->setToNode("R_SHOULDER_ANIMATOR");
ProtoBody47->addChildren(*ROUTE131);

CROUTE* ROUTE132 = new CROUTE();
ROUTE132->setFromField("fraction_changed");
ROUTE132->setFromNode("TIMER");
ROUTE132->setToField("set_fraction");
ROUTE132->setToNode("R_ELBOW_ANIMATOR");
ProtoBody47->addChildren(*ROUTE132);

CROUTE* ROUTE133 = new CROUTE();
ROUTE133->setFromField("fraction_changed");
ROUTE133->setFromNode("TIMER");
ROUTE133->setToField("set_fraction");
ROUTE133->setToNode("R_WRIST_ANIMATOR");
ProtoBody47->addChildren(*ROUTE133);

ProtoDeclare19->setProtoBody(*ProtoBody47);

group->addChildren(*ProtoDeclare19);

//======================================
//Point to example use in case someone inspects this file
CAnchor* Anchor134 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor134->setDescription("InterchangableActorsViaDynamicRouting");
Anchor134->setParameter(new CString[1]{"target=_blank"}, 1);
Anchor134->setUrl(new CString[4]{"InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"}, 4);
CShape* Shape135 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text136 = (CText *)(m_pScene.createNode("Text"));
Text136->setString(new CString[6]{"LOA1_RunAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."}, 6);
CFontStyle* FontStyle137 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle137->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle137->setSize(0.8);
Text136->setFontStyle(*FontStyle137);

Shape135->setGeometry(Text136);

CAppearance* Appearance138 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material139 = (CMaterial *)(m_pScene.createNode("Material"));
Material139->setDiffuseColor(new float[3]{1,1,0.2});
Appearance138->setMaterial(*Material139);

Shape135->setAppearance(*Appearance138);

Anchor134->addChildren(*Shape135);

group->addChildren(*Anchor134);

X3D0->setScene(*Scene17);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
