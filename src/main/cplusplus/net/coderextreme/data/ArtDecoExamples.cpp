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
meta2->setContent("ArtDecoExamples.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("David Roussel");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("translator");
meta5->setContent("James Harney, Don Brutzman NPS");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("7 April 2002");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("20 October 2019");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("http://vrmlstuff.free.fr/materials");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("subject");
meta9->setContent("Universal Media Material Library");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("identifier");
meta10->setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("generator");
meta11->setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html");
head1->addMeta(*meta11);

X3D0->setHead(*head1);

CScene* Scene12 = new CScene();
CExternProtoDeclare* ExternProtoDeclare13 = new CExternProtoDeclare();
ExternProtoDeclare13->setName("ArtDeco00");
ExternProtoDeclare13->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco00","ArtDecoPrototypes.wrl#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco00"}, 4);
group->addChildren(*ExternProtoDeclare13);

CExternProtoDeclare* ExternProtoDeclare14 = new CExternProtoDeclare();
ExternProtoDeclare14->setName("ArtDeco01");
ExternProtoDeclare14->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco01","ArtDecoPrototypes.wrl#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco01"}, 4);
group->addChildren(*ExternProtoDeclare14);

CExternProtoDeclare* ExternProtoDeclare15 = new CExternProtoDeclare();
ExternProtoDeclare15->setName("ArtDeco02");
ExternProtoDeclare15->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02","ArtDecoPrototypes.wrl#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02"}, 4);
group->addChildren(*ExternProtoDeclare15);

CExternProtoDeclare* ExternProtoDeclare16 = new CExternProtoDeclare();
ExternProtoDeclare16->setName("ArtDeco03");
ExternProtoDeclare16->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco03","ArtDecoPrototypes.wrl#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco03"}, 4);
group->addChildren(*ExternProtoDeclare16);

CExternProtoDeclare* ExternProtoDeclare17 = new CExternProtoDeclare();
ExternProtoDeclare17->setName("ArtDeco04");
ExternProtoDeclare17->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04","ArtDecoPrototypes.wrl#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04"}, 4);
group->addChildren(*ExternProtoDeclare17);

CExternProtoDeclare* ExternProtoDeclare18 = new CExternProtoDeclare();
ExternProtoDeclare18->setName("ArtDeco05");
ExternProtoDeclare18->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05","ArtDecoPrototypes.wrl#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05"}, 4);
group->addChildren(*ExternProtoDeclare18);

CExternProtoDeclare* ExternProtoDeclare19 = new CExternProtoDeclare();
ExternProtoDeclare19->setName("ArtDeco06");
ExternProtoDeclare19->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco06","ArtDecoPrototypes.wrl#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco06"}, 4);
group->addChildren(*ExternProtoDeclare19);

CExternProtoDeclare* ExternProtoDeclare20 = new CExternProtoDeclare();
ExternProtoDeclare20->setName("ArtDeco07");
ExternProtoDeclare20->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco07","ArtDecoPrototypes.wrl#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco07"}, 4);
group->addChildren(*ExternProtoDeclare20);

CExternProtoDeclare* ExternProtoDeclare21 = new CExternProtoDeclare();
ExternProtoDeclare21->setName("ArtDeco08");
ExternProtoDeclare21->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08","ArtDecoPrototypes.wrl#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08"}, 4);
group->addChildren(*ExternProtoDeclare21);

CExternProtoDeclare* ExternProtoDeclare22 = new CExternProtoDeclare();
ExternProtoDeclare22->setName("ArtDeco09");
ExternProtoDeclare22->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09","ArtDecoPrototypes.wrl#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09"}, 4);
group->addChildren(*ExternProtoDeclare22);

CExternProtoDeclare* ExternProtoDeclare23 = new CExternProtoDeclare();
ExternProtoDeclare23->setName("ArtDeco10");
ExternProtoDeclare23->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco10","ArtDecoPrototypes.wrl#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco10"}, 4);
group->addChildren(*ExternProtoDeclare23);

CExternProtoDeclare* ExternProtoDeclare24 = new CExternProtoDeclare();
ExternProtoDeclare24->setName("ArtDeco11");
ExternProtoDeclare24->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco11","ArtDecoPrototypes.wrl#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco11"}, 4);
group->addChildren(*ExternProtoDeclare24);

CExternProtoDeclare* ExternProtoDeclare25 = new CExternProtoDeclare();
ExternProtoDeclare25->setName("ArtDeco12");
ExternProtoDeclare25->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco12","ArtDecoPrototypes.wrl#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco12"}, 4);
group->addChildren(*ExternProtoDeclare25);

CExternProtoDeclare* ExternProtoDeclare26 = new CExternProtoDeclare();
ExternProtoDeclare26->setName("ArtDeco13");
ExternProtoDeclare26->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13","ArtDecoPrototypes.wrl#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13"}, 4);
group->addChildren(*ExternProtoDeclare26);

CExternProtoDeclare* ExternProtoDeclare27 = new CExternProtoDeclare();
ExternProtoDeclare27->setName("ArtDeco14");
ExternProtoDeclare27->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco14","ArtDecoPrototypes.wrl#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco14"}, 4);
group->addChildren(*ExternProtoDeclare27);

CExternProtoDeclare* ExternProtoDeclare28 = new CExternProtoDeclare();
ExternProtoDeclare28->setName("ArtDeco15");
ExternProtoDeclare28->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco15","ArtDecoPrototypes.wrl#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco15"}, 4);
group->addChildren(*ExternProtoDeclare28);

CExternProtoDeclare* ExternProtoDeclare29 = new CExternProtoDeclare();
ExternProtoDeclare29->setName("ArtDeco16");
ExternProtoDeclare29->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco16","ArtDecoPrototypes.wrl#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco16"}, 4);
group->addChildren(*ExternProtoDeclare29);

CExternProtoDeclare* ExternProtoDeclare30 = new CExternProtoDeclare();
ExternProtoDeclare30->setName("ArtDeco17");
ExternProtoDeclare30->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco17","ArtDecoPrototypes.wrl#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco17"}, 4);
group->addChildren(*ExternProtoDeclare30);

CExternProtoDeclare* ExternProtoDeclare31 = new CExternProtoDeclare();
ExternProtoDeclare31->setName("ArtDeco18");
ExternProtoDeclare31->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18","ArtDecoPrototypes.wrl#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18"}, 4);
group->addChildren(*ExternProtoDeclare31);

CExternProtoDeclare* ExternProtoDeclare32 = new CExternProtoDeclare();
ExternProtoDeclare32->setName("ArtDeco19");
ExternProtoDeclare32->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco19","ArtDecoPrototypes.wrl#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco19"}, 4);
group->addChildren(*ExternProtoDeclare32);

CExternProtoDeclare* ExternProtoDeclare33 = new CExternProtoDeclare();
ExternProtoDeclare33->setName("ArtDeco20");
ExternProtoDeclare33->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco20","ArtDecoPrototypes.wrl#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco20"}, 4);
group->addChildren(*ExternProtoDeclare33);

CExternProtoDeclare* ExternProtoDeclare34 = new CExternProtoDeclare();
ExternProtoDeclare34->setName("ArtDeco21");
ExternProtoDeclare34->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21","ArtDecoPrototypes.wrl#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21"}, 4);
group->addChildren(*ExternProtoDeclare34);

CExternProtoDeclare* ExternProtoDeclare35 = new CExternProtoDeclare();
ExternProtoDeclare35->setName("ArtDeco22");
ExternProtoDeclare35->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco22","ArtDecoPrototypes.wrl#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco22"}, 4);
group->addChildren(*ExternProtoDeclare35);

CExternProtoDeclare* ExternProtoDeclare36 = new CExternProtoDeclare();
ExternProtoDeclare36->setName("ArtDeco23");
ExternProtoDeclare36->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco23","ArtDecoPrototypes.wrl#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco23"}, 4);
group->addChildren(*ExternProtoDeclare36);

CExternProtoDeclare* ExternProtoDeclare37 = new CExternProtoDeclare();
ExternProtoDeclare37->setName("ArtDeco24");
ExternProtoDeclare37->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24","ArtDecoPrototypes.wrl#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24"}, 4);
group->addChildren(*ExternProtoDeclare37);

CExternProtoDeclare* ExternProtoDeclare38 = new CExternProtoDeclare();
ExternProtoDeclare38->setName("ArtDeco25");
ExternProtoDeclare38->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25","ArtDecoPrototypes.wrl#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25"}, 4);
group->addChildren(*ExternProtoDeclare38);

CExternProtoDeclare* ExternProtoDeclare39 = new CExternProtoDeclare();
ExternProtoDeclare39->setName("ArtDeco26");
ExternProtoDeclare39->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco26","ArtDecoPrototypes.wrl#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco26"}, 4);
group->addChildren(*ExternProtoDeclare39);

CExternProtoDeclare* ExternProtoDeclare40 = new CExternProtoDeclare();
ExternProtoDeclare40->setName("ArtDeco27");
ExternProtoDeclare40->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco27","ArtDecoPrototypes.wrl#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco27"}, 4);
group->addChildren(*ExternProtoDeclare40);

CExternProtoDeclare* ExternProtoDeclare41 = new CExternProtoDeclare();
ExternProtoDeclare41->setName("ArtDeco28");
ExternProtoDeclare41->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco28","ArtDecoPrototypes.wrl#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco28"}, 4);
group->addChildren(*ExternProtoDeclare41);

CExternProtoDeclare* ExternProtoDeclare42 = new CExternProtoDeclare();
ExternProtoDeclare42->setName("ArtDeco29");
ExternProtoDeclare42->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco29","ArtDecoPrototypes.wrl#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco29"}, 4);
group->addChildren(*ExternProtoDeclare42);

CExternProtoDeclare* ExternProtoDeclare43 = new CExternProtoDeclare();
ExternProtoDeclare43->setName("ArtDeco30");
ExternProtoDeclare43->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco30","ArtDecoPrototypes.wrl#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco30"}, 4);
group->addChildren(*ExternProtoDeclare43);

CExternProtoDeclare* ExternProtoDeclare44 = new CExternProtoDeclare();
ExternProtoDeclare44->setName("ArtDeco31");
ExternProtoDeclare44->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco31","ArtDecoPrototypes.wrl#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco31"}, 4);
group->addChildren(*ExternProtoDeclare44);

CExternProtoDeclare* ExternProtoDeclare45 = new CExternProtoDeclare();
ExternProtoDeclare45->setName("ArtDeco32");
ExternProtoDeclare45->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco32","ArtDecoPrototypes.wrl#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco32"}, 4);
group->addChildren(*ExternProtoDeclare45);

CExternProtoDeclare* ExternProtoDeclare46 = new CExternProtoDeclare();
ExternProtoDeclare46->setName("ArtDeco33");
ExternProtoDeclare46->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco33","ArtDecoPrototypes.wrl#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco33"}, 4);
group->addChildren(*ExternProtoDeclare46);

CExternProtoDeclare* ExternProtoDeclare47 = new CExternProtoDeclare();
ExternProtoDeclare47->setName("ArtDeco34");
ExternProtoDeclare47->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco34","ArtDecoPrototypes.wrl#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco34"}, 4);
group->addChildren(*ExternProtoDeclare47);

CWorldInfo* WorldInfo48 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo48->setTitle("ArtDecoExamples.x3d");
group->addChildren(*WorldInfo48);

CGroup* Group49 = (CGroup *)(m_pScene.createNode("Group"));
CNavigationInfo* NavigationInfo50 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo50->setHeadlight(False);
Group49->addChildren(*NavigationInfo50);

CViewpoint* Viewpoint51 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint51->setDEF("Front");
Viewpoint51->setDescription("Front view");
Viewpoint51->setPosition(new float[3]{0,0,12});
Group49->addChildren(*Viewpoint51);

CViewpoint* Viewpoint52 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint52->setDEF("PersRight");
Viewpoint52->setDescription("Low Right");
Viewpoint52->setPosition(new float[3]{6.9282,-6.9282,6.9282});
Viewpoint52->setOrientation(new float[4]{0.74291,0.30772,0.59447,1.2171});
Group49->addChildren(*Viewpoint52);

CViewpoint* Viewpoint53 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint53->setDEF("PersLeft");
Viewpoint53->setDescription("Low Left");
Viewpoint53->setPosition(new float[3]{-6.9282,-6.9282,6.9282});
Viewpoint53->setOrientation(new float[4]{0.74291,-0.30772,-0.59447,1.2171});
Group49->addChildren(*Viewpoint53);

CViewpoint* Viewpoint54 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint54->setDEF("Back");
Viewpoint54->setDescription("Back view");
Viewpoint54->setPosition(new float[3]{0,0,-12});
Viewpoint54->setOrientation(new float[4]{0,1,0,3.1416});
Group49->addChildren(*Viewpoint54);

CTransform* Transform55 = (CTransform *)(m_pScene.createNode("Transform"));
Transform55->setDEF("Close_travel");
CPositionInterpolator* PositionInterpolator56 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator56->setDEF("Close_Mover");
PositionInterpolator56->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
PositionInterpolator56->setKeyValue(new float[15]{0,2.5,0,0,0,0,0,-2.5,0,0,0,0,0,2.5,0});
Transform55->addChildren(*PositionInterpolator56);

CTimeSensor* TimeSensor57 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor57->setDEF("Close_Time");
TimeSensor57->setCycleInterval(12);
TimeSensor57->setLoop(True);
Transform55->addChildren(*TimeSensor57);

CViewpoint* Viewpoint58 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint58->setDEF("Close");
Viewpoint58->setDescription("Close Front");
Viewpoint58->setPosition(new float[3]{0,0,6});
Transform55->addChildren(*Viewpoint58);

Group49->addChildren(*Transform55);

CDirectionalLight* DirectionalLight59 = (CDirectionalLight *)(m_pScene.createNode("DirectionalLight"));
DirectionalLight59->setDirection(new float[3]{1,-1,-1});
Group49->addChildren(*DirectionalLight59);

CDirectionalLight* DirectionalLight60 = (CDirectionalLight *)(m_pScene.createNode("DirectionalLight"));
DirectionalLight60->setIntensity(0.5);
DirectionalLight60->setDirection(new float[3]{0,1,-0.5});
Group49->addChildren(*DirectionalLight60);

CAnchor* Anchor61 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor61->setDescription("Back to front view");
Anchor61->setUrl(new CString[1]{"#Front"}, 1);
CTransform* Transform62 = (CTransform *)(m_pScene.createNode("Transform"));
Transform62->setTranslation(new float[3]{0,0,-0.5});
CInline* Inline63 = (CInline *)(m_pScene.createNode("Inline"));
Inline63->setGlobal(True);
Inline63->setUrl(new CString[5]{"../data/gridBack.json","../data/gridBack.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"}, 5);
Transform62->addChildren(*Inline63);

Anchor61->addChildren(*Transform62);

Group49->addChildren(*Anchor61);

CViewpoint* Viewpoint64 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint64->setDEF("View00");
Viewpoint64->setDescription("ArtDeco00");
Viewpoint64->setPosition(new float[3]{-3.75,3.75,3});
Group49->addChildren(*Viewpoint64);

CTransform* Transform65 = (CTransform *)(m_pScene.createNode("Transform"));
Transform65->setTranslation(new float[3]{-3.75,3.75,0});
CAnchor* Anchor66 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor66->setDescription("ArtDeco00 view");
Anchor66->setUrl(new CString[1]{"#View00"}, 1);
CShape* Shape67 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance68 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance69 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance69->setName("ArtDeco00");
Appearance68->setMaterial(*ProtoInstance69);

Shape67->setAppearance(*Appearance68);

CSphere* Sphere70 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere70->setDEF("Ball");
Sphere70->setRadius(0.5);
Shape67->setGeometry(Sphere70);

Anchor66->addChildren(*Shape67);

Transform65->addChildren(*Anchor66);

CTransform* Transform71 = (CTransform *)(m_pScene.createNode("Transform"));
Transform71->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor72 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor72->setDescription("ArtDeco00");
Anchor72->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00"}, 2);
Anchor72->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape73 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance74 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material75 = (CMaterial *)(m_pScene.createNode("Material"));
Material75->setDEF("TextMat");
Material75->setDiffuseColor(new float[3]{1,1,1});
Appearance74->setMaterial(*Material75);

Shape73->setAppearance(*Appearance74);

CText* Text76 = (CText *)(m_pScene.createNode("Text"));
Text76->setString(new CString[1]{"ArtDeco00"}, 1);
CFontStyle* FontStyle77 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle77->setDEF("Style");
FontStyle77->setFamily(new CString[1]{"SANS"}, 1);
FontStyle77->setStyle("BOLD");
FontStyle77->setSize(0.3);
FontStyle77->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text76->setFontStyle(*FontStyle77);

Shape73->setGeometry(Text76);

Anchor72->addChildren(*Shape73);

Transform71->addChildren(*Anchor72);

Transform65->addChildren(*Transform71);

Group49->addChildren(*Transform65);

CViewpoint* Viewpoint78 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint78->setDEF("View01");
Viewpoint78->setDescription("ArtDeco01");
Viewpoint78->setPosition(new float[3]{-2.25,3.75,3});
Group49->addChildren(*Viewpoint78);

CTransform* Transform79 = (CTransform *)(m_pScene.createNode("Transform"));
Transform79->setTranslation(new float[3]{-2.25,3.75,0});
CAnchor* Anchor80 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor80->setDescription("ArtDeco01 view");
Anchor80->setUrl(new CString[1]{"#View01"}, 1);
CShape* Shape81 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance82 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance83 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance83->setName("ArtDeco01");
Appearance82->setMaterial(*ProtoInstance83);

Shape81->setAppearance(*Appearance82);

CSphere* Sphere84 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere84->setUSE("Ball");
Shape81->setGeometry(Sphere84);

Anchor80->addChildren(*Shape81);

Transform79->addChildren(*Anchor80);

CTransform* Transform85 = (CTransform *)(m_pScene.createNode("Transform"));
Transform85->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor86 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor86->setDescription("ArtDeco01");
Anchor86->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01"}, 2);
Anchor86->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape87 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance88 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material89 = (CMaterial *)(m_pScene.createNode("Material"));
Material89->setUSE("TextMat");
Appearance88->setMaterial(*Material89);

Shape87->setAppearance(*Appearance88);

CText* Text90 = (CText *)(m_pScene.createNode("Text"));
Text90->setString(new CString[1]{"ArtDeco01"}, 1);
CFontStyle* FontStyle91 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle91->setUSE("Style");
Text90->setFontStyle(*FontStyle91);

Shape87->setGeometry(Text90);

Anchor86->addChildren(*Shape87);

Transform85->addChildren(*Anchor86);

Transform79->addChildren(*Transform85);

Group49->addChildren(*Transform79);

CViewpoint* Viewpoint92 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint92->setDEF("View02");
Viewpoint92->setDescription("ArtDeco02");
Viewpoint92->setPosition(new float[3]{-0.75,3.75,3});
Group49->addChildren(*Viewpoint92);

CTransform* Transform93 = (CTransform *)(m_pScene.createNode("Transform"));
Transform93->setTranslation(new float[3]{-0.75,3.75,0});
CAnchor* Anchor94 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor94->setDescription("ArtDeco02 view");
Anchor94->setUrl(new CString[1]{"#View02"}, 1);
CShape* Shape95 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance96 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance97 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance97->setName("ArtDeco02");
Appearance96->setMaterial(*ProtoInstance97);

Shape95->setAppearance(*Appearance96);

CSphere* Sphere98 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere98->setUSE("Ball");
Shape95->setGeometry(Sphere98);

Anchor94->addChildren(*Shape95);

Transform93->addChildren(*Anchor94);

CTransform* Transform99 = (CTransform *)(m_pScene.createNode("Transform"));
Transform99->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor100 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor100->setDescription("ArtDeco02");
Anchor100->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02"}, 2);
Anchor100->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape101 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance102 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material103 = (CMaterial *)(m_pScene.createNode("Material"));
Material103->setUSE("TextMat");
Appearance102->setMaterial(*Material103);

Shape101->setAppearance(*Appearance102);

CText* Text104 = (CText *)(m_pScene.createNode("Text"));
Text104->setString(new CString[1]{"ArtDeco02"}, 1);
CFontStyle* FontStyle105 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle105->setUSE("Style");
Text104->setFontStyle(*FontStyle105);

Shape101->setGeometry(Text104);

Anchor100->addChildren(*Shape101);

Transform99->addChildren(*Anchor100);

Transform93->addChildren(*Transform99);

Group49->addChildren(*Transform93);

CViewpoint* Viewpoint106 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint106->setDEF("View03");
Viewpoint106->setDescription("ArtDeco03");
Viewpoint106->setPosition(new float[3]{0.75,3.75,3});
Group49->addChildren(*Viewpoint106);

CTransform* Transform107 = (CTransform *)(m_pScene.createNode("Transform"));
Transform107->setTranslation(new float[3]{0.75,3.75,0});
CAnchor* Anchor108 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor108->setDescription("ArtDeco03 view");
Anchor108->setUrl(new CString[1]{"#View03"}, 1);
CShape* Shape109 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance110 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance111 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance111->setName("ArtDeco03");
Appearance110->setMaterial(*ProtoInstance111);

Shape109->setAppearance(*Appearance110);

CSphere* Sphere112 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere112->setUSE("Ball");
Shape109->setGeometry(Sphere112);

Anchor108->addChildren(*Shape109);

Transform107->addChildren(*Anchor108);

CTransform* Transform113 = (CTransform *)(m_pScene.createNode("Transform"));
Transform113->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor114 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor114->setDescription("ArtDeco03");
Anchor114->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03"}, 2);
Anchor114->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape115 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance116 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material117 = (CMaterial *)(m_pScene.createNode("Material"));
Material117->setUSE("TextMat");
Appearance116->setMaterial(*Material117);

Shape115->setAppearance(*Appearance116);

CText* Text118 = (CText *)(m_pScene.createNode("Text"));
Text118->setString(new CString[1]{"ArtDeco03"}, 1);
CFontStyle* FontStyle119 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle119->setUSE("Style");
Text118->setFontStyle(*FontStyle119);

Shape115->setGeometry(Text118);

Anchor114->addChildren(*Shape115);

Transform113->addChildren(*Anchor114);

Transform107->addChildren(*Transform113);

Group49->addChildren(*Transform107);

CViewpoint* Viewpoint120 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint120->setDEF("View04");
Viewpoint120->setDescription("ArtDeco04");
Viewpoint120->setPosition(new float[3]{2.25,3.75,3});
Group49->addChildren(*Viewpoint120);

CTransform* Transform121 = (CTransform *)(m_pScene.createNode("Transform"));
Transform121->setTranslation(new float[3]{2.25,3.75,0});
CAnchor* Anchor122 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor122->setDescription("ArtDeco04 view");
Anchor122->setUrl(new CString[1]{"#View04"}, 1);
CShape* Shape123 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance124 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance125 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance125->setName("ArtDeco04");
Appearance124->setMaterial(*ProtoInstance125);

Shape123->setAppearance(*Appearance124);

CSphere* Sphere126 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere126->setUSE("Ball");
Shape123->setGeometry(Sphere126);

Anchor122->addChildren(*Shape123);

Transform121->addChildren(*Anchor122);

CTransform* Transform127 = (CTransform *)(m_pScene.createNode("Transform"));
Transform127->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor128 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor128->setDescription("ArtDeco04");
Anchor128->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04"}, 2);
Anchor128->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape129 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance130 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material131 = (CMaterial *)(m_pScene.createNode("Material"));
Material131->setUSE("TextMat");
Appearance130->setMaterial(*Material131);

Shape129->setAppearance(*Appearance130);

CText* Text132 = (CText *)(m_pScene.createNode("Text"));
Text132->setString(new CString[1]{"ArtDeco04"}, 1);
CFontStyle* FontStyle133 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle133->setUSE("Style");
Text132->setFontStyle(*FontStyle133);

Shape129->setGeometry(Text132);

Anchor128->addChildren(*Shape129);

Transform127->addChildren(*Anchor128);

Transform121->addChildren(*Transform127);

Group49->addChildren(*Transform121);

CViewpoint* Viewpoint134 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint134->setDEF("View05");
Viewpoint134->setDescription("ArtDeco05");
Viewpoint134->setPosition(new float[3]{3.75,3.75,3});
Group49->addChildren(*Viewpoint134);

CTransform* Transform135 = (CTransform *)(m_pScene.createNode("Transform"));
Transform135->setTranslation(new float[3]{3.75,3.75,0});
CAnchor* Anchor136 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor136->setDescription("ArtDeco05 view");
Anchor136->setUrl(new CString[1]{"#View05"}, 1);
CShape* Shape137 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance138 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance139 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance139->setName("ArtDeco05");
Appearance138->setMaterial(*ProtoInstance139);

Shape137->setAppearance(*Appearance138);

CSphere* Sphere140 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere140->setUSE("Ball");
Shape137->setGeometry(Sphere140);

Anchor136->addChildren(*Shape137);

Transform135->addChildren(*Anchor136);

CTransform* Transform141 = (CTransform *)(m_pScene.createNode("Transform"));
Transform141->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor142 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor142->setDescription("ArtDeco05");
Anchor142->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05"}, 2);
Anchor142->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape143 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance144 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material145 = (CMaterial *)(m_pScene.createNode("Material"));
Material145->setUSE("TextMat");
Appearance144->setMaterial(*Material145);

Shape143->setAppearance(*Appearance144);

CText* Text146 = (CText *)(m_pScene.createNode("Text"));
Text146->setString(new CString[1]{"ArtDeco05"}, 1);
CFontStyle* FontStyle147 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle147->setUSE("Style");
Text146->setFontStyle(*FontStyle147);

Shape143->setGeometry(Text146);

Anchor142->addChildren(*Shape143);

Transform141->addChildren(*Anchor142);

Transform135->addChildren(*Transform141);

Group49->addChildren(*Transform135);

CViewpoint* Viewpoint148 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint148->setDEF("View06");
Viewpoint148->setDescription("ArtDeco06");
Viewpoint148->setPosition(new float[3]{-3.75,2.25,3});
Group49->addChildren(*Viewpoint148);

CTransform* Transform149 = (CTransform *)(m_pScene.createNode("Transform"));
Transform149->setTranslation(new float[3]{-3.75,2.25,0});
CAnchor* Anchor150 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor150->setDescription("ArtDeco06 view");
Anchor150->setUrl(new CString[1]{"#View06"}, 1);
CShape* Shape151 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance152 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance153 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance153->setName("ArtDeco06");
Appearance152->setMaterial(*ProtoInstance153);

Shape151->setAppearance(*Appearance152);

CSphere* Sphere154 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere154->setUSE("Ball");
Shape151->setGeometry(Sphere154);

Anchor150->addChildren(*Shape151);

Transform149->addChildren(*Anchor150);

CTransform* Transform155 = (CTransform *)(m_pScene.createNode("Transform"));
Transform155->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor156 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor156->setDescription("ArtDeco06");
Anchor156->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06"}, 2);
Anchor156->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape157 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance158 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material159 = (CMaterial *)(m_pScene.createNode("Material"));
Material159->setUSE("TextMat");
Appearance158->setMaterial(*Material159);

Shape157->setAppearance(*Appearance158);

CText* Text160 = (CText *)(m_pScene.createNode("Text"));
Text160->setString(new CString[1]{"ArtDeco06"}, 1);
CFontStyle* FontStyle161 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle161->setUSE("Style");
Text160->setFontStyle(*FontStyle161);

Shape157->setGeometry(Text160);

Anchor156->addChildren(*Shape157);

Transform155->addChildren(*Anchor156);

Transform149->addChildren(*Transform155);

Group49->addChildren(*Transform149);

CViewpoint* Viewpoint162 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint162->setDEF("View07");
Viewpoint162->setDescription("ArtDeco07");
Viewpoint162->setPosition(new float[3]{-2.25,2.25,3});
Group49->addChildren(*Viewpoint162);

CTransform* Transform163 = (CTransform *)(m_pScene.createNode("Transform"));
Transform163->setTranslation(new float[3]{-2.25,2.25,0});
CAnchor* Anchor164 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor164->setDescription("ArtDeco07 view");
Anchor164->setUrl(new CString[1]{"#View07"}, 1);
CShape* Shape165 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance166 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance167 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance167->setName("ArtDeco07");
Appearance166->setMaterial(*ProtoInstance167);

Shape165->setAppearance(*Appearance166);

CSphere* Sphere168 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere168->setUSE("Ball");
Shape165->setGeometry(Sphere168);

Anchor164->addChildren(*Shape165);

Transform163->addChildren(*Anchor164);

CTransform* Transform169 = (CTransform *)(m_pScene.createNode("Transform"));
Transform169->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor170 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor170->setDescription("ArtDeco07");
Anchor170->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07"}, 2);
Anchor170->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape171 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance172 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material173 = (CMaterial *)(m_pScene.createNode("Material"));
Material173->setUSE("TextMat");
Appearance172->setMaterial(*Material173);

Shape171->setAppearance(*Appearance172);

CText* Text174 = (CText *)(m_pScene.createNode("Text"));
Text174->setString(new CString[1]{"ArtDeco07"}, 1);
CFontStyle* FontStyle175 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle175->setUSE("Style");
Text174->setFontStyle(*FontStyle175);

Shape171->setGeometry(Text174);

Anchor170->addChildren(*Shape171);

Transform169->addChildren(*Anchor170);

Transform163->addChildren(*Transform169);

Group49->addChildren(*Transform163);

CViewpoint* Viewpoint176 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint176->setDEF("View08");
Viewpoint176->setDescription("ArtDeco08");
Viewpoint176->setPosition(new float[3]{-0.75,2.25,3});
Group49->addChildren(*Viewpoint176);

CTransform* Transform177 = (CTransform *)(m_pScene.createNode("Transform"));
Transform177->setTranslation(new float[3]{-0.75,2.25,0});
CAnchor* Anchor178 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor178->setDescription("ArtDeco08 view");
Anchor178->setUrl(new CString[1]{"#View08"}, 1);
CShape* Shape179 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance180 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance181 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance181->setName("ArtDeco08");
Appearance180->setMaterial(*ProtoInstance181);

Shape179->setAppearance(*Appearance180);

CSphere* Sphere182 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere182->setUSE("Ball");
Shape179->setGeometry(Sphere182);

Anchor178->addChildren(*Shape179);

Transform177->addChildren(*Anchor178);

CTransform* Transform183 = (CTransform *)(m_pScene.createNode("Transform"));
Transform183->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor184 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor184->setDescription("ArtDeco08");
Anchor184->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08"}, 2);
Anchor184->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape185 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance186 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material187 = (CMaterial *)(m_pScene.createNode("Material"));
Material187->setUSE("TextMat");
Appearance186->setMaterial(*Material187);

Shape185->setAppearance(*Appearance186);

CText* Text188 = (CText *)(m_pScene.createNode("Text"));
Text188->setString(new CString[1]{"ArtDeco08"}, 1);
CFontStyle* FontStyle189 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle189->setUSE("Style");
Text188->setFontStyle(*FontStyle189);

Shape185->setGeometry(Text188);

Anchor184->addChildren(*Shape185);

Transform183->addChildren(*Anchor184);

Transform177->addChildren(*Transform183);

Group49->addChildren(*Transform177);

CViewpoint* Viewpoint190 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint190->setDEF("View09");
Viewpoint190->setDescription("ArtDeco09");
Viewpoint190->setPosition(new float[3]{0.75,2.25,3});
Group49->addChildren(*Viewpoint190);

CTransform* Transform191 = (CTransform *)(m_pScene.createNode("Transform"));
Transform191->setTranslation(new float[3]{0.75,2.25,0});
CAnchor* Anchor192 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor192->setDescription("ArtDeco09 view");
Anchor192->setUrl(new CString[1]{"#View09"}, 1);
CShape* Shape193 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance194 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance195 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance195->setName("ArtDeco09");
Appearance194->setMaterial(*ProtoInstance195);

Shape193->setAppearance(*Appearance194);

CSphere* Sphere196 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere196->setUSE("Ball");
Shape193->setGeometry(Sphere196);

Anchor192->addChildren(*Shape193);

Transform191->addChildren(*Anchor192);

CTransform* Transform197 = (CTransform *)(m_pScene.createNode("Transform"));
Transform197->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor198 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor198->setDescription("ArtDeco09");
Anchor198->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09"}, 2);
Anchor198->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape199 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance200 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material201 = (CMaterial *)(m_pScene.createNode("Material"));
Material201->setUSE("TextMat");
Appearance200->setMaterial(*Material201);

Shape199->setAppearance(*Appearance200);

CText* Text202 = (CText *)(m_pScene.createNode("Text"));
Text202->setString(new CString[1]{"ArtDeco09"}, 1);
CFontStyle* FontStyle203 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle203->setUSE("Style");
Text202->setFontStyle(*FontStyle203);

Shape199->setGeometry(Text202);

Anchor198->addChildren(*Shape199);

Transform197->addChildren(*Anchor198);

Transform191->addChildren(*Transform197);

Group49->addChildren(*Transform191);

CViewpoint* Viewpoint204 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint204->setDEF("View10");
Viewpoint204->setDescription("ArtDeco10");
Viewpoint204->setPosition(new float[3]{2.25,2.25,3});
Group49->addChildren(*Viewpoint204);

CTransform* Transform205 = (CTransform *)(m_pScene.createNode("Transform"));
Transform205->setTranslation(new float[3]{2.25,2.25,0});
CAnchor* Anchor206 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor206->setDescription("ArtDeco10 view");
Anchor206->setUrl(new CString[1]{"#View10"}, 1);
CShape* Shape207 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance208 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance209 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance209->setName("ArtDeco10");
Appearance208->setMaterial(*ProtoInstance209);

Shape207->setAppearance(*Appearance208);

CSphere* Sphere210 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere210->setUSE("Ball");
Shape207->setGeometry(Sphere210);

Anchor206->addChildren(*Shape207);

Transform205->addChildren(*Anchor206);

CTransform* Transform211 = (CTransform *)(m_pScene.createNode("Transform"));
Transform211->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor212 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor212->setDescription("ArtDeco10");
Anchor212->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10"}, 2);
Anchor212->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape213 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance214 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material215 = (CMaterial *)(m_pScene.createNode("Material"));
Material215->setUSE("TextMat");
Appearance214->setMaterial(*Material215);

Shape213->setAppearance(*Appearance214);

CText* Text216 = (CText *)(m_pScene.createNode("Text"));
Text216->setString(new CString[1]{"ArtDeco10"}, 1);
CFontStyle* FontStyle217 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle217->setUSE("Style");
Text216->setFontStyle(*FontStyle217);

Shape213->setGeometry(Text216);

Anchor212->addChildren(*Shape213);

Transform211->addChildren(*Anchor212);

Transform205->addChildren(*Transform211);

Group49->addChildren(*Transform205);

CViewpoint* Viewpoint218 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint218->setDEF("View11");
Viewpoint218->setDescription("ArtDeco11");
Viewpoint218->setPosition(new float[3]{3.75,2.25,3});
Group49->addChildren(*Viewpoint218);

CTransform* Transform219 = (CTransform *)(m_pScene.createNode("Transform"));
Transform219->setTranslation(new float[3]{3.75,2.25,0});
CAnchor* Anchor220 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor220->setDescription("ArtDeco11 view");
Anchor220->setUrl(new CString[1]{"#View11"}, 1);
CShape* Shape221 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance222 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance223 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance223->setName("ArtDeco11");
Appearance222->setMaterial(*ProtoInstance223);

Shape221->setAppearance(*Appearance222);

CSphere* Sphere224 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere224->setUSE("Ball");
Shape221->setGeometry(Sphere224);

Anchor220->addChildren(*Shape221);

Transform219->addChildren(*Anchor220);

CTransform* Transform225 = (CTransform *)(m_pScene.createNode("Transform"));
Transform225->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor226 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor226->setDescription("ArtDeco11");
Anchor226->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11"}, 2);
Anchor226->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape227 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance228 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material229 = (CMaterial *)(m_pScene.createNode("Material"));
Material229->setUSE("TextMat");
Appearance228->setMaterial(*Material229);

Shape227->setAppearance(*Appearance228);

CText* Text230 = (CText *)(m_pScene.createNode("Text"));
Text230->setString(new CString[1]{"ArtDeco11"}, 1);
CFontStyle* FontStyle231 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle231->setUSE("Style");
Text230->setFontStyle(*FontStyle231);

Shape227->setGeometry(Text230);

Anchor226->addChildren(*Shape227);

Transform225->addChildren(*Anchor226);

Transform219->addChildren(*Transform225);

Group49->addChildren(*Transform219);

CViewpoint* Viewpoint232 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint232->setDEF("View12");
Viewpoint232->setDescription("ArtDeco12");
Viewpoint232->setPosition(new float[3]{-3.75,0.75,3});
Group49->addChildren(*Viewpoint232);

CTransform* Transform233 = (CTransform *)(m_pScene.createNode("Transform"));
Transform233->setTranslation(new float[3]{-3.75,0.75,0});
CAnchor* Anchor234 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor234->setDescription("ArtDeco12 view");
Anchor234->setUrl(new CString[1]{"#View12"}, 1);
CShape* Shape235 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance236 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance237 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance237->setName("ArtDeco12");
Appearance236->setMaterial(*ProtoInstance237);

Shape235->setAppearance(*Appearance236);

CSphere* Sphere238 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere238->setUSE("Ball");
Shape235->setGeometry(Sphere238);

Anchor234->addChildren(*Shape235);

Transform233->addChildren(*Anchor234);

CTransform* Transform239 = (CTransform *)(m_pScene.createNode("Transform"));
Transform239->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor240 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor240->setDescription("ArtDeco12");
Anchor240->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12"}, 2);
Anchor240->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape241 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance242 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material243 = (CMaterial *)(m_pScene.createNode("Material"));
Material243->setUSE("TextMat");
Appearance242->setMaterial(*Material243);

Shape241->setAppearance(*Appearance242);

CText* Text244 = (CText *)(m_pScene.createNode("Text"));
Text244->setString(new CString[1]{"ArtDeco12"}, 1);
CFontStyle* FontStyle245 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle245->setUSE("Style");
Text244->setFontStyle(*FontStyle245);

Shape241->setGeometry(Text244);

Anchor240->addChildren(*Shape241);

Transform239->addChildren(*Anchor240);

Transform233->addChildren(*Transform239);

Group49->addChildren(*Transform233);

CViewpoint* Viewpoint246 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint246->setDEF("View13");
Viewpoint246->setDescription("ArtDeco13");
Viewpoint246->setPosition(new float[3]{-2.25,0.75,3});
Group49->addChildren(*Viewpoint246);

CTransform* Transform247 = (CTransform *)(m_pScene.createNode("Transform"));
Transform247->setTranslation(new float[3]{-2.25,0.75,0});
CAnchor* Anchor248 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor248->setDescription("ArtDeco13 view");
Anchor248->setUrl(new CString[1]{"#View13"}, 1);
CShape* Shape249 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance250 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance251 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance251->setName("ArtDeco13");
Appearance250->setMaterial(*ProtoInstance251);

Shape249->setAppearance(*Appearance250);

CSphere* Sphere252 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere252->setUSE("Ball");
Shape249->setGeometry(Sphere252);

Anchor248->addChildren(*Shape249);

Transform247->addChildren(*Anchor248);

CTransform* Transform253 = (CTransform *)(m_pScene.createNode("Transform"));
Transform253->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor254 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor254->setDescription("ArtDeco13");
Anchor254->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco3","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco13"}, 2);
Anchor254->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape255 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance256 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material257 = (CMaterial *)(m_pScene.createNode("Material"));
Material257->setUSE("TextMat");
Appearance256->setMaterial(*Material257);

Shape255->setAppearance(*Appearance256);

CText* Text258 = (CText *)(m_pScene.createNode("Text"));
Text258->setString(new CString[1]{"ArtDeco13"}, 1);
CFontStyle* FontStyle259 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle259->setUSE("Style");
Text258->setFontStyle(*FontStyle259);

Shape255->setGeometry(Text258);

Anchor254->addChildren(*Shape255);

Transform253->addChildren(*Anchor254);

Transform247->addChildren(*Transform253);

Group49->addChildren(*Transform247);

CViewpoint* Viewpoint260 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint260->setDEF("View14");
Viewpoint260->setDescription("ArtDeco14");
Viewpoint260->setPosition(new float[3]{-0.75,0.75,3});
Group49->addChildren(*Viewpoint260);

CTransform* Transform261 = (CTransform *)(m_pScene.createNode("Transform"));
Transform261->setTranslation(new float[3]{-0.75,0.75,0});
CAnchor* Anchor262 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor262->setDescription("ArtDeco14 view");
Anchor262->setUrl(new CString[1]{"#View14"}, 1);
CShape* Shape263 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance264 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance265 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance265->setName("ArtDeco14");
Appearance264->setMaterial(*ProtoInstance265);

Shape263->setAppearance(*Appearance264);

CSphere* Sphere266 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere266->setUSE("Ball");
Shape263->setGeometry(Sphere266);

Anchor262->addChildren(*Shape263);

Transform261->addChildren(*Anchor262);

CTransform* Transform267 = (CTransform *)(m_pScene.createNode("Transform"));
Transform267->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor268 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor268->setDescription("ArtDeco14");
Anchor268->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco4","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco14"}, 2);
Anchor268->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape269 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance270 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material271 = (CMaterial *)(m_pScene.createNode("Material"));
Material271->setUSE("TextMat");
Appearance270->setMaterial(*Material271);

Shape269->setAppearance(*Appearance270);

CText* Text272 = (CText *)(m_pScene.createNode("Text"));
Text272->setString(new CString[1]{"ArtDeco14"}, 1);
CFontStyle* FontStyle273 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle273->setUSE("Style");
Text272->setFontStyle(*FontStyle273);

Shape269->setGeometry(Text272);

Anchor268->addChildren(*Shape269);

Transform267->addChildren(*Anchor268);

Transform261->addChildren(*Transform267);

Group49->addChildren(*Transform261);

CViewpoint* Viewpoint274 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint274->setDEF("View15");
Viewpoint274->setDescription("ArtDeco15");
Viewpoint274->setPosition(new float[3]{0.75,0.75,3});
Group49->addChildren(*Viewpoint274);

CTransform* Transform275 = (CTransform *)(m_pScene.createNode("Transform"));
Transform275->setTranslation(new float[3]{0.75,0.75,0});
CAnchor* Anchor276 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor276->setDescription("ArtDeco15 view");
Anchor276->setUrl(new CString[1]{"#View15"}, 1);
CShape* Shape277 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance278 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance279 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance279->setName("ArtDeco15");
Appearance278->setMaterial(*ProtoInstance279);

Shape277->setAppearance(*Appearance278);

CSphere* Sphere280 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere280->setUSE("Ball");
Shape277->setGeometry(Sphere280);

Anchor276->addChildren(*Shape277);

Transform275->addChildren(*Anchor276);

CTransform* Transform281 = (CTransform *)(m_pScene.createNode("Transform"));
Transform281->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor282 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor282->setDescription("ArtDeco15");
Anchor282->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco5","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco15"}, 2);
Anchor282->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape283 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance284 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material285 = (CMaterial *)(m_pScene.createNode("Material"));
Material285->setUSE("TextMat");
Appearance284->setMaterial(*Material285);

Shape283->setAppearance(*Appearance284);

CText* Text286 = (CText *)(m_pScene.createNode("Text"));
Text286->setString(new CString[1]{"ArtDeco15"}, 1);
CFontStyle* FontStyle287 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle287->setUSE("Style");
Text286->setFontStyle(*FontStyle287);

Shape283->setGeometry(Text286);

Anchor282->addChildren(*Shape283);

Transform281->addChildren(*Anchor282);

Transform275->addChildren(*Transform281);

Group49->addChildren(*Transform275);

CViewpoint* Viewpoint288 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint288->setDEF("View16");
Viewpoint288->setDescription("ArtDeco16");
Viewpoint288->setPosition(new float[3]{2.25,0.75,3});
Group49->addChildren(*Viewpoint288);

CTransform* Transform289 = (CTransform *)(m_pScene.createNode("Transform"));
Transform289->setTranslation(new float[3]{2.25,0.75,0});
CAnchor* Anchor290 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor290->setDescription("ArtDeco16 view");
Anchor290->setUrl(new CString[1]{"#View16"}, 1);
CShape* Shape291 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance292 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance293 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance293->setName("ArtDeco16");
Appearance292->setMaterial(*ProtoInstance293);

Shape291->setAppearance(*Appearance292);

CSphere* Sphere294 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere294->setUSE("Ball");
Shape291->setGeometry(Sphere294);

Anchor290->addChildren(*Shape291);

Transform289->addChildren(*Anchor290);

CTransform* Transform295 = (CTransform *)(m_pScene.createNode("Transform"));
Transform295->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor296 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor296->setDescription("ArtDeco16");
Anchor296->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16"}, 2);
Anchor296->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape297 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance298 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material299 = (CMaterial *)(m_pScene.createNode("Material"));
Material299->setUSE("TextMat");
Appearance298->setMaterial(*Material299);

Shape297->setAppearance(*Appearance298);

CText* Text300 = (CText *)(m_pScene.createNode("Text"));
Text300->setString(new CString[1]{"ArtDeco16"}, 1);
CFontStyle* FontStyle301 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle301->setUSE("Style");
Text300->setFontStyle(*FontStyle301);

Shape297->setGeometry(Text300);

Anchor296->addChildren(*Shape297);

Transform295->addChildren(*Anchor296);

Transform289->addChildren(*Transform295);

Group49->addChildren(*Transform289);

CViewpoint* Viewpoint302 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint302->setDEF("View17");
Viewpoint302->setDescription("ArtDeco17");
Viewpoint302->setPosition(new float[3]{3.75,0.75,3});
Group49->addChildren(*Viewpoint302);

CTransform* Transform303 = (CTransform *)(m_pScene.createNode("Transform"));
Transform303->setTranslation(new float[3]{3.75,0.75,0});
CAnchor* Anchor304 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor304->setDescription("ArtDeco17 view");
Anchor304->setUrl(new CString[1]{"#View17"}, 1);
CShape* Shape305 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance306 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance307 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance307->setName("ArtDeco17");
Appearance306->setMaterial(*ProtoInstance307);

Shape305->setAppearance(*Appearance306);

CSphere* Sphere308 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere308->setUSE("Ball");
Shape305->setGeometry(Sphere308);

Anchor304->addChildren(*Shape305);

Transform303->addChildren(*Anchor304);

CTransform* Transform309 = (CTransform *)(m_pScene.createNode("Transform"));
Transform309->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor310 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor310->setDescription("ArtDeco17");
Anchor310->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco7","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco17"}, 2);
Anchor310->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape311 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance312 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material313 = (CMaterial *)(m_pScene.createNode("Material"));
Material313->setUSE("TextMat");
Appearance312->setMaterial(*Material313);

Shape311->setAppearance(*Appearance312);

CText* Text314 = (CText *)(m_pScene.createNode("Text"));
Text314->setString(new CString[1]{"ArtDeco17"}, 1);
CFontStyle* FontStyle315 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle315->setUSE("Style");
Text314->setFontStyle(*FontStyle315);

Shape311->setGeometry(Text314);

Anchor310->addChildren(*Shape311);

Transform309->addChildren(*Anchor310);

Transform303->addChildren(*Transform309);

Group49->addChildren(*Transform303);

CViewpoint* Viewpoint316 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint316->setDEF("View18");
Viewpoint316->setDescription("ArtDeco18");
Viewpoint316->setPosition(new float[3]{-3.75,-0.75,3});
Group49->addChildren(*Viewpoint316);

CTransform* Transform317 = (CTransform *)(m_pScene.createNode("Transform"));
Transform317->setTranslation(new float[3]{-3.75,-0.75,0});
CAnchor* Anchor318 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor318->setDescription("ArtDeco18 view");
Anchor318->setUrl(new CString[1]{"#View18"}, 1);
CShape* Shape319 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance320 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance321 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance321->setName("ArtDeco18");
Appearance320->setMaterial(*ProtoInstance321);

Shape319->setAppearance(*Appearance320);

CSphere* Sphere322 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere322->setUSE("Ball");
Shape319->setGeometry(Sphere322);

Anchor318->addChildren(*Shape319);

Transform317->addChildren(*Anchor318);

CTransform* Transform323 = (CTransform *)(m_pScene.createNode("Transform"));
Transform323->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor324 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor324->setDescription("ArtDeco18");
Anchor324->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18"}, 2);
Anchor324->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape325 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance326 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material327 = (CMaterial *)(m_pScene.createNode("Material"));
Material327->setUSE("TextMat");
Appearance326->setMaterial(*Material327);

Shape325->setAppearance(*Appearance326);

CText* Text328 = (CText *)(m_pScene.createNode("Text"));
Text328->setString(new CString[1]{"ArtDeco18"}, 1);
CFontStyle* FontStyle329 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle329->setUSE("Style");
Text328->setFontStyle(*FontStyle329);

Shape325->setGeometry(Text328);

Anchor324->addChildren(*Shape325);

Transform323->addChildren(*Anchor324);

Transform317->addChildren(*Transform323);

Group49->addChildren(*Transform317);

CViewpoint* Viewpoint330 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint330->setDEF("View19");
Viewpoint330->setDescription("ArtDeco19");
Viewpoint330->setPosition(new float[3]{-2.25,-0.75,3});
Group49->addChildren(*Viewpoint330);

CTransform* Transform331 = (CTransform *)(m_pScene.createNode("Transform"));
Transform331->setTranslation(new float[3]{-2.25,-0.75,0});
CAnchor* Anchor332 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor332->setDescription("ArtDeco19 view");
Anchor332->setUrl(new CString[1]{"#View19"}, 1);
CShape* Shape333 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance334 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance335 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance335->setName("ArtDeco19");
Appearance334->setMaterial(*ProtoInstance335);

Shape333->setAppearance(*Appearance334);

CSphere* Sphere336 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere336->setUSE("Ball");
Shape333->setGeometry(Sphere336);

Anchor332->addChildren(*Shape333);

Transform331->addChildren(*Anchor332);

CTransform* Transform337 = (CTransform *)(m_pScene.createNode("Transform"));
Transform337->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor338 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor338->setDescription("ArtDeco19");
Anchor338->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco9","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco19"}, 2);
Anchor338->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape339 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance340 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material341 = (CMaterial *)(m_pScene.createNode("Material"));
Material341->setUSE("TextMat");
Appearance340->setMaterial(*Material341);

Shape339->setAppearance(*Appearance340);

CText* Text342 = (CText *)(m_pScene.createNode("Text"));
Text342->setString(new CString[1]{"ArtDeco19"}, 1);
CFontStyle* FontStyle343 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle343->setUSE("Style");
Text342->setFontStyle(*FontStyle343);

Shape339->setGeometry(Text342);

Anchor338->addChildren(*Shape339);

Transform337->addChildren(*Anchor338);

Transform331->addChildren(*Transform337);

Group49->addChildren(*Transform331);

CViewpoint* Viewpoint344 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint344->setDEF("View20");
Viewpoint344->setDescription("ArtDeco20");
Viewpoint344->setPosition(new float[3]{-0.75,-0.75,3});
Group49->addChildren(*Viewpoint344);

CTransform* Transform345 = (CTransform *)(m_pScene.createNode("Transform"));
Transform345->setTranslation(new float[3]{-0.75,-0.75,0});
CAnchor* Anchor346 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor346->setDescription("ArtDeco20 view");
Anchor346->setUrl(new CString[1]{"#View20"}, 1);
CShape* Shape347 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance348 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance349 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance349->setName("ArtDeco20");
Appearance348->setMaterial(*ProtoInstance349);

Shape347->setAppearance(*Appearance348);

CSphere* Sphere350 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere350->setUSE("Ball");
Shape347->setGeometry(Sphere350);

Anchor346->addChildren(*Shape347);

Transform345->addChildren(*Anchor346);

CTransform* Transform351 = (CTransform *)(m_pScene.createNode("Transform"));
Transform351->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor352 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor352->setDescription("ArtDeco20");
Anchor352->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20"}, 2);
Anchor352->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape353 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance354 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material355 = (CMaterial *)(m_pScene.createNode("Material"));
Material355->setUSE("TextMat");
Appearance354->setMaterial(*Material355);

Shape353->setAppearance(*Appearance354);

CText* Text356 = (CText *)(m_pScene.createNode("Text"));
Text356->setString(new CString[1]{"ArtDeco20"}, 1);
CFontStyle* FontStyle357 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle357->setUSE("Style");
Text356->setFontStyle(*FontStyle357);

Shape353->setGeometry(Text356);

Anchor352->addChildren(*Shape353);

Transform351->addChildren(*Anchor352);

Transform345->addChildren(*Transform351);

Group49->addChildren(*Transform345);

CViewpoint* Viewpoint358 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint358->setDEF("View21");
Viewpoint358->setDescription("ArtDeco21");
Viewpoint358->setPosition(new float[3]{0.75,-0.75,3});
Group49->addChildren(*Viewpoint358);

CTransform* Transform359 = (CTransform *)(m_pScene.createNode("Transform"));
Transform359->setTranslation(new float[3]{0.75,-0.75,0});
CAnchor* Anchor360 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor360->setDescription("ArtDeco21 view");
Anchor360->setUrl(new CString[1]{"#View21"}, 1);
CShape* Shape361 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance362 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance363 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance363->setName("ArtDeco21");
Appearance362->setMaterial(*ProtoInstance363);

Shape361->setAppearance(*Appearance362);

CSphere* Sphere364 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere364->setUSE("Ball");
Shape361->setGeometry(Sphere364);

Anchor360->addChildren(*Shape361);

Transform359->addChildren(*Anchor360);

CTransform* Transform365 = (CTransform *)(m_pScene.createNode("Transform"));
Transform365->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor366 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor366->setDescription("ArtDeco21");
Anchor366->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21"}, 2);
Anchor366->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape367 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance368 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material369 = (CMaterial *)(m_pScene.createNode("Material"));
Material369->setUSE("TextMat");
Appearance368->setMaterial(*Material369);

Shape367->setAppearance(*Appearance368);

CText* Text370 = (CText *)(m_pScene.createNode("Text"));
Text370->setString(new CString[1]{"ArtDeco21"}, 1);
CFontStyle* FontStyle371 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle371->setUSE("Style");
Text370->setFontStyle(*FontStyle371);

Shape367->setGeometry(Text370);

Anchor366->addChildren(*Shape367);

Transform365->addChildren(*Anchor366);

Transform359->addChildren(*Transform365);

Group49->addChildren(*Transform359);

CViewpoint* Viewpoint372 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint372->setDEF("View22");
Viewpoint372->setDescription("ArtDeco22");
Viewpoint372->setPosition(new float[3]{2.25,-0.75,3});
Group49->addChildren(*Viewpoint372);

CTransform* Transform373 = (CTransform *)(m_pScene.createNode("Transform"));
Transform373->setTranslation(new float[3]{2.25,-0.75,0});
CAnchor* Anchor374 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor374->setDescription("ArtDeco22 view");
Anchor374->setUrl(new CString[1]{"#View22"}, 1);
CShape* Shape375 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance376 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance377 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance377->setName("ArtDeco22");
Appearance376->setMaterial(*ProtoInstance377);

Shape375->setAppearance(*Appearance376);

CSphere* Sphere378 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere378->setUSE("Ball");
Shape375->setGeometry(Sphere378);

Anchor374->addChildren(*Shape375);

Transform373->addChildren(*Anchor374);

CTransform* Transform379 = (CTransform *)(m_pScene.createNode("Transform"));
Transform379->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor380 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor380->setDescription("ArtDeco22");
Anchor380->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22"}, 2);
Anchor380->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape381 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance382 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material383 = (CMaterial *)(m_pScene.createNode("Material"));
Material383->setUSE("TextMat");
Appearance382->setMaterial(*Material383);

Shape381->setAppearance(*Appearance382);

CText* Text384 = (CText *)(m_pScene.createNode("Text"));
Text384->setString(new CString[1]{"ArtDeco22"}, 1);
CFontStyle* FontStyle385 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle385->setUSE("Style");
Text384->setFontStyle(*FontStyle385);

Shape381->setGeometry(Text384);

Anchor380->addChildren(*Shape381);

Transform379->addChildren(*Anchor380);

Transform373->addChildren(*Transform379);

Group49->addChildren(*Transform373);

CViewpoint* Viewpoint386 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint386->setDEF("View23");
Viewpoint386->setDescription("ArtDeco23");
Viewpoint386->setPosition(new float[3]{3.75,-0.75,3});
Group49->addChildren(*Viewpoint386);

CTransform* Transform387 = (CTransform *)(m_pScene.createNode("Transform"));
Transform387->setTranslation(new float[3]{3.75,-0.75,0});
CAnchor* Anchor388 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor388->setDescription("ArtDeco23 view");
Anchor388->setUrl(new CString[1]{"#View23"}, 1);
CShape* Shape389 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance390 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance391 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance391->setName("ArtDeco23");
Appearance390->setMaterial(*ProtoInstance391);

Shape389->setAppearance(*Appearance390);

CSphere* Sphere392 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere392->setUSE("Ball");
Shape389->setGeometry(Sphere392);

Anchor388->addChildren(*Shape389);

Transform387->addChildren(*Anchor388);

CTransform* Transform393 = (CTransform *)(m_pScene.createNode("Transform"));
Transform393->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor394 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor394->setDescription("ArtDeco23");
Anchor394->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23"}, 2);
Anchor394->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape395 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance396 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material397 = (CMaterial *)(m_pScene.createNode("Material"));
Material397->setUSE("TextMat");
Appearance396->setMaterial(*Material397);

Shape395->setAppearance(*Appearance396);

CText* Text398 = (CText *)(m_pScene.createNode("Text"));
Text398->setString(new CString[1]{"ArtDeco23"}, 1);
CFontStyle* FontStyle399 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle399->setUSE("Style");
Text398->setFontStyle(*FontStyle399);

Shape395->setGeometry(Text398);

Anchor394->addChildren(*Shape395);

Transform393->addChildren(*Anchor394);

Transform387->addChildren(*Transform393);

Group49->addChildren(*Transform387);

CViewpoint* Viewpoint400 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint400->setDEF("View24");
Viewpoint400->setDescription("ArtDeco24");
Viewpoint400->setPosition(new float[3]{-3.75,-2.25,3});
Group49->addChildren(*Viewpoint400);

CTransform* Transform401 = (CTransform *)(m_pScene.createNode("Transform"));
Transform401->setTranslation(new float[3]{-3.75,-2.25,0});
CAnchor* Anchor402 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor402->setDescription("ArtDeco24 view");
Anchor402->setUrl(new CString[1]{"#View24"}, 1);
CShape* Shape403 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance404 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance405 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance405->setName("ArtDeco24");
Appearance404->setMaterial(*ProtoInstance405);

Shape403->setAppearance(*Appearance404);

CSphere* Sphere406 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere406->setUSE("Ball");
Shape403->setGeometry(Sphere406);

Anchor402->addChildren(*Shape403);

Transform401->addChildren(*Anchor402);

CTransform* Transform407 = (CTransform *)(m_pScene.createNode("Transform"));
Transform407->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor408 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor408->setDescription("ArtDeco24");
Anchor408->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24"}, 2);
Anchor408->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape409 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance410 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material411 = (CMaterial *)(m_pScene.createNode("Material"));
Material411->setUSE("TextMat");
Appearance410->setMaterial(*Material411);

Shape409->setAppearance(*Appearance410);

CText* Text412 = (CText *)(m_pScene.createNode("Text"));
Text412->setString(new CString[1]{"ArtDeco24"}, 1);
CFontStyle* FontStyle413 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle413->setUSE("Style");
Text412->setFontStyle(*FontStyle413);

Shape409->setGeometry(Text412);

Anchor408->addChildren(*Shape409);

Transform407->addChildren(*Anchor408);

Transform401->addChildren(*Transform407);

Group49->addChildren(*Transform401);

CViewpoint* Viewpoint414 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint414->setDEF("View25");
Viewpoint414->setDescription("ArtDeco25");
Viewpoint414->setPosition(new float[3]{-2.25,-2.25,3});
Group49->addChildren(*Viewpoint414);

CTransform* Transform415 = (CTransform *)(m_pScene.createNode("Transform"));
Transform415->setTranslation(new float[3]{-2.25,-2.25,0});
CAnchor* Anchor416 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor416->setDescription("ArtDeco25 view");
Anchor416->setUrl(new CString[1]{"#View25"}, 1);
CShape* Shape417 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance418 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance419 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance419->setName("ArtDeco25");
Appearance418->setMaterial(*ProtoInstance419);

Shape417->setAppearance(*Appearance418);

CSphere* Sphere420 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere420->setUSE("Ball");
Shape417->setGeometry(Sphere420);

Anchor416->addChildren(*Shape417);

Transform415->addChildren(*Anchor416);

CTransform* Transform421 = (CTransform *)(m_pScene.createNode("Transform"));
Transform421->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor422 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor422->setDescription("ArtDeco25");
Anchor422->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25"}, 2);
Anchor422->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape423 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance424 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material425 = (CMaterial *)(m_pScene.createNode("Material"));
Material425->setUSE("TextMat");
Appearance424->setMaterial(*Material425);

Shape423->setAppearance(*Appearance424);

CText* Text426 = (CText *)(m_pScene.createNode("Text"));
Text426->setString(new CString[1]{"ArtDeco25"}, 1);
CFontStyle* FontStyle427 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle427->setUSE("Style");
Text426->setFontStyle(*FontStyle427);

Shape423->setGeometry(Text426);

Anchor422->addChildren(*Shape423);

Transform421->addChildren(*Anchor422);

Transform415->addChildren(*Transform421);

Group49->addChildren(*Transform415);

CViewpoint* Viewpoint428 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint428->setDEF("View26");
Viewpoint428->setDescription("ArtDeco26");
Viewpoint428->setPosition(new float[3]{-0.75,-2.25,3});
Group49->addChildren(*Viewpoint428);

CTransform* Transform429 = (CTransform *)(m_pScene.createNode("Transform"));
Transform429->setTranslation(new float[3]{-0.75,-2.25,0});
CAnchor* Anchor430 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor430->setDescription("ArtDeco26 view");
Anchor430->setUrl(new CString[1]{"#View26"}, 1);
CShape* Shape431 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance432 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance433 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance433->setName("ArtDeco26");
Appearance432->setMaterial(*ProtoInstance433);

Shape431->setAppearance(*Appearance432);

CSphere* Sphere434 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere434->setUSE("Ball");
Shape431->setGeometry(Sphere434);

Anchor430->addChildren(*Shape431);

Transform429->addChildren(*Anchor430);

CTransform* Transform435 = (CTransform *)(m_pScene.createNode("Transform"));
Transform435->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor436 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor436->setDescription("ArtDeco26");
Anchor436->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26"}, 2);
Anchor436->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape437 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance438 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material439 = (CMaterial *)(m_pScene.createNode("Material"));
Material439->setUSE("TextMat");
Appearance438->setMaterial(*Material439);

Shape437->setAppearance(*Appearance438);

CText* Text440 = (CText *)(m_pScene.createNode("Text"));
Text440->setString(new CString[1]{"ArtDeco26"}, 1);
CFontStyle* FontStyle441 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle441->setUSE("Style");
Text440->setFontStyle(*FontStyle441);

Shape437->setGeometry(Text440);

Anchor436->addChildren(*Shape437);

Transform435->addChildren(*Anchor436);

Transform429->addChildren(*Transform435);

Group49->addChildren(*Transform429);

CViewpoint* Viewpoint442 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint442->setDEF("View27");
Viewpoint442->setDescription("ArtDeco27");
Viewpoint442->setPosition(new float[3]{0.75,-2.25,3});
Group49->addChildren(*Viewpoint442);

CTransform* Transform443 = (CTransform *)(m_pScene.createNode("Transform"));
Transform443->setTranslation(new float[3]{0.75,-2.25,0});
CAnchor* Anchor444 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor444->setDescription("ArtDeco27 view");
Anchor444->setUrl(new CString[1]{"#View27"}, 1);
CShape* Shape445 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance446 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance447 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance447->setName("ArtDeco27");
Appearance446->setMaterial(*ProtoInstance447);

Shape445->setAppearance(*Appearance446);

CSphere* Sphere448 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere448->setUSE("Ball");
Shape445->setGeometry(Sphere448);

Anchor444->addChildren(*Shape445);

Transform443->addChildren(*Anchor444);

CTransform* Transform449 = (CTransform *)(m_pScene.createNode("Transform"));
Transform449->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor450 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor450->setDescription("ArtDeco27");
Anchor450->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27"}, 2);
Anchor450->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape451 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance452 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material453 = (CMaterial *)(m_pScene.createNode("Material"));
Material453->setUSE("TextMat");
Appearance452->setMaterial(*Material453);

Shape451->setAppearance(*Appearance452);

CText* Text454 = (CText *)(m_pScene.createNode("Text"));
Text454->setString(new CString[1]{"ArtDeco27"}, 1);
CFontStyle* FontStyle455 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle455->setUSE("Style");
Text454->setFontStyle(*FontStyle455);

Shape451->setGeometry(Text454);

Anchor450->addChildren(*Shape451);

Transform449->addChildren(*Anchor450);

Transform443->addChildren(*Transform449);

Group49->addChildren(*Transform443);

CViewpoint* Viewpoint456 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint456->setDEF("View28");
Viewpoint456->setDescription("ArtDeco28");
Viewpoint456->setPosition(new float[3]{2.25,-2.25,3});
Group49->addChildren(*Viewpoint456);

CTransform* Transform457 = (CTransform *)(m_pScene.createNode("Transform"));
Transform457->setTranslation(new float[3]{2.25,-2.25,0});
CAnchor* Anchor458 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor458->setDescription("ArtDeco28 view");
Anchor458->setUrl(new CString[1]{"#View28"}, 1);
CShape* Shape459 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance460 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance461 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance461->setName("ArtDeco28");
Appearance460->setMaterial(*ProtoInstance461);

Shape459->setAppearance(*Appearance460);

CSphere* Sphere462 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere462->setUSE("Ball");
Shape459->setGeometry(Sphere462);

Anchor458->addChildren(*Shape459);

Transform457->addChildren(*Anchor458);

CTransform* Transform463 = (CTransform *)(m_pScene.createNode("Transform"));
Transform463->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor464 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor464->setDescription("ArtDeco28");
Anchor464->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28"}, 2);
Anchor464->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape465 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance466 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material467 = (CMaterial *)(m_pScene.createNode("Material"));
Material467->setUSE("TextMat");
Appearance466->setMaterial(*Material467);

Shape465->setAppearance(*Appearance466);

CText* Text468 = (CText *)(m_pScene.createNode("Text"));
Text468->setString(new CString[1]{"ArtDeco28"}, 1);
CFontStyle* FontStyle469 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle469->setUSE("Style");
Text468->setFontStyle(*FontStyle469);

Shape465->setGeometry(Text468);

Anchor464->addChildren(*Shape465);

Transform463->addChildren(*Anchor464);

Transform457->addChildren(*Transform463);

Group49->addChildren(*Transform457);

CViewpoint* Viewpoint470 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint470->setDEF("View29");
Viewpoint470->setDescription("ArtDeco29");
Viewpoint470->setPosition(new float[3]{3.75,-2.25,3});
Group49->addChildren(*Viewpoint470);

CTransform* Transform471 = (CTransform *)(m_pScene.createNode("Transform"));
Transform471->setTranslation(new float[3]{3.75,-2.25,0});
CAnchor* Anchor472 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor472->setDescription("ArtDeco29 view");
Anchor472->setUrl(new CString[1]{"#View29"}, 1);
CShape* Shape473 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance474 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance475 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance475->setName("ArtDeco29");
Appearance474->setMaterial(*ProtoInstance475);

Shape473->setAppearance(*Appearance474);

CSphere* Sphere476 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere476->setUSE("Ball");
Shape473->setGeometry(Sphere476);

Anchor472->addChildren(*Shape473);

Transform471->addChildren(*Anchor472);

CTransform* Transform477 = (CTransform *)(m_pScene.createNode("Transform"));
Transform477->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor478 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor478->setDescription("ArtDeco29");
Anchor478->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29"}, 2);
Anchor478->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape479 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance480 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material481 = (CMaterial *)(m_pScene.createNode("Material"));
Material481->setUSE("TextMat");
Appearance480->setMaterial(*Material481);

Shape479->setAppearance(*Appearance480);

CText* Text482 = (CText *)(m_pScene.createNode("Text"));
Text482->setString(new CString[1]{"ArtDeco29"}, 1);
CFontStyle* FontStyle483 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle483->setUSE("Style");
Text482->setFontStyle(*FontStyle483);

Shape479->setGeometry(Text482);

Anchor478->addChildren(*Shape479);

Transform477->addChildren(*Anchor478);

Transform471->addChildren(*Transform477);

Group49->addChildren(*Transform471);

CViewpoint* Viewpoint484 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint484->setDEF("View30");
Viewpoint484->setDescription("ArtDeco30");
Viewpoint484->setPosition(new float[3]{-3.75,-3.75,3});
Group49->addChildren(*Viewpoint484);

CTransform* Transform485 = (CTransform *)(m_pScene.createNode("Transform"));
Transform485->setTranslation(new float[3]{-3.75,-3.75,0});
CAnchor* Anchor486 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor486->setDescription("ArtDeco30 view");
Anchor486->setUrl(new CString[1]{"#View30"}, 1);
CShape* Shape487 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance488 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance489 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance489->setName("ArtDeco30");
Appearance488->setMaterial(*ProtoInstance489);

Shape487->setAppearance(*Appearance488);

CSphere* Sphere490 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere490->setUSE("Ball");
Shape487->setGeometry(Sphere490);

Anchor486->addChildren(*Shape487);

Transform485->addChildren(*Anchor486);

CTransform* Transform491 = (CTransform *)(m_pScene.createNode("Transform"));
Transform491->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor492 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor492->setDescription("ArtDeco30");
Anchor492->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30"}, 2);
Anchor492->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape493 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance494 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material495 = (CMaterial *)(m_pScene.createNode("Material"));
Material495->setUSE("TextMat");
Appearance494->setMaterial(*Material495);

Shape493->setAppearance(*Appearance494);

CText* Text496 = (CText *)(m_pScene.createNode("Text"));
Text496->setString(new CString[1]{"ArtDeco30"}, 1);
CFontStyle* FontStyle497 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle497->setUSE("Style");
Text496->setFontStyle(*FontStyle497);

Shape493->setGeometry(Text496);

Anchor492->addChildren(*Shape493);

Transform491->addChildren(*Anchor492);

Transform485->addChildren(*Transform491);

Group49->addChildren(*Transform485);

CViewpoint* Viewpoint498 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint498->setDEF("View31");
Viewpoint498->setDescription("ArtDeco31");
Viewpoint498->setPosition(new float[3]{-2.25,-3.75,3});
Group49->addChildren(*Viewpoint498);

CTransform* Transform499 = (CTransform *)(m_pScene.createNode("Transform"));
Transform499->setTranslation(new float[3]{-2.25,-3.75,0});
CAnchor* Anchor500 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor500->setDescription("ArtDeco31 view");
Anchor500->setUrl(new CString[1]{"#View31"}, 1);
CShape* Shape501 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance502 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance503 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance503->setName("ArtDeco31");
Appearance502->setMaterial(*ProtoInstance503);

Shape501->setAppearance(*Appearance502);

CSphere* Sphere504 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere504->setUSE("Ball");
Shape501->setGeometry(Sphere504);

Anchor500->addChildren(*Shape501);

Transform499->addChildren(*Anchor500);

CTransform* Transform505 = (CTransform *)(m_pScene.createNode("Transform"));
Transform505->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor506 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor506->setDescription("ArtDeco31");
Anchor506->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31"}, 2);
Anchor506->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape507 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance508 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material509 = (CMaterial *)(m_pScene.createNode("Material"));
Material509->setUSE("TextMat");
Appearance508->setMaterial(*Material509);

Shape507->setAppearance(*Appearance508);

CText* Text510 = (CText *)(m_pScene.createNode("Text"));
Text510->setString(new CString[1]{"ArtDeco31"}, 1);
CFontStyle* FontStyle511 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle511->setUSE("Style");
Text510->setFontStyle(*FontStyle511);

Shape507->setGeometry(Text510);

Anchor506->addChildren(*Shape507);

Transform505->addChildren(*Anchor506);

Transform499->addChildren(*Transform505);

Group49->addChildren(*Transform499);

CViewpoint* Viewpoint512 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint512->setDEF("View32");
Viewpoint512->setDescription("ArtDeco32");
Viewpoint512->setPosition(new float[3]{-0.75,-3.75,3});
Group49->addChildren(*Viewpoint512);

CTransform* Transform513 = (CTransform *)(m_pScene.createNode("Transform"));
Transform513->setTranslation(new float[3]{-0.75,-3.75,0});
CAnchor* Anchor514 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor514->setDescription("ArtDeco32 view");
Anchor514->setUrl(new CString[1]{"#View32"}, 1);
CShape* Shape515 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance516 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance517 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance517->setName("ArtDeco32");
Appearance516->setMaterial(*ProtoInstance517);

Shape515->setAppearance(*Appearance516);

CSphere* Sphere518 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere518->setUSE("Ball");
Shape515->setGeometry(Sphere518);

Anchor514->addChildren(*Shape515);

Transform513->addChildren(*Anchor514);

CTransform* Transform519 = (CTransform *)(m_pScene.createNode("Transform"));
Transform519->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor520 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor520->setDescription("ArtDeco32");
Anchor520->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32"}, 2);
Anchor520->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape521 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance522 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material523 = (CMaterial *)(m_pScene.createNode("Material"));
Material523->setUSE("TextMat");
Appearance522->setMaterial(*Material523);

Shape521->setAppearance(*Appearance522);

CText* Text524 = (CText *)(m_pScene.createNode("Text"));
Text524->setString(new CString[1]{"ArtDeco32"}, 1);
CFontStyle* FontStyle525 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle525->setUSE("Style");
Text524->setFontStyle(*FontStyle525);

Shape521->setGeometry(Text524);

Anchor520->addChildren(*Shape521);

Transform519->addChildren(*Anchor520);

Transform513->addChildren(*Transform519);

Group49->addChildren(*Transform513);

CViewpoint* Viewpoint526 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint526->setDEF("View33");
Viewpoint526->setDescription("ArtDeco33");
Viewpoint526->setPosition(new float[3]{0.75,-3.75,3});
Group49->addChildren(*Viewpoint526);

CTransform* Transform527 = (CTransform *)(m_pScene.createNode("Transform"));
Transform527->setTranslation(new float[3]{0.75,-3.75,0});
CAnchor* Anchor528 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor528->setDescription("ArtDeco33 view");
Anchor528->setUrl(new CString[1]{"#View33"}, 1);
CShape* Shape529 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance530 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance531 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance531->setName("ArtDeco33");
Appearance530->setMaterial(*ProtoInstance531);

Shape529->setAppearance(*Appearance530);

CSphere* Sphere532 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere532->setUSE("Ball");
Shape529->setGeometry(Sphere532);

Anchor528->addChildren(*Shape529);

Transform527->addChildren(*Anchor528);

CTransform* Transform533 = (CTransform *)(m_pScene.createNode("Transform"));
Transform533->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor534 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor534->setDescription("ArtDeco33");
Anchor534->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33"}, 2);
Anchor534->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape535 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance536 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material537 = (CMaterial *)(m_pScene.createNode("Material"));
Material537->setUSE("TextMat");
Appearance536->setMaterial(*Material537);

Shape535->setAppearance(*Appearance536);

CText* Text538 = (CText *)(m_pScene.createNode("Text"));
Text538->setString(new CString[1]{"ArtDeco33"}, 1);
CFontStyle* FontStyle539 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle539->setUSE("Style");
Text538->setFontStyle(*FontStyle539);

Shape535->setGeometry(Text538);

Anchor534->addChildren(*Shape535);

Transform533->addChildren(*Anchor534);

Transform527->addChildren(*Transform533);

Group49->addChildren(*Transform527);

CViewpoint* Viewpoint540 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint540->setDEF("View34");
Viewpoint540->setDescription("ArtDeco34");
Viewpoint540->setPosition(new float[3]{2.25,-3.75,3});
Group49->addChildren(*Viewpoint540);

CTransform* Transform541 = (CTransform *)(m_pScene.createNode("Transform"));
Transform541->setTranslation(new float[3]{2.25,-3.75,0});
CAnchor* Anchor542 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor542->setDescription("ArtDeco34 view");
Anchor542->setUrl(new CString[1]{"#View34"}, 1);
CShape* Shape543 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance544 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance545 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance545->setName("ArtDeco34");
Appearance544->setMaterial(*ProtoInstance545);

Shape543->setAppearance(*Appearance544);

CSphere* Sphere546 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere546->setUSE("Ball");
Shape543->setGeometry(Sphere546);

Anchor542->addChildren(*Shape543);

Transform541->addChildren(*Anchor542);

CTransform* Transform547 = (CTransform *)(m_pScene.createNode("Transform"));
Transform547->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor548 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor548->setDescription("ArtDeco34");
Anchor548->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34"}, 2);
Anchor548->setParameter(new CString[1]{"target=_source"}, 1);
CShape* Shape549 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance550 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material551 = (CMaterial *)(m_pScene.createNode("Material"));
Material551->setUSE("TextMat");
Appearance550->setMaterial(*Material551);

Shape549->setAppearance(*Appearance550);

CText* Text552 = (CText *)(m_pScene.createNode("Text"));
Text552->setString(new CString[1]{"ArtDeco34"}, 1);
CFontStyle* FontStyle553 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle553->setUSE("Style");
Text552->setFontStyle(*FontStyle553);

Shape549->setGeometry(Text552);

Anchor548->addChildren(*Shape549);

Transform547->addChildren(*Anchor548);

Transform541->addChildren(*Transform547);

Group49->addChildren(*Transform541);

group->addChildren(*Group49);

CROUTE* ROUTE554 = new CROUTE();
ROUTE554->setFromNode("Close_Time");
ROUTE554->setFromField("fraction_changed");
ROUTE554->setToNode("Close_Mover");
ROUTE554->setToField("set_fraction");
group->addChildren(*ROUTE554);

CROUTE* ROUTE555 = new CROUTE();
ROUTE555->setFromNode("Close_Mover");
ROUTE555->setFromField("value_changed");
ROUTE555->setToNode("Close_travel");
ROUTE555->setToField("translation");
group->addChildren(*ROUTE555);

X3D0->setScene(*Scene12);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
