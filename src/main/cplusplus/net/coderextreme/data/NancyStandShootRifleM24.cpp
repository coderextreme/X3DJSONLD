/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "/c/x3d-code/www.web3d.org/x3d/languages/cpp/X3DLib/X3DLib.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Immersive");
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Ccomponent* component2 = new Ccomponent();
component2->setName("H-Anim");
component2->setLevel(1);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("NancyStandShootRifleM24.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("Canonical HAnim 1.1 specification example, using native X3D tags instead of ProtoDeclaration/ExternProtoDeclaration and ProtoInstance.");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("Etsuko Lippi");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("4 January 2002");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("23 May 2020");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("warning");
meta8->setContent("ProtoBody missing content");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("warning");
meta9->setContent("Numerous QA warnings need to be corrected");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("warning");
meta10->setContent("LOA1_ShootAnimation ought to be moved out as a separate prototype.");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("identifier");
meta11->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/NancyStandShootRifleM24.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("generator");
meta12->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("license");
meta13->setContent("../license.html");
head1->addMeta(*meta13);

X3D0->setHead(*head1);

CScene* Scene14 = new CScene();
CExternProtoDeclare* ExternProtoDeclare15 = new CExternProtoDeclare();
ExternProtoDeclare15->setName("RifleM24");
ExternProtoDeclare15->setAppinfo("Rifle M24");
ExternProtoDeclare15->setUrl(new CString[4]{"../../Savage/Weapons/SmallArms/RifleM24Prototype.x3d#RifleM24","https://savage.nps.edu/Savage/Weapons/SmallArms/RifleM24Prototype.x3d#RifleM24","../../Savage/Weapons/SmallArms/RifleM24Prototype.wrl#RifleM24","https://savage.nps.edu/Savage/Weapons/SmallArms/RifleM24Prototype.wrl#RifleM24"}, 4);
Cfield* field16 = new Cfield();
field16->setName("trigger");
field16->setAccessType("inputOnly");
field16->setAppinfo("input true to fire");
field16->setType("SFBool");
ExternProtoDeclare15->addField(*field16);

Cfield* field17 = new Cfield();
field17->setName("fire");
field17->setAccessType("outputOnly");
field17->setAppinfo("output true when fired");
field17->setType("SFBool");
ExternProtoDeclare15->addField(*field17);

Cfield* field18 = new Cfield();
field18->setName("animationStartTime");
field18->setAccessType("inputOnly");
field18->setAppinfo("trigger animation");
field18->setType("SFTime");
ExternProtoDeclare15->addField(*field18);

group->addChildren(*ExternProtoDeclare15);

CProtoDeclare ProtoDeclare19 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="LOA1_ShootAnimation" ><ProtoInterface><field name="cycleInterval" accessType="inputOutput" type="SFTime" value="0.009999999776482582"></field>
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
<ProtoBody><Group DEF="ErrorLostContentCheckVersionControl"></Group>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare19->setName("LOA1_ShootAnimation");
CProtoInterface* ProtoInterface20 = new CProtoInterface();
Cfield* field21 = new Cfield();
field21->setName("cycleInterval");
field21->setAccessType("inputOutput");
field21->setType("SFTime");
field21->setValue("0.009999999776482582");
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
Group48->setDEF("ErrorLostContentCheckVersionControl");
ProtoBody47->addChildren(*Group48);

ProtoDeclare19->setProtoBody(*ProtoBody47);

group->addChildren(*ProtoDeclare19);

//Start scene graph.
CBackground* Background49 = (CBackground *)(m_pScene.createNode("Background"));
Background49->setSkyColor(new float[3]{0.6,0.6,0.6});
group->addChildren(*Background49);

CViewpoint* Viewpoint50 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint50->setDescription("Nancy Rifle Shooting Position");
Viewpoint50->setPosition(new float[3]{0,0.9,2.7});
group->addChildren(*Viewpoint50);

CViewpoint* Viewpoint51 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint51->setDescription("Nancy Side Viewpoint");
Viewpoint51->setOrientation(new float[4]{0,-1,0,1.4925});
Viewpoint51->setPosition(new float[3]{-2.7,0.9,0.4});
group->addChildren(*Viewpoint51);

CViewpoint* Viewpoint52 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint52->setDescription("Nancy Above Viewpoint");
Viewpoint52->setOrientation(new float[4]{0.954,0.244,0.172,4.6369});
Viewpoint52->setPosition(new float[3]{0.1,4.1,-0.2});
group->addChildren(*Viewpoint52);

CLOD* LOD53 = (CLOD *)(m_pScene.createNode("LOD"));
LOD53->setRange(new float[2]{50,100}, 2);
CGroup* Group54 = (CGroup *)(m_pScene.createNode("Group"));
Group54->setDEF("Viewpoint");
//High Resolution
CGroup* Group55 = (CGroup *)(m_pScene.createNode("Group"));
Group55->setDEF("HighResolution");
CTransform* Transform56 = (CTransform *)(m_pScene.createNode("Transform"));
CHAnimHumanoid* HAnimHumanoid57 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid57->setName("Nancy");
HAnimHumanoid57->setDEF("hanim_Nancy");
HAnimHumanoid57->setVersion("1.0");
CHAnimJoint* HAnimJoint58 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint58->setName("humanoid_root");
HAnimJoint58->setDEF("hanim_humanoid_root");
HAnimJoint58->setCenter(new float[3]{-0.00405,0.855,-0.000113});
HAnimJoint58->setUlimit(new float[3]{0,0,0});
HAnimJoint58->setLlimit(new float[3]{0,0,0});
HAnimJoint58->setStiffness(new float[3]{0,0,0});
CHAnimJoint* HAnimJoint59 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint59->setName("sacroiliac");
HAnimJoint59->setDEF("hanim_sacroiliac");
HAnimJoint59->setCenter(new float[3]{0,1.01,-0.0204});
HAnimJoint59->setUlimit(new float[3]{0,0,0});
HAnimJoint59->setLlimit(new float[3]{0,0,0});
HAnimJoint59->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment60 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment60->setName("pelvis");
HAnimSegment60->setDEF("hanim_pelvis");
CShape* Shape61 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance62 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material63 = (CMaterial *)(m_pScene.createNode("Material"));
Material63->setDEF("Pants_Color");
Material63->setAmbientIntensity(0.25);
Material63->setDiffuseColor(new float[3]{0.054,0.233,0.39});
Appearance62->setMaterial(*Material63);

CImageTexture* ImageTexture64 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture64->setDEF("camo");
ImageTexture64->setRepeatS(False);
ImageTexture64->setRepeatT(False);
ImageTexture64->setUrl(new CString[2]{"greenCamo.jpg","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/greenCamo.jpg"}, 2);
Appearance62->setTexture(*ImageTexture64);

Shape61->setAppearance(*Appearance62);

CIndexedFaceSet* IndexedFaceSet65 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet65->setCoordIndex(new int[712]{0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1});
IndexedFaceSet65->setCreaseAngle(1.14);
CCoordinate* Coordinate66 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate66->setPoint(new float[273]{0,1.06,0.0218,0.0561,1.07,0.00726,0.0851,1.07,-0.0115,0.104,1.07,-0.0497,0.0851,1.07,-0.0851,0.032,1.06,-0.0985,0.0873,1.04,0.0078,0.033,1.04,0.0395,0.123,1.05,-0.0405,0.0609,1.02,-0.106,0.0894,0.996,-0.106,0.143,1,-0.0309,0.117,1,0.0164,0.0314,0.999,0.0502,0.0314,0.96,-0.13,0.156,0.966,-0.0405,0.156,0.968,-0.00724,0.0341,0.954,0.0513,0.115,0.96,-0.0916,0.121,0.926,0.0352,0.0357,0.92,0.0497,0.0314,0.91,-0.146,0.0991,0.91,-0.131,0.169,0.883,-0.0448,0.169,0.885,-0.00939,0.123,0.873,0.0384,0.0926,0.872,0.047,0.0325,0.873,0.0287,0.0293,0.866,-0.142,0.102,0.869,-0.131,0.129,0.868,-0.103,0.0314,0.84,-0.125,0.101,0.844,-0.122,0.133,0.846,-0.0878,0.0653,0.835,0.0132,0.0615,0.824,-0.111,0.0985,0.823,-0.101,0.132,0.826,-0.0448,0.0609,0.821,-0.0158,0.0599,0.812,-0.0545,0,1.08,-0.0266,-0.0561,1.07,0.00726,-0.0851,1.07,-0.0115,-0.104,1.07,-0.0497,-0.0851,1.07,-0.0851,-0.032,1.06,-0.0985,-0.0873,1.04,0.0078,-0.033,1.04,0.0395,-0.123,1.05,-0.0405,-0.0609,1.02,-0.106,0,1.02,-0.108,-0.0894,0.996,-0.106,-0.143,1,-0.0309,-0.144,1,-0.011,-0.117,1,0.0164,-0.0314,0.999,0.0502,0,0.961,-0.123,-0.0314,0.96,-0.13,-0.156,0.966,-0.0405,-0.156,0.968,-0.00724,-0.0341,0.954,0.0513,-0.115,0.96,-0.0916,-0.121,0.926,0.0352,-0.0357,0.92,0.0497,0,0.91,-0.127,-0.0314,0.91,-0.146,-0.0991,0.91,-0.131,-0.167,0.911,-0.0448,-0.167,0.912,-0.00671,0,0.883,-0.129,-0.123,0.873,0.0384,-0.0926,0.872,0.047,-0.0325,0.873,0.0287,-0.0293,0.866,-0.142,-0.102,0.869,-0.131,-0.129,0.868,-0.103,-0.166,0.863,-0.0148,0,0.863,-0.00456,-0.166,0.862,-0.0459,0,0.858,-0.1,-0.0314,0.84,-0.125,-0.101,0.844,-0.122,-0.0653,0.835,0.0132,0,0.839,-0.0217,0,0.835,-0.0867,-0.0615,0.824,-0.111,-0.0985,0.823,-0.101,-0.132,0.826,-0.0448,-0.0609,0.821,-0.0158,0,0.831,-0.0626,-0.0599,0.812,-0.0545});
IndexedFaceSet65->setCoord(*Coordinate66);

Shape61->setGeometry(IndexedFaceSet65);

HAnimSegment60->addChildren(*Shape61);

HAnimJoint59->addChildren(*HAnimSegment60);

CHAnimJoint* HAnimJoint67 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint67->setName("l_hip");
HAnimJoint67->setDEF("hanim_l_hip");
HAnimJoint67->setCenter(new float[3]{0.122,0.888271,-0.0693267});
HAnimJoint67->setUlimit(new float[3]{0,0,0});
HAnimJoint67->setLlimit(new float[3]{0,0,0});
HAnimJoint67->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment68 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment68->setName("l_thigh");
HAnimSegment68->setDEF("hanim_l_thigh");
CShape* Shape69 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance70 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material71 = (CMaterial *)(m_pScene.createNode("Material"));
Material71->setUSE("Pants_Color");
Appearance70->setMaterial(*Material71);

CImageTexture* ImageTexture72 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture72->setUSE("camo");
Appearance70->setTexture(*ImageTexture72);

Shape69->setAppearance(*Appearance70);

CIndexedFaceSet* IndexedFaceSet73 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet73->setCoordIndex(new int[248]{0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1});
IndexedFaceSet73->setCreaseAngle(1.32);
CCoordinate* Coordinate74 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate74->setPoint(new float[99]{0.0969,0.804,-0.0486,0.101,0.876,0.0336,0.17,0.894,-0.00778,0.17,0.891,-0.076,0.124,0.858,-0.129,0.076,0.843,-0.143,0.025,0.819,-0.0889,0.0507,0.847,0.0196,0.00349,0.826,-0.0287,0.0991,0.808,0.0406,0.161,0.814,-0.00187,0.165,0.808,-0.0755,0.122,0.788,-0.126,0.00993,0.762,-0.0937,0.00993,0.762,-0.0309,0.0491,0.777,0.0185,0.0755,0.766,-0.139,0.13,0.597,-0.00618,0.132,0.6,-0.0593,0.108,0.603,-0.105,0.0722,0.601,-0.118,0.0314,0.59,-0.0953,0.0239,0.566,-0.0427,0.047,0.566,0.0051,0.0878,0.581,0.0217,0.114,0.499,-0.0132,0.116,0.488,-0.061,0.103,0.567,-0.0991,0.0362,0.557,-0.0926,0.025,0.486,-0.047,0.0507,0.497,-0.00188,0.0862,0.513,0.018,0.0733,0.579,-0.108});
IndexedFaceSet73->setCoord(*Coordinate74);

Shape69->setGeometry(IndexedFaceSet73);

HAnimSegment68->addChildren(*Shape69);

HAnimJoint67->addChildren(*HAnimSegment68);

CHAnimJoint* HAnimJoint75 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint75->setName("l_knee");
HAnimJoint75->setDEF("hanim_l_knee");
HAnimJoint75->setCenter(new float[3]{0.0738,0.517,-0.0284});
HAnimJoint75->setUlimit(new float[3]{0,0,0});
HAnimJoint75->setLlimit(new float[3]{0,0,0});
HAnimJoint75->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment76 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment76->setName("l_calf");
HAnimSegment76->setDEF("hanim_l_calf");
CShape* Shape77 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance78 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material79 = (CMaterial *)(m_pScene.createNode("Material"));
Material79->setUSE("Pants_Color");
Appearance78->setMaterial(*Material79);

CImageTexture* ImageTexture80 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture80->setUSE("camo");
Appearance78->setTexture(*ImageTexture80);

Shape77->setAppearance(*Appearance78);

CIndexedFaceSet* IndexedFaceSet81 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet81->setCoordIndex(new int[368]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1});
IndexedFaceSet81->setCreaseAngle(1.57);
CCoordinate* Coordinate82 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate82->setPoint(new float[144]{0.0883,0.532,-0.00349,0.0609,0.533,-0.00833,0.0814,0.55,-0.0395,0.0529,0.536,-0.0368,0.0577,0.544,-0.0577,0.0722,0.546,-0.0717,0.0975,0.54,-0.0647,0.105,0.539,-0.0438,0.104,0.539,-0.0223,0.0862,0.506,0.0158,0.101,0.51,-0.0798,0.0706,0.51,-0.101,0.0406,0.513,-0.0744,0.0368,0.51,-0.0357,0.0556,0.506,-0.000272,0.117,0.508,-0.0169,0.0878,0.361,-0.0126,0.123,0.363,-0.04,0.123,0.363,-0.0663,0.107,0.367,-0.107,0.0588,0.365,-0.122,0.0228,0.358,-0.0926,0.0239,0.358,-0.0475,0.0497,0.358,-0.0234,0.118,0.311,-0.0411,0.118,0.309,-0.0685,0.105,0.31,-0.108,0.0572,0.308,-0.123,0.0201,0.309,-0.0937,0.0191,0.311,-0.0508,0.0475,0.307,-0.0282,0.0883,0.309,-0.018,0.0959,0.124,-0.04,0.0905,0.12,-0.0647,0.0738,0.117,-0.0814,0.0373,0.121,-0.0636,0.0416,0.124,-0.0416,0.0744,0.13,-0.0212,0.0561,0.13,-0.0245,0.0529,0.121,-0.0873,0.0948,0.0897,-0.0368,0.0916,0.0779,-0.0604,0.0717,0.0854,-0.0765,0.0406,0.0918,-0.0626,0.0384,0.0881,-0.0363,0.054,0.0972,-0.0175,0.0765,0.11,-0.0169,0.0486,0.0999,-0.0835});
IndexedFaceSet81->setCoord(*Coordinate82);

Shape77->setGeometry(IndexedFaceSet81);

HAnimSegment76->addChildren(*Shape77);

HAnimJoint75->addChildren(*HAnimSegment76);

CHAnimJoint* HAnimJoint83 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint83->setName("l_ankle");
HAnimJoint83->setDEF("hanim_l_ankle");
HAnimJoint83->setCenter(new float[3]{0.0645,0.0719,-0.048});
HAnimJoint83->setUlimit(new float[3]{0,0,0});
HAnimJoint83->setLlimit(new float[3]{0,0,0});
HAnimJoint83->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment84 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment84->setName("l_hindfoot");
HAnimSegment84->setDEF("hanim_l_hindfoot");
CShape* Shape85 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance86 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material87 = (CMaterial *)(m_pScene.createNode("Material"));
Material87->setDEF("Shoe_Color");
Material87->setAmbientIntensity(0.25);
Material87->setDiffuseColor(new float[3]{0,0,0});
Appearance86->setMaterial(*Material87);

Shape85->setAppearance(*Appearance86);

CIndexedFaceSet* IndexedFaceSet88 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet88->setCoordIndex(new int[392]{2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1});
IndexedFaceSet88->setCreaseAngle(1.57);
CCoordinate* Coordinate89 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate89->setPoint(new float[153]{0.0529,0,-0.0923,0.0863,0,-0.0862,0.0727,0,-0.0994,0.0863,0.0219,-0.0862,0.0727,0.0219,-0.0994,0.1,0,-0.0594,0.1,0.0219,-0.0594,0.113,0,0.0645,0.113,0.0219,0.0645,0.112,0,0.117,0.112,0.0156,0.117,0.0701,0,0.146,0.0701,0.0156,0.146,0.0468,0,0.153,0.0468,0.0156,0.153,0.0215,0,0.146,0.0215,0.0156,0.146,0.0165,0,0.125,0.0165,0.0156,0.125,0.0211,0,0.0377,0.0211,0.0219,0.0377,0.0393,0,-0.0129,0.0393,0.0219,-0.0129,0.0433,0,-0.0534,0.0433,0.0219,-0.0534,0.0529,0.0219,-0.0923,0.0305,0.0253,0.0938,0.0505,0.0253,0.099,0.0854,0.0253,0.0834,0.102,0.0253,0.0707,0.0568,0.0573,-0.0918,0.0492,0.0573,-0.0497,0.0435,0.0573,-0.0225,0.0442,0.0573,0.0235,0.0623,0.0573,0.0366,0.0911,0.0573,0.0159,0.0962,0.0573,-0.0121,0.0911,0.0573,-0.0482,0.0758,0.0573,-0.0899,0.0676,0.0573,-0.0962,0.0578,0.0953,-0.0896,0.0489,0.0953,-0.0757,0.0447,0.0953,-0.0432,0.0451,0.0953,-0.0128,0.0624,0.0953,-0.00466,0.0857,0.0953,-0.0134,0.0953,0.0953,-0.038,0.0843,0.0953,-0.0803,0.0761,0.0953,-0.0889,0.0682,0.0953,-0.0929,0.0675,0.13,-0.0608});
IndexedFaceSet88->setCoord(*Coordinate89);

Shape85->setGeometry(IndexedFaceSet88);

HAnimSegment84->addChildren(*Shape85);

HAnimJoint83->addChildren(*HAnimSegment84);

HAnimJoint75->addChildren(*HAnimJoint83);

HAnimJoint67->addChildren(*HAnimJoint75);

HAnimJoint59->addChildren(*HAnimJoint67);

CHAnimJoint* HAnimJoint90 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint90->setName("r_hip");
HAnimJoint90->setDEF("hanim_r_hip");
HAnimJoint90->setCenter(new float[3]{-0.11,0.892362,-0.0732533});
HAnimJoint90->setUlimit(new float[3]{0,0,0});
HAnimJoint90->setLlimit(new float[3]{0,0,0});
HAnimJoint90->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment91 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment91->setName("r_thigh");
HAnimSegment91->setDEF("hanim_r_thigh");
CShape* Shape92 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance93 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material94 = (CMaterial *)(m_pScene.createNode("Material"));
Material94->setUSE("Pants_Color");
Appearance93->setMaterial(*Material94);

CImageTexture* ImageTexture95 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture95->setUSE("camo");
Appearance93->setTexture(*ImageTexture95);

Shape92->setAppearance(*Appearance93);

CIndexedFaceSet* IndexedFaceSet96 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet96->setCoordIndex(new int[240]{5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1});
IndexedFaceSet96->setCreaseAngle(1.61);
CCoordinate* Coordinate97 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate97->setPoint(new float[96]{-0.0969,0.804,-0.0486,-0.101,0.876,0.0336,-0.17,0.894,-0.00778,-0.17,0.891,-0.076,-0.124,0.858,-0.129,-0.076,0.843,-0.143,-0.025,0.819,-0.0889,-0.0507,0.847,0.0196,-0.00349,0.826,-0.0287,-0.0991,0.808,0.0406,-0.161,0.814,-0.00187,-0.165,0.808,-0.0755,-0.122,0.788,-0.126,-0.00993,0.762,-0.0937,-0.00993,0.762,-0.0309,-0.0491,0.777,0.0185,-0.0755,0.766,-0.139,-0.13,0.597,-0.00618,-0.132,0.6,-0.0593,-0.108,0.603,-0.105,-0.0722,0.601,-0.118,-0.0314,0.59,-0.0953,-0.0239,0.566,-0.0427,-0.047,0.566,0.0051,-0.0878,0.581,0.0217,-0.114,0.499,-0.0132,-0.116,0.488,-0.061,-0.103,0.567,-0.0991,-0.0362,0.557,-0.0926,-0.025,0.486,-0.047,-0.0507,0.497,-0.00188,-0.0862,0.513,0.018});
IndexedFaceSet96->setCoord(*Coordinate97);

Shape92->setGeometry(IndexedFaceSet96);

HAnimSegment91->addChildren(*Shape92);

HAnimJoint90->addChildren(*HAnimSegment91);

CHAnimJoint* HAnimJoint98 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint98->setName("r_knee");
HAnimJoint98->setDEF("hanim_r_knee");
HAnimJoint98->setCenter(new float[3]{-0.0699,0.51,-0.0166});
HAnimJoint98->setUlimit(new float[3]{0,0,0});
HAnimJoint98->setLlimit(new float[3]{0,0,0});
HAnimJoint98->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment99 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment99->setName("r_calf");
HAnimSegment99->setDEF("hanim_r_calf");
CShape* Shape100 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance101 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material102 = (CMaterial *)(m_pScene.createNode("Material"));
Material102->setUSE("Pants_Color");
Appearance101->setMaterial(*Material102);

CImageTexture* ImageTexture103 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture103->setUSE("camo");
Appearance101->setTexture(*ImageTexture103);

Shape100->setAppearance(*Appearance101);

CIndexedFaceSet* IndexedFaceSet104 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet104->setCoordIndex(new int[368]{14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1});
IndexedFaceSet104->setCreaseAngle(1.57);
CCoordinate* Coordinate105 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate105->setPoint(new float[144]{-0.123,0.363,-0.0663,-0.123,0.363,-0.04,-0.118,0.309,-0.0685,-0.118,0.311,-0.0411,-0.117,0.508,-0.0169,-0.107,0.367,-0.107,-0.105,0.539,-0.0438,-0.105,0.31,-0.108,-0.104,0.539,-0.0223,-0.101,0.51,-0.0798,-0.0975,0.54,-0.0647,-0.0948,0.0897,-0.0368,-0.0916,0.0779,-0.0604,-0.0905,0.12,-0.0647,-0.0883,0.532,-0.00349,-0.0883,0.309,-0.018,-0.0878,0.361,-0.0126,-0.0862,0.506,0.0158,-0.0814,0.55,-0.0395,-0.0765,0.11,-0.0169,-0.0744,0.13,-0.0212,-0.0738,0.117,-0.0814,-0.0722,0.546,-0.0717,-0.0717,0.0854,-0.0765,-0.0706,0.51,-0.101,-0.0609,0.533,-0.00833,-0.0588,0.365,-0.122,-0.0577,0.544,-0.0577,-0.0572,0.308,-0.123,-0.0561,0.13,-0.0245,-0.0556,0.506,-0.000272,-0.054,0.0972,-0.0175,-0.0529,0.536,-0.0368,-0.0529,0.121,-0.0873,-0.0497,0.358,-0.0234,-0.0486,0.0999,-0.0835,-0.0475,0.307,-0.0282,-0.0416,0.124,-0.0416,-0.0406,0.0918,-0.0626,-0.0406,0.513,-0.0744,-0.0384,0.0881,-0.0363,-0.0373,0.121,-0.0636,-0.0368,0.51,-0.0357,-0.0239,0.358,-0.0475,-0.0228,0.358,-0.0926,-0.0201,0.309,-0.0937,-0.0191,0.311,-0.0508,-0.0985,0.125,-0.0375});
IndexedFaceSet104->setCoord(*Coordinate105);

Shape100->setGeometry(IndexedFaceSet104);

HAnimSegment99->addChildren(*Shape100);

HAnimJoint98->addChildren(*HAnimSegment99);

CHAnimJoint* HAnimJoint106 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint106->setName("r_ankle");
HAnimJoint106->setDEF("hanim_r_ankle");
HAnimJoint106->setCenter(new float[3]{-0.064,0.0753,-0.0412});
HAnimJoint106->setUlimit(new float[3]{0,0,0});
HAnimJoint106->setLlimit(new float[3]{0,0,0});
HAnimJoint106->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment107 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment107->setName("r_hindfoot");
HAnimSegment107->setDEF("hanim_r_hindfoot");
CShape* Shape108 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance109 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material110 = (CMaterial *)(m_pScene.createNode("Material"));
Material110->setUSE("Shoe_Color");
Appearance109->setMaterial(*Material110);

Shape108->setAppearance(*Appearance109);

CIndexedFaceSet* IndexedFaceSet111 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet111->setCoordIndex(new int[392]{6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1});
IndexedFaceSet111->setCreaseAngle(1.57);
CCoordinate* Coordinate112 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate112->setPoint(new float[153]{-0.0727,0,-0.0994,-0.1,0,-0.0594,-0.0701,0,0.146,-0.0468,0,0.153,-0.0215,0,0.146,-0.0433,0,-0.0534,-0.0529,0,-0.0923,-0.0727,0.0219,-0.0994,-0.0863,0.0219,-0.0862,-0.1,0.0219,-0.0594,-0.108,0.0219,-0.00479,-0.112,0.0156,0.117,-0.0701,0.0156,0.146,-0.0468,0.0156,0.153,-0.0215,0.0156,0.146,-0.0165,0.017,0.0777,-0.0433,0.0219,-0.0534,-0.0529,0.0219,-0.0923,-0.0445,0.0273,-0.0189,-0.0265,0.0253,0.0549,-0.0305,0.0253,0.0938,-0.069,0.0253,0.0938,-0.102,0.0253,0.0707,-0.0568,0.0573,-0.0918,-0.0492,0.0573,-0.0497,-0.0424,0.0573,-0.00142,-0.0478,0.0573,0.0341,-0.0623,0.0573,0.0366,-0.0864,0.0573,0.0245,-0.0962,0.0573,-0.0121,-0.0845,0.0573,-0.0764,-0.0758,0.0573,-0.0899,-0.0676,0.0573,-0.0962,-0.0578,0.0953,-0.0896,-0.0489,0.0953,-0.0757,-0.0459,0.0953,-0.0615,-0.0435,0.0953,-0.0292,-0.0485,0.0953,-0.00582,-0.0624,0.0953,-0.00466,-0.0857,0.0953,-0.0134,-0.0953,0.0953,-0.038,-0.0843,0.0953,-0.0803,-0.0761,0.0953,-0.0889,-0.0682,0.0953,-0.0929,-0.0675,0.13,-0.0608,-0.0165,0,0.125,-0.112,0,0.117,-0.0165,0,0.0777,-0.0393,0,-0.0129,-0.108,0,-0.00479,-0.0863,0,-0.0862});
IndexedFaceSet111->setCoord(*Coordinate112);

Shape108->setGeometry(IndexedFaceSet111);

HAnimSegment107->addChildren(*Shape108);

HAnimJoint106->addChildren(*HAnimSegment107);

HAnimJoint98->addChildren(*HAnimJoint106);

HAnimJoint90->addChildren(*HAnimJoint98);

HAnimJoint59->addChildren(*HAnimJoint90);

HAnimJoint58->addChildren(*HAnimJoint59);

CHAnimJoint* HAnimJoint113 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint113->setName("vl1");
HAnimJoint113->setDEF("hanim_vl1");
HAnimJoint113->setCenter(new float[3]{-0.00405,1.07,-0.0275});
HAnimJoint113->setUlimit(new float[3]{0,0,0});
HAnimJoint113->setLlimit(new float[3]{0,0,0});
HAnimJoint113->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment114 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment114->setName("l1");
HAnimSegment114->setDEF("hanim_l1");
CTransform* Transform115 = (CTransform *)(m_pScene.createNode("Transform"));
CGroup* Group116 = (CGroup *)(m_pScene.createNode("Group"));
CTransform* Transform117 = (CTransform *)(m_pScene.createNode("Transform"));
Transform117->setScale(new float[3]{1.1,1.1,1.1});
Transform117->setTranslation(new float[3]{0,-0.12,0});
CShape* Shape118 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance119 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material120 = (CMaterial *)(m_pScene.createNode("Material"));
Material120->setDEF("JacketColor");
Material120->setDiffuseColor(new float[3]{0.01,0.28,0.01});
Appearance119->setMaterial(*Material120);

Shape118->setAppearance(*Appearance119);

CIndexedFaceSet* IndexedFaceSet121 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet121->setCoordIndex(new int[772]{4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,43,47,42,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,33,39,53,-1,49,54,47,-1,59,58,53,-1,53,39,59,-1,58,59,60,-1,54,49,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,73,76,82,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,113,110,108,-1,110,113,114,-1,119,108,109,-1,108,119,113,-1,120,113,119,-1,119,121,120,-1,117,124,125,-1,106,117,125,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,140,146,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,76,157,60,-1,76,73,158,157,-1,60,162,58,-1,162,60,157,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,98,117,106,-1});
IndexedFaceSet121->setCreaseAngle(1.59);
CCoordinate* Coordinate122 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate122->setPoint(new float[534]{0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168});
IndexedFaceSet121->setCoord(*Coordinate122);

CTextureCoordinate* TextureCoordinate123 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate123->setPoint(new float[356]{0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0});
IndexedFaceSet121->setTexCoord(*TextureCoordinate123);

Shape118->setGeometry(IndexedFaceSet121);

Transform117->addChildren(*Shape118);

Group116->addChildren(*Transform117);

Transform115->addChildren(*Group116);

HAnimSegment114->addChildren(*Transform115);

CShape* Shape124 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance125 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material126 = (CMaterial *)(m_pScene.createNode("Material"));
Material126->setDEF("Shirt_Color");
Material126->setAmbientIntensity(0.25);
Material126->setDiffuseColor(new float[3]{0.6,0.0745,0.1137});
Appearance125->setMaterial(*Material126);

CImageTexture* ImageTexture127 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture127->setDEF("small_logo_Tex");
ImageTexture127->setUrl(new CString[2]{"small_logo.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/small_logo.gif"}, 2);
Appearance125->setTexture(*ImageTexture127);

Shape124->setAppearance(*Appearance125);

CIndexedFaceSet* IndexedFaceSet128 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet128->setCoordIndex(new int[1234]{0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1});
IndexedFaceSet128->setCreaseAngle(1.59);
CCoordinate* Coordinate129 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate129->setPoint(new float[534]{0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168});
IndexedFaceSet128->setCoord(*Coordinate129);

CTextureCoordinate* TextureCoordinate130 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate130->setPoint(new float[356]{0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0});
IndexedFaceSet128->setTexCoord(*TextureCoordinate130);

Shape124->setGeometry(IndexedFaceSet128);

HAnimSegment114->addChildren(*Shape124);

HAnimJoint113->addChildren(*HAnimSegment114);

CHAnimJoint* HAnimJoint131 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint131->setName("l_shoulder");
HAnimJoint131->setDEF("hanim_l_shoulder");
HAnimJoint131->setCenter(new float[3]{0.167,1.36,-0.0518});
HAnimJoint131->setUlimit(new float[3]{0,0,0});
HAnimJoint131->setLlimit(new float[3]{0,0,0});
HAnimJoint131->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment132 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment132->setName("l_upperarm");
HAnimSegment132->setDEF("hanim_l_upperarm");
CTransform* Transform133 = (CTransform *)(m_pScene.createNode("Transform"));
Transform133->setDEF("l_upperarm_adjust");
Transform133->setCenter(new float[3]{0.182,1.22,-0.047});
Transform133->setRotation(new float[4]{1,0,0,0.119});
Transform133->setTranslation(new float[3]{0.167,1.36,-0.0518});
CShape* Shape134 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance135 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material136 = (CMaterial *)(m_pScene.createNode("Material"));
Material136->setDEF("Skin_Color");
Material136->setAmbientIntensity(0.25);
Material136->setDiffuseColor(new float[3]{0.749,0.601,0.462});
Appearance135->setMaterial(*Material136);

Shape134->setAppearance(*Appearance135);

CIndexedFaceSet* IndexedFaceSet137 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet137->setCoordIndex(new int[160]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1});
IndexedFaceSet137->setCreaseAngle(1.65);
CCoordinate* Coordinate138 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate138->setPoint(new float[66]{0.174,1.37,-0.0625,0.185,1.38,-0.0395,0.156,1.39,-0.0464,0.174,1.37,-0.0158,0.154,1.37,-0.0185,0.157,1.38,-0.0733,0.182,1.33,-0.0728,0.151,1.33,-0.0937,0.15,1.34,-0.000787,0.185,1.33,-0.00025,0.201,1.33,-0.0411,0.189,1.26,-0.0808,0.155,1.26,-0.0867,0.151,1.26,-0.000789,0.19,1.26,-0.00401,0.209,1.26,-0.0427,0.141,1.26,-0.0421,0.203,1.08,-0.0744,0.162,1.05,-0.0561,0.169,1.08,-0.00885,0.208,1.07,-0.00133,0.221,1.08,-0.0352});
IndexedFaceSet137->setCoord(*Coordinate138);

Shape134->setGeometry(IndexedFaceSet137);

Transform133->addChildren(*Shape134);

HAnimSegment132->addChildren(*Transform133);

HAnimJoint131->addChildren(*HAnimSegment132);

CHAnimJoint* HAnimJoint139 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint139->setName("l_elbow");
HAnimJoint139->setDEF("hanim_l_elbow");
HAnimJoint139->setCenter(new float[3]{0.196,1.07,-0.0518});
HAnimJoint139->setUlimit(new float[3]{0,0,0});
HAnimJoint139->setLlimit(new float[3]{0,0,0});
HAnimJoint139->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment140 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment140->setName("l_forearm");
HAnimSegment140->setDEF("hanim_l_forearm");
CTransform* Transform141 = (CTransform *)(m_pScene.createNode("Transform"));
Transform141->setDEF("l_forearm_adjust");
Transform141->setCenter(new float[3]{0.198,0.961,-0.0405});
Transform141->setRotation(new float[4]{-1,0,0,0.1});
Transform141->setTranslation(new float[3]{0.196,1.07,-0.0518});
CShape* Shape142 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance143 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material144 = (CMaterial *)(m_pScene.createNode("Material"));
Material144->setUSE("Skin_Color");
Appearance143->setMaterial(*Material144);

Shape142->setAppearance(*Appearance143);

CIndexedFaceSet* IndexedFaceSet145 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet145->setCoordIndex(new int[136]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1});
IndexedFaceSet145->setCreaseAngle(1.75);
CCoordinate* Coordinate146 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate146->setPoint(new float[57]{0.177,1.09,-0.0609,0.202,1.1,-0.0566,0.189,1.1,-0.0395,0.213,1.1,-0.025,0.203,1.1,-0.0158,0.182,1.09,-0.00563,0.167,1.09,-0.0325,0.176,1.08,-0.0781,0.16,1.06,-0.0373,0.214,1.07,-0.00402,0.228,1.07,-0.0319,0.208,1.08,-0.0765,0.179,1.07,-0.00294,0.21,0.818,-0.0615,0.201,0.82,-0.0405,0.205,0.819,-0.00832,0.224,0.818,-0.00778,0.237,0.82,-0.0282,0.231,0.819,-0.0609});
IndexedFaceSet145->setCoord(*Coordinate146);

Shape142->setGeometry(IndexedFaceSet145);

Transform141->addChildren(*Shape142);

HAnimSegment140->addChildren(*Transform141);

HAnimJoint139->addChildren(*HAnimSegment140);

CHAnimJoint* HAnimJoint147 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint147->setName("l_wrist");
HAnimJoint147->setDEF("hanim_l_wrist");
HAnimJoint147->setCenter(new float[3]{0.213,0.811,-0.0338});
HAnimJoint147->setUlimit(new float[3]{0,0,0});
HAnimJoint147->setLlimit(new float[3]{0,0,0});
HAnimJoint147->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment148 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment148->setName("l_hand");
HAnimSegment148->setDEF("hanim_l_hand");
CTransform* Transform149 = (CTransform *)(m_pScene.createNode("Transform"));
Transform149->setDEF("l_hand_adjust");
Transform149->setCenter(new float[3]{0.213,0.811,-0.0338});
Transform149->setRotation(new float[4]{-0.06361,-0.9967,0.04988,1.333});
Transform149->setTranslation(new float[3]{0.213,0.811,-0.0338});
CShape* Shape150 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance151 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material152 = (CMaterial *)(m_pScene.createNode("Material"));
Material152->setUSE("Skin_Color");
Appearance151->setMaterial(*Material152);

Shape150->setAppearance(*Appearance151);

CIndexedFaceSet* IndexedFaceSet153 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet153->setCoordIndex(new int[368]{2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1});
IndexedFaceSet153->setCreaseAngle(1.48);
CCoordinate* Coordinate154 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate154->setPoint(new float[144]{0.211,0.828,-0.0434,0.194,0.81,-0.0445,0.237,0.82,-0.0425,0.236,0.82,-0.0237,0.194,0.81,-0.0254,0.21,0.828,-0.0247,0.252,0.801,-0.0424,0.252,0.801,-0.0231,0.269,0.765,-0.0426,0.268,0.765,-0.0225,0.273,0.732,-0.0395,0.272,0.732,-0.0223,0.27,0.704,-0.0342,0.27,0.704,-0.0224,0.262,0.703,-0.0345,0.261,0.703,-0.0227,0.256,0.717,-0.0389,0.256,0.717,-0.023,0.255,0.738,-0.0408,0.255,0.738,-0.023,0.251,0.734,-0.0406,0.251,0.734,-0.0232,0.251,0.692,-0.0232,0.248,0.657,-0.0233,0.24,0.645,-0.0236,0.226,0.637,-0.0241,0.213,0.639,-0.0246,0.197,0.652,-0.0253,0.188,0.669,-0.0256,0.184,0.697,-0.0258,0.183,0.73,-0.0258,0.187,0.77,-0.0257,0.244,0.696,-0.0375,0.244,0.692,-0.0372,0.242,0.661,-0.0345,0.241,0.658,-0.0343,0.241,0.656,-0.0341,0.231,0.646,-0.0336,0.206,0.65,-0.0349,0.218,0.644,-0.034,0.205,0.652,-0.0352,0.198,0.667,-0.0367,0.195,0.691,-0.039,0.194,0.696,-0.0395,0.193,0.725,-0.042,0.193,0.731,-0.0425,0.197,0.765,-0.0449,0.197,0.77,-0.0453});
IndexedFaceSet153->setCoord(*Coordinate154);

Shape150->setGeometry(IndexedFaceSet153);

Transform149->addChildren(*Shape150);

HAnimSegment148->addChildren(*Transform149);

HAnimJoint147->addChildren(*HAnimSegment148);

HAnimJoint139->addChildren(*HAnimJoint147);

HAnimJoint131->addChildren(*HAnimJoint139);

HAnimJoint113->addChildren(*HAnimJoint131);

CHAnimJoint* HAnimJoint155 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint155->setName("r_shoulder");
HAnimJoint155->setDEF("hanim_r_shoulder");
HAnimJoint155->setCenter(new float[3]{-0.167,1.36,-0.0458});
HAnimJoint155->setUlimit(new float[3]{0,0,0});
HAnimJoint155->setLlimit(new float[3]{0,0,0});
HAnimJoint155->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment156 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment156->setName("r_upperarm");
HAnimSegment156->setDEF("hanim_r_upperarm");
CTransform* Transform157 = (CTransform *)(m_pScene.createNode("Transform"));
Transform157->setDEF("r_upperarm_adjust");
Transform157->setCenter(new float[3]{-0.182,1.22,-0.047});
Transform157->setRotation(new float[4]{1,0,0,0.0836});
Transform157->setTranslation(new float[3]{-0.167,1.36,-0.0458});
CShape* Shape158 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance159 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material160 = (CMaterial *)(m_pScene.createNode("Material"));
Material160->setUSE("Skin_Color");
Appearance159->setMaterial(*Material160);

Shape158->setAppearance(*Appearance159);

CIndexedFaceSet* IndexedFaceSet161 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet161->setCoordIndex(new int[208]{14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1});
IndexedFaceSet161->setCreaseAngle(1.53);
CCoordinate* Coordinate162 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate162->setPoint(new float[84]{-0.221,1.08,-0.0352,-0.214,1.14,-0.0405,-0.209,1.26,-0.0427,-0.208,1.07,-0.00133,-0.203,1.08,-0.0744,-0.201,1.33,-0.0411,-0.198,1.14,-0.0024,-0.198,1.13,-0.076,-0.19,1.26,-0.00401,-0.189,1.26,-0.0808,-0.185,1.38,-0.0395,-0.185,1.33,-0.00025,-0.182,1.33,-0.0728,-0.174,1.37,-0.0158,-0.174,1.37,-0.0625,-0.169,1.08,-0.00885,-0.167,1.13,-0.0744,-0.162,1.05,-0.0561,-0.16,1.13,-0.000793,-0.157,1.38,-0.0733,-0.156,1.39,-0.0464,-0.155,1.26,-0.0867,-0.154,1.37,-0.0185,-0.151,1.26,-0.000789,-0.151,1.33,-0.0937,-0.15,1.34,-0.000787,-0.15,1.13,-0.0411,-0.141,1.26,-0.0421});
IndexedFaceSet161->setCoord(*Coordinate162);

Shape158->setGeometry(IndexedFaceSet161);

Transform157->addChildren(*Shape158);

HAnimSegment156->addChildren(*Transform157);

HAnimJoint155->addChildren(*HAnimSegment156);

CHAnimJoint* HAnimJoint163 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint163->setName("r_elbow");
HAnimJoint163->setDEF("hanim_r_elbow");
HAnimJoint163->setCenter(new float[3]{-0.192,1.07,-0.0498});
HAnimJoint163->setUlimit(new float[3]{0,0,0});
HAnimJoint163->setLlimit(new float[3]{0,0,0});
HAnimJoint163->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment164 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment164->setName("r_forearm");
HAnimSegment164->setDEF("hanim_r_forearm");
CTransform* Transform165 = (CTransform *)(m_pScene.createNode("Transform"));
Transform165->setDEF("r_forearm_adjust");
Transform165->setCenter(new float[3]{-0.198,0.961,-0.0397});
Transform165->setRotation(new float[4]{-1,0,0,0.1254});
Transform165->setTranslation(new float[3]{-0.192,1.07,-0.0498});
CShape* Shape166 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance167 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material168 = (CMaterial *)(m_pScene.createNode("Material"));
Material168->setUSE("Skin_Color");
Appearance167->setMaterial(*Material168);

Shape166->setAppearance(*Appearance167);

CIndexedFaceSet* IndexedFaceSet169 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet169->setCoordIndex(new int[184]{20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1});
IndexedFaceSet169->setCreaseAngle(1.73);
CCoordinate* Coordinate170 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate170->setPoint(new float[75]{-0.237,0.82,-0.0282,-0.235,1.02,-0.033,-0.231,0.819,-0.0609,-0.228,1.07,-0.0319,-0.224,0.818,-0.00778,-0.221,1.01,-0.0744,-0.218,1.01,-0.00133,-0.214,1.07,-0.00402,-0.213,1.1,-0.025,-0.21,0.818,-0.0615,-0.208,1.08,-0.0765,-0.205,0.819,-0.00832,-0.203,1.1,-0.0158,-0.202,1.1,-0.0566,-0.201,0.82,-0.0405,-0.189,1.1,-0.0395,-0.183,1.01,-0.00831,-0.183,1.01,-0.0781,-0.182,1.09,-0.00563,-0.179,1.07,-0.00294,-0.177,1.09,-0.0609,-0.176,1.08,-0.0781,-0.167,1.09,-0.0325,-0.166,1,-0.0405,-0.16,1.06,-0.0373});
IndexedFaceSet169->setCoord(*Coordinate170);

Shape166->setGeometry(IndexedFaceSet169);

Transform165->addChildren(*Shape166);

HAnimSegment164->addChildren(*Transform165);

HAnimJoint163->addChildren(*HAnimSegment164);

CHAnimJoint* HAnimJoint171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint171->setName("r_wrist");
HAnimJoint171->setDEF("hanim_r_wrist");
HAnimJoint171->setCenter(new float[3]{-0.217,0.811,-0.0338});
HAnimJoint171->setUlimit(new float[3]{0,0,0});
HAnimJoint171->setLlimit(new float[3]{0,0,0});
HAnimJoint171->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment172 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment172->setName("r_hand");
HAnimSegment172->setDEF("hanim_r_hand");
CGroup* Group173 = (CGroup *)(m_pScene.createNode("Group"));
CTransform* Transform174 = (CTransform *)(m_pScene.createNode("Transform"));
Transform174->setDEF("r_hand_adjust");
Transform174->setCenter(new float[3]{-0.217,0.811,-0.0338});
Transform174->setRotation(new float[4]{-0.09024,0.994,-0.0624,1.216});
CShape* Shape175 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance176 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material177 = (CMaterial *)(m_pScene.createNode("Material"));
Material177->setUSE("Skin_Color");
Appearance176->setMaterial(*Material177);

Shape175->setAppearance(*Appearance176);

CIndexedFaceSet* IndexedFaceSet178 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet178->setCoordIndex(new int[368]{10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1});
IndexedFaceSet178->setCreaseAngle(1.57);
CCoordinate* Coordinate179 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate179->setPoint(new float[144]{-0.237,0.82,-0.0425,-0.252,0.801,-0.0424,-0.269,0.765,-0.0426,-0.273,0.732,-0.0395,-0.27,0.704,-0.0342,-0.262,0.703,-0.0345,-0.256,0.717,-0.0389,-0.255,0.738,-0.0408,-0.251,0.734,-0.0406,-0.194,0.81,-0.0445,-0.211,0.828,-0.0434,-0.236,0.82,-0.0237,-0.252,0.801,-0.0231,-0.268,0.765,-0.0225,-0.272,0.732,-0.0223,-0.27,0.704,-0.0224,-0.261,0.703,-0.0227,-0.256,0.717,-0.023,-0.255,0.738,-0.023,-0.251,0.734,-0.0232,-0.251,0.692,-0.0232,-0.248,0.657,-0.0233,-0.24,0.645,-0.0236,-0.226,0.637,-0.0241,-0.213,0.639,-0.0246,-0.197,0.652,-0.0253,-0.188,0.669,-0.0256,-0.184,0.697,-0.0258,-0.183,0.73,-0.0258,-0.187,0.77,-0.0257,-0.194,0.81,-0.0254,-0.21,0.828,-0.0247,-0.221,0.641,-0.0336,-0.21,0.65,-0.0348,-0.206,0.652,-0.0352,-0.198,0.667,-0.0368,-0.193,0.692,-0.0392,-0.192,0.696,-0.0396,-0.231,0.646,-0.0336,-0.238,0.656,-0.0342,-0.24,0.658,-0.0344,-0.24,0.662,-0.0347,-0.243,0.692,-0.0372,-0.243,0.696,-0.0376,-0.192,0.725,-0.0421,-0.192,0.73,-0.0426,-0.195,0.766,-0.0451,-0.196,0.77,-0.0454});
IndexedFaceSet178->setCoord(*Coordinate179);

Shape175->setGeometry(IndexedFaceSet178);

Transform174->addChildren(*Shape175);

Group173->addChildren(*Transform174);

CTransform* Transform180 = (CTransform *)(m_pScene.createNode("Transform"));
Transform180->setCenter(new float[3]{-0.8,0.45,0.1});
Transform180->setRotation(new float[4]{0,0,1,-2.7});
Transform180->setScale(new float[3]{0.1,0.1,0.1});
CTransform* Transform181 = (CTransform *)(m_pScene.createNode("Transform"));
Transform181->setRotation(new float[4]{1,0,0,1.57});
Transform181->setTranslation(new float[3]{-0.7,0,0});
CProtoInstance* ProtoInstance182 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance182->setName("RifleM24");
ProtoInstance182->setDEF("rifleM24");
Transform181->addChildren(*ProtoInstance182);

CScript* Script183 = (CScript *)(m_pScene.createNode("Script"));
Script183->setDEF("FireScript");
Cfield* field184 = new Cfield();
field184->setName("fire");
field184->setAccessType("outputOnly");
field184->setType("SFBool");
Script183->addField(*field184);

Cfield* field185 = new Cfield();
field185->setName("enabled");
field185->setAccessType("inputOnly");
field185->setType("SFBool");
Script183->addField(*field185);


Script183.setSourceCode(`ecmascript:\n"+
"\n"+
"function enabled (value, timeStamp)\n"+
"{\n"+
"        //print ('enabled value =' + value);\n"+
"        if (value == true)\n"+
"           fire = value;\n"+
"}`)
Transform181->addChildren(*Script183);

CTouchSensor* TouchSensor186 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor186->setDEF("FireTouchSensor");
TouchSensor186->setDescription("click for shoot rifle");
Transform181->addChildren(*TouchSensor186);

CROUTE* ROUTE187 = new CROUTE();
ROUTE187->setFromField("isOver");
ROUTE187->setFromNode("FireTouchSensor");
ROUTE187->setToField("enabled");
ROUTE187->setToNode("FireScript");
Transform181->addChildren(*ROUTE187);

CROUTE* ROUTE188 = new CROUTE();
ROUTE188->setFromField("touchTime");
ROUTE188->setFromNode("FireTouchSensor");
ROUTE188->setToField("animationStartTime");
ROUTE188->setToNode("rifleM24");
Transform181->addChildren(*ROUTE188);

CROUTE* ROUTE189 = new CROUTE();
ROUTE189->setFromField("fire");
ROUTE189->setFromNode("FireScript");
ROUTE189->setToField("trigger");
ROUTE189->setToNode("rifleM24");
Transform181->addChildren(*ROUTE189);

Transform180->addChildren(*Transform181);

Group173->addChildren(*Transform180);

HAnimSegment172->addChildren(*Group173);

HAnimJoint171->addChildren(*HAnimSegment172);

HAnimJoint163->addChildren(*HAnimJoint171);

HAnimJoint155->addChildren(*HAnimJoint163);

HAnimJoint113->addChildren(*HAnimJoint155);

CHAnimJoint* HAnimJoint190 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint190->setName("vc4");
HAnimJoint190->setDEF("hanim_vc4");
HAnimJoint190->setCenter(new float[3]{0,1.43,-0.0458});
HAnimJoint190->setUlimit(new float[3]{0,0,0});
HAnimJoint190->setLlimit(new float[3]{0,0,0});
HAnimJoint190->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment191 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment191->setName("c4");
HAnimSegment191->setDEF("hanim_c4");
CShape* Shape192 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance193 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material194 = (CMaterial *)(m_pScene.createNode("Material"));
Material194->setUSE("Skin_Color");
Appearance193->setMaterial(*Material194);

Shape192->setAppearance(*Appearance193);

CIndexedFaceSet* IndexedFaceSet195 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet195->setDEF("neck");
IndexedFaceSet195->setCoordIndex(new int[112]{6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1});
IndexedFaceSet195->setCreaseAngle(1.91);
CCoordinate* Coordinate196 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate196->setPoint(new float[48]{0.0105,1.54,-0.1,0.0357,1.54,-0.0685,0.0382,1.55,-0.0474,0.0105,1.55,-0.0204,0.0373,1.4,-0.0593,0.0577,1.4,-0.0266,0.0158,1.4,0.00512,0.0132,1.41,-0.0824,-0.0158,1.4,0.00512,-0.0577,1.4,-0.0266,-0.0382,1.55,-0.0474,-0.0105,1.55,-0.0204,-0.0373,1.4,-0.0593,-0.0357,1.54,-0.0685,-0.0132,1.41,-0.0824,-0.0105,1.54,-0.1});
IndexedFaceSet195->setCoord(*Coordinate196);

Shape192->setGeometry(IndexedFaceSet195);

HAnimSegment191->addChildren(*Shape192);

HAnimJoint190->addChildren(*HAnimSegment191);

CHAnimJoint* HAnimJoint197 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint197->setName("skullbase");
HAnimJoint197->setDEF("hanim_skullbase");
HAnimJoint197->setCenter(new float[3]{0,1.54,-0.0409});
HAnimJoint197->setUlimit(new float[3]{0,0,0});
HAnimJoint197->setLlimit(new float[3]{0,0,0});
HAnimJoint197->setStiffness(new float[3]{0,0,0});
CHAnimSegment* HAnimSegment198 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment198->setName("skull");
HAnimSegment198->setDEF("hanim_skull");
CGroup* Group199 = (CGroup *)(m_pScene.createNode("Group"));
CTransform* Transform200 = (CTransform *)(m_pScene.createNode("Transform"));
Transform200->setDEF("helmet");
Transform200->setScale(new float[3]{0.105,0.135,0.125});
Transform200->setTranslation(new float[3]{0,1.6,-0.05});
CShape* Shape201 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance202 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material203 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance202->setMaterial(*Material203);

CImageTexture* ImageTexture204 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture204->setUSE("camo");
Appearance202->setTexture(*ImageTexture204);

Shape201->setAppearance(*Appearance202);

CIndexedFaceSet* IndexedFaceSet205 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet205->setCoordIndex(new int[1040]{0,1,2,-1,1,3,4,-1,2,4,5,-1,3,6,7,-1,4,7,8,-1,5,8,9,-1,6,10,11,-1,7,11,12,-1,8,12,13,-1,9,13,14,-1,10,15,16,-1,11,16,17,-1,12,17,18,-1,13,18,19,-1,14,19,20,-1,1,4,2,-1,3,7,4,-1,4,8,5,-1,6,11,7,-1,7,12,8,-1,8,13,9,-1,10,16,11,-1,11,17,12,-1,12,18,13,-1,13,19,14,-1,21,22,23,-1,22,24,25,-1,23,25,26,-1,24,27,28,-1,25,28,29,-1,26,29,30,-1,27,31,32,-1,28,32,33,-1,29,33,34,-1,30,34,35,-1,31,0,2,-1,32,2,5,-1,33,5,9,-1,34,9,14,-1,35,14,20,-1,22,25,23,-1,24,28,25,-1,25,29,26,-1,27,32,28,-1,28,33,29,-1,29,34,30,-1,31,2,32,-1,32,5,33,-1,33,9,34,-1,34,14,35,-1,21,36,22,-1,36,37,38,-1,22,38,24,-1,37,39,40,-1,38,40,41,-1,24,41,27,-1,41,42,43,-1,27,43,31,-1,31,44,0,-1,36,38,22,-1,37,40,38,-1,38,41,24,-1,40,42,41,-1,41,43,27,-1,43,44,31,-1,15,45,16,-1,45,46,47,-1,16,47,17,-1,46,48,49,-1,47,49,50,-1,17,50,18,-1,48,51,52,-1,49,52,53,-1,50,53,54,-1,18,54,19,-1,51,55,56,-1,52,56,57,-1,53,57,58,-1,54,58,59,-1,19,59,20,-1,45,47,16,-1,46,49,47,-1,47,50,17,-1,48,52,49,-1,49,53,50,-1,50,54,18,-1,51,56,52,-1,52,57,53,-1,53,58,54,-1,54,59,19,-1,15,60,45,-1,45,61,46,-1,61,62,63,-1,46,63,48,-1,63,64,65,-1,48,65,51,-1,64,66,67,-1,65,67,68,-1,51,68,55,-1,60,61,45,-1,61,63,46,-1,62,64,63,-1,63,65,48,-1,64,67,65,-1,65,68,51,-1,55,69,56,-1,69,70,71,-1,56,71,57,-1,70,72,73,-1,71,73,74,-1,57,74,58,-1,72,75,76,-1,73,76,77,-1,74,77,78,-1,58,78,59,-1,75,79,80,-1,76,80,81,-1,77,81,82,-1,78,82,83,-1,59,83,20,-1,69,71,56,-1,70,73,71,-1,71,74,57,-1,72,76,73,-1,73,77,74,-1,74,78,58,-1,75,80,76,-1,76,81,77,-1,77,82,78,-1,78,83,59,-1,55,84,69,-1,84,85,86,-1,69,86,70,-1,85,87,88,-1,86,88,89,-1,70,89,72,-1,87,90,91,-1,88,91,92,-1,89,92,93,-1,72,93,75,-1,90,94,95,-1,91,95,96,-1,92,96,97,-1,93,97,98,-1,75,98,79,-1,84,86,69,-1,85,88,86,-1,86,89,70,-1,87,91,88,-1,88,92,89,-1,89,93,72,-1,90,95,91,-1,91,96,92,-1,92,97,93,-1,93,98,75,-1,79,99,80,-1,99,100,101,-1,80,101,81,-1,100,102,103,-1,101,103,104,-1,81,104,82,-1,102,105,106,-1,103,106,107,-1,104,107,108,-1,82,108,83,-1,105,21,23,-1,106,23,26,-1,107,26,30,-1,108,30,35,-1,83,35,20,-1,99,101,80,-1,100,103,101,-1,101,104,81,-1,102,106,103,-1,103,107,104,-1,104,108,82,-1,105,23,106,-1,106,26,107,-1,107,30,108,-1,108,35,83,-1,79,109,99,-1,109,110,111,-1,99,111,100,-1,110,112,113,-1,111,113,114,-1,100,114,102,-1,112,115,116,-1,113,116,117,-1,114,117,118,-1,102,118,105,-1,115,119,120,-1,116,120,121,-1,117,121,122,-1,118,122,123,-1,105,123,21,-1,109,111,99,-1,110,113,111,-1,111,114,100,-1,112,116,113,-1,113,117,114,-1,114,118,102,-1,115,120,116,-1,116,121,117,-1,117,122,118,-1,118,123,105,-1,119,115,124,-1,115,112,128,-1,124,128,125,-1,112,110,129,-1,128,129,130,-1,125,130,126,-1,110,109,131,-1,129,131,132,-1,130,132,133,-1,126,133,127,-1,109,79,98,-1,131,98,97,-1,132,97,96,-1,133,96,95,-1,127,95,94,-1,115,128,124,-1,112,129,128,-1,128,130,125,-1,110,131,129,-1,129,132,130,-1,130,133,126,-1,109,98,131,-1,131,97,132,-1,132,96,133,-1,133,95,127,-1,39,37,135,-1,37,36,137,-1,135,137,138,-1,136,138,139,-1,36,21,123,-1,137,123,122,-1,138,122,121,-1,139,121,120,-1,134,120,119,-1,37,137,135,-1,135,138,136,-1,36,123,137,-1,137,122,138,-1,138,121,139,-1,139,120,134,-1,94,90,140,-1,90,87,141,-1,87,85,142,-1,141,142,143,-1,85,84,144,-1,142,144,145,-1,84,55,68,-1,144,68,67,-1,145,67,66,-1,90,141,140,-1,87,142,141,-1,85,144,142,-1,142,145,143,-1,84,68,144,-1,144,67,145,-1});
IndexedFaceSet205->setCreaseAngle(0.1);
IndexedFaceSet205->setSolid(False);
CCoordinate* Coordinate206 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate206->setPoint(new float[438]{0.5257,0,0.8507,0.3477,0,0.9376,0.4636,0.1875,0.866,0.1227,0,0.9924,0.2531,0.2047,0.9455,0.368,0.397,0.8408,-0.1227,0,0.9924,0,0.2116,0.9773,0.1308,0.4233,0.8965,0.2453,0.5955,0.765,-0.3477,0,0.9376,-0.2531,0.2047,0.9455,-0.1308,0.4233,0.8965,0,0.6142,0.7891,0.1159,0.7501,0.6511,-0.5257,0,0.8507,-0.4636,0.1875,0.866,-0.368,0.397,0.8408,-0.2453,0.5955,0.765,-0.1159,0.7501,0.6511,0,0.8507,0.5257,0.8507,0.5257,0,0.866,0.4636,0.1875,0.7501,0.6511,0.1159,0.8408,0.368,0.397,0.7408,0.5844,0.3313,0.5955,0.765,0.2453,0.765,0.2453,0.5955,0.6849,0.4732,0.5541,0.5541,0.6849,0.4732,0.397,0.8408,0.368,0.6511,0.1159,0.7501,0.5844,0.3313,0.7408,0.4732,0.5541,0.6849,0.3313,0.7408,0.5844,0.1875,0.866,0.4636,0.9376,0.3477,0,0.9924,0.1227,0,0.9455,0.2531,0.2047,0.9924,0,0,0.9773,0,0.2116,0.8965,0.1308,0.4233,0.8965,0,0.4233,0.7891,0,0.6142,0.6511,0,0.7501,-0.6511,0.1159,0.7501,-0.765,0.2453,0.5955,-0.5844,0.3313,0.7408,-0.8408,0.368,0.397,-0.6849,0.4732,0.5541,-0.4732,0.5541,0.6849,-0.866,0.4636,0.1875,-0.7408,0.5844,0.3313,-0.5541,0.6849,0.4732,-0.3313,0.7408,0.5844,-0.8507,0.5257,0,-0.7501,0.6511,0.1159,-0.5955,0.765,0.2453,-0.397,0.8408,0.368,-0.1875,0.866,0.4636,-0.6511,0,0.7501,-0.7891,0,0.6142,-0.8965,0,0.4233,-0.8965,0.1308,0.4233,-0.9773,0,0.2116,-0.9455,0.2531,0.2047,-0.9924,0,0,-0.9924,0.1227,0,-0.9376,0.3477,0,-0.7501,0.6511,-0.1159,-0.5955,0.765,-0.2453,-0.6142,0.7891,0,-0.397,0.8408,-0.368,-0.4233,0.8965,-0.1308,-0.4233,0.8965,0.1308,-0.1875,0.866,-0.4636,-0.2047,0.9455,-0.2531,-0.2116,0.9773,0,-0.2047,0.9455,0.2531,0,0.8507,-0.5257,0,0.9376,-0.3477,0,0.9924,-0.1227,0,0.9924,0.1227,0,0.9376,0.3477,-0.866,0.4636,-0.1875,-0.8408,0.368,-0.397,-0.7408,0.5844,-0.3313,-0.765,0.2453,-0.5955,-0.6849,0.4732,-0.5541,-0.5541,0.6849,-0.4732,-0.6511,0.1159,-0.7501,-0.5844,0.3313,-0.7408,-0.4732,0.5541,-0.6849,-0.3313,0.7408,-0.5844,-0.5257,0,-0.8507,-0.4636,0.1875,-0.866,-0.368,0.397,-0.8408,-0.2453,0.5955,-0.765,-0.1159,0.7501,-0.6511,0.1875,0.866,-0.4636,0.397,0.8408,-0.368,0.2047,0.9455,-0.2531,0.5955,0.765,-0.2453,0.4233,0.8965,-0.1308,0.2116,0.9773,0,0.7501,0.6511,-0.1159,0.6142,0.7891,0,0.4233,0.8965,0.1308,0.2047,0.9455,0.2531,0.1159,0.7501,-0.6511,0.2453,0.5955,-0.765,0.3313,0.7408,-0.5844,0.368,0.397,-0.8408,0.4732,0.5541,-0.6849,0.5541,0.6849,-0.4732,0.4636,0.1875,-0.866,0.5844,0.3313,-0.7408,0.6849,0.4732,-0.5541,0.7408,0.5844,-0.3313,0.5257,0,-0.8507,0.6511,0.1159,-0.7501,0.765,0.2453,-0.5955,0.8408,0.368,-0.397,0.866,0.4636,-0.1875,0.3477,0,-0.9376,0.1227,0,-0.9924,-0.1227,0,-0.9924,-0.3477,0,-0.9376,0.2531,0.2047,-0.9455,0.1308,0.4233,-0.8965,0,0.2116,-0.9773,0,0.6142,-0.7891,-0.1308,0.4233,-0.8965,-0.2531,0.2047,-0.9455,0.6511,0,-0.7501,0.9773,0,-0.2116,0.8965,0,-0.4233,0.9455,0.2531,-0.2047,0.8965,0.1308,-0.4233,0.7891,0,-0.6142,-0.6511,0,-0.7501,-0.7891,0,-0.6142,-0.8965,0.1308,-0.4233,-0.8965,0,-0.4233,-0.9455,0.2531,-0.2047,-0.9773,0,-0.2116});
IndexedFaceSet205->setCoord(*Coordinate206);

Shape201->setGeometry(IndexedFaceSet205);

Transform200->addChildren(*Shape201);

Group199->addChildren(*Transform200);

CTransform* Transform207 = (CTransform *)(m_pScene.createNode("Transform"));
Transform207->setDEF("helmetBelt");
Transform207->setScale(new float[3]{3,3.5,3});
Transform207->setTranslation(new float[3]{0,1.61,0});
CShape* Shape208 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance209 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance209->setDEF("BeltColor");
CMaterial* Material210 = (CMaterial *)(m_pScene.createNode("Material"));
Material210->setUSE("JacketColor");
Appearance209->setMaterial(*Material210);

Shape208->setAppearance(*Appearance209);

CExtrusion* Extrusion211 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion211->setCreaseAngle(1.57);
Extrusion211->setCrossSection(new float[14]{0,0.006,0.001,0.0057,0.001,-0.0057,0,-0.006,-0.001,-0.0057,-0.001,0.0057,0,0.006});
Extrusion211->setSpine(new float[27]{-0.03,0,0,-0.022,-0.015,0,-0.017,-0.03,0,-0.009,-0.037,0,0,-0.037,0,0.009,-0.037,0,0.017,-0.03,0,0.022,-0.015,0,0.03,0,0});
Shape208->setGeometry(Extrusion211);

Transform207->addChildren(*Shape208);

Group199->addChildren(*Transform207);

CShape* Shape212 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance213 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material214 = (CMaterial *)(m_pScene.createNode("Material"));
Material214->setUSE("Skin_Color");
Appearance213->setMaterial(*Material214);

Shape212->setAppearance(*Appearance213);

CIndexedFaceSet* IndexedFaceSet215 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet215->setDEF("headIFS");
IndexedFaceSet215->setColorIndex(new int[1640]{1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1});
IndexedFaceSet215->setCoordIndex(new int[1640]{48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1});
IndexedFaceSet215->setCreaseAngle(0.7854);
CCoordinate* Coordinate216 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate216->setDEF("Face");
Coordinate216->setPoint(new float[774]{0,1.708,-0.0435,0,1.655,0.04322,0,1.486,0.02335,0,1.694,0.007789,0,1.631,0.051,0,1.524,-0.102,0.04,1.51,-0.07278,0.04029,1.514,-0.08254,0.03528,1.502,-0.05013,0.03479,1.517,-0.09269,0.0116,1.494,0.03382,0.01946,1.52,0.03421,0.02204,1.494,0.0272,0.02734,1.498,0.02215,0.02788,1.528,0.03084,0.0338,1.503,0.0124,0.04008,1.509,0.002821,0.05122,1.518,-0.02784,0.05867,1.544,-0.03316,0.06433,1.563,-0.03678,0.06732,1.583,-0.03683,0.06769,1.617,-0.03436,0.06641,1.637,-0.03046,0.06818,1.637,-0.04285,0.06308,1.666,-0.04036,0.05305,1.685,-0.03987,0.03136,1.7,-0.0413,0.02919,1.688,0.0091,0.05272,1.674,-0.001657,0.06061,1.66,-0.0101,0.05254,1.541,-0.01363,0.04099,1.527,0.008832,0.03528,1.524,0.02097,0.05792,1.557,-0.004307,0.04413,1.539,0.0149,0.03746,1.539,0.02656,0.003407,1.524,0.04155,0.01481,1.526,0.03912,0.005112,1.532,0.04358,0.02438,1.542,0.03578,0.02636,1.55,0.03808,0.006135,1.55,0.0545,0,1.559,0.05502,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06194,1.6,0.002668,0.01489,1.583,0.04109,0.05282,1.569,0.02821,0.05767,1.58,0.0184,0.04643,1.625,0.03705,0.0264,1.628,0.04807,0.0556,1.609,0.02579,0.05467,1.599,0.02153,0.05316,1.589,0.0207,0.03603,1.58,0.03536,0.04597,1.586,0.02904,0.02106,1.592,0.03748,0.03428,1.595,0.03294,0.06808,1.617,-0.06112,0.06714,1.564,-0.07003,0.06993,1.594,-0.08238,0.05324,1.536,-0.05922,0.04904,1.521,-0.05132,0.04758,1.514,-0.03107,0.03539,1.503,-0.00093,0.02999,1.498,0.006194,0.02308,1.492,0.01628,0.01772,1.488,0.02135,0.01378,1.488,0.02484,0.04349,1.512,-0.03987,0.02308,1.499,-0.02088,0,1.487,-0.018,0.04795,1.531,-0.08973,0.05739,1.555,-0.0982,0.06815,1.622,-0.107,0.06872,1.655,-0.08466,0.05233,1.678,-0.09642,0.05334,1.631,-0.1239,0.05011,1.581,-0.1193,0.04359,1.551,-0.1067,0.03839,1.528,-0.09652,0.03399,1.636,-0.1304,0.03224,1.685,-0.1024,0,1.557,-0.1126,0.01864,1.566,0.04105,0.0249,1.58,0.0387,0.02735,1.596,0.03552,0.04317,1.564,0.03643,0.01246,1.577,0.04276,0.04354,1.59,0.02822,0.04557,1.601,0.03652,0.0291,1.603,0.04274,0.01856,1.6,0.04349,0,1.579,0.04893,0.01064,1.558,0.04476,0.005501,1.578,0.04574,0.01405,1.531,0.04152,0.01037,1.544,0.04266,0,1.515,0.03836,0.00797,1.515,0.03774,0.01824,1.55,0.04063,-0.0249,1.58,0.0387,-0.04354,1.59,0.02822,-0.0291,1.603,0.04274,-0.04317,1.564,0.03643,-0.04597,1.586,0.02904,-0.05316,1.589,0.0207,-0.01824,1.55,0.04063,-0.01246,1.577,0.04276,-0.006135,1.55,0.0545,-0.01037,1.544,0.04266,-0.02636,1.55,0.03808,-0.03428,1.595,0.03294,-0.02735,1.596,0.03552,-0.03603,1.58,0.03536,-0.05282,1.569,0.02821,-0.05767,1.58,0.0184,-0.01864,1.566,0.04105,-0.01489,1.583,0.04109,-0.0556,1.609,0.02579,-0.04557,1.601,0.03652,-0.02106,1.592,0.03748,-0.01856,1.6,0.04349,-0.005501,1.578,0.04574,-0.01064,1.558,0.04476,0,1.592,0.04694,-0.06182,1.614,0.008199,-0.05467,1.599,0.02153,-0.06194,1.6,0.002668,-0.05792,1.557,-0.004307,-0.04413,1.539,0.0149,-0.03746,1.539,0.02656,-0.04099,1.527,0.008832,-0.03528,1.524,0.02097,-0.02788,1.528,0.03084,0,1.53,0.04236,-0.005112,1.532,0.04358,-0.01481,1.526,0.03912,-0.01946,1.52,0.03421,0,1.495,0.0348,-0.0116,1.494,0.03382,-0.02734,1.498,0.02215,-0.0338,1.503,0.0124,-0.01772,1.488,0.02135,-0.02308,1.492,0.01628,-0.02999,1.498,0.006194,-0.01405,1.531,0.04152,-0.003407,1.524,0.04155,-0.02204,1.494,0.0272,-0.00797,1.515,0.03774,-0.02438,1.542,0.03578,0,1.543,0.04432,0,1.555,0.05692,0.02295,1.492,-0.02694,0.007322,1.489,-0.01677,-0.05254,1.541,-0.01363,-0.04008,1.509,0.002821,-0.05122,1.518,-0.02784,-0.03539,1.503,-0.00093,-0.01378,1.488,0.02484,-0.02308,1.499,-0.02088,-0.04349,1.512,-0.03987,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.05856,1.63,0.01803,-0.04847,1.643,0.02895,-0.04643,1.625,0.03705,-0.02958,1.651,0.03965,-0.0264,1.628,0.04807,-0.02919,1.688,0.0091,-0.05272,1.674,-0.001657,-0.06641,1.637,-0.03046,-0.06061,1.66,-0.0101,-0.03136,1.7,-0.0413,-0.05305,1.685,-0.03987,-0.06308,1.666,-0.04036,-0.06818,1.637,-0.04285,-0.06808,1.617,-0.06112,-0.06993,1.594,-0.08238,-0.06714,1.564,-0.07003,-0.05324,1.536,-0.05922,-0.04904,1.521,-0.05132,-0.04795,1.531,-0.08973,-0.05739,1.555,-0.0982,-0.06815,1.622,-0.107,-0.06872,1.655,-0.08466,-0.05233,1.678,-0.09642,-0.03224,1.685,-0.1024,0,1.69,-0.1047,0,1.64,-0.1342,-0.05334,1.631,-0.1239,-0.05011,1.581,-0.1193,-0.04359,1.551,-0.1067,-0.03839,1.528,-0.09652,-0.03528,1.502,-0.05013,-0.04,1.51,-0.07278,-0.04029,1.514,-0.08254,-0.03479,1.517,-0.09269,-0.02295,1.492,-0.02694,-0.007322,1.489,-0.01677,0,1.588,-0.1329,-0.03399,1.636,-0.1304,-0.04758,1.514,-0.03107,-0.03428,1.595,0.03294,-0.02106,1.592,0.03748,-0.02735,1.596,0.03552,-0.0249,1.58,0.0387,-0.01489,1.583,0.04109,-0.04597,1.586,0.02904,-0.04354,1.59,0.02822,-0.03603,1.58,0.03536,-0.05856,1.63,0.01803,-0.06182,1.614,0.008199,-0.02788,1.528,0.03084,-0.005112,1.532,0.04358,-0.01405,1.531,0.04152,-0.00797,1.515,0.03774,-0.01946,1.52,0.03421,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.04847,1.643,0.02895,-0.02958,1.651,0.03965,-0.05324,1.536,-0.05922,-0.04795,1.531,-0.08973,-0.03839,1.528,-0.09652,0.02106,1.592,0.03748,0.01489,1.583,0.04109,0.0249,1.58,0.0387,0.03603,1.58,0.03536,0.04354,1.59,0.02822,0.03428,1.595,0.03294,0.02735,1.596,0.03552,0.02788,1.528,0.03084,0.01405,1.531,0.04152,0,1.53,0.04236,0,1.515,0.03836,0.00797,1.515,0.03774,0.01946,1.52,0.03421,0.005112,1.532,0.04358,0,1.655,0.04322,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06769,1.617,-0.03436,0.06732,1.583,-0.03683,0.06433,1.563,-0.03678,0.05867,1.544,-0.03316,0.05324,1.536,-0.05922,0.04795,1.531,-0.08973,0.03839,1.528,-0.09652,0,1.524,-0.102});
IndexedFaceSet215->setCoord(*Coordinate216);

CColor* Color217 = (CColor *)(m_pScene.createNode("Color"));
Color217->setColor(new float[12]{0.749,0.601,0.462,0.1735,0.2602,0.749,0.6364,0.133,0.1526,0.4545,0.2759,0.1902});
IndexedFaceSet215->setColor(*Color217);

Shape212->setGeometry(IndexedFaceSet215);

Group199->addChildren(*Shape212);

HAnimSegment198->addChildren(*Group199);

HAnimJoint197->addChildren(*HAnimSegment198);

HAnimJoint190->addChildren(*HAnimJoint197);

HAnimJoint113->addChildren(*HAnimJoint190);

HAnimJoint58->addChildren(*HAnimJoint113);

HAnimHumanoid57->setSkeleton(*HAnimJoint58);

CHAnimJoint* HAnimJoint218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint218->setUSE("hanim_humanoid_root");
HAnimHumanoid57->addJoints(*HAnimJoint218);

CHAnimJoint* HAnimJoint219 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint219->setUSE("hanim_sacroiliac");
HAnimHumanoid57->addJoints(*HAnimJoint219);

CHAnimJoint* HAnimJoint220 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint220->setUSE("hanim_vl1");
HAnimHumanoid57->addJoints(*HAnimJoint220);

CHAnimJoint* HAnimJoint221 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint221->setUSE("hanim_vc4");
HAnimHumanoid57->addJoints(*HAnimJoint221);

CHAnimJoint* HAnimJoint222 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint222->setUSE("hanim_skullbase");
HAnimHumanoid57->addJoints(*HAnimJoint222);

CHAnimJoint* HAnimJoint223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint223->setUSE("hanim_l_ankle");
HAnimHumanoid57->addJoints(*HAnimJoint223);

CHAnimJoint* HAnimJoint224 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint224->setUSE("hanim_r_ankle");
HAnimHumanoid57->addJoints(*HAnimJoint224);

CHAnimJoint* HAnimJoint225 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint225->setUSE("hanim_l_elbow");
HAnimHumanoid57->addJoints(*HAnimJoint225);

CHAnimJoint* HAnimJoint226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint226->setUSE("hanim_r_elbow");
HAnimHumanoid57->addJoints(*HAnimJoint226);

CHAnimJoint* HAnimJoint227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint227->setUSE("hanim_l_hip");
HAnimHumanoid57->addJoints(*HAnimJoint227);

CHAnimJoint* HAnimJoint228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint228->setUSE("hanim_r_hip");
HAnimHumanoid57->addJoints(*HAnimJoint228);

CHAnimJoint* HAnimJoint229 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint229->setUSE("hanim_l_knee");
HAnimHumanoid57->addJoints(*HAnimJoint229);

CHAnimJoint* HAnimJoint230 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint230->setUSE("hanim_r_knee");
HAnimHumanoid57->addJoints(*HAnimJoint230);

CHAnimJoint* HAnimJoint231 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint231->setUSE("hanim_l_shoulder");
HAnimHumanoid57->addJoints(*HAnimJoint231);

CHAnimJoint* HAnimJoint232 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint232->setUSE("hanim_r_shoulder");
HAnimHumanoid57->addJoints(*HAnimJoint232);

CHAnimJoint* HAnimJoint233 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint233->setUSE("hanim_l_wrist");
HAnimHumanoid57->addJoints(*HAnimJoint233);

CHAnimJoint* HAnimJoint234 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint234->setUSE("hanim_r_wrist");
HAnimHumanoid57->addJoints(*HAnimJoint234);

CHAnimSegment* HAnimSegment235 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment235->setUSE("hanim_pelvis");
HAnimHumanoid57->setSegments(*HAnimSegment235);

CHAnimSegment* HAnimSegment236 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment236->setUSE("hanim_l1");
HAnimHumanoid57->setSegments(*HAnimSegment236);

CHAnimSegment* HAnimSegment237 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment237->setUSE("hanim_c4");
HAnimHumanoid57->setSegments(*HAnimSegment237);

CHAnimSegment* HAnimSegment238 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment238->setUSE("hanim_skull");
HAnimHumanoid57->setSegments(*HAnimSegment238);

CHAnimSegment* HAnimSegment239 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment239->setUSE("hanim_l_calf");
HAnimHumanoid57->setSegments(*HAnimSegment239);

CHAnimSegment* HAnimSegment240 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment240->setUSE("hanim_r_calf");
HAnimHumanoid57->setSegments(*HAnimSegment240);

CHAnimSegment* HAnimSegment241 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment241->setUSE("hanim_l_forearm");
HAnimHumanoid57->setSegments(*HAnimSegment241);

CHAnimSegment* HAnimSegment242 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment242->setUSE("hanim_r_forearm");
HAnimHumanoid57->setSegments(*HAnimSegment242);

CHAnimSegment* HAnimSegment243 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment243->setUSE("hanim_l_hand");
HAnimHumanoid57->setSegments(*HAnimSegment243);

CHAnimSegment* HAnimSegment244 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment244->setUSE("hanim_r_hand");
HAnimHumanoid57->setSegments(*HAnimSegment244);

CHAnimSegment* HAnimSegment245 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment245->setUSE("hanim_l_hindfoot");
HAnimHumanoid57->setSegments(*HAnimSegment245);

CHAnimSegment* HAnimSegment246 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment246->setUSE("hanim_r_hindfoot");
HAnimHumanoid57->setSegments(*HAnimSegment246);

CHAnimSegment* HAnimSegment247 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment247->setUSE("hanim_l_thigh");
HAnimHumanoid57->setSegments(*HAnimSegment247);

CHAnimSegment* HAnimSegment248 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment248->setUSE("hanim_r_thigh");
HAnimHumanoid57->setSegments(*HAnimSegment248);

CHAnimSegment* HAnimSegment249 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment249->setUSE("hanim_l_upperarm");
HAnimHumanoid57->setSegments(*HAnimSegment249);

CHAnimSegment* HAnimSegment250 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment250->setUSE("hanim_r_upperarm");
HAnimHumanoid57->setSegments(*HAnimSegment250);

Transform56->addChildren(*HAnimHumanoid57);

Group55->addChildren(*Transform56);

CProtoInstance* ProtoInstance251 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance251->setName("LOA1_ShootAnimation");
CfieldValue* fieldValue252 = new CfieldValue();
fieldValue252->setName("cycleInterval");
fieldValue252->setValue("0.009999999776482582");
ProtoInstance251->addFieldValue(*fieldValue252);

Group55->addChildren(*ProtoInstance251);

CTimeSensor* TimeSensor253 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor253->setDEF("TIMER");
TimeSensor253->setCycleInterval(4);
Group55->addChildren(*TimeSensor253);

Group54->addChildren(*Group55);

LOD53->addChildren(*Group54);

CTransform* Transform254 = (CTransform *)(m_pScene.createNode("Transform"));
LOD53->addChildren(*Transform254);

CTransform* Transform255 = (CTransform *)(m_pScene.createNode("Transform"));
Transform255->setTranslation(new float[3]{0,1,0});
CShape* Shape256 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box257 = (CBox *)(m_pScene.createNode("Box"));
Box257->setSize(new float[3]{0.5,2,0.3});
Shape256->setGeometry(Box257);

CAppearance* Appearance258 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material259 = (CMaterial *)(m_pScene.createNode("Material"));
Material259->setDiffuseColor(new float[3]{0.1,0.4,0.1});
Appearance258->setMaterial(*Material259);

Shape256->setAppearance(*Appearance258);

Transform255->addChildren(*Shape256);

LOD53->addChildren(*Transform255);

group->addChildren(*LOD53);

CNavigationInfo* NavigationInfo260 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo260->setAvatarSize(new float[3]{0.15,1.53,0.75}, 3);
NavigationInfo260->setSpeed(0.5);
NavigationInfo260->setType(new CString[1]{"EXAMINE"}, 1);
group->addChildren(*NavigationInfo260);

CWorldInfo* WorldInfo261 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo261->setInfo(new CString[1]{"Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc."}, 1);
WorldInfo261->setTitle("Nancy - an HAnim compliant avatar by 3Name3D");
group->addChildren(*WorldInfo261);

CGroup* Group262 = (CGroup *)(m_pScene.createNode("Group"));
CProximitySensor* ProximitySensor263 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor263->setDEF("TriggerProximitySensor");
ProximitySensor263->setSize(new float[3]{50,50,50});
Group262->addChildren(*ProximitySensor263);

CPositionInterpolator* PositionInterpolator264 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator264->setDEF("HUMANOIDROOT_POSITION_ANIMATOR");
PositionInterpolator264->setKey(new float[2]{0,1}, 2);
PositionInterpolator264->setKeyValue(new float[6]{0,0,0,0,0,0});
Group262->addChildren(*PositionInterpolator264);

COrientationInterpolator* OrientationInterpolator265 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator265->setDEF("HUMANOIDROOT_ANIMATOR");
OrientationInterpolator265->setKey(new float[2]{0,1}, 2);
OrientationInterpolator265->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group262->addChildren(*OrientationInterpolator265);

COrientationInterpolator* OrientationInterpolator266 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator266->setDEF("SACROILIAC_ANIMATOR");
OrientationInterpolator266->setKey(new float[2]{0,1}, 2);
OrientationInterpolator266->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group262->addChildren(*OrientationInterpolator266);

COrientationInterpolator* OrientationInterpolator267 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator267->setDEF("L_HIP_ANIMATOR");
OrientationInterpolator267->setKey(new float[2]{0,1}, 2);
OrientationInterpolator267->setKeyValue(new float[8]{0,0,1,0,0,1,0,0.4});
Group262->addChildren(*OrientationInterpolator267);

COrientationInterpolator* OrientationInterpolator268 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator268->setDEF("L_KNEE_ANIMATOR");
OrientationInterpolator268->setKey(new float[2]{0,1}, 2);
OrientationInterpolator268->setKeyValue(new float[8]{0,0,1,0,0.15,0.99,0.09,1.06});
Group262->addChildren(*OrientationInterpolator268);

COrientationInterpolator* OrientationInterpolator269 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator269->setDEF("L_ANKLE_ANIMATOR");
OrientationInterpolator269->setKey(new float[2]{0,1}, 2);
OrientationInterpolator269->setKeyValue(new float[8]{0,0,1,0,0,1,0,0.2});
Group262->addChildren(*OrientationInterpolator269);

COrientationInterpolator* OrientationInterpolator270 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator270->setDEF("L_MIDTARSAL_ANIMATOR");
OrientationInterpolator270->setKey(new float[2]{0,1}, 2);
OrientationInterpolator270->setKeyValue(new float[8]{1,0,0,0,1,0,0,0});
Group262->addChildren(*OrientationInterpolator270);

COrientationInterpolator* OrientationInterpolator271 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator271->setDEF("R_HIP_ANIMATOR");
OrientationInterpolator271->setKey(new float[2]{0,1}, 2);
OrientationInterpolator271->setKeyValue(new float[8]{0,0,1,0,0,0,1,-0.2});
Group262->addChildren(*OrientationInterpolator271);

COrientationInterpolator* OrientationInterpolator272 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator272->setDEF("R_KNEE_ANIMATOR");
OrientationInterpolator272->setKey(new float[2]{0,1}, 2);
OrientationInterpolator272->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group262->addChildren(*OrientationInterpolator272);

COrientationInterpolator* OrientationInterpolator273 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator273->setDEF("R_ANKLE_ANIMATOR");
OrientationInterpolator273->setKey(new float[2]{0,1}, 2);
OrientationInterpolator273->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group262->addChildren(*OrientationInterpolator273);

COrientationInterpolator* OrientationInterpolator274 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator274->setDEF("R_MIDTARSAL_ANIMATOR");
OrientationInterpolator274->setKey(new float[2]{0,1}, 2);
OrientationInterpolator274->setKeyValue(new float[8]{1,0,0,0,1,0,0,0});
Group262->addChildren(*OrientationInterpolator274);

COrientationInterpolator* OrientationInterpolator275 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator275->setDEF("VL5_ANIMATOR");
OrientationInterpolator275->setKey(new float[2]{0,1}, 2);
OrientationInterpolator275->setKeyValue(new float[8]{0,1,0,-0.4,0,1,0,-1});
Group262->addChildren(*OrientationInterpolator275);

COrientationInterpolator* OrientationInterpolator276 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator276->setDEF("SKULLBASE_ANIMATOR");
OrientationInterpolator276->setKey(new float[5]{0,0.1,0.5,0.7,1}, 5);
OrientationInterpolator276->setKeyValue(new float[20]{0,1,0,0.2,0,1,0,0.3,0,1,0,0.4,0,1,0,0.9,0.47,0.85,0.23,1.04});
Group262->addChildren(*OrientationInterpolator276);

COrientationInterpolator* OrientationInterpolator277 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator277->setDEF("L_SHOULDER_ANIMATOR");
OrientationInterpolator277->setKey(new float[4]{0,0.08,0.8,1}, 4);
OrientationInterpolator277->setKeyValue(new float[16]{-0.95,-0.08,-0.31,0.55,-0.95,-0.08,-0.31,0.55,-0.95,-0.08,-0.31,0.55,-0.84,0.23,0.49,1.01});
Group262->addChildren(*OrientationInterpolator277);

COrientationInterpolator* OrientationInterpolator278 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator278->setDEF("L_ELBOW_ANIMATOR");
OrientationInterpolator278->setKey(new float[5]{0,0.3,0.4,0.45,1}, 5);
OrientationInterpolator278->setKeyValue(new float[20]{0,0,1,-0.4,0,0,1,-0.4,0,0,1,-0.4,0,0,1,-0.4,1,0,0,-1.65});
Group262->addChildren(*OrientationInterpolator278);

COrientationInterpolator* OrientationInterpolator279 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator279->setDEF("L_WRIST_ANIMATOR");
OrientationInterpolator279->setKey(new float[3]{0,0.3,1}, 3);
OrientationInterpolator279->setKeyValue(new float[12]{0,1,0,0,0,1,0,0,0.25,0.32,0.92,1.4});
Group262->addChildren(*OrientationInterpolator279);

COrientationInterpolator* OrientationInterpolator280 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator280->setDEF("R_SHOULDER_ANIMATOR");
OrientationInterpolator280->setKey(new float[11]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
OrientationInterpolator280->setKeyValue(new float[44]{1,0,0,-0.3,1,0,0,-0.45,1,0,0,-0.5,1,0,0,-0.55,1,0,0,-0.6,1,0,0,-0.65,1,0,0,-0.9,1,0,0,-1,1,0,0,-1,1,0,0,-1.2,1,0,0,-1.6});
Group262->addChildren(*OrientationInterpolator280);

COrientationInterpolator* OrientationInterpolator281 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator281->setDEF("R_ELBOW_ANIMATOR");
OrientationInterpolator281->setKey(new float[8]{0,0.1,0.2,0.5,0.6,0.7,0.8,1}, 8);
OrientationInterpolator281->setKeyValue(new float[32]{0,0,1,0.5,0,0,1,0.55,0,0,1,0.75,0,0,1,0.8,0,0,1,1,0,0,1,1.15,0,0,1,1.3,0,0,1,2.27});
Group262->addChildren(*OrientationInterpolator281);

COrientationInterpolator* OrientationInterpolator282 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator282->setDEF("R_WRIST_ANIMATOR");
OrientationInterpolator282->setKey(new float[2]{0,1}, 2);
OrientationInterpolator282->setKeyValue(new float[8]{1,0,0,-0.79,0.22,0.48,-0.85,1.71});
Group262->addChildren(*OrientationInterpolator282);

group->addChildren(*Group262);

CROUTE* ROUTE283 = new CROUTE();
ROUTE283->setFromField("enterTime");
ROUTE283->setFromNode("TriggerProximitySensor");
ROUTE283->setToField("startTime");
ROUTE283->setToNode("TIMER");
group->addChildren(*ROUTE283);

CROUTE* ROUTE284 = new CROUTE();
ROUTE284->setFromField("fraction_changed");
ROUTE284->setFromNode("TIMER");
ROUTE284->setToField("set_fraction");
ROUTE284->setToNode("HUMANOIDROOT_POSITION_ANIMATOR");
group->addChildren(*ROUTE284);

CROUTE* ROUTE285 = new CROUTE();
ROUTE285->setFromField("fraction_changed");
ROUTE285->setFromNode("TIMER");
ROUTE285->setToField("set_fraction");
ROUTE285->setToNode("HUMANOIDROOT_ANIMATOR");
group->addChildren(*ROUTE285);

CROUTE* ROUTE286 = new CROUTE();
ROUTE286->setFromField("fraction_changed");
ROUTE286->setFromNode("TIMER");
ROUTE286->setToField("set_fraction");
ROUTE286->setToNode("SACROILIAC_ANIMATOR");
group->addChildren(*ROUTE286);

CROUTE* ROUTE287 = new CROUTE();
ROUTE287->setFromField("fraction_changed");
ROUTE287->setFromNode("TIMER");
ROUTE287->setToField("set_fraction");
ROUTE287->setToNode("L_HIP_ANIMATOR");
group->addChildren(*ROUTE287);

CROUTE* ROUTE288 = new CROUTE();
ROUTE288->setFromField("fraction_changed");
ROUTE288->setFromNode("TIMER");
ROUTE288->setToField("set_fraction");
ROUTE288->setToNode("L_KNEE_ANIMATOR");
group->addChildren(*ROUTE288);

CROUTE* ROUTE289 = new CROUTE();
ROUTE289->setFromField("fraction_changed");
ROUTE289->setFromNode("TIMER");
ROUTE289->setToField("set_fraction");
ROUTE289->setToNode("L_ANKLE_ANIMATOR");
group->addChildren(*ROUTE289);

CROUTE* ROUTE290 = new CROUTE();
ROUTE290->setFromField("fraction_changed");
ROUTE290->setFromNode("TIMER");
ROUTE290->setToField("set_fraction");
ROUTE290->setToNode("L_MIDTARSAL_ANIMATOR");
group->addChildren(*ROUTE290);

CROUTE* ROUTE291 = new CROUTE();
ROUTE291->setFromField("fraction_changed");
ROUTE291->setFromNode("TIMER");
ROUTE291->setToField("set_fraction");
ROUTE291->setToNode("R_HIP_ANIMATOR");
group->addChildren(*ROUTE291);

CROUTE* ROUTE292 = new CROUTE();
ROUTE292->setFromField("fraction_changed");
ROUTE292->setFromNode("TIMER");
ROUTE292->setToField("set_fraction");
ROUTE292->setToNode("R_KNEE_ANIMATOR");
group->addChildren(*ROUTE292);

CROUTE* ROUTE293 = new CROUTE();
ROUTE293->setFromField("fraction_changed");
ROUTE293->setFromNode("TIMER");
ROUTE293->setToField("set_fraction");
ROUTE293->setToNode("R_ANKLE_ANIMATOR");
group->addChildren(*ROUTE293);

CROUTE* ROUTE294 = new CROUTE();
ROUTE294->setFromField("fraction_changed");
ROUTE294->setFromNode("TIMER");
ROUTE294->setToField("set_fraction");
ROUTE294->setToNode("R_MIDTARSAL_ANIMATOR");
group->addChildren(*ROUTE294);

CROUTE* ROUTE295 = new CROUTE();
ROUTE295->setFromField("fraction_changed");
ROUTE295->setFromNode("TIMER");
ROUTE295->setToField("set_fraction");
ROUTE295->setToNode("VL5_ANIMATOR");
group->addChildren(*ROUTE295);

CROUTE* ROUTE296 = new CROUTE();
ROUTE296->setFromField("fraction_changed");
ROUTE296->setFromNode("TIMER");
ROUTE296->setToField("set_fraction");
ROUTE296->setToNode("SKULLBASE_ANIMATOR");
group->addChildren(*ROUTE296);

CROUTE* ROUTE297 = new CROUTE();
ROUTE297->setFromField("fraction_changed");
ROUTE297->setFromNode("TIMER");
ROUTE297->setToField("set_fraction");
ROUTE297->setToNode("L_SHOULDER_ANIMATOR");
group->addChildren(*ROUTE297);

CROUTE* ROUTE298 = new CROUTE();
ROUTE298->setFromField("fraction_changed");
ROUTE298->setFromNode("TIMER");
ROUTE298->setToField("set_fraction");
ROUTE298->setToNode("L_ELBOW_ANIMATOR");
group->addChildren(*ROUTE298);

CROUTE* ROUTE299 = new CROUTE();
ROUTE299->setFromField("fraction_changed");
ROUTE299->setFromNode("TIMER");
ROUTE299->setToField("set_fraction");
ROUTE299->setToNode("L_WRIST_ANIMATOR");
group->addChildren(*ROUTE299);

CROUTE* ROUTE300 = new CROUTE();
ROUTE300->setFromField("fraction_changed");
ROUTE300->setFromNode("TIMER");
ROUTE300->setToField("set_fraction");
ROUTE300->setToNode("R_SHOULDER_ANIMATOR");
group->addChildren(*ROUTE300);

CROUTE* ROUTE301 = new CROUTE();
ROUTE301->setFromField("fraction_changed");
ROUTE301->setFromNode("TIMER");
ROUTE301->setToField("set_fraction");
ROUTE301->setToNode("R_ELBOW_ANIMATOR");
group->addChildren(*ROUTE301);

CROUTE* ROUTE302 = new CROUTE();
ROUTE302->setFromField("fraction_changed");
ROUTE302->setFromNode("TIMER");
ROUTE302->setToField("set_fraction");
ROUTE302->setToNode("R_WRIST_ANIMATOR");
group->addChildren(*ROUTE302);

//Animation
CROUTE* ROUTE303 = new CROUTE();
ROUTE303->setFromField("value_changed");
ROUTE303->setFromNode("R_ANKLE_ANIMATOR");
ROUTE303->setToField("set_rotation");
ROUTE303->setToNode("hanim_r_ankle");
group->addChildren(*ROUTE303);

CROUTE* ROUTE304 = new CROUTE();
ROUTE304->setFromField("value_changed");
ROUTE304->setFromNode("R_KNEE_ANIMATOR");
ROUTE304->setToField("set_rotation");
ROUTE304->setToNode("hanim_r_knee");
group->addChildren(*ROUTE304);

CROUTE* ROUTE305 = new CROUTE();
ROUTE305->setFromField("value_changed");
ROUTE305->setFromNode("R_HIP_ANIMATOR");
ROUTE305->setToField("set_rotation");
ROUTE305->setToNode("hanim_r_hip");
group->addChildren(*ROUTE305);

CROUTE* ROUTE306 = new CROUTE();
ROUTE306->setFromField("value_changed");
ROUTE306->setFromNode("L_ANKLE_ANIMATOR");
ROUTE306->setToField("set_rotation");
ROUTE306->setToNode("hanim_l_ankle");
group->addChildren(*ROUTE306);

CROUTE* ROUTE307 = new CROUTE();
ROUTE307->setFromField("value_changed");
ROUTE307->setFromNode("L_KNEE_ANIMATOR");
ROUTE307->setToField("set_rotation");
ROUTE307->setToNode("hanim_l_knee");
group->addChildren(*ROUTE307);

CROUTE* ROUTE308 = new CROUTE();
ROUTE308->setFromField("value_changed");
ROUTE308->setFromNode("L_HIP_ANIMATOR");
ROUTE308->setToField("set_rotation");
ROUTE308->setToNode("hanim_l_hip");
group->addChildren(*ROUTE308);

CROUTE* ROUTE309 = new CROUTE();
ROUTE309->setFromField("value_changed");
ROUTE309->setFromNode("VL5_ANIMATOR");
ROUTE309->setToField("set_rotation");
ROUTE309->setToNode("hanim_sacroiliac");
group->addChildren(*ROUTE309);

CROUTE* ROUTE310 = new CROUTE();
ROUTE310->setFromField("value_changed");
ROUTE310->setFromNode("R_WRIST_ANIMATOR");
ROUTE310->setToField("set_rotation");
ROUTE310->setToNode("r_hand_adjust");
group->addChildren(*ROUTE310);

CROUTE* ROUTE311 = new CROUTE();
ROUTE311->setFromField("value_changed");
ROUTE311->setFromNode("R_ELBOW_ANIMATOR");
ROUTE311->setToField("set_rotation");
ROUTE311->setToNode("hanim_r_elbow");
group->addChildren(*ROUTE311);

CROUTE* ROUTE312 = new CROUTE();
ROUTE312->setFromField("value_changed");
ROUTE312->setFromNode("R_SHOULDER_ANIMATOR");
ROUTE312->setToField("set_rotation");
ROUTE312->setToNode("hanim_r_shoulder");
group->addChildren(*ROUTE312);

CROUTE* ROUTE313 = new CROUTE();
ROUTE313->setFromField("value_changed");
ROUTE313->setFromNode("L_WRIST_ANIMATOR");
ROUTE313->setToField("set_rotation");
ROUTE313->setToNode("hanim_l_wrist");
group->addChildren(*ROUTE313);

CROUTE* ROUTE314 = new CROUTE();
ROUTE314->setFromField("value_changed");
ROUTE314->setFromNode("L_ELBOW_ANIMATOR");
ROUTE314->setToField("set_rotation");
ROUTE314->setToNode("hanim_l_elbow");
group->addChildren(*ROUTE314);

CROUTE* ROUTE315 = new CROUTE();
ROUTE315->setFromField("value_changed");
ROUTE315->setFromNode("L_SHOULDER_ANIMATOR");
ROUTE315->setToField("set_rotation");
ROUTE315->setToNode("hanim_l_shoulder");
group->addChildren(*ROUTE315);

CROUTE* ROUTE316 = new CROUTE();
ROUTE316->setFromField("value_changed");
ROUTE316->setFromNode("SKULLBASE_ANIMATOR");
ROUTE316->setToField("set_rotation");
ROUTE316->setToNode("hanim_skullbase");
group->addChildren(*ROUTE316);

X3D0->setScene(*Scene14);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
