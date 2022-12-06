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
Ccomponent* component2 = new Ccomponent();
component2->setName("H-Anim");
component2->setLevel(2);
head1->addComponent(*component2);

//TODO fix X3D Tooltips entry for HAnim component
Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("JoeSkeletonSiteSkinSaluteWalk.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("Attempting to show skeleton, skin, sites and animation");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("reference");
meta5->setContent("JoeSkeletonSiteSkinSaluteWalk.original.x3dv");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("creator");
meta6->setContent("Joe D. Williams");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("created");
meta7->setContent("9 January 2004");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("translated");
meta8->setContent("4 December 2022");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("modified");
meta9->setContent("4 December 2022");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("translator");
meta10->setContent("Michalis Kamburelis");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("translator");
meta11->setContent("Don Brutzman");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("identifier");
meta12->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/MotionAnimation/JoeSkeletonSiteSkinSaluteWalk.x3d");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("generator");
meta13->setContent("tovrmlx3d, https://castle-engine.io/view3dscene.php#section_converting");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("generator");
meta14->setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("filename");
meta15->setContent("hanimLOA3A8320080320..x3dv 20080627");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("warning");
meta16->setContent("Under development, numerous errors and warnings");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("TODO");
meta17->setContent("Provide feedback to tovrmlx3d converter");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("TODO");
meta18->setContent("HAnimJoint cannot contain X3DChildNode elements, only HAnimJoint HAnimSegmet HAnimSite - improve diagnostics.");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("TODO");
meta19->setContent("ensure name prefix \"Joe_\" applied to all contained DEF values (not name field), perhaps correction automatically applied by X3DTidy");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("TODO");
meta20->setContent("This is an HAnimV1 loa model, might need to convert to X3D4 to note loa value");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("license");
meta21->setContent("../license.html");
head1->addMeta(*meta21);

X3D0->setHead(*head1);

CScene* Scene22 = new CScene();
CGroup* Group23 = (CGroup *)(m_pScene.createNode("Group"));
Group23->setDEF("JointCenters_WorldInfo");
CWorldInfo* WorldInfo24 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo24->setInfo(new CString[1]{"By Joe for Joe"}, 1);
WorldInfo24->setTitle("HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3");
Group23->addChildren(*WorldInfo24);

group->addChildren(*Group23);

CGroup* Group25 = (CGroup *)(m_pScene.createNode("Group"));
CTransform* Transform26 = (CTransform *)(m_pScene.createNode("Transform"));
Transform26->setScale(new float[3]{10,10,10});
Transform26->setTranslation(new float[3]{0,3,0});
CShape* Shape27 = (CShape *)(m_pScene.createNode("Shape"));
Shape27->setDEF("jointbox");
CIndexedFaceSet* IndexedFaceSet28 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet28->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet28->setCreaseAngle(0.10000000149011612);
CCoordinate* Coordinate29 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate29->setPoint(new float[18]{0,0.009999999776482582,0,-0.009999999776482582,0,0,0,0,0.015699999406933784,0.009999999776482582,0,0,0,0,-0.009999999776482582,0,-0.009999999776482582,0});
IndexedFaceSet28->setCoord(*Coordinate29);

CColor* Color30 = (CColor *)(m_pScene.createNode("Color"));
Color30->setColor(new float[18]{1,0,0,0,0,1,0,1,0,1,1,1,0,1,1,1,1,0});
IndexedFaceSet28->setColor(*Color30);

Shape27->setGeometry(IndexedFaceSet28);

CAppearance* Appearance31 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material32 = (CMaterial *)(m_pScene.createNode("Material"));
Material32->setAmbientIntensity(0.5);
Material32->setDiffuseColor(new float[3]{0,0,0});
Material32->setShininess(1);
Material32->setTransparency(1);
Appearance31->setMaterial(*Material32);

Shape27->setAppearance(*Appearance31);

Transform26->addChildren(*Shape27);

Group25->addChildren(*Transform26);

CTransform* Transform33 = (CTransform *)(m_pScene.createNode("Transform"));
Transform33->setScale(new float[3]{0.10000000149011612,0.10000000149011612,0.10000000149011612});
Transform33->setTranslation(new float[3]{0,0.10000000149011612,0});
CShape* Shape34 = (CShape *)(m_pScene.createNode("Shape"));
Shape34->setDEF("sitebox");
CIndexedFaceSet* IndexedFaceSet35 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet35->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet35->setCreaseAngle(0.10000000149011612);
CCoordinate* Coordinate36 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate36->setPoint(new float[18]{0,0.009999999776482582,0,-0.009999999776482582,0,0,0,0,0.009999999776482582,0.009999999776482582,0,0,0,0,-0.009999999776482582,0,-0.009999999776482582,0});
IndexedFaceSet35->setCoord(*Coordinate36);

Shape34->setGeometry(IndexedFaceSet35);

CAppearance* Appearance37 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material38 = (CMaterial *)(m_pScene.createNode("Material"));
Material38->setAmbientIntensity(1);
Material38->setDiffuseColor(new float[3]{1,0,0});
Material38->setEmissiveColor(new float[3]{1,0,0});
Material38->setShininess(0.699999988079071);
Material38->setSpecularColor(new float[3]{1,0,0});
Material38->setTransparency(0.6000000238418579);
Appearance37->setMaterial(*Material38);

Shape34->setAppearance(*Appearance37);

Transform33->addChildren(*Shape34);

Group25->addChildren(*Transform33);

CTransform* Transform39 = (CTransform *)(m_pScene.createNode("Transform"));
Transform39->setScale(new float[3]{0.10000000149011612,0.10000000149011612,0.10000000149011612});
Transform39->setTranslation(new float[3]{0,0.20000000298023224,0});
CShape* Shape40 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet41 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet41->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate42 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate42->setPoint(new float[6]{0,0,0,0,0.00009999999747378752,0});
IndexedLineSet41->setCoord(*Coordinate42);

Shape40->setGeometry(IndexedLineSet41);

CAppearance* Appearance43 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance43->setDEF("SegmentLine");
CMaterial* Material44 = (CMaterial *)(m_pScene.createNode("Material"));
Material44->setDiffuseColor(new float[3]{0,1,0});
Material44->setEmissiveColor(new float[3]{0,1,0});
Material44->setSpecularColor(new float[3]{0,1,0});
Material44->setTransparency(0.800000011920929);
Appearance43->setMaterial(*Material44);

Shape40->setAppearance(*Appearance43);

Transform39->addChildren(*Shape40);

Group25->addChildren(*Transform39);

CTransform* Transform45 = (CTransform *)(m_pScene.createNode("Transform"));
Transform45->setScale(new float[3]{0.10000000149011612,0.10000000149011612,0.10000000149011612});
Transform45->setTranslation(new float[3]{0,0.30000001192092896,0});
CShape* Shape46 = (CShape *)(m_pScene.createNode("Shape"));
Shape46->setDEF("skinsphere");
CSphere* Sphere47 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere47->setRadius(0.004999999888241291);
Shape46->setGeometry(Sphere47);

CAppearance* Appearance48 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material49 = (CMaterial *)(m_pScene.createNode("Material"));
Material49->setAmbientIntensity(0.5);
Material49->setDiffuseColor(new float[3]{0,1,0});
Material49->setEmissiveColor(new float[3]{0,1,0});
Material49->setShininess(1);
Material49->setSpecularColor(new float[3]{0,1,0});
Appearance48->setMaterial(*Material49);

Shape46->setAppearance(*Appearance48);

Transform45->addChildren(*Shape46);

Group25->addChildren(*Transform45);

group->addChildren(*Group25);

CGroup* Group50 = (CGroup *)(m_pScene.createNode("Group"));
Group50->setDEF("SpecHumanoid");
CGroup* Group51 = (CGroup *)(m_pScene.createNode("Group"));
Group51->setDEF("JoeISOHumanoid");
CHAnimHumanoid* HAnimHumanoid52 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid52->setName("Joe");
HAnimHumanoid52->setDEF("JoeHumanoid");
HAnimHumanoid52->setVersion("1.0");
CHAnimJoint* HAnimJoint53 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint53->setName("HumanoidRoot");
HAnimJoint53->setDEF("Joe_HumanoidRoot");
HAnimJoint53->setCenter(new float[3]{0,0.875,0});
HAnimJoint53->setTranslation(new float[3]{0,0.875,0});
HAnimJoint53->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint53->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment54 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment54->setName("sacrum");
HAnimSegment54->setDEF("Joe_sacrum");
CShape* Shape55 = (CShape *)(m_pScene.createNode("Shape"));
Shape55->setUSE("jointbox");
HAnimSegment54->addChildren(*Shape55);

CShape* Shape56 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet57 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet57->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate58 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate58->setPoint(new float[6]{0,0.875,0,0,0.9200000166893005,0});
IndexedLineSet57->setCoord(*Coordinate58);

Shape56->setGeometry(IndexedLineSet57);

CAppearance* Appearance59 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance59->setUSE("SegmentLine");
Shape56->setAppearance(*Appearance59);

HAnimSegment54->addChildren(*Shape56);

HAnimJoint53->addChildren(*HAnimSegment54);

CHAnimJoint* HAnimJoint60 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint60->setName("sacroiliac");
HAnimJoint60->setDEF("Joe_sacroiliac");
HAnimJoint60->setCenter(new float[3]{0,0.9200000166893005,0});
HAnimJoint60->setSkinCoordIndex(new int[13]{17,19,20,21,22,23,26,27,73,82,89,91,93});
HAnimJoint60->setSkinCoordWeight(new float[13]{1,1,1,1,1,1,1,1,1,1,0.3499999940395355,0.3499999940395355,1}, 13);
HAnimJoint60->setTranslation(new float[3]{0,0.914900004863739,0.0015999999595806003});
HAnimJoint60->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint60->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment61 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment61->setName("pelvis");
HAnimSegment61->setDEF("Joe_pelvis");
CShape* Shape62 = (CShape *)(m_pScene.createNode("Shape"));
Shape62->setUSE("jointbox");
HAnimSegment61->addChildren(*Shape62);

CShape* Shape63 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet64 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet64->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
CCoordinate* Coordinate65 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate65->setPoint(new float[12]{0,0.9200000166893005,0,0.09610000252723694,0.9124000072479248,0,-0.0949999988079071,0.9171000123023987,0.002899999963119626,0,1.0449999570846558,-0.0949999988079071});
IndexedLineSet64->setCoord(*Coordinate65);

Shape63->setGeometry(IndexedLineSet64);

CAppearance* Appearance66 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance66->setUSE("SegmentLine");
Shape63->setAppearance(*Appearance66);

HAnimSegment61->addChildren(*Shape63);

CHAnimSite* HAnimSite67 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite67->setName("l_iliocristale");
HAnimSite67->setDEF("Joe_l_iliocristale");
HAnimSite67->setTranslation(new float[3]{0.14249999821186066,1.065000057220459,0.0032999999821186066});
CShape* Shape68 = (CShape *)(m_pScene.createNode("Shape"));
Shape68->setUSE("sitebox");
HAnimSite67->addChildren(*Shape68);

HAnimSegment61->addChildren(*HAnimSite67);

CHAnimSite* HAnimSite69 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite69->setName("l_trochanterion");
HAnimSite69->setDEF("Joe_l_trochanterion");
HAnimSite69->setTranslation(new float[3]{0.15000000596046448,0.8999999761581421,-0.009999999776482582});
CShape* Shape70 = (CShape *)(m_pScene.createNode("Shape"));
Shape70->setUSE("sitebox");
HAnimSite69->addChildren(*Shape70);

HAnimSegment61->addChildren(*HAnimSite69);

CHAnimSite* HAnimSite71 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite71->setName("r_iliocristale");
HAnimSite71->setDEF("Joe_r_iliocristale");
HAnimSite71->setTranslation(new float[3]{-0.14249999821186066,1.065000057220459,0.0032999999821186066});
CShape* Shape72 = (CShape *)(m_pScene.createNode("Shape"));
Shape72->setUSE("sitebox");
HAnimSite71->addChildren(*Shape72);

HAnimSegment61->addChildren(*HAnimSite71);

CHAnimSite* HAnimSite73 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite73->setName("r_trochanterion");
HAnimSite73->setDEF("Joe_r_trochanterion");
HAnimSite73->setTranslation(new float[3]{-0.15000000596046448,0.8999999761581421,-0.009999999776482582});
CShape* Shape74 = (CShape *)(m_pScene.createNode("Shape"));
Shape74->setUSE("sitebox");
HAnimSite73->addChildren(*Shape74);

HAnimSegment61->addChildren(*HAnimSite73);

CHAnimSite* HAnimSite75 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite75->setName("l_asis");
HAnimSite75->setDEF("Joe_l_asis");
HAnimSite75->setTranslation(new float[3]{0.09350000321865082,1.0299999713897705,0.07500000298023224});
CShape* Shape76 = (CShape *)(m_pScene.createNode("Shape"));
Shape76->setUSE("sitebox");
HAnimSite75->addChildren(*Shape76);

HAnimSegment61->addChildren(*HAnimSite75);

CHAnimSite* HAnimSite77 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite77->setName("r_asis");
HAnimSite77->setDEF("Joe_r_asis");
HAnimSite77->setTranslation(new float[3]{-0.09350000321865082,1.0299999713897705,0.07500000298023224});
CShape* Shape78 = (CShape *)(m_pScene.createNode("Shape"));
Shape78->setUSE("sitebox");
HAnimSite77->addChildren(*Shape78);

HAnimSegment61->addChildren(*HAnimSite77);

CHAnimSite* HAnimSite79 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite79->setName("l_psis");
HAnimSite79->setDEF("Joe_l_psis");
HAnimSite79->setTranslation(new float[3]{0.07729999721050262,1.0190000534057617,-0.11999999731779099});
CShape* Shape80 = (CShape *)(m_pScene.createNode("Shape"));
Shape80->setUSE("sitebox");
HAnimSite79->addChildren(*Shape80);

HAnimSegment61->addChildren(*HAnimSite79);

CHAnimSite* HAnimSite81 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite81->setName("r_psis");
HAnimSite81->setDEF("Joe_r_psis");
HAnimSite81->setTranslation(new float[3]{-0.07729999721050262,1.0190000534057617,-0.11999999731779099});
CShape* Shape82 = (CShape *)(m_pScene.createNode("Shape"));
Shape82->setUSE("sitebox");
HAnimSite81->addChildren(*Shape82);

HAnimSegment61->addChildren(*HAnimSite81);

CHAnimSite* HAnimSite83 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite83->setName("floormarker");
HAnimSite83->setDEF("Joe_floormarker");
CTransform* Transform84 = (CTransform *)(m_pScene.createNode("Transform"));
Transform84->setScale(new float[3]{3,3,3});
CShape* Shape85 = (CShape *)(m_pScene.createNode("Shape"));
Shape85->setUSE("sitebox");
Transform84->addChildren(*Shape85);

HAnimSite83->addChildren(*Transform84);

HAnimSegment61->addChildren(*HAnimSite83);

CHAnimSite* HAnimSite86 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite86->setName("crotch");
HAnimSite86->setDEF("Joe_crotch");
HAnimSite86->setTranslation(new float[3]{0,0.8700000047683716,-0.02199999988079071});
CShape* Shape87 = (CShape *)(m_pScene.createNode("Shape"));
Shape87->setUSE("sitebox");
HAnimSite86->addChildren(*Shape87);

HAnimSegment61->addChildren(*HAnimSite86);

CTransform* Transform88 = (CTransform *)(m_pScene.createNode("Transform"));
Transform88->setTranslation(new float[3]{0,0.9200000166893005,0.07999999821186066});
CShape* Shape89 = (CShape *)(m_pScene.createNode("Shape"));
Shape89->setUSE("skinsphere");
Transform88->addChildren(*Shape89);

HAnimSegment61->addChildren(*Transform88);

CTransform* Transform90 = (CTransform *)(m_pScene.createNode("Transform"));
Transform90->setTranslation(new float[3]{0,0.8700000047683716,-0.02199999988079071});
CShape* Shape91 = (CShape *)(m_pScene.createNode("Shape"));
Shape91->setUSE("skinsphere");
Transform90->addChildren(*Shape91);

HAnimSegment61->addChildren(*Transform90);

HAnimJoint60->addChildren(*HAnimSegment61);

CHAnimJoint* HAnimJoint92 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint92->setName("l_hip");
HAnimJoint92->setDEF("Joe_l_hip");
HAnimJoint92->setCenter(new float[3]{0.10000000149011612,0.9200000166893005,0});
HAnimJoint92->setSkinCoordIndex(new int[6]{89,90,94,95,96,97});
HAnimJoint92->setSkinCoordWeight(new float[6]{0.6499999761581421,1,1,1,1,1}, 6);
HAnimJoint92->setTranslation(new float[3]{0.10000000149011612,0.9200000166893005,0});
HAnimJoint92->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint92->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment93 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment93->setName("l_thigh");
HAnimSegment93->setDEF("Joe_l_thigh");
CShape* Shape94 = (CShape *)(m_pScene.createNode("Shape"));
Shape94->setUSE("jointbox");
HAnimSegment93->addChildren(*Shape94);

CShape* Shape95 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet96 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet96->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate97 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate97->setPoint(new float[6]{0.10000000149011612,0.9200000166893005,0,0.11500000208616257,0.4659999907016754,0});
IndexedLineSet96->setCoord(*Coordinate97);

Shape95->setGeometry(IndexedLineSet96);

CAppearance* Appearance98 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance98->setUSE("SegmentLine");
Shape95->setAppearance(*Appearance98);

HAnimSegment93->addChildren(*Shape95);

CHAnimSite* HAnimSite99 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite99->setName("l_knee_crease");
HAnimSite99->setDEF("Joe_l_knee_crease");
HAnimSite99->setTranslation(new float[3]{0.11500000208616257,0.4659999907016754,-0.054999999701976776});
CShape* Shape100 = (CShape *)(m_pScene.createNode("Shape"));
Shape100->setUSE("sitebox");
HAnimSite99->addChildren(*Shape100);

HAnimSegment93->addChildren(*HAnimSite99);

CHAnimSite* HAnimSite101 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite101->setName("l_femoral_lateral_epicn");
HAnimSite101->setDEF("Joe_l_femoral_lateral_epicn");
HAnimSite101->setTranslation(new float[3]{0.17000000178813934,0.4659999907016754,0});
CShape* Shape102 = (CShape *)(m_pScene.createNode("Shape"));
Shape102->setUSE("sitebox");
HAnimSite101->addChildren(*Shape102);

HAnimSegment93->addChildren(*HAnimSite101);

CHAnimSite* HAnimSite103 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite103->setName("l_femoral_medial_epicn");
HAnimSite103->setDEF("Joe_l_femoral_medial_epicn");
HAnimSite103->setTranslation(new float[3]{0.05000000074505806,0.4659999907016754,0});
CShape* Shape104 = (CShape *)(m_pScene.createNode("Shape"));
Shape104->setUSE("sitebox");
HAnimSite103->addChildren(*Shape104);

HAnimSegment93->addChildren(*HAnimSite103);

CTransform* Transform105 = (CTransform *)(m_pScene.createNode("Transform"));
Transform105->setTranslation(new float[3]{0.10000000149011612,0.8999999761581421,0.07750000059604645});
CShape* Shape106 = (CShape *)(m_pScene.createNode("Shape"));
Shape106->setUSE("skinsphere");
Transform105->addChildren(*Shape106);

HAnimSegment93->addChildren(*Transform105);

CTransform* Transform107 = (CTransform *)(m_pScene.createNode("Transform"));
Transform107->setTranslation(new float[3]{0.07900000363588333,0.9200000166893005,-0.14000000059604645});
CShape* Shape108 = (CShape *)(m_pScene.createNode("Shape"));
Shape108->setUSE("skinsphere");
Transform107->addChildren(*Shape108);

HAnimSegment93->addChildren(*Transform107);

CTransform* Transform109 = (CTransform *)(m_pScene.createNode("Transform"));
Transform109->setTranslation(new float[3]{0.17100000381469727,0.6499999761581421,0});
CShape* Shape110 = (CShape *)(m_pScene.createNode("Shape"));
Shape110->setUSE("skinsphere");
Transform109->addChildren(*Shape110);

HAnimSegment93->addChildren(*Transform109);

CTransform* Transform111 = (CTransform *)(m_pScene.createNode("Transform"));
Transform111->setTranslation(new float[3]{0.019999999552965164,0.6499999761581421,0});
CShape* Shape112 = (CShape *)(m_pScene.createNode("Shape"));
Shape112->setUSE("skinsphere");
Transform111->addChildren(*Shape112);

HAnimSegment93->addChildren(*Transform111);

CTransform* Transform113 = (CTransform *)(m_pScene.createNode("Transform"));
Transform113->setTranslation(new float[3]{0.10000000149011612,0.6499999761581421,-0.07999999821186066});
CShape* Shape114 = (CShape *)(m_pScene.createNode("Shape"));
Shape114->setUSE("skinsphere");
Transform113->addChildren(*Shape114);

HAnimSegment93->addChildren(*Transform113);

CTransform* Transform115 = (CTransform *)(m_pScene.createNode("Transform"));
Transform115->setTranslation(new float[3]{0.10000000149011612,0.6499999761581421,0.07000000029802322});
CShape* Shape116 = (CShape *)(m_pScene.createNode("Shape"));
Shape116->setUSE("skinsphere");
Transform115->addChildren(*Shape116);

HAnimSegment93->addChildren(*Transform115);

HAnimJoint92->addChildren(*HAnimSegment93);

CHAnimJoint* HAnimJoint117 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint117->setName("l_knee");
HAnimJoint117->setDEF("Joe_l_knee");
HAnimJoint117->setCenter(new float[3]{0.11500000208616257,0.4659999907016754,0});
HAnimJoint117->setSkinCoordIndex(new int[8]{334,335,336,337,338,339,340,341});
HAnimJoint117->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint117->setTranslation(new float[3]{0.11500000208616257,0.4659999907016754,0});
HAnimJoint117->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint117->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment118 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment118->setName("l_calf");
HAnimSegment118->setDEF("Joe_l_calf");
CShape* Shape119 = (CShape *)(m_pScene.createNode("Shape"));
Shape119->setUSE("jointbox");
HAnimSegment118->addChildren(*Shape119);

CShape* Shape120 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet121 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet121->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate122 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate122->setPoint(new float[6]{0.11500000208616257,0.4659999907016754,0,0.10000000149011612,0.0689999982714653,0});
IndexedLineSet121->setCoord(*Coordinate122);

Shape120->setGeometry(IndexedLineSet121);

CAppearance* Appearance123 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance123->setUSE("SegmentLine");
Shape120->setAppearance(*Appearance123);

HAnimSegment118->addChildren(*Shape120);

CHAnimSite* HAnimSite124 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite124->setName("l_lateral_malleolus");
HAnimSite124->setDEF("Joe_l_lateral_malleolus");
HAnimSite124->setTranslation(new float[3]{0.15000000596046448,0.07000000029802322,0});
CShape* Shape125 = (CShape *)(m_pScene.createNode("Shape"));
Shape125->setUSE("sitebox");
HAnimSite124->addChildren(*Shape125);

HAnimSegment118->addChildren(*HAnimSite124);

CHAnimSite* HAnimSite126 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite126->setName("l_medial_malleolus");
HAnimSite126->setDEF("Joe_l_medial_malleolus");
HAnimSite126->setTranslation(new float[3]{0.08500000089406967,0.0860000029206276,0.012500000186264515});
CShape* Shape127 = (CShape *)(m_pScene.createNode("Shape"));
Shape127->setUSE("sitebox");
HAnimSite126->addChildren(*Shape127);

HAnimSegment118->addChildren(*HAnimSite126);

CTransform* Transform128 = (CTransform *)(m_pScene.createNode("Transform"));
Transform128->setTranslation(new float[3]{0.11500000208616257,0.4659999907016754,0.05999999865889549});
CShape* Shape129 = (CShape *)(m_pScene.createNode("Shape"));
Shape129->setUSE("skinsphere");
Transform128->addChildren(*Shape129);

HAnimSegment118->addChildren(*Transform128);

CTransform* Transform130 = (CTransform *)(m_pScene.createNode("Transform"));
Transform130->setTranslation(new float[3]{0.11500000208616257,0.4659999907016754,-0.054999999701976776});
CShape* Shape131 = (CShape *)(m_pScene.createNode("Shape"));
Shape131->setUSE("skinsphere");
Transform130->addChildren(*Shape131);

HAnimSegment118->addChildren(*Transform130);

CTransform* Transform132 = (CTransform *)(m_pScene.createNode("Transform"));
Transform132->setTranslation(new float[3]{0.17000000178813934,0.4659999907016754,0});
CShape* Shape133 = (CShape *)(m_pScene.createNode("Shape"));
Shape133->setUSE("skinsphere");
Transform132->addChildren(*Shape133);

HAnimSegment118->addChildren(*Transform132);

CTransform* Transform134 = (CTransform *)(m_pScene.createNode("Transform"));
Transform134->setTranslation(new float[3]{0.05000000074505806,0.4659999907016754,0});
CShape* Shape135 = (CShape *)(m_pScene.createNode("Shape"));
Shape135->setUSE("skinsphere");
Transform134->addChildren(*Shape135);

HAnimSegment118->addChildren(*Transform134);

CTransform* Transform136 = (CTransform *)(m_pScene.createNode("Transform"));
Transform136->setTranslation(new float[3]{0.17000000178813934,0.30000001192092896,0});
CShape* Shape137 = (CShape *)(m_pScene.createNode("Shape"));
Shape137->setUSE("skinsphere");
Transform136->addChildren(*Shape137);

HAnimSegment118->addChildren(*Transform136);

CTransform* Transform138 = (CTransform *)(m_pScene.createNode("Transform"));
Transform138->setTranslation(new float[3]{0.05999999865889549,0.30000001192092896,0});
CShape* Shape139 = (CShape *)(m_pScene.createNode("Shape"));
Shape139->setUSE("skinsphere");
Transform138->addChildren(*Shape139);

HAnimSegment118->addChildren(*Transform138);

CTransform* Transform140 = (CTransform *)(m_pScene.createNode("Transform"));
Transform140->setTranslation(new float[3]{0.10000000149011612,0.30000001192092896,-0.05000000074505806});
CShape* Shape141 = (CShape *)(m_pScene.createNode("Shape"));
Shape141->setUSE("skinsphere");
Transform140->addChildren(*Shape141);

HAnimSegment118->addChildren(*Transform140);

CTransform* Transform142 = (CTransform *)(m_pScene.createNode("Transform"));
Transform142->setTranslation(new float[3]{0.10000000149011612,0.30000001192092896,0.05000000074505806});
CShape* Shape143 = (CShape *)(m_pScene.createNode("Shape"));
Shape143->setUSE("skinsphere");
Transform142->addChildren(*Shape143);

HAnimSegment118->addChildren(*Transform142);

HAnimJoint117->addChildren(*HAnimSegment118);

CHAnimJoint* HAnimJoint144 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint144->setName("l_ankle");
HAnimJoint144->setDEF("Joe_l_ankle");
HAnimJoint144->setCenter(new float[3]{0.11500000208616257,0.0689999982714653,0});
HAnimJoint144->setSkinCoordIndex(new int[4]{342,343,344,345});
HAnimJoint144->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint144->setTranslation(new float[3]{0.11500000208616257,0.0689999982714653,0});
HAnimJoint144->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint144->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment145 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment145->setName("l_hindfoot");
HAnimSegment145->setDEF("Joe_l_hindfoot");
CShape* Shape146 = (CShape *)(m_pScene.createNode("Shape"));
Shape146->setUSE("jointbox");
HAnimSegment145->addChildren(*Shape146);

CShape* Shape147 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet148 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet148->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate149 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate149->setPoint(new float[6]{0.10000000149011612,0.0689999982714653,0,0.11500000208616257,0.03099999949336052,0.029999999329447746});
IndexedLineSet148->setCoord(*Coordinate149);

Shape147->setGeometry(IndexedLineSet148);

CAppearance* Appearance150 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance150->setUSE("SegmentLine");
Shape147->setAppearance(*Appearance150);

HAnimSegment145->addChildren(*Shape147);

CHAnimSite* HAnimSite151 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite151->setName("l_sphyrion");
HAnimSite151->setDEF("Joe_l_sphyrion");
HAnimSite151->setTranslation(new float[3]{0.09000000357627869,0.0560000017285347,0.012500000186264515});
CShape* Shape152 = (CShape *)(m_pScene.createNode("Shape"));
Shape152->setUSE("sitebox");
HAnimSite151->addChildren(*Shape152);

HAnimSegment145->addChildren(*HAnimSite151);

CHAnimSite* HAnimSite153 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite153->setName("l_calcaneous_post");
HAnimSite153->setDEF("Joe_l_calcaneous_post");
HAnimSite153->setTranslation(new float[3]{0.11500000208616257,0.03999999910593033,-0.054999999701976776});
CShape* Shape154 = (CShape *)(m_pScene.createNode("Shape"));
Shape154->setUSE("sitebox");
HAnimSite153->addChildren(*Shape154);

HAnimSegment145->addChildren(*HAnimSite153);

CTransform* Transform155 = (CTransform *)(m_pScene.createNode("Transform"));
Transform155->setTranslation(new float[3]{0.15000000596046448,0.07000000029802322,0});
CShape* Shape156 = (CShape *)(m_pScene.createNode("Shape"));
Shape156->setUSE("skinsphere");
Transform155->addChildren(*Shape156);

HAnimSegment145->addChildren(*Transform155);

CTransform* Transform157 = (CTransform *)(m_pScene.createNode("Transform"));
Transform157->setTranslation(new float[3]{0.08500000089406967,0.0860000029206276,0.012500000186264515});
CShape* Shape158 = (CShape *)(m_pScene.createNode("Shape"));
Shape158->setUSE("skinsphere");
Transform157->addChildren(*Shape158);

HAnimSegment145->addChildren(*Transform157);

CTransform* Transform159 = (CTransform *)(m_pScene.createNode("Transform"));
Transform159->setTranslation(new float[3]{0.11500000208616257,0.0689999982714653,-0.04500000178813934});
CShape* Shape160 = (CShape *)(m_pScene.createNode("Shape"));
Shape160->setUSE("skinsphere");
Transform159->addChildren(*Shape160);

HAnimSegment145->addChildren(*Transform159);

CTransform* Transform161 = (CTransform *)(m_pScene.createNode("Transform"));
Transform161->setTranslation(new float[3]{0.11699999868869781,0.09749999642372131,0.061500001698732376});
CShape* Shape162 = (CShape *)(m_pScene.createNode("Shape"));
Shape162->setUSE("skinsphere");
Transform161->addChildren(*Shape162);

HAnimSegment145->addChildren(*Transform161);

HAnimJoint144->addChildren(*HAnimSegment145);

CHAnimJoint* HAnimJoint163 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint163->setName("l_subtalar");
HAnimJoint163->setDEF("Joe_l_subtalar");
HAnimJoint163->setCenter(new float[3]{0.11500000208616257,0.03099999949336052,0.029999999329447746});
HAnimJoint163->setSkinCoordIndex(new int[4]{346,347,348,71});
HAnimJoint163->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint163->setTranslation(new float[3]{0.11500000208616257,0.03099999949336052,0.029999999329447746});
HAnimJoint163->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint163->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment164 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment164->setName("l_midproximal");
HAnimSegment164->setDEF("Joe_l_l_midproximal");
CShape* Shape165 = (CShape *)(m_pScene.createNode("Shape"));
Shape165->setUSE("jointbox");
HAnimSegment164->addChildren(*Shape165);

CShape* Shape166 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet167 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet167->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate168 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate168->setPoint(new float[6]{0.11500000208616257,0.03099999949336052,0.029999999329447746,0.11500000208616257,0.03700000047683716,0.09000000357627869});
IndexedLineSet167->setCoord(*Coordinate168);

Shape166->setGeometry(IndexedLineSet167);

CAppearance* Appearance169 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance169->setUSE("SegmentLine");
Shape166->setAppearance(*Appearance169);

HAnimSegment164->addChildren(*Shape166);

CTransform* Transform170 = (CTransform *)(m_pScene.createNode("Transform"));
Transform170->setTranslation(new float[3]{0.13750000298023224,0.006000000052154064,-0.029999999329447746});
CShape* Shape171 = (CShape *)(m_pScene.createNode("Shape"));
Shape171->setUSE("skinsphere");
Transform170->addChildren(*Shape171);

HAnimSegment164->addChildren(*Transform170);

CTransform* Transform172 = (CTransform *)(m_pScene.createNode("Transform"));
Transform172->setTranslation(new float[3]{0.0949999988079071,0.006000000052154064,-0.029999999329447746});
CShape* Shape173 = (CShape *)(m_pScene.createNode("Shape"));
Shape173->setUSE("skinsphere");
Transform172->addChildren(*Shape173);

HAnimSegment164->addChildren(*Transform172);

CTransform* Transform174 = (CTransform *)(m_pScene.createNode("Transform"));
Transform174->setTranslation(new float[3]{0.11500000208616257,0.014999999664723873,-0.04500000178813934});
CShape* Shape175 = (CShape *)(m_pScene.createNode("Shape"));
Shape175->setUSE("skinsphere");
Transform174->addChildren(*Shape175);

HAnimSegment164->addChildren(*Transform174);

HAnimJoint163->addChildren(*HAnimSegment164);

CHAnimJoint* HAnimJoint176 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint176->setName("l_midtarsal");
HAnimJoint176->setDEF("Joe_l_midtarsal");
HAnimJoint176->setCenter(new float[3]{0.11500000208616257,0.03700000047683716,0.09000000357627869});
HAnimJoint176->setSkinCoordIndex(new int[4]{349,350,351,352});
HAnimJoint176->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint176->setTranslation(new float[3]{0.11500000208616257,0.03700000047683716,0.09000000357627869});
HAnimJoint176->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint176->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment177 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment177->setName("l_middistal");
HAnimSegment177->setDEF("Joe_l_middistal");
CShape* Shape178 = (CShape *)(m_pScene.createNode("Shape"));
Shape178->setUSE("jointbox");
HAnimSegment177->addChildren(*Shape178);

CShape* Shape179 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet180 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet180->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate181 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate181->setPoint(new float[6]{0.11500000208616257,0.03700000047683716,0.09000000357627869,0.11500000208616257,0.019999999552965164,0.12200000137090683});
IndexedLineSet180->setCoord(*Coordinate181);

Shape179->setGeometry(IndexedLineSet180);

CAppearance* Appearance182 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance182->setUSE("SegmentLine");
Shape179->setAppearance(*Appearance182);

HAnimSegment177->addChildren(*Shape179);

CHAnimSite* HAnimSite183 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite183->setName("l_metatarsal_pha1");
HAnimSite183->setDEF("Joe_l_metatarsal_pha1");
HAnimSite183->setTranslation(new float[3]{0.08699999749660492,0.009999999776482582,0.12200000137090683});
CShape* Shape184 = (CShape *)(m_pScene.createNode("Shape"));
Shape184->setUSE("sitebox");
HAnimSite183->addChildren(*Shape184);

HAnimSegment177->addChildren(*HAnimSite183);

CTransform* Transform185 = (CTransform *)(m_pScene.createNode("Transform"));
Transform185->setTranslation(new float[3]{0.11500000208616257,0.05999999865889549,0.10000000149011612});
CShape* Shape186 = (CShape *)(m_pScene.createNode("Shape"));
Shape186->setUSE("skinsphere");
Transform185->addChildren(*Shape186);

HAnimSegment177->addChildren(*Transform185);

CTransform* Transform187 = (CTransform *)(m_pScene.createNode("Transform"));
Transform187->setTranslation(new float[3]{0.11500000208616257,0,0.07000000029802322});
CShape* Shape188 = (CShape *)(m_pScene.createNode("Shape"));
Shape188->setUSE("skinsphere");
Transform187->addChildren(*Shape188);

HAnimSegment177->addChildren(*Transform187);

CTransform* Transform189 = (CTransform *)(m_pScene.createNode("Transform"));
Transform189->setTranslation(new float[3]{0.16500000655651093,0,0.07000000029802322});
CShape* Shape190 = (CShape *)(m_pScene.createNode("Shape"));
Shape190->setUSE("skinsphere");
Transform189->addChildren(*Shape190);

HAnimSegment177->addChildren(*Transform189);

CTransform* Transform191 = (CTransform *)(m_pScene.createNode("Transform"));
Transform191->setTranslation(new float[3]{0.0949999988079071,0,0.07000000029802322});
CShape* Shape192 = (CShape *)(m_pScene.createNode("Shape"));
Shape192->setUSE("skinsphere");
Transform191->addChildren(*Shape192);

HAnimSegment177->addChildren(*Transform191);

HAnimJoint176->addChildren(*HAnimSegment177);

CHAnimJoint* HAnimJoint193 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint193->setName("l_metatarsal");
HAnimJoint193->setDEF("Joe_l_metatarsal");
HAnimJoint193->setCenter(new float[3]{0.11500000208616257,0.019999999552965164,0.12200000137090683});
HAnimJoint193->setSkinCoordIndex(new int[9]{353,354,355,356,357,358,359,360,361});
HAnimJoint193->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint193->setTranslation(new float[3]{0.11500000208616257,0.019999999552965164,0.12999999523162842});
HAnimJoint193->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint193->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment194 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment194->setName("l_forefoot");
HAnimSegment194->setDEF("Joe_l_forefoot");
CShape* Shape195 = (CShape *)(m_pScene.createNode("Shape"));
Shape195->setUSE("jointbox");
HAnimSegment194->addChildren(*Shape195);

CShape* Shape196 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet197 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet197->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate198 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate198->setPoint(new float[6]{0.11500000208616257,0.019999999552965164,0.12200000137090683,0.13199999928474426,0.013000000268220901,0.1899999976158142});
IndexedLineSet197->setCoord(*Coordinate198);

Shape196->setGeometry(IndexedLineSet197);

CAppearance* Appearance199 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance199->setUSE("SegmentLine");
Shape196->setAppearance(*Appearance199);

HAnimSegment194->addChildren(*Shape196);

CHAnimSite* HAnimSite200 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite200->setName("l_metatarsal_pha5");
HAnimSite200->setDEF("Joe_l_metatarsal_pha5");
HAnimSite200->setTranslation(new float[3]{0.16500000655651093,0.009999999776482582,0.11999999731779099});
CShape* Shape201 = (CShape *)(m_pScene.createNode("Shape"));
Shape201->setUSE("sitebox");
HAnimSite200->addChildren(*Shape201);

HAnimSegment194->addChildren(*HAnimSite200);

CHAnimSite* HAnimSite202 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite202->setName("l_digit2");
HAnimSite202->setDEF("Joe_l_digit2");
HAnimSite202->setTranslation(new float[3]{0.10999999940395355,0.010999999940395355,0.1899999976158142});
CShape* Shape203 = (CShape *)(m_pScene.createNode("Shape"));
Shape203->setUSE("sitebox");
HAnimSite202->addChildren(*Shape203);

HAnimSegment194->addChildren(*HAnimSite202);

CTransform* Transform204 = (CTransform *)(m_pScene.createNode("Transform"));
Transform204->setTranslation(new float[3]{0.11500000208616257,0.03999999910593033,0.12999999523162842});
CShape* Shape205 = (CShape *)(m_pScene.createNode("Shape"));
Shape205->setUSE("skinsphere");
Transform204->addChildren(*Shape205);

HAnimSegment194->addChildren(*Transform204);

CTransform* Transform206 = (CTransform *)(m_pScene.createNode("Transform"));
Transform206->setTranslation(new float[3]{0.125,0,0.11999999731779099});
CShape* Shape207 = (CShape *)(m_pScene.createNode("Shape"));
Shape207->setUSE("skinsphere");
Transform206->addChildren(*Shape207);

HAnimSegment194->addChildren(*Transform206);

CTransform* Transform208 = (CTransform *)(m_pScene.createNode("Transform"));
Transform208->setTranslation(new float[3]{0.16500000655651093,0,0.11999999731779099});
CShape* Shape209 = (CShape *)(m_pScene.createNode("Shape"));
Shape209->setUSE("skinsphere");
Transform208->addChildren(*Shape209);

HAnimSegment194->addChildren(*Transform208);

CTransform* Transform210 = (CTransform *)(m_pScene.createNode("Transform"));
Transform210->setTranslation(new float[3]{0.08699999749660492,0,0.12200000137090683});
CShape* Shape211 = (CShape *)(m_pScene.createNode("Shape"));
Shape211->setUSE("skinsphere");
Transform210->addChildren(*Shape211);

HAnimSegment194->addChildren(*Transform210);

CTransform* Transform212 = (CTransform *)(m_pScene.createNode("Transform"));
Transform212->setTranslation(new float[3]{0.09000000357627869,0.012000000104308128,0.18799999356269836});
CShape* Shape213 = (CShape *)(m_pScene.createNode("Shape"));
Shape213->setUSE("skinsphere");
Transform212->addChildren(*Shape213);

HAnimSegment194->addChildren(*Transform212);

CTransform* Transform214 = (CTransform *)(m_pScene.createNode("Transform"));
Transform214->setTranslation(new float[3]{0.10999999940395355,0.010999999940395355,0.1899999976158142});
CShape* Shape215 = (CShape *)(m_pScene.createNode("Shape"));
Shape215->setUSE("skinsphere");
Transform214->addChildren(*Shape215);

HAnimSegment194->addChildren(*Transform214);

CTransform* Transform216 = (CTransform *)(m_pScene.createNode("Transform"));
Transform216->setTranslation(new float[3]{0.12800000607967377,0.010999999940395355,0.1850000023841858});
CShape* Shape217 = (CShape *)(m_pScene.createNode("Shape"));
Shape217->setUSE("skinsphere");
Transform216->addChildren(*Shape217);

HAnimSegment194->addChildren(*Transform216);

CTransform* Transform218 = (CTransform *)(m_pScene.createNode("Transform"));
Transform218->setTranslation(new float[3]{0.1420000046491623,0.010999999940395355,0.17800000309944153});
CShape* Shape219 = (CShape *)(m_pScene.createNode("Shape"));
Shape219->setUSE("skinsphere");
Transform218->addChildren(*Shape219);

HAnimSegment194->addChildren(*Transform218);

CTransform* Transform220 = (CTransform *)(m_pScene.createNode("Transform"));
Transform220->setTranslation(new float[3]{0.15399999916553497,0.009999999776482582,0.1679999977350235});
CShape* Shape221 = (CShape *)(m_pScene.createNode("Shape"));
Shape221->setUSE("skinsphere");
Transform220->addChildren(*Shape221);

HAnimSegment194->addChildren(*Transform220);

HAnimJoint193->addChildren(*HAnimSegment194);

HAnimJoint176->addChildren(*HAnimJoint193);

HAnimJoint163->addChildren(*HAnimJoint176);

HAnimJoint144->addChildren(*HAnimJoint163);

HAnimJoint117->addChildren(*HAnimJoint144);

HAnimJoint92->addChildren(*HAnimJoint117);

HAnimJoint60->addChildren(*HAnimJoint92);

CHAnimJoint* HAnimJoint222 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint222->setName("r_hip");
HAnimJoint222->setDEF("Joe_r_hip");
HAnimJoint222->setCenter(new float[3]{-0.10000000149011612,0.9200000166893005,0});
HAnimJoint222->setSkinCoordIndex(new int[6]{91,92,98,99,100,101});
HAnimJoint222->setSkinCoordWeight(new float[6]{0.6499999761581421,1,1,1,1,1}, 6);
HAnimJoint222->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint222->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform223 = (CTransform *)(m_pScene.createNode("Transform"));
Transform223->setTranslation(new float[3]{-0.10000000149011612,0.9200000166893005,0});
CShape* Shape224 = (CShape *)(m_pScene.createNode("Shape"));
Shape224->setUSE("jointbox");
Transform223->addChildren(*Shape224);

HAnimJoint222->addChildren(*Transform223);

CHAnimSegment* HAnimSegment225 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment225->setName("r_thigh");
HAnimSegment225->setDEF("Joe_r_thigh");
CShape* Shape226 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet227 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet227->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate228 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate228->setPoint(new float[6]{-0.10000000149011612,0.9200000166893005,0,-0.10000000149011612,0.49129998683929443,0});
IndexedLineSet227->setCoord(*Coordinate228);

Shape226->setGeometry(IndexedLineSet227);

CAppearance* Appearance229 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance229->setUSE("SegmentLine");
Shape226->setAppearance(*Appearance229);

HAnimSegment225->addChildren(*Shape226);

CHAnimSite* HAnimSite230 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite230->setName("r_knee_crease");
HAnimSite230->setDEF("Joe_r_knee_crease");
HAnimSite230->setTranslation(new float[3]{-0.11500000208616257,0.4659999907016754,-0.054999999701976776});
CShape* Shape231 = (CShape *)(m_pScene.createNode("Shape"));
Shape231->setUSE("sitebox");
HAnimSite230->addChildren(*Shape231);

HAnimSegment225->addChildren(*HAnimSite230);

CHAnimSite* HAnimSite232 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite232->setName("r_femoral_lateral_epicn");
HAnimSite232->setDEF("Joe_r_femoral_lateral_epicn");
HAnimSite232->setTranslation(new float[3]{-0.17000000178813934,0.4659999907016754,0});
CShape* Shape233 = (CShape *)(m_pScene.createNode("Shape"));
Shape233->setUSE("sitebox");
HAnimSite232->addChildren(*Shape233);

HAnimSegment225->addChildren(*HAnimSite232);

CHAnimSite* HAnimSite234 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite234->setName("r_femoral_medial_epicn");
HAnimSite234->setDEF("Joe_r_femoral_medial_epicn");
HAnimSite234->setTranslation(new float[3]{-0.05000000074505806,0.4659999907016754,0});
CShape* Shape235 = (CShape *)(m_pScene.createNode("Shape"));
Shape235->setUSE("sitebox");
HAnimSite234->addChildren(*Shape235);

HAnimSegment225->addChildren(*HAnimSite234);

CTransform* Transform236 = (CTransform *)(m_pScene.createNode("Transform"));
Transform236->setTranslation(new float[3]{-0.07900000363588333,0.9200000166893005,-0.14000000059604645});
CShape* Shape237 = (CShape *)(m_pScene.createNode("Shape"));
Shape237->setUSE("skinsphere");
Transform236->addChildren(*Shape237);

HAnimSegment225->addChildren(*Transform236);

CTransform* Transform238 = (CTransform *)(m_pScene.createNode("Transform"));
Transform238->setTranslation(new float[3]{-0.10000000149011612,0.8999999761581421,0.07500000298023224});
CShape* Shape239 = (CShape *)(m_pScene.createNode("Shape"));
Shape239->setUSE("skinsphere");
Transform238->addChildren(*Shape239);

HAnimSegment225->addChildren(*Transform238);

CTransform* Transform240 = (CTransform *)(m_pScene.createNode("Transform"));
Transform240->setTranslation(new float[3]{-0.17100000381469727,0.6499999761581421,0});
CShape* Shape241 = (CShape *)(m_pScene.createNode("Shape"));
Shape241->setUSE("skinsphere");
Transform240->addChildren(*Shape241);

HAnimSegment225->addChildren(*Transform240);

CTransform* Transform242 = (CTransform *)(m_pScene.createNode("Transform"));
Transform242->setTranslation(new float[3]{-0.019999999552965164,0.6499999761581421,0});
CShape* Shape243 = (CShape *)(m_pScene.createNode("Shape"));
Shape243->setUSE("skinsphere");
Transform242->addChildren(*Shape243);

HAnimSegment225->addChildren(*Transform242);

CTransform* Transform244 = (CTransform *)(m_pScene.createNode("Transform"));
Transform244->setTranslation(new float[3]{-0.10000000149011612,0.6499999761581421,-0.07999999821186066});
CShape* Shape245 = (CShape *)(m_pScene.createNode("Shape"));
Shape245->setUSE("skinsphere");
Transform244->addChildren(*Shape245);

HAnimSegment225->addChildren(*Transform244);

CTransform* Transform246 = (CTransform *)(m_pScene.createNode("Transform"));
Transform246->setTranslation(new float[3]{-0.10000000149011612,0.6499999761581421,0.07000000029802322});
CShape* Shape247 = (CShape *)(m_pScene.createNode("Shape"));
Shape247->setUSE("skinsphere");
Transform246->addChildren(*Shape247);

HAnimSegment225->addChildren(*Transform246);

HAnimJoint222->addChildren(*HAnimSegment225);

CHAnimJoint* HAnimJoint248 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint248->setName("r_knee");
HAnimJoint248->setDEF("Joe_r_knee");
HAnimJoint248->setCenter(new float[3]{-0.05000000074505806,0.4659999907016754,0});
HAnimJoint248->setSkinCoordIndex(new int[8]{362,363,364,365,366,367,368,369});
HAnimJoint248->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint248->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint248->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform249 = (CTransform *)(m_pScene.createNode("Transform"));
Transform249->setTranslation(new float[3]{-0.10000000149011612,0.49129998683929443,0});
CShape* Shape250 = (CShape *)(m_pScene.createNode("Shape"));
Shape250->setUSE("jointbox");
Transform249->addChildren(*Shape250);

HAnimJoint248->addChildren(*Transform249);

CHAnimSegment* HAnimSegment251 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment251->setName("r_calf");
HAnimSegment251->setDEF("Joe_r_calf");
CShape* Shape252 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet253 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet253->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate254 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate254->setPoint(new float[6]{-0.10000000149011612,0.49129998683929443,0,-0.10000000149011612,0.07119999825954437,0});
IndexedLineSet253->setCoord(*Coordinate254);

Shape252->setGeometry(IndexedLineSet253);

CAppearance* Appearance255 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance255->setUSE("SegmentLine");
Shape252->setAppearance(*Appearance255);

HAnimSegment251->addChildren(*Shape252);

CHAnimSite* HAnimSite256 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite256->setName("r_lateral_malleolus");
HAnimSite256->setDEF("Joe_r_lateral_malleolus");
HAnimSite256->setTranslation(new float[3]{-0.15000000596046448,0.07000000029802322,0});
CShape* Shape257 = (CShape *)(m_pScene.createNode("Shape"));
Shape257->setUSE("sitebox");
HAnimSite256->addChildren(*Shape257);

HAnimSegment251->addChildren(*HAnimSite256);

CHAnimSite* HAnimSite258 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite258->setName("r_medial_malleolus");
HAnimSite258->setDEF("Joe_r_medial_malleolus");
HAnimSite258->setTranslation(new float[3]{-0.08500000089406967,0.0860000029206276,0.012500000186264515});
CShape* Shape259 = (CShape *)(m_pScene.createNode("Shape"));
Shape259->setUSE("sitebox");
HAnimSite258->addChildren(*Shape259);

HAnimSegment251->addChildren(*HAnimSite258);

CTransform* Transform260 = (CTransform *)(m_pScene.createNode("Transform"));
Transform260->setTranslation(new float[3]{-0.11500000208616257,0.4659999907016754,0.05999999865889549});
CShape* Shape261 = (CShape *)(m_pScene.createNode("Shape"));
Shape261->setUSE("skinsphere");
Transform260->addChildren(*Shape261);

HAnimSegment251->addChildren(*Transform260);

CTransform* Transform262 = (CTransform *)(m_pScene.createNode("Transform"));
Transform262->setTranslation(new float[3]{-0.11500000208616257,0.4659999907016754,-0.054999999701976776});
CShape* Shape263 = (CShape *)(m_pScene.createNode("Shape"));
Shape263->setUSE("skinsphere");
Transform262->addChildren(*Shape263);

HAnimSegment251->addChildren(*Transform262);

CTransform* Transform264 = (CTransform *)(m_pScene.createNode("Transform"));
Transform264->setTranslation(new float[3]{-0.17000000178813934,0.4659999907016754,0});
CShape* Shape265 = (CShape *)(m_pScene.createNode("Shape"));
Shape265->setUSE("skinsphere");
Transform264->addChildren(*Shape265);

HAnimSegment251->addChildren(*Transform264);

CTransform* Transform266 = (CTransform *)(m_pScene.createNode("Transform"));
Transform266->setTranslation(new float[3]{-0.05000000074505806,0.4659999907016754,0});
CShape* Shape267 = (CShape *)(m_pScene.createNode("Shape"));
Shape267->setUSE("skinsphere");
Transform266->addChildren(*Shape267);

HAnimSegment251->addChildren(*Transform266);

CTransform* Transform268 = (CTransform *)(m_pScene.createNode("Transform"));
Transform268->setTranslation(new float[3]{-0.17000000178813934,0.30000001192092896,0});
CShape* Shape269 = (CShape *)(m_pScene.createNode("Shape"));
Shape269->setUSE("skinsphere");
Transform268->addChildren(*Shape269);

HAnimSegment251->addChildren(*Transform268);

CTransform* Transform270 = (CTransform *)(m_pScene.createNode("Transform"));
Transform270->setTranslation(new float[3]{-0.05999999865889549,0.30000001192092896,0});
CShape* Shape271 = (CShape *)(m_pScene.createNode("Shape"));
Shape271->setUSE("skinsphere");
Transform270->addChildren(*Shape271);

HAnimSegment251->addChildren(*Transform270);

CTransform* Transform272 = (CTransform *)(m_pScene.createNode("Transform"));
Transform272->setTranslation(new float[3]{-0.10000000149011612,0.30000001192092896,-0.05000000074505806});
CShape* Shape273 = (CShape *)(m_pScene.createNode("Shape"));
Shape273->setUSE("skinsphere");
Transform272->addChildren(*Shape273);

HAnimSegment251->addChildren(*Transform272);

CTransform* Transform274 = (CTransform *)(m_pScene.createNode("Transform"));
Transform274->setTranslation(new float[3]{-0.10000000149011612,0.30000001192092896,0.05000000074505806});
CShape* Shape275 = (CShape *)(m_pScene.createNode("Shape"));
Shape275->setUSE("skinsphere");
Transform274->addChildren(*Shape275);

HAnimSegment251->addChildren(*Transform274);

HAnimJoint248->addChildren(*HAnimSegment251);

CHAnimJoint* HAnimJoint276 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint276->setName("r_ankle");
HAnimJoint276->setDEF("Joe_r_ankle");
HAnimJoint276->setCenter(new float[3]{-0.11500000208616257,0.0689999982714653,0});
HAnimJoint276->setSkinCoordIndex(new int[4]{370,371,372,373});
HAnimJoint276->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint276->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint276->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform277 = (CTransform *)(m_pScene.createNode("Transform"));
Transform277->setTranslation(new float[3]{-0.10000000149011612,0.07119999825954437,0});
CShape* Shape278 = (CShape *)(m_pScene.createNode("Shape"));
Shape278->setUSE("jointbox");
Transform277->addChildren(*Shape278);

HAnimJoint276->addChildren(*Transform277);

CHAnimSegment* HAnimSegment279 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment279->setName("r_hindfoot");
HAnimSegment279->setDEF("Joe_r_hindfoot");
CShape* Shape280 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet281 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet281->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate282 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate282->setPoint(new float[6]{-0.10000000149011612,0.07119999825954437,0,-0.10000000149011612,0.014999999664723873,-0.009999999776482582});
IndexedLineSet281->setCoord(*Coordinate282);

Shape280->setGeometry(IndexedLineSet281);

CAppearance* Appearance283 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance283->setUSE("SegmentLine");
Shape280->setAppearance(*Appearance283);

HAnimSegment279->addChildren(*Shape280);

CHAnimSite* HAnimSite284 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite284->setName("r_sphyrion");
HAnimSite284->setDEF("Joe_r_sphyrion");
HAnimSite284->setTranslation(new float[3]{-0.09000000357627869,0.0560000017285347,0.012500000186264515});
CShape* Shape285 = (CShape *)(m_pScene.createNode("Shape"));
Shape285->setUSE("sitebox");
HAnimSite284->addChildren(*Shape285);

HAnimSegment279->addChildren(*HAnimSite284);

CHAnimSite* HAnimSite286 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite286->setName("r_calcaneous_post");
HAnimSite286->setDEF("Joe_r_calcaneous_post");
HAnimSite286->setTranslation(new float[3]{-0.11500000208616257,0.03999999910593033,-0.054999999701976776});
CShape* Shape287 = (CShape *)(m_pScene.createNode("Shape"));
Shape287->setUSE("sitebox");
HAnimSite286->addChildren(*Shape287);

HAnimSegment279->addChildren(*HAnimSite286);

CTransform* Transform288 = (CTransform *)(m_pScene.createNode("Transform"));
Transform288->setTranslation(new float[3]{-0.15000000596046448,0.07000000029802322,0});
CShape* Shape289 = (CShape *)(m_pScene.createNode("Shape"));
Shape289->setUSE("skinsphere");
Transform288->addChildren(*Shape289);

HAnimSegment279->addChildren(*Transform288);

CTransform* Transform290 = (CTransform *)(m_pScene.createNode("Transform"));
Transform290->setTranslation(new float[3]{-0.08500000089406967,0.0860000029206276,0.012500000186264515});
CShape* Shape291 = (CShape *)(m_pScene.createNode("Shape"));
Shape291->setUSE("skinsphere");
Transform290->addChildren(*Shape291);

HAnimSegment279->addChildren(*Transform290);

CTransform* Transform292 = (CTransform *)(m_pScene.createNode("Transform"));
Transform292->setTranslation(new float[3]{-0.11500000208616257,0.0689999982714653,-0.04500000178813934});
CShape* Shape293 = (CShape *)(m_pScene.createNode("Shape"));
Shape293->setUSE("skinsphere");
Transform292->addChildren(*Shape293);

HAnimSegment279->addChildren(*Transform292);

CTransform* Transform294 = (CTransform *)(m_pScene.createNode("Transform"));
Transform294->setTranslation(new float[3]{-0.11699999868869781,0.09749999642372131,0.061500001698732376});
CShape* Shape295 = (CShape *)(m_pScene.createNode("Shape"));
Shape295->setUSE("skinsphere");
Transform294->addChildren(*Shape295);

HAnimSegment279->addChildren(*Transform294);

HAnimJoint276->addChildren(*HAnimSegment279);

CHAnimJoint* HAnimJoint296 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint296->setName("r_subtalar");
HAnimJoint296->setDEF("Joe_r_subtalar");
HAnimJoint296->setCenter(new float[3]{-0.10000000149011612,0.014999999664723873,-0.009999999776482582});
HAnimJoint296->setSkinCoordIndex(new int[3]{374,375,376});
HAnimJoint296->setSkinCoordWeight(new float[3]{1,1,1}, 3);
HAnimJoint296->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint296->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform297 = (CTransform *)(m_pScene.createNode("Transform"));
Transform297->setTranslation(new float[3]{-0.10000000149011612,0.014999999664723873,-0.009999999776482582});
CShape* Shape298 = (CShape *)(m_pScene.createNode("Shape"));
Shape298->setUSE("jointbox");
Transform297->addChildren(*Shape298);

HAnimJoint296->addChildren(*Transform297);

CHAnimSegment* HAnimSegment299 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment299->setName("r_midproximal");
HAnimSegment299->setDEF("Joe_r_midproximal");
CShape* Shape300 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet301 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet301->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate302 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate302->setPoint(new float[6]{-0.10000000149011612,0.014999999664723873,-0.009999999776482582,-0.10000000149011612,0.019999999552965164,0.07000000029802322});
IndexedLineSet301->setCoord(*Coordinate302);

Shape300->setGeometry(IndexedLineSet301);

CAppearance* Appearance303 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance303->setUSE("SegmentLine");
Shape300->setAppearance(*Appearance303);

HAnimSegment299->addChildren(*Shape300);

CTransform* Transform304 = (CTransform *)(m_pScene.createNode("Transform"));
Transform304->setTranslation(new float[3]{-0.13750000298023224,0.006000000052154064,-0.029999999329447746});
CShape* Shape305 = (CShape *)(m_pScene.createNode("Shape"));
Shape305->setUSE("skinsphere");
Transform304->addChildren(*Shape305);

HAnimSegment299->addChildren(*Transform304);

CTransform* Transform306 = (CTransform *)(m_pScene.createNode("Transform"));
Transform306->setTranslation(new float[3]{-0.0949999988079071,0.006000000052154064,-0.029999999329447746});
CShape* Shape307 = (CShape *)(m_pScene.createNode("Shape"));
Shape307->setUSE("skinsphere");
Transform306->addChildren(*Shape307);

HAnimSegment299->addChildren(*Transform306);

CTransform* Transform308 = (CTransform *)(m_pScene.createNode("Transform"));
Transform308->setTranslation(new float[3]{-0.0949999988079071,0.006000000052154064,-0.029999999329447746});
CShape* Shape309 = (CShape *)(m_pScene.createNode("Shape"));
Shape309->setUSE("skinsphere");
Transform308->addChildren(*Shape309);

HAnimSegment299->addChildren(*Transform308);

HAnimJoint296->addChildren(*HAnimSegment299);

CHAnimJoint* HAnimJoint310 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint310->setName("r_midtarsal");
HAnimJoint310->setDEF("Joe_r_midtarsal");
HAnimJoint310->setCenter(new float[3]{-0.11500000208616257,0.03700000047683716,0.09000000357627869});
HAnimJoint310->setSkinCoordIndex(new int[4]{377,378,379,380});
HAnimJoint310->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint310->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint310->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform311 = (CTransform *)(m_pScene.createNode("Transform"));
Transform311->setTranslation(new float[3]{-0.10000000149011612,0.019999999552965164,0.07000000029802322});
CShape* Shape312 = (CShape *)(m_pScene.createNode("Shape"));
Shape312->setUSE("jointbox");
Transform311->addChildren(*Shape312);

HAnimJoint310->addChildren(*Transform311);

CHAnimSegment* HAnimSegment313 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment313->setName("r_middistal");
HAnimSegment313->setDEF("Joe_r_middistal");
CShape* Shape314 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet315 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet315->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate316 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate316->setPoint(new float[6]{-0.10000000149011612,0.019999999552965164,0.07000000029802322,-0.10000000149011612,0.009999999776482582,0.14000000059604645});
IndexedLineSet315->setCoord(*Coordinate316);

Shape314->setGeometry(IndexedLineSet315);

CAppearance* Appearance317 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance317->setUSE("SegmentLine");
Shape314->setAppearance(*Appearance317);

HAnimSegment313->addChildren(*Shape314);

CHAnimSite* HAnimSite318 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite318->setName("r_metatarsal_pha1");
HAnimSite318->setDEF("Joe_r_metatarsal_pha1");
HAnimSite318->setTranslation(new float[3]{-0.11500000208616257,0.019999999552965164,0.12200000137090683});
CShape* Shape319 = (CShape *)(m_pScene.createNode("Shape"));
Shape319->setUSE("sitebox");
HAnimSite318->addChildren(*Shape319);

HAnimSegment313->addChildren(*HAnimSite318);

CTransform* Transform320 = (CTransform *)(m_pScene.createNode("Transform"));
Transform320->setTranslation(new float[3]{-0.11500000208616257,0.05999999865889549,0.10000000149011612});
CShape* Shape321 = (CShape *)(m_pScene.createNode("Shape"));
Shape321->setUSE("skinsphere");
Transform320->addChildren(*Shape321);

HAnimSegment313->addChildren(*Transform320);

CTransform* Transform322 = (CTransform *)(m_pScene.createNode("Transform"));
Transform322->setTranslation(new float[3]{-0.11500000208616257,0,0.07000000029802322});
CShape* Shape323 = (CShape *)(m_pScene.createNode("Shape"));
Shape323->setUSE("skinsphere");
Transform322->addChildren(*Shape323);

HAnimSegment313->addChildren(*Transform322);

CTransform* Transform324 = (CTransform *)(m_pScene.createNode("Transform"));
Transform324->setTranslation(new float[3]{-0.16500000655651093,0,0.07000000029802322});
CShape* Shape325 = (CShape *)(m_pScene.createNode("Shape"));
Shape325->setUSE("skinsphere");
Transform324->addChildren(*Shape325);

HAnimSegment313->addChildren(*Transform324);

CTransform* Transform326 = (CTransform *)(m_pScene.createNode("Transform"));
Transform326->setTranslation(new float[3]{-0.16500000655651093,0,0.07000000029802322});
CShape* Shape327 = (CShape *)(m_pScene.createNode("Shape"));
Shape327->setUSE("skinsphere");
Transform326->addChildren(*Shape327);

HAnimSegment313->addChildren(*Transform326);

HAnimJoint310->addChildren(*HAnimSegment313);

CHAnimJoint* HAnimJoint328 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint328->setName("r_metatarsal");
HAnimJoint328->setDEF("Joe_r_metatarsal");
HAnimJoint328->setCenter(new float[3]{-0.10000000149011612,0.009999999776482582,0.14000000059604645});
HAnimJoint328->setSkinCoordIndex(new int[9]{381,382,383,384,385,386,387,388,389});
HAnimJoint328->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint328->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint328->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform329 = (CTransform *)(m_pScene.createNode("Transform"));
Transform329->setTranslation(new float[3]{-0.10859999805688858,0.009999999776482582,0.14000000059604645});
CShape* Shape330 = (CShape *)(m_pScene.createNode("Shape"));
Shape330->setUSE("jointbox");
Transform329->addChildren(*Shape330);

HAnimJoint328->addChildren(*Transform329);

CHAnimSegment* HAnimSegment331 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment331->setName("r_forefoot");
HAnimSegment331->setDEF("Joe_r_forefoot");
CShape* Shape332 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet333 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet333->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate334 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate334->setPoint(new float[6]{-0.10000000149011612,0.009999999776482582,0.14000000059604645,-0.10429999977350235,0.0015999999595806003,0.20000000298023224});
IndexedLineSet333->setCoord(*Coordinate334);

Shape332->setGeometry(IndexedLineSet333);

CAppearance* Appearance335 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance335->setUSE("SegmentLine");
Shape332->setAppearance(*Appearance335);

HAnimSegment331->addChildren(*Shape332);

CHAnimSite* HAnimSite336 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite336->setName("r_metatarsal_pha5");
HAnimSite336->setDEF("Joe_r_metatarsal_pha5");
HAnimSite336->setTranslation(new float[3]{-0.16500000655651093,0.009999999776482582,0.11999999731779099});
CShape* Shape337 = (CShape *)(m_pScene.createNode("Shape"));
Shape337->setUSE("sitebox");
HAnimSite336->addChildren(*Shape337);

HAnimSegment331->addChildren(*HAnimSite336);

CHAnimSite* HAnimSite338 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite338->setName("r_digit2");
HAnimSite338->setDEF("Joe_r_digit2");
HAnimSite338->setTranslation(new float[3]{-0.10999999940395355,0.010999999940395355,0.1899999976158142});
CShape* Shape339 = (CShape *)(m_pScene.createNode("Shape"));
Shape339->setUSE("sitebox");
HAnimSite338->addChildren(*Shape339);

HAnimSegment331->addChildren(*HAnimSite338);

CTransform* Transform340 = (CTransform *)(m_pScene.createNode("Transform"));
Transform340->setTranslation(new float[3]{-0.11500000208616257,0.03999999910593033,0.12999999523162842});
CShape* Shape341 = (CShape *)(m_pScene.createNode("Shape"));
Shape341->setUSE("skinsphere");
Transform340->addChildren(*Shape341);

HAnimSegment331->addChildren(*Transform340);

CTransform* Transform342 = (CTransform *)(m_pScene.createNode("Transform"));
Transform342->setTranslation(new float[3]{-0.125,0,0.11999999731779099});
CShape* Shape343 = (CShape *)(m_pScene.createNode("Shape"));
Shape343->setUSE("skinsphere");
Transform342->addChildren(*Shape343);

HAnimSegment331->addChildren(*Transform342);

CTransform* Transform344 = (CTransform *)(m_pScene.createNode("Transform"));
Transform344->setTranslation(new float[3]{-0.16500000655651093,0,0.11999999731779099});
CShape* Shape345 = (CShape *)(m_pScene.createNode("Shape"));
Shape345->setUSE("skinsphere");
Transform344->addChildren(*Shape345);

HAnimSegment331->addChildren(*Transform344);

CTransform* Transform346 = (CTransform *)(m_pScene.createNode("Transform"));
Transform346->setTranslation(new float[3]{-0.08699999749660492,0,0.12200000137090683});
CShape* Shape347 = (CShape *)(m_pScene.createNode("Shape"));
Shape347->setUSE("skinsphere");
Transform346->addChildren(*Shape347);

HAnimSegment331->addChildren(*Transform346);

CTransform* Transform348 = (CTransform *)(m_pScene.createNode("Transform"));
Transform348->setTranslation(new float[3]{-0.09000000357627869,0.012000000104308128,0.18799999356269836});
CShape* Shape349 = (CShape *)(m_pScene.createNode("Shape"));
Shape349->setUSE("skinsphere");
Transform348->addChildren(*Shape349);

HAnimSegment331->addChildren(*Transform348);

CTransform* Transform350 = (CTransform *)(m_pScene.createNode("Transform"));
Transform350->setTranslation(new float[3]{-0.10999999940395355,0.010999999940395355,0.1899999976158142});
CShape* Shape351 = (CShape *)(m_pScene.createNode("Shape"));
Shape351->setUSE("skinsphere");
Transform350->addChildren(*Shape351);

HAnimSegment331->addChildren(*Transform350);

CTransform* Transform352 = (CTransform *)(m_pScene.createNode("Transform"));
Transform352->setTranslation(new float[3]{-0.12800000607967377,0.010999999940395355,0.1850000023841858});
CShape* Shape353 = (CShape *)(m_pScene.createNode("Shape"));
Shape353->setUSE("skinsphere");
Transform352->addChildren(*Shape353);

HAnimSegment331->addChildren(*Transform352);

CTransform* Transform354 = (CTransform *)(m_pScene.createNode("Transform"));
Transform354->setTranslation(new float[3]{-0.1420000046491623,0.010999999940395355,0.17800000309944153});
CShape* Shape355 = (CShape *)(m_pScene.createNode("Shape"));
Shape355->setUSE("skinsphere");
Transform354->addChildren(*Shape355);

HAnimSegment331->addChildren(*Transform354);

CTransform* Transform356 = (CTransform *)(m_pScene.createNode("Transform"));
Transform356->setTranslation(new float[3]{-0.15399999916553497,0.009999999776482582,0.1679999977350235});
CShape* Shape357 = (CShape *)(m_pScene.createNode("Shape"));
Shape357->setUSE("skinsphere");
Transform356->addChildren(*Shape357);

HAnimSegment331->addChildren(*Transform356);

HAnimJoint328->addChildren(*HAnimSegment331);

HAnimJoint310->addChildren(*HAnimJoint328);

HAnimJoint296->addChildren(*HAnimJoint310);

HAnimJoint276->addChildren(*HAnimJoint296);

HAnimJoint248->addChildren(*HAnimJoint276);

HAnimJoint222->addChildren(*HAnimJoint248);

HAnimJoint60->addChildren(*HAnimJoint222);

HAnimJoint53->addChildren(*HAnimJoint60);

CHAnimJoint* HAnimJoint358 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint358->setName("vl5");
HAnimJoint358->setDEF("Joe_vl5");
HAnimJoint358->setCenter(new float[3]{0,1.0449999570846558,-0.0949999988079071});
HAnimJoint358->setSkinCoordIndex(new int[2]{28,76});
HAnimJoint358->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint358->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint358->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform359 = (CTransform *)(m_pScene.createNode("Transform"));
Transform359->setTranslation(new float[3]{0,1.0449999570846558,-0.0949999988079071});
CShape* Shape360 = (CShape *)(m_pScene.createNode("Shape"));
Shape360->setUSE("jointbox");
Transform359->addChildren(*Shape360);

HAnimJoint358->addChildren(*Transform359);

CHAnimSegment* HAnimSegment361 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment361->setName("toPelvis");
HAnimSegment361->setDEF("Joe_toPelvisMarker");
CShape* Shape362 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet363 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet363->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate364 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate364->setPoint(new float[6]{0,1.0449999570846558,-0.0949999988079071,0,0.914900004863739,0.0015999999595806003});
IndexedLineSet363->setCoord(*Coordinate364);

Shape362->setGeometry(IndexedLineSet363);

CAppearance* Appearance365 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance365->setUSE("SegmentLine");
Shape362->setAppearance(*Appearance365);

HAnimSegment361->addChildren(*Shape362);

HAnimJoint358->addChildren(*HAnimSegment361);

CHAnimSegment* HAnimSegment366 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment366->setName("l5");
HAnimSegment366->setDEF("Joe_l5");
CShape* Shape367 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet368 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet368->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate369 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate369->setPoint(new float[6]{0,1.0449999570846558,-0.0949999988079071,0,1.0679999589920044,-0.08500000089406967});
IndexedLineSet368->setCoord(*Coordinate369);

Shape367->setGeometry(IndexedLineSet368);

CAppearance* Appearance370 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance370->setUSE("SegmentLine");
Shape367->setAppearance(*Appearance370);

HAnimSegment366->addChildren(*Shape367);

CHAnimSite* HAnimSite371 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite371->setName("waist_preferred_post");
HAnimSite371->setDEF("Joe_waist_preferred_post");
HAnimSite371->setTranslation(new float[3]{0,1.0915000438690186,-0.10909999907016754});
CShape* Shape372 = (CShape *)(m_pScene.createNode("Shape"));
Shape372->setUSE("sitebox");
HAnimSite371->addChildren(*Shape372);

HAnimSegment366->addChildren(*HAnimSite371);

CHAnimSite* HAnimSite373 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite373->setName("navel");
HAnimSite373->setDEF("Joe_navel");
HAnimSite373->setTranslation(new float[3]{0,1.0722500085830688,0.09000000357627869});
CShape* Shape374 = (CShape *)(m_pScene.createNode("Shape"));
Shape374->setUSE("sitebox");
HAnimSite373->addChildren(*Shape374);

HAnimSegment366->addChildren(*HAnimSite373);

HAnimJoint358->addChildren(*HAnimSegment366);

CHAnimJoint* HAnimJoint375 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint375->setName("vl4");
HAnimJoint375->setDEF("Joe_vl4");
HAnimJoint375->setCenter(new float[3]{0,1.0679999589920044,-0.08500000089406967});
HAnimJoint375->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint375->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform376 = (CTransform *)(m_pScene.createNode("Transform"));
Transform376->setTranslation(new float[3]{0,1.0679999589920044,-0.08500000089406967});
CShape* Shape377 = (CShape *)(m_pScene.createNode("Shape"));
Shape377->setUSE("jointbox");
Transform376->addChildren(*Shape377);

HAnimJoint375->addChildren(*Transform376);

CHAnimSegment* HAnimSegment378 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment378->setName("l4");
HAnimSegment378->setDEF("Joe_l4");
CShape* Shape379 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet380 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet380->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate381 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate381->setPoint(new float[6]{0,1.0679999589920044,-0.08500000089406967,0,1.0920000076293945,-0.07249999791383743});
IndexedLineSet380->setCoord(*Coordinate381);

Shape379->setGeometry(IndexedLineSet380);

CAppearance* Appearance382 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance382->setUSE("SegmentLine");
Shape379->setAppearance(*Appearance382);

HAnimSegment378->addChildren(*Shape379);

HAnimJoint375->addChildren(*HAnimSegment378);

CHAnimJoint* HAnimJoint383 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint383->setName("vl3");
HAnimJoint383->setDEF("Joe_vl3");
HAnimJoint383->setCenter(new float[3]{0,1.0920000076293945,-0.07249999791383743});
HAnimJoint383->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint383->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform384 = (CTransform *)(m_pScene.createNode("Transform"));
Transform384->setTranslation(new float[3]{0,1.0920000076293945,-0.07249999791383743});
CShape* Shape385 = (CShape *)(m_pScene.createNode("Shape"));
Shape385->setUSE("jointbox");
Transform384->addChildren(*Shape385);

HAnimJoint383->addChildren(*Transform384);

CHAnimSegment* HAnimSegment386 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment386->setName("l3");
HAnimSegment386->setDEF("Joe_l3");
CShape* Shape387 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet388 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet388->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate389 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate389->setPoint(new float[6]{0,1.0920000076293945,-0.07249999791383743,0,1.1200000047683716,-0.06499999761581421});
IndexedLineSet388->setCoord(*Coordinate389);

Shape387->setGeometry(IndexedLineSet388);

CAppearance* Appearance390 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance390->setUSE("SegmentLine");
Shape387->setAppearance(*Appearance390);

HAnimSegment386->addChildren(*Shape387);

HAnimJoint383->addChildren(*HAnimSegment386);

CHAnimJoint* HAnimJoint391 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint391->setName("vl2");
HAnimJoint391->setDEF("Joe_vl2");
HAnimJoint391->setCenter(new float[3]{0,1.1200000047683716,-0.06499999761581421});
HAnimJoint391->setSkinCoordIndex(new int[9]{16,18,25,83,84,85,86,87,88});
HAnimJoint391->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,0.699999988079071,1,0.800000011920929}, 9);
HAnimJoint391->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint391->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform392 = (CTransform *)(m_pScene.createNode("Transform"));
Transform392->setTranslation(new float[3]{0,1.1200000047683716,-0.06499999761581421});
CShape* Shape393 = (CShape *)(m_pScene.createNode("Shape"));
Shape393->setUSE("jointbox");
Transform392->addChildren(*Shape393);

HAnimJoint391->addChildren(*Transform392);

CHAnimSegment* HAnimSegment394 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment394->setName("l2");
HAnimSegment394->setDEF("Joe_l2");
CShape* Shape395 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet396 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet396->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate397 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate397->setPoint(new float[6]{0,1.1200000047683716,-0.06499999761581421,0,1.145900011062622,-0.0625});
IndexedLineSet396->setCoord(*Coordinate397);

Shape395->setGeometry(IndexedLineSet396);

CAppearance* Appearance398 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance398->setUSE("SegmentLine");
Shape395->setAppearance(*Appearance398);

HAnimSegment394->addChildren(*Shape395);

CHAnimSite* HAnimSite399 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite399->setName("r_rib10");
HAnimSite399->setDEF("Joe_r_rib10");
HAnimSite399->setTranslation(new float[3]{-0.08699999749660492,1.190000057220459,0.09000000357627869});
CShape* Shape400 = (CShape *)(m_pScene.createNode("Shape"));
Shape400->setUSE("sitebox");
HAnimSite399->addChildren(*Shape400);

HAnimSegment394->addChildren(*HAnimSite399);

CHAnimSite* HAnimSite401 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite401->setName("l_rib10");
HAnimSite401->setDEF("Joe_l_rib10");
HAnimSite401->setTranslation(new float[3]{0.08699999749660492,1.190000057220459,0.09000000357627869});
CShape* Shape402 = (CShape *)(m_pScene.createNode("Shape"));
Shape402->setUSE("sitebox");
HAnimSite401->addChildren(*Shape402);

HAnimSegment394->addChildren(*HAnimSite401);

CHAnimSite* HAnimSite403 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite403->setName("rib10_midspine");
HAnimSite403->setDEF("Joe_rib10_midspine");
HAnimSite403->setTranslation(new float[3]{0,1.1907999515533447,-0.11129999905824661});
CShape* Shape404 = (CShape *)(m_pScene.createNode("Shape"));
Shape404->setUSE("sitebox");
HAnimSite403->addChildren(*Shape404);

HAnimSegment394->addChildren(*HAnimSite403);

CTransform* Transform405 = (CTransform *)(m_pScene.createNode("Transform"));
Transform405->setTranslation(new float[3]{-0.08699999749660492,1.190000057220459,-0.09000000357627869});
CShape* Shape406 = (CShape *)(m_pScene.createNode("Shape"));
Shape406->setUSE("skinsphere");
Transform405->addChildren(*Shape406);

HAnimSegment394->addChildren(*Transform405);

CTransform* Transform407 = (CTransform *)(m_pScene.createNode("Transform"));
Transform407->setTranslation(new float[3]{0.08699999749660492,1.190000057220459,-0.09000000357627869});
CShape* Shape408 = (CShape *)(m_pScene.createNode("Shape"));
Shape408->setUSE("skinsphere");
Transform407->addChildren(*Shape408);

HAnimSegment394->addChildren(*Transform407);

CTransform* Transform409 = (CTransform *)(m_pScene.createNode("Transform"));
Transform409->setTranslation(new float[3]{0.1720000058412552,1.3200000524520874,-0.029999999329447746});
CShape* Shape410 = (CShape *)(m_pScene.createNode("Shape"));
Shape410->setUSE("skinsphere");
Transform409->addChildren(*Shape410);

HAnimSegment394->addChildren(*Transform409);

CTransform* Transform411 = (CTransform *)(m_pScene.createNode("Transform"));
Transform411->setTranslation(new float[3]{-0.1720000058412552,1.3200000524520874,-0.029999999329447746});
CShape* Shape412 = (CShape *)(m_pScene.createNode("Shape"));
Shape412->setUSE("skinsphere");
Transform411->addChildren(*Shape412);

HAnimSegment394->addChildren(*Transform411);

CTransform* Transform413 = (CTransform *)(m_pScene.createNode("Transform"));
Transform413->setTranslation(new float[3]{0.15000000596046448,1.2300000190734863,-0.014999999664723873});
CShape* Shape414 = (CShape *)(m_pScene.createNode("Shape"));
Shape414->setUSE("skinsphere");
Transform413->addChildren(*Shape414);

HAnimSegment394->addChildren(*Transform413);

CTransform* Transform415 = (CTransform *)(m_pScene.createNode("Transform"));
Transform415->setTranslation(new float[3]{-0.15000000596046448,1.2300000190734863,-0.014999999664723873});
CShape* Shape416 = (CShape *)(m_pScene.createNode("Shape"));
Shape416->setUSE("skinsphere");
Transform415->addChildren(*Shape416);

HAnimSegment394->addChildren(*Transform415);

HAnimJoint391->addChildren(*HAnimSegment394);

CHAnimJoint* HAnimJoint417 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint417->setName("vl1");
HAnimJoint417->setDEF("Joe_vl1");
HAnimJoint417->setCenter(new float[3]{0,1.145900011062622,-0.0625});
HAnimJoint417->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint417->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform418 = (CTransform *)(m_pScene.createNode("Transform"));
Transform418->setTranslation(new float[3]{0,1.145900011062622,-0.0625});
CShape* Shape419 = (CShape *)(m_pScene.createNode("Shape"));
Shape419->setUSE("jointbox");
Transform418->addChildren(*Shape419);

HAnimJoint417->addChildren(*Transform418);

CHAnimSegment* HAnimSegment420 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment420->setName("l1");
HAnimSegment420->setDEF("Joe_l1");
CShape* Shape421 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet422 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet422->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate423 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate423->setPoint(new float[6]{0,1.145900011062622,-0.0625,0,1.1790000200271606,-0.06800000369548798});
IndexedLineSet422->setCoord(*Coordinate423);

Shape421->setGeometry(IndexedLineSet422);

CAppearance* Appearance424 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance424->setUSE("SegmentLine");
Shape421->setAppearance(*Appearance424);

HAnimSegment420->addChildren(*Shape421);

HAnimJoint417->addChildren(*HAnimSegment420);

CHAnimJoint* HAnimJoint425 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint425->setName("vt12");
HAnimJoint425->setDEF("Joe_vt12");
HAnimJoint425->setCenter(new float[3]{0,1.1790000200271606,-0.06800000369548798});
HAnimJoint425->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint425->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform426 = (CTransform *)(m_pScene.createNode("Transform"));
Transform426->setTranslation(new float[3]{0,1.1790000200271606,-0.06800000369548798});
CShape* Shape427 = (CShape *)(m_pScene.createNode("Shape"));
Shape427->setUSE("jointbox");
Transform426->addChildren(*Shape427);

HAnimJoint425->addChildren(*Transform426);

CHAnimSegment* HAnimSegment428 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment428->setName("t12");
HAnimSegment428->setDEF("Joe_t12");
CShape* Shape429 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet430 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet430->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate431 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate431->setPoint(new float[6]{0,1.1790000200271606,-0.06800000369548798,0,1.2419999837875366,-0.09000000357627869});
IndexedLineSet430->setCoord(*Coordinate431);

Shape429->setGeometry(IndexedLineSet430);

CAppearance* Appearance432 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance432->setUSE("SegmentLine");
Shape429->setAppearance(*Appearance432);

HAnimSegment428->addChildren(*Shape429);

HAnimJoint425->addChildren(*HAnimSegment428);

CHAnimJoint* HAnimJoint433 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint433->setName("vt11");
HAnimJoint433->setDEF("Joe_vt11");
HAnimJoint433->setCenter(new float[3]{0,1.267899990081787,-0.08100000023841858});
HAnimJoint433->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint433->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform434 = (CTransform *)(m_pScene.createNode("Transform"));
Transform434->setTranslation(new float[3]{0,1.2144999504089355,-0.0754999965429306});
CShape* Shape435 = (CShape *)(m_pScene.createNode("Shape"));
Shape435->setUSE("jointbox");
Transform434->addChildren(*Shape435);

HAnimJoint433->addChildren(*Transform434);

CHAnimSegment* HAnimSegment436 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment436->setName("t11");
HAnimSegment436->setDEF("Joe_t11");
CShape* Shape437 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet438 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet438->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate439 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate439->setPoint(new float[6]{0,1.2144999504089355,-0.0754999965429306,0,1.2419999837875366,-0.09000000357627869});
IndexedLineSet438->setCoord(*Coordinate439);

Shape437->setGeometry(IndexedLineSet438);

CAppearance* Appearance440 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance440->setUSE("SegmentLine");
Shape437->setAppearance(*Appearance440);

HAnimSegment436->addChildren(*Shape437);

HAnimJoint433->addChildren(*HAnimSegment436);

CHAnimJoint* HAnimJoint441 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint441->setName("vt10");
HAnimJoint441->setDEF("Joe_vt10");
HAnimJoint441->setCenter(new float[3]{0,1.2419999837875366,-0.09000000357627869});
HAnimJoint441->setSkinCoordIndex(new int[1]{15});
HAnimJoint441->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint441->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint441->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform442 = (CTransform *)(m_pScene.createNode("Transform"));
Transform442->setTranslation(new float[3]{0,1.2419999837875366,-0.09000000357627869});
CShape* Shape443 = (CShape *)(m_pScene.createNode("Shape"));
Shape443->setUSE("jointbox");
Transform442->addChildren(*Shape443);

HAnimJoint441->addChildren(*Transform442);

CHAnimSegment* HAnimSegment444 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment444->setName("t10");
HAnimSegment444->setDEF("Joe_t10");
CShape* Shape445 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet446 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet446->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate447 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate447->setPoint(new float[6]{0,1.2419999837875366,-0.09000000357627869,0,1.2680000066757202,-0.10000000149011612});
IndexedLineSet446->setCoord(*Coordinate447);

Shape445->setGeometry(IndexedLineSet446);

CAppearance* Appearance448 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance448->setUSE("SegmentLine");
Shape445->setAppearance(*Appearance448);

HAnimSegment444->addChildren(*Shape445);

CHAnimSite* HAnimSite449 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite449->setName("substernale");
HAnimSite449->setDEF("Joe_substernale");
HAnimSite449->setTranslation(new float[3]{0,1.25,0.11299999803304672});
CShape* Shape450 = (CShape *)(m_pScene.createNode("Shape"));
Shape450->setUSE("sitebox");
HAnimSite449->addChildren(*Shape450);

HAnimSegment444->addChildren(*HAnimSite449);

HAnimJoint441->addChildren(*HAnimSegment444);

CHAnimJoint* HAnimJoint451 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint451->setName("vt9");
HAnimJoint451->setDEF("Joe_vt9");
HAnimJoint451->setCenter(new float[3]{0,1.2680000066757202,-0.10000000149011612});
HAnimJoint451->setSkinCoordIndex(new int[2]{13,14});
HAnimJoint451->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint451->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint451->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform452 = (CTransform *)(m_pScene.createNode("Transform"));
Transform452->setTranslation(new float[3]{0,1.2680000066757202,-0.10000000149011612});
CShape* Shape453 = (CShape *)(m_pScene.createNode("Shape"));
Shape453->setUSE("jointbox");
Transform452->addChildren(*Shape453);

HAnimJoint451->addChildren(*Transform452);

CHAnimSegment* HAnimSegment454 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment454->setName("t9");
HAnimSegment454->setDEF("Joe_t9");
CShape* Shape455 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet456 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet456->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate457 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate457->setPoint(new float[6]{0,1.2680000066757202,-0.10000000149011612,0,1.2940000295639038,-0.10999999940395355});
IndexedLineSet456->setCoord(*Coordinate457);

Shape455->setGeometry(IndexedLineSet456);

CAppearance* Appearance458 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance458->setUSE("SegmentLine");
Shape455->setAppearance(*Appearance458);

HAnimSegment454->addChildren(*Shape455);

CHAnimSite* HAnimSite459 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite459->setName("r_thelion");
HAnimSite459->setDEF("Joe_r_thelion");
HAnimSite459->setTranslation(new float[3]{-0.11349999904632568,1.3179999589920044,0.0949999988079071});
CShape* Shape460 = (CShape *)(m_pScene.createNode("Shape"));
Shape460->setUSE("sitebox");
HAnimSite459->addChildren(*Shape460);

HAnimSegment454->addChildren(*HAnimSite459);

CHAnimSite* HAnimSite461 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite461->setName("l_thelion");
HAnimSite461->setDEF("Joe_l_thelion");
HAnimSite461->setTranslation(new float[3]{0.11349999904632568,1.3179999589920044,0.0949999988079071});
CShape* Shape462 = (CShape *)(m_pScene.createNode("Shape"));
Shape462->setUSE("sitebox");
HAnimSite461->addChildren(*Shape462);

HAnimSegment454->addChildren(*HAnimSite461);

HAnimJoint451->addChildren(*HAnimSegment454);

CHAnimJoint* HAnimJoint463 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint463->setName("vt8");
HAnimJoint463->setDEF("Joe_vt8");
HAnimJoint463->setCenter(new float[3]{0,1.2940000295639038,-0.10999999940395355});
HAnimJoint463->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint463->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform464 = (CTransform *)(m_pScene.createNode("Transform"));
Transform464->setTranslation(new float[3]{0,1.2940000295639038,-0.10999999940395355});
CShape* Shape465 = (CShape *)(m_pScene.createNode("Shape"));
Shape465->setUSE("jointbox");
Transform464->addChildren(*Shape465);

HAnimJoint463->addChildren(*Transform464);

CHAnimSegment* HAnimSegment466 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment466->setName("t8");
HAnimSegment466->setDEF("Joe_t8");
CShape* Shape467 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet468 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet468->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate469 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate469->setPoint(new float[6]{0,1.2940000295639038,-0.10999999940395355,0,1.3519999980926514,-0.11999999731779099});
IndexedLineSet468->setCoord(*Coordinate469);

Shape467->setGeometry(IndexedLineSet468);

CAppearance* Appearance470 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance470->setUSE("SegmentLine");
Shape467->setAppearance(*Appearance470);

HAnimSegment466->addChildren(*Shape467);

HAnimJoint463->addChildren(*HAnimSegment466);

CHAnimJoint* HAnimJoint471 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint471->setName("vt7");
HAnimJoint471->setDEF("Joe_vt7");
HAnimJoint471->setCenter(new float[3]{0,1.3229999542236328,-0.11550000309944153});
HAnimJoint471->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint471->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform472 = (CTransform *)(m_pScene.createNode("Transform"));
Transform472->setTranslation(new float[3]{0,1.3229999542236328,-0.11550000309944153});
CShape* Shape473 = (CShape *)(m_pScene.createNode("Shape"));
Shape473->setUSE("jointbox");
Transform472->addChildren(*Shape473);

HAnimJoint471->addChildren(*Transform472);

CHAnimSegment* HAnimSegment474 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment474->setName("t7");
HAnimSegment474->setDEF("Joe_t7");
CShape* Shape475 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet476 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet476->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate477 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate477->setPoint(new float[6]{0,1.3519999980926514,-0.11999999731779099,0,1.38100004196167,-0.12349999696016312});
IndexedLineSet476->setCoord(*Coordinate477);

Shape475->setGeometry(IndexedLineSet476);

CAppearance* Appearance478 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance478->setUSE("SegmentLine");
Shape475->setAppearance(*Appearance478);

HAnimSegment474->addChildren(*Shape475);

HAnimJoint471->addChildren(*HAnimSegment474);

CHAnimJoint* HAnimJoint479 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint479->setName("vt6");
HAnimJoint479->setDEF("Joe_vt6");
HAnimJoint479->setCenter(new float[3]{0,1.3519999980926514,-0.11999999731779099});
HAnimJoint479->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint479->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform480 = (CTransform *)(m_pScene.createNode("Transform"));
Transform480->setTranslation(new float[3]{0,1.3519999980926514,-0.11999999731779099});
CShape* Shape481 = (CShape *)(m_pScene.createNode("Shape"));
Shape481->setUSE("jointbox");
Transform480->addChildren(*Shape481);

HAnimJoint479->addChildren(*Transform480);

CHAnimSegment* HAnimSegment482 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment482->setName("t6");
HAnimSegment482->setDEF("Joe_t6");
CShape* Shape483 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet484 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet484->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate485 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate485->setPoint(new float[6]{0,1.38100004196167,-0.12349999696016312,0,1.409999966621399,-0.12349999696016312});
IndexedLineSet484->setCoord(*Coordinate485);

Shape483->setGeometry(IndexedLineSet484);

CAppearance* Appearance486 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance486->setUSE("SegmentLine");
Shape483->setAppearance(*Appearance486);

HAnimSegment482->addChildren(*Shape483);

HAnimJoint479->addChildren(*HAnimSegment482);

CHAnimJoint* HAnimJoint487 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint487->setName("vt5");
HAnimJoint487->setDEF("Joe_vt5");
HAnimJoint487->setCenter(new float[3]{0,1.38100004196167,-0.12349999696016312});
HAnimJoint487->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint487->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform488 = (CTransform *)(m_pScene.createNode("Transform"));
Transform488->setTranslation(new float[3]{0,1.38100004196167,-0.12349999696016312});
CShape* Shape489 = (CShape *)(m_pScene.createNode("Shape"));
Shape489->setUSE("jointbox");
Transform488->addChildren(*Shape489);

HAnimJoint487->addChildren(*Transform488);

CHAnimSegment* HAnimSegment490 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment490->setName("t5");
HAnimSegment490->setDEF("Joe_t5");
CShape* Shape491 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet492 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet492->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate493 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate493->setPoint(new float[6]{0,1.409999966621399,-0.12349999696016312,0,1.437999963760376,-0.11999999731779099});
IndexedLineSet492->setCoord(*Coordinate493);

Shape491->setGeometry(IndexedLineSet492);

CAppearance* Appearance494 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance494->setUSE("SegmentLine");
Shape491->setAppearance(*Appearance494);

HAnimSegment490->addChildren(*Shape491);

HAnimJoint487->addChildren(*HAnimSegment490);

CHAnimJoint* HAnimJoint495 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint495->setName("vt4");
HAnimJoint495->setDEF("Joe_vt4");
HAnimJoint495->setCenter(new float[3]{0,1.409999966621399,-0.12349999696016312});
HAnimJoint495->setSkinCoordIndex(new int[1]{81});
HAnimJoint495->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint495->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint495->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform496 = (CTransform *)(m_pScene.createNode("Transform"));
Transform496->setTranslation(new float[3]{0,1.409999966621399,-0.12349999696016312});
CShape* Shape497 = (CShape *)(m_pScene.createNode("Shape"));
Shape497->setUSE("jointbox");
Transform496->addChildren(*Shape497);

HAnimJoint495->addChildren(*Transform496);

CTransform* Transform498 = (CTransform *)(m_pScene.createNode("Transform"));
Transform498->setTranslation(new float[3]{0,1.409999966621399,-0.14499999582767487});
CShape* Shape499 = (CShape *)(m_pScene.createNode("Shape"));
Shape499->setUSE("skinsphere");
Transform498->addChildren(*Shape499);

HAnimJoint495->addChildren(*Transform498);

CHAnimSegment* HAnimSegment500 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment500->setName("t4");
HAnimSegment500->setDEF("Joe_t4");
CShape* Shape501 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet502 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet502->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate503 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate503->setPoint(new float[6]{0,1.409999966621399,-0.12349999696016312,0,1.437999963760376,-0.11999999731779099});
IndexedLineSet502->setCoord(*Coordinate503);

Shape501->setGeometry(IndexedLineSet502);

CAppearance* Appearance504 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance504->setUSE("SegmentLine");
Shape501->setAppearance(*Appearance504);

HAnimSegment500->addChildren(*Shape501);

HAnimJoint495->addChildren(*HAnimSegment500);

CHAnimJoint* HAnimJoint505 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint505->setName("vt3");
HAnimJoint505->setDEF("Joe_vt3");
HAnimJoint505->setCenter(new float[3]{0,1.437999963760376,-0.11999999731779099});
HAnimJoint505->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint505->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform506 = (CTransform *)(m_pScene.createNode("Transform"));
Transform506->setTranslation(new float[3]{0,1.437999963760376,-0.11999999731779099});
CShape* Shape507 = (CShape *)(m_pScene.createNode("Shape"));
Shape507->setUSE("jointbox");
Transform506->addChildren(*Shape507);

HAnimJoint505->addChildren(*Transform506);

CHAnimSegment* HAnimSegment508 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment508->setName("t3");
HAnimSegment508->setDEF("Joe_t3");
CShape* Shape509 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet510 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet510->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate511 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate511->setPoint(new float[6]{0,1.437999963760376,-0.11999999731779099,0,1.468000054359436,-0.10499999672174454});
IndexedLineSet510->setCoord(*Coordinate511);

Shape509->setGeometry(IndexedLineSet510);

CAppearance* Appearance512 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance512->setUSE("SegmentLine");
Shape509->setAppearance(*Appearance512);

HAnimSegment508->addChildren(*Shape509);

HAnimJoint505->addChildren(*HAnimSegment508);

CHAnimJoint* HAnimJoint513 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint513->setName("vt2");
HAnimJoint513->setDEF("Joe_vt2");
HAnimJoint513->setCenter(new float[3]{0,1.468000054359436,-0.10499999672174454});
HAnimJoint513->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint513->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform514 = (CTransform *)(m_pScene.createNode("Transform"));
Transform514->setTranslation(new float[3]{0,1.468000054359436,-0.10499999672174454});
CShape* Shape515 = (CShape *)(m_pScene.createNode("Shape"));
Shape515->setUSE("jointbox");
Transform514->addChildren(*Shape515);

HAnimJoint513->addChildren(*Transform514);

CHAnimSegment* HAnimSegment516 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment516->setName("t2");
HAnimSegment516->setDEF("Joe_t2");
CShape* Shape517 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet518 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet518->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate519 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate519->setPoint(new float[6]{0,1.468000054359436,-0.10499999672174454,0,1.496999979019165,-0.09000000357627869});
IndexedLineSet518->setCoord(*Coordinate519);

Shape517->setGeometry(IndexedLineSet518);

CAppearance* Appearance520 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance520->setUSE("SegmentLine");
Shape517->setAppearance(*Appearance520);

HAnimSegment516->addChildren(*Shape517);

HAnimJoint513->addChildren(*HAnimSegment516);

CHAnimJoint* HAnimJoint521 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint521->setName("vt1");
HAnimJoint521->setDEF("Joe_vt1");
HAnimJoint521->setCenter(new float[3]{0,1.496999979019165,-0.09000000357627869});
HAnimJoint521->setSkinCoordIndex(new int[2]{11,24});
HAnimJoint521->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint521->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint521->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform522 = (CTransform *)(m_pScene.createNode("Transform"));
Transform522->setTranslation(new float[3]{0,1.496999979019165,-0.09000000357627869});
CShape* Shape523 = (CShape *)(m_pScene.createNode("Shape"));
Shape523->setUSE("jointbox");
Transform522->addChildren(*Shape523);

HAnimJoint521->addChildren(*Transform522);

CHAnimSegment* HAnimSegment524 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment524->setName("t1");
HAnimSegment524->setDEF("Joe_t1");
CShape* Shape525 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet526 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet526->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate527 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate527->setPoint(new float[6]{0,1.496999979019165,-0.09000000357627869,0,1.524999976158142,-0.07199999690055847});
IndexedLineSet526->setCoord(*Coordinate527);

Shape525->setGeometry(IndexedLineSet526);

CAppearance* Appearance528 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance528->setUSE("SegmentLine");
Shape525->setAppearance(*Appearance528);

HAnimSegment524->addChildren(*Shape525);

CHAnimSite* HAnimSite529 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite529->setName("suprasternale");
HAnimSite529->setDEF("Joe_suprasternale");
HAnimSite529->setTranslation(new float[3]{0,1.440000057220459,0.029999999329447746});
CShape* Shape530 = (CShape *)(m_pScene.createNode("Shape"));
Shape530->setUSE("sitebox");
HAnimSite529->addChildren(*Shape530);

HAnimSegment524->addChildren(*HAnimSite529);

CHAnimSite* HAnimSite531 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite531->setName("cervicale");
HAnimSite531->setDEF("Joe_cervicale");
HAnimSite531->setTranslation(new float[3]{0,1.5299999713897705,-0.08399999886751175});
CShape* Shape532 = (CShape *)(m_pScene.createNode("Shape"));
Shape532->setUSE("sitebox");
HAnimSite531->addChildren(*Shape532);

HAnimSegment524->addChildren(*HAnimSite531);

HAnimJoint521->addChildren(*HAnimSegment524);

CHAnimJoint* HAnimJoint533 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint533->setName("vc7");
HAnimJoint533->setDEF("Joe_vc7");
HAnimJoint533->setCenter(new float[3]{0,1.524999976158142,-0.07199999690055847});
HAnimJoint533->setSkinCoordIndex(new int[2]{74,75});
HAnimJoint533->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint533->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint533->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform534 = (CTransform *)(m_pScene.createNode("Transform"));
Transform534->setTranslation(new float[3]{0,1.524999976158142,-0.07199999690055847});
CShape* Shape535 = (CShape *)(m_pScene.createNode("Shape"));
Shape535->setUSE("jointbox");
Transform534->addChildren(*Shape535);

HAnimJoint533->addChildren(*Transform534);

CHAnimSegment* HAnimSegment536 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment536->setName("c7");
HAnimSegment536->setDEF("Joe_c7");
CShape* Shape537 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet538 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet538->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
CCoordinate* Coordinate539 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate539->setPoint(new float[12]{0,1.524999976158142,-0.07199999690055847,0.0820000022649765,1.448799967765808,-0.03530000150203705,-0.029999999329447746,1.4600000381469727,0.019999999552965164,0,1.5399999618530273,-0.05000000074505806});
IndexedLineSet538->setCoord(*Coordinate539);

Shape537->setGeometry(IndexedLineSet538);

CAppearance* Appearance540 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance540->setUSE("SegmentLine");
Shape537->setAppearance(*Appearance540);

HAnimSegment536->addChildren(*Shape537);

CHAnimSite* HAnimSite541 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite541->setName("r_neck_base");
HAnimSite541->setDEF("Joe_r_neck_base");
HAnimSite541->setTranslation(new float[3]{-0.06459999829530716,1.5148999691009521,-0.03849999979138374});
CShape* Shape542 = (CShape *)(m_pScene.createNode("Shape"));
Shape542->setUSE("sitebox");
HAnimSite541->addChildren(*Shape542);

HAnimSegment536->addChildren(*HAnimSite541);

CHAnimSite* HAnimSite543 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite543->setName("l_neck_base");
HAnimSite543->setDEF("Joe_l_neck_base");
HAnimSite543->setTranslation(new float[3]{0.06459999829530716,1.5148999691009521,-0.03849999979138374});
CShape* Shape544 = (CShape *)(m_pScene.createNode("Shape"));
Shape544->setUSE("sitebox");
HAnimSite543->addChildren(*Shape544);

HAnimSegment536->addChildren(*HAnimSite543);

HAnimJoint533->addChildren(*HAnimSegment536);

CHAnimJoint* HAnimJoint545 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint545->setName("vc6");
HAnimJoint545->setDEF("Joe_vc6");
HAnimJoint545->setCenter(new float[3]{0,1.5399999618530273,-0.05000000074505806});
HAnimJoint545->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint545->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform546 = (CTransform *)(m_pScene.createNode("Transform"));
Transform546->setTranslation(new float[3]{0,1.5399999618530273,-0.05000000074505806});
CShape* Shape547 = (CShape *)(m_pScene.createNode("Shape"));
Shape547->setUSE("jointbox");
Transform546->addChildren(*Shape547);

HAnimJoint545->addChildren(*Transform546);

CHAnimSegment* HAnimSegment548 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment548->setName("c6");
HAnimSegment548->setDEF("Joe_c6");
CShape* Shape549 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet550 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet550->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate551 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate551->setPoint(new float[6]{0,1.5399999618530273,-0.05000000074505806,0,1.5674999952316284,-0.025599999353289604});
IndexedLineSet550->setCoord(*Coordinate551);

Shape549->setGeometry(IndexedLineSet550);

CAppearance* Appearance552 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance552->setUSE("SegmentLine");
Shape549->setAppearance(*Appearance552);

HAnimSegment548->addChildren(*Shape549);

HAnimJoint545->addChildren(*HAnimSegment548);

CHAnimJoint* HAnimJoint553 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint553->setName("vc5");
HAnimJoint553->setDEF("Joe_vc5");
HAnimJoint553->setCenter(new float[3]{0,1.5520000457763672,-0.03500000014901161});
HAnimJoint553->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint553->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform554 = (CTransform *)(m_pScene.createNode("Transform"));
Transform554->setTranslation(new float[3]{0,1.5520000457763672,-0.03500000014901161});
CShape* Shape555 = (CShape *)(m_pScene.createNode("Shape"));
Shape555->setUSE("jointbox");
Transform554->addChildren(*Shape555);

HAnimJoint553->addChildren(*Transform554);

CHAnimSegment* HAnimSegment556 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment556->setName("c5");
HAnimSegment556->setDEF("Joe_c5");
CShape* Shape557 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet558 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet558->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate559 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate559->setPoint(new float[6]{0,1.5674999952316284,-0.025599999353289604,0,1.5822499990463257,-0.01850000023841858});
IndexedLineSet558->setCoord(*Coordinate559);

Shape557->setGeometry(IndexedLineSet558);

CAppearance* Appearance560 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance560->setUSE("SegmentLine");
Shape557->setAppearance(*Appearance560);

HAnimSegment556->addChildren(*Shape557);

HAnimJoint553->addChildren(*HAnimSegment556);

CHAnimJoint* HAnimJoint561 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint561->setName("vc4");
HAnimJoint561->setDEF("Joe_vc4");
HAnimJoint561->setCenter(new float[3]{0,1.5674999952316284,-0.025599999353289604});
HAnimJoint561->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint561->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform562 = (CTransform *)(m_pScene.createNode("Transform"));
Transform562->setTranslation(new float[3]{0,1.5674999952316284,-0.025599999353289604});
CShape* Shape563 = (CShape *)(m_pScene.createNode("Shape"));
Shape563->setUSE("jointbox");
Transform562->addChildren(*Shape563);

HAnimJoint561->addChildren(*Transform562);

CHAnimSegment* HAnimSegment564 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment564->setName("c4");
HAnimSegment564->setDEF("Joe_c4");
CShape* Shape565 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet566 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet566->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate567 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate567->setPoint(new float[6]{0,1.5822499990463257,-0.01850000023841858,0,1.5950000286102295,-0.017500000074505806});
IndexedLineSet566->setCoord(*Coordinate567);

Shape565->setGeometry(IndexedLineSet566);

CAppearance* Appearance568 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance568->setUSE("SegmentLine");
Shape565->setAppearance(*Appearance568);

HAnimSegment564->addChildren(*Shape565);

HAnimJoint561->addChildren(*HAnimSegment564);

CHAnimJoint* HAnimJoint569 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint569->setName("vc3");
HAnimJoint569->setDEF("Joe_vc3");
HAnimJoint569->setCenter(new float[3]{0,1.5822499990463257,-0.01850000023841858});
HAnimJoint569->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint569->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform570 = (CTransform *)(m_pScene.createNode("Transform"));
Transform570->setTranslation(new float[3]{0,1.5822499990463257,-0.01850000023841858});
CShape* Shape571 = (CShape *)(m_pScene.createNode("Shape"));
Shape571->setUSE("jointbox");
Transform570->addChildren(*Shape571);

HAnimJoint569->addChildren(*Transform570);

CHAnimSegment* HAnimSegment572 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment572->setName("c3");
HAnimSegment572->setDEF("Joe_c3");
CShape* Shape573 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet574 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet574->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate575 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate575->setPoint(new float[6]{0,1.5950000286102295,-0.017500000074505806,0,1.6100000143051147,-0.014999999664723873});
IndexedLineSet574->setCoord(*Coordinate575);

Shape573->setGeometry(IndexedLineSet574);

CAppearance* Appearance576 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance576->setUSE("SegmentLine");
Shape573->setAppearance(*Appearance576);

HAnimSegment572->addChildren(*Shape573);

HAnimJoint569->addChildren(*HAnimSegment572);

CHAnimJoint* HAnimJoint577 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint577->setName("vc2");
HAnimJoint577->setDEF("Joe_vc2");
HAnimJoint577->setCenter(new float[3]{0,1.5950000286102295,-0.017500000074505806});
HAnimJoint577->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint577->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform578 = (CTransform *)(m_pScene.createNode("Transform"));
Transform578->setTranslation(new float[3]{0,1.5950000286102295,-0.017500000074505806});
CShape* Shape579 = (CShape *)(m_pScene.createNode("Shape"));
Shape579->setUSE("jointbox");
Transform578->addChildren(*Shape579);

HAnimJoint577->addChildren(*Transform578);

CHAnimSegment* HAnimSegment580 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment580->setName("c2");
HAnimSegment580->setDEF("Joe_c2");
CShape* Shape581 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet582 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet582->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate583 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate583->setPoint(new float[6]{0,1.6100000143051147,-0.014999999664723873,0,1.614400029182434,-0.0034000000450760126});
IndexedLineSet582->setCoord(*Coordinate583);

Shape581->setGeometry(IndexedLineSet582);

CAppearance* Appearance584 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance584->setUSE("SegmentLine");
Shape581->setAppearance(*Appearance584);

HAnimSegment580->addChildren(*Shape581);

HAnimJoint577->addChildren(*HAnimSegment580);

CHAnimJoint* HAnimJoint585 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint585->setName("vc1");
HAnimJoint585->setDEF("Joe_vc1");
HAnimJoint585->setCenter(new float[3]{0,1.6100000143051147,-0.014999999664723873});
HAnimJoint585->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint585->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform586 = (CTransform *)(m_pScene.createNode("Transform"));
Transform586->setTranslation(new float[3]{0,1.6100000143051147,-0.014999999664723873});
CShape* Shape587 = (CShape *)(m_pScene.createNode("Shape"));
Shape587->setUSE("jointbox");
Transform586->addChildren(*Shape587);

HAnimJoint585->addChildren(*Transform586);

CHAnimSegment* HAnimSegment588 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment588->setName("c1");
HAnimSegment588->setDEF("Joe_c1");
CShape* Shape589 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet590 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet590->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate591 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate591->setPoint(new float[6]{0,1.614400029182434,-0.0034000000450760126,0,1.6299999952316284,-0.009999999776482582});
IndexedLineSet590->setCoord(*Coordinate591);

Shape589->setGeometry(IndexedLineSet590);

CAppearance* Appearance592 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance592->setUSE("SegmentLine");
Shape589->setAppearance(*Appearance592);

HAnimSegment588->addChildren(*Shape589);

HAnimJoint585->addChildren(*HAnimSegment588);

CHAnimJoint* HAnimJoint593 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint593->setName("skullbase");
HAnimJoint593->setDEF("Joe_skullbase");
HAnimJoint593->setCenter(new float[3]{0,1.6299999952316284,-0.009999999776482582});
HAnimJoint593->setSkinCoordIndex(new int[10]{0,1,2,3,4,5,6,7,8,9});
HAnimJoint593->setSkinCoordWeight(new float[10]{1,1,1,1,1,1,1,1,1,1}, 10);
HAnimJoint593->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint593->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform594 = (CTransform *)(m_pScene.createNode("Transform"));
Transform594->setTranslation(new float[3]{0,1.6299999952316284,-0.009999999776482582});
CTransform* Transform595 = (CTransform *)(m_pScene.createNode("Transform"));
Transform595->setScale(new float[3]{2,2,2});
CShape* Shape596 = (CShape *)(m_pScene.createNode("Shape"));
Shape596->setUSE("jointbox");
Transform595->addChildren(*Shape596);

Transform594->addChildren(*Transform595);

HAnimJoint593->addChildren(*Transform594);

CHAnimSegment* HAnimSegment597 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment597->setName("skull");
HAnimSegment597->setDEF("Joe_skull");
CShape* Shape598 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet599 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet599->setCoordIndex(new int[6]{0,1,-1,0,2,-1});
CCoordinate* Coordinate600 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate600->setPoint(new float[9]{0,1.6299999952316284,-0.009999999776482582,0.03400000184774399,1.659000039100647,0.05999999865889549,-0.03400000184774399,1.6549999713897705,0.06499999761581421});
IndexedLineSet599->setCoord(*Coordinate600);

Shape598->setGeometry(IndexedLineSet599);

CAppearance* Appearance601 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance601->setUSE("SegmentLine");
Shape598->setAppearance(*Appearance601);

HAnimSegment597->addChildren(*Shape598);

CHAnimSite* HAnimSite602 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite602->setName("skull_tip");
HAnimSite602->setDEF("Joe_skull_tip");
HAnimSite602->setTranslation(new float[3]{0,1.7699999809265137,0});
CShape* Shape603 = (CShape *)(m_pScene.createNode("Shape"));
Shape603->setUSE("sitebox");
HAnimSite602->addChildren(*Shape603);

HAnimSegment597->addChildren(*HAnimSite602);

CHAnimSite* HAnimSite604 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite604->setName("sellion");
HAnimSite604->setDEF("Joe_sellion");
HAnimSite604->setTranslation(new float[3]{0,1.6649999618530273,0.09000000357627869});
CShape* Shape605 = (CShape *)(m_pScene.createNode("Shape"));
Shape605->setUSE("sitebox");
HAnimSite604->addChildren(*Shape605);

HAnimSegment597->addChildren(*HAnimSite604);

CHAnimSite* HAnimSite606 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite606->setName("r_infraorbitale");
HAnimSite606->setDEF("Joe_r_infraorbitale");
HAnimSite606->setTranslation(new float[3]{-0.032999999821186066,1.6200000047683716,0.08699999749660492});
CShape* Shape607 = (CShape *)(m_pScene.createNode("Shape"));
Shape607->setUSE("sitebox");
HAnimSite606->addChildren(*Shape607);

HAnimSegment597->addChildren(*HAnimSite606);

CHAnimSite* HAnimSite608 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite608->setName("l_infraorbitale");
HAnimSite608->setDEF("Joe_l_infraorbitale");
HAnimSite608->setTranslation(new float[3]{0.032999999821186066,1.6200000047683716,0.08699999749660492});
CShape* Shape609 = (CShape *)(m_pScene.createNode("Shape"));
Shape609->setUSE("sitebox");
HAnimSite608->addChildren(*Shape609);

HAnimSegment597->addChildren(*HAnimSite608);

CHAnimSite* HAnimSite610 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite610->setName("supramenton");
HAnimSite610->setDEF("Joe_supramenton");
HAnimSite610->setTranslation(new float[3]{0,1.5499999523162842,0.09700000286102295});
CShape* Shape611 = (CShape *)(m_pScene.createNode("Shape"));
Shape611->setUSE("sitebox");
HAnimSite610->addChildren(*Shape611);

HAnimSegment597->addChildren(*HAnimSite610);

CHAnimSite* HAnimSite612 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite612->setName("r_tragion");
HAnimSite612->setDEF("Joe_r_tragion");
HAnimSite612->setTranslation(new float[3]{-0.07699999958276749,1.6399999856948853,-0.009999999776482582});
CShape* Shape613 = (CShape *)(m_pScene.createNode("Shape"));
Shape613->setUSE("sitebox");
HAnimSite612->addChildren(*Shape613);

HAnimSegment597->addChildren(*HAnimSite612);

CHAnimSite* HAnimSite614 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite614->setName("r_gonion");
HAnimSite614->setDEF("Joe_r_gonion");
HAnimSite614->setTranslation(new float[3]{-0.052000001072883606,1.5800000429153442,0.014999999664723873});
CShape* Shape615 = (CShape *)(m_pScene.createNode("Shape"));
Shape615->setUSE("sitebox");
HAnimSite614->addChildren(*Shape615);

HAnimSegment597->addChildren(*HAnimSite614);

CHAnimSite* HAnimSite616 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite616->setName("l_tragion");
HAnimSite616->setDEF("Joe_l_tragion");
HAnimSite616->setTranslation(new float[3]{0.07699999958276749,1.6399999856948853,-0.009999999776482582});
CShape* Shape617 = (CShape *)(m_pScene.createNode("Shape"));
Shape617->setUSE("sitebox");
HAnimSite616->addChildren(*Shape617);

HAnimSegment597->addChildren(*HAnimSite616);

CHAnimSite* HAnimSite618 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite618->setName("l_gonion");
HAnimSite618->setDEF("Joe_l_gonion");
HAnimSite618->setTranslation(new float[3]{0.06310000270605087,1.5800000429153442,0.014999999664723873});
CShape* Shape619 = (CShape *)(m_pScene.createNode("Shape"));
Shape619->setUSE("sitebox");
HAnimSite618->addChildren(*Shape619);

HAnimSegment597->addChildren(*HAnimSite618);

CHAnimSite* HAnimSite620 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite620->setName("nuchale");
HAnimSite620->setDEF("Joe_nuchale");
HAnimSite620->setTranslation(new float[3]{0,1.625,-0.0925000011920929});
CShape* Shape621 = (CShape *)(m_pScene.createNode("Shape"));
Shape621->setUSE("sitebox");
HAnimSite620->addChildren(*Shape621);

HAnimSegment597->addChildren(*HAnimSite620);

HAnimJoint593->addChildren(*HAnimSegment597);

CHAnimJoint* HAnimJoint622 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint622->setName("l_eyeball_joint");
HAnimJoint622->setDEF("Joe_l_eyeball_joint");
HAnimJoint622->setCenter(new float[3]{0.03400000184774399,1.659000039100647,0.05999999865889549});
HAnimJoint622->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint622->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform623 = (CTransform *)(m_pScene.createNode("Transform"));
Transform623->setScale(new float[3]{1,1,1.399999976158142});
Transform623->setTranslation(new float[3]{0.03400000184774399,1.6549999713897705,0.06499999761581421});
CShape* Shape624 = (CShape *)(m_pScene.createNode("Shape"));
Shape624->setUSE("jointbox");
Transform623->addChildren(*Shape624);

HAnimJoint622->addChildren(*Transform623);

CHAnimSegment* HAnimSegment625 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment625->setName("l_eyeball");
HAnimSegment625->setDEF("Joe_l_eyeball");
CShape* Shape626 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet627 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet627->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate628 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate628->setPoint(new float[6]{0.03400000184774399,1.6549999713897705,0.06499999761581421,-0.03400000184774399,1.6549999713897705,0.06499999761581421});
IndexedLineSet627->setCoord(*Coordinate628);

Shape626->setGeometry(IndexedLineSet627);

CAppearance* Appearance629 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance629->setUSE("SegmentLine");
Shape626->setAppearance(*Appearance629);

HAnimSegment625->addChildren(*Shape626);

HAnimJoint622->addChildren(*HAnimSegment625);

HAnimJoint593->addChildren(*HAnimJoint622);

CHAnimJoint* HAnimJoint630 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint630->setName("r_eyeball_joint");
HAnimJoint630->setDEF("Joe_r_eyeball_joint");
HAnimJoint630->setCenter(new float[3]{-0.03400000184774399,1.659000039100647,0.05999999865889549});
HAnimJoint630->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint630->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform631 = (CTransform *)(m_pScene.createNode("Transform"));
Transform631->setScale(new float[3]{1,1,1.399999976158142});
Transform631->setTranslation(new float[3]{-0.03400000184774399,1.6549999713897705,0.06499999761581421});
CShape* Shape632 = (CShape *)(m_pScene.createNode("Shape"));
Shape632->setUSE("jointbox");
Transform631->addChildren(*Shape632);

HAnimJoint630->addChildren(*Transform631);

CHAnimSegment* HAnimSegment633 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment633->setName("r_eyeball");
HAnimSegment633->setDEF("Joe_r_eyeball");
CShape* Shape634 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet635 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet635->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate636 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate636->setPoint(new float[6]{0.03400000184774399,1.6549999713897705,0.06499999761581421,-0.03400000184774399,1.6549999713897705,0.06499999761581421});
IndexedLineSet635->setCoord(*Coordinate636);

Shape634->setGeometry(IndexedLineSet635);

CAppearance* Appearance637 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance637->setUSE("SegmentLine");
Shape634->setAppearance(*Appearance637);

HAnimSegment633->addChildren(*Shape634);

HAnimJoint630->addChildren(*HAnimSegment633);

HAnimJoint593->addChildren(*HAnimJoint630);

HAnimJoint585->addChildren(*HAnimJoint593);

HAnimJoint577->addChildren(*HAnimJoint585);

HAnimJoint569->addChildren(*HAnimJoint577);

HAnimJoint561->addChildren(*HAnimJoint569);

HAnimJoint553->addChildren(*HAnimJoint561);

HAnimJoint545->addChildren(*HAnimJoint553);

HAnimJoint533->addChildren(*HAnimJoint545);

HAnimJoint521->addChildren(*HAnimJoint533);

CHAnimJoint* HAnimJoint638 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint638->setName("l_sternoclavicular");
HAnimJoint638->setDEF("Joe_l_sternoclavicular");
HAnimJoint638->setCenter(new float[3]{0.0820000022649765,1.448799967765808,-0.03530000150203705});
HAnimJoint638->setSkinCoordIndex(new int[1]{12});
HAnimJoint638->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint638->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint638->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform639 = (CTransform *)(m_pScene.createNode("Transform"));
Transform639->setTranslation(new float[3]{0.0820000022649765,1.448799967765808,-0.03530000150203705});
CShape* Shape640 = (CShape *)(m_pScene.createNode("Shape"));
Shape640->setUSE("jointbox");
Transform639->addChildren(*Shape640);

HAnimJoint638->addChildren(*Transform639);

CHAnimSegment* HAnimSegment641 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment641->setName("l_clavicle");
HAnimSegment641->setDEF("Joe_l_clavicle");
CShape* Shape642 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet643 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet643->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate644 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate644->setPoint(new float[6]{0.0820000022649765,1.448799967765808,-0.03530000150203705,0.09619999676942825,1.426900029182434,-0.042399998754262924});
IndexedLineSet643->setCoord(*Coordinate644);

Shape642->setGeometry(IndexedLineSet643);

CAppearance* Appearance645 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance645->setUSE("SegmentLine");
Shape642->setAppearance(*Appearance645);

HAnimSegment641->addChildren(*Shape642);

CHAnimSite* HAnimSite646 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite646->setName("l_clavicale");
HAnimSite646->setDEF("Joe_l_clavicale");
HAnimSite646->setTranslation(new float[3]{0.029999999329447746,1.4600000381469727,0.03500000014901161});
CShape* Shape647 = (CShape *)(m_pScene.createNode("Shape"));
Shape647->setUSE("sitebox");
HAnimSite646->addChildren(*Shape647);

HAnimSegment641->addChildren(*HAnimSite646);

HAnimJoint638->addChildren(*HAnimSegment641);

CHAnimJoint* HAnimJoint648 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint648->setName("l_acromioclavicular");
HAnimJoint648->setDEF("Joe_l_acromioclavicular");
HAnimJoint648->setCenter(new float[3]{0.09619999676942825,1.426900029182434,-0.042399998754262924});
HAnimJoint648->setSkinCoordIndex(new int[1]{79});
HAnimJoint648->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint648->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint648->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform649 = (CTransform *)(m_pScene.createNode("Transform"));
Transform649->setTranslation(new float[3]{0.09619999676942825,1.426900029182434,-0.042399998754262924});
CShape* Shape650 = (CShape *)(m_pScene.createNode("Shape"));
Shape650->setUSE("jointbox");
Transform649->addChildren(*Shape650);

HAnimJoint648->addChildren(*Transform649);

CHAnimSegment* HAnimSegment651 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment651->setName("l_scapula");
HAnimSegment651->setDEF("Joe_l_scapula");
CShape* Shape652 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet653 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet653->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate654 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate654->setPoint(new float[6]{0.09619999676942825,1.426900029182434,-0.042399998754262924,0.20000000298023224,1.440000057220459,-0.03999999910593033});
IndexedLineSet653->setCoord(*Coordinate654);

Shape652->setGeometry(IndexedLineSet653);

CAppearance* Appearance655 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance655->setUSE("SegmentLine");
Shape652->setAppearance(*Appearance655);

HAnimSegment651->addChildren(*Shape652);

CHAnimSite* HAnimSite656 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite656->setName("l_acromion");
HAnimSite656->setDEF("Joe_l_acromion");
HAnimSite656->setTranslation(new float[3]{0.17499999701976776,1.4824999570846558,-0.05999999865889549});
CShape* Shape657 = (CShape *)(m_pScene.createNode("Shape"));
Shape657->setUSE("sitebox");
HAnimSite656->addChildren(*Shape657);

HAnimSegment651->addChildren(*HAnimSite656);

CHAnimSite* HAnimSite658 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite658->setName("l_axilla_ant");
HAnimSite658->setDEF("Joe_l_axilla_ant");
HAnimSite658->setTranslation(new float[3]{0.17000000178813934,1.3799999952316284,0.007000000216066837});
CShape* Shape659 = (CShape *)(m_pScene.createNode("Shape"));
Shape659->setUSE("sitebox");
HAnimSite658->addChildren(*Shape659);

HAnimSegment651->addChildren(*HAnimSite658);

CHAnimSite* HAnimSite660 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite660->setName("l_axilla_post");
HAnimSite660->setDEF("Joe_l_axilla_post");
HAnimSite660->setTranslation(new float[3]{0.1599999964237213,1.3799999952316284,-0.125});
CShape* Shape661 = (CShape *)(m_pScene.createNode("Shape"));
Shape661->setUSE("sitebox");
HAnimSite660->addChildren(*Shape661);

HAnimSegment651->addChildren(*HAnimSite660);

CTransform* Transform662 = (CTransform *)(m_pScene.createNode("Transform"));
Transform662->setTranslation(new float[3]{0.10999999940395355,1.4270000457763672,-0.13750000298023224});
CShape* Shape663 = (CShape *)(m_pScene.createNode("Shape"));
Shape663->setUSE("skinsphere");
Transform662->addChildren(*Shape663);

HAnimSegment651->addChildren(*Transform662);

HAnimJoint648->addChildren(*HAnimSegment651);

CHAnimJoint* HAnimJoint664 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint664->setName("l_shoulder");
HAnimJoint664->setDEF("Joe_l_shoulder");
HAnimJoint664->setCenter(new float[3]{0.20000000298023224,1.440000057220459,-0.03999999910593033});
HAnimJoint664->setSkinCoordIndex(new int[8]{41,42,44,80,102,103,104,105});
HAnimJoint664->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint664->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint664->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform665 = (CTransform *)(m_pScene.createNode("Transform"));
Transform665->setTranslation(new float[3]{0.20000000298023224,1.440000057220459,-0.03999999910593033});
CShape* Shape666 = (CShape *)(m_pScene.createNode("Shape"));
Shape666->setUSE("jointbox");
Transform665->addChildren(*Shape666);

HAnimJoint664->addChildren(*Transform665);

CHAnimSegment* HAnimSegment667 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment667->setName("l_upperarm");
HAnimSegment667->setDEF("Joe_l_upperarm");
CShape* Shape668 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet669 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet669->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate670 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate670->setPoint(new float[6]{0.2029000073671341,1.440000057220459,-0.03869999945163727,0.20000000298023224,1.138800024986267,-0.03999999910593033});
IndexedLineSet669->setCoord(*Coordinate670);

Shape668->setGeometry(IndexedLineSet669);

CAppearance* Appearance671 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance671->setUSE("SegmentLine");
Shape668->setAppearance(*Appearance671);

HAnimSegment667->addChildren(*Shape668);

CHAnimSite* HAnimSite672 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite672->setName("l_humeral_medial_epicn");
HAnimSite672->setDEF("Joe_l_humeral_medial_epicn");
HAnimSite672->setTranslation(new float[3]{0.16500000655651093,1.138800024986267,-0.03999999910593033});
CShape* Shape673 = (CShape *)(m_pScene.createNode("Shape"));
Shape673->setUSE("sitebox");
HAnimSite672->addChildren(*Shape673);

HAnimSegment667->addChildren(*HAnimSite672);

CHAnimSite* HAnimSite674 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite674->setName("l_radiale");
HAnimSite674->setDEF("Joe_l_radiale");
HAnimSite674->setTranslation(new float[3]{0.23000000417232513,1.1330000162124634,-0.054999999701976776});
CShape* Shape675 = (CShape *)(m_pScene.createNode("Shape"));
Shape675->setUSE("sitebox");
HAnimSite674->addChildren(*Shape675);

HAnimSegment667->addChildren(*HAnimSite674);

CHAnimSite* HAnimSite676 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite676->setName("l_humeral_lateral_epicn");
HAnimSite676->setDEF("Joe_l_humeral_lateral_epicn");
HAnimSite676->setTranslation(new float[3]{0.24400000274181366,1.138800024986267,-0.03999999910593033});
CShape* Shape677 = (CShape *)(m_pScene.createNode("Shape"));
Shape677->setUSE("sitebox");
HAnimSite676->addChildren(*Shape677);

HAnimSegment667->addChildren(*HAnimSite676);

CTransform* Transform678 = (CTransform *)(m_pScene.createNode("Transform"));
Transform678->setTranslation(new float[3]{0.23499999940395355,1.4199999570846558,-0.0625});
CShape* Shape679 = (CShape *)(m_pScene.createNode("Shape"));
Shape679->setUSE("skinsphere");
Transform678->addChildren(*Shape679);

HAnimSegment667->addChildren(*Transform678);

CTransform* Transform680 = (CTransform *)(m_pScene.createNode("Transform"));
Transform680->setTranslation(new float[3]{0.25,1.2699999809265137,-0.03999999910593033});
CShape* Shape681 = (CShape *)(m_pScene.createNode("Shape"));
Shape681->setUSE("skinsphere");
Transform680->addChildren(*Shape681);

HAnimSegment667->addChildren(*Transform680);

CTransform* Transform682 = (CTransform *)(m_pScene.createNode("Transform"));
Transform682->setTranslation(new float[3]{0.17000000178813934,1.2699999809265137,-0.03999999910593033});
CShape* Shape683 = (CShape *)(m_pScene.createNode("Shape"));
Shape683->setUSE("skinsphere");
Transform682->addChildren(*Shape683);

HAnimSegment667->addChildren(*Transform682);

CTransform* Transform684 = (CTransform *)(m_pScene.createNode("Transform"));
Transform684->setTranslation(new float[3]{0.20000000298023224,1.2699999809265137,-0.09000000357627869});
CShape* Shape685 = (CShape *)(m_pScene.createNode("Shape"));
Shape685->setUSE("skinsphere");
Transform684->addChildren(*Shape685);

HAnimSegment667->addChildren(*Transform684);

CTransform* Transform686 = (CTransform *)(m_pScene.createNode("Transform"));
Transform686->setTranslation(new float[3]{0.20000000298023224,1.2699999809265137,0.019999999552965164});
CShape* Shape687 = (CShape *)(m_pScene.createNode("Shape"));
Shape687->setUSE("skinsphere");
Transform686->addChildren(*Shape687);

HAnimSegment667->addChildren(*Transform686);

HAnimJoint664->addChildren(*HAnimSegment667);

CHAnimJoint* HAnimJoint688 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint688->setName("l_elbow");
HAnimJoint688->setDEF("Joe_l_elbow");
HAnimJoint688->setCenter(new float[3]{0.20000000298023224,1.138800024986267,-0.03999999910593033});
HAnimJoint688->setSkinCoordIndex(new int[12]{45,46,47,109,110,111,112,113,115,116,117,118});
HAnimJoint688->setSkinCoordWeight(new float[15]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 15);
HAnimJoint688->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint688->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform689 = (CTransform *)(m_pScene.createNode("Transform"));
Transform689->setTranslation(new float[3]{0.20000000298023224,1.138800024986267,-0.03999999910593033});
CShape* Shape690 = (CShape *)(m_pScene.createNode("Shape"));
Shape690->setUSE("jointbox");
Transform689->addChildren(*Shape690);

HAnimJoint688->addChildren(*Transform689);

CHAnimSegment* HAnimSegment691 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment691->setName("l_forearm");
HAnimSegment691->setDEF("Joe_l_forearm");
CShape* Shape692 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet693 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet693->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate694 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate694->setPoint(new float[6]{0.20000000298023224,1.138800024986267,-0.03999999910593033,0.20000000298023224,0.8700000047683716,-0.03999999910593033});
IndexedLineSet693->setCoord(*Coordinate694);

Shape692->setGeometry(IndexedLineSet693);

CAppearance* Appearance695 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance695->setUSE("SegmentLine");
Shape692->setAppearance(*Appearance695);

HAnimSegment691->addChildren(*Shape692);

CHAnimSite* HAnimSite696 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite696->setName("l_radial_styloid");
HAnimSite696->setDEF("Joe_l_radial_styloid");
HAnimSite696->setTranslation(new float[3]{0.19009999930858612,0.8644999861717224,-0.04149999842047691});
CShape* Shape697 = (CShape *)(m_pScene.createNode("Shape"));
Shape697->setUSE("sitebox");
HAnimSite696->addChildren(*Shape697);

HAnimSegment691->addChildren(*HAnimSite696);

CHAnimSite* HAnimSite698 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite698->setName("l_olecranon");
HAnimSite698->setDEF("Joe_l_olecranon");
HAnimSite698->setTranslation(new float[3]{0.20000000298023224,1.138800024986267,-0.07999999821186066});
CShape* Shape699 = (CShape *)(m_pScene.createNode("Shape"));
Shape699->setUSE("sitebox");
HAnimSite698->addChildren(*Shape699);

HAnimSegment691->addChildren(*HAnimSite698);

CTransform* Transform700 = (CTransform *)(m_pScene.createNode("Transform"));
Transform700->setTranslation(new float[3]{0.20000000298023224,1.138800024986267,-0.013000000268220901});
CShape* Shape701 = (CShape *)(m_pScene.createNode("Shape"));
Shape701->setUSE("skinsphere");
Transform700->addChildren(*Shape701);

HAnimSegment691->addChildren(*Transform700);

CTransform* Transform702 = (CTransform *)(m_pScene.createNode("Transform"));
Transform702->setTranslation(new float[3]{0.22499999403953552,1,-0.009999999776482582});
CShape* Shape703 = (CShape *)(m_pScene.createNode("Shape"));
Shape703->setUSE("skinsphere");
Transform702->addChildren(*Shape703);

HAnimSegment691->addChildren(*Transform702);

CTransform* Transform704 = (CTransform *)(m_pScene.createNode("Transform"));
Transform704->setTranslation(new float[3]{0.22499999403953552,1,-0.07000000029802322});
CShape* Shape705 = (CShape *)(m_pScene.createNode("Shape"));
Shape705->setUSE("skinsphere");
Transform704->addChildren(*Shape705);

HAnimSegment691->addChildren(*Transform704);

CTransform* Transform706 = (CTransform *)(m_pScene.createNode("Transform"));
Transform706->setTranslation(new float[3]{0.1850000023841858,1,-0.009999999776482582});
CShape* Shape707 = (CShape *)(m_pScene.createNode("Shape"));
Shape707->setUSE("skinsphere");
Transform706->addChildren(*Shape707);

HAnimSegment691->addChildren(*Transform706);

CTransform* Transform708 = (CTransform *)(m_pScene.createNode("Transform"));
Transform708->setTranslation(new float[3]{0.1850000023841858,1,-0.07000000029802322});
CShape* Shape709 = (CShape *)(m_pScene.createNode("Shape"));
Shape709->setUSE("skinsphere");
Transform708->addChildren(*Shape709);

HAnimSegment691->addChildren(*Transform708);

HAnimJoint688->addChildren(*HAnimSegment691);

CHAnimJoint* HAnimJoint710 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint710->setName("l_wrist");
HAnimJoint710->setDEF("Joe_l_wrist");
HAnimJoint710->setCenter(new float[3]{0.20000000298023224,0.8700000047683716,-0.03999999910593033});
HAnimJoint710->setSkinCoordIndex(new int[8]{119,120,121,122,123,124,125,126});
HAnimJoint710->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint710->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint710->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform711 = (CTransform *)(m_pScene.createNode("Transform"));
Transform711->setTranslation(new float[3]{0.20000000298023224,0.8700000047683716,-0.03999999910593033});
CShape* Shape712 = (CShape *)(m_pScene.createNode("Shape"));
Shape712->setUSE("jointbox");
Transform711->addChildren(*Shape712);

HAnimJoint710->addChildren(*Transform711);

CHAnimSegment* HAnimSegment713 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment713->setName("l_hand");
HAnimSegment713->setDEF("Joe_l_hand");
CShape* Shape714 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet715 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet715->setCoordIndex(new int[15]{0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1});
CCoordinate* Coordinate716 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate716->setPoint(new float[18]{0.20000000298023224,0.8700000047683716,-0.03999999910593033,0.1923999935388565,0.8471999764442444,-0.05339999869465828,0.19830000400543213,0.8023999929428101,-0.02800000086426735,0.19869999587535858,0.8029000163078308,-0.05299999937415123,0.1956000030040741,0.8019000291824341,-0.07940000295639038,0.19249999523162842,0.8065999746322632,-0.10360000282526016});
IndexedLineSet715->setCoord(*Coordinate716);

Shape714->setGeometry(IndexedLineSet715);

CAppearance* Appearance717 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance717->setUSE("SegmentLine");
Shape714->setAppearance(*Appearance717);

HAnimSegment713->addChildren(*Shape714);

CHAnimSite* HAnimSite718 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite718->setName("l_metacarpal_pha2");
HAnimSite718->setDEF("Joe_l_metacarpal_pha2");
HAnimSite718->setTranslation(new float[3]{0.20090000331401825,0.8138999938964844,-0.02370000071823597});
CShape* Shape719 = (CShape *)(m_pScene.createNode("Shape"));
Shape719->setUSE("sitebox");
HAnimSite718->addChildren(*Shape719);

HAnimSegment713->addChildren(*HAnimSite718);

CHAnimSite* HAnimSite720 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite720->setName("l_ulnar_styloid");
HAnimSite720->setDEF("Joe_l_ulnar_styloid");
HAnimSite720->setTranslation(new float[3]{0.2142000049352646,0.8529000282287598,-0.06480000168085098});
CShape* Shape721 = (CShape *)(m_pScene.createNode("Shape"));
Shape721->setUSE("sitebox");
HAnimSite720->addChildren(*Shape721);

HAnimSegment713->addChildren(*HAnimSite720);

CHAnimSite* HAnimSite722 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite722->setName("l_metacarpal_pha5");
HAnimSite722->setDEF("Joe_l_metacarpal_pha5");
HAnimSite722->setTranslation(new float[3]{0.19290000200271606,0.7860000133514404,-0.11219999939203262});
CShape* Shape723 = (CShape *)(m_pScene.createNode("Shape"));
Shape723->setUSE("sitebox");
HAnimSite722->addChildren(*Shape723);

HAnimSegment713->addChildren(*HAnimSite722);

HAnimJoint710->addChildren(*HAnimSegment713);

CHAnimJoint* HAnimJoint724 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint724->setName("l_thumb1");
HAnimJoint724->setDEF("Joe_l_thumb1");
HAnimJoint724->setCenter(new float[3]{0.1923999935388565,0.8471999764442444,-0.05339999869465828});
HAnimJoint724->setSkinCoordIndex(new int[2]{127,128});
HAnimJoint724->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint724->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint724->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform725 = (CTransform *)(m_pScene.createNode("Transform"));
Transform725->setTranslation(new float[3]{0.1923999935388565,0.8471999764442444,-0.05339999869465828});
CShape* Shape726 = (CShape *)(m_pScene.createNode("Shape"));
Shape726->setUSE("jointbox");
Transform725->addChildren(*Shape726);

HAnimJoint724->addChildren(*Transform725);

CHAnimSegment* HAnimSegment727 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment727->setName("l_thumb_metacarpal");
HAnimSegment727->setDEF("Joe_l_thumb_metacarpal");
CShape* Shape728 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet729 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet729->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate730 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate730->setPoint(new float[6]{0.1923999935388565,0.8471999764442444,-0.05339999869465828,0.19509999454021454,0.8226000070571899,0.02459999918937683});
IndexedLineSet729->setCoord(*Coordinate730);

Shape728->setGeometry(IndexedLineSet729);

CAppearance* Appearance731 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance731->setUSE("SegmentLine");
Shape728->setAppearance(*Appearance731);

HAnimSegment727->addChildren(*Shape728);

HAnimJoint724->addChildren(*HAnimSegment727);

CHAnimJoint* HAnimJoint732 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint732->setName("l_thumb2");
HAnimJoint732->setDEF("Joe_l_thumb2");
HAnimJoint732->setCenter(new float[3]{0.19509999454021454,0.8226000070571899,0.02459999918937683});
HAnimJoint732->setSkinCoordIndex(new int[6]{138,139,140,141,142,143});
HAnimJoint732->setSkinCoordWeight(new float[6]{0.5,0.5,0.5,1,1,1}, 6);
HAnimJoint732->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint732->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform733 = (CTransform *)(m_pScene.createNode("Transform"));
Transform733->setTranslation(new float[3]{0.19509999454021454,0.8226000070571899,0.02459999918937683});
CShape* Shape734 = (CShape *)(m_pScene.createNode("Shape"));
Shape734->setUSE("jointbox");
Transform733->addChildren(*Shape734);

HAnimJoint732->addChildren(*Transform733);

CHAnimSegment* HAnimSegment735 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment735->setName("l_thumb_distal");
HAnimSegment735->setDEF("Joe_l_thumb_proximal");
CShape* Shape736 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet737 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet737->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate738 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate738->setPoint(new float[6]{0.19509999454021454,0.8226000070571899,0.02459999918937683,0.19550000131130219,0.8159000277519226,0.04639999940991402});
IndexedLineSet737->setCoord(*Coordinate738);

Shape736->setGeometry(IndexedLineSet737);

CAppearance* Appearance739 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance739->setUSE("SegmentLine");
Shape736->setAppearance(*Appearance739);

HAnimSegment735->addChildren(*Shape736);

HAnimJoint732->addChildren(*HAnimSegment735);

CHAnimJoint* HAnimJoint740 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint740->setName("l_thumb3");
HAnimJoint740->setDEF("Joe_l_thumb3");
HAnimJoint740->setCenter(new float[3]{0.19550000131130219,0.8159000277519226,0.04639999940991402});
HAnimJoint740->setSkinCoordIndex(new int[9]{144,145,146,147,148,149,150,151,152});
HAnimJoint740->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint740->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint740->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform741 = (CTransform *)(m_pScene.createNode("Transform"));
Transform741->setTranslation(new float[3]{0.19550000131130219,0.8159000277519226,0.04639999940991402});
CShape* Shape742 = (CShape *)(m_pScene.createNode("Shape"));
Shape742->setUSE("jointbox");
Transform741->addChildren(*Shape742);

HAnimJoint740->addChildren(*Transform741);

CHAnimSegment* HAnimSegment743 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment743->setName("l_thumb_distal");
HAnimSegment743->setDEF("Joe_l_thumb_distal");
CShape* Shape744 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet745 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet745->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate746 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate746->setPoint(new float[6]{0.19550000131130219,0.8159000277519226,0.04639999940991402,0.19820000231266022,0.8061000108718872,0.07590000331401825});
IndexedLineSet745->setCoord(*Coordinate746);

Shape744->setGeometry(IndexedLineSet745);

CAppearance* Appearance747 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance747->setUSE("SegmentLine");
Shape744->setAppearance(*Appearance747);

HAnimSegment743->addChildren(*Shape744);

CHAnimSite* HAnimSite748 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite748->setName("l_thumb_distal_tip");
HAnimSite748->setDEF("Joe_l_thumb_distal_tip");
HAnimSite748->setTranslation(new float[3]{0.19820000231266022,0.8061000108718872,0.07590000331401825});
CShape* Shape749 = (CShape *)(m_pScene.createNode("Shape"));
Shape749->setUSE("sitebox");
HAnimSite748->addChildren(*Shape749);

HAnimSegment743->addChildren(*HAnimSite748);

HAnimJoint740->addChildren(*HAnimSegment743);

HAnimJoint732->addChildren(*HAnimJoint740);

HAnimJoint724->addChildren(*HAnimJoint732);

HAnimJoint710->addChildren(*HAnimJoint724);

CHAnimJoint* HAnimJoint750 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint750->setName("l_index0");
HAnimJoint750->setDEF("Joe_l_index0");
HAnimJoint750->setCenter(new float[3]{0.19830000400543213,0.8023999929428101,-0.02800000086426735});
HAnimJoint750->setSkinCoordIndex(new int[2]{129,130});
HAnimJoint750->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint750->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint750->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform751 = (CTransform *)(m_pScene.createNode("Transform"));
Transform751->setTranslation(new float[3]{0.19830000400543213,0.8023999929428101,-0.02800000086426735});
CShape* Shape752 = (CShape *)(m_pScene.createNode("Shape"));
Shape752->setUSE("jointbox");
Transform751->addChildren(*Shape752);

HAnimJoint750->addChildren(*Transform751);

CHAnimSegment* HAnimSegment753 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment753->setName("l_index_metacarpal");
HAnimSegment753->setDEF("Joe_l_index_metacarpal");
CShape* Shape754 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet755 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet755->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate756 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate756->setPoint(new float[6]{0.19830000400543213,0.8023999929428101,-0.02800000086426735,0.19830000400543213,0.781499981880188,-0.02800000086426735});
IndexedLineSet755->setCoord(*Coordinate756);

Shape754->setGeometry(IndexedLineSet755);

CAppearance* Appearance757 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance757->setUSE("SegmentLine");
Shape754->setAppearance(*Appearance757);

HAnimSegment753->addChildren(*Shape754);

HAnimJoint750->addChildren(*HAnimSegment753);

CHAnimJoint* HAnimJoint758 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint758->setName("l_index1");
HAnimJoint758->setDEF("Joe_l_index1");
HAnimJoint758->setCenter(new float[3]{0.19830000400543213,0.781499981880188,-0.02800000086426735});
HAnimJoint758->setSkinCoordIndex(new int[7]{138,139,140,153,154,155,163});
HAnimJoint758->setSkinCoordWeight(new float[7]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimJoint758->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint758->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform759 = (CTransform *)(m_pScene.createNode("Transform"));
Transform759->setTranslation(new float[3]{0.19830000400543213,0.781499981880188,-0.02800000086426735});
CShape* Shape760 = (CShape *)(m_pScene.createNode("Shape"));
Shape760->setUSE("jointbox");
Transform759->addChildren(*Shape760);

HAnimJoint758->addChildren(*Transform759);

CHAnimSegment* HAnimSegment761 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment761->setName("l_index_proximal");
HAnimSegment761->setDEF("Joe_l_index_proximal");
CShape* Shape762 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet763 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet763->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate764 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate764->setPoint(new float[6]{0.19830000400543213,0.781499981880188,-0.02800000086426735,0.20170000195503235,0.736299991607666,-0.024800000712275505});
IndexedLineSet763->setCoord(*Coordinate764);

Shape762->setGeometry(IndexedLineSet763);

CAppearance* Appearance765 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance765->setUSE("SegmentLine");
Shape762->setAppearance(*Appearance765);

HAnimSegment761->addChildren(*Shape762);

HAnimJoint758->addChildren(*HAnimSegment761);

CHAnimJoint* HAnimJoint766 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint766->setName("l_index2");
HAnimJoint766->setDEF("Joe_l_index2");
HAnimJoint766->setCenter(new float[3]{0.20170000195503235,0.736299991607666,-0.024800000712275505});
HAnimJoint766->setSkinCoordIndex(new int[4]{166,167,168,169});
HAnimJoint766->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint766->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint766->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform767 = (CTransform *)(m_pScene.createNode("Transform"));
Transform767->setTranslation(new float[3]{0.20170000195503235,0.736299991607666,-0.024800000712275505});
CShape* Shape768 = (CShape *)(m_pScene.createNode("Shape"));
Shape768->setUSE("jointbox");
Transform767->addChildren(*Shape768);

HAnimJoint766->addChildren(*Transform767);

CHAnimSegment* HAnimSegment769 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment769->setName("l_index_middle");
HAnimSegment769->setDEF("Joe_l_index_middle");
CShape* Shape770 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet771 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet771->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate772 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate772->setPoint(new float[6]{0.20170000195503235,0.736299991607666,-0.024800000712275505,0.20280000567436218,0.7139000296592712,-0.023600000888109207});
IndexedLineSet771->setCoord(*Coordinate772);

Shape770->setGeometry(IndexedLineSet771);

CAppearance* Appearance773 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance773->setUSE("SegmentLine");
Shape770->setAppearance(*Appearance773);

HAnimSegment769->addChildren(*Shape770);

HAnimJoint766->addChildren(*HAnimSegment769);

CHAnimJoint* HAnimJoint774 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint774->setName("l_index3");
HAnimJoint774->setDEF("Joe_l_index3");
HAnimJoint774->setCenter(new float[3]{0.20280000567436218,0.7139000296592712,-0.023600000888109207});
HAnimJoint774->setSkinCoordIndex(new int[9]{170,171,172,173,174,175,176,177,178});
HAnimJoint774->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint774->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint774->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform775 = (CTransform *)(m_pScene.createNode("Transform"));
Transform775->setTranslation(new float[3]{0.20280000567436218,0.7139000296592712,-0.023600000888109207});
CShape* Shape776 = (CShape *)(m_pScene.createNode("Shape"));
Shape776->setUSE("jointbox");
Transform775->addChildren(*Shape776);

HAnimJoint774->addChildren(*Transform775);

CHAnimSegment* HAnimSegment777 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment777->setName("l_index_distal");
HAnimSegment777->setDEF("Joe_l_index_distal");
CShape* Shape778 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet779 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet779->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate780 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate780->setPoint(new float[6]{0.20280000567436218,0.7139000296592712,-0.023600000888109207,0.20890000462532043,0.6858000159263611,-0.02449999935925007});
IndexedLineSet779->setCoord(*Coordinate780);

Shape778->setGeometry(IndexedLineSet779);

CAppearance* Appearance781 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance781->setUSE("SegmentLine");
Shape778->setAppearance(*Appearance781);

HAnimSegment777->addChildren(*Shape778);

CHAnimSite* HAnimSite782 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite782->setName("l_index_distal_tip");
HAnimSite782->setDEF("Joe_l_index_distal_tip");
HAnimSite782->setTranslation(new float[3]{0.20890000462532043,0.6858000159263611,-0.02449999935925007});
CShape* Shape783 = (CShape *)(m_pScene.createNode("Shape"));
Shape783->setUSE("sitebox");
HAnimSite782->addChildren(*Shape783);

HAnimSegment777->addChildren(*HAnimSite782);

CHAnimSite* HAnimSite784 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite784->setName("l_dactylion");
HAnimSite784->setDEF("Joe_l_dactylion");
HAnimSite784->setTranslation(new float[3]{0.20559999346733093,0.6743000149726868,-0.04820000007748604});
CShape* Shape785 = (CShape *)(m_pScene.createNode("Shape"));
Shape785->setUSE("sitebox");
HAnimSite784->addChildren(*Shape785);

HAnimSegment777->addChildren(*HAnimSite784);

HAnimJoint774->addChildren(*HAnimSegment777);

HAnimJoint766->addChildren(*HAnimJoint774);

HAnimJoint758->addChildren(*HAnimJoint766);

HAnimJoint750->addChildren(*HAnimJoint758);

HAnimJoint710->addChildren(*HAnimJoint750);

CHAnimJoint* HAnimJoint786 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint786->setName("l_middle0");
HAnimJoint786->setDEF("Joe_l_middle0");
HAnimJoint786->setCenter(new float[3]{0.19869999587535858,0.8029000163078308,-0.05299999937415123});
HAnimJoint786->setSkinCoordIndex(new int[2]{131,132});
HAnimJoint786->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint786->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint786->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform787 = (CTransform *)(m_pScene.createNode("Transform"));
Transform787->setTranslation(new float[3]{0.19869999587535858,0.8029000163078308,-0.05299999937415123});
CShape* Shape788 = (CShape *)(m_pScene.createNode("Shape"));
Shape788->setUSE("jointbox");
Transform787->addChildren(*Shape788);

HAnimJoint786->addChildren(*Transform787);

CHAnimSegment* HAnimSegment789 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment789->setName("l_middle_metacarpal");
HAnimSegment789->setDEF("Joe_l_middle_metacarpal");
CShape* Shape790 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet791 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet791->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate792 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate792->setPoint(new float[6]{0.19869999587535858,0.8029000163078308,-0.05299999937415123,0.19869999587535858,0.7817999720573425,-0.05299999937415123});
IndexedLineSet791->setCoord(*Coordinate792);

Shape790->setGeometry(IndexedLineSet791);

CAppearance* Appearance793 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance793->setUSE("SegmentLine");
Shape790->setAppearance(*Appearance793);

HAnimSegment789->addChildren(*Shape790);

HAnimJoint786->addChildren(*HAnimSegment789);

CHAnimJoint* HAnimJoint794 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint794->setName("l_middle1");
HAnimJoint794->setDEF("Joe_l_middle1");
HAnimJoint794->setCenter(new float[3]{0.19869999587535858,0.7817999720573425,-0.05299999937415123});
HAnimJoint794->setSkinCoordIndex(new int[4]{156,157,163,164});
HAnimJoint794->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
HAnimJoint794->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint794->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform795 = (CTransform *)(m_pScene.createNode("Transform"));
Transform795->setTranslation(new float[3]{0.19869999587535858,0.7817999720573425,-0.05299999937415123});
CShape* Shape796 = (CShape *)(m_pScene.createNode("Shape"));
Shape796->setUSE("jointbox");
Transform795->addChildren(*Shape796);

HAnimJoint794->addChildren(*Transform795);

CHAnimSegment* HAnimSegment797 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment797->setName("l_middle_proximal");
HAnimSegment797->setDEF("Joe_l_middle_proximal");
CShape* Shape798 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet799 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet799->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate800 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate800->setPoint(new float[6]{0.19869999587535858,0.7817999720573425,-0.05299999937415123,0.2012999951839447,0.7272999882698059,-0.0502999983727932});
IndexedLineSet799->setCoord(*Coordinate800);

Shape798->setGeometry(IndexedLineSet799);

CAppearance* Appearance801 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance801->setUSE("SegmentLine");
Shape798->setAppearance(*Appearance801);

HAnimSegment797->addChildren(*Shape798);

HAnimJoint794->addChildren(*HAnimSegment797);

CHAnimJoint* HAnimJoint802 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint802->setName("l_middle2");
HAnimJoint802->setDEF("Joe_l_middle2");
HAnimJoint802->setCenter(new float[3]{0.2012999951839447,0.7272999882698059,-0.0502999983727932});
HAnimJoint802->setSkinCoordIndex(new int[4]{179,180,181,182});
HAnimJoint802->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint802->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint802->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform803 = (CTransform *)(m_pScene.createNode("Transform"));
Transform803->setTranslation(new float[3]{0.2012999951839447,0.7272999882698059,-0.0502999983727932});
CShape* Shape804 = (CShape *)(m_pScene.createNode("Shape"));
Shape804->setUSE("jointbox");
Transform803->addChildren(*Shape804);

HAnimJoint802->addChildren(*Transform803);

CHAnimSegment* HAnimSegment805 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment805->setName("l_middle_middle");
HAnimSegment805->setDEF("Joe_l_middle_middle");
CShape* Shape806 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet807 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet807->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate808 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate808->setPoint(new float[6]{0.2012999951839447,0.7272999882698059,-0.0502999983727932,0.20260000228881836,0.7010999917984009,-0.049400001764297485});
IndexedLineSet807->setCoord(*Coordinate808);

Shape806->setGeometry(IndexedLineSet807);

CAppearance* Appearance809 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance809->setUSE("SegmentLine");
Shape806->setAppearance(*Appearance809);

HAnimSegment805->addChildren(*Shape806);

HAnimJoint802->addChildren(*HAnimSegment805);

CHAnimJoint* HAnimJoint810 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint810->setName("l_middle3");
HAnimJoint810->setDEF("Joe_l_middle3");
HAnimJoint810->setCenter(new float[3]{0.20260000228881836,0.7010999917984009,-0.049400001764297485});
HAnimJoint810->setSkinCoordIndex(new int[9]{183,184,185,186,187,188,189,190,191});
HAnimJoint810->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint810->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint810->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform811 = (CTransform *)(m_pScene.createNode("Transform"));
Transform811->setTranslation(new float[3]{0.20260000228881836,0.7010999917984009,-0.049400001764297485});
CShape* Shape812 = (CShape *)(m_pScene.createNode("Shape"));
Shape812->setUSE("jointbox");
Transform811->addChildren(*Shape812);

HAnimJoint810->addChildren(*Transform811);

CHAnimSegment* HAnimSegment813 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment813->setName("l_middle_distal");
HAnimSegment813->setDEF("Joe_l_middle_distal");
CShape* Shape814 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet815 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet815->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate816 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate816->setPoint(new float[6]{0.20260000228881836,0.7010999917984009,-0.049400001764297485,0.20800000429153442,0.6730999946594238,-0.04910000041127205});
IndexedLineSet815->setCoord(*Coordinate816);

Shape814->setGeometry(IndexedLineSet815);

CAppearance* Appearance817 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance817->setUSE("SegmentLine");
Shape814->setAppearance(*Appearance817);

HAnimSegment813->addChildren(*Shape814);

CHAnimSite* HAnimSite818 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite818->setName("l_middle_distal_tip");
HAnimSite818->setDEF("Joe_l_middle_distal_tip");
HAnimSite818->setTranslation(new float[3]{0.20800000429153442,0.6730999946594238,-0.04910000041127205});
CShape* Shape819 = (CShape *)(m_pScene.createNode("Shape"));
Shape819->setUSE("sitebox");
HAnimSite818->addChildren(*Shape819);

HAnimSegment813->addChildren(*HAnimSite818);

HAnimJoint810->addChildren(*HAnimSegment813);

HAnimJoint802->addChildren(*HAnimJoint810);

HAnimJoint794->addChildren(*HAnimJoint802);

HAnimJoint786->addChildren(*HAnimJoint794);

HAnimJoint710->addChildren(*HAnimJoint786);

CHAnimJoint* HAnimJoint820 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint820->setName("l_ring0");
HAnimJoint820->setDEF("Joe_l_ring0");
HAnimJoint820->setCenter(new float[3]{0.1956000030040741,0.8019000291824341,-0.07940000295639038});
HAnimJoint820->setSkinCoordIndex(new int[2]{133,134});
HAnimJoint820->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint820->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint820->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform821 = (CTransform *)(m_pScene.createNode("Transform"));
Transform821->setTranslation(new float[3]{0.1956000030040741,0.8019000291824341,-0.07940000295639038});
CShape* Shape822 = (CShape *)(m_pScene.createNode("Shape"));
Shape822->setUSE("jointbox");
Transform821->addChildren(*Shape822);

HAnimJoint820->addChildren(*Transform821);

CHAnimSegment* HAnimSegment823 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment823->setName("l_ring_metacarpal");
HAnimSegment823->setDEF("Joe_l_ring_metacarpal");
CShape* Shape824 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet825 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet825->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate826 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate826->setPoint(new float[6]{0.1956000030040741,0.8019000291824341,-0.07940000295639038,0.1956000030040741,0.781499981880188,-0.07940000295639038});
IndexedLineSet825->setCoord(*Coordinate826);

Shape824->setGeometry(IndexedLineSet825);

CAppearance* Appearance827 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance827->setUSE("SegmentLine");
Shape824->setAppearance(*Appearance827);

HAnimSegment823->addChildren(*Shape824);

HAnimJoint820->addChildren(*HAnimSegment823);

CHAnimJoint* HAnimJoint828 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint828->setName("l_ring1");
HAnimJoint828->setDEF("Joe_l_ring1");
HAnimJoint828->setCenter(new float[3]{0.1956000030040741,0.781499981880188,-0.07940000295639038});
HAnimJoint828->setSkinCoordIndex(new int[4]{158,159,164,165});
HAnimJoint828->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
HAnimJoint828->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint828->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform829 = (CTransform *)(m_pScene.createNode("Transform"));
Transform829->setTranslation(new float[3]{0.1956000030040741,0.781499981880188,-0.07940000295639038});
CShape* Shape830 = (CShape *)(m_pScene.createNode("Shape"));
Shape830->setUSE("jointbox");
Transform829->addChildren(*Shape830);

HAnimJoint828->addChildren(*Transform829);

CHAnimSegment* HAnimSegment831 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment831->setName("l_ring_proximal");
HAnimSegment831->setDEF("Joe_l_ring_proximal");
CShape* Shape832 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet833 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet833->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate834 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate834->setPoint(new float[6]{0.1956000030040741,0.781499981880188,-0.07940000295639038,0.1973000019788742,0.7286999821662903,-0.07769999653100967});
IndexedLineSet833->setCoord(*Coordinate834);

Shape832->setGeometry(IndexedLineSet833);

CAppearance* Appearance835 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance835->setUSE("SegmentLine");
Shape832->setAppearance(*Appearance835);

HAnimSegment831->addChildren(*Shape832);

HAnimJoint828->addChildren(*HAnimSegment831);

CHAnimJoint* HAnimJoint836 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint836->setName("l_ring2");
HAnimJoint836->setDEF("Joe_l_ring2");
HAnimJoint836->setCenter(new float[3]{0.1973000019788742,0.7286999821662903,-0.07769999653100967});
HAnimJoint836->setSkinCoordIndex(new int[4]{192,193,194,195});
HAnimJoint836->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint836->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint836->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform837 = (CTransform *)(m_pScene.createNode("Transform"));
Transform837->setTranslation(new float[3]{0.1973000019788742,0.7286999821662903,-0.07769999653100967});
CShape* Shape838 = (CShape *)(m_pScene.createNode("Shape"));
Shape838->setUSE("jointbox");
Transform837->addChildren(*Shape838);

HAnimJoint836->addChildren(*Transform837);

CHAnimSegment* HAnimSegment839 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment839->setName("l_ring_middle");
HAnimSegment839->setDEF("Joe_l_ring_middle");
CShape* Shape840 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet841 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet841->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate842 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate842->setPoint(new float[6]{0.1973000019788742,0.7286999821662903,-0.07769999653100967,0.19830000400543213,0.7045000195503235,-0.07670000195503235});
IndexedLineSet841->setCoord(*Coordinate842);

Shape840->setGeometry(IndexedLineSet841);

CAppearance* Appearance843 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance843->setUSE("SegmentLine");
Shape840->setAppearance(*Appearance843);

HAnimSegment839->addChildren(*Shape840);

HAnimJoint836->addChildren(*HAnimSegment839);

CHAnimJoint* HAnimJoint844 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint844->setName("l_ring3");
HAnimJoint844->setDEF("Joe_l_ring3");
HAnimJoint844->setCenter(new float[3]{0.19830000400543213,0.7045000195503235,-0.07670000195503235});
HAnimJoint844->setSkinCoordIndex(new int[9]{196,197,198,199,200,201,202,203,204});
HAnimJoint844->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint844->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint844->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform845 = (CTransform *)(m_pScene.createNode("Transform"));
Transform845->setTranslation(new float[3]{0.19830000400543213,0.7045000195503235,-0.07670000195503235});
CShape* Shape846 = (CShape *)(m_pScene.createNode("Shape"));
Shape846->setUSE("jointbox");
Transform845->addChildren(*Shape846);

HAnimJoint844->addChildren(*Transform845);

CHAnimSegment* HAnimSegment847 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment847->setName("l_ring_distal");
HAnimSegment847->setDEF("Joe_l_ring_distal");
CShape* Shape848 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet849 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet849->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate850 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate850->setPoint(new float[6]{0.19830000400543213,0.7045000195503235,-0.07670000195503235,0.20350000262260437,0.675000011920929,-0.07559999823570251});
IndexedLineSet849->setCoord(*Coordinate850);

Shape848->setGeometry(IndexedLineSet849);

CAppearance* Appearance851 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance851->setUSE("SegmentLine");
Shape848->setAppearance(*Appearance851);

HAnimSegment847->addChildren(*Shape848);

CHAnimSite* HAnimSite852 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite852->setName("l_ring_distal_tip");
HAnimSite852->setDEF("Joe_l_ring_distal_tip");
HAnimSite852->setTranslation(new float[3]{0.20350000262260437,0.675000011920929,-0.07559999823570251});
CShape* Shape853 = (CShape *)(m_pScene.createNode("Shape"));
Shape853->setUSE("sitebox");
HAnimSite852->addChildren(*Shape853);

HAnimSegment847->addChildren(*HAnimSite852);

HAnimJoint844->addChildren(*HAnimSegment847);

HAnimJoint836->addChildren(*HAnimJoint844);

HAnimJoint828->addChildren(*HAnimJoint836);

HAnimJoint820->addChildren(*HAnimJoint828);

HAnimJoint710->addChildren(*HAnimJoint820);

CHAnimJoint* HAnimJoint854 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint854->setName("l_pinky0");
HAnimJoint854->setDEF("Joe_l_pinky0");
HAnimJoint854->setCenter(new float[3]{0.19249999523162842,0.8065999746322632,-0.10360000282526016});
HAnimJoint854->setSkinCoordIndex(new int[4]{135,136,137,165});
HAnimJoint854->setSkinCoordWeight(new float[4]{1,1,1,0.5}, 4);
HAnimJoint854->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint854->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform855 = (CTransform *)(m_pScene.createNode("Transform"));
Transform855->setTranslation(new float[3]{0.19249999523162842,0.8065999746322632,-0.10360000282526016});
CShape* Shape856 = (CShape *)(m_pScene.createNode("Shape"));
Shape856->setUSE("jointbox");
Transform855->addChildren(*Shape856);

HAnimJoint854->addChildren(*Transform855);

CHAnimSegment* HAnimSegment857 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment857->setName("l_pinky_metacarpal");
HAnimSegment857->setDEF("Joe_l_pinky_metacarpal");
CShape* Shape858 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet859 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet859->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate860 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate860->setPoint(new float[6]{0.19249999523162842,0.8065999746322632,-0.10360000282526016,0.19249999523162842,0.7865999937057495,-0.10360000282526016});
IndexedLineSet859->setCoord(*Coordinate860);

Shape858->setGeometry(IndexedLineSet859);

CAppearance* Appearance861 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance861->setUSE("SegmentLine");
Shape858->setAppearance(*Appearance861);

HAnimSegment857->addChildren(*Shape858);

HAnimJoint854->addChildren(*HAnimSegment857);

CHAnimJoint* HAnimJoint862 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint862->setName("l_pinky1");
HAnimJoint862->setDEF("Joe_l_pinky1");
HAnimJoint862->setCenter(new float[3]{0.19249999523162842,0.7865999937057495,-0.10360000282526016});
HAnimJoint862->setSkinCoordIndex(new int[3]{160,161,162});
HAnimJoint862->setSkinCoordWeight(new float[3]{1,1,1}, 3);
HAnimJoint862->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint862->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform863 = (CTransform *)(m_pScene.createNode("Transform"));
Transform863->setTranslation(new float[3]{0.19249999523162842,0.7865999937057495,-0.10360000282526016});
CShape* Shape864 = (CShape *)(m_pScene.createNode("Shape"));
Shape864->setUSE("jointbox");
Transform863->addChildren(*Shape864);

HAnimJoint862->addChildren(*Transform863);

CHAnimSegment* HAnimSegment865 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment865->setName("l_pinky_proximal");
HAnimSegment865->setDEF("Joe_l_pinky_proximal");
CShape* Shape866 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet867 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet867->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate868 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate868->setPoint(new float[6]{0.19249999523162842,0.7865999937057495,-0.10360000282526016,0.19380000233650208,0.745199978351593,-0.10239999741315842});
IndexedLineSet867->setCoord(*Coordinate868);

Shape866->setGeometry(IndexedLineSet867);

CAppearance* Appearance869 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance869->setUSE("SegmentLine");
Shape866->setAppearance(*Appearance869);

HAnimSegment865->addChildren(*Shape866);

HAnimJoint862->addChildren(*HAnimSegment865);

CHAnimJoint* HAnimJoint870 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint870->setName("l_pinky2");
HAnimJoint870->setDEF("Joe_l_pinky2");
HAnimJoint870->setCenter(new float[3]{0.19380000233650208,0.745199978351593,-0.10239999741315842});
HAnimJoint870->setSkinCoordIndex(new int[4]{205,206,207,208});
HAnimJoint870->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint870->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint870->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform871 = (CTransform *)(m_pScene.createNode("Transform"));
Transform871->setTranslation(new float[3]{0.19380000233650208,0.745199978351593,-0.10239999741315842});
CShape* Shape872 = (CShape *)(m_pScene.createNode("Shape"));
Shape872->setUSE("jointbox");
Transform871->addChildren(*Shape872);

HAnimJoint870->addChildren(*Transform871);

CHAnimSegment* HAnimSegment873 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment873->setName("l_pinky_middle");
HAnimSegment873->setDEF("Joe_l_pinky_middle");
CShape* Shape874 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet875 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet875->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate876 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate876->setPoint(new float[6]{0.19380000233650208,0.745199978351593,-0.10239999741315842,0.19480000436306,0.7276999950408936,-0.10170000046491623});
IndexedLineSet875->setCoord(*Coordinate876);

Shape874->setGeometry(IndexedLineSet875);

CAppearance* Appearance877 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance877->setUSE("SegmentLine");
Shape874->setAppearance(*Appearance877);

HAnimSegment873->addChildren(*Shape874);

HAnimJoint870->addChildren(*HAnimSegment873);

CHAnimJoint* HAnimJoint878 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint878->setName("l_pinky3");
HAnimJoint878->setDEF("Joe_l_pinky3");
HAnimJoint878->setCenter(new float[3]{0.19480000436306,0.7276999950408936,-0.10170000046491623});
HAnimJoint878->setSkinCoordIndex(new int[9]{209,210,211,212,213,214,215,216,217});
HAnimJoint878->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint878->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint878->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform879 = (CTransform *)(m_pScene.createNode("Transform"));
Transform879->setTranslation(new float[3]{0.19480000436306,0.7276999950408936,-0.10170000046491623});
CShape* Shape880 = (CShape *)(m_pScene.createNode("Shape"));
Shape880->setUSE("jointbox");
Transform879->addChildren(*Shape880);

HAnimJoint878->addChildren(*Transform879);

CHAnimSegment* HAnimSegment881 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment881->setName("l_pinky_distal");
HAnimSegment881->setDEF("Joe_l_pinky_distal");
CShape* Shape882 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet883 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet883->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate884 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate884->setPoint(new float[6]{0.19480000436306,0.7276999950408936,-0.10170000046491623,0.2013999968767166,0.7009000182151794,-0.10119999945163727});
IndexedLineSet883->setCoord(*Coordinate884);

Shape882->setGeometry(IndexedLineSet883);

CAppearance* Appearance885 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance885->setUSE("SegmentLine");
Shape882->setAppearance(*Appearance885);

HAnimSegment881->addChildren(*Shape882);

CHAnimSite* HAnimSite886 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite886->setName("l_pinky_distal_tip");
HAnimSite886->setDEF("Joe_l_pinky_distal_tip");
HAnimSite886->setTranslation(new float[3]{0.2013999968767166,0.7009000182151794,-0.10119999945163727});
CShape* Shape887 = (CShape *)(m_pScene.createNode("Shape"));
Shape887->setUSE("sitebox");
HAnimSite886->addChildren(*Shape887);

HAnimSegment881->addChildren(*HAnimSite886);

HAnimJoint878->addChildren(*HAnimSegment881);

HAnimJoint870->addChildren(*HAnimJoint878);

HAnimJoint862->addChildren(*HAnimJoint870);

HAnimJoint854->addChildren(*HAnimJoint862);

HAnimJoint710->addChildren(*HAnimJoint854);

HAnimJoint688->addChildren(*HAnimJoint710);

HAnimJoint664->addChildren(*HAnimJoint688);

HAnimJoint648->addChildren(*HAnimJoint664);

HAnimJoint638->addChildren(*HAnimJoint648);

HAnimJoint521->addChildren(*HAnimJoint638);

HAnimJoint513->addChildren(*HAnimJoint521);

CHAnimJoint* HAnimJoint888 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint888->setName("r_sternoclavicular");
HAnimJoint888->setDEF("Joe_r_sternoclavicular");
HAnimJoint888->setCenter(new float[3]{-0.029999999329447746,1.4600000381469727,0});
HAnimJoint888->setSkinCoordIndex(new int[1]{10});
HAnimJoint888->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint888->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint888->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform889 = (CTransform *)(m_pScene.createNode("Transform"));
Transform889->setTranslation(new float[3]{-0.029999999329447746,1.4600000381469727,0.019999999552965164});
CShape* Shape890 = (CShape *)(m_pScene.createNode("Shape"));
Shape890->setUSE("jointbox");
Transform889->addChildren(*Shape890);

HAnimJoint888->addChildren(*Transform889);

CHAnimSegment* HAnimSegment891 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment891->setName("r_clavicle");
HAnimSegment891->setDEF("Joe_r_clavicle");
CShape* Shape892 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet893 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet893->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate894 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate894->setPoint(new float[6]{-0.029999999329447746,1.4600000381469727,0.019999999552965164,-0.09000000357627869,1.409999966621399,-0.09000000357627869});
IndexedLineSet893->setCoord(*Coordinate894);

Shape892->setGeometry(IndexedLineSet893);

CAppearance* Appearance895 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance895->setUSE("SegmentLine");
Shape892->setAppearance(*Appearance895);

HAnimSegment891->addChildren(*Shape892);

CHAnimSite* HAnimSite896 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite896->setName("r_clavicale");
HAnimSite896->setDEF("Joe_r_clavicale");
HAnimSite896->setTranslation(new float[3]{-0.029999999329447746,1.4600000381469727,0.03500000014901161});
CShape* Shape897 = (CShape *)(m_pScene.createNode("Shape"));
Shape897->setUSE("sitebox");
HAnimSite896->addChildren(*Shape897);

HAnimSegment891->addChildren(*HAnimSite896);

HAnimJoint888->addChildren(*HAnimSegment891);

CHAnimJoint* HAnimJoint898 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint898->setName("r_acromioclavicular");
HAnimJoint898->setDEF("Joe_r_acromioclavicular");
HAnimJoint898->setCenter(new float[3]{-0.09000000357627869,1.409999966621399,-0.10999999940395355});
HAnimJoint898->setSkinCoordIndex(new int[2]{77,29});
HAnimJoint898->setSkinCoordWeight(new float[2]{1,0.8999999761581421}, 2);
HAnimJoint898->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint898->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform899 = (CTransform *)(m_pScene.createNode("Transform"));
Transform899->setTranslation(new float[3]{-0.09000000357627869,1.409999966621399,-0.09000000357627869});
CShape* Shape900 = (CShape *)(m_pScene.createNode("Shape"));
Shape900->setUSE("jointbox");
Transform899->addChildren(*Shape900);

HAnimJoint898->addChildren(*Transform899);

CHAnimSegment* HAnimSegment901 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment901->setName("r_scapula");
HAnimSegment901->setDEF("Joe_r_scapula");
CShape* Shape902 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet903 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet903->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate904 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate904->setPoint(new float[6]{-0.09000000357627869,1.409999966621399,-0.09000000357627869,-0.20000000298023224,1.440000057220459,-0.03999999910593033});
IndexedLineSet903->setCoord(*Coordinate904);

Shape902->setGeometry(IndexedLineSet903);

CAppearance* Appearance905 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance905->setUSE("SegmentLine");
Shape902->setAppearance(*Appearance905);

HAnimSegment901->addChildren(*Shape902);

CHAnimSite* HAnimSite906 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite906->setName("r_acromion");
HAnimSite906->setDEF("Joe_r_acromion");
HAnimSite906->setTranslation(new float[3]{-0.17800000309944153,1.4824999570846558,-0.0625});
CShape* Shape907 = (CShape *)(m_pScene.createNode("Shape"));
Shape907->setUSE("sitebox");
HAnimSite906->addChildren(*Shape907);

HAnimSegment901->addChildren(*HAnimSite906);

CHAnimSite* HAnimSite908 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite908->setName("r_axilla_ant");
HAnimSite908->setDEF("Joe_r_axilla_ant");
HAnimSite908->setTranslation(new float[3]{-0.17000000178813934,1.3799999952316284,0.007000000216066837});
CShape* Shape909 = (CShape *)(m_pScene.createNode("Shape"));
Shape909->setUSE("sitebox");
HAnimSite908->addChildren(*Shape909);

HAnimSegment901->addChildren(*HAnimSite908);

CHAnimSite* HAnimSite910 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite910->setName("r_axilla_post");
HAnimSite910->setDEF("Joe_r_axilla_post");
HAnimSite910->setTranslation(new float[3]{-0.1599999964237213,1.3799999952316284,-0.12700000405311584});
CShape* Shape911 = (CShape *)(m_pScene.createNode("Shape"));
Shape911->setUSE("sitebox");
HAnimSite910->addChildren(*Shape911);

HAnimSegment901->addChildren(*HAnimSite910);

CTransform* Transform912 = (CTransform *)(m_pScene.createNode("Transform"));
Transform912->setTranslation(new float[3]{-0.10999999940395355,1.4270000457763672,-0.13750000298023224});
CShape* Shape913 = (CShape *)(m_pScene.createNode("Shape"));
Shape913->setUSE("skinsphere");
Transform912->addChildren(*Shape913);

HAnimSegment901->addChildren(*Transform912);

HAnimJoint898->addChildren(*HAnimSegment901);

CHAnimJoint* HAnimJoint914 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint914->setName("r_shoulder");
HAnimJoint914->setDEF("Joe_r_shoulder");
HAnimJoint914->setCenter(new float[3]{-0.20000000298023224,1.440000057220459,-0.03999999910593033});
HAnimJoint914->setSkinCoordIndex(new int[10]{29,30,32,78,218,219,220,221,86,88});
HAnimJoint914->setSkinCoordWeight(new float[10]{0.10000000149011612,1,1,1,1,1,1,1,0.30000001192092896,0.20000000298023224}, 10);
HAnimJoint914->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint914->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform915 = (CTransform *)(m_pScene.createNode("Transform"));
Transform915->setTranslation(new float[3]{-0.20000000298023224,1.440000057220459,-0.03999999910593033});
CShape* Shape916 = (CShape *)(m_pScene.createNode("Shape"));
Shape916->setUSE("jointbox");
Transform915->addChildren(*Shape916);

HAnimJoint914->addChildren(*Transform915);

CHAnimSegment* HAnimSegment917 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment917->setName("r_upperarm");
HAnimSegment917->setDEF("Joe_r_upperarm");
CShape* Shape918 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet919 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet919->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate920 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate920->setPoint(new float[6]{-0.20000000298023224,1.440000057220459,-0.03999999910593033,-0.20000000298023224,1.138800024986267,-0.03999999910593033});
IndexedLineSet919->setCoord(*Coordinate920);

Shape918->setGeometry(IndexedLineSet919);

CAppearance* Appearance921 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance921->setUSE("SegmentLine");
Shape918->setAppearance(*Appearance921);

HAnimSegment917->addChildren(*Shape918);

CHAnimSite* HAnimSite922 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite922->setName("r_humeral_medial_epicn");
HAnimSite922->setDEF("Joe_r_humeral_medial_epicn");
HAnimSite922->setTranslation(new float[3]{-0.16500000655651093,1.138800024986267,-0.03999999910593033});
CShape* Shape923 = (CShape *)(m_pScene.createNode("Shape"));
Shape923->setUSE("sitebox");
HAnimSite922->addChildren(*Shape923);

HAnimSegment917->addChildren(*HAnimSite922);

CHAnimSite* HAnimSite924 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite924->setName("r_radiale");
HAnimSite924->setDEF("Joe_r_radiale");
HAnimSite924->setTranslation(new float[3]{-0.23000000417232513,1.1330000162124634,-0.054999999701976776});
CShape* Shape925 = (CShape *)(m_pScene.createNode("Shape"));
Shape925->setUSE("sitebox");
HAnimSite924->addChildren(*Shape925);

HAnimSegment917->addChildren(*HAnimSite924);

CHAnimSite* HAnimSite926 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite926->setName("r_humeral_lateral_epicn");
HAnimSite926->setDEF("Joe_r_humeral_lateral_epicn");
HAnimSite926->setTranslation(new float[3]{-0.24400000274181366,1.138800024986267,-0.03999999910593033});
CShape* Shape927 = (CShape *)(m_pScene.createNode("Shape"));
Shape927->setUSE("sitebox");
HAnimSite926->addChildren(*Shape927);

HAnimSegment917->addChildren(*HAnimSite926);

CTransform* Transform928 = (CTransform *)(m_pScene.createNode("Transform"));
Transform928->setTranslation(new float[3]{-0.17800000309944153,1.4824999570846558,-0.0625});
CShape* Shape929 = (CShape *)(m_pScene.createNode("Shape"));
Shape929->setUSE("skinsphere");
Transform928->addChildren(*Shape929);

HAnimSegment917->addChildren(*Transform928);

CTransform* Transform930 = (CTransform *)(m_pScene.createNode("Transform"));
Transform930->setTranslation(new float[3]{-0.17000000178813934,1.3799999952316284,0.007000000216066837});
CShape* Shape931 = (CShape *)(m_pScene.createNode("Shape"));
Shape931->setUSE("skinsphere");
Transform930->addChildren(*Shape931);

HAnimSegment917->addChildren(*Transform930);

CTransform* Transform932 = (CTransform *)(m_pScene.createNode("Transform"));
Transform932->setTranslation(new float[3]{-0.1599999964237213,1.3799999952316284,-0.12700000405311584});
CShape* Shape933 = (CShape *)(m_pScene.createNode("Shape"));
Shape933->setUSE("skinsphere");
Transform932->addChildren(*Shape933);

HAnimSegment917->addChildren(*Transform932);

CTransform* Transform934 = (CTransform *)(m_pScene.createNode("Transform"));
Transform934->setTranslation(new float[3]{-0.23499999940395355,1.4199999570846558,-0.0625});
CShape* Shape935 = (CShape *)(m_pScene.createNode("Shape"));
Shape935->setUSE("skinsphere");
Transform934->addChildren(*Shape935);

HAnimSegment917->addChildren(*Transform934);

CTransform* Transform936 = (CTransform *)(m_pScene.createNode("Transform"));
Transform936->setTranslation(new float[3]{-0.23000000417232513,1.2350000143051147,-0.03999999910593033});
CShape* Shape937 = (CShape *)(m_pScene.createNode("Shape"));
Shape937->setUSE("skinsphere");
Transform936->addChildren(*Shape937);

HAnimSegment917->addChildren(*Transform936);

CTransform* Transform938 = (CTransform *)(m_pScene.createNode("Transform"));
Transform938->setTranslation(new float[3]{-0.1599999964237213,1.2300000190734863,-0.03999999910593033});
CShape* Shape939 = (CShape *)(m_pScene.createNode("Shape"));
Shape939->setUSE("skinsphere");
Transform938->addChildren(*Shape939);

HAnimSegment917->addChildren(*Transform938);

CTransform* Transform940 = (CTransform *)(m_pScene.createNode("Transform"));
Transform940->setTranslation(new float[3]{-0.20000000298023224,1.2300000190734863,-0.10499999672174454});
CShape* Shape941 = (CShape *)(m_pScene.createNode("Shape"));
Shape941->setUSE("skinsphere");
Transform940->addChildren(*Shape941);

HAnimSegment917->addChildren(*Transform940);

CTransform* Transform942 = (CTransform *)(m_pScene.createNode("Transform"));
Transform942->setTranslation(new float[3]{-0.20000000298023224,1.2350000143051147,0.019999999552965164});
CShape* Shape943 = (CShape *)(m_pScene.createNode("Shape"));
Shape943->setUSE("skinsphere");
Transform942->addChildren(*Shape943);

HAnimSegment917->addChildren(*Transform942);

HAnimJoint914->addChildren(*HAnimSegment917);

CHAnimJoint* HAnimJoint944 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint944->setName("r_elbow");
HAnimJoint944->setDEF("Joe_r_elbow");
HAnimJoint944->setCenter(new float[3]{-0.20000000298023224,1.138800024986267,-0.03999999910593033});
HAnimJoint944->setSkinCoordIndex(new int[12]{33,34,35,225,226,227,228,229,231,232,233,234});
HAnimJoint944->setSkinCoordWeight(new float[12]{1,1,1,1,1,1,1,1,1,1,1,1}, 12);
HAnimJoint944->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint944->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform945 = (CTransform *)(m_pScene.createNode("Transform"));
Transform945->setTranslation(new float[3]{-0.20000000298023224,1.138800024986267,-0.03999999910593033});
CShape* Shape946 = (CShape *)(m_pScene.createNode("Shape"));
Shape946->setUSE("jointbox");
Transform945->addChildren(*Shape946);

HAnimJoint944->addChildren(*Transform945);

CHAnimSegment* HAnimSegment947 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment947->setName("r_forearm");
HAnimSegment947->setDEF("Joe_r_forearm");
CShape* Shape948 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet949 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet949->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate950 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate950->setPoint(new float[6]{-0.20000000298023224,1.138800024986267,-0.03999999910593033,-0.20000000298023224,0.8899999856948853,-0.03999999910593033});
IndexedLineSet949->setCoord(*Coordinate950);

Shape948->setGeometry(IndexedLineSet949);

CAppearance* Appearance951 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance951->setUSE("SegmentLine");
Shape948->setAppearance(*Appearance951);

HAnimSegment947->addChildren(*Shape948);

CHAnimSite* HAnimSite952 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite952->setName("r_radial_styloid");
HAnimSite952->setDEF("Joe_r_radial_styloid");
HAnimSite952->setTranslation(new float[3]{-0.20000000298023224,0.8999999761581421,-0.014999999664723873});
CShape* Shape953 = (CShape *)(m_pScene.createNode("Shape"));
Shape953->setUSE("sitebox");
HAnimSite952->addChildren(*Shape953);

HAnimSegment947->addChildren(*HAnimSite952);

CHAnimSite* HAnimSite954 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite954->setName("r_olecranon");
HAnimSite954->setDEF("Joe_r_olecranon");
HAnimSite954->setTranslation(new float[3]{-0.20000000298023224,1.138800024986267,-0.07999999821186066});
CShape* Shape955 = (CShape *)(m_pScene.createNode("Shape"));
Shape955->setUSE("sitebox");
HAnimSite954->addChildren(*Shape955);

HAnimSegment947->addChildren(*HAnimSite954);

CTransform* Transform956 = (CTransform *)(m_pScene.createNode("Transform"));
Transform956->setTranslation(new float[3]{-0.20000000298023224,1.138800024986267,0.013000000268220901});
CShape* Shape957 = (CShape *)(m_pScene.createNode("Shape"));
Shape957->setUSE("skinsphere");
Transform956->addChildren(*Shape957);

HAnimSegment947->addChildren(*Transform956);

CTransform* Transform958 = (CTransform *)(m_pScene.createNode("Transform"));
Transform958->setTranslation(new float[3]{-0.22499999403953552,1,-0.009999999776482582});
CShape* Shape959 = (CShape *)(m_pScene.createNode("Shape"));
Shape959->setUSE("skinsphere");
Transform958->addChildren(*Shape959);

HAnimSegment947->addChildren(*Transform958);

CTransform* Transform960 = (CTransform *)(m_pScene.createNode("Transform"));
Transform960->setTranslation(new float[3]{-0.22499999403953552,1,-0.07000000029802322});
CShape* Shape961 = (CShape *)(m_pScene.createNode("Shape"));
Shape961->setUSE("skinsphere");
Transform960->addChildren(*Shape961);

HAnimSegment947->addChildren(*Transform960);

CTransform* Transform962 = (CTransform *)(m_pScene.createNode("Transform"));
Transform962->setTranslation(new float[3]{-0.1850000023841858,1,-0.009999999776482582});
CShape* Shape963 = (CShape *)(m_pScene.createNode("Shape"));
Shape963->setUSE("skinsphere");
Transform962->addChildren(*Shape963);

HAnimSegment947->addChildren(*Transform962);

CTransform* Transform964 = (CTransform *)(m_pScene.createNode("Transform"));
Transform964->setTranslation(new float[3]{-0.1850000023841858,1,-0.07000000029802322});
CShape* Shape965 = (CShape *)(m_pScene.createNode("Shape"));
Shape965->setUSE("skinsphere");
Transform964->addChildren(*Shape965);

HAnimSegment947->addChildren(*Transform964);

HAnimJoint944->addChildren(*HAnimSegment947);

CHAnimJoint* HAnimJoint966 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint966->setName("r_wrist");
HAnimJoint966->setDEF("Joe_r_wrist");
HAnimJoint966->setCenter(new float[3]{-0.20000000298023224,0.8899999856948853,-0.03999999910593033});
HAnimJoint966->setSkinCoordIndex(new int[8]{235,236,237,238,239,240,241,242});
HAnimJoint966->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint966->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint966->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform967 = (CTransform *)(m_pScene.createNode("Transform"));
Transform967->setTranslation(new float[3]{-0.20000000298023224,0.8899999856948853,-0.03999999910593033});
CShape* Shape968 = (CShape *)(m_pScene.createNode("Shape"));
Shape968->setUSE("jointbox");
Transform967->addChildren(*Shape968);

HAnimJoint966->addChildren(*Transform967);

CHAnimSegment* HAnimSegment969 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment969->setName("r_hand");
HAnimSegment969->setDEF("Joe_r_hand");
CShape* Shape970 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet971 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet971->setCoordIndex(new int[15]{0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1});
CCoordinate* Coordinate972 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate972->setPoint(new float[18]{-0.20000000298023224,0.8899999856948853,-0.03999999910593033,-0.20000000298023224,0.8500000238418579,0,-0.20000000298023224,0.8399999737739563,-0.014999999664723873,-0.20000000298023224,0.8349999785423279,-0.03999999910593033,-0.20000000298023224,0.8349999785423279,-0.06499999761581421,-0.20000000298023224,0.8399999737739563,-0.08500000089406967});
IndexedLineSet971->setCoord(*Coordinate972);

Shape970->setGeometry(IndexedLineSet971);

CAppearance* Appearance973 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance973->setUSE("SegmentLine");
Shape970->setAppearance(*Appearance973);

HAnimSegment969->addChildren(*Shape970);

CHAnimSite* HAnimSite974 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite974->setName("r_ulnar_styloid");
HAnimSite974->setDEF("Joe_r_ulnar_styloid");
HAnimSite974->setTranslation(new float[3]{-0.20000000298023224,0.8999999761581421,-0.08500000089406967});
CShape* Shape975 = (CShape *)(m_pScene.createNode("Shape"));
Shape975->setUSE("sitebox");
HAnimSite974->addChildren(*Shape975);

HAnimSegment969->addChildren(*HAnimSite974);

HAnimJoint966->addChildren(*HAnimSegment969);

CHAnimJoint* HAnimJoint976 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint976->setName("r_thumb1");
HAnimJoint976->setDEF("Joe_r_thumb1");
HAnimJoint976->setCenter(new float[3]{-0.20000000298023224,0.8500000238418579,0});
HAnimJoint976->setSkinCoordIndex(new int[2]{243,244});
HAnimJoint976->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint976->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint976->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform977 = (CTransform *)(m_pScene.createNode("Transform"));
Transform977->setTranslation(new float[3]{-0.20000000298023224,0.8500000238418579,0});
CShape* Shape978 = (CShape *)(m_pScene.createNode("Shape"));
Shape978->setUSE("jointbox");
Transform977->addChildren(*Shape978);

HAnimJoint976->addChildren(*Transform977);

CHAnimSegment* HAnimSegment979 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment979->setName("r_thumb_metacarpal");
HAnimSegment979->setDEF("Joe_r_thumb_metacarpal");
CShape* Shape980 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet981 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet981->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate982 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate982->setPoint(new float[6]{-0.20000000298023224,0.8500000238418579,0,-0.20000000298023224,0.8199999928474426,0.029999999329447746});
IndexedLineSet981->setCoord(*Coordinate982);

Shape980->setGeometry(IndexedLineSet981);

CAppearance* Appearance983 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance983->setUSE("SegmentLine");
Shape980->setAppearance(*Appearance983);

HAnimSegment979->addChildren(*Shape980);

HAnimJoint976->addChildren(*HAnimSegment979);

CHAnimJoint* HAnimJoint984 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint984->setName("r_thumb2");
HAnimJoint984->setDEF("Joe_r_thumb2");
HAnimJoint984->setCenter(new float[3]{-0.20000000298023224,0.8199999928474426,0.029999999329447746});
HAnimJoint984->setSkinCoordIndex(new int[6]{254,255,256,257,258,259});
HAnimJoint984->setSkinCoordWeight(new float[6]{0.5,0.5,0.5,1,1,1}, 6);
HAnimJoint984->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint984->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform985 = (CTransform *)(m_pScene.createNode("Transform"));
Transform985->setTranslation(new float[3]{-0.20000000298023224,0.8199999928474426,0.029999999329447746});
CShape* Shape986 = (CShape *)(m_pScene.createNode("Shape"));
Shape986->setUSE("jointbox");
Transform985->addChildren(*Shape986);

HAnimJoint984->addChildren(*Transform985);

CHAnimSegment* HAnimSegment987 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment987->setName("r_thumb_proximal");
HAnimSegment987->setDEF("Joe_r_thumb_proximal");
CShape* Shape988 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet989 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet989->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate990 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate990->setPoint(new float[6]{-0.20000000298023224,0.8199999928474426,0.029999999329447746,-0.20000000298023224,0.800000011920929,0.05000000074505806});
IndexedLineSet989->setCoord(*Coordinate990);

Shape988->setGeometry(IndexedLineSet989);

CAppearance* Appearance991 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance991->setUSE("SegmentLine");
Shape988->setAppearance(*Appearance991);

HAnimSegment987->addChildren(*Shape988);

HAnimJoint984->addChildren(*HAnimSegment987);

CHAnimJoint* HAnimJoint992 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint992->setName("r_thumb3");
HAnimJoint992->setDEF("Joe_r_thumb3");
HAnimJoint992->setCenter(new float[3]{-0.20000000298023224,0.800000011920929,0.05000000074505806});
HAnimJoint992->setSkinCoordIndex(new int[9]{260,261,262,263,264,265,266,267,268});
HAnimJoint992->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint992->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint992->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform993 = (CTransform *)(m_pScene.createNode("Transform"));
Transform993->setTranslation(new float[3]{-0.20000000298023224,0.800000011920929,0.05000000074505806});
CShape* Shape994 = (CShape *)(m_pScene.createNode("Shape"));
Shape994->setUSE("jointbox");
Transform993->addChildren(*Shape994);

HAnimJoint992->addChildren(*Transform993);

CTransform* Transform995 = (CTransform *)(m_pScene.createNode("Transform"));
Transform995->setDEF("Thumbnail");
Transform995->setTranslation(new float[3]{-0.20000000298023224,0.7850000262260437,0.07500000298023224});
CShape* Shape996 = (CShape *)(m_pScene.createNode("Shape"));
Shape996->setUSE("sitebox");
Transform995->addChildren(*Shape996);

HAnimJoint992->addChildren(*Transform995);

CHAnimSegment* HAnimSegment997 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment997->setName("r_thumb_distal");
HAnimSegment997->setDEF("Joe_r_thumb_distal");
CShape* Shape998 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet999 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet999->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1000 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1000->setPoint(new float[6]{-0.20000000298023224,0.800000011920929,0.05000000074505806,-0.20000000298023224,0.7799999713897705,0.07000000029802322});
IndexedLineSet999->setCoord(*Coordinate1000);

Shape998->setGeometry(IndexedLineSet999);

CAppearance* Appearance1001 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1001->setUSE("SegmentLine");
Shape998->setAppearance(*Appearance1001);

HAnimSegment997->addChildren(*Shape998);

CHAnimSite* HAnimSite1002 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1002->setName("r_thumb_distal_tip");
HAnimSite1002->setDEF("Joe_r_thumb_distal_tip");
HAnimSite1002->setTranslation(new float[3]{-0.20000000298023224,0.7799999713897705,0.07000000029802322});
CShape* Shape1003 = (CShape *)(m_pScene.createNode("Shape"));
Shape1003->setUSE("sitebox");
HAnimSite1002->addChildren(*Shape1003);

HAnimSegment997->addChildren(*HAnimSite1002);

HAnimJoint992->addChildren(*HAnimSegment997);

HAnimJoint984->addChildren(*HAnimJoint992);

HAnimJoint976->addChildren(*HAnimJoint984);

HAnimJoint966->addChildren(*HAnimJoint976);

CHAnimJoint* HAnimJoint1004 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1004->setName("r_index0");
HAnimJoint1004->setDEF("Joe_r_index0");
HAnimJoint1004->setCenter(new float[3]{-0.20000000298023224,0.8399999737739563,-0.014999999664723873});
HAnimJoint1004->setSkinCoordIndex(new int[2]{245,246});
HAnimJoint1004->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint1004->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1004->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform1005 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1005->setTranslation(new float[3]{-0.20000000298023224,0.8399999737739563,-0.014999999664723873});
CShape* Shape1006 = (CShape *)(m_pScene.createNode("Shape"));
Shape1006->setUSE("jointbox");
Transform1005->addChildren(*Shape1006);

HAnimJoint1004->addChildren(*Transform1005);

CHAnimSegment* HAnimSegment1007 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1007->setName("r_index_metacarpal");
HAnimSegment1007->setDEF("Joe_r_index_metacarpal");
CShape* Shape1008 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1009 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1009->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1010 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1010->setPoint(new float[6]{-0.20000000298023224,0.8399999737739563,-0.014999999664723873,-0.20000000298023224,0.7929999828338623,-0.014999999664723873});
IndexedLineSet1009->setCoord(*Coordinate1010);

Shape1008->setGeometry(IndexedLineSet1009);

CAppearance* Appearance1011 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1011->setUSE("SegmentLine");
Shape1008->setAppearance(*Appearance1011);

HAnimSegment1007->addChildren(*Shape1008);

CHAnimSite* HAnimSite1012 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1012->setName("r_metacarpal_pha2");
HAnimSite1012->setDEF("Joe_r_metacarpal_pha2");
HAnimSite1012->setTranslation(new float[3]{-0.20000000298023224,0.7929999828338623,-0.004999999888241291});
CShape* Shape1013 = (CShape *)(m_pScene.createNode("Shape"));
Shape1013->setUSE("sitebox");
HAnimSite1012->addChildren(*Shape1013);

HAnimSegment1007->addChildren(*HAnimSite1012);

HAnimJoint1004->addChildren(*HAnimSegment1007);

CHAnimJoint* HAnimJoint1014 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1014->setName("r_index1");
HAnimJoint1014->setDEF("Joe_r_index1");
HAnimJoint1014->setCenter(new float[3]{-0.20000000298023224,0.7929999828338623,-0.014999999664723873});
HAnimJoint1014->setSkinCoordIndex(new int[7]{254,255,256,269,270,271,279});
HAnimJoint1014->setSkinCoordWeight(new float[7]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimJoint1014->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1014->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform1015 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1015->setTranslation(new float[3]{-0.20000000298023224,0.7929999828338623,-0.014999999664723873});
CShape* Shape1016 = (CShape *)(m_pScene.createNode("Shape"));
Shape1016->setUSE("jointbox");
Transform1015->addChildren(*Shape1016);

HAnimJoint1014->addChildren(*Transform1015);

CHAnimSegment* HAnimSegment1017 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1017->setName("r_index_proximal");
HAnimSegment1017->setDEF("Joe_r_index_proximal");
CShape* Shape1018 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1019 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1019->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1020 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1020->setPoint(new float[6]{-0.20000000298023224,0.7929999828338623,-0.014999999664723873,-0.20000000298023224,0.7450000047683716,-0.014999999664723873});
IndexedLineSet1019->setCoord(*Coordinate1020);

Shape1018->setGeometry(IndexedLineSet1019);

CAppearance* Appearance1021 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1021->setUSE("SegmentLine");
Shape1018->setAppearance(*Appearance1021);

HAnimSegment1017->addChildren(*Shape1018);

HAnimJoint1014->addChildren(*HAnimSegment1017);

CHAnimJoint* HAnimJoint1022 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1022->setName("r_index2");
HAnimJoint1022->setDEF("Joe_r_index2");
HAnimJoint1022->setCenter(new float[3]{-0.20000000298023224,0.7450000047683716,-0.014999999664723873});
HAnimJoint1022->setSkinCoordIndex(new int[4]{282,283,284,285});
HAnimJoint1022->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint1022->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1022->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform1023 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1023->setTranslation(new float[3]{-0.20000000298023224,0.7450000047683716,-0.014999999664723873});
CShape* Shape1024 = (CShape *)(m_pScene.createNode("Shape"));
Shape1024->setUSE("jointbox");
Transform1023->addChildren(*Shape1024);

HAnimJoint1022->addChildren(*Transform1023);

CHAnimSegment* HAnimSegment1025 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1025->setName("r_index_middle");
HAnimSegment1025->setDEF("Joe_r_index_middle");
CShape* Shape1026 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1027 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1027->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1028 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1028->setPoint(new float[6]{-0.20000000298023224,0.7450000047683716,-0.014999999664723873,-0.20000000298023224,0.7200000286102295,-0.014999999664723873});
IndexedLineSet1027->setCoord(*Coordinate1028);

Shape1026->setGeometry(IndexedLineSet1027);

CAppearance* Appearance1029 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1029->setUSE("SegmentLine");
Shape1026->setAppearance(*Appearance1029);

HAnimSegment1025->addChildren(*Shape1026);

HAnimJoint1022->addChildren(*HAnimSegment1025);

CHAnimJoint* HAnimJoint1030 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1030->setName("r_index3");
HAnimJoint1030->setDEF("Joe_r_index3");
HAnimJoint1030->setCenter(new float[3]{-0.20000000298023224,0.7200000286102295,-0.014999999664723873});
HAnimJoint1030->setSkinCoordIndex(new int[9]{286,287,288,289,290,291,292,293,294});
HAnimJoint1030->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint1030->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1030->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform1031 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1031->setTranslation(new float[3]{-0.20000000298023224,0.7200000286102295,-0.014999999664723873});
CShape* Shape1032 = (CShape *)(m_pScene.createNode("Shape"));
Shape1032->setUSE("jointbox");
Transform1031->addChildren(*Shape1032);

HAnimJoint1030->addChildren(*Transform1031);

CHAnimSegment* HAnimSegment1033 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1033->setName("r_index_distal");
HAnimSegment1033->setDEF("Joe_r_index_distal");
CShape* Shape1034 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1035 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1035->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1036 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1036->setPoint(new float[6]{-0.20000000298023224,0.7200000286102295,-0.014999999664723873,-0.20000000298023224,0.6949999928474426,-0.014999999664723873});
IndexedLineSet1035->setCoord(*Coordinate1036);

Shape1034->setGeometry(IndexedLineSet1035);

CAppearance* Appearance1037 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1037->setUSE("SegmentLine");
Shape1034->setAppearance(*Appearance1037);

HAnimSegment1033->addChildren(*Shape1034);

CHAnimSite* HAnimSite1038 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1038->setName("r_index_distal_tip");
HAnimSite1038->setDEF("Joe_r_index_distal_tip");
HAnimSite1038->setTranslation(new float[3]{-0.20000000298023224,0.6949999928474426,-0.014999999664723873});
CShape* Shape1039 = (CShape *)(m_pScene.createNode("Shape"));
Shape1039->setUSE("sitebox");
HAnimSite1038->addChildren(*Shape1039);

HAnimSegment1033->addChildren(*HAnimSite1038);

HAnimJoint1030->addChildren(*HAnimSegment1033);

HAnimJoint1022->addChildren(*HAnimJoint1030);

HAnimJoint1014->addChildren(*HAnimJoint1022);

HAnimJoint1004->addChildren(*HAnimJoint1014);

HAnimJoint966->addChildren(*HAnimJoint1004);

CHAnimJoint* HAnimJoint1040 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1040->setName("r_middle0");
HAnimJoint1040->setDEF("Joe_r_middle0");
HAnimJoint1040->setCenter(new float[3]{-0.20000000298023224,0.8349999785423279,-0.03999999910593033});
HAnimJoint1040->setSkinCoordIndex(new int[2]{247,248});
HAnimJoint1040->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint1040->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1040->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform1041 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1041->setTranslation(new float[3]{-0.20000000298023224,0.8349999785423279,-0.03999999910593033});
CShape* Shape1042 = (CShape *)(m_pScene.createNode("Shape"));
Shape1042->setUSE("jointbox");
Transform1041->addChildren(*Shape1042);

HAnimJoint1040->addChildren(*Transform1041);

CHAnimSegment* HAnimSegment1043 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1043->setName("r_middle_metacarpal");
HAnimSegment1043->setDEF("Joe_r_middle_metacarpal");
CShape* Shape1044 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1045 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1045->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1046 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1046->setPoint(new float[6]{-0.20000000298023224,0.8349999785423279,-0.03999999910593033,-0.20000000298023224,0.7879999876022339,-0.03999999910593033});
IndexedLineSet1045->setCoord(*Coordinate1046);

Shape1044->setGeometry(IndexedLineSet1045);

CAppearance* Appearance1047 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1047->setUSE("SegmentLine");
Shape1044->setAppearance(*Appearance1047);

HAnimSegment1043->addChildren(*Shape1044);

HAnimJoint1040->addChildren(*HAnimSegment1043);

CHAnimJoint* HAnimJoint1048 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1048->setName("r_middle1");
HAnimJoint1048->setDEF("Joe_r_middle1");
HAnimJoint1048->setCenter(new float[3]{-0.20000000298023224,0.7879999876022339,-0.03999999910593033});
HAnimJoint1048->setSkinCoordIndex(new int[4]{272,273,279,280});
HAnimJoint1048->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
HAnimJoint1048->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1048->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform1049 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1049->setTranslation(new float[3]{-0.20000000298023224,0.7879999876022339,-0.03999999910593033});
CShape* Shape1050 = (CShape *)(m_pScene.createNode("Shape"));
Shape1050->setUSE("jointbox");
Transform1049->addChildren(*Shape1050);

HAnimJoint1048->addChildren(*Transform1049);

CHAnimSegment* HAnimSegment1051 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1051->setName("r_middle_proximal");
HAnimSegment1051->setDEF("Joe_r_middle_proximal");
CShape* Shape1052 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1053 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1053->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1054 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1054->setPoint(new float[6]{-0.20000000298023224,0.7879999876022339,-0.03999999910593033,-0.20000000298023224,0.7400000095367432,-0.03999999910593033});
IndexedLineSet1053->setCoord(*Coordinate1054);

Shape1052->setGeometry(IndexedLineSet1053);

CAppearance* Appearance1055 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1055->setUSE("SegmentLine");
Shape1052->setAppearance(*Appearance1055);

HAnimSegment1051->addChildren(*Shape1052);

HAnimJoint1048->addChildren(*HAnimSegment1051);

CHAnimJoint* HAnimJoint1056 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1056->setName("r_middle2");
HAnimJoint1056->setDEF("Joe_r_middle2");
HAnimJoint1056->setCenter(new float[3]{-0.20000000298023224,0.7400000095367432,-0.03999999910593033});
HAnimJoint1056->setSkinCoordIndex(new int[4]{295,296,297,298});
HAnimJoint1056->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint1056->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1056->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform1057 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1057->setTranslation(new float[3]{-0.20000000298023224,0.7400000095367432,-0.03999999910593033});
CShape* Shape1058 = (CShape *)(m_pScene.createNode("Shape"));
Shape1058->setUSE("jointbox");
Transform1057->addChildren(*Shape1058);

HAnimJoint1056->addChildren(*Transform1057);

CHAnimSegment* HAnimSegment1059 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1059->setName("r_middle_middle");
HAnimSegment1059->setDEF("Joe_r_middle_middle");
CShape* Shape1060 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1061 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1061->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1062 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1062->setPoint(new float[6]{-0.20000000298023224,0.7400000095367432,-0.03999999910593033,-0.20000000298023224,0.7142000198364258,-0.03999999910593033});
IndexedLineSet1061->setCoord(*Coordinate1062);

Shape1060->setGeometry(IndexedLineSet1061);

CAppearance* Appearance1063 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1063->setUSE("SegmentLine");
Shape1060->setAppearance(*Appearance1063);

HAnimSegment1059->addChildren(*Shape1060);

HAnimJoint1056->addChildren(*HAnimSegment1059);

CHAnimJoint* HAnimJoint1064 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1064->setName("r_middle3");
HAnimJoint1064->setDEF("Joe_r_middle3");
HAnimJoint1064->setCenter(new float[3]{-0.20000000298023224,0.7142000198364258,-0.03999999910593033});
HAnimJoint1064->setSkinCoordIndex(new int[9]{299,300,301,302,303,304,305,306,307});
HAnimJoint1064->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint1064->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1064->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform1065 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1065->setTranslation(new float[3]{-0.20000000298023224,0.7142000198364258,-0.03999999910593033});
CShape* Shape1066 = (CShape *)(m_pScene.createNode("Shape"));
Shape1066->setUSE("jointbox");
Transform1065->addChildren(*Shape1066);

HAnimJoint1064->addChildren(*Transform1065);

CHAnimSegment* HAnimSegment1067 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1067->setName("r_middle_distal");
HAnimSegment1067->setDEF("Joe_r_middle_distal");
CShape* Shape1068 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1069 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1069->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1070 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1070->setPoint(new float[6]{-0.20000000298023224,0.7142000198364258,-0.03999999910593033,-0.20000000298023224,0.6758000254631042,-0.03999999910593033});
IndexedLineSet1069->setCoord(*Coordinate1070);

Shape1068->setGeometry(IndexedLineSet1069);

CAppearance* Appearance1071 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1071->setUSE("SegmentLine");
Shape1068->setAppearance(*Appearance1071);

HAnimSegment1067->addChildren(*Shape1068);

CHAnimSite* HAnimSite1072 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1072->setName("r_dactylion");
HAnimSite1072->setDEF("Joe_r_dactylion");
HAnimSite1072->setTranslation(new float[3]{-0.20000000298023224,0.6800000071525574,-0.03999999910593033});
CShape* Shape1073 = (CShape *)(m_pScene.createNode("Shape"));
Shape1073->setUSE("sitebox");
HAnimSite1072->addChildren(*Shape1073);

HAnimSegment1067->addChildren(*HAnimSite1072);

CHAnimSite* HAnimSite1074 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1074->setName("r_middle_distal_tip");
HAnimSite1074->setDEF("Joe_r_middle_distal_tip");
HAnimSite1074->setTranslation(new float[3]{-0.20000000298023224,0.6800000071525574,-0.03999999910593033});
CShape* Shape1075 = (CShape *)(m_pScene.createNode("Shape"));
Shape1075->setUSE("sitebox");
HAnimSite1074->addChildren(*Shape1075);

HAnimSegment1067->addChildren(*HAnimSite1074);

HAnimJoint1064->addChildren(*HAnimSegment1067);

HAnimJoint1056->addChildren(*HAnimJoint1064);

HAnimJoint1048->addChildren(*HAnimJoint1056);

HAnimJoint1040->addChildren(*HAnimJoint1048);

HAnimJoint966->addChildren(*HAnimJoint1040);

CHAnimJoint* HAnimJoint1076 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1076->setName("r_ring0");
HAnimJoint1076->setDEF("Joe_r_ring0");
HAnimJoint1076->setCenter(new float[3]{-0.20000000298023224,0.8349999785423279,-0.06499999761581421});
HAnimJoint1076->setSkinCoordIndex(new int[2]{249,250});
HAnimJoint1076->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint1076->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1076->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform1077 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1077->setTranslation(new float[3]{-0.20000000298023224,0.8349999785423279,-0.06499999761581421});
CShape* Shape1078 = (CShape *)(m_pScene.createNode("Shape"));
Shape1078->setUSE("jointbox");
Transform1077->addChildren(*Shape1078);

HAnimJoint1076->addChildren(*Transform1077);

CHAnimSegment* HAnimSegment1079 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1079->setName("r_ring_metacarpal");
HAnimSegment1079->setDEF("Joe_r_ring_metacarpal");
CShape* Shape1080 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1081 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1081->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1082 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1082->setPoint(new float[6]{-0.20000000298023224,0.8349999785423279,-0.06499999761581421,-0.20000000298023224,0.7929999828338623,-0.06499999761581421});
IndexedLineSet1081->setCoord(*Coordinate1082);

Shape1080->setGeometry(IndexedLineSet1081);

CAppearance* Appearance1083 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1083->setUSE("SegmentLine");
Shape1080->setAppearance(*Appearance1083);

HAnimSegment1079->addChildren(*Shape1080);

HAnimJoint1076->addChildren(*HAnimSegment1079);

CHAnimJoint* HAnimJoint1084 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1084->setName("r_ring1");
HAnimJoint1084->setDEF("Joe_r_ring1");
HAnimJoint1084->setCenter(new float[3]{-0.20000000298023224,0.7929999828338623,-0.06499999761581421});
HAnimJoint1084->setSkinCoordIndex(new int[4]{274,275,280,281});
HAnimJoint1084->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
HAnimJoint1084->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1084->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform1085 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1085->setTranslation(new float[3]{-0.20000000298023224,0.7929999828338623,-0.06499999761581421});
CShape* Shape1086 = (CShape *)(m_pScene.createNode("Shape"));
Shape1086->setUSE("jointbox");
Transform1085->addChildren(*Shape1086);

HAnimJoint1084->addChildren(*Transform1085);

CHAnimSegment* HAnimSegment1087 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1087->setName("r_ring_proximal");
HAnimSegment1087->setDEF("Joe_r_ring_proximal");
CShape* Shape1088 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1089 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1089->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1090 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1090->setPoint(new float[6]{-0.20000000298023224,0.7929999828338623,-0.06499999761581421,-0.20000000298023224,0.7400000095367432,-0.06499999761581421});
IndexedLineSet1089->setCoord(*Coordinate1090);

Shape1088->setGeometry(IndexedLineSet1089);

CAppearance* Appearance1091 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1091->setUSE("SegmentLine");
Shape1088->setAppearance(*Appearance1091);

HAnimSegment1087->addChildren(*Shape1088);

HAnimJoint1084->addChildren(*HAnimSegment1087);

CHAnimJoint* HAnimJoint1092 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1092->setName("r_ring2");
HAnimJoint1092->setDEF("Joe_r_ring2");
HAnimJoint1092->setCenter(new float[3]{-0.20000000298023224,0.7400000095367432,-0.06499999761581421});
HAnimJoint1092->setSkinCoordIndex(new int[4]{308,309,310,311});
HAnimJoint1092->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint1092->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1092->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform1093 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1093->setTranslation(new float[3]{-0.20000000298023224,0.7400000095367432,-0.06499999761581421});
CShape* Shape1094 = (CShape *)(m_pScene.createNode("Shape"));
Shape1094->setUSE("jointbox");
Transform1093->addChildren(*Shape1094);

HAnimJoint1092->addChildren(*Transform1093);

CHAnimSegment* HAnimSegment1095 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1095->setName("r_ring_middle");
HAnimSegment1095->setDEF("Joe_r_ring_middle");
CShape* Shape1096 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1097 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1097->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1098 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1098->setPoint(new float[6]{-0.20000000298023224,0.7400000095367432,-0.06499999761581421,-0.20000000298023224,0.7177000045776367,-0.06499999761581421});
IndexedLineSet1097->setCoord(*Coordinate1098);

Shape1096->setGeometry(IndexedLineSet1097);

CAppearance* Appearance1099 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1099->setUSE("SegmentLine");
Shape1096->setAppearance(*Appearance1099);

HAnimSegment1095->addChildren(*Shape1096);

HAnimJoint1092->addChildren(*HAnimSegment1095);

CHAnimJoint* HAnimJoint1100 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1100->setName("r_ring3");
HAnimJoint1100->setDEF("Joe_r_ring3");
HAnimJoint1100->setCenter(new float[3]{-0.20000000298023224,0.7177000045776367,-0.06499999761581421});
HAnimJoint1100->setSkinCoordIndex(new int[9]{312,313,314,315,316,317,318,319,320});
HAnimJoint1100->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint1100->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1100->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform1101 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1101->setTranslation(new float[3]{-0.20000000298023224,0.7177000045776367,-0.06499999761581421});
CShape* Shape1102 = (CShape *)(m_pScene.createNode("Shape"));
Shape1102->setUSE("jointbox");
Transform1101->addChildren(*Shape1102);

HAnimJoint1100->addChildren(*Transform1101);

CHAnimSegment* HAnimSegment1103 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1103->setName("r_ring_distal");
HAnimSegment1103->setDEF("Joe_r_ring_distal");
CShape* Shape1104 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1105 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1105->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1106 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1106->setPoint(new float[6]{-0.20000000298023224,0.7177000045776367,-0.06499999761581421,-0.20000000298023224,0.6949999928474426,-0.06499999761581421});
IndexedLineSet1105->setCoord(*Coordinate1106);

Shape1104->setGeometry(IndexedLineSet1105);

CAppearance* Appearance1107 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1107->setUSE("SegmentLine");
Shape1104->setAppearance(*Appearance1107);

HAnimSegment1103->addChildren(*Shape1104);

CHAnimSite* HAnimSite1108 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1108->setName("r_ring_distal_tip");
HAnimSite1108->setDEF("Joe_r_ring_distal_tip");
HAnimSite1108->setTranslation(new float[3]{-0.20000000298023224,0.6949999928474426,-0.06499999761581421});
CShape* Shape1109 = (CShape *)(m_pScene.createNode("Shape"));
Shape1109->setUSE("sitebox");
HAnimSite1108->addChildren(*Shape1109);

HAnimSegment1103->addChildren(*HAnimSite1108);

HAnimJoint1100->addChildren(*HAnimSegment1103);

HAnimJoint1092->addChildren(*HAnimJoint1100);

HAnimJoint1084->addChildren(*HAnimJoint1092);

HAnimJoint1076->addChildren(*HAnimJoint1084);

HAnimJoint966->addChildren(*HAnimJoint1076);

CHAnimJoint* HAnimJoint1110 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1110->setName("r_pinky0");
HAnimJoint1110->setDEF("Joe_r_pinky0");
HAnimJoint1110->setCenter(new float[3]{-0.20000000298023224,0.8399999737739563,-0.08500000089406967});
HAnimJoint1110->setSkinCoordIndex(new int[4]{251,252,253,281});
HAnimJoint1110->setSkinCoordWeight(new float[4]{1,1,1,0.5}, 4);
HAnimJoint1110->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1110->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform1111 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1111->setTranslation(new float[3]{-0.20000000298023224,0.8399999737739563,-0.08500000089406967});
CShape* Shape1112 = (CShape *)(m_pScene.createNode("Shape"));
Shape1112->setUSE("jointbox");
Transform1111->addChildren(*Shape1112);

HAnimJoint1110->addChildren(*Transform1111);

CHAnimSegment* HAnimSegment1113 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1113->setName("r_pinky_metacarpal");
HAnimSegment1113->setDEF("Joe_r_pinky_metacarpal");
CShape* Shape1114 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1115 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1115->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1116 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1116->setPoint(new float[6]{-0.20000000298023224,0.8399999737739563,-0.08500000089406967,-0.20000000298023224,0.7900000214576721,-0.08500000089406967});
IndexedLineSet1115->setCoord(*Coordinate1116);

Shape1114->setGeometry(IndexedLineSet1115);

CAppearance* Appearance1117 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1117->setUSE("SegmentLine");
Shape1114->setAppearance(*Appearance1117);

HAnimSegment1113->addChildren(*Shape1114);

CHAnimSite* HAnimSite1118 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1118->setName("r_metacarpal_pha5");
HAnimSite1118->setDEF("Joe_r_metacarpal_pha5");
HAnimSite1118->setTranslation(new float[3]{-0.20000000298023224,0.7900000214576721,-0.0949999988079071});
CShape* Shape1119 = (CShape *)(m_pScene.createNode("Shape"));
Shape1119->setUSE("sitebox");
HAnimSite1118->addChildren(*Shape1119);

HAnimSegment1113->addChildren(*HAnimSite1118);

HAnimJoint1110->addChildren(*HAnimSegment1113);

CHAnimJoint* HAnimJoint1120 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1120->setName("r_pinky1");
HAnimJoint1120->setDEF("Joe_r_pinky1");
HAnimJoint1120->setCenter(new float[3]{-0.20000000298023224,0.7900000214576721,-0.08500000089406967});
HAnimJoint1120->setSkinCoordIndex(new int[3]{276,277,278});
HAnimJoint1120->setSkinCoordWeight(new float[3]{1,1,1}, 3);
HAnimJoint1120->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1120->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform1121 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1121->setTranslation(new float[3]{-0.20000000298023224,0.7900000214576721,-0.08500000089406967});
CShape* Shape1122 = (CShape *)(m_pScene.createNode("Shape"));
Shape1122->setUSE("jointbox");
Transform1121->addChildren(*Shape1122);

HAnimJoint1120->addChildren(*Transform1121);

CHAnimSegment* HAnimSegment1123 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1123->setName("r_pinky_proximal");
HAnimSegment1123->setDEF("Joe_r_pinky_proximal");
CShape* Shape1124 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1125 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1125->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1126 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1126->setPoint(new float[6]{-0.20000000298023224,0.7900000214576721,-0.08500000089406967,-0.20000000298023224,0.7549999952316284,-0.08500000089406967});
IndexedLineSet1125->setCoord(*Coordinate1126);

Shape1124->setGeometry(IndexedLineSet1125);

CAppearance* Appearance1127 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1127->setUSE("SegmentLine");
Shape1124->setAppearance(*Appearance1127);

HAnimSegment1123->addChildren(*Shape1124);

HAnimJoint1120->addChildren(*HAnimSegment1123);

CHAnimJoint* HAnimJoint1128 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1128->setName("r_pinky2");
HAnimJoint1128->setDEF("Joe_r_pinky2");
HAnimJoint1128->setCenter(new float[3]{-0.20000000298023224,0.7549999952316284,-0.08500000089406967});
HAnimJoint1128->setSkinCoordIndex(new int[4]{321,322,323,324});
HAnimJoint1128->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint1128->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1128->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform1129 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1129->setTranslation(new float[3]{-0.20000000298023224,0.7549999952316284,-0.08500000089406967});
CShape* Shape1130 = (CShape *)(m_pScene.createNode("Shape"));
Shape1130->setUSE("jointbox");
Transform1129->addChildren(*Shape1130);

HAnimJoint1128->addChildren(*Transform1129);

CHAnimSegment* HAnimSegment1131 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1131->setName("r_pinky_middle");
HAnimSegment1131->setDEF("Joe_r_pinky_middle");
CShape* Shape1132 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1133 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1133->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1134 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1134->setPoint(new float[6]{-0.20000000298023224,0.7549999952316284,-0.08500000089406967,-0.20000000298023224,0.7350000143051147,-0.08500000089406967});
IndexedLineSet1133->setCoord(*Coordinate1134);

Shape1132->setGeometry(IndexedLineSet1133);

CAppearance* Appearance1135 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1135->setUSE("SegmentLine");
Shape1132->setAppearance(*Appearance1135);

HAnimSegment1131->addChildren(*Shape1132);

HAnimJoint1128->addChildren(*HAnimSegment1131);

CHAnimJoint* HAnimJoint1136 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1136->setName("r_pinky3");
HAnimJoint1136->setDEF("Joe_r_pinky3");
HAnimJoint1136->setCenter(new float[3]{-0.20000000298023224,0.7350000143051147,-0.09000000357627869});
HAnimJoint1136->setSkinCoordIndex(new int[9]{325,326,327,328,329,330,331,332,333});
HAnimJoint1136->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint1136->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1136->setLlimit(new float[3]{0,0,0}, 3);
CTransform* Transform1137 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1137->setTranslation(new float[3]{-0.20000000298023224,0.7350000143051147,-0.08500000089406967});
CShape* Shape1138 = (CShape *)(m_pScene.createNode("Shape"));
Shape1138->setUSE("jointbox");
Transform1137->addChildren(*Shape1138);

HAnimJoint1136->addChildren(*Transform1137);

CHAnimSegment* HAnimSegment1139 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1139->setName("r_pinky_distal");
HAnimSegment1139->setDEF("Joe_r_pinky_distal");
CShape* Shape1140 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1141 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1141->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1142 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1142->setPoint(new float[6]{-0.20000000298023224,0.7350000143051147,-0.08500000089406967,-0.20000000298023224,0.7200000286102295,-0.08500000089406967});
IndexedLineSet1141->setCoord(*Coordinate1142);

Shape1140->setGeometry(IndexedLineSet1141);

CAppearance* Appearance1143 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1143->setUSE("SegmentLine");
Shape1140->setAppearance(*Appearance1143);

HAnimSegment1139->addChildren(*Shape1140);

CHAnimSite* HAnimSite1144 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1144->setName("r_pinky_distal_tip");
HAnimSite1144->setDEF("Joe_r_pinky_distal_tip");
HAnimSite1144->setTranslation(new float[3]{-0.20000000298023224,0.7200000286102295,-0.08500000089406967});
CShape* Shape1145 = (CShape *)(m_pScene.createNode("Shape"));
Shape1145->setUSE("sitebox");
HAnimSite1144->addChildren(*Shape1145);

HAnimSegment1139->addChildren(*HAnimSite1144);

HAnimJoint1136->addChildren(*HAnimSegment1139);

HAnimJoint1128->addChildren(*HAnimJoint1136);

HAnimJoint1120->addChildren(*HAnimJoint1128);

HAnimJoint1110->addChildren(*HAnimJoint1120);

HAnimJoint966->addChildren(*HAnimJoint1110);

HAnimJoint944->addChildren(*HAnimJoint966);

HAnimJoint914->addChildren(*HAnimJoint944);

HAnimJoint898->addChildren(*HAnimJoint914);

HAnimJoint888->addChildren(*HAnimJoint898);

HAnimJoint513->addChildren(*HAnimJoint888);

HAnimJoint505->addChildren(*HAnimJoint513);

HAnimJoint495->addChildren(*HAnimJoint505);

HAnimJoint487->addChildren(*HAnimJoint495);

HAnimJoint479->addChildren(*HAnimJoint487);

HAnimJoint471->addChildren(*HAnimJoint479);

HAnimJoint463->addChildren(*HAnimJoint471);

HAnimJoint451->addChildren(*HAnimJoint463);

HAnimJoint441->addChildren(*HAnimJoint451);

HAnimJoint433->addChildren(*HAnimJoint441);

HAnimJoint425->addChildren(*HAnimJoint433);

HAnimJoint417->addChildren(*HAnimJoint425);

HAnimJoint391->addChildren(*HAnimJoint417);

HAnimJoint383->addChildren(*HAnimJoint391);

HAnimJoint375->addChildren(*HAnimJoint383);

HAnimJoint358->addChildren(*HAnimJoint375);

HAnimJoint53->addChildren(*HAnimJoint358);

HAnimHumanoid52->addJoints(*HAnimJoint53);

CHAnimJoint* HAnimJoint1146 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1146->setUSE("Joe_sacroiliac");
HAnimHumanoid52->addJoints(*HAnimJoint1146);

CHAnimJoint* HAnimJoint1147 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1147->setUSE("Joe_l_hip");
HAnimHumanoid52->addJoints(*HAnimJoint1147);

CHAnimJoint* HAnimJoint1148 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1148->setUSE("Joe_l_knee");
HAnimHumanoid52->addJoints(*HAnimJoint1148);

CHAnimJoint* HAnimJoint1149 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1149->setUSE("Joe_l_ankle");
HAnimHumanoid52->addJoints(*HAnimJoint1149);

CHAnimJoint* HAnimJoint1150 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1150->setUSE("Joe_l_subtalar");
HAnimHumanoid52->addJoints(*HAnimJoint1150);

CHAnimJoint* HAnimJoint1151 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1151->setUSE("Joe_l_midtarsal");
HAnimHumanoid52->addJoints(*HAnimJoint1151);

CHAnimJoint* HAnimJoint1152 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1152->setUSE("Joe_l_metatarsal");
HAnimHumanoid52->addJoints(*HAnimJoint1152);

CHAnimJoint* HAnimJoint1153 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1153->setUSE("Joe_r_hip");
HAnimHumanoid52->addJoints(*HAnimJoint1153);

CHAnimJoint* HAnimJoint1154 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1154->setUSE("Joe_r_knee");
HAnimHumanoid52->addJoints(*HAnimJoint1154);

CHAnimJoint* HAnimJoint1155 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1155->setUSE("Joe_r_ankle");
HAnimHumanoid52->addJoints(*HAnimJoint1155);

CHAnimJoint* HAnimJoint1156 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1156->setUSE("Joe_r_subtalar");
HAnimHumanoid52->addJoints(*HAnimJoint1156);

CHAnimJoint* HAnimJoint1157 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1157->setUSE("Joe_r_midtarsal");
HAnimHumanoid52->addJoints(*HAnimJoint1157);

CHAnimJoint* HAnimJoint1158 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1158->setUSE("Joe_r_metatarsal");
HAnimHumanoid52->addJoints(*HAnimJoint1158);

CHAnimJoint* HAnimJoint1159 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1159->setUSE("Joe_vl5");
HAnimHumanoid52->addJoints(*HAnimJoint1159);

CHAnimJoint* HAnimJoint1160 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1160->setUSE("Joe_vl4");
HAnimHumanoid52->addJoints(*HAnimJoint1160);

CHAnimJoint* HAnimJoint1161 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1161->setUSE("Joe_vl3");
HAnimHumanoid52->addJoints(*HAnimJoint1161);

CHAnimJoint* HAnimJoint1162 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1162->setUSE("Joe_vl2");
HAnimHumanoid52->addJoints(*HAnimJoint1162);

CHAnimJoint* HAnimJoint1163 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1163->setUSE("Joe_vl1");
HAnimHumanoid52->addJoints(*HAnimJoint1163);

CHAnimJoint* HAnimJoint1164 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1164->setUSE("Joe_vt12");
HAnimHumanoid52->addJoints(*HAnimJoint1164);

CHAnimJoint* HAnimJoint1165 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1165->setUSE("Joe_vt11");
HAnimHumanoid52->addJoints(*HAnimJoint1165);

CHAnimJoint* HAnimJoint1166 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1166->setUSE("Joe_vt10");
HAnimHumanoid52->addJoints(*HAnimJoint1166);

CHAnimJoint* HAnimJoint1167 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1167->setUSE("Joe_vt9");
HAnimHumanoid52->addJoints(*HAnimJoint1167);

CHAnimJoint* HAnimJoint1168 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1168->setUSE("Joe_vt8");
HAnimHumanoid52->addJoints(*HAnimJoint1168);

CHAnimJoint* HAnimJoint1169 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1169->setUSE("Joe_vt7");
HAnimHumanoid52->addJoints(*HAnimJoint1169);

CHAnimJoint* HAnimJoint1170 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1170->setUSE("Joe_vt6");
HAnimHumanoid52->addJoints(*HAnimJoint1170);

CHAnimJoint* HAnimJoint1171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1171->setUSE("Joe_vt5");
HAnimHumanoid52->addJoints(*HAnimJoint1171);

CHAnimJoint* HAnimJoint1172 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1172->setUSE("Joe_vt4");
HAnimHumanoid52->addJoints(*HAnimJoint1172);

CHAnimJoint* HAnimJoint1173 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1173->setUSE("Joe_vt3");
HAnimHumanoid52->addJoints(*HAnimJoint1173);

CHAnimJoint* HAnimJoint1174 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1174->setUSE("Joe_vt2");
HAnimHumanoid52->addJoints(*HAnimJoint1174);

CHAnimJoint* HAnimJoint1175 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1175->setUSE("Joe_vt1");
HAnimHumanoid52->addJoints(*HAnimJoint1175);

CHAnimJoint* HAnimJoint1176 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1176->setUSE("Joe_vc7");
HAnimHumanoid52->addJoints(*HAnimJoint1176);

CHAnimJoint* HAnimJoint1177 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1177->setUSE("Joe_vc6");
HAnimHumanoid52->addJoints(*HAnimJoint1177);

CHAnimJoint* HAnimJoint1178 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1178->setUSE("Joe_vc5");
HAnimHumanoid52->addJoints(*HAnimJoint1178);

CHAnimJoint* HAnimJoint1179 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1179->setUSE("Joe_vc4");
HAnimHumanoid52->addJoints(*HAnimJoint1179);

CHAnimJoint* HAnimJoint1180 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1180->setUSE("Joe_vc3");
HAnimHumanoid52->addJoints(*HAnimJoint1180);

CHAnimJoint* HAnimJoint1181 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1181->setUSE("Joe_vc2");
HAnimHumanoid52->addJoints(*HAnimJoint1181);

CHAnimJoint* HAnimJoint1182 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1182->setUSE("Joe_vc1");
HAnimHumanoid52->addJoints(*HAnimJoint1182);

CHAnimJoint* HAnimJoint1183 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1183->setUSE("Joe_skullbase");
HAnimHumanoid52->addJoints(*HAnimJoint1183);

CHAnimJoint* HAnimJoint1184 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1184->setUSE("Joe_l_eyeball_joint");
HAnimHumanoid52->addJoints(*HAnimJoint1184);

CHAnimJoint* HAnimJoint1185 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1185->setUSE("Joe_r_eyeball_joint");
HAnimHumanoid52->addJoints(*HAnimJoint1185);

CHAnimJoint* HAnimJoint1186 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1186->setUSE("Joe_l_sternoclavicular");
HAnimHumanoid52->addJoints(*HAnimJoint1186);

CHAnimJoint* HAnimJoint1187 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1187->setUSE("Joe_l_acromioclavicular");
HAnimHumanoid52->addJoints(*HAnimJoint1187);

CHAnimJoint* HAnimJoint1188 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1188->setUSE("Joe_l_shoulder");
HAnimHumanoid52->addJoints(*HAnimJoint1188);

CHAnimJoint* HAnimJoint1189 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1189->setUSE("Joe_l_elbow");
HAnimHumanoid52->addJoints(*HAnimJoint1189);

CHAnimJoint* HAnimJoint1190 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1190->setUSE("Joe_l_wrist");
HAnimHumanoid52->addJoints(*HAnimJoint1190);

CHAnimJoint* HAnimJoint1191 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1191->setUSE("Joe_l_thumb1");
HAnimHumanoid52->addJoints(*HAnimJoint1191);

CHAnimJoint* HAnimJoint1192 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1192->setUSE("Joe_l_thumb2");
HAnimHumanoid52->addJoints(*HAnimJoint1192);

CHAnimJoint* HAnimJoint1193 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1193->setUSE("Joe_l_thumb3");
HAnimHumanoid52->addJoints(*HAnimJoint1193);

CHAnimJoint* HAnimJoint1194 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1194->setUSE("Joe_l_index0");
HAnimHumanoid52->addJoints(*HAnimJoint1194);

CHAnimJoint* HAnimJoint1195 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1195->setUSE("Joe_l_index1");
HAnimHumanoid52->addJoints(*HAnimJoint1195);

CHAnimJoint* HAnimJoint1196 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1196->setUSE("Joe_l_index2");
HAnimHumanoid52->addJoints(*HAnimJoint1196);

CHAnimJoint* HAnimJoint1197 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1197->setUSE("Joe_l_index3");
HAnimHumanoid52->addJoints(*HAnimJoint1197);

CHAnimJoint* HAnimJoint1198 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1198->setUSE("Joe_l_middle0");
HAnimHumanoid52->addJoints(*HAnimJoint1198);

CHAnimJoint* HAnimJoint1199 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1199->setUSE("Joe_l_middle1");
HAnimHumanoid52->addJoints(*HAnimJoint1199);

CHAnimJoint* HAnimJoint1200 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1200->setUSE("Joe_l_middle2");
HAnimHumanoid52->addJoints(*HAnimJoint1200);

CHAnimJoint* HAnimJoint1201 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1201->setUSE("Joe_l_middle3");
HAnimHumanoid52->addJoints(*HAnimJoint1201);

CHAnimJoint* HAnimJoint1202 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1202->setUSE("Joe_l_ring0");
HAnimHumanoid52->addJoints(*HAnimJoint1202);

CHAnimJoint* HAnimJoint1203 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1203->setUSE("Joe_l_ring1");
HAnimHumanoid52->addJoints(*HAnimJoint1203);

CHAnimJoint* HAnimJoint1204 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1204->setUSE("Joe_l_ring2");
HAnimHumanoid52->addJoints(*HAnimJoint1204);

CHAnimJoint* HAnimJoint1205 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1205->setUSE("Joe_l_ring3");
HAnimHumanoid52->addJoints(*HAnimJoint1205);

CHAnimJoint* HAnimJoint1206 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1206->setUSE("Joe_l_pinky0");
HAnimHumanoid52->addJoints(*HAnimJoint1206);

CHAnimJoint* HAnimJoint1207 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1207->setUSE("Joe_l_pinky1");
HAnimHumanoid52->addJoints(*HAnimJoint1207);

CHAnimJoint* HAnimJoint1208 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1208->setUSE("Joe_l_pinky2");
HAnimHumanoid52->addJoints(*HAnimJoint1208);

CHAnimJoint* HAnimJoint1209 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1209->setUSE("Joe_l_pinky3");
HAnimHumanoid52->addJoints(*HAnimJoint1209);

CHAnimJoint* HAnimJoint1210 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1210->setUSE("Joe_r_sternoclavicular");
HAnimHumanoid52->addJoints(*HAnimJoint1210);

CHAnimJoint* HAnimJoint1211 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1211->setUSE("Joe_r_acromioclavicular");
HAnimHumanoid52->addJoints(*HAnimJoint1211);

CHAnimJoint* HAnimJoint1212 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1212->setUSE("Joe_r_shoulder");
HAnimHumanoid52->addJoints(*HAnimJoint1212);

CHAnimJoint* HAnimJoint1213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1213->setUSE("Joe_r_elbow");
HAnimHumanoid52->addJoints(*HAnimJoint1213);

CHAnimJoint* HAnimJoint1214 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1214->setUSE("Joe_r_wrist");
HAnimHumanoid52->addJoints(*HAnimJoint1214);

CHAnimJoint* HAnimJoint1215 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1215->setUSE("Joe_r_thumb1");
HAnimHumanoid52->addJoints(*HAnimJoint1215);

CHAnimJoint* HAnimJoint1216 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1216->setUSE("Joe_r_thumb2");
HAnimHumanoid52->addJoints(*HAnimJoint1216);

CHAnimJoint* HAnimJoint1217 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1217->setUSE("Joe_r_thumb3");
HAnimHumanoid52->addJoints(*HAnimJoint1217);

CHAnimJoint* HAnimJoint1218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1218->setUSE("Joe_r_index0");
HAnimHumanoid52->addJoints(*HAnimJoint1218);

CHAnimJoint* HAnimJoint1219 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1219->setUSE("Joe_r_index1");
HAnimHumanoid52->addJoints(*HAnimJoint1219);

CHAnimJoint* HAnimJoint1220 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1220->setUSE("Joe_r_index2");
HAnimHumanoid52->addJoints(*HAnimJoint1220);

CHAnimJoint* HAnimJoint1221 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1221->setUSE("Joe_r_index3");
HAnimHumanoid52->addJoints(*HAnimJoint1221);

CHAnimJoint* HAnimJoint1222 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1222->setUSE("Joe_r_middle0");
HAnimHumanoid52->addJoints(*HAnimJoint1222);

CHAnimJoint* HAnimJoint1223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1223->setUSE("Joe_r_middle1");
HAnimHumanoid52->addJoints(*HAnimJoint1223);

CHAnimJoint* HAnimJoint1224 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1224->setUSE("Joe_r_middle2");
HAnimHumanoid52->addJoints(*HAnimJoint1224);

CHAnimJoint* HAnimJoint1225 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1225->setUSE("Joe_r_middle3");
HAnimHumanoid52->addJoints(*HAnimJoint1225);

CHAnimJoint* HAnimJoint1226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1226->setUSE("Joe_r_ring0");
HAnimHumanoid52->addJoints(*HAnimJoint1226);

CHAnimJoint* HAnimJoint1227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1227->setUSE("Joe_r_ring1");
HAnimHumanoid52->addJoints(*HAnimJoint1227);

CHAnimJoint* HAnimJoint1228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1228->setUSE("Joe_r_ring2");
HAnimHumanoid52->addJoints(*HAnimJoint1228);

CHAnimJoint* HAnimJoint1229 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1229->setUSE("Joe_r_ring3");
HAnimHumanoid52->addJoints(*HAnimJoint1229);

CHAnimJoint* HAnimJoint1230 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1230->setUSE("Joe_r_pinky0");
HAnimHumanoid52->addJoints(*HAnimJoint1230);

CHAnimJoint* HAnimJoint1231 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1231->setUSE("Joe_r_pinky1");
HAnimHumanoid52->addJoints(*HAnimJoint1231);

CHAnimJoint* HAnimJoint1232 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1232->setUSE("Joe_r_pinky2");
HAnimHumanoid52->addJoints(*HAnimJoint1232);

CHAnimJoint* HAnimJoint1233 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1233->setUSE("Joe_r_pinky3");
HAnimHumanoid52->addJoints(*HAnimJoint1233);

CShape* Shape1234 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedFaceSet* IndexedFaceSet1235 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet1235->setCoordIndex(new int[2780]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
IndexedFaceSet1235->setCreaseAngle(3.0999999046325684);
CCoordinate* Coordinate1236 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1236->setDEF("JoeSkinCoord");
Coordinate1236->setPoint(new float[1170]{0,1.7699999809265137,0,0,1.6649999618530273,0.09000000357627869,-0.032999999821186066,1.6200000047683716,0.08699999749660492,0.032999999821186066,1.6200000047683716,0.08699999749660492,0,1.5499999523162842,0.09700000286102295,-0.07699999958276749,1.6399999856948853,-0.009999999776482582,-0.05270000174641609,1.5800000429153442,0.014999999664723873,0.07699999958276749,1.6399999856948853,-0.009999999776482582,0.05270000174641609,1.5800000429153442,0.014999999664723873,0,1.625,-0.0925000011920929,-0.029999999329447746,1.4600000381469727,0.03500000014901161,0,1.440000057220459,0.029999999329447746,0.029999999329447746,1.4600000381469727,0.03500000014901161,-0.11349999904632568,1.3179999589920044,0.0949999988079071,0.11349999904632568,1.3179999589920044,0.0949999988079071,0,1.25,0.11299999803304672,-0.08699999749660492,1.190000057220459,0.09000000357627869,-0.09350000321865082,1.0299999713897705,0.07500000298023224,0.08699999749660492,1.190000057220459,0.09000000357627869,0.09350000321865082,1.0299999713897705,0.07500000298023224,-0.14249999821186066,1.065000057220459,0.0032999999821186066,-0.15000000596046448,0.8999999761581421,-0.009999999776482582,0.14249999821186066,1.065000057220459,0.0032999999821186066,0.15000000596046448,0.8999999761581421,-0.009999999776482582,0,1.5299999713897705,-0.08399999886751175,0.004900000058114529,1.1907999515533447,-0.1120000034570694,-0.07729999721050262,1.0190000534057617,-0.11999999731779099,0.07729999721050262,1.0190000534057617,-0.11999999731779099,0.004999999888241291,1.0915000438690186,-0.10909999907016754,-0.17800000309944153,1.4824999570846558,-0.06199999898672104,-0.17000000178813934,1.3799999952316284,0.007000000216066837,-0.18799999356269836,0.8676000237464905,-0.035999998450279236,-0.1599999964237213,1.3799999952316284,-0.12700000405311584,-0.20000000298023224,1.138800024986267,-0.07999999821186066,-0.24400000274181366,1.138800024986267,-0.03999999910593033,-0.16500000655651093,1.138800024986267,-0.03999999910593033,-0.23000000417232513,1.1330000162124634,-0.054999999701976776,-0.19769999384880066,0.8169999718666077,-0.01769999973475933,-0.1941000074148178,0.6769999861717224,-0.04230000078678131,-0.21170000731945038,0.8560000061988831,-0.058400001376867294,-0.19300000369548798,0.7889999747276306,-0.10639999806880951,0.17499999701976776,1.4824999570846558,-0.05999999865889549,0.17000000178813934,1.3799999952316284,0.007000000216066837,0.1899999976158142,0.8644999861717224,-0.04149999842047691,0.1599999964237213,1.3799999952316284,-0.125,0.20000000298023224,1.138800024986267,-0.07999999821186066,0.16500000655651093,1.138800024986267,-0.03999999910593033,0.24400000274181366,1.138800024986267,-0.03999999910593033,0.23000000417232513,1.1330000162124634,-0.054999999701976776,0.20090000331401825,0.8138999938964844,-0.02370000071823597,0.20559999346733093,0.6743000149726868,-0.04820000007748604,0.2142000049352646,0.8529000282287598,-0.06480000168085098,0.19290000200271606,0.7860000133514404,-0.11219999939203262,-0.10000000149011612,0.49129998683929443,-0.029999999329447746,-0.17000000178813934,0.4659999907016754,0,-0.05000000074505806,0.4659999907016754,0,-0.16500000655651093,0.009999999776482582,0.11999999731779099,-0.15000000596046448,0.07000000029802322,0,-0.08500000089406967,0.0860000029206276,0.012500000186264515,-0.09000000357627869,0.0560000017285347,0.012500000186264515,-0.11500000208616257,0.019999999552965164,0.12200000137090683,-0.11500000208616257,0.03999999910593033,-0.054999999701976776,-0.10999999940395355,0.010999999940395355,0.1899999976158142,0.09929999709129333,0.4880000054836273,-0.03099999949336052,0.17000000178813934,0.4659999907016754,0,0.05000000074505806,0.48669999837875366,0,0.16500000655651093,0.009999999776482582,0.11999999731779099,0.15000000596046448,0.07000000029802322,0,0.08500000089406967,0.0860000029206276,0.012500000186264515,0.09000000357627869,0.0560000017285347,0.012500000186264515,0.11500000208616257,0.019999999552965164,0.12200000137090683,0.11500000208616257,0.03999999910593033,-0.054999999701976776,0.10999999940395355,0.010999999940395355,0.1899999976158142,0,0.875,0,-0.06459999829530716,1.5149999856948853,-0.03799999877810478,0.06459999829530716,1.5148999691009521,-0.03799999877810478,0,1.0722500085830688,0.09000000357627869,-0.10999999940395355,1.4270000457763672,-0.13750000298023224,-0.23499999940395355,1.4199999570846558,-0.0625,0.10999999940395355,1.4270000457763672,-0.13750000298023224,0.23499999940395355,1.4199999570846558,-0.0625,0,1.409999966621399,-0.14499999582767487,0,0.925000011920929,0.07999999821186066,-0.08699999749660492,1.190000057220459,-0.09000000357627869,0.08699999749660492,1.190000057220459,-0.09000000357627869,0.1720000058412552,1.3200000524520874,-0.029999999329447746,-0.1720000058412552,1.3200000524520874,-0.029999999329447746,0.15000000596046448,1.2300000190734863,-0.014999999664723873,-0.15000000596046448,1.2300000190734863,-0.014999999664723873,0.07900000363588333,0.9200000166893005,-0.14000000059604645,0.10000000149011612,0.8999999761581421,0.07699999958276749,-0.07900000363588333,0.9200000166893005,-0.14000000059604645,-0.10000000149011612,0.8999999761581421,0.07500000298023224,0,0.8700000047683716,0,0.17100000381469727,0.6499999761581421,0,0.019999999552965164,0.6499999761581421,0,0.10000000149011612,0.6499999761581421,-0.07999999821186066,0.10000000149011612,0.6499999761581421,0.07000000029802322,-0.17100000381469727,0.6499999761581421,0,-0.019999999552965164,0.6499999761581421,0,-0.10000000149011612,0.6499999761581421,-0.07999999821186066,-0.10000000149011612,0.6499999761581421,0.07000000029802322,0.25,1.2699999809265137,-0.03999999910593033,0.17000000178813934,1.2699999809265137,-0.03999999910593033,0.20000000298023224,1.2699999809265137,-0.09000000357627869,0.20000000298023224,1.2699999809265137,0.019999999552965164,0.24400000274181366,1.138800024986267,-0.03999999910593033,0.16500000655651093,1.138800024986267,-0.03999999910593033,0.20000000298023224,1.138800024986267,-0.07999999821186066,0.20000000298023224,1.138800024986267,-0.013000000268220901,0.22499999403953552,1,-0.009999999776482582,0.22499999403953552,1,-0.07000000029802322,0.1850000023841858,1,-0.009999999776482582,0.1850000023841858,1,-0.07000000029802322,0.20000000298023224,1.138800024986267,-0.03999999910593033,0.22499999403953552,0.9200000166893005,-0.03999999910593033,0.17499999701976776,0.9200000166893005,-0.03999999910593033,0.20000000298023224,0.9200000166893005,-0.06499999761581421,0.20000000298023224,0.9200000166893005,-0.014999999664723873,0.22499999403953552,0.8899999856948853,-0.03999999910593033,0.17499999701976776,0.8899999856948853,-0.03999999910593033,0.20000000298023224,0.8899999856948853,-0.06499999761581421,0.20000000298023224,0.8899999856948853,-0.014999999664723873,0.21799999475479126,0.8600000143051147,-0.03999999910593033,0.18400000035762787,0.8600000143051147,-0.03999999910593033,0.20000000298023224,0.8700000047683716,-0.07000000029802322,0.20000000298023224,0.8700000047683716,0,0.20999999344348907,0.8500000238418579,0,0.18539999425411224,0.8500000238418579,0,0.21199999749660492,0.8399999737739563,-0.014999999664723873,0.18299999833106995,0.8399999737739563,-0.014999999664723873,0.21299999952316284,0.8349999785423279,-0.03999999910593033,0.1899999976158142,0.8349999785423279,-0.03999999910593033,0.210999995470047,0.8349999785423279,-0.06499999761581421,0.19200000166893005,0.8349999785423279,-0.06499999761581421,0.20800000429153442,0.8399999737739563,-0.08500000089406967,0.1899999976158142,0.8399999737739563,-0.08500000089406967,0.20000000298023224,0.8399999737739563,-0.0949999988079071,0.2150000035762787,0.8199999928474426,0,0.19300000369548798,0.8149999976158142,0.004999999888241291,0.1979999989271164,0.800000011920929,0.012000000104308128,0.20999999344348907,0.8199999928474426,0.029999999329447746,0.1899999976158142,0.8199999928474426,0.029999999329447746,0.20000000298023224,0.8349999785423279,0.039000000804662704,0.21199999749660492,0.800000011920929,0.05000000074505806,0.18799999356269836,0.800000011920929,0.05000000074505806,0.20000000298023224,0.8069999814033508,0.05700000002980232,0.20000000298023224,0.7929999828338623,0.03500000014901161,0.20000000298023224,0.7739999890327454,0.07599999755620956,0.21199999749660492,0.7799999713897705,0.07000000029802322,0.18799999356269836,0.7799999713897705,0.07000000029802322,0.20000000298023224,0.7850000262260437,0.07500000298023224,0.20000000298023224,0.7699999809265137,0.06199999898672104,0.2150000035762787,0.7929999828338623,-0.014999999664723873,0.18700000643730164,0.7929999828338623,-0.014999999664723873,0.20000000298023224,0.7929999828338623,-0.004999999888241291,0.2150000035762787,0.7879999876022339,-0.03999999910593033,0.18700000643730164,0.7879999876022339,-0.03999999910593033,0.2150000035762787,0.7929999828338623,-0.06499999761581421,0.18700000643730164,0.7929999828338623,-0.06499999761581421,0.20999999344348907,0.7900000214576721,-0.08500000089406967,0.1899999976158142,0.7900000214576721,-0.08500000089406967,0.20000000298023224,0.7900000214576721,-0.0949999988079071,0.1899999976158142,0.7699999809265137,-0.027499999850988388,0.1899999976158142,0.7699999809265137,-0.05249999836087227,0.1899999976158142,0.7799999713897705,-0.07750000059604645,0.21199999749660492,0.7450000047683716,-0.014999999664723873,0.18799999356269836,0.7450000047683716,-0.019999999552965164,0.20000000298023224,0.7450000047683716,-0.025499999523162842,0.20000000298023224,0.7450000047683716,-0.0044999998062849045,0.210999995470047,0.7200000286102295,-0.014999999664723873,0.1889999955892563,0.7200000286102295,-0.014999999664723873,0.20000000298023224,0.7200000286102295,-0.025200000032782555,0.20000000298023224,0.7200000286102295,-0.004800000227987766,0.20999999344348907,0.6949999928474426,-0.014999999664723873,0.1899999976158142,0.6949999928474426,-0.014999999664723873,0.20000000298023224,0.6949999928474426,-0.02500000037252903,0.20000000298023224,0.6949999928474426,-0.004999999888241291,0.20000000298023224,0.6850000023841858,-0.014999999664723873,0.2150000035762787,0.7400000095367432,-0.03999999910593033,0.1850000023841858,0.7400000095367432,-0.03999999910593033,0.20000000298023224,0.7400000095367432,-0.054999999701976776,0.20000000298023224,0.7400000095367432,-0.02500000037252903,0.20999999344348907,0.7142000198364258,-0.03999999910593033,0.1899999976158142,0.7142000198364258,-0.03999999910593033,0.20000000298023224,0.7142000198364258,-0.05299999937415123,0.20000000298023224,0.7142000198364258,-0.027000000700354576,0.20999999344348907,0.6800000071525574,-0.03999999910593033,0.1899999976158142,0.6800000071525574,-0.03999999910593033,0.20000000298023224,0.6800000071525574,-0.05000000074505806,0.20000000298023224,0.6800000071525574,-0.029999999329447746,0.20000000298023224,0.6700000166893005,-0.03999999910593033,0.21199999749660492,0.7400000095367432,-0.06499999761581421,0.18799999356269836,0.7400000095367432,-0.06499999761581421,0.20000000298023224,0.7400000095367432,-0.07559999823570251,0.20000000298023224,0.7400000095367432,-0.05420000106096268,0.20999999344348907,0.7177000045776367,-0.06499999761581421,0.1899999976158142,0.7177000045776367,-0.06499999761581421,0.20000000298023224,0.7177000045776367,-0.07509999722242355,0.20000000298023224,0.7177000045776367,-0.05490000173449516,0.20999999344348907,0.6949999928474426,-0.06499999761581421,0.1899999976158142,0.6949999928474426,-0.06499999761581421,0.20000000298023224,0.6949999928474426,-0.07500000298023224,0.20000000298023224,0.6949999928474426,-0.054999999701976776,0.20000000298023224,0.6850000023841858,-0.06499999761581421,0.210999995470047,0.7549999952316284,-0.08500000089406967,0.1889999955892563,0.7549999952316284,-0.08500000089406967,0.20000000298023224,0.7549999952316284,-0.09520000219345093,0.20000000298023224,0.7549999952316284,-0.07479999959468842,0.20999999344348907,0.7350000143051147,-0.08500000089406967,0.1899999976158142,0.7350000143051147,-0.08500000089406967,0.20000000298023224,0.7350000143051147,-0.09510000050067902,0.20000000298023224,0.7350000143051147,-0.07490000128746033,0.20999999344348907,0.7200000286102295,-0.08500000089406967,0.1899999976158142,0.7200000286102295,-0.08500000089406967,0.20000000298023224,0.7200000286102295,-0.0949999988079071,0.20000000298023224,0.7200000286102295,-0.07500000298023224,0.20000000298023224,0.7099999785423279,-0.08500000089406967,-0.23000000417232513,1.2300000190734863,-0.03999999910593033,-0.1599999964237213,1.2300000190734863,-0.03999999910593033,-0.20000000298023224,1.2350000143051147,-0.10499999672174454,-0.20000000298023224,1.2350000143051147,0.019999999552965164,-0.24400000274181366,1.138800024986267,-0.03999999910593033,-0.16500000655651093,1.138800024986267,-0.03999999910593033,-0.20000000298023224,1.138800024986267,-0.07999999821186066,-0.20000000298023224,1.138800024986267,0.013000000268220901,-0.22499999403953552,1,-0.009999999776482582,-0.22499999403953552,1,-0.07000000029802322,-0.1850000023841858,1,-0.009999999776482582,-0.1850000023841858,1,-0.07000000029802322,-0.20000000298023224,1.138800024986267,-0.03999999910593033,-0.22499999403953552,0.9200000166893005,-0.03999999910593033,-0.17499999701976776,0.9200000166893005,-0.03999999910593033,-0.20000000298023224,0.9200000166893005,-0.06499999761581421,-0.20000000298023224,0.9200000166893005,-0.014999999664723873,-0.22499999403953552,0.8899999856948853,-0.03999999910593033,-0.17499999701976776,0.8899999856948853,-0.03999999910593033,-0.20000000298023224,0.8899999856948853,-0.06499999761581421,-0.20000000298023224,0.8899999856948853,-0.014999999664723873,-0.21799999475479126,0.8600000143051147,-0.03999999910593033,-0.18400000035762787,0.8600000143051147,-0.03999999910593033,-0.20000000298023224,0.8700000047683716,-0.07000000029802322,-0.20000000298023224,0.8700000047683716,0,-0.20999999344348907,0.8500000238418579,0,-0.18539999425411224,0.8500000238418579,0,-0.21199999749660492,0.8399999737739563,-0.014999999664723873,-0.18299999833106995,0.8399999737739563,-0.014999999664723873,-0.21299999952316284,0.8349999785423279,-0.03999999910593033,-0.1899999976158142,0.8349999785423279,-0.03999999910593033,-0.210999995470047,0.8349999785423279,-0.06499999761581421,-0.19200000166893005,0.8349999785423279,-0.06499999761581421,-0.20800000429153442,0.8399999737739563,-0.08500000089406967,-0.1899999976158142,0.8399999737739563,-0.08500000089406967,-0.20000000298023224,0.8399999737739563,-0.0949999988079071,-0.2150000035762787,0.8199999928474426,0,-0.19300000369548798,0.8149999976158142,0.004999999888241291,-0.1979999989271164,0.800000011920929,0.012000000104308128,-0.20999999344348907,0.8199999928474426,0.029999999329447746,-0.1899999976158142,0.8199999928474426,0.029999999329447746,-0.20000000298023224,0.8349999785423279,0.039000000804662704,-0.21199999749660492,0.800000011920929,0.05000000074505806,-0.18799999356269836,0.800000011920929,0.05000000074505806,-0.20000000298023224,0.8069999814033508,0.05700000002980232,-0.20000000298023224,0.7929999828338623,0.03500000014901161,-0.20000000298023224,0.7739999890327454,0.07599999755620956,-0.21199999749660492,0.7799999713897705,0.07000000029802322,-0.18799999356269836,0.7799999713897705,0.07000000029802322,-0.20000000298023224,0.7850000262260437,0.07500000298023224,-0.20000000298023224,0.7699999809265137,0.06199999898672104,-0.2150000035762787,0.7929999828338623,-0.014999999664723873,-0.18700000643730164,0.7929999828338623,-0.014999999664723873,-0.20000000298023224,0.7929999828338623,-0.004999999888241291,-0.2150000035762787,0.7879999876022339,-0.03999999910593033,-0.18700000643730164,0.7879999876022339,-0.03999999910593033,-0.2150000035762787,0.7929999828338623,-0.06499999761581421,-0.18700000643730164,0.7929999828338623,-0.06499999761581421,-0.20999999344348907,0.7900000214576721,-0.08500000089406967,-0.1899999976158142,0.7900000214576721,-0.08500000089406967,-0.20000000298023224,0.7900000214576721,-0.0949999988079071,-0.1899999976158142,0.7699999809265137,-0.027499999850988388,-0.1899999976158142,0.7699999809265137,-0.05249999836087227,-0.1899999976158142,0.7799999713897705,-0.07750000059604645,-0.21199999749660492,0.7450000047683716,-0.014999999664723873,-0.18799999356269836,0.7450000047683716,-0.019999999552965164,-0.20000000298023224,0.7450000047683716,-0.025499999523162842,-0.20000000298023224,0.7450000047683716,-0.0044999998062849045,-0.210999995470047,0.7200000286102295,-0.014999999664723873,-0.1889999955892563,0.7200000286102295,-0.014999999664723873,-0.20000000298023224,0.7200000286102295,-0.025200000032782555,-0.20000000298023224,0.7200000286102295,-0.004800000227987766,-0.20999999344348907,0.6949999928474426,-0.014999999664723873,-0.1899999976158142,0.6949999928474426,-0.014999999664723873,-0.20000000298023224,0.6949999928474426,-0.02500000037252903,-0.20000000298023224,0.6949999928474426,-0.004999999888241291,-0.20000000298023224,0.6850000023841858,-0.014999999664723873,-0.2150000035762787,0.7400000095367432,-0.03999999910593033,-0.1850000023841858,0.7400000095367432,-0.03999999910593033,-0.20000000298023224,0.7400000095367432,-0.054999999701976776,-0.20000000298023224,0.7400000095367432,-0.02500000037252903,-0.20999999344348907,0.7142000198364258,-0.03999999910593033,-0.1899999976158142,0.7142000198364258,-0.03999999910593033,-0.20000000298023224,0.7142000198364258,-0.05299999937415123,-0.20000000298023224,0.7142000198364258,-0.027000000700354576,-0.20999999344348907,0.6800000071525574,-0.03999999910593033,-0.1899999976158142,0.6800000071525574,-0.03999999910593033,-0.20000000298023224,0.6800000071525574,-0.05000000074505806,-0.20000000298023224,0.6800000071525574,-0.029999999329447746,-0.20000000298023224,0.6700000166893005,-0.03999999910593033,-0.21199999749660492,0.7400000095367432,-0.06499999761581421,-0.18799999356269836,0.7400000095367432,-0.06499999761581421,-0.20000000298023224,0.7400000095367432,-0.07559999823570251,-0.20000000298023224,0.7400000095367432,-0.05420000106096268,-0.20999999344348907,0.7177000045776367,-0.06499999761581421,-0.1899999976158142,0.7177000045776367,-0.06499999761581421,-0.20000000298023224,0.7177000045776367,-0.07509999722242355,-0.20000000298023224,0.7177000045776367,-0.05490000173449516,-0.20999999344348907,0.6949999928474426,-0.06499999761581421,-0.1899999976158142,0.6949999928474426,-0.06499999761581421,-0.20000000298023224,0.6949999928474426,-0.07500000298023224,-0.20000000298023224,0.6949999928474426,-0.054999999701976776,-0.20000000298023224,0.6850000023841858,-0.06499999761581421,-0.210999995470047,0.7549999952316284,-0.08500000089406967,-0.1889999955892563,0.7549999952316284,-0.08500000089406967,-0.20000000298023224,0.7549999952316284,-0.09520000219345093,-0.20000000298023224,0.7549999952316284,-0.07479999959468842,-0.20999999344348907,0.7350000143051147,-0.08500000089406967,-0.1899999976158142,0.7350000143051147,-0.08500000089406967,-0.20000000298023224,0.7350000143051147,-0.09510000050067902,-0.20000000298023224,0.7350000143051147,-0.07490000128746033,-0.20999999344348907,0.7200000286102295,-0.08500000089406967,-0.1899999976158142,0.7200000286102295,-0.08500000089406967,-0.20000000298023224,0.7200000286102295,-0.0949999988079071,-0.20000000298023224,0.7200000286102295,-0.07500000298023224,-0.20000000298023224,0.7099999785423279,-0.08500000089406967,0.11500000208616257,0.4659999907016754,0.05999999865889549,0.11500000208616257,0.4659999907016754,-0.054999999701976776,0.15000000596046448,0.4659999907016754,0,0.05000000074505806,0.4659999907016754,0,0.17000000178813934,0.30000001192092896,0,0.05999999865889549,0.30000001192092896,0,0.10000000149011612,0.30000001192092896,-0.05000000074505806,0.10000000149011612,0.30000001192092896,0.05000000074505806,0.15000000596046448,0.07000000029802322,0,0.08500000089406967,0.0860000029206276,0.012500000186264515,0.11500000208616257,0.0689999982714653,-0.04500000178813934,0.11699999868869781,0.09749999642372131,0.061500001698732376,0.13750000298023224,0.006000000052154064,-0.029999999329447746,0.0949999988079071,0.006000000052154064,-0.029999999329447746,0.11500000208616257,0.014999999664723873,-0.04500000178813934,0.11500000208616257,0.05999999865889549,0.10000000149011612,0.11500000208616257,0,0.07000000029802322,0.16500000655651093,0,0.07000000029802322,0.0949999988079071,0,0.07000000029802322,0.11500000208616257,0.03999999910593033,0.12999999523162842,0.125,0,0.11999999731779099,0.16500000655651093,0,0.11999999731779099,0.08699999749660492,0,0.12200000137090683,0.09000000357627869,0.012000000104308128,0.18799999356269836,0.10999999940395355,0.010999999940395355,0.1899999976158142,0.12800000607967377,0.010999999940395355,0.1850000023841858,0.1420000046491623,0.010999999940395355,0.17800000309944153,0.15399999916553497,0.009999999776482582,0.1679999977350235,-0.11500000208616257,0.4659999907016754,0.05999999865889549,-0.11500000208616257,0.4659999907016754,-0.054999999701976776,-0.17000000178813934,0.4659999907016754,0,-0.05000000074505806,0.4659999907016754,0,-0.17000000178813934,0.30000001192092896,0,-0.05999999865889549,0.30000001192092896,0,-0.10000000149011612,0.30000001192092896,-0.05000000074505806,-0.10000000149011612,0.30000001192092896,0.05000000074505806,-0.15000000596046448,0.07000000029802322,0,-0.08500000089406967,0.0860000029206276,0.012500000186264515,-0.11500000208616257,0.0689999982714653,-0.04500000178813934,-0.11699999868869781,0.09749999642372131,0.06199999898672104,-0.13750000298023224,0.006000000052154064,-0.029999999329447746,-0.0949999988079071,0.006000000052154064,-0.029999999329447746,-0.0949999988079071,0.006000000052154064,-0.029999999329447746,-0.11500000208616257,0.05999999865889549,0.10000000149011612,-0.11500000208616257,0,0.07000000029802322,-0.16500000655651093,0,0.07000000029802322,-0.0949999988079071,0,0.07000000029802322,-0.11500000208616257,0.03999999910593033,0.12999999523162842,-0.125,0,0.11999999731779099,-0.16500000655651093,0,0.11999999731779099,-0.08699999749660492,0,0.12200000137090683,-0.09000000357627869,0.012000000104308128,0.18799999356269836,-0.10999999940395355,0.010999999940395355,0.1899999976158142,-0.12800000607967377,0.010999999940395355,0.1850000023841858,-0.1420000046491623,0.010999999940395355,0.17800000309944153,-0.15399999916553497,0.009999999776482582,0.1679999977350235});
IndexedFaceSet1235->setCoord(*Coordinate1236);

CColor* Color1237 = (CColor *)(m_pScene.createNode("Color"));
Color1237->setColor(new float[2079]{1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1});
IndexedFaceSet1235->setColor(*Color1237);

Shape1234->setSkin(*IndexedFaceSet1235);

CAppearance* Appearance1238 = (CAppearance *)(m_pScene.createNode("Appearance"));
CImageTexture* ImageTexture1239 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture1239->setUrl(new CString[1]{"zBlueSpiralBkg2.gif"}, 1);
Appearance1238->setTexture(*ImageTexture1239);

CMaterial* Material1240 = (CMaterial *)(m_pScene.createNode("Material"));
Material1240->setAmbientIntensity(0.6000000238418579);
Material1240->setDiffuseColor(new float[3]{0,0,0});
Material1240->setShininess(0.6000000238418579);
Appearance1238->setMaterial(*Material1240);

Shape1234->setAppearance(*Appearance1238);

HAnimHumanoid52->addSkin(*Shape1234);

CCoordinate* Coordinate1241 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1241->setUSE("JoeSkinCoord");
HAnimHumanoid52->setSkinCoord(*Coordinate1241);

CHAnimJoint* HAnimJoint1242 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1242->setUSE("Joe_HumanoidRoot");
HAnimHumanoid52->addJoints(*HAnimJoint1242);

Group51->addChildren(*HAnimHumanoid52);

Group50->addChildren(*Group51);

group->addChildren(*Group50);

CTimeSensor* TimeSensor1243 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor1243->setDEF("Time1");
TimeSensor1243->setCycleInterval(2.86);
TimeSensor1243->setLoop(True);
group->addChildren(*TimeSensor1243);

CTimeSensor* TimeSensor1244 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor1244->setDEF("Time2");
TimeSensor1244->setCycleInterval(5.72);
TimeSensor1244->setLoop(True);
group->addChildren(*TimeSensor1244);

COrientationInterpolator* OrientationInterpolator1245 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1245->setDEF("Pitch");
OrientationInterpolator1245->setKey(new float[6]{0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1}, 6);
OrientationInterpolator1245->setKeyValue(new float[24]{1,0,0,0,1,0,0,1.25600004196167,1,0,0,2.51200008392334,1,0,0,3.7679998874664307,1,0,0,5.02400016784668,1,0,0,6.28000020980835});
group->addChildren(*OrientationInterpolator1245);

COrientationInterpolator* OrientationInterpolator1246 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1246->setDEF("Yaw");
OrientationInterpolator1246->setKey(new float[6]{0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1}, 6);
OrientationInterpolator1246->setKeyValue(new float[24]{0,1,0,0,0,1,0,1.25600004196167,0,1,0,2.51200008392334,0,1,0,3.7679998874664307,0,1,0,5.02400016784668,0,1,0,6.28000020980835});
group->addChildren(*OrientationInterpolator1246);

COrientationInterpolator* OrientationInterpolator1247 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1247->setDEF("Roll");
OrientationInterpolator1247->setKey(new float[6]{0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1}, 6);
OrientationInterpolator1247->setKeyValue(new float[24]{0,0,1,0,0,0,1,1.25600004196167,0,0,1,2.51200008392334,0,0,1,3.7679998874664307,0,0,1,5.02400016784668,0,0,1,6.28000020980835});
group->addChildren(*OrientationInterpolator1247);

COrientationInterpolator* OrientationInterpolator1248 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1248->setDEF("vc6Yaw");
OrientationInterpolator1248->setKey(new float[9]{0,0.20000000298023224,0.4000000059604645,0.5,0.6000000238418579,0.699999988079071,0.800000011920929,0.8999999761581421,1}, 9);
OrientationInterpolator1248->setKeyValue(new float[36]{0,1,0,0,0,1,0,0.699999988079071,0,1,0,0,0,1,0,0,-1,0,0,0.5,-0.4000000059604645,-1,0,0.699999988079071,-0.4000000059604645,-1,0,0.4000000059604645,0,1,0,0,0,1,0,0});
group->addChildren(*OrientationInterpolator1248);

CROUTE* ROUTE1249 = new CROUTE();
ROUTE1249->setFromField("fraction_changed");
ROUTE1249->setFromNode("Time2");
ROUTE1249->setToField("set_fraction");
ROUTE1249->setToNode("vc6Yaw");
group->addChildren(*ROUTE1249);

CROUTE* ROUTE1250 = new CROUTE();
ROUTE1250->setFromField("value_changed");
ROUTE1250->setFromNode("vc6Yaw");
ROUTE1250->setToField("set_rotation");
ROUTE1250->setToNode("Joe_vc6");
group->addChildren(*ROUTE1250);

COrientationInterpolator* OrientationInterpolator1251 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1251->setDEF("r_sternoclavicularRoll");
OrientationInterpolator1251->setKey(new float[7]{0,0.20000000298023224,0.4000000059604645,0.5,0.699999988079071,0.800000011920929,1}, 7);
OrientationInterpolator1251->setKeyValue(new float[28]{0,0,1,0,0,0,-1,0.10000000149011612,0,0,-1,0.2199999988079071,0,0.5,-1,0.27000001072883606,0,0,-1,0.10000000149011612,0,0,1,0,0,0,1,0});
group->addChildren(*OrientationInterpolator1251);

COrientationInterpolator* OrientationInterpolator1252 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1252->setDEF("r_acromioclavicularRoll");
OrientationInterpolator1252->setKey(new float[6]{0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1}, 6);
OrientationInterpolator1252->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,-0.05000000074505806,0,0,1,0,0,0,1,0,0,0,1,0});
group->addChildren(*OrientationInterpolator1252);

COrientationInterpolator* OrientationInterpolator1253 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1253->setDEF("r_shoulderRoll");
OrientationInterpolator1253->setKey(new float[6]{0,0.20000000298023224,0.4000000059604645,0.5,0.8500000238418579,1}, 6);
OrientationInterpolator1253->setKeyValue(new float[24]{1,0,0,0,0,0,-1,1.659999966621399,-0.25,0,-1,1.7599999904632568,0,0,-1,1.25600004196167,0,0,-1,0.05000000074505806,1,0,0,0});
group->addChildren(*OrientationInterpolator1253);

COrientationInterpolator* OrientationInterpolator1254 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1254->setDEF("r_ForeArmPitch");
OrientationInterpolator1254->setKey(new float[7]{0,0.15000000596046448,0.30000001192092896,0.5,0.699999988079071,0.8999999761581421,1}, 7);
OrientationInterpolator1254->setKeyValue(new float[28]{0,0,1,0,-1,0,0,0.550000011920929,-1,-0.25,0,2.549999952316284,-1,-0.25,0,2.549999952316284,-1,-0.25,0,2.549999952316284,0,0,1,0,0,0,1,0});
group->addChildren(*OrientationInterpolator1254);

COrientationInterpolator* OrientationInterpolator1255 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1255->setDEF("r_wristRoll");
OrientationInterpolator1255->setKey(new float[8]{0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.6499999761581421,0.75,0.8500000238418579,1}, 8);
OrientationInterpolator1255->setKeyValue(new float[32]{0,0,1,0,0,0,1,0,0,1,0,-0.550000011920929,0,0,1,0,0,1,0,1.5499999523162842,0,0,-1,1.5499999523162842,0,0,1,0,0,0,1,0});
group->addChildren(*OrientationInterpolator1255);

COrientationInterpolator* OrientationInterpolator1256 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1256->setDEF("r_handPitch");
OrientationInterpolator1256->setKey(new float[6]{0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1}, 6);
OrientationInterpolator1256->setKeyValue(new float[24]{0,0,1,0,0,0,0.009999999776482582,0.25,0,0,-0.009999999776482582,0.029999999329447746,0,0,0.009999999776482582,0.05000000074505806,0,0,0.009999999776482582,0.009999999776482582,0,0,1,0});
group->addChildren(*OrientationInterpolator1256);

COrientationInterpolator* OrientationInterpolator1257 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1257->setDEF("l_shoulderRoll");
OrientationInterpolator1257->setKey(new float[6]{0,0.20000000298023224,0.4000000059604645,0.5,0.8500000238418579,1}, 6);
OrientationInterpolator1257->setKeyValue(new float[24]{0.25,0,1,1.7599999904632568,0,0,1,1.659999966621399,0.25,0,1,1.7599999904632568,0,0,1,1.25600004196167,0,0,1,0.05000000074505806,0.25,0,1,1.7599999904632568});
group->addChildren(*OrientationInterpolator1257);

CROUTE* ROUTE1258 = new CROUTE();
ROUTE1258->setFromField("fraction_changed");
ROUTE1258->setFromNode("Time2");
ROUTE1258->setToField("set_fraction");
ROUTE1258->setToNode("r_sternoclavicularRoll");
group->addChildren(*ROUTE1258);

CROUTE* ROUTE1259 = new CROUTE();
ROUTE1259->setFromField("fraction_changed");
ROUTE1259->setFromNode("Time2");
ROUTE1259->setToField("set_fraction");
ROUTE1259->setToNode("r_acromioclavicularRoll");
group->addChildren(*ROUTE1259);

CROUTE* ROUTE1260 = new CROUTE();
ROUTE1260->setFromField("fraction_changed");
ROUTE1260->setFromNode("Time2");
ROUTE1260->setToField("set_fraction");
ROUTE1260->setToNode("r_shoulderRoll");
group->addChildren(*ROUTE1260);

CROUTE* ROUTE1261 = new CROUTE();
ROUTE1261->setFromField("fraction_changed");
ROUTE1261->setFromNode("Time2");
ROUTE1261->setToField("set_fraction");
ROUTE1261->setToNode("r_ForeArmPitch");
group->addChildren(*ROUTE1261);

CROUTE* ROUTE1262 = new CROUTE();
ROUTE1262->setFromField("fraction_changed");
ROUTE1262->setFromNode("Time2");
ROUTE1262->setToField("set_fraction");
ROUTE1262->setToNode("r_wristRoll");
group->addChildren(*ROUTE1262);

CROUTE* ROUTE1263 = new CROUTE();
ROUTE1263->setFromField("fraction_changed");
ROUTE1263->setFromNode("Time2");
ROUTE1263->setToField("set_fraction");
ROUTE1263->setToNode("r_handPitch");
group->addChildren(*ROUTE1263);

CROUTE* ROUTE1264 = new CROUTE();
ROUTE1264->setFromField("value_changed");
ROUTE1264->setFromNode("r_sternoclavicularRoll");
ROUTE1264->setToField("set_rotation");
ROUTE1264->setToNode("Joe_r_sternoclavicular");
group->addChildren(*ROUTE1264);

CROUTE* ROUTE1265 = new CROUTE();
ROUTE1265->setFromField("value_changed");
ROUTE1265->setFromNode("r_acromioclavicularRoll");
ROUTE1265->setToField("set_rotation");
ROUTE1265->setToNode("Joe_r_acromioclavicular");
group->addChildren(*ROUTE1265);

CROUTE* ROUTE1266 = new CROUTE();
ROUTE1266->setFromField("value_changed");
ROUTE1266->setFromNode("r_shoulderRoll");
ROUTE1266->setToField("set_rotation");
ROUTE1266->setToNode("Joe_r_shoulder");
group->addChildren(*ROUTE1266);

CROUTE* ROUTE1267 = new CROUTE();
ROUTE1267->setFromField("value_changed");
ROUTE1267->setFromNode("r_ForeArmPitch");
ROUTE1267->setToField("set_rotation");
ROUTE1267->setToNode("Joe_r_elbow");
group->addChildren(*ROUTE1267);

CROUTE* ROUTE1268 = new CROUTE();
ROUTE1268->setFromField("value_changed");
ROUTE1268->setFromNode("r_wristRoll");
ROUTE1268->setToField("set_rotation");
ROUTE1268->setToNode("Joe_r_wrist");
group->addChildren(*ROUTE1268);

CROUTE* ROUTE1269 = new CROUTE();
ROUTE1269->setFromField("value_changed");
ROUTE1269->setFromNode("l_shoulderRoll");
ROUTE1269->setToField("set_rotation");
ROUTE1269->setToNode("Joe_l_shoulder");
group->addChildren(*ROUTE1269);

CGroup* Group1270 = (CGroup *)(m_pScene.createNode("Group"));
CPositionInterpolator* PositionInterpolator1271 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator1271->setDEF("HUMANOIDROOT_POSITION_ANIMATOR");
PositionInterpolator1271->setKey(new float[19]{0,0.041669998317956924,0.125,0.16670000553131104,0.20829999446868896,0.25,0.29170000553131104,0.375,0.45829999446868896,0.5,0.541700005531311,0.583299994468689,0.625,0.708299994468689,0.75,0.791700005531311,0.875,0.916700005531311,1}, 19);
PositionInterpolator1271->setKeyValue(new float[57]{0,-0.009279999881982803,0,0,-0.0038580000400543213,0,0,-0.008847000077366829,0,0,-0.01486000046133995,0,0,-0.026410000398755074,0,0,-0.039340000599622726,0,0,-0.050200000405311584,0,0,-0.07468999922275543,0,0,-0.027319999411702156,0,0,-0.01607999950647354,0,0,-0.011289999820291996,0,0,-0.0058189998380839825,0,0,-0.0020039998926222324,0,0,-0.0025790000800043344,0,0,-0.014299999922513962,0,0,-0.03799000009894371,0,0,-0.05648000165820122,0,0,-0.04500000178813934,0,0,-0.009279999881982803,0});
Group1270->addChildren(*PositionInterpolator1271);

COrientationInterpolator* OrientationInterpolator1272 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1272->setDEF("HUMANOIDROOT_ANIMATOR");
OrientationInterpolator1272->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1272->setKeyValue(new float[8]{0,0,1,0,0,0,1,0});
Group1270->addChildren(*OrientationInterpolator1272);

COrientationInterpolator* OrientationInterpolator1273 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1273->setDEF("L_HIP_ANIMATOR");
OrientationInterpolator1273->setKey(new float[8]{0,0.25,0.375,0.5,0.666700005531311,0.791700005531311,0.916700005531311,1}, 8);
OrientationInterpolator1273->setKeyValue(new float[32]{-0.8730000257492065,0.06094000115990639,0.48399999737739563,0.2865000069141388,0.9962999820709229,-0.010569999925792217,0.08481000363826752,0.24879999458789825,0.9965000152587891,0.01590999960899353,-0.08222000300884247,0.38359999656677246,-0.7017999887466431,-0.03223000094294548,-0.7117000222206116,0.12890000641345978,-1,0,0,0.551800012588501,-0.996399998664856,0.02230999991297722,0.08169999718666077,0.535099983215332,-0.98089998960495,0.04912000149488449,0.18809999525547028,0.5203999876976013,-0.8730000257492065,0.06094000115990639,0.48399999737739563,0.2865000069141388});
Group1270->addChildren(*OrientationInterpolator1273);

COrientationInterpolator* OrientationInterpolator1274 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1274->setDEF("L_KNEE_ANIMATOR");
OrientationInterpolator1274->setKey(new float[8]{0,0.20829999446868896,0.375,0.5,0.666700005531311,0.791700005531311,0.916700005531311,1}, 8);
OrientationInterpolator1274->setKeyValue(new float[32]{1,0,0,0.32260000705718994,1,0,0,0.15559999644756317,1,0,0,0.08677999675273895,1,0,0,0.8751000165939331,1,0,0,1.13100004196167,1,0,0,0.09961000084877014,1,0,0,0.39419999718666077,1,0,0,0.32260000705718994});
Group1270->addChildren(*OrientationInterpolator1274);

COrientationInterpolator* OrientationInterpolator1275 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1275->setDEF("L_ANKLE_ANIMATOR");
OrientationInterpolator1275->setKey(new float[7]{0,0.125,0.20829999446868896,0.375,0.666700005531311,0.916700005531311,1}, 7);
OrientationInterpolator1275->setKeyValue(new float[28]{-1,0,0,0.06710000336170197,-1,0,0,0.2152000069618225,-1,0,0,0.31839999556541443,-1,0,0,0.4717000126838684,-1,0,0,0.29120001196861267,1,0,0,0.22220000624656677,-1,0,0,0.06710000336170197});
Group1270->addChildren(*OrientationInterpolator1275);

COrientationInterpolator* OrientationInterpolator1276 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1276->setDEF("R_ANKLE_ANIMATOR");
OrientationInterpolator1276->setKey(new float[11]{0,0.125,0.20829999446868896,0.375,0.45829999446868896,0.5,0.666700005531311,0.75,0.7799999713897705,0.916700005531311,1}, 11);
OrientationInterpolator1276->setKeyValue(new float[44]{0,0,1,0,-1,0,0,0.353300005197525,-1,0,0,0.10719999670982361,1,0,0,0.4000000059604645,1,0,0,0.12700000405311584,-1,0,0,0.017999999225139618,-1,0,0,0.057999998331069946,-1,0,0,0.23999999463558197,-1,0,0,0.3499999940395355,-1,0,0,0.33000001311302185,0,0,1,0});
Group1270->addChildren(*OrientationInterpolator1276);

COrientationInterpolator* OrientationInterpolator1277 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1277->setDEF("L_subtalar_ANIMATOR");
OrientationInterpolator1277->setKey(new float[3]{0,0.30000001192092896,1}, 3);
OrientationInterpolator1277->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1270->addChildren(*OrientationInterpolator1277);

COrientationInterpolator* OrientationInterpolator1278 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1278->setDEF("L_MIDTARSAL_ANIMATOR");
OrientationInterpolator1278->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1278->setKeyValue(new float[12]{0,0,1,0,1,0,0,-0.20000000298023224,0,0,1,0});
Group1270->addChildren(*OrientationInterpolator1278);

COrientationInterpolator* OrientationInterpolator1279 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1279->setDEF("L_metatarsal_ANIMATOR");
OrientationInterpolator1279->setKey(new float[5]{0,0.20000000298023224,0.4000000059604645,0.800000011920929,1}, 5);
OrientationInterpolator1279->setKeyValue(new float[20]{-1,0,0,0.30000001192092896,-1,0,0,0.15000000596046448,1,0,0,0.30000001192092896,0,0,1,0,-1,0,0,0.30000001192092896});
Group1270->addChildren(*OrientationInterpolator1279);

COrientationInterpolator* OrientationInterpolator1280 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1280->setDEF("R_HIP_ANIMATOR");
OrientationInterpolator1280->setKey(new float[10]{0,0.125,0.20829999446868896,0.29170000553131104,0.375,0.5,0.666700005531311,0.791700005531311,0.916700005531311,1}, 10);
OrientationInterpolator1280->setKeyValue(new float[40]{-0.5831000208854675,0.035110000520944595,0.8116000294685364,0.14810000360012054,-0.9950000047683716,0.02295999974012375,0.0967399999499321,0.4683000147342682,-1,0.0019000000320374966,0.007960000075399876,0.4731999933719635,-0.9980000257492065,-0.015799999237060547,-0.06102000176906586,0.5078999996185303,-0.991100013256073,-0.03540999814867973,-0.12860000133514404,0.5418999791145325,-0.913100004196167,-0.0624300017952919,-0.40299999713897705,0.3361000120639801,-0.43059998750686646,-0.07962000370025635,-0.8989999890327454,0.07038000226020813,1,0,0,0.257099986076355,0.9890999794006348,-0.028049999848008156,0.1444000005722046,0.3878999948501587,-0.5831000208854675,0.035110000520944595,0.8116000294685364,0.14810000360012054});
Group1270->addChildren(*OrientationInterpolator1280);

COrientationInterpolator* OrientationInterpolator1281 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1281->setDEF("R_KNEE_ANIMATOR");
OrientationInterpolator1281->setKey(new float[10]{0,0.125,0.20829999446868896,0.29170000553131104,0.375,0.5,0.666700005531311,0.791700005531311,0.916700005531311,1}, 10);
OrientationInterpolator1281->setKeyValue(new float[40]{1,0,0,0.8572999835014343,1,0,0,0.8925999999046326,1,0,0,0.535099983215332,1,0,0,0.17560000717639923,1,0,0,0.11940000206232071,1,0,0,0.31529998779296875,1,0,0,0.0935399979352951,1,0,0,0.0855799987912178,1,0,0,0.2475000023841858,1,0,0,0.8572999835014343});
Group1270->addChildren(*OrientationInterpolator1281);

COrientationInterpolator* OrientationInterpolator1282 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1282->setDEF("R_subtalar_ANIMATOR");
OrientationInterpolator1282->setKey(new float[7]{0,0.22499999403953552,0.25,0.3499999940395355,0.44999998807907104,0.8500000238418579,0.9100000262260437}, 7);
OrientationInterpolator1282->setKeyValue(new float[32]{-1,0,0,0.10000000149011612,0,0,1,0,0,0,1,0,1,0,0,0.10000000149011612,0,0,1,0,1,0,0,0.10000000149011612,1,0,0,0.25,-1,0,0,0.10000000149011612});
Group1270->addChildren(*OrientationInterpolator1282);

COrientationInterpolator* OrientationInterpolator1283 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1283->setDEF("R_MIDTARSAL_ANIMATOR");
OrientationInterpolator1283->setKey(new float[3]{0,0.2199999988079071,1}, 3);
OrientationInterpolator1283->setKeyValue(new float[12]{1,0,0,-0.20000000298023224,0,0,1,0,1,0,0,-0.20000000298023224});
Group1270->addChildren(*OrientationInterpolator1283);

COrientationInterpolator* OrientationInterpolator1284 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1284->setDEF("R_metatarsal_ANIMATOR");
OrientationInterpolator1284->setKey(new float[5]{0,0.20000000298023224,0.4000000059604645,0.800000011920929,1}, 5);
OrientationInterpolator1284->setKeyValue(new float[20]{-1,0,0,0.15000000596046448,0,0,1,0,1,0,0,0.30000001192092896,-1,0,0,0.30000001192092896,-1,0,0,0.15000000596046448});
Group1270->addChildren(*OrientationInterpolator1284);

COrientationInterpolator* OrientationInterpolator1285 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1285->setDEF("VL5_ANIMATOR");
OrientationInterpolator1285->setKey(new float[6]{0,0.20829999446868896,0.375,0.75,0.833299994468689,1}, 6);
OrientationInterpolator1285->setKeyValue(new float[24]{0,1,0,0.08259999752044678,-0.01971999928355217,-0.5974000096321106,0.8016999959945679,0.08230999857187271,0.009296000003814697,-0.9648000001907349,0.26269999146461487,0.17339999973773956,-0.012380000203847885,0.9549000263214111,-0.29679998755455017,0.0873199999332428,-0.008124999701976776,0.9690999984741211,-0.24629999697208405,0.15800000727176666,0,1,0,0.08259999752044678});
Group1270->addChildren(*OrientationInterpolator1285);

COrientationInterpolator* OrientationInterpolator1286 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1286->setDEF("SKULLBASE_ANIMATOR");
OrientationInterpolator1286->setKey(new float[10]{0,0.375,0.41670000553131104,0.5,0.583299994468689,0.666700005531311,0.75,0.833299994468689,0.916700005531311,1}, 10);
OrientationInterpolator1286->setKeyValue(new float[40]{0,-1,0,0.08640000224113464,0,1,0,0.18250000476837158,0,1,0,0.15049999952316284,0,1,0,0.10530000180006027,0,1,0,0.04391000047326088,0,-1,0,0.031190000474452972,0,-1,0,0.0793600007891655,0,-1,0,0.1615999937057495,0,-1,0,0.1550000011920929,0,-1,0,0.08641999959945679});
Group1270->addChildren(*OrientationInterpolator1286);

COrientationInterpolator* OrientationInterpolator1287 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1287->setDEF("L_SHOULDER_ANIMATOR");
OrientationInterpolator1287->setKey(new float[4]{0,0.375,0.916700005531311,1}, 4);
OrientationInterpolator1287->setKeyValue(new float[16]{1,0,0.4000000059604645,0.11999999731779099,-1,0,0.4000000059604645,0.1860000044107437,1,0,0.10000000149011612,0.335999995470047,1,0,0.4000000059604645,0.11999999731779099});
Group1270->addChildren(*OrientationInterpolator1287);

COrientationInterpolator* OrientationInterpolator1288 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1288->setDEF("L_ELBOW_ANIMATOR");
OrientationInterpolator1288->setKey(new float[4]{0,0.375,0.916700005531311,1}, 4);
OrientationInterpolator1288->setKeyValue(new float[16]{-1,0,0,0.06599999964237213,-1,0,0,0.4880000054836273,-1,0,0,0.01769999973475933,-1,0,0,0.06598780304193497});
Group1270->addChildren(*OrientationInterpolator1288);

COrientationInterpolator* OrientationInterpolator1289 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1289->setDEF("L_WRIST_ANIMATOR");
OrientationInterpolator1289->setKey(new float[4]{0,0.375,0.916700005531311,1}, 4);
OrientationInterpolator1289->setKeyValue(new float[16]{0,-1,0,0.460999995470047,-0.3301999866962433,-0.9275000095367432,0.17550000548362732,0.5388000011444092,0.03277739882469177,-0.99931401014328,-0.01721850037574768,0.4920330047607422,0,-1,0,0.4611000120639801});
Group1270->addChildren(*OrientationInterpolator1289);

COrientationInterpolator* OrientationInterpolator1290 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1290->setDEF("R_SHOULDER_ANIMATOR");
OrientationInterpolator1290->setKey(new float[4]{0,0.375,0.916700005531311,1}, 4);
OrientationInterpolator1290->setKeyValue(new float[16]{-1,0,-1,0.09200000017881393,1,0,-0.20000000298023224,0.3197000026702881,-1,0,-0.5,0.15639999508857727,-1,0,-1,0.09200000017881393});
Group1270->addChildren(*OrientationInterpolator1290);

COrientationInterpolator* OrientationInterpolator1291 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1291->setDEF("R_ELBOW_ANIMATOR");
OrientationInterpolator1291->setKey(new float[4]{0,0.375,0.916700005531311,1}, 4);
OrientationInterpolator1291->setKeyValue(new float[16]{-1,0,0,0.4115000069141388,-1,0,0,0.0925000011920929,-1,0,0,0.5725679993629456,-1,0,0,0.4115079939365387});
Group1270->addChildren(*OrientationInterpolator1291);

COrientationInterpolator* OrientationInterpolator1292 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1292->setDEF("R_WRIST_ANIMATOR");
OrientationInterpolator1292->setKey(new float[4]{0,0.375,0.916700005531311,1}, 4);
OrientationInterpolator1292->setKeyValue(new float[16]{-0.8129000067710876,0.47589999437332153,-0.33570000529289246,0.13459999859333038,0.15330000221729279,-0.9878000020980835,0.02582000009715557,0.3901999890804291,-0.5701000094413757,0.7603999972343445,-0.3109999895095825,0.3659999966621399,-0.8129000067710876,0.47589999437332153,-0.33570000529289246,0.13459999859333038});
Group1270->addChildren(*OrientationInterpolator1292);

group->addChildren(*Group1270);

CROUTE* ROUTE1293 = new CROUTE();
ROUTE1293->setFromField("fraction_changed");
ROUTE1293->setFromNode("Time1");
ROUTE1293->setToField("set_fraction");
ROUTE1293->setToNode("HUMANOIDROOT_POSITION_ANIMATOR");
group->addChildren(*ROUTE1293);

CROUTE* ROUTE1294 = new CROUTE();
ROUTE1294->setFromField("fraction_changed");
ROUTE1294->setFromNode("Time1");
ROUTE1294->setToField("set_fraction");
ROUTE1294->setToNode("HUMANOIDROOT_ANIMATOR");
group->addChildren(*ROUTE1294);

CROUTE* ROUTE1295 = new CROUTE();
ROUTE1295->setFromField("fraction_changed");
ROUTE1295->setFromNode("Time1");
ROUTE1295->setToField("set_fraction");
ROUTE1295->setToNode("L_HIP_ANIMATOR");
group->addChildren(*ROUTE1295);

CROUTE* ROUTE1296 = new CROUTE();
ROUTE1296->setFromField("fraction_changed");
ROUTE1296->setFromNode("Time1");
ROUTE1296->setToField("set_fraction");
ROUTE1296->setToNode("L_KNEE_ANIMATOR");
group->addChildren(*ROUTE1296);

CROUTE* ROUTE1297 = new CROUTE();
ROUTE1297->setFromField("fraction_changed");
ROUTE1297->setFromNode("Time1");
ROUTE1297->setToField("set_fraction");
ROUTE1297->setToNode("L_ANKLE_ANIMATOR");
group->addChildren(*ROUTE1297);

CROUTE* ROUTE1298 = new CROUTE();
ROUTE1298->setFromField("fraction_changed");
ROUTE1298->setFromNode("Time1");
ROUTE1298->setToField("set_fraction");
ROUTE1298->setToNode("L_subtalar_ANIMATOR");
group->addChildren(*ROUTE1298);

CROUTE* ROUTE1299 = new CROUTE();
ROUTE1299->setFromField("fraction_changed");
ROUTE1299->setFromNode("Time1");
ROUTE1299->setToField("set_fraction");
ROUTE1299->setToNode("L_MIDTARSAL_ANIMATOR");
group->addChildren(*ROUTE1299);

CROUTE* ROUTE1300 = new CROUTE();
ROUTE1300->setFromField("fraction_changed");
ROUTE1300->setFromNode("Time1");
ROUTE1300->setToField("set_fraction");
ROUTE1300->setToNode("L_metatarsal_ANIMATOR");
group->addChildren(*ROUTE1300);

CROUTE* ROUTE1301 = new CROUTE();
ROUTE1301->setFromField("fraction_changed");
ROUTE1301->setFromNode("Time1");
ROUTE1301->setToField("set_fraction");
ROUTE1301->setToNode("R_HIP_ANIMATOR");
group->addChildren(*ROUTE1301);

CROUTE* ROUTE1302 = new CROUTE();
ROUTE1302->setFromField("fraction_changed");
ROUTE1302->setFromNode("Time1");
ROUTE1302->setToField("set_fraction");
ROUTE1302->setToNode("R_KNEE_ANIMATOR");
group->addChildren(*ROUTE1302);

CROUTE* ROUTE1303 = new CROUTE();
ROUTE1303->setFromField("fraction_changed");
ROUTE1303->setFromNode("Time1");
ROUTE1303->setToField("set_fraction");
ROUTE1303->setToNode("R_ANKLE_ANIMATOR");
group->addChildren(*ROUTE1303);

CROUTE* ROUTE1304 = new CROUTE();
ROUTE1304->setFromField("fraction_changed");
ROUTE1304->setFromNode("Time1");
ROUTE1304->setToField("set_fraction");
ROUTE1304->setToNode("R_subtalar_ANIMATOR");
group->addChildren(*ROUTE1304);

CROUTE* ROUTE1305 = new CROUTE();
ROUTE1305->setFromField("fraction_changed");
ROUTE1305->setFromNode("Time1");
ROUTE1305->setToField("set_fraction");
ROUTE1305->setToNode("R_MIDTARSAL_ANIMATOR");
group->addChildren(*ROUTE1305);

CROUTE* ROUTE1306 = new CROUTE();
ROUTE1306->setFromField("fraction_changed");
ROUTE1306->setFromNode("Time1");
ROUTE1306->setToField("set_fraction");
ROUTE1306->setToNode("R_metatarsal_ANIMATOR");
group->addChildren(*ROUTE1306);

CROUTE* ROUTE1307 = new CROUTE();
ROUTE1307->setFromField("fraction_changed");
ROUTE1307->setFromNode("Time1");
ROUTE1307->setToField("set_fraction");
ROUTE1307->setToNode("VL5_ANIMATOR");
group->addChildren(*ROUTE1307);

CROUTE* ROUTE1308 = new CROUTE();
ROUTE1308->setFromField("fraction_changed");
ROUTE1308->setFromNode("Time1");
ROUTE1308->setToField("set_fraction");
ROUTE1308->setToNode("SKULLBASE_ANIMATOR");
group->addChildren(*ROUTE1308);

CROUTE* ROUTE1309 = new CROUTE();
ROUTE1309->setFromField("fraction_changed");
ROUTE1309->setFromNode("Time1");
ROUTE1309->setToField("set_fraction");
ROUTE1309->setToNode("L_SHOULDER_ANIMATOR");
group->addChildren(*ROUTE1309);

CROUTE* ROUTE1310 = new CROUTE();
ROUTE1310->setFromField("fraction_changed");
ROUTE1310->setFromNode("Time1");
ROUTE1310->setToField("set_fraction");
ROUTE1310->setToNode("L_ELBOW_ANIMATOR");
group->addChildren(*ROUTE1310);

CROUTE* ROUTE1311 = new CROUTE();
ROUTE1311->setFromField("fraction_changed");
ROUTE1311->setFromNode("Time1");
ROUTE1311->setToField("set_fraction");
ROUTE1311->setToNode("L_WRIST_ANIMATOR");
group->addChildren(*ROUTE1311);

CROUTE* ROUTE1312 = new CROUTE();
ROUTE1312->setFromField("value_changed");
ROUTE1312->setFromNode("HUMANOIDROOT_POSITION_ANIMATOR");
ROUTE1312->setToField("set_translation");
ROUTE1312->setToNode("Joe_HumanoidRoot");
group->addChildren(*ROUTE1312);

CROUTE* ROUTE1313 = new CROUTE();
ROUTE1313->setFromField("value_changed");
ROUTE1313->setFromNode("HUMANOIDROOT_ANIMATOR");
ROUTE1313->setToField("set_rotation");
ROUTE1313->setToNode("Joe_HumanoidRoot");
group->addChildren(*ROUTE1313);

CROUTE* ROUTE1314 = new CROUTE();
ROUTE1314->setFromField("value_changed");
ROUTE1314->setFromNode("L_HIP_ANIMATOR");
ROUTE1314->setToField("set_rotation");
ROUTE1314->setToNode("Joe_l_hip");
group->addChildren(*ROUTE1314);

CROUTE* ROUTE1315 = new CROUTE();
ROUTE1315->setFromField("value_changed");
ROUTE1315->setFromNode("L_KNEE_ANIMATOR");
ROUTE1315->setToField("set_rotation");
ROUTE1315->setToNode("Joe_l_knee");
group->addChildren(*ROUTE1315);

CROUTE* ROUTE1316 = new CROUTE();
ROUTE1316->setFromField("value_changed");
ROUTE1316->setFromNode("L_ANKLE_ANIMATOR");
ROUTE1316->setToField("set_rotation");
ROUTE1316->setToNode("Joe_l_ankle");
group->addChildren(*ROUTE1316);

CROUTE* ROUTE1317 = new CROUTE();
ROUTE1317->setFromField("value_changed");
ROUTE1317->setFromNode("L_MIDTARSAL_ANIMATOR");
ROUTE1317->setToField("set_rotation");
ROUTE1317->setToNode("Joe_l_midtarsal");
group->addChildren(*ROUTE1317);

CROUTE* ROUTE1318 = new CROUTE();
ROUTE1318->setFromField("value_changed");
ROUTE1318->setFromNode("L_subtalar_ANIMATOR");
ROUTE1318->setToField("set_rotation");
ROUTE1318->setToNode("Joe_l_subtalar");
group->addChildren(*ROUTE1318);

CROUTE* ROUTE1319 = new CROUTE();
ROUTE1319->setFromField("value_changed");
ROUTE1319->setFromNode("L_metatarsal_ANIMATOR");
ROUTE1319->setToField("set_rotation");
ROUTE1319->setToNode("Joe_l_metatarsal");
group->addChildren(*ROUTE1319);

CROUTE* ROUTE1320 = new CROUTE();
ROUTE1320->setFromField("value_changed");
ROUTE1320->setFromNode("R_HIP_ANIMATOR");
ROUTE1320->setToField("set_rotation");
ROUTE1320->setToNode("Joe_r_hip");
group->addChildren(*ROUTE1320);

CROUTE* ROUTE1321 = new CROUTE();
ROUTE1321->setFromField("value_changed");
ROUTE1321->setFromNode("R_KNEE_ANIMATOR");
ROUTE1321->setToField("set_rotation");
ROUTE1321->setToNode("Joe_r_knee");
group->addChildren(*ROUTE1321);

CROUTE* ROUTE1322 = new CROUTE();
ROUTE1322->setFromField("value_changed");
ROUTE1322->setFromNode("R_ANKLE_ANIMATOR");
ROUTE1322->setToField("set_rotation");
ROUTE1322->setToNode("Joe_r_ankle");
group->addChildren(*ROUTE1322);

CROUTE* ROUTE1323 = new CROUTE();
ROUTE1323->setFromField("value_changed");
ROUTE1323->setFromNode("R_subtalar_ANIMATOR");
ROUTE1323->setToField("set_rotation");
ROUTE1323->setToNode("Joe_r_subtalar");
group->addChildren(*ROUTE1323);

CROUTE* ROUTE1324 = new CROUTE();
ROUTE1324->setFromField("value_changed");
ROUTE1324->setFromNode("R_MIDTARSAL_ANIMATOR");
ROUTE1324->setToField("set_rotation");
ROUTE1324->setToNode("Joe_r_midtarsal");
group->addChildren(*ROUTE1324);

CROUTE* ROUTE1325 = new CROUTE();
ROUTE1325->setFromField("value_changed");
ROUTE1325->setFromNode("R_metatarsal_ANIMATOR");
ROUTE1325->setToField("set_rotation");
ROUTE1325->setToNode("Joe_r_metatarsal");
group->addChildren(*ROUTE1325);

CROUTE* ROUTE1326 = new CROUTE();
ROUTE1326->setFromField("value_changed");
ROUTE1326->setFromNode("VL5_ANIMATOR");
ROUTE1326->setToField("set_rotation");
ROUTE1326->setToNode("Joe_vl5");
group->addChildren(*ROUTE1326);

CROUTE* ROUTE1327 = new CROUTE();
ROUTE1327->setFromField("value_changed");
ROUTE1327->setFromNode("SKULLBASE_ANIMATOR");
ROUTE1327->setToField("set_rotation");
ROUTE1327->setToNode("Joe_skullbase");
group->addChildren(*ROUTE1327);

CROUTE* ROUTE1328 = new CROUTE();
ROUTE1328->setFromField("value_changed");
ROUTE1328->setFromNode("L_SHOULDER_ANIMATOR");
ROUTE1328->setToField("set_rotation");
ROUTE1328->setToNode("Joe_l_shoulder");
group->addChildren(*ROUTE1328);

CROUTE* ROUTE1329 = new CROUTE();
ROUTE1329->setFromField("value_changed");
ROUTE1329->setFromNode("L_ELBOW_ANIMATOR");
ROUTE1329->setToField("set_rotation");
ROUTE1329->setToNode("Joe_l_elbow");
group->addChildren(*ROUTE1329);

CROUTE* ROUTE1330 = new CROUTE();
ROUTE1330->setFromField("value_changed");
ROUTE1330->setFromNode("L_WRIST_ANIMATOR");
ROUTE1330->setToField("set_rotation");
ROUTE1330->setToNode("Joe_l_wrist");
group->addChildren(*ROUTE1330);

CROUTE* ROUTE1331 = new CROUTE();
ROUTE1331->setFromField("value_changed");
ROUTE1331->setFromNode("R_SHOULDER_ANIMATOR");
ROUTE1331->setToField("set_rotation");
ROUTE1331->setToNode("Joe_r_shoulder");
group->addChildren(*ROUTE1331);

CROUTE* ROUTE1332 = new CROUTE();
ROUTE1332->setFromField("value_changed");
ROUTE1332->setFromNode("R_ELBOW_ANIMATOR");
ROUTE1332->setToField("set_rotation");
ROUTE1332->setToNode("Joe_r_elbow");
group->addChildren(*ROUTE1332);

CROUTE* ROUTE1333 = new CROUTE();
ROUTE1333->setFromField("value_changed");
ROUTE1333->setFromNode("R_WRIST_ANIMATOR");
ROUTE1333->setToField("set_rotation");
ROUTE1333->setToNode("Joe_r_wrist");
group->addChildren(*ROUTE1333);

CNavigationInfo* NavigationInfo1334 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo1334->setAvatarSize(new float[3]{0.25,1.600000023841858,0.75}, 3);
NavigationInfo1334->setHeadlight(False);
group->addChildren(*NavigationInfo1334);

CViewpoint* Viewpoint1335 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1335->setDescription("Front Up View");
Viewpoint1335->setOrientation(new float[4]{-1,-1,0,0.550000011920929});
Viewpoint1335->setPosition(new float[3]{-1,2,2.5});
group->addChildren(*Viewpoint1335);

CViewpoint* Viewpoint1336 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1336->setDescription("From Left View");
Viewpoint1336->setOrientation(new float[4]{0.30000001192092896,1,0,-1.5700000524520874});
Viewpoint1336->setPosition(new float[3]{-2.5,1.5,0});
group->addChildren(*Viewpoint1336);

CViewpoint* Viewpoint1337 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1337->setDescription("Front Mid View");
Viewpoint1337->setPosition(new float[3]{0,0.5,1.25});
group->addChildren(*Viewpoint1337);

CViewpoint* Viewpoint1338 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1338->setDescription("Front Feet View");
Viewpoint1338->setPosition(new float[3]{0,0,0.75});
group->addChildren(*Viewpoint1338);

CViewpoint* Viewpoint1339 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1339->setDescription("From Right View");
Viewpoint1339->setOrientation(new float[4]{0,1,0,1.5700000524520874});
Viewpoint1339->setPosition(new float[3]{1,1,0});
group->addChildren(*Viewpoint1339);

CViewpoint* Viewpoint1340 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1340->setDescription("Front Head View");
Viewpoint1340->setPosition(new float[3]{0,1.649999976158142,0.75});
group->addChildren(*Viewpoint1340);

CViewpoint* Viewpoint1341 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1341->setDescription("Front Mid View");
Viewpoint1341->setPosition(new float[3]{0,1,1.75});
group->addChildren(*Viewpoint1341);

CViewpoint* Viewpoint1342 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1342->setDescription("Rear View");
Viewpoint1342->setOrientation(new float[4]{0,1,0,3.140000104904175});
Viewpoint1342->setPosition(new float[3]{0,1.5,-4});
group->addChildren(*Viewpoint1342);

CViewpoint* Viewpoint1343 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1343->setDescription("Top View");
Viewpoint1343->setOrientation(new float[4]{1,0,0,-1.5700000524520874});
Viewpoint1343->setPosition(new float[3]{0,4,0});
group->addChildren(*Viewpoint1343);

CViewpoint* Viewpoint1344 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint1344->setDescription("Bottom View");
Viewpoint1344->setOrientation(new float[4]{1,0,0,1.5700000524520874});
Viewpoint1344->setPosition(new float[3]{0,-4,0});
group->addChildren(*Viewpoint1344);

CBackground* Background1345 = (CBackground *)(m_pScene.createNode("Background"));
Background1345->setGroundAngle(new float[1]{1.5700000524520874}, 1);
Background1345->setGroundColor(new float[6]{0,0.10000000149011612,0,0,0.10000000149011612,0});
Background1345->setSkyColor(new float[3]{0,0,0.10000000149011612});
group->addChildren(*Background1345);

CTransform* Transform1346 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1346->setDEF("cordsysfloor");
Transform1346->setScale(new float[3]{0.17499999701976776,0.17499999701976776,0.17499999701976776});
CInline* Inline1347 = (CInline *)(m_pScene.createNode("Inline"));
Inline1347->setUrl(new CString[1]{"JointCoordinateAxes.x3dv"}, 1);
Transform1346->addChildren(*Inline1347);

group->addChildren(*Transform1346);

X3D0->setScene(*Scene22);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
