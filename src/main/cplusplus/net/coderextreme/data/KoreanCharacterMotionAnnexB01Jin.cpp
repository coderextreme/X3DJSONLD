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
Ccomponent* component2 = new Ccomponent();
component2->setName("HAnim");
component2->setLevel(1);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("KoreanCharacterMotionAnnexB01Jin.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Jin Hoon Lee and Min Joo Lee");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("translator");
meta5->setContent("Chul Hee Jung and Myeong Won Lee");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("31 March 2011");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("translated");
meta7->setContent("1 November 2014");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("modified");
meta8->setContent("8 January 2023");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("description");
meta9->setContent("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model.");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("KoreanCharacter00ReadMe.txt");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("KoreanCharacterHumanMotion_Infotech2014_140706.pdf");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("KoreanCharactersIllustrated.pdf");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("specificationSection");
meta13->setContent("HAnim 2.0 Part 2: Humanoid animation (HAnim) motion data animation, Annex D (informative) Examples of HAnim motion data animation using a Motion object");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("specificationUrl");
meta14->setContent("https://www.web3d.org/documents/specifications/19774/V2.0/MotionDataAnimation/ExampleKeyframeAnimation.html");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("identifier");
meta15->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/KoreanCharacterAnnexB01Jin.x3d");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("generator");
meta16->setContent("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("generator");
meta17->setContent("Suwon HAnim Converter");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("generator");
meta18->setContent("Gnu Image Manipulation Program, http://www.gimp.org");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("generator");
meta19->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("license");
meta20->setContent("../license.html");
head1->addMeta(*meta20);

X3D0->setHead(*head1);

CScene* Scene21 = new CScene();
CNavigationInfo* NavigationInfo22 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo22->setSpeed(1.5);
group->addChildren(*NavigationInfo22);

CViewpoint* Viewpoint23 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint23->setCenterOfRotation(new float[3]{0,1,0});
Viewpoint23->setDescription("AnnexB01Jin");
Viewpoint23->setPosition(new float[3]{0,1,3});
group->addChildren(*Viewpoint23);

CGroup* Group24 = (CGroup *)(m_pScene.createNode("Group"));
Group24->setDEF("KeyframeAnimation");
CTimeSensor* TimeSensor25 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor25->setDEF("KeyframeTimer");
TimeSensor25->setCycleInterval(8.033494);
TimeSensor25->setLoop(True);
Group24->addChildren(*TimeSensor25);

CPositionInterpolator* PositionInterpolator26 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator26->setDEF("Keyframe_HumanoidRoot");
PositionInterpolator26->setKey(new float[2]{0,1}, 2);
PositionInterpolator26->setKeyValue(new float[6]{0,0,0,0,0,0});
Group24->addChildren(*PositionInterpolator26);

COrientationInterpolator* OrientationInterpolator27 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator27->setDEF("Keyframe_HumanoidRoot");
OrientationInterpolator27->setKey(new float[2]{0,1}, 2);
OrientationInterpolator27->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Group24->addChildren(*OrientationInterpolator27);

COrientationInterpolator* OrientationInterpolator28 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator28->setDEF("Keyframe_sacroiliac");
OrientationInterpolator28->setKey(new float[2]{0,1}, 2);
OrientationInterpolator28->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Group24->addChildren(*OrientationInterpolator28);

COrientationInterpolator* OrientationInterpolator29 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator29->setDEF("Keyframe_l_shoulder");
OrientationInterpolator29->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator29->setKeyValue(new float[12]{0,0,0,0,-1,0,0,3,0,0,0,0});
Group24->addChildren(*OrientationInterpolator29);

COrientationInterpolator* OrientationInterpolator30 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator30->setDEF("Keyframe_l_elbow");
OrientationInterpolator30->setKey(new float[2]{0,1}, 2);
OrientationInterpolator30->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Group24->addChildren(*OrientationInterpolator30);

COrientationInterpolator* OrientationInterpolator31 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator31->setDEF("Keyframe_l_radiocarpal");
OrientationInterpolator31->setKey(new float[2]{0,1}, 2);
OrientationInterpolator31->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Group24->addChildren(*OrientationInterpolator31);

COrientationInterpolator* OrientationInterpolator32 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator32->setDEF("Keyframe_r_shoulder");
OrientationInterpolator32->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator32->setKeyValue(new float[12]{0,0,0,0,-1,0,0,3,0,0,0,0});
Group24->addChildren(*OrientationInterpolator32);

COrientationInterpolator* OrientationInterpolator33 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator33->setDEF("Keyframe_r_elbow");
OrientationInterpolator33->setKey(new float[2]{0,1}, 2);
OrientationInterpolator33->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Group24->addChildren(*OrientationInterpolator33);

COrientationInterpolator* OrientationInterpolator34 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator34->setDEF("Keyframe_r_radiocarpal");
OrientationInterpolator34->setKey(new float[2]{0,1}, 2);
OrientationInterpolator34->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Group24->addChildren(*OrientationInterpolator34);

COrientationInterpolator* OrientationInterpolator35 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator35->setDEF("Keyframe_vl5");
OrientationInterpolator35->setKey(new float[2]{0,1}, 2);
OrientationInterpolator35->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Group24->addChildren(*OrientationInterpolator35);

COrientationInterpolator* OrientationInterpolator36 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator36->setDEF("Keyframe_skullbase");
OrientationInterpolator36->setKey(new float[2]{0,1}, 2);
OrientationInterpolator36->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Group24->addChildren(*OrientationInterpolator36);

COrientationInterpolator* OrientationInterpolator37 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator37->setDEF("Keyframe_l_hip");
OrientationInterpolator37->setKey(new float[2]{0,1}, 2);
OrientationInterpolator37->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Group24->addChildren(*OrientationInterpolator37);

COrientationInterpolator* OrientationInterpolator38 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator38->setDEF("Keyframe_l_knee");
OrientationInterpolator38->setKey(new float[2]{0,1}, 2);
OrientationInterpolator38->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Group24->addChildren(*OrientationInterpolator38);

COrientationInterpolator* OrientationInterpolator39 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator39->setDEF("Keyframe_l_talocrural");
OrientationInterpolator39->setKey(new float[2]{0,1}, 2);
OrientationInterpolator39->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Group24->addChildren(*OrientationInterpolator39);

COrientationInterpolator* OrientationInterpolator40 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator40->setDEF("Keyframe_l_metatarsophalangeal");
OrientationInterpolator40->setKey(new float[2]{0,1}, 2);
OrientationInterpolator40->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Group24->addChildren(*OrientationInterpolator40);

COrientationInterpolator* OrientationInterpolator41 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator41->setDEF("Keyframe_r_hip");
OrientationInterpolator41->setKey(new float[2]{0,1}, 2);
OrientationInterpolator41->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Group24->addChildren(*OrientationInterpolator41);

COrientationInterpolator* OrientationInterpolator42 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator42->setDEF("Keyframe_r_knee");
OrientationInterpolator42->setKey(new float[2]{0,1}, 2);
OrientationInterpolator42->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Group24->addChildren(*OrientationInterpolator42);

COrientationInterpolator* OrientationInterpolator43 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator43->setDEF("Keyframe_r_talocrural");
OrientationInterpolator43->setKey(new float[2]{0,1}, 2);
OrientationInterpolator43->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Group24->addChildren(*OrientationInterpolator43);

COrientationInterpolator* OrientationInterpolator44 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator44->setDEF("Keyframe_r_metatarsophalangeal");
OrientationInterpolator44->setKey(new float[2]{0,1}, 2);
OrientationInterpolator44->setKeyValue(new float[8]{0,0,0,0,0,0,0,0});
Group24->addChildren(*OrientationInterpolator44);

CROUTE* ROUTE45 = new CROUTE();
ROUTE45->setFromField("fraction_changed");
ROUTE45->setFromNode("KeyframeTimer");
ROUTE45->setToField("set_fraction");
ROUTE45->setToNode("Keyframe_HumanoidRoot");
Group24->addChildren(*ROUTE45);

CROUTE* ROUTE46 = new CROUTE();
ROUTE46->setFromField("fraction_changed");
ROUTE46->setFromNode("KeyframeTimer");
ROUTE46->setToField("set_fraction");
ROUTE46->setToNode("Keyframe_HumanoidRoot");
Group24->addChildren(*ROUTE46);

CROUTE* ROUTE47 = new CROUTE();
ROUTE47->setFromField("fraction_changed");
ROUTE47->setFromNode("KeyframeTimer");
ROUTE47->setToField("set_fraction");
ROUTE47->setToNode("Keyframe_sacroiliac");
Group24->addChildren(*ROUTE47);

CROUTE* ROUTE48 = new CROUTE();
ROUTE48->setFromField("fraction_changed");
ROUTE48->setFromNode("KeyframeTimer");
ROUTE48->setToField("set_fraction");
ROUTE48->setToNode("Keyframe_l_shoulder");
Group24->addChildren(*ROUTE48);

CROUTE* ROUTE49 = new CROUTE();
ROUTE49->setFromField("fraction_changed");
ROUTE49->setFromNode("KeyframeTimer");
ROUTE49->setToField("set_fraction");
ROUTE49->setToNode("Keyframe_l_elbow");
Group24->addChildren(*ROUTE49);

CROUTE* ROUTE50 = new CROUTE();
ROUTE50->setFromField("fraction_changed");
ROUTE50->setFromNode("KeyframeTimer");
ROUTE50->setToField("set_fraction");
ROUTE50->setToNode("Keyframe_l_radiocarpal");
Group24->addChildren(*ROUTE50);

CROUTE* ROUTE51 = new CROUTE();
ROUTE51->setFromField("fraction_changed");
ROUTE51->setFromNode("KeyframeTimer");
ROUTE51->setToField("set_fraction");
ROUTE51->setToNode("Keyframe_r_shoulder");
Group24->addChildren(*ROUTE51);

CROUTE* ROUTE52 = new CROUTE();
ROUTE52->setFromField("fraction_changed");
ROUTE52->setFromNode("KeyframeTimer");
ROUTE52->setToField("set_fraction");
ROUTE52->setToNode("Keyframe_r_elbow");
Group24->addChildren(*ROUTE52);

CROUTE* ROUTE53 = new CROUTE();
ROUTE53->setFromField("fraction_changed");
ROUTE53->setFromNode("KeyframeTimer");
ROUTE53->setToField("set_fraction");
ROUTE53->setToNode("Keyframe_r_radiocarpal");
Group24->addChildren(*ROUTE53);

CROUTE* ROUTE54 = new CROUTE();
ROUTE54->setFromField("fraction_changed");
ROUTE54->setFromNode("KeyframeTimer");
ROUTE54->setToField("set_fraction");
ROUTE54->setToNode("Keyframe_vl5");
Group24->addChildren(*ROUTE54);

CROUTE* ROUTE55 = new CROUTE();
ROUTE55->setFromField("fraction_changed");
ROUTE55->setFromNode("KeyframeTimer");
ROUTE55->setToField("set_fraction");
ROUTE55->setToNode("Keyframe_skullbase");
Group24->addChildren(*ROUTE55);

CROUTE* ROUTE56 = new CROUTE();
ROUTE56->setFromField("fraction_changed");
ROUTE56->setFromNode("KeyframeTimer");
ROUTE56->setToField("set_fraction");
ROUTE56->setToNode("Keyframe_l_hip");
Group24->addChildren(*ROUTE56);

CROUTE* ROUTE57 = new CROUTE();
ROUTE57->setFromField("fraction_changed");
ROUTE57->setFromNode("KeyframeTimer");
ROUTE57->setToField("set_fraction");
ROUTE57->setToNode("Keyframe_l_knee");
Group24->addChildren(*ROUTE57);

CROUTE* ROUTE58 = new CROUTE();
ROUTE58->setFromField("fraction_changed");
ROUTE58->setFromNode("KeyframeTimer");
ROUTE58->setToField("set_fraction");
ROUTE58->setToNode("Keyframe_l_talocrural");
Group24->addChildren(*ROUTE58);

CROUTE* ROUTE59 = new CROUTE();
ROUTE59->setFromField("fraction_changed");
ROUTE59->setFromNode("KeyframeTimer");
ROUTE59->setToField("set_fraction");
ROUTE59->setToNode("Keyframe_l_metatarsophalangeal");
Group24->addChildren(*ROUTE59);

CROUTE* ROUTE60 = new CROUTE();
ROUTE60->setFromField("fraction_changed");
ROUTE60->setFromNode("KeyframeTimer");
ROUTE60->setToField("set_fraction");
ROUTE60->setToNode("Keyframe_r_hip");
Group24->addChildren(*ROUTE60);

CROUTE* ROUTE61 = new CROUTE();
ROUTE61->setFromField("fraction_changed");
ROUTE61->setFromNode("KeyframeTimer");
ROUTE61->setToField("set_fraction");
ROUTE61->setToNode("Keyframe_r_knee");
Group24->addChildren(*ROUTE61);

CROUTE* ROUTE62 = new CROUTE();
ROUTE62->setFromField("fraction_changed");
ROUTE62->setFromNode("KeyframeTimer");
ROUTE62->setToField("set_fraction");
ROUTE62->setToNode("Keyframe_r_talocrural");
Group24->addChildren(*ROUTE62);

CROUTE* ROUTE63 = new CROUTE();
ROUTE63->setFromField("fraction_changed");
ROUTE63->setFromNode("KeyframeTimer");
ROUTE63->setToField("set_fraction");
ROUTE63->setToNode("Keyframe_r_metatarsophalangeal");
Group24->addChildren(*ROUTE63);

CROUTE* ROUTE64 = new CROUTE();
ROUTE64->setFromField("value_changed");
ROUTE64->setFromNode("Keyframe_HumanoidRoot");
ROUTE64->setToField("translation");
ROUTE64->setToNode("hanim_HumanoidRoot");
Group24->addChildren(*ROUTE64);

CROUTE* ROUTE65 = new CROUTE();
ROUTE65->setFromField("value_changed");
ROUTE65->setFromNode("Keyframe_HumanoidRoot");
ROUTE65->setToField("rotation");
ROUTE65->setToNode("hanim_HumanoidRoot");
Group24->addChildren(*ROUTE65);

CROUTE* ROUTE66 = new CROUTE();
ROUTE66->setFromField("value_changed");
ROUTE66->setFromNode("Keyframe_sacroiliac");
ROUTE66->setToField("rotation");
ROUTE66->setToNode("hanim_sacroiliac");
Group24->addChildren(*ROUTE66);

CROUTE* ROUTE67 = new CROUTE();
ROUTE67->setFromField("value_changed");
ROUTE67->setFromNode("Keyframe_l_shoulder");
ROUTE67->setToField("rotation");
ROUTE67->setToNode("hanim_l_shoulder");
Group24->addChildren(*ROUTE67);

CROUTE* ROUTE68 = new CROUTE();
ROUTE68->setFromField("value_changed");
ROUTE68->setFromNode("Keyframe_l_elbow");
ROUTE68->setToField("rotation");
ROUTE68->setToNode("hanim_l_elbow");
Group24->addChildren(*ROUTE68);

CROUTE* ROUTE69 = new CROUTE();
ROUTE69->setFromField("value_changed");
ROUTE69->setFromNode("Keyframe_l_radiocarpal");
ROUTE69->setToField("rotation");
ROUTE69->setToNode("hanim_l_radiocarpal");
Group24->addChildren(*ROUTE69);

CROUTE* ROUTE70 = new CROUTE();
ROUTE70->setFromField("value_changed");
ROUTE70->setFromNode("Keyframe_r_shoulder");
ROUTE70->setToField("rotation");
ROUTE70->setToNode("hanim_r_shoulder");
Group24->addChildren(*ROUTE70);

CROUTE* ROUTE71 = new CROUTE();
ROUTE71->setFromField("value_changed");
ROUTE71->setFromNode("Keyframe_r_elbow");
ROUTE71->setToField("rotation");
ROUTE71->setToNode("hanim_r_elbow");
Group24->addChildren(*ROUTE71);

CROUTE* ROUTE72 = new CROUTE();
ROUTE72->setFromField("value_changed");
ROUTE72->setFromNode("Keyframe_r_radiocarpal");
ROUTE72->setToField("rotation");
ROUTE72->setToNode("hanim_r_radiocarpal");
Group24->addChildren(*ROUTE72);

CROUTE* ROUTE73 = new CROUTE();
ROUTE73->setFromField("value_changed");
ROUTE73->setFromNode("Keyframe_vl5");
ROUTE73->setToField("rotation");
ROUTE73->setToNode("hanim_vl5");
Group24->addChildren(*ROUTE73);

CROUTE* ROUTE74 = new CROUTE();
ROUTE74->setFromField("value_changed");
ROUTE74->setFromNode("Keyframe_skullbase");
ROUTE74->setToField("rotation");
ROUTE74->setToNode("hanim_skullbase");
Group24->addChildren(*ROUTE74);

CROUTE* ROUTE75 = new CROUTE();
ROUTE75->setFromField("value_changed");
ROUTE75->setFromNode("Keyframe_l_hip");
ROUTE75->setToField("rotation");
ROUTE75->setToNode("hanim_l_hip");
Group24->addChildren(*ROUTE75);

CROUTE* ROUTE76 = new CROUTE();
ROUTE76->setFromField("value_changed");
ROUTE76->setFromNode("Keyframe_l_knee");
ROUTE76->setToField("rotation");
ROUTE76->setToNode("hanim_l_knee");
Group24->addChildren(*ROUTE76);

CROUTE* ROUTE77 = new CROUTE();
ROUTE77->setFromField("value_changed");
ROUTE77->setFromNode("Keyframe_l_talocrural");
ROUTE77->setToField("rotation");
ROUTE77->setToNode("hanim_l_talocrural");
Group24->addChildren(*ROUTE77);

CROUTE* ROUTE78 = new CROUTE();
ROUTE78->setFromField("value_changed");
ROUTE78->setFromNode("Keyframe_l_talocrural");
ROUTE78->setToField("rotation");
ROUTE78->setToNode("hanim_l_metatarsophalangeal");
Group24->addChildren(*ROUTE78);

CROUTE* ROUTE79 = new CROUTE();
ROUTE79->setFromField("value_changed");
ROUTE79->setFromNode("Keyframe_r_hip");
ROUTE79->setToField("rotation");
ROUTE79->setToNode("hanim_r_hip");
Group24->addChildren(*ROUTE79);

CROUTE* ROUTE80 = new CROUTE();
ROUTE80->setFromField("value_changed");
ROUTE80->setFromNode("Keyframe_r_knee");
ROUTE80->setToField("rotation");
ROUTE80->setToNode("hanim_r_knee");
Group24->addChildren(*ROUTE80);

CROUTE* ROUTE81 = new CROUTE();
ROUTE81->setFromField("value_changed");
ROUTE81->setFromNode("Keyframe_l_talocrural");
ROUTE81->setToField("rotation");
ROUTE81->setToNode("hanim_r_talocrural");
Group24->addChildren(*ROUTE81);

CROUTE* ROUTE82 = new CROUTE();
ROUTE82->setFromField("value_changed");
ROUTE82->setFromNode("Keyframe_l_talocrural");
ROUTE82->setToField("rotation");
ROUTE82->setToNode("hanim_r_metatarsophalangeal");
Group24->addChildren(*ROUTE82);

group->addChildren(*Group24);

X3D0->setScene(*Scene21);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
