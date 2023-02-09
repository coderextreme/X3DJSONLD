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
X3D0->setVersion("3.0");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("indexedfaceset_pixeltexture_entire.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("reference");
meta3->setContent("http://www.nist.gov/vrml.html");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("reference");
meta4->setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("disclaimer");
meta6->setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("info");
meta7->setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("translator");
meta8->setContent("Michael Kass NIST, Don Brutzman NPS");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("translated");
meta9->setContent("21 January 2001");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("modified");
meta10->setContent("13 January 2014");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("description");
meta11->setContent("Test browser ability to completely map one PixelTexture onto the surface of an IndexedFaceSet geometry. Four colored squares should map onto each face of the IndexedFaceSet. The PixelTexture consists of red quarter (lower left), green quarter (lower right), white quarter (upper left) and yellow quarter (upper right). PixelTexture should map once onto the surface of the IndexedFaceSet, with the S (horizontal) axis of the texture corresponding to the X axis of the geometry.");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("identifier");
meta12->setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entire.x3d");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("generator");
meta13->setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("generator");
meta14->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("license");
meta15->setContent("../../license.html");
head1->addMeta(*meta15);

X3D0->setHead(*head1);

CScene* Scene16 = new CScene();
CViewpoint* Viewpoint17 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint17->setDescription("Front View");
group->addChildren(*Viewpoint17);

CViewpoint* Viewpoint18 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint18->setDescription("Rear View");
Viewpoint18->setOrientation(new float[4]{0,1,0,3.14});
Viewpoint18->setPosition(new float[3]{0,0,-10});
group->addChildren(*Viewpoint18);

CViewpoint* Viewpoint19 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint19->setDescription("Top View");
Viewpoint19->setOrientation(new float[4]{1,0,0,-1.57});
Viewpoint19->setPosition(new float[3]{0,10,0});
group->addChildren(*Viewpoint19);

CViewpoint* Viewpoint20 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint20->setDescription("Bottom View");
Viewpoint20->setOrientation(new float[4]{1,0,0,1.57});
Viewpoint20->setPosition(new float[3]{0,-10,0});
group->addChildren(*Viewpoint20);

CViewpoint* Viewpoint21 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint21->setDescription("Right View");
Viewpoint21->setOrientation(new float[4]{0,1,0,1.57});
Viewpoint21->setPosition(new float[3]{10,0,0});
group->addChildren(*Viewpoint21);

CViewpoint* Viewpoint22 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint22->setDescription("Left View");
Viewpoint22->setOrientation(new float[4]{0,1,0,-1.57});
Viewpoint22->setPosition(new float[3]{-10,0,0});
group->addChildren(*Viewpoint22);

CNavigationInfo* NavigationInfo23 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo23->setType(new CString[4]{"EXAMINE","WALK","FLY","ANY"}, 4);
group->addChildren(*NavigationInfo23);

CShape* Shape24 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance25 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material26 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance25->setMaterial(*Material26);

CPixelTexture* PixelTexture27 = (CPixelTexture *)(m_pScene.createNode("PixelTexture"));
PixelTexture27->setImage(new int[7]{2,2,4,-16776961,16711935,-1,-65281});
PixelTexture27->setRepeatS(False);
PixelTexture27->setRepeatT(False);
Appearance25->setTexture(*PixelTexture27);

Shape24->setAppearance(*Appearance25);

CIndexedFaceSet* IndexedFaceSet28 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet28->setCoordIndex(new int[30]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1});
CCoordinate* Coordinate29 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate29->setPoint(new float[24]{-2,1.5,1,-2,-1.5,1,2,1.5,1,2,-1.5,1,2,1.5,-1,2,-1.5,-1,-2,1.5,-1,-2,-1.5,-1});
IndexedFaceSet28->setCoord(*Coordinate29);

Shape24->setGeometry(IndexedFaceSet28);

group->addChildren(*Shape24);

X3D0->setScene(*Scene16);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
