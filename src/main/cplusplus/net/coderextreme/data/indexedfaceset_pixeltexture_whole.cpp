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
meta2->setContent("indexedfaceset_pixeltexture_whole.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("warning");
meta3->setContent("file did not transform to vrml97");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("Image");
meta4->setContent("indexedfaceset_pixeltexture_whole-front.jpg");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("Image");
meta5->setContent("indexedfaceset_pixeltexture_whole-rear.jpg");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("Image");
meta6->setContent("indexedfaceset_pixeltexture_whole-top.jpg");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("Image");
meta7->setContent("indexedfaceset_pixeltexture_whole-bottom.jpg");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("Image");
meta8->setContent("indexedfaceset_pixeltexture_whole-left.jpg");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("Image");
meta9->setContent("indexedfaceset_pixeltexture_whole-right.jpg");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("http://www.nist.gov/vrml.html");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("creator");
meta12->setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("disclaimer");
meta13->setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("info");
meta14->setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("translator");
meta15->setContent("Michael Kass NIST, Don Brutzman NPS");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("translated");
meta16->setContent("21 January 2001");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("modified");
meta17->setContent("13 January 2014");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("description");
meta18->setContent("Test of browser ability to map the entire portion of an PixelTexture onto an IndexedFaceSet geometry. Four equal sized red (bottom left), green (bottom right) yellow (top left) and white (top right) squares in the pixel texture map all the faces of the cube.");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("identifier");
meta19->setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_whole.x3d");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("generator");
meta20->setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("generator");
meta21->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta21);

X3D0->setHead(*head1);

CScene* Scene22 = new CScene();
CViewpoint* Viewpoint23 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint23->setDescription("Front View");
group->addChildren(*Viewpoint23);

CViewpoint* Viewpoint24 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint24->setDescription("Rear View");
Viewpoint24->setPosition(new float[3]{0,0,-10});
Viewpoint24->setOrientation(new float[4]{0,1,0,3.14});
group->addChildren(*Viewpoint24);

CViewpoint* Viewpoint25 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint25->setDescription("Top View");
Viewpoint25->setPosition(new float[3]{0,10,0});
Viewpoint25->setOrientation(new float[4]{1,0,0,-1.57});
group->addChildren(*Viewpoint25);

CViewpoint* Viewpoint26 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint26->setDescription("Bottom View");
Viewpoint26->setPosition(new float[3]{0,-10,0});
Viewpoint26->setOrientation(new float[4]{1,0,0,1.57});
group->addChildren(*Viewpoint26);

CViewpoint* Viewpoint27 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint27->setDescription("Right View");
Viewpoint27->setPosition(new float[3]{10,0,0});
Viewpoint27->setOrientation(new float[4]{0,1,0,1.57});
group->addChildren(*Viewpoint27);

CViewpoint* Viewpoint28 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint28->setDescription("Left View");
Viewpoint28->setPosition(new float[3]{-10,0,0});
Viewpoint28->setOrientation(new float[4]{0,1,0,-1.57});
group->addChildren(*Viewpoint28);

CNavigationInfo* NavigationInfo29 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo29->setType(new CString[1]{"EXAMINE"}, 1);
group->addChildren(*NavigationInfo29);

CShape* Shape30 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance31 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material32 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance31->setMaterial(*Material32);

CPixelTexture* PixelTexture33 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture33->setImage(new int[7]{2,2,4,-16776961,16711935,-1,-65281});
Appearance31->setTexture(*PixelTexture33);

Shape30->setAppearance(*Appearance31);

CIndexedFaceSet* IndexedFaceSet34 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet34->setCreaseAngle(0.5);
IndexedFaceSet34->setColorPerVertex(False);
IndexedFaceSet34->setTexCoordIndex(new int[30]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1});
IndexedFaceSet34->setCoordIndex(new int[30]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1});
CColor* Color35 = (CColor *)(m_pScene.createNode("Color"));
Color35->setColor(new float[18]{0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0});
IndexedFaceSet34->setColor(*Color35);

CTextureCoordinate* TextureCoordinate36 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate36->setPoint(new float[8]{0,1,0,0,1,1,1,0});
IndexedFaceSet34->setTexCoord(*TextureCoordinate36);

CCoordinate* Coordinate37 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate37->setPoint(new float[24]{-2,1,1,-2,-1,1,2,1,1,2,-1,1,2,1,-1,2,-1,-1,-2,1,-1,-2,-1,-1});
IndexedFaceSet34->setCoord(*Coordinate37);

Shape30->setGeometry(IndexedFaceSet34);

group->addChildren(*Shape30);

X3D0->setScene(*Scene22);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
