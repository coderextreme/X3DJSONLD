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
meta3->setContent("Tue, 05 Jun 2018 02:21:56 GMT");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Holger Seelig");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("generator");
meta5->setContent("Titania V4.3.0, http://titania.create3000.de");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("identifier");
meta6->setContent("file:///home/holger/Projekte/Library/Tests/Components/Lighting/PointLight2.x3d");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("Wed, 06 Jun 2018 08:47:37 GMT");
head1->addMeta(*meta7);

X3D0->setHead(*head1);

CScene* Scene8 = new CScene();
CWorldInfo* WorldInfo9 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
CMetadataSet* MetadataSet10 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet10->setName("Titania");
MetadataSet10->setDEF("Titania");
MetadataSet10->setReference("http://titania.create3000.de");
CMetadataSet* MetadataSet11 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet11->setName("AngleGrid");
MetadataSet11->setDEF("AngleGrid");
MetadataSet11->setReference("http://titania.create3000.de");
CMetadataBoolean* MetadataBoolean12 = (CMetadataBoolean *)(m_pScene.createNode("MetadataBoolean"));
MetadataBoolean12->setName("enabled");
MetadataBoolean12->setDEF("enabled");
MetadataBoolean12->setReference("http://titania.create3000.de");
MetadataBoolean12->setValue(new boolean[1]{False});
MetadataSet11->setValue(*MetadataBoolean12);

MetadataSet10->setValue(*MetadataSet11);

CMetadataSet* MetadataSet13 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet13->setName("Grid");
MetadataSet13->setDEF("Grid");
MetadataSet13->setReference("http://titania.create3000.de");
CMetadataBoolean* MetadataBoolean14 = (CMetadataBoolean *)(m_pScene.createNode("MetadataBoolean"));
MetadataBoolean14->setName("enabled");
MetadataBoolean14->setDEF("enabled_1");
MetadataBoolean14->setReference("http://titania.create3000.de");
MetadataBoolean14->setValue(new boolean[1]{True});
MetadataSet13->setValue(*MetadataBoolean14);

CMetadataInteger* MetadataInteger15 = (CMetadataInteger *)(m_pScene.createNode("MetadataInteger"));
MetadataInteger15->setName("dimension");
MetadataInteger15->setDEF("dimension");
MetadataInteger15->setReference("http://titania.create3000.de");
MetadataInteger15->setValue(new int[3]{10,20,10});
MetadataSet13->addValue(*MetadataInteger15);

MetadataSet10->addValue(*MetadataSet13);

CMetadataSet* MetadataSet16 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet16->setName("Selection");
MetadataSet16->setDEF("Selection");
MetadataSet16->setReference("http://titania.create3000.de");
CMetadataBoolean* MetadataBoolean17 = (CMetadataBoolean *)(m_pScene.createNode("MetadataBoolean"));
MetadataBoolean17->setName("selectGeometry");
MetadataBoolean17->setDEF("selectGeometry");
MetadataBoolean17->setReference("http://titania.create3000.de");
MetadataBoolean17->setValue(new boolean[1]{False});
MetadataSet16->setValue(*MetadataBoolean17);

CMetadataSet* MetadataSet18 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet18->setName("nodes");
MetadataSet18->setDEF("nodes");
MetadataSet18->setReference("http://titania.create3000.de");
CPointLight* PointLight19 = (CPointLight *)(m_pScene.createNode("PointLight"));
PointLight19->setDEF("_2");
PointLight19->setGlobal(False);
PointLight19->setLocation(new float[3]{0,5,0});
PointLight19->setShadowMapSize("2048");
MetadataSet18->setPointLight(*PointLight19);

MetadataSet16->addValue(*MetadataSet18);

MetadataSet10->addValue(*MetadataSet16);

CMetadataSet* MetadataSet20 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet20->setName("BrowserPanel");
MetadataSet20->setDEF("BrowserPanel");
MetadataSet20->setReference("http://titania.create3000.de");
CMetadataInteger* MetadataInteger21 = (CMetadataInteger *)(m_pScene.createNode("MetadataInteger"));
MetadataInteger21->setName("layerNumber");
MetadataInteger21->setDEF("layerNumber");
MetadataInteger21->setReference("http://titania.create3000.de");
MetadataInteger21->setValue(new int[8]{-1,0,0,0,0,-1,-1,-1});
MetadataSet20->setValue(*MetadataInteger21);

CMetadataString* MetadataString22 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString22->setName("type");
MetadataString22->setDEF("type_3");
MetadataString22->setReference("http://titania.create3000.de");
MetadataString22->setValue(new CString[4]{", ","RIGHT_VIEW, ","MAIN_VIEW, ","PERSPECTIVE_VIEWFRONT_VIEW"}, 4);
MetadataSet20->addValue(*MetadataString22);

CMetadataSet* MetadataSet23 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet23->setName("viewpoints");
MetadataSet23->setDEF("viewpoints");
MetadataSet23->setReference("http://titania.create3000.de");
CMetadataSet* MetadataSet24 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet24->setName("PerspectiveViewpoint");
MetadataSet24->setDEF("PerspectiveViewpoint");
MetadataSet24->setReference("http://titania.create3000.de");
CMetadataDouble* MetadataDouble25 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble25->setName("position");
MetadataDouble25->setDEF("position_4");
MetadataDouble25->setReference("http://titania.create3000.de");
MetadataDouble25->setValue(new double[3]{5.87788534164429,6.46984958648682,13.8524446487427});
MetadataSet24->setValue(*MetadataDouble25);

CMetadataDouble* MetadataDouble26 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble26->setName("orientation");
MetadataDouble26->setDEF("orientation_5");
MetadataDouble26->setReference("http://titania.create3000.de");
MetadataDouble26->setValue(new double[4]{-0.704047462871212,0.695566762376517,0.143192350010952,0.568941727555854});
MetadataSet24->addValue(*MetadataDouble26);

CMetadataDouble* MetadataDouble27 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble27->setName("centerOfRotation");
MetadataDouble27->setDEF("centerOfRotation_6");
MetadataDouble27->setReference("http://titania.create3000.de");
MetadataDouble27->setValue(new double[3]{0,0,0});
MetadataSet24->addValue(*MetadataDouble27);

CMetadataDouble* MetadataDouble28 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble28->setName("fieldOfViewScale");
MetadataDouble28->setDEF("fieldOfViewScale");
MetadataDouble28->setReference("http://titania.create3000.de");
MetadataDouble28->setValue(new double[1]{1});
MetadataSet24->addValue(*MetadataDouble28);

MetadataSet23->setValue(*MetadataSet24);

CMetadataSet* MetadataSet29 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet29->setName("TopViewpoint");
MetadataSet29->setDEF("TopViewpoint");
MetadataSet29->setReference("http://titania.create3000.de");
CMetadataDouble* MetadataDouble30 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble30->setName("position");
MetadataDouble30->setDEF("position_7");
MetadataDouble30->setReference("http://titania.create3000.de");
MetadataDouble30->setValue(new double[3]{-5.9857227487932,10.8662109375,0.18038974973888});
MetadataSet29->setValue(*MetadataDouble30);

CMetadataDouble* MetadataDouble31 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble31->setName("orientation");
MetadataDouble31->setDEF("orientation_8");
MetadataDouble31->setReference("http://titania.create3000.de");
MetadataDouble31->setValue(new double[4]{1,0,0,4.71238898038469});
MetadataSet29->addValue(*MetadataDouble31);

CMetadataDouble* MetadataDouble32 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble32->setName("centerOfRotation");
MetadataDouble32->setDEF("centerOfRotation_9");
MetadataDouble32->setReference("http://titania.create3000.de");
MetadataDouble32->setValue(new double[3]{-5.9857227487932,0,0.18038974973888});
MetadataSet29->addValue(*MetadataDouble32);

CMetadataDouble* MetadataDouble33 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble33->setName("fieldOfViewScale");
MetadataDouble33->setDEF("fieldOfViewScale_10");
MetadataDouble33->setReference("http://titania.create3000.de");
MetadataDouble33->setValue(new double[1]{2.6418009235867});
MetadataSet29->addValue(*MetadataDouble33);

MetadataSet23->addValue(*MetadataSet29);

CMetadataSet* MetadataSet34 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet34->setName("FrontViewpoint");
MetadataSet34->setDEF("FrontViewpoint");
MetadataSet34->setReference("http://titania.create3000.de");
CMetadataDouble* MetadataDouble35 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble35->setName("position");
MetadataDouble35->setDEF("position_11");
MetadataDouble35->setReference("http://titania.create3000.de");
MetadataDouble35->setValue(new double[3]{-3.76314300822868,3.55015251499291,10000});
MetadataSet34->setValue(*MetadataDouble35);

CMetadataDouble* MetadataDouble36 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble36->setName("orientation");
MetadataDouble36->setDEF("orientation_12");
MetadataDouble36->setReference("http://titania.create3000.de");
MetadataDouble36->setValue(new double[4]{0,0,1,0});
MetadataSet34->addValue(*MetadataDouble36);

CMetadataDouble* MetadataDouble37 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble37->setName("centerOfRotation");
MetadataDouble37->setDEF("centerOfRotation_13");
MetadataDouble37->setReference("http://titania.create3000.de");
MetadataDouble37->setValue(new double[3]{-3.76314300822868,3.55015251499291,0});
MetadataSet34->addValue(*MetadataDouble37);

CMetadataDouble* MetadataDouble38 = (CMetadataDouble *)(m_pScene.createNode("MetadataDouble"));
MetadataDouble38->setName("fieldOfViewScale");
MetadataDouble38->setDEF("fieldOfViewScale_14");
MetadataDouble38->setReference("http://titania.create3000.de");
MetadataDouble38->setValue(new double[1]{2.01741078562512});
MetadataSet34->addValue(*MetadataDouble38);

MetadataSet23->addValue(*MetadataSet34);

MetadataSet20->addValue(*MetadataSet23);

MetadataSet10->addValue(*MetadataSet20);

CMetadataSet* MetadataSet39 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet39->setName("Page");
MetadataSet39->setDEF("Page");
MetadataSet39->setReference("http://titania.create3000.de");
CMetadataInteger* MetadataInteger40 = (CMetadataInteger *)(m_pScene.createNode("MetadataInteger"));
MetadataInteger40->setName("activeView");
MetadataInteger40->setDEF("activeView");
MetadataInteger40->setReference("http://titania.create3000.de");
MetadataInteger40->setValue(new int[1]{3});
MetadataSet39->setValue(*MetadataInteger40);

CMetadataInteger* MetadataInteger41 = (CMetadataInteger *)(m_pScene.createNode("MetadataInteger"));
MetadataInteger41->setName("multiView");
MetadataInteger41->setDEF("multiView");
MetadataInteger41->setReference("http://titania.create3000.de");
MetadataInteger41->setValue(new int[1]{1});
MetadataSet39->addValue(*MetadataInteger41);

MetadataSet10->addValue(*MetadataSet39);

WorldInfo9->setMetadata(*MetadataSet10);

group->addChildren(*WorldInfo9);

CNavigationInfo* NavigationInfo42 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo42->setHeadlight(False);
group->addChildren(*NavigationInfo42);

CViewpoint* Viewpoint43 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint43->setDEF("_15");
Viewpoint43->setDescription("Inital View");
Viewpoint43->setPosition(new float[3]{5.1736,10.0496,10.0977});
Viewpoint43->setOrientation(new float[4]{-0.826747553796003,0.526024485457868,0.19946609484098,0.860063252825464});
Viewpoint43->setCenterOfRotation(new float[3]{1.22569e-7,-1.49027e-8,-4.7967e-8});
group->addChildren(*Viewpoint43);

CGroup* Group44 = (CGroup *)(m_pScene.createNode("Group"));
Group44->setDEF("LightButton");
CPlaneSensor* PlaneSensor45 = (CPlaneSensor *)(m_pScene.createNode("PlaneSensor"));
PlaneSensor45->setDEF("_16");
PlaneSensor45->setOffset(new float[3]{0,5,0});
PlaneSensor45->setMaxPosition(new float[2]{0,-1});
Group44->addChildren(*PlaneSensor45);

CTransform* Transform46 = (CTransform *)(m_pScene.createNode("Transform"));
Transform46->setDEF("Sphere");
Transform46->setTranslation(new float[3]{0,5,0});
Transform46->setScale(new float[3]{0.241256,0.241256,0.241256});
CShape* Shape47 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance48 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material49 = (CMaterial *)(m_pScene.createNode("Material"));
Material49->setEmissiveColor(new float[3]{1,1,1});
Appearance48->setMaterial(*Material49);

Shape47->setAppearance(*Appearance48);

CSphere* Sphere50 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape47->setGeometry(Sphere50);

Transform46->addChildren(*Shape47);

Group44->addChildren(*Transform46);

group->addChildren(*Group44);

CGroup* Group51 = (CGroup *)(m_pScene.createNode("Group"));
CPointLight* PointLight52 = (CPointLight *)(m_pScene.createNode("PointLight"));
PointLight52->setUSE("_2");
Group51->addChildren(*PointLight52);

CTransform* Transform53 = (CTransform *)(m_pScene.createNode("Transform"));
Transform53->setDEF("Floor");
Transform53->setTranslation(new float[3]{0,-1,0});
Transform53->setScale(new float[3]{11,1,11});
CShape* Shape54 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance55 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material56 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance55->setMaterial(*Material56);

Shape54->setAppearance(*Appearance55);

CBox* Box57 = (CBox *)(m_pScene.createNode("Box"));
Shape54->setGeometry(Box57);

Transform53->addChildren(*Shape54);

Group51->addChildren(*Transform53);

CTransform* Transform58 = (CTransform *)(m_pScene.createNode("Transform"));
Transform58->setDEF("Box_17");
Transform58->setTranslation(new float[3]{-4,1,0});
CShape* Shape59 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance60 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material61 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance60->setMaterial(*Material61);

Shape59->setAppearance(*Appearance60);

CBox* Box62 = (CBox *)(m_pScene.createNode("Box"));
Shape59->setGeometry(Box62);

Transform58->addChildren(*Shape59);

Group51->addChildren(*Transform58);

CTransform* Transform63 = (CTransform *)(m_pScene.createNode("Transform"));
Transform63->setDEF("Cone");
Transform63->setTranslation(new float[3]{0,1,4});
CShape* Shape64 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance65 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material66 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance65->setMaterial(*Material66);

Shape64->setAppearance(*Appearance65);

CCone* Cone67 = (CCone *)(m_pScene.createNode("Cone"));
Shape64->setGeometry(Cone67);

Transform63->addChildren(*Shape64);

Group51->addChildren(*Transform63);

CTransform* Transform68 = (CTransform *)(m_pScene.createNode("Transform"));
Transform68->setDEF("Cylinder");
Transform68->setTranslation(new float[3]{4,1,0});
CShape* Shape69 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance70 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material71 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance70->setMaterial(*Material71);

Shape69->setAppearance(*Appearance70);

CCylinder* Cylinder72 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Shape69->setGeometry(Cylinder72);

Transform68->addChildren(*Shape69);

Group51->addChildren(*Transform68);

CTransform* Transform73 = (CTransform *)(m_pScene.createNode("Transform"));
Transform73->setDEF("Pyramid");
Transform73->setTranslation(new float[3]{0,1,-4});
CShape* Shape74 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance75 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material76 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance75->setMaterial(*Material76);

Shape74->setAppearance(*Appearance75);

CIndexedFaceSet* IndexedFaceSet77 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet77->setCoordIndex(new int[21]{3,2,1,0,-1,0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1});
CCoordinate* Coordinate78 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate78->setPoint(new float[15]{-1,-1,1,1,-1,1,1,-1,-1,-1,-1,-1,0,1,0});
IndexedFaceSet77->setCoord(*Coordinate78);

Shape74->setGeometry(IndexedFaceSet77);

Transform73->addChildren(*Shape74);

Group51->addChildren(*Transform73);

CTransform* Transform79 = (CTransform *)(m_pScene.createNode("Transform"));
Transform79->setDEF("Ceiling");
Transform79->setTranslation(new float[3]{0,11.001,0});
Transform79->setScale(new float[3]{11,1,11});
CShape* Shape80 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance81 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material82 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance81->setMaterial(*Material82);

Shape80->setAppearance(*Appearance81);

CBox* Box83 = (CBox *)(m_pScene.createNode("Box"));
Shape80->setGeometry(Box83);

Transform79->addChildren(*Shape80);

Group51->addChildren(*Transform79);

CTransform* Transform84 = (CTransform *)(m_pScene.createNode("Transform"));
Transform84->setDEF("Box_18");
Transform84->setTranslation(new float[3]{-4,9,0});
CShape* Shape85 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance86 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material87 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance86->setMaterial(*Material87);

Shape85->setAppearance(*Appearance86);

CBox* Box88 = (CBox *)(m_pScene.createNode("Box"));
Shape85->setGeometry(Box88);

Transform84->addChildren(*Shape85);

Group51->addChildren(*Transform84);

CTransform* Transform89 = (CTransform *)(m_pScene.createNode("Transform"));
Transform89->setDEF("Cone_19");
Transform89->setTranslation(new float[3]{0,9,4});
CShape* Shape90 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance91 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material92 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance91->setMaterial(*Material92);

Shape90->setAppearance(*Appearance91);

CCone* Cone93 = (CCone *)(m_pScene.createNode("Cone"));
Shape90->setGeometry(Cone93);

Transform89->addChildren(*Shape90);

Group51->addChildren(*Transform89);

CTransform* Transform94 = (CTransform *)(m_pScene.createNode("Transform"));
Transform94->setDEF("Cylinder_20");
Transform94->setTranslation(new float[3]{4,9,0});
CShape* Shape95 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance96 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material97 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance96->setMaterial(*Material97);

Shape95->setAppearance(*Appearance96);

CCylinder* Cylinder98 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Shape95->setGeometry(Cylinder98);

Transform94->addChildren(*Shape95);

Group51->addChildren(*Transform94);

CTransform* Transform99 = (CTransform *)(m_pScene.createNode("Transform"));
Transform99->setDEF("Pyramid_21");
Transform99->setTranslation(new float[3]{0,9,-4});
CShape* Shape100 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance101 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material102 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance101->setMaterial(*Material102);

Shape100->setAppearance(*Appearance101);

CIndexedFaceSet* IndexedFaceSet103 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet103->setCoordIndex(new int[21]{3,2,1,0,-1,0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1});
CCoordinate* Coordinate104 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate104->setPoint(new float[15]{-1,-1,1,1,-1,1,1,-1,-1,-1,-1,-1,0,1,0});
IndexedFaceSet103->setCoord(*Coordinate104);

Shape100->setGeometry(IndexedFaceSet103);

Transform99->addChildren(*Shape100);

Group51->addChildren(*Transform99);

group->addChildren(*Group51);

CROUTE* ROUTE105 = new CROUTE();
ROUTE105->setFromNode("_16");
ROUTE105->setFromField("translation_changed");
ROUTE105->setToNode("_2");
ROUTE105->setToField("set_location");
group->addChildren(*ROUTE105);

CROUTE* ROUTE106 = new CROUTE();
ROUTE106->setFromNode("_2");
ROUTE106->setFromField("location_changed");
ROUTE106->setToNode("Sphere");
ROUTE106->setToField("set_translation");
group->addChildren(*ROUTE106);

X3D0->setScene(*Scene8);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
