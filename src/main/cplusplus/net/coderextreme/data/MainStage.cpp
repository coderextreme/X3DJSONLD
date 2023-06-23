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
X3D0->setProfile("Interchange");
X3D0->setVersion("4.0");
Chead* head1 = new Chead();
Ccomponent* component2 = new Ccomponent();
component2->setName("HAnim");
component2->setLevel(1);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("MainStage.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("Main stage for HAnim scene Winter and Spring.");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("Joe Williams");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("translator");
meta6->setContent("Joe Williams and Don Brutzman");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("created");
meta7->setContent("25 May 2023");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("modified");
meta8->setContent("27 May 2023");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("originals/0MainStageScene0525.x3dv");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("identifier");
meta10->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("generator");
meta11->setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("license");
meta12->setContent("../license.html");
head1->addMeta(*meta12);

X3D0->setHead(*head1);

CScene* Scene13 = new CScene();
CWorldInfo* WorldInfo14 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo14->setTitle("MainStage.x3d");
group->addChildren(*WorldInfo14);

CNavigationInfo* NavigationInfo15 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo15->setHeadlight(False);
group->addChildren(*NavigationInfo15);

CDirectionalLight* DirectionalLight16 = (CDirectionalLight *)(m_pScene.createNode("DirectionalLight"));
DirectionalLight16->setAmbientIntensity(1);
DirectionalLight16->setDirection(new float[3]{-0.5,-0.5,-0.5});
DirectionalLight16->setGlobal(True);
group->addChildren(*DirectionalLight16);

CDirectionalLight* DirectionalLight17 = (CDirectionalLight *)(m_pScene.createNode("DirectionalLight"));
DirectionalLight17->setAmbientIntensity(1);
DirectionalLight17->setDirection(new float[3]{-1,-1,-1});
DirectionalLight17->setGlobal(True);
group->addChildren(*DirectionalLight17);

CDirectionalLight* DirectionalLight18 = (CDirectionalLight *)(m_pScene.createNode("DirectionalLight"));
DirectionalLight18->setAmbientIntensity(1);
DirectionalLight18->setDirection(new float[3]{1,1,-1});
DirectionalLight18->setGlobal(True);
DirectionalLight18->setIntensity(0.5);
group->addChildren(*DirectionalLight18);

CViewpoint* Viewpoint19 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint19->setDEF("Scene_StageFrontViewFar");
Viewpoint19->setDescription("hanim_Stage Front View");
Viewpoint19->setOrientation(new float[4]{1,0,0,-0.449999988});
Viewpoint19->setPosition(new float[3]{0,4,10});
group->addChildren(*Viewpoint19);

CViewpoint* Viewpoint20 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint20->setDEF("Scene_InclinedView");
Viewpoint20->setDescription("hanim_Inclined View");
Viewpoint20->setOrientation(new float[4]{-0.112999998,0.992999971,0.034699999,0.671000004});
Viewpoint20->setPosition(new float[3]{2.619999886,1.049999952,4.059999943});
group->addChildren(*Viewpoint20);

CViewpoint* Viewpoint21 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint21->setDEF("Scene_StageFrontView");
Viewpoint21->setDescription("hanim_Stage Front View");
Viewpoint21->setPosition(new float[3]{0,1,5});
group->addChildren(*Viewpoint21);

CViewpoint* Viewpoint22 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint22->setDEF("Scene_FeetStageBottomView");
Viewpoint22->setDescription("hanim_feet View");
Viewpoint22->setOrientation(new float[4]{1,0,0,1.570000052});
Viewpoint22->setPosition(new float[3]{0,-10,0});
group->addChildren(*Viewpoint22);

CViewpoint* Viewpoint23 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint23->setDEF("Scene_HeadTopView");
Viewpoint23->setDescription("hanim_Head Top View");
Viewpoint23->setOrientation(new float[4]{1,0,0,-1.570000052});
Viewpoint23->setPosition(new float[3]{0,15,0});
group->addChildren(*Viewpoint23);

CViewpoint* Viewpoint24 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint24->setDEF("Scene_TopFrontCloseView");
Viewpoint24->setDescription("hanim_Head Top View");
Viewpoint24->setOrientation(new float[4]{1,0,0,-1.100000024});
Viewpoint24->setPosition(new float[3]{0,8,3});
group->addChildren(*Viewpoint24);

CGroup* Group25 = (CGroup *)(m_pScene.createNode("Group"));
Group25->setDEF("HAnimStage");
CTransform* Transform26 = (CTransform *)(m_pScene.createNode("Transform"));
Transform26->setDEF("cordsysfloor");
Transform26->setScale(new float[3]{0.174999997,0.174999997,0.174999997});
CInline* Inline27 = (CInline *)(m_pScene.createNode("Inline"));
Inline27->setUrl(new CString[1]{"JointCoordinateAxes.x3dv"}, 1);
Transform26->addChildren(*Inline27);

Group25->addChildren(*Transform26);

CTransform* Transform28 = (CTransform *)(m_pScene.createNode("Transform"));
Transform28->setDEF("StageGeometry");
Transform28->setScale(new float[3]{1,0.01,1});
Transform28->setTranslation(new float[3]{0,-0.01,0});
CShape* Shape29 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance30 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material31 = (CMaterial *)(m_pScene.createNode("Material"));
Material31->setTransparency(0.6);
Appearance30->setMaterial(*Material31);

Shape29->setAppearance(*Appearance30);

CBox* Box32 = (CBox *)(m_pScene.createNode("Box"));
Box32->setSize(new float[3]{9,1,9});
Shape29->setGeometry(Box32);

Transform28->addChildren(*Shape29);

CTransform* Transform33 = (CTransform *)(m_pScene.createNode("Transform"));
Transform33->setDEF("Circle0");
CShape* Shape34 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance35 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance35->setDEF("LineColor");
CMaterial* Material36 = (CMaterial *)(m_pScene.createNode("Material"));
Material36->setAmbientIntensity(1);
Material36->setDiffuseColor(new float[3]{0.699999988,0,0.899999976});
Material36->setEmissiveColor(new float[3]{0.449999988,0.449999988,1});
Material36->setShininess(1);
Material36->setSpecularColor(new float[3]{0,0,1});
Appearance35->setMaterial(*Material36);

Shape34->setAppearance(*Appearance35);

CIndexedLineSet* IndexedLineSet37 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet37->setDEF("Orbit1");
IndexedLineSet37->setCoordIndex(new int[62]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1});
CCoordinate* Coordinate38 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate38->setPoint(new float[183]{1,0,0,0.995000005,0,-0.104999997,0.978999972,0,-0.208000004,0.950999975,0,-0.308999985,0.913999975,0,-0.407000005,0.865999997,0,-0.5,0.809000015,0,-0.588,0.742999971,0,-0.66900003,0.66900003,0,-0.742999971,0.588,0,-0.809000015,0.5,0,-0.865999997,0.407000005,0,-0.913999975,0.308999985,0,-0.950999975,0.208000004,0,-0.977999985,0.104999997,0,-0.995000005,0,0,-1,-0.104999997,0,-0.994521976,-0.208000004,0,-0.977999985,-0.308999985,0,-0.950999975,-0.407000005,0,-0.913999975,-0.5,0,-0.865999997,-0.588,0,-0.809000015,-0.66900003,0,-0.742999971,-0.742999971,0,-0.66900003,-0.809000015,0,-0.588,-0.865999997,0,-0.5,-0.913999975,0,-0.407000005,-0.950999975,0,-0.308999985,-0.977999985,0,-0.208000004,-0.995000005,0,-0.104999997,-1,0,0,-0.995000005,0,0.104999997,-0.977999985,0,0.208000004,-0.950999975,0,0.308999985,-0.913999975,0,0.407000005,-0.865999997,0,0.5,-0.809000015,0,0.588,-0.742999971,0,0.66900003,-0.66900003,0,0.742999971,-0.588,0,0.809000015,-0.5,0,0.865999997,-0.407000005,0,0.913999975,-0.308999985,0,0.950999975,-0.208000004,0,0.977999985,-0.104999997,0,0.995000005,0,0,1,0.104999997,0,0.995000005,0.208000004,0,0.977999985,0.308999985,0,0.950999975,0.407000005,0,0.913999975,0.5,0,0.865999997,0.588,0,0.809000015,0.66900003,0,0.742999971,0.742999971,0,0.66900003,0.809000015,0,0.588,0.865999997,0,0.5,0.913999975,0,0.407000005,0.950999975,0,0.308999985,0.977999985,0,0.208000004,0.995000005,0,0.104000002,1,0,0});
IndexedLineSet37->setCoord(*Coordinate38);

Shape34->setGeometry(IndexedLineSet37);

Transform33->addChildren(*Shape34);

Transform28->addChildren(*Transform33);

CTransform* Transform39 = (CTransform *)(m_pScene.createNode("Transform"));
Transform39->setDEF("Circle1");
Transform39->setScale(new float[3]{0.5,1,0.5});
CShape* Shape40 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance41 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance41->setUSE("LineColor");
Shape40->setAppearance(*Appearance41);

CIndexedLineSet* IndexedLineSet42 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet42->setUSE("Orbit1");
Shape40->setGeometry(IndexedLineSet42);

Transform39->addChildren(*Shape40);

Transform28->addChildren(*Transform39);

CTransform* Transform43 = (CTransform *)(m_pScene.createNode("Transform"));
Transform43->setDEF("Circle2");
Transform43->setScale(new float[3]{0.25,1,0.25});
CShape* Shape44 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance45 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance45->setUSE("LineColor");
Shape44->setAppearance(*Appearance45);

CIndexedLineSet* IndexedLineSet46 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet46->setUSE("Orbit1");
Shape44->setGeometry(IndexedLineSet46);

Transform43->addChildren(*Shape44);

Transform28->addChildren(*Transform43);

CTransform* Transform47 = (CTransform *)(m_pScene.createNode("Transform"));
Transform47->setDEF("Circle3");
Transform47->setScale(new float[3]{2,1,2});
CShape* Shape48 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance49 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance49->setUSE("LineColor");
Shape48->setAppearance(*Appearance49);

CIndexedLineSet* IndexedLineSet50 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet50->setUSE("Orbit1");
Shape48->setGeometry(IndexedLineSet50);

Transform47->addChildren(*Shape48);

Transform28->addChildren(*Transform47);

CTransform* Transform51 = (CTransform *)(m_pScene.createNode("Transform"));
Transform51->setDEF("Circle4");
Transform51->setScale(new float[3]{3,1,3});
CShape* Shape52 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance53 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance53->setUSE("LineColor");
Shape52->setAppearance(*Appearance53);

CIndexedLineSet* IndexedLineSet54 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet54->setUSE("Orbit1");
Shape52->setGeometry(IndexedLineSet54);

Transform51->addChildren(*Shape52);

Transform28->addChildren(*Transform51);

Group25->addChildren(*Transform28);

group->addChildren(*Group25);

X3D0->setScene(*Scene13);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
