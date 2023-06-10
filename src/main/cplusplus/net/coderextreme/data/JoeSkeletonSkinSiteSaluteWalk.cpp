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
component2->setName("H-Anim");
component2->setLevel(2);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("JoeSkeletonSkinSaluteSiteWalk.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("Comprehensive example showing skeleton, skin, sites and interpolator animation together.");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("Joe D. Williams");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("9 January 2004");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("translated");
meta7->setContent("4 December 2022");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("modified");
meta8->setContent("27 January 2023");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("warning");
meta9->setContent("Under development, numerous errors and warnings");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("TODO");
meta10->setContent("This is an HAnimV1 loa model, might need to convert to X3D4 to note loa value");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("TODO");
meta11->setContent("Provide feedback to tovrmlx3d converter");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("TODO");
meta12->setContent("HAnimJoint cannot contain X3DChildNode elements, only HAnimJoint HAnimSegmet HAnimSite - improve diagnostics.");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("TODO");
meta13->setContent("ensure name prefix \"Joe_\" applied to all contained DEF values (not name field), perhaps correction automatically applied by X3DTidy");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("reference");
meta14->setContent("JoeSkeletonSkinSaluteSiteWalk.original.x3dv");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("reference");
meta15->setContent("JoeSkeletonSkinSaluteSiteWalk.modified1.x3dv");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("reference");
meta16->setContent("JoeSkeletonSkinSaluteSiteWalk.modified2.x3dv");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("Image");
meta17->setContent("JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("reference");
meta18->setContent("JoeSkeletonSkinSiteSaluteWalk_composite.vsdx");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("Image");
meta19->setContent("JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("Image");
meta20->setContent("JoeSkeletonSkinSiteSaluteWalk_view3dscene.png");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("Image");
meta21->setContent("JoeSkeletonSkinSiteSaluteWalk_X_ITE.png");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("Image");
meta22->setContent("JoeSkeletonSkinSiteSaluteWalk_X3DOM.png");
head1->addMeta(*meta22);

Cmeta* meta23 = new Cmeta();
meta23->setName("Image");
meta23->setContent("JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png");
head1->addMeta(*meta23);

Cmeta* meta24 = new Cmeta();
meta24->setName("Image");
meta24->setContent("JoeSkeletonSkinSiteSaluteWalk_freeWrl.png");
head1->addMeta(*meta24);

Cmeta* meta25 = new Cmeta();
meta25->setName("Image");
meta25->setContent("JoeSkeletonSkinSiteSaluteWalk_Octaga.png");
head1->addMeta(*meta25);

Cmeta* meta26 = new Cmeta();
meta26->setName("Image");
meta26->setContent("JoeSkeletonSkinSiteSaluteWalk_vivaty.png");
head1->addMeta(*meta26);

Cmeta* meta27 = new Cmeta();
meta27->setName("generator");
meta27->setContent("tovrmlx3d, https://castle-engine.io/convert.php");
head1->addMeta(*meta27);

Cmeta* meta28 = new Cmeta();
meta28->setName("reference");
meta28->setContent("https://castle-engine.io/view3dscene.php#section_converting");
head1->addMeta(*meta28);

Cmeta* meta29 = new Cmeta();
meta29->setName("translator");
meta29->setContent("Michalis Kamburelis");
head1->addMeta(*meta29);

Cmeta* meta30 = new Cmeta();
meta30->setName("translator");
meta30->setContent("Don Brutzman");
head1->addMeta(*meta30);

Cmeta* meta31 = new Cmeta();
meta31->setName("translator");
meta31->setContent("Joe D. Williams");
head1->addMeta(*meta31);

Cmeta* meta32 = new Cmeta();
meta32->setName("generator");
meta32->setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta32);

Cmeta* meta33 = new Cmeta();
meta33->setName("identifier");
meta33->setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSaluteSiteWalk.x3d");
head1->addMeta(*meta33);

Cmeta* meta34 = new Cmeta();
meta34->setName("license");
meta34->setContent("../license.html");
head1->addMeta(*meta34);

X3D0->setHead(*head1);

CScene* Scene35 = new CScene();
CWorldInfo* WorldInfo36 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo36->setInfo(new CString[1]{"By Joe for Joe"}, 1);
WorldInfo36->setTitle("HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3");
group->addChildren(*WorldInfo36);

CWorldInfo* WorldInfo37 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo37->setInfo(new CString[1]{"By Joe for Joe"}, 1);
WorldInfo37->setTitle("HAnim V1 LOA3 Skeleton Joint centers Adapted for approximatrion of ManGLoss Site Location Example and ANIM 200x Default Joint Centers, LOA3");
group->addChildren(*WorldInfo37);

CNavigationInfo* NavigationInfo38 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo38->setDEF("HeadlightOnRevealsSkinTextureAndColors");
group->addChildren(*NavigationInfo38);

CBackground* Background39 = (CBackground *)(m_pScene.createNode("Background"));
Background39->setGroundAngle(new float[1]{1.57}, 1);
Background39->setGroundColor(new float[6]{0,0.1,0,0,0.1,0});
Background39->setSkyColor(new float[3]{0,0,0.1});
group->addChildren(*Background39);

CTransform* Transform40 = (CTransform *)(m_pScene.createNode("Transform"));
Transform40->setDEF("cordsysfloor");
Transform40->setScale(new float[3]{0.175,0.175,0.175});
CInline* Inline41 = (CInline *)(m_pScene.createNode("Inline"));
Inline41->setDEF("CoordinateAxes");
Inline41->setUrl(new CString[8]{"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.x3d","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"}, 8);
Transform40->addChildren(*Inline41);

group->addChildren(*Transform40);

//Authoring hint: these axes are aligned within local coordinate system
CGroup* Group42 = (CGroup *)(m_pScene.createNode("Group"));
Group42->setDEF("ViewpointGroup");
CViewpoint* Viewpoint43 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint43->setDescription("Front Up View");
Viewpoint43->setOrientation(new float[4]{-1,-1,0,0.55});
Viewpoint43->setPosition(new float[3]{-1,2,2.5});
Group42->addChildren(*Viewpoint43);

CViewpoint* Viewpoint44 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint44->setDescription("From Left View");
Viewpoint44->setOrientation(new float[4]{0.3,1,0,-1.57});
Viewpoint44->setPosition(new float[3]{-2.5,1.5,0});
Group42->addChildren(*Viewpoint44);

CViewpoint* Viewpoint45 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint45->setDescription("Front Mid View");
Viewpoint45->setPosition(new float[3]{0,0.5,1.25});
Group42->addChildren(*Viewpoint45);

CViewpoint* Viewpoint46 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint46->setDescription("Front Feet View");
Viewpoint46->setPosition(new float[3]{0,0,0.75});
Group42->addChildren(*Viewpoint46);

CViewpoint* Viewpoint47 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint47->setDescription("From Right View");
Viewpoint47->setOrientation(new float[4]{0,1,0,1.57});
Viewpoint47->setPosition(new float[3]{1,1,0});
Group42->addChildren(*Viewpoint47);

CViewpoint* Viewpoint48 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint48->setCenterOfRotation(new float[3]{0,1.65,0});
Viewpoint48->setDescription("Front Head View");
Viewpoint48->setPosition(new float[3]{0,1.65,0.75});
Group42->addChildren(*Viewpoint48);

CViewpoint* Viewpoint49 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint49->setDescription("Front Mid View");
Viewpoint49->setPosition(new float[3]{0,1,1.75});
Group42->addChildren(*Viewpoint49);

CViewpoint* Viewpoint50 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint50->setDescription("Rear View");
Viewpoint50->setOrientation(new float[4]{0,1,0,3.14});
Viewpoint50->setPosition(new float[3]{0,1.5,-4});
Group42->addChildren(*Viewpoint50);

CViewpoint* Viewpoint51 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint51->setDescription("Top View");
Viewpoint51->setOrientation(new float[4]{1,0,0,-1.57});
Viewpoint51->setPosition(new float[3]{0,4,0});
Group42->addChildren(*Viewpoint51);

CViewpoint* Viewpoint52 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint52->setDescription("Bottom View");
Viewpoint52->setOrientation(new float[4]{1,0,0,1.57});
Viewpoint52->setPosition(new float[3]{0,-4,0});
Group42->addChildren(*Viewpoint52);

CViewpoint* Viewpoint53 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint53->setDescription("Right View");
Viewpoint53->setOrientation(new float[4]{0,1,0,1.57});
Viewpoint53->setPosition(new float[3]{4,1.5,0});
Group42->addChildren(*Viewpoint53);

group->addChildren(*Group42);

CGroup* Group54 = (CGroup *)(m_pScene.createNode("Group"));
Group54->setDEF("VisualizationShapes");
CTransform* Transform55 = (CTransform *)(m_pScene.createNode("Transform"));
Transform55->setScale(new float[3]{5,5,5});
Transform55->setTranslation(new float[3]{0,2.1,0});
CShape* Shape56 = (CShape *)(m_pScene.createNode("Shape"));
Shape56->setDEF("jointbox");
CIndexedFaceSet* IndexedFaceSet57 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet57->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet57->setCreaseAngle(0.10000000149011612);
CCoordinate* Coordinate58 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate58->setDEF("boxCoords");
Coordinate58->setPoint(new float[18]{0,0.01,0,-0.01,0,0,0,0,0.0157,0.01,0,0,0,0,-0.01,0,-0.01,0});
IndexedFaceSet57->setCoord(*Coordinate58);

CColor* Color59 = (CColor *)(m_pScene.createNode("Color"));
Color59->setColor(new float[18]{1,0,0,0,0,1,0,1,0,1,1,1,0,1,1,1,1,0});
IndexedFaceSet57->setColor(*Color59);

Shape56->setGeometry(IndexedFaceSet57);

CAppearance* Appearance60 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material61 = (CMaterial *)(m_pScene.createNode("Material"));
Material61->setAmbientIntensity(0.5);
Material61->setDiffuseColor(new float[3]{0,0,0});
Material61->setShininess(1);
Appearance60->setMaterial(*Material61);

Shape56->setAppearance(*Appearance60);

Transform55->addChildren(*Shape56);

Group54->addChildren(*Transform55);

CTransform* Transform62 = (CTransform *)(m_pScene.createNode("Transform"));
Transform62->setScale(new float[3]{0.1,0.1,0.1});
Transform62->setTranslation(new float[3]{-0.2,0.773,-0.016});
CShape* Shape63 = (CShape *)(m_pScene.createNode("Shape"));
Shape63->setDEF("sitebox");
CIndexedFaceSet* IndexedFaceSet64 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet64->setCoordIndex(new int[32]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1});
IndexedFaceSet64->setCreaseAngle(0.10000000149011612);
CCoordinate* Coordinate65 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate65->setUSE("boxCoords");
IndexedFaceSet64->setCoord(*Coordinate65);

Shape63->setGeometry(IndexedFaceSet64);

CAppearance* Appearance66 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material67 = (CMaterial *)(m_pScene.createNode("Material"));
Material67->setAmbientIntensity(1);
Material67->setDiffuseColor(new float[3]{1,0,0});
Material67->setEmissiveColor(new float[3]{1,0,0});
Material67->setShininess(0.7);
Material67->setSpecularColor(new float[3]{1,0,0});
Appearance66->setMaterial(*Material67);

Shape63->setAppearance(*Appearance66);

Transform62->addChildren(*Shape63);

Group54->addChildren(*Transform62);

CTransform* Transform68 = (CTransform *)(m_pScene.createNode("Transform"));
Transform68->setScale(new float[3]{0.1,0.1,0.1});
Transform68->setTranslation(new float[3]{0,0.2,0});
CShape* Shape69 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet70 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet70->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate71 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate71->setPoint(new float[6]{0,0,0,0,0.0001,0});
IndexedLineSet70->setCoord(*Coordinate71);

Shape69->setGeometry(IndexedLineSet70);

CAppearance* Appearance72 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance72->setDEF("SegmentLine");
CMaterial* Material73 = (CMaterial *)(m_pScene.createNode("Material"));
Material73->setDiffuseColor(new float[3]{0,1,0});
Material73->setEmissiveColor(new float[3]{0,1,0});
Material73->setSpecularColor(new float[3]{0,1,0});
Appearance72->setMaterial(*Material73);

Shape69->setAppearance(*Appearance72);

Transform68->addChildren(*Shape69);

Group54->addChildren(*Transform68);

CTransform* Transform74 = (CTransform *)(m_pScene.createNode("Transform"));
Transform74->setScale(new float[3]{0.1,0.1,0.1});
Transform74->setTranslation(new float[3]{-0.2,0.773,-0.016});
CShape* Shape75 = (CShape *)(m_pScene.createNode("Shape"));
Shape75->setDEF("skinsphere");
CSphere* Sphere76 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere76->setRadius(0.005);
Shape75->setGeometry(Sphere76);

CAppearance* Appearance77 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material78 = (CMaterial *)(m_pScene.createNode("Material"));
Material78->setAmbientIntensity(0.5);
Material78->setDiffuseColor(new float[3]{0,1,0});
Material78->setEmissiveColor(new float[3]{0,1,0});
Material78->setShininess(1);
Material78->setSpecularColor(new float[3]{0,1,0});
Appearance77->setMaterial(*Material78);

Shape75->setAppearance(*Appearance77);

Transform74->addChildren(*Shape75);

Group54->addChildren(*Transform74);

group->addChildren(*Group54);

CGroup* Group79 = (CGroup *)(m_pScene.createNode("Group"));
Group79->setDEF("SpecHumanoid");
CGroup* Group80 = (CGroup *)(m_pScene.createNode("Group"));
Group80->setDEF("JoeISOHumanoid");
CHAnimHumanoid* HAnimHumanoid81 = (CHAnimHumanoid *)(m_pScene.createNode("HAnimHumanoid"));
HAnimHumanoid81->setName("Human");
HAnimHumanoid81->setDEF("Joe_Human");
HAnimHumanoid81->setInfo(new CString[1]{"humanoidVersion=2.0"}, 1);
HAnimHumanoid81->setVersion("2.0");
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
CShape* Shape82 = (CShape *)(m_pScene.createNode("Shape"));
Shape82->setDEF("SkinShape");
CIndexedFaceSet* IndexedFaceSet83 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet83->setCoordIndex(new int[2780]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1});
IndexedFaceSet83->setCreaseAngle(3.1);
CCoordinate* Coordinate84 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate84->setDEF("TheSkinCoord");
Coordinate84->setPoint(new float[1170]{0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168});
IndexedFaceSet83->setCoord(*Coordinate84);

CColor* Color85 = (CColor *)(m_pScene.createNode("Color"));
Color85->setColor(new float[2079]{1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1});
IndexedFaceSet83->setColor(*Color85);

Shape82->setGeometry(IndexedFaceSet83);

CAppearance* Appearance86 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance86->setDEF("SkinAppearance");
CImageTexture* ImageTexture87 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture87->setDEF("zBlueSpiralBkg2");
ImageTexture87->setDescription("Blue Spiral Pattern");
ImageTexture87->setUrl(new CString[2]{"zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"}, 2);
Appearance86->setTexture(*ImageTexture87);

CMaterial* Material88 = (CMaterial *)(m_pScene.createNode("Material"));
Material88->setDEF("SkinMaterial");
Material88->setAmbientIntensity(0.6);
Material88->setDiffuseColor(new float[3]{1,1,1});
Material88->setShininess(0.6);
Material88->setTransparency(0.2);
Appearance86->setMaterial(*Material88);

Shape82->setAppearance(*Appearance86);

HAnimHumanoid81->setSkin(*Shape82);

CCoordinate* Coordinate89 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate89->setUSE("TheSkinCoord");
HAnimHumanoid81->setSkinCoord(*Coordinate89);

CHAnimJoint* HAnimJoint90 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint90->setName("humanoid_root");
HAnimJoint90->setDEF("Joe_humanoid_root");
HAnimJoint90->setCenter(new float[3]{0,0.875,0});
HAnimJoint90->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint90->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment91 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment91->setName("sacrum");
HAnimSegment91->setDEF("Joe_sacrum");
CTransform* Transform92 = (CTransform *)(m_pScene.createNode("Transform"));
Transform92->setTranslation(new float[3]{0,0.875,0});
CShape* Shape93 = (CShape *)(m_pScene.createNode("Shape"));
Shape93->setUSE("jointbox");
Transform92->addChildren(*Shape93);

HAnimSegment91->addChildren(*Transform92);

CShape* Shape94 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet95 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet95->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate96 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate96->setPoint(new float[6]{0,0.875,0,0,0.92,0});
IndexedLineSet95->setCoord(*Coordinate96);

Shape94->setGeometry(IndexedLineSet95);

CAppearance* Appearance97 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance97->setUSE("SegmentLine");
Shape94->setAppearance(*Appearance97);

HAnimSegment91->addChildren(*Shape94);

CTransform* Transform98 = (CTransform *)(m_pScene.createNode("Transform"));
Transform98->setTranslation(new float[3]{0,0.92,0.08});
CShape* Shape99 = (CShape *)(m_pScene.createNode("Shape"));
Shape99->setUSE("skinsphere");
Transform98->addChildren(*Shape99);

HAnimSegment91->addChildren(*Transform98);

CTransform* Transform100 = (CTransform *)(m_pScene.createNode("Transform"));
Transform100->setTranslation(new float[3]{0,0.87,-0.022});
CShape* Shape101 = (CShape *)(m_pScene.createNode("Shape"));
Shape101->setUSE("skinsphere");
Transform100->addChildren(*Shape101);

HAnimSegment91->addChildren(*Transform100);

HAnimJoint90->addChildren(*HAnimSegment91);

CHAnimJoint* HAnimJoint102 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint102->setName("sacroiliac");
HAnimJoint102->setDEF("Joe_sacroiliac");
HAnimJoint102->setCenter(new float[3]{0,0.92,0});
HAnimJoint102->setSkinCoordIndex(new int[13]{17,19,20,21,22,23,26,27,73,82,89,91,93});
HAnimJoint102->setSkinCoordWeight(new float[13]{1,1,1,1,1,1,1,1,1,1,0.35,0.35,1}, 13);
HAnimJoint102->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint102->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment103 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment103->setName("pelvis");
HAnimSegment103->setDEF("Joe_pelvis");
CTransform* Transform104 = (CTransform *)(m_pScene.createNode("Transform"));
Transform104->setTranslation(new float[3]{0,0.9149,0.0016});
CTransform* Transform105 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape106 = (CShape *)(m_pScene.createNode("Shape"));
Shape106->setUSE("jointbox");
Transform105->addChildren(*Shape106);

Transform104->addChildren(*Transform105);

HAnimSegment103->addChildren(*Transform104);

CShape* Shape107 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet108 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet108->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
CCoordinate* Coordinate109 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate109->setPoint(new float[12]{0,0.92,0,0.0961,0.9124,0,-0.095,0.9171,0.0029,0,1.045,-0.095});
IndexedLineSet108->setCoord(*Coordinate109);

Shape107->setGeometry(IndexedLineSet108);

CAppearance* Appearance110 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance110->setUSE("SegmentLine");
Shape107->setAppearance(*Appearance110);

HAnimSegment103->addChildren(*Shape107);

CHAnimSite* HAnimSite111 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite111->setName("l_iliocristale");
HAnimSite111->setDEF("Joe_l_iliocristale");
HAnimSite111->setTranslation(new float[3]{0.1425,1.065,0.0033});
CShape* Shape112 = (CShape *)(m_pScene.createNode("Shape"));
Shape112->setUSE("sitebox");
HAnimSite111->addChildren(*Shape112);

HAnimSegment103->addChildren(*HAnimSite111);

CHAnimSite* HAnimSite113 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite113->setName("l_trochanterion");
HAnimSite113->setDEF("Joe_l_trochanterion");
HAnimSite113->setTranslation(new float[3]{0.15,0.9,-0.01});
CShape* Shape114 = (CShape *)(m_pScene.createNode("Shape"));
Shape114->setUSE("sitebox");
HAnimSite113->addChildren(*Shape114);

HAnimSegment103->addChildren(*HAnimSite113);

CHAnimSite* HAnimSite115 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite115->setName("r_iliocristale");
HAnimSite115->setDEF("Joe_r_iliocristale");
HAnimSite115->setTranslation(new float[3]{-0.1425,1.065,0.0033});
CShape* Shape116 = (CShape *)(m_pScene.createNode("Shape"));
Shape116->setUSE("sitebox");
HAnimSite115->addChildren(*Shape116);

HAnimSegment103->addChildren(*HAnimSite115);

CHAnimSite* HAnimSite117 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite117->setName("r_trochanterion");
HAnimSite117->setDEF("Joe_r_trochanterion");
HAnimSite117->setTranslation(new float[3]{-0.15,0.9,-0.01});
CShape* Shape118 = (CShape *)(m_pScene.createNode("Shape"));
Shape118->setUSE("sitebox");
HAnimSite117->addChildren(*Shape118);

HAnimSegment103->addChildren(*HAnimSite117);

CHAnimSite* HAnimSite119 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite119->setName("l_asis");
HAnimSite119->setDEF("Joe_l_asis");
HAnimSite119->setTranslation(new float[3]{0.0935,1.03,0.075});
CShape* Shape120 = (CShape *)(m_pScene.createNode("Shape"));
Shape120->setUSE("sitebox");
HAnimSite119->addChildren(*Shape120);

HAnimSegment103->addChildren(*HAnimSite119);

CHAnimSite* HAnimSite121 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite121->setName("r_asis");
HAnimSite121->setDEF("Joe_r_asis");
HAnimSite121->setTranslation(new float[3]{-0.0935,1.03,0.075});
CShape* Shape122 = (CShape *)(m_pScene.createNode("Shape"));
Shape122->setUSE("sitebox");
HAnimSite121->addChildren(*Shape122);

HAnimSegment103->addChildren(*HAnimSite121);

CHAnimSite* HAnimSite123 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite123->setName("l_psis");
HAnimSite123->setDEF("Joe_l_psis");
HAnimSite123->setTranslation(new float[3]{0.0773,1.019,-0.12});
CShape* Shape124 = (CShape *)(m_pScene.createNode("Shape"));
Shape124->setUSE("sitebox");
HAnimSite123->addChildren(*Shape124);

HAnimSegment103->addChildren(*HAnimSite123);

CHAnimSite* HAnimSite125 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite125->setName("r_psis");
HAnimSite125->setDEF("Joe_r_psis");
HAnimSite125->setTranslation(new float[3]{-0.0773,1.019,-0.12});
CShape* Shape126 = (CShape *)(m_pScene.createNode("Shape"));
Shape126->setUSE("sitebox");
HAnimSite125->addChildren(*Shape126);

HAnimSegment103->addChildren(*HAnimSite125);

CHAnimSite* HAnimSite127 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite127->setName("floormarker");
HAnimSite127->setDEF("Joe_floormarker");
CTransform* Transform128 = (CTransform *)(m_pScene.createNode("Transform"));
Transform128->setScale(new float[3]{3,3,3});
CShape* Shape129 = (CShape *)(m_pScene.createNode("Shape"));
Shape129->setUSE("sitebox");
Transform128->addChildren(*Shape129);

HAnimSite127->addChildren(*Transform128);

HAnimSegment103->addChildren(*HAnimSite127);

CHAnimSite* HAnimSite130 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite130->setName("crotch");
HAnimSite130->setDEF("Joe_crotch");
HAnimSite130->setTranslation(new float[3]{0,0.87,-0.022});
CShape* Shape131 = (CShape *)(m_pScene.createNode("Shape"));
Shape131->setUSE("sitebox");
HAnimSite130->addChildren(*Shape131);

HAnimSegment103->addChildren(*HAnimSite130);

HAnimJoint102->addChildren(*HAnimSegment103);

CHAnimJoint* HAnimJoint132 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint132->setName("l_hip");
HAnimJoint132->setDEF("Joe_l_hip");
HAnimJoint132->setCenter(new float[3]{0.1,0.92,0});
HAnimJoint132->setSkinCoordIndex(new int[6]{89,90,94,95,96,97});
HAnimJoint132->setSkinCoordWeight(new float[6]{0.65,1,1,1,1,1}, 6);
HAnimJoint132->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint132->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment133 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment133->setName("l_thigh");
HAnimSegment133->setDEF("Joe_l_thigh");
CTransform* Transform134 = (CTransform *)(m_pScene.createNode("Transform"));
Transform134->setTranslation(new float[3]{0.1,0.92,0});
CShape* Shape135 = (CShape *)(m_pScene.createNode("Shape"));
Shape135->setUSE("jointbox");
Transform134->addChildren(*Shape135);

HAnimSegment133->addChildren(*Transform134);

CShape* Shape136 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet137 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet137->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate138 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate138->setPoint(new float[6]{0.1,0.92,0,0.115,0.466,0});
IndexedLineSet137->setCoord(*Coordinate138);

Shape136->setGeometry(IndexedLineSet137);

CAppearance* Appearance139 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance139->setUSE("SegmentLine");
Shape136->setAppearance(*Appearance139);

HAnimSegment133->addChildren(*Shape136);

CTransform* Transform140 = (CTransform *)(m_pScene.createNode("Transform"));
Transform140->setTranslation(new float[3]{0.1,0.9,0.0775});
CShape* Shape141 = (CShape *)(m_pScene.createNode("Shape"));
Shape141->setUSE("skinsphere");
Transform140->addChildren(*Shape141);

HAnimSegment133->addChildren(*Transform140);

CTransform* Transform142 = (CTransform *)(m_pScene.createNode("Transform"));
Transform142->setTranslation(new float[3]{0.079,0.92,-0.14});
CShape* Shape143 = (CShape *)(m_pScene.createNode("Shape"));
Shape143->setUSE("skinsphere");
Transform142->addChildren(*Shape143);

HAnimSegment133->addChildren(*Transform142);

CTransform* Transform144 = (CTransform *)(m_pScene.createNode("Transform"));
Transform144->setTranslation(new float[3]{0.171,0.65,0});
CShape* Shape145 = (CShape *)(m_pScene.createNode("Shape"));
Shape145->setUSE("skinsphere");
Transform144->addChildren(*Shape145);

HAnimSegment133->addChildren(*Transform144);

CTransform* Transform146 = (CTransform *)(m_pScene.createNode("Transform"));
Transform146->setTranslation(new float[3]{0.02,0.65,0});
CShape* Shape147 = (CShape *)(m_pScene.createNode("Shape"));
Shape147->setUSE("skinsphere");
Transform146->addChildren(*Shape147);

HAnimSegment133->addChildren(*Transform146);

CTransform* Transform148 = (CTransform *)(m_pScene.createNode("Transform"));
Transform148->setTranslation(new float[3]{0.1,0.65,-0.08});
CShape* Shape149 = (CShape *)(m_pScene.createNode("Shape"));
Shape149->setUSE("skinsphere");
Transform148->addChildren(*Shape149);

HAnimSegment133->addChildren(*Transform148);

CTransform* Transform150 = (CTransform *)(m_pScene.createNode("Transform"));
Transform150->setTranslation(new float[3]{0.1,0.65,0.07});
CShape* Shape151 = (CShape *)(m_pScene.createNode("Shape"));
Shape151->setUSE("skinsphere");
Transform150->addChildren(*Shape151);

HAnimSegment133->addChildren(*Transform150);

CHAnimSite* HAnimSite152 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite152->setName("l_knee_crease");
HAnimSite152->setDEF("Joe_l_knee_crease");
HAnimSite152->setTranslation(new float[3]{0.115,0.466,-0.055});
CShape* Shape153 = (CShape *)(m_pScene.createNode("Shape"));
Shape153->setUSE("sitebox");
HAnimSite152->addChildren(*Shape153);

HAnimSegment133->addChildren(*HAnimSite152);

CHAnimSite* HAnimSite154 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite154->setName("l_femoral_lateral_epicn");
HAnimSite154->setDEF("Joe_l_femoral_lateral_epicn");
HAnimSite154->setTranslation(new float[3]{0.17,0.466,0});
CShape* Shape155 = (CShape *)(m_pScene.createNode("Shape"));
Shape155->setUSE("sitebox");
HAnimSite154->addChildren(*Shape155);

HAnimSegment133->addChildren(*HAnimSite154);

CHAnimSite* HAnimSite156 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite156->setName("l_femoral_medial_epicn");
HAnimSite156->setDEF("Joe_l_femoral_medial_epicn");
HAnimSite156->setTranslation(new float[3]{0.05,0.466,0});
CShape* Shape157 = (CShape *)(m_pScene.createNode("Shape"));
Shape157->setUSE("sitebox");
HAnimSite156->addChildren(*Shape157);

HAnimSegment133->addChildren(*HAnimSite156);

HAnimJoint132->addChildren(*HAnimSegment133);

CHAnimJoint* HAnimJoint158 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint158->setName("l_knee");
HAnimJoint158->setDEF("Joe_l_knee");
HAnimJoint158->setCenter(new float[3]{0.11500000208616257,0.4659999907016754,0});
HAnimJoint158->setSkinCoordIndex(new int[8]{334,335,336,337,338,339,340,341});
HAnimJoint158->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint158->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint158->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment159 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment159->setName("l_calf");
HAnimSegment159->setDEF("Joe_l_calf");
CTransform* Transform160 = (CTransform *)(m_pScene.createNode("Transform"));
Transform160->setTranslation(new float[3]{0.11500000208616257,0.4659999907016754,0});
CShape* Shape161 = (CShape *)(m_pScene.createNode("Shape"));
Shape161->setUSE("jointbox");
Transform160->addChildren(*Shape161);

HAnimSegment159->addChildren(*Transform160);

CShape* Shape162 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet163 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet163->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate164 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate164->setPoint(new float[6]{0.115,0.466,0,0.1,0.069,0});
IndexedLineSet163->setCoord(*Coordinate164);

Shape162->setGeometry(IndexedLineSet163);

CAppearance* Appearance165 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance165->setUSE("SegmentLine");
Shape162->setAppearance(*Appearance165);

HAnimSegment159->addChildren(*Shape162);

CTransform* Transform166 = (CTransform *)(m_pScene.createNode("Transform"));
Transform166->setTranslation(new float[3]{0.115,0.466,0.06});
CShape* Shape167 = (CShape *)(m_pScene.createNode("Shape"));
Shape167->setUSE("skinsphere");
Transform166->addChildren(*Shape167);

HAnimSegment159->addChildren(*Transform166);

CTransform* Transform168 = (CTransform *)(m_pScene.createNode("Transform"));
Transform168->setTranslation(new float[3]{0.115,0.466,-0.055});
CShape* Shape169 = (CShape *)(m_pScene.createNode("Shape"));
Shape169->setUSE("skinsphere");
Transform168->addChildren(*Shape169);

HAnimSegment159->addChildren(*Transform168);

CTransform* Transform170 = (CTransform *)(m_pScene.createNode("Transform"));
Transform170->setTranslation(new float[3]{0.17,0.466,0});
CShape* Shape171 = (CShape *)(m_pScene.createNode("Shape"));
Shape171->setUSE("skinsphere");
Transform170->addChildren(*Shape171);

HAnimSegment159->addChildren(*Transform170);

CTransform* Transform172 = (CTransform *)(m_pScene.createNode("Transform"));
Transform172->setTranslation(new float[3]{0.05,0.466,0});
CShape* Shape173 = (CShape *)(m_pScene.createNode("Shape"));
Shape173->setUSE("skinsphere");
Transform172->addChildren(*Shape173);

HAnimSegment159->addChildren(*Transform172);

CTransform* Transform174 = (CTransform *)(m_pScene.createNode("Transform"));
Transform174->setTranslation(new float[3]{0.17,0.3,0});
CShape* Shape175 = (CShape *)(m_pScene.createNode("Shape"));
Shape175->setUSE("skinsphere");
Transform174->addChildren(*Shape175);

HAnimSegment159->addChildren(*Transform174);

CTransform* Transform176 = (CTransform *)(m_pScene.createNode("Transform"));
Transform176->setTranslation(new float[3]{0.06,0.3,0});
CShape* Shape177 = (CShape *)(m_pScene.createNode("Shape"));
Shape177->setUSE("skinsphere");
Transform176->addChildren(*Shape177);

HAnimSegment159->addChildren(*Transform176);

CTransform* Transform178 = (CTransform *)(m_pScene.createNode("Transform"));
Transform178->setTranslation(new float[3]{0.1,0.3,-0.05});
CShape* Shape179 = (CShape *)(m_pScene.createNode("Shape"));
Shape179->setUSE("skinsphere");
Transform178->addChildren(*Shape179);

HAnimSegment159->addChildren(*Transform178);

CTransform* Transform180 = (CTransform *)(m_pScene.createNode("Transform"));
Transform180->setTranslation(new float[3]{0.1,0.3,0.05});
CShape* Shape181 = (CShape *)(m_pScene.createNode("Shape"));
Shape181->setUSE("skinsphere");
Transform180->addChildren(*Shape181);

HAnimSegment159->addChildren(*Transform180);

CHAnimSite* HAnimSite182 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite182->setName("l_lateral_malleolus");
HAnimSite182->setDEF("Joe_l_lateral_malleolus");
HAnimSite182->setTranslation(new float[3]{0.15,0.07,0});
CShape* Shape183 = (CShape *)(m_pScene.createNode("Shape"));
Shape183->setUSE("sitebox");
HAnimSite182->addChildren(*Shape183);

HAnimSegment159->addChildren(*HAnimSite182);

CHAnimSite* HAnimSite184 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite184->setName("l_medial_malleolus");
HAnimSite184->setDEF("Joe_l_medial_malleolus");
HAnimSite184->setTranslation(new float[3]{0.085,0.086,0.0125});
CShape* Shape185 = (CShape *)(m_pScene.createNode("Shape"));
Shape185->setUSE("sitebox");
HAnimSite184->addChildren(*Shape185);

HAnimSegment159->addChildren(*HAnimSite184);

HAnimJoint158->addChildren(*HAnimSegment159);

CHAnimJoint* HAnimJoint186 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint186->setName("l_ankle");
HAnimJoint186->setDEF("Joe_l_ankle");
HAnimJoint186->setCenter(new float[3]{0.115,0.069,0});
HAnimJoint186->setSkinCoordIndex(new int[4]{342,343,344,345});
HAnimJoint186->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint186->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint186->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment187 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment187->setName("l_hindfoot");
HAnimSegment187->setDEF("Joe_l_hindfoot");
CTransform* Transform188 = (CTransform *)(m_pScene.createNode("Transform"));
Transform188->setTranslation(new float[3]{0.115,0.069,0});
CShape* Shape189 = (CShape *)(m_pScene.createNode("Shape"));
Shape189->setUSE("jointbox");
Transform188->addChildren(*Shape189);

HAnimSegment187->addChildren(*Transform188);

CShape* Shape190 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet191 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet191->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate192 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate192->setPoint(new float[6]{0.1,0.069,0,0.115,0.031,0.03});
IndexedLineSet191->setCoord(*Coordinate192);

Shape190->setGeometry(IndexedLineSet191);

CAppearance* Appearance193 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance193->setUSE("SegmentLine");
Shape190->setAppearance(*Appearance193);

HAnimSegment187->addChildren(*Shape190);

CTransform* Transform194 = (CTransform *)(m_pScene.createNode("Transform"));
Transform194->setTranslation(new float[3]{0.15,0.07,0});
CShape* Shape195 = (CShape *)(m_pScene.createNode("Shape"));
Shape195->setUSE("skinsphere");
Transform194->addChildren(*Shape195);

HAnimSegment187->addChildren(*Transform194);

CTransform* Transform196 = (CTransform *)(m_pScene.createNode("Transform"));
Transform196->setTranslation(new float[3]{0.085,0.086,0.0125});
CShape* Shape197 = (CShape *)(m_pScene.createNode("Shape"));
Shape197->setUSE("skinsphere");
Transform196->addChildren(*Shape197);

HAnimSegment187->addChildren(*Transform196);

CTransform* Transform198 = (CTransform *)(m_pScene.createNode("Transform"));
Transform198->setTranslation(new float[3]{0.115,0.069,-0.045});
CShape* Shape199 = (CShape *)(m_pScene.createNode("Shape"));
Shape199->setUSE("skinsphere");
Transform198->addChildren(*Shape199);

HAnimSegment187->addChildren(*Transform198);

CTransform* Transform200 = (CTransform *)(m_pScene.createNode("Transform"));
Transform200->setTranslation(new float[3]{0.117,0.0975,0.0615});
CShape* Shape201 = (CShape *)(m_pScene.createNode("Shape"));
Shape201->setUSE("skinsphere");
Transform200->addChildren(*Shape201);

HAnimSegment187->addChildren(*Transform200);

CHAnimSite* HAnimSite202 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite202->setName("l_sphyrion");
HAnimSite202->setDEF("Joe_l_sphyrion");
HAnimSite202->setTranslation(new float[3]{0.09,0.056,0.0125});
CShape* Shape203 = (CShape *)(m_pScene.createNode("Shape"));
Shape203->setUSE("sitebox");
HAnimSite202->addChildren(*Shape203);

HAnimSegment187->addChildren(*HAnimSite202);

CHAnimSite* HAnimSite204 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite204->setName("l_calcaneous_post");
HAnimSite204->setDEF("Joe_l_calcaneous_post");
HAnimSite204->setTranslation(new float[3]{0.115,0.04,-0.055});
CShape* Shape205 = (CShape *)(m_pScene.createNode("Shape"));
Shape205->setUSE("sitebox");
HAnimSite204->addChildren(*Shape205);

HAnimSegment187->addChildren(*HAnimSite204);

HAnimJoint186->addChildren(*HAnimSegment187);

CHAnimJoint* HAnimJoint206 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint206->setName("l_subtalar");
HAnimJoint206->setDEF("Joe_l_subtalar");
HAnimJoint206->setCenter(new float[3]{0.115,0.031,0.03});
HAnimJoint206->setSkinCoordIndex(new int[4]{346,347,348,71});
HAnimJoint206->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint206->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint206->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment207 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment207->setName("l_midproximal");
HAnimSegment207->setDEF("Joe_l_midproximal");
CTransform* Transform208 = (CTransform *)(m_pScene.createNode("Transform"));
Transform208->setTranslation(new float[3]{0.115,0.031,0.03});
CShape* Shape209 = (CShape *)(m_pScene.createNode("Shape"));
Shape209->setUSE("jointbox");
Transform208->addChildren(*Shape209);

HAnimSegment207->addChildren(*Transform208);

CShape* Shape210 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet211 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet211->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate212 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate212->setPoint(new float[6]{0.115,0.031,0.03,0.115,0.037,0.09});
IndexedLineSet211->setCoord(*Coordinate212);

Shape210->setGeometry(IndexedLineSet211);

CAppearance* Appearance213 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance213->setUSE("SegmentLine");
Shape210->setAppearance(*Appearance213);

HAnimSegment207->addChildren(*Shape210);

CTransform* Transform214 = (CTransform *)(m_pScene.createNode("Transform"));
Transform214->setTranslation(new float[3]{0.1375,0.006,-0.03});
CShape* Shape215 = (CShape *)(m_pScene.createNode("Shape"));
Shape215->setUSE("skinsphere");
Transform214->addChildren(*Shape215);

HAnimSegment207->addChildren(*Transform214);

CTransform* Transform216 = (CTransform *)(m_pScene.createNode("Transform"));
Transform216->setTranslation(new float[3]{0.095,0.006,-0.03});
CShape* Shape217 = (CShape *)(m_pScene.createNode("Shape"));
Shape217->setUSE("skinsphere");
Transform216->addChildren(*Shape217);

HAnimSegment207->addChildren(*Transform216);

CTransform* Transform218 = (CTransform *)(m_pScene.createNode("Transform"));
Transform218->setTranslation(new float[3]{0.115,0.015,-0.045});
CShape* Shape219 = (CShape *)(m_pScene.createNode("Shape"));
Shape219->setUSE("skinsphere");
Transform218->addChildren(*Shape219);

HAnimSegment207->addChildren(*Transform218);

HAnimJoint206->addChildren(*HAnimSegment207);

CHAnimJoint* HAnimJoint220 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint220->setName("l_midtarsal");
HAnimJoint220->setDEF("Joe_l_midtarsal");
HAnimJoint220->setCenter(new float[3]{0.115,0.037,0.09});
HAnimJoint220->setSkinCoordIndex(new int[4]{349,350,351,352});
HAnimJoint220->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint220->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint220->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment221 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment221->setName("l_middistal");
HAnimSegment221->setDEF("Joe_l_middistal");
CTransform* Transform222 = (CTransform *)(m_pScene.createNode("Transform"));
Transform222->setTranslation(new float[3]{0.115,0.037,0.09});
CShape* Shape223 = (CShape *)(m_pScene.createNode("Shape"));
Shape223->setUSE("jointbox");
Transform222->addChildren(*Shape223);

HAnimSegment221->addChildren(*Transform222);

CShape* Shape224 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet225 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet225->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate226 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate226->setPoint(new float[6]{0.115,0.037,0.09,0.115,0.02,0.122});
IndexedLineSet225->setCoord(*Coordinate226);

Shape224->setGeometry(IndexedLineSet225);

CAppearance* Appearance227 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance227->setUSE("SegmentLine");
Shape224->setAppearance(*Appearance227);

HAnimSegment221->addChildren(*Shape224);

CTransform* Transform228 = (CTransform *)(m_pScene.createNode("Transform"));
Transform228->setTranslation(new float[3]{0.11500000208616257,0.05999999865889549,0.10000000149011612});
CShape* Shape229 = (CShape *)(m_pScene.createNode("Shape"));
Shape229->setUSE("skinsphere");
Transform228->addChildren(*Shape229);

HAnimSegment221->addChildren(*Transform228);

CTransform* Transform230 = (CTransform *)(m_pScene.createNode("Transform"));
Transform230->setTranslation(new float[3]{0.11500000208616257,0,0.07000000029802322});
CShape* Shape231 = (CShape *)(m_pScene.createNode("Shape"));
Shape231->setUSE("skinsphere");
Transform230->addChildren(*Shape231);

HAnimSegment221->addChildren(*Transform230);

CTransform* Transform232 = (CTransform *)(m_pScene.createNode("Transform"));
Transform232->setTranslation(new float[3]{0.16500000655651093,0,0.07000000029802322});
CShape* Shape233 = (CShape *)(m_pScene.createNode("Shape"));
Shape233->setUSE("skinsphere");
Transform232->addChildren(*Shape233);

HAnimSegment221->addChildren(*Transform232);

CTransform* Transform234 = (CTransform *)(m_pScene.createNode("Transform"));
Transform234->setTranslation(new float[3]{0.0949999988079071,0,0.07000000029802322});
CShape* Shape235 = (CShape *)(m_pScene.createNode("Shape"));
Shape235->setUSE("skinsphere");
Transform234->addChildren(*Shape235);

HAnimSegment221->addChildren(*Transform234);

CHAnimSite* HAnimSite236 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite236->setName("l_metatarsal_pha1");
HAnimSite236->setDEF("Joe_l_metatarsal_pha1");
HAnimSite236->setTranslation(new float[3]{0.08699999749660492,0.009999999776482582,0.12200000137090683});
CShape* Shape237 = (CShape *)(m_pScene.createNode("Shape"));
Shape237->setUSE("sitebox");
HAnimSite236->addChildren(*Shape237);

HAnimSegment221->addChildren(*HAnimSite236);

HAnimJoint220->addChildren(*HAnimSegment221);

CHAnimJoint* HAnimJoint238 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint238->setName("l_metatarsal");
HAnimJoint238->setDEF("Joe_l_metatarsal");
HAnimJoint238->setCenter(new float[3]{0.11500000208616257,0.019999999552965164,0.12200000137090683});
HAnimJoint238->setSkinCoordIndex(new int[9]{353,354,355,356,357,358,359,360,361});
HAnimJoint238->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint238->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint238->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment239 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment239->setName("l_forefoot");
HAnimSegment239->setDEF("Joe_l_forefoot");
CTransform* Transform240 = (CTransform *)(m_pScene.createNode("Transform"));
Transform240->setTranslation(new float[3]{0.11500000208616257,0.019999999552965164,0.12999999523162842});
CShape* Shape241 = (CShape *)(m_pScene.createNode("Shape"));
Shape241->setUSE("jointbox");
Transform240->addChildren(*Shape241);

HAnimSegment239->addChildren(*Transform240);

CShape* Shape242 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet243 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet243->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate244 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate244->setPoint(new float[6]{0.11500000208616257,0.019999999552965164,0.12200000137090683,0.13199999928474426,0.013000000268220901,0.1899999976158142});
IndexedLineSet243->setCoord(*Coordinate244);

Shape242->setGeometry(IndexedLineSet243);

CAppearance* Appearance245 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance245->setUSE("SegmentLine");
Shape242->setAppearance(*Appearance245);

HAnimSegment239->addChildren(*Shape242);

CTransform* Transform246 = (CTransform *)(m_pScene.createNode("Transform"));
Transform246->setTranslation(new float[3]{0.11500000208616257,0.03999999910593033,0.12999999523162842});
CShape* Shape247 = (CShape *)(m_pScene.createNode("Shape"));
Shape247->setUSE("skinsphere");
Transform246->addChildren(*Shape247);

HAnimSegment239->addChildren(*Transform246);

CTransform* Transform248 = (CTransform *)(m_pScene.createNode("Transform"));
Transform248->setTranslation(new float[3]{0.125,0,0.11999999731779099});
CShape* Shape249 = (CShape *)(m_pScene.createNode("Shape"));
Shape249->setUSE("skinsphere");
Transform248->addChildren(*Shape249);

HAnimSegment239->addChildren(*Transform248);

CTransform* Transform250 = (CTransform *)(m_pScene.createNode("Transform"));
Transform250->setTranslation(new float[3]{0.16500000655651093,0,0.11999999731779099});
CShape* Shape251 = (CShape *)(m_pScene.createNode("Shape"));
Shape251->setUSE("skinsphere");
Transform250->addChildren(*Shape251);

HAnimSegment239->addChildren(*Transform250);

CTransform* Transform252 = (CTransform *)(m_pScene.createNode("Transform"));
Transform252->setTranslation(new float[3]{0.08699999749660492,0,0.12200000137090683});
CShape* Shape253 = (CShape *)(m_pScene.createNode("Shape"));
Shape253->setUSE("skinsphere");
Transform252->addChildren(*Shape253);

HAnimSegment239->addChildren(*Transform252);

CTransform* Transform254 = (CTransform *)(m_pScene.createNode("Transform"));
Transform254->setTranslation(new float[3]{0.09000000357627869,0.012000000104308128,0.18799999356269836});
CShape* Shape255 = (CShape *)(m_pScene.createNode("Shape"));
Shape255->setUSE("skinsphere");
Transform254->addChildren(*Shape255);

HAnimSegment239->addChildren(*Transform254);

CTransform* Transform256 = (CTransform *)(m_pScene.createNode("Transform"));
Transform256->setTranslation(new float[3]{0.10999999940395355,0.010999999940395355,0.1899999976158142});
CShape* Shape257 = (CShape *)(m_pScene.createNode("Shape"));
Shape257->setUSE("skinsphere");
Transform256->addChildren(*Shape257);

HAnimSegment239->addChildren(*Transform256);

CTransform* Transform258 = (CTransform *)(m_pScene.createNode("Transform"));
Transform258->setTranslation(new float[3]{0.12800000607967377,0.010999999940395355,0.1850000023841858});
CShape* Shape259 = (CShape *)(m_pScene.createNode("Shape"));
Shape259->setUSE("skinsphere");
Transform258->addChildren(*Shape259);

HAnimSegment239->addChildren(*Transform258);

CTransform* Transform260 = (CTransform *)(m_pScene.createNode("Transform"));
Transform260->setTranslation(new float[3]{0.1420000046491623,0.010999999940395355,0.17800000309944153});
CShape* Shape261 = (CShape *)(m_pScene.createNode("Shape"));
Shape261->setUSE("skinsphere");
Transform260->addChildren(*Shape261);

HAnimSegment239->addChildren(*Transform260);

CTransform* Transform262 = (CTransform *)(m_pScene.createNode("Transform"));
Transform262->setTranslation(new float[3]{0.15399999916553497,0.009999999776482582,0.1679999977350235});
CShape* Shape263 = (CShape *)(m_pScene.createNode("Shape"));
Shape263->setUSE("skinsphere");
Transform262->addChildren(*Shape263);

HAnimSegment239->addChildren(*Transform262);

CHAnimSite* HAnimSite264 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite264->setName("l_metatarsal_pha5");
HAnimSite264->setDEF("Joe_l_metatarsal_pha5");
HAnimSite264->setTranslation(new float[3]{0.16500000655651093,0.009999999776482582,0.11999999731779099});
CShape* Shape265 = (CShape *)(m_pScene.createNode("Shape"));
Shape265->setUSE("sitebox");
HAnimSite264->addChildren(*Shape265);

HAnimSegment239->addChildren(*HAnimSite264);

CHAnimSite* HAnimSite266 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite266->setName("l_digit2");
HAnimSite266->setDEF("Joe_l_digit2");
HAnimSite266->setTranslation(new float[3]{0.10999999940395355,0.010999999940395355,0.1899999976158142});
CShape* Shape267 = (CShape *)(m_pScene.createNode("Shape"));
Shape267->setUSE("sitebox");
HAnimSite266->addChildren(*Shape267);

HAnimSegment239->addChildren(*HAnimSite266);

HAnimJoint238->addChildren(*HAnimSegment239);

HAnimJoint220->addChildren(*HAnimJoint238);

HAnimJoint206->addChildren(*HAnimJoint220);

HAnimJoint186->addChildren(*HAnimJoint206);

HAnimJoint158->addChildren(*HAnimJoint186);

HAnimJoint132->addChildren(*HAnimJoint158);

HAnimJoint102->addChildren(*HAnimJoint132);

CHAnimJoint* HAnimJoint268 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint268->setName("r_hip");
HAnimJoint268->setDEF("Joe_r_hip");
HAnimJoint268->setCenter(new float[3]{-0.10000000149011612,0.9200000166893005,0});
HAnimJoint268->setSkinCoordIndex(new int[6]{91,92,98,99,100,101});
HAnimJoint268->setSkinCoordWeight(new float[6]{0.6499999761581421,1,1,1,1,1}, 6);
HAnimJoint268->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint268->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment269 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment269->setName("r_thigh");
HAnimSegment269->setDEF("Joe_r_thigh");
CTransform* Transform270 = (CTransform *)(m_pScene.createNode("Transform"));
Transform270->setTranslation(new float[3]{-0.10000000149011612,0.9200000166893005,0});
CShape* Shape271 = (CShape *)(m_pScene.createNode("Shape"));
Shape271->setUSE("jointbox");
Transform270->addChildren(*Shape271);

HAnimSegment269->addChildren(*Transform270);

CShape* Shape272 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet273 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet273->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate274 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate274->setPoint(new float[6]{-0.10000000149011612,0.9200000166893005,0,-0.10000000149011612,0.49129998683929443,0});
IndexedLineSet273->setCoord(*Coordinate274);

Shape272->setGeometry(IndexedLineSet273);

CAppearance* Appearance275 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance275->setUSE("SegmentLine");
Shape272->setAppearance(*Appearance275);

HAnimSegment269->addChildren(*Shape272);

CTransform* Transform276 = (CTransform *)(m_pScene.createNode("Transform"));
Transform276->setTranslation(new float[3]{-0.07900000363588333,0.9200000166893005,-0.14000000059604645});
CShape* Shape277 = (CShape *)(m_pScene.createNode("Shape"));
Shape277->setUSE("skinsphere");
Transform276->addChildren(*Shape277);

HAnimSegment269->addChildren(*Transform276);

CTransform* Transform278 = (CTransform *)(m_pScene.createNode("Transform"));
Transform278->setTranslation(new float[3]{-0.10000000149011612,0.8999999761581421,0.07500000298023224});
CShape* Shape279 = (CShape *)(m_pScene.createNode("Shape"));
Shape279->setUSE("skinsphere");
Transform278->addChildren(*Shape279);

HAnimSegment269->addChildren(*Transform278);

CTransform* Transform280 = (CTransform *)(m_pScene.createNode("Transform"));
Transform280->setTranslation(new float[3]{-0.17100000381469727,0.6499999761581421,0});
CShape* Shape281 = (CShape *)(m_pScene.createNode("Shape"));
Shape281->setUSE("skinsphere");
Transform280->addChildren(*Shape281);

HAnimSegment269->addChildren(*Transform280);

CTransform* Transform282 = (CTransform *)(m_pScene.createNode("Transform"));
Transform282->setTranslation(new float[3]{-0.019999999552965164,0.6499999761581421,0});
CShape* Shape283 = (CShape *)(m_pScene.createNode("Shape"));
Shape283->setUSE("skinsphere");
Transform282->addChildren(*Shape283);

HAnimSegment269->addChildren(*Transform282);

CTransform* Transform284 = (CTransform *)(m_pScene.createNode("Transform"));
Transform284->setTranslation(new float[3]{-0.10000000149011612,0.6499999761581421,-0.07999999821186066});
CShape* Shape285 = (CShape *)(m_pScene.createNode("Shape"));
Shape285->setUSE("skinsphere");
Transform284->addChildren(*Shape285);

HAnimSegment269->addChildren(*Transform284);

CTransform* Transform286 = (CTransform *)(m_pScene.createNode("Transform"));
Transform286->setTranslation(new float[3]{-0.10000000149011612,0.6499999761581421,0.07000000029802322});
CShape* Shape287 = (CShape *)(m_pScene.createNode("Shape"));
Shape287->setUSE("skinsphere");
Transform286->addChildren(*Shape287);

HAnimSegment269->addChildren(*Transform286);

CHAnimSite* HAnimSite288 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite288->setName("r_knee_crease");
HAnimSite288->setDEF("Joe_r_knee_crease");
HAnimSite288->setTranslation(new float[3]{-0.11500000208616257,0.4659999907016754,-0.054999999701976776});
CShape* Shape289 = (CShape *)(m_pScene.createNode("Shape"));
Shape289->setUSE("sitebox");
HAnimSite288->addChildren(*Shape289);

HAnimSegment269->addChildren(*HAnimSite288);

CHAnimSite* HAnimSite290 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite290->setName("r_femoral_lateral_epicn");
HAnimSite290->setDEF("Joe_r_femoral_lateral_epicn");
HAnimSite290->setTranslation(new float[3]{-0.17000000178813934,0.4659999907016754,0});
CShape* Shape291 = (CShape *)(m_pScene.createNode("Shape"));
Shape291->setUSE("sitebox");
HAnimSite290->addChildren(*Shape291);

HAnimSegment269->addChildren(*HAnimSite290);

CHAnimSite* HAnimSite292 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite292->setName("r_femoral_medial_epicn");
HAnimSite292->setDEF("Joe_r_femoral_medial_epicn");
HAnimSite292->setTranslation(new float[3]{-0.05000000074505806,0.4659999907016754,0});
CShape* Shape293 = (CShape *)(m_pScene.createNode("Shape"));
Shape293->setUSE("sitebox");
HAnimSite292->addChildren(*Shape293);

HAnimSegment269->addChildren(*HAnimSite292);

HAnimJoint268->addChildren(*HAnimSegment269);

CHAnimJoint* HAnimJoint294 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint294->setName("r_knee");
HAnimJoint294->setDEF("Joe_r_knee");
HAnimJoint294->setCenter(new float[3]{-0.05000000074505806,0.4659999907016754,0});
HAnimJoint294->setSkinCoordIndex(new int[8]{362,363,364,365,366,367,368,369});
HAnimJoint294->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint294->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint294->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment295 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment295->setName("r_calf");
HAnimSegment295->setDEF("Joe_r_calf");
CTransform* Transform296 = (CTransform *)(m_pScene.createNode("Transform"));
Transform296->setTranslation(new float[3]{-0.10000000149011612,0.49129998683929443,0});
CShape* Shape297 = (CShape *)(m_pScene.createNode("Shape"));
Shape297->setUSE("jointbox");
Transform296->addChildren(*Shape297);

HAnimSegment295->addChildren(*Transform296);

CShape* Shape298 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet299 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet299->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate300 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate300->setPoint(new float[6]{-0.10000000149011612,0.49129998683929443,0,-0.10000000149011612,0.07119999825954437,0});
IndexedLineSet299->setCoord(*Coordinate300);

Shape298->setGeometry(IndexedLineSet299);

CAppearance* Appearance301 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance301->setUSE("SegmentLine");
Shape298->setAppearance(*Appearance301);

HAnimSegment295->addChildren(*Shape298);

CTransform* Transform302 = (CTransform *)(m_pScene.createNode("Transform"));
Transform302->setTranslation(new float[3]{-0.11500000208616257,0.4659999907016754,0.05999999865889549});
CShape* Shape303 = (CShape *)(m_pScene.createNode("Shape"));
Shape303->setUSE("skinsphere");
Transform302->addChildren(*Shape303);

HAnimSegment295->addChildren(*Transform302);

CTransform* Transform304 = (CTransform *)(m_pScene.createNode("Transform"));
Transform304->setTranslation(new float[3]{-0.11500000208616257,0.4659999907016754,-0.054999999701976776});
CShape* Shape305 = (CShape *)(m_pScene.createNode("Shape"));
Shape305->setUSE("skinsphere");
Transform304->addChildren(*Shape305);

HAnimSegment295->addChildren(*Transform304);

CTransform* Transform306 = (CTransform *)(m_pScene.createNode("Transform"));
Transform306->setTranslation(new float[3]{-0.17000000178813934,0.4659999907016754,0});
CShape* Shape307 = (CShape *)(m_pScene.createNode("Shape"));
Shape307->setUSE("skinsphere");
Transform306->addChildren(*Shape307);

HAnimSegment295->addChildren(*Transform306);

CTransform* Transform308 = (CTransform *)(m_pScene.createNode("Transform"));
Transform308->setTranslation(new float[3]{-0.05000000074505806,0.4659999907016754,0});
CShape* Shape309 = (CShape *)(m_pScene.createNode("Shape"));
Shape309->setUSE("skinsphere");
Transform308->addChildren(*Shape309);

HAnimSegment295->addChildren(*Transform308);

CTransform* Transform310 = (CTransform *)(m_pScene.createNode("Transform"));
Transform310->setTranslation(new float[3]{-0.17000000178813934,0.30000001192092896,0});
CShape* Shape311 = (CShape *)(m_pScene.createNode("Shape"));
Shape311->setUSE("skinsphere");
Transform310->addChildren(*Shape311);

HAnimSegment295->addChildren(*Transform310);

CTransform* Transform312 = (CTransform *)(m_pScene.createNode("Transform"));
Transform312->setTranslation(new float[3]{-0.05999999865889549,0.30000001192092896,0});
CShape* Shape313 = (CShape *)(m_pScene.createNode("Shape"));
Shape313->setUSE("skinsphere");
Transform312->addChildren(*Shape313);

HAnimSegment295->addChildren(*Transform312);

CTransform* Transform314 = (CTransform *)(m_pScene.createNode("Transform"));
Transform314->setTranslation(new float[3]{-0.10000000149011612,0.30000001192092896,-0.05000000074505806});
CShape* Shape315 = (CShape *)(m_pScene.createNode("Shape"));
Shape315->setUSE("skinsphere");
Transform314->addChildren(*Shape315);

HAnimSegment295->addChildren(*Transform314);

CTransform* Transform316 = (CTransform *)(m_pScene.createNode("Transform"));
Transform316->setTranslation(new float[3]{-0.10000000149011612,0.30000001192092896,0.05000000074505806});
CShape* Shape317 = (CShape *)(m_pScene.createNode("Shape"));
Shape317->setUSE("skinsphere");
Transform316->addChildren(*Shape317);

HAnimSegment295->addChildren(*Transform316);

CHAnimSite* HAnimSite318 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite318->setName("r_lateral_malleolus");
HAnimSite318->setDEF("Joe_r_lateral_malleolus");
HAnimSite318->setTranslation(new float[3]{-0.15000000596046448,0.07000000029802322,0});
CShape* Shape319 = (CShape *)(m_pScene.createNode("Shape"));
Shape319->setUSE("sitebox");
HAnimSite318->addChildren(*Shape319);

HAnimSegment295->addChildren(*HAnimSite318);

CHAnimSite* HAnimSite320 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite320->setName("r_medial_malleolus");
HAnimSite320->setDEF("Joe_r_medial_malleolus");
HAnimSite320->setTranslation(new float[3]{-0.08500000089406967,0.0860000029206276,0.012500000186264515});
CShape* Shape321 = (CShape *)(m_pScene.createNode("Shape"));
Shape321->setUSE("sitebox");
HAnimSite320->addChildren(*Shape321);

HAnimSegment295->addChildren(*HAnimSite320);

HAnimJoint294->addChildren(*HAnimSegment295);

CHAnimJoint* HAnimJoint322 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint322->setName("r_ankle");
HAnimJoint322->setDEF("Joe_r_ankle");
HAnimJoint322->setCenter(new float[3]{-0.11500000208616257,0.0689999982714653,0});
HAnimJoint322->setSkinCoordIndex(new int[4]{370,371,372,373});
HAnimJoint322->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint322->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint322->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment323 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment323->setName("r_hindfoot");
HAnimSegment323->setDEF("Joe_r_hindfoot");
CTransform* Transform324 = (CTransform *)(m_pScene.createNode("Transform"));
Transform324->setTranslation(new float[3]{-0.10000000149011612,0.07119999825954437,0});
CShape* Shape325 = (CShape *)(m_pScene.createNode("Shape"));
Shape325->setUSE("jointbox");
Transform324->addChildren(*Shape325);

HAnimSegment323->addChildren(*Transform324);

CShape* Shape326 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet327 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet327->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate328 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate328->setPoint(new float[6]{-0.10000000149011612,0.07119999825954437,0,-0.10000000149011612,0.014999999664723873,-0.009999999776482582});
IndexedLineSet327->setCoord(*Coordinate328);

Shape326->setGeometry(IndexedLineSet327);

CAppearance* Appearance329 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance329->setUSE("SegmentLine");
Shape326->setAppearance(*Appearance329);

HAnimSegment323->addChildren(*Shape326);

CTransform* Transform330 = (CTransform *)(m_pScene.createNode("Transform"));
Transform330->setTranslation(new float[3]{-0.15000000596046448,0.07000000029802322,0});
CShape* Shape331 = (CShape *)(m_pScene.createNode("Shape"));
Shape331->setUSE("skinsphere");
Transform330->addChildren(*Shape331);

HAnimSegment323->addChildren(*Transform330);

CTransform* Transform332 = (CTransform *)(m_pScene.createNode("Transform"));
Transform332->setTranslation(new float[3]{-0.08500000089406967,0.0860000029206276,0.012500000186264515});
CShape* Shape333 = (CShape *)(m_pScene.createNode("Shape"));
Shape333->setUSE("skinsphere");
Transform332->addChildren(*Shape333);

HAnimSegment323->addChildren(*Transform332);

CTransform* Transform334 = (CTransform *)(m_pScene.createNode("Transform"));
Transform334->setTranslation(new float[3]{-0.11500000208616257,0.0689999982714653,-0.04500000178813934});
CShape* Shape335 = (CShape *)(m_pScene.createNode("Shape"));
Shape335->setUSE("skinsphere");
Transform334->addChildren(*Shape335);

HAnimSegment323->addChildren(*Transform334);

CTransform* Transform336 = (CTransform *)(m_pScene.createNode("Transform"));
Transform336->setTranslation(new float[3]{-0.11699999868869781,0.09749999642372131,0.061500001698732376});
CShape* Shape337 = (CShape *)(m_pScene.createNode("Shape"));
Shape337->setUSE("skinsphere");
Transform336->addChildren(*Shape337);

HAnimSegment323->addChildren(*Transform336);

CHAnimSite* HAnimSite338 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite338->setName("r_sphyrion");
HAnimSite338->setDEF("Joe_r_sphyrion");
HAnimSite338->setTranslation(new float[3]{-0.09000000357627869,0.0560000017285347,0.012500000186264515});
CShape* Shape339 = (CShape *)(m_pScene.createNode("Shape"));
Shape339->setUSE("sitebox");
HAnimSite338->addChildren(*Shape339);

HAnimSegment323->addChildren(*HAnimSite338);

CHAnimSite* HAnimSite340 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite340->setName("r_calcaneous_post");
HAnimSite340->setDEF("Joe_r_calcaneous_post");
HAnimSite340->setTranslation(new float[3]{-0.11500000208616257,0.03999999910593033,-0.054999999701976776});
CShape* Shape341 = (CShape *)(m_pScene.createNode("Shape"));
Shape341->setUSE("sitebox");
HAnimSite340->addChildren(*Shape341);

HAnimSegment323->addChildren(*HAnimSite340);

HAnimJoint322->addChildren(*HAnimSegment323);

CHAnimJoint* HAnimJoint342 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint342->setName("r_subtalar");
HAnimJoint342->setDEF("Joe_r_subtalar");
HAnimJoint342->setCenter(new float[3]{-0.10000000149011612,0.014999999664723873,-0.009999999776482582});
HAnimJoint342->setSkinCoordIndex(new int[3]{374,375,376});
HAnimJoint342->setSkinCoordWeight(new float[3]{1,1,1}, 3);
HAnimJoint342->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint342->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment343 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment343->setName("r_midproximal");
HAnimSegment343->setDEF("Joe_r_midproximal");
CTransform* Transform344 = (CTransform *)(m_pScene.createNode("Transform"));
Transform344->setTranslation(new float[3]{-0.10000000149011612,0.014999999664723873,-0.009999999776482582});
CShape* Shape345 = (CShape *)(m_pScene.createNode("Shape"));
Shape345->setUSE("jointbox");
Transform344->addChildren(*Shape345);

HAnimSegment343->addChildren(*Transform344);

CShape* Shape346 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet347 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet347->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate348 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate348->setPoint(new float[6]{-0.10000000149011612,0.014999999664723873,-0.009999999776482582,-0.10000000149011612,0.019999999552965164,0.07000000029802322});
IndexedLineSet347->setCoord(*Coordinate348);

Shape346->setGeometry(IndexedLineSet347);

CAppearance* Appearance349 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance349->setUSE("SegmentLine");
Shape346->setAppearance(*Appearance349);

HAnimSegment343->addChildren(*Shape346);

CTransform* Transform350 = (CTransform *)(m_pScene.createNode("Transform"));
Transform350->setTranslation(new float[3]{-0.13750000298023224,0.006000000052154064,-0.029999999329447746});
CShape* Shape351 = (CShape *)(m_pScene.createNode("Shape"));
Shape351->setUSE("skinsphere");
Transform350->addChildren(*Shape351);

HAnimSegment343->addChildren(*Transform350);

CTransform* Transform352 = (CTransform *)(m_pScene.createNode("Transform"));
Transform352->setTranslation(new float[3]{-0.0949999988079071,0.006000000052154064,-0.029999999329447746});
CShape* Shape353 = (CShape *)(m_pScene.createNode("Shape"));
Shape353->setUSE("skinsphere");
Transform352->addChildren(*Shape353);

HAnimSegment343->addChildren(*Transform352);

CTransform* Transform354 = (CTransform *)(m_pScene.createNode("Transform"));
Transform354->setTranslation(new float[3]{-0.0949999988079071,0.006000000052154064,-0.029999999329447746});
CShape* Shape355 = (CShape *)(m_pScene.createNode("Shape"));
Shape355->setUSE("skinsphere");
Transform354->addChildren(*Shape355);

HAnimSegment343->addChildren(*Transform354);

HAnimJoint342->addChildren(*HAnimSegment343);

CHAnimJoint* HAnimJoint356 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint356->setName("r_midtarsal");
HAnimJoint356->setDEF("Joe_r_midtarsal");
HAnimJoint356->setCenter(new float[3]{-0.11500000208616257,0.03700000047683716,0.09000000357627869});
HAnimJoint356->setSkinCoordIndex(new int[4]{377,378,379,380});
HAnimJoint356->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint356->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint356->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment357 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment357->setName("r_middistal");
HAnimSegment357->setDEF("Joe_r_middistal");
CTransform* Transform358 = (CTransform *)(m_pScene.createNode("Transform"));
Transform358->setTranslation(new float[3]{-0.10000000149011612,0.019999999552965164,0.07000000029802322});
CShape* Shape359 = (CShape *)(m_pScene.createNode("Shape"));
Shape359->setUSE("jointbox");
Transform358->addChildren(*Shape359);

HAnimSegment357->addChildren(*Transform358);

CShape* Shape360 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet361 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet361->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate362 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate362->setPoint(new float[6]{-0.10000000149011612,0.019999999552965164,0.07000000029802322,-0.10000000149011612,0.009999999776482582,0.14000000059604645});
IndexedLineSet361->setCoord(*Coordinate362);

Shape360->setGeometry(IndexedLineSet361);

CAppearance* Appearance363 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance363->setUSE("SegmentLine");
Shape360->setAppearance(*Appearance363);

HAnimSegment357->addChildren(*Shape360);

CTransform* Transform364 = (CTransform *)(m_pScene.createNode("Transform"));
Transform364->setTranslation(new float[3]{-0.11500000208616257,0.05999999865889549,0.10000000149011612});
CShape* Shape365 = (CShape *)(m_pScene.createNode("Shape"));
Shape365->setUSE("skinsphere");
Transform364->addChildren(*Shape365);

HAnimSegment357->addChildren(*Transform364);

CTransform* Transform366 = (CTransform *)(m_pScene.createNode("Transform"));
Transform366->setTranslation(new float[3]{-0.11500000208616257,0,0.07000000029802322});
CShape* Shape367 = (CShape *)(m_pScene.createNode("Shape"));
Shape367->setUSE("skinsphere");
Transform366->addChildren(*Shape367);

HAnimSegment357->addChildren(*Transform366);

CTransform* Transform368 = (CTransform *)(m_pScene.createNode("Transform"));
Transform368->setTranslation(new float[3]{-0.16500000655651093,0,0.07000000029802322});
CShape* Shape369 = (CShape *)(m_pScene.createNode("Shape"));
Shape369->setUSE("skinsphere");
Transform368->addChildren(*Shape369);

HAnimSegment357->addChildren(*Transform368);

CTransform* Transform370 = (CTransform *)(m_pScene.createNode("Transform"));
Transform370->setTranslation(new float[3]{-0.16500000655651093,0,0.07000000029802322});
CShape* Shape371 = (CShape *)(m_pScene.createNode("Shape"));
Shape371->setUSE("skinsphere");
Transform370->addChildren(*Shape371);

HAnimSegment357->addChildren(*Transform370);

CHAnimSite* HAnimSite372 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite372->setName("r_metatarsal_pha1");
HAnimSite372->setDEF("Joe_r_metatarsal_pha1");
HAnimSite372->setTranslation(new float[3]{-0.11500000208616257,0.019999999552965164,0.12200000137090683});
CShape* Shape373 = (CShape *)(m_pScene.createNode("Shape"));
Shape373->setUSE("sitebox");
HAnimSite372->addChildren(*Shape373);

HAnimSegment357->addChildren(*HAnimSite372);

HAnimJoint356->addChildren(*HAnimSegment357);

CHAnimJoint* HAnimJoint374 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint374->setName("r_metatarsal");
HAnimJoint374->setDEF("Joe_r_metatarsal");
HAnimJoint374->setCenter(new float[3]{-0.10000000149011612,0.009999999776482582,0.14000000059604645});
HAnimJoint374->setSkinCoordIndex(new int[9]{381,382,383,384,385,386,387,388,389});
HAnimJoint374->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint374->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint374->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment375 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment375->setName("r_forefoot");
HAnimSegment375->setDEF("Joe_r_forefoot");
CTransform* Transform376 = (CTransform *)(m_pScene.createNode("Transform"));
Transform376->setTranslation(new float[3]{-0.10859999805688858,0.009999999776482582,0.14000000059604645});
CShape* Shape377 = (CShape *)(m_pScene.createNode("Shape"));
Shape377->setUSE("jointbox");
Transform376->addChildren(*Shape377);

HAnimSegment375->addChildren(*Transform376);

CShape* Shape378 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet379 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet379->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate380 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate380->setPoint(new float[6]{-0.10000000149011612,0.009999999776482582,0.14000000059604645,-0.10429999977350235,0.0015999999595806003,0.20000000298023224});
IndexedLineSet379->setCoord(*Coordinate380);

Shape378->setGeometry(IndexedLineSet379);

CAppearance* Appearance381 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance381->setUSE("SegmentLine");
Shape378->setAppearance(*Appearance381);

HAnimSegment375->addChildren(*Shape378);

CTransform* Transform382 = (CTransform *)(m_pScene.createNode("Transform"));
Transform382->setTranslation(new float[3]{-0.11500000208616257,0.03999999910593033,0.12999999523162842});
CShape* Shape383 = (CShape *)(m_pScene.createNode("Shape"));
Shape383->setUSE("skinsphere");
Transform382->addChildren(*Shape383);

HAnimSegment375->addChildren(*Transform382);

CTransform* Transform384 = (CTransform *)(m_pScene.createNode("Transform"));
Transform384->setTranslation(new float[3]{-0.125,0,0.11999999731779099});
CShape* Shape385 = (CShape *)(m_pScene.createNode("Shape"));
Shape385->setUSE("skinsphere");
Transform384->addChildren(*Shape385);

HAnimSegment375->addChildren(*Transform384);

CTransform* Transform386 = (CTransform *)(m_pScene.createNode("Transform"));
Transform386->setTranslation(new float[3]{-0.16500000655651093,0,0.11999999731779099});
CShape* Shape387 = (CShape *)(m_pScene.createNode("Shape"));
Shape387->setUSE("skinsphere");
Transform386->addChildren(*Shape387);

HAnimSegment375->addChildren(*Transform386);

CTransform* Transform388 = (CTransform *)(m_pScene.createNode("Transform"));
Transform388->setTranslation(new float[3]{-0.08699999749660492,0,0.12200000137090683});
CShape* Shape389 = (CShape *)(m_pScene.createNode("Shape"));
Shape389->setUSE("skinsphere");
Transform388->addChildren(*Shape389);

HAnimSegment375->addChildren(*Transform388);

CTransform* Transform390 = (CTransform *)(m_pScene.createNode("Transform"));
Transform390->setTranslation(new float[3]{-0.09000000357627869,0.012000000104308128,0.18799999356269836});
CShape* Shape391 = (CShape *)(m_pScene.createNode("Shape"));
Shape391->setUSE("skinsphere");
Transform390->addChildren(*Shape391);

HAnimSegment375->addChildren(*Transform390);

CTransform* Transform392 = (CTransform *)(m_pScene.createNode("Transform"));
Transform392->setTranslation(new float[3]{-0.10999999940395355,0.010999999940395355,0.1899999976158142});
CShape* Shape393 = (CShape *)(m_pScene.createNode("Shape"));
Shape393->setUSE("skinsphere");
Transform392->addChildren(*Shape393);

HAnimSegment375->addChildren(*Transform392);

CTransform* Transform394 = (CTransform *)(m_pScene.createNode("Transform"));
Transform394->setTranslation(new float[3]{-0.12800000607967377,0.010999999940395355,0.1850000023841858});
CShape* Shape395 = (CShape *)(m_pScene.createNode("Shape"));
Shape395->setUSE("skinsphere");
Transform394->addChildren(*Shape395);

HAnimSegment375->addChildren(*Transform394);

CTransform* Transform396 = (CTransform *)(m_pScene.createNode("Transform"));
Transform396->setTranslation(new float[3]{-0.1420000046491623,0.010999999940395355,0.17800000309944153});
CShape* Shape397 = (CShape *)(m_pScene.createNode("Shape"));
Shape397->setUSE("skinsphere");
Transform396->addChildren(*Shape397);

HAnimSegment375->addChildren(*Transform396);

CTransform* Transform398 = (CTransform *)(m_pScene.createNode("Transform"));
Transform398->setTranslation(new float[3]{-0.15399999916553497,0.009999999776482582,0.1679999977350235});
CShape* Shape399 = (CShape *)(m_pScene.createNode("Shape"));
Shape399->setUSE("skinsphere");
Transform398->addChildren(*Shape399);

HAnimSegment375->addChildren(*Transform398);

CHAnimSite* HAnimSite400 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite400->setName("r_metatarsal_pha5");
HAnimSite400->setDEF("Joe_r_metatarsal_pha5");
HAnimSite400->setTranslation(new float[3]{-0.16500000655651093,0.009999999776482582,0.11999999731779099});
CShape* Shape401 = (CShape *)(m_pScene.createNode("Shape"));
Shape401->setUSE("sitebox");
HAnimSite400->addChildren(*Shape401);

HAnimSegment375->addChildren(*HAnimSite400);

CHAnimSite* HAnimSite402 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite402->setName("r_digit2");
HAnimSite402->setDEF("Joe_r_digit2");
HAnimSite402->setTranslation(new float[3]{-0.10999999940395355,0.010999999940395355,0.1899999976158142});
CShape* Shape403 = (CShape *)(m_pScene.createNode("Shape"));
Shape403->setUSE("sitebox");
HAnimSite402->addChildren(*Shape403);

HAnimSegment375->addChildren(*HAnimSite402);

HAnimJoint374->addChildren(*HAnimSegment375);

HAnimJoint356->addChildren(*HAnimJoint374);

HAnimJoint342->addChildren(*HAnimJoint356);

HAnimJoint322->addChildren(*HAnimJoint342);

HAnimJoint294->addChildren(*HAnimJoint322);

HAnimJoint268->addChildren(*HAnimJoint294);

HAnimJoint102->addChildren(*HAnimJoint268);

HAnimJoint90->addChildren(*HAnimJoint102);

CHAnimJoint* HAnimJoint404 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint404->setName("vl5");
HAnimJoint404->setDEF("Joe_vl5");
HAnimJoint404->setCenter(new float[3]{0,1.0449999570846558,-0.0949999988079071});
HAnimJoint404->setSkinCoordIndex(new int[2]{28,76});
HAnimJoint404->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint404->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint404->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment405 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment405->setName("toPelvis");
HAnimSegment405->setDEF("Joe_toPelvisMarker");
CShape* Shape406 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet407 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet407->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate408 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate408->setPoint(new float[6]{0,1.0449999570846558,-0.0949999988079071,0,0.914900004863739,0.0015999999595806003});
IndexedLineSet407->setCoord(*Coordinate408);

Shape406->setGeometry(IndexedLineSet407);

CAppearance* Appearance409 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance409->setUSE("SegmentLine");
Shape406->setAppearance(*Appearance409);

HAnimSegment405->addChildren(*Shape406);

HAnimJoint404->addChildren(*HAnimSegment405);

CHAnimSegment* HAnimSegment410 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment410->setName("l5");
HAnimSegment410->setDEF("Joe_l5");
CShape* Shape411 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet412 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet412->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate413 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate413->setPoint(new float[6]{0,1.0449999570846558,-0.0949999988079071,0,1.0679999589920044,-0.08500000089406967});
IndexedLineSet412->setCoord(*Coordinate413);

Shape411->setGeometry(IndexedLineSet412);

CAppearance* Appearance414 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance414->setUSE("SegmentLine");
Shape411->setAppearance(*Appearance414);

HAnimSegment410->addChildren(*Shape411);

CHAnimSite* HAnimSite415 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite415->setName("waist_preferred_post");
HAnimSite415->setDEF("Joe_waist_preferred_post");
HAnimSite415->setTranslation(new float[3]{0,1.0915000438690186,-0.10909999907016754});
CShape* Shape416 = (CShape *)(m_pScene.createNode("Shape"));
Shape416->setUSE("sitebox");
HAnimSite415->addChildren(*Shape416);

HAnimSegment410->addChildren(*HAnimSite415);

CHAnimSite* HAnimSite417 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite417->setName("navel");
HAnimSite417->setDEF("Joe_navel");
HAnimSite417->setTranslation(new float[3]{0,1.0722500085830688,0.09000000357627869});
CShape* Shape418 = (CShape *)(m_pScene.createNode("Shape"));
Shape418->setUSE("sitebox");
HAnimSite417->addChildren(*Shape418);

HAnimSegment410->addChildren(*HAnimSite417);

HAnimJoint404->addChildren(*HAnimSegment410);

CHAnimJoint* HAnimJoint419 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint419->setName("vl4");
HAnimJoint419->setDEF("Joe_vl4");
HAnimJoint419->setCenter(new float[3]{0,1.068,-0.085});
HAnimJoint419->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint419->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment420 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment420->setName("l4");
HAnimSegment420->setDEF("Joe_l4");
CShape* Shape421 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet422 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet422->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate423 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate423->setPoint(new float[6]{0,1.0679999589920044,-0.08500000089406967,0,1.0920000076293945,-0.07249999791383743});
IndexedLineSet422->setCoord(*Coordinate423);

Shape421->setGeometry(IndexedLineSet422);

CAppearance* Appearance424 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance424->setUSE("SegmentLine");
Shape421->setAppearance(*Appearance424);

HAnimSegment420->addChildren(*Shape421);

CTransform* Transform425 = (CTransform *)(m_pScene.createNode("Transform"));
Transform425->setTranslation(new float[3]{0,1.068,-0.085});
CShape* Shape426 = (CShape *)(m_pScene.createNode("Shape"));
Shape426->setUSE("jointbox");
Transform425->addChildren(*Shape426);

HAnimSegment420->addChildren(*Transform425);

HAnimJoint419->addChildren(*HAnimSegment420);

CHAnimJoint* HAnimJoint427 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint427->setName("vl3");
HAnimJoint427->setDEF("Joe_vl3");
HAnimJoint427->setCenter(new float[3]{0,1.092,-0.0725});
HAnimJoint427->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint427->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment428 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment428->setName("l3");
HAnimSegment428->setDEF("Joe_l3");
CShape* Shape429 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet430 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet430->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate431 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate431->setPoint(new float[6]{0,1.092,-0.0725,0,1.12,-0.065});
IndexedLineSet430->setCoord(*Coordinate431);

Shape429->setGeometry(IndexedLineSet430);

CAppearance* Appearance432 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance432->setUSE("SegmentLine");
Shape429->setAppearance(*Appearance432);

HAnimSegment428->addChildren(*Shape429);

CTransform* Transform433 = (CTransform *)(m_pScene.createNode("Transform"));
Transform433->setTranslation(new float[3]{0,1.092,-0.0725});
CShape* Shape434 = (CShape *)(m_pScene.createNode("Shape"));
Shape434->setUSE("jointbox");
Transform433->addChildren(*Shape434);

HAnimSegment428->addChildren(*Transform433);

HAnimJoint427->addChildren(*HAnimSegment428);

CHAnimJoint* HAnimJoint435 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint435->setName("vl2");
HAnimJoint435->setDEF("Joe_vl2");
HAnimJoint435->setCenter(new float[3]{0,1.12,-0.065});
HAnimJoint435->setSkinCoordIndex(new int[9]{16,18,25,83,84,85,86,87,88});
HAnimJoint435->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,0.7,1,0.8}, 9);
HAnimJoint435->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint435->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment436 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment436->setName("l2");
HAnimSegment436->setDEF("Joe_l2");
CShape* Shape437 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet438 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet438->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate439 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate439->setPoint(new float[6]{0,1.1200000047683716,-0.06499999761581421,0,1.145900011062622,-0.0625});
IndexedLineSet438->setCoord(*Coordinate439);

Shape437->setGeometry(IndexedLineSet438);

CAppearance* Appearance440 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance440->setUSE("SegmentLine");
Shape437->setAppearance(*Appearance440);

HAnimSegment436->addChildren(*Shape437);

CTransform* Transform441 = (CTransform *)(m_pScene.createNode("Transform"));
Transform441->setTranslation(new float[3]{0,1.1200000047683716,-0.06499999761581421});
CShape* Shape442 = (CShape *)(m_pScene.createNode("Shape"));
Shape442->setUSE("jointbox");
Transform441->addChildren(*Shape442);

HAnimSegment436->addChildren(*Transform441);

CTransform* Transform443 = (CTransform *)(m_pScene.createNode("Transform"));
Transform443->setTranslation(new float[3]{-0.08699999749660492,1.190000057220459,-0.09000000357627869});
CShape* Shape444 = (CShape *)(m_pScene.createNode("Shape"));
Shape444->setUSE("skinsphere");
Transform443->addChildren(*Shape444);

HAnimSegment436->addChildren(*Transform443);

CTransform* Transform445 = (CTransform *)(m_pScene.createNode("Transform"));
Transform445->setTranslation(new float[3]{0.08699999749660492,1.190000057220459,-0.09000000357627869});
CShape* Shape446 = (CShape *)(m_pScene.createNode("Shape"));
Shape446->setUSE("skinsphere");
Transform445->addChildren(*Shape446);

HAnimSegment436->addChildren(*Transform445);

CTransform* Transform447 = (CTransform *)(m_pScene.createNode("Transform"));
Transform447->setTranslation(new float[3]{0.1720000058412552,1.3200000524520874,-0.029999999329447746});
CShape* Shape448 = (CShape *)(m_pScene.createNode("Shape"));
Shape448->setUSE("skinsphere");
Transform447->addChildren(*Shape448);

HAnimSegment436->addChildren(*Transform447);

CTransform* Transform449 = (CTransform *)(m_pScene.createNode("Transform"));
Transform449->setTranslation(new float[3]{-0.1720000058412552,1.3200000524520874,-0.029999999329447746});
CShape* Shape450 = (CShape *)(m_pScene.createNode("Shape"));
Shape450->setUSE("skinsphere");
Transform449->addChildren(*Shape450);

HAnimSegment436->addChildren(*Transform449);

CTransform* Transform451 = (CTransform *)(m_pScene.createNode("Transform"));
Transform451->setTranslation(new float[3]{0.15000000596046448,1.2300000190734863,-0.014999999664723873});
CShape* Shape452 = (CShape *)(m_pScene.createNode("Shape"));
Shape452->setUSE("skinsphere");
Transform451->addChildren(*Shape452);

HAnimSegment436->addChildren(*Transform451);

CTransform* Transform453 = (CTransform *)(m_pScene.createNode("Transform"));
Transform453->setTranslation(new float[3]{-0.15000000596046448,1.2300000190734863,-0.014999999664723873});
CShape* Shape454 = (CShape *)(m_pScene.createNode("Shape"));
Shape454->setUSE("skinsphere");
Transform453->addChildren(*Shape454);

HAnimSegment436->addChildren(*Transform453);

CHAnimSite* HAnimSite455 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite455->setName("r_rib10");
HAnimSite455->setDEF("Joe_r_rib10");
HAnimSite455->setTranslation(new float[3]{-0.08699999749660492,1.190000057220459,0.09000000357627869});
CShape* Shape456 = (CShape *)(m_pScene.createNode("Shape"));
Shape456->setUSE("sitebox");
HAnimSite455->addChildren(*Shape456);

HAnimSegment436->addChildren(*HAnimSite455);

CHAnimSite* HAnimSite457 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite457->setName("l_rib10");
HAnimSite457->setDEF("Joe_l_rib10");
HAnimSite457->setTranslation(new float[3]{0.08699999749660492,1.190000057220459,0.09000000357627869});
CShape* Shape458 = (CShape *)(m_pScene.createNode("Shape"));
Shape458->setUSE("sitebox");
HAnimSite457->addChildren(*Shape458);

HAnimSegment436->addChildren(*HAnimSite457);

CHAnimSite* HAnimSite459 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite459->setName("rib10_midspine");
HAnimSite459->setDEF("Joe_rib10_midspine");
HAnimSite459->setTranslation(new float[3]{0,1.1908,-0.1113});
CShape* Shape460 = (CShape *)(m_pScene.createNode("Shape"));
Shape460->setUSE("sitebox");
HAnimSite459->addChildren(*Shape460);

HAnimSegment436->addChildren(*HAnimSite459);

HAnimJoint435->addChildren(*HAnimSegment436);

CHAnimJoint* HAnimJoint461 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint461->setName("vl1");
HAnimJoint461->setDEF("Joe_vl1");
HAnimJoint461->setCenter(new float[3]{0,1.1459,-0.0625});
HAnimJoint461->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint461->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment462 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment462->setName("l1");
HAnimSegment462->setDEF("Joe_l1");
CShape* Shape463 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet464 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet464->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate465 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate465->setPoint(new float[6]{0,1.1459,-0.0625,0,1.179,-0.068});
IndexedLineSet464->setCoord(*Coordinate465);

Shape463->setGeometry(IndexedLineSet464);

CAppearance* Appearance466 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance466->setUSE("SegmentLine");
Shape463->setAppearance(*Appearance466);

HAnimSegment462->addChildren(*Shape463);

CTransform* Transform467 = (CTransform *)(m_pScene.createNode("Transform"));
Transform467->setTranslation(new float[3]{0,1.1459,-0.0625});
CShape* Shape468 = (CShape *)(m_pScene.createNode("Shape"));
Shape468->setUSE("jointbox");
Transform467->addChildren(*Shape468);

HAnimSegment462->addChildren(*Transform467);

HAnimJoint461->addChildren(*HAnimSegment462);

CHAnimJoint* HAnimJoint469 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint469->setName("vt12");
HAnimJoint469->setDEF("Joe_vt12");
HAnimJoint469->setCenter(new float[3]{0,1.1790000200271606,-0.06800000369548798});
HAnimJoint469->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint469->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment470 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment470->setName("t12");
HAnimSegment470->setDEF("Joe_t12");
CShape* Shape471 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet472 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet472->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate473 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate473->setPoint(new float[6]{0,1.1790000200271606,-0.06800000369548798,0,1.2419999837875366,-0.09000000357627869});
IndexedLineSet472->setCoord(*Coordinate473);

Shape471->setGeometry(IndexedLineSet472);

CAppearance* Appearance474 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance474->setUSE("SegmentLine");
Shape471->setAppearance(*Appearance474);

HAnimSegment470->addChildren(*Shape471);

CTransform* Transform475 = (CTransform *)(m_pScene.createNode("Transform"));
Transform475->setTranslation(new float[3]{0,1.1790000200271606,-0.06800000369548798});
CShape* Shape476 = (CShape *)(m_pScene.createNode("Shape"));
Shape476->setUSE("jointbox");
Transform475->addChildren(*Shape476);

HAnimSegment470->addChildren(*Transform475);

HAnimJoint469->addChildren(*HAnimSegment470);

CHAnimJoint* HAnimJoint477 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint477->setName("vt11");
HAnimJoint477->setDEF("Joe_vt11");
HAnimJoint477->setCenter(new float[3]{0,1.267899990081787,-0.08100000023841858});
HAnimJoint477->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint477->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment478 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment478->setName("t11");
HAnimSegment478->setDEF("Joe_t11");
CShape* Shape479 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet480 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet480->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate481 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate481->setPoint(new float[6]{0,1.2144999504089355,-0.0754999965429306,0,1.2419999837875366,-0.09000000357627869});
IndexedLineSet480->setCoord(*Coordinate481);

Shape479->setGeometry(IndexedLineSet480);

CAppearance* Appearance482 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance482->setUSE("SegmentLine");
Shape479->setAppearance(*Appearance482);

HAnimSegment478->addChildren(*Shape479);

CTransform* Transform483 = (CTransform *)(m_pScene.createNode("Transform"));
Transform483->setTranslation(new float[3]{0,1.2144999504089355,-0.0754999965429306});
CShape* Shape484 = (CShape *)(m_pScene.createNode("Shape"));
Shape484->setUSE("jointbox");
Transform483->addChildren(*Shape484);

HAnimSegment478->addChildren(*Transform483);

HAnimJoint477->addChildren(*HAnimSegment478);

CHAnimJoint* HAnimJoint485 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint485->setName("vt10");
HAnimJoint485->setDEF("Joe_vt10");
HAnimJoint485->setCenter(new float[3]{0,1.2419999837875366,-0.09000000357627869});
HAnimJoint485->setSkinCoordIndex(new int[1]{15});
HAnimJoint485->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint485->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint485->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment486 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment486->setName("t10");
HAnimSegment486->setDEF("Joe_t10");
CShape* Shape487 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet488 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet488->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate489 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate489->setPoint(new float[6]{0,1.2419999837875366,-0.09000000357627869,0,1.2680000066757202,-0.10000000149011612});
IndexedLineSet488->setCoord(*Coordinate489);

Shape487->setGeometry(IndexedLineSet488);

CAppearance* Appearance490 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance490->setUSE("SegmentLine");
Shape487->setAppearance(*Appearance490);

HAnimSegment486->addChildren(*Shape487);

CTransform* Transform491 = (CTransform *)(m_pScene.createNode("Transform"));
Transform491->setTranslation(new float[3]{0,1.2419999837875366,-0.09000000357627869});
CShape* Shape492 = (CShape *)(m_pScene.createNode("Shape"));
Shape492->setUSE("jointbox");
Transform491->addChildren(*Shape492);

HAnimSegment486->addChildren(*Transform491);

CHAnimSite* HAnimSite493 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite493->setName("substernale");
HAnimSite493->setDEF("Joe_substernale");
HAnimSite493->setTranslation(new float[3]{0,1.25,0.11299999803304672});
CShape* Shape494 = (CShape *)(m_pScene.createNode("Shape"));
Shape494->setUSE("sitebox");
HAnimSite493->addChildren(*Shape494);

HAnimSegment486->addChildren(*HAnimSite493);

HAnimJoint485->addChildren(*HAnimSegment486);

CHAnimJoint* HAnimJoint495 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint495->setName("vt9");
HAnimJoint495->setDEF("Joe_vt9");
HAnimJoint495->setCenter(new float[3]{0,1.2680000066757202,-0.10000000149011612});
HAnimJoint495->setSkinCoordIndex(new int[2]{13,14});
HAnimJoint495->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint495->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint495->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment496 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment496->setName("t9");
HAnimSegment496->setDEF("Joe_t9");
CShape* Shape497 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet498 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet498->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate499 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate499->setPoint(new float[6]{0,1.2680000066757202,-0.10000000149011612,0,1.2940000295639038,-0.10999999940395355});
IndexedLineSet498->setCoord(*Coordinate499);

Shape497->setGeometry(IndexedLineSet498);

CAppearance* Appearance500 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance500->setUSE("SegmentLine");
Shape497->setAppearance(*Appearance500);

HAnimSegment496->addChildren(*Shape497);

CTransform* Transform501 = (CTransform *)(m_pScene.createNode("Transform"));
Transform501->setTranslation(new float[3]{0,1.2680000066757202,-0.10000000149011612});
CShape* Shape502 = (CShape *)(m_pScene.createNode("Shape"));
Shape502->setUSE("jointbox");
Transform501->addChildren(*Shape502);

HAnimSegment496->addChildren(*Transform501);

CHAnimSite* HAnimSite503 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite503->setName("r_thelion");
HAnimSite503->setDEF("Joe_r_thelion");
HAnimSite503->setTranslation(new float[3]{-0.11349999904632568,1.3179999589920044,0.0949999988079071});
CShape* Shape504 = (CShape *)(m_pScene.createNode("Shape"));
Shape504->setUSE("sitebox");
HAnimSite503->addChildren(*Shape504);

HAnimSegment496->addChildren(*HAnimSite503);

CHAnimSite* HAnimSite505 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite505->setName("l_thelion");
HAnimSite505->setDEF("Joe_l_thelion");
HAnimSite505->setTranslation(new float[3]{0.11349999904632568,1.3179999589920044,0.0949999988079071});
CShape* Shape506 = (CShape *)(m_pScene.createNode("Shape"));
Shape506->setUSE("sitebox");
HAnimSite505->addChildren(*Shape506);

HAnimSegment496->addChildren(*HAnimSite505);

HAnimJoint495->addChildren(*HAnimSegment496);

CHAnimJoint* HAnimJoint507 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint507->setName("vt8");
HAnimJoint507->setDEF("Joe_vt8");
HAnimJoint507->setCenter(new float[3]{0,1.2940000295639038,-0.10999999940395355});
HAnimJoint507->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint507->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment508 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment508->setName("t8");
HAnimSegment508->setDEF("Joe_t8");
CShape* Shape509 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet510 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet510->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate511 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate511->setPoint(new float[6]{0,1.2940000295639038,-0.10999999940395355,0,1.3519999980926514,-0.11999999731779099});
IndexedLineSet510->setCoord(*Coordinate511);

Shape509->setGeometry(IndexedLineSet510);

CAppearance* Appearance512 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance512->setUSE("SegmentLine");
Shape509->setAppearance(*Appearance512);

HAnimSegment508->addChildren(*Shape509);

CTransform* Transform513 = (CTransform *)(m_pScene.createNode("Transform"));
Transform513->setTranslation(new float[3]{0,1.2940000295639038,-0.10999999940395355});
CShape* Shape514 = (CShape *)(m_pScene.createNode("Shape"));
Shape514->setUSE("jointbox");
Transform513->addChildren(*Shape514);

HAnimSegment508->addChildren(*Transform513);

HAnimJoint507->addChildren(*HAnimSegment508);

CHAnimJoint* HAnimJoint515 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint515->setName("vt7");
HAnimJoint515->setDEF("Joe_vt7");
HAnimJoint515->setCenter(new float[3]{0,1.3229999542236328,-0.11550000309944153});
HAnimJoint515->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint515->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment516 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment516->setName("t7");
HAnimSegment516->setDEF("Joe_t7");
CShape* Shape517 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet518 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet518->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate519 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate519->setPoint(new float[6]{0,1.3519999980926514,-0.11999999731779099,0,1.38100004196167,-0.12349999696016312});
IndexedLineSet518->setCoord(*Coordinate519);

Shape517->setGeometry(IndexedLineSet518);

CAppearance* Appearance520 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance520->setUSE("SegmentLine");
Shape517->setAppearance(*Appearance520);

HAnimSegment516->addChildren(*Shape517);

CTransform* Transform521 = (CTransform *)(m_pScene.createNode("Transform"));
Transform521->setTranslation(new float[3]{0,1.3229999542236328,-0.11550000309944153});
CShape* Shape522 = (CShape *)(m_pScene.createNode("Shape"));
Shape522->setUSE("jointbox");
Transform521->addChildren(*Shape522);

HAnimSegment516->addChildren(*Transform521);

HAnimJoint515->addChildren(*HAnimSegment516);

CHAnimJoint* HAnimJoint523 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint523->setName("vt6");
HAnimJoint523->setDEF("Joe_vt6");
HAnimJoint523->setCenter(new float[3]{0,1.3519999980926514,-0.11999999731779099});
HAnimJoint523->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint523->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment524 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment524->setName("t6");
HAnimSegment524->setDEF("Joe_t6");
CShape* Shape525 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet526 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet526->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate527 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate527->setPoint(new float[6]{0,1.38100004196167,-0.12349999696016312,0,1.409999966621399,-0.12349999696016312});
IndexedLineSet526->setCoord(*Coordinate527);

Shape525->setGeometry(IndexedLineSet526);

CAppearance* Appearance528 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance528->setUSE("SegmentLine");
Shape525->setAppearance(*Appearance528);

HAnimSegment524->addChildren(*Shape525);

CTransform* Transform529 = (CTransform *)(m_pScene.createNode("Transform"));
Transform529->setTranslation(new float[3]{0,1.3519999980926514,-0.11999999731779099});
CShape* Shape530 = (CShape *)(m_pScene.createNode("Shape"));
Shape530->setUSE("jointbox");
Transform529->addChildren(*Shape530);

HAnimSegment524->addChildren(*Transform529);

HAnimJoint523->addChildren(*HAnimSegment524);

CHAnimJoint* HAnimJoint531 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint531->setName("vt5");
HAnimJoint531->setDEF("Joe_vt5");
HAnimJoint531->setCenter(new float[3]{0,1.38100004196167,-0.12349999696016312});
HAnimJoint531->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint531->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment532 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment532->setName("t5");
HAnimSegment532->setDEF("Joe_t5");
CShape* Shape533 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet534 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet534->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate535 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate535->setPoint(new float[6]{0,1.409999966621399,-0.12349999696016312,0,1.437999963760376,-0.11999999731779099});
IndexedLineSet534->setCoord(*Coordinate535);

Shape533->setGeometry(IndexedLineSet534);

CAppearance* Appearance536 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance536->setUSE("SegmentLine");
Shape533->setAppearance(*Appearance536);

HAnimSegment532->addChildren(*Shape533);

CTransform* Transform537 = (CTransform *)(m_pScene.createNode("Transform"));
Transform537->setTranslation(new float[3]{0,1.38100004196167,-0.12349999696016312});
CShape* Shape538 = (CShape *)(m_pScene.createNode("Shape"));
Shape538->setUSE("jointbox");
Transform537->addChildren(*Shape538);

HAnimSegment532->addChildren(*Transform537);

HAnimJoint531->addChildren(*HAnimSegment532);

CHAnimJoint* HAnimJoint539 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint539->setName("vt4");
HAnimJoint539->setDEF("Joe_vt4");
HAnimJoint539->setCenter(new float[3]{0,1.409999966621399,-0.12349999696016312});
HAnimJoint539->setSkinCoordIndex(new int[1]{81});
HAnimJoint539->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint539->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint539->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment540 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment540->setName("t4");
HAnimSegment540->setDEF("Joe_t4");
CShape* Shape541 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet542 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet542->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate543 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate543->setPoint(new float[6]{0,1.409999966621399,-0.12349999696016312,0,1.437999963760376,-0.11999999731779099});
IndexedLineSet542->setCoord(*Coordinate543);

Shape541->setGeometry(IndexedLineSet542);

CAppearance* Appearance544 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance544->setUSE("SegmentLine");
Shape541->setAppearance(*Appearance544);

HAnimSegment540->addChildren(*Shape541);

CTransform* Transform545 = (CTransform *)(m_pScene.createNode("Transform"));
Transform545->setTranslation(new float[3]{0,1.409999966621399,-0.12349999696016312});
CShape* Shape546 = (CShape *)(m_pScene.createNode("Shape"));
Shape546->setUSE("jointbox");
Transform545->addChildren(*Shape546);

HAnimSegment540->addChildren(*Transform545);

CTransform* Transform547 = (CTransform *)(m_pScene.createNode("Transform"));
Transform547->setTranslation(new float[3]{0,1.409999966621399,-0.14499999582767487});
CShape* Shape548 = (CShape *)(m_pScene.createNode("Shape"));
Shape548->setUSE("skinsphere");
Transform547->addChildren(*Shape548);

HAnimSegment540->addChildren(*Transform547);

HAnimJoint539->addChildren(*HAnimSegment540);

CHAnimJoint* HAnimJoint549 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint549->setName("vt3");
HAnimJoint549->setDEF("Joe_vt3");
HAnimJoint549->setCenter(new float[3]{0,1.437999963760376,-0.11999999731779099});
HAnimJoint549->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint549->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment550 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment550->setName("t3");
HAnimSegment550->setDEF("Joe_t3");
CShape* Shape551 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet552 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet552->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate553 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate553->setPoint(new float[6]{0,1.437999963760376,-0.11999999731779099,0,1.468000054359436,-0.10499999672174454});
IndexedLineSet552->setCoord(*Coordinate553);

Shape551->setGeometry(IndexedLineSet552);

CAppearance* Appearance554 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance554->setUSE("SegmentLine");
Shape551->setAppearance(*Appearance554);

HAnimSegment550->addChildren(*Shape551);

CTransform* Transform555 = (CTransform *)(m_pScene.createNode("Transform"));
Transform555->setTranslation(new float[3]{0,1.437999963760376,-0.11999999731779099});
CShape* Shape556 = (CShape *)(m_pScene.createNode("Shape"));
Shape556->setUSE("jointbox");
Transform555->addChildren(*Shape556);

HAnimSegment550->addChildren(*Transform555);

HAnimJoint549->addChildren(*HAnimSegment550);

CHAnimJoint* HAnimJoint557 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint557->setName("vt2");
HAnimJoint557->setDEF("Joe_vt2");
HAnimJoint557->setCenter(new float[3]{0,1.468000054359436,-0.10499999672174454});
HAnimJoint557->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint557->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment558 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment558->setName("t2");
HAnimSegment558->setDEF("Joe_t2");
CShape* Shape559 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet560 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet560->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate561 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate561->setPoint(new float[6]{0,1.468000054359436,-0.10499999672174454,0,1.496999979019165,-0.09000000357627869});
IndexedLineSet560->setCoord(*Coordinate561);

Shape559->setGeometry(IndexedLineSet560);

CAppearance* Appearance562 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance562->setUSE("SegmentLine");
Shape559->setAppearance(*Appearance562);

HAnimSegment558->addChildren(*Shape559);

CTransform* Transform563 = (CTransform *)(m_pScene.createNode("Transform"));
Transform563->setTranslation(new float[3]{0,1.468000054359436,-0.10499999672174454});
CShape* Shape564 = (CShape *)(m_pScene.createNode("Shape"));
Shape564->setUSE("jointbox");
Transform563->addChildren(*Shape564);

HAnimSegment558->addChildren(*Transform563);

HAnimJoint557->addChildren(*HAnimSegment558);

CHAnimJoint* HAnimJoint565 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint565->setName("vt1");
HAnimJoint565->setDEF("Joe_vt1");
HAnimJoint565->setCenter(new float[3]{0,1.497,-0.09});
HAnimJoint565->setSkinCoordIndex(new int[2]{11,24});
HAnimJoint565->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint565->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint565->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment566 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment566->setName("t1");
HAnimSegment566->setDEF("Joe_t1");
CShape* Shape567 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet568 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet568->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate569 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate569->setPoint(new float[6]{0,1.497,-0.09,0,1.525,-0.072});
IndexedLineSet568->setCoord(*Coordinate569);

Shape567->setGeometry(IndexedLineSet568);

CAppearance* Appearance570 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance570->setUSE("SegmentLine");
Shape567->setAppearance(*Appearance570);

HAnimSegment566->addChildren(*Shape567);

CTransform* Transform571 = (CTransform *)(m_pScene.createNode("Transform"));
Transform571->setTranslation(new float[3]{0,1.497,-0.09});
CShape* Shape572 = (CShape *)(m_pScene.createNode("Shape"));
Shape572->setUSE("jointbox");
Transform571->addChildren(*Shape572);

HAnimSegment566->addChildren(*Transform571);

CHAnimSite* HAnimSite573 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite573->setName("suprasternale");
HAnimSite573->setDEF("Joe_suprasternale");
HAnimSite573->setTranslation(new float[3]{0,1.440000057220459,0.029999999329447746});
CShape* Shape574 = (CShape *)(m_pScene.createNode("Shape"));
Shape574->setUSE("sitebox");
HAnimSite573->addChildren(*Shape574);

HAnimSegment566->addChildren(*HAnimSite573);

CHAnimSite* HAnimSite575 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite575->setName("cervicale");
HAnimSite575->setDEF("Joe_cervicale");
HAnimSite575->setTranslation(new float[3]{0,1.5299999713897705,-0.08399999886751175});
CShape* Shape576 = (CShape *)(m_pScene.createNode("Shape"));
Shape576->setUSE("sitebox");
HAnimSite575->addChildren(*Shape576);

HAnimSegment566->addChildren(*HAnimSite575);

HAnimJoint565->addChildren(*HAnimSegment566);

CHAnimJoint* HAnimJoint577 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint577->setName("vc7");
HAnimJoint577->setDEF("Joe_vc7");
HAnimJoint577->setCenter(new float[3]{0,1.524999976158142,-0.07199999690055847});
HAnimJoint577->setSkinCoordIndex(new int[2]{74,75});
HAnimJoint577->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint577->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint577->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment578 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment578->setName("c7");
HAnimSegment578->setDEF("Joe_c7");
CShape* Shape579 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet580 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet580->setCoordIndex(new int[9]{0,1,-1,0,2,-1,0,3,-1});
CCoordinate* Coordinate581 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate581->setPoint(new float[12]{0,1.524999976158142,-0.07199999690055847,0.0820000022649765,1.448799967765808,-0.03530000150203705,-0.029999999329447746,1.4600000381469727,0.019999999552965164,0,1.5399999618530273,-0.05000000074505806});
IndexedLineSet580->setCoord(*Coordinate581);

Shape579->setGeometry(IndexedLineSet580);

CAppearance* Appearance582 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance582->setUSE("SegmentLine");
Shape579->setAppearance(*Appearance582);

HAnimSegment578->addChildren(*Shape579);

CTransform* Transform583 = (CTransform *)(m_pScene.createNode("Transform"));
Transform583->setTranslation(new float[3]{0,1.524999976158142,-0.07199999690055847});
CShape* Shape584 = (CShape *)(m_pScene.createNode("Shape"));
Shape584->setUSE("jointbox");
Transform583->addChildren(*Shape584);

HAnimSegment578->addChildren(*Transform583);

CHAnimSite* HAnimSite585 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite585->setName("r_neck_base");
HAnimSite585->setDEF("Joe_r_neck_base");
HAnimSite585->setTranslation(new float[3]{-0.06459999829530716,1.5148999691009521,-0.03849999979138374});
CShape* Shape586 = (CShape *)(m_pScene.createNode("Shape"));
Shape586->setUSE("sitebox");
HAnimSite585->addChildren(*Shape586);

HAnimSegment578->addChildren(*HAnimSite585);

CHAnimSite* HAnimSite587 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite587->setName("l_neck_base");
HAnimSite587->setDEF("Joe_l_neck_base");
HAnimSite587->setTranslation(new float[3]{0.06459999829530716,1.5148999691009521,-0.03849999979138374});
CShape* Shape588 = (CShape *)(m_pScene.createNode("Shape"));
Shape588->setUSE("sitebox");
HAnimSite587->addChildren(*Shape588);

HAnimSegment578->addChildren(*HAnimSite587);

HAnimJoint577->addChildren(*HAnimSegment578);

CHAnimJoint* HAnimJoint589 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint589->setName("vc6");
HAnimJoint589->setDEF("Joe_vc6");
HAnimJoint589->setCenter(new float[3]{0,1.5399999618530273,-0.05000000074505806});
HAnimJoint589->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint589->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment590 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment590->setName("c6");
HAnimSegment590->setDEF("Joe_c6");
CShape* Shape591 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet592 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet592->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate593 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate593->setPoint(new float[6]{0,1.5399999618530273,-0.05000000074505806,0,1.5674999952316284,-0.025599999353289604});
IndexedLineSet592->setCoord(*Coordinate593);

Shape591->setGeometry(IndexedLineSet592);

CAppearance* Appearance594 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance594->setUSE("SegmentLine");
Shape591->setAppearance(*Appearance594);

HAnimSegment590->addChildren(*Shape591);

CTransform* Transform595 = (CTransform *)(m_pScene.createNode("Transform"));
Transform595->setTranslation(new float[3]{0,1.5399999618530273,-0.05000000074505806});
CShape* Shape596 = (CShape *)(m_pScene.createNode("Shape"));
Shape596->setUSE("jointbox");
Transform595->addChildren(*Shape596);

HAnimSegment590->addChildren(*Transform595);

HAnimJoint589->addChildren(*HAnimSegment590);

CHAnimJoint* HAnimJoint597 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint597->setName("vc5");
HAnimJoint597->setDEF("Joe_vc5");
HAnimJoint597->setCenter(new float[3]{0,1.5520000457763672,-0.03500000014901161});
HAnimJoint597->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint597->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment598 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment598->setName("c5");
HAnimSegment598->setDEF("Joe_c5");
CTransform* Transform599 = (CTransform *)(m_pScene.createNode("Transform"));
Transform599->setTranslation(new float[3]{0,1.5520000457763672,-0.03500000014901161});
CShape* Shape600 = (CShape *)(m_pScene.createNode("Shape"));
Shape600->setUSE("jointbox");
Transform599->addChildren(*Shape600);

HAnimSegment598->addChildren(*Transform599);

CShape* Shape601 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet602 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet602->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate603 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate603->setPoint(new float[6]{0,1.5674999952316284,-0.025599999353289604,0,1.5822499990463257,-0.01850000023841858});
IndexedLineSet602->setCoord(*Coordinate603);

Shape601->setGeometry(IndexedLineSet602);

CAppearance* Appearance604 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance604->setUSE("SegmentLine");
Shape601->setAppearance(*Appearance604);

HAnimSegment598->addChildren(*Shape601);

HAnimJoint597->addChildren(*HAnimSegment598);

CHAnimJoint* HAnimJoint605 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint605->setName("vc4");
HAnimJoint605->setDEF("Joe_vc4");
HAnimJoint605->setCenter(new float[3]{0,1.5674999952316284,-0.025599999353289604});
HAnimJoint605->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint605->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment606 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment606->setName("c4");
HAnimSegment606->setDEF("Joe_c4");
CShape* Shape607 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet608 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet608->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate609 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate609->setPoint(new float[6]{0,1.5822499990463257,-0.01850000023841858,0,1.5950000286102295,-0.017500000074505806});
IndexedLineSet608->setCoord(*Coordinate609);

Shape607->setGeometry(IndexedLineSet608);

CAppearance* Appearance610 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance610->setUSE("SegmentLine");
Shape607->setAppearance(*Appearance610);

HAnimSegment606->addChildren(*Shape607);

CTransform* Transform611 = (CTransform *)(m_pScene.createNode("Transform"));
Transform611->setTranslation(new float[3]{0,1.5674999952316284,-0.025599999353289604});
CShape* Shape612 = (CShape *)(m_pScene.createNode("Shape"));
Shape612->setUSE("jointbox");
Transform611->addChildren(*Shape612);

HAnimSegment606->addChildren(*Transform611);

HAnimJoint605->addChildren(*HAnimSegment606);

CHAnimJoint* HAnimJoint613 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint613->setName("vc3");
HAnimJoint613->setDEF("Joe_vc3");
HAnimJoint613->setCenter(new float[3]{0,1.5822499990463257,-0.01850000023841858});
HAnimJoint613->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint613->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment614 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment614->setName("c3");
HAnimSegment614->setDEF("Joe_c3");
CShape* Shape615 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet616 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet616->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate617 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate617->setPoint(new float[6]{0,1.5950000286102295,-0.017500000074505806,0,1.6100000143051147,-0.014999999664723873});
IndexedLineSet616->setCoord(*Coordinate617);

Shape615->setGeometry(IndexedLineSet616);

CAppearance* Appearance618 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance618->setUSE("SegmentLine");
Shape615->setAppearance(*Appearance618);

HAnimSegment614->addChildren(*Shape615);

CTransform* Transform619 = (CTransform *)(m_pScene.createNode("Transform"));
Transform619->setTranslation(new float[3]{0,1.5822499990463257,-0.01850000023841858});
CShape* Shape620 = (CShape *)(m_pScene.createNode("Shape"));
Shape620->setUSE("jointbox");
Transform619->addChildren(*Shape620);

HAnimSegment614->addChildren(*Transform619);

HAnimJoint613->addChildren(*HAnimSegment614);

CHAnimJoint* HAnimJoint621 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint621->setName("vc2");
HAnimJoint621->setDEF("Joe_vc2");
HAnimJoint621->setCenter(new float[3]{0,1.5950000286102295,-0.017500000074505806});
HAnimJoint621->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint621->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment622 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment622->setName("c2");
HAnimSegment622->setDEF("Joe_c2");
CShape* Shape623 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet624 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet624->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate625 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate625->setPoint(new float[6]{0,1.6100000143051147,-0.014999999664723873,0,1.614400029182434,-0.0034000000450760126});
IndexedLineSet624->setCoord(*Coordinate625);

Shape623->setGeometry(IndexedLineSet624);

CAppearance* Appearance626 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance626->setUSE("SegmentLine");
Shape623->setAppearance(*Appearance626);

HAnimSegment622->addChildren(*Shape623);

CTransform* Transform627 = (CTransform *)(m_pScene.createNode("Transform"));
Transform627->setTranslation(new float[3]{0,1.5950000286102295,-0.017500000074505806});
CShape* Shape628 = (CShape *)(m_pScene.createNode("Shape"));
Shape628->setUSE("jointbox");
Transform627->addChildren(*Shape628);

HAnimSegment622->addChildren(*Transform627);

HAnimJoint621->addChildren(*HAnimSegment622);

CHAnimJoint* HAnimJoint629 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint629->setName("vc1");
HAnimJoint629->setDEF("Joe_vc1");
HAnimJoint629->setCenter(new float[3]{0,1.6100000143051147,-0.014999999664723873});
HAnimJoint629->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint629->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment630 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment630->setName("c1");
HAnimSegment630->setDEF("Joe_c1");
CShape* Shape631 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet632 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet632->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate633 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate633->setPoint(new float[6]{0,1.614400029182434,-0.0034000000450760126,0,1.6299999952316284,-0.009999999776482582});
IndexedLineSet632->setCoord(*Coordinate633);

Shape631->setGeometry(IndexedLineSet632);

CAppearance* Appearance634 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance634->setUSE("SegmentLine");
Shape631->setAppearance(*Appearance634);

HAnimSegment630->addChildren(*Shape631);

CTransform* Transform635 = (CTransform *)(m_pScene.createNode("Transform"));
Transform635->setTranslation(new float[3]{0,1.6100000143051147,-0.014999999664723873});
CShape* Shape636 = (CShape *)(m_pScene.createNode("Shape"));
Shape636->setUSE("jointbox");
Transform635->addChildren(*Shape636);

HAnimSegment630->addChildren(*Transform635);

HAnimJoint629->addChildren(*HAnimSegment630);

CHAnimJoint* HAnimJoint637 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint637->setName("skullbase");
HAnimJoint637->setDEF("Joe_skullbase");
HAnimJoint637->setCenter(new float[3]{0,1.6299999952316284,-0.009999999776482582});
HAnimJoint637->setSkinCoordIndex(new int[10]{0,1,2,3,4,5,6,7,8,9});
HAnimJoint637->setSkinCoordWeight(new float[10]{1,1,1,1,1,1,1,1,1,1}, 10);
HAnimJoint637->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint637->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment638 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment638->setName("skull");
HAnimSegment638->setDEF("Joe_skull");
CShape* Shape639 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet640 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet640->setCoordIndex(new int[6]{0,1,-1,0,2,-1});
CCoordinate* Coordinate641 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate641->setPoint(new float[9]{0,1.6299999952316284,-0.009999999776482582,0.03400000184774399,1.659000039100647,0.05999999865889549,-0.03400000184774399,1.6549999713897705,0.06499999761581421});
IndexedLineSet640->setCoord(*Coordinate641);

Shape639->setGeometry(IndexedLineSet640);

CAppearance* Appearance642 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance642->setUSE("SegmentLine");
Shape639->setAppearance(*Appearance642);

HAnimSegment638->addChildren(*Shape639);

CTransform* Transform643 = (CTransform *)(m_pScene.createNode("Transform"));
Transform643->setTranslation(new float[3]{0,1.6299999952316284,-0.009999999776482582});
CShape* Shape644 = (CShape *)(m_pScene.createNode("Shape"));
Shape644->setUSE("jointbox");
Transform643->addChildren(*Shape644);

HAnimSegment638->addChildren(*Transform643);

CHAnimSite* HAnimSite645 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite645->setName("skull_tip");
HAnimSite645->setDEF("Joe_skull_tip");
HAnimSite645->setTranslation(new float[3]{0,1.7699999809265137,0});
CShape* Shape646 = (CShape *)(m_pScene.createNode("Shape"));
Shape646->setUSE("sitebox");
HAnimSite645->addChildren(*Shape646);

HAnimSegment638->addChildren(*HAnimSite645);

CHAnimSite* HAnimSite647 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite647->setName("sellion");
HAnimSite647->setDEF("Joe_sellion");
HAnimSite647->setTranslation(new float[3]{0,1.6649999618530273,0.09000000357627869});
CShape* Shape648 = (CShape *)(m_pScene.createNode("Shape"));
Shape648->setUSE("sitebox");
HAnimSite647->addChildren(*Shape648);

HAnimSegment638->addChildren(*HAnimSite647);

CHAnimSite* HAnimSite649 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite649->setName("r_infraorbitale");
HAnimSite649->setDEF("Joe_r_infraorbitale");
HAnimSite649->setTranslation(new float[3]{-0.032999999821186066,1.6200000047683716,0.08699999749660492});
CShape* Shape650 = (CShape *)(m_pScene.createNode("Shape"));
Shape650->setUSE("sitebox");
HAnimSite649->addChildren(*Shape650);

HAnimSegment638->addChildren(*HAnimSite649);

CHAnimSite* HAnimSite651 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite651->setName("l_infraorbitale");
HAnimSite651->setDEF("Joe_l_infraorbitale");
HAnimSite651->setTranslation(new float[3]{0.032999999821186066,1.6200000047683716,0.08699999749660492});
CShape* Shape652 = (CShape *)(m_pScene.createNode("Shape"));
Shape652->setUSE("sitebox");
HAnimSite651->addChildren(*Shape652);

HAnimSegment638->addChildren(*HAnimSite651);

CHAnimSite* HAnimSite653 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite653->setName("supramenton");
HAnimSite653->setDEF("Joe_supramenton");
HAnimSite653->setTranslation(new float[3]{0,1.5499999523162842,0.09700000286102295});
CShape* Shape654 = (CShape *)(m_pScene.createNode("Shape"));
Shape654->setUSE("sitebox");
HAnimSite653->addChildren(*Shape654);

HAnimSegment638->addChildren(*HAnimSite653);

CHAnimSite* HAnimSite655 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite655->setName("r_tragion");
HAnimSite655->setDEF("Joe_r_tragion");
HAnimSite655->setTranslation(new float[3]{-0.07699999958276749,1.6399999856948853,-0.009999999776482582});
CShape* Shape656 = (CShape *)(m_pScene.createNode("Shape"));
Shape656->setUSE("sitebox");
HAnimSite655->addChildren(*Shape656);

HAnimSegment638->addChildren(*HAnimSite655);

CHAnimSite* HAnimSite657 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite657->setName("r_gonion");
HAnimSite657->setDEF("Joe_r_gonion");
HAnimSite657->setTranslation(new float[3]{-0.052000001072883606,1.5800000429153442,0.014999999664723873});
CShape* Shape658 = (CShape *)(m_pScene.createNode("Shape"));
Shape658->setUSE("sitebox");
HAnimSite657->addChildren(*Shape658);

HAnimSegment638->addChildren(*HAnimSite657);

CHAnimSite* HAnimSite659 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite659->setName("l_tragion");
HAnimSite659->setDEF("Joe_l_tragion");
HAnimSite659->setTranslation(new float[3]{0.07699999958276749,1.6399999856948853,-0.009999999776482582});
CShape* Shape660 = (CShape *)(m_pScene.createNode("Shape"));
Shape660->setUSE("sitebox");
HAnimSite659->addChildren(*Shape660);

HAnimSegment638->addChildren(*HAnimSite659);

CHAnimSite* HAnimSite661 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite661->setName("l_gonion");
HAnimSite661->setDEF("Joe_l_gonion");
HAnimSite661->setTranslation(new float[3]{0.06310000270605087,1.5800000429153442,0.014999999664723873});
CShape* Shape662 = (CShape *)(m_pScene.createNode("Shape"));
Shape662->setUSE("sitebox");
HAnimSite661->addChildren(*Shape662);

HAnimSegment638->addChildren(*HAnimSite661);

CHAnimSite* HAnimSite663 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite663->setName("nuchale");
HAnimSite663->setDEF("Joe_nuchale");
HAnimSite663->setTranslation(new float[3]{0,1.625,-0.0925000011920929});
CShape* Shape664 = (CShape *)(m_pScene.createNode("Shape"));
Shape664->setUSE("sitebox");
HAnimSite663->addChildren(*Shape664);

HAnimSegment638->addChildren(*HAnimSite663);

HAnimJoint637->addChildren(*HAnimSegment638);

CHAnimJoint* HAnimJoint665 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint665->setName("l_eyeball_joint");
HAnimJoint665->setDEF("Joe_l_eyeball_joint");
HAnimJoint665->setCenter(new float[3]{0.034,1.659,0.06});
HAnimJoint665->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint665->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment666 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment666->setName("l_eyeball");
HAnimSegment666->setDEF("Joe_l_eyeball");
CShape* Shape667 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet668 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet668->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate669 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate669->setPoint(new float[6]{0.034,1.655,0.065,-0.034,1.655,0.065});
IndexedLineSet668->setCoord(*Coordinate669);

Shape667->setGeometry(IndexedLineSet668);

CAppearance* Appearance670 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance670->setUSE("SegmentLine");
Shape667->setAppearance(*Appearance670);

HAnimSegment666->addChildren(*Shape667);

CTransform* Transform671 = (CTransform *)(m_pScene.createNode("Transform"));
Transform671->setScale(new float[3]{1,1,1.4});
Transform671->setTranslation(new float[3]{0.034,1.655,0.065});
CShape* Shape672 = (CShape *)(m_pScene.createNode("Shape"));
Shape672->setUSE("jointbox");
Transform671->addChildren(*Shape672);

HAnimSegment666->addChildren(*Transform671);

HAnimJoint665->addChildren(*HAnimSegment666);

HAnimJoint637->addChildren(*HAnimJoint665);

CHAnimJoint* HAnimJoint673 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint673->setName("r_eyeball_joint");
HAnimJoint673->setDEF("Joe_r_eyeball_joint");
HAnimJoint673->setCenter(new float[3]{-0.034,1.659,0.06});
HAnimJoint673->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint673->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment674 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment674->setName("r_eyeball");
HAnimSegment674->setDEF("Joe_r_eyeball");
CShape* Shape675 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet676 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet676->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate677 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate677->setPoint(new float[6]{0.034,1.655,0.065,-0.034,1.655,0.065});
IndexedLineSet676->setCoord(*Coordinate677);

Shape675->setGeometry(IndexedLineSet676);

CAppearance* Appearance678 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance678->setUSE("SegmentLine");
Shape675->setAppearance(*Appearance678);

HAnimSegment674->addChildren(*Shape675);

CTransform* Transform679 = (CTransform *)(m_pScene.createNode("Transform"));
Transform679->setScale(new float[3]{1,1,1.4});
Transform679->setTranslation(new float[3]{-0.034,1.655,0.065});
CShape* Shape680 = (CShape *)(m_pScene.createNode("Shape"));
Shape680->setUSE("jointbox");
Transform679->addChildren(*Shape680);

HAnimSegment674->addChildren(*Transform679);

HAnimJoint673->addChildren(*HAnimSegment674);

HAnimJoint637->addChildren(*HAnimJoint673);

HAnimJoint629->addChildren(*HAnimJoint637);

HAnimJoint621->addChildren(*HAnimJoint629);

HAnimJoint613->addChildren(*HAnimJoint621);

HAnimJoint605->addChildren(*HAnimJoint613);

HAnimJoint597->addChildren(*HAnimJoint605);

HAnimJoint589->addChildren(*HAnimJoint597);

HAnimJoint577->addChildren(*HAnimJoint589);

HAnimJoint565->addChildren(*HAnimJoint577);

CHAnimJoint* HAnimJoint681 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint681->setName("l_sternoclavicular");
HAnimJoint681->setDEF("Joe_l_sternoclavicular");
HAnimJoint681->setCenter(new float[3]{0.082,1.4488,-0.0353});
HAnimJoint681->setSkinCoordIndex(new int[1]{12});
HAnimJoint681->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint681->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint681->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment682 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment682->setName("l_clavicle");
HAnimSegment682->setDEF("Joe_l_clavicle");
CShape* Shape683 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet684 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet684->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate685 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate685->setPoint(new float[6]{0.0820000022649765,1.448799967765808,-0.03530000150203705,0.09619999676942825,1.426900029182434,-0.042399998754262924});
IndexedLineSet684->setCoord(*Coordinate685);

Shape683->setGeometry(IndexedLineSet684);

CAppearance* Appearance686 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance686->setUSE("SegmentLine");
Shape683->setAppearance(*Appearance686);

HAnimSegment682->addChildren(*Shape683);

CTransform* Transform687 = (CTransform *)(m_pScene.createNode("Transform"));
Transform687->setTranslation(new float[3]{0.0820000022649765,1.448799967765808,-0.03530000150203705});
CShape* Shape688 = (CShape *)(m_pScene.createNode("Shape"));
Shape688->setUSE("jointbox");
Transform687->addChildren(*Shape688);

HAnimSegment682->addChildren(*Transform687);

CHAnimSite* HAnimSite689 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite689->setName("l_clavicale");
HAnimSite689->setDEF("Joe_l_clavicale");
HAnimSite689->setTranslation(new float[3]{0.029999999329447746,1.4600000381469727,0.03500000014901161});
CShape* Shape690 = (CShape *)(m_pScene.createNode("Shape"));
Shape690->setUSE("sitebox");
HAnimSite689->addChildren(*Shape690);

HAnimSegment682->addChildren(*HAnimSite689);

HAnimJoint681->addChildren(*HAnimSegment682);

CHAnimJoint* HAnimJoint691 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint691->setName("l_acromioclavicular");
HAnimJoint691->setDEF("Joe_l_acromioclavicular");
HAnimJoint691->setCenter(new float[3]{0.09619999676942825,1.426900029182434,-0.042399998754262924});
HAnimJoint691->setSkinCoordIndex(new int[1]{79});
HAnimJoint691->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint691->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint691->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment692 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment692->setName("l_scapula");
HAnimSegment692->setDEF("Joe_l_scapula");
CShape* Shape693 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet694 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet694->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate695 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate695->setPoint(new float[6]{0.09619999676942825,1.426900029182434,-0.042399998754262924,0.20000000298023224,1.440000057220459,-0.03999999910593033});
IndexedLineSet694->setCoord(*Coordinate695);

Shape693->setGeometry(IndexedLineSet694);

CAppearance* Appearance696 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance696->setUSE("SegmentLine");
Shape693->setAppearance(*Appearance696);

HAnimSegment692->addChildren(*Shape693);

CTransform* Transform697 = (CTransform *)(m_pScene.createNode("Transform"));
Transform697->setTranslation(new float[3]{0.09619999676942825,1.426900029182434,-0.042399998754262924});
CShape* Shape698 = (CShape *)(m_pScene.createNode("Shape"));
Shape698->setUSE("jointbox");
Transform697->addChildren(*Shape698);

HAnimSegment692->addChildren(*Transform697);

CTransform* Transform699 = (CTransform *)(m_pScene.createNode("Transform"));
Transform699->setTranslation(new float[3]{0.10999999940395355,1.4270000457763672,-0.13750000298023224});
CShape* Shape700 = (CShape *)(m_pScene.createNode("Shape"));
Shape700->setUSE("skinsphere");
Transform699->addChildren(*Shape700);

HAnimSegment692->addChildren(*Transform699);

CHAnimSite* HAnimSite701 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite701->setName("l_acromion");
HAnimSite701->setDEF("Joe_l_acromion");
HAnimSite701->setTranslation(new float[3]{0.17499999701976776,1.4824999570846558,-0.05999999865889549});
CShape* Shape702 = (CShape *)(m_pScene.createNode("Shape"));
Shape702->setUSE("sitebox");
HAnimSite701->addChildren(*Shape702);

HAnimSegment692->addChildren(*HAnimSite701);

CHAnimSite* HAnimSite703 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite703->setName("l_axilla_ant");
HAnimSite703->setDEF("Joe_l_axilla_ant");
HAnimSite703->setTranslation(new float[3]{0.17000000178813934,1.3799999952316284,0.007000000216066837});
CShape* Shape704 = (CShape *)(m_pScene.createNode("Shape"));
Shape704->setUSE("sitebox");
HAnimSite703->addChildren(*Shape704);

HAnimSegment692->addChildren(*HAnimSite703);

CHAnimSite* HAnimSite705 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite705->setName("l_axilla_post");
HAnimSite705->setDEF("Joe_l_axilla_post");
HAnimSite705->setTranslation(new float[3]{0.1599999964237213,1.3799999952316284,-0.125});
CShape* Shape706 = (CShape *)(m_pScene.createNode("Shape"));
Shape706->setUSE("sitebox");
HAnimSite705->addChildren(*Shape706);

HAnimSegment692->addChildren(*HAnimSite705);

HAnimJoint691->addChildren(*HAnimSegment692);

CHAnimJoint* HAnimJoint707 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint707->setName("l_shoulder");
HAnimJoint707->setDEF("Joe_l_shoulder");
HAnimJoint707->setCenter(new float[3]{0.20000000298023224,1.440000057220459,-0.03999999910593033});
HAnimJoint707->setSkinCoordIndex(new int[8]{41,42,44,80,102,103,104,105});
HAnimJoint707->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint707->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint707->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment708 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment708->setName("l_upperarm");
HAnimSegment708->setDEF("Joe_l_upperarm");
CShape* Shape709 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet710 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet710->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate711 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate711->setPoint(new float[6]{0.2029000073671341,1.440000057220459,-0.03869999945163727,0.20000000298023224,1.138800024986267,-0.03999999910593033});
IndexedLineSet710->setCoord(*Coordinate711);

Shape709->setGeometry(IndexedLineSet710);

CAppearance* Appearance712 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance712->setUSE("SegmentLine");
Shape709->setAppearance(*Appearance712);

HAnimSegment708->addChildren(*Shape709);

CTransform* Transform713 = (CTransform *)(m_pScene.createNode("Transform"));
Transform713->setTranslation(new float[3]{0.20000000298023224,1.440000057220459,-0.03999999910593033});
CShape* Shape714 = (CShape *)(m_pScene.createNode("Shape"));
Shape714->setUSE("jointbox");
Transform713->addChildren(*Shape714);

HAnimSegment708->addChildren(*Transform713);

CTransform* Transform715 = (CTransform *)(m_pScene.createNode("Transform"));
Transform715->setTranslation(new float[3]{0.23499999940395355,1.4199999570846558,-0.0625});
CShape* Shape716 = (CShape *)(m_pScene.createNode("Shape"));
Shape716->setUSE("skinsphere");
Transform715->addChildren(*Shape716);

HAnimSegment708->addChildren(*Transform715);

CTransform* Transform717 = (CTransform *)(m_pScene.createNode("Transform"));
Transform717->setTranslation(new float[3]{0.25,1.2699999809265137,-0.03999999910593033});
CShape* Shape718 = (CShape *)(m_pScene.createNode("Shape"));
Shape718->setUSE("skinsphere");
Transform717->addChildren(*Shape718);

HAnimSegment708->addChildren(*Transform717);

CTransform* Transform719 = (CTransform *)(m_pScene.createNode("Transform"));
Transform719->setTranslation(new float[3]{0.17000000178813934,1.2699999809265137,-0.03999999910593033});
CShape* Shape720 = (CShape *)(m_pScene.createNode("Shape"));
Shape720->setUSE("skinsphere");
Transform719->addChildren(*Shape720);

HAnimSegment708->addChildren(*Transform719);

CTransform* Transform721 = (CTransform *)(m_pScene.createNode("Transform"));
Transform721->setTranslation(new float[3]{0.20000000298023224,1.2699999809265137,-0.09000000357627869});
CShape* Shape722 = (CShape *)(m_pScene.createNode("Shape"));
Shape722->setUSE("skinsphere");
Transform721->addChildren(*Shape722);

HAnimSegment708->addChildren(*Transform721);

CTransform* Transform723 = (CTransform *)(m_pScene.createNode("Transform"));
Transform723->setTranslation(new float[3]{0.20000000298023224,1.2699999809265137,0.019999999552965164});
CShape* Shape724 = (CShape *)(m_pScene.createNode("Shape"));
Shape724->setUSE("skinsphere");
Transform723->addChildren(*Shape724);

HAnimSegment708->addChildren(*Transform723);

CHAnimSite* HAnimSite725 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite725->setName("l_humeral_medial_epicn");
HAnimSite725->setDEF("Joe_l_humeral_medial_epicn");
HAnimSite725->setTranslation(new float[3]{0.16500000655651093,1.138800024986267,-0.03999999910593033});
CShape* Shape726 = (CShape *)(m_pScene.createNode("Shape"));
Shape726->setUSE("sitebox");
HAnimSite725->addChildren(*Shape726);

HAnimSegment708->addChildren(*HAnimSite725);

CHAnimSite* HAnimSite727 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite727->setName("l_radiale");
HAnimSite727->setDEF("Joe_l_radiale");
HAnimSite727->setTranslation(new float[3]{0.23000000417232513,1.1330000162124634,-0.054999999701976776});
CShape* Shape728 = (CShape *)(m_pScene.createNode("Shape"));
Shape728->setUSE("sitebox");
HAnimSite727->addChildren(*Shape728);

HAnimSegment708->addChildren(*HAnimSite727);

CHAnimSite* HAnimSite729 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite729->setName("l_humeral_lateral_epicn");
HAnimSite729->setDEF("Joe_l_humeral_lateral_epicn");
HAnimSite729->setTranslation(new float[3]{0.24400000274181366,1.138800024986267,-0.03999999910593033});
CShape* Shape730 = (CShape *)(m_pScene.createNode("Shape"));
Shape730->setUSE("sitebox");
HAnimSite729->addChildren(*Shape730);

HAnimSegment708->addChildren(*HAnimSite729);

HAnimJoint707->addChildren(*HAnimSegment708);

CHAnimJoint* HAnimJoint731 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint731->setName("l_elbow");
HAnimJoint731->setDEF("Joe_l_elbow");
HAnimJoint731->setCenter(new float[3]{0.20000000298023224,1.138800024986267,-0.03999999910593033});
HAnimJoint731->setSkinCoordIndex(new int[12]{45,46,47,109,110,111,112,113,115,116,117,118});
HAnimJoint731->setSkinCoordWeight(new float[15]{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, 15);
HAnimJoint731->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint731->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment732 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment732->setName("l_forearm");
HAnimSegment732->setDEF("Joe_l_forearm");
CShape* Shape733 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet734 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet734->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate735 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate735->setPoint(new float[6]{0.20000000298023224,1.138800024986267,-0.03999999910593033,0.20000000298023224,0.8700000047683716,-0.03999999910593033});
IndexedLineSet734->setCoord(*Coordinate735);

Shape733->setGeometry(IndexedLineSet734);

CAppearance* Appearance736 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance736->setUSE("SegmentLine");
Shape733->setAppearance(*Appearance736);

HAnimSegment732->addChildren(*Shape733);

CTransform* Transform737 = (CTransform *)(m_pScene.createNode("Transform"));
Transform737->setTranslation(new float[3]{0.20000000298023224,1.138800024986267,-0.03999999910593033});
CShape* Shape738 = (CShape *)(m_pScene.createNode("Shape"));
Shape738->setUSE("jointbox");
Transform737->addChildren(*Shape738);

HAnimSegment732->addChildren(*Transform737);

CTransform* Transform739 = (CTransform *)(m_pScene.createNode("Transform"));
Transform739->setTranslation(new float[3]{0.20000000298023224,1.138800024986267,-0.013000000268220901});
CShape* Shape740 = (CShape *)(m_pScene.createNode("Shape"));
Shape740->setUSE("skinsphere");
Transform739->addChildren(*Shape740);

HAnimSegment732->addChildren(*Transform739);

CTransform* Transform741 = (CTransform *)(m_pScene.createNode("Transform"));
Transform741->setTranslation(new float[3]{0.22499999403953552,1,-0.009999999776482582});
CShape* Shape742 = (CShape *)(m_pScene.createNode("Shape"));
Shape742->setUSE("skinsphere");
Transform741->addChildren(*Shape742);

HAnimSegment732->addChildren(*Transform741);

CTransform* Transform743 = (CTransform *)(m_pScene.createNode("Transform"));
Transform743->setTranslation(new float[3]{0.22499999403953552,1,-0.07000000029802322});
CShape* Shape744 = (CShape *)(m_pScene.createNode("Shape"));
Shape744->setUSE("skinsphere");
Transform743->addChildren(*Shape744);

HAnimSegment732->addChildren(*Transform743);

CTransform* Transform745 = (CTransform *)(m_pScene.createNode("Transform"));
Transform745->setTranslation(new float[3]{0.1850000023841858,1,-0.009999999776482582});
CShape* Shape746 = (CShape *)(m_pScene.createNode("Shape"));
Shape746->setUSE("skinsphere");
Transform745->addChildren(*Shape746);

HAnimSegment732->addChildren(*Transform745);

CTransform* Transform747 = (CTransform *)(m_pScene.createNode("Transform"));
Transform747->setTranslation(new float[3]{0.1850000023841858,1,-0.07000000029802322});
CShape* Shape748 = (CShape *)(m_pScene.createNode("Shape"));
Shape748->setUSE("skinsphere");
Transform747->addChildren(*Shape748);

HAnimSegment732->addChildren(*Transform747);

CHAnimSite* HAnimSite749 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite749->setName("l_radial_styloid");
HAnimSite749->setDEF("Joe_l_radial_styloid");
HAnimSite749->setTranslation(new float[3]{0.19009999930858612,0.8644999861717224,-0.04149999842047691});
CShape* Shape750 = (CShape *)(m_pScene.createNode("Shape"));
Shape750->setUSE("sitebox");
HAnimSite749->addChildren(*Shape750);

HAnimSegment732->addChildren(*HAnimSite749);

CHAnimSite* HAnimSite751 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite751->setName("l_olecranon");
HAnimSite751->setDEF("Joe_l_olecranon");
HAnimSite751->setTranslation(new float[3]{0.20000000298023224,1.138800024986267,-0.07999999821186066});
CShape* Shape752 = (CShape *)(m_pScene.createNode("Shape"));
Shape752->setUSE("sitebox");
HAnimSite751->addChildren(*Shape752);

HAnimSegment732->addChildren(*HAnimSite751);

HAnimJoint731->addChildren(*HAnimSegment732);

CHAnimJoint* HAnimJoint753 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint753->setName("l_wrist");
HAnimJoint753->setDEF("Joe_l_wrist");
HAnimJoint753->setCenter(new float[3]{0.20000000298023224,0.8700000047683716,-0.03999999910593033});
HAnimJoint753->setSkinCoordIndex(new int[8]{119,120,121,122,123,124,125,126});
HAnimJoint753->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint753->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint753->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment754 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment754->setName("l_hand");
HAnimSegment754->setDEF("Joe_l_hand");
CShape* Shape755 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet756 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet756->setCoordIndex(new int[15]{0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1});
CCoordinate* Coordinate757 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate757->setPoint(new float[18]{0.20000000298023224,0.8700000047683716,-0.03999999910593033,0.1923999935388565,0.8471999764442444,-0.05339999869465828,0.19830000400543213,0.8023999929428101,-0.02800000086426735,0.19869999587535858,0.8029000163078308,-0.05299999937415123,0.1956000030040741,0.8019000291824341,-0.07940000295639038,0.19249999523162842,0.8065999746322632,-0.10360000282526016});
IndexedLineSet756->setCoord(*Coordinate757);

Shape755->setGeometry(IndexedLineSet756);

CAppearance* Appearance758 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance758->setUSE("SegmentLine");
Shape755->setAppearance(*Appearance758);

HAnimSegment754->addChildren(*Shape755);

CTransform* Transform759 = (CTransform *)(m_pScene.createNode("Transform"));
Transform759->setTranslation(new float[3]{0.20000000298023224,0.8700000047683716,-0.03999999910593033});
CShape* Shape760 = (CShape *)(m_pScene.createNode("Shape"));
Shape760->setUSE("jointbox");
Transform759->addChildren(*Shape760);

HAnimSegment754->addChildren(*Transform759);

CHAnimSite* HAnimSite761 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite761->setName("l_metacarpal_pha2");
HAnimSite761->setDEF("Joe_l_metacarpal_pha2");
HAnimSite761->setTranslation(new float[3]{0.20090000331401825,0.8138999938964844,-0.02370000071823597});
CShape* Shape762 = (CShape *)(m_pScene.createNode("Shape"));
Shape762->setUSE("sitebox");
HAnimSite761->addChildren(*Shape762);

HAnimSegment754->addChildren(*HAnimSite761);

CHAnimSite* HAnimSite763 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite763->setName("l_ulnar_styloid");
HAnimSite763->setDEF("Joe_l_ulnar_styloid");
HAnimSite763->setTranslation(new float[3]{0.2142000049352646,0.8529000282287598,-0.06480000168085098});
CShape* Shape764 = (CShape *)(m_pScene.createNode("Shape"));
Shape764->setUSE("sitebox");
HAnimSite763->addChildren(*Shape764);

HAnimSegment754->addChildren(*HAnimSite763);

CHAnimSite* HAnimSite765 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite765->setName("l_metacarpal_pha5");
HAnimSite765->setDEF("Joe_l_metacarpal_pha5");
HAnimSite765->setTranslation(new float[3]{0.19290000200271606,0.7860000133514404,-0.11219999939203262});
CShape* Shape766 = (CShape *)(m_pScene.createNode("Shape"));
Shape766->setUSE("sitebox");
HAnimSite765->addChildren(*Shape766);

HAnimSegment754->addChildren(*HAnimSite765);

HAnimJoint753->addChildren(*HAnimSegment754);

CHAnimJoint* HAnimJoint767 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint767->setName("l_thumb1");
HAnimJoint767->setDEF("Joe_l_thumb1");
HAnimJoint767->setCenter(new float[3]{0.1923999935388565,0.8471999764442444,-0.05339999869465828});
HAnimJoint767->setSkinCoordIndex(new int[2]{127,128});
HAnimJoint767->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint767->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint767->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment768 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment768->setName("l_thumb_metacarpal");
HAnimSegment768->setDEF("Joe_l_thumb_metacarpal");
CShape* Shape769 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet770 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet770->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate771 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate771->setPoint(new float[6]{0.1923999935388565,0.8471999764442444,-0.05339999869465828,0.19509999454021454,0.8226000070571899,0.02459999918937683});
IndexedLineSet770->setCoord(*Coordinate771);

Shape769->setGeometry(IndexedLineSet770);

CAppearance* Appearance772 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance772->setUSE("SegmentLine");
Shape769->setAppearance(*Appearance772);

HAnimSegment768->addChildren(*Shape769);

CTransform* Transform773 = (CTransform *)(m_pScene.createNode("Transform"));
Transform773->setTranslation(new float[3]{0.1923999935388565,0.8471999764442444,-0.05339999869465828});
CShape* Shape774 = (CShape *)(m_pScene.createNode("Shape"));
Shape774->setUSE("jointbox");
Transform773->addChildren(*Shape774);

HAnimSegment768->addChildren(*Transform773);

HAnimJoint767->addChildren(*HAnimSegment768);

CHAnimJoint* HAnimJoint775 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint775->setName("l_thumb2");
HAnimJoint775->setDEF("Joe_l_thumb2");
HAnimJoint775->setCenter(new float[3]{0.19509999454021454,0.8226000070571899,0.02459999918937683});
HAnimJoint775->setSkinCoordIndex(new int[6]{138,139,140,141,142,143});
HAnimJoint775->setSkinCoordWeight(new float[6]{0.5,0.5,0.5,1,1,1}, 6);
HAnimJoint775->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint775->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment776 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment776->setName("l_thumb_distal");
HAnimSegment776->setDEF("Joe_l_thumb_proximal");
CShape* Shape777 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet778 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet778->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate779 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate779->setPoint(new float[6]{0.19509999454021454,0.8226000070571899,0.02459999918937683,0.19550000131130219,0.8159000277519226,0.04639999940991402});
IndexedLineSet778->setCoord(*Coordinate779);

Shape777->setGeometry(IndexedLineSet778);

CAppearance* Appearance780 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance780->setUSE("SegmentLine");
Shape777->setAppearance(*Appearance780);

HAnimSegment776->addChildren(*Shape777);

CTransform* Transform781 = (CTransform *)(m_pScene.createNode("Transform"));
Transform781->setTranslation(new float[3]{0.19509999454021454,0.8226000070571899,0.02459999918937683});
CShape* Shape782 = (CShape *)(m_pScene.createNode("Shape"));
Shape782->setUSE("jointbox");
Transform781->addChildren(*Shape782);

HAnimSegment776->addChildren(*Transform781);

HAnimJoint775->addChildren(*HAnimSegment776);

CHAnimJoint* HAnimJoint783 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint783->setName("l_thumb3");
HAnimJoint783->setDEF("Joe_l_thumb3");
HAnimJoint783->setCenter(new float[3]{0.19550000131130219,0.8159000277519226,0.04639999940991402});
HAnimJoint783->setSkinCoordIndex(new int[9]{144,145,146,147,148,149,150,151,152});
HAnimJoint783->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint783->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint783->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment784 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment784->setName("l_thumb_distal");
HAnimSegment784->setDEF("Joe_l_thumb_distal");
CShape* Shape785 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet786 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet786->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate787 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate787->setPoint(new float[6]{0.19550000131130219,0.8159000277519226,0.04639999940991402,0.19820000231266022,0.8061000108718872,0.07590000331401825});
IndexedLineSet786->setCoord(*Coordinate787);

Shape785->setGeometry(IndexedLineSet786);

CAppearance* Appearance788 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance788->setUSE("SegmentLine");
Shape785->setAppearance(*Appearance788);

HAnimSegment784->addChildren(*Shape785);

CTransform* Transform789 = (CTransform *)(m_pScene.createNode("Transform"));
Transform789->setTranslation(new float[3]{0.19550000131130219,0.8159000277519226,0.04639999940991402});
CShape* Shape790 = (CShape *)(m_pScene.createNode("Shape"));
Shape790->setUSE("jointbox");
Transform789->addChildren(*Shape790);

HAnimSegment784->addChildren(*Transform789);

CHAnimSite* HAnimSite791 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite791->setName("l_thumb_distal_tip");
HAnimSite791->setDEF("Joe_l_thumb_distal_tip");
HAnimSite791->setTranslation(new float[3]{0.19820000231266022,0.8061000108718872,0.07590000331401825});
CShape* Shape792 = (CShape *)(m_pScene.createNode("Shape"));
Shape792->setUSE("sitebox");
HAnimSite791->addChildren(*Shape792);

HAnimSegment784->addChildren(*HAnimSite791);

HAnimJoint783->addChildren(*HAnimSegment784);

HAnimJoint775->addChildren(*HAnimJoint783);

HAnimJoint767->addChildren(*HAnimJoint775);

HAnimJoint753->addChildren(*HAnimJoint767);

CHAnimJoint* HAnimJoint793 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint793->setName("l_index0");
HAnimJoint793->setDEF("Joe_l_index0");
HAnimJoint793->setCenter(new float[3]{0.19830000400543213,0.8023999929428101,-0.02800000086426735});
HAnimJoint793->setSkinCoordIndex(new int[2]{129,130});
HAnimJoint793->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint793->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint793->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment794 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment794->setName("l_index_metacarpal");
HAnimSegment794->setDEF("Joe_l_index_metacarpal");
CShape* Shape795 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet796 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet796->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate797 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate797->setPoint(new float[6]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028});
IndexedLineSet796->setCoord(*Coordinate797);

Shape795->setGeometry(IndexedLineSet796);

CAppearance* Appearance798 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance798->setUSE("SegmentLine");
Shape795->setAppearance(*Appearance798);

HAnimSegment794->addChildren(*Shape795);

CTransform* Transform799 = (CTransform *)(m_pScene.createNode("Transform"));
Transform799->setTranslation(new float[3]{0.1983,0.8024,-0.028});
CShape* Shape800 = (CShape *)(m_pScene.createNode("Shape"));
Shape800->setUSE("jointbox");
Transform799->addChildren(*Shape800);

HAnimSegment794->addChildren(*Transform799);

HAnimJoint793->addChildren(*HAnimSegment794);

CHAnimJoint* HAnimJoint801 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint801->setName("l_index1");
HAnimJoint801->setDEF("Joe_l_index1");
HAnimJoint801->setCenter(new float[3]{0.1983,0.7815,-0.028});
HAnimJoint801->setSkinCoordIndex(new int[7]{138,139,140,153,154,155,163});
HAnimJoint801->setSkinCoordWeight(new float[7]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimJoint801->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint801->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment802 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment802->setName("l_index_proximal");
HAnimSegment802->setDEF("Joe_l_index_proximal");
CShape* Shape803 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet804 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet804->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate805 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate805->setPoint(new float[6]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248});
IndexedLineSet804->setCoord(*Coordinate805);

Shape803->setGeometry(IndexedLineSet804);

CAppearance* Appearance806 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance806->setUSE("SegmentLine");
Shape803->setAppearance(*Appearance806);

HAnimSegment802->addChildren(*Shape803);

CTransform* Transform807 = (CTransform *)(m_pScene.createNode("Transform"));
Transform807->setTranslation(new float[3]{0.1983,0.7815,-0.028});
CShape* Shape808 = (CShape *)(m_pScene.createNode("Shape"));
Shape808->setUSE("jointbox");
Transform807->addChildren(*Shape808);

HAnimSegment802->addChildren(*Transform807);

HAnimJoint801->addChildren(*HAnimSegment802);

CHAnimJoint* HAnimJoint809 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint809->setName("l_index2");
HAnimJoint809->setDEF("Joe_l_index2");
HAnimJoint809->setCenter(new float[3]{0.2017,0.7363,-0.0248});
HAnimJoint809->setSkinCoordIndex(new int[4]{166,167,168,169});
HAnimJoint809->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint809->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint809->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment810 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment810->setName("l_index_middle");
HAnimSegment810->setDEF("Joe_l_index_middle");
CShape* Shape811 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet812 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet812->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate813 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate813->setPoint(new float[6]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236});
IndexedLineSet812->setCoord(*Coordinate813);

Shape811->setGeometry(IndexedLineSet812);

CAppearance* Appearance814 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance814->setUSE("SegmentLine");
Shape811->setAppearance(*Appearance814);

HAnimSegment810->addChildren(*Shape811);

CTransform* Transform815 = (CTransform *)(m_pScene.createNode("Transform"));
Transform815->setTranslation(new float[3]{0.2017,0.7363,-0.0248});
CShape* Shape816 = (CShape *)(m_pScene.createNode("Shape"));
Shape816->setUSE("jointbox");
Transform815->addChildren(*Shape816);

HAnimSegment810->addChildren(*Transform815);

HAnimJoint809->addChildren(*HAnimSegment810);

CHAnimJoint* HAnimJoint817 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint817->setName("l_index3");
HAnimJoint817->setDEF("Joe_l_index3");
HAnimJoint817->setCenter(new float[3]{0.20280000567436218,0.7139000296592712,-0.023600000888109207});
HAnimJoint817->setSkinCoordIndex(new int[9]{170,171,172,173,174,175,176,177,178});
HAnimJoint817->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint817->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint817->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment818 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment818->setName("l_index_distal");
HAnimSegment818->setDEF("Joe_l_index_distal");
CShape* Shape819 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet820 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet820->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate821 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate821->setPoint(new float[6]{0.20280000567436218,0.7139000296592712,-0.023600000888109207,0.20890000462532043,0.6858000159263611,-0.02449999935925007});
IndexedLineSet820->setCoord(*Coordinate821);

Shape819->setGeometry(IndexedLineSet820);

CAppearance* Appearance822 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance822->setUSE("SegmentLine");
Shape819->setAppearance(*Appearance822);

HAnimSegment818->addChildren(*Shape819);

CTransform* Transform823 = (CTransform *)(m_pScene.createNode("Transform"));
Transform823->setTranslation(new float[3]{0.20280000567436218,0.7139000296592712,-0.023600000888109207});
CShape* Shape824 = (CShape *)(m_pScene.createNode("Shape"));
Shape824->setUSE("jointbox");
Transform823->addChildren(*Shape824);

HAnimSegment818->addChildren(*Transform823);

CHAnimSite* HAnimSite825 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite825->setName("l_index_distal_tip");
HAnimSite825->setDEF("Joe_l_index_distal_tip");
HAnimSite825->setTranslation(new float[3]{0.20890000462532043,0.6858000159263611,-0.02449999935925007});
CShape* Shape826 = (CShape *)(m_pScene.createNode("Shape"));
Shape826->setUSE("sitebox");
HAnimSite825->addChildren(*Shape826);

HAnimSegment818->addChildren(*HAnimSite825);

CHAnimSite* HAnimSite827 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite827->setName("l_dactylion");
HAnimSite827->setDEF("Joe_l_dactylion");
HAnimSite827->setTranslation(new float[3]{0.20559999346733093,0.6743000149726868,-0.04820000007748604});
CShape* Shape828 = (CShape *)(m_pScene.createNode("Shape"));
Shape828->setUSE("sitebox");
HAnimSite827->addChildren(*Shape828);

HAnimSegment818->addChildren(*HAnimSite827);

HAnimJoint817->addChildren(*HAnimSegment818);

HAnimJoint809->addChildren(*HAnimJoint817);

HAnimJoint801->addChildren(*HAnimJoint809);

HAnimJoint793->addChildren(*HAnimJoint801);

HAnimJoint753->addChildren(*HAnimJoint793);

CHAnimJoint* HAnimJoint829 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint829->setName("l_middle0");
HAnimJoint829->setDEF("Joe_l_middle0");
HAnimJoint829->setCenter(new float[3]{0.19869999587535858,0.8029000163078308,-0.05299999937415123});
HAnimJoint829->setSkinCoordIndex(new int[2]{131,132});
HAnimJoint829->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint829->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint829->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment830 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment830->setName("l_middle_metacarpal");
HAnimSegment830->setDEF("Joe_l_middle_metacarpal");
CShape* Shape831 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet832 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet832->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate833 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate833->setPoint(new float[6]{0.19869999587535858,0.8029000163078308,-0.05299999937415123,0.19869999587535858,0.7817999720573425,-0.05299999937415123});
IndexedLineSet832->setCoord(*Coordinate833);

Shape831->setGeometry(IndexedLineSet832);

CAppearance* Appearance834 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance834->setUSE("SegmentLine");
Shape831->setAppearance(*Appearance834);

HAnimSegment830->addChildren(*Shape831);

CTransform* Transform835 = (CTransform *)(m_pScene.createNode("Transform"));
Transform835->setTranslation(new float[3]{0.19869999587535858,0.8029000163078308,-0.05299999937415123});
CShape* Shape836 = (CShape *)(m_pScene.createNode("Shape"));
Shape836->setUSE("jointbox");
Transform835->addChildren(*Shape836);

HAnimSegment830->addChildren(*Transform835);

HAnimJoint829->addChildren(*HAnimSegment830);

CHAnimJoint* HAnimJoint837 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint837->setName("l_middle1");
HAnimJoint837->setDEF("Joe_l_middle1");
HAnimJoint837->setCenter(new float[3]{0.19869999587535858,0.7817999720573425,-0.05299999937415123});
HAnimJoint837->setSkinCoordIndex(new int[4]{156,157,163,164});
HAnimJoint837->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
HAnimJoint837->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint837->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment838 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment838->setName("l_middle_proximal");
HAnimSegment838->setDEF("Joe_l_middle_proximal");
CShape* Shape839 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet840 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet840->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate841 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate841->setPoint(new float[6]{0.19869999587535858,0.7817999720573425,-0.05299999937415123,0.2012999951839447,0.7272999882698059,-0.0502999983727932});
IndexedLineSet840->setCoord(*Coordinate841);

Shape839->setGeometry(IndexedLineSet840);

CAppearance* Appearance842 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance842->setUSE("SegmentLine");
Shape839->setAppearance(*Appearance842);

HAnimSegment838->addChildren(*Shape839);

CTransform* Transform843 = (CTransform *)(m_pScene.createNode("Transform"));
Transform843->setTranslation(new float[3]{0.19869999587535858,0.7817999720573425,-0.05299999937415123});
CShape* Shape844 = (CShape *)(m_pScene.createNode("Shape"));
Shape844->setUSE("jointbox");
Transform843->addChildren(*Shape844);

HAnimSegment838->addChildren(*Transform843);

HAnimJoint837->addChildren(*HAnimSegment838);

CHAnimJoint* HAnimJoint845 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint845->setName("l_middle2");
HAnimJoint845->setDEF("Joe_l_middle2");
HAnimJoint845->setCenter(new float[3]{0.2012999951839447,0.7272999882698059,-0.0502999983727932});
HAnimJoint845->setSkinCoordIndex(new int[4]{179,180,181,182});
HAnimJoint845->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint845->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint845->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment846 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment846->setName("l_middle_middle");
HAnimSegment846->setDEF("Joe_l_middle_middle");
CShape* Shape847 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet848 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet848->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate849 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate849->setPoint(new float[6]{0.2012999951839447,0.7272999882698059,-0.0502999983727932,0.20260000228881836,0.7010999917984009,-0.049400001764297485});
IndexedLineSet848->setCoord(*Coordinate849);

Shape847->setGeometry(IndexedLineSet848);

CAppearance* Appearance850 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance850->setUSE("SegmentLine");
Shape847->setAppearance(*Appearance850);

HAnimSegment846->addChildren(*Shape847);

CTransform* Transform851 = (CTransform *)(m_pScene.createNode("Transform"));
Transform851->setTranslation(new float[3]{0.2012999951839447,0.7272999882698059,-0.0502999983727932});
CShape* Shape852 = (CShape *)(m_pScene.createNode("Shape"));
Shape852->setUSE("jointbox");
Transform851->addChildren(*Shape852);

HAnimSegment846->addChildren(*Transform851);

HAnimJoint845->addChildren(*HAnimSegment846);

CHAnimJoint* HAnimJoint853 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint853->setName("l_middle3");
HAnimJoint853->setDEF("Joe_l_middle3");
HAnimJoint853->setCenter(new float[3]{0.20260000228881836,0.7010999917984009,-0.049400001764297485});
HAnimJoint853->setSkinCoordIndex(new int[9]{183,184,185,186,187,188,189,190,191});
HAnimJoint853->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint853->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint853->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment854 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment854->setName("l_middle_distal");
HAnimSegment854->setDEF("Joe_l_middle_distal");
CShape* Shape855 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet856 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet856->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate857 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate857->setPoint(new float[6]{0.20260000228881836,0.7010999917984009,-0.049400001764297485,0.20800000429153442,0.6730999946594238,-0.04910000041127205});
IndexedLineSet856->setCoord(*Coordinate857);

Shape855->setGeometry(IndexedLineSet856);

CAppearance* Appearance858 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance858->setUSE("SegmentLine");
Shape855->setAppearance(*Appearance858);

HAnimSegment854->addChildren(*Shape855);

CHAnimSite* HAnimSite859 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite859->setName("l_middle_distal_tip");
HAnimSite859->setDEF("Joe_l_middle_distal_tip");
HAnimSite859->setTranslation(new float[3]{0.20800000429153442,0.6730999946594238,-0.04910000041127205});
CShape* Shape860 = (CShape *)(m_pScene.createNode("Shape"));
Shape860->setUSE("sitebox");
HAnimSite859->addChildren(*Shape860);

HAnimSegment854->addChildren(*HAnimSite859);

CTransform* Transform861 = (CTransform *)(m_pScene.createNode("Transform"));
Transform861->setTranslation(new float[3]{0.20260000228881836,0.7010999917984009,-0.049400001764297485});
CShape* Shape862 = (CShape *)(m_pScene.createNode("Shape"));
Shape862->setUSE("jointbox");
Transform861->addChildren(*Shape862);

HAnimSegment854->addChildren(*Transform861);

HAnimJoint853->addChildren(*HAnimSegment854);

HAnimJoint845->addChildren(*HAnimJoint853);

HAnimJoint837->addChildren(*HAnimJoint845);

HAnimJoint829->addChildren(*HAnimJoint837);

HAnimJoint753->addChildren(*HAnimJoint829);

CHAnimJoint* HAnimJoint863 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint863->setName("l_ring0");
HAnimJoint863->setDEF("Joe_l_ring0");
HAnimJoint863->setCenter(new float[3]{0.1956000030040741,0.8019000291824341,-0.07940000295639038});
HAnimJoint863->setSkinCoordIndex(new int[2]{133,134});
HAnimJoint863->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint863->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint863->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment864 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment864->setName("l_ring_metacarpal");
HAnimSegment864->setDEF("Joe_l_ring_metacarpal");
CShape* Shape865 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet866 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet866->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate867 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate867->setPoint(new float[6]{0.1956000030040741,0.8019000291824341,-0.07940000295639038,0.1956000030040741,0.781499981880188,-0.07940000295639038});
IndexedLineSet866->setCoord(*Coordinate867);

Shape865->setGeometry(IndexedLineSet866);

CAppearance* Appearance868 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance868->setUSE("SegmentLine");
Shape865->setAppearance(*Appearance868);

HAnimSegment864->addChildren(*Shape865);

CTransform* Transform869 = (CTransform *)(m_pScene.createNode("Transform"));
Transform869->setTranslation(new float[3]{0.1956000030040741,0.8019000291824341,-0.07940000295639038});
CShape* Shape870 = (CShape *)(m_pScene.createNode("Shape"));
Shape870->setUSE("jointbox");
Transform869->addChildren(*Shape870);

HAnimSegment864->addChildren(*Transform869);

HAnimJoint863->addChildren(*HAnimSegment864);

CHAnimJoint* HAnimJoint871 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint871->setName("l_ring1");
HAnimJoint871->setDEF("Joe_l_ring1");
HAnimJoint871->setCenter(new float[3]{0.1956000030040741,0.781499981880188,-0.07940000295639038});
HAnimJoint871->setSkinCoordIndex(new int[4]{158,159,164,165});
HAnimJoint871->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
HAnimJoint871->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint871->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment872 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment872->setName("l_ring_proximal");
HAnimSegment872->setDEF("Joe_l_ring_proximal");
CShape* Shape873 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet874 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet874->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate875 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate875->setPoint(new float[6]{0.1956000030040741,0.781499981880188,-0.07940000295639038,0.1973000019788742,0.7286999821662903,-0.07769999653100967});
IndexedLineSet874->setCoord(*Coordinate875);

Shape873->setGeometry(IndexedLineSet874);

CAppearance* Appearance876 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance876->setUSE("SegmentLine");
Shape873->setAppearance(*Appearance876);

HAnimSegment872->addChildren(*Shape873);

CTransform* Transform877 = (CTransform *)(m_pScene.createNode("Transform"));
Transform877->setTranslation(new float[3]{0.1956000030040741,0.781499981880188,-0.07940000295639038});
CShape* Shape878 = (CShape *)(m_pScene.createNode("Shape"));
Shape878->setUSE("jointbox");
Transform877->addChildren(*Shape878);

HAnimSegment872->addChildren(*Transform877);

HAnimJoint871->addChildren(*HAnimSegment872);

CHAnimJoint* HAnimJoint879 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint879->setName("l_ring2");
HAnimJoint879->setDEF("Joe_l_ring2");
HAnimJoint879->setCenter(new float[3]{0.1973000019788742,0.7286999821662903,-0.07769999653100967});
HAnimJoint879->setSkinCoordIndex(new int[4]{192,193,194,195});
HAnimJoint879->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint879->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint879->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment880 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment880->setName("l_ring_middle");
HAnimSegment880->setDEF("Joe_l_ring_middle");
CShape* Shape881 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet882 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet882->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate883 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate883->setPoint(new float[6]{0.1973000019788742,0.7286999821662903,-0.07769999653100967,0.19830000400543213,0.7045000195503235,-0.07670000195503235});
IndexedLineSet882->setCoord(*Coordinate883);

Shape881->setGeometry(IndexedLineSet882);

CAppearance* Appearance884 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance884->setUSE("SegmentLine");
Shape881->setAppearance(*Appearance884);

HAnimSegment880->addChildren(*Shape881);

CTransform* Transform885 = (CTransform *)(m_pScene.createNode("Transform"));
Transform885->setTranslation(new float[3]{0.1973000019788742,0.7286999821662903,-0.07769999653100967});
CShape* Shape886 = (CShape *)(m_pScene.createNode("Shape"));
Shape886->setUSE("jointbox");
Transform885->addChildren(*Shape886);

HAnimSegment880->addChildren(*Transform885);

HAnimJoint879->addChildren(*HAnimSegment880);

CHAnimJoint* HAnimJoint887 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint887->setName("l_ring3");
HAnimJoint887->setDEF("Joe_l_ring3");
HAnimJoint887->setCenter(new float[3]{0.19830000400543213,0.7045000195503235,-0.07670000195503235});
HAnimJoint887->setSkinCoordIndex(new int[9]{196,197,198,199,200,201,202,203,204});
HAnimJoint887->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint887->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint887->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment888 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment888->setName("l_ring_distal");
HAnimSegment888->setDEF("Joe_l_ring_distal");
CShape* Shape889 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet890 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet890->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate891 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate891->setPoint(new float[6]{0.19830000400543213,0.7045000195503235,-0.07670000195503235,0.20350000262260437,0.675000011920929,-0.07559999823570251});
IndexedLineSet890->setCoord(*Coordinate891);

Shape889->setGeometry(IndexedLineSet890);

CAppearance* Appearance892 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance892->setUSE("SegmentLine");
Shape889->setAppearance(*Appearance892);

HAnimSegment888->addChildren(*Shape889);

CTransform* Transform893 = (CTransform *)(m_pScene.createNode("Transform"));
Transform893->setTranslation(new float[3]{0.19830000400543213,0.7045000195503235,-0.07670000195503235});
CShape* Shape894 = (CShape *)(m_pScene.createNode("Shape"));
Shape894->setUSE("jointbox");
Transform893->addChildren(*Shape894);

HAnimSegment888->addChildren(*Transform893);

CHAnimSite* HAnimSite895 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite895->setName("l_ring_distal_tip");
HAnimSite895->setDEF("Joe_l_ring_distal_tip");
HAnimSite895->setTranslation(new float[3]{0.20350000262260437,0.675000011920929,-0.07559999823570251});
CShape* Shape896 = (CShape *)(m_pScene.createNode("Shape"));
Shape896->setUSE("sitebox");
HAnimSite895->addChildren(*Shape896);

HAnimSegment888->addChildren(*HAnimSite895);

HAnimJoint887->addChildren(*HAnimSegment888);

HAnimJoint879->addChildren(*HAnimJoint887);

HAnimJoint871->addChildren(*HAnimJoint879);

HAnimJoint863->addChildren(*HAnimJoint871);

HAnimJoint753->addChildren(*HAnimJoint863);

CHAnimJoint* HAnimJoint897 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint897->setName("l_pinky0");
HAnimJoint897->setDEF("Joe_l_pinky0");
HAnimJoint897->setCenter(new float[3]{0.1925,0.8066,-0.1036});
HAnimJoint897->setSkinCoordIndex(new int[4]{135,136,137,165});
HAnimJoint897->setSkinCoordWeight(new float[4]{1,1,1,0.5}, 4);
HAnimJoint897->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint897->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment898 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment898->setName("l_pinky_metacarpal");
HAnimSegment898->setDEF("Joe_l_pinky_metacarpal");
CShape* Shape899 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet900 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet900->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate901 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate901->setPoint(new float[6]{0.19249999523162842,0.8065999746322632,-0.10360000282526016,0.19249999523162842,0.7865999937057495,-0.10360000282526016});
IndexedLineSet900->setCoord(*Coordinate901);

Shape899->setGeometry(IndexedLineSet900);

CAppearance* Appearance902 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance902->setUSE("SegmentLine");
Shape899->setAppearance(*Appearance902);

HAnimSegment898->addChildren(*Shape899);

CTransform* Transform903 = (CTransform *)(m_pScene.createNode("Transform"));
Transform903->setTranslation(new float[3]{0.19249999523162842,0.8065999746322632,-0.10360000282526016});
CShape* Shape904 = (CShape *)(m_pScene.createNode("Shape"));
Shape904->setUSE("jointbox");
Transform903->addChildren(*Shape904);

HAnimSegment898->addChildren(*Transform903);

HAnimJoint897->addChildren(*HAnimSegment898);

CHAnimJoint* HAnimJoint905 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint905->setName("l_pinky1");
HAnimJoint905->setDEF("Joe_l_pinky1");
HAnimJoint905->setCenter(new float[3]{0.19249999523162842,0.7865999937057495,-0.10360000282526016});
HAnimJoint905->setSkinCoordIndex(new int[3]{160,161,162});
HAnimJoint905->setSkinCoordWeight(new float[3]{1,1,1}, 3);
HAnimJoint905->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint905->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment906 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment906->setName("l_pinky_proximal");
HAnimSegment906->setDEF("Joe_l_pinky_proximal");
CShape* Shape907 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet908 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet908->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate909 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate909->setPoint(new float[6]{0.19249999523162842,0.7865999937057495,-0.10360000282526016,0.19380000233650208,0.745199978351593,-0.10239999741315842});
IndexedLineSet908->setCoord(*Coordinate909);

Shape907->setGeometry(IndexedLineSet908);

CAppearance* Appearance910 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance910->setUSE("SegmentLine");
Shape907->setAppearance(*Appearance910);

HAnimSegment906->addChildren(*Shape907);

CTransform* Transform911 = (CTransform *)(m_pScene.createNode("Transform"));
Transform911->setTranslation(new float[3]{0.19249999523162842,0.7865999937057495,-0.10360000282526016});
CShape* Shape912 = (CShape *)(m_pScene.createNode("Shape"));
Shape912->setUSE("jointbox");
Transform911->addChildren(*Shape912);

HAnimSegment906->addChildren(*Transform911);

HAnimJoint905->addChildren(*HAnimSegment906);

CHAnimJoint* HAnimJoint913 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint913->setName("l_pinky2");
HAnimJoint913->setDEF("Joe_l_pinky2");
HAnimJoint913->setCenter(new float[3]{0.19380000233650208,0.745199978351593,-0.10239999741315842});
HAnimJoint913->setSkinCoordIndex(new int[4]{205,206,207,208});
HAnimJoint913->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint913->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint913->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment914 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment914->setName("l_pinky_middle");
HAnimSegment914->setDEF("Joe_l_pinky_middle");
CTransform* Transform915 = (CTransform *)(m_pScene.createNode("Transform"));
Transform915->setTranslation(new float[3]{0.1938,0.7452,-0.1024});
CShape* Shape916 = (CShape *)(m_pScene.createNode("Shape"));
Shape916->setUSE("jointbox");
Transform915->addChildren(*Shape916);

HAnimSegment914->addChildren(*Transform915);

CShape* Shape917 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet918 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet918->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate919 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate919->setPoint(new float[6]{0.19380000233650208,0.745199978351593,-0.10239999741315842,0.19480000436306,0.7276999950408936,-0.10170000046491623});
IndexedLineSet918->setCoord(*Coordinate919);

Shape917->setGeometry(IndexedLineSet918);

CAppearance* Appearance920 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance920->setUSE("SegmentLine");
Shape917->setAppearance(*Appearance920);

HAnimSegment914->addChildren(*Shape917);

HAnimJoint913->addChildren(*HAnimSegment914);

CHAnimJoint* HAnimJoint921 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint921->setName("l_pinky3");
HAnimJoint921->setDEF("Joe_l_pinky3");
HAnimJoint921->setCenter(new float[3]{0.19480000436306,0.7276999950408936,-0.10170000046491623});
HAnimJoint921->setSkinCoordIndex(new int[9]{209,210,211,212,213,214,215,216,217});
HAnimJoint921->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint921->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint921->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment922 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment922->setName("l_pinky_distal");
HAnimSegment922->setDEF("Joe_l_pinky_distal");
CShape* Shape923 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet924 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet924->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate925 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate925->setPoint(new float[6]{0.19480000436306,0.7276999950408936,-0.10170000046491623,0.2013999968767166,0.7009000182151794,-0.10119999945163727});
IndexedLineSet924->setCoord(*Coordinate925);

Shape923->setGeometry(IndexedLineSet924);

CAppearance* Appearance926 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance926->setUSE("SegmentLine");
Shape923->setAppearance(*Appearance926);

HAnimSegment922->addChildren(*Shape923);

CTransform* Transform927 = (CTransform *)(m_pScene.createNode("Transform"));
Transform927->setTranslation(new float[3]{0.1948,0.7277,-0.1017});
CShape* Shape928 = (CShape *)(m_pScene.createNode("Shape"));
Shape928->setUSE("jointbox");
Transform927->addChildren(*Shape928);

HAnimSegment922->addChildren(*Transform927);

CHAnimSite* HAnimSite929 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite929->setName("l_pinky_distal_tip");
HAnimSite929->setDEF("Joe_l_pinky_distal_tip");
HAnimSite929->setTranslation(new float[3]{0.2013999968767166,0.7009000182151794,-0.10119999945163727});
CShape* Shape930 = (CShape *)(m_pScene.createNode("Shape"));
Shape930->setUSE("sitebox");
HAnimSite929->addChildren(*Shape930);

HAnimSegment922->addChildren(*HAnimSite929);

HAnimJoint921->addChildren(*HAnimSegment922);

HAnimJoint913->addChildren(*HAnimJoint921);

HAnimJoint905->addChildren(*HAnimJoint913);

HAnimJoint897->addChildren(*HAnimJoint905);

HAnimJoint753->addChildren(*HAnimJoint897);

HAnimJoint731->addChildren(*HAnimJoint753);

HAnimJoint707->addChildren(*HAnimJoint731);

HAnimJoint691->addChildren(*HAnimJoint707);

HAnimJoint681->addChildren(*HAnimJoint691);

HAnimJoint565->addChildren(*HAnimJoint681);

CHAnimJoint* HAnimJoint931 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint931->setName("r_sternoclavicular");
HAnimJoint931->setDEF("Joe_r_sternoclavicular");
HAnimJoint931->setCenter(new float[3]{-0.029999999329447746,1.4600000381469727,0});
HAnimJoint931->setSkinCoordIndex(new int[1]{10});
HAnimJoint931->setSkinCoordWeight(new float[1]{1}, 1);
HAnimJoint931->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint931->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment932 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment932->setName("r_clavicle");
HAnimSegment932->setDEF("Joe_r_clavicle");
CShape* Shape933 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet934 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet934->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate935 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate935->setPoint(new float[6]{-0.029999999329447746,1.4600000381469727,0.019999999552965164,-0.09000000357627869,1.409999966621399,-0.09000000357627869});
IndexedLineSet934->setCoord(*Coordinate935);

Shape933->setGeometry(IndexedLineSet934);

CAppearance* Appearance936 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance936->setUSE("SegmentLine");
Shape933->setAppearance(*Appearance936);

HAnimSegment932->addChildren(*Shape933);

CTransform* Transform937 = (CTransform *)(m_pScene.createNode("Transform"));
Transform937->setTranslation(new float[3]{-0.029999999329447746,1.4600000381469727,0.019999999552965164});
CShape* Shape938 = (CShape *)(m_pScene.createNode("Shape"));
Shape938->setUSE("jointbox");
Transform937->addChildren(*Shape938);

HAnimSegment932->addChildren(*Transform937);

CHAnimSite* HAnimSite939 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite939->setName("r_clavicale");
HAnimSite939->setDEF("Joe_r_clavicale");
HAnimSite939->setTranslation(new float[3]{-0.029999999329447746,1.4600000381469727,0.03500000014901161});
CShape* Shape940 = (CShape *)(m_pScene.createNode("Shape"));
Shape940->setUSE("sitebox");
HAnimSite939->addChildren(*Shape940);

HAnimSegment932->addChildren(*HAnimSite939);

HAnimJoint931->addChildren(*HAnimSegment932);

CHAnimJoint* HAnimJoint941 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint941->setName("r_acromioclavicular");
HAnimJoint941->setDEF("Joe_r_acromioclavicular");
HAnimJoint941->setCenter(new float[3]{-0.09000000357627869,1.409999966621399,-0.10999999940395355});
HAnimJoint941->setSkinCoordIndex(new int[2]{77,29});
HAnimJoint941->setSkinCoordWeight(new float[2]{1,0.8999999761581421}, 2);
HAnimJoint941->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint941->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment942 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment942->setName("r_scapula");
HAnimSegment942->setDEF("Joe_r_scapula");
CShape* Shape943 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet944 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet944->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate945 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate945->setPoint(new float[6]{-0.09000000357627869,1.409999966621399,-0.09000000357627869,-0.20000000298023224,1.440000057220459,-0.03999999910593033});
IndexedLineSet944->setCoord(*Coordinate945);

Shape943->setGeometry(IndexedLineSet944);

CAppearance* Appearance946 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance946->setUSE("SegmentLine");
Shape943->setAppearance(*Appearance946);

HAnimSegment942->addChildren(*Shape943);

CTransform* Transform947 = (CTransform *)(m_pScene.createNode("Transform"));
Transform947->setTranslation(new float[3]{-0.09000000357627869,1.409999966621399,-0.09000000357627869});
CShape* Shape948 = (CShape *)(m_pScene.createNode("Shape"));
Shape948->setUSE("jointbox");
Transform947->addChildren(*Shape948);

HAnimSegment942->addChildren(*Transform947);

CTransform* Transform949 = (CTransform *)(m_pScene.createNode("Transform"));
Transform949->setTranslation(new float[3]{-0.10999999940395355,1.4270000457763672,-0.13750000298023224});
CShape* Shape950 = (CShape *)(m_pScene.createNode("Shape"));
Shape950->setUSE("skinsphere");
Transform949->addChildren(*Shape950);

HAnimSegment942->addChildren(*Transform949);

CHAnimSite* HAnimSite951 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite951->setName("r_acromion");
HAnimSite951->setDEF("Joe_r_acromion");
HAnimSite951->setTranslation(new float[3]{-0.17800000309944153,1.4824999570846558,-0.0625});
CShape* Shape952 = (CShape *)(m_pScene.createNode("Shape"));
Shape952->setUSE("sitebox");
HAnimSite951->addChildren(*Shape952);

HAnimSegment942->addChildren(*HAnimSite951);

CHAnimSite* HAnimSite953 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite953->setName("r_axilla_ant");
HAnimSite953->setDEF("Joe_r_axilla_ant");
HAnimSite953->setTranslation(new float[3]{-0.17000000178813934,1.3799999952316284,0.007000000216066837});
CShape* Shape954 = (CShape *)(m_pScene.createNode("Shape"));
Shape954->setUSE("sitebox");
HAnimSite953->addChildren(*Shape954);

HAnimSegment942->addChildren(*HAnimSite953);

CHAnimSite* HAnimSite955 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite955->setName("r_axilla_post");
HAnimSite955->setDEF("Joe_r_axilla_post");
HAnimSite955->setTranslation(new float[3]{-0.1599999964237213,1.3799999952316284,-0.12700000405311584});
CShape* Shape956 = (CShape *)(m_pScene.createNode("Shape"));
Shape956->setUSE("sitebox");
HAnimSite955->addChildren(*Shape956);

HAnimSegment942->addChildren(*HAnimSite955);

HAnimJoint941->addChildren(*HAnimSegment942);

CHAnimJoint* HAnimJoint957 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint957->setName("r_shoulder");
HAnimJoint957->setDEF("Joe_r_shoulder");
HAnimJoint957->setCenter(new float[3]{-0.20000000298023224,1.440000057220459,-0.03999999910593033});
HAnimJoint957->setSkinCoordIndex(new int[10]{29,30,32,78,218,219,220,221,86,88});
HAnimJoint957->setSkinCoordWeight(new float[10]{0.10000000149011612,1,1,1,1,1,1,1,0.30000001192092896,0.20000000298023224}, 10);
HAnimJoint957->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint957->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment958 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment958->setName("r_upperarm");
HAnimSegment958->setDEF("Joe_r_upperarm");
CTransform* Transform959 = (CTransform *)(m_pScene.createNode("Transform"));
Transform959->setTranslation(new float[3]{-0.20000000298023224,1.440000057220459,-0.03999999910593033});
CShape* Shape960 = (CShape *)(m_pScene.createNode("Shape"));
Shape960->setUSE("jointbox");
Transform959->addChildren(*Shape960);

HAnimSegment958->addChildren(*Transform959);

CShape* Shape961 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet962 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet962->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate963 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate963->setPoint(new float[6]{-0.20000000298023224,1.440000057220459,-0.03999999910593033,-0.20000000298023224,1.138800024986267,-0.03999999910593033});
IndexedLineSet962->setCoord(*Coordinate963);

Shape961->setGeometry(IndexedLineSet962);

CAppearance* Appearance964 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance964->setUSE("SegmentLine");
Shape961->setAppearance(*Appearance964);

HAnimSegment958->addChildren(*Shape961);

CTransform* Transform965 = (CTransform *)(m_pScene.createNode("Transform"));
Transform965->setTranslation(new float[3]{-0.17800000309944153,1.4824999570846558,-0.0625});
CShape* Shape966 = (CShape *)(m_pScene.createNode("Shape"));
Shape966->setUSE("skinsphere");
Transform965->addChildren(*Shape966);

HAnimSegment958->addChildren(*Transform965);

CTransform* Transform967 = (CTransform *)(m_pScene.createNode("Transform"));
Transform967->setTranslation(new float[3]{-0.17000000178813934,1.3799999952316284,0.007000000216066837});
CShape* Shape968 = (CShape *)(m_pScene.createNode("Shape"));
Shape968->setUSE("skinsphere");
Transform967->addChildren(*Shape968);

HAnimSegment958->addChildren(*Transform967);

CTransform* Transform969 = (CTransform *)(m_pScene.createNode("Transform"));
Transform969->setTranslation(new float[3]{-0.1599999964237213,1.3799999952316284,-0.12700000405311584});
CShape* Shape970 = (CShape *)(m_pScene.createNode("Shape"));
Shape970->setUSE("skinsphere");
Transform969->addChildren(*Shape970);

HAnimSegment958->addChildren(*Transform969);

CTransform* Transform971 = (CTransform *)(m_pScene.createNode("Transform"));
Transform971->setTranslation(new float[3]{-0.23499999940395355,1.4199999570846558,-0.0625});
CShape* Shape972 = (CShape *)(m_pScene.createNode("Shape"));
Shape972->setUSE("skinsphere");
Transform971->addChildren(*Shape972);

HAnimSegment958->addChildren(*Transform971);

CTransform* Transform973 = (CTransform *)(m_pScene.createNode("Transform"));
Transform973->setTranslation(new float[3]{-0.23000000417232513,1.2350000143051147,-0.03999999910593033});
CShape* Shape974 = (CShape *)(m_pScene.createNode("Shape"));
Shape974->setUSE("skinsphere");
Transform973->addChildren(*Shape974);

HAnimSegment958->addChildren(*Transform973);

CTransform* Transform975 = (CTransform *)(m_pScene.createNode("Transform"));
Transform975->setTranslation(new float[3]{-0.1599999964237213,1.2300000190734863,-0.03999999910593033});
CShape* Shape976 = (CShape *)(m_pScene.createNode("Shape"));
Shape976->setUSE("skinsphere");
Transform975->addChildren(*Shape976);

HAnimSegment958->addChildren(*Transform975);

CTransform* Transform977 = (CTransform *)(m_pScene.createNode("Transform"));
Transform977->setTranslation(new float[3]{-0.20000000298023224,1.2300000190734863,-0.10499999672174454});
CShape* Shape978 = (CShape *)(m_pScene.createNode("Shape"));
Shape978->setUSE("skinsphere");
Transform977->addChildren(*Shape978);

HAnimSegment958->addChildren(*Transform977);

CTransform* Transform979 = (CTransform *)(m_pScene.createNode("Transform"));
Transform979->setTranslation(new float[3]{-0.20000000298023224,1.2350000143051147,0.019999999552965164});
CShape* Shape980 = (CShape *)(m_pScene.createNode("Shape"));
Shape980->setUSE("skinsphere");
Transform979->addChildren(*Shape980);

HAnimSegment958->addChildren(*Transform979);

CHAnimSite* HAnimSite981 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite981->setName("r_humeral_medial_epicn");
HAnimSite981->setDEF("Joe_r_humeral_medial_epicn");
HAnimSite981->setTranslation(new float[3]{-0.16500000655651093,1.138800024986267,-0.03999999910593033});
CShape* Shape982 = (CShape *)(m_pScene.createNode("Shape"));
Shape982->setUSE("sitebox");
HAnimSite981->addChildren(*Shape982);

HAnimSegment958->addChildren(*HAnimSite981);

CHAnimSite* HAnimSite983 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite983->setName("r_radiale");
HAnimSite983->setDEF("Joe_r_radiale");
HAnimSite983->setTranslation(new float[3]{-0.23000000417232513,1.1330000162124634,-0.054999999701976776});
CShape* Shape984 = (CShape *)(m_pScene.createNode("Shape"));
Shape984->setUSE("sitebox");
HAnimSite983->addChildren(*Shape984);

HAnimSegment958->addChildren(*HAnimSite983);

CHAnimSite* HAnimSite985 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite985->setName("r_humeral_lateral_epicn");
HAnimSite985->setDEF("Joe_r_humeral_lateral_epicn");
HAnimSite985->setTranslation(new float[3]{-0.24400000274181366,1.138800024986267,-0.03999999910593033});
CShape* Shape986 = (CShape *)(m_pScene.createNode("Shape"));
Shape986->setUSE("sitebox");
HAnimSite985->addChildren(*Shape986);

HAnimSegment958->addChildren(*HAnimSite985);

HAnimJoint957->addChildren(*HAnimSegment958);

CHAnimJoint* HAnimJoint987 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint987->setName("r_elbow");
HAnimJoint987->setDEF("Joe_r_elbow");
HAnimJoint987->setCenter(new float[3]{-0.20000000298023224,1.138800024986267,-0.03999999910593033});
HAnimJoint987->setSkinCoordIndex(new int[12]{33,34,35,225,226,227,228,229,231,232,233,234});
HAnimJoint987->setSkinCoordWeight(new float[12]{1,1,1,1,1,1,1,1,1,1,1,1}, 12);
HAnimJoint987->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint987->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment988 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment988->setName("r_forearm");
HAnimSegment988->setDEF("Joe_r_forearm");
CShape* Shape989 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet990 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet990->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate991 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate991->setPoint(new float[6]{-0.20000000298023224,1.138800024986267,-0.03999999910593033,-0.20000000298023224,0.8899999856948853,-0.03999999910593033});
IndexedLineSet990->setCoord(*Coordinate991);

Shape989->setGeometry(IndexedLineSet990);

CAppearance* Appearance992 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance992->setUSE("SegmentLine");
Shape989->setAppearance(*Appearance992);

HAnimSegment988->addChildren(*Shape989);

CTransform* Transform993 = (CTransform *)(m_pScene.createNode("Transform"));
Transform993->setTranslation(new float[3]{-0.20000000298023224,1.138800024986267,-0.03999999910593033});
CShape* Shape994 = (CShape *)(m_pScene.createNode("Shape"));
Shape994->setUSE("jointbox");
Transform993->addChildren(*Shape994);

HAnimSegment988->addChildren(*Transform993);

CTransform* Transform995 = (CTransform *)(m_pScene.createNode("Transform"));
Transform995->setTranslation(new float[3]{-0.20000000298023224,1.138800024986267,0.013000000268220901});
CShape* Shape996 = (CShape *)(m_pScene.createNode("Shape"));
Shape996->setUSE("skinsphere");
Transform995->addChildren(*Shape996);

HAnimSegment988->addChildren(*Transform995);

CTransform* Transform997 = (CTransform *)(m_pScene.createNode("Transform"));
Transform997->setTranslation(new float[3]{-0.22499999403953552,1,-0.009999999776482582});
CShape* Shape998 = (CShape *)(m_pScene.createNode("Shape"));
Shape998->setUSE("skinsphere");
Transform997->addChildren(*Shape998);

HAnimSegment988->addChildren(*Transform997);

CTransform* Transform999 = (CTransform *)(m_pScene.createNode("Transform"));
Transform999->setTranslation(new float[3]{-0.22499999403953552,1,-0.07000000029802322});
CShape* Shape1000 = (CShape *)(m_pScene.createNode("Shape"));
Shape1000->setUSE("skinsphere");
Transform999->addChildren(*Shape1000);

HAnimSegment988->addChildren(*Transform999);

CTransform* Transform1001 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1001->setTranslation(new float[3]{-0.1850000023841858,1,-0.009999999776482582});
CShape* Shape1002 = (CShape *)(m_pScene.createNode("Shape"));
Shape1002->setUSE("skinsphere");
Transform1001->addChildren(*Shape1002);

HAnimSegment988->addChildren(*Transform1001);

CTransform* Transform1003 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1003->setTranslation(new float[3]{-0.1850000023841858,1,-0.07000000029802322});
CShape* Shape1004 = (CShape *)(m_pScene.createNode("Shape"));
Shape1004->setUSE("skinsphere");
Transform1003->addChildren(*Shape1004);

HAnimSegment988->addChildren(*Transform1003);

CHAnimSite* HAnimSite1005 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1005->setName("r_radial_styloid");
HAnimSite1005->setDEF("Joe_r_radial_styloid");
HAnimSite1005->setTranslation(new float[3]{-0.20000000298023224,0.8999999761581421,-0.014999999664723873});
CShape* Shape1006 = (CShape *)(m_pScene.createNode("Shape"));
Shape1006->setUSE("sitebox");
HAnimSite1005->addChildren(*Shape1006);

HAnimSegment988->addChildren(*HAnimSite1005);

CHAnimSite* HAnimSite1007 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1007->setName("r_olecranon");
HAnimSite1007->setDEF("Joe_r_olecranon");
HAnimSite1007->setTranslation(new float[3]{-0.20000000298023224,1.138800024986267,-0.07999999821186066});
CShape* Shape1008 = (CShape *)(m_pScene.createNode("Shape"));
Shape1008->setUSE("sitebox");
HAnimSite1007->addChildren(*Shape1008);

HAnimSegment988->addChildren(*HAnimSite1007);

HAnimJoint987->addChildren(*HAnimSegment988);

CHAnimJoint* HAnimJoint1009 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1009->setName("r_wrist");
HAnimJoint1009->setDEF("Joe_r_wrist");
HAnimJoint1009->setCenter(new float[3]{-0.20000000298023224,0.8899999856948853,-0.03999999910593033});
HAnimJoint1009->setSkinCoordIndex(new int[8]{235,236,237,238,239,240,241,242});
HAnimJoint1009->setSkinCoordWeight(new float[8]{1,1,1,1,1,1,1,1}, 8);
HAnimJoint1009->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1009->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1010 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1010->setName("r_hand");
HAnimSegment1010->setDEF("Joe_r_hand");
CShape* Shape1011 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1012 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1012->setCoordIndex(new int[15]{0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1});
CCoordinate* Coordinate1013 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1013->setPoint(new float[18]{-0.20000000298023224,0.8899999856948853,-0.03999999910593033,-0.20000000298023224,0.8500000238418579,0,-0.20000000298023224,0.8399999737739563,-0.014999999664723873,-0.20000000298023224,0.8349999785423279,-0.03999999910593033,-0.20000000298023224,0.8349999785423279,-0.06499999761581421,-0.20000000298023224,0.8399999737739563,-0.08500000089406967});
IndexedLineSet1012->setCoord(*Coordinate1013);

Shape1011->setGeometry(IndexedLineSet1012);

CAppearance* Appearance1014 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1014->setUSE("SegmentLine");
Shape1011->setAppearance(*Appearance1014);

HAnimSegment1010->addChildren(*Shape1011);

CTransform* Transform1015 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1015->setTranslation(new float[3]{-0.20000000298023224,0.8899999856948853,-0.03999999910593033});
CShape* Shape1016 = (CShape *)(m_pScene.createNode("Shape"));
Shape1016->setUSE("jointbox");
Transform1015->addChildren(*Shape1016);

HAnimSegment1010->addChildren(*Transform1015);

CHAnimSite* HAnimSite1017 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1017->setName("r_ulnar_styloid");
HAnimSite1017->setDEF("Joe_r_ulnar_styloid");
HAnimSite1017->setTranslation(new float[3]{-0.20000000298023224,0.8999999761581421,-0.08500000089406967});
CShape* Shape1018 = (CShape *)(m_pScene.createNode("Shape"));
Shape1018->setUSE("sitebox");
HAnimSite1017->addChildren(*Shape1018);

HAnimSegment1010->addChildren(*HAnimSite1017);

HAnimJoint1009->addChildren(*HAnimSegment1010);

CHAnimJoint* HAnimJoint1019 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1019->setName("r_thumb1");
HAnimJoint1019->setDEF("Joe_r_thumb1");
HAnimJoint1019->setCenter(new float[3]{-0.20000000298023224,0.8500000238418579,0});
HAnimJoint1019->setSkinCoordIndex(new int[2]{243,244});
HAnimJoint1019->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint1019->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1019->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1020 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1020->setName("r_thumb_metacarpal");
HAnimSegment1020->setDEF("Joe_r_thumb_metacarpal");
CShape* Shape1021 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1022 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1022->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1023 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1023->setPoint(new float[6]{-0.20000000298023224,0.8500000238418579,0,-0.20000000298023224,0.8199999928474426,0.029999999329447746});
IndexedLineSet1022->setCoord(*Coordinate1023);

Shape1021->setGeometry(IndexedLineSet1022);

CAppearance* Appearance1024 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1024->setUSE("SegmentLine");
Shape1021->setAppearance(*Appearance1024);

HAnimSegment1020->addChildren(*Shape1021);

CTransform* Transform1025 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1025->setTranslation(new float[3]{-0.20000000298023224,0.8500000238418579,0});
CShape* Shape1026 = (CShape *)(m_pScene.createNode("Shape"));
Shape1026->setUSE("jointbox");
Transform1025->addChildren(*Shape1026);

HAnimSegment1020->addChildren(*Transform1025);

HAnimJoint1019->addChildren(*HAnimSegment1020);

CHAnimJoint* HAnimJoint1027 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1027->setName("r_thumb2");
HAnimJoint1027->setDEF("Joe_r_thumb2");
HAnimJoint1027->setCenter(new float[3]{-0.20000000298023224,0.8199999928474426,0.029999999329447746});
HAnimJoint1027->setSkinCoordIndex(new int[6]{254,255,256,257,258,259});
HAnimJoint1027->setSkinCoordWeight(new float[6]{0.5,0.5,0.5,1,1,1}, 6);
HAnimJoint1027->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1027->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1028 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1028->setName("r_thumb_proximal");
HAnimSegment1028->setDEF("Joe_r_thumb_proximal");
CShape* Shape1029 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1030 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1030->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1031 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1031->setPoint(new float[6]{-0.20000000298023224,0.8199999928474426,0.029999999329447746,-0.20000000298023224,0.800000011920929,0.05000000074505806});
IndexedLineSet1030->setCoord(*Coordinate1031);

Shape1029->setGeometry(IndexedLineSet1030);

CAppearance* Appearance1032 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1032->setUSE("SegmentLine");
Shape1029->setAppearance(*Appearance1032);

HAnimSegment1028->addChildren(*Shape1029);

CTransform* Transform1033 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1033->setTranslation(new float[3]{-0.20000000298023224,0.8199999928474426,0.029999999329447746});
CShape* Shape1034 = (CShape *)(m_pScene.createNode("Shape"));
Shape1034->setUSE("jointbox");
Transform1033->addChildren(*Shape1034);

HAnimSegment1028->addChildren(*Transform1033);

HAnimJoint1027->addChildren(*HAnimSegment1028);

CHAnimJoint* HAnimJoint1035 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1035->setName("r_thumb3");
HAnimJoint1035->setDEF("Joe_r_thumb3");
HAnimJoint1035->setCenter(new float[3]{-0.20000000298023224,0.800000011920929,0.05000000074505806});
HAnimJoint1035->setSkinCoordIndex(new int[9]{260,261,262,263,264,265,266,267,268});
HAnimJoint1035->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint1035->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1035->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1036 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1036->setName("r_thumb_distal");
HAnimSegment1036->setDEF("Joe_r_thumb_distal");
CShape* Shape1037 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1038 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1038->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1039 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1039->setPoint(new float[6]{-0.20000000298023224,0.800000011920929,0.05000000074505806,-0.20000000298023224,0.7799999713897705,0.07000000029802322});
IndexedLineSet1038->setCoord(*Coordinate1039);

Shape1037->setGeometry(IndexedLineSet1038);

CAppearance* Appearance1040 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1040->setUSE("SegmentLine");
Shape1037->setAppearance(*Appearance1040);

HAnimSegment1036->addChildren(*Shape1037);

CTransform* Transform1041 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1041->setDEF("Thumbnail");
Transform1041->setTranslation(new float[3]{-0.20000000298023224,0.7850000262260437,0.07500000298023224});
CShape* Shape1042 = (CShape *)(m_pScene.createNode("Shape"));
Shape1042->setUSE("skinsphere");
Transform1041->addChildren(*Shape1042);

HAnimSegment1036->addChildren(*Transform1041);

CTransform* Transform1043 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1043->setTranslation(new float[3]{-0.20000000298023224,0.800000011920929,0.05000000074505806});
CShape* Shape1044 = (CShape *)(m_pScene.createNode("Shape"));
Shape1044->setUSE("jointbox");
Transform1043->addChildren(*Shape1044);

HAnimSegment1036->addChildren(*Transform1043);

CHAnimSite* HAnimSite1045 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1045->setName("r_thumb_distal_tip");
HAnimSite1045->setDEF("Joe_r_thumb_distal_tip");
HAnimSite1045->setTranslation(new float[3]{-0.20000000298023224,0.7799999713897705,0.07000000029802322});
CShape* Shape1046 = (CShape *)(m_pScene.createNode("Shape"));
Shape1046->setUSE("sitebox");
HAnimSite1045->addChildren(*Shape1046);

HAnimSegment1036->addChildren(*HAnimSite1045);

HAnimJoint1035->addChildren(*HAnimSegment1036);

HAnimJoint1027->addChildren(*HAnimJoint1035);

HAnimJoint1019->addChildren(*HAnimJoint1027);

HAnimJoint1009->addChildren(*HAnimJoint1019);

CHAnimJoint* HAnimJoint1047 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1047->setName("r_index0");
HAnimJoint1047->setDEF("Joe_r_index0");
HAnimJoint1047->setCenter(new float[3]{-0.20000000298023224,0.8399999737739563,-0.014999999664723873});
HAnimJoint1047->setSkinCoordIndex(new int[2]{245,246});
HAnimJoint1047->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint1047->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1047->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1048 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1048->setName("r_index_metacarpal");
HAnimSegment1048->setDEF("Joe_r_index_metacarpal");
CShape* Shape1049 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1050 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1050->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1051 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1051->setPoint(new float[6]{-0.20000000298023224,0.8399999737739563,-0.014999999664723873,-0.20000000298023224,0.7929999828338623,-0.014999999664723873});
IndexedLineSet1050->setCoord(*Coordinate1051);

Shape1049->setGeometry(IndexedLineSet1050);

CAppearance* Appearance1052 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1052->setUSE("SegmentLine");
Shape1049->setAppearance(*Appearance1052);

HAnimSegment1048->addChildren(*Shape1049);

CTransform* Transform1053 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1053->setTranslation(new float[3]{-0.20000000298023224,0.8399999737739563,-0.014999999664723873});
CShape* Shape1054 = (CShape *)(m_pScene.createNode("Shape"));
Shape1054->setUSE("jointbox");
Transform1053->addChildren(*Shape1054);

HAnimSegment1048->addChildren(*Transform1053);

CHAnimSite* HAnimSite1055 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1055->setName("r_metacarpal_pha2");
HAnimSite1055->setDEF("Joe_r_metacarpal_pha2");
HAnimSite1055->setTranslation(new float[3]{-0.20000000298023224,0.7929999828338623,-0.004999999888241291});
CShape* Shape1056 = (CShape *)(m_pScene.createNode("Shape"));
Shape1056->setUSE("sitebox");
HAnimSite1055->addChildren(*Shape1056);

HAnimSegment1048->addChildren(*HAnimSite1055);

HAnimJoint1047->addChildren(*HAnimSegment1048);

CHAnimJoint* HAnimJoint1057 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1057->setName("r_index1");
HAnimJoint1057->setDEF("Joe_r_index1");
HAnimJoint1057->setCenter(new float[3]{-0.20000000298023224,0.7929999828338623,-0.014999999664723873});
HAnimJoint1057->setSkinCoordIndex(new int[7]{254,255,256,269,270,271,279});
HAnimJoint1057->setSkinCoordWeight(new float[7]{0.5,0.5,0.5,1,1,1,0.5}, 7);
HAnimJoint1057->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1057->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1058 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1058->setName("r_index_proximal");
HAnimSegment1058->setDEF("Joe_r_index_proximal");
CShape* Shape1059 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1060 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1060->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1061 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1061->setPoint(new float[6]{-0.20000000298023224,0.7929999828338623,-0.014999999664723873,-0.20000000298023224,0.7450000047683716,-0.014999999664723873});
IndexedLineSet1060->setCoord(*Coordinate1061);

Shape1059->setGeometry(IndexedLineSet1060);

CAppearance* Appearance1062 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1062->setUSE("SegmentLine");
Shape1059->setAppearance(*Appearance1062);

HAnimSegment1058->addChildren(*Shape1059);

CTransform* Transform1063 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1063->setTranslation(new float[3]{-0.20000000298023224,0.7929999828338623,-0.014999999664723873});
CShape* Shape1064 = (CShape *)(m_pScene.createNode("Shape"));
Shape1064->setUSE("jointbox");
Transform1063->addChildren(*Shape1064);

HAnimSegment1058->addChildren(*Transform1063);

HAnimJoint1057->addChildren(*HAnimSegment1058);

CHAnimJoint* HAnimJoint1065 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1065->setName("r_index2");
HAnimJoint1065->setDEF("Joe_r_index2");
HAnimJoint1065->setCenter(new float[3]{-0.20000000298023224,0.7450000047683716,-0.014999999664723873});
HAnimJoint1065->setSkinCoordIndex(new int[4]{282,283,284,285});
HAnimJoint1065->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint1065->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1065->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1066 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1066->setName("r_index_middle");
HAnimSegment1066->setDEF("Joe_r_index_middle");
CShape* Shape1067 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1068 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1068->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1069 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1069->setPoint(new float[6]{-0.20000000298023224,0.7450000047683716,-0.014999999664723873,-0.20000000298023224,0.7200000286102295,-0.014999999664723873});
IndexedLineSet1068->setCoord(*Coordinate1069);

Shape1067->setGeometry(IndexedLineSet1068);

CAppearance* Appearance1070 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1070->setUSE("SegmentLine");
Shape1067->setAppearance(*Appearance1070);

HAnimSegment1066->addChildren(*Shape1067);

CTransform* Transform1071 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1071->setTranslation(new float[3]{-0.20000000298023224,0.7450000047683716,-0.014999999664723873});
CShape* Shape1072 = (CShape *)(m_pScene.createNode("Shape"));
Shape1072->setUSE("jointbox");
Transform1071->addChildren(*Shape1072);

HAnimSegment1066->addChildren(*Transform1071);

HAnimJoint1065->addChildren(*HAnimSegment1066);

CHAnimJoint* HAnimJoint1073 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1073->setName("r_index3");
HAnimJoint1073->setDEF("Joe_r_index3");
HAnimJoint1073->setCenter(new float[3]{-0.20000000298023224,0.7200000286102295,-0.014999999664723873});
HAnimJoint1073->setSkinCoordIndex(new int[9]{286,287,288,289,290,291,292,293,294});
HAnimJoint1073->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint1073->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1073->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1074 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1074->setName("r_index_distal");
HAnimSegment1074->setDEF("Joe_r_index_distal");
CShape* Shape1075 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1076 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1076->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1077 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1077->setPoint(new float[6]{-0.20000000298023224,0.7200000286102295,-0.014999999664723873,-0.20000000298023224,0.6949999928474426,-0.014999999664723873});
IndexedLineSet1076->setCoord(*Coordinate1077);

Shape1075->setGeometry(IndexedLineSet1076);

CAppearance* Appearance1078 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1078->setUSE("SegmentLine");
Shape1075->setAppearance(*Appearance1078);

HAnimSegment1074->addChildren(*Shape1075);

CTransform* Transform1079 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1079->setTranslation(new float[3]{-0.20000000298023224,0.7200000286102295,-0.014999999664723873});
CShape* Shape1080 = (CShape *)(m_pScene.createNode("Shape"));
Shape1080->setUSE("jointbox");
Transform1079->addChildren(*Shape1080);

HAnimSegment1074->addChildren(*Transform1079);

CHAnimSite* HAnimSite1081 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1081->setName("r_index_distal_tip");
HAnimSite1081->setDEF("Joe_r_index_distal_tip");
HAnimSite1081->setTranslation(new float[3]{-0.20000000298023224,0.6949999928474426,-0.014999999664723873});
CShape* Shape1082 = (CShape *)(m_pScene.createNode("Shape"));
Shape1082->setUSE("sitebox");
HAnimSite1081->addChildren(*Shape1082);

HAnimSegment1074->addChildren(*HAnimSite1081);

HAnimJoint1073->addChildren(*HAnimSegment1074);

HAnimJoint1065->addChildren(*HAnimJoint1073);

HAnimJoint1057->addChildren(*HAnimJoint1065);

HAnimJoint1047->addChildren(*HAnimJoint1057);

HAnimJoint1009->addChildren(*HAnimJoint1047);

CHAnimJoint* HAnimJoint1083 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1083->setName("r_middle0");
HAnimJoint1083->setDEF("Joe_r_middle0");
HAnimJoint1083->setCenter(new float[3]{-0.20000000298023224,0.8349999785423279,-0.03999999910593033});
HAnimJoint1083->setSkinCoordIndex(new int[2]{247,248});
HAnimJoint1083->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint1083->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1083->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1084 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1084->setName("r_middle_metacarpal");
HAnimSegment1084->setDEF("Joe_r_middle_metacarpal");
CShape* Shape1085 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1086 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1086->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1087 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1087->setPoint(new float[6]{-0.20000000298023224,0.8349999785423279,-0.03999999910593033,-0.20000000298023224,0.7879999876022339,-0.03999999910593033});
IndexedLineSet1086->setCoord(*Coordinate1087);

Shape1085->setGeometry(IndexedLineSet1086);

CAppearance* Appearance1088 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1088->setUSE("SegmentLine");
Shape1085->setAppearance(*Appearance1088);

HAnimSegment1084->addChildren(*Shape1085);

CTransform* Transform1089 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1089->setTranslation(new float[3]{-0.20000000298023224,0.8349999785423279,-0.03999999910593033});
CShape* Shape1090 = (CShape *)(m_pScene.createNode("Shape"));
Shape1090->setUSE("jointbox");
Transform1089->addChildren(*Shape1090);

HAnimSegment1084->addChildren(*Transform1089);

HAnimJoint1083->addChildren(*HAnimSegment1084);

CHAnimJoint* HAnimJoint1091 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1091->setName("r_middle1");
HAnimJoint1091->setDEF("Joe_r_middle1");
HAnimJoint1091->setCenter(new float[3]{-0.20000000298023224,0.7879999876022339,-0.03999999910593033});
HAnimJoint1091->setSkinCoordIndex(new int[4]{272,273,279,280});
HAnimJoint1091->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
HAnimJoint1091->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1091->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1092 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1092->setName("r_middle_proximal");
HAnimSegment1092->setDEF("Joe_r_middle_proximal");
CShape* Shape1093 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1094 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1094->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1095 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1095->setPoint(new float[6]{-0.20000000298023224,0.7879999876022339,-0.03999999910593033,-0.20000000298023224,0.7400000095367432,-0.03999999910593033});
IndexedLineSet1094->setCoord(*Coordinate1095);

Shape1093->setGeometry(IndexedLineSet1094);

CAppearance* Appearance1096 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1096->setUSE("SegmentLine");
Shape1093->setAppearance(*Appearance1096);

HAnimSegment1092->addChildren(*Shape1093);

CTransform* Transform1097 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1097->setTranslation(new float[3]{-0.20000000298023224,0.7879999876022339,-0.03999999910593033});
CShape* Shape1098 = (CShape *)(m_pScene.createNode("Shape"));
Shape1098->setUSE("jointbox");
Transform1097->addChildren(*Shape1098);

HAnimSegment1092->addChildren(*Transform1097);

HAnimJoint1091->addChildren(*HAnimSegment1092);

CHAnimJoint* HAnimJoint1099 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1099->setName("r_middle2");
HAnimJoint1099->setDEF("Joe_r_middle2");
HAnimJoint1099->setCenter(new float[3]{-0.20000000298023224,0.7400000095367432,-0.03999999910593033});
HAnimJoint1099->setSkinCoordIndex(new int[4]{295,296,297,298});
HAnimJoint1099->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint1099->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1099->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1100 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1100->setName("r_middle_middle");
HAnimSegment1100->setDEF("Joe_r_middle_middle");
CShape* Shape1101 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1102 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1102->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1103 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1103->setPoint(new float[6]{-0.20000000298023224,0.7400000095367432,-0.03999999910593033,-0.20000000298023224,0.7142000198364258,-0.03999999910593033});
IndexedLineSet1102->setCoord(*Coordinate1103);

Shape1101->setGeometry(IndexedLineSet1102);

CAppearance* Appearance1104 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1104->setUSE("SegmentLine");
Shape1101->setAppearance(*Appearance1104);

HAnimSegment1100->addChildren(*Shape1101);

CTransform* Transform1105 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1105->setTranslation(new float[3]{-0.20000000298023224,0.7400000095367432,-0.03999999910593033});
CShape* Shape1106 = (CShape *)(m_pScene.createNode("Shape"));
Shape1106->setUSE("jointbox");
Transform1105->addChildren(*Shape1106);

HAnimSegment1100->addChildren(*Transform1105);

HAnimJoint1099->addChildren(*HAnimSegment1100);

CHAnimJoint* HAnimJoint1107 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1107->setName("r_middle3");
HAnimJoint1107->setDEF("Joe_r_middle3");
HAnimJoint1107->setCenter(new float[3]{-0.20000000298023224,0.7142000198364258,-0.03999999910593033});
HAnimJoint1107->setSkinCoordIndex(new int[9]{299,300,301,302,303,304,305,306,307});
HAnimJoint1107->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint1107->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1107->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1108 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1108->setName("r_middle_distal");
HAnimSegment1108->setDEF("Joe_r_middle_distal");
CShape* Shape1109 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1110 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1110->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1111 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1111->setPoint(new float[6]{-0.20000000298023224,0.7142000198364258,-0.03999999910593033,-0.20000000298023224,0.6758000254631042,-0.03999999910593033});
IndexedLineSet1110->setCoord(*Coordinate1111);

Shape1109->setGeometry(IndexedLineSet1110);

CAppearance* Appearance1112 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1112->setUSE("SegmentLine");
Shape1109->setAppearance(*Appearance1112);

HAnimSegment1108->addChildren(*Shape1109);

CTransform* Transform1113 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1113->setTranslation(new float[3]{-0.20000000298023224,0.7142000198364258,-0.03999999910593033});
CShape* Shape1114 = (CShape *)(m_pScene.createNode("Shape"));
Shape1114->setUSE("jointbox");
Transform1113->addChildren(*Shape1114);

HAnimSegment1108->addChildren(*Transform1113);

CHAnimSite* HAnimSite1115 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1115->setName("r_dactylion");
HAnimSite1115->setDEF("Joe_r_dactylion");
HAnimSite1115->setTranslation(new float[3]{-0.20000000298023224,0.6800000071525574,-0.03999999910593033});
CShape* Shape1116 = (CShape *)(m_pScene.createNode("Shape"));
Shape1116->setUSE("sitebox");
HAnimSite1115->addChildren(*Shape1116);

HAnimSegment1108->addChildren(*HAnimSite1115);

CHAnimSite* HAnimSite1117 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1117->setName("r_middle_distal_tip");
HAnimSite1117->setDEF("Joe_r_middle_distal_tip");
HAnimSite1117->setTranslation(new float[3]{-0.20000000298023224,0.6800000071525574,-0.03999999910593033});
CShape* Shape1118 = (CShape *)(m_pScene.createNode("Shape"));
Shape1118->setUSE("sitebox");
HAnimSite1117->addChildren(*Shape1118);

HAnimSegment1108->addChildren(*HAnimSite1117);

HAnimJoint1107->addChildren(*HAnimSegment1108);

HAnimJoint1099->addChildren(*HAnimJoint1107);

HAnimJoint1091->addChildren(*HAnimJoint1099);

HAnimJoint1083->addChildren(*HAnimJoint1091);

HAnimJoint1009->addChildren(*HAnimJoint1083);

CHAnimJoint* HAnimJoint1119 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1119->setName("r_ring0");
HAnimJoint1119->setDEF("Joe_r_ring0");
HAnimJoint1119->setCenter(new float[3]{-0.2,0.835,-0.065});
HAnimJoint1119->setSkinCoordIndex(new int[2]{249,250});
HAnimJoint1119->setSkinCoordWeight(new float[2]{1,1}, 2);
HAnimJoint1119->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1119->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1120 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1120->setName("r_ring_metacarpal");
HAnimSegment1120->setDEF("Joe_r_ring_metacarpal");
CShape* Shape1121 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1122 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1122->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1123 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1123->setPoint(new float[6]{-0.20000000298023224,0.8349999785423279,-0.06499999761581421,-0.20000000298023224,0.7929999828338623,-0.06499999761581421});
IndexedLineSet1122->setCoord(*Coordinate1123);

Shape1121->setGeometry(IndexedLineSet1122);

CAppearance* Appearance1124 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1124->setUSE("SegmentLine");
Shape1121->setAppearance(*Appearance1124);

HAnimSegment1120->addChildren(*Shape1121);

CTransform* Transform1125 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1125->setTranslation(new float[3]{-0.20000000298023224,0.8349999785423279,-0.06499999761581421});
CShape* Shape1126 = (CShape *)(m_pScene.createNode("Shape"));
Shape1126->setUSE("jointbox");
Transform1125->addChildren(*Shape1126);

HAnimSegment1120->addChildren(*Transform1125);

HAnimJoint1119->addChildren(*HAnimSegment1120);

CHAnimJoint* HAnimJoint1127 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1127->setName("r_ring1");
HAnimJoint1127->setDEF("Joe_r_ring1");
HAnimJoint1127->setCenter(new float[3]{-0.20000000298023224,0.7929999828338623,-0.06499999761581421});
HAnimJoint1127->setSkinCoordIndex(new int[4]{274,275,280,281});
HAnimJoint1127->setSkinCoordWeight(new float[4]{1,1,0.5,0.5}, 4);
HAnimJoint1127->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1127->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1128 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1128->setName("r_ring_proximal");
HAnimSegment1128->setDEF("Joe_r_ring_proximal");
CShape* Shape1129 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1130 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1130->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1131 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1131->setPoint(new float[6]{-0.20000000298023224,0.7929999828338623,-0.06499999761581421,-0.20000000298023224,0.7400000095367432,-0.06499999761581421});
IndexedLineSet1130->setCoord(*Coordinate1131);

Shape1129->setGeometry(IndexedLineSet1130);

CAppearance* Appearance1132 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1132->setUSE("SegmentLine");
Shape1129->setAppearance(*Appearance1132);

HAnimSegment1128->addChildren(*Shape1129);

CTransform* Transform1133 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1133->setTranslation(new float[3]{-0.20000000298023224,0.7929999828338623,-0.06499999761581421});
CShape* Shape1134 = (CShape *)(m_pScene.createNode("Shape"));
Shape1134->setUSE("jointbox");
Transform1133->addChildren(*Shape1134);

HAnimSegment1128->addChildren(*Transform1133);

HAnimJoint1127->addChildren(*HAnimSegment1128);

CHAnimJoint* HAnimJoint1135 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1135->setName("r_ring2");
HAnimJoint1135->setDEF("Joe_r_ring2");
HAnimJoint1135->setCenter(new float[3]{-0.20000000298023224,0.7400000095367432,-0.06499999761581421});
HAnimJoint1135->setSkinCoordIndex(new int[4]{308,309,310,311});
HAnimJoint1135->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint1135->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1135->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1136 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1136->setName("r_ring_middle");
HAnimSegment1136->setDEF("Joe_r_ring_middle");
CShape* Shape1137 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1138 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1138->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1139 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1139->setPoint(new float[6]{-0.20000000298023224,0.7400000095367432,-0.06499999761581421,-0.20000000298023224,0.7177000045776367,-0.06499999761581421});
IndexedLineSet1138->setCoord(*Coordinate1139);

Shape1137->setGeometry(IndexedLineSet1138);

CAppearance* Appearance1140 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1140->setUSE("SegmentLine");
Shape1137->setAppearance(*Appearance1140);

HAnimSegment1136->addChildren(*Shape1137);

CTransform* Transform1141 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1141->setTranslation(new float[3]{-0.20000000298023224,0.7400000095367432,-0.06499999761581421});
CShape* Shape1142 = (CShape *)(m_pScene.createNode("Shape"));
Shape1142->setUSE("jointbox");
Transform1141->addChildren(*Shape1142);

HAnimSegment1136->addChildren(*Transform1141);

HAnimJoint1135->addChildren(*HAnimSegment1136);

CHAnimJoint* HAnimJoint1143 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1143->setName("r_ring3");
HAnimJoint1143->setDEF("Joe_r_ring3");
HAnimJoint1143->setCenter(new float[3]{-0.20000000298023224,0.7177000045776367,-0.06499999761581421});
HAnimJoint1143->setSkinCoordIndex(new int[9]{312,313,314,315,316,317,318,319,320});
HAnimJoint1143->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint1143->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1143->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1144 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1144->setName("r_ring_distal");
HAnimSegment1144->setDEF("Joe_r_ring_distal");
CShape* Shape1145 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1146 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1146->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1147 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1147->setPoint(new float[6]{-0.20000000298023224,0.7177000045776367,-0.06499999761581421,-0.20000000298023224,0.6949999928474426,-0.06499999761581421});
IndexedLineSet1146->setCoord(*Coordinate1147);

Shape1145->setGeometry(IndexedLineSet1146);

CAppearance* Appearance1148 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1148->setUSE("SegmentLine");
Shape1145->setAppearance(*Appearance1148);

HAnimSegment1144->addChildren(*Shape1145);

CTransform* Transform1149 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1149->setTranslation(new float[3]{-0.20000000298023224,0.7177000045776367,-0.06499999761581421});
CShape* Shape1150 = (CShape *)(m_pScene.createNode("Shape"));
Shape1150->setUSE("jointbox");
Transform1149->addChildren(*Shape1150);

HAnimSegment1144->addChildren(*Transform1149);

CHAnimSite* HAnimSite1151 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1151->setName("r_ring_distal_tip");
HAnimSite1151->setDEF("Joe_r_ring_distal_tip");
HAnimSite1151->setTranslation(new float[3]{-0.20000000298023224,0.6949999928474426,-0.06499999761581421});
CShape* Shape1152 = (CShape *)(m_pScene.createNode("Shape"));
Shape1152->setUSE("sitebox");
HAnimSite1151->addChildren(*Shape1152);

HAnimSegment1144->addChildren(*HAnimSite1151);

HAnimJoint1143->addChildren(*HAnimSegment1144);

HAnimJoint1135->addChildren(*HAnimJoint1143);

HAnimJoint1127->addChildren(*HAnimJoint1135);

HAnimJoint1119->addChildren(*HAnimJoint1127);

HAnimJoint1009->addChildren(*HAnimJoint1119);

CHAnimJoint* HAnimJoint1153 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1153->setName("r_pinky0");
HAnimJoint1153->setDEF("Joe_r_pinky0");
HAnimJoint1153->setCenter(new float[3]{-0.20000000298023224,0.8399999737739563,-0.08500000089406967});
HAnimJoint1153->setSkinCoordIndex(new int[4]{251,252,253,281});
HAnimJoint1153->setSkinCoordWeight(new float[4]{1,1,1,0.5}, 4);
HAnimJoint1153->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1153->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1154 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1154->setName("r_pinky_metacarpal");
HAnimSegment1154->setDEF("Joe_r_pinky_metacarpal");
CShape* Shape1155 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1156 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1156->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1157 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1157->setPoint(new float[6]{-0.20000000298023224,0.8399999737739563,-0.08500000089406967,-0.20000000298023224,0.7900000214576721,-0.08500000089406967});
IndexedLineSet1156->setCoord(*Coordinate1157);

Shape1155->setGeometry(IndexedLineSet1156);

CAppearance* Appearance1158 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1158->setUSE("SegmentLine");
Shape1155->setAppearance(*Appearance1158);

HAnimSegment1154->addChildren(*Shape1155);

CTransform* Transform1159 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1159->setTranslation(new float[3]{-0.20000000298023224,0.8399999737739563,-0.08500000089406967});
CShape* Shape1160 = (CShape *)(m_pScene.createNode("Shape"));
Shape1160->setUSE("jointbox");
Transform1159->addChildren(*Shape1160);

HAnimSegment1154->addChildren(*Transform1159);

CHAnimSite* HAnimSite1161 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1161->setName("r_metacarpal_pha5");
HAnimSite1161->setDEF("Joe_r_metacarpal_pha5");
HAnimSite1161->setTranslation(new float[3]{-0.20000000298023224,0.7900000214576721,-0.0949999988079071});
CShape* Shape1162 = (CShape *)(m_pScene.createNode("Shape"));
Shape1162->setUSE("sitebox");
HAnimSite1161->addChildren(*Shape1162);

HAnimSegment1154->addChildren(*HAnimSite1161);

HAnimJoint1153->addChildren(*HAnimSegment1154);

CHAnimJoint* HAnimJoint1163 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1163->setName("r_pinky1");
HAnimJoint1163->setDEF("Joe_r_pinky1");
HAnimJoint1163->setCenter(new float[3]{-0.20000000298023224,0.7900000214576721,-0.08500000089406967});
HAnimJoint1163->setSkinCoordIndex(new int[3]{276,277,278});
HAnimJoint1163->setSkinCoordWeight(new float[3]{1,1,1}, 3);
HAnimJoint1163->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1163->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1164 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1164->setName("r_pinky_proximal");
HAnimSegment1164->setDEF("Joe_r_pinky_proximal");
CShape* Shape1165 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1166 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1166->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1167 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1167->setPoint(new float[6]{-0.20000000298023224,0.7900000214576721,-0.08500000089406967,-0.20000000298023224,0.7549999952316284,-0.08500000089406967});
IndexedLineSet1166->setCoord(*Coordinate1167);

Shape1165->setGeometry(IndexedLineSet1166);

CAppearance* Appearance1168 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1168->setUSE("SegmentLine");
Shape1165->setAppearance(*Appearance1168);

HAnimSegment1164->addChildren(*Shape1165);

CTransform* Transform1169 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1169->setTranslation(new float[3]{-0.20000000298023224,0.7900000214576721,-0.08500000089406967});
CShape* Shape1170 = (CShape *)(m_pScene.createNode("Shape"));
Shape1170->setUSE("jointbox");
Transform1169->addChildren(*Shape1170);

HAnimSegment1164->addChildren(*Transform1169);

HAnimJoint1163->addChildren(*HAnimSegment1164);

CHAnimJoint* HAnimJoint1171 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1171->setName("r_pinky2");
HAnimJoint1171->setDEF("Joe_r_pinky2");
HAnimJoint1171->setCenter(new float[3]{-0.20000000298023224,0.7549999952316284,-0.08500000089406967});
HAnimJoint1171->setSkinCoordIndex(new int[4]{321,322,323,324});
HAnimJoint1171->setSkinCoordWeight(new float[4]{1,1,1,1}, 4);
HAnimJoint1171->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1171->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1172 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1172->setName("r_pinky_middle");
HAnimSegment1172->setDEF("Joe_r_pinky_middle");
CShape* Shape1173 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1174 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1174->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1175 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1175->setPoint(new float[6]{-0.20000000298023224,0.7549999952316284,-0.08500000089406967,-0.20000000298023224,0.7350000143051147,-0.08500000089406967});
IndexedLineSet1174->setCoord(*Coordinate1175);

Shape1173->setGeometry(IndexedLineSet1174);

CAppearance* Appearance1176 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1176->setUSE("SegmentLine");
Shape1173->setAppearance(*Appearance1176);

HAnimSegment1172->addChildren(*Shape1173);

CTransform* Transform1177 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1177->setTranslation(new float[3]{-0.20000000298023224,0.7549999952316284,-0.08500000089406967});
CShape* Shape1178 = (CShape *)(m_pScene.createNode("Shape"));
Shape1178->setUSE("jointbox");
Transform1177->addChildren(*Shape1178);

HAnimSegment1172->addChildren(*Transform1177);

HAnimJoint1171->addChildren(*HAnimSegment1172);

CHAnimJoint* HAnimJoint1179 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1179->setName("r_pinky3");
HAnimJoint1179->setDEF("Joe_r_pinky3");
HAnimJoint1179->setCenter(new float[3]{-0.20000000298023224,0.7350000143051147,-0.09000000357627869});
HAnimJoint1179->setSkinCoordIndex(new int[9]{325,326,327,328,329,330,331,332,333});
HAnimJoint1179->setSkinCoordWeight(new float[9]{1,1,1,1,1,1,1,1,1}, 9);
HAnimJoint1179->setUlimit(new float[3]{0,0,0}, 3);
HAnimJoint1179->setLlimit(new float[3]{0,0,0}, 3);
CHAnimSegment* HAnimSegment1180 = (CHAnimSegment *)(m_pScene.createNode("HAnimSegment"));
HAnimSegment1180->setName("r_pinky_distal");
HAnimSegment1180->setDEF("Joe_r_pinky_distal");
CShape* Shape1181 = (CShape *)(m_pScene.createNode("Shape"));
CIndexedLineSet* IndexedLineSet1182 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet1182->setCoordIndex(new int[3]{0,1,-1});
CCoordinate* Coordinate1183 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate1183->setPoint(new float[6]{-0.20000000298023224,0.7350000143051147,-0.08500000089406967,-0.20000000298023224,0.7200000286102295,-0.08500000089406967});
IndexedLineSet1182->setCoord(*Coordinate1183);

Shape1181->setGeometry(IndexedLineSet1182);

CAppearance* Appearance1184 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance1184->setUSE("SegmentLine");
Shape1181->setAppearance(*Appearance1184);

HAnimSegment1180->addChildren(*Shape1181);

CTransform* Transform1185 = (CTransform *)(m_pScene.createNode("Transform"));
Transform1185->setTranslation(new float[3]{-0.20000000298023224,0.7350000143051147,-0.08500000089406967});
CShape* Shape1186 = (CShape *)(m_pScene.createNode("Shape"));
Shape1186->setUSE("jointbox");
Transform1185->addChildren(*Shape1186);

HAnimSegment1180->addChildren(*Transform1185);

CHAnimSite* HAnimSite1187 = (CHAnimSite *)(m_pScene.createNode("HAnimSite"));
HAnimSite1187->setName("r_pinky_distal_tip");
HAnimSite1187->setDEF("Joe_r_pinky_distal_tip");
HAnimSite1187->setTranslation(new float[3]{-0.20000000298023224,0.7200000286102295,-0.08500000089406967});
CShape* Shape1188 = (CShape *)(m_pScene.createNode("Shape"));
Shape1188->setUSE("sitebox");
HAnimSite1187->addChildren(*Shape1188);

HAnimSegment1180->addChildren(*HAnimSite1187);

HAnimJoint1179->addChildren(*HAnimSegment1180);

HAnimJoint1171->addChildren(*HAnimJoint1179);

HAnimJoint1163->addChildren(*HAnimJoint1171);

HAnimJoint1153->addChildren(*HAnimJoint1163);

HAnimJoint1009->addChildren(*HAnimJoint1153);

HAnimJoint987->addChildren(*HAnimJoint1009);

HAnimJoint957->addChildren(*HAnimJoint987);

HAnimJoint941->addChildren(*HAnimJoint957);

HAnimJoint931->addChildren(*HAnimJoint941);

HAnimJoint565->addChildren(*HAnimJoint931);

HAnimJoint557->addChildren(*HAnimJoint565);

HAnimJoint549->addChildren(*HAnimJoint557);

HAnimJoint539->addChildren(*HAnimJoint549);

HAnimJoint531->addChildren(*HAnimJoint539);

HAnimJoint523->addChildren(*HAnimJoint531);

HAnimJoint515->addChildren(*HAnimJoint523);

HAnimJoint507->addChildren(*HAnimJoint515);

HAnimJoint495->addChildren(*HAnimJoint507);

HAnimJoint485->addChildren(*HAnimJoint495);

HAnimJoint477->addChildren(*HAnimJoint485);

HAnimJoint469->addChildren(*HAnimJoint477);

HAnimJoint461->addChildren(*HAnimJoint469);

HAnimJoint435->addChildren(*HAnimJoint461);

HAnimJoint427->addChildren(*HAnimJoint435);

HAnimJoint419->addChildren(*HAnimJoint427);

HAnimJoint404->addChildren(*HAnimJoint419);

HAnimJoint90->addChildren(*HAnimJoint404);

HAnimHumanoid81->setSkeleton(*HAnimJoint90);

CHAnimJoint* HAnimJoint1189 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1189->setUSE("Joe_HumanoidRoot");
HAnimHumanoid81->addJoints(*HAnimJoint1189);

CHAnimJoint* HAnimJoint1190 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1190->setUSE("Joe_sacroiliac");
HAnimHumanoid81->addJoints(*HAnimJoint1190);

CHAnimJoint* HAnimJoint1191 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1191->setUSE("Joe_l_hip");
HAnimHumanoid81->addJoints(*HAnimJoint1191);

CHAnimJoint* HAnimJoint1192 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1192->setUSE("Joe_l_knee");
HAnimHumanoid81->addJoints(*HAnimJoint1192);

CHAnimJoint* HAnimJoint1193 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1193->setUSE("Joe_l_ankle");
HAnimHumanoid81->addJoints(*HAnimJoint1193);

CHAnimJoint* HAnimJoint1194 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1194->setUSE("Joe_l_subtalar");
HAnimHumanoid81->addJoints(*HAnimJoint1194);

CHAnimJoint* HAnimJoint1195 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1195->setUSE("Joe_l_midtarsal");
HAnimHumanoid81->addJoints(*HAnimJoint1195);

CHAnimJoint* HAnimJoint1196 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1196->setUSE("Joe_l_metatarsal");
HAnimHumanoid81->addJoints(*HAnimJoint1196);

CHAnimJoint* HAnimJoint1197 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1197->setUSE("Joe_r_hip");
HAnimHumanoid81->addJoints(*HAnimJoint1197);

CHAnimJoint* HAnimJoint1198 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1198->setUSE("Joe_r_knee");
HAnimHumanoid81->addJoints(*HAnimJoint1198);

CHAnimJoint* HAnimJoint1199 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1199->setUSE("Joe_r_ankle");
HAnimHumanoid81->addJoints(*HAnimJoint1199);

CHAnimJoint* HAnimJoint1200 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1200->setUSE("Joe_r_subtalar");
HAnimHumanoid81->addJoints(*HAnimJoint1200);

CHAnimJoint* HAnimJoint1201 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1201->setUSE("Joe_r_midtarsal");
HAnimHumanoid81->addJoints(*HAnimJoint1201);

CHAnimJoint* HAnimJoint1202 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1202->setUSE("Joe_r_metatarsal");
HAnimHumanoid81->addJoints(*HAnimJoint1202);

CHAnimJoint* HAnimJoint1203 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1203->setUSE("Joe_vl5");
HAnimHumanoid81->addJoints(*HAnimJoint1203);

CHAnimJoint* HAnimJoint1204 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1204->setUSE("Joe_vl4");
HAnimHumanoid81->addJoints(*HAnimJoint1204);

CHAnimJoint* HAnimJoint1205 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1205->setUSE("Joe_vl3");
HAnimHumanoid81->addJoints(*HAnimJoint1205);

CHAnimJoint* HAnimJoint1206 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1206->setUSE("Joe_vl2");
HAnimHumanoid81->addJoints(*HAnimJoint1206);

CHAnimJoint* HAnimJoint1207 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1207->setUSE("Joe_vl1");
HAnimHumanoid81->addJoints(*HAnimJoint1207);

CHAnimJoint* HAnimJoint1208 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1208->setUSE("Joe_vt12");
HAnimHumanoid81->addJoints(*HAnimJoint1208);

CHAnimJoint* HAnimJoint1209 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1209->setUSE("Joe_vt11");
HAnimHumanoid81->addJoints(*HAnimJoint1209);

CHAnimJoint* HAnimJoint1210 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1210->setUSE("Joe_vt10");
HAnimHumanoid81->addJoints(*HAnimJoint1210);

CHAnimJoint* HAnimJoint1211 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1211->setUSE("Joe_vt9");
HAnimHumanoid81->addJoints(*HAnimJoint1211);

CHAnimJoint* HAnimJoint1212 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1212->setUSE("Joe_vt8");
HAnimHumanoid81->addJoints(*HAnimJoint1212);

CHAnimJoint* HAnimJoint1213 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1213->setUSE("Joe_vt7");
HAnimHumanoid81->addJoints(*HAnimJoint1213);

CHAnimJoint* HAnimJoint1214 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1214->setUSE("Joe_vt6");
HAnimHumanoid81->addJoints(*HAnimJoint1214);

CHAnimJoint* HAnimJoint1215 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1215->setUSE("Joe_vt5");
HAnimHumanoid81->addJoints(*HAnimJoint1215);

CHAnimJoint* HAnimJoint1216 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1216->setUSE("Joe_vt4");
HAnimHumanoid81->addJoints(*HAnimJoint1216);

CHAnimJoint* HAnimJoint1217 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1217->setUSE("Joe_vt3");
HAnimHumanoid81->addJoints(*HAnimJoint1217);

CHAnimJoint* HAnimJoint1218 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1218->setUSE("Joe_vt2");
HAnimHumanoid81->addJoints(*HAnimJoint1218);

CHAnimJoint* HAnimJoint1219 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1219->setUSE("Joe_vt1");
HAnimHumanoid81->addJoints(*HAnimJoint1219);

CHAnimJoint* HAnimJoint1220 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1220->setUSE("Joe_vc7");
HAnimHumanoid81->addJoints(*HAnimJoint1220);

CHAnimJoint* HAnimJoint1221 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1221->setUSE("Joe_vc6");
HAnimHumanoid81->addJoints(*HAnimJoint1221);

CHAnimJoint* HAnimJoint1222 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1222->setUSE("Joe_vc5");
HAnimHumanoid81->addJoints(*HAnimJoint1222);

CHAnimJoint* HAnimJoint1223 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1223->setUSE("Joe_vc4");
HAnimHumanoid81->addJoints(*HAnimJoint1223);

CHAnimJoint* HAnimJoint1224 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1224->setUSE("Joe_vc3");
HAnimHumanoid81->addJoints(*HAnimJoint1224);

CHAnimJoint* HAnimJoint1225 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1225->setUSE("Joe_vc2");
HAnimHumanoid81->addJoints(*HAnimJoint1225);

CHAnimJoint* HAnimJoint1226 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1226->setUSE("Joe_vc1");
HAnimHumanoid81->addJoints(*HAnimJoint1226);

CHAnimJoint* HAnimJoint1227 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1227->setUSE("Joe_skullbase");
HAnimHumanoid81->addJoints(*HAnimJoint1227);

CHAnimJoint* HAnimJoint1228 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1228->setUSE("Joe_l_eyeball_joint");
HAnimHumanoid81->addJoints(*HAnimJoint1228);

CHAnimJoint* HAnimJoint1229 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1229->setUSE("Joe_r_eyeball_joint");
HAnimHumanoid81->addJoints(*HAnimJoint1229);

CHAnimJoint* HAnimJoint1230 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1230->setUSE("Joe_l_sternoclavicular");
HAnimHumanoid81->addJoints(*HAnimJoint1230);

CHAnimJoint* HAnimJoint1231 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1231->setUSE("Joe_l_acromioclavicular");
HAnimHumanoid81->addJoints(*HAnimJoint1231);

CHAnimJoint* HAnimJoint1232 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1232->setUSE("Joe_l_shoulder");
HAnimHumanoid81->addJoints(*HAnimJoint1232);

CHAnimJoint* HAnimJoint1233 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1233->setUSE("Joe_l_elbow");
HAnimHumanoid81->addJoints(*HAnimJoint1233);

CHAnimJoint* HAnimJoint1234 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1234->setUSE("Joe_l_wrist");
HAnimHumanoid81->addJoints(*HAnimJoint1234);

CHAnimJoint* HAnimJoint1235 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1235->setUSE("Joe_l_thumb1");
HAnimHumanoid81->addJoints(*HAnimJoint1235);

CHAnimJoint* HAnimJoint1236 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1236->setUSE("Joe_l_thumb2");
HAnimHumanoid81->addJoints(*HAnimJoint1236);

CHAnimJoint* HAnimJoint1237 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1237->setUSE("Joe_l_thumb3");
HAnimHumanoid81->addJoints(*HAnimJoint1237);

CHAnimJoint* HAnimJoint1238 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1238->setUSE("Joe_l_index0");
HAnimHumanoid81->addJoints(*HAnimJoint1238);

CHAnimJoint* HAnimJoint1239 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1239->setUSE("Joe_l_index1");
HAnimHumanoid81->addJoints(*HAnimJoint1239);

CHAnimJoint* HAnimJoint1240 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1240->setUSE("Joe_l_index2");
HAnimHumanoid81->addJoints(*HAnimJoint1240);

CHAnimJoint* HAnimJoint1241 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1241->setUSE("Joe_l_index3");
HAnimHumanoid81->addJoints(*HAnimJoint1241);

CHAnimJoint* HAnimJoint1242 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1242->setUSE("Joe_l_middle0");
HAnimHumanoid81->addJoints(*HAnimJoint1242);

CHAnimJoint* HAnimJoint1243 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1243->setUSE("Joe_l_middle1");
HAnimHumanoid81->addJoints(*HAnimJoint1243);

CHAnimJoint* HAnimJoint1244 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1244->setUSE("Joe_l_middle2");
HAnimHumanoid81->addJoints(*HAnimJoint1244);

CHAnimJoint* HAnimJoint1245 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1245->setUSE("Joe_l_middle3");
HAnimHumanoid81->addJoints(*HAnimJoint1245);

CHAnimJoint* HAnimJoint1246 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1246->setUSE("Joe_l_ring0");
HAnimHumanoid81->addJoints(*HAnimJoint1246);

CHAnimJoint* HAnimJoint1247 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1247->setUSE("Joe_l_ring1");
HAnimHumanoid81->addJoints(*HAnimJoint1247);

CHAnimJoint* HAnimJoint1248 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1248->setUSE("Joe_l_ring2");
HAnimHumanoid81->addJoints(*HAnimJoint1248);

CHAnimJoint* HAnimJoint1249 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1249->setUSE("Joe_l_ring3");
HAnimHumanoid81->addJoints(*HAnimJoint1249);

CHAnimJoint* HAnimJoint1250 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1250->setUSE("Joe_l_pinky0");
HAnimHumanoid81->addJoints(*HAnimJoint1250);

CHAnimJoint* HAnimJoint1251 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1251->setUSE("Joe_l_pinky1");
HAnimHumanoid81->addJoints(*HAnimJoint1251);

CHAnimJoint* HAnimJoint1252 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1252->setUSE("Joe_l_pinky2");
HAnimHumanoid81->addJoints(*HAnimJoint1252);

CHAnimJoint* HAnimJoint1253 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1253->setUSE("Joe_l_pinky3");
HAnimHumanoid81->addJoints(*HAnimJoint1253);

CHAnimJoint* HAnimJoint1254 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1254->setUSE("Joe_r_sternoclavicular");
HAnimHumanoid81->addJoints(*HAnimJoint1254);

CHAnimJoint* HAnimJoint1255 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1255->setUSE("Joe_r_acromioclavicular");
HAnimHumanoid81->addJoints(*HAnimJoint1255);

CHAnimJoint* HAnimJoint1256 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1256->setUSE("Joe_r_shoulder");
HAnimHumanoid81->addJoints(*HAnimJoint1256);

CHAnimJoint* HAnimJoint1257 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1257->setUSE("Joe_r_elbow");
HAnimHumanoid81->addJoints(*HAnimJoint1257);

CHAnimJoint* HAnimJoint1258 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1258->setUSE("Joe_r_wrist");
HAnimHumanoid81->addJoints(*HAnimJoint1258);

CHAnimJoint* HAnimJoint1259 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1259->setUSE("Joe_r_thumb1");
HAnimHumanoid81->addJoints(*HAnimJoint1259);

CHAnimJoint* HAnimJoint1260 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1260->setUSE("Joe_r_thumb2");
HAnimHumanoid81->addJoints(*HAnimJoint1260);

CHAnimJoint* HAnimJoint1261 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1261->setUSE("Joe_r_thumb3");
HAnimHumanoid81->addJoints(*HAnimJoint1261);

CHAnimJoint* HAnimJoint1262 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1262->setUSE("Joe_r_index0");
HAnimHumanoid81->addJoints(*HAnimJoint1262);

CHAnimJoint* HAnimJoint1263 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1263->setUSE("Joe_r_index1");
HAnimHumanoid81->addJoints(*HAnimJoint1263);

CHAnimJoint* HAnimJoint1264 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1264->setUSE("Joe_r_index2");
HAnimHumanoid81->addJoints(*HAnimJoint1264);

CHAnimJoint* HAnimJoint1265 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1265->setUSE("Joe_r_index3");
HAnimHumanoid81->addJoints(*HAnimJoint1265);

CHAnimJoint* HAnimJoint1266 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1266->setUSE("Joe_r_middle0");
HAnimHumanoid81->addJoints(*HAnimJoint1266);

CHAnimJoint* HAnimJoint1267 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1267->setUSE("Joe_r_middle1");
HAnimHumanoid81->addJoints(*HAnimJoint1267);

CHAnimJoint* HAnimJoint1268 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1268->setUSE("Joe_r_middle2");
HAnimHumanoid81->addJoints(*HAnimJoint1268);

CHAnimJoint* HAnimJoint1269 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1269->setUSE("Joe_r_middle3");
HAnimHumanoid81->addJoints(*HAnimJoint1269);

CHAnimJoint* HAnimJoint1270 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1270->setUSE("Joe_r_ring0");
HAnimHumanoid81->addJoints(*HAnimJoint1270);

CHAnimJoint* HAnimJoint1271 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1271->setUSE("Joe_r_ring1");
HAnimHumanoid81->addJoints(*HAnimJoint1271);

CHAnimJoint* HAnimJoint1272 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1272->setUSE("Joe_r_ring2");
HAnimHumanoid81->addJoints(*HAnimJoint1272);

CHAnimJoint* HAnimJoint1273 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1273->setUSE("Joe_r_ring3");
HAnimHumanoid81->addJoints(*HAnimJoint1273);

CHAnimJoint* HAnimJoint1274 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1274->setUSE("Joe_r_pinky0");
HAnimHumanoid81->addJoints(*HAnimJoint1274);

CHAnimJoint* HAnimJoint1275 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1275->setUSE("Joe_r_pinky1");
HAnimHumanoid81->addJoints(*HAnimJoint1275);

CHAnimJoint* HAnimJoint1276 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1276->setUSE("Joe_r_pinky2");
HAnimHumanoid81->addJoints(*HAnimJoint1276);

CHAnimJoint* HAnimJoint1277 = (CHAnimJoint *)(m_pScene.createNode("HAnimJoint"));
HAnimJoint1277->setUSE("Joe_r_pinky3");
HAnimHumanoid81->addJoints(*HAnimJoint1277);

Group80->addChildren(*HAnimHumanoid81);

Group79->addChildren(*Group80);

group->addChildren(*Group79);

CTimeSensor* TimeSensor1278 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor1278->setDEF("Time1");
TimeSensor1278->setCycleInterval(2.86);
TimeSensor1278->setLoop(True);
group->addChildren(*TimeSensor1278);

CTimeSensor* TimeSensor1279 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor1279->setDEF("Time2");
TimeSensor1279->setCycleInterval(5.72);
TimeSensor1279->setLoop(True);
group->addChildren(*TimeSensor1279);

CTimeSensor* TimeSensor1280 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor1280->setDEF("Time3");
TimeSensor1280->setCycleInterval(5.8);
TimeSensor1280->setLoop(True);
group->addChildren(*TimeSensor1280);

COrientationInterpolator* OrientationInterpolator1281 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1281->setDEF("Pitch");
OrientationInterpolator1281->setKey(new float[6]{0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1}, 6);
OrientationInterpolator1281->setKeyValue(new float[24]{1,0,0,0,1,0,0,1.25600004196167,1,0,0,2.51200008392334,1,0,0,3.7679998874664307,1,0,0,5.02400016784668,1,0,0,6.28000020980835});
group->addChildren(*OrientationInterpolator1281);

COrientationInterpolator* OrientationInterpolator1282 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1282->setDEF("Yaw");
OrientationInterpolator1282->setKey(new float[6]{0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1}, 6);
OrientationInterpolator1282->setKeyValue(new float[24]{0,1,0,0,0,1,0,1.25600004196167,0,1,0,2.51200008392334,0,1,0,3.7679998874664307,0,1,0,5.02400016784668,0,1,0,6.28000020980835});
group->addChildren(*OrientationInterpolator1282);

COrientationInterpolator* OrientationInterpolator1283 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1283->setDEF("Roll");
OrientationInterpolator1283->setKey(new float[6]{0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1}, 6);
OrientationInterpolator1283->setKeyValue(new float[24]{0,0,1,0,0,0,1,1.25600004196167,0,0,1,2.51200008392334,0,0,1,3.7679998874664307,0,0,1,5.02400016784668,0,0,1,6.28000020980835});
group->addChildren(*OrientationInterpolator1283);

COrientationInterpolator* OrientationInterpolator1284 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1284->setDEF("vc6Yaw");
OrientationInterpolator1284->setKey(new float[9]{0,0.20000000298023224,0.4000000059604645,0.5,0.6000000238418579,0.699999988079071,0.800000011920929,0.8999999761581421,1}, 9);
OrientationInterpolator1284->setKeyValue(new float[36]{0,1,0,0,0,1,0,0.699999988079071,0,1,0,0,0,1,0,0,-1,0,0,0.5,-0.4000000059604645,-1,0,0.699999988079071,-0.4000000059604645,-1,0,0.4000000059604645,0,1,0,0,0,1,0,0});
group->addChildren(*OrientationInterpolator1284);

CROUTE* ROUTE1285 = new CROUTE();
ROUTE1285->setFromField("fraction_changed");
ROUTE1285->setFromNode("Time2");
ROUTE1285->setToField("set_fraction");
ROUTE1285->setToNode("vc6Yaw");
group->addChildren(*ROUTE1285);

CROUTE* ROUTE1286 = new CROUTE();
ROUTE1286->setFromField("value_changed");
ROUTE1286->setFromNode("vc6Yaw");
ROUTE1286->setToField("set_rotation");
ROUTE1286->setToNode("Joe_vc6");
group->addChildren(*ROUTE1286);

COrientationInterpolator* OrientationInterpolator1287 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1287->setDEF("EyeballsRotation");
OrientationInterpolator1287->setKey(new float[10]{0,0.10000000149011612,0.20000000298023224,0.30000001192092896,0.4000000059604645,0.5,0.6000000238418579,0.699999988079071,0.800000011920929,1}, 10);
OrientationInterpolator1287->setKeyValue(new float[40]{0,0,1,0,0,0,1,0,0.20000000298023224,0.20000000298023224,0.20000000298023224,0.20000000298023224,-0.20000000298023224,0.20000000298023224,0.20000000298023224,0.20000000298023224,-0.20000000298023224,-0.20000000298023224,0.20000000298023224,0.20000000298023224,0.20000000298023224,-0.20000000298023224,0.20000000298023224,0.20000000298023224,-0.20000000298023224,0.20000000298023224,-0.20000000298023224,0.20000000298023224,-0.20000000298023224,0.20000000298023224,-0.20000000298023224,0.20000000298023224,0,0,1,0,0,0,1,0});
group->addChildren(*OrientationInterpolator1287);

CROUTE* ROUTE1288 = new CROUTE();
ROUTE1288->setFromField("fraction_changed");
ROUTE1288->setFromNode("Time3");
ROUTE1288->setToField("set_fraction");
ROUTE1288->setToNode("EyeballsRotation");
group->addChildren(*ROUTE1288);

CROUTE* ROUTE1289 = new CROUTE();
ROUTE1289->setFromField("value_changed");
ROUTE1289->setFromNode("EyeballsRotation");
ROUTE1289->setToField("set_rotation");
ROUTE1289->setToNode("Joe_r_eyeball_joint");
group->addChildren(*ROUTE1289);

CROUTE* ROUTE1290 = new CROUTE();
ROUTE1290->setFromField("value_changed");
ROUTE1290->setFromNode("EyeballsRotation");
ROUTE1290->setToField("set_rotation");
ROUTE1290->setToNode("Joe_l_eyeball_joint");
group->addChildren(*ROUTE1290);

COrientationInterpolator* OrientationInterpolator1291 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1291->setDEF("r_sternoclavicularRelax");
OrientationInterpolator1291->setKey(new float[6]{0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1}, 6);
OrientationInterpolator1291->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0.20000000298023224,-1,0,0.10999999940395355,0.20000000298023224,-1,0,0.10999999940395355,0.10000000149011612,-1,0,0.10000000149011612,0,0,1,0});
group->addChildren(*OrientationInterpolator1291);

COrientationInterpolator* OrientationInterpolator1292 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1292->setDEF("r_acromioclavicularRelax");
OrientationInterpolator1292->setKey(new float[6]{0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1}, 6);
OrientationInterpolator1292->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0});
group->addChildren(*OrientationInterpolator1292);

COrientationInterpolator* OrientationInterpolator1293 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1293->setDEF("r_shoulderRelax");
OrientationInterpolator1293->setKey(new float[6]{0,0.10000000149011612,0.30000001192092896,0.6000000238418579,0.800000011920929,1}, 6);
OrientationInterpolator1293->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0.4000000059604645,-0.699999988079071,-0.550000011920929,0.3499999940395355,0.4000000059604645,-0.699999988079071,-0.550000011920929,0.3499999940395355,0.4000000059604645,-0.699999988079071,-0.550000011920929,0.3499999940395355,0,0,1,0});
group->addChildren(*OrientationInterpolator1293);

COrientationInterpolator* OrientationInterpolator1294 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1294->setDEF("r_elbowRelax");
OrientationInterpolator1294->setKey(new float[6]{0,0.15000000596046448,0.4000000059604645,0.6000000238418579,0.8999999761581421,1}, 6);
OrientationInterpolator1294->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,-0.20000000298023224,0,0.009999999776482582,0.5,-0.20000000298023224,0,0.009999999776482582,0.5,-0.20000000298023224,0,0.009999999776482582,0.5,0,0,1,0});
group->addChildren(*OrientationInterpolator1294);

COrientationInterpolator* OrientationInterpolator1295 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1295->setDEF("r_wristRelax");
OrientationInterpolator1295->setKey(new float[6]{0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.8999999761581421,1}, 6);
OrientationInterpolator1295->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0.10000000149011612,-0.09000000357627869,0.25,0,0.10000000149011612,-0.09000000357627869,0.25,0,0.10000000149011612,-0.09000000357627869,0.25,0,0,1,0});
group->addChildren(*OrientationInterpolator1295);

COrientationInterpolator* OrientationInterpolator1296 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1296->setDEF("r_index0Relax");
OrientationInterpolator1296->setKey(new float[6]{0,0.10000000149011612,0.30000001192092896,0.6000000238418579,0.800000011920929,1}, 6);
OrientationInterpolator1296->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,-0.25,0.25,-1,0.125,-0.25,0.25,-1,0.125,-0.25,0.25,-1,0.125,0,0,1,0});
group->addChildren(*OrientationInterpolator1296);

COrientationInterpolator* OrientationInterpolator1297 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1297->setDEF("r_index1Relax");
OrientationInterpolator1297->setKey(new float[6]{0,0.10000000149011612,0.20000000298023224,0.6000000238418579,0.800000011920929,1}, 6);
OrientationInterpolator1297->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,-0.13500000536441803,-0.13500000536441803,1,0.3569999933242798,-0.1589999943971634,-0.15299999713897705,1,0.35499998927116394,-0.1589999943971634,-0.15299999713897705,1,0.3569999933242798,0,0,1,0});
group->addChildren(*OrientationInterpolator1297);

COrientationInterpolator* OrientationInterpolator1298 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1298->setDEF("r_middle0Relax");
OrientationInterpolator1298->setKey(new float[6]{0,0.10000000149011612,0.30000001192092896,0.6000000238418579,0.800000011920929,1}, 6);
OrientationInterpolator1298->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,-1,0.14000000059604645,0,0,-1,0.14000000059604645,0,0,-1,0.14000000059604645,0,0,1,0});
group->addChildren(*OrientationInterpolator1298);

COrientationInterpolator* OrientationInterpolator1299 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1299->setDEF("r_middle1Relax");
OrientationInterpolator1299->setKey(new float[11]{0,0.10000000149011612,0.20000000298023224,0.30000001192092896,0.4000000059604645,0.5,0.6000000238418579,0.699999988079071,0.800000011920929,0.8999999761581421,1}, 11);
OrientationInterpolator1299->setKeyValue(new float[44]{0,0,1,0,0,0,1,0,0,0,0.30000001192092896,0.25699999928474426,0,0,0.30000001192092896,0.3700000047683716,0,0,0.30000001192092896,0.38999998569488525,0,0,0.30000001192092896,0.3100000023841858,0,0,0.30000001192092896,0.3199999928474426,0,0,0.30000001192092896,0.3400000035762787,0,0,0.30000001192092896,0.2800000011920929,0,0,1,0,0,0,1,0});
group->addChildren(*OrientationInterpolator1299);

COrientationInterpolator* OrientationInterpolator1300 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1300->setDEF("r_ring0Relax");
OrientationInterpolator1300->setKey(new float[6]{0,0.10000000149011612,0.30000001192092896,0.6000000238418579,0.800000011920929,1}, 6);
OrientationInterpolator1300->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0.25,0.25,-1,0.10000000149011612,0.25,0.25,-1,0.10000000149011612,0.25,0.25,-1,0.10000000149011612,0,0,1,0});
group->addChildren(*OrientationInterpolator1300);

COrientationInterpolator* OrientationInterpolator1301 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1301->setDEF("r_ring1Relax");
OrientationInterpolator1301->setKey(new float[6]{0,0.10000000149011612,0.4000000059604645,0.5,0.800000011920929,1}, 6);
OrientationInterpolator1301->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0.13500000536441803,0.13500000536441803,1,0.27000001072883606,0.13500000536441803,0.13500000536441803,1,0.27000001072883606,0.13500000536441803,0.15000000596046448,1,0.27000001072883606,0,0,1,0});
group->addChildren(*OrientationInterpolator1301);

COrientationInterpolator* OrientationInterpolator1302 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1302->setDEF("r_pinky0Relax");
OrientationInterpolator1302->setKey(new float[6]{0,0.10000000149011612,0.30000001192092896,0.5,0.800000011920929,1}, 6);
OrientationInterpolator1302->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0.3499999940395355,0.3499999940395355,-0.699999988079071,0.11999999731779099,0.3499999940395355,0.3499999940395355,-0.8999999761581421,0.11999999731779099,0.3499999940395355,0.3499999940395355,-0.699999988079071,0.11999999731779099,0,0,1,0});
group->addChildren(*OrientationInterpolator1302);

COrientationInterpolator* OrientationInterpolator1303 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1303->setDEF("r_pinky1Relax");
OrientationInterpolator1303->setKey(new float[6]{0,0.10000000149011612,0.4000000059604645,0.6000000238418579,0.800000011920929,1}, 6);
OrientationInterpolator1303->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0.20000000298023224,0.25,1,0.27000001072883606,0.20000000298023224,0.2199999988079071,1,0.27000001072883606,0.2199999988079071,0.20000000298023224,1,0.27000001072883606,0,0,1,0});
group->addChildren(*OrientationInterpolator1303);

COrientationInterpolator* OrientationInterpolator1304 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1304->setDEF("r_thumb1Relax");
OrientationInterpolator1304->setKey(new float[10]{0,0.029999999329447746,0.07999999821186066,0.20000000298023224,0.30000001192092896,0.4000000059604645,0.5,0.800000011920929,0.949999988079071,1}, 10);
OrientationInterpolator1304->setKeyValue(new float[40]{0,0,1,0,0,0,1,0,0,-1,1,1,0.5,-0.1599999964237213,0.1599999964237213,0.7850000262260437,0.5,-0.1599999964237213,0.1599999964237213,0.7850000262260437,1,1,1,0.75,1,1,1,0.75,1,1,1,0.75,1,1,1,0.75,0,0,1,0});
group->addChildren(*OrientationInterpolator1304);

COrientationInterpolator* OrientationInterpolator1305 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1305->setDEF("r_thumb2Relax");
OrientationInterpolator1305->setKey(new float[7]{0,0.20000000298023224,0.5,0.6000000238418579,0.699999988079071,0.800000011920929,1}, 7);
OrientationInterpolator1305->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0.44999998807907104,1,0,0,0.44999998807907104,1,0,0,0.44999998807907104,0,0,1,0});
group->addChildren(*OrientationInterpolator1305);

COrientationInterpolator* OrientationInterpolator1306 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1306->setDEF("r_thumb3Relax");
OrientationInterpolator1306->setKey(new float[7]{0,0.20000000298023224,0.5,0.6000000238418579,0.699999988079071,0.800000011920929,1}, 7);
OrientationInterpolator1306->setKeyValue(new float[28]{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0.44999998807907104,0,0,1,0,0,0,1,0});
group->addChildren(*OrientationInterpolator1306);

COrientationInterpolator* OrientationInterpolator1307 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1307->setDEF("r_fingers2Relax");
OrientationInterpolator1307->setKey(new float[11]{0,0.10000000149011612,0.20000000298023224,0.30000001192092896,0.4000000059604645,0.5,0.6000000238418579,0.699999988079071,0.800000011920929,0.8999999761581421,1}, 11);
OrientationInterpolator1307->setKeyValue(new float[44]{0,0,1,0,0,0,1,0,0,0,1,0.4300000071525574,0,0,1,0.4399999976158142,0,0,1,0.46000000834465027,0,0,1,0.4399999976158142,0,0,1,0.24500000476837158,0,0,1,0.23999999463558197,0,0,1,0.20999999344348907,0,0,1,0.23999999463558197,0,0,1,0});
group->addChildren(*OrientationInterpolator1307);

COrientationInterpolator* OrientationInterpolator1308 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1308->setDEF("r_fingers3Relax");
OrientationInterpolator1308->setKey(new float[11]{0,0.10000000149011612,0.20000000298023224,0.30000001192092896,0.4000000059604645,0.5,0.6000000238418579,0.699999988079071,0.800000011920929,0.8999999761581421,1}, 11);
OrientationInterpolator1308->setKeyValue(new float[44]{0,0,1,0,0,0,1,0,0,0,1,0.3700000047683716,0,0,1,0.3799999952316284,0,0,1,0.38999998569488525,0,0,1,0.3799999952316284,0,0,1,0.27000001072883606,0,0,1,0.2800000011920929,0,0,1,0.27000001072883606,0,0,1,0.2800000011920929,0,0,1,0});
group->addChildren(*OrientationInterpolator1308);

CROUTE* ROUTE1309 = new CROUTE();
ROUTE1309->setFromField("value_changed");
ROUTE1309->setFromNode("r_sternoclavicularRelax");
ROUTE1309->setToField("set_rotation");
ROUTE1309->setToNode("Joe_r_sternoclavicular");
group->addChildren(*ROUTE1309);

CROUTE* ROUTE1310 = new CROUTE();
ROUTE1310->setFromField("value_changed");
ROUTE1310->setFromNode("r_acromioclavicularRelax");
ROUTE1310->setToField("set_rotation");
ROUTE1310->setToNode("Joe_r_acromioclavicular");
group->addChildren(*ROUTE1310);

CROUTE* ROUTE1311 = new CROUTE();
ROUTE1311->setFromField("value_changed");
ROUTE1311->setFromNode("r_shoulderRelax");
ROUTE1311->setToField("set_rotation");
ROUTE1311->setToNode("Joe_r_shoulder");
group->addChildren(*ROUTE1311);

CROUTE* ROUTE1312 = new CROUTE();
ROUTE1312->setFromField("value_changed");
ROUTE1312->setFromNode("r_elbowRelax");
ROUTE1312->setToField("set_rotation");
ROUTE1312->setToNode("Joe_r_elbow");
group->addChildren(*ROUTE1312);

CROUTE* ROUTE1313 = new CROUTE();
ROUTE1313->setFromField("value_changed");
ROUTE1313->setFromNode("r_wristRelax");
ROUTE1313->setToField("set_rotation");
ROUTE1313->setToNode("Joe_r_wrist");
group->addChildren(*ROUTE1313);

CROUTE* ROUTE1314 = new CROUTE();
ROUTE1314->setFromField("value_changed");
ROUTE1314->setFromNode("r_thumb1Relax");
ROUTE1314->setToField("set_rotation");
ROUTE1314->setToNode("Joe_r_thumb1");
group->addChildren(*ROUTE1314);

CROUTE* ROUTE1315 = new CROUTE();
ROUTE1315->setFromField("value_changed");
ROUTE1315->setFromNode("r_thumb2Relax");
ROUTE1315->setToField("set_rotation");
ROUTE1315->setToNode("Joe_r_thumb2");
group->addChildren(*ROUTE1315);

CROUTE* ROUTE1316 = new CROUTE();
ROUTE1316->setFromField("value_changed");
ROUTE1316->setFromNode("r_thumb3Relax");
ROUTE1316->setToField("set_rotation");
ROUTE1316->setToNode("Joe_r_thumb3");
group->addChildren(*ROUTE1316);

CROUTE* ROUTE1317 = new CROUTE();
ROUTE1317->setFromField("value_changed");
ROUTE1317->setFromNode("r_index0Relax");
ROUTE1317->setToField("set_rotation");
ROUTE1317->setToNode("Joe_r_index0");
group->addChildren(*ROUTE1317);

CROUTE* ROUTE1318 = new CROUTE();
ROUTE1318->setFromField("value_changed");
ROUTE1318->setFromNode("r_index1Relax");
ROUTE1318->setToField("set_rotation");
ROUTE1318->setToNode("Joe_r_index1");
group->addChildren(*ROUTE1318);

CROUTE* ROUTE1319 = new CROUTE();
ROUTE1319->setFromField("value_changed");
ROUTE1319->setFromNode("r_fingers2Relax");
ROUTE1319->setToField("set_rotation");
ROUTE1319->setToNode("Joe_r_index2");
group->addChildren(*ROUTE1319);

CROUTE* ROUTE1320 = new CROUTE();
ROUTE1320->setFromField("value_changed");
ROUTE1320->setFromNode("r_fingers3Relax");
ROUTE1320->setToField("set_rotation");
ROUTE1320->setToNode("Joe_r_index3");
group->addChildren(*ROUTE1320);

CROUTE* ROUTE1321 = new CROUTE();
ROUTE1321->setFromField("value_changed");
ROUTE1321->setFromNode("r_middle0Relax");
ROUTE1321->setToField("set_rotation");
ROUTE1321->setToNode("Joe_r_middle0");
group->addChildren(*ROUTE1321);

CROUTE* ROUTE1322 = new CROUTE();
ROUTE1322->setFromField("value_changed");
ROUTE1322->setFromNode("r_middle1Relax");
ROUTE1322->setToField("set_rotation");
ROUTE1322->setToNode("Joe_r_middle1");
group->addChildren(*ROUTE1322);

CROUTE* ROUTE1323 = new CROUTE();
ROUTE1323->setFromField("value_changed");
ROUTE1323->setFromNode("r_fingers2Relax");
ROUTE1323->setToField("set_rotation");
ROUTE1323->setToNode("Joe_r_middle2");
group->addChildren(*ROUTE1323);

CROUTE* ROUTE1324 = new CROUTE();
ROUTE1324->setFromField("value_changed");
ROUTE1324->setFromNode("r_fingers3Relax");
ROUTE1324->setToField("set_rotation");
ROUTE1324->setToNode("Joe_r_middle3");
group->addChildren(*ROUTE1324);

CROUTE* ROUTE1325 = new CROUTE();
ROUTE1325->setFromField("value_changed");
ROUTE1325->setFromNode("r_ring0Relax");
ROUTE1325->setToField("set_rotation");
ROUTE1325->setToNode("Joe_r_ring0");
group->addChildren(*ROUTE1325);

CROUTE* ROUTE1326 = new CROUTE();
ROUTE1326->setFromField("value_changed");
ROUTE1326->setFromNode("r_ring1Relax");
ROUTE1326->setToField("set_rotation");
ROUTE1326->setToNode("Joe_r_ring1");
group->addChildren(*ROUTE1326);

CROUTE* ROUTE1327 = new CROUTE();
ROUTE1327->setFromField("value_changed");
ROUTE1327->setFromNode("r_fingers2Relax");
ROUTE1327->setToField("set_rotation");
ROUTE1327->setToNode("Joe_r_ring2");
group->addChildren(*ROUTE1327);

CROUTE* ROUTE1328 = new CROUTE();
ROUTE1328->setFromField("value_changed");
ROUTE1328->setFromNode("r_fingers3Relax");
ROUTE1328->setToField("set_rotation");
ROUTE1328->setToNode("Joe_r_ring3");
group->addChildren(*ROUTE1328);

CROUTE* ROUTE1329 = new CROUTE();
ROUTE1329->setFromField("value_changed");
ROUTE1329->setFromNode("r_pinky0Relax");
ROUTE1329->setToField("set_rotation");
ROUTE1329->setToNode("Joe_r_pinky0");
group->addChildren(*ROUTE1329);

CROUTE* ROUTE1330 = new CROUTE();
ROUTE1330->setFromField("value_changed");
ROUTE1330->setFromNode("r_pinky1Relax");
ROUTE1330->setToField("set_rotation");
ROUTE1330->setToNode("Joe_r_pinky1");
group->addChildren(*ROUTE1330);

CROUTE* ROUTE1331 = new CROUTE();
ROUTE1331->setFromField("value_changed");
ROUTE1331->setFromNode("r_fingers2Relax");
ROUTE1331->setToField("set_rotation");
ROUTE1331->setToNode("Joe_r_pinky2");
group->addChildren(*ROUTE1331);

CROUTE* ROUTE1332 = new CROUTE();
ROUTE1332->setFromField("value_changed");
ROUTE1332->setFromNode("r_fingers3Relax");
ROUTE1332->setToField("set_rotation");
ROUTE1332->setToNode("Joe_r_pinky3");
group->addChildren(*ROUTE1332);

COrientationInterpolator* OrientationInterpolator1333 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1333->setDEF("r_sternoclavicularRoll");
OrientationInterpolator1333->setKey(new float[7]{0,0.20000000298023224,0.4000000059604645,0.5,0.699999988079071,0.800000011920929,1}, 7);
OrientationInterpolator1333->setKeyValue(new float[28]{0,0,1,0,0,0,-1,0.10000000149011612,0,0,-1,0.2199999988079071,0,0.5,-1,0.27000001072883606,0,0,-1,0.10000000149011612,0,0,1,0,0,0,1,0});
group->addChildren(*OrientationInterpolator1333);

COrientationInterpolator* OrientationInterpolator1334 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1334->setDEF("r_acromioclavicularRoll");
OrientationInterpolator1334->setKey(new float[6]{0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1}, 6);
OrientationInterpolator1334->setKeyValue(new float[24]{0,0,1,0,0,0,1,0,0,0,1,-0.05000000074505806,0,0,1,0,0,0,1,0,0,0,1,0});
group->addChildren(*OrientationInterpolator1334);

COrientationInterpolator* OrientationInterpolator1335 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1335->setDEF("r_shoulderRoll");
OrientationInterpolator1335->setKey(new float[6]{0,0.20000000298023224,0.4000000059604645,0.5,0.8500000238418579,1}, 6);
OrientationInterpolator1335->setKeyValue(new float[24]{1,0,0,0,0,0,-1,1.659999966621399,-0.25,0,-1,1.7599999904632568,0,0,-1,1.25600004196167,0,0,-1,0.05000000074505806,1,0,0,0});
group->addChildren(*OrientationInterpolator1335);

COrientationInterpolator* OrientationInterpolator1336 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1336->setDEF("r_ForeArmPitch");
OrientationInterpolator1336->setKey(new float[7]{0,0.15000000596046448,0.30000001192092896,0.5,0.699999988079071,0.8999999761581421,1}, 7);
OrientationInterpolator1336->setKeyValue(new float[28]{0,0,1,0,-1,0,0,0.550000011920929,-1,-0.25,0,2.549999952316284,-1,-0.25,0,2.549999952316284,-1,-0.25,0,2.549999952316284,0,0,1,0,0,0,1,0});
group->addChildren(*OrientationInterpolator1336);

COrientationInterpolator* OrientationInterpolator1337 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1337->setDEF("r_wristRoll");
OrientationInterpolator1337->setKey(new float[8]{0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.6499999761581421,0.75,0.8500000238418579,1}, 8);
OrientationInterpolator1337->setKeyValue(new float[32]{0,0,1,0,0,0,1,0,0,1,0,-0.550000011920929,0,0,1,0,0,1,0,1.5499999523162842,0,0,-1,1.5499999523162842,0,0,1,0,0,0,1,0});
group->addChildren(*OrientationInterpolator1337);

COrientationInterpolator* OrientationInterpolator1338 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1338->setDEF("r_handPitch");
OrientationInterpolator1338->setKey(new float[6]{0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1}, 6);
OrientationInterpolator1338->setKeyValue(new float[24]{0,0,1,0,0,0,0.009999999776482582,0.25,0,0,-0.009999999776482582,0.029999999329447746,0,0,0.009999999776482582,0.05000000074505806,0,0,0.009999999776482582,0.009999999776482582,0,0,1,0});
group->addChildren(*OrientationInterpolator1338);

COrientationInterpolator* OrientationInterpolator1339 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1339->setDEF("r_thumb1Pitch");
OrientationInterpolator1339->setKey(new float[6]{0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1}, 6);
OrientationInterpolator1339->setKeyValue(new float[24]{1,0,0,0,1,0,0,0.5,1,0,0,1,1,0,0,0.4000000059604645,1,0,0,0.20000000298023224,1,0,0,0});
group->addChildren(*OrientationInterpolator1339);

COrientationInterpolator* OrientationInterpolator1340 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1340->setDEF("r_thumb2Pitch");
OrientationInterpolator1340->setKey(new float[6]{0,0.20000000298023224,0.4000000059604645,0.6000000238418579,0.800000011920929,1}, 6);
OrientationInterpolator1340->setKeyValue(new float[24]{0,0,1,0,1,1,0,0.30000001192092896,1,1,0,0.30000001192092896,1,1,0,0.6000000238418579,1,1,0,0.30000001192092896,0,1,1,0});
group->addChildren(*OrientationInterpolator1340);

COrientationInterpolator* OrientationInterpolator1341 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1341->setDEF("l_shoulderRoll");
OrientationInterpolator1341->setKey(new float[6]{0,0.20000000298023224,0.4000000059604645,0.5,0.8500000238418579,1}, 6);
OrientationInterpolator1341->setKeyValue(new float[24]{0.25,0,1,1.7599999904632568,0,0,1,1.659999966621399,0.25,0,1,1.7599999904632568,0,0,1,1.25600004196167,0,0,1,0.05000000074505806,0.25,0,1,1.7599999904632568});
group->addChildren(*OrientationInterpolator1341);

CROUTE* ROUTE1342 = new CROUTE();
ROUTE1342->setFromField("fraction_changed");
ROUTE1342->setFromNode("Time2");
ROUTE1342->setToField("set_fraction");
ROUTE1342->setToNode("r_sternoclavicularRoll");
group->addChildren(*ROUTE1342);

CROUTE* ROUTE1343 = new CROUTE();
ROUTE1343->setFromField("fraction_changed");
ROUTE1343->setFromNode("Time2");
ROUTE1343->setToField("set_fraction");
ROUTE1343->setToNode("r_acromioclavicularRoll");
group->addChildren(*ROUTE1343);

CROUTE* ROUTE1344 = new CROUTE();
ROUTE1344->setFromField("fraction_changed");
ROUTE1344->setFromNode("Time2");
ROUTE1344->setToField("set_fraction");
ROUTE1344->setToNode("r_shoulderRoll");
group->addChildren(*ROUTE1344);

CROUTE* ROUTE1345 = new CROUTE();
ROUTE1345->setFromField("fraction_changed");
ROUTE1345->setFromNode("Time2");
ROUTE1345->setToField("set_fraction");
ROUTE1345->setToNode("r_ForeArmPitch");
group->addChildren(*ROUTE1345);

CROUTE* ROUTE1346 = new CROUTE();
ROUTE1346->setFromField("fraction_changed");
ROUTE1346->setFromNode("Time2");
ROUTE1346->setToField("set_fraction");
ROUTE1346->setToNode("r_wristRoll");
group->addChildren(*ROUTE1346);

CROUTE* ROUTE1347 = new CROUTE();
ROUTE1347->setFromField("fraction_changed");
ROUTE1347->setFromNode("Time2");
ROUTE1347->setToField("set_fraction");
ROUTE1347->setToNode("r_handPitch");
group->addChildren(*ROUTE1347);

CROUTE* ROUTE1348 = new CROUTE();
ROUTE1348->setFromField("fraction_changed");
ROUTE1348->setFromNode("Time2");
ROUTE1348->setToField("set_fraction");
ROUTE1348->setToNode("r_thumb1Pitch");
group->addChildren(*ROUTE1348);

CROUTE* ROUTE1349 = new CROUTE();
ROUTE1349->setFromField("fraction_changed");
ROUTE1349->setFromNode("Time2");
ROUTE1349->setToField("set_fraction");
ROUTE1349->setToNode("r_thumb2Pitch");
group->addChildren(*ROUTE1349);

CROUTE* ROUTE1350 = new CROUTE();
ROUTE1350->setFromField("value_changed");
ROUTE1350->setFromNode("r_sternoclavicularRoll");
ROUTE1350->setToField("set_rotation");
ROUTE1350->setToNode("Joe_r_sternoclavicular");
group->addChildren(*ROUTE1350);

CROUTE* ROUTE1351 = new CROUTE();
ROUTE1351->setFromField("value_changed");
ROUTE1351->setFromNode("r_acromioclavicularRoll");
ROUTE1351->setToField("set_rotation");
ROUTE1351->setToNode("Joe_r_acromioclavicular");
group->addChildren(*ROUTE1351);

CROUTE* ROUTE1352 = new CROUTE();
ROUTE1352->setFromField("value_changed");
ROUTE1352->setFromNode("r_shoulderRoll");
ROUTE1352->setToField("set_rotation");
ROUTE1352->setToNode("Joe_r_shoulder");
group->addChildren(*ROUTE1352);

CROUTE* ROUTE1353 = new CROUTE();
ROUTE1353->setFromField("value_changed");
ROUTE1353->setFromNode("r_ForeArmPitch");
ROUTE1353->setToField("set_rotation");
ROUTE1353->setToNode("Joe_r_elbow");
group->addChildren(*ROUTE1353);

CROUTE* ROUTE1354 = new CROUTE();
ROUTE1354->setFromField("value_changed");
ROUTE1354->setFromNode("r_wristRoll");
ROUTE1354->setToField("set_rotation");
ROUTE1354->setToNode("Joe_r_wrist");
group->addChildren(*ROUTE1354);

CROUTE* ROUTE1355 = new CROUTE();
ROUTE1355->setFromField("value_changed");
ROUTE1355->setFromNode("r_handPitch");
ROUTE1355->setToField("set_rotation");
ROUTE1355->setToNode("Joe_r_index0");
group->addChildren(*ROUTE1355);

CROUTE* ROUTE1356 = new CROUTE();
ROUTE1356->setFromField("value_changed");
ROUTE1356->setFromNode("r_handPitch");
ROUTE1356->setToField("set_rotation");
ROUTE1356->setToNode("Joe_r_index1");
group->addChildren(*ROUTE1356);

CROUTE* ROUTE1357 = new CROUTE();
ROUTE1357->setFromField("value_changed");
ROUTE1357->setFromNode("r_handPitch");
ROUTE1357->setToField("set_rotation");
ROUTE1357->setToNode("Joe_r_index2");
group->addChildren(*ROUTE1357);

CROUTE* ROUTE1358 = new CROUTE();
ROUTE1358->setFromField("value_changed");
ROUTE1358->setFromNode("r_handPitch");
ROUTE1358->setToField("set_rotation");
ROUTE1358->setToNode("Joe_r_index3");
group->addChildren(*ROUTE1358);

CROUTE* ROUTE1359 = new CROUTE();
ROUTE1359->setFromField("value_changed");
ROUTE1359->setFromNode("r_handPitch");
ROUTE1359->setToField("set_rotation");
ROUTE1359->setToNode("Joe_r_middle0");
group->addChildren(*ROUTE1359);

CROUTE* ROUTE1360 = new CROUTE();
ROUTE1360->setFromField("value_changed");
ROUTE1360->setFromNode("r_handPitch");
ROUTE1360->setToField("set_rotation");
ROUTE1360->setToNode("Joe_r_middle1");
group->addChildren(*ROUTE1360);

CROUTE* ROUTE1361 = new CROUTE();
ROUTE1361->setFromField("value_changed");
ROUTE1361->setFromNode("r_handPitch");
ROUTE1361->setToField("set_rotation");
ROUTE1361->setToNode("Joe_r_middle2");
group->addChildren(*ROUTE1361);

CROUTE* ROUTE1362 = new CROUTE();
ROUTE1362->setFromField("value_changed");
ROUTE1362->setFromNode("r_handPitch");
ROUTE1362->setToField("set_rotation");
ROUTE1362->setToNode("Joe_r_middle3");
group->addChildren(*ROUTE1362);

CROUTE* ROUTE1363 = new CROUTE();
ROUTE1363->setFromField("value_changed");
ROUTE1363->setFromNode("r_handPitch");
ROUTE1363->setToField("set_rotation");
ROUTE1363->setToNode("Joe_r_ring0");
group->addChildren(*ROUTE1363);

CROUTE* ROUTE1364 = new CROUTE();
ROUTE1364->setFromField("value_changed");
ROUTE1364->setFromNode("r_handPitch");
ROUTE1364->setToField("set_rotation");
ROUTE1364->setToNode("Joe_r_ring1");
group->addChildren(*ROUTE1364);

CROUTE* ROUTE1365 = new CROUTE();
ROUTE1365->setFromField("value_changed");
ROUTE1365->setFromNode("r_handPitch");
ROUTE1365->setToField("set_rotation");
ROUTE1365->setToNode("Joe_r_ring2");
group->addChildren(*ROUTE1365);

CROUTE* ROUTE1366 = new CROUTE();
ROUTE1366->setFromField("value_changed");
ROUTE1366->setFromNode("r_handPitch");
ROUTE1366->setToField("set_rotation");
ROUTE1366->setToNode("Joe_r_ring3");
group->addChildren(*ROUTE1366);

CROUTE* ROUTE1367 = new CROUTE();
ROUTE1367->setFromField("value_changed");
ROUTE1367->setFromNode("r_handPitch");
ROUTE1367->setToField("set_rotation");
ROUTE1367->setToNode("Joe_r_pinky0");
group->addChildren(*ROUTE1367);

CROUTE* ROUTE1368 = new CROUTE();
ROUTE1368->setFromField("value_changed");
ROUTE1368->setFromNode("r_handPitch");
ROUTE1368->setToField("set_rotation");
ROUTE1368->setToNode("Joe_r_pinky1");
group->addChildren(*ROUTE1368);

CROUTE* ROUTE1369 = new CROUTE();
ROUTE1369->setFromField("value_changed");
ROUTE1369->setFromNode("r_handPitch");
ROUTE1369->setToField("set_rotation");
ROUTE1369->setToNode("Joe_r_pinky2");
group->addChildren(*ROUTE1369);

CROUTE* ROUTE1370 = new CROUTE();
ROUTE1370->setFromField("value_changed");
ROUTE1370->setFromNode("r_handPitch");
ROUTE1370->setToField("set_rotation");
ROUTE1370->setToNode("Joe_r_pinky3");
group->addChildren(*ROUTE1370);

CROUTE* ROUTE1371 = new CROUTE();
ROUTE1371->setFromField("value_changed");
ROUTE1371->setFromNode("r_thumb1Pitch");
ROUTE1371->setToField("set_rotation");
ROUTE1371->setToNode("Joe_r_thumb1");
group->addChildren(*ROUTE1371);

CROUTE* ROUTE1372 = new CROUTE();
ROUTE1372->setFromField("value_changed");
ROUTE1372->setFromNode("r_thumb2Pitch");
ROUTE1372->setToField("set_rotation");
ROUTE1372->setToNode("Joe_r_thumb2");
group->addChildren(*ROUTE1372);

CROUTE* ROUTE1373 = new CROUTE();
ROUTE1373->setFromField("value_changed");
ROUTE1373->setFromNode("r_thumb2Pitch");
ROUTE1373->setToField("set_rotation");
ROUTE1373->setToNode("Joe_r_thumb3");
group->addChildren(*ROUTE1373);

CROUTE* ROUTE1374 = new CROUTE();
ROUTE1374->setFromField("value_changed");
ROUTE1374->setFromNode("l_shoulderRoll");
ROUTE1374->setToField("set_rotation");
ROUTE1374->setToNode("Joe_l_shoulder");
group->addChildren(*ROUTE1374);

CGroup* Group1375 = (CGroup *)(m_pScene.createNode("Group"));
CPositionInterpolator* PositionInterpolator1376 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator1376->setDEF("HUMANOIDROOT_POSITION_ANIMATOR");
PositionInterpolator1376->setKey(new float[19]{0,0.041669998317956924,0.125,0.16670000553131104,0.20829999446868896,0.25,0.29170000553131104,0.375,0.45829999446868896,0.5,0.541700005531311,0.583299994468689,0.625,0.708299994468689,0.75,0.791700005531311,0.875,0.916700005531311,1}, 19);
PositionInterpolator1376->setKeyValue(new float[57]{0,-0.009279999881982803,0,0,-0.0038580000400543213,0,0,-0.008847000077366829,0,0,-0.01486000046133995,0,0,-0.026410000398755074,0,0,-0.039340000599622726,0,0,-0.050200000405311584,0,0,-0.07468999922275543,0,0,-0.027319999411702156,0,0,-0.01607999950647354,0,0,-0.011289999820291996,0,0,-0.0058189998380839825,0,0,-0.0020039998926222324,0,0,-0.0025790000800043344,0,0,-0.014299999922513962,0,0,-0.03799000009894371,0,0,-0.05648000165820122,0,0,-0.04500000178813934,0,0,-0.009279999881982803,0});
Group1375->addChildren(*PositionInterpolator1376);

COrientationInterpolator* OrientationInterpolator1377 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1377->setDEF("HUMANOIDROOT_ANIMATOR");
OrientationInterpolator1377->setKey(new float[2]{0,1}, 2);
OrientationInterpolator1377->setKeyValue(new float[8]{0,1,0,0,0,1,0,0});
Group1375->addChildren(*OrientationInterpolator1377);

COrientationInterpolator* OrientationInterpolator1378 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1378->setDEF("L_HIP_ANIMATOR");
OrientationInterpolator1378->setKey(new float[8]{0,0.25,0.375,0.5,0.666700005531311,0.791700005531311,0.916700005531311,1}, 8);
OrientationInterpolator1378->setKeyValue(new float[32]{-0.8730000257492065,0.06094000115990639,0.48399999737739563,0.2865000069141388,0.9962999820709229,-0.010569999925792217,0.08481000363826752,0.24879999458789825,0.9965000152587891,0.01590999960899353,-0.08222000300884247,0.38359999656677246,-0.7017999887466431,-0.03223000094294548,-0.7117000222206116,0.12890000641345978,-1,0,0,0.551800012588501,-0.996399998664856,0.02230999991297722,0.08169999718666077,0.535099983215332,-0.98089998960495,0.04912000149488449,0.18809999525547028,0.5203999876976013,-0.8730000257492065,0.06094000115990639,0.48399999737739563,0.2865000069141388});
Group1375->addChildren(*OrientationInterpolator1378);

COrientationInterpolator* OrientationInterpolator1379 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1379->setDEF("L_KNEE_ANIMATOR");
OrientationInterpolator1379->setKey(new float[8]{0,0.20829999446868896,0.375,0.5,0.666700005531311,0.791700005531311,0.916700005531311,1}, 8);
OrientationInterpolator1379->setKeyValue(new float[32]{1,0,0,0.32260000705718994,1,0,0,0.15559999644756317,1,0,0,0.08677999675273895,1,0,0,0.8751000165939331,1,0,0,1.13100004196167,1,0,0,0.09961000084877014,1,0,0,0.39419999718666077,1,0,0,0.32260000705718994});
Group1375->addChildren(*OrientationInterpolator1379);

COrientationInterpolator* OrientationInterpolator1380 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1380->setDEF("L_ANKLE_ANIMATOR");
OrientationInterpolator1380->setKey(new float[7]{0,0.125,0.20829999446868896,0.375,0.666700005531311,0.916700005531311,1}, 7);
OrientationInterpolator1380->setKeyValue(new float[28]{-1,0,0,0.06710000336170197,-1,0,0,0.2152000069618225,-1,0,0,0.31839999556541443,-1,0,0,0.4717000126838684,-1,0,0,0.29120001196861267,1,0,0,0.22220000624656677,-1,0,0,0.06710000336170197});
Group1375->addChildren(*OrientationInterpolator1380);

COrientationInterpolator* OrientationInterpolator1381 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1381->setDEF("R_ANKLE_ANIMATOR");
OrientationInterpolator1381->setKey(new float[11]{0,0.125,0.20829999446868896,0.375,0.45829999446868896,0.5,0.666700005531311,0.75,0.7799999713897705,0.916700005531311,1}, 11);
OrientationInterpolator1381->setKeyValue(new float[44]{0,0,1,0,-1,0,0,0.353300005197525,-1,0,0,0.10719999670982361,1,0,0,0.4000000059604645,1,0,0,0.12700000405311584,-1,0,0,0.017999999225139618,-1,0,0,0.057999998331069946,-1,0,0,0.23999999463558197,-1,0,0,0.3499999940395355,-1,0,0,0.33000001311302185,0,0,1,0});
Group1375->addChildren(*OrientationInterpolator1381);

COrientationInterpolator* OrientationInterpolator1382 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1382->setDEF("L_subtalar_ANIMATOR");
OrientationInterpolator1382->setKey(new float[3]{0,0.30000001192092896,1}, 3);
OrientationInterpolator1382->setKeyValue(new float[12]{0,0,1,0,0,0,1,0,0,0,1,0});
Group1375->addChildren(*OrientationInterpolator1382);

COrientationInterpolator* OrientationInterpolator1383 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1383->setDEF("L_MIDTARSAL_ANIMATOR");
OrientationInterpolator1383->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator1383->setKeyValue(new float[12]{1,0,0,0,1,0,0,-0.20000000298023224,1,0,0,0});
Group1375->addChildren(*OrientationInterpolator1383);

COrientationInterpolator* OrientationInterpolator1384 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1384->setDEF("L_metatarsal_ANIMATOR");
OrientationInterpolator1384->setKey(new float[5]{0,0.20000000298023224,0.4000000059604645,0.800000011920929,1}, 5);
OrientationInterpolator1384->setKeyValue(new float[20]{-1,0,0,0.30000001192092896,-1,0,0,0.15000000596046448,1,0,0,0.30000001192092896,0,0,1,0,-1,0,0,0.30000001192092896});
Group1375->addChildren(*OrientationInterpolator1384);

COrientationInterpolator* OrientationInterpolator1385 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1385->setDEF("R_HIP_ANIMATOR");
OrientationInterpolator1385->setKey(new float[10]{0,0.125,0.20829999446868896,0.29170000553131104,0.375,0.5,0.666700005531311,0.791700005531311,0.916700005531311,1}, 10);
OrientationInterpolator1385->setKeyValue(new float[40]{-0.5831000208854675,0.035110000520944595,0.8116000294685364,0.14810000360012054,-0.9950000047683716,0.02295999974012375,0.0967399999499321,0.4683000147342682,-1,0.0019000000320374966,0.007960000075399876,0.4731999933719635,-0.9980000257492065,-0.015799999237060547,-0.06102000176906586,0.5078999996185303,-0.991100013256073,-0.03540999814867973,-0.12860000133514404,0.5418999791145325,-0.913100004196167,-0.0624300017952919,-0.40299999713897705,0.3361000120639801,-0.43059998750686646,-0.07962000370025635,-0.8989999890327454,0.07038000226020813,1,0,0,0.257099986076355,0.9890999794006348,-0.028049999848008156,0.1444000005722046,0.3878999948501587,-0.5831000208854675,0.035110000520944595,0.8116000294685364,0.14810000360012054});
Group1375->addChildren(*OrientationInterpolator1385);

COrientationInterpolator* OrientationInterpolator1386 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1386->setDEF("R_KNEE_ANIMATOR");
OrientationInterpolator1386->setKey(new float[10]{0,0.125,0.20829999446868896,0.29170000553131104,0.375,0.5,0.666700005531311,0.791700005531311,0.916700005531311,1}, 10);
OrientationInterpolator1386->setKeyValue(new float[40]{1,0,0,0.8572999835014343,1,0,0,0.8925999999046326,1,0,0,0.535099983215332,1,0,0,0.17560000717639923,1,0,0,0.11940000206232071,1,0,0,0.31529998779296875,1,0,0,0.0935399979352951,1,0,0,0.0855799987912178,1,0,0,0.2475000023841858,1,0,0,0.8572999835014343});
Group1375->addChildren(*OrientationInterpolator1386);

COrientationInterpolator* OrientationInterpolator1387 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1387->setDEF("R_subtalar_ANIMATOR");
OrientationInterpolator1387->setKey(new float[7]{0,0.225,0.25,0.35,0.45,0.85,0.91}, 7);
OrientationInterpolator1387->setKeyValue(new float[28]{-1,0,0,0.1,0,0,1,0,0,0,1,0,1,0,0,0.1,0,0,1,0,1,0,0,0.1,1,0,0,0.25});
Group1375->addChildren(*OrientationInterpolator1387);

COrientationInterpolator* OrientationInterpolator1388 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1388->setDEF("R_MIDTARSAL_ANIMATOR");
OrientationInterpolator1388->setKey(new float[3]{0,0.2199999988079071,1}, 3);
OrientationInterpolator1388->setKeyValue(new float[12]{1,0,0,-0.20000000298023224,0,0,1,0,1,0,0,-0.20000000298023224});
Group1375->addChildren(*OrientationInterpolator1388);

COrientationInterpolator* OrientationInterpolator1389 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1389->setDEF("R_metatarsal_ANIMATOR");
OrientationInterpolator1389->setKey(new float[5]{0,0.20000000298023224,0.4000000059604645,0.800000011920929,1}, 5);
OrientationInterpolator1389->setKeyValue(new float[20]{-1,0,0,0.15000000596046448,0,0,1,0,1,0,0,0.30000001192092896,-1,0,0,0.30000001192092896,-1,0,0,0.15000000596046448});
Group1375->addChildren(*OrientationInterpolator1389);

COrientationInterpolator* OrientationInterpolator1390 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1390->setDEF("VL5_ANIMATOR");
OrientationInterpolator1390->setKey(new float[6]{0,0.20829999446868896,0.375,0.75,0.833299994468689,1}, 6);
OrientationInterpolator1390->setKeyValue(new float[24]{0,1,0,0.08259999752044678,-0.01971999928355217,-0.5974000096321106,0.8016999959945679,0.08230999857187271,0.009296000003814697,-0.9648000001907349,0.26269999146461487,0.17339999973773956,-0.012380000203847885,0.9549000263214111,-0.29679998755455017,0.0873199999332428,-0.008124999701976776,0.9690999984741211,-0.24629999697208405,0.15800000727176666,0,1,0,0.08259999752044678});
Group1375->addChildren(*OrientationInterpolator1390);

COrientationInterpolator* OrientationInterpolator1391 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1391->setDEF("SKULLBASE_ANIMATOR");
OrientationInterpolator1391->setKey(new float[10]{0,0.375,0.41670000553131104,0.5,0.583299994468689,0.666700005531311,0.75,0.833299994468689,0.916700005531311,1}, 10);
OrientationInterpolator1391->setKeyValue(new float[40]{0,-1,0,0.08640000224113464,0,1,0,0.18250000476837158,0,1,0,0.15049999952316284,0,1,0,0.10530000180006027,0,1,0,0.04391000047326088,0,-1,0,0.031190000474452972,0,-1,0,0.0793600007891655,0,-1,0,0.1615999937057495,0,-1,0,0.1550000011920929,0,-1,0,0.08641999959945679});
Group1375->addChildren(*OrientationInterpolator1391);

COrientationInterpolator* OrientationInterpolator1392 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1392->setDEF("L_SHOULDER_ANIMATOR");
OrientationInterpolator1392->setKey(new float[4]{0,0.375,0.916700005531311,1}, 4);
OrientationInterpolator1392->setKeyValue(new float[16]{1,0,0.4000000059604645,0.11999999731779099,-1,0,0.4000000059604645,0.1860000044107437,1,0,0.10000000149011612,0.335999995470047,1,0,0.4000000059604645,0.11999999731779099});
Group1375->addChildren(*OrientationInterpolator1392);

COrientationInterpolator* OrientationInterpolator1393 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1393->setDEF("L_ELBOW_ANIMATOR");
OrientationInterpolator1393->setKey(new float[4]{0,0.375,0.916700005531311,1}, 4);
OrientationInterpolator1393->setKeyValue(new float[16]{-1,0,0,0.06599999964237213,-1,0,0,0.4880000054836273,-1,0,0,0.01769999973475933,-1,0,0,0.06598780304193497});
Group1375->addChildren(*OrientationInterpolator1393);

COrientationInterpolator* OrientationInterpolator1394 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1394->setDEF("L_WRIST_ANIMATOR");
OrientationInterpolator1394->setKey(new float[4]{0,0.375,0.916700005531311,1}, 4);
OrientationInterpolator1394->setKeyValue(new float[16]{0,-1,0,0.460999995470047,-0.3301999866962433,-0.9275000095367432,0.17550000548362732,0.5388000011444092,0.03277739882469177,-0.99931401014328,-0.01721850037574768,0.4920330047607422,0,-1,0,0.4611000120639801});
Group1375->addChildren(*OrientationInterpolator1394);

COrientationInterpolator* OrientationInterpolator1395 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1395->setDEF("R_SHOULDER_ANIMATOR");
OrientationInterpolator1395->setKey(new float[4]{0,0.375,0.916700005531311,1}, 4);
OrientationInterpolator1395->setKeyValue(new float[16]{-1,0,-1,0.09200000017881393,1,0,-0.20000000298023224,0.3197000026702881,-1,0,-0.5,0.15639999508857727,-1,0,-1,0.09200000017881393});
Group1375->addChildren(*OrientationInterpolator1395);

COrientationInterpolator* OrientationInterpolator1396 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1396->setDEF("R_ELBOW_ANIMATOR");
OrientationInterpolator1396->setKey(new float[4]{0,0.375,0.916700005531311,1}, 4);
OrientationInterpolator1396->setKeyValue(new float[16]{-1,0,0,0.4115000069141388,-1,0,0,0.0925000011920929,-1,0,0,0.5725679993629456,-1,0,0,0.4115079939365387});
Group1375->addChildren(*OrientationInterpolator1396);

COrientationInterpolator* OrientationInterpolator1397 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator1397->setDEF("R_WRIST_ANIMATOR");
OrientationInterpolator1397->setKey(new float[4]{0,0.375,0.916700005531311,1}, 4);
OrientationInterpolator1397->setKeyValue(new float[16]{-0.8129000067710876,0.47589999437332153,-0.33570000529289246,0.13459999859333038,0.15330000221729279,-0.9878000020980835,0.02582000009715557,0.3901999890804291,-0.5701000094413757,0.7603999972343445,-0.3109999895095825,0.3659999966621399,-0.8129000067710876,0.47589999437332153,-0.33570000529289246,0.13459999859333038});
Group1375->addChildren(*OrientationInterpolator1397);

group->addChildren(*Group1375);

CROUTE* ROUTE1398 = new CROUTE();
ROUTE1398->setFromField("fraction_changed");
ROUTE1398->setFromNode("Time1");
ROUTE1398->setToField("set_fraction");
ROUTE1398->setToNode("HUMANOIDROOT_POSITION_ANIMATOR");
group->addChildren(*ROUTE1398);

CROUTE* ROUTE1399 = new CROUTE();
ROUTE1399->setFromField("fraction_changed");
ROUTE1399->setFromNode("Time1");
ROUTE1399->setToField("set_fraction");
ROUTE1399->setToNode("HUMANOIDROOT_ANIMATOR");
group->addChildren(*ROUTE1399);

CROUTE* ROUTE1400 = new CROUTE();
ROUTE1400->setFromField("fraction_changed");
ROUTE1400->setFromNode("Time1");
ROUTE1400->setToField("set_fraction");
ROUTE1400->setToNode("L_HIP_ANIMATOR");
group->addChildren(*ROUTE1400);

CROUTE* ROUTE1401 = new CROUTE();
ROUTE1401->setFromField("fraction_changed");
ROUTE1401->setFromNode("Time1");
ROUTE1401->setToField("set_fraction");
ROUTE1401->setToNode("L_KNEE_ANIMATOR");
group->addChildren(*ROUTE1401);

CROUTE* ROUTE1402 = new CROUTE();
ROUTE1402->setFromField("fraction_changed");
ROUTE1402->setFromNode("Time1");
ROUTE1402->setToField("set_fraction");
ROUTE1402->setToNode("L_ANKLE_ANIMATOR");
group->addChildren(*ROUTE1402);

CROUTE* ROUTE1403 = new CROUTE();
ROUTE1403->setFromField("fraction_changed");
ROUTE1403->setFromNode("Time1");
ROUTE1403->setToField("set_fraction");
ROUTE1403->setToNode("L_subtalar_ANIMATOR");
group->addChildren(*ROUTE1403);

CROUTE* ROUTE1404 = new CROUTE();
ROUTE1404->setFromField("fraction_changed");
ROUTE1404->setFromNode("Time1");
ROUTE1404->setToField("set_fraction");
ROUTE1404->setToNode("L_MIDTARSAL_ANIMATOR");
group->addChildren(*ROUTE1404);

CROUTE* ROUTE1405 = new CROUTE();
ROUTE1405->setFromField("fraction_changed");
ROUTE1405->setFromNode("Time1");
ROUTE1405->setToField("set_fraction");
ROUTE1405->setToNode("L_metatarsal_ANIMATOR");
group->addChildren(*ROUTE1405);

CROUTE* ROUTE1406 = new CROUTE();
ROUTE1406->setFromField("fraction_changed");
ROUTE1406->setFromNode("Time1");
ROUTE1406->setToField("set_fraction");
ROUTE1406->setToNode("R_HIP_ANIMATOR");
group->addChildren(*ROUTE1406);

CROUTE* ROUTE1407 = new CROUTE();
ROUTE1407->setFromField("fraction_changed");
ROUTE1407->setFromNode("Time1");
ROUTE1407->setToField("set_fraction");
ROUTE1407->setToNode("R_KNEE_ANIMATOR");
group->addChildren(*ROUTE1407);

CROUTE* ROUTE1408 = new CROUTE();
ROUTE1408->setFromField("fraction_changed");
ROUTE1408->setFromNode("Time1");
ROUTE1408->setToField("set_fraction");
ROUTE1408->setToNode("R_ANKLE_ANIMATOR");
group->addChildren(*ROUTE1408);

CROUTE* ROUTE1409 = new CROUTE();
ROUTE1409->setFromField("fraction_changed");
ROUTE1409->setFromNode("Time1");
ROUTE1409->setToField("set_fraction");
ROUTE1409->setToNode("R_subtalar_ANIMATOR");
group->addChildren(*ROUTE1409);

CROUTE* ROUTE1410 = new CROUTE();
ROUTE1410->setFromField("fraction_changed");
ROUTE1410->setFromNode("Time1");
ROUTE1410->setToField("set_fraction");
ROUTE1410->setToNode("R_MIDTARSAL_ANIMATOR");
group->addChildren(*ROUTE1410);

CROUTE* ROUTE1411 = new CROUTE();
ROUTE1411->setFromField("fraction_changed");
ROUTE1411->setFromNode("Time1");
ROUTE1411->setToField("set_fraction");
ROUTE1411->setToNode("R_metatarsal_ANIMATOR");
group->addChildren(*ROUTE1411);

CROUTE* ROUTE1412 = new CROUTE();
ROUTE1412->setFromField("fraction_changed");
ROUTE1412->setFromNode("Time1");
ROUTE1412->setToField("set_fraction");
ROUTE1412->setToNode("VL5_ANIMATOR");
group->addChildren(*ROUTE1412);

CROUTE* ROUTE1413 = new CROUTE();
ROUTE1413->setFromField("fraction_changed");
ROUTE1413->setFromNode("Time1");
ROUTE1413->setToField("set_fraction");
ROUTE1413->setToNode("SKULLBASE_ANIMATOR");
group->addChildren(*ROUTE1413);

CROUTE* ROUTE1414 = new CROUTE();
ROUTE1414->setFromField("fraction_changed");
ROUTE1414->setFromNode("Time1");
ROUTE1414->setToField("set_fraction");
ROUTE1414->setToNode("L_SHOULDER_ANIMATOR");
group->addChildren(*ROUTE1414);

CROUTE* ROUTE1415 = new CROUTE();
ROUTE1415->setFromField("fraction_changed");
ROUTE1415->setFromNode("Time1");
ROUTE1415->setToField("set_fraction");
ROUTE1415->setToNode("L_ELBOW_ANIMATOR");
group->addChildren(*ROUTE1415);

CROUTE* ROUTE1416 = new CROUTE();
ROUTE1416->setFromField("fraction_changed");
ROUTE1416->setFromNode("Time1");
ROUTE1416->setToField("set_fraction");
ROUTE1416->setToNode("L_WRIST_ANIMATOR");
group->addChildren(*ROUTE1416);

CROUTE* ROUTE1417 = new CROUTE();
ROUTE1417->setFromField("value_changed");
ROUTE1417->setFromNode("HUMANOIDROOT_POSITION_ANIMATOR");
ROUTE1417->setToField("set_translation");
ROUTE1417->setToNode("Joe_HumanoidRoot");
group->addChildren(*ROUTE1417);

CROUTE* ROUTE1418 = new CROUTE();
ROUTE1418->setFromField("value_changed");
ROUTE1418->setFromNode("HUMANOIDROOT_ANIMATOR");
ROUTE1418->setToField("set_rotation");
ROUTE1418->setToNode("Joe_HumanoidRoot");
group->addChildren(*ROUTE1418);

CROUTE* ROUTE1419 = new CROUTE();
ROUTE1419->setFromField("value_changed");
ROUTE1419->setFromNode("L_HIP_ANIMATOR");
ROUTE1419->setToField("set_rotation");
ROUTE1419->setToNode("Joe_l_hip");
group->addChildren(*ROUTE1419);

CROUTE* ROUTE1420 = new CROUTE();
ROUTE1420->setFromField("value_changed");
ROUTE1420->setFromNode("L_KNEE_ANIMATOR");
ROUTE1420->setToField("set_rotation");
ROUTE1420->setToNode("Joe_l_knee");
group->addChildren(*ROUTE1420);

CROUTE* ROUTE1421 = new CROUTE();
ROUTE1421->setFromField("value_changed");
ROUTE1421->setFromNode("L_ANKLE_ANIMATOR");
ROUTE1421->setToField("set_rotation");
ROUTE1421->setToNode("Joe_l_ankle");
group->addChildren(*ROUTE1421);

CROUTE* ROUTE1422 = new CROUTE();
ROUTE1422->setFromField("value_changed");
ROUTE1422->setFromNode("L_MIDTARSAL_ANIMATOR");
ROUTE1422->setToField("set_rotation");
ROUTE1422->setToNode("Joe_l_midtarsal");
group->addChildren(*ROUTE1422);

CROUTE* ROUTE1423 = new CROUTE();
ROUTE1423->setFromField("value_changed");
ROUTE1423->setFromNode("L_subtalar_ANIMATOR");
ROUTE1423->setToField("set_rotation");
ROUTE1423->setToNode("Joe_l_subtalar");
group->addChildren(*ROUTE1423);

CROUTE* ROUTE1424 = new CROUTE();
ROUTE1424->setFromField("value_changed");
ROUTE1424->setFromNode("L_metatarsal_ANIMATOR");
ROUTE1424->setToField("set_rotation");
ROUTE1424->setToNode("Joe_l_metatarsal");
group->addChildren(*ROUTE1424);

CROUTE* ROUTE1425 = new CROUTE();
ROUTE1425->setFromField("value_changed");
ROUTE1425->setFromNode("R_HIP_ANIMATOR");
ROUTE1425->setToField("set_rotation");
ROUTE1425->setToNode("Joe_r_hip");
group->addChildren(*ROUTE1425);

CROUTE* ROUTE1426 = new CROUTE();
ROUTE1426->setFromField("value_changed");
ROUTE1426->setFromNode("R_KNEE_ANIMATOR");
ROUTE1426->setToField("set_rotation");
ROUTE1426->setToNode("Joe_r_knee");
group->addChildren(*ROUTE1426);

CROUTE* ROUTE1427 = new CROUTE();
ROUTE1427->setFromField("value_changed");
ROUTE1427->setFromNode("R_ANKLE_ANIMATOR");
ROUTE1427->setToField("set_rotation");
ROUTE1427->setToNode("Joe_r_ankle");
group->addChildren(*ROUTE1427);

CROUTE* ROUTE1428 = new CROUTE();
ROUTE1428->setFromField("value_changed");
ROUTE1428->setFromNode("R_subtalar_ANIMATOR");
ROUTE1428->setToField("set_rotation");
ROUTE1428->setToNode("Joe_r_subtalar");
group->addChildren(*ROUTE1428);

CROUTE* ROUTE1429 = new CROUTE();
ROUTE1429->setFromField("value_changed");
ROUTE1429->setFromNode("R_MIDTARSAL_ANIMATOR");
ROUTE1429->setToField("set_rotation");
ROUTE1429->setToNode("Joe_r_midtarsal");
group->addChildren(*ROUTE1429);

CROUTE* ROUTE1430 = new CROUTE();
ROUTE1430->setFromField("value_changed");
ROUTE1430->setFromNode("R_metatarsal_ANIMATOR");
ROUTE1430->setToField("set_rotation");
ROUTE1430->setToNode("Joe_r_metatarsal");
group->addChildren(*ROUTE1430);

CROUTE* ROUTE1431 = new CROUTE();
ROUTE1431->setFromField("value_changed");
ROUTE1431->setFromNode("VL5_ANIMATOR");
ROUTE1431->setToField("set_rotation");
ROUTE1431->setToNode("Joe_vl5");
group->addChildren(*ROUTE1431);

CROUTE* ROUTE1432 = new CROUTE();
ROUTE1432->setFromField("value_changed");
ROUTE1432->setFromNode("SKULLBASE_ANIMATOR");
ROUTE1432->setToField("set_rotation");
ROUTE1432->setToNode("Joe_skullbase");
group->addChildren(*ROUTE1432);

CROUTE* ROUTE1433 = new CROUTE();
ROUTE1433->setFromField("value_changed");
ROUTE1433->setFromNode("L_SHOULDER_ANIMATOR");
ROUTE1433->setToField("set_rotation");
ROUTE1433->setToNode("Joe_l_shoulder");
group->addChildren(*ROUTE1433);

CROUTE* ROUTE1434 = new CROUTE();
ROUTE1434->setFromField("value_changed");
ROUTE1434->setFromNode("L_ELBOW_ANIMATOR");
ROUTE1434->setToField("set_rotation");
ROUTE1434->setToNode("Joe_l_elbow");
group->addChildren(*ROUTE1434);

CROUTE* ROUTE1435 = new CROUTE();
ROUTE1435->setFromField("value_changed");
ROUTE1435->setFromNode("L_WRIST_ANIMATOR");
ROUTE1435->setToField("set_rotation");
ROUTE1435->setToNode("Joe_l_wrist");
group->addChildren(*ROUTE1435);

CROUTE* ROUTE1436 = new CROUTE();
ROUTE1436->setFromField("value_changed");
ROUTE1436->setFromNode("R_SHOULDER_ANIMATOR");
ROUTE1436->setToField("set_rotation");
ROUTE1436->setToNode("Joe_r_shoulder");
group->addChildren(*ROUTE1436);

CROUTE* ROUTE1437 = new CROUTE();
ROUTE1437->setFromField("value_changed");
ROUTE1437->setFromNode("R_ELBOW_ANIMATOR");
ROUTE1437->setToField("set_rotation");
ROUTE1437->setToNode("Joe_r_elbow");
group->addChildren(*ROUTE1437);

CROUTE* ROUTE1438 = new CROUTE();
ROUTE1438->setFromField("value_changed");
ROUTE1438->setFromNode("R_WRIST_ANIMATOR");
ROUTE1438->setToField("set_rotation");
ROUTE1438->setToNode("Joe_r_wrist");
group->addChildren(*ROUTE1438);

X3D0->setScene(*Scene35);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
