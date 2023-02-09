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
meta3->setContent("HAnimModelsHandsFeet.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("Left and right hands and feet, using high-fidelity definitions for HAnim version 2.0");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("YOO Kwan Hee and Don Brutzman");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("8 February 2015");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("8 March 2021");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("warning");
meta8->setContent("not yet to scale");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("warning");
meta9->setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("TODO");
meta10->setContent("how to have HAnimHumanoid root with Inline IMPORT/EXPORT of limbs?");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("Image");
meta11->setContent("HAnimModelsHandsFeet.png");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("Image");
meta12->setContent("HAnimModelsHandsFeetWithFour1mGrids.png");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("reference");
meta14->setContent("https://www.web3d.org/documents/specifications/19774/V2.0");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("reference");
meta15->setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("subject");
meta16->setContent("X3D HAnim humanoid animation");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("identifier");
meta17->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelsHandsFeet.x3d");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("generator");
meta18->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("license");
meta19->setContent("../license.html");
head1->addMeta(*meta19);

X3D0->setHead(*head1);

CScene* Scene20 = new CScene();
CWorldInfo* WorldInfo21 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo21->setTitle("HAnimModelsHandsFeet.x3d");
group->addChildren(*WorldInfo21);

CViewpoint* Viewpoint22 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint22->setDescription("Hands and feet 10m");
group->addChildren(*Viewpoint22);

CViewpoint* Viewpoint23 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint23->setDescription("Hands and feet 1.7m");
Viewpoint23->setPosition(new float[3]{0,0,1.7});
group->addChildren(*Viewpoint23);

CTransform* Transform24 = (CTransform *)(m_pScene.createNode("Transform"));
Transform24->setTranslation(new float[3]{-1,1,0});
CInline* Inline25 = (CInline *)(m_pScene.createNode("Inline"));
Inline25->setUrl(new CString[4]{"HAnimModelHandLeft.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d","HAnimModelHandLeft.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.wrl"}, 4);
Transform24->addChildren(*Inline25);

//Grid overlay authoring hint: first adjust grid scale to convenient large size, then adjust overall scale for your scene model
CTransform* Transform26 = (CTransform *)(m_pScene.createNode("Transform"));
Transform26->setDEF("GridXY_20x20Fixed_AdjustScale");
Transform26->setScale(new float[3]{0.1,0.1,0.1});
CInline* Inline27 = (CInline *)(m_pScene.createNode("Inline"));
Inline27->setDEF("GridXY_20x20Fixed");
Inline27->setUrl(new CString[6]{"GridXY_20x20Fixed.x3d","../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","GridXY_20x20Fixed.wrl","../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"}, 6);
Transform26->addChildren(*Inline27);

Transform24->addChildren(*Transform26);

group->addChildren(*Transform24);

CTransform* Transform28 = (CTransform *)(m_pScene.createNode("Transform"));
Transform28->setTranslation(new float[3]{1,1,0});
CInline* Inline29 = (CInline *)(m_pScene.createNode("Inline"));
Inline29->setUrl(new CString[4]{"HAnimModelHandRight.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d","HAnimModelHandRight.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.wrl"}, 4);
Transform28->addChildren(*Inline29);

CTransform* Transform30 = (CTransform *)(m_pScene.createNode("Transform"));
Transform30->setUSE("GridXY_20x20Fixed_AdjustScale");
Transform28->addChildren(*Transform30);

group->addChildren(*Transform28);

CTransform* Transform31 = (CTransform *)(m_pScene.createNode("Transform"));
Transform31->setTranslation(new float[3]{-1,-1,0});
//rotation='0 0 1 3.141593'
CInline* Inline32 = (CInline *)(m_pScene.createNode("Inline"));
Inline32->setUrl(new CString[4]{"HAnimModelFootLeft.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d","HAnimModelFootLeft.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.wrl"}, 4);
Transform31->addChildren(*Inline32);

CTransform* Transform33 = (CTransform *)(m_pScene.createNode("Transform"));
Transform33->setUSE("GridXY_20x20Fixed_AdjustScale");
Transform31->addChildren(*Transform33);

group->addChildren(*Transform31);

CTransform* Transform34 = (CTransform *)(m_pScene.createNode("Transform"));
Transform34->setTranslation(new float[3]{1,-1,0});
//rotation='0 0 1 3.141593'
CInline* Inline35 = (CInline *)(m_pScene.createNode("Inline"));
Inline35->setUrl(new CString[4]{"HAnimModelFootRight.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d","HAnimModelFootRight.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.wrl"}, 4);
Transform34->addChildren(*Inline35);

CTransform* Transform36 = (CTransform *)(m_pScene.createNode("Transform"));
Transform36->setUSE("GridXY_20x20Fixed_AdjustScale");
Transform34->addChildren(*Transform36);

group->addChildren(*Transform34);

X3D0->setScene(*Scene20);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
