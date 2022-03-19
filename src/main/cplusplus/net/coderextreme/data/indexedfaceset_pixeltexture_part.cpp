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
X3D0->setProfile("Interchange");
X3D0->setVersion("3.0");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("indexedfaceset_pixeltexture_part.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("Image");
meta3->setContent("indexedfaceset_pixeltexture_part-front.jpg");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("Image");
meta4->setContent("indexedfaceset_pixeltexture_part-rear.jpg");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("Image");
meta5->setContent("indexedfaceset_pixeltexture_part-top.jpg");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("Image");
meta6->setContent("indexedfaceset_pixeltexture_part-bottom.jpg");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("Image");
meta7->setContent("indexedfaceset_pixeltexture_part-left.jpg");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("Image");
meta8->setContent("indexedfaceset_pixeltexture_part-right.jpg");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("http://www.nist.gov/vrml.html");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("creator");
meta11->setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("disclaimer");
meta12->setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("info");
meta13->setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("translator");
meta14->setContent("Michael Kass NIST, Don Brutzman NPS");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("translated");
meta15->setContent("21 January 2001");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("modified");
meta16->setContent("13 January 2014");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("description");
meta17->setContent("Test of browser ability to map a partial portion of an PixelTexture onto an IndexedFaceSet geometry. Only the yellow portion of four equal sized red, green, yellow and white squares in the pixel texture map all the faces of the cube.");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("identifier");
meta18->setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_part.x3d");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("generator");
meta19->setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("generator");
meta20->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("license");
meta21->setContent("../../license.html");
head1->addMeta(*meta21);

X3D0->setHead(*head1);

CScene* Scene22 = new CScene();
CViewpoint* Viewpoint23 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint23->setDescription("Front View");
group->addChildren(*Viewpoint23);

CViewpoint* Viewpoint24 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint24->setDescription("Rear View");
Viewpoint24->setOrientation(new float[4]{0,1,0,3.14});
Viewpoint24->setPosition(new float[3]{0,0,-10});
group->addChildren(*Viewpoint24);

CViewpoint* Viewpoint25 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint25->setDescription("Top View");
Viewpoint25->setOrientation(new float[4]{1,0,0,-1.57});
Viewpoint25->setPosition(new float[3]{0,10,0});
group->addChildren(*Viewpoint25);

CViewpoint* Viewpoint26 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint26->setDescription("Bottom View");
Viewpoint26->setOrientation(new float[4]{1,0,0,1.57});
Viewpoint26->setPosition(new float[3]{0,-10,0});
group->addChildren(*Viewpoint26);

CViewpoint* Viewpoint27 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint27->setDescription("Right View");
Viewpoint27->setOrientation(new float[4]{0,1,0,1.57});
Viewpoint27->setPosition(new float[3]{10,0,0});
group->addChildren(*Viewpoint27);

CViewpoint* Viewpoint28 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint28->setDescription("Left View");
Viewpoint28->setOrientation(new float[4]{0,1,0,-1.57});
Viewpoint28->setPosition(new float[3]{-10,0,0});
group->addChildren(*Viewpoint28);

CNavigationInfo* NavigationInfo29 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo29->setType(new CString[4]{"EXAMINE","WALK","FLY","ANY"}, 4);
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
IndexedFaceSet34->setColorPerVertex(False);
IndexedFaceSet34->setCoordIndex(new int[30]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1});
IndexedFaceSet34->setCreaseAngle(0.5);
IndexedFaceSet34->setTexCoordIndex(new int[30]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1});
CColor* Color35 = (CColor *)(m_pScene.createNode("Color"));
Color35->setColor(new float[18]{0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0});
IndexedFaceSet34->setColor(*Color35);

CCoordinate* Coordinate36 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate36->setPoint(new float[24]{-2,1,1,-2,-1,1,2,1,1,2,-1,1,2,1,-1,2,-1,-1,-2,1,-1,-2,-1,-1});
IndexedFaceSet34->setCoord(*Coordinate36);

CTextureCoordinate* TextureCoordinate37 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate37->setPoint(new float[8]{0.5,1,0.5,0.5,1,1,1,0.5});
IndexedFaceSet34->setTexCoord(*TextureCoordinate37);

Shape30->setGeometry(IndexedFaceSet34);

group->addChildren(*Shape30);

X3D0->setScene(*Scene22);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
