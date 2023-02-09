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
X3D0->setVersion("3.0");
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

Cmeta* meta12 = new Cmeta();
meta12->setName("license");
meta12->setContent("../license.html");
head1->addMeta(*meta12);

X3D0->setHead(*head1);

CScene* Scene13 = new CScene();
CWorldInfo* WorldInfo14 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo14->setTitle("ArtDecoExamples.x3d");
group->addChildren(*WorldInfo14);

CExternProtoDeclare* ExternProtoDeclare15 = new CExternProtoDeclare();
ExternProtoDeclare15->setName("ArtDeco00");
ExternProtoDeclare15->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare15->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare15->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco00","ArtDecoPrototypes.wrl#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco00"}, 4);
group->addChildren(*ExternProtoDeclare15);

CExternProtoDeclare* ExternProtoDeclare16 = new CExternProtoDeclare();
ExternProtoDeclare16->setName("ArtDeco01");
ExternProtoDeclare16->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare16->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare16->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco01","ArtDecoPrototypes.wrl#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco01"}, 4);
group->addChildren(*ExternProtoDeclare16);

CExternProtoDeclare* ExternProtoDeclare17 = new CExternProtoDeclare();
ExternProtoDeclare17->setName("ArtDeco02");
ExternProtoDeclare17->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare17->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare17->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02","ArtDecoPrototypes.wrl#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02"}, 4);
group->addChildren(*ExternProtoDeclare17);

CExternProtoDeclare* ExternProtoDeclare18 = new CExternProtoDeclare();
ExternProtoDeclare18->setName("ArtDeco03");
ExternProtoDeclare18->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare18->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare18->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco03","ArtDecoPrototypes.wrl#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco03"}, 4);
group->addChildren(*ExternProtoDeclare18);

CExternProtoDeclare* ExternProtoDeclare19 = new CExternProtoDeclare();
ExternProtoDeclare19->setName("ArtDeco04");
ExternProtoDeclare19->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare19->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare19->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04","ArtDecoPrototypes.wrl#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04"}, 4);
group->addChildren(*ExternProtoDeclare19);

CExternProtoDeclare* ExternProtoDeclare20 = new CExternProtoDeclare();
ExternProtoDeclare20->setName("ArtDeco05");
ExternProtoDeclare20->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare20->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare20->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05","ArtDecoPrototypes.wrl#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05"}, 4);
group->addChildren(*ExternProtoDeclare20);

CExternProtoDeclare* ExternProtoDeclare21 = new CExternProtoDeclare();
ExternProtoDeclare21->setName("ArtDeco06");
ExternProtoDeclare21->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare21->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare21->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco06","ArtDecoPrototypes.wrl#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco06"}, 4);
group->addChildren(*ExternProtoDeclare21);

CExternProtoDeclare* ExternProtoDeclare22 = new CExternProtoDeclare();
ExternProtoDeclare22->setName("ArtDeco07");
ExternProtoDeclare22->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare22->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare22->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco07","ArtDecoPrototypes.wrl#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco07"}, 4);
group->addChildren(*ExternProtoDeclare22);

CExternProtoDeclare* ExternProtoDeclare23 = new CExternProtoDeclare();
ExternProtoDeclare23->setName("ArtDeco08");
ExternProtoDeclare23->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare23->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare23->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08","ArtDecoPrototypes.wrl#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08"}, 4);
group->addChildren(*ExternProtoDeclare23);

CExternProtoDeclare* ExternProtoDeclare24 = new CExternProtoDeclare();
ExternProtoDeclare24->setName("ArtDeco09");
ExternProtoDeclare24->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare24->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare24->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09","ArtDecoPrototypes.wrl#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09"}, 4);
group->addChildren(*ExternProtoDeclare24);

CExternProtoDeclare* ExternProtoDeclare25 = new CExternProtoDeclare();
ExternProtoDeclare25->setName("ArtDeco10");
ExternProtoDeclare25->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare25->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare25->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco10","ArtDecoPrototypes.wrl#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco10"}, 4);
group->addChildren(*ExternProtoDeclare25);

CExternProtoDeclare* ExternProtoDeclare26 = new CExternProtoDeclare();
ExternProtoDeclare26->setName("ArtDeco11");
ExternProtoDeclare26->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare26->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare26->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco11","ArtDecoPrototypes.wrl#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco11"}, 4);
group->addChildren(*ExternProtoDeclare26);

CExternProtoDeclare* ExternProtoDeclare27 = new CExternProtoDeclare();
ExternProtoDeclare27->setName("ArtDeco12");
ExternProtoDeclare27->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare27->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare27->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco12","ArtDecoPrototypes.wrl#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco12"}, 4);
group->addChildren(*ExternProtoDeclare27);

CExternProtoDeclare* ExternProtoDeclare28 = new CExternProtoDeclare();
ExternProtoDeclare28->setName("ArtDeco13");
ExternProtoDeclare28->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare28->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare28->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13","ArtDecoPrototypes.wrl#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13"}, 4);
group->addChildren(*ExternProtoDeclare28);

CExternProtoDeclare* ExternProtoDeclare29 = new CExternProtoDeclare();
ExternProtoDeclare29->setName("ArtDeco14");
ExternProtoDeclare29->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare29->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare29->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco14","ArtDecoPrototypes.wrl#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco14"}, 4);
group->addChildren(*ExternProtoDeclare29);

CExternProtoDeclare* ExternProtoDeclare30 = new CExternProtoDeclare();
ExternProtoDeclare30->setName("ArtDeco15");
ExternProtoDeclare30->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare30->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare30->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco15","ArtDecoPrototypes.wrl#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco15"}, 4);
group->addChildren(*ExternProtoDeclare30);

CExternProtoDeclare* ExternProtoDeclare31 = new CExternProtoDeclare();
ExternProtoDeclare31->setName("ArtDeco16");
ExternProtoDeclare31->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare31->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare31->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco16","ArtDecoPrototypes.wrl#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco16"}, 4);
group->addChildren(*ExternProtoDeclare31);

CExternProtoDeclare* ExternProtoDeclare32 = new CExternProtoDeclare();
ExternProtoDeclare32->setName("ArtDeco17");
ExternProtoDeclare32->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare32->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare32->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco17","ArtDecoPrototypes.wrl#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco17"}, 4);
group->addChildren(*ExternProtoDeclare32);

CExternProtoDeclare* ExternProtoDeclare33 = new CExternProtoDeclare();
ExternProtoDeclare33->setName("ArtDeco18");
ExternProtoDeclare33->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare33->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare33->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18","ArtDecoPrototypes.wrl#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18"}, 4);
group->addChildren(*ExternProtoDeclare33);

CExternProtoDeclare* ExternProtoDeclare34 = new CExternProtoDeclare();
ExternProtoDeclare34->setName("ArtDeco19");
ExternProtoDeclare34->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare34->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare34->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco19","ArtDecoPrototypes.wrl#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco19"}, 4);
group->addChildren(*ExternProtoDeclare34);

CExternProtoDeclare* ExternProtoDeclare35 = new CExternProtoDeclare();
ExternProtoDeclare35->setName("ArtDeco20");
ExternProtoDeclare35->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare35->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare35->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco20","ArtDecoPrototypes.wrl#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco20"}, 4);
group->addChildren(*ExternProtoDeclare35);

CExternProtoDeclare* ExternProtoDeclare36 = new CExternProtoDeclare();
ExternProtoDeclare36->setName("ArtDeco21");
ExternProtoDeclare36->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare36->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare36->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21","ArtDecoPrototypes.wrl#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21"}, 4);
group->addChildren(*ExternProtoDeclare36);

CExternProtoDeclare* ExternProtoDeclare37 = new CExternProtoDeclare();
ExternProtoDeclare37->setName("ArtDeco22");
ExternProtoDeclare37->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare37->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare37->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco22","ArtDecoPrototypes.wrl#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco22"}, 4);
group->addChildren(*ExternProtoDeclare37);

CExternProtoDeclare* ExternProtoDeclare38 = new CExternProtoDeclare();
ExternProtoDeclare38->setName("ArtDeco23");
ExternProtoDeclare38->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare38->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare38->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco23","ArtDecoPrototypes.wrl#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco23"}, 4);
group->addChildren(*ExternProtoDeclare38);

CExternProtoDeclare* ExternProtoDeclare39 = new CExternProtoDeclare();
ExternProtoDeclare39->setName("ArtDeco24");
ExternProtoDeclare39->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare39->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare39->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24","ArtDecoPrototypes.wrl#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24"}, 4);
group->addChildren(*ExternProtoDeclare39);

CExternProtoDeclare* ExternProtoDeclare40 = new CExternProtoDeclare();
ExternProtoDeclare40->setName("ArtDeco25");
ExternProtoDeclare40->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare40->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare40->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25","ArtDecoPrototypes.wrl#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25"}, 4);
group->addChildren(*ExternProtoDeclare40);

CExternProtoDeclare* ExternProtoDeclare41 = new CExternProtoDeclare();
ExternProtoDeclare41->setName("ArtDeco26");
ExternProtoDeclare41->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare41->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare41->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco26","ArtDecoPrototypes.wrl#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco26"}, 4);
group->addChildren(*ExternProtoDeclare41);

CExternProtoDeclare* ExternProtoDeclare42 = new CExternProtoDeclare();
ExternProtoDeclare42->setName("ArtDeco27");
ExternProtoDeclare42->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare42->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare42->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco27","ArtDecoPrototypes.wrl#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco27"}, 4);
group->addChildren(*ExternProtoDeclare42);

CExternProtoDeclare* ExternProtoDeclare43 = new CExternProtoDeclare();
ExternProtoDeclare43->setName("ArtDeco28");
ExternProtoDeclare43->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare43->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare43->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco28","ArtDecoPrototypes.wrl#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco28"}, 4);
group->addChildren(*ExternProtoDeclare43);

CExternProtoDeclare* ExternProtoDeclare44 = new CExternProtoDeclare();
ExternProtoDeclare44->setName("ArtDeco29");
ExternProtoDeclare44->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare44->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare44->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco29","ArtDecoPrototypes.wrl#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco29"}, 4);
group->addChildren(*ExternProtoDeclare44);

CExternProtoDeclare* ExternProtoDeclare45 = new CExternProtoDeclare();
ExternProtoDeclare45->setName("ArtDeco30");
ExternProtoDeclare45->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare45->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare45->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco30","ArtDecoPrototypes.wrl#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco30"}, 4);
group->addChildren(*ExternProtoDeclare45);

CExternProtoDeclare* ExternProtoDeclare46 = new CExternProtoDeclare();
ExternProtoDeclare46->setName("ArtDeco31");
ExternProtoDeclare46->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare46->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare46->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco31","ArtDecoPrototypes.wrl#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco31"}, 4);
group->addChildren(*ExternProtoDeclare46);

CExternProtoDeclare* ExternProtoDeclare47 = new CExternProtoDeclare();
ExternProtoDeclare47->setName("ArtDeco32");
ExternProtoDeclare47->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare47->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare47->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco32","ArtDecoPrototypes.wrl#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco32"}, 4);
group->addChildren(*ExternProtoDeclare47);

CExternProtoDeclare* ExternProtoDeclare48 = new CExternProtoDeclare();
ExternProtoDeclare48->setName("ArtDeco33");
ExternProtoDeclare48->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare48->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare48->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco33","ArtDecoPrototypes.wrl#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco33"}, 4);
group->addChildren(*ExternProtoDeclare48);

CExternProtoDeclare* ExternProtoDeclare49 = new CExternProtoDeclare();
ExternProtoDeclare49->setName("ArtDeco34");
ExternProtoDeclare49->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare49->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare49->setUrl(new CString[4]{"ArtDecoPrototypes.x3d#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco34","ArtDecoPrototypes.wrl#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco34"}, 4);
group->addChildren(*ExternProtoDeclare49);

CGroup* Group50 = (CGroup *)(m_pScene.createNode("Group"));
CNavigationInfo* NavigationInfo51 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo51->setHeadlight(False);
Group50->addChildren(*NavigationInfo51);

CViewpoint* Viewpoint52 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint52->setDEF("Front");
Viewpoint52->setDescription("Front view");
Viewpoint52->setPosition(new float[3]{0,0,12});
Group50->addChildren(*Viewpoint52);

CViewpoint* Viewpoint53 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint53->setDEF("PersRight");
Viewpoint53->setDescription("Low Right");
Viewpoint53->setOrientation(new float[4]{0.74291,0.30772,0.59447,1.2171});
Viewpoint53->setPosition(new float[3]{6.9282,-6.9282,6.9282});
Group50->addChildren(*Viewpoint53);

CViewpoint* Viewpoint54 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint54->setDEF("PersLeft");
Viewpoint54->setDescription("Low Left");
Viewpoint54->setOrientation(new float[4]{0.74291,-0.30772,-0.59447,1.2171});
Viewpoint54->setPosition(new float[3]{-6.9282,-6.9282,6.9282});
Group50->addChildren(*Viewpoint54);

CViewpoint* Viewpoint55 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint55->setDEF("Back");
Viewpoint55->setDescription("Back view");
Viewpoint55->setOrientation(new float[4]{0,1,0,3.1416});
Viewpoint55->setPosition(new float[3]{0,0,-12});
Group50->addChildren(*Viewpoint55);

CTransform* Transform56 = (CTransform *)(m_pScene.createNode("Transform"));
Transform56->setDEF("Close_travel");
CPositionInterpolator* PositionInterpolator57 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator57->setDEF("Close_Mover");
PositionInterpolator57->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
PositionInterpolator57->setKeyValue(new float[15]{0,2.5,0,0,0,0,0,-2.5,0,0,0,0,0,2.5,0});
Transform56->addChildren(*PositionInterpolator57);

CTimeSensor* TimeSensor58 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor58->setDEF("Close_Time");
TimeSensor58->setCycleInterval(12);
TimeSensor58->setLoop(True);
Transform56->addChildren(*TimeSensor58);

CViewpoint* Viewpoint59 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint59->setDEF("Close");
Viewpoint59->setDescription("Close Front");
Viewpoint59->setPosition(new float[3]{0,0,6});
Transform56->addChildren(*Viewpoint59);

Group50->addChildren(*Transform56);

CDirectionalLight* DirectionalLight60 = (CDirectionalLight *)(m_pScene.createNode("DirectionalLight"));
DirectionalLight60->setDirection(new float[3]{1,-1,-1});
Group50->addChildren(*DirectionalLight60);

CDirectionalLight* DirectionalLight61 = (CDirectionalLight *)(m_pScene.createNode("DirectionalLight"));
DirectionalLight61->setDirection(new float[3]{0,1,-0.5});
DirectionalLight61->setIntensity(0.5);
Group50->addChildren(*DirectionalLight61);

CAnchor* Anchor62 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor62->setDescription("Back to front view");
Anchor62->setUrl(new CString[1]{"#Front"}, 1);
CTransform* Transform63 = (CTransform *)(m_pScene.createNode("Transform"));
Transform63->setTranslation(new float[3]{0,0,-0.5});
CInline* Inline64 = (CInline *)(m_pScene.createNode("Inline"));
Inline64->setUrl(new CString[5]{"../data/gridBack.json","../data/gridBack.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"}, 5);
Transform63->addChildren(*Inline64);

Anchor62->addChildren(*Transform63);

Group50->addChildren(*Anchor62);

CViewpoint* Viewpoint65 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint65->setDEF("View00");
Viewpoint65->setDescription("ArtDeco00");
Viewpoint65->setPosition(new float[3]{-3.75,3.75,3});
Group50->addChildren(*Viewpoint65);

CTransform* Transform66 = (CTransform *)(m_pScene.createNode("Transform"));
Transform66->setTranslation(new float[3]{-3.75,3.75,0});
CAnchor* Anchor67 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor67->setDescription("ArtDeco00 view");
Anchor67->setUrl(new CString[1]{"#View00"}, 1);
CShape* Shape68 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance69 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance70 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance70->setName("ArtDeco00");
Appearance69->setMaterial(*ProtoInstance70);

Shape68->setAppearance(*Appearance69);

CSphere* Sphere71 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere71->setDEF("Ball");
Sphere71->setRadius(0.5);
Shape68->setGeometry(Sphere71);

Anchor67->addChildren(*Shape68);

Transform66->addChildren(*Anchor67);

CTransform* Transform72 = (CTransform *)(m_pScene.createNode("Transform"));
Transform72->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor73 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor73->setDescription("ArtDeco00");
Anchor73->setParameter(new CString[1]{"target=_source"}, 1);
Anchor73->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00"}, 2);
CShape* Shape74 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance75 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material76 = (CMaterial *)(m_pScene.createNode("Material"));
Material76->setDEF("TextMat");
Material76->setDiffuseColor(new float[3]{1,1,1});
Appearance75->setMaterial(*Material76);

Shape74->setAppearance(*Appearance75);

CText* Text77 = (CText *)(m_pScene.createNode("Text"));
Text77->setString(new CString[1]{"ArtDeco00"}, 1);
CFontStyle* FontStyle78 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle78->setDEF("Style");
FontStyle78->setFamily(new CString[1]{"SANS"}, 1);
FontStyle78->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle78->setSize(0.3);
FontStyle78->setStyle("BOLD");
Text77->setFontStyle(*FontStyle78);

Shape74->setGeometry(Text77);

Anchor73->addChildren(*Shape74);

Transform72->addChildren(*Anchor73);

Transform66->addChildren(*Transform72);

Group50->addChildren(*Transform66);

CViewpoint* Viewpoint79 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint79->setDEF("View01");
Viewpoint79->setDescription("ArtDeco01");
Viewpoint79->setPosition(new float[3]{-2.25,3.75,3});
Group50->addChildren(*Viewpoint79);

CTransform* Transform80 = (CTransform *)(m_pScene.createNode("Transform"));
Transform80->setTranslation(new float[3]{-2.25,3.75,0});
CAnchor* Anchor81 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor81->setDescription("ArtDeco01 view");
Anchor81->setUrl(new CString[1]{"#View01"}, 1);
CShape* Shape82 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance83 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance84 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance84->setName("ArtDeco01");
Appearance83->setMaterial(*ProtoInstance84);

Shape82->setAppearance(*Appearance83);

CSphere* Sphere85 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere85->setUSE("Ball");
Shape82->setGeometry(Sphere85);

Anchor81->addChildren(*Shape82);

Transform80->addChildren(*Anchor81);

CTransform* Transform86 = (CTransform *)(m_pScene.createNode("Transform"));
Transform86->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor87 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor87->setDescription("ArtDeco01");
Anchor87->setParameter(new CString[1]{"target=_source"}, 1);
Anchor87->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01"}, 2);
CShape* Shape88 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance89 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material90 = (CMaterial *)(m_pScene.createNode("Material"));
Material90->setUSE("TextMat");
Appearance89->setMaterial(*Material90);

Shape88->setAppearance(*Appearance89);

CText* Text91 = (CText *)(m_pScene.createNode("Text"));
Text91->setString(new CString[1]{"ArtDeco01"}, 1);
CFontStyle* FontStyle92 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle92->setUSE("Style");
Text91->setFontStyle(*FontStyle92);

Shape88->setGeometry(Text91);

Anchor87->addChildren(*Shape88);

Transform86->addChildren(*Anchor87);

Transform80->addChildren(*Transform86);

Group50->addChildren(*Transform80);

CViewpoint* Viewpoint93 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint93->setDEF("View02");
Viewpoint93->setDescription("ArtDeco02");
Viewpoint93->setPosition(new float[3]{-0.75,3.75,3});
Group50->addChildren(*Viewpoint93);

CTransform* Transform94 = (CTransform *)(m_pScene.createNode("Transform"));
Transform94->setTranslation(new float[3]{-0.75,3.75,0});
CAnchor* Anchor95 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor95->setDescription("ArtDeco02 view");
Anchor95->setUrl(new CString[1]{"#View02"}, 1);
CShape* Shape96 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance97 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance98 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance98->setName("ArtDeco02");
Appearance97->setMaterial(*ProtoInstance98);

Shape96->setAppearance(*Appearance97);

CSphere* Sphere99 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere99->setUSE("Ball");
Shape96->setGeometry(Sphere99);

Anchor95->addChildren(*Shape96);

Transform94->addChildren(*Anchor95);

CTransform* Transform100 = (CTransform *)(m_pScene.createNode("Transform"));
Transform100->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor101 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor101->setDescription("ArtDeco02");
Anchor101->setParameter(new CString[1]{"target=_source"}, 1);
Anchor101->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02"}, 2);
CShape* Shape102 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance103 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material104 = (CMaterial *)(m_pScene.createNode("Material"));
Material104->setUSE("TextMat");
Appearance103->setMaterial(*Material104);

Shape102->setAppearance(*Appearance103);

CText* Text105 = (CText *)(m_pScene.createNode("Text"));
Text105->setString(new CString[1]{"ArtDeco02"}, 1);
CFontStyle* FontStyle106 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle106->setUSE("Style");
Text105->setFontStyle(*FontStyle106);

Shape102->setGeometry(Text105);

Anchor101->addChildren(*Shape102);

Transform100->addChildren(*Anchor101);

Transform94->addChildren(*Transform100);

Group50->addChildren(*Transform94);

CViewpoint* Viewpoint107 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint107->setDEF("View03");
Viewpoint107->setDescription("ArtDeco03");
Viewpoint107->setPosition(new float[3]{0.75,3.75,3});
Group50->addChildren(*Viewpoint107);

CTransform* Transform108 = (CTransform *)(m_pScene.createNode("Transform"));
Transform108->setTranslation(new float[3]{0.75,3.75,0});
CAnchor* Anchor109 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor109->setDescription("ArtDeco03 view");
Anchor109->setUrl(new CString[1]{"#View03"}, 1);
CShape* Shape110 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance111 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance112 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance112->setName("ArtDeco03");
Appearance111->setMaterial(*ProtoInstance112);

Shape110->setAppearance(*Appearance111);

CSphere* Sphere113 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere113->setUSE("Ball");
Shape110->setGeometry(Sphere113);

Anchor109->addChildren(*Shape110);

Transform108->addChildren(*Anchor109);

CTransform* Transform114 = (CTransform *)(m_pScene.createNode("Transform"));
Transform114->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor115 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor115->setDescription("ArtDeco03");
Anchor115->setParameter(new CString[1]{"target=_source"}, 1);
Anchor115->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03"}, 2);
CShape* Shape116 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance117 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material118 = (CMaterial *)(m_pScene.createNode("Material"));
Material118->setUSE("TextMat");
Appearance117->setMaterial(*Material118);

Shape116->setAppearance(*Appearance117);

CText* Text119 = (CText *)(m_pScene.createNode("Text"));
Text119->setString(new CString[1]{"ArtDeco03"}, 1);
CFontStyle* FontStyle120 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle120->setUSE("Style");
Text119->setFontStyle(*FontStyle120);

Shape116->setGeometry(Text119);

Anchor115->addChildren(*Shape116);

Transform114->addChildren(*Anchor115);

Transform108->addChildren(*Transform114);

Group50->addChildren(*Transform108);

CViewpoint* Viewpoint121 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint121->setDEF("View04");
Viewpoint121->setDescription("ArtDeco04");
Viewpoint121->setPosition(new float[3]{2.25,3.75,3});
Group50->addChildren(*Viewpoint121);

CTransform* Transform122 = (CTransform *)(m_pScene.createNode("Transform"));
Transform122->setTranslation(new float[3]{2.25,3.75,0});
CAnchor* Anchor123 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor123->setDescription("ArtDeco04 view");
Anchor123->setUrl(new CString[1]{"#View04"}, 1);
CShape* Shape124 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance125 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance126 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance126->setName("ArtDeco04");
Appearance125->setMaterial(*ProtoInstance126);

Shape124->setAppearance(*Appearance125);

CSphere* Sphere127 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere127->setUSE("Ball");
Shape124->setGeometry(Sphere127);

Anchor123->addChildren(*Shape124);

Transform122->addChildren(*Anchor123);

CTransform* Transform128 = (CTransform *)(m_pScene.createNode("Transform"));
Transform128->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor129 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor129->setDescription("ArtDeco04");
Anchor129->setParameter(new CString[1]{"target=_source"}, 1);
Anchor129->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04"}, 2);
CShape* Shape130 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance131 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material132 = (CMaterial *)(m_pScene.createNode("Material"));
Material132->setUSE("TextMat");
Appearance131->setMaterial(*Material132);

Shape130->setAppearance(*Appearance131);

CText* Text133 = (CText *)(m_pScene.createNode("Text"));
Text133->setString(new CString[1]{"ArtDeco04"}, 1);
CFontStyle* FontStyle134 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle134->setUSE("Style");
Text133->setFontStyle(*FontStyle134);

Shape130->setGeometry(Text133);

Anchor129->addChildren(*Shape130);

Transform128->addChildren(*Anchor129);

Transform122->addChildren(*Transform128);

Group50->addChildren(*Transform122);

CViewpoint* Viewpoint135 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint135->setDEF("View05");
Viewpoint135->setDescription("ArtDeco05");
Viewpoint135->setPosition(new float[3]{3.75,3.75,3});
Group50->addChildren(*Viewpoint135);

CTransform* Transform136 = (CTransform *)(m_pScene.createNode("Transform"));
Transform136->setTranslation(new float[3]{3.75,3.75,0});
CAnchor* Anchor137 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor137->setDescription("ArtDeco05 view");
Anchor137->setUrl(new CString[1]{"#View05"}, 1);
CShape* Shape138 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance139 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance140 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance140->setName("ArtDeco05");
Appearance139->setMaterial(*ProtoInstance140);

Shape138->setAppearance(*Appearance139);

CSphere* Sphere141 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere141->setUSE("Ball");
Shape138->setGeometry(Sphere141);

Anchor137->addChildren(*Shape138);

Transform136->addChildren(*Anchor137);

CTransform* Transform142 = (CTransform *)(m_pScene.createNode("Transform"));
Transform142->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor143 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor143->setDescription("ArtDeco05");
Anchor143->setParameter(new CString[1]{"target=_source"}, 1);
Anchor143->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05"}, 2);
CShape* Shape144 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance145 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material146 = (CMaterial *)(m_pScene.createNode("Material"));
Material146->setUSE("TextMat");
Appearance145->setMaterial(*Material146);

Shape144->setAppearance(*Appearance145);

CText* Text147 = (CText *)(m_pScene.createNode("Text"));
Text147->setString(new CString[1]{"ArtDeco05"}, 1);
CFontStyle* FontStyle148 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle148->setUSE("Style");
Text147->setFontStyle(*FontStyle148);

Shape144->setGeometry(Text147);

Anchor143->addChildren(*Shape144);

Transform142->addChildren(*Anchor143);

Transform136->addChildren(*Transform142);

Group50->addChildren(*Transform136);

CViewpoint* Viewpoint149 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint149->setDEF("View06");
Viewpoint149->setDescription("ArtDeco06");
Viewpoint149->setPosition(new float[3]{-3.75,2.25,3});
Group50->addChildren(*Viewpoint149);

CTransform* Transform150 = (CTransform *)(m_pScene.createNode("Transform"));
Transform150->setTranslation(new float[3]{-3.75,2.25,0});
CAnchor* Anchor151 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor151->setDescription("ArtDeco06 view");
Anchor151->setUrl(new CString[1]{"#View06"}, 1);
CShape* Shape152 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance153 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance154 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance154->setName("ArtDeco06");
Appearance153->setMaterial(*ProtoInstance154);

Shape152->setAppearance(*Appearance153);

CSphere* Sphere155 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere155->setUSE("Ball");
Shape152->setGeometry(Sphere155);

Anchor151->addChildren(*Shape152);

Transform150->addChildren(*Anchor151);

CTransform* Transform156 = (CTransform *)(m_pScene.createNode("Transform"));
Transform156->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor157 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor157->setDescription("ArtDeco06");
Anchor157->setParameter(new CString[1]{"target=_source"}, 1);
Anchor157->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06"}, 2);
CShape* Shape158 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance159 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material160 = (CMaterial *)(m_pScene.createNode("Material"));
Material160->setUSE("TextMat");
Appearance159->setMaterial(*Material160);

Shape158->setAppearance(*Appearance159);

CText* Text161 = (CText *)(m_pScene.createNode("Text"));
Text161->setString(new CString[1]{"ArtDeco06"}, 1);
CFontStyle* FontStyle162 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle162->setUSE("Style");
Text161->setFontStyle(*FontStyle162);

Shape158->setGeometry(Text161);

Anchor157->addChildren(*Shape158);

Transform156->addChildren(*Anchor157);

Transform150->addChildren(*Transform156);

Group50->addChildren(*Transform150);

CViewpoint* Viewpoint163 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint163->setDEF("View07");
Viewpoint163->setDescription("ArtDeco07");
Viewpoint163->setPosition(new float[3]{-2.25,2.25,3});
Group50->addChildren(*Viewpoint163);

CTransform* Transform164 = (CTransform *)(m_pScene.createNode("Transform"));
Transform164->setTranslation(new float[3]{-2.25,2.25,0});
CAnchor* Anchor165 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor165->setDescription("ArtDeco07 view");
Anchor165->setUrl(new CString[1]{"#View07"}, 1);
CShape* Shape166 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance167 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance168 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance168->setName("ArtDeco07");
Appearance167->setMaterial(*ProtoInstance168);

Shape166->setAppearance(*Appearance167);

CSphere* Sphere169 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere169->setUSE("Ball");
Shape166->setGeometry(Sphere169);

Anchor165->addChildren(*Shape166);

Transform164->addChildren(*Anchor165);

CTransform* Transform170 = (CTransform *)(m_pScene.createNode("Transform"));
Transform170->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor171 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor171->setDescription("ArtDeco07");
Anchor171->setParameter(new CString[1]{"target=_source"}, 1);
Anchor171->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07"}, 2);
CShape* Shape172 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance173 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material174 = (CMaterial *)(m_pScene.createNode("Material"));
Material174->setUSE("TextMat");
Appearance173->setMaterial(*Material174);

Shape172->setAppearance(*Appearance173);

CText* Text175 = (CText *)(m_pScene.createNode("Text"));
Text175->setString(new CString[1]{"ArtDeco07"}, 1);
CFontStyle* FontStyle176 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle176->setUSE("Style");
Text175->setFontStyle(*FontStyle176);

Shape172->setGeometry(Text175);

Anchor171->addChildren(*Shape172);

Transform170->addChildren(*Anchor171);

Transform164->addChildren(*Transform170);

Group50->addChildren(*Transform164);

CViewpoint* Viewpoint177 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint177->setDEF("View08");
Viewpoint177->setDescription("ArtDeco08");
Viewpoint177->setPosition(new float[3]{-0.75,2.25,3});
Group50->addChildren(*Viewpoint177);

CTransform* Transform178 = (CTransform *)(m_pScene.createNode("Transform"));
Transform178->setTranslation(new float[3]{-0.75,2.25,0});
CAnchor* Anchor179 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor179->setDescription("ArtDeco08 view");
Anchor179->setUrl(new CString[1]{"#View08"}, 1);
CShape* Shape180 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance181 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance182 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance182->setName("ArtDeco08");
Appearance181->setMaterial(*ProtoInstance182);

Shape180->setAppearance(*Appearance181);

CSphere* Sphere183 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere183->setUSE("Ball");
Shape180->setGeometry(Sphere183);

Anchor179->addChildren(*Shape180);

Transform178->addChildren(*Anchor179);

CTransform* Transform184 = (CTransform *)(m_pScene.createNode("Transform"));
Transform184->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor185 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor185->setDescription("ArtDeco08");
Anchor185->setParameter(new CString[1]{"target=_source"}, 1);
Anchor185->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08"}, 2);
CShape* Shape186 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance187 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material188 = (CMaterial *)(m_pScene.createNode("Material"));
Material188->setUSE("TextMat");
Appearance187->setMaterial(*Material188);

Shape186->setAppearance(*Appearance187);

CText* Text189 = (CText *)(m_pScene.createNode("Text"));
Text189->setString(new CString[1]{"ArtDeco08"}, 1);
CFontStyle* FontStyle190 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle190->setUSE("Style");
Text189->setFontStyle(*FontStyle190);

Shape186->setGeometry(Text189);

Anchor185->addChildren(*Shape186);

Transform184->addChildren(*Anchor185);

Transform178->addChildren(*Transform184);

Group50->addChildren(*Transform178);

CViewpoint* Viewpoint191 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint191->setDEF("View09");
Viewpoint191->setDescription("ArtDeco09");
Viewpoint191->setPosition(new float[3]{0.75,2.25,3});
Group50->addChildren(*Viewpoint191);

CTransform* Transform192 = (CTransform *)(m_pScene.createNode("Transform"));
Transform192->setTranslation(new float[3]{0.75,2.25,0});
CAnchor* Anchor193 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor193->setDescription("ArtDeco09 view");
Anchor193->setUrl(new CString[1]{"#View09"}, 1);
CShape* Shape194 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance195 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance196 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance196->setName("ArtDeco09");
Appearance195->setMaterial(*ProtoInstance196);

Shape194->setAppearance(*Appearance195);

CSphere* Sphere197 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere197->setUSE("Ball");
Shape194->setGeometry(Sphere197);

Anchor193->addChildren(*Shape194);

Transform192->addChildren(*Anchor193);

CTransform* Transform198 = (CTransform *)(m_pScene.createNode("Transform"));
Transform198->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor199 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor199->setDescription("ArtDeco09");
Anchor199->setParameter(new CString[1]{"target=_source"}, 1);
Anchor199->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09"}, 2);
CShape* Shape200 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance201 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material202 = (CMaterial *)(m_pScene.createNode("Material"));
Material202->setUSE("TextMat");
Appearance201->setMaterial(*Material202);

Shape200->setAppearance(*Appearance201);

CText* Text203 = (CText *)(m_pScene.createNode("Text"));
Text203->setString(new CString[1]{"ArtDeco09"}, 1);
CFontStyle* FontStyle204 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle204->setUSE("Style");
Text203->setFontStyle(*FontStyle204);

Shape200->setGeometry(Text203);

Anchor199->addChildren(*Shape200);

Transform198->addChildren(*Anchor199);

Transform192->addChildren(*Transform198);

Group50->addChildren(*Transform192);

CViewpoint* Viewpoint205 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint205->setDEF("View10");
Viewpoint205->setDescription("ArtDeco10");
Viewpoint205->setPosition(new float[3]{2.25,2.25,3});
Group50->addChildren(*Viewpoint205);

CTransform* Transform206 = (CTransform *)(m_pScene.createNode("Transform"));
Transform206->setTranslation(new float[3]{2.25,2.25,0});
CAnchor* Anchor207 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor207->setDescription("ArtDeco10 view");
Anchor207->setUrl(new CString[1]{"#View10"}, 1);
CShape* Shape208 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance209 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance210 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance210->setName("ArtDeco10");
Appearance209->setMaterial(*ProtoInstance210);

Shape208->setAppearance(*Appearance209);

CSphere* Sphere211 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere211->setUSE("Ball");
Shape208->setGeometry(Sphere211);

Anchor207->addChildren(*Shape208);

Transform206->addChildren(*Anchor207);

CTransform* Transform212 = (CTransform *)(m_pScene.createNode("Transform"));
Transform212->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor213 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor213->setDescription("ArtDeco10");
Anchor213->setParameter(new CString[1]{"target=_source"}, 1);
Anchor213->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10"}, 2);
CShape* Shape214 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance215 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material216 = (CMaterial *)(m_pScene.createNode("Material"));
Material216->setUSE("TextMat");
Appearance215->setMaterial(*Material216);

Shape214->setAppearance(*Appearance215);

CText* Text217 = (CText *)(m_pScene.createNode("Text"));
Text217->setString(new CString[1]{"ArtDeco10"}, 1);
CFontStyle* FontStyle218 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle218->setUSE("Style");
Text217->setFontStyle(*FontStyle218);

Shape214->setGeometry(Text217);

Anchor213->addChildren(*Shape214);

Transform212->addChildren(*Anchor213);

Transform206->addChildren(*Transform212);

Group50->addChildren(*Transform206);

CViewpoint* Viewpoint219 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint219->setDEF("View11");
Viewpoint219->setDescription("ArtDeco11");
Viewpoint219->setPosition(new float[3]{3.75,2.25,3});
Group50->addChildren(*Viewpoint219);

CTransform* Transform220 = (CTransform *)(m_pScene.createNode("Transform"));
Transform220->setTranslation(new float[3]{3.75,2.25,0});
CAnchor* Anchor221 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor221->setDescription("ArtDeco11 view");
Anchor221->setUrl(new CString[1]{"#View11"}, 1);
CShape* Shape222 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance223 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance224 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance224->setName("ArtDeco11");
Appearance223->setMaterial(*ProtoInstance224);

Shape222->setAppearance(*Appearance223);

CSphere* Sphere225 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere225->setUSE("Ball");
Shape222->setGeometry(Sphere225);

Anchor221->addChildren(*Shape222);

Transform220->addChildren(*Anchor221);

CTransform* Transform226 = (CTransform *)(m_pScene.createNode("Transform"));
Transform226->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor227 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor227->setDescription("ArtDeco11");
Anchor227->setParameter(new CString[1]{"target=_source"}, 1);
Anchor227->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11"}, 2);
CShape* Shape228 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance229 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material230 = (CMaterial *)(m_pScene.createNode("Material"));
Material230->setUSE("TextMat");
Appearance229->setMaterial(*Material230);

Shape228->setAppearance(*Appearance229);

CText* Text231 = (CText *)(m_pScene.createNode("Text"));
Text231->setString(new CString[1]{"ArtDeco11"}, 1);
CFontStyle* FontStyle232 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle232->setUSE("Style");
Text231->setFontStyle(*FontStyle232);

Shape228->setGeometry(Text231);

Anchor227->addChildren(*Shape228);

Transform226->addChildren(*Anchor227);

Transform220->addChildren(*Transform226);

Group50->addChildren(*Transform220);

CViewpoint* Viewpoint233 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint233->setDEF("View12");
Viewpoint233->setDescription("ArtDeco12");
Viewpoint233->setPosition(new float[3]{-3.75,0.75,3});
Group50->addChildren(*Viewpoint233);

CTransform* Transform234 = (CTransform *)(m_pScene.createNode("Transform"));
Transform234->setTranslation(new float[3]{-3.75,0.75,0});
CAnchor* Anchor235 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor235->setDescription("ArtDeco12 view");
Anchor235->setUrl(new CString[1]{"#View12"}, 1);
CShape* Shape236 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance237 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance238 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance238->setName("ArtDeco12");
Appearance237->setMaterial(*ProtoInstance238);

Shape236->setAppearance(*Appearance237);

CSphere* Sphere239 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere239->setUSE("Ball");
Shape236->setGeometry(Sphere239);

Anchor235->addChildren(*Shape236);

Transform234->addChildren(*Anchor235);

CTransform* Transform240 = (CTransform *)(m_pScene.createNode("Transform"));
Transform240->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor241 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor241->setDescription("ArtDeco12");
Anchor241->setParameter(new CString[1]{"target=_source"}, 1);
Anchor241->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12"}, 2);
CShape* Shape242 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance243 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material244 = (CMaterial *)(m_pScene.createNode("Material"));
Material244->setUSE("TextMat");
Appearance243->setMaterial(*Material244);

Shape242->setAppearance(*Appearance243);

CText* Text245 = (CText *)(m_pScene.createNode("Text"));
Text245->setString(new CString[1]{"ArtDeco12"}, 1);
CFontStyle* FontStyle246 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle246->setUSE("Style");
Text245->setFontStyle(*FontStyle246);

Shape242->setGeometry(Text245);

Anchor241->addChildren(*Shape242);

Transform240->addChildren(*Anchor241);

Transform234->addChildren(*Transform240);

Group50->addChildren(*Transform234);

CViewpoint* Viewpoint247 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint247->setDEF("View13");
Viewpoint247->setDescription("ArtDeco13");
Viewpoint247->setPosition(new float[3]{-2.25,0.75,3});
Group50->addChildren(*Viewpoint247);

CTransform* Transform248 = (CTransform *)(m_pScene.createNode("Transform"));
Transform248->setTranslation(new float[3]{-2.25,0.75,0});
CAnchor* Anchor249 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor249->setDescription("ArtDeco13 view");
Anchor249->setUrl(new CString[1]{"#View13"}, 1);
CShape* Shape250 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance251 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance252 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance252->setName("ArtDeco13");
Appearance251->setMaterial(*ProtoInstance252);

Shape250->setAppearance(*Appearance251);

CSphere* Sphere253 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere253->setUSE("Ball");
Shape250->setGeometry(Sphere253);

Anchor249->addChildren(*Shape250);

Transform248->addChildren(*Anchor249);

CTransform* Transform254 = (CTransform *)(m_pScene.createNode("Transform"));
Transform254->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor255 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor255->setDescription("ArtDeco13");
Anchor255->setParameter(new CString[1]{"target=_source"}, 1);
Anchor255->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco3","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco13"}, 2);
CShape* Shape256 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance257 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material258 = (CMaterial *)(m_pScene.createNode("Material"));
Material258->setUSE("TextMat");
Appearance257->setMaterial(*Material258);

Shape256->setAppearance(*Appearance257);

CText* Text259 = (CText *)(m_pScene.createNode("Text"));
Text259->setString(new CString[1]{"ArtDeco13"}, 1);
CFontStyle* FontStyle260 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle260->setUSE("Style");
Text259->setFontStyle(*FontStyle260);

Shape256->setGeometry(Text259);

Anchor255->addChildren(*Shape256);

Transform254->addChildren(*Anchor255);

Transform248->addChildren(*Transform254);

Group50->addChildren(*Transform248);

CViewpoint* Viewpoint261 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint261->setDEF("View14");
Viewpoint261->setDescription("ArtDeco14");
Viewpoint261->setPosition(new float[3]{-0.75,0.75,3});
Group50->addChildren(*Viewpoint261);

CTransform* Transform262 = (CTransform *)(m_pScene.createNode("Transform"));
Transform262->setTranslation(new float[3]{-0.75,0.75,0});
CAnchor* Anchor263 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor263->setDescription("ArtDeco14 view");
Anchor263->setUrl(new CString[1]{"#View14"}, 1);
CShape* Shape264 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance265 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance266 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance266->setName("ArtDeco14");
Appearance265->setMaterial(*ProtoInstance266);

Shape264->setAppearance(*Appearance265);

CSphere* Sphere267 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere267->setUSE("Ball");
Shape264->setGeometry(Sphere267);

Anchor263->addChildren(*Shape264);

Transform262->addChildren(*Anchor263);

CTransform* Transform268 = (CTransform *)(m_pScene.createNode("Transform"));
Transform268->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor269 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor269->setDescription("ArtDeco14");
Anchor269->setParameter(new CString[1]{"target=_source"}, 1);
Anchor269->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco4","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco14"}, 2);
CShape* Shape270 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance271 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material272 = (CMaterial *)(m_pScene.createNode("Material"));
Material272->setUSE("TextMat");
Appearance271->setMaterial(*Material272);

Shape270->setAppearance(*Appearance271);

CText* Text273 = (CText *)(m_pScene.createNode("Text"));
Text273->setString(new CString[1]{"ArtDeco14"}, 1);
CFontStyle* FontStyle274 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle274->setUSE("Style");
Text273->setFontStyle(*FontStyle274);

Shape270->setGeometry(Text273);

Anchor269->addChildren(*Shape270);

Transform268->addChildren(*Anchor269);

Transform262->addChildren(*Transform268);

Group50->addChildren(*Transform262);

CViewpoint* Viewpoint275 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint275->setDEF("View15");
Viewpoint275->setDescription("ArtDeco15");
Viewpoint275->setPosition(new float[3]{0.75,0.75,3});
Group50->addChildren(*Viewpoint275);

CTransform* Transform276 = (CTransform *)(m_pScene.createNode("Transform"));
Transform276->setTranslation(new float[3]{0.75,0.75,0});
CAnchor* Anchor277 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor277->setDescription("ArtDeco15 view");
Anchor277->setUrl(new CString[1]{"#View15"}, 1);
CShape* Shape278 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance279 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance280 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance280->setName("ArtDeco15");
Appearance279->setMaterial(*ProtoInstance280);

Shape278->setAppearance(*Appearance279);

CSphere* Sphere281 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere281->setUSE("Ball");
Shape278->setGeometry(Sphere281);

Anchor277->addChildren(*Shape278);

Transform276->addChildren(*Anchor277);

CTransform* Transform282 = (CTransform *)(m_pScene.createNode("Transform"));
Transform282->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor283 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor283->setDescription("ArtDeco15");
Anchor283->setParameter(new CString[1]{"target=_source"}, 1);
Anchor283->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco5","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco15"}, 2);
CShape* Shape284 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance285 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material286 = (CMaterial *)(m_pScene.createNode("Material"));
Material286->setUSE("TextMat");
Appearance285->setMaterial(*Material286);

Shape284->setAppearance(*Appearance285);

CText* Text287 = (CText *)(m_pScene.createNode("Text"));
Text287->setString(new CString[1]{"ArtDeco15"}, 1);
CFontStyle* FontStyle288 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle288->setUSE("Style");
Text287->setFontStyle(*FontStyle288);

Shape284->setGeometry(Text287);

Anchor283->addChildren(*Shape284);

Transform282->addChildren(*Anchor283);

Transform276->addChildren(*Transform282);

Group50->addChildren(*Transform276);

CViewpoint* Viewpoint289 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint289->setDEF("View16");
Viewpoint289->setDescription("ArtDeco16");
Viewpoint289->setPosition(new float[3]{2.25,0.75,3});
Group50->addChildren(*Viewpoint289);

CTransform* Transform290 = (CTransform *)(m_pScene.createNode("Transform"));
Transform290->setTranslation(new float[3]{2.25,0.75,0});
CAnchor* Anchor291 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor291->setDescription("ArtDeco16 view");
Anchor291->setUrl(new CString[1]{"#View16"}, 1);
CShape* Shape292 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance293 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance294 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance294->setName("ArtDeco16");
Appearance293->setMaterial(*ProtoInstance294);

Shape292->setAppearance(*Appearance293);

CSphere* Sphere295 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere295->setUSE("Ball");
Shape292->setGeometry(Sphere295);

Anchor291->addChildren(*Shape292);

Transform290->addChildren(*Anchor291);

CTransform* Transform296 = (CTransform *)(m_pScene.createNode("Transform"));
Transform296->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor297 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor297->setDescription("ArtDeco16");
Anchor297->setParameter(new CString[1]{"target=_source"}, 1);
Anchor297->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16"}, 2);
CShape* Shape298 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance299 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material300 = (CMaterial *)(m_pScene.createNode("Material"));
Material300->setUSE("TextMat");
Appearance299->setMaterial(*Material300);

Shape298->setAppearance(*Appearance299);

CText* Text301 = (CText *)(m_pScene.createNode("Text"));
Text301->setString(new CString[1]{"ArtDeco16"}, 1);
CFontStyle* FontStyle302 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle302->setUSE("Style");
Text301->setFontStyle(*FontStyle302);

Shape298->setGeometry(Text301);

Anchor297->addChildren(*Shape298);

Transform296->addChildren(*Anchor297);

Transform290->addChildren(*Transform296);

Group50->addChildren(*Transform290);

CViewpoint* Viewpoint303 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint303->setDEF("View17");
Viewpoint303->setDescription("ArtDeco17");
Viewpoint303->setPosition(new float[3]{3.75,0.75,3});
Group50->addChildren(*Viewpoint303);

CTransform* Transform304 = (CTransform *)(m_pScene.createNode("Transform"));
Transform304->setTranslation(new float[3]{3.75,0.75,0});
CAnchor* Anchor305 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor305->setDescription("ArtDeco17 view");
Anchor305->setUrl(new CString[1]{"#View17"}, 1);
CShape* Shape306 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance307 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance308 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance308->setName("ArtDeco17");
Appearance307->setMaterial(*ProtoInstance308);

Shape306->setAppearance(*Appearance307);

CSphere* Sphere309 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere309->setUSE("Ball");
Shape306->setGeometry(Sphere309);

Anchor305->addChildren(*Shape306);

Transform304->addChildren(*Anchor305);

CTransform* Transform310 = (CTransform *)(m_pScene.createNode("Transform"));
Transform310->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor311 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor311->setDescription("ArtDeco17");
Anchor311->setParameter(new CString[1]{"target=_source"}, 1);
Anchor311->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco7","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco17"}, 2);
CShape* Shape312 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance313 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material314 = (CMaterial *)(m_pScene.createNode("Material"));
Material314->setUSE("TextMat");
Appearance313->setMaterial(*Material314);

Shape312->setAppearance(*Appearance313);

CText* Text315 = (CText *)(m_pScene.createNode("Text"));
Text315->setString(new CString[1]{"ArtDeco17"}, 1);
CFontStyle* FontStyle316 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle316->setUSE("Style");
Text315->setFontStyle(*FontStyle316);

Shape312->setGeometry(Text315);

Anchor311->addChildren(*Shape312);

Transform310->addChildren(*Anchor311);

Transform304->addChildren(*Transform310);

Group50->addChildren(*Transform304);

CViewpoint* Viewpoint317 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint317->setDEF("View18");
Viewpoint317->setDescription("ArtDeco18");
Viewpoint317->setPosition(new float[3]{-3.75,-0.75,3});
Group50->addChildren(*Viewpoint317);

CTransform* Transform318 = (CTransform *)(m_pScene.createNode("Transform"));
Transform318->setTranslation(new float[3]{-3.75,-0.75,0});
CAnchor* Anchor319 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor319->setDescription("ArtDeco18 view");
Anchor319->setUrl(new CString[1]{"#View18"}, 1);
CShape* Shape320 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance321 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance322 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance322->setName("ArtDeco18");
Appearance321->setMaterial(*ProtoInstance322);

Shape320->setAppearance(*Appearance321);

CSphere* Sphere323 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere323->setUSE("Ball");
Shape320->setGeometry(Sphere323);

Anchor319->addChildren(*Shape320);

Transform318->addChildren(*Anchor319);

CTransform* Transform324 = (CTransform *)(m_pScene.createNode("Transform"));
Transform324->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor325 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor325->setDescription("ArtDeco18");
Anchor325->setParameter(new CString[1]{"target=_source"}, 1);
Anchor325->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18"}, 2);
CShape* Shape326 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance327 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material328 = (CMaterial *)(m_pScene.createNode("Material"));
Material328->setUSE("TextMat");
Appearance327->setMaterial(*Material328);

Shape326->setAppearance(*Appearance327);

CText* Text329 = (CText *)(m_pScene.createNode("Text"));
Text329->setString(new CString[1]{"ArtDeco18"}, 1);
CFontStyle* FontStyle330 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle330->setUSE("Style");
Text329->setFontStyle(*FontStyle330);

Shape326->setGeometry(Text329);

Anchor325->addChildren(*Shape326);

Transform324->addChildren(*Anchor325);

Transform318->addChildren(*Transform324);

Group50->addChildren(*Transform318);

CViewpoint* Viewpoint331 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint331->setDEF("View19");
Viewpoint331->setDescription("ArtDeco19");
Viewpoint331->setPosition(new float[3]{-2.25,-0.75,3});
Group50->addChildren(*Viewpoint331);

CTransform* Transform332 = (CTransform *)(m_pScene.createNode("Transform"));
Transform332->setTranslation(new float[3]{-2.25,-0.75,0});
CAnchor* Anchor333 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor333->setDescription("ArtDeco19 view");
Anchor333->setUrl(new CString[1]{"#View19"}, 1);
CShape* Shape334 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance335 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance336 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance336->setName("ArtDeco19");
Appearance335->setMaterial(*ProtoInstance336);

Shape334->setAppearance(*Appearance335);

CSphere* Sphere337 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere337->setUSE("Ball");
Shape334->setGeometry(Sphere337);

Anchor333->addChildren(*Shape334);

Transform332->addChildren(*Anchor333);

CTransform* Transform338 = (CTransform *)(m_pScene.createNode("Transform"));
Transform338->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor339 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor339->setDescription("ArtDeco19");
Anchor339->setParameter(new CString[1]{"target=_source"}, 1);
Anchor339->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco9","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco19"}, 2);
CShape* Shape340 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance341 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material342 = (CMaterial *)(m_pScene.createNode("Material"));
Material342->setUSE("TextMat");
Appearance341->setMaterial(*Material342);

Shape340->setAppearance(*Appearance341);

CText* Text343 = (CText *)(m_pScene.createNode("Text"));
Text343->setString(new CString[1]{"ArtDeco19"}, 1);
CFontStyle* FontStyle344 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle344->setUSE("Style");
Text343->setFontStyle(*FontStyle344);

Shape340->setGeometry(Text343);

Anchor339->addChildren(*Shape340);

Transform338->addChildren(*Anchor339);

Transform332->addChildren(*Transform338);

Group50->addChildren(*Transform332);

CViewpoint* Viewpoint345 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint345->setDEF("View20");
Viewpoint345->setDescription("ArtDeco20");
Viewpoint345->setPosition(new float[3]{-0.75,-0.75,3});
Group50->addChildren(*Viewpoint345);

CTransform* Transform346 = (CTransform *)(m_pScene.createNode("Transform"));
Transform346->setTranslation(new float[3]{-0.75,-0.75,0});
CAnchor* Anchor347 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor347->setDescription("ArtDeco20 view");
Anchor347->setUrl(new CString[1]{"#View20"}, 1);
CShape* Shape348 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance349 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance350 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance350->setName("ArtDeco20");
Appearance349->setMaterial(*ProtoInstance350);

Shape348->setAppearance(*Appearance349);

CSphere* Sphere351 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere351->setUSE("Ball");
Shape348->setGeometry(Sphere351);

Anchor347->addChildren(*Shape348);

Transform346->addChildren(*Anchor347);

CTransform* Transform352 = (CTransform *)(m_pScene.createNode("Transform"));
Transform352->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor353 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor353->setDescription("ArtDeco20");
Anchor353->setParameter(new CString[1]{"target=_source"}, 1);
Anchor353->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20"}, 2);
CShape* Shape354 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance355 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material356 = (CMaterial *)(m_pScene.createNode("Material"));
Material356->setUSE("TextMat");
Appearance355->setMaterial(*Material356);

Shape354->setAppearance(*Appearance355);

CText* Text357 = (CText *)(m_pScene.createNode("Text"));
Text357->setString(new CString[1]{"ArtDeco20"}, 1);
CFontStyle* FontStyle358 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle358->setUSE("Style");
Text357->setFontStyle(*FontStyle358);

Shape354->setGeometry(Text357);

Anchor353->addChildren(*Shape354);

Transform352->addChildren(*Anchor353);

Transform346->addChildren(*Transform352);

Group50->addChildren(*Transform346);

CViewpoint* Viewpoint359 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint359->setDEF("View21");
Viewpoint359->setDescription("ArtDeco21");
Viewpoint359->setPosition(new float[3]{0.75,-0.75,3});
Group50->addChildren(*Viewpoint359);

CTransform* Transform360 = (CTransform *)(m_pScene.createNode("Transform"));
Transform360->setTranslation(new float[3]{0.75,-0.75,0});
CAnchor* Anchor361 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor361->setDescription("ArtDeco21 view");
Anchor361->setUrl(new CString[1]{"#View21"}, 1);
CShape* Shape362 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance363 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance364 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance364->setName("ArtDeco21");
Appearance363->setMaterial(*ProtoInstance364);

Shape362->setAppearance(*Appearance363);

CSphere* Sphere365 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere365->setUSE("Ball");
Shape362->setGeometry(Sphere365);

Anchor361->addChildren(*Shape362);

Transform360->addChildren(*Anchor361);

CTransform* Transform366 = (CTransform *)(m_pScene.createNode("Transform"));
Transform366->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor367 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor367->setDescription("ArtDeco21");
Anchor367->setParameter(new CString[1]{"target=_source"}, 1);
Anchor367->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21"}, 2);
CShape* Shape368 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance369 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material370 = (CMaterial *)(m_pScene.createNode("Material"));
Material370->setUSE("TextMat");
Appearance369->setMaterial(*Material370);

Shape368->setAppearance(*Appearance369);

CText* Text371 = (CText *)(m_pScene.createNode("Text"));
Text371->setString(new CString[1]{"ArtDeco21"}, 1);
CFontStyle* FontStyle372 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle372->setUSE("Style");
Text371->setFontStyle(*FontStyle372);

Shape368->setGeometry(Text371);

Anchor367->addChildren(*Shape368);

Transform366->addChildren(*Anchor367);

Transform360->addChildren(*Transform366);

Group50->addChildren(*Transform360);

CViewpoint* Viewpoint373 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint373->setDEF("View22");
Viewpoint373->setDescription("ArtDeco22");
Viewpoint373->setPosition(new float[3]{2.25,-0.75,3});
Group50->addChildren(*Viewpoint373);

CTransform* Transform374 = (CTransform *)(m_pScene.createNode("Transform"));
Transform374->setTranslation(new float[3]{2.25,-0.75,0});
CAnchor* Anchor375 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor375->setDescription("ArtDeco22 view");
Anchor375->setUrl(new CString[1]{"#View22"}, 1);
CShape* Shape376 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance377 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance378 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance378->setName("ArtDeco22");
Appearance377->setMaterial(*ProtoInstance378);

Shape376->setAppearance(*Appearance377);

CSphere* Sphere379 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere379->setUSE("Ball");
Shape376->setGeometry(Sphere379);

Anchor375->addChildren(*Shape376);

Transform374->addChildren(*Anchor375);

CTransform* Transform380 = (CTransform *)(m_pScene.createNode("Transform"));
Transform380->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor381 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor381->setDescription("ArtDeco22");
Anchor381->setParameter(new CString[1]{"target=_source"}, 1);
Anchor381->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22"}, 2);
CShape* Shape382 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance383 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material384 = (CMaterial *)(m_pScene.createNode("Material"));
Material384->setUSE("TextMat");
Appearance383->setMaterial(*Material384);

Shape382->setAppearance(*Appearance383);

CText* Text385 = (CText *)(m_pScene.createNode("Text"));
Text385->setString(new CString[1]{"ArtDeco22"}, 1);
CFontStyle* FontStyle386 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle386->setUSE("Style");
Text385->setFontStyle(*FontStyle386);

Shape382->setGeometry(Text385);

Anchor381->addChildren(*Shape382);

Transform380->addChildren(*Anchor381);

Transform374->addChildren(*Transform380);

Group50->addChildren(*Transform374);

CViewpoint* Viewpoint387 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint387->setDEF("View23");
Viewpoint387->setDescription("ArtDeco23");
Viewpoint387->setPosition(new float[3]{3.75,-0.75,3});
Group50->addChildren(*Viewpoint387);

CTransform* Transform388 = (CTransform *)(m_pScene.createNode("Transform"));
Transform388->setTranslation(new float[3]{3.75,-0.75,0});
CAnchor* Anchor389 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor389->setDescription("ArtDeco23 view");
Anchor389->setUrl(new CString[1]{"#View23"}, 1);
CShape* Shape390 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance391 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance392 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance392->setName("ArtDeco23");
Appearance391->setMaterial(*ProtoInstance392);

Shape390->setAppearance(*Appearance391);

CSphere* Sphere393 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere393->setUSE("Ball");
Shape390->setGeometry(Sphere393);

Anchor389->addChildren(*Shape390);

Transform388->addChildren(*Anchor389);

CTransform* Transform394 = (CTransform *)(m_pScene.createNode("Transform"));
Transform394->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor395 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor395->setDescription("ArtDeco23");
Anchor395->setParameter(new CString[1]{"target=_source"}, 1);
Anchor395->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23"}, 2);
CShape* Shape396 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance397 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material398 = (CMaterial *)(m_pScene.createNode("Material"));
Material398->setUSE("TextMat");
Appearance397->setMaterial(*Material398);

Shape396->setAppearance(*Appearance397);

CText* Text399 = (CText *)(m_pScene.createNode("Text"));
Text399->setString(new CString[1]{"ArtDeco23"}, 1);
CFontStyle* FontStyle400 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle400->setUSE("Style");
Text399->setFontStyle(*FontStyle400);

Shape396->setGeometry(Text399);

Anchor395->addChildren(*Shape396);

Transform394->addChildren(*Anchor395);

Transform388->addChildren(*Transform394);

Group50->addChildren(*Transform388);

CViewpoint* Viewpoint401 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint401->setDEF("View24");
Viewpoint401->setDescription("ArtDeco24");
Viewpoint401->setPosition(new float[3]{-3.75,-2.25,3});
Group50->addChildren(*Viewpoint401);

CTransform* Transform402 = (CTransform *)(m_pScene.createNode("Transform"));
Transform402->setTranslation(new float[3]{-3.75,-2.25,0});
CAnchor* Anchor403 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor403->setDescription("ArtDeco24 view");
Anchor403->setUrl(new CString[1]{"#View24"}, 1);
CShape* Shape404 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance405 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance406 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance406->setName("ArtDeco24");
Appearance405->setMaterial(*ProtoInstance406);

Shape404->setAppearance(*Appearance405);

CSphere* Sphere407 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere407->setUSE("Ball");
Shape404->setGeometry(Sphere407);

Anchor403->addChildren(*Shape404);

Transform402->addChildren(*Anchor403);

CTransform* Transform408 = (CTransform *)(m_pScene.createNode("Transform"));
Transform408->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor409 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor409->setDescription("ArtDeco24");
Anchor409->setParameter(new CString[1]{"target=_source"}, 1);
Anchor409->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24"}, 2);
CShape* Shape410 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance411 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material412 = (CMaterial *)(m_pScene.createNode("Material"));
Material412->setUSE("TextMat");
Appearance411->setMaterial(*Material412);

Shape410->setAppearance(*Appearance411);

CText* Text413 = (CText *)(m_pScene.createNode("Text"));
Text413->setString(new CString[1]{"ArtDeco24"}, 1);
CFontStyle* FontStyle414 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle414->setUSE("Style");
Text413->setFontStyle(*FontStyle414);

Shape410->setGeometry(Text413);

Anchor409->addChildren(*Shape410);

Transform408->addChildren(*Anchor409);

Transform402->addChildren(*Transform408);

Group50->addChildren(*Transform402);

CViewpoint* Viewpoint415 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint415->setDEF("View25");
Viewpoint415->setDescription("ArtDeco25");
Viewpoint415->setPosition(new float[3]{-2.25,-2.25,3});
Group50->addChildren(*Viewpoint415);

CTransform* Transform416 = (CTransform *)(m_pScene.createNode("Transform"));
Transform416->setTranslation(new float[3]{-2.25,-2.25,0});
CAnchor* Anchor417 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor417->setDescription("ArtDeco25 view");
Anchor417->setUrl(new CString[1]{"#View25"}, 1);
CShape* Shape418 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance419 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance420 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance420->setName("ArtDeco25");
Appearance419->setMaterial(*ProtoInstance420);

Shape418->setAppearance(*Appearance419);

CSphere* Sphere421 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere421->setUSE("Ball");
Shape418->setGeometry(Sphere421);

Anchor417->addChildren(*Shape418);

Transform416->addChildren(*Anchor417);

CTransform* Transform422 = (CTransform *)(m_pScene.createNode("Transform"));
Transform422->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor423 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor423->setDescription("ArtDeco25");
Anchor423->setParameter(new CString[1]{"target=_source"}, 1);
Anchor423->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25"}, 2);
CShape* Shape424 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance425 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material426 = (CMaterial *)(m_pScene.createNode("Material"));
Material426->setUSE("TextMat");
Appearance425->setMaterial(*Material426);

Shape424->setAppearance(*Appearance425);

CText* Text427 = (CText *)(m_pScene.createNode("Text"));
Text427->setString(new CString[1]{"ArtDeco25"}, 1);
CFontStyle* FontStyle428 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle428->setUSE("Style");
Text427->setFontStyle(*FontStyle428);

Shape424->setGeometry(Text427);

Anchor423->addChildren(*Shape424);

Transform422->addChildren(*Anchor423);

Transform416->addChildren(*Transform422);

Group50->addChildren(*Transform416);

CViewpoint* Viewpoint429 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint429->setDEF("View26");
Viewpoint429->setDescription("ArtDeco26");
Viewpoint429->setPosition(new float[3]{-0.75,-2.25,3});
Group50->addChildren(*Viewpoint429);

CTransform* Transform430 = (CTransform *)(m_pScene.createNode("Transform"));
Transform430->setTranslation(new float[3]{-0.75,-2.25,0});
CAnchor* Anchor431 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor431->setDescription("ArtDeco26 view");
Anchor431->setUrl(new CString[1]{"#View26"}, 1);
CShape* Shape432 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance433 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance434 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance434->setName("ArtDeco26");
Appearance433->setMaterial(*ProtoInstance434);

Shape432->setAppearance(*Appearance433);

CSphere* Sphere435 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere435->setUSE("Ball");
Shape432->setGeometry(Sphere435);

Anchor431->addChildren(*Shape432);

Transform430->addChildren(*Anchor431);

CTransform* Transform436 = (CTransform *)(m_pScene.createNode("Transform"));
Transform436->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor437 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor437->setDescription("ArtDeco26");
Anchor437->setParameter(new CString[1]{"target=_source"}, 1);
Anchor437->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26"}, 2);
CShape* Shape438 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance439 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material440 = (CMaterial *)(m_pScene.createNode("Material"));
Material440->setUSE("TextMat");
Appearance439->setMaterial(*Material440);

Shape438->setAppearance(*Appearance439);

CText* Text441 = (CText *)(m_pScene.createNode("Text"));
Text441->setString(new CString[1]{"ArtDeco26"}, 1);
CFontStyle* FontStyle442 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle442->setUSE("Style");
Text441->setFontStyle(*FontStyle442);

Shape438->setGeometry(Text441);

Anchor437->addChildren(*Shape438);

Transform436->addChildren(*Anchor437);

Transform430->addChildren(*Transform436);

Group50->addChildren(*Transform430);

CViewpoint* Viewpoint443 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint443->setDEF("View27");
Viewpoint443->setDescription("ArtDeco27");
Viewpoint443->setPosition(new float[3]{0.75,-2.25,3});
Group50->addChildren(*Viewpoint443);

CTransform* Transform444 = (CTransform *)(m_pScene.createNode("Transform"));
Transform444->setTranslation(new float[3]{0.75,-2.25,0});
CAnchor* Anchor445 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor445->setDescription("ArtDeco27 view");
Anchor445->setUrl(new CString[1]{"#View27"}, 1);
CShape* Shape446 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance447 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance448 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance448->setName("ArtDeco27");
Appearance447->setMaterial(*ProtoInstance448);

Shape446->setAppearance(*Appearance447);

CSphere* Sphere449 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere449->setUSE("Ball");
Shape446->setGeometry(Sphere449);

Anchor445->addChildren(*Shape446);

Transform444->addChildren(*Anchor445);

CTransform* Transform450 = (CTransform *)(m_pScene.createNode("Transform"));
Transform450->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor451 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor451->setDescription("ArtDeco27");
Anchor451->setParameter(new CString[1]{"target=_source"}, 1);
Anchor451->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27"}, 2);
CShape* Shape452 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance453 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material454 = (CMaterial *)(m_pScene.createNode("Material"));
Material454->setUSE("TextMat");
Appearance453->setMaterial(*Material454);

Shape452->setAppearance(*Appearance453);

CText* Text455 = (CText *)(m_pScene.createNode("Text"));
Text455->setString(new CString[1]{"ArtDeco27"}, 1);
CFontStyle* FontStyle456 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle456->setUSE("Style");
Text455->setFontStyle(*FontStyle456);

Shape452->setGeometry(Text455);

Anchor451->addChildren(*Shape452);

Transform450->addChildren(*Anchor451);

Transform444->addChildren(*Transform450);

Group50->addChildren(*Transform444);

CViewpoint* Viewpoint457 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint457->setDEF("View28");
Viewpoint457->setDescription("ArtDeco28");
Viewpoint457->setPosition(new float[3]{2.25,-2.25,3});
Group50->addChildren(*Viewpoint457);

CTransform* Transform458 = (CTransform *)(m_pScene.createNode("Transform"));
Transform458->setTranslation(new float[3]{2.25,-2.25,0});
CAnchor* Anchor459 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor459->setDescription("ArtDeco28 view");
Anchor459->setUrl(new CString[1]{"#View28"}, 1);
CShape* Shape460 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance461 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance462 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance462->setName("ArtDeco28");
Appearance461->setMaterial(*ProtoInstance462);

Shape460->setAppearance(*Appearance461);

CSphere* Sphere463 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere463->setUSE("Ball");
Shape460->setGeometry(Sphere463);

Anchor459->addChildren(*Shape460);

Transform458->addChildren(*Anchor459);

CTransform* Transform464 = (CTransform *)(m_pScene.createNode("Transform"));
Transform464->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor465 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor465->setDescription("ArtDeco28");
Anchor465->setParameter(new CString[1]{"target=_source"}, 1);
Anchor465->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28"}, 2);
CShape* Shape466 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance467 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material468 = (CMaterial *)(m_pScene.createNode("Material"));
Material468->setUSE("TextMat");
Appearance467->setMaterial(*Material468);

Shape466->setAppearance(*Appearance467);

CText* Text469 = (CText *)(m_pScene.createNode("Text"));
Text469->setString(new CString[1]{"ArtDeco28"}, 1);
CFontStyle* FontStyle470 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle470->setUSE("Style");
Text469->setFontStyle(*FontStyle470);

Shape466->setGeometry(Text469);

Anchor465->addChildren(*Shape466);

Transform464->addChildren(*Anchor465);

Transform458->addChildren(*Transform464);

Group50->addChildren(*Transform458);

CViewpoint* Viewpoint471 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint471->setDEF("View29");
Viewpoint471->setDescription("ArtDeco29");
Viewpoint471->setPosition(new float[3]{3.75,-2.25,3});
Group50->addChildren(*Viewpoint471);

CTransform* Transform472 = (CTransform *)(m_pScene.createNode("Transform"));
Transform472->setTranslation(new float[3]{3.75,-2.25,0});
CAnchor* Anchor473 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor473->setDescription("ArtDeco29 view");
Anchor473->setUrl(new CString[1]{"#View29"}, 1);
CShape* Shape474 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance475 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance476 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance476->setName("ArtDeco29");
Appearance475->setMaterial(*ProtoInstance476);

Shape474->setAppearance(*Appearance475);

CSphere* Sphere477 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere477->setUSE("Ball");
Shape474->setGeometry(Sphere477);

Anchor473->addChildren(*Shape474);

Transform472->addChildren(*Anchor473);

CTransform* Transform478 = (CTransform *)(m_pScene.createNode("Transform"));
Transform478->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor479 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor479->setDescription("ArtDeco29");
Anchor479->setParameter(new CString[1]{"target=_source"}, 1);
Anchor479->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29"}, 2);
CShape* Shape480 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance481 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material482 = (CMaterial *)(m_pScene.createNode("Material"));
Material482->setUSE("TextMat");
Appearance481->setMaterial(*Material482);

Shape480->setAppearance(*Appearance481);

CText* Text483 = (CText *)(m_pScene.createNode("Text"));
Text483->setString(new CString[1]{"ArtDeco29"}, 1);
CFontStyle* FontStyle484 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle484->setUSE("Style");
Text483->setFontStyle(*FontStyle484);

Shape480->setGeometry(Text483);

Anchor479->addChildren(*Shape480);

Transform478->addChildren(*Anchor479);

Transform472->addChildren(*Transform478);

Group50->addChildren(*Transform472);

CViewpoint* Viewpoint485 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint485->setDEF("View30");
Viewpoint485->setDescription("ArtDeco30");
Viewpoint485->setPosition(new float[3]{-3.75,-3.75,3});
Group50->addChildren(*Viewpoint485);

CTransform* Transform486 = (CTransform *)(m_pScene.createNode("Transform"));
Transform486->setTranslation(new float[3]{-3.75,-3.75,0});
CAnchor* Anchor487 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor487->setDescription("ArtDeco30 view");
Anchor487->setUrl(new CString[1]{"#View30"}, 1);
CShape* Shape488 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance489 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance490 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance490->setName("ArtDeco30");
Appearance489->setMaterial(*ProtoInstance490);

Shape488->setAppearance(*Appearance489);

CSphere* Sphere491 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere491->setUSE("Ball");
Shape488->setGeometry(Sphere491);

Anchor487->addChildren(*Shape488);

Transform486->addChildren(*Anchor487);

CTransform* Transform492 = (CTransform *)(m_pScene.createNode("Transform"));
Transform492->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor493 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor493->setDescription("ArtDeco30");
Anchor493->setParameter(new CString[1]{"target=_source"}, 1);
Anchor493->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30"}, 2);
CShape* Shape494 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance495 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material496 = (CMaterial *)(m_pScene.createNode("Material"));
Material496->setUSE("TextMat");
Appearance495->setMaterial(*Material496);

Shape494->setAppearance(*Appearance495);

CText* Text497 = (CText *)(m_pScene.createNode("Text"));
Text497->setString(new CString[1]{"ArtDeco30"}, 1);
CFontStyle* FontStyle498 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle498->setUSE("Style");
Text497->setFontStyle(*FontStyle498);

Shape494->setGeometry(Text497);

Anchor493->addChildren(*Shape494);

Transform492->addChildren(*Anchor493);

Transform486->addChildren(*Transform492);

Group50->addChildren(*Transform486);

CViewpoint* Viewpoint499 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint499->setDEF("View31");
Viewpoint499->setDescription("ArtDeco31");
Viewpoint499->setPosition(new float[3]{-2.25,-3.75,3});
Group50->addChildren(*Viewpoint499);

CTransform* Transform500 = (CTransform *)(m_pScene.createNode("Transform"));
Transform500->setTranslation(new float[3]{-2.25,-3.75,0});
CAnchor* Anchor501 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor501->setDescription("ArtDeco31 view");
Anchor501->setUrl(new CString[1]{"#View31"}, 1);
CShape* Shape502 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance503 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance504 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance504->setName("ArtDeco31");
Appearance503->setMaterial(*ProtoInstance504);

Shape502->setAppearance(*Appearance503);

CSphere* Sphere505 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere505->setUSE("Ball");
Shape502->setGeometry(Sphere505);

Anchor501->addChildren(*Shape502);

Transform500->addChildren(*Anchor501);

CTransform* Transform506 = (CTransform *)(m_pScene.createNode("Transform"));
Transform506->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor507 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor507->setDescription("ArtDeco31");
Anchor507->setParameter(new CString[1]{"target=_source"}, 1);
Anchor507->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31"}, 2);
CShape* Shape508 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance509 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material510 = (CMaterial *)(m_pScene.createNode("Material"));
Material510->setUSE("TextMat");
Appearance509->setMaterial(*Material510);

Shape508->setAppearance(*Appearance509);

CText* Text511 = (CText *)(m_pScene.createNode("Text"));
Text511->setString(new CString[1]{"ArtDeco31"}, 1);
CFontStyle* FontStyle512 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle512->setUSE("Style");
Text511->setFontStyle(*FontStyle512);

Shape508->setGeometry(Text511);

Anchor507->addChildren(*Shape508);

Transform506->addChildren(*Anchor507);

Transform500->addChildren(*Transform506);

Group50->addChildren(*Transform500);

CViewpoint* Viewpoint513 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint513->setDEF("View32");
Viewpoint513->setDescription("ArtDeco32");
Viewpoint513->setPosition(new float[3]{-0.75,-3.75,3});
Group50->addChildren(*Viewpoint513);

CTransform* Transform514 = (CTransform *)(m_pScene.createNode("Transform"));
Transform514->setTranslation(new float[3]{-0.75,-3.75,0});
CAnchor* Anchor515 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor515->setDescription("ArtDeco32 view");
Anchor515->setUrl(new CString[1]{"#View32"}, 1);
CShape* Shape516 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance517 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance518 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance518->setName("ArtDeco32");
Appearance517->setMaterial(*ProtoInstance518);

Shape516->setAppearance(*Appearance517);

CSphere* Sphere519 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere519->setUSE("Ball");
Shape516->setGeometry(Sphere519);

Anchor515->addChildren(*Shape516);

Transform514->addChildren(*Anchor515);

CTransform* Transform520 = (CTransform *)(m_pScene.createNode("Transform"));
Transform520->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor521 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor521->setDescription("ArtDeco32");
Anchor521->setParameter(new CString[1]{"target=_source"}, 1);
Anchor521->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32"}, 2);
CShape* Shape522 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance523 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material524 = (CMaterial *)(m_pScene.createNode("Material"));
Material524->setUSE("TextMat");
Appearance523->setMaterial(*Material524);

Shape522->setAppearance(*Appearance523);

CText* Text525 = (CText *)(m_pScene.createNode("Text"));
Text525->setString(new CString[1]{"ArtDeco32"}, 1);
CFontStyle* FontStyle526 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle526->setUSE("Style");
Text525->setFontStyle(*FontStyle526);

Shape522->setGeometry(Text525);

Anchor521->addChildren(*Shape522);

Transform520->addChildren(*Anchor521);

Transform514->addChildren(*Transform520);

Group50->addChildren(*Transform514);

CViewpoint* Viewpoint527 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint527->setDEF("View33");
Viewpoint527->setDescription("ArtDeco33");
Viewpoint527->setPosition(new float[3]{0.75,-3.75,3});
Group50->addChildren(*Viewpoint527);

CTransform* Transform528 = (CTransform *)(m_pScene.createNode("Transform"));
Transform528->setTranslation(new float[3]{0.75,-3.75,0});
CAnchor* Anchor529 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor529->setDescription("ArtDeco33 view");
Anchor529->setUrl(new CString[1]{"#View33"}, 1);
CShape* Shape530 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance531 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance532 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance532->setName("ArtDeco33");
Appearance531->setMaterial(*ProtoInstance532);

Shape530->setAppearance(*Appearance531);

CSphere* Sphere533 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere533->setUSE("Ball");
Shape530->setGeometry(Sphere533);

Anchor529->addChildren(*Shape530);

Transform528->addChildren(*Anchor529);

CTransform* Transform534 = (CTransform *)(m_pScene.createNode("Transform"));
Transform534->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor535 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor535->setDescription("ArtDeco33");
Anchor535->setParameter(new CString[1]{"target=_source"}, 1);
Anchor535->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33"}, 2);
CShape* Shape536 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance537 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material538 = (CMaterial *)(m_pScene.createNode("Material"));
Material538->setUSE("TextMat");
Appearance537->setMaterial(*Material538);

Shape536->setAppearance(*Appearance537);

CText* Text539 = (CText *)(m_pScene.createNode("Text"));
Text539->setString(new CString[1]{"ArtDeco33"}, 1);
CFontStyle* FontStyle540 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle540->setUSE("Style");
Text539->setFontStyle(*FontStyle540);

Shape536->setGeometry(Text539);

Anchor535->addChildren(*Shape536);

Transform534->addChildren(*Anchor535);

Transform528->addChildren(*Transform534);

Group50->addChildren(*Transform528);

CViewpoint* Viewpoint541 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint541->setDEF("View34");
Viewpoint541->setDescription("ArtDeco34");
Viewpoint541->setPosition(new float[3]{2.25,-3.75,3});
Group50->addChildren(*Viewpoint541);

CTransform* Transform542 = (CTransform *)(m_pScene.createNode("Transform"));
Transform542->setTranslation(new float[3]{2.25,-3.75,0});
CAnchor* Anchor543 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor543->setDescription("ArtDeco34 view");
Anchor543->setUrl(new CString[1]{"#View34"}, 1);
CShape* Shape544 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance545 = (CAppearance *)(m_pScene.createNode("Appearance"));
CProtoInstance* ProtoInstance546 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance546->setName("ArtDeco34");
Appearance545->setMaterial(*ProtoInstance546);

Shape544->setAppearance(*Appearance545);

CSphere* Sphere547 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere547->setUSE("Ball");
Shape544->setGeometry(Sphere547);

Anchor543->addChildren(*Shape544);

Transform542->addChildren(*Anchor543);

CTransform* Transform548 = (CTransform *)(m_pScene.createNode("Transform"));
Transform548->setTranslation(new float[3]{0,0.3,0.5});
CAnchor* Anchor549 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor549->setDescription("ArtDeco34");
Anchor549->setParameter(new CString[1]{"target=_source"}, 1);
Anchor549->setUrl(new CString[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34"}, 2);
CShape* Shape550 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance551 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material552 = (CMaterial *)(m_pScene.createNode("Material"));
Material552->setUSE("TextMat");
Appearance551->setMaterial(*Material552);

Shape550->setAppearance(*Appearance551);

CText* Text553 = (CText *)(m_pScene.createNode("Text"));
Text553->setString(new CString[1]{"ArtDeco34"}, 1);
CFontStyle* FontStyle554 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle554->setUSE("Style");
Text553->setFontStyle(*FontStyle554);

Shape550->setGeometry(Text553);

Anchor549->addChildren(*Shape550);

Transform548->addChildren(*Anchor549);

Transform542->addChildren(*Transform548);

Group50->addChildren(*Transform542);

group->addChildren(*Group50);

CROUTE* ROUTE555 = new CROUTE();
ROUTE555->setFromField("fraction_changed");
ROUTE555->setFromNode("Close_Time");
ROUTE555->setToField("set_fraction");
ROUTE555->setToNode("Close_Mover");
group->addChildren(*ROUTE555);

CROUTE* ROUTE556 = new CROUTE();
ROUTE556->setFromField("value_changed");
ROUTE556->setFromNode("Close_Mover");
ROUTE556->setToField("set_translation");
ROUTE556->setToNode("Close_travel");
group->addChildren(*ROUTE556);

X3D0->setScene(*Scene13);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
