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
meta2->setContent("MaskAndSnorkel.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Diving mask and snorkel tube.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Etsuko Lippi");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("January 24, 2001");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("23 May 2020");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("identifier");
meta7->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("generator");
meta8->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("license");
meta9->setContent("../license.html");
head1->addMeta(*meta9);

X3D0->setHead(*head1);

CScene* Scene10 = new CScene();
CWorldInfo* WorldInfo11 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo11->setTitle("MaskAndSnorkel.x3d");
group->addChildren(*WorldInfo11);

CBackground* Background12 = (CBackground *)(m_pScene.createNode("Background"));
Background12->setSkyColor(new float[3]{0,0,0.9});
group->addChildren(*Background12);

CTransform* Transform13 = (CTransform *)(m_pScene.createNode("Transform"));
Transform13->setDEF("maskAndSnorkel");
CTransform* Transform14 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape15 = (CShape *)(m_pScene.createNode("Shape"));
Shape15->setDEF("maskFrame");
CAppearance* Appearance16 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material17 = (CMaterial *)(m_pScene.createNode("Material"));
Material17->setDEF("frameColor");
Material17->setDiffuseColor(new float[3]{0,0,0});
Appearance16->setMaterial(*Material17);

Shape15->setAppearance(*Appearance16);

CIndexedFaceSet* IndexedFaceSet18 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet18->setCoordIndex(new int[80]{0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1});
IndexedFaceSet18->setCreaseAngle(1.45);
IndexedFaceSet18->setSolid(False);
CCoordinate* Coordinate19 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate19->setPoint(new float[78]{0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0});
IndexedFaceSet18->setCoord(*Coordinate19);

Shape15->setGeometry(IndexedFaceSet18);

Transform14->addChildren(*Shape15);

Transform13->addChildren(*Transform14);

CTransform* Transform20 = (CTransform *)(m_pScene.createNode("Transform"));
Transform20->setDEF("snorkelHoldRing");
Transform20->setTranslation(new float[3]{0.075,0.075,-0.02});
CShape* Shape21 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance22 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material23 = (CMaterial *)(m_pScene.createNode("Material"));
Material23->setUSE("frameColor");
Appearance22->setMaterial(*Material23);

Shape21->setAppearance(*Appearance22);

CCylinder* Cylinder24 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder24->setHeight(0.003);
Cylinder24->setRadius(0.015);
Shape21->setGeometry(Cylinder24);

Transform20->addChildren(*Shape21);

Transform13->addChildren(*Transform20);

CGroup* Group25 = (CGroup *)(m_pScene.createNode("Group"));
Group25->setDEF("snorkel");
CTransform* Transform26 = (CTransform *)(m_pScene.createNode("Transform"));
Transform26->setTranslation(new float[3]{0,-0.02,0});
CTransform* Transform27 = (CTransform *)(m_pScene.createNode("Transform"));
Transform27->setScale(new float[3]{0.9,0.9,0.9});
Transform27->setTranslation(new float[3]{0.035,-0.07,-0.02});
CShape* Shape28 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance29 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material30 = (CMaterial *)(m_pScene.createNode("Material"));
Material30->setDEF("snorkelTube");
Material30->setDiffuseColor(new float[3]{0.678,1,0.184});
Material30->setTransparency(0.4);
Appearance29->setMaterial(*Material30);

Shape28->setAppearance(*Appearance29);

CExtrusion* Extrusion31 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion31->setCrossSection(new float[34]{0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013});
Extrusion31->setSpine(new float[15]{-0.01,-0.04,0,0,0,0,0.03,0.05,0,0.05,0.2,0,0.03,0.4,0.03});
Shape28->setGeometry(Extrusion31);

Transform27->addChildren(*Shape28);

Transform26->addChildren(*Transform27);

CTransform* Transform32 = (CTransform *)(m_pScene.createNode("Transform"));
Transform32->setRotation(new float[4]{0,0,1,1.57});
Transform32->setScale(new float[3]{0.9,0.9,0.9});
Transform32->setTranslation(new float[3]{0.01,-0.04,-0.02});
CShape* Shape33 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance34 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material35 = (CMaterial *)(m_pScene.createNode("Material"));
Material35->setDEF("Mouthpiece");
Material35->setDiffuseColor(new float[3]{0.678,1,0.8});
Material35->setTransparency(0.4);
Appearance34->setMaterial(*Material35);

Shape33->setAppearance(*Appearance34);

CExtrusion* Extrusion36 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion36->setCrossSection(new float[34]{0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013});
Extrusion36->setSpine(new float[9]{-0.01,-0.03,0,0,0,0,0.02,0.01,0});
Shape33->setGeometry(Extrusion36);

Transform32->addChildren(*Shape33);

Transform26->addChildren(*Transform32);

CTransform* Transform37 = (CTransform *)(m_pScene.createNode("Transform"));
Transform37->setRotation(new float[4]{0,0,1,-0.85});
Transform37->setScale(new float[3]{0.9,0.9,0.9});
Transform37->setTranslation(new float[3]{0.005,-0.01,-0.02});
CShape* Shape38 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance39 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material40 = (CMaterial *)(m_pScene.createNode("Material"));
Material40->setUSE("Mouthpiece");
Appearance39->setMaterial(*Material40);

Shape38->setAppearance(*Appearance39);

CExtrusion* Extrusion41 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion41->setCrossSection(new float[18]{0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013});
Extrusion41->setSpine(new float[18]{-0.02,-0.03,0,-0.01,-0.03,0,0,-0.0175,0,0,-0.0135,0,-0.01,0,0,-0.02,0,0});
Shape38->setGeometry(Extrusion41);

Transform37->addChildren(*Shape38);

Transform26->addChildren(*Transform37);

Group25->addChildren(*Transform26);

Transform13->addChildren(*Group25);

CTransform* Transform42 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape43 = (CShape *)(m_pScene.createNode("Shape"));
Shape43->setDEF("maskLensR");
CAppearance* Appearance44 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material45 = (CMaterial *)(m_pScene.createNode("Material"));
Material45->setDEF("plastic");
Material45->setDiffuseColor(new float[3]{0.941,0.973,1});
Material45->setTransparency(0.8);
Appearance44->setMaterial(*Material45);

Shape43->setAppearance(*Appearance44);

CIndexedFaceSet* IndexedFaceSet46 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet46->setCoordIndex(new int[9]{12,13,14,15,16,17,18,12,-1});
IndexedFaceSet46->setCreaseAngle(1.45);
IndexedFaceSet46->setSolid(False);
CCoordinate* Coordinate47 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate47->setPoint(new float[78]{0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0});
IndexedFaceSet46->setCoord(*Coordinate47);

Shape43->setGeometry(IndexedFaceSet46);

Transform42->addChildren(*Shape43);

Transform13->addChildren(*Transform42);

CTransform* Transform48 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape49 = (CShape *)(m_pScene.createNode("Shape"));
Shape49->setDEF("maskLensL");
CAppearance* Appearance50 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material51 = (CMaterial *)(m_pScene.createNode("Material"));
Material51->setUSE("plastic");
Appearance50->setMaterial(*Material51);

Shape49->setAppearance(*Appearance50);

CIndexedFaceSet* IndexedFaceSet52 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet52->setCoordIndex(new int[9]{19,20,21,22,23,24,25,19,-1});
IndexedFaceSet52->setCreaseAngle(1.45);
IndexedFaceSet52->setSolid(False);
CCoordinate* Coordinate53 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate53->setPoint(new float[78]{0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0});
IndexedFaceSet52->setCoord(*Coordinate53);

Shape49->setGeometry(IndexedFaceSet52);

Transform48->addChildren(*Shape49);

Transform13->addChildren(*Transform48);

CTransform* Transform54 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape55 = (CShape *)(m_pScene.createNode("Shape"));
Shape55->setDEF("nose");
CAppearance* Appearance56 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material57 = (CMaterial *)(m_pScene.createNode("Material"));
Material57->setDEF("plasticFit");
Material57->setDiffuseColor(new float[3]{0.678,1,0.184});
Material57->setTransparency(0.7);
Appearance56->setMaterial(*Material57);

Shape55->setAppearance(*Appearance56);

CIndexedFaceSet* IndexedFaceSet58 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet58->setCoordIndex(new int[25]{0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1});
IndexedFaceSet58->setCreaseAngle(1.45);
IndexedFaceSet58->setSolid(False);
CCoordinate* Coordinate59 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate59->setPoint(new float[114]{0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.04,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02});
IndexedFaceSet58->setCoord(*Coordinate59);

Shape55->setGeometry(IndexedFaceSet58);

Transform54->addChildren(*Shape55);

Transform13->addChildren(*Transform54);

CTransform* Transform60 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape61 = (CShape *)(m_pScene.createNode("Shape"));
Shape61->setDEF("faceFit");
CAppearance* Appearance62 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material63 = (CMaterial *)(m_pScene.createNode("Material"));
Material63->setUSE("plasticFit");
Appearance62->setMaterial(*Material63);

Shape61->setAppearance(*Appearance62);

CIndexedFaceSet* IndexedFaceSet64 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet64->setCoordIndex(new int[60]{1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1});
IndexedFaceSet64->setCreaseAngle(1.45);
IndexedFaceSet64->setSolid(False);
CCoordinate* Coordinate65 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate65->setPoint(new float[114]{0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02});
IndexedFaceSet64->setCoord(*Coordinate65);

Shape61->setGeometry(IndexedFaceSet64);

Transform60->addChildren(*Shape61);

Transform13->addChildren(*Transform60);

CTransform* Transform66 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape67 = (CShape *)(m_pScene.createNode("Shape"));
Shape67->setDEF("belt");
CAppearance* Appearance68 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material69 = (CMaterial *)(m_pScene.createNode("Material"));
Material69->setUSE("plastic");
Appearance68->setMaterial(*Material69);

Shape67->setAppearance(*Appearance68);

CIndexedFaceSet* IndexedFaceSet70 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet70->setCoordIndex(new int[36]{3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1});
IndexedFaceSet70->setCreaseAngle(1.45);
IndexedFaceSet70->setSolid(False);
CCoordinate* Coordinate71 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate71->setPoint(new float[144]{0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02,0.075,0.06,-0.135,0.075,0.09,-0.135,-0.075,0.06,-0.135,-0.075,0.09,-0.135,0.06,0.09,-0.165,0.06,0.06,-0.165,-0.06,0.09,-0.165,-0.06,0.06,-0.165,0,0.09,-0.2,0,0.06,-0.175});
IndexedFaceSet70->setCoord(*Coordinate71);

Shape67->setGeometry(IndexedFaceSet70);

Transform66->addChildren(*Shape67);

Transform13->addChildren(*Transform66);

group->addChildren(*Transform13);

X3D0->setScene(*Scene10);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
