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

Ccomponent* component3 = new Ccomponent();
component3->setName("Text");
component3->setLevel(1);
head1->addComponent(*component3);

Ccomponent* component4 = new Ccomponent();
component4->setName("Core");
component4->setLevel(1);
head1->addComponent(*component4);

Ccomponent* component5 = new Ccomponent();
component5->setName("Grouping");
component5->setLevel(1);
head1->addComponent(*component5);

Ccomponent* component6 = new Ccomponent();
component6->setName("Shape");
component6->setLevel(1);
head1->addComponent(*component6);

Ccomponent* component7 = new Ccomponent();
component7->setName("Rendering");
component7->setLevel(1);
head1->addComponent(*component7);

Cmeta* meta8 = new Cmeta();
meta8->setName("Joe");
meta8->setContent("20090328 20130628 http://www.hypermultimedia.com/acontents.htm#X3DHANIM");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("converter");
meta9->setContent("x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("converted");
meta10->setContent("Wed, 12 Jul 2023 08:05:49 GMT");
head1->addMeta(*meta10);

X3D0->setHead(*head1);

CScene* Scene11 = new CScene();
CWorldInfo* WorldInfo12 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo12->setDEF("JoeTest_WorldInfo");
WorldInfo12->setTitle("JoeLevel2LOA3SSPYRWRJKHud.x3dv 20130723 20230108");
group->addChildren(*WorldInfo12);

CNavigationInfo* NavigationInfo13 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo13->setSpeed(0.75);
NavigationInfo13->setHeadlight(False);
group->addChildren(*NavigationInfo13);

CGroup* Group14 = (CGroup *)(m_pScene.createNode("Group"));
Group14->setDEF("IllustrationGeometry");
CTransform* Transform15 = (CTransform *)(m_pScene.createNode("Transform"));
Transform15->setTranslation(new float[3]{0,2.1,0});
Transform15->setScale(new float[3]{2,2,2});
CShape* Shape16 = (CShape *)(m_pScene.createNode("Shape"));
Shape16->setDEF("jointbox");
CAppearance* Appearance17 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material18 = (CMaterial *)(m_pScene.createNode("Material"));
Material18->setAmbientIntensity(0.5);
Material18->setDiffuseColor(new float[3]{1,1,0});
Material18->setSpecularColor(new float[3]{1,1,0});
Material18->setShininess(0.7);
Appearance17->setMaterial(*Material18);

Shape16->setAppearance(*Appearance17);

CIndexedFaceSet* IndexedFaceSet19 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet19->setCreaseAngle(0.1);
IndexedFaceSet19->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
CCoordinate* Coordinate20 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate20->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
IndexedFaceSet19->setCoord(*Coordinate20);

Shape16->setGeometry(IndexedFaceSet19);

Transform15->addChildren(*Shape16);

Group14->addChildren(*Transform15);

CTransform* Transform21 = (CTransform *)(m_pScene.createNode("Transform"));
Transform21->setTranslation(new float[3]{0,2.2,0});
Transform21->setScale(new float[3]{2,2,2});
CShape* Shape22 = (CShape *)(m_pScene.createNode("Shape"));
Shape22->setDEF("sitebox");
CAppearance* Appearance23 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material24 = (CMaterial *)(m_pScene.createNode("Material"));
Material24->setAmbientIntensity(0.5);
Material24->setDiffuseColor(new float[3]{1,0,0});
Material24->setSpecularColor(new float[3]{1,0,0});
Material24->setShininess(0.7);
Appearance23->setMaterial(*Material24);

Shape22->setAppearance(*Appearance23);

CIndexedFaceSet* IndexedFaceSet25 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet25->setCreaseAngle(0.1);
IndexedFaceSet25->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
CCoordinate* Coordinate26 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate26->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0});
IndexedFaceSet25->setCoord(*Coordinate26);

Shape22->setGeometry(IndexedFaceSet25);

Transform21->addChildren(*Shape22);

Group14->addChildren(*Transform21);

CTransform* Transform27 = (CTransform *)(m_pScene.createNode("Transform"));
Transform27->setTranslation(new float[3]{0,2.3,0});
Transform27->setScale(new float[3]{2,2,2});
CShape* Shape28 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance29 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance29->setDEF("SegmentLine");
CMaterial* Material30 = (CMaterial *)(m_pScene.createNode("Material"));
Material30->setDiffuseColor(new float[3]{0,1,0});
Material30->setSpecularColor(new float[3]{0,1,0});
Material30->setEmissiveColor(new float[3]{0,1,0});
Appearance29->setMaterial(*Material30);

Shape28->setAppearance(*Appearance29);

CIndexedLineSet* IndexedLineSet31 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet31->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate32 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate32->setPoint(new float[6]{0,0,0,0.2,0,0});
IndexedLineSet31->setCoord(*Coordinate32);

Shape28->setGeometry(IndexedLineSet31);

Transform27->addChildren(*Shape28);

Group14->addChildren(*Transform27);

CTransform* Transform33 = (CTransform *)(m_pScene.createNode("Transform"));
Transform33->setTranslation(new float[3]{0,2.4,0});
Transform33->setScale(new float[3]{2,2,2});
CShape* Shape34 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance35 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance35->setDEF("SiteParentLine");
CMaterial* Material36 = (CMaterial *)(m_pScene.createNode("Material"));
Material36->setDiffuseColor(new float[3]{1,0,0});
Material36->setSpecularColor(new float[3]{1,0,0});
Material36->setEmissiveColor(new float[3]{1,0,0});
Appearance35->setMaterial(*Material36);

Shape34->setAppearance(*Appearance35);

CIndexedLineSet* IndexedLineSet37 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet37->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate38 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate38->setPoint(new float[6]{0,0,0,0.2,0,0});
IndexedLineSet37->setCoord(*Coordinate38);

Shape34->setGeometry(IndexedLineSet37);

Transform33->addChildren(*Shape34);

Group14->addChildren(*Transform33);

group->addChildren(*Group14);

CGroup* Group39 = (CGroup *)(m_pScene.createNode("Group"));
Group39->setDEF("SpecHumanoid");
CHAnimHumanoid* HAnimHumanoid40 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid40->setDEF("humanoid");
HAnimHumanoid40->setVersion("2.0");
CHAnimJoint* HAnimJoint41 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint41->setName("HumanoidRoot");
HAnimJoint41->setDEF("hanim_HumanoidRoot");
HAnimJoint41->setCenter(new float[3]{0,0.824,0.0277});
HAnimJoint41->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint41->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment42 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment42->setName("sacrum");
HAnimSegment42->setDEF("hanim_sacrum");
CTransform* Transform43 = (CTransform *)(m_pScene.createNode("Transform"));
Transform43->setTranslation(new float[3]{0,0.824,0.0277});
CShape* Shape44 = (CShape *)(m_pScene.createNode("Shape"));
Shape44->setUSE("jointbox");
Transform43->addChildren(*Shape44);

HAnimSegment42->addChildren(*Transform43);

CShape* Shape45 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance46 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance46->setUSE("SegmentLine");
Shape45->setAppearance(*Appearance46);

CIndexedLineSet* IndexedLineSet47 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet47->setCoordIndex(new int[6]{0,1,-1,0,2,-1});
CCoordinate* Coordinate48 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate48->setPoint(new float[9]{0,0.824,0.0277,0,0.9149,0.0016,0.0028,1.0568,-0.0776});
IndexedLineSet47->setCoord(*Coordinate48);

Shape45->setGeometry(IndexedLineSet47);

HAnimSegment42->addChildren(*Shape45);

HAnimJoint41->addChildren(*HAnimSegment42);

CHAnimJoint* HAnimJoint49 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint49->setName("sacroiliac");
HAnimJoint49->setDEF("hanim_sacroiliac");
HAnimJoint49->setCenter(new float[3]{0,0.9149,0.0016});
HAnimJoint49->setSkinCoordIndex(new int[13]{17,19,20,21,22,23,26,27,73,82,89,91,93});
HAnimJoint49->setSkinCoordWeight(new float[13]{1,1,1,1,1,1,1,1,1,1,0.35,0.35,1}, 13);
HAnimJoint49->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint49->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment50 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment50->setName("pelvis");
HAnimSegment50->setDEF("hanim_pelvis");
CTransform* Transform51 = (CTransform *)(m_pScene.createNode("Transform"));
Transform51->setTranslation(new float[3]{0,0.9149,0.0016});
CShape* Shape52 = (CShape *)(m_pScene.createNode("Shape"));
Shape52->setUSE("jointbox");
Transform51->addChildren(*Shape52);

HAnimSegment50->addChildren(*Transform51);

CShape* Shape53 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance54 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance54->setUSE("SegmentLine");
Shape53->setAppearance(*Appearance54);

CIndexedLineSet* IndexedLineSet55 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet55->setCoordIndex(new int[6]{0,1,-1,0,2,-1});
CCoordinate* Coordinate56 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate56->setPoint(new float[9]{0,0.9149,0.0016,0.0961,0.9124,-0.0001,-0.095,0.9171,0.0029});
IndexedLineSet55->setCoord(*Coordinate56);

Shape53->setGeometry(IndexedLineSet55);

HAnimSegment50->addChildren(*Shape53);

CShape* Shape57 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance58 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance58->setUSE("SiteParentLine");
Shape57->setAppearance(*Appearance58);

CIndexedLineSet* IndexedLineSet59 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet59->setCoordIndex(new int[27]{0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1,0,6,-1,0,7,-1,0,8,-1,0,9,-1});
CCoordinate* Coordinate60 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate60->setPoint(new float[30]{0,0.9149,0.0016,-0.1525,1.0628,0.0035,-0.1689,0.8419,0.0352,0.1612,1.0537,0.0008,0.1677,0.8336,0.0303,-0.0887,1.0021,0.1112,0.0925,0.9983,0.1052,-0.0716,1.019,-0.1138,0.0774,1.019,-0.1151,0.0034,0.8266,0.0257});
IndexedLineSet59->setCoord(*Coordinate60);

Shape57->setGeometry(IndexedLineSet59);

HAnimSegment50->addChildren(*Shape57);

CHAnimSite* HAnimSite61 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite61->setName("r_iliocristale");
HAnimSite61->setDEF("hanim_r_iliocristale");
HAnimSite61->setTranslation(new float[3]{-0.1525,1.0628,0.0035});
CShape* Shape62 = (CShape *)(m_pScene.createNode("Shape"));
Shape62->setUSE("sitebox");
HAnimSite61->addChildren(*Shape62);

HAnimSegment50->addChildren(*HAnimSite61);

CHAnimSite* HAnimSite63 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite63->setName("r_trochanterion");
HAnimSite63->setDEF("hanim_r_trochanterion");
HAnimSite63->setTranslation(new float[3]{-0.1689,0.8419,0.0352});
CShape* Shape64 = (CShape *)(m_pScene.createNode("Shape"));
Shape64->setUSE("sitebox");
HAnimSite63->addChildren(*Shape64);

HAnimSegment50->addChildren(*HAnimSite63);

CHAnimSite* HAnimSite65 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite65->setName("l_iliocristale");
HAnimSite65->setDEF("hanim_l_iliocristale");
HAnimSite65->setTranslation(new float[3]{0.1612,1.0537,0.0008});
CShape* Shape66 = (CShape *)(m_pScene.createNode("Shape"));
Shape66->setUSE("sitebox");
HAnimSite65->addChildren(*Shape66);

HAnimSegment50->addChildren(*HAnimSite65);

CHAnimSite* HAnimSite67 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite67->setName("l_trochanterion");
HAnimSite67->setDEF("hanim_l_trochanterion");
HAnimSite67->setTranslation(new float[3]{0.1677,0.8336,0.0303});
CShape* Shape68 = (CShape *)(m_pScene.createNode("Shape"));
Shape68->setUSE("sitebox");
HAnimSite67->addChildren(*Shape68);

HAnimSegment50->addChildren(*HAnimSite67);

CHAnimSite* HAnimSite69 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite69->setName("r_asis");
HAnimSite69->setDEF("hanim_r_asis");
HAnimSite69->setTranslation(new float[3]{-0.0887,1.0021,0.1112});
CShape* Shape70 = (CShape *)(m_pScene.createNode("Shape"));
Shape70->setUSE("sitebox");
HAnimSite69->addChildren(*Shape70);

HAnimSegment50->addChildren(*HAnimSite69);

CHAnimSite* HAnimSite71 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite71->setName("l_asis");
HAnimSite71->setDEF("hanim_l_asis");
HAnimSite71->setTranslation(new float[3]{0.0925,0.9983,0.1052});
CShape* Shape72 = (CShape *)(m_pScene.createNode("Shape"));
Shape72->setUSE("sitebox");
HAnimSite71->addChildren(*Shape72);

HAnimSegment50->addChildren(*HAnimSite71);

CHAnimSite* HAnimSite73 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite73->setName("r_psis");
HAnimSite73->setDEF("hanim_r_psis");
HAnimSite73->setTranslation(new float[3]{-0.0716,1.019,-0.1138});
CShape* Shape74 = (CShape *)(m_pScene.createNode("Shape"));
Shape74->setUSE("sitebox");
HAnimSite73->addChildren(*Shape74);

HAnimSegment50->addChildren(*HAnimSite73);

CHAnimSite* HAnimSite75 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite75->setName("l_psis");
HAnimSite75->setDEF("hanim_l_psis");
HAnimSite75->setTranslation(new float[3]{0.0774,1.019,-0.1151});
CShape* Shape76 = (CShape *)(m_pScene.createNode("Shape"));
Shape76->setUSE("sitebox");
HAnimSite75->addChildren(*Shape76);

HAnimSegment50->addChildren(*HAnimSite75);

CHAnimSite* HAnimSite77 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite77->setName("crotch");
HAnimSite77->setDEF("hanim_crotch");
HAnimSite77->setTranslation(new float[3]{0.0034,0.8266,0.0257});
CShape* Shape78 = (CShape *)(m_pScene.createNode("Shape"));
Shape78->setUSE("sitebox");
HAnimSite77->addChildren(*Shape78);

HAnimSegment50->addChildren(*HAnimSite77);

HAnimJoint49->addChildren(*HAnimSegment50);

CHAnimJoint* HAnimJoint79 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint79->setName("l_hip");
HAnimJoint79->setDEF("hanim_l_hip");
HAnimJoint79->setCenter(new float[3]{0.0961,0.9124,-0.0001});
HAnimJoint79->setSkinCoordIndex(new int[6]{89,90,94,95,96,97});
HAnimJoint79->setSkinCoordWeight(new float[6]{0.65,1,1,1,1,1}, 6);
HAnimJoint79->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint79->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment80 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment80->setName("l_thigh");
HAnimSegment80->setDEF("hanim_l_thigh");
CTransform* Transform81 = (CTransform *)(m_pScene.createNode("Transform"));
Transform81->setTranslation(new float[3]{0.0961,0.9124,-0.0001});
CShape* Shape82 = (CShape *)(m_pScene.createNode("Shape"));
Shape82->setUSE("jointbox");
Transform81->addChildren(*Shape82);

HAnimSegment80->addChildren(*Transform81);

CShape* Shape83 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance84 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance84->setUSE("SegmentLine");
Shape83->setAppearance(*Appearance84);

CIndexedLineSet* IndexedLineSet85 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet85->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate86 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate86->setPoint(new float[6]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308});
IndexedLineSet85->setCoord(*Coordinate86);

Shape83->setGeometry(IndexedLineSet85);

HAnimSegment80->addChildren(*Shape83);

CShape* Shape87 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance88 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance88->setUSE("SiteParentLine");
Shape87->setAppearance(*Appearance88);

CIndexedLineSet* IndexedLineSet89 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet89->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
CCoordinate* Coordinate90 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate90->setPoint(new float[12]{0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309,0.1598,0.4967,0.0297,0.0398,0.4946,0.0303});
IndexedLineSet89->setCoord(*Coordinate90);

Shape87->setGeometry(IndexedLineSet89);

HAnimSegment80->addChildren(*Shape87);

CHAnimSite* HAnimSite91 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite91->setName("l_knee_crease");
HAnimSite91->setDEF("hanim_l_knee_crease");
HAnimSite91->setTranslation(new float[3]{0.0993,0.4881,-0.0309});
CShape* Shape92 = (CShape *)(m_pScene.createNode("Shape"));
Shape92->setUSE("sitebox");
HAnimSite91->addChildren(*Shape92);

HAnimSegment80->addChildren(*HAnimSite91);

CHAnimSite* HAnimSite93 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite93->setName("l_femoral_lateral_epicn");
HAnimSite93->setDEF("hanim_l_femoral_lateral_epicn");
HAnimSite93->setTranslation(new float[3]{0.1598,0.4967,0.0297});
CShape* Shape94 = (CShape *)(m_pScene.createNode("Shape"));
Shape94->setUSE("sitebox");
HAnimSite93->addChildren(*Shape94);

HAnimSegment80->addChildren(*HAnimSite93);

CHAnimSite* HAnimSite95 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite95->setName("l_femoral_medial_epicn");
HAnimSite95->setDEF("hanim_l_femoral_medial_epicn");
HAnimSite95->setTranslation(new float[3]{0.0398,0.4946,0.0303});
CShape* Shape96 = (CShape *)(m_pScene.createNode("Shape"));
Shape96->setUSE("sitebox");
HAnimSite95->addChildren(*Shape96);

HAnimSegment80->addChildren(*HAnimSite95);

HAnimJoint79->addChildren(*HAnimSegment80);

CHAnimJoint* HAnimJoint97 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint97->setName("l_knee");
HAnimJoint97->setDEF("hanim_l_knee");
HAnimJoint97->setCenter(new float[3]{0.104,0.4867,0.0308});
HAnimJoint97->setSkinCoordIndex(new int[8]{334,335,336,337,338,339,340,341});
HAnimJoint97->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint97->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint97->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment98 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment98->setName("l_calf");
HAnimSegment98->setDEF("hanim_l_calf");
CTransform* Transform99 = (CTransform *)(m_pScene.createNode("Transform"));
Transform99->setTranslation(new float[3]{0.104,0.4867,0.0308});
CShape* Shape100 = (CShape *)(m_pScene.createNode("Shape"));
Shape100->setUSE("jointbox");
Transform99->addChildren(*Shape100);

HAnimSegment98->addChildren(*Transform99);

CShape* Shape101 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance102 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance102->setUSE("SegmentLine");
Shape101->setAppearance(*Appearance102);

CIndexedLineSet* IndexedLineSet103 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet103->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate104 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate104->setPoint(new float[6]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736});
IndexedLineSet103->setCoord(*Coordinate104);

Shape101->setGeometry(IndexedLineSet103);

HAnimSegment98->addChildren(*Shape101);

HAnimJoint97->addChildren(*HAnimSegment98);

CHAnimJoint* HAnimJoint105 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint105->setName("l_ankle");
HAnimJoint105->setDEF("hanim_l_ankle");
HAnimJoint105->setCenter(new float[3]{0.1101,0.0656,-0.0736});
HAnimJoint105->setSkinCoordIndex(new int[4]{342,343,344,345});
HAnimJoint105->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint105->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint105->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment106 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment106->setName("l_hindfoot");
HAnimSegment106->setDEF("hanim_l_hindfoot");
CTransform* Transform107 = (CTransform *)(m_pScene.createNode("Transform"));
Transform107->setTranslation(new float[3]{0.1101,0.0656,-0.0736});
CShape* Shape108 = (CShape *)(m_pScene.createNode("Shape"));
Shape108->setUSE("jointbox");
Transform107->addChildren(*Shape108);

HAnimSegment106->addChildren(*Transform107);

CShape* Shape109 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance110 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance110->setUSE("SegmentLine");
Shape109->setAppearance(*Appearance110);

CIndexedLineSet* IndexedLineSet111 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet111->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate112 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate112->setPoint(new float[6]{0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368});
IndexedLineSet111->setCoord(*Coordinate112);

Shape109->setGeometry(IndexedLineSet111);

HAnimSegment106->addChildren(*Shape109);

CShape* Shape113 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance114 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance114->setUSE("SiteParentLine");
Shape113->setAppearance(*Appearance114);

CIndexedLineSet* IndexedLineSet115 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet115->setCoordIndex(new int[12]{0,1,-1,0,2,-1,0,3,-1,0,4,-1});
CCoordinate* Coordinate116 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate116->setPoint(new float[15]{0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032,0.089,0.0716,-0.0881,0.089,0.0575,-0.0943,0.0974,0.0259,-0.1171});
IndexedLineSet115->setCoord(*Coordinate116);

Shape113->setGeometry(IndexedLineSet115);

HAnimSegment106->addChildren(*Shape113);

CHAnimSite* HAnimSite117 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite117->setName("l_lateral_malleolus");
HAnimSite117->setDEF("hanim_l_lateral_malleolus");
HAnimSite117->setTranslation(new float[3]{0.1308,0.0597,-0.1032});
CShape* Shape118 = (CShape *)(m_pScene.createNode("Shape"));
Shape118->setUSE("sitebox");
HAnimSite117->addChildren(*Shape118);

HAnimSegment106->addChildren(*HAnimSite117);

CHAnimSite* HAnimSite119 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite119->setName("l_medial_malleolus");
HAnimSite119->setDEF("hanim_l_medial_malleolus");
HAnimSite119->setTranslation(new float[3]{0.089,0.0716,-0.0881});
CShape* Shape120 = (CShape *)(m_pScene.createNode("Shape"));
Shape120->setUSE("sitebox");
HAnimSite119->addChildren(*Shape120);

HAnimSegment106->addChildren(*HAnimSite119);

CHAnimSite* HAnimSite121 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite121->setName("l_sphyrion");
HAnimSite121->setDEF("hanim_l_sphyrion");
HAnimSite121->setTranslation(new float[3]{0.089,0.0575,-0.0943});
CShape* Shape122 = (CShape *)(m_pScene.createNode("Shape"));
Shape122->setUSE("sitebox");
HAnimSite121->addChildren(*Shape122);

HAnimSegment106->addChildren(*HAnimSite121);

CHAnimSite* HAnimSite123 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite123->setName("l_calcaneous_post");
HAnimSite123->setDEF("hanim_l_calcaneous_post");
HAnimSite123->setTranslation(new float[3]{0.0974,0.0259,-0.1171});
CShape* Shape124 = (CShape *)(m_pScene.createNode("Shape"));
Shape124->setUSE("sitebox");
HAnimSite123->addChildren(*Shape124);

HAnimSegment106->addChildren(*HAnimSite123);

HAnimJoint105->addChildren(*HAnimSegment106);

CHAnimJoint* HAnimJoint125 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint125->setName("l_subtalar");
HAnimJoint125->setDEF("hanim_l_subtalar");
HAnimJoint125->setCenter(new float[3]{0.1086,0.0001,-0.0368});
HAnimJoint125->setSkinCoordIndex(new int[4]{346,347,348,71});
HAnimJoint125->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint125->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint125->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment126 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment126->setName("l_midproximal");
HAnimSegment126->setDEF("hanim_l_l_midproximal");
CTransform* Transform127 = (CTransform *)(m_pScene.createNode("Transform"));
Transform127->setTranslation(new float[3]{0.1086,0.0001,-0.0368});
CShape* Shape128 = (CShape *)(m_pScene.createNode("Shape"));
Shape128->setUSE("jointbox");
Transform127->addChildren(*Shape128);

HAnimSegment126->addChildren(*Transform127);

CShape* Shape129 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance130 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance130->setUSE("SegmentLine");
Shape129->setAppearance(*Appearance130);

CIndexedLineSet* IndexedLineSet131 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet131->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate132 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate132->setPoint(new float[6]{0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368});
IndexedLineSet131->setCoord(*Coordinate132);

Shape129->setGeometry(IndexedLineSet131);

HAnimSegment126->addChildren(*Shape129);

HAnimJoint125->addChildren(*HAnimSegment126);

CHAnimJoint* HAnimJoint133 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint133->setName("l_midtarsal");
HAnimJoint133->setDEF("hanim_l_midtarsal");
HAnimJoint133->setCenter(new float[3]{0.1086,0.0001,0.0368});
HAnimJoint133->setSkinCoordIndex(new int[4]{349,350,351,352});
HAnimJoint133->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint133->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint133->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment134 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment134->setName("l_middistal");
HAnimSegment134->setDEF("hanim_l_middistal");
CTransform* Transform135 = (CTransform *)(m_pScene.createNode("Transform"));
Transform135->setTranslation(new float[3]{0.1086,0.0001,0.0368});
CShape* Shape136 = (CShape *)(m_pScene.createNode("Shape"));
Shape136->setUSE("jointbox");
Transform135->addChildren(*Shape136);

HAnimSegment134->addChildren(*Transform135);

CShape* Shape137 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance138 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance138->setUSE("SegmentLine");
Shape137->setAppearance(*Appearance138);

CIndexedLineSet* IndexedLineSet139 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet139->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate140 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate140->setPoint(new float[6]{0.1086,0.0001,0.0368,0.1086,0,0.0762});
IndexedLineSet139->setCoord(*Coordinate140);

Shape137->setGeometry(IndexedLineSet139);

HAnimSegment134->addChildren(*Shape137);

CShape* Shape141 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance142 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance142->setUSE("SiteParentLine");
Shape141->setAppearance(*Appearance142);

CIndexedLineSet* IndexedLineSet143 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet143->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate144 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate144->setPoint(new float[6]{0.1086,0.0001,-0.0368,0.0816,0.0232,0.0106});
IndexedLineSet143->setCoord(*Coordinate144);

Shape141->setGeometry(IndexedLineSet143);

HAnimSegment134->addChildren(*Shape141);

CHAnimSite* HAnimSite145 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite145->setName("l_metatarsal_pha1");
HAnimSite145->setDEF("hanim_l_metatarsal_pha1");
HAnimSite145->setTranslation(new float[3]{0.0816,0.0232,0.0106});
CShape* Shape146 = (CShape *)(m_pScene.createNode("Shape"));
Shape146->setUSE("sitebox");
HAnimSite145->addChildren(*Shape146);

HAnimSegment134->addChildren(*HAnimSite145);

HAnimJoint133->addChildren(*HAnimSegment134);

CHAnimJoint* HAnimJoint147 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint147->setName("l_metatarsal");
HAnimJoint147->setDEF("hanim_l_metatarsal");
HAnimJoint147->setCenter(new float[3]{0.1086,0,0.0762});
HAnimJoint147->setSkinCoordIndex(new int[9]{353,354,355,356,357,358,359,360,361});
HAnimJoint147->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint147->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint147->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment148 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment148->setName("l_forefoot");
HAnimSegment148->setDEF("hanim_l_forefoot");
CTransform* Transform149 = (CTransform *)(m_pScene.createNode("Transform"));
Transform149->setTranslation(new float[3]{0.1086,0,0.0762});
CShape* Shape150 = (CShape *)(m_pScene.createNode("Shape"));
Shape150->setUSE("jointbox");
Transform149->addChildren(*Shape150);

HAnimSegment148->addChildren(*Transform149);

CShape* Shape151 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance152 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance152->setUSE("SegmentLine");
Shape151->setAppearance(*Appearance152);

CIndexedLineSet* IndexedLineSet153 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet153->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate154 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate154->setPoint(new float[6]{0.1086,0,0.0762,0.1354,0.0016,0.1476});
IndexedLineSet153->setCoord(*Coordinate154);

Shape151->setGeometry(IndexedLineSet153);

HAnimSegment148->addChildren(*Shape151);

CShape* Shape155 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance156 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance156->setUSE("SiteParentLine");
Shape155->setAppearance(*Appearance156);

CIndexedLineSet* IndexedLineSet157 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet157->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
CCoordinate* Coordinate158 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate158->setPoint(new float[12]{0.1086,0,0.0762,0.1354,0.0016,0.1476,0.1825,0.007,0.0928,0.1195,0.0079,0.1433});
IndexedLineSet157->setCoord(*Coordinate158);

Shape155->setGeometry(IndexedLineSet157);

HAnimSegment148->addChildren(*Shape155);

CHAnimSite* HAnimSite159 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite159->setName("l_forefoot_tip");
HAnimSite159->setDEF("hanim_l_forefoot_tip");
HAnimSite159->setTranslation(new float[3]{0.1354,0.0016,0.1476});
CShape* Shape160 = (CShape *)(m_pScene.createNode("Shape"));
Shape160->setUSE("sitebox");
HAnimSite159->addChildren(*Shape160);

HAnimSegment148->addChildren(*HAnimSite159);

CHAnimSite* HAnimSite161 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite161->setName("l_metatarsal_pha5");
HAnimSite161->setDEF("hanim_l_metatarsal_pha5");
HAnimSite161->setTranslation(new float[3]{0.1825,0.007,0.0928});
CShape* Shape162 = (CShape *)(m_pScene.createNode("Shape"));
Shape162->setUSE("sitebox");
HAnimSite161->addChildren(*Shape162);

HAnimSegment148->addChildren(*HAnimSite161);

CHAnimSite* HAnimSite163 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite163->setName("l_digit2");
HAnimSite163->setDEF("hanim_l_digit2");
HAnimSite163->setTranslation(new float[3]{0.1195,0.0079,0.1433});
CShape* Shape164 = (CShape *)(m_pScene.createNode("Shape"));
Shape164->setUSE("sitebox");
HAnimSite163->addChildren(*Shape164);

HAnimSegment148->addChildren(*HAnimSite163);

HAnimJoint147->addChildren(*HAnimSegment148);

HAnimJoint133->addChildren(*HAnimJoint147);

HAnimJoint125->addChildren(*HAnimJoint133);

HAnimJoint105->addChildren(*HAnimJoint125);

HAnimJoint97->addChildren(*HAnimJoint105);

HAnimJoint79->addChildren(*HAnimJoint97);

HAnimJoint49->addChildren(*HAnimJoint79);

CHAnimJoint* HAnimJoint165 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint165->setName("r_hip");
HAnimJoint165->setDEF("hanim_r_hip");
HAnimJoint165->setCenter(new float[3]{-0.095,0.9171,0.0029});
HAnimJoint165->setSkinCoordIndex(new int[8]{91,92,98,99,100,101,362,363});
HAnimJoint165->setSkinCoordWeight(new float[8]{0.65,1,0.8,1,1,1,0.4,0.8}, 8);
HAnimJoint165->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint165->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment166 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment166->setName("r_thigh");
HAnimSegment166->setDEF("hanim_r_thigh");
CTransform* Transform167 = (CTransform *)(m_pScene.createNode("Transform"));
Transform167->setTranslation(new float[3]{-0.095,0.9171,0.0029});
CShape* Shape168 = (CShape *)(m_pScene.createNode("Shape"));
Shape168->setUSE("jointbox");
Transform167->addChildren(*Shape168);

HAnimSegment166->addChildren(*Transform167);

CShape* Shape169 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance170 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance170->setUSE("SegmentLine");
Shape169->setAppearance(*Appearance170);

CIndexedLineSet* IndexedLineSet171 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet171->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate172 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate172->setPoint(new float[6]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318});
IndexedLineSet171->setCoord(*Coordinate172);

Shape169->setGeometry(IndexedLineSet171);

HAnimSegment166->addChildren(*Shape169);

CShape* Shape173 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance174 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance174->setUSE("SiteParentLine");
Shape173->setAppearance(*Appearance174);

CIndexedLineSet* IndexedLineSet175 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet175->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
CCoordinate* Coordinate176 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate176->setPoint(new float[12]{-0.095,0.9171,0.0029,-0.0825,0.4932,-0.0326,-0.1421,0.4992,0.031,-0.0221,0.5014,0.0289});
IndexedLineSet175->setCoord(*Coordinate176);

Shape173->setGeometry(IndexedLineSet175);

HAnimSegment166->addChildren(*Shape173);

CHAnimSite* HAnimSite177 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite177->setName("r_knee_crease");
HAnimSite177->setDEF("hanim_r_knee_crease");
HAnimSite177->setTranslation(new float[3]{-0.0825,0.4932,-0.0326});
CShape* Shape178 = (CShape *)(m_pScene.createNode("Shape"));
Shape178->setUSE("sitebox");
HAnimSite177->addChildren(*Shape178);

HAnimSegment166->addChildren(*HAnimSite177);

CHAnimSite* HAnimSite179 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite179->setName("r_femoral_lateral_epicn");
HAnimSite179->setDEF("hanim_r_femoral_lateral_epicn");
HAnimSite179->setTranslation(new float[3]{-0.1421,0.4992,0.031});
CShape* Shape180 = (CShape *)(m_pScene.createNode("Shape"));
Shape180->setUSE("sitebox");
HAnimSite179->addChildren(*Shape180);

HAnimSegment166->addChildren(*HAnimSite179);

CHAnimSite* HAnimSite181 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite181->setName("r_femoral_medial_epicn");
HAnimSite181->setDEF("hanim_r_femoral_medial_epicn");
HAnimSite181->setTranslation(new float[3]{-0.0221,0.5014,0.0289});
CShape* Shape182 = (CShape *)(m_pScene.createNode("Shape"));
Shape182->setUSE("sitebox");
HAnimSite181->addChildren(*Shape182);

HAnimSegment166->addChildren(*HAnimSite181);

HAnimJoint165->addChildren(*HAnimSegment166);

CHAnimJoint* HAnimJoint183 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint183->setName("r_knee");
HAnimJoint183->setDEF("hanim_r_knee");
HAnimJoint183->setCenter(new float[3]{-0.0867,0.4913,0.0318});
HAnimJoint183->setSkinCoordIndex(new int[9]{362,363,364,365,366,367,368,369,98});
HAnimJoint183->setSkinCoordWeight(new float[9]{0.6,0.2,1,1,1,1,1,1,0.2}, 9);
HAnimJoint183->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint183->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment184 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment184->setName("r_calf");
HAnimSegment184->setDEF("hanim_r_calf");
CTransform* Transform185 = (CTransform *)(m_pScene.createNode("Transform"));
Transform185->setTranslation(new float[3]{-0.0867,0.4913,0.0318});
CShape* Shape186 = (CShape *)(m_pScene.createNode("Shape"));
Shape186->setUSE("jointbox");
Transform185->addChildren(*Shape186);

HAnimSegment184->addChildren(*Transform185);

CShape* Shape187 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance188 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance188->setUSE("SegmentLine");
Shape187->setAppearance(*Appearance188);

CIndexedLineSet* IndexedLineSet189 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet189->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate190 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate190->setPoint(new float[6]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766});
IndexedLineSet189->setCoord(*Coordinate190);

Shape187->setGeometry(IndexedLineSet189);

HAnimSegment184->addChildren(*Shape187);

HAnimJoint183->addChildren(*HAnimSegment184);

CHAnimJoint* HAnimJoint191 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint191->setName("r_ankle");
HAnimJoint191->setDEF("hanim_r_ankle");
HAnimJoint191->setCenter(new float[3]{-0.0801,0.0712,-0.0766});
HAnimJoint191->setSkinCoordIndex(new int[4]{370,371,372,373});
HAnimJoint191->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint191->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint191->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment192 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment192->setName("r_hindfoot");
HAnimSegment192->setDEF("hanim_r_hindfoot");
CTransform* Transform193 = (CTransform *)(m_pScene.createNode("Transform"));
Transform193->setTranslation(new float[3]{-0.0801,0.0712,-0.0766});
CShape* Shape194 = (CShape *)(m_pScene.createNode("Shape"));
Shape194->setUSE("jointbox");
Transform193->addChildren(*Shape194);

HAnimSegment192->addChildren(*Transform193);

CShape* Shape195 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance196 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance196->setUSE("SegmentLine");
Shape195->setAppearance(*Appearance196);

CIndexedLineSet* IndexedLineSet197 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet197->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate198 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate198->setPoint(new float[6]{-0.0801,0.0712,-0.0766,-0.0801,0,-0.0368});
IndexedLineSet197->setCoord(*Coordinate198);

Shape195->setGeometry(IndexedLineSet197);

HAnimSegment192->addChildren(*Shape195);

CShape* Shape199 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance200 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance200->setUSE("SiteParentLine");
Shape199->setAppearance(*Appearance200);

CIndexedLineSet* IndexedLineSet201 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet201->setCoordIndex(new int[12]{0,1,-1,0,2,-1,0,3,-1,0,4,-1});
CCoordinate* Coordinate202 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate202->setPoint(new float[15]{-0.0801,0.0712,-0.0766,-0.1006,0.0658,-0.1075,-0.0591,0.076,-0.0928,-0.0603,0.061,-0.1002,-0.0692,0.0297,-0.1221});
IndexedLineSet201->setCoord(*Coordinate202);

Shape199->setGeometry(IndexedLineSet201);

HAnimSegment192->addChildren(*Shape199);

CHAnimSite* HAnimSite203 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite203->setName("r_lateral_malleolus");
HAnimSite203->setDEF("hanim_r_lateral_malleolus");
HAnimSite203->setTranslation(new float[3]{-0.1006,0.0658,-0.1075});
CShape* Shape204 = (CShape *)(m_pScene.createNode("Shape"));
Shape204->setUSE("sitebox");
HAnimSite203->addChildren(*Shape204);

HAnimSegment192->addChildren(*HAnimSite203);

CHAnimSite* HAnimSite205 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite205->setName("r_medial_malleolus");
HAnimSite205->setDEF("hanim_r_medial_malleolus");
HAnimSite205->setTranslation(new float[3]{-0.0591,0.076,-0.0928});
CShape* Shape206 = (CShape *)(m_pScene.createNode("Shape"));
Shape206->setUSE("sitebox");
HAnimSite205->addChildren(*Shape206);

HAnimSegment192->addChildren(*HAnimSite205);

CHAnimSite* HAnimSite207 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite207->setName("r_sphyrion");
HAnimSite207->setDEF("hanim_r_sphyrion");
HAnimSite207->setTranslation(new float[3]{-0.0603,0.061,-0.1002});
CShape* Shape208 = (CShape *)(m_pScene.createNode("Shape"));
Shape208->setUSE("sitebox");
HAnimSite207->addChildren(*Shape208);

HAnimSegment192->addChildren(*HAnimSite207);

CHAnimSite* HAnimSite209 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite209->setName("r_calcaneous_post");
HAnimSite209->setDEF("hanim_r_calcaneous_post");
HAnimSite209->setTranslation(new float[3]{-0.0692,0.0297,-0.1221});
CShape* Shape210 = (CShape *)(m_pScene.createNode("Shape"));
Shape210->setUSE("sitebox");
HAnimSite209->addChildren(*Shape210);

HAnimSegment192->addChildren(*HAnimSite209);

HAnimJoint191->addChildren(*HAnimSegment192);

CHAnimJoint* HAnimJoint211 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint211->setName("r_subtalar");
HAnimJoint211->setDEF("hanim_r_subtalar");
HAnimJoint211->setCenter(new float[3]{-0.0801,0,-0.0368});
HAnimJoint211->setSkinCoordIndex(new int[3]{374,375,376});
HAnimJoint211->setSkinCoordWeight(new float[3]{1,1,1}, 3);
HAnimJoint211->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint211->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment212 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment212->setName("r_midproximal");
HAnimSegment212->setDEF("hanim_r_midproximal");
CTransform* Transform213 = (CTransform *)(m_pScene.createNode("Transform"));
Transform213->setTranslation(new float[3]{-0.0801,0,-0.0368});
CShape* Shape214 = (CShape *)(m_pScene.createNode("Shape"));
Shape214->setUSE("jointbox");
Transform213->addChildren(*Shape214);

HAnimSegment212->addChildren(*Transform213);

CShape* Shape215 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance216 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance216->setUSE("SegmentLine");
Shape215->setAppearance(*Appearance216);

CIndexedLineSet* IndexedLineSet217 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet217->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate218 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate218->setPoint(new float[6]{-0.0801,0,-0.0368,-0.0801,0,0.0368});
IndexedLineSet217->setCoord(*Coordinate218);

Shape215->setGeometry(IndexedLineSet217);

HAnimSegment212->addChildren(*Shape215);

HAnimJoint211->addChildren(*HAnimSegment212);

CHAnimJoint* HAnimJoint219 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint219->setName("r_midtarsal");
HAnimJoint219->setDEF("hanim_r_midtarsal");
HAnimJoint219->setCenter(new float[3]{-0.0801,0,0.0368});
HAnimJoint219->setSkinCoordIndex(new int[4]{377,378,379,380});
HAnimJoint219->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint219->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint219->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment220 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment220->setName("r_middistal");
HAnimSegment220->setDEF("hanim_r_middistal");
CTransform* Transform221 = (CTransform *)(m_pScene.createNode("Transform"));
Transform221->setTranslation(new float[3]{-0.0801,0,0.0368});
CShape* Shape222 = (CShape *)(m_pScene.createNode("Shape"));
Shape222->setUSE("jointbox");
Transform221->addChildren(*Shape222);

HAnimSegment220->addChildren(*Transform221);

CShape* Shape223 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance224 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance224->setUSE("SegmentLine");
Shape223->setAppearance(*Appearance224);

CIndexedLineSet* IndexedLineSet225 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet225->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate226 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate226->setPoint(new float[6]{-0.0801,0,-0.0368,-0.0801,0.0039,0.0732});
IndexedLineSet225->setCoord(*Coordinate226);

Shape223->setGeometry(IndexedLineSet225);

HAnimSegment220->addChildren(*Shape223);

CShape* Shape227 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance228 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance228->setUSE("SiteParentLine");
Shape227->setAppearance(*Appearance228);

CIndexedLineSet* IndexedLineSet229 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet229->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate230 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate230->setPoint(new float[6]{-0.0801,0,0.0368,-0.0521,0.026,0.0127});
IndexedLineSet229->setCoord(*Coordinate230);

Shape227->setGeometry(IndexedLineSet229);

HAnimSegment220->addChildren(*Shape227);

CHAnimSite* HAnimSite231 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite231->setName("r_metatarsal_pha1");
HAnimSite231->setDEF("hanim_r_metatarsal_pha1");
HAnimSite231->setTranslation(new float[3]{-0.0521,0.026,0.0127});
CShape* Shape232 = (CShape *)(m_pScene.createNode("Shape"));
Shape232->setUSE("sitebox");
HAnimSite231->addChildren(*Shape232);

HAnimSegment220->addChildren(*HAnimSite231);

HAnimJoint219->addChildren(*HAnimSegment220);

CHAnimJoint* HAnimJoint233 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint233->setName("r_metatarsal");
HAnimJoint233->setDEF("hanim_r_metatarsal");
HAnimJoint233->setCenter(new float[3]{-0.0801,0.0039,0.0732});
HAnimJoint233->setSkinCoordIndex(new int[9]{381,382,383,384,385,386,387,388,389});
HAnimJoint233->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint233->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint233->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment234 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment234->setName("r_forefoot");
HAnimSegment234->setDEF("hanim_r_forefoot");
CTransform* Transform235 = (CTransform *)(m_pScene.createNode("Transform"));
Transform235->setTranslation(new float[3]{-0.0801,0.0039,0.0732});
CShape* Shape236 = (CShape *)(m_pScene.createNode("Shape"));
Shape236->setUSE("jointbox");
Transform235->addChildren(*Shape236);

HAnimSegment234->addChildren(*Transform235);

CShape* Shape237 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance238 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance238->setUSE("SegmentLine");
Shape237->setAppearance(*Appearance238);

CIndexedLineSet* IndexedLineSet239 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet239->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate240 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate240->setPoint(new float[6]{-0.0801,0.0039,0.0732,-0.1043,-0.0227,0.145});
IndexedLineSet239->setCoord(*Coordinate240);

Shape237->setGeometry(IndexedLineSet239);

HAnimSegment234->addChildren(*Shape237);

CShape* Shape241 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance242 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance242->setUSE("SiteParentLine");
Shape241->setAppearance(*Appearance242);

CIndexedLineSet* IndexedLineSet243 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet243->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
CCoordinate* Coordinate244 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate244->setPoint(new float[12]{-0.0801,0.0039,0.0732,-0.1043,-0.0227,0.145,-0.1523,0.0166,0.0895,-0.0883,0.0134,0.1383});
IndexedLineSet243->setCoord(*Coordinate244);

Shape241->setGeometry(IndexedLineSet243);

HAnimSegment234->addChildren(*Shape241);

CHAnimSite* HAnimSite245 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite245->setName("r_forefoot_tip");
HAnimSite245->setDEF("hanim_r_forefoot_tip");
HAnimSite245->setTranslation(new float[3]{-0.1043,-0.0227,0.145});
CShape* Shape246 = (CShape *)(m_pScene.createNode("Shape"));
Shape246->setUSE("sitebox");
HAnimSite245->addChildren(*Shape246);

HAnimSegment234->addChildren(*HAnimSite245);

CHAnimSite* HAnimSite247 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite247->setName("r_metatarsal_pha5");
HAnimSite247->setDEF("hanim_r_metatarsal_pha5");
HAnimSite247->setTranslation(new float[3]{-0.1523,0.0166,0.0895});
CShape* Shape248 = (CShape *)(m_pScene.createNode("Shape"));
Shape248->setUSE("sitebox");
HAnimSite247->addChildren(*Shape248);

HAnimSegment234->addChildren(*HAnimSite247);

CHAnimSite* HAnimSite249 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite249->setName("r_digit2");
HAnimSite249->setDEF("hanim_r_digit2");
HAnimSite249->setTranslation(new float[3]{-0.0883,0.0134,0.1383});
CShape* Shape250 = (CShape *)(m_pScene.createNode("Shape"));
Shape250->setUSE("sitebox");
HAnimSite249->addChildren(*Shape250);

HAnimSegment234->addChildren(*HAnimSite249);

HAnimJoint233->addChildren(*HAnimSegment234);

HAnimJoint219->addChildren(*HAnimJoint233);

HAnimJoint211->addChildren(*HAnimJoint219);

HAnimJoint191->addChildren(*HAnimJoint211);

HAnimJoint183->addChildren(*HAnimJoint191);

HAnimJoint165->addChildren(*HAnimJoint183);

HAnimJoint49->addChildren(*HAnimJoint165);

HAnimJoint41->addChildren(*HAnimJoint49);

CHAnimJoint* HAnimJoint251 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint251->setName("vl5");
HAnimJoint251->setDEF("hanim_vl5");
HAnimJoint251->setCenter(new float[3]{0.0028,1.0568,-0.0776});
HAnimJoint251->setSkinCoordIndex(new int[2]{28,76});
HAnimJoint251->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint251->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint251->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment252 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment252->setName("l5");
HAnimSegment252->setDEF("hanim_l5");
CTransform* Transform253 = (CTransform *)(m_pScene.createNode("Transform"));
Transform253->setTranslation(new float[3]{0.0028,1.0568,-0.0776});
CShape* Shape254 = (CShape *)(m_pScene.createNode("Shape"));
Shape254->setUSE("jointbox");
Transform253->addChildren(*Shape254);

HAnimSegment252->addChildren(*Transform253);

CShape* Shape255 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance256 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance256->setUSE("SegmentLine");
Shape255->setAppearance(*Appearance256);

CIndexedLineSet* IndexedLineSet257 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet257->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate258 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate258->setPoint(new float[6]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787});
IndexedLineSet257->setCoord(*Coordinate258);

Shape255->setGeometry(IndexedLineSet257);

HAnimSegment252->addChildren(*Shape255);

CShape* Shape259 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance260 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance260->setUSE("SiteParentLine");
Shape259->setAppearance(*Appearance260);

CIndexedLineSet* IndexedLineSet261 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet261->setCoordIndex(new int[6]{0,1,-1,0,2,-1});
CCoordinate* Coordinate262 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate262->setPoint(new float[9]{0.0028,1.0568,-0.0776,0.005,1.0915,-0.1091,0.0069,1.0966,0.1017});
IndexedLineSet261->setCoord(*Coordinate262);

Shape259->setGeometry(IndexedLineSet261);

HAnimSegment252->addChildren(*Shape259);

CHAnimSite* HAnimSite263 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite263->setName("waist_preferred_post");
HAnimSite263->setDEF("hanim_waist_preferred_post");
HAnimSite263->setTranslation(new float[3]{0.005,1.0915,-0.1091});
CShape* Shape264 = (CShape *)(m_pScene.createNode("Shape"));
Shape264->setUSE("sitebox");
HAnimSite263->addChildren(*Shape264);

HAnimSegment252->addChildren(*HAnimSite263);

CHAnimSite* HAnimSite265 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite265->setName("navel");
HAnimSite265->setDEF("hanim_navel");
HAnimSite265->setTranslation(new float[3]{0.0069,1.0966,0.1017});
CShape* Shape266 = (CShape *)(m_pScene.createNode("Shape"));
Shape266->setUSE("sitebox");
HAnimSite265->addChildren(*Shape266);

HAnimSegment252->addChildren(*HAnimSite265);

HAnimJoint251->addChildren(*HAnimSegment252);

CHAnimJoint* HAnimJoint267 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint267->setName("vl4");
HAnimJoint267->setDEF("hanim_vl4");
HAnimJoint267->setCenter(new float[3]{0.0035,1.0925,-0.0787});
HAnimJoint267->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint267->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment268 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment268->setName("l4");
HAnimSegment268->setDEF("hanim_l4");
CTransform* Transform269 = (CTransform *)(m_pScene.createNode("Transform"));
Transform269->setTranslation(new float[3]{0.0035,1.0925,-0.0787});
CShape* Shape270 = (CShape *)(m_pScene.createNode("Shape"));
Shape270->setUSE("jointbox");
Transform269->addChildren(*Shape270);

HAnimSegment268->addChildren(*Transform269);

CShape* Shape271 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance272 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance272->setUSE("SegmentLine");
Shape271->setAppearance(*Appearance272);

CIndexedLineSet* IndexedLineSet273 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet273->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate274 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate274->setPoint(new float[6]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796});
IndexedLineSet273->setCoord(*Coordinate274);

Shape271->setGeometry(IndexedLineSet273);

HAnimSegment268->addChildren(*Shape271);

HAnimJoint267->addChildren(*HAnimSegment268);

CHAnimJoint* HAnimJoint275 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint275->setName("vl3");
HAnimJoint275->setDEF("hanim_vl3");
HAnimJoint275->setCenter(new float[3]{0.0041,1.1276,-0.0796});
HAnimJoint275->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint275->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment276 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment276->setName("l3");
HAnimSegment276->setDEF("hanim_l3");
CTransform* Transform277 = (CTransform *)(m_pScene.createNode("Transform"));
Transform277->setTranslation(new float[3]{0.0041,1.1276,-0.0796});
CShape* Shape278 = (CShape *)(m_pScene.createNode("Shape"));
Shape278->setUSE("jointbox");
Transform277->addChildren(*Shape278);

HAnimSegment276->addChildren(*Transform277);

CShape* Shape279 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance280 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance280->setUSE("SegmentLine");
Shape279->setAppearance(*Appearance280);

CIndexedLineSet* IndexedLineSet281 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet281->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate282 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate282->setPoint(new float[6]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08});
IndexedLineSet281->setCoord(*Coordinate282);

Shape279->setGeometry(IndexedLineSet281);

HAnimSegment276->addChildren(*Shape279);

HAnimJoint275->addChildren(*HAnimSegment276);

CHAnimJoint* HAnimJoint283 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint283->setName("vl2");
HAnimJoint283->setDEF("hanim_vl2");
HAnimJoint283->setCenter(new float[3]{0.0045,1.1546,-0.08});
HAnimJoint283->setSkinCoordIndex(new int[9]{16,18,25,83,84,85,86,87,88});
HAnimJoint283->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,0.7,1,0.8}, 9);
HAnimJoint283->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint283->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment284 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment284->setName("l2");
HAnimSegment284->setDEF("hanim_l2");
CTransform* Transform285 = (CTransform *)(m_pScene.createNode("Transform"));
Transform285->setTranslation(new float[3]{0.0045,1.1546,-0.08});
CShape* Shape286 = (CShape *)(m_pScene.createNode("Shape"));
Shape286->setUSE("jointbox");
Transform285->addChildren(*Shape286);

HAnimSegment284->addChildren(*Transform285);

CShape* Shape287 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance288 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance288->setUSE("SegmentLine");
Shape287->setAppearance(*Appearance288);

CIndexedLineSet* IndexedLineSet289 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet289->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate290 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate290->setPoint(new float[6]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805});
IndexedLineSet289->setCoord(*Coordinate290);

Shape287->setGeometry(IndexedLineSet289);

HAnimSegment284->addChildren(*Shape287);

CShape* Shape291 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance292 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance292->setUSE("SiteParentLine");
Shape291->setAppearance(*Appearance292);

CIndexedLineSet* IndexedLineSet293 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet293->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
CCoordinate* Coordinate294 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate294->setPoint(new float[12]{0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016,0.0871,1.1925,0.0992,0.0049,1.1908,-0.1113});
IndexedLineSet293->setCoord(*Coordinate294);

Shape291->setGeometry(IndexedLineSet293);

HAnimSegment284->addChildren(*Shape291);

CHAnimSite* HAnimSite295 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite295->setName("r_rib10");
HAnimSite295->setDEF("hanim_r_rib10");
HAnimSite295->setTranslation(new float[3]{-0.0711,1.1941,0.1016});
CShape* Shape296 = (CShape *)(m_pScene.createNode("Shape"));
Shape296->setUSE("sitebox");
HAnimSite295->addChildren(*Shape296);

HAnimSegment284->addChildren(*HAnimSite295);

CHAnimSite* HAnimSite297 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite297->setName("l_rib10");
HAnimSite297->setDEF("hanim_l_rib10");
HAnimSite297->setTranslation(new float[3]{0.0871,1.1925,0.0992});
CShape* Shape298 = (CShape *)(m_pScene.createNode("Shape"));
Shape298->setUSE("sitebox");
HAnimSite297->addChildren(*Shape298);

HAnimSegment284->addChildren(*HAnimSite297);

CHAnimSite* HAnimSite299 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite299->setName("rib10_midspine");
HAnimSite299->setDEF("hanim_rib10_midspine");
HAnimSite299->setTranslation(new float[3]{0.0049,1.1908,-0.1113});
CShape* Shape300 = (CShape *)(m_pScene.createNode("Shape"));
Shape300->setUSE("sitebox");
HAnimSite299->addChildren(*Shape300);

HAnimSegment284->addChildren(*HAnimSite299);

HAnimJoint283->addChildren(*HAnimSegment284);

CHAnimJoint* HAnimJoint301 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint301->setName("vl1");
HAnimJoint301->setDEF("hanim_vl1");
HAnimJoint301->setCenter(new float[3]{0.0048,1.1912,-0.0805});
HAnimJoint301->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint301->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment302 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment302->setName("l1");
HAnimSegment302->setDEF("hanim_l1");
CTransform* Transform303 = (CTransform *)(m_pScene.createNode("Transform"));
Transform303->setTranslation(new float[3]{0.0048,1.1912,-0.0805});
CShape* Shape304 = (CShape *)(m_pScene.createNode("Shape"));
Shape304->setUSE("jointbox");
Transform303->addChildren(*Shape304);

HAnimSegment302->addChildren(*Transform303);

CShape* Shape305 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance306 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance306->setUSE("SegmentLine");
Shape305->setAppearance(*Appearance306);

CIndexedLineSet* IndexedLineSet307 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet307->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate308 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate308->setPoint(new float[6]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808});
IndexedLineSet307->setCoord(*Coordinate308);

Shape305->setGeometry(IndexedLineSet307);

HAnimSegment302->addChildren(*Shape305);

HAnimJoint301->addChildren(*HAnimSegment302);

CHAnimJoint* HAnimJoint309 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint309->setName("vt12");
HAnimJoint309->setDEF("hanim_vt12");
HAnimJoint309->setCenter(new float[3]{0.0051,1.2278,-0.0808});
HAnimJoint309->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint309->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment310 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment310->setName("t12");
HAnimSegment310->setDEF("hanim_t12");
CTransform* Transform311 = (CTransform *)(m_pScene.createNode("Transform"));
Transform311->setTranslation(new float[3]{0.0051,1.2278,-0.0808});
CShape* Shape312 = (CShape *)(m_pScene.createNode("Shape"));
Shape312->setUSE("jointbox");
Transform311->addChildren(*Shape312);

HAnimSegment310->addChildren(*Transform311);

CShape* Shape313 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance314 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance314->setUSE("SegmentLine");
Shape313->setAppearance(*Appearance314);

CIndexedLineSet* IndexedLineSet315 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet315->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate316 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate316->setPoint(new float[6]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081});
IndexedLineSet315->setCoord(*Coordinate316);

Shape313->setGeometry(IndexedLineSet315);

HAnimSegment310->addChildren(*Shape313);

HAnimJoint309->addChildren(*HAnimSegment310);

CHAnimJoint* HAnimJoint317 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint317->setName("vt11");
HAnimJoint317->setDEF("hanim_vt11");
HAnimJoint317->setCenter(new float[3]{0.0053,1.2679,-0.081});
HAnimJoint317->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint317->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment318 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment318->setName("t11");
HAnimSegment318->setDEF("hanim_t11");
CTransform* Transform319 = (CTransform *)(m_pScene.createNode("Transform"));
Transform319->setTranslation(new float[3]{0.0053,1.2679,-0.081});
CShape* Shape320 = (CShape *)(m_pScene.createNode("Shape"));
Shape320->setUSE("jointbox");
Transform319->addChildren(*Shape320);

HAnimSegment318->addChildren(*Transform319);

CShape* Shape321 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance322 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance322->setUSE("SegmentLine");
Shape321->setAppearance(*Appearance322);

CIndexedLineSet* IndexedLineSet323 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet323->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate324 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate324->setPoint(new float[6]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822});
IndexedLineSet323->setCoord(*Coordinate324);

Shape321->setGeometry(IndexedLineSet323);

HAnimSegment318->addChildren(*Shape321);

HAnimJoint317->addChildren(*HAnimSegment318);

CHAnimJoint* HAnimJoint325 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint325->setName("vt10");
HAnimJoint325->setDEF("hanim_vt10");
HAnimJoint325->setCenter(new float[3]{0.0056,1.2848,-0.0822});
HAnimJoint325->setSkinCoordIndex(new int[1]{15});
HAnimJoint325->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint325->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint325->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment326 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment326->setName("t10");
HAnimSegment326->setDEF("hanim_t10");
CTransform* Transform327 = (CTransform *)(m_pScene.createNode("Transform"));
Transform327->setTranslation(new float[3]{0.0056,1.2848,-0.0822});
CShape* Shape328 = (CShape *)(m_pScene.createNode("Shape"));
Shape328->setUSE("jointbox");
Transform327->addChildren(*Shape328);

HAnimSegment326->addChildren(*Transform327);

CShape* Shape329 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance330 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance330->setUSE("SegmentLine");
Shape329->setAppearance(*Appearance330);

CIndexedLineSet* IndexedLineSet331 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet331->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate332 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate332->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838});
IndexedLineSet331->setCoord(*Coordinate332);

Shape329->setGeometry(IndexedLineSet331);

HAnimSegment326->addChildren(*Shape329);

CShape* Shape333 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance334 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance334->setUSE("SiteParentLine");
Shape333->setAppearance(*Appearance334);

CIndexedLineSet* IndexedLineSet335 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet335->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate336 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate336->setPoint(new float[6]{0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147});
IndexedLineSet335->setCoord(*Coordinate336);

Shape333->setGeometry(IndexedLineSet335);

HAnimSegment326->addChildren(*Shape333);

CHAnimSite* HAnimSite337 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite337->setName("substernale");
HAnimSite337->setDEF("hanim_substernale");
HAnimSite337->setTranslation(new float[3]{0.0085,1.2995,0.1147});
CShape* Shape338 = (CShape *)(m_pScene.createNode("Shape"));
Shape338->setUSE("sitebox");
HAnimSite337->addChildren(*Shape338);

HAnimSegment326->addChildren(*HAnimSite337);

HAnimJoint325->addChildren(*HAnimSegment326);

CHAnimJoint* HAnimJoint339 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint339->setName("vt9");
HAnimJoint339->setDEF("hanim_vt9");
HAnimJoint339->setCenter(new float[3]{0.0057,1.3126,-0.0838});
HAnimJoint339->setSkinCoordIndex(new int[2]{13,14});
HAnimJoint339->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint339->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint339->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment340 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment340->setName("t9");
HAnimSegment340->setDEF("hanim_t9");
CTransform* Transform341 = (CTransform *)(m_pScene.createNode("Transform"));
Transform341->setTranslation(new float[3]{0.0057,1.3126,-0.0838});
CShape* Shape342 = (CShape *)(m_pScene.createNode("Shape"));
Shape342->setUSE("jointbox");
Transform341->addChildren(*Shape342);

HAnimSegment340->addChildren(*Transform341);

CShape* Shape343 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance344 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance344->setUSE("SegmentLine");
Shape343->setAppearance(*Appearance344);

CIndexedLineSet* IndexedLineSet345 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet345->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate346 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate346->setPoint(new float[6]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845});
IndexedLineSet345->setCoord(*Coordinate346);

Shape343->setGeometry(IndexedLineSet345);

HAnimSegment340->addChildren(*Shape343);

CShape* Shape347 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance348 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance348->setUSE("SiteParentLine");
Shape347->setAppearance(*Appearance348);

CIndexedLineSet* IndexedLineSet349 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet349->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
CCoordinate* Coordinate350 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate350->setPoint(new float[12]{0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217,0.0918,1.3382,0.1192,0.0057,1.3382,-0.0845});
IndexedLineSet349->setCoord(*Coordinate350);

Shape347->setGeometry(IndexedLineSet349);

HAnimSegment340->addChildren(*Shape347);

CHAnimSite* HAnimSite351 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite351->setName("r_thelion");
HAnimSite351->setDEF("hanim_r_thelion");
HAnimSite351->setTranslation(new float[3]{-0.0736,1.3385,0.1217});
CShape* Shape352 = (CShape *)(m_pScene.createNode("Shape"));
Shape352->setUSE("sitebox");
HAnimSite351->addChildren(*Shape352);

HAnimSegment340->addChildren(*HAnimSite351);

CHAnimSite* HAnimSite353 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite353->setName("l_thelion");
HAnimSite353->setDEF("hanim_l_thelion");
HAnimSite353->setTranslation(new float[3]{0.0918,1.3382,0.1192});
CShape* Shape354 = (CShape *)(m_pScene.createNode("Shape"));
Shape354->setUSE("sitebox");
HAnimSite353->addChildren(*Shape354);

HAnimSegment340->addChildren(*HAnimSite353);

HAnimJoint339->addChildren(*HAnimSegment340);

CHAnimJoint* HAnimJoint355 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint355->setName("vt8");
HAnimJoint355->setDEF("hanim_vt8");
HAnimJoint355->setCenter(new float[3]{0.0057,1.3382,-0.0845});
HAnimJoint355->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint355->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment356 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment356->setName("t8");
HAnimSegment356->setDEF("hanim_t8");
CTransform* Transform357 = (CTransform *)(m_pScene.createNode("Transform"));
Transform357->setTranslation(new float[3]{0.0057,1.3382,-0.0845});
CShape* Shape358 = (CShape *)(m_pScene.createNode("Shape"));
Shape358->setUSE("jointbox");
Transform357->addChildren(*Shape358);

HAnimSegment356->addChildren(*Transform357);

CShape* Shape359 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance360 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance360->setUSE("SegmentLine");
Shape359->setAppearance(*Appearance360);

CIndexedLineSet* IndexedLineSet361 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet361->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate362 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate362->setPoint(new float[6]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833});
IndexedLineSet361->setCoord(*Coordinate362);

Shape359->setGeometry(IndexedLineSet361);

HAnimSegment356->addChildren(*Shape359);

HAnimJoint355->addChildren(*HAnimSegment356);

CHAnimJoint* HAnimJoint363 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint363->setName("vt7");
HAnimJoint363->setDEF("hanim_vt7");
HAnimJoint363->setCenter(new float[3]{0.0058,1.3625,-0.0833});
HAnimJoint363->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint363->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment364 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment364->setName("t7");
HAnimSegment364->setDEF("hanim_t7");
CTransform* Transform365 = (CTransform *)(m_pScene.createNode("Transform"));
Transform365->setTranslation(new float[3]{0.0058,1.3625,-0.0833});
CShape* Shape366 = (CShape *)(m_pScene.createNode("Shape"));
Shape366->setUSE("jointbox");
Transform365->addChildren(*Shape366);

HAnimSegment364->addChildren(*Transform365);

CShape* Shape367 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance368 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance368->setUSE("SegmentLine");
Shape367->setAppearance(*Appearance368);

CIndexedLineSet* IndexedLineSet369 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet369->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate370 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate370->setPoint(new float[6]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08});
IndexedLineSet369->setCoord(*Coordinate370);

Shape367->setGeometry(IndexedLineSet369);

HAnimSegment364->addChildren(*Shape367);

HAnimJoint363->addChildren(*HAnimSegment364);

CHAnimJoint* HAnimJoint371 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint371->setName("vt6");
HAnimJoint371->setDEF("hanim_vt6");
HAnimJoint371->setCenter(new float[3]{0.0059,1.3866,-0.08});
HAnimJoint371->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint371->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment372 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment372->setName("t6");
HAnimSegment372->setDEF("hanim_t6");
CTransform* Transform373 = (CTransform *)(m_pScene.createNode("Transform"));
Transform373->setTranslation(new float[3]{0.0059,1.3866,-0.08});
CShape* Shape374 = (CShape *)(m_pScene.createNode("Shape"));
Shape374->setUSE("jointbox");
Transform373->addChildren(*Shape374);

HAnimSegment372->addChildren(*Transform373);

CShape* Shape375 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance376 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance376->setUSE("SegmentLine");
Shape375->setAppearance(*Appearance376);

CIndexedLineSet* IndexedLineSet377 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet377->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate378 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate378->setPoint(new float[6]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745});
IndexedLineSet377->setCoord(*Coordinate378);

Shape375->setGeometry(IndexedLineSet377);

HAnimSegment372->addChildren(*Shape375);

HAnimJoint371->addChildren(*HAnimSegment372);

CHAnimJoint* HAnimJoint379 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint379->setName("vt5");
HAnimJoint379->setDEF("hanim_vt5");
HAnimJoint379->setCenter(new float[3]{0.006,1.4102,-0.0745});
HAnimJoint379->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint379->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment380 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment380->setName("t5");
HAnimSegment380->setDEF("hanim_t5");
CTransform* Transform381 = (CTransform *)(m_pScene.createNode("Transform"));
Transform381->setTranslation(new float[3]{0.006,1.4102,-0.0745});
CShape* Shape382 = (CShape *)(m_pScene.createNode("Shape"));
Shape382->setUSE("jointbox");
Transform381->addChildren(*Shape382);

HAnimSegment380->addChildren(*Transform381);

CShape* Shape383 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance384 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance384->setUSE("SegmentLine");
Shape383->setAppearance(*Appearance384);

CIndexedLineSet* IndexedLineSet385 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet385->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate386 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate386->setPoint(new float[6]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675});
IndexedLineSet385->setCoord(*Coordinate386);

Shape383->setGeometry(IndexedLineSet385);

HAnimSegment380->addChildren(*Shape383);

HAnimJoint379->addChildren(*HAnimSegment380);

CHAnimJoint* HAnimJoint387 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint387->setName("vt4");
HAnimJoint387->setDEF("hanim_vt4");
HAnimJoint387->setCenter(new float[3]{0.0061,1.432,-0.0675});
HAnimJoint387->setSkinCoordIndex(new int[1]{81});
HAnimJoint387->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint387->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint387->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment388 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment388->setName("t4");
HAnimSegment388->setDEF("hanim_t4");
CTransform* Transform389 = (CTransform *)(m_pScene.createNode("Transform"));
Transform389->setTranslation(new float[3]{0.0061,1.432,-0.0675});
CShape* Shape390 = (CShape *)(m_pScene.createNode("Shape"));
Shape390->setUSE("jointbox");
Transform389->addChildren(*Shape390);

HAnimSegment388->addChildren(*Transform389);

CShape* Shape391 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance392 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance392->setUSE("SegmentLine");
Shape391->setAppearance(*Appearance392);

CIndexedLineSet* IndexedLineSet393 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet393->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate394 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate394->setPoint(new float[6]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057});
IndexedLineSet393->setCoord(*Coordinate394);

Shape391->setGeometry(IndexedLineSet393);

HAnimSegment388->addChildren(*Shape391);

HAnimJoint387->addChildren(*HAnimSegment388);

CHAnimJoint* HAnimJoint395 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint395->setName("vt3");
HAnimJoint395->setDEF("hanim_vt3");
HAnimJoint395->setCenter(new float[3]{0.0062,1.4583,-0.057});
HAnimJoint395->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint395->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment396 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment396->setName("t3");
HAnimSegment396->setDEF("hanim_t3");
CTransform* Transform397 = (CTransform *)(m_pScene.createNode("Transform"));
Transform397->setTranslation(new float[3]{0.0062,1.4583,-0.057});
CShape* Shape398 = (CShape *)(m_pScene.createNode("Shape"));
Shape398->setUSE("jointbox");
Transform397->addChildren(*Shape398);

HAnimSegment396->addChildren(*Transform397);

CShape* Shape399 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance400 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance400->setUSE("SegmentLine");
Shape399->setAppearance(*Appearance400);

CIndexedLineSet* IndexedLineSet401 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet401->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate402 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate402->setPoint(new float[6]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484});
IndexedLineSet401->setCoord(*Coordinate402);

Shape399->setGeometry(IndexedLineSet401);

HAnimSegment396->addChildren(*Shape399);

HAnimJoint395->addChildren(*HAnimSegment396);

CHAnimJoint* HAnimJoint403 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint403->setName("vt2");
HAnimJoint403->setDEF("hanim_vt2");
HAnimJoint403->setCenter(new float[3]{0.0063,1.4761,-0.0484});
HAnimJoint403->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint403->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment404 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment404->setName("t2");
HAnimSegment404->setDEF("hanim_t2");
CTransform* Transform405 = (CTransform *)(m_pScene.createNode("Transform"));
Transform405->setTranslation(new float[3]{0.0063,1.4761,-0.0484});
CShape* Shape406 = (CShape *)(m_pScene.createNode("Shape"));
Shape406->setUSE("jointbox");
Transform405->addChildren(*Shape406);

HAnimSegment404->addChildren(*Transform405);

CShape* Shape407 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance408 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance408->setUSE("SegmentLine");
Shape407->setAppearance(*Appearance408);

CIndexedLineSet* IndexedLineSet409 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet409->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate410 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate410->setPoint(new float[6]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387});
IndexedLineSet409->setCoord(*Coordinate410);

Shape407->setGeometry(IndexedLineSet409);

HAnimSegment404->addChildren(*Shape407);

HAnimJoint403->addChildren(*HAnimSegment404);

CHAnimJoint* HAnimJoint411 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint411->setName("vt1");
HAnimJoint411->setDEF("hanim_vt1");
HAnimJoint411->setCenter(new float[3]{0.0065,1.4951,-0.0387});
HAnimJoint411->setSkinCoordIndex(new int[2]{11,24});
HAnimJoint411->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint411->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint411->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment412 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment412->setName("t1");
HAnimSegment412->setDEF("hanim_t1");
CTransform* Transform413 = (CTransform *)(m_pScene.createNode("Transform"));
Transform413->setTranslation(new float[3]{0.0065,1.4951,-0.0387});
CShape* Shape414 = (CShape *)(m_pScene.createNode("Shape"));
Shape414->setUSE("jointbox");
Transform413->addChildren(*Shape414);

HAnimSegment412->addChildren(*Transform413);

CShape* Shape415 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance416 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance416->setUSE("SegmentLine");
Shape415->setAppearance(*Appearance416);

CIndexedLineSet* IndexedLineSet417 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet417->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
CCoordinate* Coordinate418 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate418->setPoint(new float[12]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301,0.082,1.4488,-0.0353,-0.0694,1.46,-0.033});
IndexedLineSet417->setCoord(*Coordinate418);

Shape415->setGeometry(IndexedLineSet417);

HAnimSegment412->addChildren(*Shape415);

CShape* Shape419 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance420 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance420->setUSE("SiteParentLine");
Shape419->setAppearance(*Appearance420);

CIndexedLineSet* IndexedLineSet421 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet421->setCoordIndex(new int[6]{0,1,-1,0,2,-1});
CCoordinate* Coordinate422 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate422->setPoint(new float[9]{0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551,0.0064,1.52,-0.0815});
IndexedLineSet421->setCoord(*Coordinate422);

Shape419->setGeometry(IndexedLineSet421);

HAnimSegment412->addChildren(*Shape419);

CHAnimSite* HAnimSite423 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite423->setName("suprasternale");
HAnimSite423->setDEF("hanim_suprasternale");
HAnimSite423->setTranslation(new float[3]{0.0084,1.4714,0.0551});
CShape* Shape424 = (CShape *)(m_pScene.createNode("Shape"));
Shape424->setUSE("sitebox");
HAnimSite423->addChildren(*Shape424);

HAnimSegment412->addChildren(*HAnimSite423);

CHAnimSite* HAnimSite425 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite425->setName("cervicale");
HAnimSite425->setDEF("hanim_cervicale");
HAnimSite425->setTranslation(new float[3]{0.0064,1.52,-0.0815});
CShape* Shape426 = (CShape *)(m_pScene.createNode("Shape"));
Shape426->setUSE("sitebox");
HAnimSite425->addChildren(*Shape426);

HAnimSegment412->addChildren(*HAnimSite425);

HAnimJoint411->addChildren(*HAnimSegment412);

CHAnimJoint* HAnimJoint427 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint427->setName("vc7");
HAnimJoint427->setDEF("hanim_vc7");
HAnimJoint427->setCenter(new float[3]{0.0066,1.5132,-0.0301});
HAnimJoint427->setSkinCoordIndex(new int[2]{74,75});
HAnimJoint427->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint427->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint427->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment428 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment428->setName("c7");
HAnimSegment428->setDEF("hanim_c7");
CTransform* Transform429 = (CTransform *)(m_pScene.createNode("Transform"));
Transform429->setTranslation(new float[3]{0.0066,1.5132,-0.0301});
CShape* Shape430 = (CShape *)(m_pScene.createNode("Shape"));
Shape430->setUSE("jointbox");
Transform429->addChildren(*Shape430);

HAnimSegment428->addChildren(*Transform429);

CShape* Shape431 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance432 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance432->setUSE("SegmentLine");
Shape431->setAppearance(*Appearance432);

CIndexedLineSet* IndexedLineSet433 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet433->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate434 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate434->setPoint(new float[6]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143});
IndexedLineSet433->setCoord(*Coordinate434);

Shape431->setGeometry(IndexedLineSet433);

HAnimSegment428->addChildren(*Shape431);

CShape* Shape435 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance436 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance436->setUSE("SiteParentLine");
Shape435->setAppearance(*Appearance436);

CIndexedLineSet* IndexedLineSet437 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet437->setCoordIndex(new int[6]{0,1,-1,0,2,-1});
CCoordinate* Coordinate438 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate438->setPoint(new float[9]{0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022,0.0646,1.5141,-0.038});
IndexedLineSet437->setCoord(*Coordinate438);

Shape435->setGeometry(IndexedLineSet437);

HAnimSegment428->addChildren(*Shape435);

CHAnimSite* HAnimSite439 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite439->setName("r_neck_base");
HAnimSite439->setDEF("hanim_r_neck_base");
HAnimSite439->setTranslation(new float[3]{-0.0419,1.5149,-0.022});
CShape* Shape440 = (CShape *)(m_pScene.createNode("Shape"));
Shape440->setUSE("sitebox");
HAnimSite439->addChildren(*Shape440);

HAnimSegment428->addChildren(*HAnimSite439);

CHAnimSite* HAnimSite441 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite441->setName("l_neck_base");
HAnimSite441->setDEF("hanim_l_neck_base");
HAnimSite441->setTranslation(new float[3]{0.0646,1.5141,-0.038});
CShape* Shape442 = (CShape *)(m_pScene.createNode("Shape"));
Shape442->setUSE("sitebox");
HAnimSite441->addChildren(*Shape442);

HAnimSegment428->addChildren(*HAnimSite441);

HAnimJoint427->addChildren(*HAnimSegment428);

CHAnimJoint* HAnimJoint443 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint443->setName("vc6");
HAnimJoint443->setDEF("hanim_vc6");
HAnimJoint443->setCenter(new float[3]{0.0066,1.5357,-0.0143});
HAnimJoint443->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint443->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment444 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment444->setName("c6");
HAnimSegment444->setDEF("hanim_c6");
CTransform* Transform445 = (CTransform *)(m_pScene.createNode("Transform"));
Transform445->setDEF("cordsysvc6");
Transform445->setTranslation(new float[3]{0.0066,1.5357,-0.0143});
Transform445->setScale(new float[3]{0.175,0.175,0.175});
CInline* Inline446 = (CInline *)(m_pScene.createNode("Inline"));
Inline446->setGlobal(True);
Inline446->setUrl(new CString[1]{"JointCoordinateAxes.x3dv"}, 1);
Transform445->addChildren(*Inline446);

HAnimSegment444->addChildren(*Transform445);

CTransform* Transform447 = (CTransform *)(m_pScene.createNode("Transform"));
Transform447->setTranslation(new float[3]{0.0066,1.5357,-0.0143});
CShape* Shape448 = (CShape *)(m_pScene.createNode("Shape"));
Shape448->setUSE("jointbox");
Transform447->addChildren(*Shape448);

HAnimSegment444->addChildren(*Transform447);

CShape* Shape449 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance450 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance450->setUSE("SegmentLine");
Shape449->setAppearance(*Appearance450);

CIndexedLineSet* IndexedLineSet451 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet451->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate452 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate452->setPoint(new float[6]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082});
IndexedLineSet451->setCoord(*Coordinate452);

Shape449->setGeometry(IndexedLineSet451);

HAnimSegment444->addChildren(*Shape449);

HAnimJoint443->addChildren(*HAnimSegment444);

CHAnimJoint* HAnimJoint453 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint453->setName("vc5");
HAnimJoint453->setDEF("hanim_vc5");
HAnimJoint453->setCenter(new float[3]{0.0066,1.552,-0.0082});
HAnimJoint453->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint453->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment454 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment454->setName("c5");
HAnimSegment454->setDEF("hanim_c5");
CTransform* Transform455 = (CTransform *)(m_pScene.createNode("Transform"));
Transform455->setTranslation(new float[3]{0.0066,1.552,-0.0082});
CShape* Shape456 = (CShape *)(m_pScene.createNode("Shape"));
Shape456->setUSE("jointbox");
Transform455->addChildren(*Shape456);

HAnimSegment454->addChildren(*Transform455);

CShape* Shape457 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance458 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance458->setUSE("SegmentLine");
Shape457->setAppearance(*Appearance458);

CIndexedLineSet* IndexedLineSet459 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet459->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate460 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate460->setPoint(new float[6]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084});
IndexedLineSet459->setCoord(*Coordinate460);

Shape457->setGeometry(IndexedLineSet459);

HAnimSegment454->addChildren(*Shape457);

HAnimJoint453->addChildren(*HAnimSegment454);

CHAnimJoint* HAnimJoint461 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint461->setName("vc4");
HAnimJoint461->setDEF("hanim_vc4");
HAnimJoint461->setCenter(new float[3]{0.0066,1.5662,-0.0084});
HAnimJoint461->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint461->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment462 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment462->setName("c4");
HAnimSegment462->setDEF("hanim_c4");
CTransform* Transform463 = (CTransform *)(m_pScene.createNode("Transform"));
Transform463->setTranslation(new float[3]{0.0066,1.5662,-0.0084});
CShape* Shape464 = (CShape *)(m_pScene.createNode("Shape"));
Shape464->setUSE("jointbox");
Transform463->addChildren(*Shape464);

HAnimSegment462->addChildren(*Transform463);

CShape* Shape465 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance466 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance466->setUSE("SegmentLine");
Shape465->setAppearance(*Appearance466);

CIndexedLineSet* IndexedLineSet467 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet467->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate468 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate468->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103});
IndexedLineSet467->setCoord(*Coordinate468);

Shape465->setGeometry(IndexedLineSet467);

HAnimSegment462->addChildren(*Shape465);

HAnimJoint461->addChildren(*HAnimSegment462);

CHAnimJoint* HAnimJoint469 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint469->setName("vc3");
HAnimJoint469->setDEF("hanim_vc3");
HAnimJoint469->setCenter(new float[3]{0.0066,1.58,-0.0103});
HAnimJoint469->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint469->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment470 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment470->setName("c3");
HAnimSegment470->setDEF("hanim_c3");
CTransform* Transform471 = (CTransform *)(m_pScene.createNode("Transform"));
Transform471->setTranslation(new float[3]{0.0066,1.58,-0.0103});
CShape* Shape472 = (CShape *)(m_pScene.createNode("Shape"));
Shape472->setUSE("jointbox");
Transform471->addChildren(*Shape472);

HAnimSegment470->addChildren(*Transform471);

CShape* Shape473 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance474 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance474->setUSE("SegmentLine");
Shape473->setAppearance(*Appearance474);

CIndexedLineSet* IndexedLineSet475 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet475->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate476 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate476->setPoint(new float[6]{0.0066,1.5662,-0.0084,0.0066,1.5928,-0.0103});
IndexedLineSet475->setCoord(*Coordinate476);

Shape473->setGeometry(IndexedLineSet475);

HAnimSegment470->addChildren(*Shape473);

HAnimJoint469->addChildren(*HAnimSegment470);

CHAnimJoint* HAnimJoint477 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint477->setName("vc2");
HAnimJoint477->setDEF("hanim_vc2");
HAnimJoint477->setCenter(new float[3]{0.0066,1.5928,-0.0103});
HAnimJoint477->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint477->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment478 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment478->setName("c2");
HAnimSegment478->setDEF("hanim_c2");
CTransform* Transform479 = (CTransform *)(m_pScene.createNode("Transform"));
Transform479->setTranslation(new float[3]{0.0066,1.5928,-0.0103});
CShape* Shape480 = (CShape *)(m_pScene.createNode("Shape"));
Shape480->setUSE("jointbox");
Transform479->addChildren(*Shape480);

HAnimSegment478->addChildren(*Transform479);

CShape* Shape481 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance482 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance482->setUSE("SegmentLine");
Shape481->setAppearance(*Appearance482);

CIndexedLineSet* IndexedLineSet483 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet483->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate484 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate484->setPoint(new float[6]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034});
IndexedLineSet483->setCoord(*Coordinate484);

Shape481->setGeometry(IndexedLineSet483);

HAnimSegment478->addChildren(*Shape481);

HAnimJoint477->addChildren(*HAnimSegment478);

CHAnimJoint* HAnimJoint485 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint485->setName("vc1");
HAnimJoint485->setDEF("hanim_vc1");
HAnimJoint485->setCenter(new float[3]{0.0066,1.6144,-0.0034});
HAnimJoint485->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint485->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment486 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment486->setName("c1");
HAnimSegment486->setDEF("hanim_c1");
CTransform* Transform487 = (CTransform *)(m_pScene.createNode("Transform"));
Transform487->setTranslation(new float[3]{0.0066,1.6144,-0.0034});
CShape* Shape488 = (CShape *)(m_pScene.createNode("Shape"));
Shape488->setUSE("jointbox");
Transform487->addChildren(*Shape488);

HAnimSegment486->addChildren(*Transform487);

CShape* Shape489 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance490 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance490->setUSE("SegmentLine");
Shape489->setAppearance(*Appearance490);

CIndexedLineSet* IndexedLineSet491 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet491->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate492 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate492->setPoint(new float[6]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236});
IndexedLineSet491->setCoord(*Coordinate492);

Shape489->setGeometry(IndexedLineSet491);

HAnimSegment486->addChildren(*Shape489);

HAnimJoint485->addChildren(*HAnimSegment486);

CHAnimJoint* HAnimJoint493 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint493->setName("skullbase");
HAnimJoint493->setDEF("hanim_skullbase");
HAnimJoint493->setCenter(new float[3]{0.0044,1.6209,0.0236});
HAnimJoint493->setSkinCoordIndex(new int[10]{0,1,2,3,4,5,6,7,8,9});
HAnimJoint493->setSkinCoordWeight(new float[10]{1,1,1,1,1,1,1,1,1,1}, 10);
HAnimJoint493->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint493->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment494 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment494->setName("skull");
HAnimSegment494->setDEF("hanim_skull");
CTransform* Transform495 = (CTransform *)(m_pScene.createNode("Transform"));
Transform495->setTranslation(new float[3]{0.0044,1.6209,0.0236});
CShape* Shape496 = (CShape *)(m_pScene.createNode("Shape"));
Shape496->setUSE("jointbox");
Transform495->addChildren(*Shape496);

HAnimSegment494->addChildren(*Transform495);

CShape* Shape497 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance498 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance498->setUSE("SegmentLine");
Shape497->setAppearance(*Appearance498);

CIndexedLineSet* IndexedLineSet499 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet499->setCoordIndex(new int[6]{0,1,-1,0,2,-1});
CCoordinate* Coordinate500 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate500->setPoint(new float[9]{0.0044,1.6209,0.0236,0.0336,1.6332,0.0502,-0.0236,1.6331,0.051});
IndexedLineSet499->setCoord(*Coordinate500);

Shape497->setGeometry(IndexedLineSet499);

HAnimSegment494->addChildren(*Shape497);

CShape* Shape501 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance502 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance502->setUSE("SiteParentLine");
Shape501->setAppearance(*Appearance502);

CIndexedLineSet* IndexedLineSet503 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet503->setCoordIndex(new int[30]{0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1,0,6,-1,0,7,-1,0,8,-1,0,9,-1,0,10,-1});
CCoordinate* Coordinate504 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate504->setPoint(new float[33]{0.0044,1.6209,0.0236,0.005,1.7504,0.0055,0.0058,1.6316,0.0852,-0.0237,1.6171,0.0752,0.0341,1.6171,0.0752,0.0061,1.541,0.0805,-0.0646,1.6347,0.0302,-0.052,1.5529,0.0347,0.0739,1.6348,0.0282,0.0631,1.553,0.033,0.0039,1.5972,-0.0796});
IndexedLineSet503->setCoord(*Coordinate504);

Shape501->setGeometry(IndexedLineSet503);

HAnimSegment494->addChildren(*Shape501);

CHAnimSite* HAnimSite505 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite505->setName("skull_tip");
HAnimSite505->setDEF("hanim_skull_tip");
HAnimSite505->setTranslation(new float[3]{0.005,1.7504,0.0055});
CShape* Shape506 = (CShape *)(m_pScene.createNode("Shape"));
Shape506->setUSE("sitebox");
HAnimSite505->addChildren(*Shape506);

HAnimSegment494->addChildren(*HAnimSite505);

CHAnimSite* HAnimSite507 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite507->setName("sellion");
HAnimSite507->setDEF("hanim_sellion");
HAnimSite507->setTranslation(new float[3]{0.0058,1.6316,0.0852});
CShape* Shape508 = (CShape *)(m_pScene.createNode("Shape"));
Shape508->setUSE("sitebox");
HAnimSite507->addChildren(*Shape508);

HAnimSegment494->addChildren(*HAnimSite507);

CHAnimSite* HAnimSite509 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite509->setName("r_infraorbitale");
HAnimSite509->setDEF("hanim_r_infraorbitale");
HAnimSite509->setTranslation(new float[3]{-0.0237,1.6171,0.0752});
CShape* Shape510 = (CShape *)(m_pScene.createNode("Shape"));
Shape510->setUSE("sitebox");
HAnimSite509->addChildren(*Shape510);

HAnimSegment494->addChildren(*HAnimSite509);

CHAnimSite* HAnimSite511 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite511->setName("l_infraorbitale");
HAnimSite511->setDEF("hanim_l_infraorbitale");
HAnimSite511->setTranslation(new float[3]{0.0341,1.6171,0.0752});
CShape* Shape512 = (CShape *)(m_pScene.createNode("Shape"));
Shape512->setUSE("sitebox");
HAnimSite511->addChildren(*Shape512);

HAnimSegment494->addChildren(*HAnimSite511);

CHAnimSite* HAnimSite513 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite513->setName("supramenton");
HAnimSite513->setDEF("hanim_supramenton");
HAnimSite513->setTranslation(new float[3]{0.0061,1.541,0.0805});
CShape* Shape514 = (CShape *)(m_pScene.createNode("Shape"));
Shape514->setUSE("sitebox");
HAnimSite513->addChildren(*Shape514);

HAnimSegment494->addChildren(*HAnimSite513);

CHAnimSite* HAnimSite515 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite515->setName("r_tragion");
HAnimSite515->setDEF("hanim_r_tragion");
HAnimSite515->setTranslation(new float[3]{-0.0646,1.6347,0.0302});
CShape* Shape516 = (CShape *)(m_pScene.createNode("Shape"));
Shape516->setUSE("sitebox");
HAnimSite515->addChildren(*Shape516);

HAnimSegment494->addChildren(*HAnimSite515);

CHAnimSite* HAnimSite517 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite517->setName("r_gonion");
HAnimSite517->setDEF("hanim_r_gonion");
HAnimSite517->setTranslation(new float[3]{-0.052,1.5529,0.0347});
CShape* Shape518 = (CShape *)(m_pScene.createNode("Shape"));
Shape518->setUSE("sitebox");
HAnimSite517->addChildren(*Shape518);

HAnimSegment494->addChildren(*HAnimSite517);

CHAnimSite* HAnimSite519 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite519->setName("l_tragion");
HAnimSite519->setDEF("hanim_l_tragion");
HAnimSite519->setTranslation(new float[3]{0.0739,1.6348,0.0282});
CShape* Shape520 = (CShape *)(m_pScene.createNode("Shape"));
Shape520->setUSE("sitebox");
HAnimSite519->addChildren(*Shape520);

HAnimSegment494->addChildren(*HAnimSite519);

CHAnimSite* HAnimSite521 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite521->setName("l_gonion");
HAnimSite521->setDEF("hanim_l_gonion");
HAnimSite521->setTranslation(new float[3]{0.0631,1.553,0.033});
CShape* Shape522 = (CShape *)(m_pScene.createNode("Shape"));
Shape522->setUSE("sitebox");
HAnimSite521->addChildren(*Shape522);

HAnimSegment494->addChildren(*HAnimSite521);

CHAnimSite* HAnimSite523 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite523->setName("nuchale");
HAnimSite523->setDEF("hanim_nuchale");
HAnimSite523->setTranslation(new float[3]{0.0039,1.5972,-0.0796});
CShape* Shape524 = (CShape *)(m_pScene.createNode("Shape"));
Shape524->setUSE("sitebox");
HAnimSite523->addChildren(*Shape524);

HAnimSegment494->addChildren(*HAnimSite523);

HAnimJoint493->addChildren(*HAnimSegment494);

CHAnimJoint* HAnimJoint525 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint525->setName("l_eyeball_joint");
HAnimJoint525->setDEF("hanim_l_eyeball_joint");
HAnimJoint525->setCenter(new float[3]{0.0336,1.6332,0.0502});
HAnimJoint525->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint525->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment526 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment526->setName("l_eyeball");
HAnimSegment526->setDEF("hanim_l_eyeball");
CTransform* Transform527 = (CTransform *)(m_pScene.createNode("Transform"));
Transform527->setTranslation(new float[3]{0.0336,1.6332,0.0502});
CShape* Shape528 = (CShape *)(m_pScene.createNode("Shape"));
Shape528->setUSE("jointbox");
Transform527->addChildren(*Shape528);

HAnimSegment526->addChildren(*Transform527);

CShape* Shape529 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance530 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance530->setUSE("SegmentLine");
Shape529->setAppearance(*Appearance530);

CIndexedLineSet* IndexedLineSet531 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet531->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate532 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate532->setPoint(new float[6]{0.0336,1.6332,0.0502,0.0336,1.6332,0.0702});
IndexedLineSet531->setCoord(*Coordinate532);

Shape529->setGeometry(IndexedLineSet531);

HAnimSegment526->addChildren(*Shape529);

HAnimJoint525->addChildren(*HAnimSegment526);

HAnimJoint493->addChildren(*HAnimJoint525);

CHAnimJoint* HAnimJoint533 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint533->setName("r_eyeball_joint");
HAnimJoint533->setDEF("hanim_r_eyeball_joint");
HAnimJoint533->setCenter(new float[3]{-0.0236,1.6331,0.051});
HAnimJoint533->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint533->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment534 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment534->setName("r_eyeball");
HAnimSegment534->setDEF("hanim_r_eyeball");
CTransform* Transform535 = (CTransform *)(m_pScene.createNode("Transform"));
Transform535->setTranslation(new float[3]{-0.0236,1.6331,0.051});
CShape* Shape536 = (CShape *)(m_pScene.createNode("Shape"));
Shape536->setUSE("jointbox");
Transform535->addChildren(*Shape536);

HAnimSegment534->addChildren(*Transform535);

CShape* Shape537 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance538 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance538->setUSE("SegmentLine");
Shape537->setAppearance(*Appearance538);

CIndexedLineSet* IndexedLineSet539 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet539->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate540 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate540->setPoint(new float[6]{-0.0236,1.6331,0.051,-0.0236,1.6331,0.071});
IndexedLineSet539->setCoord(*Coordinate540);

Shape537->setGeometry(IndexedLineSet539);

HAnimSegment534->addChildren(*Shape537);

HAnimJoint533->addChildren(*HAnimSegment534);

HAnimJoint493->addChildren(*HAnimJoint533);

HAnimJoint485->addChildren(*HAnimJoint493);

HAnimJoint477->addChildren(*HAnimJoint485);

HAnimJoint469->addChildren(*HAnimJoint477);

HAnimJoint461->addChildren(*HAnimJoint469);

HAnimJoint453->addChildren(*HAnimJoint461);

HAnimJoint443->addChildren(*HAnimJoint453);

HAnimJoint427->addChildren(*HAnimJoint443);

HAnimJoint411->addChildren(*HAnimJoint427);

CHAnimJoint* HAnimJoint541 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint541->setName("l_sternoclavicular");
HAnimJoint541->setDEF("hanim_l_sternoclavicular");
HAnimJoint541->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint541->setSkinCoordIndex(new int[1]{12});
HAnimJoint541->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint541->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint541->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment542 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment542->setName("l_clavicle");
HAnimSegment542->setDEF("hanim_l_clavicle");
CTransform* Transform543 = (CTransform *)(m_pScene.createNode("Transform"));
Transform543->setTranslation(new float[3]{0.082,1.4488,-0.0353});
CShape* Shape544 = (CShape *)(m_pScene.createNode("Shape"));
Shape544->setUSE("jointbox");
Transform543->addChildren(*Shape544);

HAnimSegment542->addChildren(*Transform543);

CShape* Shape545 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance546 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance546->setUSE("SegmentLine");
Shape545->setAppearance(*Appearance546);

CIndexedLineSet* IndexedLineSet547 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet547->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate548 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate548->setPoint(new float[6]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424});
IndexedLineSet547->setCoord(*Coordinate548);

Shape545->setGeometry(IndexedLineSet547);

HAnimSegment542->addChildren(*Shape545);

CShape* Shape549 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance550 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance550->setUSE("SiteParentLine");
Shape549->setAppearance(*Appearance550);

CIndexedLineSet* IndexedLineSet551 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet551->setCoordIndex(new int[12]{0,1,-1,0,2,-1,0,3,-1,0,4,-1});
CCoordinate* Coordinate552 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate552->setPoint(new float[15]{0.082,1.4488,-0.0353,0.0271,1.4943,0.0394,0.2032,1.476,-0.049,0.1777,1.4065,-0.0075,0.1706,1.4072,-0.0875});
IndexedLineSet551->setCoord(*Coordinate552);

Shape549->setGeometry(IndexedLineSet551);

HAnimSegment542->addChildren(*Shape549);

CHAnimSite* HAnimSite553 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite553->setName("l_clavicale");
HAnimSite553->setDEF("hanim_l_clavicale");
HAnimSite553->setTranslation(new float[3]{0.0271,1.4943,0.0394});
CShape* Shape554 = (CShape *)(m_pScene.createNode("Shape"));
Shape554->setUSE("sitebox");
HAnimSite553->addChildren(*Shape554);

HAnimSegment542->addChildren(*HAnimSite553);

CHAnimSite* HAnimSite555 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite555->setName("l_acromion");
HAnimSite555->setDEF("hanim_l_acromion");
HAnimSite555->setTranslation(new float[3]{0.2032,1.476,-0.049});
CShape* Shape556 = (CShape *)(m_pScene.createNode("Shape"));
Shape556->setUSE("sitebox");
HAnimSite555->addChildren(*Shape556);

HAnimSegment542->addChildren(*HAnimSite555);

CHAnimSite* HAnimSite557 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite557->setName("l_axilla_ant");
HAnimSite557->setDEF("hanim_l_axilla_ant");
HAnimSite557->setTranslation(new float[3]{0.1777,1.4065,-0.0075});
CShape* Shape558 = (CShape *)(m_pScene.createNode("Shape"));
Shape558->setUSE("sitebox");
HAnimSite557->addChildren(*Shape558);

HAnimSegment542->addChildren(*HAnimSite557);

CHAnimSite* HAnimSite559 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite559->setName("l_axilla_post");
HAnimSite559->setDEF("hanim_l_axilla_post");
HAnimSite559->setTranslation(new float[3]{0.1706,1.4072,-0.0875});
CShape* Shape560 = (CShape *)(m_pScene.createNode("Shape"));
Shape560->setUSE("sitebox");
HAnimSite559->addChildren(*Shape560);

HAnimSegment542->addChildren(*HAnimSite559);

HAnimJoint541->addChildren(*HAnimSegment542);

CHAnimJoint* HAnimJoint561 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint561->setName("l_acromioclavicular");
HAnimJoint561->setDEF("hanim_l_acromioclavicular");
HAnimJoint561->setCenter(new float[3]{0.0962,1.4269,-0.0424});
HAnimJoint561->setSkinCoordIndex(new int[1]{79});
HAnimJoint561->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint561->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint561->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment562 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment562->setName("l_scapula");
HAnimSegment562->setDEF("hanim_l_scapula");
CTransform* Transform563 = (CTransform *)(m_pScene.createNode("Transform"));
Transform563->setTranslation(new float[3]{0.0962,1.4269,-0.0424});
CShape* Shape564 = (CShape *)(m_pScene.createNode("Shape"));
Shape564->setUSE("jointbox");
Transform563->addChildren(*Shape564);

HAnimSegment562->addChildren(*Transform563);

CShape* Shape565 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance566 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance566->setUSE("SegmentLine");
Shape565->setAppearance(*Appearance566);

CIndexedLineSet* IndexedLineSet567 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet567->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate568 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate568->setPoint(new float[6]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387});
IndexedLineSet567->setCoord(*Coordinate568);

Shape565->setGeometry(IndexedLineSet567);

HAnimSegment562->addChildren(*Shape565);

HAnimJoint561->addChildren(*HAnimSegment562);

CHAnimJoint* HAnimJoint569 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint569->setName("l_shoulder");
HAnimJoint569->setDEF("hanim_l_shoulder");
HAnimJoint569->setCenter(new float[3]{0.2029,1.4376,-0.0387});
HAnimJoint569->setSkinCoordIndex(new int[8]{41,42,44,80,102,103,104,105});
HAnimJoint569->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint569->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint569->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment570 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment570->setName("l_upperarm");
HAnimSegment570->setDEF("hanim_l_upperarm");
CTransform* Transform571 = (CTransform *)(m_pScene.createNode("Transform"));
Transform571->setTranslation(new float[3]{0.2029,1.4376,-0.0387});
CShape* Shape572 = (CShape *)(m_pScene.createNode("Shape"));
Shape572->setUSE("jointbox");
Transform571->addChildren(*Shape572);

HAnimSegment570->addChildren(*Transform571);

CShape* Shape573 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance574 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance574->setUSE("SegmentLine");
Shape573->setAppearance(*Appearance574);

CIndexedLineSet* IndexedLineSet575 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet575->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate576 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate576->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682});
IndexedLineSet575->setCoord(*Coordinate576);

Shape573->setGeometry(IndexedLineSet575);

HAnimSegment570->addChildren(*Shape573);

CShape* Shape577 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance578 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance578->setUSE("SiteParentLine");
Shape577->setAppearance(*Appearance578);

CIndexedLineSet* IndexedLineSet579 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet579->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate580 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate580->setPoint(new float[6]{0.2029,1.4376,-0.0387,0.228,1.1482,-0.11});
IndexedLineSet579->setCoord(*Coordinate580);

Shape577->setGeometry(IndexedLineSet579);

HAnimSegment570->addChildren(*Shape577);

CHAnimSite* HAnimSite581 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite581->setName("l_humeral_lateral_epicn");
HAnimSite581->setDEF("hanim_l_humeral_lateral_epicn");
HAnimSite581->setTranslation(new float[3]{0.228,1.1482,-0.11});
CShape* Shape582 = (CShape *)(m_pScene.createNode("Shape"));
Shape582->setUSE("sitebox");
HAnimSite581->addChildren(*Shape582);

HAnimSegment570->addChildren(*HAnimSite581);

HAnimJoint569->addChildren(*HAnimSegment570);

CHAnimJoint* HAnimJoint583 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint583->setName("l_elbow");
HAnimJoint583->setDEF("hanim_l_elbow");
HAnimJoint583->setCenter(new float[3]{0.2014,1.1357,-0.0682});
HAnimJoint583->setSkinCoordIndex(new int[12]{45,46,47,109,110,111,112,113,115,116,117,118});
HAnimJoint583->setSkinCoordWeight(new float[15]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 15);
HAnimJoint583->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint583->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment584 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment584->setName("l_forearm");
HAnimSegment584->setDEF("hanim_l_forearm");
CTransform* Transform585 = (CTransform *)(m_pScene.createNode("Transform"));
Transform585->setTranslation(new float[3]{0.2014,1.1357,-0.0682});
CShape* Shape586 = (CShape *)(m_pScene.createNode("Shape"));
Shape586->setUSE("jointbox");
Transform585->addChildren(*Shape586);

HAnimSegment584->addChildren(*Transform585);

CShape* Shape587 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance588 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance588->setUSE("SegmentLine");
Shape587->setAppearance(*Appearance588);

CIndexedLineSet* IndexedLineSet589 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet589->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate590 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate590->setPoint(new float[6]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583});
IndexedLineSet589->setCoord(*Coordinate590);

Shape587->setGeometry(IndexedLineSet589);

HAnimSegment584->addChildren(*Shape587);

CShape* Shape591 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance592 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance592->setUSE("SiteParentLine");
Shape591->setAppearance(*Appearance592);

CIndexedLineSet* IndexedLineSet593 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet593->setCoordIndex(new int[12]{0,1,-1,0,2,-1,0,3,-1,0,4,-1});
CCoordinate* Coordinate594 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate594->setPoint(new float[15]{0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415,0.1962,1.1375,-0.1123,0.1735,1.1272,-0.1113,0.2182,1.1212,-0.1167});
IndexedLineSet593->setCoord(*Coordinate594);

Shape591->setGeometry(IndexedLineSet593);

HAnimSegment584->addChildren(*Shape591);

CHAnimSite* HAnimSite595 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite595->setName("l_radial_styloid");
HAnimSite595->setDEF("hanim_l_radial_styloid");
HAnimSite595->setTranslation(new float[3]{0.1901,0.8645,-0.0415});
CShape* Shape596 = (CShape *)(m_pScene.createNode("Shape"));
Shape596->setUSE("sitebox");
HAnimSite595->addChildren(*Shape596);

HAnimSegment584->addChildren(*HAnimSite595);

CHAnimSite* HAnimSite597 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite597->setName("l_olecranon");
HAnimSite597->setDEF("hanim_l_olecranon");
HAnimSite597->setTranslation(new float[3]{0.1962,1.1375,-0.1123});
CShape* Shape598 = (CShape *)(m_pScene.createNode("Shape"));
Shape598->setUSE("sitebox");
HAnimSite597->addChildren(*Shape598);

HAnimSegment584->addChildren(*HAnimSite597);

CHAnimSite* HAnimSite599 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite599->setName("l_humeral_medial_epicn");
HAnimSite599->setDEF("hanim_l_humeral_medial_epicn");
HAnimSite599->setTranslation(new float[3]{0.1735,1.1272,-0.1113});
CShape* Shape600 = (CShape *)(m_pScene.createNode("Shape"));
Shape600->setUSE("sitebox");
HAnimSite599->addChildren(*Shape600);

HAnimSegment584->addChildren(*HAnimSite599);

CHAnimSite* HAnimSite601 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite601->setName("l_radiale");
HAnimSite601->setDEF("hanim_l_radiale");
HAnimSite601->setTranslation(new float[3]{0.2182,1.1212,-0.1167});
CShape* Shape602 = (CShape *)(m_pScene.createNode("Shape"));
Shape602->setUSE("sitebox");
HAnimSite601->addChildren(*Shape602);

HAnimSegment584->addChildren(*HAnimSite601);

HAnimJoint583->addChildren(*HAnimSegment584);

CHAnimJoint* HAnimJoint603 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint603->setName("l_wrist");
HAnimJoint603->setDEF("hanim_l_wrist");
HAnimJoint603->setCenter(new float[3]{0.1984,0.8663,-0.0583});
HAnimJoint603->setSkinCoordIndex(new int[8]{119,120,121,122,123,124,125,126});
HAnimJoint603->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint603->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint603->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment604 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment604->setName("l_hand");
HAnimSegment604->setDEF("hanim_l_hand");
CTransform* Transform605 = (CTransform *)(m_pScene.createNode("Transform"));
Transform605->setTranslation(new float[3]{0.1984,0.8663,-0.0583});
CShape* Shape606 = (CShape *)(m_pScene.createNode("Shape"));
Shape606->setUSE("jointbox");
Transform605->addChildren(*Shape606);

HAnimSegment604->addChildren(*Transform605);

CShape* Shape607 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance608 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance608->setUSE("SegmentLine");
Shape607->setAppearance(*Appearance608);

CIndexedLineSet* IndexedLineSet609 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet609->setCoordIndex(new int[15]{0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1});
CCoordinate* Coordinate610 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate610->setPoint(new float[18]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534,0.1983,0.8024,-0.028,0.1987,0.8029,-0.053,0.1956,0.8019,-0.0794,0.1925,0.8066,-0.1036});
IndexedLineSet609->setCoord(*Coordinate610);

Shape607->setGeometry(IndexedLineSet609);

HAnimSegment604->addChildren(*Shape607);

CShape* Shape611 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance612 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance612->setUSE("SiteParentLine");
Shape611->setAppearance(*Appearance612);

CIndexedLineSet* IndexedLineSet613 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet613->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
CCoordinate* Coordinate614 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate614->setPoint(new float[12]{0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122});
IndexedLineSet613->setCoord(*Coordinate614);

Shape611->setGeometry(IndexedLineSet613);

HAnimSegment604->addChildren(*Shape611);

CHAnimSite* HAnimSite615 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite615->setName("l_metacarpal_pha2");
HAnimSite615->setDEF("hanim_l_metacarpal_pha2");
HAnimSite615->setTranslation(new float[3]{0.2009,0.8139,-0.0237});
CShape* Shape616 = (CShape *)(m_pScene.createNode("Shape"));
Shape616->setUSE("sitebox");
HAnimSite615->addChildren(*Shape616);

HAnimSegment604->addChildren(*HAnimSite615);

CHAnimSite* HAnimSite617 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite617->setName("l_ulnar_styloid");
HAnimSite617->setDEF("hanim_l_ulnar_styloid");
HAnimSite617->setTranslation(new float[3]{0.2142,0.8529,-0.0648});
CShape* Shape618 = (CShape *)(m_pScene.createNode("Shape"));
Shape618->setUSE("sitebox");
HAnimSite617->addChildren(*Shape618);

HAnimSegment604->addChildren(*HAnimSite617);

CHAnimSite* HAnimSite619 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite619->setName("l_metacarpal_pha5");
HAnimSite619->setDEF("hanim_l_metacarpal_pha5");
HAnimSite619->setTranslation(new float[3]{0.1929,0.786,-0.1122});
CShape* Shape620 = (CShape *)(m_pScene.createNode("Shape"));
Shape620->setUSE("sitebox");
HAnimSite619->addChildren(*Shape620);

HAnimSegment604->addChildren(*HAnimSite619);

HAnimJoint603->addChildren(*HAnimSegment604);

CHAnimJoint* HAnimJoint621 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint621->setName("l_thumb1");
HAnimJoint621->setDEF("hanim_l_thumb1");
HAnimJoint621->setCenter(new float[3]{0.1924,0.8472,-0.0534});
HAnimJoint621->setSkinCoordIndex(new int[2]{127,128});
HAnimJoint621->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint621->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint621->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment622 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment622->setName("l_thumb_metacarpal");
HAnimSegment622->setDEF("hanim_l_thumb_metacarpal");
CTransform* Transform623 = (CTransform *)(m_pScene.createNode("Transform"));
Transform623->setTranslation(new float[3]{0.1924,0.8472,-0.0534});
CShape* Shape624 = (CShape *)(m_pScene.createNode("Shape"));
Shape624->setUSE("jointbox");
Transform623->addChildren(*Shape624);

HAnimSegment622->addChildren(*Transform623);

CShape* Shape625 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance626 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance626->setUSE("SegmentLine");
Shape625->setAppearance(*Appearance626);

CIndexedLineSet* IndexedLineSet627 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet627->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate628 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate628->setPoint(new float[6]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246});
IndexedLineSet627->setCoord(*Coordinate628);

Shape625->setGeometry(IndexedLineSet627);

HAnimSegment622->addChildren(*Shape625);

HAnimJoint621->addChildren(*HAnimSegment622);

CHAnimJoint* HAnimJoint629 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint629->setName("l_thumb2");
HAnimJoint629->setDEF("hanim_l_thumb2");
HAnimJoint629->setCenter(new float[3]{0.1951,0.8226,0.0246});
HAnimJoint629->setSkinCoordIndex(new int[6]{138,139,140,141,142,143});
HAnimJoint629->setSkinCoordWeight(new float[6]{0.5,0.5,0.5,1,1,1}, 6);
HAnimJoint629->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint629->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment630 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment630->setName("l_thumb_proximal");
HAnimSegment630->setDEF("hanim_l_thumb_proximal");
CTransform* Transform631 = (CTransform *)(m_pScene.createNode("Transform"));
Transform631->setTranslation(new float[3]{0.1951,0.8226,0.0246});
CShape* Shape632 = (CShape *)(m_pScene.createNode("Shape"));
Shape632->setUSE("jointbox");
Transform631->addChildren(*Shape632);

HAnimSegment630->addChildren(*Transform631);

CShape* Shape633 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance634 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance634->setUSE("SegmentLine");
Shape633->setAppearance(*Appearance634);

CIndexedLineSet* IndexedLineSet635 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet635->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate636 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate636->setPoint(new float[6]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464});
IndexedLineSet635->setCoord(*Coordinate636);

Shape633->setGeometry(IndexedLineSet635);

HAnimSegment630->addChildren(*Shape633);

HAnimJoint629->addChildren(*HAnimSegment630);

CHAnimJoint* HAnimJoint637 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint637->setName("l_thumb3");
HAnimJoint637->setDEF("hanim_l_thumb3");
HAnimJoint637->setCenter(new float[3]{0.1955,0.8159,0.0464});
HAnimJoint637->setSkinCoordIndex(new int[9]{144,145,146,147,148,149,150,151,152});
HAnimJoint637->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint637->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint637->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment638 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment638->setName("l_thumb_distal");
HAnimSegment638->setDEF("hanim_l_thumb_distal");
CTransform* Transform639 = (CTransform *)(m_pScene.createNode("Transform"));
Transform639->setTranslation(new float[3]{0.1955,0.8159,0.0464});
CShape* Shape640 = (CShape *)(m_pScene.createNode("Shape"));
Shape640->setUSE("jointbox");
Transform639->addChildren(*Shape640);

HAnimSegment638->addChildren(*Transform639);

CShape* Shape641 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance642 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance642->setUSE("SegmentLine");
Shape641->setAppearance(*Appearance642);

CIndexedLineSet* IndexedLineSet643 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet643->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate644 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate644->setPoint(new float[6]{0.1955,0.8159,0.0464,0.1982,0.8061,0.0759});
IndexedLineSet643->setCoord(*Coordinate644);

Shape641->setGeometry(IndexedLineSet643);

HAnimSegment638->addChildren(*Shape641);

CShape* Shape645 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance646 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance646->setUSE("SiteParentLine");
Shape645->setAppearance(*Appearance646);

CIndexedLineSet* IndexedLineSet647 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet647->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate648 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate648->setPoint(new float[6]{0.1955,0.8159,0.0464,0.1982,0.8061,0.0759});
IndexedLineSet647->setCoord(*Coordinate648);

Shape645->setGeometry(IndexedLineSet647);

HAnimSegment638->addChildren(*Shape645);

CHAnimSite* HAnimSite649 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite649->setName("l_thumb_distal_tip");
HAnimSite649->setDEF("hanim_l_thumb_distal_tip");
HAnimSite649->setTranslation(new float[3]{0.1982,0.8061,0.0759});
CShape* Shape650 = (CShape *)(m_pScene.createNode("Shape"));
Shape650->setUSE("sitebox");
HAnimSite649->addChildren(*Shape650);

HAnimSegment638->addChildren(*HAnimSite649);

HAnimJoint637->addChildren(*HAnimSegment638);

HAnimJoint629->addChildren(*HAnimJoint637);

HAnimJoint621->addChildren(*HAnimJoint629);

HAnimJoint603->addChildren(*HAnimJoint621);

CHAnimJoint* HAnimJoint651 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint651->setName("l_index0");
HAnimJoint651->setDEF("hanim_l_index0");
HAnimJoint651->setCenter(new float[3]{0.1983,0.8024,-0.028});
HAnimJoint651->setSkinCoordIndex(new int[2]{129,130});
HAnimJoint651->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint651->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint651->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment652 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment652->setName("l_index_metacarpal");
HAnimSegment652->setDEF("hanim_l_index_metacarpal");
CTransform* Transform653 = (CTransform *)(m_pScene.createNode("Transform"));
Transform653->setTranslation(new float[3]{0.1983,0.8024,-0.028});
CShape* Shape654 = (CShape *)(m_pScene.createNode("Shape"));
Shape654->setUSE("jointbox");
Transform653->addChildren(*Shape654);

HAnimSegment652->addChildren(*Transform653);

CShape* Shape655 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance656 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance656->setUSE("SegmentLine");
Shape655->setAppearance(*Appearance656);

CIndexedLineSet* IndexedLineSet657 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet657->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate658 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate658->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
IndexedLineSet657->setCoord(*Coordinate658);

Shape655->setGeometry(IndexedLineSet657);

HAnimSegment652->addChildren(*Shape655);

HAnimJoint651->addChildren(*HAnimSegment652);

CHAnimJoint* HAnimJoint659 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint659->setName("l_index1");
HAnimJoint659->setDEF("hanim_l_index1");
HAnimJoint659->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint659->setSkinCoordIndex(new int[7]{138,139,140,153,154,155,163});
HAnimJoint659->setSkinCoordWeight(new float[7]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimJoint659->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint659->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment660 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment660->setName("l_index_proximal");
HAnimSegment660->setDEF("hanim_l_index_proximal");
CTransform* Transform661 = (CTransform *)(m_pScene.createNode("Transform"));
Transform661->setTranslation(new float[3]{0.1983,0.7815,-0.028});
CShape* Shape662 = (CShape *)(m_pScene.createNode("Shape"));
Shape662->setUSE("jointbox");
Transform661->addChildren(*Shape662);

HAnimSegment660->addChildren(*Transform661);

CShape* Shape663 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance664 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance664->setUSE("SegmentLine");
Shape663->setAppearance(*Appearance664);

CIndexedLineSet* IndexedLineSet665 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet665->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate666 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate666->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
IndexedLineSet665->setCoord(*Coordinate666);

Shape663->setGeometry(IndexedLineSet665);

HAnimSegment660->addChildren(*Shape663);

HAnimJoint659->addChildren(*HAnimSegment660);

CHAnimJoint* HAnimJoint667 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint667->setName("l_index2");
HAnimJoint667->setDEF("hanim_l_index2");
HAnimJoint667->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint667->setSkinCoordIndex(new int[4]{166,167,168,169});
HAnimJoint667->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint667->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint667->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment668 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment668->setName("l_index_middle");
HAnimSegment668->setDEF("hanim_l_index_middle");
CTransform* Transform669 = (CTransform *)(m_pScene.createNode("Transform"));
Transform669->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
CShape* Shape670 = (CShape *)(m_pScene.createNode("Shape"));
Shape670->setUSE("jointbox");
Transform669->addChildren(*Shape670);

HAnimSegment668->addChildren(*Transform669);

CShape* Shape671 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance672 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance672->setUSE("SegmentLine");
Shape671->setAppearance(*Appearance672);

CIndexedLineSet* IndexedLineSet673 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet673->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate674 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate674->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
IndexedLineSet673->setCoord(*Coordinate674);

Shape671->setGeometry(IndexedLineSet673);

HAnimSegment668->addChildren(*Shape671);

HAnimJoint667->addChildren(*HAnimSegment668);

CHAnimJoint* HAnimJoint675 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint675->setName("l_index3");
HAnimJoint675->setDEF("hanim_l_index3");
HAnimJoint675->setCenter(new float[3]{0.2028,0.7139,-0.0236});
HAnimJoint675->setSkinCoordIndex(new int[9]{170,171,172,173,174,175,176,177,178});
HAnimJoint675->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint675->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint675->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment676 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment676->setName("l_index_distal");
HAnimSegment676->setDEF("hanim_l_index_distal");
CTransform* Transform677 = (CTransform *)(m_pScene.createNode("Transform"));
Transform677->setTranslation(new float[3]{0.2028,0.7139,-0.0236});
CShape* Shape678 = (CShape *)(m_pScene.createNode("Shape"));
Shape678->setUSE("jointbox");
Transform677->addChildren(*Shape678);

HAnimSegment676->addChildren(*Transform677);

CShape* Shape679 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance680 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance680->setUSE("SegmentLine");
Shape679->setAppearance(*Appearance680);

CIndexedLineSet* IndexedLineSet681 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet681->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate682 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate682->setPoint(new float[6]{0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245});
IndexedLineSet681->setCoord(*Coordinate682);

Shape679->setGeometry(IndexedLineSet681);

HAnimSegment676->addChildren(*Shape679);

CShape* Shape683 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance684 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance684->setUSE("SiteParentLine");
Shape683->setAppearance(*Appearance684);

CIndexedLineSet* IndexedLineSet685 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet685->setCoordIndex(new int[6]{0,1,-1,0,2,-1});
CCoordinate* Coordinate686 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate686->setPoint(new float[9]{0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245,0.2056,0.6743,-0.0482});
IndexedLineSet685->setCoord(*Coordinate686);

Shape683->setGeometry(IndexedLineSet685);

HAnimSegment676->addChildren(*Shape683);

CHAnimSite* HAnimSite687 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite687->setName("l_index_distal_tip");
HAnimSite687->setDEF("hanim_l_index_distal_tip");
HAnimSite687->setTranslation(new float[3]{0.2089,0.6858,-0.0245});
CShape* Shape688 = (CShape *)(m_pScene.createNode("Shape"));
Shape688->setUSE("sitebox");
HAnimSite687->addChildren(*Shape688);

HAnimSegment676->addChildren(*HAnimSite687);

CHAnimSite* HAnimSite689 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite689->setName("l_dactylion");
HAnimSite689->setDEF("hanim_l_dactylion");
HAnimSite689->setTranslation(new float[3]{0.2056,0.6743,-0.0482});
CShape* Shape690 = (CShape *)(m_pScene.createNode("Shape"));
Shape690->setUSE("sitebox");
HAnimSite689->addChildren(*Shape690);

HAnimSegment676->addChildren(*HAnimSite689);

HAnimJoint675->addChildren(*HAnimSegment676);

HAnimJoint667->addChildren(*HAnimJoint675);

HAnimJoint659->addChildren(*HAnimJoint667);

HAnimJoint651->addChildren(*HAnimJoint659);

HAnimJoint603->addChildren(*HAnimJoint651);

CHAnimJoint* HAnimJoint691 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint691->setName("l_middle0");
HAnimJoint691->setDEF("hanim_l_middle0");
HAnimJoint691->setCenter(new float[3]{0.1987,0.8029,-0.053});
HAnimJoint691->setSkinCoordIndex(new int[2]{131,132});
HAnimJoint691->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint691->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint691->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment692 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment692->setName("l_middle_metacarpal");
HAnimSegment692->setDEF("hanim_l_middle_metacarpal");
CTransform* Transform693 = (CTransform *)(m_pScene.createNode("Transform"));
Transform693->setTranslation(new float[3]{0.1987,0.8029,-0.053});
CShape* Shape694 = (CShape *)(m_pScene.createNode("Shape"));
Shape694->setUSE("jointbox");
Transform693->addChildren(*Shape694);

HAnimSegment692->addChildren(*Transform693);

CShape* Shape695 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance696 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance696->setUSE("SegmentLine");
Shape695->setAppearance(*Appearance696);

CIndexedLineSet* IndexedLineSet697 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet697->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate698 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate698->setPoint(new float[6]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053});
IndexedLineSet697->setCoord(*Coordinate698);

Shape695->setGeometry(IndexedLineSet697);

HAnimSegment692->addChildren(*Shape695);

HAnimJoint691->addChildren(*HAnimSegment692);

CHAnimJoint* HAnimJoint699 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint699->setName("l_middle1");
HAnimJoint699->setDEF("hanim_l_middle1");
HAnimJoint699->setCenter(new float[3]{0.1987,0.7818,-0.053});
HAnimJoint699->setSkinCoordIndex(new int[4]{156,157,163,164});
HAnimJoint699->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
HAnimJoint699->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint699->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment700 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment700->setName("l_middle_proximal");
HAnimSegment700->setDEF("hanim_l_middle_proximal");
CTransform* Transform701 = (CTransform *)(m_pScene.createNode("Transform"));
Transform701->setTranslation(new float[3]{0.1987,0.7818,-0.053});
CShape* Shape702 = (CShape *)(m_pScene.createNode("Shape"));
Shape702->setUSE("jointbox");
Transform701->addChildren(*Shape702);

HAnimSegment700->addChildren(*Transform701);

CShape* Shape703 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance704 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance704->setUSE("SegmentLine");
Shape703->setAppearance(*Appearance704);

CIndexedLineSet* IndexedLineSet705 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet705->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate706 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate706->setPoint(new float[6]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503});
IndexedLineSet705->setCoord(*Coordinate706);

Shape703->setGeometry(IndexedLineSet705);

HAnimSegment700->addChildren(*Shape703);

HAnimJoint699->addChildren(*HAnimSegment700);

CHAnimJoint* HAnimJoint707 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint707->setName("l_middle2");
HAnimJoint707->setDEF("hanim_l_middle2");
HAnimJoint707->setCenter(new float[3]{0.2013,0.7273,-0.0503});
HAnimJoint707->setSkinCoordIndex(new int[4]{179,180,181,182});
HAnimJoint707->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint707->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint707->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment708 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment708->setName("l_middle_middle");
HAnimSegment708->setDEF("hanim_l_middle_middle");
CTransform* Transform709 = (CTransform *)(m_pScene.createNode("Transform"));
Transform709->setTranslation(new float[3]{0.2013,0.7273,-0.0503});
CShape* Shape710 = (CShape *)(m_pScene.createNode("Shape"));
Shape710->setUSE("jointbox");
Transform709->addChildren(*Shape710);

HAnimSegment708->addChildren(*Transform709);

CShape* Shape711 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance712 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance712->setUSE("SegmentLine");
Shape711->setAppearance(*Appearance712);

CIndexedLineSet* IndexedLineSet713 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet713->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate714 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate714->setPoint(new float[6]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494});
IndexedLineSet713->setCoord(*Coordinate714);

Shape711->setGeometry(IndexedLineSet713);

HAnimSegment708->addChildren(*Shape711);

HAnimJoint707->addChildren(*HAnimSegment708);

CHAnimJoint* HAnimJoint715 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint715->setName("l_middle3");
HAnimJoint715->setDEF("hanim_l_middle3");
HAnimJoint715->setCenter(new float[3]{0.2026,0.7011,-0.0494});
HAnimJoint715->setSkinCoordIndex(new int[9]{183,184,185,186,187,188,189,190,191});
HAnimJoint715->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint715->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint715->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment716 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment716->setName("l_middle_distal");
HAnimSegment716->setDEF("hanim_l_middle_distal");
CTransform* Transform717 = (CTransform *)(m_pScene.createNode("Transform"));
Transform717->setTranslation(new float[3]{0.2026,0.7011,-0.0494});
CShape* Shape718 = (CShape *)(m_pScene.createNode("Shape"));
Shape718->setUSE("jointbox");
Transform717->addChildren(*Shape718);

HAnimSegment716->addChildren(*Transform717);

CShape* Shape719 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance720 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance720->setUSE("SegmentLine");
Shape719->setAppearance(*Appearance720);

CIndexedLineSet* IndexedLineSet721 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet721->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate722 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate722->setPoint(new float[6]{0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491});
IndexedLineSet721->setCoord(*Coordinate722);

Shape719->setGeometry(IndexedLineSet721);

HAnimSegment716->addChildren(*Shape719);

CShape* Shape723 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance724 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance724->setUSE("SiteParentLine");
Shape723->setAppearance(*Appearance724);

CIndexedLineSet* IndexedLineSet725 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet725->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate726 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate726->setPoint(new float[6]{0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491});
IndexedLineSet725->setCoord(*Coordinate726);

Shape723->setGeometry(IndexedLineSet725);

HAnimSegment716->addChildren(*Shape723);

CHAnimSite* HAnimSite727 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite727->setName("l_middle_distal_tip");
HAnimSite727->setDEF("hanim_l_middle_distal_tip");
HAnimSite727->setTranslation(new float[3]{0.208,0.6731,-0.0491});
CShape* Shape728 = (CShape *)(m_pScene.createNode("Shape"));
Shape728->setUSE("sitebox");
HAnimSite727->addChildren(*Shape728);

HAnimSegment716->addChildren(*HAnimSite727);

HAnimJoint715->addChildren(*HAnimSegment716);

HAnimJoint707->addChildren(*HAnimJoint715);

HAnimJoint699->addChildren(*HAnimJoint707);

HAnimJoint691->addChildren(*HAnimJoint699);

HAnimJoint603->addChildren(*HAnimJoint691);

CHAnimJoint* HAnimJoint729 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint729->setName("l_ring0");
HAnimJoint729->setDEF("hanim_l_ring0");
HAnimJoint729->setCenter(new float[3]{0.1956,0.8019,-0.0794});
HAnimJoint729->setSkinCoordIndex(new int[2]{133,134});
HAnimJoint729->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint729->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint729->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment730 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment730->setName("l_ring_metacarpal");
HAnimSegment730->setDEF("hanim_l_ring_metacarpal");
CTransform* Transform731 = (CTransform *)(m_pScene.createNode("Transform"));
Transform731->setTranslation(new float[3]{0.1956,0.8019,-0.0794});
CShape* Shape732 = (CShape *)(m_pScene.createNode("Shape"));
Shape732->setUSE("jointbox");
Transform731->addChildren(*Shape732);

HAnimSegment730->addChildren(*Transform731);

CShape* Shape733 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance734 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance734->setUSE("SegmentLine");
Shape733->setAppearance(*Appearance734);

CIndexedLineSet* IndexedLineSet735 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet735->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate736 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate736->setPoint(new float[6]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794});
IndexedLineSet735->setCoord(*Coordinate736);

Shape733->setGeometry(IndexedLineSet735);

HAnimSegment730->addChildren(*Shape733);

HAnimJoint729->addChildren(*HAnimSegment730);

CHAnimJoint* HAnimJoint737 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint737->setName("l_ring1");
HAnimJoint737->setDEF("hanim_l_ring1");
HAnimJoint737->setCenter(new float[3]{0.1956,0.7815,-0.0794});
HAnimJoint737->setSkinCoordIndex(new int[4]{158,159,164,165});
HAnimJoint737->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
HAnimJoint737->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint737->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment738 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment738->setName("l_ring_proximal");
HAnimSegment738->setDEF("hanim_l_ring_proximal");
CTransform* Transform739 = (CTransform *)(m_pScene.createNode("Transform"));
Transform739->setTranslation(new float[3]{0.1956,0.7815,-0.0794});
CShape* Shape740 = (CShape *)(m_pScene.createNode("Shape"));
Shape740->setUSE("jointbox");
Transform739->addChildren(*Shape740);

HAnimSegment738->addChildren(*Transform739);

CShape* Shape741 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance742 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance742->setUSE("SegmentLine");
Shape741->setAppearance(*Appearance742);

CIndexedLineSet* IndexedLineSet743 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet743->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate744 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate744->setPoint(new float[6]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777});
IndexedLineSet743->setCoord(*Coordinate744);

Shape741->setGeometry(IndexedLineSet743);

HAnimSegment738->addChildren(*Shape741);

HAnimJoint737->addChildren(*HAnimSegment738);

CHAnimJoint* HAnimJoint745 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint745->setName("l_ring2");
HAnimJoint745->setDEF("hanim_l_ring2");
HAnimJoint745->setCenter(new float[3]{0.1973,0.7287,-0.0777});
HAnimJoint745->setSkinCoordIndex(new int[4]{192,193,194,195});
HAnimJoint745->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint745->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint745->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment746 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment746->setName("l_ring_middle");
HAnimSegment746->setDEF("hanim_l_ring_middle");
CTransform* Transform747 = (CTransform *)(m_pScene.createNode("Transform"));
Transform747->setTranslation(new float[3]{0.1973,0.7287,-0.0777});
CShape* Shape748 = (CShape *)(m_pScene.createNode("Shape"));
Shape748->setUSE("jointbox");
Transform747->addChildren(*Shape748);

HAnimSegment746->addChildren(*Transform747);

CShape* Shape749 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance750 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance750->setUSE("SegmentLine");
Shape749->setAppearance(*Appearance750);

CIndexedLineSet* IndexedLineSet751 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet751->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate752 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate752->setPoint(new float[6]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767});
IndexedLineSet751->setCoord(*Coordinate752);

Shape749->setGeometry(IndexedLineSet751);

HAnimSegment746->addChildren(*Shape749);

HAnimJoint745->addChildren(*HAnimSegment746);

CHAnimJoint* HAnimJoint753 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint753->setName("l_ring3");
HAnimJoint753->setDEF("hanim_l_ring3");
HAnimJoint753->setCenter(new float[3]{0.1983,0.7045,-0.0767});
HAnimJoint753->setSkinCoordIndex(new int[9]{196,197,198,199,200,201,202,203,204});
HAnimJoint753->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint753->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint753->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment754 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment754->setName("l_ring_distal");
HAnimSegment754->setDEF("hanim_l_ring_distal");
CTransform* Transform755 = (CTransform *)(m_pScene.createNode("Transform"));
Transform755->setTranslation(new float[3]{0.1983,0.7045,-0.0767});
CShape* Shape756 = (CShape *)(m_pScene.createNode("Shape"));
Shape756->setUSE("jointbox");
Transform755->addChildren(*Shape756);

HAnimSegment754->addChildren(*Transform755);

CShape* Shape757 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance758 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance758->setUSE("SegmentLine");
Shape757->setAppearance(*Appearance758);

CIndexedLineSet* IndexedLineSet759 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet759->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate760 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate760->setPoint(new float[6]{0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756});
IndexedLineSet759->setCoord(*Coordinate760);

Shape757->setGeometry(IndexedLineSet759);

HAnimSegment754->addChildren(*Shape757);

CShape* Shape761 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance762 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance762->setUSE("SiteParentLine");
Shape761->setAppearance(*Appearance762);

CIndexedLineSet* IndexedLineSet763 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet763->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate764 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate764->setPoint(new float[6]{0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756});
IndexedLineSet763->setCoord(*Coordinate764);

Shape761->setGeometry(IndexedLineSet763);

HAnimSegment754->addChildren(*Shape761);

CHAnimSite* HAnimSite765 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite765->setName("l_ring_distal_tip");
HAnimSite765->setDEF("hanim_l_ring_distal_tip");
HAnimSite765->setTranslation(new float[3]{0.2035,0.675,-0.0756});
CShape* Shape766 = (CShape *)(m_pScene.createNode("Shape"));
Shape766->setUSE("sitebox");
HAnimSite765->addChildren(*Shape766);

HAnimSegment754->addChildren(*HAnimSite765);

HAnimJoint753->addChildren(*HAnimSegment754);

HAnimJoint745->addChildren(*HAnimJoint753);

HAnimJoint737->addChildren(*HAnimJoint745);

HAnimJoint729->addChildren(*HAnimJoint737);

HAnimJoint603->addChildren(*HAnimJoint729);

CHAnimJoint* HAnimJoint767 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint767->setName("l_pinky0");
HAnimJoint767->setDEF("hanim_l_pinky0");
HAnimJoint767->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint767->setSkinCoordIndex(new int[4]{135,136,137,165});
HAnimJoint767->setSkinCoordWeight(new float[4]{1,1,1,0.5}, 4);
HAnimJoint767->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint767->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment768 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment768->setName("l_pinky_metacarpal");
HAnimSegment768->setDEF("hanim_l_pinky_metacarpal");
CTransform* Transform769 = (CTransform *)(m_pScene.createNode("Transform"));
Transform769->setTranslation(new float[3]{0.1925,0.8066,-0.1036});
CShape* Shape770 = (CShape *)(m_pScene.createNode("Shape"));
Shape770->setUSE("jointbox");
Transform769->addChildren(*Shape770);

HAnimSegment768->addChildren(*Transform769);

CShape* Shape771 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance772 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance772->setUSE("SegmentLine");
Shape771->setAppearance(*Appearance772);

CIndexedLineSet* IndexedLineSet773 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet773->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate774 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate774->setPoint(new float[6]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036});
IndexedLineSet773->setCoord(*Coordinate774);

Shape771->setGeometry(IndexedLineSet773);

HAnimSegment768->addChildren(*Shape771);

HAnimJoint767->addChildren(*HAnimSegment768);

CHAnimJoint* HAnimJoint775 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint775->setName("l_pinky1");
HAnimJoint775->setDEF("hanim_l_pinky1");
HAnimJoint775->setCenter(new float[3]{0.1925,0.7866,-0.1036});
HAnimJoint775->setSkinCoordIndex(new int[3]{160,161,162});
HAnimJoint775->setSkinCoordWeight(new float[3]{1,1,1}, 3);
HAnimJoint775->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint775->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment776 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment776->setName("l_pinky_proximal");
HAnimSegment776->setDEF("hanim_l_pinky_proximal");
CTransform* Transform777 = (CTransform *)(m_pScene.createNode("Transform"));
Transform777->setTranslation(new float[3]{0.1925,0.7866,-0.1036});
CShape* Shape778 = (CShape *)(m_pScene.createNode("Shape"));
Shape778->setUSE("jointbox");
Transform777->addChildren(*Shape778);

HAnimSegment776->addChildren(*Transform777);

CShape* Shape779 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance780 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance780->setUSE("SegmentLine");
Shape779->setAppearance(*Appearance780);

CIndexedLineSet* IndexedLineSet781 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet781->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate782 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate782->setPoint(new float[6]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024});
IndexedLineSet781->setCoord(*Coordinate782);

Shape779->setGeometry(IndexedLineSet781);

HAnimSegment776->addChildren(*Shape779);

HAnimJoint775->addChildren(*HAnimSegment776);

CHAnimJoint* HAnimJoint783 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint783->setName("l_pinky2");
HAnimJoint783->setDEF("hanim_l_pinky2");
HAnimJoint783->setCenter(new float[3]{0.1938,0.7452,-0.1024});
HAnimJoint783->setSkinCoordIndex(new int[4]{205,206,207,208});
HAnimJoint783->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint783->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint783->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment784 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment784->setName("l_pinky_middle");
HAnimSegment784->setDEF("hanim_l_pinky_middle");
CTransform* Transform785 = (CTransform *)(m_pScene.createNode("Transform"));
Transform785->setTranslation(new float[3]{0.1938,0.7452,-0.1024});
CShape* Shape786 = (CShape *)(m_pScene.createNode("Shape"));
Shape786->setUSE("jointbox");
Transform785->addChildren(*Shape786);

HAnimSegment784->addChildren(*Transform785);

CShape* Shape787 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance788 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance788->setUSE("SegmentLine");
Shape787->setAppearance(*Appearance788);

CIndexedLineSet* IndexedLineSet789 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet789->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate790 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate790->setPoint(new float[6]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017});
IndexedLineSet789->setCoord(*Coordinate790);

Shape787->setGeometry(IndexedLineSet789);

HAnimSegment784->addChildren(*Shape787);

HAnimJoint783->addChildren(*HAnimSegment784);

CHAnimJoint* HAnimJoint791 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint791->setName("l_pinky3");
HAnimJoint791->setDEF("hanim_l_pinky3");
HAnimJoint791->setCenter(new float[3]{0.1948,0.7277,-0.1017});
HAnimJoint791->setSkinCoordIndex(new int[9]{209,210,211,212,213,214,215,216,217});
HAnimJoint791->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint791->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint791->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment792 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment792->setName("l_pinky_distal");
HAnimSegment792->setDEF("hanim_l_pinky_distal");
CTransform* Transform793 = (CTransform *)(m_pScene.createNode("Transform"));
Transform793->setTranslation(new float[3]{0.1948,0.7277,-0.1017});
CShape* Shape794 = (CShape *)(m_pScene.createNode("Shape"));
Shape794->setUSE("jointbox");
Transform793->addChildren(*Shape794);

HAnimSegment792->addChildren(*Transform793);

CShape* Shape795 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance796 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance796->setUSE("SegmentLine");
Shape795->setAppearance(*Appearance796);

CIndexedLineSet* IndexedLineSet797 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet797->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate798 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate798->setPoint(new float[6]{0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012});
IndexedLineSet797->setCoord(*Coordinate798);

Shape795->setGeometry(IndexedLineSet797);

HAnimSegment792->addChildren(*Shape795);

CShape* Shape799 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance800 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance800->setUSE("SiteParentLine");
Shape799->setAppearance(*Appearance800);

CIndexedLineSet* IndexedLineSet801 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet801->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate802 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate802->setPoint(new float[6]{0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012});
IndexedLineSet801->setCoord(*Coordinate802);

Shape799->setGeometry(IndexedLineSet801);

HAnimSegment792->addChildren(*Shape799);

CHAnimSite* HAnimSite803 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite803->setName("l_pinky_distal_tip");
HAnimSite803->setDEF("hanim_l_pinky_distal_tip");
HAnimSite803->setTranslation(new float[3]{0.2014,0.7009,-0.1012});
CShape* Shape804 = (CShape *)(m_pScene.createNode("Shape"));
Shape804->setUSE("sitebox");
HAnimSite803->addChildren(*Shape804);

HAnimSegment792->addChildren(*HAnimSite803);

HAnimJoint791->addChildren(*HAnimSegment792);

HAnimJoint783->addChildren(*HAnimJoint791);

HAnimJoint775->addChildren(*HAnimJoint783);

HAnimJoint767->addChildren(*HAnimJoint775);

HAnimJoint603->addChildren(*HAnimJoint767);

HAnimJoint583->addChildren(*HAnimJoint603);

HAnimJoint569->addChildren(*HAnimJoint583);

HAnimJoint561->addChildren(*HAnimJoint569);

HAnimJoint541->addChildren(*HAnimJoint561);

HAnimJoint411->addChildren(*HAnimJoint541);

CHAnimJoint* HAnimJoint805 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint805->setName("r_sternoclavicular");
HAnimJoint805->setDEF("hanim_r_sternoclavicular");
HAnimJoint805->setCenter(new float[3]{-0.0694,1.46,-0.033});
HAnimJoint805->setSkinCoordIndex(new int[1]{10});
HAnimJoint805->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint805->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint805->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment806 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment806->setName("r_clavicle");
HAnimSegment806->setDEF("hanim_r_clavicle");
CTransform* Transform807 = (CTransform *)(m_pScene.createNode("Transform"));
Transform807->setTranslation(new float[3]{-0.0694,1.46,-0.033});
CShape* Shape808 = (CShape *)(m_pScene.createNode("Shape"));
Shape808->setUSE("jointbox");
Transform807->addChildren(*Shape808);

HAnimSegment806->addChildren(*Transform807);

CShape* Shape809 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance810 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance810->setUSE("SegmentLine");
Shape809->setAppearance(*Appearance810);

CIndexedLineSet* IndexedLineSet811 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet811->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate812 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate812->setPoint(new float[6]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401});
IndexedLineSet811->setCoord(*Coordinate812);

Shape809->setGeometry(IndexedLineSet811);

HAnimSegment806->addChildren(*Shape809);

CShape* Shape813 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance814 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance814->setUSE("SiteParentLine");
Shape813->setAppearance(*Appearance814);

CIndexedLineSet* IndexedLineSet815 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet815->setCoordIndex(new int[12]{0,1,-1,0,2,-1,0,3,-1,0,4,-1});
CCoordinate* Coordinate816 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate816->setPoint(new float[15]{-0.0694,1.46,-0.033,-0.0115,1.4943,0.04,-0.1905,1.4791,-0.0431,-0.1626,1.4072,-0.0031,-0.1603,1.4098,-0.0826});
IndexedLineSet815->setCoord(*Coordinate816);

Shape813->setGeometry(IndexedLineSet815);

HAnimSegment806->addChildren(*Shape813);

CHAnimSite* HAnimSite817 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite817->setName("r_clavicale");
HAnimSite817->setDEF("hanim_r_clavicale");
HAnimSite817->setTranslation(new float[3]{-0.0115,1.4943,0.04});
CShape* Shape818 = (CShape *)(m_pScene.createNode("Shape"));
Shape818->setUSE("sitebox");
HAnimSite817->addChildren(*Shape818);

HAnimSegment806->addChildren(*HAnimSite817);

CHAnimSite* HAnimSite819 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite819->setName("r_acromion");
HAnimSite819->setDEF("hanim_r_acromion");
HAnimSite819->setTranslation(new float[3]{-0.1905,1.4791,-0.0431});
CShape* Shape820 = (CShape *)(m_pScene.createNode("Shape"));
Shape820->setUSE("sitebox");
HAnimSite819->addChildren(*Shape820);

HAnimSegment806->addChildren(*HAnimSite819);

CHAnimSite* HAnimSite821 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite821->setName("r_axilla_ant");
HAnimSite821->setDEF("hanim_r_axilla_ant");
HAnimSite821->setTranslation(new float[3]{-0.1626,1.4072,-0.0031});
CShape* Shape822 = (CShape *)(m_pScene.createNode("Shape"));
Shape822->setUSE("sitebox");
HAnimSite821->addChildren(*Shape822);

HAnimSegment806->addChildren(*HAnimSite821);

CHAnimSite* HAnimSite823 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite823->setName("r_axilla_post");
HAnimSite823->setDEF("hanim_r_axilla_post");
HAnimSite823->setTranslation(new float[3]{-0.1603,1.4098,-0.0826});
CShape* Shape824 = (CShape *)(m_pScene.createNode("Shape"));
Shape824->setUSE("sitebox");
HAnimSite823->addChildren(*Shape824);

HAnimSegment806->addChildren(*HAnimSite823);

HAnimJoint805->addChildren(*HAnimSegment806);

CHAnimJoint* HAnimJoint825 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint825->setName("r_acromioclavicular");
HAnimJoint825->setDEF("hanim_r_acromioclavicular");
HAnimJoint825->setCenter(new float[3]{-0.0836,1.4281,-0.0401});
HAnimJoint825->setSkinCoordIndex(new int[2]{77,29});
HAnimJoint825->setSkinCoordWeight(new float[2]{1,0.9}, 2);
HAnimJoint825->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint825->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment826 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment826->setName("r_scapula");
HAnimSegment826->setDEF("hanim_r_scapula");
CTransform* Transform827 = (CTransform *)(m_pScene.createNode("Transform"));
Transform827->setTranslation(new float[3]{-0.0836,1.4281,-0.0401});
CShape* Shape828 = (CShape *)(m_pScene.createNode("Shape"));
Shape828->setUSE("jointbox");
Transform827->addChildren(*Shape828);

HAnimSegment826->addChildren(*Transform827);

CShape* Shape829 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance830 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance830->setUSE("SegmentLine");
Shape829->setAppearance(*Appearance830);

CIndexedLineSet* IndexedLineSet831 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet831->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate832 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate832->setPoint(new float[6]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325});
IndexedLineSet831->setCoord(*Coordinate832);

Shape829->setGeometry(IndexedLineSet831);

HAnimSegment826->addChildren(*Shape829);

HAnimJoint825->addChildren(*HAnimSegment826);

CHAnimJoint* HAnimJoint833 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint833->setName("r_shoulder");
HAnimJoint833->setDEF("hanim_r_shoulder");
HAnimJoint833->setCenter(new float[3]{-0.1907,1.4407,-0.0325});
HAnimJoint833->setSkinCoordIndex(new int[10]{29,30,32,78,218,219,220,221,86,88});
HAnimJoint833->setSkinCoordWeight(new float[10]{0.1,1,1,1,1,1,1,1,0.3,0.2}, 10);
HAnimJoint833->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint833->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment834 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment834->setName("r_upperarm");
HAnimSegment834->setDEF("hanim_r_upperarm");
CTransform* Transform835 = (CTransform *)(m_pScene.createNode("Transform"));
Transform835->setTranslation(new float[3]{-0.1907,1.4407,-0.0325});
CShape* Shape836 = (CShape *)(m_pScene.createNode("Shape"));
Shape836->setUSE("jointbox");
Transform835->addChildren(*Shape836);

HAnimSegment834->addChildren(*Transform835);

CShape* Shape837 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance838 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance838->setUSE("SegmentLine");
Shape837->setAppearance(*Appearance838);

CIndexedLineSet* IndexedLineSet839 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet839->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate840 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate840->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062});
IndexedLineSet839->setCoord(*Coordinate840);

Shape837->setGeometry(IndexedLineSet839);

HAnimSegment834->addChildren(*Shape837);

CShape* Shape841 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance842 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance842->setUSE("SiteParentLine");
Shape841->setAppearance(*Appearance842);

CIndexedLineSet* IndexedLineSet843 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet843->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate844 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate844->setPoint(new float[6]{-0.1907,1.4407,-0.0325,-0.2224,1.1517,-0.1033});
IndexedLineSet843->setCoord(*Coordinate844);

Shape841->setGeometry(IndexedLineSet843);

HAnimSegment834->addChildren(*Shape841);

CHAnimSite* HAnimSite845 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite845->setName("r_humeral_lateral_epicn");
HAnimSite845->setDEF("hanim_r_humeral_lateral_epicn");
HAnimSite845->setTranslation(new float[3]{-0.2224,1.1517,-0.1033});
CShape* Shape846 = (CShape *)(m_pScene.createNode("Shape"));
Shape846->setUSE("sitebox");
HAnimSite845->addChildren(*Shape846);

HAnimSegment834->addChildren(*HAnimSite845);

HAnimJoint833->addChildren(*HAnimSegment834);

CHAnimJoint* HAnimJoint847 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint847->setName("r_elbow");
HAnimJoint847->setDEF("hanim_r_elbow");
HAnimJoint847->setCenter(new float[3]{-0.1949,1.1388,-0.062});
HAnimJoint847->setSkinCoordIndex(new int[12]{33,34,35,225,226,227,228,229,231,232,233,234});
HAnimJoint847->setSkinCoordWeight(new float[12]{1,1,1,1,1,1,1,1,1,1,1,1}, 12);
HAnimJoint847->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint847->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment848 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment848->setName("r_forearm");
HAnimSegment848->setDEF("hanim_r_forearm");
CTransform* Transform849 = (CTransform *)(m_pScene.createNode("Transform"));
Transform849->setTranslation(new float[3]{-0.1949,1.1388,-0.062});
CShape* Shape850 = (CShape *)(m_pScene.createNode("Shape"));
Shape850->setUSE("jointbox");
Transform849->addChildren(*Shape850);

HAnimSegment848->addChildren(*Transform849);

CShape* Shape851 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance852 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance852->setUSE("SegmentLine");
Shape851->setAppearance(*Appearance852);

CIndexedLineSet* IndexedLineSet853 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet853->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate854 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate854->setPoint(new float[6]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521});
IndexedLineSet853->setCoord(*Coordinate854);

Shape851->setGeometry(IndexedLineSet853);

HAnimSegment848->addChildren(*Shape851);

CShape* Shape855 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance856 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance856->setUSE("SiteParentLine");
Shape855->setAppearance(*Appearance856);

CIndexedLineSet* IndexedLineSet857 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet857->setCoordIndex(new int[12]{0,1,-1,0,2,-1,0,3,-1,0,4,-1});
CCoordinate* Coordinate858 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate858->setPoint(new float[15]{-0.1949,1.1388,-0.062,-0.1884,0.8676,-0.036,-0.1907,1.1405,-0.1065,-0.168,1.1298,-0.1062,-0.213,1.1305,-0.1091});
IndexedLineSet857->setCoord(*Coordinate858);

Shape855->setGeometry(IndexedLineSet857);

HAnimSegment848->addChildren(*Shape855);

CHAnimSite* HAnimSite859 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite859->setName("r_radial_styloid");
HAnimSite859->setDEF("hanim_r_radial_styloid");
HAnimSite859->setTranslation(new float[3]{-0.1884,0.8676,-0.036});
CShape* Shape860 = (CShape *)(m_pScene.createNode("Shape"));
Shape860->setUSE("sitebox");
HAnimSite859->addChildren(*Shape860);

HAnimSegment848->addChildren(*HAnimSite859);

CHAnimSite* HAnimSite861 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite861->setName("r_olecranon");
HAnimSite861->setDEF("hanim_r_olecranon");
HAnimSite861->setTranslation(new float[3]{-0.1907,1.1405,-0.1065});
CShape* Shape862 = (CShape *)(m_pScene.createNode("Shape"));
Shape862->setUSE("sitebox");
HAnimSite861->addChildren(*Shape862);

HAnimSegment848->addChildren(*HAnimSite861);

CHAnimSite* HAnimSite863 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite863->setName("r_humeral_medial_epicn");
HAnimSite863->setDEF("hanim_r_humeral_medial_epicn");
HAnimSite863->setTranslation(new float[3]{-0.168,1.1298,-0.1062});
CShape* Shape864 = (CShape *)(m_pScene.createNode("Shape"));
Shape864->setUSE("sitebox");
HAnimSite863->addChildren(*Shape864);

HAnimSegment848->addChildren(*HAnimSite863);

CHAnimSite* HAnimSite865 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite865->setName("r_radiale");
HAnimSite865->setDEF("hanim_r_radiale");
HAnimSite865->setTranslation(new float[3]{-0.213,1.1305,-0.1091});
CShape* Shape866 = (CShape *)(m_pScene.createNode("Shape"));
Shape866->setUSE("sitebox");
HAnimSite865->addChildren(*Shape866);

HAnimSegment848->addChildren(*HAnimSite865);

HAnimJoint847->addChildren(*HAnimSegment848);

CHAnimJoint* HAnimJoint867 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint867->setName("r_wrist");
HAnimJoint867->setDEF("hanim_r_wrist");
HAnimJoint867->setCenter(new float[3]{-0.1959,0.8694,-0.0521});
HAnimJoint867->setSkinCoordIndex(new int[8]{235,236,237,238,239,240,241,242});
HAnimJoint867->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint867->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint867->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment868 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment868->setName("r_hand");
HAnimSegment868->setDEF("hanim_r_hand");
CTransform* Transform869 = (CTransform *)(m_pScene.createNode("Transform"));
Transform869->setTranslation(new float[3]{-0.1959,0.8694,-0.0521});
CShape* Shape870 = (CShape *)(m_pScene.createNode("Shape"));
Shape870->setUSE("jointbox");
Transform869->addChildren(*Shape870);

HAnimSegment868->addChildren(*Transform869);

CShape* Shape871 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance872 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance872->setUSE("SegmentLine");
Shape871->setAppearance(*Appearance872);

CIndexedLineSet* IndexedLineSet873 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet873->setCoordIndex(new int[15]{0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1});
CCoordinate* Coordinate874 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate874->setPoint(new float[18]{-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473,-0.1961,0.8055,-0.0218,-0.1972,0.806,-0.0468,-0.1951,0.8049,-0.0732,-0.1926,0.8096,-0.0975});
IndexedLineSet873->setCoord(*Coordinate874);

Shape871->setGeometry(IndexedLineSet873);

HAnimSegment868->addChildren(*Shape871);

CShape* Shape875 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance876 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance876->setUSE("SiteParentLine");
Shape875->setAppearance(*Appearance876);

CIndexedLineSet* IndexedLineSet877 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet877->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
CCoordinate* Coordinate878 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate878->setPoint(new float[12]{-0.1959,0.8694,-0.0521,-0.1977,0.8169,-0.0177,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064});
IndexedLineSet877->setCoord(*Coordinate878);

Shape875->setGeometry(IndexedLineSet877);

HAnimSegment868->addChildren(*Shape875);

CHAnimSite* HAnimSite879 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite879->setName("r_metacarpal_pha2");
HAnimSite879->setDEF("hanim_r_metacarpal_pha2");
HAnimSite879->setTranslation(new float[3]{-0.1977,0.8169,-0.0177});
CShape* Shape880 = (CShape *)(m_pScene.createNode("Shape"));
Shape880->setUSE("sitebox");
HAnimSite879->addChildren(*Shape880);

HAnimSegment868->addChildren(*HAnimSite879);

CHAnimSite* HAnimSite881 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite881->setName("r_ulnar_styloid");
HAnimSite881->setDEF("hanim_r_ulnar_styloid");
HAnimSite881->setTranslation(new float[3]{-0.2117,0.8562,-0.0584});
CShape* Shape882 = (CShape *)(m_pScene.createNode("Shape"));
Shape882->setUSE("sitebox");
HAnimSite881->addChildren(*Shape882);

HAnimSegment868->addChildren(*HAnimSite881);

CHAnimSite* HAnimSite883 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite883->setName("r_metacarpal_pha5");
HAnimSite883->setDEF("hanim_r_metacarpal_pha5");
HAnimSite883->setTranslation(new float[3]{-0.1929,0.789,-0.1064});
CShape* Shape884 = (CShape *)(m_pScene.createNode("Shape"));
Shape884->setUSE("sitebox");
HAnimSite883->addChildren(*Shape884);

HAnimSegment868->addChildren(*HAnimSite883);

HAnimJoint867->addChildren(*HAnimSegment868);

CHAnimJoint* HAnimJoint885 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint885->setName("r_thumb1");
HAnimJoint885->setDEF("hanim_r_thumb1");
HAnimJoint885->setCenter(new float[3]{-0.1899,0.8502,-0.0473});
HAnimJoint885->setSkinCoordIndex(new int[2]{243,244});
HAnimJoint885->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint885->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint885->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment886 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment886->setName("r_thumb_metacarpal");
HAnimSegment886->setDEF("hanim_r_thumb_metacarpal");
CTransform* Transform887 = (CTransform *)(m_pScene.createNode("Transform"));
Transform887->setTranslation(new float[3]{-0.1899,0.8502,-0.0473});
CShape* Shape888 = (CShape *)(m_pScene.createNode("Shape"));
Shape888->setUSE("jointbox");
Transform887->addChildren(*Shape888);

HAnimSegment886->addChildren(*Transform887);

CShape* Shape889 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance890 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance890->setUSE("SegmentLine");
Shape889->setAppearance(*Appearance890);

CIndexedLineSet* IndexedLineSet891 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet891->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate892 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate892->setPoint(new float[6]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306});
IndexedLineSet891->setCoord(*Coordinate892);

Shape889->setGeometry(IndexedLineSet891);

HAnimSegment886->addChildren(*Shape889);

HAnimJoint885->addChildren(*HAnimSegment886);

CHAnimJoint* HAnimJoint893 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint893->setName("r_thumb2");
HAnimJoint893->setDEF("hanim_r_thumb2");
HAnimJoint893->setCenter(new float[3]{-0.1874,0.8256,0.0306});
HAnimJoint893->setSkinCoordIndex(new int[6]{254,255,256,257,258,259});
HAnimJoint893->setSkinCoordWeight(new float[6]{0.5,0.5,0.5,1,1,1}, 6);
HAnimJoint893->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint893->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment894 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment894->setName("r_thumb_proximal");
HAnimSegment894->setDEF("hanim_r_thumb_proximal");
CTransform* Transform895 = (CTransform *)(m_pScene.createNode("Transform"));
Transform895->setTranslation(new float[3]{-0.1874,0.8256,0.0306});
CShape* Shape896 = (CShape *)(m_pScene.createNode("Shape"));
Shape896->setUSE("jointbox");
Transform895->addChildren(*Shape896);

HAnimSegment894->addChildren(*Transform895);

CShape* Shape897 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance898 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance898->setUSE("SegmentLine");
Shape897->setAppearance(*Appearance898);

CIndexedLineSet* IndexedLineSet899 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet899->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate900 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate900->setPoint(new float[6]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506});
IndexedLineSet899->setCoord(*Coordinate900);

Shape897->setGeometry(IndexedLineSet899);

HAnimSegment894->addChildren(*Shape897);

HAnimJoint893->addChildren(*HAnimSegment894);

CHAnimJoint* HAnimJoint901 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint901->setName("r_thumb3");
HAnimJoint901->setDEF("hanim_r_thumb3");
HAnimJoint901->setCenter(new float[3]{-0.1864,0.819,0.0506});
HAnimJoint901->setSkinCoordIndex(new int[9]{260,261,262,263,264,265,266,267,268});
HAnimJoint901->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint901->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint901->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment902 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment902->setName("r_thumb_distal");
HAnimSegment902->setDEF("hanim_r_thumb_distal");
CTransform* Transform903 = (CTransform *)(m_pScene.createNode("Transform"));
Transform903->setTranslation(new float[3]{-0.1864,0.819,0.0506});
CShape* Shape904 = (CShape *)(m_pScene.createNode("Shape"));
Shape904->setUSE("jointbox");
Transform903->addChildren(*Shape904);

HAnimSegment902->addChildren(*Transform903);

CShape* Shape905 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance906 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance906->setUSE("SegmentLine");
Shape905->setAppearance(*Appearance906);

CIndexedLineSet* IndexedLineSet907 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet907->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate908 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate908->setPoint(new float[6]{-0.1864,0.819,0.0506,-0.1869,0.809,0.082});
IndexedLineSet907->setCoord(*Coordinate908);

Shape905->setGeometry(IndexedLineSet907);

HAnimSegment902->addChildren(*Shape905);

CShape* Shape909 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance910 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance910->setUSE("SiteParentLine");
Shape909->setAppearance(*Appearance910);

CIndexedLineSet* IndexedLineSet911 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet911->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate912 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate912->setPoint(new float[6]{-0.1864,0.819,0.0506,-0.1869,0.809,0.082});
IndexedLineSet911->setCoord(*Coordinate912);

Shape909->setGeometry(IndexedLineSet911);

HAnimSegment902->addChildren(*Shape909);

CHAnimSite* HAnimSite913 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite913->setName("r_thumb_distal_tip");
HAnimSite913->setDEF("hanim_r_thumb_distal_tip");
HAnimSite913->setTranslation(new float[3]{-0.1869,0.809,0.082});
CShape* Shape914 = (CShape *)(m_pScene.createNode("Shape"));
Shape914->setUSE("sitebox");
HAnimSite913->addChildren(*Shape914);

HAnimSegment902->addChildren(*HAnimSite913);

HAnimJoint901->addChildren(*HAnimSegment902);

HAnimJoint893->addChildren(*HAnimJoint901);

HAnimJoint885->addChildren(*HAnimJoint893);

HAnimJoint867->addChildren(*HAnimJoint885);

CHAnimJoint* HAnimJoint915 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint915->setName("r_index0");
HAnimJoint915->setDEF("hanim_r_index0");
HAnimJoint915->setCenter(new float[3]{-0.1961,0.8055,-0.0218});
HAnimJoint915->setSkinCoordIndex(new int[2]{245,246});
HAnimJoint915->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint915->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint915->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment916 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment916->setName("r_index_metacarpal");
HAnimSegment916->setDEF("hanim_r_index_metacarpal");
CTransform* Transform917 = (CTransform *)(m_pScene.createNode("Transform"));
Transform917->setTranslation(new float[3]{-0.1961,0.8055,-0.0218});
CShape* Shape918 = (CShape *)(m_pScene.createNode("Shape"));
Shape918->setUSE("jointbox");
Transform917->addChildren(*Shape918);

HAnimSegment916->addChildren(*Transform917);

CShape* Shape919 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance920 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance920->setUSE("SegmentLine");
Shape919->setAppearance(*Appearance920);

CIndexedLineSet* IndexedLineSet921 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet921->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate922 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate922->setPoint(new float[6]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218});
IndexedLineSet921->setCoord(*Coordinate922);

Shape919->setGeometry(IndexedLineSet921);

HAnimSegment916->addChildren(*Shape919);

HAnimJoint915->addChildren(*HAnimSegment916);

CHAnimJoint* HAnimJoint923 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint923->setName("r_index1");
HAnimJoint923->setDEF("hanim_r_index1");
HAnimJoint923->setCenter(new float[3]{-0.1961,0.7846,-0.0218});
HAnimJoint923->setSkinCoordIndex(new int[7]{254,255,256,269,270,271,279});
HAnimJoint923->setSkinCoordWeight(new float[7]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimJoint923->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint923->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment924 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment924->setName("r_index_proximal");
HAnimSegment924->setDEF("hanim_r_index_proximal");
CTransform* Transform925 = (CTransform *)(m_pScene.createNode("Transform"));
Transform925->setTranslation(new float[3]{-0.1961,0.7846,-0.0218});
CShape* Shape926 = (CShape *)(m_pScene.createNode("Shape"));
Shape926->setUSE("jointbox");
Transform925->addChildren(*Shape926);

HAnimSegment924->addChildren(*Transform925);

CShape* Shape927 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance928 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance928->setUSE("SegmentLine");
Shape927->setAppearance(*Appearance928);

CIndexedLineSet* IndexedLineSet929 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet929->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate930 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate930->setPoint(new float[6]{-0.1961,0.7846,-0.0218,-0.1945,0.7169,-0.0173});
IndexedLineSet929->setCoord(*Coordinate930);

Shape927->setGeometry(IndexedLineSet929);

HAnimSegment924->addChildren(*Shape927);

HAnimJoint923->addChildren(*HAnimSegment924);

CHAnimJoint* HAnimJoint931 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint931->setName("r_index2");
HAnimJoint931->setDEF("hanim_r_index2");
HAnimJoint931->setCenter(new float[3]{-0.1954,0.7393,-0.0185});
HAnimJoint931->setSkinCoordIndex(new int[4]{282,283,284,285});
HAnimJoint931->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint931->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint931->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment932 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment932->setName("r_index_middle");
HAnimSegment932->setDEF("hanim_r_index_middle");
CTransform* Transform933 = (CTransform *)(m_pScene.createNode("Transform"));
Transform933->setTranslation(new float[3]{-0.1954,0.7393,-0.0185});
CShape* Shape934 = (CShape *)(m_pScene.createNode("Shape"));
Shape934->setUSE("jointbox");
Transform933->addChildren(*Shape934);

HAnimSegment932->addChildren(*Transform933);

CShape* Shape935 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance936 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance936->setUSE("SegmentLine");
Shape935->setAppearance(*Appearance936);

CIndexedLineSet* IndexedLineSet937 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet937->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate938 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate938->setPoint(new float[6]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173});
IndexedLineSet937->setCoord(*Coordinate938);

Shape935->setGeometry(IndexedLineSet937);

HAnimSegment932->addChildren(*Shape935);

HAnimJoint931->addChildren(*HAnimSegment932);

CHAnimJoint* HAnimJoint939 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint939->setName("r_index3");
HAnimJoint939->setDEF("hanim_r_index3");
HAnimJoint939->setCenter(new float[3]{-0.1945,0.7169,-0.0173});
HAnimJoint939->setSkinCoordIndex(new int[9]{286,287,288,289,290,291,292,293,294});
HAnimJoint939->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint939->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint939->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment940 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment940->setName("r_index_distal");
HAnimSegment940->setDEF("hanim_r_index_distal");
CTransform* Transform941 = (CTransform *)(m_pScene.createNode("Transform"));
Transform941->setTranslation(new float[3]{-0.1945,0.7169,-0.0173});
CShape* Shape942 = (CShape *)(m_pScene.createNode("Shape"));
Shape942->setUSE("jointbox");
Transform941->addChildren(*Shape942);

HAnimSegment940->addChildren(*Transform941);

CShape* Shape943 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance944 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance944->setUSE("SegmentLine");
Shape943->setAppearance(*Appearance944);

CIndexedLineSet* IndexedLineSet945 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet945->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate946 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate946->setPoint(new float[6]{-0.1945,0.7169,-0.0173,-0.198,0.6883,-0.018});
IndexedLineSet945->setCoord(*Coordinate946);

Shape943->setGeometry(IndexedLineSet945);

HAnimSegment940->addChildren(*Shape943);

CShape* Shape947 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance948 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance948->setUSE("SiteParentLine");
Shape947->setAppearance(*Appearance948);

CIndexedLineSet* IndexedLineSet949 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet949->setCoordIndex(new int[6]{0,1,-1,0,2,-1});
CCoordinate* Coordinate950 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate950->setPoint(new float[9]{-0.1945,0.7169,-0.0173,-0.198,0.6883,-0.018,-0.1941,0.6772,-0.0423});
IndexedLineSet949->setCoord(*Coordinate950);

Shape947->setGeometry(IndexedLineSet949);

HAnimSegment940->addChildren(*Shape947);

CHAnimSite* HAnimSite951 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite951->setName("r_index_distal_tip");
HAnimSite951->setDEF("hanim_r_index_distal_tip");
HAnimSite951->setTranslation(new float[3]{-0.198,0.6883,-0.018});
CShape* Shape952 = (CShape *)(m_pScene.createNode("Shape"));
Shape952->setUSE("sitebox");
HAnimSite951->addChildren(*Shape952);

HAnimSegment940->addChildren(*HAnimSite951);

CHAnimSite* HAnimSite953 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite953->setName("r_dactylion");
HAnimSite953->setDEF("hanim_r_dactylion");
HAnimSite953->setTranslation(new float[3]{-0.1941,0.6772,-0.0423});
CShape* Shape954 = (CShape *)(m_pScene.createNode("Shape"));
Shape954->setUSE("sitebox");
HAnimSite953->addChildren(*Shape954);

HAnimSegment940->addChildren(*HAnimSite953);

HAnimJoint939->addChildren(*HAnimSegment940);

HAnimJoint931->addChildren(*HAnimJoint939);

HAnimJoint923->addChildren(*HAnimJoint931);

HAnimJoint915->addChildren(*HAnimJoint923);

HAnimJoint867->addChildren(*HAnimJoint915);

CHAnimJoint* HAnimJoint955 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint955->setName("r_middle0");
HAnimJoint955->setDEF("hanim_r_middle0");
HAnimJoint955->setCenter(new float[3]{-0.1972,0.806,-0.0468});
HAnimJoint955->setSkinCoordIndex(new int[2]{247,248});
HAnimJoint955->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint955->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint955->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment956 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment956->setName("r_middle_metacarpal");
HAnimSegment956->setDEF("hanim_r_middle_metacarpal");
CTransform* Transform957 = (CTransform *)(m_pScene.createNode("Transform"));
Transform957->setTranslation(new float[3]{-0.1972,0.806,-0.0468});
CShape* Shape958 = (CShape *)(m_pScene.createNode("Shape"));
Shape958->setUSE("jointbox");
Transform957->addChildren(*Shape958);

HAnimSegment956->addChildren(*Transform957);

CShape* Shape959 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance960 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance960->setUSE("SegmentLine");
Shape959->setAppearance(*Appearance960);

CIndexedLineSet* IndexedLineSet961 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet961->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate962 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate962->setPoint(new float[6]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468});
IndexedLineSet961->setCoord(*Coordinate962);

Shape959->setGeometry(IndexedLineSet961);

HAnimSegment956->addChildren(*Shape959);

HAnimJoint955->addChildren(*HAnimSegment956);

CHAnimJoint* HAnimJoint963 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint963->setName("r_middle1");
HAnimJoint963->setDEF("hanim_r_middle1");
HAnimJoint963->setCenter(new float[3]{-0.1972,0.7849,-0.0468});
HAnimJoint963->setSkinCoordIndex(new int[4]{272,273,279,280});
HAnimJoint963->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
HAnimJoint963->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint963->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment964 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment964->setName("r_middle_proximal");
HAnimSegment964->setDEF("hanim_r_middle_proximal");
CTransform* Transform965 = (CTransform *)(m_pScene.createNode("Transform"));
Transform965->setTranslation(new float[3]{-0.1972,0.7849,-0.0468});
CShape* Shape966 = (CShape *)(m_pScene.createNode("Shape"));
Shape966->setUSE("jointbox");
Transform965->addChildren(*Shape966);

HAnimSegment964->addChildren(*Transform965);

CShape* Shape967 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance968 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance968->setUSE("SegmentLine");
Shape967->setAppearance(*Appearance968);

CIndexedLineSet* IndexedLineSet969 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet969->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate970 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate970->setPoint(new float[6]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441});
IndexedLineSet969->setCoord(*Coordinate970);

Shape967->setGeometry(IndexedLineSet969);

HAnimSegment964->addChildren(*Shape967);

HAnimJoint963->addChildren(*HAnimSegment964);

CHAnimJoint* HAnimJoint971 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint971->setName("r_middle2");
HAnimJoint971->setDEF("hanim_r_middle2");
HAnimJoint971->setCenter(new float[3]{-0.195,0.7304,-0.0441});
HAnimJoint971->setSkinCoordIndex(new int[4]{295,296,297,298});
HAnimJoint971->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint971->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint971->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment972 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment972->setName("r_middle_middle");
HAnimSegment972->setDEF("hanim_r_middle_middle");
CTransform* Transform973 = (CTransform *)(m_pScene.createNode("Transform"));
Transform973->setTranslation(new float[3]{-0.195,0.7304,-0.0441});
CShape* Shape974 = (CShape *)(m_pScene.createNode("Shape"));
Shape974->setUSE("jointbox");
Transform973->addChildren(*Shape974);

HAnimSegment972->addChildren(*Transform973);

CShape* Shape975 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance976 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance976->setUSE("SegmentLine");
Shape975->setAppearance(*Appearance976);

CIndexedLineSet* IndexedLineSet977 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet977->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate978 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate978->setPoint(new float[6]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432});
IndexedLineSet977->setCoord(*Coordinate978);

Shape975->setGeometry(IndexedLineSet977);

HAnimSegment972->addChildren(*Shape975);

HAnimJoint971->addChildren(*HAnimSegment972);

CHAnimJoint* HAnimJoint979 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint979->setName("r_middle3");
HAnimJoint979->setDEF("hanim_r_middle3");
HAnimJoint979->setCenter(new float[3]{-0.1939,0.7042,-0.0432});
HAnimJoint979->setSkinCoordIndex(new int[9]{299,300,301,302,303,304,305,306,307});
HAnimJoint979->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint979->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint979->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment980 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment980->setName("r_middle_distal");
HAnimSegment980->setDEF("hanim_r_middle_distal");
CTransform* Transform981 = (CTransform *)(m_pScene.createNode("Transform"));
Transform981->setTranslation(new float[3]{-0.1939,0.7042,-0.0432});
CShape* Shape982 = (CShape *)(m_pScene.createNode("Shape"));
Shape982->setUSE("jointbox");
Transform981->addChildren(*Shape982);

HAnimSegment980->addChildren(*Transform981);

CShape* Shape983 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance984 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance984->setUSE("SegmentLine");
Shape983->setAppearance(*Appearance984);

CIndexedLineSet* IndexedLineSet985 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet985->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate986 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate986->setPoint(new float[6]{-0.1939,0.7042,-0.0432,-0.1969,0.6758,-0.0427});
IndexedLineSet985->setCoord(*Coordinate986);

Shape983->setGeometry(IndexedLineSet985);

HAnimSegment980->addChildren(*Shape983);

CShape* Shape987 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance988 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance988->setUSE("SiteParentLine");
Shape987->setAppearance(*Appearance988);

CIndexedLineSet* IndexedLineSet989 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet989->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate990 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate990->setPoint(new float[6]{-0.1939,0.7042,-0.0432,-0.1969,0.6758,-0.0427});
IndexedLineSet989->setCoord(*Coordinate990);

Shape987->setGeometry(IndexedLineSet989);

HAnimSegment980->addChildren(*Shape987);

CHAnimSite* HAnimSite991 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite991->setName("r_middle_distal_tip");
HAnimSite991->setDEF("hanim_r_middle_distal_tip");
HAnimSite991->setTranslation(new float[3]{-0.1969,0.6758,-0.0427});
CShape* Shape992 = (CShape *)(m_pScene.createNode("Shape"));
Shape992->setUSE("sitebox");
HAnimSite991->addChildren(*Shape992);

HAnimSegment980->addChildren(*HAnimSite991);

HAnimJoint979->addChildren(*HAnimSegment980);

HAnimJoint971->addChildren(*HAnimJoint979);

HAnimJoint963->addChildren(*HAnimJoint971);

HAnimJoint955->addChildren(*HAnimJoint963);

HAnimJoint867->addChildren(*HAnimJoint955);

CHAnimJoint* HAnimJoint993 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint993->setName("r_ring0");
HAnimJoint993->setDEF("hanim_r_ring0");
HAnimJoint993->setCenter(new float[3]{-0.1951,0.8049,-0.0732});
HAnimJoint993->setSkinCoordIndex(new int[2]{249,250});
HAnimJoint993->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint993->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint993->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment994 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment994->setName("r_ring_metacarpal");
HAnimSegment994->setDEF("hanim_r_ring_metacarpal");
CTransform* Transform995 = (CTransform *)(m_pScene.createNode("Transform"));
Transform995->setTranslation(new float[3]{-0.1951,0.8049,-0.0732});
CShape* Shape996 = (CShape *)(m_pScene.createNode("Shape"));
Shape996->setUSE("jointbox");
Transform995->addChildren(*Shape996);

HAnimSegment994->addChildren(*Transform995);

CShape* Shape997 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance998 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance998->setUSE("SegmentLine");
Shape997->setAppearance(*Appearance998);

CIndexedLineSet* IndexedLineSet999 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet999->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1000 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1000->setPoint(new float[6]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732});
IndexedLineSet999->setCoord(*Coordinate1000);

Shape997->setGeometry(IndexedLineSet999);

HAnimSegment994->addChildren(*Shape997);

HAnimJoint993->addChildren(*HAnimSegment994);

CHAnimJoint* HAnimJoint1001 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1001->setName("r_ring1");
HAnimJoint1001->setDEF("hanim_r_ring1");
HAnimJoint1001->setCenter(new float[3]{-0.1951,0.7845,-0.0732});
HAnimJoint1001->setSkinCoordIndex(new int[4]{274,275,280,281});
HAnimJoint1001->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
HAnimJoint1001->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1001->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1002 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1002->setName("r_ring_proximal");
HAnimSegment1002->setDEF("hanim_r_ring_proximal");
CTransform* Transform1003 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1003->setTranslation(new float[3]{-0.1951,0.7845,-0.0732});
CShape* Shape1004 = (CShape *)(m_pScene.createNode("Shape"));
Shape1004->setUSE("jointbox");
Transform1003->addChildren(*Shape1004);

HAnimSegment1002->addChildren(*Transform1003);

CShape* Shape1005 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1006 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1006->setUSE("SegmentLine");
Shape1005->setAppearance(*Appearance1006);

CIndexedLineSet* IndexedLineSet1007 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1007->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1008 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1008->setPoint(new float[6]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716});
IndexedLineSet1007->setCoord(*Coordinate1008);

Shape1005->setGeometry(IndexedLineSet1007);

HAnimSegment1002->addChildren(*Shape1005);

HAnimJoint1001->addChildren(*HAnimSegment1002);

CHAnimJoint* HAnimJoint1009 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1009->setName("r_ring2");
HAnimJoint1009->setDEF("hanim_r_ring2");
HAnimJoint1009->setCenter(new float[3]{-0.192,0.7318,-0.0716});
HAnimJoint1009->setSkinCoordIndex(new int[4]{308,309,310,311});
HAnimJoint1009->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint1009->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1009->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1010 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1010->setName("r_ring_middle");
HAnimSegment1010->setDEF("hanim_r_ring_middle");
CTransform* Transform1011 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1011->setTranslation(new float[3]{-0.192,0.7318,-0.0716});
CShape* Shape1012 = (CShape *)(m_pScene.createNode("Shape"));
Shape1012->setUSE("jointbox");
Transform1011->addChildren(*Shape1012);

HAnimSegment1010->addChildren(*Transform1011);

CShape* Shape1013 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1014 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1014->setUSE("SegmentLine");
Shape1013->setAppearance(*Appearance1014);

CIndexedLineSet* IndexedLineSet1015 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1015->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1016 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1016->setPoint(new float[6]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.07063});
IndexedLineSet1015->setCoord(*Coordinate1016);

Shape1013->setGeometry(IndexedLineSet1015);

HAnimSegment1010->addChildren(*Shape1013);

HAnimJoint1009->addChildren(*HAnimSegment1010);

CHAnimJoint* HAnimJoint1017 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1017->setName("r_ring3");
HAnimJoint1017->setDEF("hanim_r_ring3");
HAnimJoint1017->setCenter(new float[3]{-0.1908,0.7077,-0.0706});
HAnimJoint1017->setSkinCoordIndex(new int[9]{312,313,314,315,316,317,318,319,320});
HAnimJoint1017->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint1017->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1017->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1018 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1018->setName("r_ring_distal");
HAnimSegment1018->setDEF("hanim_r_ring_distal");
CTransform* Transform1019 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1019->setTranslation(new float[3]{-0.1908,0.7077,-0.0706});
CShape* Shape1020 = (CShape *)(m_pScene.createNode("Shape"));
Shape1020->setUSE("jointbox");
Transform1019->addChildren(*Shape1020);

HAnimSegment1018->addChildren(*Transform1019);

CShape* Shape1021 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1022 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1022->setUSE("SegmentLine");
Shape1021->setAppearance(*Appearance1022);

CIndexedLineSet* IndexedLineSet1023 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1023->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1024 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1024->setPoint(new float[6]{-0.1908,0.7077,-0.0706,-0.1934,0.6778,-0.0693});
IndexedLineSet1023->setCoord(*Coordinate1024);

Shape1021->setGeometry(IndexedLineSet1023);

HAnimSegment1018->addChildren(*Shape1021);

CShape* Shape1025 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1026 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1026->setUSE("SiteParentLine");
Shape1025->setAppearance(*Appearance1026);

CIndexedLineSet* IndexedLineSet1027 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1027->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1028 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1028->setPoint(new float[6]{-0.1908,0.7077,-0.0706,-0.1934,0.6778,-0.0693});
IndexedLineSet1027->setCoord(*Coordinate1028);

Shape1025->setGeometry(IndexedLineSet1027);

HAnimSegment1018->addChildren(*Shape1025);

CHAnimSite* HAnimSite1029 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1029->setName("r_ring_distal_tip");
HAnimSite1029->setDEF("hanim_r_ring_distal_tip");
HAnimSite1029->setTranslation(new float[3]{-0.1934,0.6778,-0.0693});
CShape* Shape1030 = (CShape *)(m_pScene.createNode("Shape"));
Shape1030->setUSE("sitebox");
HAnimSite1029->addChildren(*Shape1030);

HAnimSegment1018->addChildren(*HAnimSite1029);

HAnimJoint1017->addChildren(*HAnimSegment1018);

HAnimJoint1009->addChildren(*HAnimJoint1017);

HAnimJoint1001->addChildren(*HAnimJoint1009);

HAnimJoint993->addChildren(*HAnimJoint1001);

HAnimJoint867->addChildren(*HAnimJoint993);

CHAnimJoint* HAnimJoint1031 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1031->setName("r_pinky0");
HAnimJoint1031->setDEF("hanim_r_pinky0");
HAnimJoint1031->setCenter(new float[3]{-0.1926,0.8096,-0.0975});
HAnimJoint1031->setSkinCoordIndex(new int[4]{251,252,253,281});
HAnimJoint1031->setSkinCoordWeight(new float[4]{1,1,1,0.5}, 4);
HAnimJoint1031->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1031->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1032 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1032->setName("r_pinky_metacarpal");
HAnimSegment1032->setDEF("hanim_r_pinky_metacarpal");
CTransform* Transform1033 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1033->setTranslation(new float[3]{-0.1926,0.8096,-0.0975});
CShape* Shape1034 = (CShape *)(m_pScene.createNode("Shape"));
Shape1034->setUSE("jointbox");
Transform1033->addChildren(*Shape1034);

HAnimSegment1032->addChildren(*Transform1033);

CShape* Shape1035 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1036 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1036->setUSE("SegmentLine");
Shape1035->setAppearance(*Appearance1036);

CIndexedLineSet* IndexedLineSet1037 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1037->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1038 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1038->setPoint(new float[6]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975});
IndexedLineSet1037->setCoord(*Coordinate1038);

Shape1035->setGeometry(IndexedLineSet1037);

HAnimSegment1032->addChildren(*Shape1035);

HAnimJoint1031->addChildren(*HAnimSegment1032);

CHAnimJoint* HAnimJoint1039 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1039->setName("r_pinky1");
HAnimJoint1039->setDEF("hanim_r_pinky1");
HAnimJoint1039->setCenter(new float[3]{-0.1926,0.7896,-0.0975});
HAnimJoint1039->setSkinCoordIndex(new int[3]{276,277,278});
HAnimJoint1039->setSkinCoordWeight(new float[3]{1,1,1}, 3);
HAnimJoint1039->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1039->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1040 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1040->setName("r_pinky_proximal");
HAnimSegment1040->setDEF("hanim_r_pinky_proximal");
CTransform* Transform1041 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1041->setTranslation(new float[3]{-0.1926,0.7896,-0.0975});
CShape* Shape1042 = (CShape *)(m_pScene.createNode("Shape"));
Shape1042->setUSE("jointbox");
Transform1041->addChildren(*Shape1042);

HAnimSegment1040->addChildren(*Transform1041);

CShape* Shape1043 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1044 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1044->setUSE("SegmentLine");
Shape1043->setAppearance(*Appearance1044);

CIndexedLineSet* IndexedLineSet1045 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1045->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1046 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1046->setPoint(new float[6]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963});
IndexedLineSet1045->setCoord(*Coordinate1046);

Shape1043->setGeometry(IndexedLineSet1045);

HAnimSegment1040->addChildren(*Shape1043);

HAnimJoint1039->addChildren(*HAnimSegment1040);

CHAnimJoint* HAnimJoint1047 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1047->setName("r_pinky2");
HAnimJoint1047->setDEF("hanim_r_pinky2");
HAnimJoint1047->setCenter(new float[3]{-0.1902,0.7483,-0.0963});
HAnimJoint1047->setSkinCoordIndex(new int[4]{321,322,323,324});
HAnimJoint1047->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint1047->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1047->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1048 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1048->setName("r_pinky_middle");
HAnimSegment1048->setDEF("hanim_r_pinky_middle");
CTransform* Transform1049 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1049->setTranslation(new float[3]{-0.1902,0.7483,-0.0963});
CShape* Shape1050 = (CShape *)(m_pScene.createNode("Shape"));
Shape1050->setUSE("jointbox");
Transform1049->addChildren(*Shape1050);

HAnimSegment1048->addChildren(*Transform1049);

CShape* Shape1051 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1052 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1052->setUSE("SegmentLine");
Shape1051->setAppearance(*Appearance1052);

CIndexedLineSet* IndexedLineSet1053 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1053->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1054 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1054->setPoint(new float[6]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096});
IndexedLineSet1053->setCoord(*Coordinate1054);

Shape1051->setGeometry(IndexedLineSet1053);

HAnimSegment1048->addChildren(*Shape1051);

HAnimJoint1047->addChildren(*HAnimSegment1048);

CHAnimJoint* HAnimJoint1055 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1055->setName("r_pinky3");
HAnimJoint1055->setDEF("hanim_r_pinky3");
HAnimJoint1055->setCenter(new float[3]{-0.1908,0.754,-0.096});
HAnimJoint1055->setSkinCoordIndex(new int[9]{325,326,327,328,329,330,331,332,333});
HAnimJoint1055->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint1055->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1055->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1056 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1056->setName("r_pinky_distal");
HAnimSegment1056->setDEF("hanim_r_pinky_distal");
CTransform* Transform1057 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1057->setTranslation(new float[3]{-0.1908,0.754,-0.096});
CShape* Shape1058 = (CShape *)(m_pScene.createNode("Shape"));
Shape1058->setUSE("jointbox");
Transform1057->addChildren(*Shape1058);

HAnimSegment1056->addChildren(*Transform1057);

CShape* Shape1059 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1060 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1060->setUSE("SegmentLine");
Shape1059->setAppearance(*Appearance1060);

CIndexedLineSet* IndexedLineSet1061 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1061->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1062 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1062->setPoint(new float[6]{-0.1908,0.754,-0.096,-0.1938,0.7035,-0.0949});
IndexedLineSet1061->setCoord(*Coordinate1062);

Shape1059->setGeometry(IndexedLineSet1061);

HAnimSegment1056->addChildren(*Shape1059);

CShape* Shape1063 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1064 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1064->setUSE("SiteParentLine");
Shape1063->setAppearance(*Appearance1064);

CIndexedLineSet* IndexedLineSet1065 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1065->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1066 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1066->setPoint(new float[6]{-0.1908,0.754,-0.096,-0.1938,0.7035,-0.0949});
IndexedLineSet1065->setCoord(*Coordinate1066);

Shape1063->setGeometry(IndexedLineSet1065);

HAnimSegment1056->addChildren(*Shape1063);

CHAnimSite* HAnimSite1067 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1067->setName("r_pinky_distal_tip");
HAnimSite1067->setDEF("hanim_r_pinky_distal_tip");
HAnimSite1067->setTranslation(new float[3]{-0.1938,0.7035,-0.0949});
CShape* Shape1068 = (CShape *)(m_pScene.createNode("Shape"));
Shape1068->setUSE("sitebox");
HAnimSite1067->addChildren(*Shape1068);

HAnimSegment1056->addChildren(*HAnimSite1067);

HAnimJoint1055->addChildren(*HAnimSegment1056);

HAnimJoint1047->addChildren(*HAnimJoint1055);

HAnimJoint1039->addChildren(*HAnimJoint1047);

HAnimJoint1031->addChildren(*HAnimJoint1039);

HAnimJoint867->addChildren(*HAnimJoint1031);

HAnimJoint847->addChildren(*HAnimJoint867);

HAnimJoint833->addChildren(*HAnimJoint847);

HAnimJoint825->addChildren(*HAnimJoint833);

HAnimJoint805->addChildren(*HAnimJoint825);

HAnimJoint411->addChildren(*HAnimJoint805);

HAnimJoint403->addChildren(*HAnimJoint411);

HAnimJoint395->addChildren(*HAnimJoint403);

HAnimJoint387->addChildren(*HAnimJoint395);

HAnimJoint379->addChildren(*HAnimJoint387);

HAnimJoint371->addChildren(*HAnimJoint379);

HAnimJoint363->addChildren(*HAnimJoint371);

HAnimJoint355->addChildren(*HAnimJoint363);

HAnimJoint339->addChildren(*HAnimJoint355);

HAnimJoint325->addChildren(*HAnimJoint339);

HAnimJoint317->addChildren(*HAnimJoint325);

HAnimJoint309->addChildren(*HAnimJoint317);

HAnimJoint301->addChildren(*HAnimJoint309);

HAnimJoint283->addChildren(*HAnimJoint301);

HAnimJoint275->addChildren(*HAnimJoint283);

HAnimJoint267->addChildren(*HAnimJoint275);

HAnimJoint251->addChildren(*HAnimJoint267);

HAnimJoint41->addChildren(*HAnimJoint251);

HAnimHumanoid40->setSkeleton(*HAnimJoint41);

CCoordinate* Coordinate1069 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1069->setDEF("JoeSkinCoord");
Coordinate1069->setPoint(new float[1170]{0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0.0034,0.8266,0.0257,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.78,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168});
HAnimHumanoid40->setSkinCoord(*Coordinate1069);

CShape* Shape1070 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance1071 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1072 = (CMaterial *)(m_pScene.createNode("Material"));
Material1072->setAmbientIntensity(0.9);
Material1072->setDiffuseColor(new float[3]{0.5,0,0.5});
Material1072->setSpecularColor(new float[3]{1,1,1});
Material1072->setEmissiveColor(new float[3]{0.13,0.55,0.13});
Material1072->setShininess(0.9);
Material1072->setTransparency(0.4);
Appearance1071->setMaterial(*Material1072);

CImageTexture* ImageTexture1073 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1073->setUrl(new CString[1]{"cbodytexture28.png"}, 1);
Appearance1071->setTexture(*ImageTexture1073);

Shape1070->setAppearance(*Appearance1071);

CIndexedFaceSet* IndexedFaceSet1074 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1074->setCreaseAngle(3.1);
IndexedFaceSet1074->setColorPerVertex(False);
IndexedFaceSet1074->setCoordIndex(new int[2780]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
CCoordinate* Coordinate1075 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1075->setUSE("JoeSkinCoord");
IndexedFaceSet1074->setCoord(*Coordinate1075);

Shape1070->setGeometry(IndexedFaceSet1074);

HAnimHumanoid40->setSkin(*Shape1070);

Group39->addChildren(*HAnimHumanoid40);

group->addChildren(*Group39);

CGroup* Group1076 = (CGroup *)(m_pScene.createNode("Group"));
Group1076->setDEF("SceneViewpoints");
CViewpoint* Viewpoint1077 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1077->setDEF("hanim_InclinedView");
Viewpoint1077->setDescription("hanim_Inclined View");
Viewpoint1077->setPosition(new float[3]{1.62,1.05,2.06});
Viewpoint1077->setOrientation(new float[4]{-0.113,0.993,0.0347,0.671});
Viewpoint1077->setCenterOfRotation(new float[3]{0,0.824,0.0277});
Group1076->addChildren(*Viewpoint1077);

CViewpoint* Viewpoint1078 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1078->setDEF("hanim_IFrontView_1");
Viewpoint1078->setDescription("hanim_Front View");
Viewpoint1078->setPosition(new float[3]{0,0.854,2.57665});
Viewpoint1078->setCenterOfRotation(new float[3]{0,0.824,0.0277});
Group1076->addChildren(*Viewpoint1078);

CViewpoint* Viewpoint1079 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1079->setDEF("hanim_ISideView_1");
Viewpoint1079->setDescription("hanim_Side View");
Viewpoint1079->setPosition(new float[3]{2.5929,0.854,0});
Viewpoint1079->setOrientation(new float[4]{0,1,0,1.5708});
Viewpoint1079->setCenterOfRotation(new float[3]{0,0.824,0.0277});
Group1076->addChildren(*Viewpoint1079);

CViewpoint* Viewpoint1080 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1080->setDEF("hanim_ITopView");
Viewpoint1080->setDescription("hanim_Top View");
Viewpoint1080->setPosition(new float[3]{0,3.4495,0});
Viewpoint1080->setOrientation(new float[4]{1,0,0,-1.5708});
Viewpoint1080->setCenterOfRotation(new float[3]{0,0.824,0.0277});
Group1076->addChildren(*Viewpoint1080);

CViewpoint* Viewpoint1081 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1081->setDEF("hanim_IRightHandFront");
Viewpoint1081->setDescription("hanim_RightHandFront View");
Viewpoint1081->setPosition(new float[3]{-0.3,0.75,0.45});
Viewpoint1081->setCenterOfRotation(new float[3]{-0.1959,0.8694,-0.0521});
Group1076->addChildren(*Viewpoint1081);

CViewpoint* Viewpoint1082 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1082->setDEF("hanim_ILeftHandFront");
Viewpoint1082->setDescription("hanim_LeftHandFront View");
Viewpoint1082->setPosition(new float[3]{0.3,0.75,0.45});
Viewpoint1082->setCenterOfRotation(new float[3]{0.1959,0.8694,-0.0521});
Group1076->addChildren(*Viewpoint1082);

CViewpoint* Viewpoint1083 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1083->setDEF("hanim_InclinedView2");
Viewpoint1083->setDescription("hanim_Inclined View2");
Viewpoint1083->setPosition(new float[3]{-1.62,1.05,2.06});
Viewpoint1083->setOrientation(new float[4]{-0.113,-0.993,0.0347,0.671});
Viewpoint1083->setCenterOfRotation(new float[3]{0,0.824,0.0277});
Group1076->addChildren(*Viewpoint1083);

CViewpoint* Viewpoint1084 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1084->setDEF("hanim_IFrontView");
Viewpoint1084->setDescription("hanim_Front View2");
Viewpoint1084->setPosition(new float[3]{0,0.854,1.575});
Viewpoint1084->setCenterOfRotation(new float[3]{0,0.824,0.0277});
Group1076->addChildren(*Viewpoint1084);

CViewpoint* Viewpoint1085 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1085->setDEF("hanim_ISideView");
Viewpoint1085->setDescription("hanim_Side View2");
Viewpoint1085->setPosition(new float[3]{1.5929,0.854,0});
Viewpoint1085->setOrientation(new float[4]{0,1,0,1.5708});
Viewpoint1085->setCenterOfRotation(new float[3]{0,0.824,0.0277});
Group1076->addChildren(*Viewpoint1085);

CViewpoint* Viewpoint1086 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1086->setDEF("hanim_IHeadFront");
Viewpoint1086->setDescription("hanim_HeadFront View");
Viewpoint1086->setPosition(new float[3]{0,1.5,1});
Viewpoint1086->setCenterOfRotation(new float[3]{0.0066,1.5357,-0.0143});
Group1076->addChildren(*Viewpoint1086);

CViewpoint* Viewpoint1087 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1087->setDEF("hanim_IChestFront");
Viewpoint1087->setDescription("hanim_ChestFront View");
Viewpoint1087->setPosition(new float[3]{0,1.2,1});
Viewpoint1087->setCenterOfRotation(new float[3]{0.0066,1.5357,-0.0143});
Group1076->addChildren(*Viewpoint1087);

CViewpoint* Viewpoint1088 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1088->setDEF("hanim_IPelvisFront");
Viewpoint1088->setDescription("hanim_PelvisFront View");
Viewpoint1088->setPosition(new float[3]{0,0.8,1});
Viewpoint1088->setCenterOfRotation(new float[3]{0,0.824,0.0277});
Group1076->addChildren(*Viewpoint1088);

CViewpoint* Viewpoint1089 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1089->setDEF("hanim_IKneesFront");
Viewpoint1089->setDescription("hanim_KneesFront View");
Viewpoint1089->setPosition(new float[3]{0,0.4,1});
Viewpoint1089->setCenterOfRotation(new float[3]{0,0.824,0.0277});
Group1076->addChildren(*Viewpoint1089);

group->addChildren(*Group1076);

CGroup* Group1090 = (CGroup *)(m_pScene.createNode("Group"));
Group1090->setDEF("StandAnimation");
CTimeSensor* TimeSensor1091 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor1091->setDEF("StandTimer");
TimeSensor1091->setCycleInterval(5.73);
TimeSensor1091->setLoop(True);
Group1090->addChildren(*TimeSensor1091);

COrientationInterpolator* OrientationInterpolator1092 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1092->setDEF("Stand_r_metatarsalPitch");
OrientationInterpolator1092->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator1092->setKeyValue(new float[24]{1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0});
Group1090->addChildren(*OrientationInterpolator1092);

COrientationInterpolator* OrientationInterpolator1093 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1093->setDEF("Stand_r_ankleRotInterp");
OrientationInterpolator1093->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1093->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1093);

COrientationInterpolator* OrientationInterpolator1094 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1094->setDEF("Stand_r_kneeRotInterp");
OrientationInterpolator1094->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1094->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1094);

COrientationInterpolator* OrientationInterpolator1095 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1095->setDEF("Stand_r_hipRotInterp");
OrientationInterpolator1095->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1095->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1095);

COrientationInterpolator* OrientationInterpolator1096 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1096->setDEF("Stand_l_ankleRotInterp");
OrientationInterpolator1096->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1096->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1096);

COrientationInterpolator* OrientationInterpolator1097 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1097->setDEF("Stand_l_kneeRotInterp");
OrientationInterpolator1097->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1097->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1097);

COrientationInterpolator* OrientationInterpolator1098 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1098->setDEF("Stand_l_hipRotInterp");
OrientationInterpolator1098->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1098->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1098);

COrientationInterpolator* OrientationInterpolator1099 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1099->setDEF("Stand_r_wristRotInterp");
OrientationInterpolator1099->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1099->setKeyValue(new float[12]{0,0,1,0,0,0,-1,0.25,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1099);

COrientationInterpolator* OrientationInterpolator1100 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1100->setDEF("Stand_r_elbowRotInterp");
OrientationInterpolator1100->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1100->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1100);

COrientationInterpolator* OrientationInterpolator1101 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1101->setDEF("Stand_r_shoulderRotInterp");
OrientationInterpolator1101->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1101->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1101);

COrientationInterpolator* OrientationInterpolator1102 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1102->setDEF("Stand_l_wristRotInterp");
OrientationInterpolator1102->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1102->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1102);

COrientationInterpolator* OrientationInterpolator1103 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1103->setDEF("Stand_l_elbowRotInterp");
OrientationInterpolator1103->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1103->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1103);

COrientationInterpolator* OrientationInterpolator1104 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1104->setDEF("Stand_l_shoulderRotInterp");
OrientationInterpolator1104->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1104->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1104);

COrientationInterpolator* OrientationInterpolator1105 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1105->setDEF("Stand_headRotInterp");
OrientationInterpolator1105->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1105->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1105);

COrientationInterpolator* OrientationInterpolator1106 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1106->setDEF("Stand_neckRotInterp");
OrientationInterpolator1106->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1106->setKeyValue(new float[12]{0,0,1,0,-1,0,0,0.5,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1106);

COrientationInterpolator* OrientationInterpolator1107 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1107->setDEF("Stand_l_eyeballRotInterp");
OrientationInterpolator1107->setKey(new float[4]{0,0.4,0.7,1}, 4);
OrientationInterpolator1107->setKeyValue(new float[16]{0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1107);

COrientationInterpolator* OrientationInterpolator1108 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1108->setDEF("Stand_r_eyeballRotInterp");
OrientationInterpolator1108->setKey(new float[4]{0,0.4,0.7,1}, 4);
OrientationInterpolator1108->setKeyValue(new float[16]{0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1108);

COrientationInterpolator* OrientationInterpolator1109 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1109->setDEF("Stand_lower_bodyRotInterp");
OrientationInterpolator1109->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1109->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1109);

COrientationInterpolator* OrientationInterpolator1110 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1110->setDEF("Stand_upper_bodyRotInterp");
OrientationInterpolator1110->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1110->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1110);

COrientationInterpolator* OrientationInterpolator1111 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1111->setDEF("Stand_whole_bodyRotInterp");
OrientationInterpolator1111->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1111->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1111);

CPositionInterpolator* PositionInterpolator1112 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator1112->setDEF("Stand_whole_bodyTransInterp");
PositionInterpolator1112->setKey(new float[3]{0,0.5,1}, 3);
PositionInterpolator1112->setKeyValue(new float[9]{0,0,0,0,0,0,0,0,0});
Group1090->addChildren(*PositionInterpolator1112);

COrientationInterpolator* OrientationInterpolator1113 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1113->setDEF("Stand_l_sternoclavicularRoll");
OrientationInterpolator1113->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1113->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1113);

COrientationInterpolator* OrientationInterpolator1114 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1114->setDEF("Stand_l_acromioclavicularRoll");
OrientationInterpolator1114->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1114->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1114);

COrientationInterpolator* OrientationInterpolator1115 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1115->setDEF("Stand_r_sternoclavicularRoll");
OrientationInterpolator1115->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1115->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1115);

COrientationInterpolator* OrientationInterpolator1116 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1116->setDEF("Stand_r_acromioclavicularRoll");
OrientationInterpolator1116->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1116->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1116);

COrientationInterpolator* OrientationInterpolator1117 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1117->setDEF("Stand_sacroiliacYaw");
OrientationInterpolator1117->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1117->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1117);

COrientationInterpolator* OrientationInterpolator1118 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1118->setDEF("Stand_vl5Yaw");
OrientationInterpolator1118->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator1118->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1118);

COrientationInterpolator* OrientationInterpolator1119 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1119->setDEF("Stand_vc6Yaw");
OrientationInterpolator1119->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator1119->setKeyValue(new float[28]{0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0});
Group1090->addChildren(*OrientationInterpolator1119);

COrientationInterpolator* OrientationInterpolator1120 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1120->setDEF("Stand_l_thumb1Pitch");
OrientationInterpolator1120->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1120->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1120);

COrientationInterpolator* OrientationInterpolator1121 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1121->setDEF("Stand_r_thumb1Pitch");
OrientationInterpolator1121->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1121->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0});
Group1090->addChildren(*OrientationInterpolator1121);

COrientationInterpolator* OrientationInterpolator1122 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1122->setDEF("Stand_r_index1Roll");
OrientationInterpolator1122->setKey(new float[6]{0,0.2,0.4,0.5,0.8,1}, 6);
OrientationInterpolator1122->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1122);

COrientationInterpolator* OrientationInterpolator1123 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1123->setDEF("Stand_r_index2Roll");
OrientationInterpolator1123->setKey(new float[6]{0,0.2,0.4,0.5,0.8,1}, 6);
OrientationInterpolator1123->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1123);

COrientationInterpolator* OrientationInterpolator1124 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1124->setDEF("Stand_r_index3Roll");
OrientationInterpolator1124->setKey(new float[6]{0,0.2,0.4,0.5,0.8,1}, 6);
OrientationInterpolator1124->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0});
Group1090->addChildren(*OrientationInterpolator1124);

group->addChildren(*Group1090);

CGroup* Group1125 = (CGroup *)(m_pScene.createNode("Group"));
Group1125->setDEF("PitchesAnimation");
CTimeSensor* TimeSensor1126 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor1126->setDEF("PitchTimer");
TimeSensor1126->setCycleInterval(5.73);
TimeSensor1126->setLoop(True);
Group1125->addChildren(*TimeSensor1126);

COrientationInterpolator* OrientationInterpolator1127 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1127->setDEF("Pitch_r_metatarsalPitch");
OrientationInterpolator1127->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator1127->setKeyValue(new float[24]{1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0});
Group1125->addChildren(*OrientationInterpolator1127);

COrientationInterpolator* OrientationInterpolator1128 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1128->setDEF("Pitches_r_ankleRotInterp");
OrientationInterpolator1128->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1128->setKeyValue(new float[20]{0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1128);

COrientationInterpolator* OrientationInterpolator1129 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1129->setDEF("Pitches_r_kneeRotInterp");
OrientationInterpolator1129->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1129->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1129);

COrientationInterpolator* OrientationInterpolator1130 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1130->setDEF("Pitches_r_hipRotInterp");
OrientationInterpolator1130->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1130->setKeyValue(new float[20]{0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1130);

COrientationInterpolator* OrientationInterpolator1131 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1131->setDEF("Pitches_l_ankleRotInterp");
OrientationInterpolator1131->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1131->setKeyValue(new float[20]{0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1131);

COrientationInterpolator* OrientationInterpolator1132 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1132->setDEF("Pitches_l_kneeRotInterp");
OrientationInterpolator1132->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1132->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1132);

COrientationInterpolator* OrientationInterpolator1133 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1133->setDEF("Pitches_l_hipRotInterp");
OrientationInterpolator1133->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1133->setKeyValue(new float[20]{0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1133);

COrientationInterpolator* OrientationInterpolator1134 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1134->setDEF("Pitches_r_wristRotInterp");
OrientationInterpolator1134->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1134->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1134);

COrientationInterpolator* OrientationInterpolator1135 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1135->setDEF("Pitches_r_elbowRotInterp");
OrientationInterpolator1135->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1135->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1135);

COrientationInterpolator* OrientationInterpolator1136 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1136->setDEF("Pitches_r_shoulderRotInterp");
OrientationInterpolator1136->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1136->setKeyValue(new float[20]{0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1136);

COrientationInterpolator* OrientationInterpolator1137 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1137->setDEF("Pitches_l_wristRotInterp");
OrientationInterpolator1137->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1137->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1137);

COrientationInterpolator* OrientationInterpolator1138 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1138->setDEF("Pitches_l_elbowRotInterp");
OrientationInterpolator1138->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1138->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1138);

COrientationInterpolator* OrientationInterpolator1139 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1139->setDEF("Pitches_l_shoulderRotInterp");
OrientationInterpolator1139->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1139->setKeyValue(new float[20]{0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1139);

COrientationInterpolator* OrientationInterpolator1140 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1140->setDEF("Pitches_headRotInterp");
OrientationInterpolator1140->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1140->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1140);

COrientationInterpolator* OrientationInterpolator1141 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1141->setDEF("Pitches_neckRotInterp");
OrientationInterpolator1141->setKey(new float[4]{0,0.25,0.55,1}, 4);
OrientationInterpolator1141->setKeyValue(new float[16]{0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1141);

COrientationInterpolator* OrientationInterpolator1142 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1142->setDEF("Pitches_lower_bodyRotInterp");
OrientationInterpolator1142->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1142->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1142);

COrientationInterpolator* OrientationInterpolator1143 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1143->setDEF("Pitches_upper_bodyRotInterp");
OrientationInterpolator1143->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1143->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1143);

COrientationInterpolator* OrientationInterpolator1144 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1144->setDEF("Pitches_whole_bodyRotInterp");
OrientationInterpolator1144->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1144->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1144);

CPositionInterpolator* PositionInterpolator1145 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator1145->setDEF("Pitches_whole_bodyTransInterp");
PositionInterpolator1145->setKey(new float[9]{0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1}, 9);
PositionInterpolator1145->setKeyValue(new float[27]{0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0});
Group1125->addChildren(*PositionInterpolator1145);

COrientationInterpolator* OrientationInterpolator1146 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1146->setDEF("Pitch_l_sternoclavicularRoll");
OrientationInterpolator1146->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1146->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1146);

COrientationInterpolator* OrientationInterpolator1147 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1147->setDEF("Pitch_l_acromioclavicularRoll");
OrientationInterpolator1147->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1147->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1147);

COrientationInterpolator* OrientationInterpolator1148 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1148->setDEF("Pitch_r_sternoclavicularRoll");
OrientationInterpolator1148->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1148->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1148);

COrientationInterpolator* OrientationInterpolator1149 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1149->setDEF("Pitch_r_acromioclavicularRoll");
OrientationInterpolator1149->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1149->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1149);

COrientationInterpolator* OrientationInterpolator1150 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1150->setDEF("Pitch_sacroiliacYaw");
OrientationInterpolator1150->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1150->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1150);

COrientationInterpolator* OrientationInterpolator1151 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1151->setDEF("Pitch_vl5Yaw");
OrientationInterpolator1151->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator1151->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1151);

COrientationInterpolator* OrientationInterpolator1152 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1152->setDEF("Pitch_vc6Yaw");
OrientationInterpolator1152->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator1152->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1125->addChildren(*OrientationInterpolator1152);

COrientationInterpolator* OrientationInterpolator1153 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1153->setDEF("Pitch_l_thumb1Pitch");
OrientationInterpolator1153->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1153->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0});
Group1125->addChildren(*OrientationInterpolator1153);

COrientationInterpolator* OrientationInterpolator1154 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1154->setDEF("Pitch_r_thumb1Pitch");
OrientationInterpolator1154->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1154->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0});
Group1125->addChildren(*OrientationInterpolator1154);

group->addChildren(*Group1125);

CGroup* Group1155 = (CGroup *)(m_pScene.createNode("Group"));
Group1155->setDEF("YawsAnimation");
CTimeSensor* TimeSensor1156 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor1156->setDEF("YawTimer");
TimeSensor1156->setCycleInterval(5.73);
TimeSensor1156->setLoop(True);
Group1155->addChildren(*TimeSensor1156);

COrientationInterpolator* OrientationInterpolator1157 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1157->setDEF("Yaw_r_metatarsalPitch");
OrientationInterpolator1157->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator1157->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1157);

COrientationInterpolator* OrientationInterpolator1158 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1158->setDEF("Yaws_r_ankleRotInterp");
OrientationInterpolator1158->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1158->setKeyValue(new float[20]{0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1158);

COrientationInterpolator* OrientationInterpolator1159 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1159->setDEF("Yaws_r_kneeRotInterp");
OrientationInterpolator1159->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1159->setKeyValue(new float[20]{0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1159);

COrientationInterpolator* OrientationInterpolator1160 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1160->setDEF("Yaws_r_hipRotInterp");
OrientationInterpolator1160->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1160->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1160);

COrientationInterpolator* OrientationInterpolator1161 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1161->setDEF("Yaws_l_ankleRotInterp");
OrientationInterpolator1161->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1161->setKeyValue(new float[20]{0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1161);

COrientationInterpolator* OrientationInterpolator1162 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1162->setDEF("Yaws_l_kneeRotInterp");
OrientationInterpolator1162->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1162->setKeyValue(new float[20]{0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1162);

COrientationInterpolator* OrientationInterpolator1163 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1163->setDEF("Yaws_l_hipRotInterp");
OrientationInterpolator1163->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1163->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1163);

COrientationInterpolator* OrientationInterpolator1164 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1164->setDEF("Yaws_r_wristRotInterp");
OrientationInterpolator1164->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1164->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1164);

COrientationInterpolator* OrientationInterpolator1165 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1165->setDEF("Yaws_r_elbowRotInterp");
OrientationInterpolator1165->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1165->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1165);

COrientationInterpolator* OrientationInterpolator1166 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1166->setDEF("Yaws_r_shoulderRotInterp");
OrientationInterpolator1166->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1166->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1166);

COrientationInterpolator* OrientationInterpolator1167 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1167->setDEF("Yaws_l_wristRotInterp");
OrientationInterpolator1167->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1167->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1167);

COrientationInterpolator* OrientationInterpolator1168 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1168->setDEF("Yaws_l_elbowRotInterp");
OrientationInterpolator1168->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1168->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1168);

COrientationInterpolator* OrientationInterpolator1169 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1169->setDEF("Yaws_l_shoulderRotInterp");
OrientationInterpolator1169->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1169->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1169);

COrientationInterpolator* OrientationInterpolator1170 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1170->setDEF("Yaws_headRotInterp");
OrientationInterpolator1170->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1170->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1170);

COrientationInterpolator* OrientationInterpolator1171 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1171->setDEF("Yaws_neckRotInterp");
OrientationInterpolator1171->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1171->setKeyValue(new float[20]{0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1171);

COrientationInterpolator* OrientationInterpolator1172 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1172->setDEF("Yaws_upper_bodyRotInterp");
OrientationInterpolator1172->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1172->setKeyValue(new float[20]{0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1172);

COrientationInterpolator* OrientationInterpolator1173 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1173->setDEF("Yaws_lower_bodyRotInterp");
OrientationInterpolator1173->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1173->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1173);

COrientationInterpolator* OrientationInterpolator1174 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1174->setDEF("Yaws_whole_bodyRotInterp");
OrientationInterpolator1174->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1174->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1174);

CPositionInterpolator* PositionInterpolator1175 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator1175->setDEF("Yaws_whole_bodyTransInterp");
PositionInterpolator1175->setKey(new float[3]{0,0.5,1}, 3);
PositionInterpolator1175->setKeyValue(new float[9]{0,0,0,0,0,0,0,0,0});
Group1155->addChildren(*PositionInterpolator1175);

COrientationInterpolator* OrientationInterpolator1176 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1176->setDEF("Yaw_l_sternoclavicularRoll");
OrientationInterpolator1176->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1176->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1176);

COrientationInterpolator* OrientationInterpolator1177 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1177->setDEF("Yaw_l_acromioclavicularRoll");
OrientationInterpolator1177->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1177->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1177);

COrientationInterpolator* OrientationInterpolator1178 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1178->setDEF("Yaw_r_sternoclavicularRoll");
OrientationInterpolator1178->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1178->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1178);

COrientationInterpolator* OrientationInterpolator1179 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1179->setDEF("Yaw_r_acromioclavicularRoll");
OrientationInterpolator1179->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1179->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1179);

COrientationInterpolator* OrientationInterpolator1180 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1180->setDEF("Yaw_sacroiliacYaw");
OrientationInterpolator1180->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1180->setKeyValue(new float[24]{0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0});
Group1155->addChildren(*OrientationInterpolator1180);

COrientationInterpolator* OrientationInterpolator1181 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1181->setDEF("Yaw_vl5Yaw");
OrientationInterpolator1181->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator1181->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1181);

COrientationInterpolator* OrientationInterpolator1182 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1182->setDEF("Yaw_vc6Yaw");
OrientationInterpolator1182->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator1182->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1182);

COrientationInterpolator* OrientationInterpolator1183 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1183->setDEF("Yaw_l_thumb1Pitch");
OrientationInterpolator1183->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1183->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1183);

COrientationInterpolator* OrientationInterpolator1184 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1184->setDEF("Yaw_r_thumb1Pitch");
OrientationInterpolator1184->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1184->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1155->addChildren(*OrientationInterpolator1184);

group->addChildren(*Group1155);

CGroup* Group1185 = (CGroup *)(m_pScene.createNode("Group"));
Group1185->setDEF("RollsAnimation");
CTimeSensor* TimeSensor1186 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor1186->setDEF("RollTimer");
TimeSensor1186->setCycleInterval(5.73);
TimeSensor1186->setLoop(True);
Group1185->addChildren(*TimeSensor1186);

COrientationInterpolator* OrientationInterpolator1187 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1187->setDEF("Roll_r_metatarsalPitch");
OrientationInterpolator1187->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator1187->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1187);

COrientationInterpolator* OrientationInterpolator1188 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1188->setDEF("Rolls_r_ankleRotInterp");
OrientationInterpolator1188->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1188->setKeyValue(new float[20]{0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1188);

COrientationInterpolator* OrientationInterpolator1189 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1189->setDEF("Rolls_r_kneeRotInterp");
OrientationInterpolator1189->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1189->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1189);

COrientationInterpolator* OrientationInterpolator1190 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1190->setDEF("Rolls_r_hipRotInterp");
OrientationInterpolator1190->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1190->setKeyValue(new float[20]{0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1190);

COrientationInterpolator* OrientationInterpolator1191 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1191->setDEF("Rolls_l_ankleRotInterp");
OrientationInterpolator1191->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1191->setKeyValue(new float[20]{0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1191);

COrientationInterpolator* OrientationInterpolator1192 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1192->setDEF("Rolls_l_kneeRotInterp");
OrientationInterpolator1192->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1192->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1192);

COrientationInterpolator* OrientationInterpolator1193 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1193->setDEF("Rolls_l_hipRotInterp");
OrientationInterpolator1193->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1193->setKeyValue(new float[20]{0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1193);

COrientationInterpolator* OrientationInterpolator1194 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1194->setDEF("Rolls_r_wristRotInterp");
OrientationInterpolator1194->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1194->setKeyValue(new float[20]{0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1194);

COrientationInterpolator* OrientationInterpolator1195 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1195->setDEF("Rolls_r_elbowRotInterp");
OrientationInterpolator1195->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1195->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1195);

COrientationInterpolator* OrientationInterpolator1196 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1196->setDEF("Rolls_r_shoulderRotInterp");
OrientationInterpolator1196->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1196->setKeyValue(new float[20]{0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1196);

COrientationInterpolator* OrientationInterpolator1197 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1197->setDEF("Rolls_l_wristRotInterp");
OrientationInterpolator1197->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1197->setKeyValue(new float[20]{0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1197);

COrientationInterpolator* OrientationInterpolator1198 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1198->setDEF("Rolls_l_elbowRotInterp");
OrientationInterpolator1198->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1198->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1198);

COrientationInterpolator* OrientationInterpolator1199 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1199->setDEF("Rolls_l_shoulderRotInterp");
OrientationInterpolator1199->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1199->setKeyValue(new float[20]{0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1199);

COrientationInterpolator* OrientationInterpolator1200 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1200->setDEF("Rolls_headRotInterp");
OrientationInterpolator1200->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1200->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1200);

COrientationInterpolator* OrientationInterpolator1201 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1201->setDEF("Rolls_neckRotInterp");
OrientationInterpolator1201->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1201->setKeyValue(new float[20]{0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1201);

COrientationInterpolator* OrientationInterpolator1202 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1202->setDEF("Rolls_lower_bodyRotInterp");
OrientationInterpolator1202->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1202->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1202);

COrientationInterpolator* OrientationInterpolator1203 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1203->setDEF("Rolls_upper_bodyRotInterp");
OrientationInterpolator1203->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1203->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1203);

COrientationInterpolator* OrientationInterpolator1204 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1204->setDEF("Rolls_whole_bodyRotInterp");
OrientationInterpolator1204->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1204->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1204);

CPositionInterpolator* PositionInterpolator1205 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator1205->setDEF("Rolls_whole_bodyTransInterp");
PositionInterpolator1205->setKey(new float[9]{0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1}, 9);
PositionInterpolator1205->setKeyValue(new float[27]{0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0});
Group1185->addChildren(*PositionInterpolator1205);

COrientationInterpolator* OrientationInterpolator1206 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1206->setDEF("Roll_l_sternoclavicularRoll");
OrientationInterpolator1206->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1206->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1206);

COrientationInterpolator* OrientationInterpolator1207 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1207->setDEF("Roll_l_acromioclavicularRoll");
OrientationInterpolator1207->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1207->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1207);

COrientationInterpolator* OrientationInterpolator1208 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1208->setDEF("Roll_r_sternoclavicularRoll");
OrientationInterpolator1208->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1208->setKeyValue(new float[24]{0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1208);

COrientationInterpolator* OrientationInterpolator1209 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1209->setDEF("Roll_r_acromioclavicularRoll");
OrientationInterpolator1209->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1209->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1209);

COrientationInterpolator* OrientationInterpolator1210 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1210->setDEF("Roll_sacroiliacYaw");
OrientationInterpolator1210->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1210->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1210);

COrientationInterpolator* OrientationInterpolator1211 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1211->setDEF("Roll_vl5Yaw");
OrientationInterpolator1211->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator1211->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1211);

COrientationInterpolator* OrientationInterpolator1212 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1212->setDEF("Roll_vc6Yaw");
OrientationInterpolator1212->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator1212->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1212);

COrientationInterpolator* OrientationInterpolator1213 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1213->setDEF("Roll_l_thumb1Pitch");
OrientationInterpolator1213->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1213->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1213);

COrientationInterpolator* OrientationInterpolator1214 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1214->setDEF("Roll_r_thumb1Pitch");
OrientationInterpolator1214->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1214->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1185->addChildren(*OrientationInterpolator1214);

group->addChildren(*Group1185);

CGroup* Group1215 = (CGroup *)(m_pScene.createNode("Group"));
Group1215->setDEF("WalkAnimation");
CTimeSensor* TimeSensor1216 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor1216->setDEF("WalkTimer");
TimeSensor1216->setCycleInterval(1.73);
TimeSensor1216->setLoop(True);
Group1215->addChildren(*TimeSensor1216);

COrientationInterpolator* OrientationInterpolator1217 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1217->setDEF("Walk_r_metatarsalPitch");
OrientationInterpolator1217->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator1217->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1215->addChildren(*OrientationInterpolator1217);

COrientationInterpolator* OrientationInterpolator1218 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1218->setDEF("Walk_r_ankleRotInterp");
OrientationInterpolator1218->setKey(new float[11]{0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1}, 11);
OrientationInterpolator1218->setKeyValue(new float[44]{0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0});
Group1215->addChildren(*OrientationInterpolator1218);

COrientationInterpolator* OrientationInterpolator1219 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1219->setDEF("Walk_r_kneeRotInterp");
OrientationInterpolator1219->setKey(new float[10]{0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1}, 10);
OrientationInterpolator1219->setKeyValue(new float[40]{1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573});
Group1215->addChildren(*OrientationInterpolator1219);

COrientationInterpolator* OrientationInterpolator1220 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1220->setDEF("Walk_r_hipRotInterp");
OrientationInterpolator1220->setKey(new float[10]{0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1}, 10);
OrientationInterpolator1220->setKeyValue(new float[40]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481});
Group1215->addChildren(*OrientationInterpolator1220);

COrientationInterpolator* OrientationInterpolator1221 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1221->setDEF("Walk_l_ankleRotInterp");
OrientationInterpolator1221->setKey(new float[7]{0,0.125,0.2083,0.375,0.6667,0.9167,1}, 7);
OrientationInterpolator1221->setKeyValue(new float[28]{-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714});
Group1215->addChildren(*OrientationInterpolator1221);

COrientationInterpolator* OrientationInterpolator1222 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1222->setDEF("Walk_l_kneeRotInterp");
OrientationInterpolator1222->setKey(new float[8]{0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1}, 8);
OrientationInterpolator1222->setKeyValue(new float[32]{1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226});
Group1215->addChildren(*OrientationInterpolator1222);

COrientationInterpolator* OrientationInterpolator1223 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1223->setDEF("Walk_l_hipRotInterp");
OrientationInterpolator1223->setKey(new float[8]{0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1}, 8);
OrientationInterpolator1223->setKeyValue(new float[32]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865});
Group1215->addChildren(*OrientationInterpolator1223);

COrientationInterpolator* OrientationInterpolator1224 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1224->setDEF("Walk_lower_bodyRotInterp");
OrientationInterpolator1224->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1224->setKeyValue(new float[12]{0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056});
Group1215->addChildren(*OrientationInterpolator1224);

COrientationInterpolator* OrientationInterpolator1225 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1225->setDEF("Walk_r_wristRotInterp");
OrientationInterpolator1225->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator1225->setKeyValue(new float[16]{-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346});
Group1215->addChildren(*OrientationInterpolator1225);

COrientationInterpolator* OrientationInterpolator1226 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1226->setDEF("Walk_r_elbowRotInterp");
OrientationInterpolator1226->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator1226->setKeyValue(new float[16]{-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508});
Group1215->addChildren(*OrientationInterpolator1226);

COrientationInterpolator* OrientationInterpolator1227 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1227->setDEF("Walk_r_shoulderRotInterp");
OrientationInterpolator1227->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator1227->setKeyValue(new float[16]{-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346});
Group1215->addChildren(*OrientationInterpolator1227);

COrientationInterpolator* OrientationInterpolator1228 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1228->setDEF("Walk_l_wristRotInterp");
OrientationInterpolator1228->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator1228->setKeyValue(new float[16]{0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076});
Group1215->addChildren(*OrientationInterpolator1228);

COrientationInterpolator* OrientationInterpolator1229 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1229->setDEF("Walk_l_elbowRotInterp");
OrientationInterpolator1229->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator1229->setKeyValue(new float[16]{-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878});
Group1215->addChildren(*OrientationInterpolator1229);

COrientationInterpolator* OrientationInterpolator1230 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1230->setDEF("Walk_l_shoulderRotInterp");
OrientationInterpolator1230->setKey(new float[4]{0,0.375,0.9167,1}, 4);
OrientationInterpolator1230->setKeyValue(new float[16]{1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189});
Group1215->addChildren(*OrientationInterpolator1230);

COrientationInterpolator* OrientationInterpolator1231 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1231->setDEF("Walk_headRotInterp");
OrientationInterpolator1231->setKey(new float[10]{0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1}, 10);
OrientationInterpolator1231->setKeyValue(new float[40]{0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642});
Group1215->addChildren(*OrientationInterpolator1231);

COrientationInterpolator* OrientationInterpolator1232 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1232->setDEF("Walk_neckRotInterp");
OrientationInterpolator1232->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1232->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group1215->addChildren(*OrientationInterpolator1232);

COrientationInterpolator* OrientationInterpolator1233 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1233->setDEF("Walk_upper_bodyRotInterp");
OrientationInterpolator1233->setKey(new float[6]{0,0.2083,0.375,0.75,0.8333,1}, 6);
OrientationInterpolator1233->setKeyValue(new float[24]{0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826});
Group1215->addChildren(*OrientationInterpolator1233);

COrientationInterpolator* OrientationInterpolator1234 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1234->setDEF("Walk_whole_bodyRotInterp");
OrientationInterpolator1234->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1234->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group1215->addChildren(*OrientationInterpolator1234);

CPositionInterpolator* PositionInterpolator1235 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator1235->setDEF("Walk_whole_bodyTranInterp");
PositionInterpolator1235->setKey(new float[19]{0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1}, 19);
PositionInterpolator1235->setKeyValue(new float[57]{0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0});
Group1215->addChildren(*PositionInterpolator1235);

COrientationInterpolator* OrientationInterpolator1236 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1236->setDEF("Walk_l_sternoclavicularRoll");
OrientationInterpolator1236->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1236->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1215->addChildren(*OrientationInterpolator1236);

COrientationInterpolator* OrientationInterpolator1237 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1237->setDEF("Walk_l_acromioclavicularRoll");
OrientationInterpolator1237->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1237->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1215->addChildren(*OrientationInterpolator1237);

COrientationInterpolator* OrientationInterpolator1238 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1238->setDEF("Walk_r_sternoclavicularRoll");
OrientationInterpolator1238->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1238->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1215->addChildren(*OrientationInterpolator1238);

COrientationInterpolator* OrientationInterpolator1239 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1239->setDEF("Walk_r_acromioclavicularRoll");
OrientationInterpolator1239->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1239->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1215->addChildren(*OrientationInterpolator1239);

COrientationInterpolator* OrientationInterpolator1240 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1240->setDEF("Walk_sacroiliacYaw");
OrientationInterpolator1240->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1240->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1215->addChildren(*OrientationInterpolator1240);

COrientationInterpolator* OrientationInterpolator1241 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1241->setDEF("Walk_vl5Yaw");
OrientationInterpolator1241->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator1241->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1215->addChildren(*OrientationInterpolator1241);

COrientationInterpolator* OrientationInterpolator1242 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1242->setDEF("Walk_vc6Yaw");
OrientationInterpolator1242->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator1242->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1215->addChildren(*OrientationInterpolator1242);

COrientationInterpolator* OrientationInterpolator1243 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1243->setDEF("Walk_l_thumb1Pitch");
OrientationInterpolator1243->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1243->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group1215->addChildren(*OrientationInterpolator1243);

COrientationInterpolator* OrientationInterpolator1244 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1244->setDEF("Walk_r_thumb1Pitch");
OrientationInterpolator1244->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1244->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group1215->addChildren(*OrientationInterpolator1244);

group->addChildren(*Group1215);

CGroup* Group1245 = (CGroup *)(m_pScene.createNode("Group"));
Group1245->setDEF("RunAnimation");
CTimeSensor* TimeSensor1246 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor1246->setDEF("RunTimer");
TimeSensor1246->setCycleInterval(0.9);
TimeSensor1246->setLoop(True);
Group1245->addChildren(*TimeSensor1246);

COrientationInterpolator* OrientationInterpolator1247 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1247->setDEF("Run_r_metatarsalPitch");
OrientationInterpolator1247->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator1247->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1245->addChildren(*OrientationInterpolator1247);

COrientationInterpolator* OrientationInterpolator1248 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1248->setDEF("Run_l_hipRotInterp_Run");
OrientationInterpolator1248->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator1248->setKeyValue(new float[20]{-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42});
Group1245->addChildren(*OrientationInterpolator1248);

COrientationInterpolator* OrientationInterpolator1249 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1249->setDEF("Run_l_kneeRotInterp_Run");
OrientationInterpolator1249->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator1249->setKeyValue(new float[20]{1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01});
Group1245->addChildren(*OrientationInterpolator1249);

COrientationInterpolator* OrientationInterpolator1250 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1250->setDEF("Run_l_ankleRotInterp_Run");
OrientationInterpolator1250->setKey(new float[5]{0,0.22,0.3,0.4,1}, 5);
OrientationInterpolator1250->setKeyValue(new float[20]{1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574});
Group1245->addChildren(*OrientationInterpolator1250);

COrientationInterpolator* OrientationInterpolator1251 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1251->setDEF("Run_r_hipRotInterp_Run");
OrientationInterpolator1251->setKey(new float[5]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator1251->setKeyValue(new float[20]{0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9});
Group1245->addChildren(*OrientationInterpolator1251);

COrientationInterpolator* OrientationInterpolator1252 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1252->setDEF("Run_r_kneeRotInterp_Run");
OrientationInterpolator1252->setKey(new float[5]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator1252->setKeyValue(new float[20]{1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705});
Group1245->addChildren(*OrientationInterpolator1252);

COrientationInterpolator* OrientationInterpolator1253 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1253->setDEF("Run_r_ankleRotInterp_Run");
OrientationInterpolator1253->setKey(new float[6]{0,0.4,0.71,0.8,0.82,1}, 6);
OrientationInterpolator1253->setKeyValue(new float[24]{1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323});
Group1245->addChildren(*OrientationInterpolator1253);

COrientationInterpolator* OrientationInterpolator1254 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1254->setDEF("Run_l_shoulderRotInterp_Run");
OrientationInterpolator1254->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator1254->setKeyValue(new float[20]{0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5});
Group1245->addChildren(*OrientationInterpolator1254);

COrientationInterpolator* OrientationInterpolator1255 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1255->setDEF("Run_l_elbowRotInterp_Run");
OrientationInterpolator1255->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator1255->setKeyValue(new float[20]{-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85});
Group1245->addChildren(*OrientationInterpolator1255);

COrientationInterpolator* OrientationInterpolator1256 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1256->setDEF("Run_l_wristRotInterp_Run");
OrientationInterpolator1256->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1256->setKeyValue(new float[20]{-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14});
Group1245->addChildren(*OrientationInterpolator1256);

COrientationInterpolator* OrientationInterpolator1257 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1257->setDEF("Run_r_shoulderRotInterp_Run");
OrientationInterpolator1257->setKey(new float[5]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator1257->setKeyValue(new float[20]{-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85});
Group1245->addChildren(*OrientationInterpolator1257);

COrientationInterpolator* OrientationInterpolator1258 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1258->setDEF("Run_r_elbowRotInterp_Run");
OrientationInterpolator1258->setKey(new float[5]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator1258->setKeyValue(new float[20]{-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975});
Group1245->addChildren(*OrientationInterpolator1258);

COrientationInterpolator* OrientationInterpolator1259 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1259->setDEF("Run_r_wristRotInterp_Run");
OrientationInterpolator1259->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1259->setKeyValue(new float[8]{-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273});
Group1245->addChildren(*OrientationInterpolator1259);

COrientationInterpolator* OrientationInterpolator1260 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1260->setDEF("Run_lower_bodyRotInterp_Run");
OrientationInterpolator1260->setKey(new float[5]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator1260->setKeyValue(new float[20]{0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125});
Group1245->addChildren(*OrientationInterpolator1260);

COrientationInterpolator* OrientationInterpolator1261 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1261->setDEF("Run_headRotInterp_Run");
OrientationInterpolator1261->setKey(new float[5]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator1261->setKeyValue(new float[20]{1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08});
Group1245->addChildren(*OrientationInterpolator1261);

COrientationInterpolator* OrientationInterpolator1262 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1262->setDEF("Run_neckRotInterp_Run");
OrientationInterpolator1262->setKey(new float[5]{0,0.2545,0.4909,0.7091,1}, 5);
OrientationInterpolator1262->setKeyValue(new float[20]{0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4});
Group1245->addChildren(*OrientationInterpolator1262);

COrientationInterpolator* OrientationInterpolator1263 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1263->setDEF("Run_upper_bodyRotInterp_Run");
OrientationInterpolator1263->setKey(new float[5]{0,0.2545,0.4909,0.7636,1}, 5);
OrientationInterpolator1263->setKeyValue(new float[20]{0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5});
Group1245->addChildren(*OrientationInterpolator1263);

COrientationInterpolator* OrientationInterpolator1264 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1264->setDEF("Run_whole_bodyRotInterp_Run");
OrientationInterpolator1264->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
OrientationInterpolator1264->setKeyValue(new float[20]{1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06});
Group1245->addChildren(*OrientationInterpolator1264);

CPositionInterpolator* PositionInterpolator1265 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator1265->setDEF("Run_whole_bodyTranInterp_Run");
PositionInterpolator1265->setKey(new float[9]{0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1}, 9);
PositionInterpolator1265->setKeyValue(new float[27]{0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0});
Group1245->addChildren(*PositionInterpolator1265);

COrientationInterpolator* OrientationInterpolator1266 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1266->setDEF("Run_l_sternoclavicularRoll");
OrientationInterpolator1266->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1266->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1245->addChildren(*OrientationInterpolator1266);

COrientationInterpolator* OrientationInterpolator1267 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1267->setDEF("Run_l_acromioclavicularRoll");
OrientationInterpolator1267->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1267->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1245->addChildren(*OrientationInterpolator1267);

COrientationInterpolator* OrientationInterpolator1268 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1268->setDEF("Run_r_sternoclavicularRoll");
OrientationInterpolator1268->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1268->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1245->addChildren(*OrientationInterpolator1268);

COrientationInterpolator* OrientationInterpolator1269 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1269->setDEF("Run_r_acromioclavicularRoll");
OrientationInterpolator1269->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1269->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1245->addChildren(*OrientationInterpolator1269);

COrientationInterpolator* OrientationInterpolator1270 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1270->setDEF("Run_sacroiliacYaw");
OrientationInterpolator1270->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1270->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1245->addChildren(*OrientationInterpolator1270);

COrientationInterpolator* OrientationInterpolator1271 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1271->setDEF("Run_vl5Yaw");
OrientationInterpolator1271->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator1271->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1245->addChildren(*OrientationInterpolator1271);

COrientationInterpolator* OrientationInterpolator1272 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1272->setDEF("Run_vc6Yaw");
OrientationInterpolator1272->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator1272->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1245->addChildren(*OrientationInterpolator1272);

COrientationInterpolator* OrientationInterpolator1273 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1273->setDEF("Run_l_thumb1Pitch");
OrientationInterpolator1273->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1273->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0});
Group1245->addChildren(*OrientationInterpolator1273);

COrientationInterpolator* OrientationInterpolator1274 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1274->setDEF("Run_r_thumb1Pitch");
OrientationInterpolator1274->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1274->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0});
Group1245->addChildren(*OrientationInterpolator1274);

group->addChildren(*Group1245);

CGroup* Group1275 = (CGroup *)(m_pScene.createNode("Group"));
Group1275->setDEF("JumpAnimation");
CTimeSensor* TimeSensor1276 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor1276->setDEF("JumpTimer");
TimeSensor1276->setCycleInterval(3.73);
TimeSensor1276->setLoop(True);
Group1275->addChildren(*TimeSensor1276);

COrientationInterpolator* OrientationInterpolator1277 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1277->setDEF("Jump_r_metatarsalPitch");
OrientationInterpolator1277->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator1277->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1277);

COrientationInterpolator* OrientationInterpolator1278 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1278->setDEF("Jump_r_ankleRotInterp");
OrientationInterpolator1278->setKey(new float[14]{0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1}, 14);
OrientationInterpolator1278->setKeyValue(new float[56]{0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1278);

COrientationInterpolator* OrientationInterpolator1279 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1279->setDEF("Jump_r_kneeRotInterp");
OrientationInterpolator1279->setKey(new float[8]{0,0.2,0.25,0.3,0.64,0.76,0.88,1}, 8);
OrientationInterpolator1279->setKeyValue(new float[32]{0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1279);

COrientationInterpolator* OrientationInterpolator1280 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1280->setDEF("Jump_r_hipRotInterp");
OrientationInterpolator1280->setKey(new float[11]{0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1}, 11);
OrientationInterpolator1280->setKeyValue(new float[44]{0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1280);

COrientationInterpolator* OrientationInterpolator1281 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1281->setDEF("Jump_l_ankleRotInterp");
OrientationInterpolator1281->setKey(new float[14]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1}, 14);
OrientationInterpolator1281->setKeyValue(new float[56]{0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1281);

COrientationInterpolator* OrientationInterpolator1282 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1282->setDEF("Jump_l_kneeRotInterp");
OrientationInterpolator1282->setKey(new float[8]{0,0.28,0.32,0.48,0.64,0.76,0.88,1}, 8);
OrientationInterpolator1282->setKeyValue(new float[32]{0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1282);

COrientationInterpolator* OrientationInterpolator1283 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1283->setDEF("Jump_l_hipRotInterp");
OrientationInterpolator1283->setKey(new float[11]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1}, 11);
OrientationInterpolator1283->setKeyValue(new float[44]{0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1283);

COrientationInterpolator* OrientationInterpolator1284 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1284->setDEF("Jump_lower_bodyRotInterp");
OrientationInterpolator1284->setKey(new float[6]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator1284->setKeyValue(new float[24]{0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1284);

COrientationInterpolator* OrientationInterpolator1285 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1285->setDEF("Jump_r_wristRotInterp");
OrientationInterpolator1285->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator1285->setKeyValue(new float[24]{0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1285);

COrientationInterpolator* OrientationInterpolator1286 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1286->setDEF("Jump_r_elbowRotInterp");
OrientationInterpolator1286->setKey(new float[6]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator1286->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1286);

COrientationInterpolator* OrientationInterpolator1287 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1287->setDEF("Jump_r_shoulderRotInterp");
OrientationInterpolator1287->setKey(new float[7]{0,0.28,0.32,0.64,0.76,0.88,1}, 7);
OrientationInterpolator1287->setKeyValue(new float[28]{0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1287);

COrientationInterpolator* OrientationInterpolator1288 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1288->setDEF("Jump_l_wristRotInterp");
OrientationInterpolator1288->setKey(new float[7]{0,0.48,0.52,0.64,0.76,0.88,1}, 7);
OrientationInterpolator1288->setKeyValue(new float[28]{0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1288);

COrientationInterpolator* OrientationInterpolator1289 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1289->setDEF("Jump_l_elbowRotInterp");
OrientationInterpolator1289->setKey(new float[6]{0,0.28,0.32,0.58,0.72,1}, 6);
OrientationInterpolator1289->setKeyValue(new float[24]{0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1289);

COrientationInterpolator* OrientationInterpolator1290 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1290->setDEF("Jump_l_shoulderRotInterp");
OrientationInterpolator1290->setKey(new float[7]{0,0.28,0.32,0.64,0.76,0.88,1}, 7);
OrientationInterpolator1290->setKeyValue(new float[28]{0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1290);

COrientationInterpolator* OrientationInterpolator1291 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1291->setDEF("Jump_headRotInterp");
OrientationInterpolator1291->setKey(new float[6]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator1291->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1291);

COrientationInterpolator* OrientationInterpolator1292 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1292->setDEF("Jump_neckRotInterp");
OrientationInterpolator1292->setKey(new float[6]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator1292->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1292);

COrientationInterpolator* OrientationInterpolator1293 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1293->setDEF("Jump_upper_bodyRotInterp");
OrientationInterpolator1293->setKey(new float[7]{0,0.22,0.28,0.34,0.71,0.88,1}, 7);
OrientationInterpolator1293->setKeyValue(new float[28]{0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1293);

COrientationInterpolator* OrientationInterpolator1294 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1294->setDEF("Jump_whole_bodyRotInterp");
OrientationInterpolator1294->setKey(new float[7]{0,0.28,0.32,0.48,0.64,0.76,1}, 7);
OrientationInterpolator1294->setKeyValue(new float[28]{0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1294);

CPositionInterpolator* PositionInterpolator1295 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator1295->setDEF("Jump_whole_bodyTranInterp");
PositionInterpolator1295->setKey(new float[22]{0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1}, 22);
PositionInterpolator1295->setKeyValue(new float[66]{0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0});
Group1275->addChildren(*PositionInterpolator1295);

COrientationInterpolator* OrientationInterpolator1296 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1296->setDEF("Jump_l_sternoclavicularRoll");
OrientationInterpolator1296->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1296->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1296);

COrientationInterpolator* OrientationInterpolator1297 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1297->setDEF("Jump_l_acromioclavicularRoll");
OrientationInterpolator1297->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1297->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1297);

COrientationInterpolator* OrientationInterpolator1298 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1298->setDEF("Jump_r_sternoclavicularRoll");
OrientationInterpolator1298->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1298->setKeyValue(new float[24]{0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1298);

COrientationInterpolator* OrientationInterpolator1299 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1299->setDEF("Jump_r_acromioclavicularRoll");
OrientationInterpolator1299->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1299->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group1275->addChildren(*OrientationInterpolator1299);

COrientationInterpolator* OrientationInterpolator1300 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1300->setDEF("Jump_sacroiliacYaw");
OrientationInterpolator1300->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1300->setKeyValue(new float[24]{0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0});
Group1275->addChildren(*OrientationInterpolator1300);

COrientationInterpolator* OrientationInterpolator1301 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1301->setDEF("Jump_vl5Yaw");
OrientationInterpolator1301->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator1301->setKeyValue(new float[28]{0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0});
Group1275->addChildren(*OrientationInterpolator1301);

COrientationInterpolator* OrientationInterpolator1302 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1302->setDEF("Jump_vc6Yaw");
OrientationInterpolator1302->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator1302->setKeyValue(new float[28]{0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0});
Group1275->addChildren(*OrientationInterpolator1302);

COrientationInterpolator* OrientationInterpolator1303 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1303->setDEF("Jump_l_thumb1Pitch");
OrientationInterpolator1303->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1303->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group1275->addChildren(*OrientationInterpolator1303);

COrientationInterpolator* OrientationInterpolator1304 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1304->setDEF("Jump_r_thumb1Pitch");
OrientationInterpolator1304->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1304->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group1275->addChildren(*OrientationInterpolator1304);

group->addChildren(*Group1275);

CGroup* Group1305 = (CGroup *)(m_pScene.createNode("Group"));
Group1305->setDEF("KickAnimation");
CTimeSensor* TimeSensor1306 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor1306->setDEF("KickTimer");
TimeSensor1306->setCycleInterval(3.73);
TimeSensor1306->setLoop(True);
Group1305->addChildren(*TimeSensor1306);

COrientationInterpolator* OrientationInterpolator1307 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1307->setDEF("Kick_l_sternoclavicularRoll");
OrientationInterpolator1307->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1307->setKeyValue(new float[24]{0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0});
Group1305->addChildren(*OrientationInterpolator1307);

COrientationInterpolator* OrientationInterpolator1308 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1308->setDEF("Kick_l_acromioclavicularRoll");
OrientationInterpolator1308->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1308->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group1305->addChildren(*OrientationInterpolator1308);

COrientationInterpolator* OrientationInterpolator1309 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1309->setDEF("Kick_l_shoulderRoll");
OrientationInterpolator1309->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1309->setKeyValue(new float[24]{0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0});
Group1305->addChildren(*OrientationInterpolator1309);

COrientationInterpolator* OrientationInterpolator1310 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1310->setDEF("Kick_l_ForeArmPitch");
OrientationInterpolator1310->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1310->setKeyValue(new float[24]{1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0});
Group1305->addChildren(*OrientationInterpolator1310);

COrientationInterpolator* OrientationInterpolator1311 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1311->setDEF("Kick_l_wristRoll");
OrientationInterpolator1311->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1311->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0});
Group1305->addChildren(*OrientationInterpolator1311);

COrientationInterpolator* OrientationInterpolator1312 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1312->setDEF("Kick_l_thumb1Pitch");
OrientationInterpolator1312->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1312->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group1305->addChildren(*OrientationInterpolator1312);

COrientationInterpolator* OrientationInterpolator1313 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1313->setDEF("Kick_r_sternoclavicularRoll");
OrientationInterpolator1313->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1313->setKeyValue(new float[24]{0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0});
Group1305->addChildren(*OrientationInterpolator1313);

COrientationInterpolator* OrientationInterpolator1314 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1314->setDEF("Kick_r_acromioclavicularRoll");
OrientationInterpolator1314->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1314->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0});
Group1305->addChildren(*OrientationInterpolator1314);

COrientationInterpolator* OrientationInterpolator1315 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1315->setDEF("Kick_r_shoulderRoll");
OrientationInterpolator1315->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1315->setKeyValue(new float[24]{0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0});
Group1305->addChildren(*OrientationInterpolator1315);

COrientationInterpolator* OrientationInterpolator1316 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1316->setDEF("Kick_r_ForeArmPitch");
OrientationInterpolator1316->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1316->setKeyValue(new float[24]{1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0});
Group1305->addChildren(*OrientationInterpolator1316);

COrientationInterpolator* OrientationInterpolator1317 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1317->setDEF("Kick_r_wristRoll");
OrientationInterpolator1317->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1317->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0});
Group1305->addChildren(*OrientationInterpolator1317);

COrientationInterpolator* OrientationInterpolator1318 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1318->setDEF("Kick_r_thumb1Pitch");
OrientationInterpolator1318->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1318->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0});
Group1305->addChildren(*OrientationInterpolator1318);

COrientationInterpolator* OrientationInterpolator1319 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1319->setDEF("Kick_r_hipPitch");
OrientationInterpolator1319->setKey(new float[7]{0,0.2,0.3,0.5,0.6,0.9,1}, 7);
OrientationInterpolator1319->setKeyValue(new float[28]{1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0});
Group1305->addChildren(*OrientationInterpolator1319);

COrientationInterpolator* OrientationInterpolator1320 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1320->setDEF("Kick_r_kneePitch");
OrientationInterpolator1320->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1320->setKeyValue(new float[24]{0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0});
Group1305->addChildren(*OrientationInterpolator1320);

COrientationInterpolator* OrientationInterpolator1321 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1321->setDEF("Kick_l_hipPitch");
OrientationInterpolator1321->setKey(new float[7]{0,0.2,0.3,0.5,0.6,0.9,1}, 7);
OrientationInterpolator1321->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1305->addChildren(*OrientationInterpolator1321);

COrientationInterpolator* OrientationInterpolator1322 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1322->setDEF("Kick_l_kneePitch");
OrientationInterpolator1322->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1322->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1305->addChildren(*OrientationInterpolator1322);

COrientationInterpolator* OrientationInterpolator1323 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1323->setDEF("Kick_r_anklePitch");
OrientationInterpolator1323->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator1323->setKeyValue(new float[24]{0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0});
Group1305->addChildren(*OrientationInterpolator1323);

COrientationInterpolator* OrientationInterpolator1324 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1324->setDEF("Kick_r_metatarsalPitch");
OrientationInterpolator1324->setKey(new float[6]{0,0.2,0.4,0.6,0.7,1}, 6);
OrientationInterpolator1324->setKeyValue(new float[24]{1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0});
Group1305->addChildren(*OrientationInterpolator1324);

COrientationInterpolator* OrientationInterpolator1325 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1325->setDEF("Kick_sacroiliacYaw");
OrientationInterpolator1325->setKey(new float[6]{0,0.2,0.4,0.6,0.8,1}, 6);
OrientationInterpolator1325->setKeyValue(new float[24]{0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0});
Group1305->addChildren(*OrientationInterpolator1325);

COrientationInterpolator* OrientationInterpolator1326 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1326->setDEF("Kick_vl5Yaw");
OrientationInterpolator1326->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator1326->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1305->addChildren(*OrientationInterpolator1326);

COrientationInterpolator* OrientationInterpolator1327 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1327->setDEF("Kick_vc6Yaw");
OrientationInterpolator1327->setKey(new float[7]{0,0.2,0.4,0.5,0.6,0.8,1}, 7);
OrientationInterpolator1327->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
Group1305->addChildren(*OrientationInterpolator1327);

COrientationInterpolator* OrientationInterpolator1328 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1328->setDEF("Kick_lower_bodyRotInterp");
OrientationInterpolator1328->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1328->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1305->addChildren(*OrientationInterpolator1328);

COrientationInterpolator* OrientationInterpolator1329 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1329->setDEF("Kick_upper_bodyRotInterp");
OrientationInterpolator1329->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1329->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1305->addChildren(*OrientationInterpolator1329);

COrientationInterpolator* OrientationInterpolator1330 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1330->setDEF("Kick_whole_bodyRotInterp");
OrientationInterpolator1330->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1330->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1305->addChildren(*OrientationInterpolator1330);

CPositionInterpolator* PositionInterpolator1331 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator1331->setDEF("Kick_whole_bodyTransInterp");
PositionInterpolator1331->setKey(new float[3]{0,0.5,1}, 3);
PositionInterpolator1331->setKeyValue(new float[9]{0,0,0,0,0,0,0,0,0});
Group1305->addChildren(*PositionInterpolator1331);

COrientationInterpolator* OrientationInterpolator1332 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1332->setDEF("Kick_neckRotInterp");
OrientationInterpolator1332->setKey(new float[4]{0,0.25,0.55,1}, 4);
OrientationInterpolator1332->setKeyValue(new float[16]{0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0});
Group1305->addChildren(*OrientationInterpolator1332);

group->addChildren(*Group1305);

CGroup* Group1333 = (CGroup *)(m_pScene.createNode("Group"));
Group1333->setDEF("StopAnimation");
CTimeSensor* TimeSensor1334 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor1334->setDEF("StopTimer");
TimeSensor1334->setCycleInterval(5.73);
TimeSensor1334->setLoop(True);
Group1333->addChildren(*TimeSensor1334);

CPositionInterpolator* PositionInterpolator1335 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator1335->setDEF("Stop_HumanoidRootTransInterp");
PositionInterpolator1335->setKey(new float[3]{0,0.5,1}, 3);
PositionInterpolator1335->setKeyValue(new float[9]{0,0,0,0,0,0,0,0,0});
Group1333->addChildren(*PositionInterpolator1335);

COrientationInterpolator* OrientationInterpolator1336 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1336->setDEF("Stop_HumanoidRootRotInterp");
OrientationInterpolator1336->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1336->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1336);

COrientationInterpolator* OrientationInterpolator1337 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1337->setDEF("Stop_sacroiliacRotInterp");
OrientationInterpolator1337->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1337->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1337);

COrientationInterpolator* OrientationInterpolator1338 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1338->setDEF("Stop_l_hipRotInterp");
OrientationInterpolator1338->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1338->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1338);

COrientationInterpolator* OrientationInterpolator1339 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1339->setDEF("Stop_l_kneeRotInterp");
OrientationInterpolator1339->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1339->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1339);

COrientationInterpolator* OrientationInterpolator1340 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1340->setDEF("Stop_l_ankleRotInterp");
OrientationInterpolator1340->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1340->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1340);

COrientationInterpolator* OrientationInterpolator1341 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1341->setDEF("Stop_l_subtalarRotInterp");
OrientationInterpolator1341->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1341->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1341);

COrientationInterpolator* OrientationInterpolator1342 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1342->setDEF("Stop_l_midtarsalRotInterp");
OrientationInterpolator1342->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1342->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1342);

COrientationInterpolator* OrientationInterpolator1343 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1343->setDEF("Stop_l_metatarsalRotInterp");
OrientationInterpolator1343->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1343->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1343);

COrientationInterpolator* OrientationInterpolator1344 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1344->setDEF("Stop_r_hipRotInterp");
OrientationInterpolator1344->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1344->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1344);

COrientationInterpolator* OrientationInterpolator1345 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1345->setDEF("Stop_r_kneeRotInterp");
OrientationInterpolator1345->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1345->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1345);

COrientationInterpolator* OrientationInterpolator1346 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1346->setDEF("Stop_r_ankleRotInterp");
OrientationInterpolator1346->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1346->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1346);

COrientationInterpolator* OrientationInterpolator1347 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1347->setDEF("Stop_r_subtalarRotInterp");
OrientationInterpolator1347->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1347->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1347);

COrientationInterpolator* OrientationInterpolator1348 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1348->setDEF("Stop_r_midtarsalRotInterp");
OrientationInterpolator1348->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1348->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1348);

COrientationInterpolator* OrientationInterpolator1349 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1349->setDEF("Stop_r_metatarsalRotInterp");
OrientationInterpolator1349->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1349->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1349);

COrientationInterpolator* OrientationInterpolator1350 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1350->setDEF("Stop_vl5RotInterp");
OrientationInterpolator1350->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1350->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1350);

COrientationInterpolator* OrientationInterpolator1351 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1351->setDEF("Stop_vl4RotInterp");
OrientationInterpolator1351->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1351->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1351);

COrientationInterpolator* OrientationInterpolator1352 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1352->setDEF("Stop_vl3RotInterp");
OrientationInterpolator1352->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1352->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1352);

COrientationInterpolator* OrientationInterpolator1353 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1353->setDEF("Stop_vl2RotInterp");
OrientationInterpolator1353->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1353->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1353);

COrientationInterpolator* OrientationInterpolator1354 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1354->setDEF("Stop_vl1RotInterp");
OrientationInterpolator1354->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1354->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1354);

COrientationInterpolator* OrientationInterpolator1355 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1355->setDEF("Stop_vt12RotInterp");
OrientationInterpolator1355->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1355->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1355);

COrientationInterpolator* OrientationInterpolator1356 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1356->setDEF("Stop_vt11RotInterp");
OrientationInterpolator1356->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1356->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1356);

COrientationInterpolator* OrientationInterpolator1357 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1357->setDEF("Stop_vt10RotInterp");
OrientationInterpolator1357->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1357->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1357);

COrientationInterpolator* OrientationInterpolator1358 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1358->setDEF("Stop_vt9RotInterp");
OrientationInterpolator1358->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1358->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1358);

COrientationInterpolator* OrientationInterpolator1359 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1359->setDEF("Stop_vt8RotInterp");
OrientationInterpolator1359->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1359->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1359);

COrientationInterpolator* OrientationInterpolator1360 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1360->setDEF("Stop_vt7RotInterp");
OrientationInterpolator1360->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1360->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1360);

COrientationInterpolator* OrientationInterpolator1361 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1361->setDEF("Stop_vt6RotInterp");
OrientationInterpolator1361->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1361->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1361);

COrientationInterpolator* OrientationInterpolator1362 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1362->setDEF("Stop_vt5RotInterp");
OrientationInterpolator1362->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1362->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1362);

COrientationInterpolator* OrientationInterpolator1363 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1363->setDEF("Stop_vt4RotInterp");
OrientationInterpolator1363->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1363->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1363);

COrientationInterpolator* OrientationInterpolator1364 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1364->setDEF("Stop_vt3RotInterp");
OrientationInterpolator1364->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1364->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1364);

COrientationInterpolator* OrientationInterpolator1365 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1365->setDEF("Stop_vt2RotInterp");
OrientationInterpolator1365->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1365->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1365);

COrientationInterpolator* OrientationInterpolator1366 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1366->setDEF("Stop_vt1RotInterp");
OrientationInterpolator1366->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1366->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1366);

COrientationInterpolator* OrientationInterpolator1367 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1367->setDEF("Stop_vc7RotInterp");
OrientationInterpolator1367->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1367->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1367);

COrientationInterpolator* OrientationInterpolator1368 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1368->setDEF("Stop_vc6RotInterp");
OrientationInterpolator1368->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1368->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1368);

COrientationInterpolator* OrientationInterpolator1369 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1369->setDEF("Stop_vc5RotInterp");
OrientationInterpolator1369->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1369->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1369);

COrientationInterpolator* OrientationInterpolator1370 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1370->setDEF("Stop_vc4RotInterp");
OrientationInterpolator1370->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1370->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1370);

COrientationInterpolator* OrientationInterpolator1371 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1371->setDEF("Stop_vc3RotInterp");
OrientationInterpolator1371->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1371->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1371);

COrientationInterpolator* OrientationInterpolator1372 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1372->setDEF("Stop_vc2RotInterp");
OrientationInterpolator1372->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1372->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1372);

COrientationInterpolator* OrientationInterpolator1373 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1373->setDEF("Stop_vc1RotInterp");
OrientationInterpolator1373->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1373->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1373);

COrientationInterpolator* OrientationInterpolator1374 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1374->setDEF("Stop_skullbaseRotInterp");
OrientationInterpolator1374->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1374->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1374);

COrientationInterpolator* OrientationInterpolator1375 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1375->setDEF("Stop_l_eyeball_jointRotInterp");
OrientationInterpolator1375->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1375->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1375);

COrientationInterpolator* OrientationInterpolator1376 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1376->setDEF("Stop_r_eyeball_jointRotInterp");
OrientationInterpolator1376->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1376->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1376);

COrientationInterpolator* OrientationInterpolator1377 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1377->setDEF("Stop_l_sternoclavicularRotInterp");
OrientationInterpolator1377->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1377->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1377);

COrientationInterpolator* OrientationInterpolator1378 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1378->setDEF("Stop_l_acromioclavicularRotInterp");
OrientationInterpolator1378->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1378->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1378);

COrientationInterpolator* OrientationInterpolator1379 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1379->setDEF("Stop_l_shoulderRotInterp");
OrientationInterpolator1379->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1379->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1379);

COrientationInterpolator* OrientationInterpolator1380 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1380->setDEF("Stop_l_elbowRotInterp");
OrientationInterpolator1380->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1380->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1380);

COrientationInterpolator* OrientationInterpolator1381 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1381->setDEF("Stop_l_wristRotInterp");
OrientationInterpolator1381->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1381->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1381);

COrientationInterpolator* OrientationInterpolator1382 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1382->setDEF("Stop_l_thumb1RotInterp");
OrientationInterpolator1382->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1382->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1382);

COrientationInterpolator* OrientationInterpolator1383 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1383->setDEF("Stop_l_thumb2RotInterp");
OrientationInterpolator1383->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1383->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1383);

COrientationInterpolator* OrientationInterpolator1384 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1384->setDEF("Stop_l_thumb3RotInterp");
OrientationInterpolator1384->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1384->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1384);

COrientationInterpolator* OrientationInterpolator1385 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1385->setDEF("Stop_l_index0RotInterp");
OrientationInterpolator1385->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1385->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1385);

COrientationInterpolator* OrientationInterpolator1386 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1386->setDEF("Stop_l_index1RotInterp");
OrientationInterpolator1386->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1386->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1386);

COrientationInterpolator* OrientationInterpolator1387 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1387->setDEF("Stop_l_index2RotInterp");
OrientationInterpolator1387->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1387->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1387);

COrientationInterpolator* OrientationInterpolator1388 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1388->setDEF("Stop_l_index3RotInterp");
OrientationInterpolator1388->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1388->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1388);

COrientationInterpolator* OrientationInterpolator1389 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1389->setDEF("Stop_l_middle0RotInterp");
OrientationInterpolator1389->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1389->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1389);

COrientationInterpolator* OrientationInterpolator1390 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1390->setDEF("Stop_l_middle1RotInterp");
OrientationInterpolator1390->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1390->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1390);

COrientationInterpolator* OrientationInterpolator1391 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1391->setDEF("Stop_l_middle2RotInterp");
OrientationInterpolator1391->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1391->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1391);

COrientationInterpolator* OrientationInterpolator1392 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1392->setDEF("Stop_l_middle3RotInterp");
OrientationInterpolator1392->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1392->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1392);

COrientationInterpolator* OrientationInterpolator1393 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1393->setDEF("Stop_l_ring0RotInterp");
OrientationInterpolator1393->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1393->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1393);

COrientationInterpolator* OrientationInterpolator1394 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1394->setDEF("Stop_l_ring1RotInterp");
OrientationInterpolator1394->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1394->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1394);

COrientationInterpolator* OrientationInterpolator1395 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1395->setDEF("Stop_l_ring2RotInterp");
OrientationInterpolator1395->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1395->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1395);

COrientationInterpolator* OrientationInterpolator1396 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1396->setDEF("Stop_l_ring3RotInterp");
OrientationInterpolator1396->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1396->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1396);

COrientationInterpolator* OrientationInterpolator1397 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1397->setDEF("Stop_l_pinky0RotInterp");
OrientationInterpolator1397->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1397->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1397);

COrientationInterpolator* OrientationInterpolator1398 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1398->setDEF("Stop_l_pinky1RotInterp");
OrientationInterpolator1398->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1398->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1398);

COrientationInterpolator* OrientationInterpolator1399 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1399->setDEF("Stop_l_pinky2RotInterp");
OrientationInterpolator1399->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1399->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1399);

COrientationInterpolator* OrientationInterpolator1400 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1400->setDEF("Stop_l_pinky3RotInterp");
OrientationInterpolator1400->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1400->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1400);

COrientationInterpolator* OrientationInterpolator1401 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1401->setDEF("Stop_r_sternoclavicularRotInterp");
OrientationInterpolator1401->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1401->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1401);

COrientationInterpolator* OrientationInterpolator1402 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1402->setDEF("Stop_r_acromioclavicularRotInterp");
OrientationInterpolator1402->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1402->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1402);

COrientationInterpolator* OrientationInterpolator1403 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1403->setDEF("Stop_r_shoulderRotInterp");
OrientationInterpolator1403->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1403->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1403);

COrientationInterpolator* OrientationInterpolator1404 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1404->setDEF("Stop_r_elbowRotInterp");
OrientationInterpolator1404->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1404->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1404);

COrientationInterpolator* OrientationInterpolator1405 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1405->setDEF("Stop_r_wristRotInterp");
OrientationInterpolator1405->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1405->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1405);

COrientationInterpolator* OrientationInterpolator1406 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1406->setDEF("Stop_r_thumb1RotInterp");
OrientationInterpolator1406->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1406->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1406);

COrientationInterpolator* OrientationInterpolator1407 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1407->setDEF("Stop_r_thumb2RotInterp");
OrientationInterpolator1407->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1407->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1407);

COrientationInterpolator* OrientationInterpolator1408 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1408->setDEF("Stop_r_thumb3RotInterp");
OrientationInterpolator1408->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1408->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1408);

COrientationInterpolator* OrientationInterpolator1409 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1409->setDEF("Stop_r_index0RotInterp");
OrientationInterpolator1409->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1409->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1409);

COrientationInterpolator* OrientationInterpolator1410 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1410->setDEF("Stop_r_index1RotInterp");
OrientationInterpolator1410->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1410->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1410);

COrientationInterpolator* OrientationInterpolator1411 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1411->setDEF("Stop_r_index2RotInterp");
OrientationInterpolator1411->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1411->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1411);

COrientationInterpolator* OrientationInterpolator1412 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1412->setDEF("Stop_r_index3RotInterp");
OrientationInterpolator1412->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1412->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1412);

COrientationInterpolator* OrientationInterpolator1413 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1413->setDEF("Stop_r_middle0RotInterp");
OrientationInterpolator1413->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1413->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1413);

COrientationInterpolator* OrientationInterpolator1414 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1414->setDEF("Stop_r_middle1RotInterp");
OrientationInterpolator1414->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1414->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1414);

COrientationInterpolator* OrientationInterpolator1415 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1415->setDEF("Stop_r_middle2RotInterp");
OrientationInterpolator1415->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1415->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1415);

COrientationInterpolator* OrientationInterpolator1416 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1416->setDEF("Stop_r_middle3RotInterp");
OrientationInterpolator1416->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1416->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1416);

COrientationInterpolator* OrientationInterpolator1417 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1417->setDEF("Stop_r_ring0RotInterp");
OrientationInterpolator1417->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1417->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1417);

COrientationInterpolator* OrientationInterpolator1418 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1418->setDEF("Stop_r_ring1RotInterp");
OrientationInterpolator1418->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1418->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1418);

COrientationInterpolator* OrientationInterpolator1419 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1419->setDEF("Stop_r_ring2RotInterp");
OrientationInterpolator1419->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1419->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1419);

COrientationInterpolator* OrientationInterpolator1420 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1420->setDEF("Stop_r_ring3RotInterp");
OrientationInterpolator1420->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1420->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1420);

COrientationInterpolator* OrientationInterpolator1421 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1421->setDEF("Stop_r_pinky0RotInterp");
OrientationInterpolator1421->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1421->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1421);

COrientationInterpolator* OrientationInterpolator1422 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1422->setDEF("Stop_r_pinky1RotInterp");
OrientationInterpolator1422->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1422->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1422);

COrientationInterpolator* OrientationInterpolator1423 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1423->setDEF("Stop_r_pinky2RotInterp");
OrientationInterpolator1423->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1423->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1423);

COrientationInterpolator* OrientationInterpolator1424 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1424->setDEF("Stop_r_pinky3RotInterp");
OrientationInterpolator1424->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1424->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1333->addChildren(*OrientationInterpolator1424);

group->addChildren(*Group1333);

CGroup* Group1425 = (CGroup *)(m_pScene.createNode("Group"));
Group1425->setDEF("Interface");
CTransform* Transform1426 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1426->setDEF("cordsysfloor");
Transform1426->setScale(new float[3]{0.175,0.175,0.175});
CInline* Inline1427 = (CInline *)(m_pScene.createNode("Inline"));
Inline1427->setGlobal(True);
Inline1427->setUrl(new CString[1]{"JointCoordinateAxes.x3dv"}, 1);
Transform1426->addChildren(*Inline1427);

Group1425->addChildren(*Transform1426);

CProximitySensor* ProximitySensor1428 = (CProximitySensor *)(m_pScene.createNode("ProximitySensor"));
ProximitySensor1428->setDEF("HudProx");
ProximitySensor1428->setSize(new float[3]{50,50,50});
Group1425->addChildren(*ProximitySensor1428);

CTransform* Transform1429 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1429->setDEF("HudXform");
CTransform* Transform1430 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1430->setTranslation(new float[3]{-0.2,0.15,-0.7});
Transform1430->setScale(new float[3]{0.02,0.02,0.02});
CTransform* Transform1431 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1431->setDEF("Stand_Text");
Transform1431->setTranslation(new float[3]{0,-0.9,0});
CTouchSensor* TouchSensor1432 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1432->setDEF("Stand_Touch");
Transform1431->addChildren(*TouchSensor1432);

CShape* Shape1433 = (CShape *)(m_pScene.createNode("Shape"));
Shape1433->setDEF("StandText");
CAppearance* Appearance1434 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1435 = (CMaterial *)(m_pScene.createNode("Material"));
Material1435->setDEF("text_color");
Material1435->setAmbientIntensity(1);
Material1435->setDiffuseColor(new float[3]{0.819,0.521,0.169});
Material1435->setSpecularColor(new float[3]{0.819,0.521,0.169});
Material1435->setEmissiveColor(new float[3]{0.819,0.521,0.169});
Appearance1434->setMaterial(*Material1435);

Shape1433->setAppearance(*Appearance1434);

CText* Text1436 = (CText *)(m_pScene.createNode("Text"));
Text1436->setString(new CString[1]{"Stand"}, 1);
CFontStyle* FontStyle1437 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle1437->setFamily(new CString[1]{"SANS"}, 1);
Text1436->setFontStyle(*FontStyle1437);

Shape1433->setGeometry(Text1436);

Transform1431->addChildren(*Shape1433);

CShape* Shape1438 = (CShape *)(m_pScene.createNode("Shape"));
Shape1438->setDEF("Stand_Back");
CAppearance* Appearance1439 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1440 = (CMaterial *)(m_pScene.createNode("Material"));
Material1440->setDEF("Clear");
Material1440->setAmbientIntensity(1);
Material1440->setDiffuseColor(new float[3]{0,0.5,0});
Material1440->setEmissiveColor(new float[3]{0,0.5,0});
Material1440->setTransparency(0.8);
Appearance1439->setMaterial(*Material1440);

Shape1438->setAppearance(*Appearance1439);

CIndexedFaceSet* IndexedFaceSet1441 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1441->setDEF("Backing");
IndexedFaceSet1441->setCoordIndex(new int[5]{0,1,2,3,-1});
CCoordinate* Coordinate1442 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1442->setPoint(new float[12]{-0.2,-0.25,-0.01,3,-0.25,-0.01,3,1,-0.01,-0.2,1,-0.01});
IndexedFaceSet1441->setCoord(*Coordinate1442);

Shape1438->setGeometry(IndexedFaceSet1441);

Transform1431->addChildren(*Shape1438);

Transform1430->addChildren(*Transform1431);

CTransform* Transform1443 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1443->setDEF("Pitch_Text");
Transform1443->setTranslation(new float[3]{0,-2.4,0});
CTouchSensor* TouchSensor1444 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1444->setDEF("Pitch_Touch");
Transform1443->addChildren(*TouchSensor1444);

CShape* Shape1445 = (CShape *)(m_pScene.createNode("Shape"));
Shape1445->setDEF("PitchText");
CAppearance* Appearance1446 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1447 = (CMaterial *)(m_pScene.createNode("Material"));
Material1447->setUSE("text_color");
Appearance1446->setMaterial(*Material1447);

Shape1445->setAppearance(*Appearance1446);

CText* Text1448 = (CText *)(m_pScene.createNode("Text"));
Text1448->setString(new CString[1]{"Pitch"}, 1);
CFontStyle* FontStyle1449 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle1449->setFamily(new CString[1]{"SANS"}, 1);
Text1448->setFontStyle(*FontStyle1449);

Shape1445->setGeometry(Text1448);

Transform1443->addChildren(*Shape1445);

CShape* Shape1450 = (CShape *)(m_pScene.createNode("Shape"));
Shape1450->setDEF("Pitch_Back");
CAppearance* Appearance1451 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1452 = (CMaterial *)(m_pScene.createNode("Material"));
Material1452->setUSE("Clear");
Appearance1451->setMaterial(*Material1452);

Shape1450->setAppearance(*Appearance1451);

CIndexedFaceSet* IndexedFaceSet1453 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1453->setUSE("Backing");
Shape1450->setGeometry(IndexedFaceSet1453);

Transform1443->addChildren(*Shape1450);

Transform1430->addChildren(*Transform1443);

CTransform* Transform1454 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1454->setDEF("Yaw_Text");
Transform1454->setTranslation(new float[3]{0,-3.8,0});
CTouchSensor* TouchSensor1455 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1455->setDEF("Yaw_Touch");
Transform1454->addChildren(*TouchSensor1455);

CShape* Shape1456 = (CShape *)(m_pScene.createNode("Shape"));
Shape1456->setDEF("YawText");
CAppearance* Appearance1457 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1458 = (CMaterial *)(m_pScene.createNode("Material"));
Material1458->setUSE("text_color");
Appearance1457->setMaterial(*Material1458);

Shape1456->setAppearance(*Appearance1457);

CText* Text1459 = (CText *)(m_pScene.createNode("Text"));
Text1459->setString(new CString[1]{"Yaw"}, 1);
CFontStyle* FontStyle1460 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle1460->setFamily(new CString[1]{"SANS"}, 1);
Text1459->setFontStyle(*FontStyle1460);

Shape1456->setGeometry(Text1459);

Transform1454->addChildren(*Shape1456);

CShape* Shape1461 = (CShape *)(m_pScene.createNode("Shape"));
Shape1461->setDEF("Yaw_Back");
CAppearance* Appearance1462 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1463 = (CMaterial *)(m_pScene.createNode("Material"));
Material1463->setUSE("Clear");
Appearance1462->setMaterial(*Material1463);

Shape1461->setAppearance(*Appearance1462);

CIndexedFaceSet* IndexedFaceSet1464 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1464->setUSE("Backing");
Shape1461->setGeometry(IndexedFaceSet1464);

Transform1454->addChildren(*Shape1461);

Transform1430->addChildren(*Transform1454);

CTransform* Transform1465 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1465->setDEF("Roll_Text");
Transform1465->setTranslation(new float[3]{0,-5.2,0});
CTouchSensor* TouchSensor1466 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1466->setDEF("Roll_Touch");
Transform1465->addChildren(*TouchSensor1466);

CShape* Shape1467 = (CShape *)(m_pScene.createNode("Shape"));
Shape1467->setDEF("RollText");
CAppearance* Appearance1468 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1469 = (CMaterial *)(m_pScene.createNode("Material"));
Material1469->setUSE("text_color");
Appearance1468->setMaterial(*Material1469);

Shape1467->setAppearance(*Appearance1468);

CText* Text1470 = (CText *)(m_pScene.createNode("Text"));
Text1470->setString(new CString[1]{"Roll"}, 1);
CFontStyle* FontStyle1471 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle1471->setFamily(new CString[1]{"SANS"}, 1);
Text1470->setFontStyle(*FontStyle1471);

Shape1467->setGeometry(Text1470);

Transform1465->addChildren(*Shape1467);

CShape* Shape1472 = (CShape *)(m_pScene.createNode("Shape"));
Shape1472->setDEF("Roll_Back");
CAppearance* Appearance1473 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1474 = (CMaterial *)(m_pScene.createNode("Material"));
Material1474->setUSE("Clear");
Appearance1473->setMaterial(*Material1474);

Shape1472->setAppearance(*Appearance1473);

CIndexedFaceSet* IndexedFaceSet1475 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1475->setUSE("Backing");
Shape1472->setGeometry(IndexedFaceSet1475);

Transform1465->addChildren(*Shape1472);

Transform1430->addChildren(*Transform1465);

CTransform* Transform1476 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1476->setDEF("Walk_Text");
Transform1476->setTranslation(new float[3]{0,-6.6,0});
CTouchSensor* TouchSensor1477 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1477->setDEF("Walk_Touch");
Transform1476->addChildren(*TouchSensor1477);

CShape* Shape1478 = (CShape *)(m_pScene.createNode("Shape"));
Shape1478->setDEF("WalkText");
CAppearance* Appearance1479 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1480 = (CMaterial *)(m_pScene.createNode("Material"));
Material1480->setUSE("text_color");
Appearance1479->setMaterial(*Material1480);

Shape1478->setAppearance(*Appearance1479);

CText* Text1481 = (CText *)(m_pScene.createNode("Text"));
Text1481->setString(new CString[1]{"Walk"}, 1);
CFontStyle* FontStyle1482 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle1482->setFamily(new CString[1]{"SANS"}, 1);
Text1481->setFontStyle(*FontStyle1482);

Shape1478->setGeometry(Text1481);

Transform1476->addChildren(*Shape1478);

CShape* Shape1483 = (CShape *)(m_pScene.createNode("Shape"));
Shape1483->setDEF("Walk_Back");
CAppearance* Appearance1484 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1485 = (CMaterial *)(m_pScene.createNode("Material"));
Material1485->setUSE("Clear");
Appearance1484->setMaterial(*Material1485);

Shape1483->setAppearance(*Appearance1484);

CIndexedFaceSet* IndexedFaceSet1486 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1486->setUSE("Backing");
Shape1483->setGeometry(IndexedFaceSet1486);

Transform1476->addChildren(*Shape1483);

Transform1430->addChildren(*Transform1476);

CTransform* Transform1487 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1487->setDEF("Run_Text");
Transform1487->setTranslation(new float[3]{0,-8,0});
CTouchSensor* TouchSensor1488 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1488->setDEF("Run_Touch");
Transform1487->addChildren(*TouchSensor1488);

CShape* Shape1489 = (CShape *)(m_pScene.createNode("Shape"));
Shape1489->setDEF("RunText");
CAppearance* Appearance1490 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1491 = (CMaterial *)(m_pScene.createNode("Material"));
Material1491->setUSE("text_color");
Appearance1490->setMaterial(*Material1491);

Shape1489->setAppearance(*Appearance1490);

CText* Text1492 = (CText *)(m_pScene.createNode("Text"));
Text1492->setString(new CString[1]{"Run"}, 1);
CFontStyle* FontStyle1493 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle1493->setFamily(new CString[1]{"SANS"}, 1);
Text1492->setFontStyle(*FontStyle1493);

Shape1489->setGeometry(Text1492);

Transform1487->addChildren(*Shape1489);

CShape* Shape1494 = (CShape *)(m_pScene.createNode("Shape"));
Shape1494->setDEF("Run_Back");
CAppearance* Appearance1495 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1496 = (CMaterial *)(m_pScene.createNode("Material"));
Material1496->setUSE("Clear");
Appearance1495->setMaterial(*Material1496);

Shape1494->setAppearance(*Appearance1495);

CIndexedFaceSet* IndexedFaceSet1497 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1497->setUSE("Backing");
Shape1494->setGeometry(IndexedFaceSet1497);

Transform1487->addChildren(*Shape1494);

Transform1430->addChildren(*Transform1487);

CTransform* Transform1498 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1498->setDEF("Jump_Text");
Transform1498->setTranslation(new float[3]{0,-9.4,0});
CTouchSensor* TouchSensor1499 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1499->setDEF("Jump_Touch");
Transform1498->addChildren(*TouchSensor1499);

CShape* Shape1500 = (CShape *)(m_pScene.createNode("Shape"));
Shape1500->setDEF("JumpText");
CAppearance* Appearance1501 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1502 = (CMaterial *)(m_pScene.createNode("Material"));
Material1502->setUSE("text_color");
Appearance1501->setMaterial(*Material1502);

Shape1500->setAppearance(*Appearance1501);

CText* Text1503 = (CText *)(m_pScene.createNode("Text"));
Text1503->setString(new CString[1]{"Jump"}, 1);
CFontStyle* FontStyle1504 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle1504->setFamily(new CString[1]{"SANS"}, 1);
Text1503->setFontStyle(*FontStyle1504);

Shape1500->setGeometry(Text1503);

Transform1498->addChildren(*Shape1500);

CShape* Shape1505 = (CShape *)(m_pScene.createNode("Shape"));
Shape1505->setDEF("Jump_Back");
CAppearance* Appearance1506 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1507 = (CMaterial *)(m_pScene.createNode("Material"));
Material1507->setUSE("Clear");
Appearance1506->setMaterial(*Material1507);

Shape1505->setAppearance(*Appearance1506);

CIndexedFaceSet* IndexedFaceSet1508 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1508->setUSE("Backing");
Shape1505->setGeometry(IndexedFaceSet1508);

Transform1498->addChildren(*Shape1505);

Transform1430->addChildren(*Transform1498);

CTransform* Transform1509 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1509->setDEF("Kick_Text");
Transform1509->setTranslation(new float[3]{0,-10.8,0});
CTouchSensor* TouchSensor1510 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1510->setDEF("Kick_Touch");
Transform1509->addChildren(*TouchSensor1510);

CShape* Shape1511 = (CShape *)(m_pScene.createNode("Shape"));
Shape1511->setDEF("KickText");
CAppearance* Appearance1512 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1513 = (CMaterial *)(m_pScene.createNode("Material"));
Material1513->setUSE("text_color");
Appearance1512->setMaterial(*Material1513);

Shape1511->setAppearance(*Appearance1512);

CText* Text1514 = (CText *)(m_pScene.createNode("Text"));
Text1514->setString(new CString[1]{"Kick"}, 1);
CFontStyle* FontStyle1515 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle1515->setFamily(new CString[1]{"SANS"}, 1);
Text1514->setFontStyle(*FontStyle1515);

Shape1511->setGeometry(Text1514);

Transform1509->addChildren(*Shape1511);

CShape* Shape1516 = (CShape *)(m_pScene.createNode("Shape"));
Shape1516->setDEF("Kick_Back");
CAppearance* Appearance1517 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1518 = (CMaterial *)(m_pScene.createNode("Material"));
Material1518->setUSE("Clear");
Appearance1517->setMaterial(*Material1518);

Shape1516->setAppearance(*Appearance1517);

CIndexedFaceSet* IndexedFaceSet1519 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1519->setUSE("Backing");
Shape1516->setGeometry(IndexedFaceSet1519);

Transform1509->addChildren(*Shape1516);

Transform1430->addChildren(*Transform1509);

CTransform* Transform1520 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1520->setDEF("Stop_Text");
Transform1520->setTranslation(new float[3]{0,0.4,0});
CTouchSensor* TouchSensor1521 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor1521->setDEF("Stop_Touch");
Transform1520->addChildren(*TouchSensor1521);

CShape* Shape1522 = (CShape *)(m_pScene.createNode("Shape"));
Shape1522->setDEF("StopText");
CAppearance* Appearance1523 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1524 = (CMaterial *)(m_pScene.createNode("Material"));
Material1524->setUSE("text_color");
Appearance1523->setMaterial(*Material1524);

Shape1522->setAppearance(*Appearance1523);

CText* Text1525 = (CText *)(m_pScene.createNode("Text"));
Text1525->setString(new CString[1]{"Default"}, 1);
CFontStyle* FontStyle1526 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle1526->setFamily(new CString[1]{"SANS"}, 1);
Text1525->setFontStyle(*FontStyle1526);

Shape1522->setGeometry(Text1525);

Transform1520->addChildren(*Shape1522);

CShape* Shape1527 = (CShape *)(m_pScene.createNode("Shape"));
Shape1527->setDEF("Stop_Back");
CAppearance* Appearance1528 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material1529 = (CMaterial *)(m_pScene.createNode("Material"));
Material1529->setUSE("Clear");
Appearance1528->setMaterial(*Material1529);

Shape1527->setAppearance(*Appearance1528);

CIndexedFaceSet* IndexedFaceSet1530 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1530->setUSE("Backing");
Shape1527->setGeometry(IndexedFaceSet1530);

Transform1520->addChildren(*Shape1527);

Transform1430->addChildren(*Transform1520);

Transform1429->addChildren(*Transform1430);

Group1425->addChildren(*Transform1429);

group->addChildren(*Group1425);

CROUTE* ROUTE1531 = new CROUTE();
ROUTE1531->setFromNode("StandTimer");
ROUTE1531->setFromField("fraction_changed");
ROUTE1531->setToNode("Stand_r_ankleRotInterp");
ROUTE1531->setToField("set_fraction");
group->addChildren(*ROUTE1531);

CROUTE* ROUTE1532 = new CROUTE();
ROUTE1532->setFromNode("StandTimer");
ROUTE1532->setFromField("fraction_changed");
ROUTE1532->setToNode("Stand_r_kneeRotInterp");
ROUTE1532->setToField("set_fraction");
group->addChildren(*ROUTE1532);

CROUTE* ROUTE1533 = new CROUTE();
ROUTE1533->setFromNode("StandTimer");
ROUTE1533->setFromField("fraction_changed");
ROUTE1533->setToNode("Stand_r_hipRotInterp");
ROUTE1533->setToField("set_fraction");
group->addChildren(*ROUTE1533);

CROUTE* ROUTE1534 = new CROUTE();
ROUTE1534->setFromNode("StandTimer");
ROUTE1534->setFromField("fraction_changed");
ROUTE1534->setToNode("Stand_l_ankleRotInterp");
ROUTE1534->setToField("set_fraction");
group->addChildren(*ROUTE1534);

CROUTE* ROUTE1535 = new CROUTE();
ROUTE1535->setFromNode("StandTimer");
ROUTE1535->setFromField("fraction_changed");
ROUTE1535->setToNode("Stand_l_kneeRotInterp");
ROUTE1535->setToField("set_fraction");
group->addChildren(*ROUTE1535);

CROUTE* ROUTE1536 = new CROUTE();
ROUTE1536->setFromNode("StandTimer");
ROUTE1536->setFromField("fraction_changed");
ROUTE1536->setToNode("Stand_l_hipRotInterp");
ROUTE1536->setToField("set_fraction");
group->addChildren(*ROUTE1536);

CROUTE* ROUTE1537 = new CROUTE();
ROUTE1537->setFromNode("StandTimer");
ROUTE1537->setFromField("fraction_changed");
ROUTE1537->setToNode("Stand_lower_bodyRotInterp");
ROUTE1537->setToField("set_fraction");
group->addChildren(*ROUTE1537);

CROUTE* ROUTE1538 = new CROUTE();
ROUTE1538->setFromNode("StandTimer");
ROUTE1538->setFromField("fraction_changed");
ROUTE1538->setToNode("Stand_r_wristRotInterp");
ROUTE1538->setToField("set_fraction");
group->addChildren(*ROUTE1538);

CROUTE* ROUTE1539 = new CROUTE();
ROUTE1539->setFromNode("StandTimer");
ROUTE1539->setFromField("fraction_changed");
ROUTE1539->setToNode("Stand_r_elbowRotInterp");
ROUTE1539->setToField("set_fraction");
group->addChildren(*ROUTE1539);

CROUTE* ROUTE1540 = new CROUTE();
ROUTE1540->setFromNode("StandTimer");
ROUTE1540->setFromField("fraction_changed");
ROUTE1540->setToNode("Stand_r_shoulderRotInterp");
ROUTE1540->setToField("set_fraction");
group->addChildren(*ROUTE1540);

CROUTE* ROUTE1541 = new CROUTE();
ROUTE1541->setFromNode("StandTimer");
ROUTE1541->setFromField("fraction_changed");
ROUTE1541->setToNode("Stand_l_wristRotInterp");
ROUTE1541->setToField("set_fraction");
group->addChildren(*ROUTE1541);

CROUTE* ROUTE1542 = new CROUTE();
ROUTE1542->setFromNode("StandTimer");
ROUTE1542->setFromField("fraction_changed");
ROUTE1542->setToNode("Stand_l_elbowRotInterp");
ROUTE1542->setToField("set_fraction");
group->addChildren(*ROUTE1542);

CROUTE* ROUTE1543 = new CROUTE();
ROUTE1543->setFromNode("StandTimer");
ROUTE1543->setFromField("fraction_changed");
ROUTE1543->setToNode("Stand_l_shoulderRotInterp");
ROUTE1543->setToField("set_fraction");
group->addChildren(*ROUTE1543);

CROUTE* ROUTE1544 = new CROUTE();
ROUTE1544->setFromNode("StandTimer");
ROUTE1544->setFromField("fraction_changed");
ROUTE1544->setToNode("Stand_headRotInterp");
ROUTE1544->setToField("set_fraction");
group->addChildren(*ROUTE1544);

CROUTE* ROUTE1545 = new CROUTE();
ROUTE1545->setFromNode("StandTimer");
ROUTE1545->setFromField("fraction_changed");
ROUTE1545->setToNode("Stand_neckRotInterp");
ROUTE1545->setToField("set_fraction");
group->addChildren(*ROUTE1545);

CROUTE* ROUTE1546 = new CROUTE();
ROUTE1546->setFromNode("StandTimer");
ROUTE1546->setFromField("fraction_changed");
ROUTE1546->setToNode("Stand_l_eyeballRotInterp");
ROUTE1546->setToField("set_fraction");
group->addChildren(*ROUTE1546);

CROUTE* ROUTE1547 = new CROUTE();
ROUTE1547->setFromNode("StandTimer");
ROUTE1547->setFromField("fraction_changed");
ROUTE1547->setToNode("Stand_r_eyeballRotInterp");
ROUTE1547->setToField("set_fraction");
group->addChildren(*ROUTE1547);

CROUTE* ROUTE1548 = new CROUTE();
ROUTE1548->setFromNode("StandTimer");
ROUTE1548->setFromField("fraction_changed");
ROUTE1548->setToNode("Stand_upper_bodyRotInterp");
ROUTE1548->setToField("set_fraction");
group->addChildren(*ROUTE1548);

CROUTE* ROUTE1549 = new CROUTE();
ROUTE1549->setFromNode("StandTimer");
ROUTE1549->setFromField("fraction_changed");
ROUTE1549->setToNode("Stand_whole_bodyRotInterp");
ROUTE1549->setToField("set_fraction");
group->addChildren(*ROUTE1549);

CROUTE* ROUTE1550 = new CROUTE();
ROUTE1550->setFromNode("StandTimer");
ROUTE1550->setFromField("fraction_changed");
ROUTE1550->setToNode("Stand_whole_bodyTransInterp");
ROUTE1550->setToField("set_fraction");
group->addChildren(*ROUTE1550);

CROUTE* ROUTE1551 = new CROUTE();
ROUTE1551->setFromNode("StandTimer");
ROUTE1551->setFromField("fraction_changed");
ROUTE1551->setToNode("Stand_l_sternoclavicularRoll");
ROUTE1551->setToField("set_fraction");
group->addChildren(*ROUTE1551);

CROUTE* ROUTE1552 = new CROUTE();
ROUTE1552->setFromNode("StandTimer");
ROUTE1552->setFromField("fraction_changed");
ROUTE1552->setToNode("Stand_l_acromioclavicularRoll");
ROUTE1552->setToField("set_fraction");
group->addChildren(*ROUTE1552);

CROUTE* ROUTE1553 = new CROUTE();
ROUTE1553->setFromNode("StandTimer");
ROUTE1553->setFromField("fraction_changed");
ROUTE1553->setToNode("Stand_r_sternoclavicularRoll");
ROUTE1553->setToField("set_fraction");
group->addChildren(*ROUTE1553);

CROUTE* ROUTE1554 = new CROUTE();
ROUTE1554->setFromNode("StandTimer");
ROUTE1554->setFromField("fraction_changed");
ROUTE1554->setToNode("Stand_r_acromioclavicularRoll");
ROUTE1554->setToField("set_fraction");
group->addChildren(*ROUTE1554);

CROUTE* ROUTE1555 = new CROUTE();
ROUTE1555->setFromNode("StandTimer");
ROUTE1555->setFromField("fraction_changed");
ROUTE1555->setToNode("Stand_r_metatarsalPitch");
ROUTE1555->setToField("set_fraction");
group->addChildren(*ROUTE1555);

CROUTE* ROUTE1556 = new CROUTE();
ROUTE1556->setFromNode("StandTimer");
ROUTE1556->setFromField("fraction_changed");
ROUTE1556->setToNode("Stand_sacroiliacYaw");
ROUTE1556->setToField("set_fraction");
group->addChildren(*ROUTE1556);

CROUTE* ROUTE1557 = new CROUTE();
ROUTE1557->setFromNode("StandTimer");
ROUTE1557->setFromField("fraction_changed");
ROUTE1557->setToNode("Stand_vl5Yaw");
ROUTE1557->setToField("set_fraction");
group->addChildren(*ROUTE1557);

CROUTE* ROUTE1558 = new CROUTE();
ROUTE1558->setFromNode("StandTimer");
ROUTE1558->setFromField("fraction_changed");
ROUTE1558->setToNode("Stand_vc6Yaw");
ROUTE1558->setToField("set_fraction");
group->addChildren(*ROUTE1558);

CROUTE* ROUTE1559 = new CROUTE();
ROUTE1559->setFromNode("StandTimer");
ROUTE1559->setFromField("fraction_changed");
ROUTE1559->setToNode("Stand_l_thumb1Pitch");
ROUTE1559->setToField("set_fraction");
group->addChildren(*ROUTE1559);

CROUTE* ROUTE1560 = new CROUTE();
ROUTE1560->setFromNode("StandTimer");
ROUTE1560->setFromField("fraction_changed");
ROUTE1560->setToNode("Stand_r_thumb1Pitch");
ROUTE1560->setToField("set_fraction");
group->addChildren(*ROUTE1560);

CROUTE* ROUTE1561 = new CROUTE();
ROUTE1561->setFromNode("StandTimer");
ROUTE1561->setFromField("fraction_changed");
ROUTE1561->setToNode("Stand_r_index1Roll");
ROUTE1561->setToField("set_fraction");
group->addChildren(*ROUTE1561);

CROUTE* ROUTE1562 = new CROUTE();
ROUTE1562->setFromNode("StandTimer");
ROUTE1562->setFromField("fraction_changed");
ROUTE1562->setToNode("Stand_r_index2Roll");
ROUTE1562->setToField("set_fraction");
group->addChildren(*ROUTE1562);

CROUTE* ROUTE1563 = new CROUTE();
ROUTE1563->setFromNode("StandTimer");
ROUTE1563->setFromField("fraction_changed");
ROUTE1563->setToNode("Stand_r_index3Roll");
ROUTE1563->setToField("set_fraction");
group->addChildren(*ROUTE1563);

CROUTE* ROUTE1564 = new CROUTE();
ROUTE1564->setFromNode("Stand_r_ankleRotInterp");
ROUTE1564->setFromField("value_changed");
ROUTE1564->setToNode("hanim_r_ankle");
ROUTE1564->setToField("set_rotation");
group->addChildren(*ROUTE1564);

CROUTE* ROUTE1565 = new CROUTE();
ROUTE1565->setFromNode("Stand_r_kneeRotInterp");
ROUTE1565->setFromField("value_changed");
ROUTE1565->setToNode("hanim_r_knee");
ROUTE1565->setToField("set_rotation");
group->addChildren(*ROUTE1565);

CROUTE* ROUTE1566 = new CROUTE();
ROUTE1566->setFromNode("Stand_r_hipRotInterp");
ROUTE1566->setFromField("value_changed");
ROUTE1566->setToNode("hanim_r_hip");
ROUTE1566->setToField("set_rotation");
group->addChildren(*ROUTE1566);

CROUTE* ROUTE1567 = new CROUTE();
ROUTE1567->setFromNode("Stand_l_ankleRotInterp");
ROUTE1567->setFromField("value_changed");
ROUTE1567->setToNode("hanim_l_ankle");
ROUTE1567->setToField("set_rotation");
group->addChildren(*ROUTE1567);

CROUTE* ROUTE1568 = new CROUTE();
ROUTE1568->setFromNode("Stand_l_kneeRotInterp");
ROUTE1568->setFromField("value_changed");
ROUTE1568->setToNode("hanim_l_knee");
ROUTE1568->setToField("set_rotation");
group->addChildren(*ROUTE1568);

CROUTE* ROUTE1569 = new CROUTE();
ROUTE1569->setFromNode("Stand_l_hipRotInterp");
ROUTE1569->setFromField("value_changed");
ROUTE1569->setToNode("hanim_l_hip");
ROUTE1569->setToField("set_rotation");
group->addChildren(*ROUTE1569);

CROUTE* ROUTE1570 = new CROUTE();
ROUTE1570->setFromNode("Stand_r_wristRotInterp");
ROUTE1570->setFromField("value_changed");
ROUTE1570->setToNode("hanim_r_wrist");
ROUTE1570->setToField("set_rotation");
group->addChildren(*ROUTE1570);

CROUTE* ROUTE1571 = new CROUTE();
ROUTE1571->setFromNode("Stand_r_elbowRotInterp");
ROUTE1571->setFromField("value_changed");
ROUTE1571->setToNode("hanim_r_elbow");
ROUTE1571->setToField("set_rotation");
group->addChildren(*ROUTE1571);

CROUTE* ROUTE1572 = new CROUTE();
ROUTE1572->setFromNode("Stand_r_shoulderRotInterp");
ROUTE1572->setFromField("value_changed");
ROUTE1572->setToNode("hanim_r_shoulder");
ROUTE1572->setToField("set_rotation");
group->addChildren(*ROUTE1572);

CROUTE* ROUTE1573 = new CROUTE();
ROUTE1573->setFromNode("Stand_l_wristRotInterp");
ROUTE1573->setFromField("value_changed");
ROUTE1573->setToNode("hanim_l_wrist");
ROUTE1573->setToField("set_rotation");
group->addChildren(*ROUTE1573);

CROUTE* ROUTE1574 = new CROUTE();
ROUTE1574->setFromNode("Stand_l_elbowRotInterp");
ROUTE1574->setFromField("value_changed");
ROUTE1574->setToNode("hanim_l_elbow");
ROUTE1574->setToField("set_rotation");
group->addChildren(*ROUTE1574);

CROUTE* ROUTE1575 = new CROUTE();
ROUTE1575->setFromNode("Stand_l_shoulderRotInterp");
ROUTE1575->setFromField("value_changed");
ROUTE1575->setToNode("hanim_l_shoulder");
ROUTE1575->setToField("set_rotation");
group->addChildren(*ROUTE1575);

CROUTE* ROUTE1576 = new CROUTE();
ROUTE1576->setFromNode("Stand_headRotInterp");
ROUTE1576->setFromField("value_changed");
ROUTE1576->setToNode("hanim_skullbase");
ROUTE1576->setToField("set_rotation");
group->addChildren(*ROUTE1576);

CROUTE* ROUTE1577 = new CROUTE();
ROUTE1577->setFromNode("Stand_neckRotInterp");
ROUTE1577->setFromField("value_changed");
ROUTE1577->setToNode("hanim_vc7");
ROUTE1577->setToField("set_rotation");
group->addChildren(*ROUTE1577);

CROUTE* ROUTE1578 = new CROUTE();
ROUTE1578->setFromNode("Stand_l_eyeballRotInterp");
ROUTE1578->setFromField("value_changed");
ROUTE1578->setToNode("hanim_l_eyeball_joint");
ROUTE1578->setToField("set_rotation");
group->addChildren(*ROUTE1578);

CROUTE* ROUTE1579 = new CROUTE();
ROUTE1579->setFromNode("Stand_r_eyeballRotInterp");
ROUTE1579->setFromField("value_changed");
ROUTE1579->setToNode("hanim_r_eyeball_joint");
ROUTE1579->setToField("set_rotation");
group->addChildren(*ROUTE1579);

CROUTE* ROUTE1580 = new CROUTE();
ROUTE1580->setFromNode("Stand_upper_bodyRotInterp");
ROUTE1580->setFromField("value_changed");
ROUTE1580->setToNode("hanim_vl1");
ROUTE1580->setToField("set_rotation");
group->addChildren(*ROUTE1580);

CROUTE* ROUTE1581 = new CROUTE();
ROUTE1581->setFromNode("Stand_lower_bodyRotInterp");
ROUTE1581->setFromField("value_changed");
ROUTE1581->setToNode("hanim_sacroiliac");
ROUTE1581->setToField("set_rotation");
group->addChildren(*ROUTE1581);

CROUTE* ROUTE1582 = new CROUTE();
ROUTE1582->setFromNode("Stand_whole_bodyRotInterp");
ROUTE1582->setFromField("value_changed");
ROUTE1582->setToNode("hanim_HumanoidRoot");
ROUTE1582->setToField("set_rotation");
group->addChildren(*ROUTE1582);

CROUTE* ROUTE1583 = new CROUTE();
ROUTE1583->setFromNode("Stand_whole_bodyTransInterp");
ROUTE1583->setFromField("value_changed");
ROUTE1583->setToNode("hanim_HumanoidRoot");
ROUTE1583->setToField("set_translation");
group->addChildren(*ROUTE1583);

CROUTE* ROUTE1584 = new CROUTE();
ROUTE1584->setFromNode("Stand_l_sternoclavicularRoll");
ROUTE1584->setFromField("value_changed");
ROUTE1584->setToNode("hanim_l_sternoclavicular");
ROUTE1584->setToField("set_rotation");
group->addChildren(*ROUTE1584);

CROUTE* ROUTE1585 = new CROUTE();
ROUTE1585->setFromNode("Stand_l_acromioclavicularRoll");
ROUTE1585->setFromField("value_changed");
ROUTE1585->setToNode("hanim_l_acromioclavicular");
ROUTE1585->setToField("set_rotation");
group->addChildren(*ROUTE1585);

CROUTE* ROUTE1586 = new CROUTE();
ROUTE1586->setFromNode("Stand_r_sternoclavicularRoll");
ROUTE1586->setFromField("value_changed");
ROUTE1586->setToNode("hanim_r_sternoclavicular");
ROUTE1586->setToField("set_rotation");
group->addChildren(*ROUTE1586);

CROUTE* ROUTE1587 = new CROUTE();
ROUTE1587->setFromNode("Stand_r_acromioclavicularRoll");
ROUTE1587->setFromField("value_changed");
ROUTE1587->setToNode("hanim_r_acromioclavicular");
ROUTE1587->setToField("set_rotation");
group->addChildren(*ROUTE1587);

CROUTE* ROUTE1588 = new CROUTE();
ROUTE1588->setFromNode("Stand_r_metatarsalPitch");
ROUTE1588->setFromField("value_changed");
ROUTE1588->setToNode("hanim_l_metatarsal");
ROUTE1588->setToField("set_rotation");
group->addChildren(*ROUTE1588);

CROUTE* ROUTE1589 = new CROUTE();
ROUTE1589->setFromNode("Stand_r_metatarsalPitch");
ROUTE1589->setFromField("value_changed");
ROUTE1589->setToNode("hanim_r_metatarsal");
ROUTE1589->setToField("set_rotation");
group->addChildren(*ROUTE1589);

CROUTE* ROUTE1590 = new CROUTE();
ROUTE1590->setFromNode("Stand_sacroiliacYaw");
ROUTE1590->setFromField("value_changed");
ROUTE1590->setToNode("hanim_sacroiliac");
ROUTE1590->setToField("set_rotation");
group->addChildren(*ROUTE1590);

CROUTE* ROUTE1591 = new CROUTE();
ROUTE1591->setFromNode("Stand_vl5Yaw");
ROUTE1591->setFromField("value_changed");
ROUTE1591->setToNode("hanim_vl5");
ROUTE1591->setToField("set_rotation");
group->addChildren(*ROUTE1591);

CROUTE* ROUTE1592 = new CROUTE();
ROUTE1592->setFromNode("Stand_vc6Yaw");
ROUTE1592->setFromField("value_changed");
ROUTE1592->setToNode("hanim_vc6");
ROUTE1592->setToField("set_rotation");
group->addChildren(*ROUTE1592);

CROUTE* ROUTE1593 = new CROUTE();
ROUTE1593->setFromNode("Stand_l_thumb1Pitch");
ROUTE1593->setFromField("value_changed");
ROUTE1593->setToNode("hanim_l_thumb1");
ROUTE1593->setToField("set_rotation");
group->addChildren(*ROUTE1593);

CROUTE* ROUTE1594 = new CROUTE();
ROUTE1594->setFromNode("Stand_r_thumb1Pitch");
ROUTE1594->setFromField("value_changed");
ROUTE1594->setToNode("hanim_r_thumb1");
ROUTE1594->setToField("set_rotation");
group->addChildren(*ROUTE1594);

CROUTE* ROUTE1595 = new CROUTE();
ROUTE1595->setFromNode("Stand_r_index1Roll");
ROUTE1595->setFromField("value_changed");
ROUTE1595->setToNode("hanim_r_index1");
ROUTE1595->setToField("set_rotation");
group->addChildren(*ROUTE1595);

CROUTE* ROUTE1596 = new CROUTE();
ROUTE1596->setFromNode("Stand_r_index2Roll");
ROUTE1596->setFromField("value_changed");
ROUTE1596->setToNode("hanim_r_index2");
ROUTE1596->setToField("set_rotation");
group->addChildren(*ROUTE1596);

CROUTE* ROUTE1597 = new CROUTE();
ROUTE1597->setFromNode("Stand_r_index2Roll");
ROUTE1597->setFromField("value_changed");
ROUTE1597->setToNode("hanim_r_index3");
ROUTE1597->setToField("set_rotation");
group->addChildren(*ROUTE1597);

CROUTE* ROUTE1598 = new CROUTE();
ROUTE1598->setFromNode("Stand_r_index1Roll");
ROUTE1598->setFromField("value_changed");
ROUTE1598->setToNode("hanim_r_middle1");
ROUTE1598->setToField("set_rotation");
group->addChildren(*ROUTE1598);

CROUTE* ROUTE1599 = new CROUTE();
ROUTE1599->setFromNode("Stand_r_index2Roll");
ROUTE1599->setFromField("value_changed");
ROUTE1599->setToNode("hanim_r_middle2");
ROUTE1599->setToField("set_rotation");
group->addChildren(*ROUTE1599);

CROUTE* ROUTE1600 = new CROUTE();
ROUTE1600->setFromNode("Stand_r_index2Roll");
ROUTE1600->setFromField("value_changed");
ROUTE1600->setToNode("hanim_r_middle3");
ROUTE1600->setToField("set_rotation");
group->addChildren(*ROUTE1600);

CROUTE* ROUTE1601 = new CROUTE();
ROUTE1601->setFromNode("Stand_r_index1Roll");
ROUTE1601->setFromField("value_changed");
ROUTE1601->setToNode("hanim_r_ring1");
ROUTE1601->setToField("set_rotation");
group->addChildren(*ROUTE1601);

CROUTE* ROUTE1602 = new CROUTE();
ROUTE1602->setFromNode("Stand_r_index2Roll");
ROUTE1602->setFromField("value_changed");
ROUTE1602->setToNode("hanim_r_ring2");
ROUTE1602->setToField("set_rotation");
group->addChildren(*ROUTE1602);

CROUTE* ROUTE1603 = new CROUTE();
ROUTE1603->setFromNode("Stand_r_index2Roll");
ROUTE1603->setFromField("value_changed");
ROUTE1603->setToNode("hanim_r_ring3");
ROUTE1603->setToField("set_rotation");
group->addChildren(*ROUTE1603);

CROUTE* ROUTE1604 = new CROUTE();
ROUTE1604->setFromNode("Stand_r_index1Roll");
ROUTE1604->setFromField("value_changed");
ROUTE1604->setToNode("hanim_r_pinky1");
ROUTE1604->setToField("set_rotation");
group->addChildren(*ROUTE1604);

CROUTE* ROUTE1605 = new CROUTE();
ROUTE1605->setFromNode("Stand_r_index2Roll");
ROUTE1605->setFromField("value_changed");
ROUTE1605->setToNode("hanim_r_pinky2");
ROUTE1605->setToField("set_rotation");
group->addChildren(*ROUTE1605);

CROUTE* ROUTE1606 = new CROUTE();
ROUTE1606->setFromNode("Stand_r_index2Roll");
ROUTE1606->setFromField("value_changed");
ROUTE1606->setToNode("hanim_r_pinky3");
ROUTE1606->setToField("set_rotation");
group->addChildren(*ROUTE1606);

CROUTE* ROUTE1607 = new CROUTE();
ROUTE1607->setFromNode("PitchTimer");
ROUTE1607->setFromField("fraction_changed");
ROUTE1607->setToNode("Pitches_r_ankleRotInterp");
ROUTE1607->setToField("set_fraction");
group->addChildren(*ROUTE1607);

CROUTE* ROUTE1608 = new CROUTE();
ROUTE1608->setFromNode("PitchTimer");
ROUTE1608->setFromField("fraction_changed");
ROUTE1608->setToNode("Pitches_r_kneeRotInterp");
ROUTE1608->setToField("set_fraction");
group->addChildren(*ROUTE1608);

CROUTE* ROUTE1609 = new CROUTE();
ROUTE1609->setFromNode("PitchTimer");
ROUTE1609->setFromField("fraction_changed");
ROUTE1609->setToNode("Pitches_r_hipRotInterp");
ROUTE1609->setToField("set_fraction");
group->addChildren(*ROUTE1609);

CROUTE* ROUTE1610 = new CROUTE();
ROUTE1610->setFromNode("PitchTimer");
ROUTE1610->setFromField("fraction_changed");
ROUTE1610->setToNode("Pitches_l_ankleRotInterp");
ROUTE1610->setToField("set_fraction");
group->addChildren(*ROUTE1610);

CROUTE* ROUTE1611 = new CROUTE();
ROUTE1611->setFromNode("PitchTimer");
ROUTE1611->setFromField("fraction_changed");
ROUTE1611->setToNode("Pitches_l_kneeRotInterp");
ROUTE1611->setToField("set_fraction");
group->addChildren(*ROUTE1611);

CROUTE* ROUTE1612 = new CROUTE();
ROUTE1612->setFromNode("PitchTimer");
ROUTE1612->setFromField("fraction_changed");
ROUTE1612->setToNode("Pitches_l_hipRotInterp");
ROUTE1612->setToField("set_fraction");
group->addChildren(*ROUTE1612);

CROUTE* ROUTE1613 = new CROUTE();
ROUTE1613->setFromNode("PitchTimer");
ROUTE1613->setFromField("fraction_changed");
ROUTE1613->setToNode("Pitches_lower_bodyRotInterp");
ROUTE1613->setToField("set_fraction");
group->addChildren(*ROUTE1613);

CROUTE* ROUTE1614 = new CROUTE();
ROUTE1614->setFromNode("PitchTimer");
ROUTE1614->setFromField("fraction_changed");
ROUTE1614->setToNode("Pitches_r_wristRotInterp");
ROUTE1614->setToField("set_fraction");
group->addChildren(*ROUTE1614);

CROUTE* ROUTE1615 = new CROUTE();
ROUTE1615->setFromNode("PitchTimer");
ROUTE1615->setFromField("fraction_changed");
ROUTE1615->setToNode("Pitches_r_elbowRotInterp");
ROUTE1615->setToField("set_fraction");
group->addChildren(*ROUTE1615);

CROUTE* ROUTE1616 = new CROUTE();
ROUTE1616->setFromNode("PitchTimer");
ROUTE1616->setFromField("fraction_changed");
ROUTE1616->setToNode("Pitches_r_shoulderRotInterp");
ROUTE1616->setToField("set_fraction");
group->addChildren(*ROUTE1616);

CROUTE* ROUTE1617 = new CROUTE();
ROUTE1617->setFromNode("PitchTimer");
ROUTE1617->setFromField("fraction_changed");
ROUTE1617->setToNode("Pitches_l_wristRotInterp");
ROUTE1617->setToField("set_fraction");
group->addChildren(*ROUTE1617);

CROUTE* ROUTE1618 = new CROUTE();
ROUTE1618->setFromNode("PitchTimer");
ROUTE1618->setFromField("fraction_changed");
ROUTE1618->setToNode("Pitches_l_elbowRotInterp");
ROUTE1618->setToField("set_fraction");
group->addChildren(*ROUTE1618);

CROUTE* ROUTE1619 = new CROUTE();
ROUTE1619->setFromNode("PitchTimer");
ROUTE1619->setFromField("fraction_changed");
ROUTE1619->setToNode("Pitches_l_shoulderRotInterp");
ROUTE1619->setToField("set_fraction");
group->addChildren(*ROUTE1619);

CROUTE* ROUTE1620 = new CROUTE();
ROUTE1620->setFromNode("PitchTimer");
ROUTE1620->setFromField("fraction_changed");
ROUTE1620->setToNode("Pitches_headRotInterp");
ROUTE1620->setToField("set_fraction");
group->addChildren(*ROUTE1620);

CROUTE* ROUTE1621 = new CROUTE();
ROUTE1621->setFromNode("PitchTimer");
ROUTE1621->setFromField("fraction_changed");
ROUTE1621->setToNode("Pitches_neckRotInterp");
ROUTE1621->setToField("set_fraction");
group->addChildren(*ROUTE1621);

CROUTE* ROUTE1622 = new CROUTE();
ROUTE1622->setFromNode("PitchTimer");
ROUTE1622->setFromField("fraction_changed");
ROUTE1622->setToNode("Pitches_upper_bodyRotInterp");
ROUTE1622->setToField("set_fraction");
group->addChildren(*ROUTE1622);

CROUTE* ROUTE1623 = new CROUTE();
ROUTE1623->setFromNode("PitchTimer");
ROUTE1623->setFromField("fraction_changed");
ROUTE1623->setToNode("Pitches_whole_bodyRotInterp");
ROUTE1623->setToField("set_fraction");
group->addChildren(*ROUTE1623);

CROUTE* ROUTE1624 = new CROUTE();
ROUTE1624->setFromNode("PitchTimer");
ROUTE1624->setFromField("fraction_changed");
ROUTE1624->setToNode("Pitches_whole_bodyTransInterp");
ROUTE1624->setToField("set_fraction");
group->addChildren(*ROUTE1624);

CROUTE* ROUTE1625 = new CROUTE();
ROUTE1625->setFromNode("PitchTimer");
ROUTE1625->setFromField("fraction_changed");
ROUTE1625->setToNode("Pitch_l_sternoclavicularRoll");
ROUTE1625->setToField("set_fraction");
group->addChildren(*ROUTE1625);

CROUTE* ROUTE1626 = new CROUTE();
ROUTE1626->setFromNode("PitchTimer");
ROUTE1626->setFromField("fraction_changed");
ROUTE1626->setToNode("Pitch_l_acromioclavicularRoll");
ROUTE1626->setToField("set_fraction");
group->addChildren(*ROUTE1626);

CROUTE* ROUTE1627 = new CROUTE();
ROUTE1627->setFromNode("PitchTimer");
ROUTE1627->setFromField("fraction_changed");
ROUTE1627->setToNode("Pitch_r_sternoclavicularRoll");
ROUTE1627->setToField("set_fraction");
group->addChildren(*ROUTE1627);

CROUTE* ROUTE1628 = new CROUTE();
ROUTE1628->setFromNode("PitchTimer");
ROUTE1628->setFromField("fraction_changed");
ROUTE1628->setToNode("Pitch_r_acromioclavicularRoll");
ROUTE1628->setToField("set_fraction");
group->addChildren(*ROUTE1628);

CROUTE* ROUTE1629 = new CROUTE();
ROUTE1629->setFromNode("PitchTimer");
ROUTE1629->setFromField("fraction_changed");
ROUTE1629->setToNode("Pitch_r_metatarsalPitch");
ROUTE1629->setToField("set_fraction");
group->addChildren(*ROUTE1629);

CROUTE* ROUTE1630 = new CROUTE();
ROUTE1630->setFromNode("PitchTimer");
ROUTE1630->setFromField("fraction_changed");
ROUTE1630->setToNode("Pitch_sacroiliacYaw");
ROUTE1630->setToField("set_fraction");
group->addChildren(*ROUTE1630);

CROUTE* ROUTE1631 = new CROUTE();
ROUTE1631->setFromNode("PitchTimer");
ROUTE1631->setFromField("fraction_changed");
ROUTE1631->setToNode("Pitch_vl5Yaw");
ROUTE1631->setToField("set_fraction");
group->addChildren(*ROUTE1631);

CROUTE* ROUTE1632 = new CROUTE();
ROUTE1632->setFromNode("PitchTimer");
ROUTE1632->setFromField("fraction_changed");
ROUTE1632->setToNode("Pitch_vc6Yaw");
ROUTE1632->setToField("set_fraction");
group->addChildren(*ROUTE1632);

CROUTE* ROUTE1633 = new CROUTE();
ROUTE1633->setFromNode("PitchTimer");
ROUTE1633->setFromField("fraction_changed");
ROUTE1633->setToNode("Pitch_l_thumb1Pitch");
ROUTE1633->setToField("set_fraction");
group->addChildren(*ROUTE1633);

CROUTE* ROUTE1634 = new CROUTE();
ROUTE1634->setFromNode("PitchTimer");
ROUTE1634->setFromField("fraction_changed");
ROUTE1634->setToNode("Pitch_r_thumb1Pitch");
ROUTE1634->setToField("set_fraction");
group->addChildren(*ROUTE1634);

CROUTE* ROUTE1635 = new CROUTE();
ROUTE1635->setFromNode("Pitches_r_ankleRotInterp");
ROUTE1635->setFromField("value_changed");
ROUTE1635->setToNode("hanim_r_ankle");
ROUTE1635->setToField("set_rotation");
group->addChildren(*ROUTE1635);

CROUTE* ROUTE1636 = new CROUTE();
ROUTE1636->setFromNode("Pitches_r_kneeRotInterp");
ROUTE1636->setFromField("value_changed");
ROUTE1636->setToNode("hanim_r_knee");
ROUTE1636->setToField("set_rotation");
group->addChildren(*ROUTE1636);

CROUTE* ROUTE1637 = new CROUTE();
ROUTE1637->setFromNode("Pitches_r_hipRotInterp");
ROUTE1637->setFromField("value_changed");
ROUTE1637->setToNode("hanim_r_hip");
ROUTE1637->setToField("set_rotation");
group->addChildren(*ROUTE1637);

CROUTE* ROUTE1638 = new CROUTE();
ROUTE1638->setFromNode("Pitches_l_ankleRotInterp");
ROUTE1638->setFromField("value_changed");
ROUTE1638->setToNode("hanim_l_ankle");
ROUTE1638->setToField("set_rotation");
group->addChildren(*ROUTE1638);

CROUTE* ROUTE1639 = new CROUTE();
ROUTE1639->setFromNode("Pitches_l_kneeRotInterp");
ROUTE1639->setFromField("value_changed");
ROUTE1639->setToNode("hanim_l_knee");
ROUTE1639->setToField("set_rotation");
group->addChildren(*ROUTE1639);

CROUTE* ROUTE1640 = new CROUTE();
ROUTE1640->setFromNode("Pitches_l_hipRotInterp");
ROUTE1640->setFromField("value_changed");
ROUTE1640->setToNode("hanim_l_hip");
ROUTE1640->setToField("set_rotation");
group->addChildren(*ROUTE1640);

CROUTE* ROUTE1641 = new CROUTE();
ROUTE1641->setFromNode("Pitches_lower_bodyRotInterp");
ROUTE1641->setFromField("value_changed");
ROUTE1641->setToNode("hanim_sacroiliac");
ROUTE1641->setToField("set_rotation");
group->addChildren(*ROUTE1641);

CROUTE* ROUTE1642 = new CROUTE();
ROUTE1642->setFromNode("Pitches_r_wristRotInterp");
ROUTE1642->setFromField("value_changed");
ROUTE1642->setToNode("hanim_r_wrist");
ROUTE1642->setToField("set_rotation");
group->addChildren(*ROUTE1642);

CROUTE* ROUTE1643 = new CROUTE();
ROUTE1643->setFromNode("Pitches_r_elbowRotInterp");
ROUTE1643->setFromField("value_changed");
ROUTE1643->setToNode("hanim_r_elbow");
ROUTE1643->setToField("set_rotation");
group->addChildren(*ROUTE1643);

CROUTE* ROUTE1644 = new CROUTE();
ROUTE1644->setFromNode("Pitches_r_shoulderRotInterp");
ROUTE1644->setFromField("value_changed");
ROUTE1644->setToNode("hanim_r_shoulder");
ROUTE1644->setToField("set_rotation");
group->addChildren(*ROUTE1644);

CROUTE* ROUTE1645 = new CROUTE();
ROUTE1645->setFromNode("Pitches_l_wristRotInterp");
ROUTE1645->setFromField("value_changed");
ROUTE1645->setToNode("hanim_l_wrist");
ROUTE1645->setToField("set_rotation");
group->addChildren(*ROUTE1645);

CROUTE* ROUTE1646 = new CROUTE();
ROUTE1646->setFromNode("Pitches_l_elbowRotInterp");
ROUTE1646->setFromField("value_changed");
ROUTE1646->setToNode("hanim_l_elbow");
ROUTE1646->setToField("set_rotation");
group->addChildren(*ROUTE1646);

CROUTE* ROUTE1647 = new CROUTE();
ROUTE1647->setFromNode("Pitches_l_shoulderRotInterp");
ROUTE1647->setFromField("value_changed");
ROUTE1647->setToNode("hanim_l_shoulder");
ROUTE1647->setToField("set_rotation");
group->addChildren(*ROUTE1647);

CROUTE* ROUTE1648 = new CROUTE();
ROUTE1648->setFromNode("Pitches_headRotInterp");
ROUTE1648->setFromField("value_changed");
ROUTE1648->setToNode("hanim_skullbase");
ROUTE1648->setToField("set_rotation");
group->addChildren(*ROUTE1648);

CROUTE* ROUTE1649 = new CROUTE();
ROUTE1649->setFromNode("Pitches_neckRotInterp");
ROUTE1649->setFromField("value_changed");
ROUTE1649->setToNode("hanim_vc4");
ROUTE1649->setToField("set_rotation");
group->addChildren(*ROUTE1649);

CROUTE* ROUTE1650 = new CROUTE();
ROUTE1650->setFromNode("Pitches_upper_bodyRotInterp");
ROUTE1650->setFromField("value_changed");
ROUTE1650->setToNode("hanim_vl1");
ROUTE1650->setToField("set_rotation");
group->addChildren(*ROUTE1650);

CROUTE* ROUTE1651 = new CROUTE();
ROUTE1651->setFromNode("Pitches_whole_bodyRotInterp");
ROUTE1651->setFromField("value_changed");
ROUTE1651->setToNode("hanim_HumanoidRoot");
ROUTE1651->setToField("set_rotation");
group->addChildren(*ROUTE1651);

CROUTE* ROUTE1652 = new CROUTE();
ROUTE1652->setFromNode("Pitches_whole_bodyTransInterp");
ROUTE1652->setFromField("value_changed");
ROUTE1652->setToNode("hanim_HumanoidRoot");
ROUTE1652->setToField("set_translation");
group->addChildren(*ROUTE1652);

CROUTE* ROUTE1653 = new CROUTE();
ROUTE1653->setFromNode("Pitch_l_sternoclavicularRoll");
ROUTE1653->setFromField("value_changed");
ROUTE1653->setToNode("hanim_l_sternoclavicular");
ROUTE1653->setToField("set_rotation");
group->addChildren(*ROUTE1653);

CROUTE* ROUTE1654 = new CROUTE();
ROUTE1654->setFromNode("Pitch_l_acromioclavicularRoll");
ROUTE1654->setFromField("value_changed");
ROUTE1654->setToNode("hanim_l_acromioclavicular");
ROUTE1654->setToField("set_rotation");
group->addChildren(*ROUTE1654);

CROUTE* ROUTE1655 = new CROUTE();
ROUTE1655->setFromNode("Pitch_r_sternoclavicularRoll");
ROUTE1655->setFromField("value_changed");
ROUTE1655->setToNode("hanim_r_sternoclavicular");
ROUTE1655->setToField("set_rotation");
group->addChildren(*ROUTE1655);

CROUTE* ROUTE1656 = new CROUTE();
ROUTE1656->setFromNode("Pitch_r_acromioclavicularRoll");
ROUTE1656->setFromField("value_changed");
ROUTE1656->setToNode("hanim_r_acromioclavicular");
ROUTE1656->setToField("set_rotation");
group->addChildren(*ROUTE1656);

CROUTE* ROUTE1657 = new CROUTE();
ROUTE1657->setFromNode("Pitch_r_metatarsalPitch");
ROUTE1657->setFromField("value_changed");
ROUTE1657->setToNode("hanim_l_metatarsal");
ROUTE1657->setToField("set_rotation");
group->addChildren(*ROUTE1657);

CROUTE* ROUTE1658 = new CROUTE();
ROUTE1658->setFromNode("Pitch_r_metatarsalPitch");
ROUTE1658->setFromField("value_changed");
ROUTE1658->setToNode("hanim_r_metatarsal");
ROUTE1658->setToField("set_rotation");
group->addChildren(*ROUTE1658);

CROUTE* ROUTE1659 = new CROUTE();
ROUTE1659->setFromNode("Pitch_sacroiliacYaw");
ROUTE1659->setFromField("value_changed");
ROUTE1659->setToNode("hanim_sacroiliac");
ROUTE1659->setToField("set_rotation");
group->addChildren(*ROUTE1659);

CROUTE* ROUTE1660 = new CROUTE();
ROUTE1660->setFromNode("Pitch_vl5Yaw");
ROUTE1660->setFromField("value_changed");
ROUTE1660->setToNode("hanim_vl5");
ROUTE1660->setToField("set_rotation");
group->addChildren(*ROUTE1660);

CROUTE* ROUTE1661 = new CROUTE();
ROUTE1661->setFromNode("Pitch_vc6Yaw");
ROUTE1661->setFromField("value_changed");
ROUTE1661->setToNode("hanim_vc6");
ROUTE1661->setToField("set_rotation");
group->addChildren(*ROUTE1661);

CROUTE* ROUTE1662 = new CROUTE();
ROUTE1662->setFromNode("Pitch_l_thumb1Pitch");
ROUTE1662->setFromField("value_changed");
ROUTE1662->setToNode("hanim_l_thumb1");
ROUTE1662->setToField("set_rotation");
group->addChildren(*ROUTE1662);

CROUTE* ROUTE1663 = new CROUTE();
ROUTE1663->setFromNode("Pitch_r_thumb1Pitch");
ROUTE1663->setFromField("value_changed");
ROUTE1663->setToNode("hanim_r_thumb1");
ROUTE1663->setToField("set_rotation");
group->addChildren(*ROUTE1663);

CROUTE* ROUTE1664 = new CROUTE();
ROUTE1664->setFromNode("YawTimer");
ROUTE1664->setFromField("fraction_changed");
ROUTE1664->setToNode("Yaws_r_ankleRotInterp");
ROUTE1664->setToField("set_fraction");
group->addChildren(*ROUTE1664);

CROUTE* ROUTE1665 = new CROUTE();
ROUTE1665->setFromNode("YawTimer");
ROUTE1665->setFromField("fraction_changed");
ROUTE1665->setToNode("Yaws_r_kneeRotInterp");
ROUTE1665->setToField("set_fraction");
group->addChildren(*ROUTE1665);

CROUTE* ROUTE1666 = new CROUTE();
ROUTE1666->setFromNode("YawTimer");
ROUTE1666->setFromField("fraction_changed");
ROUTE1666->setToNode("Yaws_r_hipRotInterp");
ROUTE1666->setToField("set_fraction");
group->addChildren(*ROUTE1666);

CROUTE* ROUTE1667 = new CROUTE();
ROUTE1667->setFromNode("YawTimer");
ROUTE1667->setFromField("fraction_changed");
ROUTE1667->setToNode("Yaws_l_ankleRotInterp");
ROUTE1667->setToField("set_fraction");
group->addChildren(*ROUTE1667);

CROUTE* ROUTE1668 = new CROUTE();
ROUTE1668->setFromNode("YawTimer");
ROUTE1668->setFromField("fraction_changed");
ROUTE1668->setToNode("Yaws_l_kneeRotInterp");
ROUTE1668->setToField("set_fraction");
group->addChildren(*ROUTE1668);

CROUTE* ROUTE1669 = new CROUTE();
ROUTE1669->setFromNode("YawTimer");
ROUTE1669->setFromField("fraction_changed");
ROUTE1669->setToNode("Yaws_l_hipRotInterp");
ROUTE1669->setToField("set_fraction");
group->addChildren(*ROUTE1669);

CROUTE* ROUTE1670 = new CROUTE();
ROUTE1670->setFromNode("YawTimer");
ROUTE1670->setFromField("fraction_changed");
ROUTE1670->setToNode("Yaws_lower_bodyRotInterp");
ROUTE1670->setToField("set_fraction");
group->addChildren(*ROUTE1670);

CROUTE* ROUTE1671 = new CROUTE();
ROUTE1671->setFromNode("YawTimer");
ROUTE1671->setFromField("fraction_changed");
ROUTE1671->setToNode("Yaws_r_wristRotInterp");
ROUTE1671->setToField("set_fraction");
group->addChildren(*ROUTE1671);

CROUTE* ROUTE1672 = new CROUTE();
ROUTE1672->setFromNode("YawTimer");
ROUTE1672->setFromField("fraction_changed");
ROUTE1672->setToNode("Yaws_r_elbowRotInterp");
ROUTE1672->setToField("set_fraction");
group->addChildren(*ROUTE1672);

CROUTE* ROUTE1673 = new CROUTE();
ROUTE1673->setFromNode("YawTimer");
ROUTE1673->setFromField("fraction_changed");
ROUTE1673->setToNode("Yaws_r_shoulderRotInterp");
ROUTE1673->setToField("set_fraction");
group->addChildren(*ROUTE1673);

CROUTE* ROUTE1674 = new CROUTE();
ROUTE1674->setFromNode("YawTimer");
ROUTE1674->setFromField("fraction_changed");
ROUTE1674->setToNode("Yaws_l_wristRotInterp");
ROUTE1674->setToField("set_fraction");
group->addChildren(*ROUTE1674);

CROUTE* ROUTE1675 = new CROUTE();
ROUTE1675->setFromNode("YawTimer");
ROUTE1675->setFromField("fraction_changed");
ROUTE1675->setToNode("Yaws_l_elbowRotInterp");
ROUTE1675->setToField("set_fraction");
group->addChildren(*ROUTE1675);

CROUTE* ROUTE1676 = new CROUTE();
ROUTE1676->setFromNode("YawTimer");
ROUTE1676->setFromField("fraction_changed");
ROUTE1676->setToNode("Yaws_l_shoulderRotInterp");
ROUTE1676->setToField("set_fraction");
group->addChildren(*ROUTE1676);

CROUTE* ROUTE1677 = new CROUTE();
ROUTE1677->setFromNode("YawTimer");
ROUTE1677->setFromField("fraction_changed");
ROUTE1677->setToNode("Yaws_headRotInterp");
ROUTE1677->setToField("set_fraction");
group->addChildren(*ROUTE1677);

CROUTE* ROUTE1678 = new CROUTE();
ROUTE1678->setFromNode("YawTimer");
ROUTE1678->setFromField("fraction_changed");
ROUTE1678->setToNode("Yaws_neckRotInterp");
ROUTE1678->setToField("set_fraction");
group->addChildren(*ROUTE1678);

CROUTE* ROUTE1679 = new CROUTE();
ROUTE1679->setFromNode("YawTimer");
ROUTE1679->setFromField("fraction_changed");
ROUTE1679->setToNode("Yaws_upper_bodyRotInterp");
ROUTE1679->setToField("set_fraction");
group->addChildren(*ROUTE1679);

CROUTE* ROUTE1680 = new CROUTE();
ROUTE1680->setFromNode("YawTimer");
ROUTE1680->setFromField("fraction_changed");
ROUTE1680->setToNode("Yaws_whole_bodyRotInterp");
ROUTE1680->setToField("set_fraction");
group->addChildren(*ROUTE1680);

CROUTE* ROUTE1681 = new CROUTE();
ROUTE1681->setFromNode("YawTimer");
ROUTE1681->setFromField("fraction_changed");
ROUTE1681->setToNode("Yaws_whole_bodyTransInterp");
ROUTE1681->setToField("set_fraction");
group->addChildren(*ROUTE1681);

CROUTE* ROUTE1682 = new CROUTE();
ROUTE1682->setFromNode("YawTimer");
ROUTE1682->setFromField("fraction_changed");
ROUTE1682->setToNode("Yaw_l_sternoclavicularRoll");
ROUTE1682->setToField("set_fraction");
group->addChildren(*ROUTE1682);

CROUTE* ROUTE1683 = new CROUTE();
ROUTE1683->setFromNode("YawTimer");
ROUTE1683->setFromField("fraction_changed");
ROUTE1683->setToNode("Yaw_l_acromioclavicularRoll");
ROUTE1683->setToField("set_fraction");
group->addChildren(*ROUTE1683);

CROUTE* ROUTE1684 = new CROUTE();
ROUTE1684->setFromNode("YawTimer");
ROUTE1684->setFromField("fraction_changed");
ROUTE1684->setToNode("Yaw_r_sternoclavicularRoll");
ROUTE1684->setToField("set_fraction");
group->addChildren(*ROUTE1684);

CROUTE* ROUTE1685 = new CROUTE();
ROUTE1685->setFromNode("YawTimer");
ROUTE1685->setFromField("fraction_changed");
ROUTE1685->setToNode("Yaw_r_acromioclavicularRoll");
ROUTE1685->setToField("set_fraction");
group->addChildren(*ROUTE1685);

CROUTE* ROUTE1686 = new CROUTE();
ROUTE1686->setFromNode("YawTimer");
ROUTE1686->setFromField("fraction_changed");
ROUTE1686->setToNode("Yaw_r_metatarsalPitch");
ROUTE1686->setToField("set_fraction");
group->addChildren(*ROUTE1686);

CROUTE* ROUTE1687 = new CROUTE();
ROUTE1687->setFromNode("YawTimer");
ROUTE1687->setFromField("fraction_changed");
ROUTE1687->setToNode("Yaw_sacroiliacYaw");
ROUTE1687->setToField("set_fraction");
group->addChildren(*ROUTE1687);

CROUTE* ROUTE1688 = new CROUTE();
ROUTE1688->setFromNode("YawTimer");
ROUTE1688->setFromField("fraction_changed");
ROUTE1688->setToNode("Yaw_vl5Yaw");
ROUTE1688->setToField("set_fraction");
group->addChildren(*ROUTE1688);

CROUTE* ROUTE1689 = new CROUTE();
ROUTE1689->setFromNode("YawTimer");
ROUTE1689->setFromField("fraction_changed");
ROUTE1689->setToNode("Yaw_vc6Yaw");
ROUTE1689->setToField("set_fraction");
group->addChildren(*ROUTE1689);

CROUTE* ROUTE1690 = new CROUTE();
ROUTE1690->setFromNode("YawTimer");
ROUTE1690->setFromField("fraction_changed");
ROUTE1690->setToNode("Yaw_l_thumb1Pitch");
ROUTE1690->setToField("set_fraction");
group->addChildren(*ROUTE1690);

CROUTE* ROUTE1691 = new CROUTE();
ROUTE1691->setFromNode("YawTimer");
ROUTE1691->setFromField("fraction_changed");
ROUTE1691->setToNode("Yaw_r_thumb1Pitch");
ROUTE1691->setToField("set_fraction");
group->addChildren(*ROUTE1691);

CROUTE* ROUTE1692 = new CROUTE();
ROUTE1692->setFromNode("Yaws_r_ankleRotInterp");
ROUTE1692->setFromField("value_changed");
ROUTE1692->setToNode("hanim_r_ankle");
ROUTE1692->setToField("set_rotation");
group->addChildren(*ROUTE1692);

CROUTE* ROUTE1693 = new CROUTE();
ROUTE1693->setFromNode("Yaws_r_kneeRotInterp");
ROUTE1693->setFromField("value_changed");
ROUTE1693->setToNode("hanim_r_knee");
ROUTE1693->setToField("set_rotation");
group->addChildren(*ROUTE1693);

CROUTE* ROUTE1694 = new CROUTE();
ROUTE1694->setFromNode("Yaws_r_hipRotInterp");
ROUTE1694->setFromField("value_changed");
ROUTE1694->setToNode("hanim_r_hip");
ROUTE1694->setToField("set_rotation");
group->addChildren(*ROUTE1694);

CROUTE* ROUTE1695 = new CROUTE();
ROUTE1695->setFromNode("Yaws_l_ankleRotInterp");
ROUTE1695->setFromField("value_changed");
ROUTE1695->setToNode("hanim_l_ankle");
ROUTE1695->setToField("set_rotation");
group->addChildren(*ROUTE1695);

CROUTE* ROUTE1696 = new CROUTE();
ROUTE1696->setFromNode("Yaws_l_kneeRotInterp");
ROUTE1696->setFromField("value_changed");
ROUTE1696->setToNode("hanim_l_knee");
ROUTE1696->setToField("set_rotation");
group->addChildren(*ROUTE1696);

CROUTE* ROUTE1697 = new CROUTE();
ROUTE1697->setFromNode("Yaws_l_hipRotInterp");
ROUTE1697->setFromField("value_changed");
ROUTE1697->setToNode("hanim_l_hip");
ROUTE1697->setToField("set_rotation");
group->addChildren(*ROUTE1697);

CROUTE* ROUTE1698 = new CROUTE();
ROUTE1698->setFromNode("Yaws_lower_bodyRotInterp");
ROUTE1698->setFromField("value_changed");
ROUTE1698->setToNode("hanim_sacroiliac");
ROUTE1698->setToField("set_rotation");
group->addChildren(*ROUTE1698);

CROUTE* ROUTE1699 = new CROUTE();
ROUTE1699->setFromNode("Yaws_r_wristRotInterp");
ROUTE1699->setFromField("value_changed");
ROUTE1699->setToNode("hanim_r_wrist");
ROUTE1699->setToField("set_rotation");
group->addChildren(*ROUTE1699);

CROUTE* ROUTE1700 = new CROUTE();
ROUTE1700->setFromNode("Yaws_r_elbowRotInterp");
ROUTE1700->setFromField("value_changed");
ROUTE1700->setToNode("hanim_r_elbow");
ROUTE1700->setToField("set_rotation");
group->addChildren(*ROUTE1700);

CROUTE* ROUTE1701 = new CROUTE();
ROUTE1701->setFromNode("Yaws_r_shoulderRotInterp");
ROUTE1701->setFromField("value_changed");
ROUTE1701->setToNode("hanim_r_shoulder");
ROUTE1701->setToField("set_rotation");
group->addChildren(*ROUTE1701);

CROUTE* ROUTE1702 = new CROUTE();
ROUTE1702->setFromNode("Yaws_l_wristRotInterp");
ROUTE1702->setFromField("value_changed");
ROUTE1702->setToNode("hanim_l_wrist");
ROUTE1702->setToField("set_rotation");
group->addChildren(*ROUTE1702);

CROUTE* ROUTE1703 = new CROUTE();
ROUTE1703->setFromNode("Yaws_l_elbowRotInterp");
ROUTE1703->setFromField("value_changed");
ROUTE1703->setToNode("hanim_l_elbow");
ROUTE1703->setToField("set_rotation");
group->addChildren(*ROUTE1703);

CROUTE* ROUTE1704 = new CROUTE();
ROUTE1704->setFromNode("Yaws_l_shoulderRotInterp");
ROUTE1704->setFromField("value_changed");
ROUTE1704->setToNode("hanim_l_shoulder");
ROUTE1704->setToField("set_rotation");
group->addChildren(*ROUTE1704);

CROUTE* ROUTE1705 = new CROUTE();
ROUTE1705->setFromNode("Yaws_headRotInterp");
ROUTE1705->setFromField("value_changed");
ROUTE1705->setToNode("hanim_skullbase");
ROUTE1705->setToField("set_rotation");
group->addChildren(*ROUTE1705);

CROUTE* ROUTE1706 = new CROUTE();
ROUTE1706->setFromNode("Yaws_neckRotInterp");
ROUTE1706->setFromField("value_changed");
ROUTE1706->setToNode("hanim_vc4");
ROUTE1706->setToField("set_rotation");
group->addChildren(*ROUTE1706);

CROUTE* ROUTE1707 = new CROUTE();
ROUTE1707->setFromNode("Yaws_upper_bodyRotInterp");
ROUTE1707->setFromField("value_changed");
ROUTE1707->setToNode("hanim_vl1");
ROUTE1707->setToField("set_rotation");
group->addChildren(*ROUTE1707);

CROUTE* ROUTE1708 = new CROUTE();
ROUTE1708->setFromNode("Yaws_whole_bodyRotInterp");
ROUTE1708->setFromField("value_changed");
ROUTE1708->setToNode("hanim_HumanoidRoot");
ROUTE1708->setToField("set_rotation");
group->addChildren(*ROUTE1708);

CROUTE* ROUTE1709 = new CROUTE();
ROUTE1709->setFromNode("Yaws_whole_bodyTransInterp");
ROUTE1709->setFromField("value_changed");
ROUTE1709->setToNode("hanim_HumanoidRoot");
ROUTE1709->setToField("set_translation");
group->addChildren(*ROUTE1709);

CROUTE* ROUTE1710 = new CROUTE();
ROUTE1710->setFromNode("Yaw_l_sternoclavicularRoll");
ROUTE1710->setFromField("value_changed");
ROUTE1710->setToNode("hanim_l_sternoclavicular");
ROUTE1710->setToField("set_rotation");
group->addChildren(*ROUTE1710);

CROUTE* ROUTE1711 = new CROUTE();
ROUTE1711->setFromNode("Yaw_l_acromioclavicularRoll");
ROUTE1711->setFromField("value_changed");
ROUTE1711->setToNode("hanim_l_acromioclavicular");
ROUTE1711->setToField("set_rotation");
group->addChildren(*ROUTE1711);

CROUTE* ROUTE1712 = new CROUTE();
ROUTE1712->setFromNode("Yaw_r_sternoclavicularRoll");
ROUTE1712->setFromField("value_changed");
ROUTE1712->setToNode("hanim_r_sternoclavicular");
ROUTE1712->setToField("set_rotation");
group->addChildren(*ROUTE1712);

CROUTE* ROUTE1713 = new CROUTE();
ROUTE1713->setFromNode("Yaw_r_acromioclavicularRoll");
ROUTE1713->setFromField("value_changed");
ROUTE1713->setToNode("hanim_r_acromioclavicular");
ROUTE1713->setToField("set_rotation");
group->addChildren(*ROUTE1713);

CROUTE* ROUTE1714 = new CROUTE();
ROUTE1714->setFromNode("Yaw_r_metatarsalPitch");
ROUTE1714->setFromField("value_changed");
ROUTE1714->setToNode("hanim_l_metatarsal");
ROUTE1714->setToField("set_rotation");
group->addChildren(*ROUTE1714);

CROUTE* ROUTE1715 = new CROUTE();
ROUTE1715->setFromNode("Yaw_r_metatarsalPitch");
ROUTE1715->setFromField("value_changed");
ROUTE1715->setToNode("hanim_r_metatarsal");
ROUTE1715->setToField("set_rotation");
group->addChildren(*ROUTE1715);

CROUTE* ROUTE1716 = new CROUTE();
ROUTE1716->setFromNode("Yaw_sacroiliacYaw");
ROUTE1716->setFromField("value_changed");
ROUTE1716->setToNode("hanim_sacroiliac");
ROUTE1716->setToField("set_rotation");
group->addChildren(*ROUTE1716);

CROUTE* ROUTE1717 = new CROUTE();
ROUTE1717->setFromNode("Yaw_vl5Yaw");
ROUTE1717->setFromField("value_changed");
ROUTE1717->setToNode("hanim_vl5");
ROUTE1717->setToField("set_rotation");
group->addChildren(*ROUTE1717);

CROUTE* ROUTE1718 = new CROUTE();
ROUTE1718->setFromNode("Yaw_vc6Yaw");
ROUTE1718->setFromField("value_changed");
ROUTE1718->setToNode("hanim_vc6");
ROUTE1718->setToField("set_rotation");
group->addChildren(*ROUTE1718);

CROUTE* ROUTE1719 = new CROUTE();
ROUTE1719->setFromNode("Yaw_l_thumb1Pitch");
ROUTE1719->setFromField("value_changed");
ROUTE1719->setToNode("hanim_l_thumb1");
ROUTE1719->setToField("set_rotation");
group->addChildren(*ROUTE1719);

CROUTE* ROUTE1720 = new CROUTE();
ROUTE1720->setFromNode("Yaw_r_thumb1Pitch");
ROUTE1720->setFromField("value_changed");
ROUTE1720->setToNode("hanim_r_thumb1");
ROUTE1720->setToField("set_rotation");
group->addChildren(*ROUTE1720);

CROUTE* ROUTE1721 = new CROUTE();
ROUTE1721->setFromNode("RollTimer");
ROUTE1721->setFromField("fraction_changed");
ROUTE1721->setToNode("Rolls_r_ankleRotInterp");
ROUTE1721->setToField("set_fraction");
group->addChildren(*ROUTE1721);

CROUTE* ROUTE1722 = new CROUTE();
ROUTE1722->setFromNode("RollTimer");
ROUTE1722->setFromField("fraction_changed");
ROUTE1722->setToNode("Rolls_r_kneeRotInterp");
ROUTE1722->setToField("set_fraction");
group->addChildren(*ROUTE1722);

CROUTE* ROUTE1723 = new CROUTE();
ROUTE1723->setFromNode("RollTimer");
ROUTE1723->setFromField("fraction_changed");
ROUTE1723->setToNode("Rolls_r_hipRotInterp");
ROUTE1723->setToField("set_fraction");
group->addChildren(*ROUTE1723);

CROUTE* ROUTE1724 = new CROUTE();
ROUTE1724->setFromNode("RollTimer");
ROUTE1724->setFromField("fraction_changed");
ROUTE1724->setToNode("Rolls_l_ankleRotInterp");
ROUTE1724->setToField("set_fraction");
group->addChildren(*ROUTE1724);

CROUTE* ROUTE1725 = new CROUTE();
ROUTE1725->setFromNode("RollTimer");
ROUTE1725->setFromField("fraction_changed");
ROUTE1725->setToNode("Rolls_l_kneeRotInterp");
ROUTE1725->setToField("set_fraction");
group->addChildren(*ROUTE1725);

CROUTE* ROUTE1726 = new CROUTE();
ROUTE1726->setFromNode("RollTimer");
ROUTE1726->setFromField("fraction_changed");
ROUTE1726->setToNode("Rolls_l_hipRotInterp");
ROUTE1726->setToField("set_fraction");
group->addChildren(*ROUTE1726);

CROUTE* ROUTE1727 = new CROUTE();
ROUTE1727->setFromNode("RollTimer");
ROUTE1727->setFromField("fraction_changed");
ROUTE1727->setToNode("Rolls_lower_bodyRotInterp");
ROUTE1727->setToField("set_fraction");
group->addChildren(*ROUTE1727);

CROUTE* ROUTE1728 = new CROUTE();
ROUTE1728->setFromNode("RollTimer");
ROUTE1728->setFromField("fraction_changed");
ROUTE1728->setToNode("Rolls_r_wristRotInterp");
ROUTE1728->setToField("set_fraction");
group->addChildren(*ROUTE1728);

CROUTE* ROUTE1729 = new CROUTE();
ROUTE1729->setFromNode("RollTimer");
ROUTE1729->setFromField("fraction_changed");
ROUTE1729->setToNode("Rolls_r_elbowRotInterp");
ROUTE1729->setToField("set_fraction");
group->addChildren(*ROUTE1729);

CROUTE* ROUTE1730 = new CROUTE();
ROUTE1730->setFromNode("RollTimer");
ROUTE1730->setFromField("fraction_changed");
ROUTE1730->setToNode("Rolls_r_shoulderRotInterp");
ROUTE1730->setToField("set_fraction");
group->addChildren(*ROUTE1730);

CROUTE* ROUTE1731 = new CROUTE();
ROUTE1731->setFromNode("RollTimer");
ROUTE1731->setFromField("fraction_changed");
ROUTE1731->setToNode("Rolls_l_wristRotInterp");
ROUTE1731->setToField("set_fraction");
group->addChildren(*ROUTE1731);

CROUTE* ROUTE1732 = new CROUTE();
ROUTE1732->setFromNode("RollTimer");
ROUTE1732->setFromField("fraction_changed");
ROUTE1732->setToNode("Rolls_l_elbowRotInterp");
ROUTE1732->setToField("set_fraction");
group->addChildren(*ROUTE1732);

CROUTE* ROUTE1733 = new CROUTE();
ROUTE1733->setFromNode("RollTimer");
ROUTE1733->setFromField("fraction_changed");
ROUTE1733->setToNode("Rolls_l_shoulderRotInterp");
ROUTE1733->setToField("set_fraction");
group->addChildren(*ROUTE1733);

CROUTE* ROUTE1734 = new CROUTE();
ROUTE1734->setFromNode("RollTimer");
ROUTE1734->setFromField("fraction_changed");
ROUTE1734->setToNode("Rolls_headRotInterp");
ROUTE1734->setToField("set_fraction");
group->addChildren(*ROUTE1734);

CROUTE* ROUTE1735 = new CROUTE();
ROUTE1735->setFromNode("RollTimer");
ROUTE1735->setFromField("fraction_changed");
ROUTE1735->setToNode("Rolls_neckRotInterp");
ROUTE1735->setToField("set_fraction");
group->addChildren(*ROUTE1735);

CROUTE* ROUTE1736 = new CROUTE();
ROUTE1736->setFromNode("RollTimer");
ROUTE1736->setFromField("fraction_changed");
ROUTE1736->setToNode("Rolls_upper_bodyRotInterp");
ROUTE1736->setToField("set_fraction");
group->addChildren(*ROUTE1736);

CROUTE* ROUTE1737 = new CROUTE();
ROUTE1737->setFromNode("RollTimer");
ROUTE1737->setFromField("fraction_changed");
ROUTE1737->setToNode("Rolls_whole_bodyRotInterp");
ROUTE1737->setToField("set_fraction");
group->addChildren(*ROUTE1737);

CROUTE* ROUTE1738 = new CROUTE();
ROUTE1738->setFromNode("RollTimer");
ROUTE1738->setFromField("fraction_changed");
ROUTE1738->setToNode("Rolls_whole_bodyTransInterp");
ROUTE1738->setToField("set_fraction");
group->addChildren(*ROUTE1738);

CROUTE* ROUTE1739 = new CROUTE();
ROUTE1739->setFromNode("RollTimer");
ROUTE1739->setFromField("fraction_changed");
ROUTE1739->setToNode("Roll_l_sternoclavicularRoll");
ROUTE1739->setToField("set_fraction");
group->addChildren(*ROUTE1739);

CROUTE* ROUTE1740 = new CROUTE();
ROUTE1740->setFromNode("RollTimer");
ROUTE1740->setFromField("fraction_changed");
ROUTE1740->setToNode("Roll_l_acromioclavicularRoll");
ROUTE1740->setToField("set_fraction");
group->addChildren(*ROUTE1740);

CROUTE* ROUTE1741 = new CROUTE();
ROUTE1741->setFromNode("RollTimer");
ROUTE1741->setFromField("fraction_changed");
ROUTE1741->setToNode("Roll_r_sternoclavicularRoll");
ROUTE1741->setToField("set_fraction");
group->addChildren(*ROUTE1741);

CROUTE* ROUTE1742 = new CROUTE();
ROUTE1742->setFromNode("RollTimer");
ROUTE1742->setFromField("fraction_changed");
ROUTE1742->setToNode("Roll_r_acromioclavicularRoll");
ROUTE1742->setToField("set_fraction");
group->addChildren(*ROUTE1742);

CROUTE* ROUTE1743 = new CROUTE();
ROUTE1743->setFromNode("RollTimer");
ROUTE1743->setFromField("fraction_changed");
ROUTE1743->setToNode("Roll_r_metatarsalPitch");
ROUTE1743->setToField("set_fraction");
group->addChildren(*ROUTE1743);

CROUTE* ROUTE1744 = new CROUTE();
ROUTE1744->setFromNode("RollTimer");
ROUTE1744->setFromField("fraction_changed");
ROUTE1744->setToNode("Roll_sacroiliacYaw");
ROUTE1744->setToField("set_fraction");
group->addChildren(*ROUTE1744);

CROUTE* ROUTE1745 = new CROUTE();
ROUTE1745->setFromNode("RollTimer");
ROUTE1745->setFromField("fraction_changed");
ROUTE1745->setToNode("Roll_vl5Yaw");
ROUTE1745->setToField("set_fraction");
group->addChildren(*ROUTE1745);

CROUTE* ROUTE1746 = new CROUTE();
ROUTE1746->setFromNode("RollTimer");
ROUTE1746->setFromField("fraction_changed");
ROUTE1746->setToNode("Roll_vc6Yaw");
ROUTE1746->setToField("set_fraction");
group->addChildren(*ROUTE1746);

CROUTE* ROUTE1747 = new CROUTE();
ROUTE1747->setFromNode("RollTimer");
ROUTE1747->setFromField("fraction_changed");
ROUTE1747->setToNode("Roll_l_thumb1Pitch");
ROUTE1747->setToField("set_fraction");
group->addChildren(*ROUTE1747);

CROUTE* ROUTE1748 = new CROUTE();
ROUTE1748->setFromNode("RollTimer");
ROUTE1748->setFromField("fraction_changed");
ROUTE1748->setToNode("Roll_r_thumb1Pitch");
ROUTE1748->setToField("set_fraction");
group->addChildren(*ROUTE1748);

CROUTE* ROUTE1749 = new CROUTE();
ROUTE1749->setFromNode("Rolls_r_ankleRotInterp");
ROUTE1749->setFromField("value_changed");
ROUTE1749->setToNode("hanim_r_ankle");
ROUTE1749->setToField("set_rotation");
group->addChildren(*ROUTE1749);

CROUTE* ROUTE1750 = new CROUTE();
ROUTE1750->setFromNode("Rolls_r_kneeRotInterp");
ROUTE1750->setFromField("value_changed");
ROUTE1750->setToNode("hanim_r_knee");
ROUTE1750->setToField("set_rotation");
group->addChildren(*ROUTE1750);

CROUTE* ROUTE1751 = new CROUTE();
ROUTE1751->setFromNode("Rolls_r_hipRotInterp");
ROUTE1751->setFromField("value_changed");
ROUTE1751->setToNode("hanim_r_hip");
ROUTE1751->setToField("set_rotation");
group->addChildren(*ROUTE1751);

CROUTE* ROUTE1752 = new CROUTE();
ROUTE1752->setFromNode("Rolls_l_ankleRotInterp");
ROUTE1752->setFromField("value_changed");
ROUTE1752->setToNode("hanim_l_ankle");
ROUTE1752->setToField("set_rotation");
group->addChildren(*ROUTE1752);

CROUTE* ROUTE1753 = new CROUTE();
ROUTE1753->setFromNode("Rolls_l_kneeRotInterp");
ROUTE1753->setFromField("value_changed");
ROUTE1753->setToNode("hanim_l_knee");
ROUTE1753->setToField("set_rotation");
group->addChildren(*ROUTE1753);

CROUTE* ROUTE1754 = new CROUTE();
ROUTE1754->setFromNode("Rolls_l_hipRotInterp");
ROUTE1754->setFromField("value_changed");
ROUTE1754->setToNode("hanim_l_hip");
ROUTE1754->setToField("set_rotation");
group->addChildren(*ROUTE1754);

CROUTE* ROUTE1755 = new CROUTE();
ROUTE1755->setFromNode("Rolls_lower_bodyRotInterp");
ROUTE1755->setFromField("value_changed");
ROUTE1755->setToNode("hanim_sacroiliac");
ROUTE1755->setToField("set_rotation");
group->addChildren(*ROUTE1755);

CROUTE* ROUTE1756 = new CROUTE();
ROUTE1756->setFromNode("Rolls_r_wristRotInterp");
ROUTE1756->setFromField("value_changed");
ROUTE1756->setToNode("hanim_r_wrist");
ROUTE1756->setToField("set_rotation");
group->addChildren(*ROUTE1756);

CROUTE* ROUTE1757 = new CROUTE();
ROUTE1757->setFromNode("Rolls_r_elbowRotInterp");
ROUTE1757->setFromField("value_changed");
ROUTE1757->setToNode("hanim_r_elbow");
ROUTE1757->setToField("set_rotation");
group->addChildren(*ROUTE1757);

CROUTE* ROUTE1758 = new CROUTE();
ROUTE1758->setFromNode("Rolls_r_shoulderRotInterp");
ROUTE1758->setFromField("value_changed");
ROUTE1758->setToNode("hanim_r_shoulder");
ROUTE1758->setToField("set_rotation");
group->addChildren(*ROUTE1758);

CROUTE* ROUTE1759 = new CROUTE();
ROUTE1759->setFromNode("Rolls_l_wristRotInterp");
ROUTE1759->setFromField("value_changed");
ROUTE1759->setToNode("hanim_l_wrist");
ROUTE1759->setToField("set_rotation");
group->addChildren(*ROUTE1759);

CROUTE* ROUTE1760 = new CROUTE();
ROUTE1760->setFromNode("Rolls_l_elbowRotInterp");
ROUTE1760->setFromField("value_changed");
ROUTE1760->setToNode("hanim_l_elbow");
ROUTE1760->setToField("set_rotation");
group->addChildren(*ROUTE1760);

CROUTE* ROUTE1761 = new CROUTE();
ROUTE1761->setFromNode("Rolls_l_shoulderRotInterp");
ROUTE1761->setFromField("value_changed");
ROUTE1761->setToNode("hanim_l_shoulder");
ROUTE1761->setToField("set_rotation");
group->addChildren(*ROUTE1761);

CROUTE* ROUTE1762 = new CROUTE();
ROUTE1762->setFromNode("Rolls_headRotInterp");
ROUTE1762->setFromField("value_changed");
ROUTE1762->setToNode("hanim_skullbase");
ROUTE1762->setToField("set_rotation");
group->addChildren(*ROUTE1762);

CROUTE* ROUTE1763 = new CROUTE();
ROUTE1763->setFromNode("Rolls_neckRotInterp");
ROUTE1763->setFromField("value_changed");
ROUTE1763->setToNode("hanim_vc4");
ROUTE1763->setToField("set_rotation");
group->addChildren(*ROUTE1763);

CROUTE* ROUTE1764 = new CROUTE();
ROUTE1764->setFromNode("Rolls_upper_bodyRotInterp");
ROUTE1764->setFromField("value_changed");
ROUTE1764->setToNode("hanim_vl1");
ROUTE1764->setToField("set_rotation");
group->addChildren(*ROUTE1764);

CROUTE* ROUTE1765 = new CROUTE();
ROUTE1765->setFromNode("Rolls_whole_bodyRotInterp");
ROUTE1765->setFromField("value_changed");
ROUTE1765->setToNode("hanim_HumanoidRoot");
ROUTE1765->setToField("set_rotation");
group->addChildren(*ROUTE1765);

CROUTE* ROUTE1766 = new CROUTE();
ROUTE1766->setFromNode("Rolls_whole_bodyTransInterp");
ROUTE1766->setFromField("value_changed");
ROUTE1766->setToNode("hanim_HumanoidRoot");
ROUTE1766->setToField("set_translation");
group->addChildren(*ROUTE1766);

CROUTE* ROUTE1767 = new CROUTE();
ROUTE1767->setFromNode("Roll_l_sternoclavicularRoll");
ROUTE1767->setFromField("value_changed");
ROUTE1767->setToNode("hanim_l_sternoclavicular");
ROUTE1767->setToField("set_rotation");
group->addChildren(*ROUTE1767);

CROUTE* ROUTE1768 = new CROUTE();
ROUTE1768->setFromNode("Roll_l_acromioclavicularRoll");
ROUTE1768->setFromField("value_changed");
ROUTE1768->setToNode("hanim_l_acromioclavicular");
ROUTE1768->setToField("set_rotation");
group->addChildren(*ROUTE1768);

CROUTE* ROUTE1769 = new CROUTE();
ROUTE1769->setFromNode("Roll_r_sternoclavicularRoll");
ROUTE1769->setFromField("value_changed");
ROUTE1769->setToNode("hanim_r_sternoclavicular");
ROUTE1769->setToField("set_rotation");
group->addChildren(*ROUTE1769);

CROUTE* ROUTE1770 = new CROUTE();
ROUTE1770->setFromNode("Roll_r_acromioclavicularRoll");
ROUTE1770->setFromField("value_changed");
ROUTE1770->setToNode("hanim_r_acromioclavicular");
ROUTE1770->setToField("set_rotation");
group->addChildren(*ROUTE1770);

CROUTE* ROUTE1771 = new CROUTE();
ROUTE1771->setFromNode("Roll_r_metatarsalPitch");
ROUTE1771->setFromField("value_changed");
ROUTE1771->setToNode("hanim_l_metatarsal");
ROUTE1771->setToField("set_rotation");
group->addChildren(*ROUTE1771);

CROUTE* ROUTE1772 = new CROUTE();
ROUTE1772->setFromNode("Roll_r_metatarsalPitch");
ROUTE1772->setFromField("value_changed");
ROUTE1772->setToNode("hanim_r_metatarsal");
ROUTE1772->setToField("set_rotation");
group->addChildren(*ROUTE1772);

CROUTE* ROUTE1773 = new CROUTE();
ROUTE1773->setFromNode("Roll_sacroiliacYaw");
ROUTE1773->setFromField("value_changed");
ROUTE1773->setToNode("hanim_sacroiliac");
ROUTE1773->setToField("set_rotation");
group->addChildren(*ROUTE1773);

CROUTE* ROUTE1774 = new CROUTE();
ROUTE1774->setFromNode("Roll_vl5Yaw");
ROUTE1774->setFromField("value_changed");
ROUTE1774->setToNode("hanim_vl5");
ROUTE1774->setToField("set_rotation");
group->addChildren(*ROUTE1774);

CROUTE* ROUTE1775 = new CROUTE();
ROUTE1775->setFromNode("Roll_vc6Yaw");
ROUTE1775->setFromField("value_changed");
ROUTE1775->setToNode("hanim_vc6");
ROUTE1775->setToField("set_rotation");
group->addChildren(*ROUTE1775);

CROUTE* ROUTE1776 = new CROUTE();
ROUTE1776->setFromNode("Roll_l_thumb1Pitch");
ROUTE1776->setFromField("value_changed");
ROUTE1776->setToNode("hanim_l_thumb1");
ROUTE1776->setToField("set_rotation");
group->addChildren(*ROUTE1776);

CROUTE* ROUTE1777 = new CROUTE();
ROUTE1777->setFromNode("Roll_r_thumb1Pitch");
ROUTE1777->setFromField("value_changed");
ROUTE1777->setToNode("hanim_r_thumb1");
ROUTE1777->setToField("set_rotation");
group->addChildren(*ROUTE1777);

CROUTE* ROUTE1778 = new CROUTE();
ROUTE1778->setFromNode("WalkTimer");
ROUTE1778->setFromField("fraction_changed");
ROUTE1778->setToNode("Walk_r_ankleRotInterp");
ROUTE1778->setToField("set_fraction");
group->addChildren(*ROUTE1778);

CROUTE* ROUTE1779 = new CROUTE();
ROUTE1779->setFromNode("WalkTimer");
ROUTE1779->setFromField("fraction_changed");
ROUTE1779->setToNode("Walk_r_kneeRotInterp");
ROUTE1779->setToField("set_fraction");
group->addChildren(*ROUTE1779);

CROUTE* ROUTE1780 = new CROUTE();
ROUTE1780->setFromNode("WalkTimer");
ROUTE1780->setFromField("fraction_changed");
ROUTE1780->setToNode("Walk_r_hipRotInterp");
ROUTE1780->setToField("set_fraction");
group->addChildren(*ROUTE1780);

CROUTE* ROUTE1781 = new CROUTE();
ROUTE1781->setFromNode("WalkTimer");
ROUTE1781->setFromField("fraction_changed");
ROUTE1781->setToNode("Walk_l_ankleRotInterp");
ROUTE1781->setToField("set_fraction");
group->addChildren(*ROUTE1781);

CROUTE* ROUTE1782 = new CROUTE();
ROUTE1782->setFromNode("WalkTimer");
ROUTE1782->setFromField("fraction_changed");
ROUTE1782->setToNode("Walk_l_kneeRotInterp");
ROUTE1782->setToField("set_fraction");
group->addChildren(*ROUTE1782);

CROUTE* ROUTE1783 = new CROUTE();
ROUTE1783->setFromNode("WalkTimer");
ROUTE1783->setFromField("fraction_changed");
ROUTE1783->setToNode("Walk_l_hipRotInterp");
ROUTE1783->setToField("set_fraction");
group->addChildren(*ROUTE1783);

CROUTE* ROUTE1784 = new CROUTE();
ROUTE1784->setFromNode("WalkTimer");
ROUTE1784->setFromField("fraction_changed");
ROUTE1784->setToNode("Walk_lower_bodyRotInterp");
ROUTE1784->setToField("set_fraction");
group->addChildren(*ROUTE1784);

CROUTE* ROUTE1785 = new CROUTE();
ROUTE1785->setFromNode("WalkTimer");
ROUTE1785->setFromField("fraction_changed");
ROUTE1785->setToNode("Walk_r_wristRotInterp");
ROUTE1785->setToField("set_fraction");
group->addChildren(*ROUTE1785);

CROUTE* ROUTE1786 = new CROUTE();
ROUTE1786->setFromNode("WalkTimer");
ROUTE1786->setFromField("fraction_changed");
ROUTE1786->setToNode("Walk_r_elbowRotInterp");
ROUTE1786->setToField("set_fraction");
group->addChildren(*ROUTE1786);

CROUTE* ROUTE1787 = new CROUTE();
ROUTE1787->setFromNode("WalkTimer");
ROUTE1787->setFromField("fraction_changed");
ROUTE1787->setToNode("Walk_r_shoulderRotInterp");
ROUTE1787->setToField("set_fraction");
group->addChildren(*ROUTE1787);

CROUTE* ROUTE1788 = new CROUTE();
ROUTE1788->setFromNode("WalkTimer");
ROUTE1788->setFromField("fraction_changed");
ROUTE1788->setToNode("Walk_l_wristRotInterp");
ROUTE1788->setToField("set_fraction");
group->addChildren(*ROUTE1788);

CROUTE* ROUTE1789 = new CROUTE();
ROUTE1789->setFromNode("WalkTimer");
ROUTE1789->setFromField("fraction_changed");
ROUTE1789->setToNode("Walk_l_elbowRotInterp");
ROUTE1789->setToField("set_fraction");
group->addChildren(*ROUTE1789);

CROUTE* ROUTE1790 = new CROUTE();
ROUTE1790->setFromNode("WalkTimer");
ROUTE1790->setFromField("fraction_changed");
ROUTE1790->setToNode("Walk_l_shoulderRotInterp");
ROUTE1790->setToField("set_fraction");
group->addChildren(*ROUTE1790);

CROUTE* ROUTE1791 = new CROUTE();
ROUTE1791->setFromNode("WalkTimer");
ROUTE1791->setFromField("fraction_changed");
ROUTE1791->setToNode("Walk_headRotInterp");
ROUTE1791->setToField("set_fraction");
group->addChildren(*ROUTE1791);

CROUTE* ROUTE1792 = new CROUTE();
ROUTE1792->setFromNode("WalkTimer");
ROUTE1792->setFromField("fraction_changed");
ROUTE1792->setToNode("Walk_neckRotInterp");
ROUTE1792->setToField("set_fraction");
group->addChildren(*ROUTE1792);

CROUTE* ROUTE1793 = new CROUTE();
ROUTE1793->setFromNode("WalkTimer");
ROUTE1793->setFromField("fraction_changed");
ROUTE1793->setToNode("Walk_upper_bodyRotInterp");
ROUTE1793->setToField("set_fraction");
group->addChildren(*ROUTE1793);

CROUTE* ROUTE1794 = new CROUTE();
ROUTE1794->setFromNode("WalkTimer");
ROUTE1794->setFromField("fraction_changed");
ROUTE1794->setToNode("Walk_whole_bodyRotInterp");
ROUTE1794->setToField("set_fraction");
group->addChildren(*ROUTE1794);

CROUTE* ROUTE1795 = new CROUTE();
ROUTE1795->setFromNode("WalkTimer");
ROUTE1795->setFromField("fraction_changed");
ROUTE1795->setToNode("Walk_whole_bodyTranInterp");
ROUTE1795->setToField("set_fraction");
group->addChildren(*ROUTE1795);

CROUTE* ROUTE1796 = new CROUTE();
ROUTE1796->setFromNode("WalkTimer");
ROUTE1796->setFromField("fraction_changed");
ROUTE1796->setToNode("Walk_l_sternoclavicularRoll");
ROUTE1796->setToField("set_fraction");
group->addChildren(*ROUTE1796);

CROUTE* ROUTE1797 = new CROUTE();
ROUTE1797->setFromNode("WalkTimer");
ROUTE1797->setFromField("fraction_changed");
ROUTE1797->setToNode("Walk_l_acromioclavicularRoll");
ROUTE1797->setToField("set_fraction");
group->addChildren(*ROUTE1797);

CROUTE* ROUTE1798 = new CROUTE();
ROUTE1798->setFromNode("WalkTimer");
ROUTE1798->setFromField("fraction_changed");
ROUTE1798->setToNode("Walk_r_sternoclavicularRoll");
ROUTE1798->setToField("set_fraction");
group->addChildren(*ROUTE1798);

CROUTE* ROUTE1799 = new CROUTE();
ROUTE1799->setFromNode("WalkTimer");
ROUTE1799->setFromField("fraction_changed");
ROUTE1799->setToNode("Walk_r_acromioclavicularRoll");
ROUTE1799->setToField("set_fraction");
group->addChildren(*ROUTE1799);

CROUTE* ROUTE1800 = new CROUTE();
ROUTE1800->setFromNode("WalkTimer");
ROUTE1800->setFromField("fraction_changed");
ROUTE1800->setToNode("Walk_r_metatarsalPitch");
ROUTE1800->setToField("set_fraction");
group->addChildren(*ROUTE1800);

CROUTE* ROUTE1801 = new CROUTE();
ROUTE1801->setFromNode("WalkTimer");
ROUTE1801->setFromField("fraction_changed");
ROUTE1801->setToNode("Walk_sacroiliacYaw");
ROUTE1801->setToField("set_fraction");
group->addChildren(*ROUTE1801);

CROUTE* ROUTE1802 = new CROUTE();
ROUTE1802->setFromNode("WalkTimer");
ROUTE1802->setFromField("fraction_changed");
ROUTE1802->setToNode("Walk_vl5Yaw");
ROUTE1802->setToField("set_fraction");
group->addChildren(*ROUTE1802);

CROUTE* ROUTE1803 = new CROUTE();
ROUTE1803->setFromNode("WalkTimer");
ROUTE1803->setFromField("fraction_changed");
ROUTE1803->setToNode("Walk_vc6Yaw");
ROUTE1803->setToField("set_fraction");
group->addChildren(*ROUTE1803);

CROUTE* ROUTE1804 = new CROUTE();
ROUTE1804->setFromNode("WalkTimer");
ROUTE1804->setFromField("fraction_changed");
ROUTE1804->setToNode("Walk_l_thumb1Pitch");
ROUTE1804->setToField("set_fraction");
group->addChildren(*ROUTE1804);

CROUTE* ROUTE1805 = new CROUTE();
ROUTE1805->setFromNode("WalkTimer");
ROUTE1805->setFromField("fraction_changed");
ROUTE1805->setToNode("Walk_r_thumb1Pitch");
ROUTE1805->setToField("set_fraction");
group->addChildren(*ROUTE1805);

CROUTE* ROUTE1806 = new CROUTE();
ROUTE1806->setFromNode("Walk_r_ankleRotInterp");
ROUTE1806->setFromField("value_changed");
ROUTE1806->setToNode("hanim_r_ankle");
ROUTE1806->setToField("set_rotation");
group->addChildren(*ROUTE1806);

CROUTE* ROUTE1807 = new CROUTE();
ROUTE1807->setFromNode("Walk_r_kneeRotInterp");
ROUTE1807->setFromField("value_changed");
ROUTE1807->setToNode("hanim_r_knee");
ROUTE1807->setToField("set_rotation");
group->addChildren(*ROUTE1807);

CROUTE* ROUTE1808 = new CROUTE();
ROUTE1808->setFromNode("Walk_r_hipRotInterp");
ROUTE1808->setFromField("value_changed");
ROUTE1808->setToNode("hanim_r_hip");
ROUTE1808->setToField("set_rotation");
group->addChildren(*ROUTE1808);

CROUTE* ROUTE1809 = new CROUTE();
ROUTE1809->setFromNode("Walk_l_ankleRotInterp");
ROUTE1809->setFromField("value_changed");
ROUTE1809->setToNode("hanim_l_ankle");
ROUTE1809->setToField("set_rotation");
group->addChildren(*ROUTE1809);

CROUTE* ROUTE1810 = new CROUTE();
ROUTE1810->setFromNode("Walk_l_kneeRotInterp");
ROUTE1810->setFromField("value_changed");
ROUTE1810->setToNode("hanim_l_knee");
ROUTE1810->setToField("set_rotation");
group->addChildren(*ROUTE1810);

CROUTE* ROUTE1811 = new CROUTE();
ROUTE1811->setFromNode("Walk_l_hipRotInterp");
ROUTE1811->setFromField("value_changed");
ROUTE1811->setToNode("hanim_l_hip");
ROUTE1811->setToField("set_rotation");
group->addChildren(*ROUTE1811);

CROUTE* ROUTE1812 = new CROUTE();
ROUTE1812->setFromNode("Walk_lower_bodyRotInterp");
ROUTE1812->setFromField("value_changed");
ROUTE1812->setToNode("hanim_sacroiliac");
ROUTE1812->setToField("set_rotation");
group->addChildren(*ROUTE1812);

CROUTE* ROUTE1813 = new CROUTE();
ROUTE1813->setFromNode("Walk_r_wristRotInterp");
ROUTE1813->setFromField("value_changed");
ROUTE1813->setToNode("hanim_r_wrist");
ROUTE1813->setToField("set_rotation");
group->addChildren(*ROUTE1813);

CROUTE* ROUTE1814 = new CROUTE();
ROUTE1814->setFromNode("Walk_r_elbowRotInterp");
ROUTE1814->setFromField("value_changed");
ROUTE1814->setToNode("hanim_r_elbow");
ROUTE1814->setToField("set_rotation");
group->addChildren(*ROUTE1814);

CROUTE* ROUTE1815 = new CROUTE();
ROUTE1815->setFromNode("Walk_r_shoulderRotInterp");
ROUTE1815->setFromField("value_changed");
ROUTE1815->setToNode("hanim_r_shoulder");
ROUTE1815->setToField("set_rotation");
group->addChildren(*ROUTE1815);

CROUTE* ROUTE1816 = new CROUTE();
ROUTE1816->setFromNode("Walk_l_wristRotInterp");
ROUTE1816->setFromField("value_changed");
ROUTE1816->setToNode("hanim_l_wrist");
ROUTE1816->setToField("set_rotation");
group->addChildren(*ROUTE1816);

CROUTE* ROUTE1817 = new CROUTE();
ROUTE1817->setFromNode("Walk_l_elbowRotInterp");
ROUTE1817->setFromField("value_changed");
ROUTE1817->setToNode("hanim_l_elbow");
ROUTE1817->setToField("set_rotation");
group->addChildren(*ROUTE1817);

CROUTE* ROUTE1818 = new CROUTE();
ROUTE1818->setFromNode("Walk_l_shoulderRotInterp");
ROUTE1818->setFromField("value_changed");
ROUTE1818->setToNode("hanim_l_shoulder");
ROUTE1818->setToField("set_rotation");
group->addChildren(*ROUTE1818);

CROUTE* ROUTE1819 = new CROUTE();
ROUTE1819->setFromNode("Walk_headRotInterp");
ROUTE1819->setFromField("value_changed");
ROUTE1819->setToNode("hanim_skullbase");
ROUTE1819->setToField("set_rotation");
group->addChildren(*ROUTE1819);

CROUTE* ROUTE1820 = new CROUTE();
ROUTE1820->setFromNode("Walk_neckRotInterp");
ROUTE1820->setFromField("value_changed");
ROUTE1820->setToNode("hanim_vc4");
ROUTE1820->setToField("set_rotation");
group->addChildren(*ROUTE1820);

CROUTE* ROUTE1821 = new CROUTE();
ROUTE1821->setFromNode("Walk_upper_bodyRotInterp");
ROUTE1821->setFromField("value_changed");
ROUTE1821->setToNode("hanim_vl1");
ROUTE1821->setToField("set_rotation");
group->addChildren(*ROUTE1821);

CROUTE* ROUTE1822 = new CROUTE();
ROUTE1822->setFromNode("Walk_whole_bodyRotInterp");
ROUTE1822->setFromField("value_changed");
ROUTE1822->setToNode("hanim_HumanoidRoot");
ROUTE1822->setToField("set_rotation");
group->addChildren(*ROUTE1822);

CROUTE* ROUTE1823 = new CROUTE();
ROUTE1823->setFromNode("Walk_whole_bodyTranInterp");
ROUTE1823->setFromField("value_changed");
ROUTE1823->setToNode("hanim_HumanoidRoot");
ROUTE1823->setToField("set_translation");
group->addChildren(*ROUTE1823);

CROUTE* ROUTE1824 = new CROUTE();
ROUTE1824->setFromNode("Walk_l_sternoclavicularRoll");
ROUTE1824->setFromField("value_changed");
ROUTE1824->setToNode("hanim_l_sternoclavicular");
ROUTE1824->setToField("set_rotation");
group->addChildren(*ROUTE1824);

CROUTE* ROUTE1825 = new CROUTE();
ROUTE1825->setFromNode("Walk_l_acromioclavicularRoll");
ROUTE1825->setFromField("value_changed");
ROUTE1825->setToNode("hanim_l_acromioclavicular");
ROUTE1825->setToField("set_rotation");
group->addChildren(*ROUTE1825);

CROUTE* ROUTE1826 = new CROUTE();
ROUTE1826->setFromNode("Walk_r_sternoclavicularRoll");
ROUTE1826->setFromField("value_changed");
ROUTE1826->setToNode("hanim_r_sternoclavicular");
ROUTE1826->setToField("set_rotation");
group->addChildren(*ROUTE1826);

CROUTE* ROUTE1827 = new CROUTE();
ROUTE1827->setFromNode("Walk_r_acromioclavicularRoll");
ROUTE1827->setFromField("value_changed");
ROUTE1827->setToNode("hanim_r_acromioclavicular");
ROUTE1827->setToField("set_rotation");
group->addChildren(*ROUTE1827);

CROUTE* ROUTE1828 = new CROUTE();
ROUTE1828->setFromNode("Walk_r_metatarsalPitch");
ROUTE1828->setFromField("value_changed");
ROUTE1828->setToNode("hanim_l_metatarsal");
ROUTE1828->setToField("set_rotation");
group->addChildren(*ROUTE1828);

CROUTE* ROUTE1829 = new CROUTE();
ROUTE1829->setFromNode("Walk_r_metatarsalPitch");
ROUTE1829->setFromField("value_changed");
ROUTE1829->setToNode("hanim_r_metatarsal");
ROUTE1829->setToField("set_rotation");
group->addChildren(*ROUTE1829);

CROUTE* ROUTE1830 = new CROUTE();
ROUTE1830->setFromNode("Walk_sacroiliacYaw");
ROUTE1830->setFromField("value_changed");
ROUTE1830->setToNode("hanim_sacroiliac");
ROUTE1830->setToField("set_rotation");
group->addChildren(*ROUTE1830);

CROUTE* ROUTE1831 = new CROUTE();
ROUTE1831->setFromNode("Walk_vl5Yaw");
ROUTE1831->setFromField("value_changed");
ROUTE1831->setToNode("hanim_vl5");
ROUTE1831->setToField("set_rotation");
group->addChildren(*ROUTE1831);

CROUTE* ROUTE1832 = new CROUTE();
ROUTE1832->setFromNode("Walk_vc6Yaw");
ROUTE1832->setFromField("value_changed");
ROUTE1832->setToNode("hanim_vc6");
ROUTE1832->setToField("set_rotation");
group->addChildren(*ROUTE1832);

CROUTE* ROUTE1833 = new CROUTE();
ROUTE1833->setFromNode("Walk_l_thumb1Pitch");
ROUTE1833->setFromField("value_changed");
ROUTE1833->setToNode("hanim_l_thumb1");
ROUTE1833->setToField("set_rotation");
group->addChildren(*ROUTE1833);

CROUTE* ROUTE1834 = new CROUTE();
ROUTE1834->setFromNode("Walk_r_thumb1Pitch");
ROUTE1834->setFromField("value_changed");
ROUTE1834->setToNode("hanim_r_thumb1");
ROUTE1834->setToField("set_rotation");
group->addChildren(*ROUTE1834);

CROUTE* ROUTE1835 = new CROUTE();
ROUTE1835->setFromNode("RunTimer");
ROUTE1835->setFromField("fraction_changed");
ROUTE1835->setToNode("Run_r_ankleRotInterp_Run");
ROUTE1835->setToField("set_fraction");
group->addChildren(*ROUTE1835);

CROUTE* ROUTE1836 = new CROUTE();
ROUTE1836->setFromNode("RunTimer");
ROUTE1836->setFromField("fraction_changed");
ROUTE1836->setToNode("Run_r_kneeRotInterp_Run");
ROUTE1836->setToField("set_fraction");
group->addChildren(*ROUTE1836);

CROUTE* ROUTE1837 = new CROUTE();
ROUTE1837->setFromNode("RunTimer");
ROUTE1837->setFromField("fraction_changed");
ROUTE1837->setToNode("Run_r_hipRotInterp_Run");
ROUTE1837->setToField("set_fraction");
group->addChildren(*ROUTE1837);

CROUTE* ROUTE1838 = new CROUTE();
ROUTE1838->setFromNode("RunTimer");
ROUTE1838->setFromField("fraction_changed");
ROUTE1838->setToNode("Run_l_ankleRotInterp_Run");
ROUTE1838->setToField("set_fraction");
group->addChildren(*ROUTE1838);

CROUTE* ROUTE1839 = new CROUTE();
ROUTE1839->setFromNode("RunTimer");
ROUTE1839->setFromField("fraction_changed");
ROUTE1839->setToNode("Run_l_kneeRotInterp_Run");
ROUTE1839->setToField("set_fraction");
group->addChildren(*ROUTE1839);

CROUTE* ROUTE1840 = new CROUTE();
ROUTE1840->setFromNode("RunTimer");
ROUTE1840->setFromField("fraction_changed");
ROUTE1840->setToNode("Run_l_hipRotInterp_Run");
ROUTE1840->setToField("set_fraction");
group->addChildren(*ROUTE1840);

CROUTE* ROUTE1841 = new CROUTE();
ROUTE1841->setFromNode("RunTimer");
ROUTE1841->setFromField("fraction_changed");
ROUTE1841->setToNode("Run_lower_bodyRotInterp_Run");
ROUTE1841->setToField("set_fraction");
group->addChildren(*ROUTE1841);

CROUTE* ROUTE1842 = new CROUTE();
ROUTE1842->setFromNode("RunTimer");
ROUTE1842->setFromField("fraction_changed");
ROUTE1842->setToNode("Run_r_wristRotInterp_Run");
ROUTE1842->setToField("set_fraction");
group->addChildren(*ROUTE1842);

CROUTE* ROUTE1843 = new CROUTE();
ROUTE1843->setFromNode("RunTimer");
ROUTE1843->setFromField("fraction_changed");
ROUTE1843->setToNode("Run_r_elbowRotInterp_Run");
ROUTE1843->setToField("set_fraction");
group->addChildren(*ROUTE1843);

CROUTE* ROUTE1844 = new CROUTE();
ROUTE1844->setFromNode("RunTimer");
ROUTE1844->setFromField("fraction_changed");
ROUTE1844->setToNode("Run_r_shoulderRotInterp_Run");
ROUTE1844->setToField("set_fraction");
group->addChildren(*ROUTE1844);

CROUTE* ROUTE1845 = new CROUTE();
ROUTE1845->setFromNode("RunTimer");
ROUTE1845->setFromField("fraction_changed");
ROUTE1845->setToNode("Run_l_wristRotInterp_Run");
ROUTE1845->setToField("set_fraction");
group->addChildren(*ROUTE1845);

CROUTE* ROUTE1846 = new CROUTE();
ROUTE1846->setFromNode("RunTimer");
ROUTE1846->setFromField("fraction_changed");
ROUTE1846->setToNode("Run_l_elbowRotInterp_Run");
ROUTE1846->setToField("set_fraction");
group->addChildren(*ROUTE1846);

CROUTE* ROUTE1847 = new CROUTE();
ROUTE1847->setFromNode("RunTimer");
ROUTE1847->setFromField("fraction_changed");
ROUTE1847->setToNode("Run_l_shoulderRotInterp_Run");
ROUTE1847->setToField("set_fraction");
group->addChildren(*ROUTE1847);

CROUTE* ROUTE1848 = new CROUTE();
ROUTE1848->setFromNode("RunTimer");
ROUTE1848->setFromField("fraction_changed");
ROUTE1848->setToNode("Run_headRotInterp_Run");
ROUTE1848->setToField("set_fraction");
group->addChildren(*ROUTE1848);

CROUTE* ROUTE1849 = new CROUTE();
ROUTE1849->setFromNode("RunTimer");
ROUTE1849->setFromField("fraction_changed");
ROUTE1849->setToNode("Run_neckRotInterp_Run");
ROUTE1849->setToField("set_fraction");
group->addChildren(*ROUTE1849);

CROUTE* ROUTE1850 = new CROUTE();
ROUTE1850->setFromNode("RunTimer");
ROUTE1850->setFromField("fraction_changed");
ROUTE1850->setToNode("Run_upper_bodyRotInterp_Run");
ROUTE1850->setToField("set_fraction");
group->addChildren(*ROUTE1850);

CROUTE* ROUTE1851 = new CROUTE();
ROUTE1851->setFromNode("RunTimer");
ROUTE1851->setFromField("fraction_changed");
ROUTE1851->setToNode("Run_whole_bodyRotInterp_Run");
ROUTE1851->setToField("set_fraction");
group->addChildren(*ROUTE1851);

CROUTE* ROUTE1852 = new CROUTE();
ROUTE1852->setFromNode("RunTimer");
ROUTE1852->setFromField("fraction_changed");
ROUTE1852->setToNode("Run_whole_bodyTranInterp_Run");
ROUTE1852->setToField("set_fraction");
group->addChildren(*ROUTE1852);

CROUTE* ROUTE1853 = new CROUTE();
ROUTE1853->setFromNode("RunTimer");
ROUTE1853->setFromField("fraction_changed");
ROUTE1853->setToNode("Run_l_sternoclavicularRoll");
ROUTE1853->setToField("set_fraction");
group->addChildren(*ROUTE1853);

CROUTE* ROUTE1854 = new CROUTE();
ROUTE1854->setFromNode("RunTimer");
ROUTE1854->setFromField("fraction_changed");
ROUTE1854->setToNode("Run_l_acromioclavicularRoll");
ROUTE1854->setToField("set_fraction");
group->addChildren(*ROUTE1854);

CROUTE* ROUTE1855 = new CROUTE();
ROUTE1855->setFromNode("RunTimer");
ROUTE1855->setFromField("fraction_changed");
ROUTE1855->setToNode("Run_r_sternoclavicularRoll");
ROUTE1855->setToField("set_fraction");
group->addChildren(*ROUTE1855);

CROUTE* ROUTE1856 = new CROUTE();
ROUTE1856->setFromNode("RunTimer");
ROUTE1856->setFromField("fraction_changed");
ROUTE1856->setToNode("Run_r_acromioclavicularRoll");
ROUTE1856->setToField("set_fraction");
group->addChildren(*ROUTE1856);

CROUTE* ROUTE1857 = new CROUTE();
ROUTE1857->setFromNode("RunTimer");
ROUTE1857->setFromField("fraction_changed");
ROUTE1857->setToNode("Run_r_metatarsalPitch");
ROUTE1857->setToField("set_fraction");
group->addChildren(*ROUTE1857);

CROUTE* ROUTE1858 = new CROUTE();
ROUTE1858->setFromNode("RunTimer");
ROUTE1858->setFromField("fraction_changed");
ROUTE1858->setToNode("Run_sacroiliacYaw");
ROUTE1858->setToField("set_fraction");
group->addChildren(*ROUTE1858);

CROUTE* ROUTE1859 = new CROUTE();
ROUTE1859->setFromNode("RunTimer");
ROUTE1859->setFromField("fraction_changed");
ROUTE1859->setToNode("Run_vl5Yaw");
ROUTE1859->setToField("set_fraction");
group->addChildren(*ROUTE1859);

CROUTE* ROUTE1860 = new CROUTE();
ROUTE1860->setFromNode("RunTimer");
ROUTE1860->setFromField("fraction_changed");
ROUTE1860->setToNode("Run_vc6Yaw");
ROUTE1860->setToField("set_fraction");
group->addChildren(*ROUTE1860);

CROUTE* ROUTE1861 = new CROUTE();
ROUTE1861->setFromNode("RunTimer");
ROUTE1861->setFromField("fraction_changed");
ROUTE1861->setToNode("Run_l_thumb1Pitch");
ROUTE1861->setToField("set_fraction");
group->addChildren(*ROUTE1861);

CROUTE* ROUTE1862 = new CROUTE();
ROUTE1862->setFromNode("RunTimer");
ROUTE1862->setFromField("fraction_changed");
ROUTE1862->setToNode("Run_r_thumb1Pitch");
ROUTE1862->setToField("set_fraction");
group->addChildren(*ROUTE1862);

CROUTE* ROUTE1863 = new CROUTE();
ROUTE1863->setFromNode("Run_r_ankleRotInterp_Run");
ROUTE1863->setFromField("value_changed");
ROUTE1863->setToNode("hanim_r_ankle");
ROUTE1863->setToField("set_rotation");
group->addChildren(*ROUTE1863);

CROUTE* ROUTE1864 = new CROUTE();
ROUTE1864->setFromNode("Run_r_kneeRotInterp_Run");
ROUTE1864->setFromField("value_changed");
ROUTE1864->setToNode("hanim_r_knee");
ROUTE1864->setToField("set_rotation");
group->addChildren(*ROUTE1864);

CROUTE* ROUTE1865 = new CROUTE();
ROUTE1865->setFromNode("Run_r_hipRotInterp_Run");
ROUTE1865->setFromField("value_changed");
ROUTE1865->setToNode("hanim_r_hip");
ROUTE1865->setToField("set_rotation");
group->addChildren(*ROUTE1865);

CROUTE* ROUTE1866 = new CROUTE();
ROUTE1866->setFromNode("Run_l_ankleRotInterp_Run");
ROUTE1866->setFromField("value_changed");
ROUTE1866->setToNode("hanim_l_ankle");
ROUTE1866->setToField("set_rotation");
group->addChildren(*ROUTE1866);

CROUTE* ROUTE1867 = new CROUTE();
ROUTE1867->setFromNode("Run_l_kneeRotInterp_Run");
ROUTE1867->setFromField("value_changed");
ROUTE1867->setToNode("hanim_l_knee");
ROUTE1867->setToField("set_rotation");
group->addChildren(*ROUTE1867);

CROUTE* ROUTE1868 = new CROUTE();
ROUTE1868->setFromNode("Run_l_hipRotInterp_Run");
ROUTE1868->setFromField("value_changed");
ROUTE1868->setToNode("hanim_l_hip");
ROUTE1868->setToField("set_rotation");
group->addChildren(*ROUTE1868);

CROUTE* ROUTE1869 = new CROUTE();
ROUTE1869->setFromNode("Run_r_wristRotInterp_Run");
ROUTE1869->setFromField("value_changed");
ROUTE1869->setToNode("hanim_r_wrist");
ROUTE1869->setToField("set_rotation");
group->addChildren(*ROUTE1869);

CROUTE* ROUTE1870 = new CROUTE();
ROUTE1870->setFromNode("Run_r_elbowRotInterp_Run");
ROUTE1870->setFromField("value_changed");
ROUTE1870->setToNode("hanim_r_elbow");
ROUTE1870->setToField("set_rotation");
group->addChildren(*ROUTE1870);

CROUTE* ROUTE1871 = new CROUTE();
ROUTE1871->setFromNode("Run_r_shoulderRotInterp_Run");
ROUTE1871->setFromField("value_changed");
ROUTE1871->setToNode("hanim_r_shoulder");
ROUTE1871->setToField("set_rotation");
group->addChildren(*ROUTE1871);

CROUTE* ROUTE1872 = new CROUTE();
ROUTE1872->setFromNode("Run_l_wristRotInterp_Run");
ROUTE1872->setFromField("value_changed");
ROUTE1872->setToNode("hanim_l_wrist");
ROUTE1872->setToField("set_rotation");
group->addChildren(*ROUTE1872);

CROUTE* ROUTE1873 = new CROUTE();
ROUTE1873->setFromNode("Run_l_elbowRotInterp_Run");
ROUTE1873->setFromField("value_changed");
ROUTE1873->setToNode("hanim_l_elbow");
ROUTE1873->setToField("set_rotation");
group->addChildren(*ROUTE1873);

CROUTE* ROUTE1874 = new CROUTE();
ROUTE1874->setFromNode("Run_l_shoulderRotInterp_Run");
ROUTE1874->setFromField("value_changed");
ROUTE1874->setToNode("hanim_l_shoulder");
ROUTE1874->setToField("set_rotation");
group->addChildren(*ROUTE1874);

CROUTE* ROUTE1875 = new CROUTE();
ROUTE1875->setFromNode("Run_lower_bodyRotInterp_Run");
ROUTE1875->setFromField("value_changed");
ROUTE1875->setToNode("hanim_sacroiliac");
ROUTE1875->setToField("set_rotation");
group->addChildren(*ROUTE1875);

CROUTE* ROUTE1876 = new CROUTE();
ROUTE1876->setFromNode("Run_headRotInterp_Run");
ROUTE1876->setFromField("value_changed");
ROUTE1876->setToNode("hanim_skullbase");
ROUTE1876->setToField("set_rotation");
group->addChildren(*ROUTE1876);

CROUTE* ROUTE1877 = new CROUTE();
ROUTE1877->setFromNode("Run_neckRotInterp_Run");
ROUTE1877->setFromField("value_changed");
ROUTE1877->setToNode("hanim_vc4");
ROUTE1877->setToField("set_rotation");
group->addChildren(*ROUTE1877);

CROUTE* ROUTE1878 = new CROUTE();
ROUTE1878->setFromNode("Run_upper_bodyRotInterp_Run");
ROUTE1878->setFromField("value_changed");
ROUTE1878->setToNode("hanim_vl1");
ROUTE1878->setToField("set_rotation");
group->addChildren(*ROUTE1878);

CROUTE* ROUTE1879 = new CROUTE();
ROUTE1879->setFromNode("Run_whole_bodyRotInterp_Run");
ROUTE1879->setFromField("value_changed");
ROUTE1879->setToNode("hanim_HumanoidRoot");
ROUTE1879->setToField("set_rotation");
group->addChildren(*ROUTE1879);

CROUTE* ROUTE1880 = new CROUTE();
ROUTE1880->setFromNode("Run_whole_bodyTranInterp_Run");
ROUTE1880->setFromField("value_changed");
ROUTE1880->setToNode("hanim_HumanoidRoot");
ROUTE1880->setToField("set_translation");
group->addChildren(*ROUTE1880);

CROUTE* ROUTE1881 = new CROUTE();
ROUTE1881->setFromNode("Run_l_sternoclavicularRoll");
ROUTE1881->setFromField("value_changed");
ROUTE1881->setToNode("hanim_l_sternoclavicular");
ROUTE1881->setToField("set_rotation");
group->addChildren(*ROUTE1881);

CROUTE* ROUTE1882 = new CROUTE();
ROUTE1882->setFromNode("Run_l_acromioclavicularRoll");
ROUTE1882->setFromField("value_changed");
ROUTE1882->setToNode("hanim_l_acromioclavicular");
ROUTE1882->setToField("set_rotation");
group->addChildren(*ROUTE1882);

CROUTE* ROUTE1883 = new CROUTE();
ROUTE1883->setFromNode("Run_r_sternoclavicularRoll");
ROUTE1883->setFromField("value_changed");
ROUTE1883->setToNode("hanim_r_sternoclavicular");
ROUTE1883->setToField("set_rotation");
group->addChildren(*ROUTE1883);

CROUTE* ROUTE1884 = new CROUTE();
ROUTE1884->setFromNode("Run_r_acromioclavicularRoll");
ROUTE1884->setFromField("value_changed");
ROUTE1884->setToNode("hanim_r_acromioclavicular");
ROUTE1884->setToField("set_rotation");
group->addChildren(*ROUTE1884);

CROUTE* ROUTE1885 = new CROUTE();
ROUTE1885->setFromNode("Run_r_metatarsalPitch");
ROUTE1885->setFromField("value_changed");
ROUTE1885->setToNode("hanim_l_metatarsal");
ROUTE1885->setToField("set_rotation");
group->addChildren(*ROUTE1885);

CROUTE* ROUTE1886 = new CROUTE();
ROUTE1886->setFromNode("Run_r_metatarsalPitch");
ROUTE1886->setFromField("value_changed");
ROUTE1886->setToNode("hanim_r_metatarsal");
ROUTE1886->setToField("set_rotation");
group->addChildren(*ROUTE1886);

CROUTE* ROUTE1887 = new CROUTE();
ROUTE1887->setFromNode("Run_sacroiliacYaw");
ROUTE1887->setFromField("value_changed");
ROUTE1887->setToNode("hanim_sacroiliac");
ROUTE1887->setToField("set_rotation");
group->addChildren(*ROUTE1887);

CROUTE* ROUTE1888 = new CROUTE();
ROUTE1888->setFromNode("Run_vl5Yaw");
ROUTE1888->setFromField("value_changed");
ROUTE1888->setToNode("hanim_vl5");
ROUTE1888->setToField("set_rotation");
group->addChildren(*ROUTE1888);

CROUTE* ROUTE1889 = new CROUTE();
ROUTE1889->setFromNode("Run_vc6Yaw");
ROUTE1889->setFromField("value_changed");
ROUTE1889->setToNode("hanim_vc6");
ROUTE1889->setToField("set_rotation");
group->addChildren(*ROUTE1889);

CROUTE* ROUTE1890 = new CROUTE();
ROUTE1890->setFromNode("Run_l_thumb1Pitch");
ROUTE1890->setFromField("value_changed");
ROUTE1890->setToNode("hanim_l_thumb1");
ROUTE1890->setToField("set_rotation");
group->addChildren(*ROUTE1890);

CROUTE* ROUTE1891 = new CROUTE();
ROUTE1891->setFromNode("Run_r_thumb1Pitch");
ROUTE1891->setFromField("value_changed");
ROUTE1891->setToNode("hanim_r_thumb1");
ROUTE1891->setToField("set_rotation");
group->addChildren(*ROUTE1891);

CROUTE* ROUTE1892 = new CROUTE();
ROUTE1892->setFromNode("JumpTimer");
ROUTE1892->setFromField("fraction_changed");
ROUTE1892->setToNode("Jump_r_ankleRotInterp");
ROUTE1892->setToField("set_fraction");
group->addChildren(*ROUTE1892);

CROUTE* ROUTE1893 = new CROUTE();
ROUTE1893->setFromNode("JumpTimer");
ROUTE1893->setFromField("fraction_changed");
ROUTE1893->setToNode("Jump_r_kneeRotInterp");
ROUTE1893->setToField("set_fraction");
group->addChildren(*ROUTE1893);

CROUTE* ROUTE1894 = new CROUTE();
ROUTE1894->setFromNode("JumpTimer");
ROUTE1894->setFromField("fraction_changed");
ROUTE1894->setToNode("Jump_r_hipRotInterp");
ROUTE1894->setToField("set_fraction");
group->addChildren(*ROUTE1894);

CROUTE* ROUTE1895 = new CROUTE();
ROUTE1895->setFromNode("JumpTimer");
ROUTE1895->setFromField("fraction_changed");
ROUTE1895->setToNode("Jump_l_ankleRotInterp");
ROUTE1895->setToField("set_fraction");
group->addChildren(*ROUTE1895);

CROUTE* ROUTE1896 = new CROUTE();
ROUTE1896->setFromNode("JumpTimer");
ROUTE1896->setFromField("fraction_changed");
ROUTE1896->setToNode("Jump_l_kneeRotInterp");
ROUTE1896->setToField("set_fraction");
group->addChildren(*ROUTE1896);

CROUTE* ROUTE1897 = new CROUTE();
ROUTE1897->setFromNode("JumpTimer");
ROUTE1897->setFromField("fraction_changed");
ROUTE1897->setToNode("Jump_l_hipRotInterp");
ROUTE1897->setToField("set_fraction");
group->addChildren(*ROUTE1897);

CROUTE* ROUTE1898 = new CROUTE();
ROUTE1898->setFromNode("JumpTimer");
ROUTE1898->setFromField("fraction_changed");
ROUTE1898->setToNode("Jump_lower_bodyRotInterp");
ROUTE1898->setToField("set_fraction");
group->addChildren(*ROUTE1898);

CROUTE* ROUTE1899 = new CROUTE();
ROUTE1899->setFromNode("JumpTimer");
ROUTE1899->setFromField("fraction_changed");
ROUTE1899->setToNode("Jump_r_wristRotInterp");
ROUTE1899->setToField("set_fraction");
group->addChildren(*ROUTE1899);

CROUTE* ROUTE1900 = new CROUTE();
ROUTE1900->setFromNode("JumpTimer");
ROUTE1900->setFromField("fraction_changed");
ROUTE1900->setToNode("Jump_r_elbowRotInterp");
ROUTE1900->setToField("set_fraction");
group->addChildren(*ROUTE1900);

CROUTE* ROUTE1901 = new CROUTE();
ROUTE1901->setFromNode("JumpTimer");
ROUTE1901->setFromField("fraction_changed");
ROUTE1901->setToNode("Jump_r_shoulderRotInterp");
ROUTE1901->setToField("set_fraction");
group->addChildren(*ROUTE1901);

CROUTE* ROUTE1902 = new CROUTE();
ROUTE1902->setFromNode("JumpTimer");
ROUTE1902->setFromField("fraction_changed");
ROUTE1902->setToNode("Jump_l_wristRotInterp");
ROUTE1902->setToField("set_fraction");
group->addChildren(*ROUTE1902);

CROUTE* ROUTE1903 = new CROUTE();
ROUTE1903->setFromNode("JumpTimer");
ROUTE1903->setFromField("fraction_changed");
ROUTE1903->setToNode("Jump_l_elbowRotInterp");
ROUTE1903->setToField("set_fraction");
group->addChildren(*ROUTE1903);

CROUTE* ROUTE1904 = new CROUTE();
ROUTE1904->setFromNode("JumpTimer");
ROUTE1904->setFromField("fraction_changed");
ROUTE1904->setToNode("Jump_l_shoulderRotInterp");
ROUTE1904->setToField("set_fraction");
group->addChildren(*ROUTE1904);

CROUTE* ROUTE1905 = new CROUTE();
ROUTE1905->setFromNode("JumpTimer");
ROUTE1905->setFromField("fraction_changed");
ROUTE1905->setToNode("Jump_headRotInterp");
ROUTE1905->setToField("set_fraction");
group->addChildren(*ROUTE1905);

CROUTE* ROUTE1906 = new CROUTE();
ROUTE1906->setFromNode("JumpTimer");
ROUTE1906->setFromField("fraction_changed");
ROUTE1906->setToNode("Jump_neckRotInterp");
ROUTE1906->setToField("set_fraction");
group->addChildren(*ROUTE1906);

CROUTE* ROUTE1907 = new CROUTE();
ROUTE1907->setFromNode("JumpTimer");
ROUTE1907->setFromField("fraction_changed");
ROUTE1907->setToNode("Jump_upper_bodyRotInterp");
ROUTE1907->setToField("set_fraction");
group->addChildren(*ROUTE1907);

CROUTE* ROUTE1908 = new CROUTE();
ROUTE1908->setFromNode("JumpTimer");
ROUTE1908->setFromField("fraction_changed");
ROUTE1908->setToNode("Jump_whole_bodyRotInterp");
ROUTE1908->setToField("set_fraction");
group->addChildren(*ROUTE1908);

CROUTE* ROUTE1909 = new CROUTE();
ROUTE1909->setFromNode("JumpTimer");
ROUTE1909->setFromField("fraction_changed");
ROUTE1909->setToNode("Jump_whole_bodyTranInterp");
ROUTE1909->setToField("set_fraction");
group->addChildren(*ROUTE1909);

CROUTE* ROUTE1910 = new CROUTE();
ROUTE1910->setFromNode("JumpTimer");
ROUTE1910->setFromField("fraction_changed");
ROUTE1910->setToNode("Jump_l_sternoclavicularRoll");
ROUTE1910->setToField("set_fraction");
group->addChildren(*ROUTE1910);

CROUTE* ROUTE1911 = new CROUTE();
ROUTE1911->setFromNode("JumpTimer");
ROUTE1911->setFromField("fraction_changed");
ROUTE1911->setToNode("Jump_l_acromioclavicularRoll");
ROUTE1911->setToField("set_fraction");
group->addChildren(*ROUTE1911);

CROUTE* ROUTE1912 = new CROUTE();
ROUTE1912->setFromNode("JumpTimer");
ROUTE1912->setFromField("fraction_changed");
ROUTE1912->setToNode("Jump_r_sternoclavicularRoll");
ROUTE1912->setToField("set_fraction");
group->addChildren(*ROUTE1912);

CROUTE* ROUTE1913 = new CROUTE();
ROUTE1913->setFromNode("JumpTimer");
ROUTE1913->setFromField("fraction_changed");
ROUTE1913->setToNode("Jump_r_acromioclavicularRoll");
ROUTE1913->setToField("set_fraction");
group->addChildren(*ROUTE1913);

CROUTE* ROUTE1914 = new CROUTE();
ROUTE1914->setFromNode("JumpTimer");
ROUTE1914->setFromField("fraction_changed");
ROUTE1914->setToNode("Jump_r_metatarsalPitch");
ROUTE1914->setToField("set_fraction");
group->addChildren(*ROUTE1914);

CROUTE* ROUTE1915 = new CROUTE();
ROUTE1915->setFromNode("JumpTimer");
ROUTE1915->setFromField("fraction_changed");
ROUTE1915->setToNode("Jump_sacroiliacYaw");
ROUTE1915->setToField("set_fraction");
group->addChildren(*ROUTE1915);

CROUTE* ROUTE1916 = new CROUTE();
ROUTE1916->setFromNode("JumpTimer");
ROUTE1916->setFromField("fraction_changed");
ROUTE1916->setToNode("Jump_vl5Yaw");
ROUTE1916->setToField("set_fraction");
group->addChildren(*ROUTE1916);

CROUTE* ROUTE1917 = new CROUTE();
ROUTE1917->setFromNode("JumpTimer");
ROUTE1917->setFromField("fraction_changed");
ROUTE1917->setToNode("Jump_vc6Yaw");
ROUTE1917->setToField("set_fraction");
group->addChildren(*ROUTE1917);

CROUTE* ROUTE1918 = new CROUTE();
ROUTE1918->setFromNode("JumpTimer");
ROUTE1918->setFromField("fraction_changed");
ROUTE1918->setToNode("Jump_l_thumb1Pitch");
ROUTE1918->setToField("set_fraction");
group->addChildren(*ROUTE1918);

CROUTE* ROUTE1919 = new CROUTE();
ROUTE1919->setFromNode("JumpTimer");
ROUTE1919->setFromField("fraction_changed");
ROUTE1919->setToNode("Jump_r_thumb1Pitch");
ROUTE1919->setToField("set_fraction");
group->addChildren(*ROUTE1919);

CROUTE* ROUTE1920 = new CROUTE();
ROUTE1920->setFromNode("Jump_r_ankleRotInterp");
ROUTE1920->setFromField("value_changed");
ROUTE1920->setToNode("hanim_r_ankle");
ROUTE1920->setToField("set_rotation");
group->addChildren(*ROUTE1920);

CROUTE* ROUTE1921 = new CROUTE();
ROUTE1921->setFromNode("Jump_r_kneeRotInterp");
ROUTE1921->setFromField("value_changed");
ROUTE1921->setToNode("hanim_r_knee");
ROUTE1921->setToField("set_rotation");
group->addChildren(*ROUTE1921);

CROUTE* ROUTE1922 = new CROUTE();
ROUTE1922->setFromNode("Jump_r_hipRotInterp");
ROUTE1922->setFromField("value_changed");
ROUTE1922->setToNode("hanim_r_hip");
ROUTE1922->setToField("set_rotation");
group->addChildren(*ROUTE1922);

CROUTE* ROUTE1923 = new CROUTE();
ROUTE1923->setFromNode("Jump_l_ankleRotInterp");
ROUTE1923->setFromField("value_changed");
ROUTE1923->setToNode("hanim_l_ankle");
ROUTE1923->setToField("set_rotation");
group->addChildren(*ROUTE1923);

CROUTE* ROUTE1924 = new CROUTE();
ROUTE1924->setFromNode("Jump_l_kneeRotInterp");
ROUTE1924->setFromField("value_changed");
ROUTE1924->setToNode("hanim_l_knee");
ROUTE1924->setToField("set_rotation");
group->addChildren(*ROUTE1924);

CROUTE* ROUTE1925 = new CROUTE();
ROUTE1925->setFromNode("Jump_l_hipRotInterp");
ROUTE1925->setFromField("value_changed");
ROUTE1925->setToNode("hanim_l_hip");
ROUTE1925->setToField("set_rotation");
group->addChildren(*ROUTE1925);

CROUTE* ROUTE1926 = new CROUTE();
ROUTE1926->setFromNode("Jump_lower_bodyRotInterp");
ROUTE1926->setFromField("value_changed");
ROUTE1926->setToNode("hanim_sacroiliac");
ROUTE1926->setToField("set_rotation");
group->addChildren(*ROUTE1926);

CROUTE* ROUTE1927 = new CROUTE();
ROUTE1927->setFromNode("Jump_r_wristRotInterp");
ROUTE1927->setFromField("value_changed");
ROUTE1927->setToNode("hanim_r_wrist");
ROUTE1927->setToField("set_rotation");
group->addChildren(*ROUTE1927);

CROUTE* ROUTE1928 = new CROUTE();
ROUTE1928->setFromNode("Jump_r_elbowRotInterp");
ROUTE1928->setFromField("value_changed");
ROUTE1928->setToNode("hanim_r_elbow");
ROUTE1928->setToField("set_rotation");
group->addChildren(*ROUTE1928);

CROUTE* ROUTE1929 = new CROUTE();
ROUTE1929->setFromNode("Jump_r_shoulderRotInterp");
ROUTE1929->setFromField("value_changed");
ROUTE1929->setToNode("hanim_r_shoulder");
ROUTE1929->setToField("set_rotation");
group->addChildren(*ROUTE1929);

CROUTE* ROUTE1930 = new CROUTE();
ROUTE1930->setFromNode("Jump_l_wristRotInterp");
ROUTE1930->setFromField("value_changed");
ROUTE1930->setToNode("hanim_l_wrist");
ROUTE1930->setToField("set_rotation");
group->addChildren(*ROUTE1930);

CROUTE* ROUTE1931 = new CROUTE();
ROUTE1931->setFromNode("Jump_l_elbowRotInterp");
ROUTE1931->setFromField("value_changed");
ROUTE1931->setToNode("hanim_l_elbow");
ROUTE1931->setToField("set_rotation");
group->addChildren(*ROUTE1931);

CROUTE* ROUTE1932 = new CROUTE();
ROUTE1932->setFromNode("Jump_l_shoulderRotInterp");
ROUTE1932->setFromField("value_changed");
ROUTE1932->setToNode("hanim_l_shoulder");
ROUTE1932->setToField("set_rotation");
group->addChildren(*ROUTE1932);

CROUTE* ROUTE1933 = new CROUTE();
ROUTE1933->setFromNode("Jump_headRotInterp");
ROUTE1933->setFromField("value_changed");
ROUTE1933->setToNode("hanim_skullbase");
ROUTE1933->setToField("set_rotation");
group->addChildren(*ROUTE1933);

CROUTE* ROUTE1934 = new CROUTE();
ROUTE1934->setFromNode("Jump_neckRotInterp");
ROUTE1934->setFromField("value_changed");
ROUTE1934->setToNode("hanim_vc4");
ROUTE1934->setToField("set_rotation");
group->addChildren(*ROUTE1934);

CROUTE* ROUTE1935 = new CROUTE();
ROUTE1935->setFromNode("Jump_upper_bodyRotInterp");
ROUTE1935->setFromField("value_changed");
ROUTE1935->setToNode("hanim_vl1");
ROUTE1935->setToField("set_rotation");
group->addChildren(*ROUTE1935);

CROUTE* ROUTE1936 = new CROUTE();
ROUTE1936->setFromNode("Jump_whole_bodyRotInterp");
ROUTE1936->setFromField("value_changed");
ROUTE1936->setToNode("hanim_HumanoidRoot");
ROUTE1936->setToField("set_rotation");
group->addChildren(*ROUTE1936);

CROUTE* ROUTE1937 = new CROUTE();
ROUTE1937->setFromNode("Jump_whole_bodyTranInterp");
ROUTE1937->setFromField("value_changed");
ROUTE1937->setToNode("hanim_HumanoidRoot");
ROUTE1937->setToField("set_translation");
group->addChildren(*ROUTE1937);

CROUTE* ROUTE1938 = new CROUTE();
ROUTE1938->setFromNode("Jump_l_sternoclavicularRoll");
ROUTE1938->setFromField("value_changed");
ROUTE1938->setToNode("hanim_l_sternoclavicular");
ROUTE1938->setToField("set_rotation");
group->addChildren(*ROUTE1938);

CROUTE* ROUTE1939 = new CROUTE();
ROUTE1939->setFromNode("Jump_l_acromioclavicularRoll");
ROUTE1939->setFromField("value_changed");
ROUTE1939->setToNode("hanim_l_acromioclavicular");
ROUTE1939->setToField("set_rotation");
group->addChildren(*ROUTE1939);

CROUTE* ROUTE1940 = new CROUTE();
ROUTE1940->setFromNode("Jump_r_sternoclavicularRoll");
ROUTE1940->setFromField("value_changed");
ROUTE1940->setToNode("hanim_r_sternoclavicular");
ROUTE1940->setToField("set_rotation");
group->addChildren(*ROUTE1940);

CROUTE* ROUTE1941 = new CROUTE();
ROUTE1941->setFromNode("Jump_r_acromioclavicularRoll");
ROUTE1941->setFromField("value_changed");
ROUTE1941->setToNode("hanim_r_acromioclavicular");
ROUTE1941->setToField("set_rotation");
group->addChildren(*ROUTE1941);

CROUTE* ROUTE1942 = new CROUTE();
ROUTE1942->setFromNode("Jump_r_metatarsalPitch");
ROUTE1942->setFromField("value_changed");
ROUTE1942->setToNode("hanim_l_metatarsal");
ROUTE1942->setToField("set_rotation");
group->addChildren(*ROUTE1942);

CROUTE* ROUTE1943 = new CROUTE();
ROUTE1943->setFromNode("Jump_r_metatarsalPitch");
ROUTE1943->setFromField("value_changed");
ROUTE1943->setToNode("hanim_r_metatarsal");
ROUTE1943->setToField("set_rotation");
group->addChildren(*ROUTE1943);

CROUTE* ROUTE1944 = new CROUTE();
ROUTE1944->setFromNode("Jump_sacroiliacYaw");
ROUTE1944->setFromField("value_changed");
ROUTE1944->setToNode("hanim_sacroiliac");
ROUTE1944->setToField("set_rotation");
group->addChildren(*ROUTE1944);

CROUTE* ROUTE1945 = new CROUTE();
ROUTE1945->setFromNode("Jump_vl5Yaw");
ROUTE1945->setFromField("value_changed");
ROUTE1945->setToNode("hanim_vl5");
ROUTE1945->setToField("set_rotation");
group->addChildren(*ROUTE1945);

CROUTE* ROUTE1946 = new CROUTE();
ROUTE1946->setFromNode("Jump_vc6Yaw");
ROUTE1946->setFromField("value_changed");
ROUTE1946->setToNode("hanim_vc6");
ROUTE1946->setToField("set_rotation");
group->addChildren(*ROUTE1946);

CROUTE* ROUTE1947 = new CROUTE();
ROUTE1947->setFromNode("Jump_l_thumb1Pitch");
ROUTE1947->setFromField("value_changed");
ROUTE1947->setToNode("hanim_l_thumb1");
ROUTE1947->setToField("set_rotation");
group->addChildren(*ROUTE1947);

CROUTE* ROUTE1948 = new CROUTE();
ROUTE1948->setFromNode("Jump_r_thumb1Pitch");
ROUTE1948->setFromField("value_changed");
ROUTE1948->setToNode("hanim_r_thumb1");
ROUTE1948->setToField("set_rotation");
group->addChildren(*ROUTE1948);

CROUTE* ROUTE1949 = new CROUTE();
ROUTE1949->setFromNode("KickTimer");
ROUTE1949->setFromField("fraction_changed");
ROUTE1949->setToNode("Kick_l_sternoclavicularRoll");
ROUTE1949->setToField("set_fraction");
group->addChildren(*ROUTE1949);

CROUTE* ROUTE1950 = new CROUTE();
ROUTE1950->setFromNode("KickTimer");
ROUTE1950->setFromField("fraction_changed");
ROUTE1950->setToNode("Kick_l_acromioclavicularRoll");
ROUTE1950->setToField("set_fraction");
group->addChildren(*ROUTE1950);

CROUTE* ROUTE1951 = new CROUTE();
ROUTE1951->setFromNode("KickTimer");
ROUTE1951->setFromField("fraction_changed");
ROUTE1951->setToNode("Kick_l_shoulderRoll");
ROUTE1951->setToField("set_fraction");
group->addChildren(*ROUTE1951);

CROUTE* ROUTE1952 = new CROUTE();
ROUTE1952->setFromNode("KickTimer");
ROUTE1952->setFromField("fraction_changed");
ROUTE1952->setToNode("Kick_l_ForeArmPitch");
ROUTE1952->setToField("set_fraction");
group->addChildren(*ROUTE1952);

CROUTE* ROUTE1953 = new CROUTE();
ROUTE1953->setFromNode("KickTimer");
ROUTE1953->setFromField("fraction_changed");
ROUTE1953->setToNode("Kick_l_wristRoll");
ROUTE1953->setToField("set_fraction");
group->addChildren(*ROUTE1953);

CROUTE* ROUTE1954 = new CROUTE();
ROUTE1954->setFromNode("KickTimer");
ROUTE1954->setFromField("fraction_changed");
ROUTE1954->setToNode("Kick_l_thumb1Pitch");
ROUTE1954->setToField("set_fraction");
group->addChildren(*ROUTE1954);

CROUTE* ROUTE1955 = new CROUTE();
ROUTE1955->setFromNode("KickTimer");
ROUTE1955->setFromField("fraction_changed");
ROUTE1955->setToNode("Kick_r_sternoclavicularRoll");
ROUTE1955->setToField("set_fraction");
group->addChildren(*ROUTE1955);

CROUTE* ROUTE1956 = new CROUTE();
ROUTE1956->setFromNode("KickTimer");
ROUTE1956->setFromField("fraction_changed");
ROUTE1956->setToNode("Kick_r_acromioclavicularRoll");
ROUTE1956->setToField("set_fraction");
group->addChildren(*ROUTE1956);

CROUTE* ROUTE1957 = new CROUTE();
ROUTE1957->setFromNode("KickTimer");
ROUTE1957->setFromField("fraction_changed");
ROUTE1957->setToNode("Kick_r_shoulderRoll");
ROUTE1957->setToField("set_fraction");
group->addChildren(*ROUTE1957);

CROUTE* ROUTE1958 = new CROUTE();
ROUTE1958->setFromNode("KickTimer");
ROUTE1958->setFromField("fraction_changed");
ROUTE1958->setToNode("Kick_r_ForeArmPitch");
ROUTE1958->setToField("set_fraction");
group->addChildren(*ROUTE1958);

CROUTE* ROUTE1959 = new CROUTE();
ROUTE1959->setFromNode("KickTimer");
ROUTE1959->setFromField("fraction_changed");
ROUTE1959->setToNode("Kick_r_wristRoll");
ROUTE1959->setToField("set_fraction");
group->addChildren(*ROUTE1959);

CROUTE* ROUTE1960 = new CROUTE();
ROUTE1960->setFromNode("KickTimer");
ROUTE1960->setFromField("fraction_changed");
ROUTE1960->setToNode("Kick_r_thumb1Pitch");
ROUTE1960->setToField("set_fraction");
group->addChildren(*ROUTE1960);

CROUTE* ROUTE1961 = new CROUTE();
ROUTE1961->setFromNode("KickTimer");
ROUTE1961->setFromField("fraction_changed");
ROUTE1961->setToNode("Kick_r_hipPitch");
ROUTE1961->setToField("set_fraction");
group->addChildren(*ROUTE1961);

CROUTE* ROUTE1962 = new CROUTE();
ROUTE1962->setFromNode("KickTimer");
ROUTE1962->setFromField("fraction_changed");
ROUTE1962->setToNode("Kick_r_kneePitch");
ROUTE1962->setToField("set_fraction");
group->addChildren(*ROUTE1962);

CROUTE* ROUTE1963 = new CROUTE();
ROUTE1963->setFromNode("KickTimer");
ROUTE1963->setFromField("fraction_changed");
ROUTE1963->setToNode("Kick_l_hipPitch");
ROUTE1963->setToField("set_fraction");
group->addChildren(*ROUTE1963);

CROUTE* ROUTE1964 = new CROUTE();
ROUTE1964->setFromNode("KickTimer");
ROUTE1964->setFromField("fraction_changed");
ROUTE1964->setToNode("Kick_l_kneePitch");
ROUTE1964->setToField("set_fraction");
group->addChildren(*ROUTE1964);

CROUTE* ROUTE1965 = new CROUTE();
ROUTE1965->setFromNode("KickTimer");
ROUTE1965->setFromField("fraction_changed");
ROUTE1965->setToNode("Kick_r_anklePitch");
ROUTE1965->setToField("set_fraction");
group->addChildren(*ROUTE1965);

CROUTE* ROUTE1966 = new CROUTE();
ROUTE1966->setFromNode("KickTimer");
ROUTE1966->setFromField("fraction_changed");
ROUTE1966->setToNode("Kick_r_metatarsalPitch");
ROUTE1966->setToField("set_fraction");
group->addChildren(*ROUTE1966);

CROUTE* ROUTE1967 = new CROUTE();
ROUTE1967->setFromNode("KickTimer");
ROUTE1967->setFromField("fraction_changed");
ROUTE1967->setToNode("Kick_sacroiliacYaw");
ROUTE1967->setToField("set_fraction");
group->addChildren(*ROUTE1967);

CROUTE* ROUTE1968 = new CROUTE();
ROUTE1968->setFromNode("KickTimer");
ROUTE1968->setFromField("fraction_changed");
ROUTE1968->setToNode("Kick_vl5Yaw");
ROUTE1968->setToField("set_fraction");
group->addChildren(*ROUTE1968);

CROUTE* ROUTE1969 = new CROUTE();
ROUTE1969->setFromNode("KickTimer");
ROUTE1969->setFromField("fraction_changed");
ROUTE1969->setToNode("Kick_vc6Yaw");
ROUTE1969->setToField("set_fraction");
group->addChildren(*ROUTE1969);

CROUTE* ROUTE1970 = new CROUTE();
ROUTE1970->setFromNode("KickTimer");
ROUTE1970->setFromField("fraction_changed");
ROUTE1970->setToNode("Kick_lower_bodyRotInterp");
ROUTE1970->setToField("set_fraction");
group->addChildren(*ROUTE1970);

CROUTE* ROUTE1971 = new CROUTE();
ROUTE1971->setFromNode("KickTimer");
ROUTE1971->setFromField("fraction_changed");
ROUTE1971->setToNode("Kick_upper_bodyRotInterp");
ROUTE1971->setToField("set_fraction");
group->addChildren(*ROUTE1971);

CROUTE* ROUTE1972 = new CROUTE();
ROUTE1972->setFromNode("KickTimer");
ROUTE1972->setFromField("fraction_changed");
ROUTE1972->setToNode("Kick_whole_bodyRotInterp");
ROUTE1972->setToField("set_fraction");
group->addChildren(*ROUTE1972);

CROUTE* ROUTE1973 = new CROUTE();
ROUTE1973->setFromNode("KickTimer");
ROUTE1973->setFromField("fraction_changed");
ROUTE1973->setToNode("Kick_whole_bodyTransInterp");
ROUTE1973->setToField("set_fraction");
group->addChildren(*ROUTE1973);

CROUTE* ROUTE1974 = new CROUTE();
ROUTE1974->setFromNode("KickTimer");
ROUTE1974->setFromField("fraction_changed");
ROUTE1974->setToNode("Kick_neckRotInterp");
ROUTE1974->setToField("set_fraction");
group->addChildren(*ROUTE1974);

CROUTE* ROUTE1975 = new CROUTE();
ROUTE1975->setFromNode("Kick_l_sternoclavicularRoll");
ROUTE1975->setFromField("value_changed");
ROUTE1975->setToNode("hanim_l_sternoclavicular");
ROUTE1975->setToField("set_rotation");
group->addChildren(*ROUTE1975);

CROUTE* ROUTE1976 = new CROUTE();
ROUTE1976->setFromNode("Kick_l_acromioclavicularRoll");
ROUTE1976->setFromField("value_changed");
ROUTE1976->setToNode("hanim_l_acromioclavicular");
ROUTE1976->setToField("set_rotation");
group->addChildren(*ROUTE1976);

CROUTE* ROUTE1977 = new CROUTE();
ROUTE1977->setFromNode("Kick_l_shoulderRoll");
ROUTE1977->setFromField("value_changed");
ROUTE1977->setToNode("hanim_l_shoulder");
ROUTE1977->setToField("set_rotation");
group->addChildren(*ROUTE1977);

CROUTE* ROUTE1978 = new CROUTE();
ROUTE1978->setFromNode("Kick_l_ForeArmPitch");
ROUTE1978->setFromField("value_changed");
ROUTE1978->setToNode("hanim_l_elbow");
ROUTE1978->setToField("set_rotation");
group->addChildren(*ROUTE1978);

CROUTE* ROUTE1979 = new CROUTE();
ROUTE1979->setFromNode("Kick_l_wristRoll");
ROUTE1979->setFromField("value_changed");
ROUTE1979->setToNode("hanim_l_wrist");
ROUTE1979->setToField("set_rotation");
group->addChildren(*ROUTE1979);

CROUTE* ROUTE1980 = new CROUTE();
ROUTE1980->setFromNode("Kick_l_thumb1Pitch");
ROUTE1980->setFromField("value_changed");
ROUTE1980->setToNode("hanim_l_thumb1");
ROUTE1980->setToField("set_rotation");
group->addChildren(*ROUTE1980);

CROUTE* ROUTE1981 = new CROUTE();
ROUTE1981->setFromNode("Kick_r_sternoclavicularRoll");
ROUTE1981->setFromField("value_changed");
ROUTE1981->setToNode("hanim_r_sternoclavicular");
ROUTE1981->setToField("set_rotation");
group->addChildren(*ROUTE1981);

CROUTE* ROUTE1982 = new CROUTE();
ROUTE1982->setFromNode("Kick_r_acromioclavicularRoll");
ROUTE1982->setFromField("value_changed");
ROUTE1982->setToNode("hanim_r_acromioclavicular");
ROUTE1982->setToField("set_rotation");
group->addChildren(*ROUTE1982);

CROUTE* ROUTE1983 = new CROUTE();
ROUTE1983->setFromNode("Kick_r_shoulderRoll");
ROUTE1983->setFromField("value_changed");
ROUTE1983->setToNode("hanim_r_shoulder");
ROUTE1983->setToField("set_rotation");
group->addChildren(*ROUTE1983);

CROUTE* ROUTE1984 = new CROUTE();
ROUTE1984->setFromNode("Kick_r_ForeArmPitch");
ROUTE1984->setFromField("value_changed");
ROUTE1984->setToNode("hanim_r_elbow");
ROUTE1984->setToField("set_rotation");
group->addChildren(*ROUTE1984);

CROUTE* ROUTE1985 = new CROUTE();
ROUTE1985->setFromNode("Kick_r_wristRoll");
ROUTE1985->setFromField("value_changed");
ROUTE1985->setToNode("hanim_r_wrist");
ROUTE1985->setToField("set_rotation");
group->addChildren(*ROUTE1985);

CROUTE* ROUTE1986 = new CROUTE();
ROUTE1986->setFromNode("Kick_r_thumb1Pitch");
ROUTE1986->setFromField("value_changed");
ROUTE1986->setToNode("hanim_r_thumb1");
ROUTE1986->setToField("set_rotation");
group->addChildren(*ROUTE1986);

CROUTE* ROUTE1987 = new CROUTE();
ROUTE1987->setFromNode("Kick_r_hipPitch");
ROUTE1987->setFromField("value_changed");
ROUTE1987->setToNode("hanim_r_hip");
ROUTE1987->setToField("set_rotation");
group->addChildren(*ROUTE1987);

CROUTE* ROUTE1988 = new CROUTE();
ROUTE1988->setFromNode("Kick_r_kneePitch");
ROUTE1988->setFromField("value_changed");
ROUTE1988->setToNode("hanim_r_knee");
ROUTE1988->setToField("set_rotation");
group->addChildren(*ROUTE1988);

CROUTE* ROUTE1989 = new CROUTE();
ROUTE1989->setFromNode("Kick_r_anklePitch");
ROUTE1989->setFromField("value_changed");
ROUTE1989->setToNode("hanim_r_ankle");
ROUTE1989->setToField("set_rotation");
group->addChildren(*ROUTE1989);

CROUTE* ROUTE1990 = new CROUTE();
ROUTE1990->setFromNode("Kick_r_metatarsalPitch");
ROUTE1990->setFromField("value_changed");
ROUTE1990->setToNode("hanim_r_metatarsal");
ROUTE1990->setToField("set_rotation");
group->addChildren(*ROUTE1990);

CROUTE* ROUTE1991 = new CROUTE();
ROUTE1991->setFromNode("Kick_l_hipPitch");
ROUTE1991->setFromField("value_changed");
ROUTE1991->setToNode("hanim_l_hip");
ROUTE1991->setToField("set_rotation");
group->addChildren(*ROUTE1991);

CROUTE* ROUTE1992 = new CROUTE();
ROUTE1992->setFromNode("Kick_l_kneePitch");
ROUTE1992->setFromField("value_changed");
ROUTE1992->setToNode("hanim_l_knee");
ROUTE1992->setToField("set_rotation");
group->addChildren(*ROUTE1992);

CROUTE* ROUTE1993 = new CROUTE();
ROUTE1993->setFromNode("Kick_r_anklePitch");
ROUTE1993->setFromField("value_changed");
ROUTE1993->setToNode("hanim_l_ankle");
ROUTE1993->setToField("set_rotation");
group->addChildren(*ROUTE1993);

CROUTE* ROUTE1994 = new CROUTE();
ROUTE1994->setFromNode("Kick_r_metatarsalPitch");
ROUTE1994->setFromField("value_changed");
ROUTE1994->setToNode("hanim_l_metatarsal");
ROUTE1994->setToField("set_rotation");
group->addChildren(*ROUTE1994);

CROUTE* ROUTE1995 = new CROUTE();
ROUTE1995->setFromNode("Kick_sacroiliacYaw");
ROUTE1995->setFromField("value_changed");
ROUTE1995->setToNode("hanim_sacroiliac");
ROUTE1995->setToField("set_rotation");
group->addChildren(*ROUTE1995);

CROUTE* ROUTE1996 = new CROUTE();
ROUTE1996->setFromNode("Kick_vl5Yaw");
ROUTE1996->setFromField("value_changed");
ROUTE1996->setToNode("hanim_vl5");
ROUTE1996->setToField("set_rotation");
group->addChildren(*ROUTE1996);

CROUTE* ROUTE1997 = new CROUTE();
ROUTE1997->setFromNode("Kick_vc6Yaw");
ROUTE1997->setFromField("value_changed");
ROUTE1997->setToNode("hanim_vc6");
ROUTE1997->setToField("set_rotation");
group->addChildren(*ROUTE1997);

CROUTE* ROUTE1998 = new CROUTE();
ROUTE1998->setFromNode("Kick_upper_bodyRotInterp");
ROUTE1998->setFromField("value_changed");
ROUTE1998->setToNode("hanim_vl1");
ROUTE1998->setToField("set_rotation");
group->addChildren(*ROUTE1998);

CROUTE* ROUTE1999 = new CROUTE();
ROUTE1999->setFromNode("Kick_lower_bodyRotInterp");
ROUTE1999->setFromField("value_changed");
ROUTE1999->setToNode("hanim_sacroiliac");
ROUTE1999->setToField("set_rotation");
group->addChildren(*ROUTE1999);

CROUTE* ROUTE2000 = new CROUTE();
ROUTE2000->setFromNode("Kick_whole_bodyRotInterp");
ROUTE2000->setFromField("value_changed");
ROUTE2000->setToNode("hanim_HumanoidRoot");
ROUTE2000->setToField("set_rotation");
group->addChildren(*ROUTE2000);

CROUTE* ROUTE2001 = new CROUTE();
ROUTE2001->setFromNode("Kick_whole_bodyTransInterp");
ROUTE2001->setFromField("value_changed");
ROUTE2001->setToNode("hanim_HumanoidRoot");
ROUTE2001->setToField("set_translation");
group->addChildren(*ROUTE2001);

CROUTE* ROUTE2002 = new CROUTE();
ROUTE2002->setFromNode("Kick_neckRotInterp");
ROUTE2002->setFromField("value_changed");
ROUTE2002->setToNode("hanim_vc4");
ROUTE2002->setToField("set_rotation");
group->addChildren(*ROUTE2002);

CROUTE* ROUTE2003 = new CROUTE();
ROUTE2003->setFromNode("StopTimer");
ROUTE2003->setFromField("fraction_changed");
ROUTE2003->setToNode("Stop_HumanoidRootTransInterp");
ROUTE2003->setToField("set_fraction");
group->addChildren(*ROUTE2003);

CROUTE* ROUTE2004 = new CROUTE();
ROUTE2004->setFromNode("StopTimer");
ROUTE2004->setFromField("fraction_changed");
ROUTE2004->setToNode("Stop_HumanoidRootRotInterp");
ROUTE2004->setToField("set_fraction");
group->addChildren(*ROUTE2004);

CROUTE* ROUTE2005 = new CROUTE();
ROUTE2005->setFromNode("StopTimer");
ROUTE2005->setFromField("fraction_changed");
ROUTE2005->setToNode("Stop_sacroiliacRotInterp");
ROUTE2005->setToField("set_fraction");
group->addChildren(*ROUTE2005);

CROUTE* ROUTE2006 = new CROUTE();
ROUTE2006->setFromNode("StopTimer");
ROUTE2006->setFromField("fraction_changed");
ROUTE2006->setToNode("Stop_l_hipRotInterp");
ROUTE2006->setToField("set_fraction");
group->addChildren(*ROUTE2006);

CROUTE* ROUTE2007 = new CROUTE();
ROUTE2007->setFromNode("StopTimer");
ROUTE2007->setFromField("fraction_changed");
ROUTE2007->setToNode("Stop_l_kneeRotInterp");
ROUTE2007->setToField("set_fraction");
group->addChildren(*ROUTE2007);

CROUTE* ROUTE2008 = new CROUTE();
ROUTE2008->setFromNode("StopTimer");
ROUTE2008->setFromField("fraction_changed");
ROUTE2008->setToNode("Stop_l_ankleRotInterp");
ROUTE2008->setToField("set_fraction");
group->addChildren(*ROUTE2008);

CROUTE* ROUTE2009 = new CROUTE();
ROUTE2009->setFromNode("StopTimer");
ROUTE2009->setFromField("fraction_changed");
ROUTE2009->setToNode("Stop_l_subtalarRotInterp");
ROUTE2009->setToField("set_fraction");
group->addChildren(*ROUTE2009);

CROUTE* ROUTE2010 = new CROUTE();
ROUTE2010->setFromNode("StopTimer");
ROUTE2010->setFromField("fraction_changed");
ROUTE2010->setToNode("Stop_l_midtarsalRotInterp");
ROUTE2010->setToField("set_fraction");
group->addChildren(*ROUTE2010);

CROUTE* ROUTE2011 = new CROUTE();
ROUTE2011->setFromNode("StopTimer");
ROUTE2011->setFromField("fraction_changed");
ROUTE2011->setToNode("Stop_l_metatarsalRotInterp");
ROUTE2011->setToField("set_fraction");
group->addChildren(*ROUTE2011);

CROUTE* ROUTE2012 = new CROUTE();
ROUTE2012->setFromNode("StopTimer");
ROUTE2012->setFromField("fraction_changed");
ROUTE2012->setToNode("Stop_r_hipRotInterp");
ROUTE2012->setToField("set_fraction");
group->addChildren(*ROUTE2012);

CROUTE* ROUTE2013 = new CROUTE();
ROUTE2013->setFromNode("StopTimer");
ROUTE2013->setFromField("fraction_changed");
ROUTE2013->setToNode("Stop_r_kneeRotInterp");
ROUTE2013->setToField("set_fraction");
group->addChildren(*ROUTE2013);

CROUTE* ROUTE2014 = new CROUTE();
ROUTE2014->setFromNode("StopTimer");
ROUTE2014->setFromField("fraction_changed");
ROUTE2014->setToNode("Stop_r_ankleRotInterp");
ROUTE2014->setToField("set_fraction");
group->addChildren(*ROUTE2014);

CROUTE* ROUTE2015 = new CROUTE();
ROUTE2015->setFromNode("StopTimer");
ROUTE2015->setFromField("fraction_changed");
ROUTE2015->setToNode("Stop_r_subtalarRotInterp");
ROUTE2015->setToField("set_fraction");
group->addChildren(*ROUTE2015);

CROUTE* ROUTE2016 = new CROUTE();
ROUTE2016->setFromNode("StopTimer");
ROUTE2016->setFromField("fraction_changed");
ROUTE2016->setToNode("Stop_r_midtarsalRotInterp");
ROUTE2016->setToField("set_fraction");
group->addChildren(*ROUTE2016);

CROUTE* ROUTE2017 = new CROUTE();
ROUTE2017->setFromNode("StopTimer");
ROUTE2017->setFromField("fraction_changed");
ROUTE2017->setToNode("Stop_r_metatarsalRotInterp");
ROUTE2017->setToField("set_fraction");
group->addChildren(*ROUTE2017);

CROUTE* ROUTE2018 = new CROUTE();
ROUTE2018->setFromNode("StopTimer");
ROUTE2018->setFromField("fraction_changed");
ROUTE2018->setToNode("Stop_vl5RotInterp");
ROUTE2018->setToField("set_fraction");
group->addChildren(*ROUTE2018);

CROUTE* ROUTE2019 = new CROUTE();
ROUTE2019->setFromNode("StopTimer");
ROUTE2019->setFromField("fraction_changed");
ROUTE2019->setToNode("Stop_vl4RotInterp");
ROUTE2019->setToField("set_fraction");
group->addChildren(*ROUTE2019);

CROUTE* ROUTE2020 = new CROUTE();
ROUTE2020->setFromNode("StopTimer");
ROUTE2020->setFromField("fraction_changed");
ROUTE2020->setToNode("Stop_vl3RotInterp");
ROUTE2020->setToField("set_fraction");
group->addChildren(*ROUTE2020);

CROUTE* ROUTE2021 = new CROUTE();
ROUTE2021->setFromNode("StopTimer");
ROUTE2021->setFromField("fraction_changed");
ROUTE2021->setToNode("Stop_vl2RotInterp");
ROUTE2021->setToField("set_fraction");
group->addChildren(*ROUTE2021);

CROUTE* ROUTE2022 = new CROUTE();
ROUTE2022->setFromNode("StopTimer");
ROUTE2022->setFromField("fraction_changed");
ROUTE2022->setToNode("Stop_vl1RotInterp");
ROUTE2022->setToField("set_fraction");
group->addChildren(*ROUTE2022);

CROUTE* ROUTE2023 = new CROUTE();
ROUTE2023->setFromNode("StopTimer");
ROUTE2023->setFromField("fraction_changed");
ROUTE2023->setToNode("Stop_vt12RotInterp");
ROUTE2023->setToField("set_fraction");
group->addChildren(*ROUTE2023);

CROUTE* ROUTE2024 = new CROUTE();
ROUTE2024->setFromNode("StopTimer");
ROUTE2024->setFromField("fraction_changed");
ROUTE2024->setToNode("Stop_vt11RotInterp");
ROUTE2024->setToField("set_fraction");
group->addChildren(*ROUTE2024);

CROUTE* ROUTE2025 = new CROUTE();
ROUTE2025->setFromNode("StopTimer");
ROUTE2025->setFromField("fraction_changed");
ROUTE2025->setToNode("Stop_vt10RotInterp");
ROUTE2025->setToField("set_fraction");
group->addChildren(*ROUTE2025);

CROUTE* ROUTE2026 = new CROUTE();
ROUTE2026->setFromNode("StopTimer");
ROUTE2026->setFromField("fraction_changed");
ROUTE2026->setToNode("Stop_vt9RotInterp");
ROUTE2026->setToField("set_fraction");
group->addChildren(*ROUTE2026);

CROUTE* ROUTE2027 = new CROUTE();
ROUTE2027->setFromNode("StopTimer");
ROUTE2027->setFromField("fraction_changed");
ROUTE2027->setToNode("Stop_vt8RotInterp");
ROUTE2027->setToField("set_fraction");
group->addChildren(*ROUTE2027);

CROUTE* ROUTE2028 = new CROUTE();
ROUTE2028->setFromNode("StopTimer");
ROUTE2028->setFromField("fraction_changed");
ROUTE2028->setToNode("Stop_vt7RotInterp");
ROUTE2028->setToField("set_fraction");
group->addChildren(*ROUTE2028);

CROUTE* ROUTE2029 = new CROUTE();
ROUTE2029->setFromNode("StopTimer");
ROUTE2029->setFromField("fraction_changed");
ROUTE2029->setToNode("Stop_vt6RotInterp");
ROUTE2029->setToField("set_fraction");
group->addChildren(*ROUTE2029);

CROUTE* ROUTE2030 = new CROUTE();
ROUTE2030->setFromNode("StopTimer");
ROUTE2030->setFromField("fraction_changed");
ROUTE2030->setToNode("Stop_vt5RotInterp");
ROUTE2030->setToField("set_fraction");
group->addChildren(*ROUTE2030);

CROUTE* ROUTE2031 = new CROUTE();
ROUTE2031->setFromNode("StopTimer");
ROUTE2031->setFromField("fraction_changed");
ROUTE2031->setToNode("Stop_vt4RotInterp");
ROUTE2031->setToField("set_fraction");
group->addChildren(*ROUTE2031);

CROUTE* ROUTE2032 = new CROUTE();
ROUTE2032->setFromNode("StopTimer");
ROUTE2032->setFromField("fraction_changed");
ROUTE2032->setToNode("Stop_vt3RotInterp");
ROUTE2032->setToField("set_fraction");
group->addChildren(*ROUTE2032);

CROUTE* ROUTE2033 = new CROUTE();
ROUTE2033->setFromNode("StopTimer");
ROUTE2033->setFromField("fraction_changed");
ROUTE2033->setToNode("Stop_vt2RotInterp");
ROUTE2033->setToField("set_fraction");
group->addChildren(*ROUTE2033);

CROUTE* ROUTE2034 = new CROUTE();
ROUTE2034->setFromNode("StopTimer");
ROUTE2034->setFromField("fraction_changed");
ROUTE2034->setToNode("Stop_vt1RotInterp");
ROUTE2034->setToField("set_fraction");
group->addChildren(*ROUTE2034);

CROUTE* ROUTE2035 = new CROUTE();
ROUTE2035->setFromNode("StopTimer");
ROUTE2035->setFromField("fraction_changed");
ROUTE2035->setToNode("Stop_vc7RotInterp");
ROUTE2035->setToField("set_fraction");
group->addChildren(*ROUTE2035);

CROUTE* ROUTE2036 = new CROUTE();
ROUTE2036->setFromNode("StopTimer");
ROUTE2036->setFromField("fraction_changed");
ROUTE2036->setToNode("Stop_vc6RotInterp");
ROUTE2036->setToField("set_fraction");
group->addChildren(*ROUTE2036);

CROUTE* ROUTE2037 = new CROUTE();
ROUTE2037->setFromNode("StopTimer");
ROUTE2037->setFromField("fraction_changed");
ROUTE2037->setToNode("Stop_vc5RotInterp");
ROUTE2037->setToField("set_fraction");
group->addChildren(*ROUTE2037);

CROUTE* ROUTE2038 = new CROUTE();
ROUTE2038->setFromNode("StopTimer");
ROUTE2038->setFromField("fraction_changed");
ROUTE2038->setToNode("Stop_vc4RotInterp");
ROUTE2038->setToField("set_fraction");
group->addChildren(*ROUTE2038);

CROUTE* ROUTE2039 = new CROUTE();
ROUTE2039->setFromNode("StopTimer");
ROUTE2039->setFromField("fraction_changed");
ROUTE2039->setToNode("Stop_vc3RotInterp");
ROUTE2039->setToField("set_fraction");
group->addChildren(*ROUTE2039);

CROUTE* ROUTE2040 = new CROUTE();
ROUTE2040->setFromNode("StopTimer");
ROUTE2040->setFromField("fraction_changed");
ROUTE2040->setToNode("Stop_vc2RotInterp");
ROUTE2040->setToField("set_fraction");
group->addChildren(*ROUTE2040);

CROUTE* ROUTE2041 = new CROUTE();
ROUTE2041->setFromNode("StopTimer");
ROUTE2041->setFromField("fraction_changed");
ROUTE2041->setToNode("Stop_vc1RotInterp");
ROUTE2041->setToField("set_fraction");
group->addChildren(*ROUTE2041);

CROUTE* ROUTE2042 = new CROUTE();
ROUTE2042->setFromNode("StopTimer");
ROUTE2042->setFromField("fraction_changed");
ROUTE2042->setToNode("Stop_skullbaseRotInterp");
ROUTE2042->setToField("set_fraction");
group->addChildren(*ROUTE2042);

CROUTE* ROUTE2043 = new CROUTE();
ROUTE2043->setFromNode("StopTimer");
ROUTE2043->setFromField("fraction_changed");
ROUTE2043->setToNode("Stop_l_eyeball_jointRotInterp");
ROUTE2043->setToField("set_fraction");
group->addChildren(*ROUTE2043);

CROUTE* ROUTE2044 = new CROUTE();
ROUTE2044->setFromNode("StopTimer");
ROUTE2044->setFromField("fraction_changed");
ROUTE2044->setToNode("Stop_r_eyeball_jointRotInterp");
ROUTE2044->setToField("set_fraction");
group->addChildren(*ROUTE2044);

CROUTE* ROUTE2045 = new CROUTE();
ROUTE2045->setFromNode("StopTimer");
ROUTE2045->setFromField("fraction_changed");
ROUTE2045->setToNode("Stop_l_sternoclavicularRotInterp");
ROUTE2045->setToField("set_fraction");
group->addChildren(*ROUTE2045);

CROUTE* ROUTE2046 = new CROUTE();
ROUTE2046->setFromNode("StopTimer");
ROUTE2046->setFromField("fraction_changed");
ROUTE2046->setToNode("Stop_l_acromioclavicularRotInterp");
ROUTE2046->setToField("set_fraction");
group->addChildren(*ROUTE2046);

CROUTE* ROUTE2047 = new CROUTE();
ROUTE2047->setFromNode("StopTimer");
ROUTE2047->setFromField("fraction_changed");
ROUTE2047->setToNode("Stop_l_shoulderRotInterp");
ROUTE2047->setToField("set_fraction");
group->addChildren(*ROUTE2047);

CROUTE* ROUTE2048 = new CROUTE();
ROUTE2048->setFromNode("StopTimer");
ROUTE2048->setFromField("fraction_changed");
ROUTE2048->setToNode("Stop_l_elbowRotInterp");
ROUTE2048->setToField("set_fraction");
group->addChildren(*ROUTE2048);

CROUTE* ROUTE2049 = new CROUTE();
ROUTE2049->setFromNode("StopTimer");
ROUTE2049->setFromField("fraction_changed");
ROUTE2049->setToNode("Stop_l_wristRotInterp");
ROUTE2049->setToField("set_fraction");
group->addChildren(*ROUTE2049);

CROUTE* ROUTE2050 = new CROUTE();
ROUTE2050->setFromNode("StopTimer");
ROUTE2050->setFromField("fraction_changed");
ROUTE2050->setToNode("Stop_l_thumb1RotInterp");
ROUTE2050->setToField("set_fraction");
group->addChildren(*ROUTE2050);

CROUTE* ROUTE2051 = new CROUTE();
ROUTE2051->setFromNode("StopTimer");
ROUTE2051->setFromField("fraction_changed");
ROUTE2051->setToNode("Stop_l_thumb2RotInterp");
ROUTE2051->setToField("set_fraction");
group->addChildren(*ROUTE2051);

CROUTE* ROUTE2052 = new CROUTE();
ROUTE2052->setFromNode("StopTimer");
ROUTE2052->setFromField("fraction_changed");
ROUTE2052->setToNode("Stop_l_thumb3RotInterp");
ROUTE2052->setToField("set_fraction");
group->addChildren(*ROUTE2052);

CROUTE* ROUTE2053 = new CROUTE();
ROUTE2053->setFromNode("StopTimer");
ROUTE2053->setFromField("fraction_changed");
ROUTE2053->setToNode("Stop_l_index0RotInterp");
ROUTE2053->setToField("set_fraction");
group->addChildren(*ROUTE2053);

CROUTE* ROUTE2054 = new CROUTE();
ROUTE2054->setFromNode("StopTimer");
ROUTE2054->setFromField("fraction_changed");
ROUTE2054->setToNode("Stop_l_index1RotInterp");
ROUTE2054->setToField("set_fraction");
group->addChildren(*ROUTE2054);

CROUTE* ROUTE2055 = new CROUTE();
ROUTE2055->setFromNode("StopTimer");
ROUTE2055->setFromField("fraction_changed");
ROUTE2055->setToNode("Stop_l_index2RotInterp");
ROUTE2055->setToField("set_fraction");
group->addChildren(*ROUTE2055);

CROUTE* ROUTE2056 = new CROUTE();
ROUTE2056->setFromNode("StopTimer");
ROUTE2056->setFromField("fraction_changed");
ROUTE2056->setToNode("Stop_l_index3RotInterp");
ROUTE2056->setToField("set_fraction");
group->addChildren(*ROUTE2056);

CROUTE* ROUTE2057 = new CROUTE();
ROUTE2057->setFromNode("StopTimer");
ROUTE2057->setFromField("fraction_changed");
ROUTE2057->setToNode("Stop_l_middle0RotInterp");
ROUTE2057->setToField("set_fraction");
group->addChildren(*ROUTE2057);

CROUTE* ROUTE2058 = new CROUTE();
ROUTE2058->setFromNode("StopTimer");
ROUTE2058->setFromField("fraction_changed");
ROUTE2058->setToNode("Stop_l_middle1RotInterp");
ROUTE2058->setToField("set_fraction");
group->addChildren(*ROUTE2058);

CROUTE* ROUTE2059 = new CROUTE();
ROUTE2059->setFromNode("StopTimer");
ROUTE2059->setFromField("fraction_changed");
ROUTE2059->setToNode("Stop_l_middle2RotInterp");
ROUTE2059->setToField("set_fraction");
group->addChildren(*ROUTE2059);

CROUTE* ROUTE2060 = new CROUTE();
ROUTE2060->setFromNode("StopTimer");
ROUTE2060->setFromField("fraction_changed");
ROUTE2060->setToNode("Stop_l_middle3RotInterp");
ROUTE2060->setToField("set_fraction");
group->addChildren(*ROUTE2060);

CROUTE* ROUTE2061 = new CROUTE();
ROUTE2061->setFromNode("StopTimer");
ROUTE2061->setFromField("fraction_changed");
ROUTE2061->setToNode("Stop_l_ring0RotInterp");
ROUTE2061->setToField("set_fraction");
group->addChildren(*ROUTE2061);

CROUTE* ROUTE2062 = new CROUTE();
ROUTE2062->setFromNode("StopTimer");
ROUTE2062->setFromField("fraction_changed");
ROUTE2062->setToNode("Stop_l_ring1RotInterp");
ROUTE2062->setToField("set_fraction");
group->addChildren(*ROUTE2062);

CROUTE* ROUTE2063 = new CROUTE();
ROUTE2063->setFromNode("StopTimer");
ROUTE2063->setFromField("fraction_changed");
ROUTE2063->setToNode("Stop_l_ring2RotInterp");
ROUTE2063->setToField("set_fraction");
group->addChildren(*ROUTE2063);

CROUTE* ROUTE2064 = new CROUTE();
ROUTE2064->setFromNode("StopTimer");
ROUTE2064->setFromField("fraction_changed");
ROUTE2064->setToNode("Stop_l_ring3RotInterp");
ROUTE2064->setToField("set_fraction");
group->addChildren(*ROUTE2064);

CROUTE* ROUTE2065 = new CROUTE();
ROUTE2065->setFromNode("StopTimer");
ROUTE2065->setFromField("fraction_changed");
ROUTE2065->setToNode("Stop_l_pinky0RotInterp");
ROUTE2065->setToField("set_fraction");
group->addChildren(*ROUTE2065);

CROUTE* ROUTE2066 = new CROUTE();
ROUTE2066->setFromNode("StopTimer");
ROUTE2066->setFromField("fraction_changed");
ROUTE2066->setToNode("Stop_l_pinky1RotInterp");
ROUTE2066->setToField("set_fraction");
group->addChildren(*ROUTE2066);

CROUTE* ROUTE2067 = new CROUTE();
ROUTE2067->setFromNode("StopTimer");
ROUTE2067->setFromField("fraction_changed");
ROUTE2067->setToNode("Stop_l_pinky2RotInterp");
ROUTE2067->setToField("set_fraction");
group->addChildren(*ROUTE2067);

CROUTE* ROUTE2068 = new CROUTE();
ROUTE2068->setFromNode("StopTimer");
ROUTE2068->setFromField("fraction_changed");
ROUTE2068->setToNode("Stop_l_pinky3RotInterp");
ROUTE2068->setToField("set_fraction");
group->addChildren(*ROUTE2068);

CROUTE* ROUTE2069 = new CROUTE();
ROUTE2069->setFromNode("StopTimer");
ROUTE2069->setFromField("fraction_changed");
ROUTE2069->setToNode("Stop_r_sternoclavicularRotInterp");
ROUTE2069->setToField("set_fraction");
group->addChildren(*ROUTE2069);

CROUTE* ROUTE2070 = new CROUTE();
ROUTE2070->setFromNode("StopTimer");
ROUTE2070->setFromField("fraction_changed");
ROUTE2070->setToNode("Stop_r_acromioclavicularRotInterp");
ROUTE2070->setToField("set_fraction");
group->addChildren(*ROUTE2070);

CROUTE* ROUTE2071 = new CROUTE();
ROUTE2071->setFromNode("StopTimer");
ROUTE2071->setFromField("fraction_changed");
ROUTE2071->setToNode("Stop_r_shoulderRotInterp");
ROUTE2071->setToField("set_fraction");
group->addChildren(*ROUTE2071);

CROUTE* ROUTE2072 = new CROUTE();
ROUTE2072->setFromNode("StopTimer");
ROUTE2072->setFromField("fraction_changed");
ROUTE2072->setToNode("Stop_r_elbowRotInterp");
ROUTE2072->setToField("set_fraction");
group->addChildren(*ROUTE2072);

CROUTE* ROUTE2073 = new CROUTE();
ROUTE2073->setFromNode("StopTimer");
ROUTE2073->setFromField("fraction_changed");
ROUTE2073->setToNode("Stop_r_wristRotInterp");
ROUTE2073->setToField("set_fraction");
group->addChildren(*ROUTE2073);

CROUTE* ROUTE2074 = new CROUTE();
ROUTE2074->setFromNode("StopTimer");
ROUTE2074->setFromField("fraction_changed");
ROUTE2074->setToNode("Stop_r_thumb1RotInterp");
ROUTE2074->setToField("set_fraction");
group->addChildren(*ROUTE2074);

CROUTE* ROUTE2075 = new CROUTE();
ROUTE2075->setFromNode("StopTimer");
ROUTE2075->setFromField("fraction_changed");
ROUTE2075->setToNode("Stop_r_thumb2RotInterp");
ROUTE2075->setToField("set_fraction");
group->addChildren(*ROUTE2075);

CROUTE* ROUTE2076 = new CROUTE();
ROUTE2076->setFromNode("StopTimer");
ROUTE2076->setFromField("fraction_changed");
ROUTE2076->setToNode("Stop_r_thumb3RotInterp");
ROUTE2076->setToField("set_fraction");
group->addChildren(*ROUTE2076);

CROUTE* ROUTE2077 = new CROUTE();
ROUTE2077->setFromNode("StopTimer");
ROUTE2077->setFromField("fraction_changed");
ROUTE2077->setToNode("Stop_r_index0RotInterp");
ROUTE2077->setToField("set_fraction");
group->addChildren(*ROUTE2077);

CROUTE* ROUTE2078 = new CROUTE();
ROUTE2078->setFromNode("StopTimer");
ROUTE2078->setFromField("fraction_changed");
ROUTE2078->setToNode("Stop_r_index1RotInterp");
ROUTE2078->setToField("set_fraction");
group->addChildren(*ROUTE2078);

CROUTE* ROUTE2079 = new CROUTE();
ROUTE2079->setFromNode("StopTimer");
ROUTE2079->setFromField("fraction_changed");
ROUTE2079->setToNode("Stop_r_index2RotInterp");
ROUTE2079->setToField("set_fraction");
group->addChildren(*ROUTE2079);

CROUTE* ROUTE2080 = new CROUTE();
ROUTE2080->setFromNode("StopTimer");
ROUTE2080->setFromField("fraction_changed");
ROUTE2080->setToNode("Stop_r_index3RotInterp");
ROUTE2080->setToField("set_fraction");
group->addChildren(*ROUTE2080);

CROUTE* ROUTE2081 = new CROUTE();
ROUTE2081->setFromNode("StopTimer");
ROUTE2081->setFromField("fraction_changed");
ROUTE2081->setToNode("Stop_r_middle0RotInterp");
ROUTE2081->setToField("set_fraction");
group->addChildren(*ROUTE2081);

CROUTE* ROUTE2082 = new CROUTE();
ROUTE2082->setFromNode("StopTimer");
ROUTE2082->setFromField("fraction_changed");
ROUTE2082->setToNode("Stop_r_middle1RotInterp");
ROUTE2082->setToField("set_fraction");
group->addChildren(*ROUTE2082);

CROUTE* ROUTE2083 = new CROUTE();
ROUTE2083->setFromNode("StopTimer");
ROUTE2083->setFromField("fraction_changed");
ROUTE2083->setToNode("Stop_r_middle2RotInterp");
ROUTE2083->setToField("set_fraction");
group->addChildren(*ROUTE2083);

CROUTE* ROUTE2084 = new CROUTE();
ROUTE2084->setFromNode("StopTimer");
ROUTE2084->setFromField("fraction_changed");
ROUTE2084->setToNode("Stop_r_middle3RotInterp");
ROUTE2084->setToField("set_fraction");
group->addChildren(*ROUTE2084);

CROUTE* ROUTE2085 = new CROUTE();
ROUTE2085->setFromNode("StopTimer");
ROUTE2085->setFromField("fraction_changed");
ROUTE2085->setToNode("Stop_r_ring0RotInterp");
ROUTE2085->setToField("set_fraction");
group->addChildren(*ROUTE2085);

CROUTE* ROUTE2086 = new CROUTE();
ROUTE2086->setFromNode("StopTimer");
ROUTE2086->setFromField("fraction_changed");
ROUTE2086->setToNode("Stop_r_ring1RotInterp");
ROUTE2086->setToField("set_fraction");
group->addChildren(*ROUTE2086);

CROUTE* ROUTE2087 = new CROUTE();
ROUTE2087->setFromNode("StopTimer");
ROUTE2087->setFromField("fraction_changed");
ROUTE2087->setToNode("Stop_r_ring2RotInterp");
ROUTE2087->setToField("set_fraction");
group->addChildren(*ROUTE2087);

CROUTE* ROUTE2088 = new CROUTE();
ROUTE2088->setFromNode("StopTimer");
ROUTE2088->setFromField("fraction_changed");
ROUTE2088->setToNode("Stop_r_ring3RotInterp");
ROUTE2088->setToField("set_fraction");
group->addChildren(*ROUTE2088);

CROUTE* ROUTE2089 = new CROUTE();
ROUTE2089->setFromNode("StopTimer");
ROUTE2089->setFromField("fraction_changed");
ROUTE2089->setToNode("Stop_r_pinky0RotInterp");
ROUTE2089->setToField("set_fraction");
group->addChildren(*ROUTE2089);

CROUTE* ROUTE2090 = new CROUTE();
ROUTE2090->setFromNode("StopTimer");
ROUTE2090->setFromField("fraction_changed");
ROUTE2090->setToNode("Stop_r_pinky1RotInterp");
ROUTE2090->setToField("set_fraction");
group->addChildren(*ROUTE2090);

CROUTE* ROUTE2091 = new CROUTE();
ROUTE2091->setFromNode("StopTimer");
ROUTE2091->setFromField("fraction_changed");
ROUTE2091->setToNode("Stop_r_pinky2RotInterp");
ROUTE2091->setToField("set_fraction");
group->addChildren(*ROUTE2091);

CROUTE* ROUTE2092 = new CROUTE();
ROUTE2092->setFromNode("StopTimer");
ROUTE2092->setFromField("fraction_changed");
ROUTE2092->setToNode("Stop_r_pinky3RotInterp");
ROUTE2092->setToField("set_fraction");
group->addChildren(*ROUTE2092);

CROUTE* ROUTE2093 = new CROUTE();
ROUTE2093->setFromNode("Stop_HumanoidRootTransInterp");
ROUTE2093->setFromField("value_changed");
ROUTE2093->setToNode("hanim_HumanoidRoot");
ROUTE2093->setToField("set_translation");
group->addChildren(*ROUTE2093);

CROUTE* ROUTE2094 = new CROUTE();
ROUTE2094->setFromNode("Stop_HumanoidRootRotInterp");
ROUTE2094->setFromField("value_changed");
ROUTE2094->setToNode("hanim_HumanoidRoot");
ROUTE2094->setToField("set_rotation");
group->addChildren(*ROUTE2094);

CROUTE* ROUTE2095 = new CROUTE();
ROUTE2095->setFromNode("Stop_sacroiliacRotInterp");
ROUTE2095->setFromField("value_changed");
ROUTE2095->setToNode("hanim_sacroiliac");
ROUTE2095->setToField("set_rotation");
group->addChildren(*ROUTE2095);

CROUTE* ROUTE2096 = new CROUTE();
ROUTE2096->setFromNode("Stop_l_hipRotInterp");
ROUTE2096->setFromField("value_changed");
ROUTE2096->setToNode("hanim_l_hip");
ROUTE2096->setToField("set_rotation");
group->addChildren(*ROUTE2096);

CROUTE* ROUTE2097 = new CROUTE();
ROUTE2097->setFromNode("Stop_l_kneeRotInterp");
ROUTE2097->setFromField("value_changed");
ROUTE2097->setToNode("hanim_l_knee");
ROUTE2097->setToField("set_rotation");
group->addChildren(*ROUTE2097);

CROUTE* ROUTE2098 = new CROUTE();
ROUTE2098->setFromNode("Stop_l_ankleRotInterp");
ROUTE2098->setFromField("value_changed");
ROUTE2098->setToNode("hanim_l_ankle");
ROUTE2098->setToField("set_rotation");
group->addChildren(*ROUTE2098);

CROUTE* ROUTE2099 = new CROUTE();
ROUTE2099->setFromNode("Stop_l_subtalarRotInterp");
ROUTE2099->setFromField("value_changed");
ROUTE2099->setToNode("hanim_l_subtalar");
ROUTE2099->setToField("set_rotation");
group->addChildren(*ROUTE2099);

CROUTE* ROUTE2100 = new CROUTE();
ROUTE2100->setFromNode("Stop_l_midtarsalRotInterp");
ROUTE2100->setFromField("value_changed");
ROUTE2100->setToNode("hanim_l_midtarsal");
ROUTE2100->setToField("set_rotation");
group->addChildren(*ROUTE2100);

CROUTE* ROUTE2101 = new CROUTE();
ROUTE2101->setFromNode("Stop_l_metatarsalRotInterp");
ROUTE2101->setFromField("value_changed");
ROUTE2101->setToNode("hanim_l_metatarsal");
ROUTE2101->setToField("set_rotation");
group->addChildren(*ROUTE2101);

CROUTE* ROUTE2102 = new CROUTE();
ROUTE2102->setFromNode("Stop_r_hipRotInterp");
ROUTE2102->setFromField("value_changed");
ROUTE2102->setToNode("hanim_r_hip");
ROUTE2102->setToField("set_rotation");
group->addChildren(*ROUTE2102);

CROUTE* ROUTE2103 = new CROUTE();
ROUTE2103->setFromNode("Stop_r_kneeRotInterp");
ROUTE2103->setFromField("value_changed");
ROUTE2103->setToNode("hanim_r_knee");
ROUTE2103->setToField("set_rotation");
group->addChildren(*ROUTE2103);

CROUTE* ROUTE2104 = new CROUTE();
ROUTE2104->setFromNode("Stop_r_ankleRotInterp");
ROUTE2104->setFromField("value_changed");
ROUTE2104->setToNode("hanim_r_ankle");
ROUTE2104->setToField("set_rotation");
group->addChildren(*ROUTE2104);

CROUTE* ROUTE2105 = new CROUTE();
ROUTE2105->setFromNode("Stop_r_subtalarRotInterp");
ROUTE2105->setFromField("value_changed");
ROUTE2105->setToNode("hanim_r_subtalar");
ROUTE2105->setToField("set_rotation");
group->addChildren(*ROUTE2105);

CROUTE* ROUTE2106 = new CROUTE();
ROUTE2106->setFromNode("Stop_r_midtarsalRotInterp");
ROUTE2106->setFromField("value_changed");
ROUTE2106->setToNode("hanim_r_midtarsal");
ROUTE2106->setToField("set_rotation");
group->addChildren(*ROUTE2106);

CROUTE* ROUTE2107 = new CROUTE();
ROUTE2107->setFromNode("Stop_r_metatarsalRotInterp");
ROUTE2107->setFromField("value_changed");
ROUTE2107->setToNode("hanim_r_metatarsal");
ROUTE2107->setToField("set_rotation");
group->addChildren(*ROUTE2107);

CROUTE* ROUTE2108 = new CROUTE();
ROUTE2108->setFromNode("Stop_vl5RotInterp");
ROUTE2108->setFromField("value_changed");
ROUTE2108->setToNode("hanim_vl5");
ROUTE2108->setToField("set_rotation");
group->addChildren(*ROUTE2108);

CROUTE* ROUTE2109 = new CROUTE();
ROUTE2109->setFromNode("Stop_vl4RotInterp");
ROUTE2109->setFromField("value_changed");
ROUTE2109->setToNode("hanim_vl4");
ROUTE2109->setToField("set_rotation");
group->addChildren(*ROUTE2109);

CROUTE* ROUTE2110 = new CROUTE();
ROUTE2110->setFromNode("Stop_vl3RotInterp");
ROUTE2110->setFromField("value_changed");
ROUTE2110->setToNode("hanim_vl3");
ROUTE2110->setToField("set_rotation");
group->addChildren(*ROUTE2110);

CROUTE* ROUTE2111 = new CROUTE();
ROUTE2111->setFromNode("Stop_vl2RotInterp");
ROUTE2111->setFromField("value_changed");
ROUTE2111->setToNode("hanim_vl2");
ROUTE2111->setToField("set_rotation");
group->addChildren(*ROUTE2111);

CROUTE* ROUTE2112 = new CROUTE();
ROUTE2112->setFromNode("Stop_vl1RotInterp");
ROUTE2112->setFromField("value_changed");
ROUTE2112->setToNode("hanim_vl1");
ROUTE2112->setToField("set_rotation");
group->addChildren(*ROUTE2112);

CROUTE* ROUTE2113 = new CROUTE();
ROUTE2113->setFromNode("Stop_vt12RotInterp");
ROUTE2113->setFromField("value_changed");
ROUTE2113->setToNode("hanim_vt12");
ROUTE2113->setToField("set_rotation");
group->addChildren(*ROUTE2113);

CROUTE* ROUTE2114 = new CROUTE();
ROUTE2114->setFromNode("Stop_vt11RotInterp");
ROUTE2114->setFromField("value_changed");
ROUTE2114->setToNode("hanim_vt11");
ROUTE2114->setToField("set_rotation");
group->addChildren(*ROUTE2114);

CROUTE* ROUTE2115 = new CROUTE();
ROUTE2115->setFromNode("Stop_vt10RotInterp");
ROUTE2115->setFromField("value_changed");
ROUTE2115->setToNode("hanim_vt10");
ROUTE2115->setToField("set_rotation");
group->addChildren(*ROUTE2115);

CROUTE* ROUTE2116 = new CROUTE();
ROUTE2116->setFromNode("Stop_vt9RotInterp");
ROUTE2116->setFromField("value_changed");
ROUTE2116->setToNode("hanim_vt9");
ROUTE2116->setToField("set_rotation");
group->addChildren(*ROUTE2116);

CROUTE* ROUTE2117 = new CROUTE();
ROUTE2117->setFromNode("Stop_vt8RotInterp");
ROUTE2117->setFromField("value_changed");
ROUTE2117->setToNode("hanim_vt8");
ROUTE2117->setToField("set_rotation");
group->addChildren(*ROUTE2117);

CROUTE* ROUTE2118 = new CROUTE();
ROUTE2118->setFromNode("Stop_vt7RotInterp");
ROUTE2118->setFromField("value_changed");
ROUTE2118->setToNode("hanim_vt7");
ROUTE2118->setToField("set_rotation");
group->addChildren(*ROUTE2118);

CROUTE* ROUTE2119 = new CROUTE();
ROUTE2119->setFromNode("Stop_vt6RotInterp");
ROUTE2119->setFromField("value_changed");
ROUTE2119->setToNode("hanim_vt6");
ROUTE2119->setToField("set_rotation");
group->addChildren(*ROUTE2119);

CROUTE* ROUTE2120 = new CROUTE();
ROUTE2120->setFromNode("Stop_vt5RotInterp");
ROUTE2120->setFromField("value_changed");
ROUTE2120->setToNode("hanim_vt5");
ROUTE2120->setToField("set_rotation");
group->addChildren(*ROUTE2120);

CROUTE* ROUTE2121 = new CROUTE();
ROUTE2121->setFromNode("Stop_vt4RotInterp");
ROUTE2121->setFromField("value_changed");
ROUTE2121->setToNode("hanim_vt4");
ROUTE2121->setToField("set_rotation");
group->addChildren(*ROUTE2121);

CROUTE* ROUTE2122 = new CROUTE();
ROUTE2122->setFromNode("Stop_vt3RotInterp");
ROUTE2122->setFromField("value_changed");
ROUTE2122->setToNode("hanim_vt3");
ROUTE2122->setToField("set_rotation");
group->addChildren(*ROUTE2122);

CROUTE* ROUTE2123 = new CROUTE();
ROUTE2123->setFromNode("Stop_vt2RotInterp");
ROUTE2123->setFromField("value_changed");
ROUTE2123->setToNode("hanim_vt2");
ROUTE2123->setToField("set_rotation");
group->addChildren(*ROUTE2123);

CROUTE* ROUTE2124 = new CROUTE();
ROUTE2124->setFromNode("Stop_vt1RotInterp");
ROUTE2124->setFromField("value_changed");
ROUTE2124->setToNode("hanim_vt1");
ROUTE2124->setToField("set_rotation");
group->addChildren(*ROUTE2124);

CROUTE* ROUTE2125 = new CROUTE();
ROUTE2125->setFromNode("Stop_vc7RotInterp");
ROUTE2125->setFromField("value_changed");
ROUTE2125->setToNode("hanim_vc7");
ROUTE2125->setToField("set_rotation");
group->addChildren(*ROUTE2125);

CROUTE* ROUTE2126 = new CROUTE();
ROUTE2126->setFromNode("Stop_vc6RotInterp");
ROUTE2126->setFromField("value_changed");
ROUTE2126->setToNode("hanim_vc6");
ROUTE2126->setToField("set_rotation");
group->addChildren(*ROUTE2126);

CROUTE* ROUTE2127 = new CROUTE();
ROUTE2127->setFromNode("Stop_vc5RotInterp");
ROUTE2127->setFromField("value_changed");
ROUTE2127->setToNode("hanim_vc5");
ROUTE2127->setToField("set_rotation");
group->addChildren(*ROUTE2127);

CROUTE* ROUTE2128 = new CROUTE();
ROUTE2128->setFromNode("Stop_vc4RotInterp");
ROUTE2128->setFromField("value_changed");
ROUTE2128->setToNode("hanim_vc4");
ROUTE2128->setToField("set_rotation");
group->addChildren(*ROUTE2128);

CROUTE* ROUTE2129 = new CROUTE();
ROUTE2129->setFromNode("Stop_vc3RotInterp");
ROUTE2129->setFromField("value_changed");
ROUTE2129->setToNode("hanim_vc3");
ROUTE2129->setToField("set_rotation");
group->addChildren(*ROUTE2129);

CROUTE* ROUTE2130 = new CROUTE();
ROUTE2130->setFromNode("Stop_vc2RotInterp");
ROUTE2130->setFromField("value_changed");
ROUTE2130->setToNode("hanim_vc2");
ROUTE2130->setToField("set_rotation");
group->addChildren(*ROUTE2130);

CROUTE* ROUTE2131 = new CROUTE();
ROUTE2131->setFromNode("Stop_vc1RotInterp");
ROUTE2131->setFromField("value_changed");
ROUTE2131->setToNode("hanim_vc1");
ROUTE2131->setToField("set_rotation");
group->addChildren(*ROUTE2131);

CROUTE* ROUTE2132 = new CROUTE();
ROUTE2132->setFromNode("Stop_skullbaseRotInterp");
ROUTE2132->setFromField("value_changed");
ROUTE2132->setToNode("hanim_skullbase");
ROUTE2132->setToField("set_rotation");
group->addChildren(*ROUTE2132);

CROUTE* ROUTE2133 = new CROUTE();
ROUTE2133->setFromNode("Stop_l_eyeball_jointRotInterp");
ROUTE2133->setFromField("value_changed");
ROUTE2133->setToNode("hanim_l_eyeball_joint");
ROUTE2133->setToField("set_rotation");
group->addChildren(*ROUTE2133);

CROUTE* ROUTE2134 = new CROUTE();
ROUTE2134->setFromNode("Stop_r_eyeball_jointRotInterp");
ROUTE2134->setFromField("value_changed");
ROUTE2134->setToNode("hanim_r_eyeball_joint");
ROUTE2134->setToField("set_rotation");
group->addChildren(*ROUTE2134);

CROUTE* ROUTE2135 = new CROUTE();
ROUTE2135->setFromNode("Stop_l_sternoclavicularRotInterp");
ROUTE2135->setFromField("value_changed");
ROUTE2135->setToNode("hanim_l_sternoclavicular");
ROUTE2135->setToField("set_rotation");
group->addChildren(*ROUTE2135);

CROUTE* ROUTE2136 = new CROUTE();
ROUTE2136->setFromNode("Stop_l_acromioclavicularRotInterp");
ROUTE2136->setFromField("value_changed");
ROUTE2136->setToNode("hanim_l_acromioclavicular");
ROUTE2136->setToField("set_rotation");
group->addChildren(*ROUTE2136);

CROUTE* ROUTE2137 = new CROUTE();
ROUTE2137->setFromNode("Stop_l_shoulderRotInterp");
ROUTE2137->setFromField("value_changed");
ROUTE2137->setToNode("hanim_l_shoulder");
ROUTE2137->setToField("set_rotation");
group->addChildren(*ROUTE2137);

CROUTE* ROUTE2138 = new CROUTE();
ROUTE2138->setFromNode("Stop_l_elbowRotInterp");
ROUTE2138->setFromField("value_changed");
ROUTE2138->setToNode("hanim_l_elbow");
ROUTE2138->setToField("set_rotation");
group->addChildren(*ROUTE2138);

CROUTE* ROUTE2139 = new CROUTE();
ROUTE2139->setFromNode("Stop_l_wristRotInterp");
ROUTE2139->setFromField("value_changed");
ROUTE2139->setToNode("hanim_l_wrist");
ROUTE2139->setToField("set_rotation");
group->addChildren(*ROUTE2139);

CROUTE* ROUTE2140 = new CROUTE();
ROUTE2140->setFromNode("Stop_l_thumb1RotInterp");
ROUTE2140->setFromField("value_changed");
ROUTE2140->setToNode("hanim_l_thumb1");
ROUTE2140->setToField("set_rotation");
group->addChildren(*ROUTE2140);

CROUTE* ROUTE2141 = new CROUTE();
ROUTE2141->setFromNode("Stop_l_thumb2RotInterp");
ROUTE2141->setFromField("value_changed");
ROUTE2141->setToNode("hanim_l_thumb2");
ROUTE2141->setToField("set_rotation");
group->addChildren(*ROUTE2141);

CROUTE* ROUTE2142 = new CROUTE();
ROUTE2142->setFromNode("Stop_l_thumb3RotInterp");
ROUTE2142->setFromField("value_changed");
ROUTE2142->setToNode("hanim_l_thumb3");
ROUTE2142->setToField("set_rotation");
group->addChildren(*ROUTE2142);

CROUTE* ROUTE2143 = new CROUTE();
ROUTE2143->setFromNode("Stop_l_index0RotInterp");
ROUTE2143->setFromField("value_changed");
ROUTE2143->setToNode("hanim_l_index0");
ROUTE2143->setToField("set_rotation");
group->addChildren(*ROUTE2143);

CROUTE* ROUTE2144 = new CROUTE();
ROUTE2144->setFromNode("Stop_l_index1RotInterp");
ROUTE2144->setFromField("value_changed");
ROUTE2144->setToNode("hanim_l_index1");
ROUTE2144->setToField("set_rotation");
group->addChildren(*ROUTE2144);

CROUTE* ROUTE2145 = new CROUTE();
ROUTE2145->setFromNode("Stop_l_index2RotInterp");
ROUTE2145->setFromField("value_changed");
ROUTE2145->setToNode("hanim_l_index2");
ROUTE2145->setToField("set_rotation");
group->addChildren(*ROUTE2145);

CROUTE* ROUTE2146 = new CROUTE();
ROUTE2146->setFromNode("Stop_l_index3RotInterp");
ROUTE2146->setFromField("value_changed");
ROUTE2146->setToNode("hanim_l_index3");
ROUTE2146->setToField("set_rotation");
group->addChildren(*ROUTE2146);

CROUTE* ROUTE2147 = new CROUTE();
ROUTE2147->setFromNode("Stop_l_middle0RotInterp");
ROUTE2147->setFromField("value_changed");
ROUTE2147->setToNode("hanim_l_middle0");
ROUTE2147->setToField("set_rotation");
group->addChildren(*ROUTE2147);

CROUTE* ROUTE2148 = new CROUTE();
ROUTE2148->setFromNode("Stop_l_middle1RotInterp");
ROUTE2148->setFromField("value_changed");
ROUTE2148->setToNode("hanim_l_middle1");
ROUTE2148->setToField("set_rotation");
group->addChildren(*ROUTE2148);

CROUTE* ROUTE2149 = new CROUTE();
ROUTE2149->setFromNode("Stop_l_middle2RotInterp");
ROUTE2149->setFromField("value_changed");
ROUTE2149->setToNode("hanim_l_middle2");
ROUTE2149->setToField("set_rotation");
group->addChildren(*ROUTE2149);

CROUTE* ROUTE2150 = new CROUTE();
ROUTE2150->setFromNode("Stop_l_middle3RotInterp");
ROUTE2150->setFromField("value_changed");
ROUTE2150->setToNode("hanim_l_middle3");
ROUTE2150->setToField("set_rotation");
group->addChildren(*ROUTE2150);

CROUTE* ROUTE2151 = new CROUTE();
ROUTE2151->setFromNode("Stop_l_ring0RotInterp");
ROUTE2151->setFromField("value_changed");
ROUTE2151->setToNode("hanim_l_ring0");
ROUTE2151->setToField("set_rotation");
group->addChildren(*ROUTE2151);

CROUTE* ROUTE2152 = new CROUTE();
ROUTE2152->setFromNode("Stop_l_ring1RotInterp");
ROUTE2152->setFromField("value_changed");
ROUTE2152->setToNode("hanim_l_ring1");
ROUTE2152->setToField("set_rotation");
group->addChildren(*ROUTE2152);

CROUTE* ROUTE2153 = new CROUTE();
ROUTE2153->setFromNode("Stop_l_ring2RotInterp");
ROUTE2153->setFromField("value_changed");
ROUTE2153->setToNode("hanim_l_ring2");
ROUTE2153->setToField("set_rotation");
group->addChildren(*ROUTE2153);

CROUTE* ROUTE2154 = new CROUTE();
ROUTE2154->setFromNode("Stop_l_ring3RotInterp");
ROUTE2154->setFromField("value_changed");
ROUTE2154->setToNode("hanim_l_ring3");
ROUTE2154->setToField("set_rotation");
group->addChildren(*ROUTE2154);

CROUTE* ROUTE2155 = new CROUTE();
ROUTE2155->setFromNode("Stop_l_pinky0RotInterp");
ROUTE2155->setFromField("value_changed");
ROUTE2155->setToNode("hanim_l_pinky0");
ROUTE2155->setToField("set_rotation");
group->addChildren(*ROUTE2155);

CROUTE* ROUTE2156 = new CROUTE();
ROUTE2156->setFromNode("Stop_l_pinky1RotInterp");
ROUTE2156->setFromField("value_changed");
ROUTE2156->setToNode("hanim_l_pinky1");
ROUTE2156->setToField("set_rotation");
group->addChildren(*ROUTE2156);

CROUTE* ROUTE2157 = new CROUTE();
ROUTE2157->setFromNode("Stop_l_pinky2RotInterp");
ROUTE2157->setFromField("value_changed");
ROUTE2157->setToNode("hanim_l_pinky2");
ROUTE2157->setToField("set_rotation");
group->addChildren(*ROUTE2157);

CROUTE* ROUTE2158 = new CROUTE();
ROUTE2158->setFromNode("Stop_l_pinky3RotInterp");
ROUTE2158->setFromField("value_changed");
ROUTE2158->setToNode("hanim_l_pinky3");
ROUTE2158->setToField("set_rotation");
group->addChildren(*ROUTE2158);

CROUTE* ROUTE2159 = new CROUTE();
ROUTE2159->setFromNode("Stop_r_sternoclavicularRotInterp");
ROUTE2159->setFromField("value_changed");
ROUTE2159->setToNode("hanim_r_sternoclavicular");
ROUTE2159->setToField("set_rotation");
group->addChildren(*ROUTE2159);

CROUTE* ROUTE2160 = new CROUTE();
ROUTE2160->setFromNode("Stop_r_acromioclavicularRotInterp");
ROUTE2160->setFromField("value_changed");
ROUTE2160->setToNode("hanim_r_acromioclavicular");
ROUTE2160->setToField("set_rotation");
group->addChildren(*ROUTE2160);

CROUTE* ROUTE2161 = new CROUTE();
ROUTE2161->setFromNode("Stop_r_shoulderRotInterp");
ROUTE2161->setFromField("value_changed");
ROUTE2161->setToNode("hanim_r_shoulder");
ROUTE2161->setToField("set_rotation");
group->addChildren(*ROUTE2161);

CROUTE* ROUTE2162 = new CROUTE();
ROUTE2162->setFromNode("Stop_r_elbowRotInterp");
ROUTE2162->setFromField("value_changed");
ROUTE2162->setToNode("hanim_r_elbow");
ROUTE2162->setToField("set_rotation");
group->addChildren(*ROUTE2162);

CROUTE* ROUTE2163 = new CROUTE();
ROUTE2163->setFromNode("Stop_r_wristRotInterp");
ROUTE2163->setFromField("value_changed");
ROUTE2163->setToNode("hanim_r_wrist");
ROUTE2163->setToField("set_rotation");
group->addChildren(*ROUTE2163);

CROUTE* ROUTE2164 = new CROUTE();
ROUTE2164->setFromNode("Stop_r_thumb1RotInterp");
ROUTE2164->setFromField("value_changed");
ROUTE2164->setToNode("hanim_r_thumb1");
ROUTE2164->setToField("set_rotation");
group->addChildren(*ROUTE2164);

CROUTE* ROUTE2165 = new CROUTE();
ROUTE2165->setFromNode("Stop_r_thumb2RotInterp");
ROUTE2165->setFromField("value_changed");
ROUTE2165->setToNode("hanim_r_thumb2");
ROUTE2165->setToField("set_rotation");
group->addChildren(*ROUTE2165);

CROUTE* ROUTE2166 = new CROUTE();
ROUTE2166->setFromNode("Stop_r_thumb3RotInterp");
ROUTE2166->setFromField("value_changed");
ROUTE2166->setToNode("hanim_r_thumb3");
ROUTE2166->setToField("set_rotation");
group->addChildren(*ROUTE2166);

CROUTE* ROUTE2167 = new CROUTE();
ROUTE2167->setFromNode("Stop_r_index0RotInterp");
ROUTE2167->setFromField("value_changed");
ROUTE2167->setToNode("hanim_r_index0");
ROUTE2167->setToField("set_rotation");
group->addChildren(*ROUTE2167);

CROUTE* ROUTE2168 = new CROUTE();
ROUTE2168->setFromNode("Stop_r_index1RotInterp");
ROUTE2168->setFromField("value_changed");
ROUTE2168->setToNode("hanim_r_index1");
ROUTE2168->setToField("set_rotation");
group->addChildren(*ROUTE2168);

CROUTE* ROUTE2169 = new CROUTE();
ROUTE2169->setFromNode("Stop_r_index2RotInterp");
ROUTE2169->setFromField("value_changed");
ROUTE2169->setToNode("hanim_r_index2");
ROUTE2169->setToField("set_rotation");
group->addChildren(*ROUTE2169);

CROUTE* ROUTE2170 = new CROUTE();
ROUTE2170->setFromNode("Stop_r_index3RotInterp");
ROUTE2170->setFromField("value_changed");
ROUTE2170->setToNode("hanim_r_index3");
ROUTE2170->setToField("set_rotation");
group->addChildren(*ROUTE2170);

CROUTE* ROUTE2171 = new CROUTE();
ROUTE2171->setFromNode("Stop_r_middle0RotInterp");
ROUTE2171->setFromField("value_changed");
ROUTE2171->setToNode("hanim_r_middle0");
ROUTE2171->setToField("set_rotation");
group->addChildren(*ROUTE2171);

CROUTE* ROUTE2172 = new CROUTE();
ROUTE2172->setFromNode("Stop_r_middle1RotInterp");
ROUTE2172->setFromField("value_changed");
ROUTE2172->setToNode("hanim_r_middle1");
ROUTE2172->setToField("set_rotation");
group->addChildren(*ROUTE2172);

CROUTE* ROUTE2173 = new CROUTE();
ROUTE2173->setFromNode("Stop_r_middle2RotInterp");
ROUTE2173->setFromField("value_changed");
ROUTE2173->setToNode("hanim_r_middle2");
ROUTE2173->setToField("set_rotation");
group->addChildren(*ROUTE2173);

CROUTE* ROUTE2174 = new CROUTE();
ROUTE2174->setFromNode("Stop_r_middle3RotInterp");
ROUTE2174->setFromField("value_changed");
ROUTE2174->setToNode("hanim_r_middle3");
ROUTE2174->setToField("set_rotation");
group->addChildren(*ROUTE2174);

CROUTE* ROUTE2175 = new CROUTE();
ROUTE2175->setFromNode("Stop_r_ring0RotInterp");
ROUTE2175->setFromField("value_changed");
ROUTE2175->setToNode("hanim_r_ring0");
ROUTE2175->setToField("set_rotation");
group->addChildren(*ROUTE2175);

CROUTE* ROUTE2176 = new CROUTE();
ROUTE2176->setFromNode("Stop_r_ring1RotInterp");
ROUTE2176->setFromField("value_changed");
ROUTE2176->setToNode("hanim_r_ring1");
ROUTE2176->setToField("set_rotation");
group->addChildren(*ROUTE2176);

CROUTE* ROUTE2177 = new CROUTE();
ROUTE2177->setFromNode("Stop_r_ring2RotInterp");
ROUTE2177->setFromField("value_changed");
ROUTE2177->setToNode("hanim_r_ring2");
ROUTE2177->setToField("set_rotation");
group->addChildren(*ROUTE2177);

CROUTE* ROUTE2178 = new CROUTE();
ROUTE2178->setFromNode("Stop_r_ring3RotInterp");
ROUTE2178->setFromField("value_changed");
ROUTE2178->setToNode("hanim_r_ring3");
ROUTE2178->setToField("set_rotation");
group->addChildren(*ROUTE2178);

CROUTE* ROUTE2179 = new CROUTE();
ROUTE2179->setFromNode("Stop_r_pinky0RotInterp");
ROUTE2179->setFromField("value_changed");
ROUTE2179->setToNode("hanim_r_pinky0");
ROUTE2179->setToField("set_rotation");
group->addChildren(*ROUTE2179);

CROUTE* ROUTE2180 = new CROUTE();
ROUTE2180->setFromNode("Stop_r_pinky1RotInterp");
ROUTE2180->setFromField("value_changed");
ROUTE2180->setToNode("hanim_r_pinky1");
ROUTE2180->setToField("set_rotation");
group->addChildren(*ROUTE2180);

CROUTE* ROUTE2181 = new CROUTE();
ROUTE2181->setFromNode("Stop_r_pinky2RotInterp");
ROUTE2181->setFromField("value_changed");
ROUTE2181->setToNode("hanim_r_pinky2");
ROUTE2181->setToField("set_rotation");
group->addChildren(*ROUTE2181);

CROUTE* ROUTE2182 = new CROUTE();
ROUTE2182->setFromNode("Stop_r_pinky3RotInterp");
ROUTE2182->setFromField("value_changed");
ROUTE2182->setToNode("hanim_r_pinky3");
ROUTE2182->setToField("set_rotation");
group->addChildren(*ROUTE2182);

CROUTE* ROUTE2183 = new CROUTE();
ROUTE2183->setFromNode("HudProx");
ROUTE2183->setFromField("position_changed");
ROUTE2183->setToNode("HudXform");
ROUTE2183->setToField("set_translation");
group->addChildren(*ROUTE2183);

CROUTE* ROUTE2184 = new CROUTE();
ROUTE2184->setFromNode("HudProx");
ROUTE2184->setFromField("orientation_changed");
ROUTE2184->setToNode("HudXform");
ROUTE2184->setToField("set_rotation");
group->addChildren(*ROUTE2184);

CROUTE* ROUTE2185 = new CROUTE();
ROUTE2185->setFromNode("Stand_Touch");
ROUTE2185->setFromField("touchTime");
ROUTE2185->setToNode("PitchTimer");
ROUTE2185->setToField("set_stopTime");
group->addChildren(*ROUTE2185);

CROUTE* ROUTE2186 = new CROUTE();
ROUTE2186->setFromNode("Stand_Touch");
ROUTE2186->setFromField("touchTime");
ROUTE2186->setToNode("YawTimer");
ROUTE2186->setToField("set_stopTime");
group->addChildren(*ROUTE2186);

CROUTE* ROUTE2187 = new CROUTE();
ROUTE2187->setFromNode("Stand_Touch");
ROUTE2187->setFromField("touchTime");
ROUTE2187->setToNode("RollTimer");
ROUTE2187->setToField("set_stopTime");
group->addChildren(*ROUTE2187);

CROUTE* ROUTE2188 = new CROUTE();
ROUTE2188->setFromNode("Stand_Touch");
ROUTE2188->setFromField("touchTime");
ROUTE2188->setToNode("WalkTimer");
ROUTE2188->setToField("set_stopTime");
group->addChildren(*ROUTE2188);

CROUTE* ROUTE2189 = new CROUTE();
ROUTE2189->setFromNode("Stand_Touch");
ROUTE2189->setFromField("touchTime");
ROUTE2189->setToNode("RunTimer");
ROUTE2189->setToField("set_stopTime");
group->addChildren(*ROUTE2189);

CROUTE* ROUTE2190 = new CROUTE();
ROUTE2190->setFromNode("Stand_Touch");
ROUTE2190->setFromField("touchTime");
ROUTE2190->setToNode("JumpTimer");
ROUTE2190->setToField("set_stopTime");
group->addChildren(*ROUTE2190);

CROUTE* ROUTE2191 = new CROUTE();
ROUTE2191->setFromNode("Stand_Touch");
ROUTE2191->setFromField("touchTime");
ROUTE2191->setToNode("KickTimer");
ROUTE2191->setToField("set_stopTime");
group->addChildren(*ROUTE2191);

CROUTE* ROUTE2192 = new CROUTE();
ROUTE2192->setFromNode("Stand_Touch");
ROUTE2192->setFromField("touchTime");
ROUTE2192->setToNode("StopTimer");
ROUTE2192->setToField("set_stopTime");
group->addChildren(*ROUTE2192);

CROUTE* ROUTE2193 = new CROUTE();
ROUTE2193->setFromNode("Stand_Touch");
ROUTE2193->setFromField("touchTime");
ROUTE2193->setToNode("StandTimer");
ROUTE2193->setToField("set_startTime");
group->addChildren(*ROUTE2193);

CROUTE* ROUTE2194 = new CROUTE();
ROUTE2194->setFromNode("Pitch_Touch");
ROUTE2194->setFromField("touchTime");
ROUTE2194->setToNode("StandTimer");
ROUTE2194->setToField("set_stopTime");
group->addChildren(*ROUTE2194);

CROUTE* ROUTE2195 = new CROUTE();
ROUTE2195->setFromNode("Pitch_Touch");
ROUTE2195->setFromField("touchTime");
ROUTE2195->setToNode("YawTimer");
ROUTE2195->setToField("set_stopTime");
group->addChildren(*ROUTE2195);

CROUTE* ROUTE2196 = new CROUTE();
ROUTE2196->setFromNode("Pitch_Touch");
ROUTE2196->setFromField("touchTime");
ROUTE2196->setToNode("RollTimer");
ROUTE2196->setToField("set_stopTime");
group->addChildren(*ROUTE2196);

CROUTE* ROUTE2197 = new CROUTE();
ROUTE2197->setFromNode("Pitch_Touch");
ROUTE2197->setFromField("touchTime");
ROUTE2197->setToNode("WalkTimer");
ROUTE2197->setToField("set_stopTime");
group->addChildren(*ROUTE2197);

CROUTE* ROUTE2198 = new CROUTE();
ROUTE2198->setFromNode("Pitch_Touch");
ROUTE2198->setFromField("touchTime");
ROUTE2198->setToNode("RunTimer");
ROUTE2198->setToField("set_stopTime");
group->addChildren(*ROUTE2198);

CROUTE* ROUTE2199 = new CROUTE();
ROUTE2199->setFromNode("Pitch_Touch");
ROUTE2199->setFromField("touchTime");
ROUTE2199->setToNode("JumpTimer");
ROUTE2199->setToField("set_stopTime");
group->addChildren(*ROUTE2199);

CROUTE* ROUTE2200 = new CROUTE();
ROUTE2200->setFromNode("Pitch_Touch");
ROUTE2200->setFromField("touchTime");
ROUTE2200->setToNode("KickTimer");
ROUTE2200->setToField("set_stopTime");
group->addChildren(*ROUTE2200);

CROUTE* ROUTE2201 = new CROUTE();
ROUTE2201->setFromNode("Pitch_Touch");
ROUTE2201->setFromField("touchTime");
ROUTE2201->setToNode("StopTimer");
ROUTE2201->setToField("set_stopTime");
group->addChildren(*ROUTE2201);

CROUTE* ROUTE2202 = new CROUTE();
ROUTE2202->setFromNode("Pitch_Touch");
ROUTE2202->setFromField("touchTime");
ROUTE2202->setToNode("PitchTimer");
ROUTE2202->setToField("set_startTime");
group->addChildren(*ROUTE2202);

CROUTE* ROUTE2203 = new CROUTE();
ROUTE2203->setFromNode("Yaw_Touch");
ROUTE2203->setFromField("touchTime");
ROUTE2203->setToNode("StandTimer");
ROUTE2203->setToField("set_stopTime");
group->addChildren(*ROUTE2203);

CROUTE* ROUTE2204 = new CROUTE();
ROUTE2204->setFromNode("Yaw_Touch");
ROUTE2204->setFromField("touchTime");
ROUTE2204->setToNode("PitchTimer");
ROUTE2204->setToField("set_stopTime");
group->addChildren(*ROUTE2204);

CROUTE* ROUTE2205 = new CROUTE();
ROUTE2205->setFromNode("Yaw_Touch");
ROUTE2205->setFromField("touchTime");
ROUTE2205->setToNode("RollTimer");
ROUTE2205->setToField("set_stopTime");
group->addChildren(*ROUTE2205);

CROUTE* ROUTE2206 = new CROUTE();
ROUTE2206->setFromNode("Yaw_Touch");
ROUTE2206->setFromField("touchTime");
ROUTE2206->setToNode("WalkTimer");
ROUTE2206->setToField("set_stopTime");
group->addChildren(*ROUTE2206);

CROUTE* ROUTE2207 = new CROUTE();
ROUTE2207->setFromNode("Yaw_Touch");
ROUTE2207->setFromField("touchTime");
ROUTE2207->setToNode("RunTimer");
ROUTE2207->setToField("set_stopTime");
group->addChildren(*ROUTE2207);

CROUTE* ROUTE2208 = new CROUTE();
ROUTE2208->setFromNode("Yaw_Touch");
ROUTE2208->setFromField("touchTime");
ROUTE2208->setToNode("JumpTimer");
ROUTE2208->setToField("set_stopTime");
group->addChildren(*ROUTE2208);

CROUTE* ROUTE2209 = new CROUTE();
ROUTE2209->setFromNode("Yaw_Touch");
ROUTE2209->setFromField("touchTime");
ROUTE2209->setToNode("KickTimer");
ROUTE2209->setToField("set_stopTime");
group->addChildren(*ROUTE2209);

CROUTE* ROUTE2210 = new CROUTE();
ROUTE2210->setFromNode("Yaw_Touch");
ROUTE2210->setFromField("touchTime");
ROUTE2210->setToNode("StopTimer");
ROUTE2210->setToField("set_stopTime");
group->addChildren(*ROUTE2210);

CROUTE* ROUTE2211 = new CROUTE();
ROUTE2211->setFromNode("Yaw_Touch");
ROUTE2211->setFromField("touchTime");
ROUTE2211->setToNode("YawTimer");
ROUTE2211->setToField("set_startTime");
group->addChildren(*ROUTE2211);

CROUTE* ROUTE2212 = new CROUTE();
ROUTE2212->setFromNode("Walk_Touch");
ROUTE2212->setFromField("touchTime");
ROUTE2212->setToNode("StandTimer");
ROUTE2212->setToField("set_stopTime");
group->addChildren(*ROUTE2212);

CROUTE* ROUTE2213 = new CROUTE();
ROUTE2213->setFromNode("Walk_Touch");
ROUTE2213->setFromField("touchTime");
ROUTE2213->setToNode("PitchTimer");
ROUTE2213->setToField("set_stopTime");
group->addChildren(*ROUTE2213);

CROUTE* ROUTE2214 = new CROUTE();
ROUTE2214->setFromNode("Walk_Touch");
ROUTE2214->setFromField("touchTime");
ROUTE2214->setToNode("YawTimer");
ROUTE2214->setToField("set_stopTime");
group->addChildren(*ROUTE2214);

CROUTE* ROUTE2215 = new CROUTE();
ROUTE2215->setFromNode("Walk_Touch");
ROUTE2215->setFromField("touchTime");
ROUTE2215->setToNode("RollTimer");
ROUTE2215->setToField("set_stopTime");
group->addChildren(*ROUTE2215);

CROUTE* ROUTE2216 = new CROUTE();
ROUTE2216->setFromNode("Walk_Touch");
ROUTE2216->setFromField("touchTime");
ROUTE2216->setToNode("RunTimer");
ROUTE2216->setToField("set_stopTime");
group->addChildren(*ROUTE2216);

CROUTE* ROUTE2217 = new CROUTE();
ROUTE2217->setFromNode("Walk_Touch");
ROUTE2217->setFromField("touchTime");
ROUTE2217->setToNode("JumpTimer");
ROUTE2217->setToField("set_stopTime");
group->addChildren(*ROUTE2217);

CROUTE* ROUTE2218 = new CROUTE();
ROUTE2218->setFromNode("Walk_Touch");
ROUTE2218->setFromField("touchTime");
ROUTE2218->setToNode("KickTimer");
ROUTE2218->setToField("set_stopTime");
group->addChildren(*ROUTE2218);

CROUTE* ROUTE2219 = new CROUTE();
ROUTE2219->setFromNode("Walk_Touch");
ROUTE2219->setFromField("touchTime");
ROUTE2219->setToNode("StopTimer");
ROUTE2219->setToField("set_stopTime");
group->addChildren(*ROUTE2219);

CROUTE* ROUTE2220 = new CROUTE();
ROUTE2220->setFromNode("Walk_Touch");
ROUTE2220->setFromField("touchTime");
ROUTE2220->setToNode("WalkTimer");
ROUTE2220->setToField("set_startTime");
group->addChildren(*ROUTE2220);

CROUTE* ROUTE2221 = new CROUTE();
ROUTE2221->setFromNode("Roll_Touch");
ROUTE2221->setFromField("touchTime");
ROUTE2221->setToNode("StandTimer");
ROUTE2221->setToField("set_stopTime");
group->addChildren(*ROUTE2221);

CROUTE* ROUTE2222 = new CROUTE();
ROUTE2222->setFromNode("Roll_Touch");
ROUTE2222->setFromField("touchTime");
ROUTE2222->setToNode("PitchTimer");
ROUTE2222->setToField("set_stopTime");
group->addChildren(*ROUTE2222);

CROUTE* ROUTE2223 = new CROUTE();
ROUTE2223->setFromNode("Roll_Touch");
ROUTE2223->setFromField("touchTime");
ROUTE2223->setToNode("YawTimer");
ROUTE2223->setToField("set_stopTime");
group->addChildren(*ROUTE2223);

CROUTE* ROUTE2224 = new CROUTE();
ROUTE2224->setFromNode("Roll_Touch");
ROUTE2224->setFromField("touchTime");
ROUTE2224->setToNode("WalkTimer");
ROUTE2224->setToField("set_stopTime");
group->addChildren(*ROUTE2224);

CROUTE* ROUTE2225 = new CROUTE();
ROUTE2225->setFromNode("Roll_Touch");
ROUTE2225->setFromField("touchTime");
ROUTE2225->setToNode("RunTimer");
ROUTE2225->setToField("set_stopTime");
group->addChildren(*ROUTE2225);

CROUTE* ROUTE2226 = new CROUTE();
ROUTE2226->setFromNode("Roll_Touch");
ROUTE2226->setFromField("touchTime");
ROUTE2226->setToNode("JumpTimer");
ROUTE2226->setToField("set_stopTime");
group->addChildren(*ROUTE2226);

CROUTE* ROUTE2227 = new CROUTE();
ROUTE2227->setFromNode("Roll_Touch");
ROUTE2227->setFromField("touchTime");
ROUTE2227->setToNode("KickTimer");
ROUTE2227->setToField("set_stopTime");
group->addChildren(*ROUTE2227);

CROUTE* ROUTE2228 = new CROUTE();
ROUTE2228->setFromNode("Roll_Touch");
ROUTE2228->setFromField("touchTime");
ROUTE2228->setToNode("StopTimer");
ROUTE2228->setToField("set_stopTime");
group->addChildren(*ROUTE2228);

CROUTE* ROUTE2229 = new CROUTE();
ROUTE2229->setFromNode("Roll_Touch");
ROUTE2229->setFromField("touchTime");
ROUTE2229->setToNode("RollTimer");
ROUTE2229->setToField("set_startTime");
group->addChildren(*ROUTE2229);

CROUTE* ROUTE2230 = new CROUTE();
ROUTE2230->setFromNode("Run_Touch");
ROUTE2230->setFromField("touchTime");
ROUTE2230->setToNode("StandTimer");
ROUTE2230->setToField("set_stopTime");
group->addChildren(*ROUTE2230);

CROUTE* ROUTE2231 = new CROUTE();
ROUTE2231->setFromNode("Run_Touch");
ROUTE2231->setFromField("touchTime");
ROUTE2231->setToNode("PitchTimer");
ROUTE2231->setToField("set_stopTime");
group->addChildren(*ROUTE2231);

CROUTE* ROUTE2232 = new CROUTE();
ROUTE2232->setFromNode("Run_Touch");
ROUTE2232->setFromField("touchTime");
ROUTE2232->setToNode("YawTimer");
ROUTE2232->setToField("set_stopTime");
group->addChildren(*ROUTE2232);

CROUTE* ROUTE2233 = new CROUTE();
ROUTE2233->setFromNode("Run_Touch");
ROUTE2233->setFromField("touchTime");
ROUTE2233->setToNode("RollTimer");
ROUTE2233->setToField("set_stopTime");
group->addChildren(*ROUTE2233);

CROUTE* ROUTE2234 = new CROUTE();
ROUTE2234->setFromNode("Run_Touch");
ROUTE2234->setFromField("touchTime");
ROUTE2234->setToNode("WalkTimer");
ROUTE2234->setToField("set_stopTime");
group->addChildren(*ROUTE2234);

CROUTE* ROUTE2235 = new CROUTE();
ROUTE2235->setFromNode("Run_Touch");
ROUTE2235->setFromField("touchTime");
ROUTE2235->setToNode("JumpTimer");
ROUTE2235->setToField("set_stopTime");
group->addChildren(*ROUTE2235);

CROUTE* ROUTE2236 = new CROUTE();
ROUTE2236->setFromNode("Run_Touch");
ROUTE2236->setFromField("touchTime");
ROUTE2236->setToNode("KickTimer");
ROUTE2236->setToField("set_stopTime");
group->addChildren(*ROUTE2236);

CROUTE* ROUTE2237 = new CROUTE();
ROUTE2237->setFromNode("Run_Touch");
ROUTE2237->setFromField("touchTime");
ROUTE2237->setToNode("StopTimer");
ROUTE2237->setToField("set_stopTime");
group->addChildren(*ROUTE2237);

CROUTE* ROUTE2238 = new CROUTE();
ROUTE2238->setFromNode("Run_Touch");
ROUTE2238->setFromField("touchTime");
ROUTE2238->setToNode("RunTimer");
ROUTE2238->setToField("set_startTime");
group->addChildren(*ROUTE2238);

CROUTE* ROUTE2239 = new CROUTE();
ROUTE2239->setFromNode("Jump_Touch");
ROUTE2239->setFromField("touchTime");
ROUTE2239->setToNode("StandTimer");
ROUTE2239->setToField("set_stopTime");
group->addChildren(*ROUTE2239);

CROUTE* ROUTE2240 = new CROUTE();
ROUTE2240->setFromNode("Jump_Touch");
ROUTE2240->setFromField("touchTime");
ROUTE2240->setToNode("PitchTimer");
ROUTE2240->setToField("set_stopTime");
group->addChildren(*ROUTE2240);

CROUTE* ROUTE2241 = new CROUTE();
ROUTE2241->setFromNode("Jump_Touch");
ROUTE2241->setFromField("touchTime");
ROUTE2241->setToNode("YawTimer");
ROUTE2241->setToField("set_stopTime");
group->addChildren(*ROUTE2241);

CROUTE* ROUTE2242 = new CROUTE();
ROUTE2242->setFromNode("Jump_Touch");
ROUTE2242->setFromField("touchTime");
ROUTE2242->setToNode("RollTimer");
ROUTE2242->setToField("set_stopTime");
group->addChildren(*ROUTE2242);

CROUTE* ROUTE2243 = new CROUTE();
ROUTE2243->setFromNode("Jump_Touch");
ROUTE2243->setFromField("touchTime");
ROUTE2243->setToNode("WalkTimer");
ROUTE2243->setToField("set_stopTime");
group->addChildren(*ROUTE2243);

CROUTE* ROUTE2244 = new CROUTE();
ROUTE2244->setFromNode("Jump_Touch");
ROUTE2244->setFromField("touchTime");
ROUTE2244->setToNode("RunTimer");
ROUTE2244->setToField("set_stopTime");
group->addChildren(*ROUTE2244);

CROUTE* ROUTE2245 = new CROUTE();
ROUTE2245->setFromNode("Jump_Touch");
ROUTE2245->setFromField("touchTime");
ROUTE2245->setToNode("KickTimer");
ROUTE2245->setToField("set_stopTime");
group->addChildren(*ROUTE2245);

CROUTE* ROUTE2246 = new CROUTE();
ROUTE2246->setFromNode("Jump_Touch");
ROUTE2246->setFromField("touchTime");
ROUTE2246->setToNode("StopTimer");
ROUTE2246->setToField("set_stopTime");
group->addChildren(*ROUTE2246);

CROUTE* ROUTE2247 = new CROUTE();
ROUTE2247->setFromNode("Jump_Touch");
ROUTE2247->setFromField("touchTime");
ROUTE2247->setToNode("JumpTimer");
ROUTE2247->setToField("set_startTime");
group->addChildren(*ROUTE2247);

CROUTE* ROUTE2248 = new CROUTE();
ROUTE2248->setFromNode("Kick_Touch");
ROUTE2248->setFromField("touchTime");
ROUTE2248->setToNode("StandTimer");
ROUTE2248->setToField("set_stopTime");
group->addChildren(*ROUTE2248);

CROUTE* ROUTE2249 = new CROUTE();
ROUTE2249->setFromNode("Kick_Touch");
ROUTE2249->setFromField("touchTime");
ROUTE2249->setToNode("PitchTimer");
ROUTE2249->setToField("set_stopTime");
group->addChildren(*ROUTE2249);

CROUTE* ROUTE2250 = new CROUTE();
ROUTE2250->setFromNode("Kick_Touch");
ROUTE2250->setFromField("touchTime");
ROUTE2250->setToNode("YawTimer");
ROUTE2250->setToField("set_stopTime");
group->addChildren(*ROUTE2250);

CROUTE* ROUTE2251 = new CROUTE();
ROUTE2251->setFromNode("Kick_Touch");
ROUTE2251->setFromField("touchTime");
ROUTE2251->setToNode("RollTimer");
ROUTE2251->setToField("set_stopTime");
group->addChildren(*ROUTE2251);

CROUTE* ROUTE2252 = new CROUTE();
ROUTE2252->setFromNode("Kick_Touch");
ROUTE2252->setFromField("touchTime");
ROUTE2252->setToNode("WalkTimer");
ROUTE2252->setToField("set_stopTime");
group->addChildren(*ROUTE2252);

CROUTE* ROUTE2253 = new CROUTE();
ROUTE2253->setFromNode("Kick_Touch");
ROUTE2253->setFromField("touchTime");
ROUTE2253->setToNode("RunTimer");
ROUTE2253->setToField("set_stopTime");
group->addChildren(*ROUTE2253);

CROUTE* ROUTE2254 = new CROUTE();
ROUTE2254->setFromNode("Kick_Touch");
ROUTE2254->setFromField("touchTime");
ROUTE2254->setToNode("JumpTimer");
ROUTE2254->setToField("set_stopTime");
group->addChildren(*ROUTE2254);

CROUTE* ROUTE2255 = new CROUTE();
ROUTE2255->setFromNode("Kick_Touch");
ROUTE2255->setFromField("touchTime");
ROUTE2255->setToNode("StopTimer");
ROUTE2255->setToField("set_stopTime");
group->addChildren(*ROUTE2255);

CROUTE* ROUTE2256 = new CROUTE();
ROUTE2256->setFromNode("Kick_Touch");
ROUTE2256->setFromField("touchTime");
ROUTE2256->setToNode("KickTimer");
ROUTE2256->setToField("set_startTime");
group->addChildren(*ROUTE2256);

CROUTE* ROUTE2257 = new CROUTE();
ROUTE2257->setFromNode("Stop_Touch");
ROUTE2257->setFromField("touchTime");
ROUTE2257->setToNode("StandTimer");
ROUTE2257->setToField("set_stopTime");
group->addChildren(*ROUTE2257);

CROUTE* ROUTE2258 = new CROUTE();
ROUTE2258->setFromNode("Stop_Touch");
ROUTE2258->setFromField("touchTime");
ROUTE2258->setToNode("PitchTimer");
ROUTE2258->setToField("set_stopTime");
group->addChildren(*ROUTE2258);

CROUTE* ROUTE2259 = new CROUTE();
ROUTE2259->setFromNode("Stop_Touch");
ROUTE2259->setFromField("touchTime");
ROUTE2259->setToNode("YawTimer");
ROUTE2259->setToField("set_stopTime");
group->addChildren(*ROUTE2259);

CROUTE* ROUTE2260 = new CROUTE();
ROUTE2260->setFromNode("Stop_Touch");
ROUTE2260->setFromField("touchTime");
ROUTE2260->setToNode("RollTimer");
ROUTE2260->setToField("set_stopTime");
group->addChildren(*ROUTE2260);

CROUTE* ROUTE2261 = new CROUTE();
ROUTE2261->setFromNode("Stop_Touch");
ROUTE2261->setFromField("touchTime");
ROUTE2261->setToNode("WalkTimer");
ROUTE2261->setToField("set_stopTime");
group->addChildren(*ROUTE2261);

CROUTE* ROUTE2262 = new CROUTE();
ROUTE2262->setFromNode("Stop_Touch");
ROUTE2262->setFromField("touchTime");
ROUTE2262->setToNode("RunTimer");
ROUTE2262->setToField("set_stopTime");
group->addChildren(*ROUTE2262);

CROUTE* ROUTE2263 = new CROUTE();
ROUTE2263->setFromNode("Stop_Touch");
ROUTE2263->setFromField("touchTime");
ROUTE2263->setToNode("JumpTimer");
ROUTE2263->setToField("set_stopTime");
group->addChildren(*ROUTE2263);

CROUTE* ROUTE2264 = new CROUTE();
ROUTE2264->setFromNode("Stop_Touch");
ROUTE2264->setFromField("touchTime");
ROUTE2264->setToNode("KickTimer");
ROUTE2264->setToField("set_stopTime");
group->addChildren(*ROUTE2264);

CROUTE* ROUTE2265 = new CROUTE();
ROUTE2265->setFromNode("Stop_Touch");
ROUTE2265->setFromField("touchTime");
ROUTE2265->setToNode("StopTimer");
ROUTE2265->setToField("set_startTime");
group->addChildren(*ROUTE2265);

X3D0->setScene(*Scene11);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
