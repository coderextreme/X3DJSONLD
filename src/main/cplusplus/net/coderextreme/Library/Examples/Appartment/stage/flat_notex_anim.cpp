/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "/c/x3d-code/www.web3d.org/x3d/languages/cpp/X3DLib/X3DLib.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Full");
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("comment");
meta2->setContent("World of Titania");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("created");
meta3->setContent("Wed, 26 Aug 2015 12:17:05 GMT");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Holger Seelig");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("generator");
meta5->setContent("Titania V0.7.8, http://titania.create3000.de");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("Wed, 26 Aug 2015 12:17:05 GMT");
head1->addMeta(*meta6);

X3D0->setHead(*head1);

CScene* Scene7 = new CScene();
CWorldInfo* WorldInfo8 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo8->setInfo(new CString[2]{", ","Created in TitaniaPackaged by CosmoPackage"}, 2);
group->addChildren(*WorldInfo8);

CTransform* Transform9 = (CTransform *)(m_pScene.createNode("Transform"));
Transform9->setDEF("wohnung");
CTransform* Transform10 = (CTransform *)(m_pScene.createNode("Transform"));
Transform10->setDEF("floor_1");
CCollision* Collision11 = (CCollision *)(m_pScene.createNode("Collision"));
Collision11->setEnabled(False);
CTransform* Transform12 = (CTransform *)(m_pScene.createNode("Transform"));
Transform12->setDEF("text");
CTransform* Transform13 = (CTransform *)(m_pScene.createNode("Transform"));
Transform13->setDEF("txt-flur");
Transform13->setTranslation(new float[3]{-2.30927,-1.38851,-0.672463});
Transform13->setRotation(new float[4]{-1,0,0,1.5708});
Transform13->setScale(new float[3]{0.0338453,0.0338453,0.0338453});
CShape* Shape14 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance15 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material16 = (CMaterial *)(m_pScene.createNode("Material"));
Material16->setAmbientIntensity(0);
Material16->setDiffuseColor(new float[3]{0,0,0});
Appearance15->setMaterial(*Material16);

Shape14->setAppearance(*Appearance15);

CText* Text17 = (CText *)(m_pScene.createNode("Text"));
Text17->setString(new CString[2]{", ","FLUR5,2 qm"}, 2);
Text17->setLength(new float[1]{0}, 1);
CFontStyle* FontStyle18 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle18->setFamily(new CString[1]{"SANS"}, 1);
FontStyle18->setSize(24);
Text17->setFontStyle(*FontStyle18);

Shape14->setGeometry(Text17);

Transform13->addChildren(*Shape14);

Transform12->addChildren(*Transform13);

CTransform* Transform19 = (CTransform *)(m_pScene.createNode("Transform"));
Transform19->setDEF("txt-bad");
Transform19->setTranslation(new float[3]{-7.23306,-1.38851,-0.672463});
Transform19->setRotation(new float[4]{-1,0,0,1.5708});
Transform19->setScale(new float[3]{0.0338453,0.0338453,0.0338453});
CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance21 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material22 = (CMaterial *)(m_pScene.createNode("Material"));
Material22->setAmbientIntensity(0);
Material22->setDiffuseColor(new float[3]{0,0,0});
Appearance21->setMaterial(*Material22);

Shape20->setAppearance(*Appearance21);

CText* Text23 = (CText *)(m_pScene.createNode("Text"));
Text23->setString(new CString[2]{", ","BAD7 qm"}, 2);
Text23->setLength(new float[1]{0}, 1);
CFontStyle* FontStyle24 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle24->setFamily(new CString[1]{"SANS"}, 1);
FontStyle24->setSize(24);
Text23->setFontStyle(*FontStyle24);

Shape20->setGeometry(Text23);

Transform19->addChildren(*Shape20);

Transform12->addChildren(*Transform19);

CTransform* Transform25 = (CTransform *)(m_pScene.createNode("Transform"));
Transform25->setDEF("txt-schlafen");
Transform25->setTranslation(new float[3]{-5.03582,-1.38851,3.32777});
Transform25->setRotation(new float[4]{-1,0,0,1.5708});
Transform25->setScale(new float[3]{0.0338453,0.0338453,0.0338453});
CShape* Shape26 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance27 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material28 = (CMaterial *)(m_pScene.createNode("Material"));
Material28->setAmbientIntensity(0);
Material28->setDiffuseColor(new float[3]{0,0,0});
Appearance27->setMaterial(*Material28);

Shape26->setAppearance(*Appearance27);

CText* Text29 = (CText *)(m_pScene.createNode("Text"));
Text29->setString(new CString[2]{", ","SCHLAFEN14 qm"}, 2);
Text29->setLength(new float[1]{0}, 1);
CFontStyle* FontStyle30 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle30->setFamily(new CString[1]{"SANS"}, 1);
FontStyle30->setSize(24);
FontStyle30->setJustify(new CString[1]{"MIDDLE"}, 1);
Text29->setFontStyle(*FontStyle30);

Shape26->setGeometry(Text29);

Transform25->addChildren(*Shape26);

Transform12->addChildren(*Transform25);

CTransform* Transform31 = (CTransform *)(m_pScene.createNode("Transform"));
Transform31->setDEF("txt-wohnen");
Transform31->setTranslation(new float[3]{0.830791,-1.38851,3.17479});
Transform31->setRotation(new float[4]{-1,0,0,1.5708});
Transform31->setScale(new float[3]{0.0338453,0.0338453,0.0338453});
CShape* Shape32 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance33 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material34 = (CMaterial *)(m_pScene.createNode("Material"));
Material34->setAmbientIntensity(0);
Material34->setDiffuseColor(new float[3]{0,0,0});
Appearance33->setMaterial(*Material34);

Shape32->setAppearance(*Appearance33);

CText* Text35 = (CText *)(m_pScene.createNode("Text"));
Text35->setString(new CString[2]{", ","WOHNEN19,5 qm"}, 2);
Text35->setLength(new float[1]{0}, 1);
CFontStyle* FontStyle36 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle36->setFamily(new CString[1]{"SANS"}, 1);
FontStyle36->setSize(24);
Text35->setFontStyle(*FontStyle36);

Shape32->setGeometry(Text35);

Transform31->addChildren(*Shape32);

Transform12->addChildren(*Transform31);

Collision11->setProxy(*Transform12);

CTransform* Transform37 = (CTransform *)(m_pScene.createNode("Transform"));
Transform37->setDEF("floor");
CTransform* Transform38 = (CTransform *)(m_pScene.createNode("Transform"));
Transform38->setTranslation(new float[3]{-1.32382,-2.95784,-0.616061});
Transform38->setRotation(new float[4]{0,1,0,3.14159});
Transform38->setScale(new float[3]{2.2153,1.41953,1.76419});
CShape* Shape39 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance40 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material41 = (CMaterial *)(m_pScene.createNode("Material"));
Material41->setAmbientIntensity(0.250001);
Material41->setDiffuseColor(new float[3]{0.845242,0.805714,0.544078});
Material41->setShininess(0.078125);
Appearance40->setMaterial(*Material41);

Shape39->setAppearance(*Appearance40);

CIndexedFaceSet* IndexedFaceSet42 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet42->setSolid(False);
IndexedFaceSet42->setCreaseAngle(0.5);
IndexedFaceSet42->setCoordIndex(new int[5]{0,1,2,3,-1});
CCoordinate* Coordinate43 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate43->setPoint(new float[12]{-1,1,-1,-1,1,1,1,1,1,1,1,-1});
IndexedFaceSet42->setCoord(*Coordinate43);

Shape39->setGeometry(IndexedFaceSet42);

Transform38->addChildren(*Shape39);

Transform37->addChildren(*Transform38);

CTransform* Transform44 = (CTransform *)(m_pScene.createNode("Transform"));
Transform44->setTranslation(new float[3]{-6.18752,-2.95784,-0.616061});
Transform44->setRotation(new float[4]{0,1,0,3.14159});
Transform44->setScale(new float[3]{2.62836,1.41953,1.76419});
CShape* Shape45 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance46 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material47 = (CMaterial *)(m_pScene.createNode("Material"));
Material47->setAmbientIntensity(0.250001);
Material47->setDiffuseColor(new float[3]{0.434977,0.456711,0.845242});
Material47->setShininess(0.078125);
Appearance46->setMaterial(*Material47);

Shape45->setAppearance(*Appearance46);

CIndexedFaceSet* IndexedFaceSet48 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet48->setSolid(False);
IndexedFaceSet48->setCreaseAngle(0.5);
IndexedFaceSet48->setCoordIndex(new int[5]{0,1,2,3,-1});
CCoordinate* Coordinate49 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate49->setPoint(new float[12]{-1,1,-1,-1,1,1,1,1,1,1,1,-1});
IndexedFaceSet48->setCoord(*Coordinate49);

Shape45->setGeometry(IndexedFaceSet48);

Transform44->addChildren(*Shape45);

Transform37->addChildren(*Transform44);

CTransform* Transform50 = (CTransform *)(m_pScene.createNode("Transform"));
Transform50->setTranslation(new float[3]{-4.79598,-2.95784,3.3361});
Transform50->setRotation(new float[4]{0,1,0,3.14159});
Transform50->setScale(new float[3]{4.18476,1.41953,2.17788});
CShape* Shape51 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance52 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material53 = (CMaterial *)(m_pScene.createNode("Material"));
Material53->setAmbientIntensity(0.250001);
Material53->setDiffuseColor(new float[3]{0.607151,0.845242,0.621794});
Material53->setShininess(0.078125);
Appearance52->setMaterial(*Material53);

Shape51->setAppearance(*Appearance52);

CIndexedFaceSet* IndexedFaceSet54 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet54->setSolid(False);
IndexedFaceSet54->setCreaseAngle(0.5);
IndexedFaceSet54->setCoordIndex(new int[5]{0,1,2,3,-1});
CCoordinate* Coordinate55 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate55->setPoint(new float[12]{-1,1,-1,-1,1,1,1,1,1,1,1,-1});
IndexedFaceSet54->setCoord(*Coordinate55);

Shape51->setGeometry(IndexedFaceSet54);

Transform50->addChildren(*Shape51);

Transform37->addChildren(*Transform50);

CTransform* Transform56 = (CTransform *)(m_pScene.createNode("Transform"));
Transform56->setTranslation(new float[3]{2.43648,-2.95784,1.56487});
Transform56->setRotation(new float[4]{0,1,0,3.14159});
Transform56->setScale(new float[3]{2.93924,1.41953,3.94911});
CShape* Shape57 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance58 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material59 = (CMaterial *)(m_pScene.createNode("Material"));
Material59->setAmbientIntensity(0.250001);
Material59->setDiffuseColor(new float[3]{0.845242,0.402292,0.339054});
Material59->setShininess(0.078125);
Appearance58->setMaterial(*Material59);

Shape57->setAppearance(*Appearance58);

CIndexedFaceSet* IndexedFaceSet60 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet60->setSolid(False);
IndexedFaceSet60->setCreaseAngle(0.5);
IndexedFaceSet60->setCoordIndex(new int[11]{0,1,3,5,4,-1,6,2,4,5,-1});
CCoordinate* Coordinate61 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate61->setPoint(new float[21]{-1,1,-1,-1,1,1,1,1,-1,0.527074,1,1,0.474142,1,-1,0.527074,1,0.113149,1,1,0.113149});
IndexedFaceSet60->setCoord(*Coordinate61);

Shape57->setGeometry(IndexedFaceSet60);

Transform56->addChildren(*Shape57);

Transform37->addChildren(*Transform56);

Collision11->setProxy(*Transform37);

Transform10->addChildren(*Collision11);

Transform9->addChildren(*Transform10);

CTransform* Transform62 = (CTransform *)(m_pScene.createNode("Transform"));
Transform62->setDEF("walls_1");
CCollision* Collision63 = (CCollision *)(m_pScene.createNode("Collision"));
CTransform* Transform64 = (CTransform *)(m_pScene.createNode("Transform"));
Transform64->setDEF("all_wall");
Transform64->setCenter(new float[3]{-1.73584,0.294882,1.59514});
CTransform* Transform65 = (CTransform *)(m_pScene.createNode("Transform"));
Transform65->setDEF("door1_1");
Transform65->setTranslation(new float[3]{2.07972,-0.00410406,2.66504});
Transform65->setRotation(new float[4]{-0.000506469,1,0.000731444,4.71238});
Transform65->setScale(new float[3]{1,0.999999,1});
Transform65->setScaleOrientation(new float[4]{0.000900465,1,-0.000253043,0.484042});
CTransform* Transform66 = (CTransform *)(m_pScene.createNode("Transform"));
Transform66->setDEF("_1");
Transform66->setTranslation(new float[3]{-0.00000524521,8.9407e-8,4.76837e-7});
Transform66->setScale(new float[3]{0.999996,0.999999,0.999996});
Transform66->setCenter(new float[3]{-1.7764,-0.14077,1.18667});
CGroup* Group67 = (CGroup *)(m_pScene.createNode("Group"));
CGroup* Group68 = (CGroup *)(m_pScene.createNode("Group"));
Group68->setDEF("door_1");
CTimeSensor* TimeSensor69 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor69->setDEF("Time_1");
TimeSensor69->setCycleInterval(10);
TimeSensor69->setStopTime(1);
Group68->addChildren(*TimeSensor69);

Group67->addChildren(*Group68);

COrientationInterpolator* OrientationInterpolator70 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator70->setDEF("UnnamedTransformRotationInterp_1");
OrientationInterpolator70->setKey(new float[40]{0,0.03999,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.79999,0.8,0.810526,0.821053,0.831579,0.842105,0.852632,0.863158,0.873684,0.88421,0.894737,0.905263,0.915789,0.926316,0.936842,0.947368,0.957895,0.968421,0.978947,0.989473,1}, 40);
OrientationInterpolator70->setKeyValue(new float[160]{0,0,1,0,0,0,1,0,0,0,1,0,0,1,0,0.00516748,0,1,0,0.0206816,0,1,0,0.0465238,0,1,0,0.0827116,0,1,0,0.129237,0,1,0,0.186102,0,1,0,0.253305,0,1,0,0.330847,0,1,0,0.418729,0,1,0,0.516949,0,1,0,0.625509,0,1,0,0.744407,0,1,0,0.873644,0,1,0,1.01322,0,1,0,1.16314,0,1,0,1.32339,0,1,0,1.32339,0,1,0,1.32339,0,1,0,1.28326,0,1,0,1.23329,0,1,0,1.17463,0,1,0,1.10845,0,1,0,1.03591,0,1,0,0.958151,0,1,0,0.876344,0,1,0,0.791643,0,1,0,0.705205,0,1,0,0.618188,0,1,0,0.53175,0,1,0,0.447048,0,1,0,0.365241,0,1,0,0.287486,0,1,0,0.214938,0,1,0,0.148761,0,1,0,0.0901058,0,1,0,0.0401349,0,0,1,0});
Group67->addChildren(*OrientationInterpolator70);

COrientationInterpolator* OrientationInterpolator71 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator71->setDEF("UnnamedShapeRotationInterp_1");
OrientationInterpolator71->setKey(new float[11]{0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1}, 11);
OrientationInterpolator71->setKeyValue(new float[44]{0.587158,0.572384,-0.572383,4.20344,0.651261,0.536592,-0.53659,4.29612,0.744319,0.472224,-0.472222,4.42131,0.823656,0.400995,-0.400991,4.5196,-0.855674,-0.36594,0.365936,1.72603,0.880845,0.33475,-0.334746,4.58586,0.880845,0.33475,-0.334746,4.58586,0.855674,0.36594,-0.365936,4.55716,0.801111,0.423216,-0.423213,4.49243,0.712063,0.496472,-0.49647,4.37915,0.587158,0.572384,-0.572383,4.20344});
Group67->addChildren(*OrientationInterpolator71);

Transform66->addChildren(*Group67);

CTouchSensor* TouchSensor72 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor72->setDEF("Touch_1");
Transform66->addChildren(*TouchSensor72);

CTransform* Transform73 = (CTransform *)(m_pScene.createNode("Transform"));
Transform73->setTranslation(new float[3]{-2.92858,-0.102524,1.18925});
Transform73->setRotation(new float[4]{-1,-0.00000127148,-0.00000127148,1.5708});
Transform73->setScale(new float[3]{1,0.710133,4.03724});
CShape* Shape74 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance75 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material76 = (CMaterial *)(m_pScene.createNode("Material"));
Material76->setDEF("_2");
Appearance75->setMaterial(*Material76);

Shape74->setAppearance(*Appearance75);

CBox* Box77 = (CBox *)(m_pScene.createNode("Box"));
Box77->setSize(new float[3]{0.107213,0.107213,0.107213});
Shape74->setGeometry(Box77);

Transform73->addChildren(*Shape74);

Transform66->addChildren(*Transform73);

CTransform* Transform78 = (CTransform *)(m_pScene.createNode("Transform"));
Transform78->setDEF("_3");
Transform78->setTranslation(new float[3]{-2.90656,0.031126,1.143});
Transform78->setRotation(new float[4]{0.587158,0.572384,-0.572383,4.20344});
Transform78->setScale(new float[3]{0.439526,1.10631,2.58222});
Transform78->setCenter(new float[3]{-0.00176429,-9.15137e-8,0.0436697});
CShape* Shape79 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance80 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material81 = (CMaterial *)(m_pScene.createNode("Material"));
Material81->setUSE("_2");
Appearance80->setMaterial(*Material81);

Shape79->setAppearance(*Appearance80);

CBox* Box82 = (CBox *)(m_pScene.createNode("Box"));
Box82->setSize(new float[3]{0.107213,0.107213,0.107213});
Shape79->setGeometry(Box82);

Transform78->addChildren(*Shape79);

Transform66->addChildren(*Transform78);

CTransform* Transform83 = (CTransform *)(m_pScene.createNode("Transform"));
Transform83->setTranslation(new float[3]{-1.6882,-0.144074,1.18658});
Transform83->setRotation(new float[4]{0,1,0,3.14159});
Transform83->setScale(new float[3]{7.20902,15.5332,0.230572});
Transform83->setCenter(new float[3]{-0.0896799,0.000412353,5.7768e-7});
CShape* Shape84 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance85 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material86 = (CMaterial *)(m_pScene.createNode("Material"));
Material86->setAmbientIntensity(0.691489);
Material86->setDiffuseColor(new float[3]{0.8,0.677123,0.512228});
Appearance85->setMaterial(*Material86);

Shape84->setAppearance(*Appearance85);

CBox* Box87 = (CBox *)(m_pScene.createNode("Box"));
Box87->setSize(new float[3]{0.178747,0.178746,0.178745});
Shape84->setGeometry(Box87);

Transform83->addChildren(*Shape84);

Transform66->addChildren(*Transform83);

Transform65->addChildren(*Transform66);

CTransform* Transform88 = (CTransform *)(m_pScene.createNode("Transform"));
Transform88->setTranslation(new float[3]{-3.11431,-0.0888075,1.10913});
Transform88->setRotation(new float[4]{0,1,0,3.14159});
Transform88->setScale(new float[3]{0.631108,16.2186,1.23267});
CShape* Shape89 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance90 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material91 = (CMaterial *)(m_pScene.createNode("Material"));
Material91->setDEF("_4");
Material91->setAmbientIntensity(0.376344);
Material91->setDiffuseColor(new float[3]{0.989362,0.989362,0.989362});
Appearance90->setMaterial(*Material91);

Shape89->setAppearance(*Appearance90);

CBox* Box92 = (CBox *)(m_pScene.createNode("Box"));
Box92->setSize(new float[3]{0.178747,0.178746,0.178745});
Shape89->setGeometry(Box92);

Transform88->addChildren(*Shape89);

Transform65->addChildren(*Transform88);

CTransform* Transform93 = (CTransform *)(m_pScene.createNode("Transform"));
Transform93->setTranslation(new float[3]{-2.43024,1.30279,1.10765});
Transform93->setRotation(new float[4]{0.707107,-0.707107,-0.000434577,3.14247});
Transform93->setScale(new float[3]{0.631108,7.89331,1.23267});
CShape* Shape94 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance95 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material96 = (CMaterial *)(m_pScene.createNode("Material"));
Material96->setUSE("_4");
Appearance95->setMaterial(*Material96);

Shape94->setAppearance(*Appearance95);

CBox* Box97 = (CBox *)(m_pScene.createNode("Box"));
Box97->setSize(new float[3]{0.178747,0.178746,0.178745});
Shape94->setGeometry(Box97);

Transform93->addChildren(*Shape94);

Transform65->addChildren(*Transform93);

CTransform* Transform98 = (CTransform *)(m_pScene.createNode("Transform"));
Transform98->setTranslation(new float[3]{-1.70971,-0.0888075,1.10913});
Transform98->setRotation(new float[4]{0,1,0,3.14159});
Transform98->setScale(new float[3]{0.631108,16.2186,1.23267});
CShape* Shape99 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance100 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material101 = (CMaterial *)(m_pScene.createNode("Material"));
Material101->setUSE("_4");
Appearance100->setMaterial(*Material101);

Shape99->setAppearance(*Appearance100);

CBox* Box102 = (CBox *)(m_pScene.createNode("Box"));
Box102->setSize(new float[3]{0.178747,0.178746,0.178745});
Shape99->setGeometry(Box102);

Transform98->addChildren(*Shape99);

Transform65->addChildren(*Transform98);

Transform64->addChildren(*Transform65);

CTransform* Transform103 = (CTransform *)(m_pScene.createNode("Transform"));
Transform103->setDEF("door1");
CTransform* Transform104 = (CTransform *)(m_pScene.createNode("Transform"));
Transform104->setDEF("_5");
Transform104->setTranslation(new float[3]{-0.00000524521,8.9407e-8,4.76837e-7});
Transform104->setScale(new float[3]{0.999996,0.999999,0.999996});
Transform104->setCenter(new float[3]{-1.7764,-0.14077,1.18667});
CGroup* Group105 = (CGroup *)(m_pScene.createNode("Group"));
CGroup* Group106 = (CGroup *)(m_pScene.createNode("Group"));
Group106->setDEF("door");
CTimeSensor* TimeSensor107 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor107->setDEF("Time_2");
TimeSensor107->setCycleInterval(10);
TimeSensor107->setStopTime(1);
Group106->addChildren(*TimeSensor107);

Group105->addChildren(*Group106);

COrientationInterpolator* OrientationInterpolator108 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator108->setDEF("UnnamedTransformRotationInterp_2");
OrientationInterpolator108->setKey(new float[40]{0,0.03999,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.79999,0.8,0.810526,0.821053,0.831579,0.842105,0.852632,0.863158,0.873684,0.88421,0.894737,0.905263,0.915789,0.926316,0.936842,0.947368,0.957895,0.968421,0.978947,0.989473,1}, 40);
OrientationInterpolator108->setKeyValue(new float[160]{0,0,1,0,0,0,1,0,0,0,1,0,0,1,0,0.00516748,0,1,0,0.0206816,0,1,0,0.0465238,0,1,0,0.0827116,0,1,0,0.129237,0,1,0,0.186102,0,1,0,0.253305,0,1,0,0.330847,0,1,0,0.418729,0,1,0,0.516949,0,1,0,0.625509,0,1,0,0.744407,0,1,0,0.873644,0,1,0,1.01322,0,1,0,1.16314,0,1,0,1.32339,0,1,0,1.32339,0,1,0,1.32339,0,1,0,1.28326,0,1,0,1.23329,0,1,0,1.17463,0,1,0,1.10845,0,1,0,1.03591,0,1,0,0.958151,0,1,0,0.876344,0,1,0,0.791643,0,1,0,0.705205,0,1,0,0.618188,0,1,0,0.53175,0,1,0,0.447048,0,1,0,0.365241,0,1,0,0.287486,0,1,0,0.214938,0,1,0,0.148761,0,1,0,0.0901058,0,1,0,0.0401349,0,0,1,0});
Group105->addChildren(*OrientationInterpolator108);

COrientationInterpolator* OrientationInterpolator109 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator109->setDEF("UnnamedShapeRotationInterp_2");
OrientationInterpolator109->setKey(new float[11]{0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1}, 11);
OrientationInterpolator109->setKeyValue(new float[44]{0.587158,0.572384,-0.572383,4.20344,0.651261,0.536592,-0.53659,4.29612,0.744319,0.472224,-0.472222,4.42131,0.823656,0.400995,-0.400991,4.5196,-0.855674,-0.36594,0.365936,1.72603,0.880845,0.33475,-0.334746,4.58586,0.880845,0.33475,-0.334746,4.58586,0.855674,0.36594,-0.365936,4.55716,0.801111,0.423216,-0.423213,4.49243,0.712063,0.496472,-0.49647,4.37915,0.587158,0.572384,-0.572383,4.20344});
Group105->addChildren(*OrientationInterpolator109);

Transform104->addChildren(*Group105);

CTouchSensor* TouchSensor110 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor110->setDEF("Touch_2");
Transform104->addChildren(*TouchSensor110);

CTransform* Transform111 = (CTransform *)(m_pScene.createNode("Transform"));
Transform111->setTranslation(new float[3]{-2.92858,-0.102524,1.18925});
Transform111->setRotation(new float[4]{-1,-0.00000127148,-0.00000127148,1.5708});
Transform111->setScale(new float[3]{1,0.710133,4.03724});
CShape* Shape112 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance113 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material114 = (CMaterial *)(m_pScene.createNode("Material"));
Material114->setDEF("_6");
Material114->setAmbientIntensity(0.16172);
Material114->setDiffuseColor(new float[3]{0.989362,0.989362,0.989362});
Appearance113->setMaterial(*Material114);

Shape112->setAppearance(*Appearance113);

CBox* Box115 = (CBox *)(m_pScene.createNode("Box"));
Box115->setSize(new float[3]{0.107213,0.107213,0.107213});
Shape112->setGeometry(Box115);

Transform111->addChildren(*Shape112);

Transform104->addChildren(*Transform111);

CTransform* Transform116 = (CTransform *)(m_pScene.createNode("Transform"));
Transform116->setDEF("_7");
Transform116->setTranslation(new float[3]{-2.90656,0.031126,1.143});
Transform116->setRotation(new float[4]{0.587158,0.572384,-0.572383,4.20344});
Transform116->setScale(new float[3]{0.439526,1.10631,2.58222});
Transform116->setCenter(new float[3]{-0.00176429,-9.15137e-8,0.0436697});
CShape* Shape117 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance118 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material119 = (CMaterial *)(m_pScene.createNode("Material"));
Material119->setUSE("_6");
Appearance118->setMaterial(*Material119);

Shape117->setAppearance(*Appearance118);

CBox* Box120 = (CBox *)(m_pScene.createNode("Box"));
Box120->setSize(new float[3]{0.107213,0.107213,0.107213});
Shape117->setGeometry(Box120);

Transform116->addChildren(*Shape117);

Transform104->addChildren(*Transform116);

CTransform* Transform121 = (CTransform *)(m_pScene.createNode("Transform"));
Transform121->setTranslation(new float[3]{-1.6882,-0.144074,1.18658});
Transform121->setRotation(new float[4]{0,1,0,3.14159});
Transform121->setScale(new float[3]{7.20902,15.5332,0.230572});
Transform121->setCenter(new float[3]{-0.0896799,0.000412353,5.7768e-7});
CShape* Shape122 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance123 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material124 = (CMaterial *)(m_pScene.createNode("Material"));
Material124->setAmbientIntensity(0.691489);
Material124->setDiffuseColor(new float[3]{0.8,0.677123,0.512228});
Appearance123->setMaterial(*Material124);

Shape122->setAppearance(*Appearance123);

CBox* Box125 = (CBox *)(m_pScene.createNode("Box"));
Box125->setSize(new float[3]{0.178747,0.178746,0.178745});
Shape122->setGeometry(Box125);

Transform121->addChildren(*Shape122);

Transform104->addChildren(*Transform121);

Transform103->addChildren(*Transform104);

CTransform* Transform126 = (CTransform *)(m_pScene.createNode("Transform"));
Transform126->setTranslation(new float[3]{-3.11431,-0.0888075,1.10913});
Transform126->setRotation(new float[4]{0,1,0,3.14159});
Transform126->setScale(new float[3]{0.631108,16.2186,1.23267});
CShape* Shape127 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance128 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material129 = (CMaterial *)(m_pScene.createNode("Material"));
Material129->setDEF("_8");
Material129->setAmbientIntensity(0.376344);
Material129->setDiffuseColor(new float[3]{0.989362,0.989362,0.989362});
Appearance128->setMaterial(*Material129);

Shape127->setAppearance(*Appearance128);

CBox* Box130 = (CBox *)(m_pScene.createNode("Box"));
Box130->setSize(new float[3]{0.178747,0.178746,0.178745});
Shape127->setGeometry(Box130);

Transform126->addChildren(*Shape127);

Transform103->addChildren(*Transform126);

CTransform* Transform131 = (CTransform *)(m_pScene.createNode("Transform"));
Transform131->setTranslation(new float[3]{-2.43024,1.30279,1.10765});
Transform131->setRotation(new float[4]{0.707107,-0.707107,-0.000434577,3.14247});
Transform131->setScale(new float[3]{0.631108,7.89331,1.23267});
CShape* Shape132 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance133 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material134 = (CMaterial *)(m_pScene.createNode("Material"));
Material134->setUSE("_8");
Appearance133->setMaterial(*Material134);

Shape132->setAppearance(*Appearance133);

CBox* Box135 = (CBox *)(m_pScene.createNode("Box"));
Box135->setSize(new float[3]{0.178747,0.178746,0.178745});
Shape132->setGeometry(Box135);

Transform131->addChildren(*Shape132);

Transform103->addChildren(*Transform131);

CTransform* Transform136 = (CTransform *)(m_pScene.createNode("Transform"));
Transform136->setTranslation(new float[3]{-1.70971,-0.0888075,1.10913});
Transform136->setRotation(new float[4]{0,1,0,3.14159});
Transform136->setScale(new float[3]{0.631108,16.2186,1.23267});
CShape* Shape137 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance138 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material139 = (CMaterial *)(m_pScene.createNode("Material"));
Material139->setUSE("_8");
Appearance138->setMaterial(*Material139);

Shape137->setAppearance(*Appearance138);

CBox* Box140 = (CBox *)(m_pScene.createNode("Box"));
Box140->setSize(new float[3]{0.178747,0.178746,0.178745});
Shape137->setGeometry(Box140);

Transform136->addChildren(*Shape137);

Transform103->addChildren(*Transform136);

Transform64->addChildren(*Transform103);

CTransform* Transform141 = (CTransform *)(m_pScene.createNode("Transform"));
Transform141->setDEF("walls");
CTransform* Transform142 = (CTransform *)(m_pScene.createNode("Transform"));
Transform142->setTranslation(new float[3]{-0.0280126,-1.53561,1.35645});
Transform142->setRotation(new float[4]{-1,0,0,1.56956});
Transform142->setScale(new float[3]{9.35746,9.35746,13.4537});
CShape* Shape143 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance144 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material145 = (CMaterial *)(m_pScene.createNode("Material"));
Material145->setDEF("_9");
Material145->setAmbientIntensity(0.790323);
Material145->setDiffuseColor(new float[3]{0.659574,0.659574,0.659574});
Material145->setShininess(0);
Appearance144->setMaterial(*Material145);

Shape143->setAppearance(*Appearance144);

CIndexedFaceSet* IndexedFaceSet146 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet146->setCoordIndex(new int[73]{0,1,2,3,-1,4,5,6,7,-1,6,8,1,0,-1,7,6,0,9,-1,10,5,3,2,-1,10,5,6,8,-1,3,5,4,11,-1,0,3,11,9,-1,12,11,4,13,-1,16,17,15,14,-1,7,9,18,19,-1,19,16,14,-1,19,14,7,-1,12,13,20,21,-1,20,14,15,21,-1});
CCoordinate* Coordinate147 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate147->setPoint(new float[66]{-0.918773,-0.104811,0.0797785,-0.962286,-0.104811,0.0797785,-0.962286,-0.342562,0.0797785,-0.918773,-0.342562,0.0797785,-0.918773,-0.422948,0.27253,-0.918773,-0.342562,0.211901,-0.918773,-0.104811,0.211901,-0.918773,0.0164741,0.27253,-0.962286,-0.104811,0.211901,-0.918773,0.0164745,1.93715e-7,-0.962286,-0.342562,0.211901,-0.918773,-0.422948,0,-0.0695972,-0.422947,-2.68221e-7,-0.0695972,-0.422948,0.27253,-0.069597,0.0164738,0.27253,-0.069597,0.0164742,1.63913e-7,-0.18392,0.0164743,0.215145,-0.18392,0.0164746,1.63913e-7,-0.326241,0.0164739,1.63913e-7,-0.326241,0.0164736,0.215145,-0.0695971,-0.203237,0.27253,-0.0695971,-0.203236,-5.21538e-8});
IndexedFaceSet146->setCoord(*Coordinate147);

Shape143->setGeometry(IndexedFaceSet146);

Transform142->addChildren(*Shape143);

Transform141->addChildren(*Transform142);

CTransform* Transform148 = (CTransform *)(m_pScene.createNode("Transform"));
Transform148->setTranslation(new float[3]{-0.0280126,-1.53561,1.35645});
Transform148->setRotation(new float[4]{-1,0,0,1.56956});
Transform148->setScale(new float[3]{9.35746,9.35746,13.4537});
CShape* Shape149 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance150 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material151 = (CMaterial *)(m_pScene.createNode("Material"));
Material151->setUSE("_9");
Appearance150->setMaterial(*Material151);

Shape149->setAppearance(*Appearance150);

CIndexedFaceSet* IndexedFaceSet152 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet152->setColorPerVertex(False);
IndexedFaceSet152->setColorIndex(new int[71]{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,1,0,0,0,0,0,0,1,0,1,0,1,0,0,0});
IndexedFaceSet152->setCoordIndex(new int[354]{19,22,8,7,-1,24,23,9,10,-1,26,25,11,12,-1,27,28,14,13,-1,29,30,16,15,-1,32,31,17,18,-1,50,51,52,53,-1,53,52,54,55,-1,56,50,53,55,-1,55,54,57,56,-1,51,57,54,52,-1,56,57,51,50,-1,60,84,59,61,62,-1,65,66,67,68,-1,68,67,69,70,-1,71,65,68,70,-1,70,69,72,71,-1,66,72,69,67,-1,71,72,66,65,-1,76,75,78,77,-1,73,78,75,74,-1,32,30,29,31,-1,15,16,18,17,-1,31,37,2,17,-1,29,81,37,31,-1,6,5,33,34,-1,21,34,33,20,-1,24,22,19,23,-1,7,8,10,9,-1,3,4,21,20,-1,28,27,25,26,-1,13,14,12,11,-1,35,36,0,1,-1,9,23,35,1,-1,23,19,35,-1,33,5,2,37,-1,20,33,37,-1,19,20,37,35,-1,9,1,3,7,-1,3,20,19,7,-1,79,28,26,36,-1,26,12,0,36,-1,79,80,14,28,-1,12,14,80,0,-1,83,58,59,84,-1,85,45,47,86,-1,84,60,46,85,-1,86,83,84,85,-1,49,48,88,87,-1,82,91,90,-1,91,87,90,-1,87,89,90,-1,82,90,46,60,62,63,-1,80,79,63,64,-1,15,17,2,48,-1,81,29,15,48,-1,95,93,92,94,-1,96,42,43,97,-1,98,73,74,99,-1,99,96,97,98,-1,99,74,75,76,-1,99,76,41,96,-1,40,42,96,41,-1,89,87,38,-1,87,88,44,41,-1,38,87,41,-1,45,85,46,90,89,38,39,-1,38,41,76,77,-1,97,43,39,38,-1,77,98,97,38,-1,77,78,73,98,-1});
CColor* Color153 = (CColor *)(m_pScene.createNode("Color"));
Color153->setColor(new float[6]{0.659574,0.659574,0.659574,0,0.0187199,0.0481283});
IndexedFaceSet152->setColor(*Color153);

CCoordinate* Coordinate154 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate154->setPoint(new float[300]{-0.918773,0.379005,0,0.55397,0.379005,0,0.55397,-0.422948,0,0.55397,-0.131194,0,0.597169,-0.131194,0,0.55397,-0.289109,0,0.597169,-0.289109,0,0.55397,0.106842,0.0797785,0.597169,0.106842,0.0797785,0.55397,0.265779,0.0797785,0.597169,0.265779,0.0797785,-0.962286,0.212139,0.0797785,-0.918773,0.212139,0.0797785,-0.962286,0.0568306,0.0797785,-0.918773,0.0568306,0.0797785,0.0640951,-0.422948,0.0797785,0.0641975,-0.456811,0.0797785,0.217765,-0.422948,0.0797785,0.217866,-0.456346,0.0797785,0.55397,0.106842,0.211901,0.55397,-0.131194,0.211901,0.597169,-0.131194,0.211901,0.597169,0.106842,0.211901,0.55397,0.265779,0.211901,0.597169,0.265779,0.211901,-0.962286,0.212139,0.211901,-0.918773,0.212139,0.211901,-0.962286,0.0568306,0.211901,-0.918773,0.0568306,0.211901,0.0640951,-0.422948,0.211901,0.0641975,-0.456811,0.211901,0.217765,-0.422948,0.211901,0.217866,-0.456346,0.211901,0.55397,-0.289109,0.211901,0.597169,-0.289109,0.211901,0.55397,0.379005,0.27253,-0.918773,0.379005,0.27253,0.55397,-0.422948,0.27253,0.0999169,0.0370409,0.27253,0.0999169,0.0370413,2.29598e-7,0.114918,0.0164737,2.23517e-7,0.114918,0.0164733,0.27253,0.114918,0.0451801,2.83122e-7,0.0999169,0.0451801,2.83122e-7,0.114918,0.0164736,1.63913e-7,-0.18324,0.0370424,1.67359e-7,-0.156861,0.0370419,0.27253,-0.18392,0.0164746,1.63913e-7,-0.0490293,-0.422947,-2.68221e-7,-0.0490293,-0.422948,0.27253,-0.385034,0.0193376,0.270995,-0.385034,0.019338,2.23517e-7,-0.364466,0.019338,2.23517e-7,-0.364466,0.0193376,0.270995,-0.364466,0.0621717,2.83122e-7,-0.364466,0.0621713,0.270995,-0.385034,0.0621713,0.270995,-0.385034,0.0621717,2.83122e-7,-0.326241,0.0164739,1.63913e-7,-0.326241,0.0370417,1.93715e-7,-0.326241,0.0370413,0.27253,-0.918773,0.0370423,2.23517e-7,-0.918773,0.037042,0.27253,-0.918773,0.0164741,0.27253,-0.918773,0.0164745,1.93715e-7,-0.385034,0.174854,0.270995,-0.385034,0.174854,4.02331e-7,-0.364466,0.174854,4.02331e-7,-0.364466,0.174854,0.270995,-0.364466,0.383761,6.4075e-7,-0.364466,0.383761,0.270996,-0.385034,0.383761,0.270996,-0.385034,0.383761,6.4075e-7,0.0999169,0.196089,3.72529e-7,0.114918,0.196089,3.42727e-7,0.114918,0.383761,5.51343e-7,0.114918,0.383761,0.27253,0.0999169,0.383761,0.27253,0.0999169,0.383761,5.81145e-7,-0.918773,0.0300454,0.27253,-0.918773,0.0300454,0,-0.0490293,-0.422948,0.27253,-0.069597,0.0164738,0.27253,-0.326241,0.0164736,0.215145,-0.326241,0.0370414,0.215145,-0.18324,0.0370421,0.215145,-0.18392,0.0164743,0.215145,-0.0490292,0.0164738,0.27253,-0.0490292,0.0164745,2.10643e-7,-0.0640303,0.0370415,0.27253,-0.0743143,0.0370416,0.27253,-0.0593131,0.0164738,0.27253,-0.0695971,-0.422948,0.27253,-0.0695971,0.0279736,0.27253,-0.0490293,-0.422948,0.27253,-0.0490292,0.0279736,0.27253,0.114918,0.0451798,0.210192,0.0999169,0.0451798,0.210192,0.0999169,0.196089,0.208979,0.114918,0.196089,0.208979});
IndexedFaceSet152->setCoord(*Coordinate154);

Shape149->setGeometry(IndexedFaceSet152);

Transform148->addChildren(*Shape149);

Transform141->addChildren(*Transform148);

CTransform* Transform155 = (CTransform *)(m_pScene.createNode("Transform"));
Transform155->setTranslation(new float[3]{-0.0280126,-1.53561,1.35645});
Transform155->setRotation(new float[4]{-1,0,0,1.56956});
Transform155->setScale(new float[3]{9.35746,9.35746,13.4537});
CShape* Shape156 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance157 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material158 = (CMaterial *)(m_pScene.createNode("Material"));
Material158->setUSE("_9");
Appearance157->setMaterial(*Material158);

Shape156->setAppearance(*Appearance157);

CIndexedFaceSet* IndexedFaceSet159 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet159->setSolid(False);
IndexedFaceSet159->setColorPerVertex(False);
IndexedFaceSet159->setColorIndex(new int[26]{0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0});
IndexedFaceSet159->setCoordIndex(new int[124]{0,1,2,3,-1,2,4,3,-1,5,3,4,6,-1,5,6,7,-1,7,2,1,8,-1,5,7,8,9,-1,10,9,0,11,-1,12,0,3,13,14,-1,11,0,12,15,-1,11,15,16,17,-1,10,11,18,19,-1,20,18,11,-1,20,11,21,-1,11,17,21,-1,20,21,22,23,-1,23,22,10,19,-1,24,25,26,17,-1,17,26,21,-1,27,13,3,17,16,-1,8,28,9,-1,9,28,29,0,-1,0,29,1,-1,30,3,5,31,-1,30,32,17,3,-1,32,33,24,17,-1,5,24,33,31,-1});
CColor* Color160 = (CColor *)(m_pScene.createNode("Color"));
Color160->setColor(new float[6]{0.659574,0.659574,0.659574,0,0.0187199,0.0481283});
IndexedFaceSet159->setColor(*Color160);

CCoordinate* Coordinate161 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate161->setPoint(new float[102]{-0.962286,0.409388,0.27253,-0.962286,0.0568306,0.211901,-0.962286,-0.104811,0.211901,-0.962174,-0.459919,0.27253,-0.962286,-0.342562,0.211901,-0.962174,-0.459919,0,-0.962286,-0.342562,0.0797785,-0.962286,-0.104811,0.0797785,-0.962286,0.0568306,0.0797785,-0.962286,0.409388,0,0.597169,0.409388,0,0.597169,0.409388,0.27253,-0.918773,0.379005,0.27253,-0.918773,-0.422948,0.27253,-0.918773,0.0300454,0.27253,0.55397,0.379005,0.27253,0.55397,-0.422948,0.27253,0.597267,-0.455197,0.27253,0.597169,0.265779,0.211901,0.597169,0.265779,0.0797785,0.597169,0.106842,0.211901,0.597169,-0.131194,0.211901,0.597169,-0.131194,0,0.597169,0.106842,0.0797785,0.597267,-0.455197,0,0.597169,-0.289109,0,0.597169,-0.289109,0.211901,-0.0597836,-0.422948,0.27253,-0.962286,0.212139,0.0797785,-0.962286,0.212139,0.211901,0.0641975,-0.456811,0.211901,0.0641975,-0.456811,0.0797785,0.217866,-0.456346,0.211901,0.217866,-0.456346,0.0797785});
IndexedFaceSet159->setCoord(*Coordinate161);

Shape156->setGeometry(IndexedFaceSet159);

Transform155->addChildren(*Shape156);

Transform141->addChildren(*Transform155);

Transform64->addChildren(*Transform141);

Collision63->setProxy(*Transform64);

Transform62->addChildren(*Collision63);

Transform9->addChildren(*Transform62);

CTransform* Transform162 = (CTransform *)(m_pScene.createNode("Transform"));
Transform162->setDEF("ebene");
CShape* Shape163 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance164 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material165 = (CMaterial *)(m_pScene.createNode("Material"));
Material165->setAmbientIntensity(0.790323);
Material165->setDiffuseColor(new float[3]{0.659574,0.659574,0.659574});
Material165->setShininess(0);
Appearance164->setMaterial(*Material165);

Shape163->setAppearance(*Appearance164);

CIndexedFaceSet* IndexedFaceSet166 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet166->setCreaseAngle(0.5);
IndexedFaceSet166->setCoordIndex(new int[8]{0,2,1,-1,0,3,2,-1});
CCoordinate* Coordinate167 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate167->setPoint(new float[12]{-8.99842,-1.54875,-2.45919,-8.99842,-1.54875,5.57903,5.55036,-1.54875,5.57903,5.55036,-1.54875,-2.45919});
IndexedFaceSet166->setCoord(*Coordinate167);

Shape163->setGeometry(IndexedFaceSet166);

Transform162->addChildren(*Shape163);

Transform9->addChildren(*Transform162);

CCollision* Collision168 = (CCollision *)(m_pScene.createNode("Collision"));
Collision168->setEnabled(False);
CTransform* Transform169 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape170 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance171 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material172 = (CMaterial *)(m_pScene.createNode("Material"));
Material172->setAmbientIntensity(0.790323);
Material172->setDiffuseColor(new float[3]{0.659574,0.659574,0.659574});
Material172->setShininess(0);
Appearance171->setMaterial(*Material172);

Shape170->setAppearance(*Appearance171);

CIndexedFaceSet* IndexedFaceSet173 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet173->setCreaseAngle(0.5);
IndexedFaceSet173->setCoordIndex(new int[5]{3,2,1,0,-1});
CCoordinate* Coordinate174 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate174->setPoint(new float[12]{-9.00445,2.14621,5.56747,5.49389,2.14621,5.56747,5.49389,2.14621,-2.42974,-9.00445,2.14621,-2.42974});
IndexedFaceSet173->setCoord(*Coordinate174);

Shape170->setGeometry(IndexedFaceSet173);

Transform169->addChildren(*Shape170);

Collision168->setProxy(*Transform169);

Transform9->addChildren(*Collision168);

group->addChildren(*Transform9);

CDirectionalLight* DirectionalLight175 = (CDirectionalLight *)(m_pScene.createNode("DirectionalLight"));
DirectionalLight175->setDEF("Light1");
DirectionalLight175->setAmbientIntensity(1);
DirectionalLight175->setDirection(new float[3]{0.572447,-0.644191,-0.50727});
group->addChildren(*DirectionalLight175);

CTransform* Transform176 = (CTransform *)(m_pScene.createNode("Transform"));
Transform176->setDEF("texture-sleep_1");
CSwitch* Switch177 = (CSwitch *)(m_pScene.createNode("Switch"));
Switch177->setDEF("_10");
Switch177->setWhichChoice(0);
CTransform* Transform178 = (CTransform *)(m_pScene.createNode("Transform"));
Switch177->addChildren(*Transform178);

CTransform* Transform179 = (CTransform *)(m_pScene.createNode("Transform"));
Transform179->setDEF("texture-sleep");
CTransform* Transform180 = (CTransform *)(m_pScene.createNode("Transform"));
Transform180->setDEF("room_no-collide");
CCollision* Collision181 = (CCollision *)(m_pScene.createNode("Collision"));
Collision181->setEnabled(False);
CTransform* Transform182 = (CTransform *)(m_pScene.createNode("Transform"));
Transform182->setDEF("moebel");
CTransform* Transform183 = (CTransform *)(m_pScene.createNode("Transform"));
Transform183->setDEF("schrank");
Transform183->setTranslation(new float[3]{-1.26166,-0.218976,3.35488});
Transform183->setRotation(new float[4]{0.000621337,-1,-0.000618129,1.56562});
Transform183->setScale(new float[3]{1.84464,1.3191,0.425435});
CShape* Shape184 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance185 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material186 = (CMaterial *)(m_pScene.createNode("Material"));
Material186->setDEF("_11");
Material186->setAmbientIntensity(0.691489);
Material186->setDiffuseColor(new float[3]{1,1,1});
Material186->setEmissiveColor(new float[3]{0.180851,0.180851,0.180851});
Appearance185->setMaterial(*Material186);

CImageTexture* ImageTexture187 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture187->setDEF("_12");
ImageTexture187->setUrl(new CString[1]{"schrank_dunkel128.png"}, 1);
Appearance185->setTexture(*ImageTexture187);

Shape184->setAppearance(*Appearance185);

CIndexedFaceSet* IndexedFaceSet188 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet188->setCreaseAngle(0.5);
IndexedFaceSet188->setTexCoordIndex(new int[51]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,26,27,14,6,8,28,29,-1,10,4,12,0,1,3,2,-1,5,24,25,7,-1,11,18,19,9,-1,16,17,20,21,-1,13,22,23,15,-1});
IndexedFaceSet188->setCoordIndex(new int[51]{4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,13,9,10,2,4,-1,11,8,12,1,7,5,3,-1,8,11,10,9,-1,11,3,2,10,-1,0,1,12,13,-1,12,8,9,13,-1});
CTextureCoordinate* TextureCoordinate189 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate189->setPoint(new float[60]{0.485065,0.999081,0.485065,-0.000919342,1,1,1,0,0.5,1,0.0153094,0,0.737301,-0.00000224775,0.0153094,0.999837,0.867013,-0.00000224775,0.0153094,0.999837,0.75,1,0.0153094,0,0.25,1,0.0153094,0,0.607589,-0.00000224775,0.0153094,0.999837,0.0153094,0.999837,0.0153094,0,0.441416,0,0.441416,0.999837,0.441416,0,0.441416,0.999837,0.441416,0,0.441416,0.999837,0.441416,0,0.441416,0.999837,0.477877,0.997553,0.477877,-0.00000224775,0.996724,-0.00000224775,0.996724,0.997553});
IndexedFaceSet188->setTexCoord(*TextureCoordinate189);

CCoordinate* Coordinate190 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate190->setPoint(new float[42]{-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1,0,-1,1,0,1,1,0.5,1,1,0.5,-1,1,-0.5,-1,1,-0.5,1,1});
IndexedFaceSet188->setCoord(*Coordinate190);

Shape184->setGeometry(IndexedFaceSet188);

Transform183->addChildren(*Shape184);

Transform182->addChildren(*Transform183);

CTransform* Transform191 = (CTransform *)(m_pScene.createNode("Transform"));
Transform191->setDEF("nachtschrank1");
Transform191->setTranslation(new float[3]{-2.87892,-1.21038,4.95799});
Transform191->setRotation(new float[4]{0.000614949,1,0.000618131,1.57596});
Transform191->setScale(new float[3]{3.29672,3.29673,3.53468});
CShape* Shape192 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance193 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material194 = (CMaterial *)(m_pScene.createNode("Material"));
Material194->setUSE("_11");
Appearance193->setMaterial(*Material194);

CImageTexture* ImageTexture195 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture195->setUSE("_12");
Appearance193->setTexture(*ImageTexture195);

Shape192->setAppearance(*Appearance193);

CIndexedFaceSet* IndexedFaceSet196 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet196->setCreaseAngle(0.5);
IndexedFaceSet196->setTexCoordIndex(new int[30]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,4,5,6,7,-1,0,1,3,2,-1,0,1,3,2,-1});
IndexedFaceSet196->setCoordIndex(new int[30]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1});
CTextureCoordinate* TextureCoordinate197 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate197->setPoint(new float[16]{0.472134,0.995788,0.472134,-0.0042125,1,1,1,0,0.0193067,0.997285,0.0193067,-0.000431865,0.447473,-9.8598e-7,0.447473,0.997716});
IndexedFaceSet196->setTexCoord(*TextureCoordinate197);

CCoordinate* Coordinate198 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate198->setPoint(new float[24]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1});
IndexedFaceSet196->setCoord(*Coordinate198);

Shape192->setGeometry(IndexedFaceSet196);

Transform191->addChildren(*Shape192);

Transform182->addChildren(*Transform191);

CTransform* Transform199 = (CTransform *)(m_pScene.createNode("Transform"));
Transform199->setDEF("nachtschrank2");
Transform199->setTranslation(new float[3]{-6.52379,-1.21041,4.97681});
Transform199->setRotation(new float[4]{0.000614949,1,0.000618131,1.57596});
Transform199->setScale(new float[3]{3.29672,3.29673,3.53468});
CShape* Shape200 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance201 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material202 = (CMaterial *)(m_pScene.createNode("Material"));
Material202->setUSE("_11");
Appearance201->setMaterial(*Material202);

CImageTexture* ImageTexture203 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture203->setUSE("_12");
Appearance201->setTexture(*ImageTexture203);

Shape200->setAppearance(*Appearance201);

CIndexedFaceSet* IndexedFaceSet204 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet204->setCreaseAngle(0.5);
IndexedFaceSet204->setTexCoordIndex(new int[30]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,4,5,6,7,-1,0,1,3,2,-1,0,1,3,2,-1});
IndexedFaceSet204->setCoordIndex(new int[30]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1});
CTextureCoordinate* TextureCoordinate205 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate205->setPoint(new float[16]{0.472134,0.995788,0.472134,-0.0042125,1,1,1,0,0.0193067,0.997285,0.0193067,-0.000431865,0.447473,-9.8598e-7,0.447473,0.997716});
IndexedFaceSet204->setTexCoord(*TextureCoordinate205);

CCoordinate* Coordinate206 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate206->setPoint(new float[24]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1});
IndexedFaceSet204->setCoord(*Coordinate206);

Shape200->setGeometry(IndexedFaceSet204);

Transform199->addChildren(*Shape200);

Transform182->addChildren(*Transform199);

CTransform* Transform207 = (CTransform *)(m_pScene.createNode("Transform"));
Transform207->setDEF("kommode");
Transform207->setTranslation(new float[3]{-7.72612,-1.20631,1.66272});
Transform207->setRotation(new float[4]{0.000618533,-1,-0.000618759,1.57078});
Transform207->setScale(new float[3]{3.29672,3.29673,8.10267});
CShape* Shape208 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance209 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material210 = (CMaterial *)(m_pScene.createNode("Material"));
Material210->setUSE("_11");
Appearance209->setMaterial(*Material210);

CImageTexture* ImageTexture211 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture211->setUSE("_12");
Appearance209->setTexture(*ImageTexture211);

Shape208->setAppearance(*Appearance209);

CIndexedFaceSet* IndexedFaceSet212 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet212->setCreaseAngle(0.5);
IndexedFaceSet212->setTexCoordIndex(new int[37]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,11,2,-1,0,1,3,9,2,-1,4,5,12,13,-1,8,6,7,10,-1});
IndexedFaceSet212->setCoordIndex(new int[37]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,6,0,2,9,4,-1,1,7,5,8,3,-1,2,3,8,9,-1,8,5,4,9,-1});
CTextureCoordinate* TextureCoordinate213 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate213->setPoint(new float[28]{0.472134,0.995788,0.472134,-0.0042125,1,1,1,0,0.440312,0.994282,0.440312,0.00105374,0.445231,-0.000790729,0.445231,0.992437,0.0145956,-0.000790729,1,0.5,0.0145956,0.992437,1,0.5,0.013069,-0.00208779,0.013069,0.99114});
IndexedFaceSet212->setTexCoord(*TextureCoordinate213);

CCoordinate* Coordinate214 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate214->setPoint(new float[30]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.1,-0.1,0,0.1,0.1,0});
IndexedFaceSet212->setCoord(*Coordinate214);

Shape208->setGeometry(IndexedFaceSet212);

Transform207->addChildren(*Shape208);

Transform182->addChildren(*Transform207);

CTransform* Transform215 = (CTransform *)(m_pScene.createNode("Transform"));
Transform215->setDEF("bett");
CTransform* Transform216 = (CTransform *)(m_pScene.createNode("Transform"));
Transform216->setDEF("matratze");
Transform216->setTranslation(new float[3]{-4.68535,-1.04265,3.81501});
Transform216->setRotation(new float[4]{4.16334e-16,1,0.00061813,3.14159});
Transform216->setScale(new float[3]{11.9506,1.48808,12.1488});
CShape* Shape217 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance218 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material219 = (CMaterial *)(m_pScene.createNode("Material"));
Material219->setAmbientIntensity(0);
Material219->setDiffuseColor(new float[3]{0.357752,0.457447,0.341974});
Material219->setEmissiveColor(new float[3]{0.141437,0.180851,0.135199});
Material219->setShininess(0);
Appearance218->setMaterial(*Material219);

CImageTexture* ImageTexture220 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture220->setUrl(new CString[1]{"plaid.png"}, 1);
Appearance218->setTexture(*ImageTexture220);

CTextureTransform* TextureTransform221 = (CTextureTransform *)(m_pScene.createNode("TextureTransform"));
TextureTransform221->setScale(new float[2]{4,4});
Appearance218->setTextureTransform(*TextureTransform221);

Shape217->setAppearance(*Appearance218);

CIndexedFaceSet* IndexedFaceSet222 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet222->setCreaseAngle(3.14159);
IndexedFaceSet222->setTexCoordIndex(new int[25]{2,3,4,5,-1,6,7,1,0,-1,0,1,3,2,-1,5,4,7,6,-1,0,2,5,6,-1});
IndexedFaceSet222->setCoordIndex(new int[25]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1});
CTextureCoordinate* TextureCoordinate223 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate223->setPoint(new float[16]{0.0529627,0.947037,0,1,0.0529627,0.0529626,0,0,1,0,0.947037,0.0529626,0.947037,0.947037,1,1});
IndexedFaceSet222->setTexCoord(*TextureCoordinate223);

CCoordinate* Coordinate224 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate224->setPoint(new float[24]{-0.1,-0.0133314,0.1,-0.111847,-0.1,0.111847,0.1,-0.0133314,0.1,0.111847,-0.1,0.111847,0.1,-0.0133314,-0.1,0.111847,-0.1,-0.111847,-0.1,-0.0133314,-0.1,-0.111847,-0.1,-0.111847});
IndexedFaceSet222->setCoord(*Coordinate224);

Shape217->setGeometry(IndexedFaceSet222);

Transform216->addChildren(*Shape217);

Transform215->addChildren(*Transform216);

CTransform* Transform225 = (CTransform *)(m_pScene.createNode("Transform"));
Transform225->setDEF("bettkasten");
Transform225->setTranslation(new float[3]{-4.68535,-1.35494,3.81463});
Transform225->setRotation(new float[4]{2.22045e-16,1,0.00061813,3.14159});
Transform225->setScale(new float[3]{14.7529,1.83703,14.9976});
CShape* Shape226 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance227 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material228 = (CMaterial *)(m_pScene.createNode("Material"));
Material228->setUSE("_11");
Appearance227->setMaterial(*Material228);

CImageTexture* ImageTexture229 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture229->setUSE("_12");
Appearance227->setTexture(*ImageTexture229);

Shape226->setAppearance(*Appearance227);

CIndexedFaceSet* IndexedFaceSet230 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet230->setCreaseAngle(0.5);
IndexedFaceSet230->setTexCoordIndex(new int[30]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1});
IndexedFaceSet230->setCoordIndex(new int[30]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1});
CTextureCoordinate* TextureCoordinate231 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate231->setPoint(new float[8]{0.525544,1.00043,0.525544,0.000431776,1,1,1,0});
IndexedFaceSet230->setTexCoord(*TextureCoordinate231);

CCoordinate* Coordinate232 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate232->setPoint(new float[24]{-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,0.1,0.1,0.1,-0.1,0.1,0.1,0.1,-0.1,0.1,-0.1,-0.1,-0.1,0.1,-0.1,-0.1,-0.1,-0.1});
IndexedFaceSet230->setCoord(*Coordinate232);

Shape226->setGeometry(IndexedFaceSet230);

Transform225->addChildren(*Shape226);

Transform215->addChildren(*Transform225);

Transform182->addChildren(*Transform215);

Collision181->setProxy(*Transform182);

CTransform* Transform233 = (CTransform *)(m_pScene.createNode("Transform"));
Transform233->setDEF("accessoires");
CTransform* Transform234 = (CTransform *)(m_pScene.createNode("Transform"));
Transform234->setDEF("poster");
Transform234->setTranslation(new float[3]{-4.75627,0.3135,5.30164});
Transform234->setScale(new float[3]{1.5185,1.5185,1.51852});
CShape* Shape235 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance236 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture237 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture237->setUrl(new CString[1]{"poster.png"}, 1);
Appearance236->setTexture(*ImageTexture237);

Shape235->setAppearance(*Appearance236);

CIndexedFaceSet* IndexedFaceSet238 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet238->setSolid(False);
IndexedFaceSet238->setCoordIndex(new int[5]{0,1,2,3,-1});
CTextureCoordinate* TextureCoordinate239 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate239->setPoint(new float[8]{0,0,1,0,1,1,0,1});
IndexedFaceSet238->setTexCoord(*TextureCoordinate239);

CCoordinate* Coordinate240 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate240->setPoint(new float[12]{-0.746,-0.5,0,0.746,-0.5,0,0.746,0.5,0,-0.746,0.5,0});
IndexedFaceSet238->setCoord(*Coordinate240);

Shape235->setGeometry(IndexedFaceSet238);

Transform234->addChildren(*Shape235);

Transform233->addChildren(*Transform234);

CTransform* Transform241 = (CTransform *)(m_pScene.createNode("Transform"));
Transform241->setDEF("pflanze");
CTransform* Transform242 = (CTransform *)(m_pScene.createNode("Transform"));
Transform242->setTranslation(new float[3]{-7.47428,-1.37334,4.31764});
Transform242->setRotation(new float[4]{0,1,0,1.5708});
Transform242->setScale(new float[3]{1.38524,1.38524,1.38524});
CShape* Shape243 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance244 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material245 = (CMaterial *)(m_pScene.createNode("Material"));
Material245->setAmbientIntensity(0.442353);
Material245->setDiffuseColor(new float[3]{0.361702,0,0.0373073});
Appearance244->setMaterial(*Material245);

Shape243->setAppearance(*Appearance244);

CIndexedFaceSet* IndexedFaceSet246 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet246->setCreaseAngle(0.5);
IndexedFaceSet246->setCoordIndex(new int[208]{0,1,3,2,-1,2,3,5,4,-1,4,5,7,6,-1,6,7,9,8,-1,8,9,11,10,-1,10,11,13,12,-1,12,13,15,14,-1,14,15,17,16,-1,16,17,19,18,-1,18,19,21,20,-1,20,21,23,22,-1,22,23,25,24,-1,24,25,27,26,-1,26,27,29,28,-1,28,29,31,30,-1,30,31,1,0,-1,32,31,29,-1,32,29,27,-1,32,27,25,-1,32,25,23,-1,32,23,21,-1,32,21,19,-1,32,19,17,-1,32,17,15,-1,32,15,13,-1,32,13,11,-1,32,11,9,-1,32,9,7,-1,32,7,5,-1,32,5,3,-1,32,3,1,-1,32,1,31,-1,33,0,2,-1,33,2,4,-1,33,4,6,-1,33,6,8,-1,33,8,10,-1,33,10,12,-1,33,12,14,-1,33,14,16,-1,33,16,18,-1,33,18,20,-1,33,20,22,-1,33,22,24,-1,33,24,26,-1,33,26,28,-1,33,28,30,-1,33,30,0,-1});
CCoordinate* Coordinate247 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate247->setPoint(new float[102]{0,-0.1,-0.1,-3.72529e-8,0.1,-0.130838,0.0382683,-0.1,-0.092388,0.0500695,0.1,-0.120879,0.0707107,-0.1,-0.0707107,0.0925166,0.1,-0.0925166,0.092388,-0.1,-0.0382683,0.120879,0.1,-0.0500695,0.1,-0.1,4.37114e-9,0.130838,0.1,2.23517e-8,0.092388,-0.1,0.0382684,0.120879,0.1,0.0500697,0.0707107,-0.1,0.0707107,0.0925166,0.1,0.0925166,0.0382683,-0.1,0.092388,0.0500695,0.1,0.120879,1.50996e-8,-0.1,0.1,-1.49012e-8,0.1,0.130838,-0.0382683,-0.1,0.092388,-0.0500696,0.1,0.120879,-0.0707107,-0.1,0.0707107,-0.0925166,0.1,0.0925166,-0.092388,-0.1,0.0382684,-0.120879,0.1,0.0500697,-0.1,-0.1,-1.19249e-9,-0.130838,0.1,2.98023e-8,-0.0923879,-0.1,-0.0382684,-0.120879,0.1,-0.0500697,-0.0707107,-0.1,-0.0707107,-0.0925166,0.1,-0.0925166,-0.0382683,-0.1,-0.092388,-0.0500696,0.1,-0.120879,-2.59947e-8,0.1,2.59947e-8,0,-0.1,0});
IndexedFaceSet246->setCoord(*Coordinate247);

Shape243->setGeometry(IndexedFaceSet246);

Transform242->addChildren(*Shape243);

Transform241->addChildren(*Transform242);

CTransform* Transform248 = (CTransform *)(m_pScene.createNode("Transform"));
Transform248->setTranslation(new float[3]{-7.47388,-0.26519,4.31929});
Transform248->setRotation(new float[4]{0,-1,0,0.421223});
Transform248->setScale(new float[3]{0.670034,1.99229,0.670032});
Transform248->setScaleOrientation(new float[4]{0,-1,0,0.0185162});
CShape* Shape249 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance250 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture251 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture251->setUrl(new CString[1]{"baum1.png"}, 1);
Appearance250->setTexture(*ImageTexture251);

Shape249->setAppearance(*Appearance250);

CIndexedFaceSet* IndexedFaceSet252 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet252->setSolid(False);
IndexedFaceSet252->setColorIndex(new int[1]{-1});
IndexedFaceSet252->setCoordIndex(new int[10]{0,1,2,3,-1,4,5,6,7,-1});
CTextureCoordinate* TextureCoordinate253 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate253->setPoint(new float[16]{0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1});
IndexedFaceSet252->setTexCoord(*TextureCoordinate253);

CCoordinate* Coordinate254 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate254->setPoint(new float[24]{-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0,5.36441e-7,-0.5,-0.5,-0.00000149012,-0.5,0.5,-0.00000149012,0.5,0.5,5.36441e-7,0.5,-0.5});
IndexedFaceSet252->setCoord(*Coordinate254);

Shape249->setGeometry(IndexedFaceSet252);

Transform248->addChildren(*Shape249);

Transform241->addChildren(*Transform248);

Transform233->addChildren(*Transform241);

Collision181->setProxy(*Transform233);

CTransform* Transform255 = (CTransform *)(m_pScene.createNode("Transform"));
Transform255->setDEF("raum");
CTransform* Transform256 = (CTransform *)(m_pScene.createNode("Transform"));
Transform256->setDEF("decke");
Transform256->setTranslation(new float[3]{-0.0280126,-1.53561,1.35645});
Transform256->setRotation(new float[4]{-1,0,0,1.56956});
Transform256->setScale(new float[3]{9.35746,9.35746,13.4537});
CShape* Shape257 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance258 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material259 = (CMaterial *)(m_pScene.createNode("Material"));
Material259->setAmbientIntensity(1);
Material259->setDiffuseColor(new float[3]{0.901179,0.969637,1});
Material259->setEmissiveColor(new float[3]{0.38348,0.412612,0.425532});
Appearance258->setMaterial(*Material259);

CImageTexture* ImageTexture260 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture260->setDEF("_13");
ImageTexture260->setUrl(new CString[1]{"speck.paper.png"}, 1);
Appearance258->setTexture(*ImageTexture260);

CTextureTransform* TextureTransform261 = (CTextureTransform *)(m_pScene.createNode("TextureTransform"));
TextureTransform261->setDEF("_14");
TextureTransform261->setScale(new float[2]{2.89501,1});
Appearance258->setTextureTransform(*TextureTransform261);

Shape257->setAppearance(*Appearance258);

CIndexedFaceSet* IndexedFaceSet262 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet262->setCoordIndex(new int[5]{0,1,2,3,-1});
CTextureCoordinate* TextureCoordinate263 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate263->setPoint(new float[8]{0,0,0,0.511752,1,0.511752,1,0});
IndexedFaceSet262->setTexCoord(*TextureCoordinate263);

CCoordinate* Coordinate264 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate264->setPoint(new float[12]{-0.918773,-0.422948,0.27253,-0.918773,0.0164741,0.27253,-0.0601114,0.0164738,0.27253,-0.0601114,-0.422948,0.27253});
IndexedFaceSet262->setCoord(*Coordinate264);

Shape257->setGeometry(IndexedFaceSet262);

Transform256->addChildren(*Shape257);

Transform255->addChildren(*Transform256);

CTransform* Transform265 = (CTransform *)(m_pScene.createNode("Transform"));
Transform265->setDEF("tapete");
Transform265->setTranslation(new float[3]{-0.0280126,-1.53561,1.35645});
Transform265->setRotation(new float[4]{-1,0,0,1.56956});
Transform265->setScale(new float[3]{9.35746,9.35746,13.4537});
CShape* Shape266 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance267 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material268 = (CMaterial *)(m_pScene.createNode("Material"));
Material268->setAmbientIntensity(0.980392);
Material268->setDiffuseColor(new float[3]{0.542553,0.542553,0.542553});
Material268->setShininess(0.148936);
Appearance267->setMaterial(*Material268);

CImageTexture* ImageTexture269 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture269->setUSE("_13");
Appearance267->setTexture(*ImageTexture269);

CTextureTransform* TextureTransform270 = (CTextureTransform *)(m_pScene.createNode("TextureTransform"));
TextureTransform270->setUSE("_14");
Appearance267->setTextureTransform(*TextureTransform270);

Shape266->setAppearance(*Appearance267);

CIndexedFaceSet* IndexedFaceSet271 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet271->setTexCoordIndex(new int[73]{0,1,2,3,-1,28,27,26,5,-1,0,1,1,0,-1,5,26,29,6,-1,3,7,7,3,-1,1,0,0,1,-1,4,27,28,30,-1,29,4,30,6,-1,8,25,9,10,-1,15,16,17,18,-1,19,20,21,22,-1,22,15,18,-1,22,18,19,-1,11,12,23,24,-1,23,13,14,24,-1});
IndexedFaceSet271->setCoordIndex(new int[73]{0,1,2,3,-1,4,5,6,7,-1,6,8,1,0,-1,7,6,0,9,-1,10,5,3,2,-1,10,5,6,8,-1,3,5,4,11,-1,0,3,11,9,-1,12,11,4,13,-1,16,17,15,14,-1,7,9,18,19,-1,19,16,14,-1,19,14,7,-1,12,13,20,21,-1,20,14,15,21,-1});
CTextureCoordinate* TextureCoordinate272 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate272->setPoint(new float[62]{0.0432628,0.395189,0.0216314,0.395189,0.0216314,0.157438,0.0432628,0.157438,0.176379,0.293702,0.996431,0.987509,0.996193,0.00619312,0.0216314,0.909388,1.75058,0.99962,0.000984462,0.00331701,1.75058,0.00331701,1,0,1,1,0.0324233,1,0.0324228,0,1.51503,0.2131,1.51503,0.99962,1.75058,0.99962,1.75058,0.00331701,0.000984462,0.00331701,0.000984462,0.99962,1.2218,0.99962,1.2218,0.2131,0.516212,1,0.516211,0,0.000984462,0.99962,0.719415,0.769281,0.176494,0.769444,-0.00701949,0.987809,0.719299,0.293539,-0.00725818,0.00649359});
IndexedFaceSet271->setTexCoord(*TextureCoordinate272);

CCoordinate* Coordinate273 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate273->setPoint(new float[66]{-0.918773,-0.104811,0.0797785,-0.962286,-0.104811,0.0797785,-0.962286,-0.342562,0.0797785,-0.918773,-0.342562,0.0797785,-0.918773,-0.422948,0.27253,-0.918773,-0.342562,0.211901,-0.918773,-0.104811,0.211901,-0.918773,0.0164741,0.27253,-0.962286,-0.104811,0.211901,-0.918773,0.0164745,1.93715e-7,-0.962286,-0.342562,0.211901,-0.918773,-0.422948,0,-0.0695972,-0.422947,-2.68221e-7,-0.0695972,-0.422948,0.27253,-0.069597,0.0164738,0.27253,-0.069597,0.0164742,1.63913e-7,-0.18392,0.0164743,0.215145,-0.18392,0.0164746,1.63913e-7,-0.326241,0.0164739,1.63913e-7,-0.326241,0.0164736,0.215145,-0.0695971,-0.203237,0.27253,-0.0695971,-0.203236,-5.21538e-8});
IndexedFaceSet271->setCoord(*Coordinate273);

Shape266->setGeometry(IndexedFaceSet271);

Transform265->addChildren(*Shape266);

Transform255->addChildren(*Transform265);

CTransform* Transform274 = (CTransform *)(m_pScene.createNode("Transform"));
Transform274->setDEF("fussboden");
Transform274->setTranslation(new float[3]{-4.79598,-2.95784,3.3361});
Transform274->setRotation(new float[4]{0,1,0,3.14159});
Transform274->setScale(new float[3]{4.18476,1.41953,2.17788});
CShape* Shape275 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance276 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material277 = (CMaterial *)(m_pScene.createNode("Material"));
Material277->setAmbientIntensity(0.557037);
Material277->setDiffuseColor(new float[3]{0.268975,0.287234,0.24213});
Material277->setEmissiveColor(new float[3]{0.448291,0.478723,0.40355});
Appearance276->setMaterial(*Material277);

CImageTexture* ImageTexture278 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture278->setUrl(new CString[1]{"granite.2.png"}, 1);
Appearance276->setTexture(*ImageTexture278);

CTextureTransform* TextureTransform279 = (CTextureTransform *)(m_pScene.createNode("TextureTransform"));
TextureTransform279->setScale(new float[2]{2,1});
Appearance276->setTextureTransform(*TextureTransform279);

Shape275->setAppearance(*Appearance276);

CIndexedFaceSet* IndexedFaceSet280 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet280->setCreaseAngle(0.5);
IndexedFaceSet280->setCoordIndex(new int[5]{0,1,2,3,-1});
CTextureCoordinate* TextureCoordinate281 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate281->setPoint(new float[8]{0,1,0,0,1,0,1,1});
IndexedFaceSet280->setTexCoord(*TextureCoordinate281);

CCoordinate* Coordinate282 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate282->setPoint(new float[12]{-1,1,-1,-1,1,1,1,1,1,1,1,-1});
IndexedFaceSet280->setCoord(*Coordinate282);

Shape275->setGeometry(IndexedFaceSet280);

Transform274->addChildren(*Shape275);

Transform255->addChildren(*Transform274);

Collision181->setProxy(*Transform255);

Transform180->addChildren(*Collision181);

Transform179->addChildren(*Transform180);

CTransform* Transform283 = (CTransform *)(m_pScene.createNode("Transform"));
Transform283->setDEF("ausblick");
CTransform* Transform284 = (CTransform *)(m_pScene.createNode("Transform"));
Transform284->setTranslation(new float[3]{-11.1133,1.31898,2.05622});
Transform284->setRotation(new float[4]{0,1,0,1.5708});
Transform284->setScale(new float[3]{6.78219,6.78219,6.78219});
CShape* Shape285 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance286 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture287 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture287->setUrl(new CString[1]{"env.png"}, 1);
Appearance286->setTexture(*ImageTexture287);

Shape285->setAppearance(*Appearance286);

CIndexedFaceSet* IndexedFaceSet288 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet288->setCoordIndex(new int[5]{0,1,2,3,-1});
CTextureCoordinate* TextureCoordinate289 = (CTextureCoordinate *)(m_pScene.createNode("TextureCoordinate"));
TextureCoordinate289->setPoint(new float[8]{0,0,1,0,1,1,0,1});
IndexedFaceSet288->setTexCoord(*TextureCoordinate289);

CCoordinate* Coordinate290 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate290->setPoint(new float[12]{-0.7442,-0.5,0,0.7442,-0.5,0,0.7442,0.5,0,-0.7442,0.5,0});
IndexedFaceSet288->setCoord(*Coordinate290);

Shape285->setGeometry(IndexedFaceSet288);

Transform284->addChildren(*Shape285);

Transform283->addChildren(*Transform284);

Transform179->addChildren(*Transform283);

Switch177->addChildren(*Transform179);

Transform176->addChildren(*Switch177);

group->addChildren(*Transform176);

CTransform* Transform291 = (CTransform *)(m_pScene.createNode("Transform"));
Transform291->setDEF("tex-but_1");
CScript* Script292 = (CScript *)(m_pScene.createNode("Script"));
Script292->setDEF("_switch");
Cfield* field293 = new Cfield();
field293->setName("whichChoice_changed");
field293->setAccessType("outputOnly");
field293->setType("SFInt32");
Script292->addField(*field293);

Cfield* field294 = new Cfield();
field294->setName("set_touchTime");
field294->setAccessType("inputOnly");
field294->setType("SFTime");
Script292->addField(*field294);

Cfield* field295 = new Cfield();
field295->setName("enabled");
field295->setAccessType("initializeOnly");
field295->setType("SFBool");
Script292->addField(*field295);


Script292.setSourceCode(`vrmlscript:\n"+
"function set_touchTime(value, time)\n"+
"{\n"+
"	enabled = !enabled;\n"+
"	whichChoice_changed = enabled;\n"+
"}`)
Transform291->addChildren(*Script292);

CTouchSensor* TouchSensor296 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor296->setDEF("_15");
Transform291->addChildren(*TouchSensor296);

CTransform* Transform297 = (CTransform *)(m_pScene.createNode("Transform"));
Transform297->setDEF("tex-but");
Transform297->setTranslation(new float[3]{-3.53259,0.188037,1.18607});
Transform297->setRotation(new float[4]{1,-3.71792e-8,9.89425e-7,1.57203});
CShape* Shape298 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance299 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material300 = (CMaterial *)(m_pScene.createNode("Material"));
Material300->setAmbientIntensity(0.25);
Material300->setDiffuseColor(new float[3]{0.904409,0,0.309851});
Material300->setSpecularColor(new float[3]{0.0955906,0.0955906,0.0955906});
Material300->setShininess(0.078125);
Appearance299->setMaterial(*Material300);

Shape298->setAppearance(*Appearance299);

CBox* Box301 = (CBox *)(m_pScene.createNode("Box"));
Box301->setSize(new float[3]{0.2,0.2,0.2});
Shape298->setGeometry(Box301);

Transform297->addChildren(*Shape298);

Transform291->addChildren(*Transform297);

group->addChildren(*Transform291);

CTransform* Transform302 = (CTransform *)(m_pScene.createNode("Transform"));
Transform302->setDEF("masse-bad");
CTransform* Transform303 = (CTransform *)(m_pScene.createNode("Transform"));
CTransform* Transform304 = (CTransform *)(m_pScene.createNode("Transform"));
Transform304->setTranslation(new float[3]{-8.04131,0.404034,-2.72127});
Transform304->setRotation(new float[4]{1,0,0,1.57203});
Transform304->setScale(new float[3]{0.559431,0.559428,0.0237109});
CShape* Shape305 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance306 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material307 = (CMaterial *)(m_pScene.createNode("Material"));
Material307->setDEF("_16");
Material307->setAmbientIntensity(0);
Material307->setDiffuseColor(new float[3]{0,0,0});
Material307->setEmissiveColor(new float[3]{0,0.0958378,0.297872});
Material307->setShininess(0);
Appearance306->setMaterial(*Material307);

Shape305->setAppearance(*Appearance306);

CIndexedFaceSet* IndexedFaceSet308 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet308->setCreaseAngle(0.5);
IndexedFaceSet308->setCoordIndex(new int[17]{6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1});
CCoordinate* Coordinate309 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate309->setPoint(new float[21]{2.55351,1,1,2.55351,1,-1,-0.655345,1,-2.5162,-0.655344,1,2.38816,-1,1,0,-0.652593,1,-1,-0.652593,1,1});
IndexedFaceSet308->setCoord(*Coordinate309);

Shape305->setGeometry(IndexedFaceSet308);

Transform304->addChildren(*Shape305);

Transform303->addChildren(*Transform304);

CTransform* Transform310 = (CTransform *)(m_pScene.createNode("Transform"));
Transform310->setTranslation(new float[3]{-6.59348,0.323395,-2.16191});
Transform310->setScale(new float[3]{0.02,0.02,0.02});
CShape* Shape311 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance312 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material313 = (CMaterial *)(m_pScene.createNode("Material"));
Material313->setUSE("_16");
Appearance312->setMaterial(*Material313);

Shape311->setAppearance(*Appearance312);

CText* Text314 = (CText *)(m_pScene.createNode("Text"));
Text314->setString(new CString[2]{", ","3,07 m "}, 2);
Text314->setLength(new float[1]{0}, 1);
CFontStyle* FontStyle315 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle315->setFamily(new CString[1]{"SANS"}, 1);
FontStyle315->setSize(14);
Text314->setFontStyle(*FontStyle315);

Shape311->setGeometry(Text314);

Transform310->addChildren(*Shape311);

Transform303->addChildren(*Transform310);

CTransform* Transform316 = (CTransform *)(m_pScene.createNode("Transform"));
Transform316->setTranslation(new float[3]{-4.21657,0.407074,-2.72127});
Transform316->setRotation(new float[4]{-4.69386e-7,0.70667,0.707544,3.14159});
Transform316->setScale(new float[3]{0.559431,0.559427,0.0237109});
CShape* Shape317 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance318 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material319 = (CMaterial *)(m_pScene.createNode("Material"));
Material319->setUSE("_16");
Appearance318->setMaterial(*Material319);

Shape317->setAppearance(*Appearance318);

CIndexedFaceSet* IndexedFaceSet320 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet320->setCreaseAngle(0.5);
IndexedFaceSet320->setCoordIndex(new int[17]{6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1});
CCoordinate* Coordinate321 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate321->setPoint(new float[21]{2.70793,1,1,2.70793,1,-1,-0.655345,1,-2.5162,-0.655344,1,2.38816,-1,1,0,-0.652593,1,-1,-0.652593,1,1});
IndexedFaceSet320->setCoord(*Coordinate321);

Shape317->setGeometry(IndexedFaceSet320);

Transform316->addChildren(*Shape317);

Transform303->addChildren(*Transform316);

Transform302->addChildren(*Transform303);

CTransform* Transform322 = (CTransform *)(m_pScene.createNode("Transform"));
Transform322->setTranslation(new float[3]{-5.80014,0.00851905,5.18821});
Transform322->setRotation(new float[4]{0,1,0,4.71239});
Transform322->setScale(new float[3]{0.999999,1,0.999999});
CTransform* Transform323 = (CTransform *)(m_pScene.createNode("Transform"));
Transform323->setTranslation(new float[3]{-6.80953,0.404034,-2.72127});
Transform323->setRotation(new float[4]{1,0,0,1.57203});
Transform323->setScale(new float[3]{0.559431,0.559428,0.0237109});
CShape* Shape324 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance325 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material326 = (CMaterial *)(m_pScene.createNode("Material"));
Material326->setUSE("_16");
Appearance325->setMaterial(*Material326);

Shape324->setAppearance(*Appearance325);

CIndexedFaceSet* IndexedFaceSet327 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet327->setCreaseAngle(0.5);
IndexedFaceSet327->setCoordIndex(new int[17]{6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1});
CCoordinate* Coordinate328 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate328->setPoint(new float[21]{-0.033983,1,1,-0.033983,1,-1,-0.655345,1,-2.5162,-0.655344,1,2.38816,-1,1,0,-0.652593,1,-1,-0.652593,1,1});
IndexedFaceSet327->setCoord(*Coordinate328);

Shape324->setGeometry(IndexedFaceSet327);

Transform323->addChildren(*Shape324);

Transform322->addChildren(*Transform323);

CTransform* Transform329 = (CTransform *)(m_pScene.createNode("Transform"));
Transform329->setTranslation(new float[3]{-4.90441,0.407073,-2.72127});
Transform329->setRotation(new float[4]{-4.69386e-7,0.70667,0.707544,3.14159});
Transform329->setScale(new float[3]{0.559431,0.559427,0.0237109});
CShape* Shape330 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance331 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material332 = (CMaterial *)(m_pScene.createNode("Material"));
Material332->setUSE("_16");
Appearance331->setMaterial(*Material332);

Shape330->setAppearance(*Appearance331);

CIndexedFaceSet* IndexedFaceSet333 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet333->setCreaseAngle(0.5);
IndexedFaceSet333->setCoordIndex(new int[17]{6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1});
CCoordinate* Coordinate334 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate334->setPoint(new float[21]{1.93363,1,1,1.93363,1,-1,1.37266,1,-2.5162,1.37266,1,2.38816,1.028,1,0,1.37541,1,-1,1.37541,1,1});
IndexedFaceSet333->setCoord(*Coordinate334);

Shape330->setGeometry(IndexedFaceSet333);

Transform329->addChildren(*Shape330);

Transform322->addChildren(*Transform329);

Transform302->addChildren(*Transform322);

CTransform* Transform335 = (CTransform *)(m_pScene.createNode("Transform"));
Transform335->setTranslation(new float[3]{-6.40914,0.213304,-6.55965});
Transform335->setRotation(new float[4]{0,1,0,1.57079});
Transform335->setScale(new float[3]{0.999998,1,0.999998});
Transform302->addChildren(*Transform335);

CTransform* Transform336 = (CTransform *)(m_pScene.createNode("Transform"));
Transform336->setTranslation(new float[3]{0,0.0117434,0});
CTransform* Transform337 = (CTransform *)(m_pScene.createNode("Transform"));
Transform337->setTranslation(new float[3]{-8.56687,0.302342,0.530606});
Transform337->setRotation(new float[4]{4.40721e-10,1,4.40721e-10,1.57079});
Transform337->setScale(new float[3]{0.02,0.02,0.02});
Transform337->setScaleOrientation(new float[4]{2.03034e-10,1,-1.07407e-10,1.5708});
CShape* Shape338 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance339 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material340 = (CMaterial *)(m_pScene.createNode("Material"));
Material340->setUSE("_16");
Appearance339->setMaterial(*Material340);

Shape338->setAppearance(*Appearance339);

CText* Text341 = (CText *)(m_pScene.createNode("Text"));
Text341->setString(new CString[2]{", ","1,00 m "}, 2);
Text341->setLength(new float[1]{0}, 1);
CFontStyle* FontStyle342 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle342->setFamily(new CString[1]{"SANS"}, 1);
FontStyle342->setSize(14);
Text341->setFontStyle(*FontStyle342);

Shape338->setGeometry(Text341);

Transform337->addChildren(*Shape338);

Transform336->addChildren(*Transform337);

CTransform* Transform343 = (CTransform *)(m_pScene.createNode("Transform"));
Transform343->setTranslation(new float[3]{-9.13041,0.387792,-1.18209});
Transform343->setRotation(new float[4]{0.577587,0.576875,0.577589,4.18808});
Transform343->setScale(new float[3]{0.55943,0.559426,0.0237109});
CShape* Shape344 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance345 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material346 = (CMaterial *)(m_pScene.createNode("Material"));
Material346->setUSE("_16");
Appearance345->setMaterial(*Material346);

Shape344->setAppearance(*Appearance345);

CIndexedFaceSet* IndexedFaceSet347 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet347->setCreaseAngle(0.5);
IndexedFaceSet347->setCoordIndex(new int[17]{6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1});
CCoordinate* Coordinate348 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate348->setPoint(new float[21]{1.5517,1,1,1.5517,1,-1,1.37266,1,-2.5162,1.37266,1,2.38816,1.028,1,0,1.37541,1,-1,1.37541,1,1});
IndexedFaceSet347->setCoord(*Coordinate348);

Shape344->setGeometry(IndexedFaceSet347);

Transform343->addChildren(*Shape344);

Transform336->addChildren(*Transform343);

CTransform* Transform349 = (CTransform *)(m_pScene.createNode("Transform"));
Transform349->setTranslation(new float[3]{-9.13042,0.384754,0.249861});
Transform349->setRotation(new float[4]{0.577589,0.576874,-0.577588,2.09511});
Transform349->setScale(new float[3]{0.55943,0.559427,0.0237109});
CShape* Shape350 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance351 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material352 = (CMaterial *)(m_pScene.createNode("Material"));
Material352->setUSE("_16");
Appearance351->setMaterial(*Material352);

Shape350->setAppearance(*Appearance351);

CIndexedFaceSet* IndexedFaceSet353 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet353->setCreaseAngle(0.5);
IndexedFaceSet353->setCoordIndex(new int[17]{6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1});
CCoordinate* Coordinate354 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate354->setPoint(new float[21]{-0.491838,1,1,-0.491838,1,-1,-0.655345,1,-2.5162,-0.655344,1,2.38816,-1,1,0,-0.652593,1,-1,-0.652593,1,1});
IndexedFaceSet353->setCoord(*Coordinate354);

Shape350->setGeometry(IndexedFaceSet353);

Transform349->addChildren(*Shape350);

Transform336->addChildren(*Transform349);

Transform302->addChildren(*Transform336);

CTransform* Transform355 = (CTransform *)(m_pScene.createNode("Transform"));
Transform355->setTranslation(new float[3]{0,0.0163077,-1.56789});
CTransform* Transform356 = (CTransform *)(m_pScene.createNode("Transform"));
Transform356->setTranslation(new float[3]{-8.56687,0.302342,0.6137});
Transform356->setRotation(new float[4]{4.40721e-10,1,4.40721e-10,1.57079});
Transform356->setScale(new float[3]{0.02,0.02,0.02});
Transform356->setScaleOrientation(new float[4]{4.96699e-10,1,-4.34624e-10,1.5708});
CShape* Shape357 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance358 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material359 = (CMaterial *)(m_pScene.createNode("Material"));
Material359->setUSE("_16");
Appearance358->setMaterial(*Material359);

Shape357->setAppearance(*Appearance358);

CText* Text360 = (CText *)(m_pScene.createNode("Text"));
Text360->setString(new CString[2]{", ","1,10 m "}, 2);
Text360->setLength(new float[1]{0}, 1);
CFontStyle* FontStyle361 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle361->setFamily(new CString[1]{"SANS"}, 1);
FontStyle361->setSize(14);
Text360->setFontStyle(*FontStyle361);

Shape357->setGeometry(Text360);

Transform356->addChildren(*Shape357);

Transform355->addChildren(*Transform356);

CTransform* Transform362 = (CTransform *)(m_pScene.createNode("Transform"));
Transform362->setTranslation(new float[3]{-9.13041,0.387792,-1.18209});
Transform362->setRotation(new float[4]{0.577587,0.576875,0.577589,4.18808});
Transform362->setScale(new float[3]{0.55943,0.559427,0.0237109});
Transform362->setScaleOrientation(new float[4]{-0.0000087291,5.78445e-7,-1,0.00468343});
CShape* Shape363 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance364 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material365 = (CMaterial *)(m_pScene.createNode("Material"));
Material365->setUSE("_16");
Appearance364->setMaterial(*Material365);

Shape363->setAppearance(*Appearance364);

CIndexedFaceSet* IndexedFaceSet366 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet366->setCreaseAngle(0.5);
IndexedFaceSet366->setCoordIndex(new int[17]{6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1});
CCoordinate* Coordinate367 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate367->setPoint(new float[21]{1.6792,1,1,1.6792,1,-1,1.37266,1,-2.5162,1.37266,1,2.38816,1.028,1,0,1.37541,1,-1,1.37541,1,1});
IndexedFaceSet366->setCoord(*Coordinate367);

Shape363->setGeometry(IndexedFaceSet366);

Transform362->addChildren(*Shape363);

Transform355->addChildren(*Transform362);

CTransform* Transform368 = (CTransform *)(m_pScene.createNode("Transform"));
Transform368->setTranslation(new float[3]{-9.13042,0.384754,0.396738});
Transform368->setRotation(new float[4]{0.577589,0.576874,-0.577588,2.09511});
Transform368->setScale(new float[3]{0.55943,0.559427,0.0237109});
Transform368->setScaleOrientation(new float[4]{-4.65982e-7,8.63403e-7,1,0.00775123});
CShape* Shape369 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance370 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material371 = (CMaterial *)(m_pScene.createNode("Material"));
Material371->setUSE("_16");
Appearance370->setMaterial(*Material371);

Shape369->setAppearance(*Appearance370);

CIndexedFaceSet* IndexedFaceSet372 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet372->setCreaseAngle(0.5);
IndexedFaceSet372->setCoordIndex(new int[17]{6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1});
CCoordinate* Coordinate373 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate373->setPoint(new float[21]{-0.40077,1,1,-0.40077,1,-1,-0.655345,1,-2.5162,-0.655344,1,2.38816,-1,1,0,-0.652593,1,-1,-0.652593,1,1});
IndexedFaceSet372->setCoord(*Coordinate373);

Shape369->setGeometry(IndexedFaceSet372);

Transform368->addChildren(*Shape369);

Transform355->addChildren(*Transform368);

Transform302->addChildren(*Transform355);

CTransform* Transform374 = (CTransform *)(m_pScene.createNode("Transform"));
Transform374->setTranslation(new float[3]{-12.2407,-0.00907715,-1.16446});
Transform374->setRotation(new float[4]{0.0000280045,1,0.000618907,3.14159});
Transform374->setScale(new float[3]{1,0.999999,1});
CTransform* Transform375 = (CTransform *)(m_pScene.createNode("Transform"));
Transform375->setTranslation(new float[3]{-8.04131,0.404034,-2.72127});
Transform375->setRotation(new float[4]{1,0,0,1.57203});
Transform375->setScale(new float[3]{0.559431,0.559428,0.0237109});
CShape* Shape376 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance377 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material378 = (CMaterial *)(m_pScene.createNode("Material"));
Material378->setUSE("_16");
Appearance377->setMaterial(*Material378);

Shape376->setAppearance(*Appearance377);

CIndexedFaceSet* IndexedFaceSet379 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet379->setCreaseAngle(0.5);
IndexedFaceSet379->setCoordIndex(new int[17]{6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1});
CCoordinate* Coordinate380 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate380->setPoint(new float[21]{2.55351,1,1,2.55351,1,-1,-0.655345,1,-2.5162,-0.655344,1,2.38816,-1,1,0,-0.652593,1,-1,-0.652593,1,1});
IndexedFaceSet379->setCoord(*Coordinate380);

Shape376->setGeometry(IndexedFaceSet379);

Transform375->addChildren(*Shape376);

Transform374->addChildren(*Transform375);

CTransform* Transform381 = (CTransform *)(m_pScene.createNode("Transform"));
Transform381->setTranslation(new float[3]{-6.59348,0.323395,-2.16191});
Transform381->setScale(new float[3]{0.02,0.02,0.02});
CShape* Shape382 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance383 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material384 = (CMaterial *)(m_pScene.createNode("Material"));
Material384->setUSE("_16");
Appearance383->setMaterial(*Material384);

Shape382->setAppearance(*Appearance383);

CText* Text385 = (CText *)(m_pScene.createNode("Text"));
Text385->setString(new CString[2]{", ","3,07 m "}, 2);
Text385->setLength(new float[1]{0}, 1);
CFontStyle* FontStyle386 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle386->setFamily(new CString[1]{"SANS"}, 1);
FontStyle386->setSize(14);
Text385->setFontStyle(*FontStyle386);

Shape382->setGeometry(Text385);

Transform381->addChildren(*Shape382);

Transform374->addChildren(*Transform381);

CTransform* Transform387 = (CTransform *)(m_pScene.createNode("Transform"));
Transform387->setTranslation(new float[3]{-4.21657,0.407074,-2.72127});
Transform387->setRotation(new float[4]{-4.69386e-7,0.70667,0.707544,3.14159});
Transform387->setScale(new float[3]{0.559431,0.559427,0.0237109});
CShape* Shape388 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance389 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material390 = (CMaterial *)(m_pScene.createNode("Material"));
Material390->setUSE("_16");
Appearance389->setMaterial(*Material390);

Shape388->setAppearance(*Appearance389);

CIndexedFaceSet* IndexedFaceSet391 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet391->setCreaseAngle(0.5);
IndexedFaceSet391->setCoordIndex(new int[17]{6,0,1,5,-1,5,2,4,-1,3,6,4,-1,6,5,4,-1});
CCoordinate* Coordinate392 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate392->setPoint(new float[21]{2.70793,1,1,2.70793,1,-1,-0.655345,1,-2.5162,-0.655344,1,2.38816,-1,1,0,-0.652593,1,-1,-0.652593,1,1});
IndexedFaceSet391->setCoord(*Coordinate392);

Shape388->setGeometry(IndexedFaceSet391);

Transform387->addChildren(*Shape388);

Transform374->addChildren(*Transform387);

Transform302->addChildren(*Transform374);

CTransform* Transform393 = (CTransform *)(m_pScene.createNode("Transform"));
Transform393->setTranslation(new float[3]{-3.6424,0.320009,-1.6462});
Transform393->setRotation(new float[4]{0,1,0,4.71238});
Transform393->setScale(new float[3]{0.02,0.02,0.02});
CShape* Shape394 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance395 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material396 = (CMaterial *)(m_pScene.createNode("Material"));
Material396->setAmbientIntensity(0);
Material396->setDiffuseColor(new float[3]{0,0,0});
Material396->setEmissiveColor(new float[3]{0,0.0958378,0.297872});
Material396->setShininess(0);
Appearance395->setMaterial(*Material396);

Shape394->setAppearance(*Appearance395);

CText* Text397 = (CText *)(m_pScene.createNode("Text"));
Text397->setString(new CString[2]{", ","1,21 m "}, 2);
Text397->setLength(new float[1]{0}, 1);
CFontStyle* FontStyle398 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle398->setFamily(new CString[1]{"SANS"}, 1);
FontStyle398->setSize(14);
Text397->setFontStyle(*FontStyle398);

Shape394->setGeometry(Text397);

Transform393->addChildren(*Shape394);

Transform302->addChildren(*Transform393);

group->addChildren(*Transform302);

CROUTE* ROUTE399 = new CROUTE();
ROUTE399->setFromNode("Touch_1");
ROUTE399->setFromField("touchTime");
ROUTE399->setToNode("Time_1");
ROUTE399->setToField("set_startTime");
group->addChildren(*ROUTE399);

CROUTE* ROUTE400 = new CROUTE();
ROUTE400->setFromNode("Time_1");
ROUTE400->setFromField("fraction_changed");
ROUTE400->setToNode("UnnamedTransformRotationInterp_1");
ROUTE400->setToField("set_fraction");
group->addChildren(*ROUTE400);

CROUTE* ROUTE401 = new CROUTE();
ROUTE401->setFromNode("Time_1");
ROUTE401->setFromField("fraction_changed");
ROUTE401->setToNode("UnnamedShapeRotationInterp_1");
ROUTE401->setToField("set_fraction");
group->addChildren(*ROUTE401);

CROUTE* ROUTE402 = new CROUTE();
ROUTE402->setFromNode("UnnamedShapeRotationInterp_1");
ROUTE402->setFromField("value_changed");
ROUTE402->setToNode("_3");
ROUTE402->setToField("set_rotation");
group->addChildren(*ROUTE402);

CROUTE* ROUTE403 = new CROUTE();
ROUTE403->setFromNode("UnnamedTransformRotationInterp_1");
ROUTE403->setFromField("value_changed");
ROUTE403->setToNode("_1");
ROUTE403->setToField("set_rotation");
group->addChildren(*ROUTE403);

CROUTE* ROUTE404 = new CROUTE();
ROUTE404->setFromNode("Touch_2");
ROUTE404->setFromField("touchTime");
ROUTE404->setToNode("Time_2");
ROUTE404->setToField("set_startTime");
group->addChildren(*ROUTE404);

CROUTE* ROUTE405 = new CROUTE();
ROUTE405->setFromNode("Time_2");
ROUTE405->setFromField("fraction_changed");
ROUTE405->setToNode("UnnamedTransformRotationInterp_2");
ROUTE405->setToField("set_fraction");
group->addChildren(*ROUTE405);

CROUTE* ROUTE406 = new CROUTE();
ROUTE406->setFromNode("Time_2");
ROUTE406->setFromField("fraction_changed");
ROUTE406->setToNode("UnnamedShapeRotationInterp_2");
ROUTE406->setToField("set_fraction");
group->addChildren(*ROUTE406);

CROUTE* ROUTE407 = new CROUTE();
ROUTE407->setFromNode("UnnamedShapeRotationInterp_2");
ROUTE407->setFromField("value_changed");
ROUTE407->setToNode("_7");
ROUTE407->setToField("set_rotation");
group->addChildren(*ROUTE407);

CROUTE* ROUTE408 = new CROUTE();
ROUTE408->setFromNode("UnnamedTransformRotationInterp_2");
ROUTE408->setFromField("value_changed");
ROUTE408->setToNode("_5");
ROUTE408->setToField("set_rotation");
group->addChildren(*ROUTE408);

CROUTE* ROUTE409 = new CROUTE();
ROUTE409->setFromNode("_switch");
ROUTE409->setFromField("whichChoice_changed");
ROUTE409->setToNode("_10");
ROUTE409->setToField("set_whichChoice");
group->addChildren(*ROUTE409);

CROUTE* ROUTE410 = new CROUTE();
ROUTE410->setFromNode("_15");
ROUTE410->setFromField("touchTime");
ROUTE410->setToNode("_switch");
ROUTE410->setToField("set_touchTime");
group->addChildren(*ROUTE410);

X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
