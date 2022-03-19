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
X3D0->setProfile("Full");
X3D0->setVersion("4.0");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("InlineSoundSource.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the \"url\" of X3D file.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("info");
meta4->setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("28 October 2020");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("4 August 2021");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("CHANGELOG.txt");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("TODO");
meta9->setContent("credit for audio files");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("https://medialab.hmu.gr/minipages/x3domAudio");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("identifier");
meta11->setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("generator");
meta12->setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("license");
meta13->setContent("../license.html");
head1->addMeta(*meta13);

X3D0->setHead(*head1);

CScene* Scene14 = new CScene();
CWorldInfo* WorldInfo15 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo15->setTitle("InlineSoundSource.x3d");
group->addChildren(*WorldInfo15);

CNavigationInfo* NavigationInfo16 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo16->setDEF("NAV");
group->addChildren(*NavigationInfo16);

CBackground* Background17 = (CBackground *)(m_pScene.createNode("Background"));
Background17->setBackUrl(new CString[2]{"images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"}, 2);
Background17->setBottomUrl(new CString[2]{"images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"}, 2);
Background17->setFrontUrl(new CString[2]{"images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"}, 2);
Background17->setLeftUrl(new CString[2]{"images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"}, 2);
Background17->setRightUrl(new CString[2]{"images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"}, 2);
Background17->setTopUrl(new CString[2]{"images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"}, 2);
group->addChildren(*Background17);

CViewpoint* Viewpoint18 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint18->setDEF("Camera001");
Viewpoint18->setDescription("Camera001");
Viewpoint18->setFarDistance(0);
Viewpoint18->setNearDistance(1);
Viewpoint18->setOrientation(new float[4]{1,0,0,-0.523599});
Viewpoint18->setPosition(new float[3]{0,2000,3500});
group->addChildren(*Viewpoint18);

CTransform* Transform19 = (CTransform *)(m_pScene.createNode("Transform"));
Transform19->setDEF("Floor");
Transform19->setTranslation(new float[3]{1.241,0,0.358});
CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance21 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance21->setDEF("WireColor");
CMaterial* Material22 = (CMaterial *)(m_pScene.createNode("Material"));
Material22->setDiffuseColor(new float[3]{0.122,0.114,0.125});
Appearance21->setMaterial(*Material22);

Shape20->setAppearance(*Appearance21);

CIndexedFaceSet* IndexedFaceSet23 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet23->setDEF("Box001-GEOMETRY");
IndexedFaceSet23->setCoordIndex(new int[48]{0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,12,13,14,-1,15,16,17,-1,18,19,20,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,34,35,-1});
IndexedFaceSet23->setSolid(False);
CCoordinate* Coordinate24 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate24->setPoint(new float[108]{-1000,0,1000,-1000,0,-1000,1000,0,-1000,1000,0,-1000,1000,0,1000,-1000,0,1000,-1000,8.031588,1000,1000,8.031588,1000,1000,8.031588,-1000,1000,8.031588,-1000,-1000,8.031588,-1000,-1000,8.031588,1000,-1000,0,1000,1000,0,1000,1000,8.031588,1000,1000,8.031588,1000,-1000,8.031588,1000,-1000,0,1000,1000,0,1000,1000,0,-1000,1000,8.031588,-1000,1000,8.031588,-1000,1000,8.031588,1000,1000,0,1000,1000,0,-1000,-1000,0,-1000,-1000,8.031588,-1000,-1000,8.031588,-1000,1000,8.031588,-1000,1000,0,-1000,-1000,0,-1000,-1000,0,1000,-1000,8.031588,1000,-1000,8.031588,1000,-1000,8.031588,-1000,-1000,0,-1000});
IndexedFaceSet23->setCoord(*Coordinate24);

CNormal* Normal25 = (CNormal *)(m_pScene.createNode("Normal"));
Normal25->setVector(new float[108]{0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0});
IndexedFaceSet23->setNormal(*Normal25);

Shape20->setGeometry(IndexedFaceSet23);

Transform19->addChildren(*Shape20);

group->addChildren(*Transform19);

CTransform* Transform26 = (CTransform *)(m_pScene.createNode("Transform"));
Transform26->setDEF("InlineScene");
CInline* Inline27 = (CInline *)(m_pScene.createNode("Inline"));
Inline27->setDEF("inline");
Inline27->setUrl(new CString[4]{"x3d/example1.x3d","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.x3d","x3d/example1.wrl","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.wrl"}, 4);
Transform26->addChildren(*Inline27);

group->addChildren(*Transform26);

X3D0->setScene(*Scene14);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
