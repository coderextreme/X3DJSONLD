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
meta2->setContent("rgb_alpha.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("Image");
meta3->setContent("rgb_alpha-front.jpg");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("Image");
meta4->setContent("rgb_alpha-rear.jpg");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("Image");
meta5->setContent("rgb_alpha-top.jpg");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("Image");
meta6->setContent("rgb_alpha-bottom.jpg");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("reference");
meta7->setContent("http://www.nist.gov/vrml.html");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("creator");
meta9->setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("disclaimer");
meta10->setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("info");
meta11->setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("translator");
meta12->setContent("Michael Kass NIST, Don Brutzman NPS");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("translated");
meta13->setContent("21 January 2001");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("modified");
meta14->setContent("16 January 2011");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("description");
meta15->setContent("Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box.");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("identifier");
meta16->setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("generator");
meta17->setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("generator");
meta18->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta18);

X3D0->setHead(*head1);

CScene* Scene19 = new CScene();
CNavigationInfo* NavigationInfo20 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo20->setType(new CString[4]{"EXAMINE","WALK","FLY","ANY"}, 4);
group->addChildren(*NavigationInfo20);

CGroup* Group21 = (CGroup *)(m_pScene.createNode("Group"));
CTransform* Transform22 = (CTransform *)(m_pScene.createNode("Transform"));
Transform22->setTranslation(new float[3]{6.14221,0.0694613,-0.000999451});
CShape* Shape23 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance24 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material25 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance24->setMaterial(*Material25);

CPixelTexture* PixelTexture26 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture26->setDEF("RgbOpacityCheckerboard");
PixelTexture26->setImage(new int[7]{2,2,4,-16776961,-65536,-65536,-16776961});
Appearance24->setTexture(*PixelTexture26);

Shape23->setAppearance(*Appearance24);

CBox* Box27 = (CBox *)(m_pScene.createNode("Box"));
Shape23->setGeometry(Box27);

Transform22->addChild(*Shape23);

Group21->addChildren(*Transform22);

CTransform* Transform28 = (CTransform *)(m_pScene.createNode("Transform"));
Transform28->setTranslation(new float[3]{-4.85443,0.0694381,-0.00149918});
CShape* Shape29 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance30 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material31 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance30->setMaterial(*Material31);

CPixelTexture* PixelTexture32 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture32->setUSE("RgbOpacityCheckerboard");
Appearance30->setTexture(*PixelTexture32);

Shape29->setAppearance(*Appearance30);

CSphere* Sphere33 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape29->setGeometry(Sphere33);

Transform28->addChild(*Shape29);

Group21->addChildren(*Transform28);

CTransform* Transform34 = (CTransform *)(m_pScene.createNode("Transform"));
Transform34->setTranslation(new float[3]{-1.47341,0.036672,-0.00175095});
CShape* Shape35 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance36 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material37 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance36->setMaterial(*Material37);

CPixelTexture* PixelTexture38 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture38->setUSE("RgbOpacityCheckerboard");
Appearance36->setTexture(*PixelTexture38);

Shape35->setAppearance(*Appearance36);

CCone* Cone39 = (CCone *)(m_pScene.createNode("Cone"));
Shape35->setGeometry(Cone39);

Transform34->addChild(*Shape35);

Group21->addChildren(*Transform34);

CTransform* Transform40 = (CTransform *)(m_pScene.createNode("Transform"));
Transform40->setTranslation(new float[3]{2.31094,0.0694206,-0.00187683});
CShape* Shape41 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance42 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material43 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance42->setMaterial(*Material43);

CPixelTexture* PixelTexture44 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture44->setUSE("RgbOpacityCheckerboard");
Appearance42->setTexture(*PixelTexture44);

Shape41->setAppearance(*Appearance42);

CCylinder* Cylinder45 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Shape41->setGeometry(Cylinder45);

Transform40->addChild(*Shape41);

Group21->addChildren(*Transform40);

group->addChildren(*Group21);

X3D0->setScene(*Scene19);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
