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
meta2->setContent("PixelTextureComponentExamples.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Leonard Daly and Don Brutzman");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("25 August 2008");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("7 January 2014");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("reference");
meta7->setContent("http://X3dGraphics.com");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("X3D for Web Authors, Table 5.18");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("https://www.web3d.org/x3d/content/examples/X3dResources.html");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("rights");
meta10->setContent("Copyright (c) 2006, Daly Realism and Don Brutzman");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("subject");
meta11->setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("identifier");
meta12->setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("generator");
meta13->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("license");
meta14->setContent("../license.html");
head1->addMeta(*meta14);

X3D0->setHead(*head1);

CScene* Scene15 = new CScene();
CBackground* Background16 = (CBackground *)(m_pScene.createNode("Background"));
Background16->setSkyColor(new float[3]{0.1,0.1,0.4});
group->addChildren(*Background16);

CViewpoint* Viewpoint17 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint17->setDescription("Table 5.18 SFImage component examples");
Viewpoint17->setPosition(new float[3]{0,0,14});
group->addChildren(*Viewpoint17);

CTransform* Transform18 = (CTransform *)(m_pScene.createNode("Transform"));
Transform18->setTranslation(new float[3]{-6,0,0});
CShape* Shape19 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance20 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture21 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture21->setDEF("ZeroComponents");
Appearance20->setTexture(*PixelTexture21);

Shape19->setAppearance(*Appearance20);

CBox* Box22 = (CBox *)(m_pScene.createNode("Box"));
Shape19->setGeometry(Box22);

Transform18->addChildren(*Shape19);

CTransform* Transform23 = (CTransform *)(m_pScene.createNode("Transform"));
Transform23->setTranslation(new float[3]{0,-2,0});
CShape* Shape24 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text25 = (CText *)(m_pScene.createNode("Text"));
Text25->setString(new CString[1]{"0"}, 1);
CFontStyle* FontStyle26 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle26->setDEF("CenterJustify");
FontStyle26->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text25->setFontStyle(*FontStyle26);

Shape24->setGeometry(Text25);

CAppearance* Appearance27 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance27->setDEF("TextMaterial");
CMaterial* Material28 = (CMaterial *)(m_pScene.createNode("Material"));
Material28->setDiffuseColor(new float[3]{1,1,1});
Appearance27->setMaterial(*Material28);

Shape24->setAppearance(*Appearance27);

Transform23->addChildren(*Shape24);

Transform18->addChildren(*Transform23);

group->addChildren(*Transform18);

CTransform* Transform29 = (CTransform *)(m_pScene.createNode("Transform"));
Transform29->setTranslation(new float[3]{-3,0,0});
CShape* Shape30 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance31 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture32 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture32->setDEF("OneComponent");
PixelTexture32->setImage(new int[5]{1,2,1,255,0});
Appearance31->setTexture(*PixelTexture32);

Shape30->setAppearance(*Appearance31);

CBox* Box33 = (CBox *)(m_pScene.createNode("Box"));
Shape30->setGeometry(Box33);

Transform29->addChildren(*Shape30);

CTransform* Transform34 = (CTransform *)(m_pScene.createNode("Transform"));
Transform34->setTranslation(new float[3]{0,-2,0});
CShape* Shape35 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text36 = (CText *)(m_pScene.createNode("Text"));
Text36->setString(new CString[1]{"1"}, 1);
CFontStyle* FontStyle37 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle37->setUSE("CenterJustify");
Text36->setFontStyle(*FontStyle37);

Shape35->setGeometry(Text36);

CAppearance* Appearance38 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance38->setUSE("TextMaterial");
Shape35->setAppearance(*Appearance38);

Transform34->addChildren(*Shape35);

Transform29->addChildren(*Transform34);

group->addChildren(*Transform29);

CTransform* Transform39 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape40 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance41 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture42 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture42->setDEF("TwoComponents");
PixelTexture42->setImage(new int[5]{2,1,2,52479,8823});
Appearance41->setTexture(*PixelTexture42);

Shape40->setAppearance(*Appearance41);

CBox* Box43 = (CBox *)(m_pScene.createNode("Box"));
Shape40->setGeometry(Box43);

Transform39->addChildren(*Shape40);

CTransform* Transform44 = (CTransform *)(m_pScene.createNode("Transform"));
Transform44->setTranslation(new float[3]{0,-2,0});
CShape* Shape45 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text46 = (CText *)(m_pScene.createNode("Text"));
Text46->setString(new CString[1]{"2"}, 1);
CFontStyle* FontStyle47 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle47->setUSE("CenterJustify");
Text46->setFontStyle(*FontStyle47);

Shape45->setGeometry(Text46);

CAppearance* Appearance48 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance48->setUSE("TextMaterial");
Shape45->setAppearance(*Appearance48);

Transform44->addChildren(*Shape45);

Transform39->addChildren(*Transform44);

group->addChildren(*Transform39);

CTransform* Transform49 = (CTransform *)(m_pScene.createNode("Transform"));
Transform49->setTranslation(new float[3]{3,0,0});
CShape* Shape50 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance51 = (CAppearance *)(m_pScene.createNode("Appearance"));
//note 0x000000 = 0
CPixelTexture* PixelTexture52 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture52->setDEF("ThreeComponents");
PixelTexture52->setImage(new int[11]{2,4,3,16711680,65280,0,0,0,0,16777215,16776960});
Appearance51->setTexture(*PixelTexture52);

Shape50->setAppearance(*Appearance51);

CBox* Box53 = (CBox *)(m_pScene.createNode("Box"));
Shape50->setGeometry(Box53);

Transform49->addChildren(*Shape50);

CTransform* Transform54 = (CTransform *)(m_pScene.createNode("Transform"));
Transform54->setTranslation(new float[3]{0,-2,0});
CShape* Shape55 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text56 = (CText *)(m_pScene.createNode("Text"));
Text56->setString(new CString[1]{"3"}, 1);
CFontStyle* FontStyle57 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle57->setUSE("CenterJustify");
Text56->setFontStyle(*FontStyle57);

Shape55->setGeometry(Text56);

CAppearance* Appearance58 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance58->setUSE("TextMaterial");
Shape55->setAppearance(*Appearance58);

Transform54->addChildren(*Shape55);

Transform49->addChildren(*Transform54);

group->addChildren(*Transform49);

CTransform* Transform59 = (CTransform *)(m_pScene.createNode("Transform"));
Transform59->setTranslation(new float[3]{6,0,0});
CShape* Shape60 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance61 = (CAppearance *)(m_pScene.createNode("Appearance"));
//Erroneous value in book: 1 0 0 255, 0 1 0 255, 0 0 1 255, 1 0 0 127, 0 1 0 127, 0 0 1 127
CPixelTexture* PixelTexture62 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture62->setDEF("FourComponents");
PixelTexture62->setImage(new int[9]{3,2,4,-16776961,16711935,65535,-16777089,16711807,65407});
Appearance61->setTexture(*PixelTexture62);

Shape60->setAppearance(*Appearance61);

CBox* Box63 = (CBox *)(m_pScene.createNode("Box"));
Shape60->setGeometry(Box63);

Transform59->addChildren(*Shape60);

CTransform* Transform64 = (CTransform *)(m_pScene.createNode("Transform"));
Transform64->setTranslation(new float[3]{0,-2,0});
CShape* Shape65 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text66 = (CText *)(m_pScene.createNode("Text"));
Text66->setString(new CString[1]{"4"}, 1);
CFontStyle* FontStyle67 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle67->setUSE("CenterJustify");
Text66->setFontStyle(*FontStyle67);

Shape65->setGeometry(Text66);

CAppearance* Appearance68 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance68->setUSE("TextMaterial");
Shape65->setAppearance(*Appearance68);

Transform64->addChildren(*Shape65);

Transform59->addChildren(*Transform64);

group->addChildren(*Transform59);

//Background from PixelTextureBW.x3d
CTransform* Transform69 = (CTransform *)(m_pScene.createNode("Transform"));
Transform69->setTranslation(new float[3]{0,6,-2});
CShape* Shape70 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance71 = (CAppearance *)(m_pScene.createNode("Appearance"));
CPixelTexture* PixelTexture72 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture72->setImage(new int[67]{8,8,1,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204});
Appearance71->setTexture(*PixelTexture72);

Shape70->setAppearance(*Appearance71);

CBox* Box73 = (CBox *)(m_pScene.createNode("Box"));
Box73->setSize(new float[3]{16,16,0.1});
Shape70->setGeometry(Box73);

Transform69->addChildren(*Shape70);

group->addChildren(*Transform69);

X3D0->setScene(*Scene15);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
