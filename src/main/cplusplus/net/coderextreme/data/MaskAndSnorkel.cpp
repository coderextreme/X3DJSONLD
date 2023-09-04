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

X3D0->setHead(*head1);

CScene* Scene9 = new CScene();
CWorldInfo* WorldInfo10 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo10->setTitle("MaskAndSnorkel.x3d");
group->addChildren(*WorldInfo10);

CBackground* Background11 = (CBackground *)(m_pScene.createNode("Background"));
Background11->setSkyColor(new float[3]{0,0,0.9});
group->addChildren(*Background11);

CTransform* Transform12 = (CTransform *)(m_pScene.createNode("Transform"));
Transform12->setDEF("maskAndSnorkel");
CTransform* Transform13 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape14 = (CShape *)(m_pScene.createNode("Shape"));
Shape14->setDEF("maskFrame");
CAppearance* Appearance15 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material16 = (CMaterial *)(m_pScene.createNode("Material"));
Material16->setDEF("frameColor");
Material16->setDiffuseColor(new float[3]{0,0,0});
Appearance15->setMaterial(*Material16);

Shape14->setAppearance(*Appearance15);

CIndexedFaceSet* IndexedFaceSet17 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet17->setSolid(False);
IndexedFaceSet17->setCreaseAngle(1.45);
IndexedFaceSet17->setCoordIndex(new int[80]{0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1});
CCoordinate* Coordinate18 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate18->setPoint(new float[78]{0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0});
IndexedFaceSet17->setCoord(*Coordinate18);

Shape14->setGeometry(IndexedFaceSet17);

Transform13->addChild(*Shape14);

Transform12->addChildren(*Transform13);

CTransform* Transform19 = (CTransform *)(m_pScene.createNode("Transform"));
Transform19->setDEF("snorkelHoldRing");
Transform19->setTranslation(new float[3]{0.075,0.075,-0.02});
CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance21 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material22 = (CMaterial *)(m_pScene.createNode("Material"));
Material22->setUSE("frameColor");
Appearance21->setMaterial(*Material22);

Shape20->setAppearance(*Appearance21);

CCylinder* Cylinder23 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder23->setHeight(0.003);
Cylinder23->setRadius(0.015);
Shape20->setGeometry(Cylinder23);

Transform19->addChild(*Shape20);

Transform12->addChildren(*Transform19);

CGroup* Group24 = (CGroup *)(m_pScene.createNode("Group"));
Group24->setDEF("snorkel");
CTransform* Transform25 = (CTransform *)(m_pScene.createNode("Transform"));
Transform25->setTranslation(new float[3]{0,-0.02,0});
CTransform* Transform26 = (CTransform *)(m_pScene.createNode("Transform"));
Transform26->setTranslation(new float[3]{0.035,-0.07,-0.02});
Transform26->setScale(new float[3]{0.9,0.9,0.9});
CShape* Shape27 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance28 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material29 = (CMaterial *)(m_pScene.createNode("Material"));
Material29->setDEF("snorkelTube");
Material29->setDiffuseColor(new float[3]{0.678,1,0.184});
Material29->setTransparency(0.4);
Appearance28->setMaterial(*Material29);

Shape27->setAppearance(*Appearance28);

CExtrusion* Extrusion30 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion30->setCrossSection(new float[34]{0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013});
Extrusion30->setSpine(new float[15]{-0.01,-0.04,0,0,0,0,0.03,0.05,0,0.05,0.2,0,0.03,0.4,0.03});
Shape27->setGeometry(Extrusion30);

Transform26->addChild(*Shape27);

Transform25->addChildren(*Transform26);

CTransform* Transform31 = (CTransform *)(m_pScene.createNode("Transform"));
Transform31->setTranslation(new float[3]{0.01,-0.04,-0.02});
Transform31->setRotation(new float[4]{0,0,1,1.57});
Transform31->setScale(new float[3]{0.9,0.9,0.9});
CShape* Shape32 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance33 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material34 = (CMaterial *)(m_pScene.createNode("Material"));
Material34->setDEF("Mouthpiece");
Material34->setDiffuseColor(new float[3]{0.678,1,0.8});
Material34->setTransparency(0.4);
Appearance33->setMaterial(*Material34);

Shape32->setAppearance(*Appearance33);

CExtrusion* Extrusion35 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion35->setCrossSection(new float[34]{0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0,0.013});
Extrusion35->setSpine(new float[9]{-0.01,-0.03,0,0,0,0,0.02,0.01,0});
Shape32->setGeometry(Extrusion35);

Transform31->addChild(*Shape32);

Transform25->addChildren(*Transform31);

CTransform* Transform36 = (CTransform *)(m_pScene.createNode("Transform"));
Transform36->setTranslation(new float[3]{0.005,-0.01,-0.02});
Transform36->setRotation(new float[4]{0,0,1,-0.85});
Transform36->setScale(new float[3]{0.9,0.9,0.9});
CShape* Shape37 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance38 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material39 = (CMaterial *)(m_pScene.createNode("Material"));
Material39->setUSE("Mouthpiece");
Appearance38->setMaterial(*Material39);

Shape37->setAppearance(*Appearance38);

CExtrusion* Extrusion40 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion40->setCrossSection(new float[18]{0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0,0.013});
Extrusion40->setSpine(new float[18]{-0.02,-0.03,0,-0.01,-0.03,0,0,-0.0175,0,0,-0.0135,0,-0.01,0,0,-0.02,0,0});
Shape37->setGeometry(Extrusion40);

Transform36->addChild(*Shape37);

Transform25->addChildren(*Transform36);

Group24->addChildren(*Transform25);

Transform12->addChildren(*Group24);

CTransform* Transform41 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape42 = (CShape *)(m_pScene.createNode("Shape"));
Shape42->setDEF("maskLensR");
CAppearance* Appearance43 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material44 = (CMaterial *)(m_pScene.createNode("Material"));
Material44->setDEF("plastic");
Material44->setDiffuseColor(new float[3]{0.941,0.973,1});
Material44->setTransparency(0.8);
Appearance43->setMaterial(*Material44);

Shape42->setAppearance(*Appearance43);

CIndexedFaceSet* IndexedFaceSet45 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet45->setSolid(False);
IndexedFaceSet45->setCreaseAngle(1.45);
IndexedFaceSet45->setCoordIndex(new int[9]{12,13,14,15,16,17,18,12,-1});
CCoordinate* Coordinate46 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate46->setPoint(new float[78]{0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0});
IndexedFaceSet45->setCoord(*Coordinate46);

Shape42->setGeometry(IndexedFaceSet45);

Transform41->addChild(*Shape42);

Transform12->addChildren(*Transform41);

CTransform* Transform47 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape48 = (CShape *)(m_pScene.createNode("Shape"));
Shape48->setDEF("maskLensL");
CAppearance* Appearance49 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material50 = (CMaterial *)(m_pScene.createNode("Material"));
Material50->setUSE("plastic");
Appearance49->setMaterial(*Material50);

Shape48->setAppearance(*Appearance49);

CIndexedFaceSet* IndexedFaceSet51 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet51->setSolid(False);
IndexedFaceSet51->setCreaseAngle(1.45);
IndexedFaceSet51->setCoordIndex(new int[9]{19,20,21,22,23,24,25,19,-1});
CCoordinate* Coordinate52 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate52->setPoint(new float[78]{0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0});
IndexedFaceSet51->setCoord(*Coordinate52);

Shape48->setGeometry(IndexedFaceSet51);

Transform47->addChild(*Shape48);

Transform12->addChildren(*Transform47);

CTransform* Transform53 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape54 = (CShape *)(m_pScene.createNode("Shape"));
Shape54->setDEF("nose");
CAppearance* Appearance55 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material56 = (CMaterial *)(m_pScene.createNode("Material"));
Material56->setDEF("plasticFit");
Material56->setDiffuseColor(new float[3]{0.678,1,0.184});
Material56->setTransparency(0.7);
Appearance55->setMaterial(*Material56);

Shape54->setAppearance(*Appearance55);

CIndexedFaceSet* IndexedFaceSet57 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet57->setSolid(False);
IndexedFaceSet57->setCreaseAngle(1.45);
IndexedFaceSet57->setCoordIndex(new int[25]{0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1});
CCoordinate* Coordinate58 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate58->setPoint(new float[114]{0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.04,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02});
IndexedFaceSet57->setCoord(*Coordinate58);

Shape54->setGeometry(IndexedFaceSet57);

Transform53->addChild(*Shape54);

Transform12->addChildren(*Transform53);

CTransform* Transform59 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape60 = (CShape *)(m_pScene.createNode("Shape"));
Shape60->setDEF("faceFit");
CAppearance* Appearance61 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material62 = (CMaterial *)(m_pScene.createNode("Material"));
Material62->setUSE("plasticFit");
Appearance61->setMaterial(*Material62);

Shape60->setAppearance(*Appearance61);

CIndexedFaceSet* IndexedFaceSet63 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet63->setSolid(False);
IndexedFaceSet63->setCreaseAngle(1.45);
IndexedFaceSet63->setCoordIndex(new int[60]{1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1});
CCoordinate* Coordinate64 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate64->setPoint(new float[114]{0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02});
IndexedFaceSet63->setCoord(*Coordinate64);

Shape60->setGeometry(IndexedFaceSet63);

Transform59->addChild(*Shape60);

Transform12->addChildren(*Transform59);

CTransform* Transform65 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape66 = (CShape *)(m_pScene.createNode("Shape"));
Shape66->setDEF("belt");
CAppearance* Appearance67 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material68 = (CMaterial *)(m_pScene.createNode("Material"));
Material68->setUSE("plastic");
Appearance67->setMaterial(*Material68);

Shape66->setAppearance(*Appearance67);

CIndexedFaceSet* IndexedFaceSet69 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet69->setSolid(False);
IndexedFaceSet69->setCreaseAngle(1.45);
IndexedFaceSet69->setCoordIndex(new int[36]{3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1});
CCoordinate* Coordinate70 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate70->setPoint(new float[144]{0,0.08,0,0.02,0.05,0,0.05,0.05,0,0.06,0.06,0,0.06,0.09,0,0.05,0.1,0,0,0.1,0,-0.05,0.1,0,-0.06,0.09,0,-0.06,0.06,0,-0.05,0.05,0,-0.02,0.05,0,0.005,0.08,0,0.02,0.055,0,0.05,0.055,0,0.055,0.06,0,0.055,0.09,0,0.045,0.095,0,0.005,0.095,0,-0.005,0.08,0,-0.02,0.055,0,-0.05,0.055,0,-0.055,0.06,0,-0.055,0.09,0,-0.045,0.095,0,-0.005,0.095,0,0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02,0.075,0.06,-0.135,0.075,0.09,-0.135,-0.075,0.06,-0.135,-0.075,0.09,-0.135,0.06,0.09,-0.165,0.06,0.06,-0.165,-0.06,0.09,-0.165,-0.06,0.06,-0.165,0,0.09,-0.2,0,0.06,-0.175});
IndexedFaceSet69->setCoord(*Coordinate70);

Shape66->setGeometry(IndexedFaceSet69);

Transform65->addChild(*Shape66);

Transform12->addChildren(*Transform65);

group->addChildren(*Transform12);

X3D0->setScene(*Scene9);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
