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
X3D0->setVersion("3.0");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("GridXZ_20x20Fixed.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("creator");
meta3->setContent("MV4204 class");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("created");
meta4->setContent("3 September 2000");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("modified");
meta5->setContent("30 March 2016");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("reference");
meta6->setContent("GridXY_20x20Fixed.x3d");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("reference");
meta7->setContent("GridYZ_20x20Fixed.x3d");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("description");
meta8->setContent("Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m.");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("identifier");
meta9->setContent("https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("generator");
meta10->setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("license");
meta11->setContent("../../license.html");
head1->addMeta(*meta11);

X3D0->setHead(*head1);

CScene* Scene12 = new CScene();
CViewpoint* Viewpoint13 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint13->setDescription("XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)");
Viewpoint13->setOrientation(new float[4]{1,0,0,-0.4});
Viewpoint13->setPosition(new float[3]{0,10,25});
group->addChildren(*Viewpoint13);

CTransform* Transform14 = (CTransform *)(m_pScene.createNode("Transform"));
Transform14->setDEF("GridLocation");
CGroup* Group15 = (CGroup *)(m_pScene.createNode("Group"));
CShape* Shape16 = (CShape *)(m_pScene.createNode("Shape"));
Shape16->setDEF("LinesAlignedAlongZ");
CIndexedLineSet* IndexedLineSet17 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet17->setColorIndex(new int[21]{1,0,0,0,0,2,0,0,0,0,1,0,0,0,0,2,0,0,0,0,1});
IndexedLineSet17->setColorPerVertex(False);
IndexedLineSet17->setCoordIndex(new int[63]{1,22,-1,2,23,-1,3,24,-1,4,25,-1,5,26,-1,6,27,-1,7,28,-1,8,29,-1,9,30,-1,10,31,-1,11,32,-1,12,33,-1,13,34,-1,14,35,-1,15,36,-1,16,37,-1,17,38,-1,18,39,-1,19,40,-1,20,41,-1,21,42,-1});
CCoordinate* Coordinate18 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate18->setDEF("EndPoints");
Coordinate18->setPoint(new float[129]{0,0,0,-10,0,10,-9,0,10,-8,0,10,-7,0,10,-6,0,10,-5,0,10,-4,0,10,-3,0,10,-2,0,10,-1,0,10,0,0,10,1,0,10,2,0,10,3,0,10,4,0,10,5,0,10,6,0,10,7,0,10,8,0,10,9,0,10,10,0,10,-10,0,-10,-9,0,-10,-8,0,-10,-7,0,-10,-6,0,-10,-5,0,-10,-4,0,-10,-3,0,-10,-2,0,-10,-1,0,-10,0,0,-10,1,0,-10,2,0,-10,3,0,-10,4,0,-10,5,0,-10,6,0,-10,7,0,-10,8,0,-10,9,0,-10,10,0,-10});
IndexedLineSet17->setCoord(*Coordinate18);

CColor* Color19 = (CColor *)(m_pScene.createNode("Color"));
Color19->setColor(new float[9]{0.4,0.4,0.4,0.8,0.2,0,0.4,0.1,0.05});
IndexedLineSet17->setColor(*Color19);

Shape16->setGeometry(IndexedLineSet17);

Group15->addChildren(*Shape16);

CTransform* Transform20 = (CTransform *)(m_pScene.createNode("Transform"));
Transform20->setDEF("LinesAlignedAlongX");
Transform20->setRotation(new float[4]{0,1,0,1.57079});
CShape* Shape21 = (CShape *)(m_pScene.createNode("Shape"));
Shape21->setUSE("LinesAlignedAlongZ");
Transform20->addChild(*Shape21);

Group15->addChildren(*Transform20);

CTransform* Transform22 = (CTransform *)(m_pScene.createNode("Transform"));
Transform22->setTranslation(new float[3]{0,-0.5,0});
CBillboard* Billboard23 = (CBillboard *)(m_pScene.createNode("Billboard"));
CShape* Shape24 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text25 = (CText *)(m_pScene.createNode("Text"));
Text25->setDEF("CenterTextNode");
Text25->setString(new CString[1]{"origin"}, 1);
CFontStyle* FontStyle26 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle26->setDEF("FS4");
FontStyle26->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle26->setSize(0.4);
Text25->setFontStyle(*FontStyle26);

Shape24->setGeometry(Text25);

CAppearance* Appearance27 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance27->setDEF("DefaultAppearance");
CMaterial* Material28 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance27->setMaterial(*Material28);

Shape24->setAppearance(*Appearance27);

Billboard23->addChildren(*Shape24);

Transform22->addChildren(*Billboard23);

Group15->addChildren(*Transform22);

CTransform* Transform29 = (CTransform *)(m_pScene.createNode("Transform"));
Transform29->setTranslation(new float[3]{10,-0.5,10});
CBillboard* Billboard30 = (CBillboard *)(m_pScene.createNode("Billboard"));
CShape* Shape31 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text32 = (CText *)(m_pScene.createNode("Text"));
Text32->setString(new CString[1]{"10 0 10"}, 1);
CFontStyle* FontStyle33 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle33->setUSE("FS4");
Text32->setFontStyle(*FontStyle33);

Shape31->setGeometry(Text32);

CAppearance* Appearance34 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance34->setUSE("DefaultAppearance");
Shape31->setAppearance(*Appearance34);

Billboard30->addChildren(*Shape31);

Transform29->addChildren(*Billboard30);

Group15->addChildren(*Transform29);

CTransform* Transform35 = (CTransform *)(m_pScene.createNode("Transform"));
Transform35->setTranslation(new float[3]{10,-0.5,-10});
CBillboard* Billboard36 = (CBillboard *)(m_pScene.createNode("Billboard"));
CShape* Shape37 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text38 = (CText *)(m_pScene.createNode("Text"));
Text38->setString(new CString[1]{"10 0 -10"}, 1);
CFontStyle* FontStyle39 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle39->setUSE("FS4");
Text38->setFontStyle(*FontStyle39);

Shape37->setGeometry(Text38);

CAppearance* Appearance40 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance40->setUSE("DefaultAppearance");
Shape37->setAppearance(*Appearance40);

Billboard36->addChildren(*Shape37);

Transform35->addChildren(*Billboard36);

Group15->addChildren(*Transform35);

CTransform* Transform41 = (CTransform *)(m_pScene.createNode("Transform"));
Transform41->setTranslation(new float[3]{-10,-0.5,10});
CBillboard* Billboard42 = (CBillboard *)(m_pScene.createNode("Billboard"));
CShape* Shape43 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text44 = (CText *)(m_pScene.createNode("Text"));
Text44->setString(new CString[1]{"-10 0 10"}, 1);
CFontStyle* FontStyle45 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle45->setUSE("FS4");
Text44->setFontStyle(*FontStyle45);

Shape43->setGeometry(Text44);

CAppearance* Appearance46 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance46->setUSE("DefaultAppearance");
Shape43->setAppearance(*Appearance46);

Billboard42->addChildren(*Shape43);

Transform41->addChildren(*Billboard42);

Group15->addChildren(*Transform41);

CTransform* Transform47 = (CTransform *)(m_pScene.createNode("Transform"));
Transform47->setTranslation(new float[3]{-10,-0.5,-10});
CBillboard* Billboard48 = (CBillboard *)(m_pScene.createNode("Billboard"));
CShape* Shape49 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text50 = (CText *)(m_pScene.createNode("Text"));
Text50->setString(new CString[1]{"-10 0 -10"}, 1);
CFontStyle* FontStyle51 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle51->setUSE("FS4");
Text50->setFontStyle(*FontStyle51);

Shape49->setGeometry(Text50);

CAppearance* Appearance52 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance52->setUSE("DefaultAppearance");
Shape49->setAppearance(*Appearance52);

Billboard48->addChildren(*Shape49);

Transform47->addChildren(*Billboard48);

Group15->addChildren(*Transform47);

Transform14->addChildren(*Group15);

group->addChildren(*Transform14);

X3D0->setScene(*Scene12);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
