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
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("Table5_18PixelTexture");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("PixelTexture example for Table 5.18");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Leonard Daly and Don Brutzman");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("18 December 2006");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("2 April 2017");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("reference");
meta7->setContent("http://X3dGraphics.com");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("https://www.web3d.org/x3d/content/examples/X3dResources.html");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("rights");
meta9->setContent("Copyright 2006, Daly Realism and Don Brutzman");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("subject");
meta10->setContent("X3D, PixelTexture");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("identifier");
meta11->setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/Table5_18PixelTexture");
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
CBackground* Background15 = (CBackground *)(m_pScene.createNode("Background"));
Background15->setSkyColor(new float[3]{0,0,1});
group->addChildren(*Background15);

CTransform* Transform16 = (CTransform *)(m_pScene.createNode("Transform"));
Transform16->setDEF("Checkerboard");
Transform16->setTranslation(new float[3]{0,0,-10});
CShape* Shape17 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance18 = (CAppearance *)(m_pScene.createNode("Appearance"));
CTextureTransform* TextureTransform19 = (CTextureTransform *)(m_pScene.createNode("TextureTransform"));
TextureTransform19->setScale(new float[2]{500,500});
Appearance18->setTextureTransform(*TextureTransform19);

CPixelTexture* PixelTexture20 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture20->setImage(new int[7]{2,2,3,15119869,16767927,16767927,15119869});
Appearance18->setTexture(*PixelTexture20);

Shape17->setAppearance(*Appearance18);

CBox* Box21 = (CBox *)(m_pScene.createNode("Box"));
Box21->setSize(new float[3]{1000,1000,0.01});
Shape17->setGeometry(Box21);

Transform16->addChildren(*Shape17);

group->addChildren(*Transform16);

CViewpoint* Viewpoint22 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint22->setDescription("View All");
Viewpoint22->setPosition(new float[3]{0,0,20});
group->addChildren(*Viewpoint22);

CViewpoint* Viewpoint23 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint23->setDescription("Empty Image");
Viewpoint23->setPosition(new float[3]{0,5,5});
group->addChildren(*Viewpoint23);

CTransform* Transform24 = (CTransform *)(m_pScene.createNode("Transform"));
Transform24->setDEF("EmptyImage");
Transform24->setRotation(new float[4]{1,1,0,1});
Transform24->setTranslation(new float[3]{0,5,0});
CShape* Shape25 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance26 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture27 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
Appearance26->setTexture(*PixelTexture27);

Shape25->setAppearance(*Appearance26);

CBox* Box28 = (CBox *)(m_pScene.createNode("Box"));
Box28->setDEF("StandardBox");
Shape25->setGeometry(Box28);

Transform24->addChildren(*Shape25);

group->addChildren(*Transform24);

CViewpoint* Viewpoint29 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint29->setDescription("Black and white PixelTexture");
Viewpoint29->setPosition(new float[3]{-5,0,5});
group->addChildren(*Viewpoint29);

CTransform* Transform30 = (CTransform *)(m_pScene.createNode("Transform"));
Transform30->setDEF("BW");
Transform30->setRotation(new float[4]{1,1,0,1});
Transform30->setTranslation(new float[3]{-5,0,0});
CShape* Shape31 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance32 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture33 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture33->setImage(new int[5]{1,2,1,255,0});
Appearance32->setTexture(*PixelTexture33);

Shape31->setAppearance(*Appearance32);

CBox* Box34 = (CBox *)(m_pScene.createNode("Box"));
Box34->setUSE("StandardBox");
Shape31->setGeometry(Box34);

Transform30->addChildren(*Shape31);

group->addChildren(*Transform30);

CViewpoint* Viewpoint35 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint35->setDescription("Black and white with Alpha PixelTexture");
Viewpoint35->setPosition(new float[3]{5,0,5});
group->addChildren(*Viewpoint35);

CTransform* Transform36 = (CTransform *)(m_pScene.createNode("Transform"));
Transform36->setDEF("AlphaBW");
Transform36->setRotation(new float[4]{1,1,0,1});
Transform36->setTranslation(new float[3]{5,0,0});
CShape* Shape37 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance38 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture39 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture39->setImage(new int[5]{2,1,2,52479,8823});
Appearance38->setTexture(*PixelTexture39);

Shape37->setAppearance(*Appearance38);

CBox* Box40 = (CBox *)(m_pScene.createNode("Box"));
Box40->setUSE("StandardBox");
Shape37->setGeometry(Box40);

Transform36->addChildren(*Shape37);

group->addChildren(*Transform36);

CViewpoint* Viewpoint41 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint41->setDescription("RGB PixelTexture");
Viewpoint41->setPosition(new float[3]{-5,-5,5});
group->addChildren(*Viewpoint41);

CTransform* Transform42 = (CTransform *)(m_pScene.createNode("Transform"));
Transform42->setDEF("RGB");
Transform42->setRotation(new float[4]{1,1,0,1});
Transform42->setTranslation(new float[3]{-5,-5,0});
CShape* Shape43 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance44 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture45 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture45->setImage(new int[11]{2,4,3,16711680,65280,0,0,0,0,16777215,16776960});
Appearance44->setTexture(*PixelTexture45);

Shape43->setAppearance(*Appearance44);

CBox* Box46 = (CBox *)(m_pScene.createNode("Box"));
Box46->setUSE("StandardBox");
Shape43->setGeometry(Box46);

Transform42->addChildren(*Shape43);

group->addChildren(*Transform42);

CViewpoint* Viewpoint47 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint47->setDescription("RGB with Alpha PixelTexture");
Viewpoint47->setPosition(new float[3]{5,-5,5});
group->addChildren(*Viewpoint47);

CTransform* Transform48 = (CTransform *)(m_pScene.createNode("Transform"));
Transform48->setDEF("AlphaRGB");
Transform48->setRotation(new float[4]{1,1,0,1});
Transform48->setTranslation(new float[3]{5,-5,0});
CShape* Shape49 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance50 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture51 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture51->setImage(new int[9]{3,2,4,-16776961,16711935,65535,-16777089,16711807,65407});
Appearance50->setTexture(*PixelTexture51);

Shape49->setAppearance(*Appearance50);

CBox* Box52 = (CBox *)(m_pScene.createNode("Box"));
Box52->setUSE("StandardBox");
Shape49->setGeometry(Box52);

Transform48->addChildren(*Shape49);

group->addChildren(*Transform48);

X3D0->setScene(*Scene14);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
