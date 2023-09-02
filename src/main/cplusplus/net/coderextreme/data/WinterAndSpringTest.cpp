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

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("WinterAndSpringTest.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("3D Male Scan combined with JoeKick, 3 Korean characters Ru,Mi,Min from HAnim, CCBYSA music plus designs from Rhino. MaleScan modified in Cinema4D for articulation and translations, geometric values from Rhino, txt file for centers. Models vary. HAnim version 2 LOA-3 Humanoids with textured skin, 3 Korean characters, plus scan. Math for lines and intersections.");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("Carol McDonald, Katy Schildmeyer, Joe D. Williams and Don Brutzman");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("May through September 2023");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("2 June 2023");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter09Ru.x3d");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter10Mi.x3d");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("identifier");
meta11->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("license");
meta12->setContent("../license.html");
head1->addMeta(*meta12);

X3D0->setHead(*head1);

CScene* Scene13 = new CScene();
CWorldInfo* WorldInfo14 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo14->setInfo(new CString[2]{"X3D Humanoid LOA3 skeleton plus others","Lots points"}, 2);
WorldInfo14->setTitle("X3D HANIM LOA3 (modified) Skeleton, Lots points Skin, texcoords, Displacer, translations");
group->addChildren(*WorldInfo14);

CNavigationInfo* NavigationInfo15 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo15->setDEF("Start_NavigationInfo");
NavigationInfo15->setHeadlight(False);
group->addChildren(*NavigationInfo15);

CViewpoint* Viewpoint16 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint16->setCenterOfRotation(new float[3]{0,1,0});
Viewpoint16->setDescription("Male");
Viewpoint16->setPosition(new float[3]{0,1,-2});
group->addChildren(*Viewpoint16);

CBackground* Background17 = (CBackground *)(m_pScene.createNode("Background"));
Background17->setDEF("gray_Background");
group->addChildren(*Background17);

CBackground* Background18 = (CBackground *)(m_pScene.createNode("Background"));
Background18->setDEF("dark_gray_Background");
group->addChildren(*Background18);

CBackground* Background19 = (CBackground *)(m_pScene.createNode("Background"));
Background19->setDEF("black_Background");
group->addChildren(*Background19);

CBackground* Background20 = (CBackground *)(m_pScene.createNode("Background"));
Background20->setDEF("blue_Background");
group->addChildren(*Background20);

CSpotLight* SpotLight21 = (CSpotLight *)(m_pScene.createNode("SpotLight"));
SpotLight21->setDEF("light1");
SpotLight21->setAmbientIntensity(0.7);
SpotLight21->setBeamWidth(1.5);
SpotLight21->setColor(new float[3]{0.8,0.8,1});
SpotLight21->setCutOffAngle(0.6);
SpotLight21->setDirection(new float[3]{0,0,0});
SpotLight21->setLocation(new float[3]{0,3,3});
SpotLight21->setRadius(10);
group->addChildren(*SpotLight21);

CPointLight* PointLight22 = (CPointLight *)(m_pScene.createNode("PointLight"));
PointLight22->setDEF("light2");
PointLight22->setAmbientIntensity(0.7);
PointLight22->setColor(new float[3]{0.8,0.8,1});
PointLight22->setLocation(new float[3]{0,10,-7});
group->addChildren(*PointLight22);

//External from the Humanoid viewpoints
CViewpoint* Viewpoint23 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint23->setDEF("Scene_InclinedView");
Viewpoint23->setCenterOfRotation(new float[3]{0,0.85,0});
Viewpoint23->setDescription("Scene_Inclined View");
Viewpoint23->setOrientation(new float[4]{-0.113,0.993,0.0347,0.671});
Viewpoint23->setPosition(new float[3]{1.62,1.05,3.06});
group->addChildren(*Viewpoint23);

CViewpoint* Viewpoint24 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint24->setDEF("Scene_IFrontView");
Viewpoint24->setCenterOfRotation(new float[3]{0,0.8,0});
Viewpoint24->setDescription("Scene_Front View");
Viewpoint24->setPosition(new float[3]{0,0.8,2.58});
group->addChildren(*Viewpoint24);

CViewpoint* Viewpoint25 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint25->setDEF("Scene_OldMan_ISideView");
Viewpoint25->setCenterOfRotation(new float[3]{0,0.8,0});
Viewpoint25->setDescription("Scene_Side View");
Viewpoint25->setOrientation(new float[4]{0,1,0,1.5708});
Viewpoint25->setPosition(new float[3]{-2.6,1.5,1});
group->addChildren(*Viewpoint25);

CViewpoint* Viewpoint26 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint26->setDEF("Scene_ISideView");
Viewpoint26->setCenterOfRotation(new float[3]{0,0.8,0});
Viewpoint26->setDescription("Scene_Side View");
Viewpoint26->setOrientation(new float[4]{0,1,0,1.5708});
Viewpoint26->setPosition(new float[3]{-5,1.5,1});
group->addChildren(*Viewpoint26);

CViewpoint* Viewpoint27 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint27->setDEF("Scene_Full_ISideView");
Viewpoint27->setCenterOfRotation(new float[3]{0,0.8,0});
Viewpoint27->setDescription("Scene_Side View");
Viewpoint27->setOrientation(new float[4]{0,1,0,1.5708});
Viewpoint27->setPosition(new float[3]{-10,1.5,1});
group->addChildren(*Viewpoint27);

CViewpoint* Viewpoint28 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint28->setDEF("Scene_OneBush_ISideView");
Viewpoint28->setCenterOfRotation(new float[3]{0,0.8,0});
Viewpoint28->setDescription("Scene_Side View");
Viewpoint28->setOrientation(new float[4]{0,1,0,1.5708});
Viewpoint28->setPosition(new float[3]{-20,1.5,1});
group->addChildren(*Viewpoint28);

CViewpoint* Viewpoint29 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint29->setDEF("Scene_TwoBush_ISideView");
Viewpoint29->setCenterOfRotation(new float[3]{0,0.8,0});
Viewpoint29->setDescription("Scene_Side View");
Viewpoint29->setOrientation(new float[4]{0,1,0,1.5708});
Viewpoint29->setPosition(new float[3]{-10,1.5,1});
group->addChildren(*Viewpoint29);

CViewpoint* Viewpoint30 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint30->setDEF("Scene_BackView");
Viewpoint30->setCenterOfRotation(new float[3]{0,1.5,0});
Viewpoint30->setDescription("Scene_Back View");
Viewpoint30->setOrientation(new float[4]{0,1,0,3.14});
Viewpoint30->setPosition(new float[3]{0,1.5,-5});
group->addChildren(*Viewpoint30);

CViewpoint* Viewpoint31 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint31->setDEF("Scene_OldMan_BackView");
Viewpoint31->setCenterOfRotation(new float[3]{0,1.5,0});
Viewpoint31->setDescription("Scene_Back View");
Viewpoint31->setOrientation(new float[4]{0,1,0,3.14});
Viewpoint31->setPosition(new float[3]{0,1.5,-2.5});
group->addChildren(*Viewpoint31);

CViewpoint* Viewpoint32 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint32->setDEF("Scene_Full_BackView");
Viewpoint32->setCenterOfRotation(new float[3]{0,1.5,0});
Viewpoint32->setDescription("Scene_Back View");
Viewpoint32->setOrientation(new float[4]{0,1,15,3.14});
Viewpoint32->setPosition(new float[3]{0,1.5,-20});
group->addChildren(*Viewpoint32);

CViewpoint* Viewpoint33 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint33->setDEF("Scene_TopView");
Viewpoint33->setCenterOfRotation(new float[3]{0,1.5,0});
Viewpoint33->setDescription("Scene_Top View");
Viewpoint33->setOrientation(new float[4]{1,0,0,-1.5708});
Viewpoint33->setPosition(new float[3]{0,3.5,0});
group->addChildren(*Viewpoint33);

CGroup* Group34 = (CGroup *)(m_pScene.createNode("Group"));
Group34->setDEF("OldMan_Humanoid");
CHAnimHumanoid* HAnimHumanoid35 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid35->setName("Walk");
HAnimHumanoid35->setDEF("OldMan");
HAnimHumanoid35->setLoa(3);
HAnimHumanoid35->setVersion("2.0");
CMetadataSet* MetadataSet36 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet36->setName("warnings");
MetadataSet36->setReference("HAnim");
CMetadataString* MetadataString37 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString37->setName("SymmetricalLeftRight");
MetadataString37->setReference("correction options: ignore, warn, average, left, right, largest, smallest");
MetadataString37->setValue(new CString[1]{"ignore"}, 1);
MetadataSet36->setValue(*MetadataString37);

HAnimHumanoid35->setMetadata(*MetadataSet36);

CHAnimJoint* HAnimJoint38 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint38->setName("humanoid_root");
HAnimJoint38->setDEF("OldMan_humanoid_root");
HAnimJoint38->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint38->setLlimit(new float[3]{0,0,0}, 3);
//TODO center='x 0.9155 z'
CHAnimSegment* HAnimSegment39 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment39->setName("sacrum");
HAnimSegment39->setDEF("OldMan_sacrum");
CHAnimSite* HAnimSite40 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite40->setName("RootBack_view");
HAnimSite40->setDEF("OldMan_RootBack_view");
CTransform* Transform41 = (CTransform *)(m_pScene.createNode("Transform"));
Transform41->setDEF("hanimcordsys");
Transform41->setScale(new float[3]{0.175,0.175,0.175});
CViewpoint* Viewpoint42 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint42->setDEF("ViewBodyRootAxes");
Viewpoint42->setDescription("Joe_HAnim Root HAnimSite Coordinate Axes View");
Transform41->addChildren(*Viewpoint42);

CShape* Shape43 = (CShape *)(m_pScene.createNode("Shape"));
Shape43->setDEF("AxisLinesShape");
//RGB lines showing XYZ axes
CIndexedLineSet* IndexedLineSet44 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet44->setColorIndex(new int[3]{0,1,2});
IndexedLineSet44->setColorPerVertex(False);
IndexedLineSet44->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
CCoordinate* Coordinate45 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate45->setPoint(new float[12]{0,0,0,1,0,0,0,1,0,0,0,1});
IndexedLineSet44->setCoord(*Coordinate45);

CColor* Color46 = (CColor *)(m_pScene.createNode("Color"));
Color46->setColor(new float[9]{1,0,0,0,0.6,0,0,0,1});
IndexedLineSet44->setColor(*Color46);

Shape43->setGeometry(IndexedLineSet44);

Transform41->addChild(*Shape43);

CShape* Shape47 = (CShape *)(m_pScene.createNode("Shape"));
Shape47->setDEF("OldMan_Shape");
CAppearance* Appearance48 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance48->setDEF("OldMan_skin_Appearance");
CMaterial* Material49 = (CMaterial *)(m_pScene.createNode("Material"));
Material49->setDEF("OldMan_skin_Material");
Material49->setDiffuseColor(new float[3]{0.3,0.3,0.6});
Material49->setEmissiveColor(new float[3]{0.3,0.3,0.6});
Appearance48->setMaterial(*Material49);

CImageTexture* ImageTexture50 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture50->setDEF("OldManSkinImageTexture");
ImageTexture50->setUrl(new CString[2]{"OldManBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png"}, 2);
Appearance48->setTexture(*ImageTexture50);

CTextureTransform* TextureTransform51 = (CTextureTransform *)(m_pScene.createNode("TextureTransform"));
TextureTransform51->setDEF("KickTextureTransform");
Appearance48->setTextureTransform(*TextureTransform51);

Shape47->setAppearance(*Appearance48);

CIndexedFaceSet* IndexedFaceSet52 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet52->setDEF("OldMan_skin_IndexedFaceSet");
Shape47->setGeometry(IndexedFaceSet52);

Transform41->setSkin(*Shape47);

HAnimSite40->addChildren(*Transform41);

HAnimSegment39->addChildren(*HAnimSite40);

HAnimJoint38->addChildren(*HAnimSegment39);

CHAnimJoint* HAnimJoint53 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint53->setName("sacroiliac");
HAnimJoint53->setDEF("OldMan_sacroiliac");
HAnimJoint53->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint53->setLlimit(new float[3]{0,0,0}, 3);
//TODO center='x 0.952 z'
//High hip
CHAnimJoint* HAnimJoint54 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint54->setName("l_hip");
HAnimJoint54->setDEF("OldMan_l_hip");
HAnimJoint54->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint54->setLlimit(new float[3]{0,0,0}, 3);
//TODO center='x 0.879 z' Low hip
CHAnimJoint* HAnimJoint55 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint55->setName("l_knee");
HAnimJoint55->setDEF("OldMan_l_knee");
HAnimJoint55->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint55->setLlimit(new float[3]{0,0,0}, 3);
//center='x 0.461 z'
CHAnimJoint* HAnimJoint56 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint56->setName("l_talocrural");
HAnimJoint56->setDEF("OldMan_l_talocrural");
HAnimJoint56->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint56->setLlimit(new float[3]{0,0,0}, 3);
//Ankle
CHAnimJoint* HAnimJoint57 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint57->setName("l_tarsometatarsal_2");
HAnimJoint57->setDEF("Joe_l_tarsometatarsal_2");
HAnimJoint57->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint57->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint58 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint58->setName("l_metatarsophalangeal_2");
HAnimJoint58->setDEF("Joe_l_metatarsophalangeal_2");
HAnimJoint58->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint58->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint59 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint59->setName("l_tarsal_distal_interphalangeal_2");
HAnimJoint59->setDEF("Joe_l_tarsal_distal_interphalangeal_2");
HAnimJoint59->setCenter(new float[3]{0.115,0.02,0.122});
HAnimJoint59->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint59->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint58->addChildren(*HAnimJoint59);

HAnimJoint57->addChildren(*HAnimJoint58);

HAnimJoint56->addChildren(*HAnimJoint57);

HAnimJoint55->addChildren(*HAnimJoint56);

HAnimJoint54->addChildren(*HAnimJoint55);

CHAnimJoint* HAnimJoint60 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint60->setName("l_hip");
HAnimJoint60->setDEF("OldMan_r_hip");
HAnimJoint60->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint60->setLlimit(new float[3]{0,0,0}, 3);
//Low hip
CHAnimJoint* HAnimJoint61 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint61->setName("l_knee");
HAnimJoint61->setDEF("OldMan_r_knee");
HAnimJoint61->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint61->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint60->addChildren(*HAnimJoint61);

CHAnimJoint* HAnimJoint62 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint62->setName("l_talocrural");
HAnimJoint62->setDEF("OldMan_r_talocrural");
HAnimJoint62->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint62->setLlimit(new float[3]{0,0,0}, 3);
//Ankle
CHAnimJoint* HAnimJoint63 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint63->setName("r_tarsometatarsal_2");
HAnimJoint63->setDEF("Joe_r_tarsometatarsal_2");
HAnimJoint63->setCenter(new float[3]{-0.1,0.015,-0.01});
HAnimJoint63->setSkinCoordIndex(new int[3]{374,375,376});
HAnimJoint63->setSkinCoordWeight(new float[3]{1,1,1}, 3);
HAnimJoint63->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint63->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint64 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint64->setName("r_metatarsophalangeal_2");
HAnimJoint64->setDEF("Joe_r_metatarsophalangeal_2");
HAnimJoint64->setCenter(new float[3]{-0.115,0.037,0.09});
HAnimJoint64->setSkinCoordIndex(new int[4]{377,378,379,380});
HAnimJoint64->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint64->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint64->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint65 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint65->setName("r_tarsal_distal_interphalangeal_2");
HAnimJoint65->setDEF("Joe_r_tarsal_distal_interphalangeal_2");
HAnimJoint65->setCenter(new float[3]{-0.1,0.01,0.14});
HAnimJoint65->setSkinCoordIndex(new int[9]{381,382,383,384,385,386,387,388,389});
HAnimJoint65->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint65->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint65->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint64->addChildren(*HAnimJoint65);

HAnimJoint63->addChildren(*HAnimJoint64);

HAnimJoint62->addChildren(*HAnimJoint63);

HAnimJoint60->addChildren(*HAnimJoint62);

HAnimJoint54->addChildren(*HAnimJoint60);

HAnimJoint53->addChildren(*HAnimJoint54);

CHAnimJoint* HAnimJoint66 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint66->setName("vl5");
HAnimJoint66->setDEF("OldMan_vl5");
HAnimJoint66->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint66->setLlimit(new float[3]{0,0,0}, 3);
//Abdomen
CHAnimJoint* HAnimJoint67 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint67->setName("vl4");
HAnimJoint67->setDEF("MeshName_vl4");
HAnimJoint67->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint67->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint68 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint68->setName("vl3");
HAnimJoint68->setDEF("OldMan_vl3");
HAnimJoint68->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint68->setLlimit(new float[3]{0,0,0}, 3);
//center='x 1.098 z'
//Low=' ist='
CHAnimJoint* HAnimJoint69 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint69->setName("vl2");
HAnimJoint69->setDEF("MeshName_vl2");
HAnimJoint69->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint69->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint70 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint70->setName("vl1");
HAnimJoint70->setDEF("OldMan_vl1");
HAnimJoint70->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint70->setLlimit(new float[3]{0,0,0}, 3);
//center='x 1.171 z'
//High waist
CHAnimJoint* HAnimJoint71 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint71->setName("vt12");
HAnimJoint71->setDEF("MeshName_vt12");
HAnimJoint71->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint71->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint72 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint72->setName("vt11");
HAnimJoint72->setDEF("OldMan_vt11");
HAnimJoint72->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint72->setLlimit(new float[3]{0,0,0}, 3);
//Ribcage='
CHAnimJoint* HAnimJoint73 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint73->setName("vt10");
HAnimJoint73->setDEF("MeshName_vt10");
HAnimJoint73->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint73->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint74 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint74->setName("vt9");
HAnimJoint74->setDEF("MeshName_vt9");
HAnimJoint74->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint74->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint75 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint75->setName("vt8");
HAnimJoint75->setDEF("MeshName_vt8");
HAnimJoint75->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint75->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint76 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint76->setName("vt7");
HAnimJoint76->setDEF("OldMan_vt7");
HAnimJoint76->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint76->setLlimit(new float[3]{0,0,0}, 3);
//Sternum='
CHAnimJoint* HAnimJoint77 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint77->setName("vt6");
HAnimJoint77->setDEF("MeshName_vt6");
HAnimJoint77->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint77->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint78 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint78->setName("vt5");
HAnimJoint78->setDEF("MeshName_vt5");
HAnimJoint78->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint78->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint79 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint79->setName("vt4");
HAnimJoint79->setDEF("OldMan_vt4");
HAnimJoint79->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint79->setLlimit(new float[3]{0,0,0}, 3);
//Chest
CHAnimJoint* HAnimJoint80 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint80->setName("vt3");
HAnimJoint80->setDEF("MeshName_vt3");
HAnimJoint80->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint80->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint81 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint81->setName("vt2");
HAnimJoint81->setDEF("OldMan_vt2");
HAnimJoint81->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint81->setLlimit(new float[3]{0,0,0}, 3);
//High Chest
CHAnimJoint* HAnimJoint82 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint82->setName("vt1");
HAnimJoint82->setDEF("MeshName_vt1");
HAnimJoint82->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint82->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint83 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint83->setName("vc7");
HAnimJoint83->setDEF("OldMan_vc7");
HAnimJoint83->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint83->setLlimit(new float[3]{0,0,0}, 3);
//Low neck
CHAnimJoint* HAnimJoint84 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint84->setName("vc6");
HAnimJoint84->setDEF("MeshName_vc6");
HAnimJoint84->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint84->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint85 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint85->setName("vc5");
HAnimJoint85->setDEF("MeshName_vc5");
HAnimJoint85->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint85->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint86 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint86->setName("vc4");
HAnimJoint86->setDEF("OldMan_vc4");
HAnimJoint86->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint86->setLlimit(new float[3]{0,0,0}, 3);
//Mid=' ck='
CHAnimJoint* HAnimJoint87 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint87->setName("vc3");
HAnimJoint87->setDEF("MeshName_vc3");
HAnimJoint87->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint87->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint88 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint88->setName("vc2");
HAnimJoint88->setDEF("MeshName_vc2");
HAnimJoint88->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint88->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint89 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint89->setName("vc1");
HAnimJoint89->setDEF("OldMan_vc1");
HAnimJoint89->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint89->setLlimit(new float[3]{0,0,0}, 3);
//High=' ck='
CHAnimJoint* HAnimJoint90 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint90->setName("skullbase");
HAnimJoint90->setDEF("OldMan_skullbase");
HAnimJoint90->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint90->setLlimit(new float[3]{0,0,0}, 3);
CHAnimDisplacer* HAnimDisplacer91 = (CHAnimDisplacer *)(m_pScene.createNode("HAnimDisplacer"));
HAnimDisplacer91->setName("skull_tip_raiser_action");
HAnimDisplacer91->setDEF("Joe_skull_tip_raiser_action");
HAnimDisplacer91->setCoordIndex(new int[10]{0,1,2,3,4,5,6,7,8,9});
HAnimDisplacer91->setDisplacements(new float[30]{0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15});
HAnimJoint90->addDisplacers(*HAnimDisplacer91);

CHAnimJoint* HAnimJoint92 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint92->setName("l_eyelid_joint");
HAnimJoint92->setDEF("OldMan_l_eyelid_joint");
HAnimJoint92->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint92->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint90->addChildren(*HAnimJoint92);

CHAnimJoint* HAnimJoint93 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint93->setName("l_eyeball_joint");
HAnimJoint93->setDEF("OldMan_l_eyeball_joint");
HAnimJoint93->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint93->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint90->addChildren(*HAnimJoint93);

CHAnimJoint* HAnimJoint94 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint94->setName("l_eyebrow_joint");
HAnimJoint94->setDEF("OldMan_l_eyebrow_joint");
HAnimJoint94->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint94->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint90->addChildren(*HAnimJoint94);

CHAnimJoint* HAnimJoint95 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint95->setName("r_eyelid_joint");
HAnimJoint95->setDEF("OldMan_r_eyelid_joint");
HAnimJoint95->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint95->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint90->addChildren(*HAnimJoint95);

CHAnimJoint* HAnimJoint96 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint96->setName("r_eyeball_joint");
HAnimJoint96->setDEF("OldMan_r_eyeball_joint");
HAnimJoint96->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint96->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint90->addChildren(*HAnimJoint96);

CHAnimJoint* HAnimJoint97 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint97->setName("r_eyebrow_joint");
HAnimJoint97->setDEF("OldMan_r_eyebrow_joint");
HAnimJoint97->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint97->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint90->addChildren(*HAnimJoint97);

CHAnimJoint* HAnimJoint98 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint98->setName("temporomandibular");
HAnimJoint98->setDEF("OldMan_temporomandibular");
HAnimJoint98->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint98->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint90->addChildren(*HAnimJoint98);

HAnimJoint89->addChildren(*HAnimJoint90);

HAnimJoint88->addChildren(*HAnimJoint89);

HAnimJoint87->addChildren(*HAnimJoint88);

HAnimJoint86->addChildren(*HAnimJoint87);

HAnimJoint85->addChildren(*HAnimJoint86);

HAnimJoint84->addChildren(*HAnimJoint85);

HAnimJoint83->addChildren(*HAnimJoint84);

HAnimJoint82->addChildren(*HAnimJoint83);

CHAnimJoint* HAnimJoint99 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint99->setDEF("OldMan_l_acromioclavicular");
HAnimJoint99->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint99->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint100 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint100->setName("l_acromioclavicular");
HAnimJoint100->setDEF("OldMan_l_sternoclavicular");
HAnimJoint100->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint100->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint101 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint101->setName("l_shoulder");
HAnimJoint101->setDEF("OldMan_l_shoulder");
HAnimJoint101->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint101->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint102 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint102->setName("l_elbow");
HAnimJoint102->setDEF("OldMan_l_elbow");
HAnimJoint102->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint102->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint103 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint103->setName("l_radiocarpal");
HAnimJoint103->setDEF("OldMan_l_radiocarpal");
HAnimJoint103->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint103->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint104 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint104->setName("l_carpometacarpal_1");
HAnimJoint104->setDEF("OldMan_l_carpometacarpal_1");
HAnimJoint104->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint104->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint105 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint105->setName("l_metacarpophalangeal_1");
HAnimJoint105->setDEF("OldMan_l_metacarpophalangeal_1");
HAnimJoint105->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint105->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint106 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint106->setName("l_carpal_interphalangeal_1");
HAnimJoint106->setDEF("OldMan_l_carpal_interphalangeal_1");
HAnimJoint106->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint106->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint105->addChildren(*HAnimJoint106);

HAnimJoint104->addChildren(*HAnimJoint105);

CHAnimJoint* HAnimJoint107 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint107->setName("l_carpometacarpal_2");
HAnimJoint107->setDEF("OldMan_l_carpometacarpal_2");
HAnimJoint107->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint107->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint108 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint108->setName("l_metacarpophalangeal_2");
HAnimJoint108->setDEF("OldMan_l_metacarpophalangeal_2");
HAnimJoint108->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint108->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint109 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint109->setName("l_carpal_proximal_interphalangeal_2");
HAnimJoint109->setDEF("OldMan_l_carpal_proximal_interphalangeal_2");
HAnimJoint109->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint109->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint110 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint110->setName("l_carpal_distal_interphalangeal_2");
HAnimJoint110->setDEF("OldMan_l_carpal_distal_interphalangeal_2");
HAnimJoint110->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint110->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint109->addChildren(*HAnimJoint110);

HAnimJoint108->addChildren(*HAnimJoint109);

HAnimJoint107->addChildren(*HAnimJoint108);

CHAnimJoint* HAnimJoint111 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint111->setName("l_carpometacarpal_3");
HAnimJoint111->setDEF("OldMan_l_carpometacarpal_3");
HAnimJoint111->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint111->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint112 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint112->setName("l_metacarpophalangeal_3");
HAnimJoint112->setDEF("OldMan_l_metacarpophalangeal_3");
HAnimJoint112->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint112->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint113 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint113->setName("l_carpal_proximal_interphalangeal_3");
HAnimJoint113->setDEF("OldMan_l_carpal_proximal_interphalangeal_3");
HAnimJoint113->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint113->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint114 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint114->setName("l_carpal_distal_interphalangeal_3");
HAnimJoint114->setDEF("OldMan_l_carpal_distal_interphalangeal_3");
HAnimJoint114->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint114->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint113->addChildren(*HAnimJoint114);

HAnimJoint112->addChildren(*HAnimJoint113);

HAnimJoint111->addChildren(*HAnimJoint112);

CHAnimJoint* HAnimJoint115 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint115->setName("l_carpometacarpal_4");
HAnimJoint115->setDEF("OldMan_l_carpometacarpal_4");
HAnimJoint115->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint115->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint116 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint116->setName("l_metacarpophalangeal_4");
HAnimJoint116->setDEF("OldMan_l_metacarpophalangeal_4");
HAnimJoint116->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint116->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint117 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint117->setName("l_carpal_proximal_interphalangeal_4");
HAnimJoint117->setDEF("OldMan_l_carpal_proximal_interphalangeal_4");
HAnimJoint117->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint117->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint118 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint118->setName("l_carpal_distal_interphalangeal_4");
HAnimJoint118->setDEF("OldMan_l_carpal_distal_interphalangeal_4");
HAnimJoint118->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint118->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint117->addChildren(*HAnimJoint118);

HAnimJoint116->addChildren(*HAnimJoint117);

HAnimJoint115->addChildren(*HAnimJoint116);

CHAnimJoint* HAnimJoint119 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint119->setName("l_carpometacarpal_5");
HAnimJoint119->setDEF("OldMan_l_carpometacarpal_5");
HAnimJoint119->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint119->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint120 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint120->setName("l_metacarpophalangeal_5");
HAnimJoint120->setDEF("OldMan_l_metacarpophalangeal_5");
HAnimJoint120->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint120->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint121 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint121->setName("l_carpal_proximal_interphalangeal_5");
HAnimJoint121->setDEF("OldMan_l_carpal_proximal_interphalangeal_5");
HAnimJoint121->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint121->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint122 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint122->setName("l_carpal_distal_interphalangeal_5");
HAnimJoint122->setDEF("OldMan_l_carpal_distal_interphalangeal_5");
HAnimJoint122->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint122->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint121->addChildren(*HAnimJoint122);

HAnimJoint120->addChildren(*HAnimJoint121);

HAnimJoint119->addChildren(*HAnimJoint120);

HAnimJoint115->addChildren(*HAnimJoint119);

HAnimJoint111->addChildren(*HAnimJoint115);

HAnimJoint107->addChildren(*HAnimJoint111);

HAnimJoint104->addChildren(*HAnimJoint107);

HAnimJoint103->addChildren(*HAnimJoint104);

CHAnimJoint* HAnimJoint123 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint123->setName("r_sternoclavicular");
HAnimJoint123->setDEF("OldMan_r_sternoclavicular");
HAnimJoint123->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint123->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint124 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint124->setName("r_acromioclavicular");
HAnimJoint124->setDEF("OldMan_r_acromioclavicular");
HAnimJoint124->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint124->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint125 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint125->setName("r_shoulder");
HAnimJoint125->setDEF("OldMan_r_shoulder");
HAnimJoint125->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint125->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint126 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint126->setName("r_elbow");
HAnimJoint126->setDEF("OldMan_r_elbow");
HAnimJoint126->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint126->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint127 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint127->setName("r_radiocarpal");
HAnimJoint127->setDEF("OldMan_r_radiocarpal");
HAnimJoint127->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint127->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint128 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint128->setName("r_carpometacarpal_1");
HAnimJoint128->setDEF("OldMan_r_carpometacarpal_1");
HAnimJoint128->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint128->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint129 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint129->setName("r_metacarpophalangeal_1");
HAnimJoint129->setDEF("OldMan_r_metacarpophalangeal_1");
HAnimJoint129->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint129->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint130 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint130->setName("r_carpal_interphalangeal_1");
HAnimJoint130->setDEF("OldMan_r_carpal_interphalangeal_1");
HAnimJoint130->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint130->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint129->addChildren(*HAnimJoint130);

HAnimJoint128->addChildren(*HAnimJoint129);

CHAnimJoint* HAnimJoint131 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint131->setName("r_carpometacarpal_2");
HAnimJoint131->setDEF("OldMan_r_carpometacarpal_2");
HAnimJoint131->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint131->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint132 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint132->setName("r_metacarpophalangeal_2");
HAnimJoint132->setDEF("OldMan_r_metacarpophalangeal_2");
HAnimJoint132->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint132->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint133 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint133->setName("r_carpal_proximal_interphalangeal_2");
HAnimJoint133->setDEF("OldMan_r_carpal_proximal_interphalangeal_2");
HAnimJoint133->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint133->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint134 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint134->setName("r_carpal_distal_interphalangeal_2");
HAnimJoint134->setDEF("OldMan_r_carpal_distal_interphalangeal_2");
HAnimJoint134->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint134->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint133->addChildren(*HAnimJoint134);

HAnimJoint132->addChildren(*HAnimJoint133);

HAnimJoint131->addChildren(*HAnimJoint132);

CHAnimJoint* HAnimJoint135 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint135->setName("r_carpometacarpal_3");
HAnimJoint135->setDEF("OldMan_r_carpometacarpal_3");
HAnimJoint135->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint135->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint136 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint136->setName("r_metacarpophalangeal_3");
HAnimJoint136->setDEF("OldMan_r_metacarpophalangeal_3");
HAnimJoint136->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint136->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint137 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint137->setName("r_carpal_proximal_interphalangeal_3");
HAnimJoint137->setDEF("OldMan_r_carpal_proximal_interphalangeal_3");
HAnimJoint137->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint137->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint138 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint138->setName("r_carpal_distal_interphalangeal_3");
HAnimJoint138->setDEF("OldMan_r_carpal_distal_interphalangeal_3");
HAnimJoint138->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint138->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint137->addChildren(*HAnimJoint138);

HAnimJoint136->addChildren(*HAnimJoint137);

HAnimJoint135->addChildren(*HAnimJoint136);

CHAnimJoint* HAnimJoint139 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint139->setName("r_carpometacarpal_4");
HAnimJoint139->setDEF("OldMan_r_carpometacarpal_4");
HAnimJoint139->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint139->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint140 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint140->setName("r_metacarpophalangeal_4");
HAnimJoint140->setDEF("OldMan_r_metacarpophalangeal_4");
HAnimJoint140->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint140->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint141 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint141->setName("r_carpal_proximal_interphalangeal_4");
HAnimJoint141->setDEF("OldMan_r_carpal_proximal_interphalangeal_4");
HAnimJoint141->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint141->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint142 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint142->setName("r_carpal_distal_interphalangeal_4");
HAnimJoint142->setDEF("OldMan_r_carpal_distal_interphalangeal_4");
HAnimJoint142->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint142->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint141->addChildren(*HAnimJoint142);

HAnimJoint140->addChildren(*HAnimJoint141);

HAnimJoint139->addChildren(*HAnimJoint140);

CHAnimJoint* HAnimJoint143 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint143->setName("r_carpometacarpal_5");
HAnimJoint143->setDEF("OldMan_r_carpometacarpal_5");
HAnimJoint143->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint143->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint144 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint144->setName("r_metacarpophalangeal_5");
HAnimJoint144->setDEF("OldMan_r_metacarpophalangeal_5");
HAnimJoint144->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint144->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint145 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint145->setName("r_carpal_proximal_interphalangeal_5");
HAnimJoint145->setDEF("OldMan_r_carpal_proximal_interphalangeal_5");
HAnimJoint145->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint145->setLlimit(new float[3]{0,0,0}, 3);
CHAnimJoint* HAnimJoint146 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint146->setName("r_carpal_distal_interphalangeal_5");
HAnimJoint146->setDEF("OldMan_r_carpal_distal_interphalangeal_5");
HAnimJoint146->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint146->setLlimit(new float[3]{0,0,0}, 3);
HAnimJoint145->addChildren(*HAnimJoint146);

HAnimJoint144->addChildren(*HAnimJoint145);

HAnimJoint143->addChildren(*HAnimJoint144);

HAnimJoint139->addChildren(*HAnimJoint143);

HAnimJoint135->addChildren(*HAnimJoint139);

HAnimJoint131->addChildren(*HAnimJoint135);

HAnimJoint128->addChildren(*HAnimJoint131);

HAnimJoint127->addChildren(*HAnimJoint128);

HAnimJoint126->addChildren(*HAnimJoint127);

HAnimJoint125->addChildren(*HAnimJoint126);

HAnimJoint124->addChildren(*HAnimJoint125);

HAnimJoint123->addChildren(*HAnimJoint124);

HAnimJoint103->addChildren(*HAnimJoint123);

HAnimJoint102->addChildren(*HAnimJoint103);

HAnimJoint101->addChildren(*HAnimJoint102);

HAnimJoint100->addChildren(*HAnimJoint101);

HAnimJoint99->addChildren(*HAnimJoint100);

HAnimJoint82->addChildren(*HAnimJoint99);

HAnimJoint81->addChildren(*HAnimJoint82);

HAnimJoint80->addChildren(*HAnimJoint81);

HAnimJoint79->addChildren(*HAnimJoint80);

HAnimJoint78->addChildren(*HAnimJoint79);

HAnimJoint77->addChildren(*HAnimJoint78);

HAnimJoint76->addChildren(*HAnimJoint77);

HAnimJoint75->addChildren(*HAnimJoint76);

HAnimJoint74->addChildren(*HAnimJoint75);

HAnimJoint73->addChildren(*HAnimJoint74);

HAnimJoint72->addChildren(*HAnimJoint73);

HAnimJoint71->addChildren(*HAnimJoint72);

HAnimJoint70->addChildren(*HAnimJoint71);

HAnimJoint69->addChildren(*HAnimJoint70);

HAnimJoint68->addChildren(*HAnimJoint69);

HAnimJoint67->addChildren(*HAnimJoint68);

HAnimJoint66->addChildren(*HAnimJoint67);

HAnimJoint53->addChildren(*HAnimJoint66);

HAnimJoint38->addChildren(*HAnimJoint53);

HAnimHumanoid35->setSkeleton(*HAnimJoint38);

Group34->addChildren(*HAnimHumanoid35);

group->addChildren(*Group34);

X3D0->setScene(*Scene13);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
