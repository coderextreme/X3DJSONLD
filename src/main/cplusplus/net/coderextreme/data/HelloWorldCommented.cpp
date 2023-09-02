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
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("HelloWorldCommented.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Numerous comments added to simple X3D scene example for testing JSON encoding alternatives.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("created");
meta4->setContent("19 December 2015");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("modified");
meta5->setContent("20 October 2019");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("creator");
meta6->setContent("Don Brutzman");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("info");
meta7->setContent("HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental.");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("HelloWorldCommented.json");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("HelloWorldCommentedOriginalEncoding.json");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("HelloWorldCommentedAlternativeEncoding.json");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("identifier");
meta11->setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("license");
meta12->setContent("https://www.web3d.org/x3d/content/examples/license.html");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("generator");
meta13->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta13);

X3D0->setHead(*head1);

CScene* Scene14 = new CScene();
//Example scene to illustrate comments interspersed among X3D nodes and fields (XML elements and attributes)
//WorldInfo begin
CWorldInfo* WorldInfo15 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo15->setTitle("Hello world!");
group->addChildren(*WorldInfo15);

//WorldInfo complete, Group begin
CGroup* Group16 = (CGroup *)(m_pScene.createNode("Group"));
//Viewpoint begin
CViewpoint* Viewpoint17 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint17->setDEF("ViewUpClose");
Viewpoint17->setCenterOfRotation(new float[3]{0,-1,0});
Viewpoint17->setDescription("Hello world!");
Viewpoint17->setPosition(new float[3]{0,-1,7});
Group16->addChildren(*Viewpoint17);

//Viewpoint complete, Transform begin
CTransform* Transform18 = (CTransform *)(m_pScene.createNode("Transform"));
Transform18->setRotation(new float[4]{0,1,0,3});
//Shape begin
CShape* Shape19 = (CShape *)(m_pScene.createNode("Shape"));
//Sphere begin
//Sphere complete, Appearance begin
//Appearance complete
CSphere* Sphere20 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape19->setGeometry(Sphere20);

CAppearance* Appearance21 = (CAppearance *)(m_pScene.createNode("Appearance"));
//Material begin
//Material complete, ImageTexture begin
//ImageTexture complete
CMaterial* Material22 = (CMaterial *)(m_pScene.createNode("Material"));
Material22->setDEF("MaterialLightBlue");
Material22->setDiffuseColor(new float[3]{0.1,0.5,1});
Appearance21->setMaterial(*Material22);

CImageTexture* ImageTexture23 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture23->setDEF("ImageCloudlessEarth");
ImageTexture23->setUrl(new CString[6]{"earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"}, 6);
Appearance21->setTexture(*ImageTexture23);

Shape19->setAppearance(*Appearance21);

Transform18->addChild(*Shape19);

//Shape complete
Group16->addChildren(*Transform18);

//Transform complete, Transform begin
CTransform* Transform24 = (CTransform *)(m_pScene.createNode("Transform"));
Transform24->setTranslation(new float[3]{0,-2,0});
//Shape begin
CShape* Shape25 = (CShape *)(m_pScene.createNode("Shape"));
//Text begin
//Text complete, Appearance begin
//Appearance complete
CText* Text26 = (CText *)(m_pScene.createNode("Text"));
Text26->setDEF("TextMessage");
Text26->setString(new CString[2]{"Hello","world!"}, 2);
//FontStyle begin
//FontStyle complete
CFontStyle* FontStyle27 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle27->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text26->setFontStyle(*FontStyle27);

Shape25->setGeometry(Text26);

CAppearance* Appearance28 = (CAppearance *)(m_pScene.createNode("Appearance"));
//Material begin
//Material complete
CMaterial* Material29 = (CMaterial *)(m_pScene.createNode("Material"));
Material29->setUSE("MaterialLightBlue");
Appearance28->setMaterial(*Material29);

Shape25->setAppearance(*Appearance28);

Transform24->addChild(*Shape25);

//Shape complete
Group16->addChildren(*Transform24);

//Transform complete
group->addChildren(*Group16);

//Group complete
X3D0->setScene(*Scene14);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
