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
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("MainStage.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Main stage for HAnim scene Winter and Spring.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Joe Williams");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("translator");
meta5->setContent("Joe Williams and Don Brutzman");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("25 May 2023");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("27 May 2023");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("originals/0MainStageScene0525.x3dv");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("identifier");
meta9->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("generator");
meta10->setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta10);

Ccomponent* component11 = new Ccomponent();
component11->setName("HAnim");
component11->setLevel(1);
head1->addComponent(*component11);

X3D0->setHead(*head1);

CScene* Scene12 = new CScene();
CWorldInfo* WorldInfo13 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo13->setTitle("MainStage.x3d");
group->addChildren(*WorldInfo13);

CNavigationInfo* NavigationInfo14 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo14->setHeadlight(False);
group->addChildren(*NavigationInfo14);

CDirectionalLight* DirectionalLight15 = (CDirectionalLight *)(m_pScene.createNode("DirectionalLight"));
DirectionalLight15->setGlobal(True);
DirectionalLight15->setAmbientIntensity(1);
DirectionalLight15->setDirection(new float[3]{-0.5,-0.5,-0.5});
group->addChildren(*DirectionalLight15);

CDirectionalLight* DirectionalLight16 = (CDirectionalLight *)(m_pScene.createNode("DirectionalLight"));
DirectionalLight16->setGlobal(True);
DirectionalLight16->setAmbientIntensity(1);
DirectionalLight16->setDirection(new float[3]{-1,-1,-1});
group->addChildren(*DirectionalLight16);

CDirectionalLight* DirectionalLight17 = (CDirectionalLight *)(m_pScene.createNode("DirectionalLight"));
DirectionalLight17->setGlobal(True);
DirectionalLight17->setIntensity(0.5);
DirectionalLight17->setAmbientIntensity(1);
DirectionalLight17->setDirection(new float[3]{1,1,-1});
group->addChildren(*DirectionalLight17);

CViewpoint* Viewpoint18 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint18->setDEF("Scene_StageFrontViewFar");
Viewpoint18->setDescription("hanim_Stage Front View");
Viewpoint18->setPosition(new float[3]{0,4,10});
Viewpoint18->setOrientation(new float[4]{1,0,0,-0.449999988});
group->addChildren(*Viewpoint18);

CViewpoint* Viewpoint19 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint19->setDEF("Scene_InclinedView");
Viewpoint19->setDescription("hanim_Inclined View");
Viewpoint19->setPosition(new float[3]{2.62,1.05,4.06});
Viewpoint19->setOrientation(new float[4]{-0.112999998,0.992999971,0.034699999,0.671000004});
group->addChildren(*Viewpoint19);

CViewpoint* Viewpoint20 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint20->setDEF("Scene_StageFrontView");
Viewpoint20->setDescription("hanim_Stage Front View");
Viewpoint20->setPosition(new float[3]{0,1,5});
group->addChildren(*Viewpoint20);

CViewpoint* Viewpoint21 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint21->setDEF("Scene_FeetStageBottomView");
Viewpoint21->setDescription("hanim_feet View");
Viewpoint21->setPosition(new float[3]{0,-10,0});
Viewpoint21->setOrientation(new float[4]{1,0,0,1.570000052});
group->addChildren(*Viewpoint21);

CViewpoint* Viewpoint22 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint22->setDEF("Scene_HeadTopView");
Viewpoint22->setDescription("hanim_Head Top View");
Viewpoint22->setPosition(new float[3]{0,15,0});
Viewpoint22->setOrientation(new float[4]{1,0,0,-1.570000052});
group->addChildren(*Viewpoint22);

CViewpoint* Viewpoint23 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint23->setDEF("Scene_TopFrontCloseView");
Viewpoint23->setDescription("hanim_Head Top View");
Viewpoint23->setPosition(new float[3]{0,8,3});
Viewpoint23->setOrientation(new float[4]{1,0,0,-1.100000024});
group->addChildren(*Viewpoint23);

CGroup* Group24 = (CGroup *)(m_pScene.createNode("Group"));
Group24->setDEF("HAnimStage");
CTransform* Transform25 = (CTransform *)(m_pScene.createNode("Transform"));
Transform25->setDEF("cordsysfloor");
Transform25->setScale(new float[3]{0.175,0.175,0.175});
CInline* Inline26 = (CInline *)(m_pScene.createNode("Inline"));
Inline26->setUrl(new CString[1]{"JointCoordinateAxes.x3dv"}, 1);
Transform25->addChildren(*Inline26);

Group24->addChildren(*Transform25);

CTransform* Transform27 = (CTransform *)(m_pScene.createNode("Transform"));
Transform27->setDEF("StageGeometry");
Transform27->setTranslation(new float[3]{0,-0.01,0});
Transform27->setScale(new float[3]{1,0.01,1});
CShape* Shape28 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance29 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material30 = (CMaterial *)(m_pScene.createNode("Material"));
Material30->setTransparency(0.6);
Appearance29->setMaterial(*Material30);

Shape28->setAppearance(*Appearance29);

CBox* Box31 = (CBox *)(m_pScene.createNode("Box"));
Box31->setSize(new float[3]{9,1,9});
Shape28->setGeometry(Box31);

Transform27->addChild(*Shape28);

CTransform* Transform32 = (CTransform *)(m_pScene.createNode("Transform"));
Transform32->setDEF("Circle0");
CShape* Shape33 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance34 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance34->setDEF("LineColor");
CMaterial* Material35 = (CMaterial *)(m_pScene.createNode("Material"));
Material35->setAmbientIntensity(1);
Material35->setDiffuseColor(new float[3]{0.7,0,0.9});
Material35->setSpecularColor(new float[3]{0,0,1});
Material35->setEmissiveColor(new float[3]{0.45,0.45,1});
Material35->setShininess(1);
Appearance34->setMaterial(*Material35);

Shape33->setAppearance(*Appearance34);

CIndexedLineSet* IndexedLineSet36 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet36->setDEF("Orbit1");
IndexedLineSet36->setCoordIndex(new int[62]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1});
CCoordinate* Coordinate37 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate37->setPoint(new float[183]{1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0});
IndexedLineSet36->setCoord(*Coordinate37);

Shape33->setGeometry(IndexedLineSet36);

Transform32->addChild(*Shape33);

Transform27->addChildren(*Transform32);

CTransform* Transform38 = (CTransform *)(m_pScene.createNode("Transform"));
Transform38->setDEF("Circle1");
Transform38->setScale(new float[3]{0.5,1,0.5});
CShape* Shape39 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance40 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance40->setUSE("LineColor");
Shape39->setAppearance(*Appearance40);

CIndexedLineSet* IndexedLineSet41 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet41->setUSE("Orbit1");
Shape39->setGeometry(IndexedLineSet41);

Transform38->addChild(*Shape39);

Transform27->addChildren(*Transform38);

CTransform* Transform42 = (CTransform *)(m_pScene.createNode("Transform"));
Transform42->setDEF("Circle2");
Transform42->setScale(new float[3]{0.25,1,0.25});
CShape* Shape43 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance44 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance44->setUSE("LineColor");
Shape43->setAppearance(*Appearance44);

CIndexedLineSet* IndexedLineSet45 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet45->setUSE("Orbit1");
Shape43->setGeometry(IndexedLineSet45);

Transform42->addChild(*Shape43);

Transform27->addChildren(*Transform42);

CTransform* Transform46 = (CTransform *)(m_pScene.createNode("Transform"));
Transform46->setDEF("Circle3");
Transform46->setScale(new float[3]{2,1,2});
CShape* Shape47 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance48 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance48->setUSE("LineColor");
Shape47->setAppearance(*Appearance48);

CIndexedLineSet* IndexedLineSet49 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet49->setUSE("Orbit1");
Shape47->setGeometry(IndexedLineSet49);

Transform46->addChild(*Shape47);

Transform27->addChildren(*Transform46);

CTransform* Transform50 = (CTransform *)(m_pScene.createNode("Transform"));
Transform50->setDEF("Circle4");
Transform50->setScale(new float[3]{3,1,3});
CShape* Shape51 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance52 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance52->setUSE("LineColor");
Shape51->setAppearance(*Appearance52);

CIndexedLineSet* IndexedLineSet53 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet53->setUSE("Orbit1");
Shape51->setGeometry(IndexedLineSet53);

Transform50->addChild(*Shape51);

Transform27->addChildren(*Transform50);

Group24->addChildren(*Transform27);

group->addChildren(*Group24);

X3D0->setScene(*Scene12);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
