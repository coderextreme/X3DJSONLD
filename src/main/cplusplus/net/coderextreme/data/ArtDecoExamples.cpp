/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Abstracts.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Concretes.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile("Immersive");
X3D0->setVersion("3.0");
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName("title");
meta2->setContent("ArtDecoExamples.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("description");
meta3->setContent("Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples.");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("creator");
meta4->setContent("David Roussel");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("translator");
meta5->setContent("James Harney, Don Brutzman NPS");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("created");
meta6->setContent("7 April 2002");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("modified");
meta7->setContent("20 October 2019");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("reference");
meta8->setContent("http://vrmlstuff.free.fr/materials");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("subject");
meta9->setContent("Universal Media Material Library");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("identifier");
meta10->setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("generator");
meta11->setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("license");
meta12->setContent("../license.html");
head1->addMeta(meta12);

X3D0->setHead(head1);

Scene* Scene13 = new Scene();
WorldInfo* WorldInfo14 = new WorldInfo();
WorldInfo14->setTitle("ArtDecoExamples.x3d");
Scene13->addChild(WorldInfo14);

ExternProtoDeclare* ExternProtoDeclare15 = new ExternProtoDeclare();
ExternProtoDeclare15->setName("ArtDeco00");
ExternProtoDeclare15->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare15->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare15->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco00","ArtDecoPrototypes.wrl#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco00"}, 4);
Scene13->addChild(ExternProtoDeclare15);

ExternProtoDeclare* ExternProtoDeclare16 = new ExternProtoDeclare();
ExternProtoDeclare16->setName("ArtDeco01");
ExternProtoDeclare16->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare16->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare16->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco01","ArtDecoPrototypes.wrl#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco01"}, 4);
Scene13->addChild(ExternProtoDeclare16);

ExternProtoDeclare* ExternProtoDeclare17 = new ExternProtoDeclare();
ExternProtoDeclare17->setName("ArtDeco02");
ExternProtoDeclare17->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare17->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare17->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02","ArtDecoPrototypes.wrl#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02"}, 4);
Scene13->addChild(ExternProtoDeclare17);

ExternProtoDeclare* ExternProtoDeclare18 = new ExternProtoDeclare();
ExternProtoDeclare18->setName("ArtDeco03");
ExternProtoDeclare18->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare18->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare18->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco03","ArtDecoPrototypes.wrl#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco03"}, 4);
Scene13->addChild(ExternProtoDeclare18);

ExternProtoDeclare* ExternProtoDeclare19 = new ExternProtoDeclare();
ExternProtoDeclare19->setName("ArtDeco04");
ExternProtoDeclare19->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare19->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare19->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04","ArtDecoPrototypes.wrl#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04"}, 4);
Scene13->addChild(ExternProtoDeclare19);

ExternProtoDeclare* ExternProtoDeclare20 = new ExternProtoDeclare();
ExternProtoDeclare20->setName("ArtDeco05");
ExternProtoDeclare20->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare20->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare20->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05","ArtDecoPrototypes.wrl#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05"}, 4);
Scene13->addChild(ExternProtoDeclare20);

ExternProtoDeclare* ExternProtoDeclare21 = new ExternProtoDeclare();
ExternProtoDeclare21->setName("ArtDeco06");
ExternProtoDeclare21->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare21->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare21->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco06","ArtDecoPrototypes.wrl#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco06"}, 4);
Scene13->addChild(ExternProtoDeclare21);

ExternProtoDeclare* ExternProtoDeclare22 = new ExternProtoDeclare();
ExternProtoDeclare22->setName("ArtDeco07");
ExternProtoDeclare22->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare22->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare22->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco07","ArtDecoPrototypes.wrl#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco07"}, 4);
Scene13->addChild(ExternProtoDeclare22);

ExternProtoDeclare* ExternProtoDeclare23 = new ExternProtoDeclare();
ExternProtoDeclare23->setName("ArtDeco08");
ExternProtoDeclare23->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare23->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare23->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08","ArtDecoPrototypes.wrl#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08"}, 4);
Scene13->addChild(ExternProtoDeclare23);

ExternProtoDeclare* ExternProtoDeclare24 = new ExternProtoDeclare();
ExternProtoDeclare24->setName("ArtDeco09");
ExternProtoDeclare24->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare24->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare24->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09","ArtDecoPrototypes.wrl#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09"}, 4);
Scene13->addChild(ExternProtoDeclare24);

ExternProtoDeclare* ExternProtoDeclare25 = new ExternProtoDeclare();
ExternProtoDeclare25->setName("ArtDeco10");
ExternProtoDeclare25->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare25->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare25->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco10","ArtDecoPrototypes.wrl#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco10"}, 4);
Scene13->addChild(ExternProtoDeclare25);

ExternProtoDeclare* ExternProtoDeclare26 = new ExternProtoDeclare();
ExternProtoDeclare26->setName("ArtDeco11");
ExternProtoDeclare26->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare26->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare26->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco11","ArtDecoPrototypes.wrl#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco11"}, 4);
Scene13->addChild(ExternProtoDeclare26);

ExternProtoDeclare* ExternProtoDeclare27 = new ExternProtoDeclare();
ExternProtoDeclare27->setName("ArtDeco12");
ExternProtoDeclare27->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare27->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare27->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco12","ArtDecoPrototypes.wrl#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco12"}, 4);
Scene13->addChild(ExternProtoDeclare27);

ExternProtoDeclare* ExternProtoDeclare28 = new ExternProtoDeclare();
ExternProtoDeclare28->setName("ArtDeco13");
ExternProtoDeclare28->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare28->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare28->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13","ArtDecoPrototypes.wrl#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13"}, 4);
Scene13->addChild(ExternProtoDeclare28);

ExternProtoDeclare* ExternProtoDeclare29 = new ExternProtoDeclare();
ExternProtoDeclare29->setName("ArtDeco14");
ExternProtoDeclare29->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare29->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare29->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco14","ArtDecoPrototypes.wrl#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco14"}, 4);
Scene13->addChild(ExternProtoDeclare29);

ExternProtoDeclare* ExternProtoDeclare30 = new ExternProtoDeclare();
ExternProtoDeclare30->setName("ArtDeco15");
ExternProtoDeclare30->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare30->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare30->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco15","ArtDecoPrototypes.wrl#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco15"}, 4);
Scene13->addChild(ExternProtoDeclare30);

ExternProtoDeclare* ExternProtoDeclare31 = new ExternProtoDeclare();
ExternProtoDeclare31->setName("ArtDeco16");
ExternProtoDeclare31->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare31->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare31->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco16","ArtDecoPrototypes.wrl#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco16"}, 4);
Scene13->addChild(ExternProtoDeclare31);

ExternProtoDeclare* ExternProtoDeclare32 = new ExternProtoDeclare();
ExternProtoDeclare32->setName("ArtDeco17");
ExternProtoDeclare32->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare32->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare32->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco17","ArtDecoPrototypes.wrl#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco17"}, 4);
Scene13->addChild(ExternProtoDeclare32);

ExternProtoDeclare* ExternProtoDeclare33 = new ExternProtoDeclare();
ExternProtoDeclare33->setName("ArtDeco18");
ExternProtoDeclare33->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare33->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare33->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18","ArtDecoPrototypes.wrl#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18"}, 4);
Scene13->addChild(ExternProtoDeclare33);

ExternProtoDeclare* ExternProtoDeclare34 = new ExternProtoDeclare();
ExternProtoDeclare34->setName("ArtDeco19");
ExternProtoDeclare34->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare34->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare34->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco19","ArtDecoPrototypes.wrl#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco19"}, 4);
Scene13->addChild(ExternProtoDeclare34);

ExternProtoDeclare* ExternProtoDeclare35 = new ExternProtoDeclare();
ExternProtoDeclare35->setName("ArtDeco20");
ExternProtoDeclare35->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare35->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare35->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco20","ArtDecoPrototypes.wrl#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco20"}, 4);
Scene13->addChild(ExternProtoDeclare35);

ExternProtoDeclare* ExternProtoDeclare36 = new ExternProtoDeclare();
ExternProtoDeclare36->setName("ArtDeco21");
ExternProtoDeclare36->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare36->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare36->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21","ArtDecoPrototypes.wrl#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21"}, 4);
Scene13->addChild(ExternProtoDeclare36);

ExternProtoDeclare* ExternProtoDeclare37 = new ExternProtoDeclare();
ExternProtoDeclare37->setName("ArtDeco22");
ExternProtoDeclare37->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare37->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare37->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco22","ArtDecoPrototypes.wrl#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco22"}, 4);
Scene13->addChild(ExternProtoDeclare37);

ExternProtoDeclare* ExternProtoDeclare38 = new ExternProtoDeclare();
ExternProtoDeclare38->setName("ArtDeco23");
ExternProtoDeclare38->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare38->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare38->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco23","ArtDecoPrototypes.wrl#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco23"}, 4);
Scene13->addChild(ExternProtoDeclare38);

ExternProtoDeclare* ExternProtoDeclare39 = new ExternProtoDeclare();
ExternProtoDeclare39->setName("ArtDeco24");
ExternProtoDeclare39->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare39->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare39->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24","ArtDecoPrototypes.wrl#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24"}, 4);
Scene13->addChild(ExternProtoDeclare39);

ExternProtoDeclare* ExternProtoDeclare40 = new ExternProtoDeclare();
ExternProtoDeclare40->setName("ArtDeco25");
ExternProtoDeclare40->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare40->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare40->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25","ArtDecoPrototypes.wrl#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25"}, 4);
Scene13->addChild(ExternProtoDeclare40);

ExternProtoDeclare* ExternProtoDeclare41 = new ExternProtoDeclare();
ExternProtoDeclare41->setName("ArtDeco26");
ExternProtoDeclare41->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare41->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare41->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco26","ArtDecoPrototypes.wrl#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco26"}, 4);
Scene13->addChild(ExternProtoDeclare41);

ExternProtoDeclare* ExternProtoDeclare42 = new ExternProtoDeclare();
ExternProtoDeclare42->setName("ArtDeco27");
ExternProtoDeclare42->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare42->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare42->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco27","ArtDecoPrototypes.wrl#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco27"}, 4);
Scene13->addChild(ExternProtoDeclare42);

ExternProtoDeclare* ExternProtoDeclare43 = new ExternProtoDeclare();
ExternProtoDeclare43->setName("ArtDeco28");
ExternProtoDeclare43->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare43->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare43->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco28","ArtDecoPrototypes.wrl#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco28"}, 4);
Scene13->addChild(ExternProtoDeclare43);

ExternProtoDeclare* ExternProtoDeclare44 = new ExternProtoDeclare();
ExternProtoDeclare44->setName("ArtDeco29");
ExternProtoDeclare44->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare44->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare44->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco29","ArtDecoPrototypes.wrl#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco29"}, 4);
Scene13->addChild(ExternProtoDeclare44);

ExternProtoDeclare* ExternProtoDeclare45 = new ExternProtoDeclare();
ExternProtoDeclare45->setName("ArtDeco30");
ExternProtoDeclare45->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare45->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare45->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco30","ArtDecoPrototypes.wrl#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco30"}, 4);
Scene13->addChild(ExternProtoDeclare45);

ExternProtoDeclare* ExternProtoDeclare46 = new ExternProtoDeclare();
ExternProtoDeclare46->setName("ArtDeco31");
ExternProtoDeclare46->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare46->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare46->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco31","ArtDecoPrototypes.wrl#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco31"}, 4);
Scene13->addChild(ExternProtoDeclare46);

ExternProtoDeclare* ExternProtoDeclare47 = new ExternProtoDeclare();
ExternProtoDeclare47->setName("ArtDeco32");
ExternProtoDeclare47->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare47->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare47->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco32","ArtDecoPrototypes.wrl#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco32"}, 4);
Scene13->addChild(ExternProtoDeclare47);

ExternProtoDeclare* ExternProtoDeclare48 = new ExternProtoDeclare();
ExternProtoDeclare48->setName("ArtDeco33");
ExternProtoDeclare48->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare48->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare48->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco33","ArtDecoPrototypes.wrl#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco33"}, 4);
Scene13->addChild(ExternProtoDeclare48);

ExternProtoDeclare* ExternProtoDeclare49 = new ExternProtoDeclare();
ExternProtoDeclare49->setName("ArtDeco34");
ExternProtoDeclare49->setAppinfo("UniversalMediaMaterials prototype");
ExternProtoDeclare49->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
ExternProtoDeclare49->setUrl(new String[4]{"ArtDecoPrototypes.x3d#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco34","ArtDecoPrototypes.wrl#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco34"}, 4);
Scene13->addChild(ExternProtoDeclare49);

Group* Group50 = new Group();
NavigationInfo* NavigationInfo51 = new NavigationInfo();
NavigationInfo51->setHeadlight(False);
Group50->addChild(NavigationInfo51);

Viewpoint* Viewpoint52 = new Viewpoint();
Viewpoint52->setDEF("Front");
Viewpoint52->setDescription("Front view");
Viewpoint52->setPosition(new float[3]{0,0,12});
Group50->addChild(Viewpoint52);

Viewpoint* Viewpoint53 = new Viewpoint();
Viewpoint53->setDEF("PersRight");
Viewpoint53->setDescription("Low Right");
Viewpoint53->setOrientation(new float[4]{0.74291,0.30772,0.59447,1.2171});
Viewpoint53->setPosition(new float[3]{6.9282,-6.9282,6.9282});
Group50->addChild(Viewpoint53);

Viewpoint* Viewpoint54 = new Viewpoint();
Viewpoint54->setDEF("PersLeft");
Viewpoint54->setDescription("Low Left");
Viewpoint54->setOrientation(new float[4]{0.74291,-0.30772,-0.59447,1.2171});
Viewpoint54->setPosition(new float[3]{-6.9282,-6.9282,6.9282});
Group50->addChild(Viewpoint54);

Viewpoint* Viewpoint55 = new Viewpoint();
Viewpoint55->setDEF("Back");
Viewpoint55->setDescription("Back view");
Viewpoint55->setOrientation(new float[4]{0,1,0,3.1416});
Viewpoint55->setPosition(new float[3]{0,0,-12});
Group50->addChild(Viewpoint55);

Transform* Transform56 = new Transform();
Transform56->setDEF("Close_travel");
PositionInterpolator* PositionInterpolator57 = new PositionInterpolator();
PositionInterpolator57->setDEF("Close_Mover");
PositionInterpolator57->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
PositionInterpolator57->setKeyValue(new float[15]{0,2.5,0,0,0,0,0,-2.5,0,0,0,0,0,2.5,0});
Transform56->addChild(PositionInterpolator57);

TimeSensor* TimeSensor58 = new TimeSensor();
TimeSensor58->setDEF("Close_Time");
TimeSensor58->setCycleInterval(12);
TimeSensor58->setLoop(True);
Transform56->addChild(TimeSensor58);

Viewpoint* Viewpoint59 = new Viewpoint();
Viewpoint59->setDEF("Close");
Viewpoint59->setDescription("Close Front");
Viewpoint59->setPosition(new float[3]{0,0,6});
Transform56->addChild(Viewpoint59);

Group50->addChild(Transform56);

DirectionalLight* DirectionalLight60 = new DirectionalLight();
DirectionalLight60->setDirection(new float[3]{1,-1,-1});
Group50->addChild(DirectionalLight60);

DirectionalLight* DirectionalLight61 = new DirectionalLight();
DirectionalLight61->setDirection(new float[3]{0,1,-0.5});
DirectionalLight61->setIntensity(0.5);
Group50->addChild(DirectionalLight61);

Anchor* Anchor62 = new Anchor();
Anchor62->setDescription("Back to front view");
Anchor62->setUrl(new String[1]{"#Front"}, 1);
Transform* Transform63 = new Transform();
Transform63->setTranslation(new float[3]{0,0,-0.5});
Inline* Inline64 = new Inline();
Inline64->setUrl(new String[5]{"../data/gridBack.json","../data/gridBack.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"}, 5);
Transform63->addChild(Inline64);

Anchor62->addChild(Transform63);

Group50->addChild(Anchor62);

Viewpoint* Viewpoint65 = new Viewpoint();
Viewpoint65->setDEF("View00");
Viewpoint65->setDescription("ArtDeco00");
Viewpoint65->setPosition(new float[3]{-3.75,3.75,3});
Group50->addChild(Viewpoint65);

Transform* Transform66 = new Transform();
Transform66->setTranslation(new float[3]{-3.75,3.75,0});
Anchor* Anchor67 = new Anchor();
Anchor67->setDescription("ArtDeco00 view");
Anchor67->setUrl(new String[1]{"#View00"}, 1);
Shape* Shape68 = new Shape();
Appearance* Appearance69 = new Appearance();
ProtoInstance* ProtoInstance70 = new ProtoInstance();
ProtoInstance70->setName("ArtDeco00");
Appearance69->setMaterial(ProtoInstance70);

Shape68->setAppearance(Appearance69);

Sphere* Sphere71 = new Sphere();
Sphere71->setDEF("Ball");
Sphere71->setRadius(0.5);
Shape68->setGeometry(Sphere71);

Anchor67->addChild(Shape68);

Transform66->addChild(Anchor67);

Transform* Transform72 = new Transform();
Transform72->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor73 = new Anchor();
Anchor73->setDescription("ArtDeco00");
Anchor73->setParameter(new String[1]{"target=_source"}, 1);
Anchor73->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00"}, 2);
Shape* Shape74 = new Shape();
Appearance* Appearance75 = new Appearance();
Material* Material76 = new Material();
Material76->setDEF("TextMat");
Material76->setDiffuseColor(new float[3]{1,1,1});
Appearance75->setMaterial(Material76);

Shape74->setAppearance(Appearance75);

Text* Text77 = new Text();
Text77->setString(new String[1]{"ArtDeco00"}, 1);
FontStyle* FontStyle78 = new FontStyle();
FontStyle78->setDEF("Style");
FontStyle78->setFamily(new String[1]{"SANS"}, 1);
FontStyle78->setJustify(new String[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle78->setSize(0.3);
FontStyle78->setStyle("BOLD");
Text77->setFontStyle(FontStyle78);

Shape74->setGeometry(Text77);

Anchor73->addChild(Shape74);

Transform72->addChild(Anchor73);

Transform66->addChild(Transform72);

Group50->addChild(Transform66);

Viewpoint* Viewpoint79 = new Viewpoint();
Viewpoint79->setDEF("View01");
Viewpoint79->setDescription("ArtDeco01");
Viewpoint79->setPosition(new float[3]{-2.25,3.75,3});
Group50->addChild(Viewpoint79);

Transform* Transform80 = new Transform();
Transform80->setTranslation(new float[3]{-2.25,3.75,0});
Anchor* Anchor81 = new Anchor();
Anchor81->setDescription("ArtDeco01 view");
Anchor81->setUrl(new String[1]{"#View01"}, 1);
Shape* Shape82 = new Shape();
Appearance* Appearance83 = new Appearance();
ProtoInstance* ProtoInstance84 = new ProtoInstance();
ProtoInstance84->setName("ArtDeco01");
Appearance83->setMaterial(ProtoInstance84);

Shape82->setAppearance(Appearance83);

Sphere* Sphere85 = new Sphere();
Sphere85->setUSE("Ball");
Shape82->setGeometry(Sphere85);

Anchor81->addChild(Shape82);

Transform80->addChild(Anchor81);

Transform* Transform86 = new Transform();
Transform86->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor87 = new Anchor();
Anchor87->setDescription("ArtDeco01");
Anchor87->setParameter(new String[1]{"target=_source"}, 1);
Anchor87->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01"}, 2);
Shape* Shape88 = new Shape();
Appearance* Appearance89 = new Appearance();
Material* Material90 = new Material();
Material90->setUSE("TextMat");
Appearance89->setMaterial(Material90);

Shape88->setAppearance(Appearance89);

Text* Text91 = new Text();
Text91->setString(new String[1]{"ArtDeco01"}, 1);
FontStyle* FontStyle92 = new FontStyle();
FontStyle92->setUSE("Style");
Text91->setFontStyle(FontStyle92);

Shape88->setGeometry(Text91);

Anchor87->addChild(Shape88);

Transform86->addChild(Anchor87);

Transform80->addChild(Transform86);

Group50->addChild(Transform80);

Viewpoint* Viewpoint93 = new Viewpoint();
Viewpoint93->setDEF("View02");
Viewpoint93->setDescription("ArtDeco02");
Viewpoint93->setPosition(new float[3]{-0.75,3.75,3});
Group50->addChild(Viewpoint93);

Transform* Transform94 = new Transform();
Transform94->setTranslation(new float[3]{-0.75,3.75,0});
Anchor* Anchor95 = new Anchor();
Anchor95->setDescription("ArtDeco02 view");
Anchor95->setUrl(new String[1]{"#View02"}, 1);
Shape* Shape96 = new Shape();
Appearance* Appearance97 = new Appearance();
ProtoInstance* ProtoInstance98 = new ProtoInstance();
ProtoInstance98->setName("ArtDeco02");
Appearance97->setMaterial(ProtoInstance98);

Shape96->setAppearance(Appearance97);

Sphere* Sphere99 = new Sphere();
Sphere99->setUSE("Ball");
Shape96->setGeometry(Sphere99);

Anchor95->addChild(Shape96);

Transform94->addChild(Anchor95);

Transform* Transform100 = new Transform();
Transform100->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor101 = new Anchor();
Anchor101->setDescription("ArtDeco02");
Anchor101->setParameter(new String[1]{"target=_source"}, 1);
Anchor101->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02"}, 2);
Shape* Shape102 = new Shape();
Appearance* Appearance103 = new Appearance();
Material* Material104 = new Material();
Material104->setUSE("TextMat");
Appearance103->setMaterial(Material104);

Shape102->setAppearance(Appearance103);

Text* Text105 = new Text();
Text105->setString(new String[1]{"ArtDeco02"}, 1);
FontStyle* FontStyle106 = new FontStyle();
FontStyle106->setUSE("Style");
Text105->setFontStyle(FontStyle106);

Shape102->setGeometry(Text105);

Anchor101->addChild(Shape102);

Transform100->addChild(Anchor101);

Transform94->addChild(Transform100);

Group50->addChild(Transform94);

Viewpoint* Viewpoint107 = new Viewpoint();
Viewpoint107->setDEF("View03");
Viewpoint107->setDescription("ArtDeco03");
Viewpoint107->setPosition(new float[3]{0.75,3.75,3});
Group50->addChild(Viewpoint107);

Transform* Transform108 = new Transform();
Transform108->setTranslation(new float[3]{0.75,3.75,0});
Anchor* Anchor109 = new Anchor();
Anchor109->setDescription("ArtDeco03 view");
Anchor109->setUrl(new String[1]{"#View03"}, 1);
Shape* Shape110 = new Shape();
Appearance* Appearance111 = new Appearance();
ProtoInstance* ProtoInstance112 = new ProtoInstance();
ProtoInstance112->setName("ArtDeco03");
Appearance111->setMaterial(ProtoInstance112);

Shape110->setAppearance(Appearance111);

Sphere* Sphere113 = new Sphere();
Sphere113->setUSE("Ball");
Shape110->setGeometry(Sphere113);

Anchor109->addChild(Shape110);

Transform108->addChild(Anchor109);

Transform* Transform114 = new Transform();
Transform114->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor115 = new Anchor();
Anchor115->setDescription("ArtDeco03");
Anchor115->setParameter(new String[1]{"target=_source"}, 1);
Anchor115->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03"}, 2);
Shape* Shape116 = new Shape();
Appearance* Appearance117 = new Appearance();
Material* Material118 = new Material();
Material118->setUSE("TextMat");
Appearance117->setMaterial(Material118);

Shape116->setAppearance(Appearance117);

Text* Text119 = new Text();
Text119->setString(new String[1]{"ArtDeco03"}, 1);
FontStyle* FontStyle120 = new FontStyle();
FontStyle120->setUSE("Style");
Text119->setFontStyle(FontStyle120);

Shape116->setGeometry(Text119);

Anchor115->addChild(Shape116);

Transform114->addChild(Anchor115);

Transform108->addChild(Transform114);

Group50->addChild(Transform108);

Viewpoint* Viewpoint121 = new Viewpoint();
Viewpoint121->setDEF("View04");
Viewpoint121->setDescription("ArtDeco04");
Viewpoint121->setPosition(new float[3]{2.25,3.75,3});
Group50->addChild(Viewpoint121);

Transform* Transform122 = new Transform();
Transform122->setTranslation(new float[3]{2.25,3.75,0});
Anchor* Anchor123 = new Anchor();
Anchor123->setDescription("ArtDeco04 view");
Anchor123->setUrl(new String[1]{"#View04"}, 1);
Shape* Shape124 = new Shape();
Appearance* Appearance125 = new Appearance();
ProtoInstance* ProtoInstance126 = new ProtoInstance();
ProtoInstance126->setName("ArtDeco04");
Appearance125->setMaterial(ProtoInstance126);

Shape124->setAppearance(Appearance125);

Sphere* Sphere127 = new Sphere();
Sphere127->setUSE("Ball");
Shape124->setGeometry(Sphere127);

Anchor123->addChild(Shape124);

Transform122->addChild(Anchor123);

Transform* Transform128 = new Transform();
Transform128->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor129 = new Anchor();
Anchor129->setDescription("ArtDeco04");
Anchor129->setParameter(new String[1]{"target=_source"}, 1);
Anchor129->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04"}, 2);
Shape* Shape130 = new Shape();
Appearance* Appearance131 = new Appearance();
Material* Material132 = new Material();
Material132->setUSE("TextMat");
Appearance131->setMaterial(Material132);

Shape130->setAppearance(Appearance131);

Text* Text133 = new Text();
Text133->setString(new String[1]{"ArtDeco04"}, 1);
FontStyle* FontStyle134 = new FontStyle();
FontStyle134->setUSE("Style");
Text133->setFontStyle(FontStyle134);

Shape130->setGeometry(Text133);

Anchor129->addChild(Shape130);

Transform128->addChild(Anchor129);

Transform122->addChild(Transform128);

Group50->addChild(Transform122);

Viewpoint* Viewpoint135 = new Viewpoint();
Viewpoint135->setDEF("View05");
Viewpoint135->setDescription("ArtDeco05");
Viewpoint135->setPosition(new float[3]{3.75,3.75,3});
Group50->addChild(Viewpoint135);

Transform* Transform136 = new Transform();
Transform136->setTranslation(new float[3]{3.75,3.75,0});
Anchor* Anchor137 = new Anchor();
Anchor137->setDescription("ArtDeco05 view");
Anchor137->setUrl(new String[1]{"#View05"}, 1);
Shape* Shape138 = new Shape();
Appearance* Appearance139 = new Appearance();
ProtoInstance* ProtoInstance140 = new ProtoInstance();
ProtoInstance140->setName("ArtDeco05");
Appearance139->setMaterial(ProtoInstance140);

Shape138->setAppearance(Appearance139);

Sphere* Sphere141 = new Sphere();
Sphere141->setUSE("Ball");
Shape138->setGeometry(Sphere141);

Anchor137->addChild(Shape138);

Transform136->addChild(Anchor137);

Transform* Transform142 = new Transform();
Transform142->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor143 = new Anchor();
Anchor143->setDescription("ArtDeco05");
Anchor143->setParameter(new String[1]{"target=_source"}, 1);
Anchor143->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05"}, 2);
Shape* Shape144 = new Shape();
Appearance* Appearance145 = new Appearance();
Material* Material146 = new Material();
Material146->setUSE("TextMat");
Appearance145->setMaterial(Material146);

Shape144->setAppearance(Appearance145);

Text* Text147 = new Text();
Text147->setString(new String[1]{"ArtDeco05"}, 1);
FontStyle* FontStyle148 = new FontStyle();
FontStyle148->setUSE("Style");
Text147->setFontStyle(FontStyle148);

Shape144->setGeometry(Text147);

Anchor143->addChild(Shape144);

Transform142->addChild(Anchor143);

Transform136->addChild(Transform142);

Group50->addChild(Transform136);

Viewpoint* Viewpoint149 = new Viewpoint();
Viewpoint149->setDEF("View06");
Viewpoint149->setDescription("ArtDeco06");
Viewpoint149->setPosition(new float[3]{-3.75,2.25,3});
Group50->addChild(Viewpoint149);

Transform* Transform150 = new Transform();
Transform150->setTranslation(new float[3]{-3.75,2.25,0});
Anchor* Anchor151 = new Anchor();
Anchor151->setDescription("ArtDeco06 view");
Anchor151->setUrl(new String[1]{"#View06"}, 1);
Shape* Shape152 = new Shape();
Appearance* Appearance153 = new Appearance();
ProtoInstance* ProtoInstance154 = new ProtoInstance();
ProtoInstance154->setName("ArtDeco06");
Appearance153->setMaterial(ProtoInstance154);

Shape152->setAppearance(Appearance153);

Sphere* Sphere155 = new Sphere();
Sphere155->setUSE("Ball");
Shape152->setGeometry(Sphere155);

Anchor151->addChild(Shape152);

Transform150->addChild(Anchor151);

Transform* Transform156 = new Transform();
Transform156->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor157 = new Anchor();
Anchor157->setDescription("ArtDeco06");
Anchor157->setParameter(new String[1]{"target=_source"}, 1);
Anchor157->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06"}, 2);
Shape* Shape158 = new Shape();
Appearance* Appearance159 = new Appearance();
Material* Material160 = new Material();
Material160->setUSE("TextMat");
Appearance159->setMaterial(Material160);

Shape158->setAppearance(Appearance159);

Text* Text161 = new Text();
Text161->setString(new String[1]{"ArtDeco06"}, 1);
FontStyle* FontStyle162 = new FontStyle();
FontStyle162->setUSE("Style");
Text161->setFontStyle(FontStyle162);

Shape158->setGeometry(Text161);

Anchor157->addChild(Shape158);

Transform156->addChild(Anchor157);

Transform150->addChild(Transform156);

Group50->addChild(Transform150);

Viewpoint* Viewpoint163 = new Viewpoint();
Viewpoint163->setDEF("View07");
Viewpoint163->setDescription("ArtDeco07");
Viewpoint163->setPosition(new float[3]{-2.25,2.25,3});
Group50->addChild(Viewpoint163);

Transform* Transform164 = new Transform();
Transform164->setTranslation(new float[3]{-2.25,2.25,0});
Anchor* Anchor165 = new Anchor();
Anchor165->setDescription("ArtDeco07 view");
Anchor165->setUrl(new String[1]{"#View07"}, 1);
Shape* Shape166 = new Shape();
Appearance* Appearance167 = new Appearance();
ProtoInstance* ProtoInstance168 = new ProtoInstance();
ProtoInstance168->setName("ArtDeco07");
Appearance167->setMaterial(ProtoInstance168);

Shape166->setAppearance(Appearance167);

Sphere* Sphere169 = new Sphere();
Sphere169->setUSE("Ball");
Shape166->setGeometry(Sphere169);

Anchor165->addChild(Shape166);

Transform164->addChild(Anchor165);

Transform* Transform170 = new Transform();
Transform170->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor171 = new Anchor();
Anchor171->setDescription("ArtDeco07");
Anchor171->setParameter(new String[1]{"target=_source"}, 1);
Anchor171->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07"}, 2);
Shape* Shape172 = new Shape();
Appearance* Appearance173 = new Appearance();
Material* Material174 = new Material();
Material174->setUSE("TextMat");
Appearance173->setMaterial(Material174);

Shape172->setAppearance(Appearance173);

Text* Text175 = new Text();
Text175->setString(new String[1]{"ArtDeco07"}, 1);
FontStyle* FontStyle176 = new FontStyle();
FontStyle176->setUSE("Style");
Text175->setFontStyle(FontStyle176);

Shape172->setGeometry(Text175);

Anchor171->addChild(Shape172);

Transform170->addChild(Anchor171);

Transform164->addChild(Transform170);

Group50->addChild(Transform164);

Viewpoint* Viewpoint177 = new Viewpoint();
Viewpoint177->setDEF("View08");
Viewpoint177->setDescription("ArtDeco08");
Viewpoint177->setPosition(new float[3]{-0.75,2.25,3});
Group50->addChild(Viewpoint177);

Transform* Transform178 = new Transform();
Transform178->setTranslation(new float[3]{-0.75,2.25,0});
Anchor* Anchor179 = new Anchor();
Anchor179->setDescription("ArtDeco08 view");
Anchor179->setUrl(new String[1]{"#View08"}, 1);
Shape* Shape180 = new Shape();
Appearance* Appearance181 = new Appearance();
ProtoInstance* ProtoInstance182 = new ProtoInstance();
ProtoInstance182->setName("ArtDeco08");
Appearance181->setMaterial(ProtoInstance182);

Shape180->setAppearance(Appearance181);

Sphere* Sphere183 = new Sphere();
Sphere183->setUSE("Ball");
Shape180->setGeometry(Sphere183);

Anchor179->addChild(Shape180);

Transform178->addChild(Anchor179);

Transform* Transform184 = new Transform();
Transform184->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor185 = new Anchor();
Anchor185->setDescription("ArtDeco08");
Anchor185->setParameter(new String[1]{"target=_source"}, 1);
Anchor185->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08"}, 2);
Shape* Shape186 = new Shape();
Appearance* Appearance187 = new Appearance();
Material* Material188 = new Material();
Material188->setUSE("TextMat");
Appearance187->setMaterial(Material188);

Shape186->setAppearance(Appearance187);

Text* Text189 = new Text();
Text189->setString(new String[1]{"ArtDeco08"}, 1);
FontStyle* FontStyle190 = new FontStyle();
FontStyle190->setUSE("Style");
Text189->setFontStyle(FontStyle190);

Shape186->setGeometry(Text189);

Anchor185->addChild(Shape186);

Transform184->addChild(Anchor185);

Transform178->addChild(Transform184);

Group50->addChild(Transform178);

Viewpoint* Viewpoint191 = new Viewpoint();
Viewpoint191->setDEF("View09");
Viewpoint191->setDescription("ArtDeco09");
Viewpoint191->setPosition(new float[3]{0.75,2.25,3});
Group50->addChild(Viewpoint191);

Transform* Transform192 = new Transform();
Transform192->setTranslation(new float[3]{0.75,2.25,0});
Anchor* Anchor193 = new Anchor();
Anchor193->setDescription("ArtDeco09 view");
Anchor193->setUrl(new String[1]{"#View09"}, 1);
Shape* Shape194 = new Shape();
Appearance* Appearance195 = new Appearance();
ProtoInstance* ProtoInstance196 = new ProtoInstance();
ProtoInstance196->setName("ArtDeco09");
Appearance195->setMaterial(ProtoInstance196);

Shape194->setAppearance(Appearance195);

Sphere* Sphere197 = new Sphere();
Sphere197->setUSE("Ball");
Shape194->setGeometry(Sphere197);

Anchor193->addChild(Shape194);

Transform192->addChild(Anchor193);

Transform* Transform198 = new Transform();
Transform198->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor199 = new Anchor();
Anchor199->setDescription("ArtDeco09");
Anchor199->setParameter(new String[1]{"target=_source"}, 1);
Anchor199->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09"}, 2);
Shape* Shape200 = new Shape();
Appearance* Appearance201 = new Appearance();
Material* Material202 = new Material();
Material202->setUSE("TextMat");
Appearance201->setMaterial(Material202);

Shape200->setAppearance(Appearance201);

Text* Text203 = new Text();
Text203->setString(new String[1]{"ArtDeco09"}, 1);
FontStyle* FontStyle204 = new FontStyle();
FontStyle204->setUSE("Style");
Text203->setFontStyle(FontStyle204);

Shape200->setGeometry(Text203);

Anchor199->addChild(Shape200);

Transform198->addChild(Anchor199);

Transform192->addChild(Transform198);

Group50->addChild(Transform192);

Viewpoint* Viewpoint205 = new Viewpoint();
Viewpoint205->setDEF("View10");
Viewpoint205->setDescription("ArtDeco10");
Viewpoint205->setPosition(new float[3]{2.25,2.25,3});
Group50->addChild(Viewpoint205);

Transform* Transform206 = new Transform();
Transform206->setTranslation(new float[3]{2.25,2.25,0});
Anchor* Anchor207 = new Anchor();
Anchor207->setDescription("ArtDeco10 view");
Anchor207->setUrl(new String[1]{"#View10"}, 1);
Shape* Shape208 = new Shape();
Appearance* Appearance209 = new Appearance();
ProtoInstance* ProtoInstance210 = new ProtoInstance();
ProtoInstance210->setName("ArtDeco10");
Appearance209->setMaterial(ProtoInstance210);

Shape208->setAppearance(Appearance209);

Sphere* Sphere211 = new Sphere();
Sphere211->setUSE("Ball");
Shape208->setGeometry(Sphere211);

Anchor207->addChild(Shape208);

Transform206->addChild(Anchor207);

Transform* Transform212 = new Transform();
Transform212->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor213 = new Anchor();
Anchor213->setDescription("ArtDeco10");
Anchor213->setParameter(new String[1]{"target=_source"}, 1);
Anchor213->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10"}, 2);
Shape* Shape214 = new Shape();
Appearance* Appearance215 = new Appearance();
Material* Material216 = new Material();
Material216->setUSE("TextMat");
Appearance215->setMaterial(Material216);

Shape214->setAppearance(Appearance215);

Text* Text217 = new Text();
Text217->setString(new String[1]{"ArtDeco10"}, 1);
FontStyle* FontStyle218 = new FontStyle();
FontStyle218->setUSE("Style");
Text217->setFontStyle(FontStyle218);

Shape214->setGeometry(Text217);

Anchor213->addChild(Shape214);

Transform212->addChild(Anchor213);

Transform206->addChild(Transform212);

Group50->addChild(Transform206);

Viewpoint* Viewpoint219 = new Viewpoint();
Viewpoint219->setDEF("View11");
Viewpoint219->setDescription("ArtDeco11");
Viewpoint219->setPosition(new float[3]{3.75,2.25,3});
Group50->addChild(Viewpoint219);

Transform* Transform220 = new Transform();
Transform220->setTranslation(new float[3]{3.75,2.25,0});
Anchor* Anchor221 = new Anchor();
Anchor221->setDescription("ArtDeco11 view");
Anchor221->setUrl(new String[1]{"#View11"}, 1);
Shape* Shape222 = new Shape();
Appearance* Appearance223 = new Appearance();
ProtoInstance* ProtoInstance224 = new ProtoInstance();
ProtoInstance224->setName("ArtDeco11");
Appearance223->setMaterial(ProtoInstance224);

Shape222->setAppearance(Appearance223);

Sphere* Sphere225 = new Sphere();
Sphere225->setUSE("Ball");
Shape222->setGeometry(Sphere225);

Anchor221->addChild(Shape222);

Transform220->addChild(Anchor221);

Transform* Transform226 = new Transform();
Transform226->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor227 = new Anchor();
Anchor227->setDescription("ArtDeco11");
Anchor227->setParameter(new String[1]{"target=_source"}, 1);
Anchor227->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11"}, 2);
Shape* Shape228 = new Shape();
Appearance* Appearance229 = new Appearance();
Material* Material230 = new Material();
Material230->setUSE("TextMat");
Appearance229->setMaterial(Material230);

Shape228->setAppearance(Appearance229);

Text* Text231 = new Text();
Text231->setString(new String[1]{"ArtDeco11"}, 1);
FontStyle* FontStyle232 = new FontStyle();
FontStyle232->setUSE("Style");
Text231->setFontStyle(FontStyle232);

Shape228->setGeometry(Text231);

Anchor227->addChild(Shape228);

Transform226->addChild(Anchor227);

Transform220->addChild(Transform226);

Group50->addChild(Transform220);

Viewpoint* Viewpoint233 = new Viewpoint();
Viewpoint233->setDEF("View12");
Viewpoint233->setDescription("ArtDeco12");
Viewpoint233->setPosition(new float[3]{-3.75,0.75,3});
Group50->addChild(Viewpoint233);

Transform* Transform234 = new Transform();
Transform234->setTranslation(new float[3]{-3.75,0.75,0});
Anchor* Anchor235 = new Anchor();
Anchor235->setDescription("ArtDeco12 view");
Anchor235->setUrl(new String[1]{"#View12"}, 1);
Shape* Shape236 = new Shape();
Appearance* Appearance237 = new Appearance();
ProtoInstance* ProtoInstance238 = new ProtoInstance();
ProtoInstance238->setName("ArtDeco12");
Appearance237->setMaterial(ProtoInstance238);

Shape236->setAppearance(Appearance237);

Sphere* Sphere239 = new Sphere();
Sphere239->setUSE("Ball");
Shape236->setGeometry(Sphere239);

Anchor235->addChild(Shape236);

Transform234->addChild(Anchor235);

Transform* Transform240 = new Transform();
Transform240->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor241 = new Anchor();
Anchor241->setDescription("ArtDeco12");
Anchor241->setParameter(new String[1]{"target=_source"}, 1);
Anchor241->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12"}, 2);
Shape* Shape242 = new Shape();
Appearance* Appearance243 = new Appearance();
Material* Material244 = new Material();
Material244->setUSE("TextMat");
Appearance243->setMaterial(Material244);

Shape242->setAppearance(Appearance243);

Text* Text245 = new Text();
Text245->setString(new String[1]{"ArtDeco12"}, 1);
FontStyle* FontStyle246 = new FontStyle();
FontStyle246->setUSE("Style");
Text245->setFontStyle(FontStyle246);

Shape242->setGeometry(Text245);

Anchor241->addChild(Shape242);

Transform240->addChild(Anchor241);

Transform234->addChild(Transform240);

Group50->addChild(Transform234);

Viewpoint* Viewpoint247 = new Viewpoint();
Viewpoint247->setDEF("View13");
Viewpoint247->setDescription("ArtDeco13");
Viewpoint247->setPosition(new float[3]{-2.25,0.75,3});
Group50->addChild(Viewpoint247);

Transform* Transform248 = new Transform();
Transform248->setTranslation(new float[3]{-2.25,0.75,0});
Anchor* Anchor249 = new Anchor();
Anchor249->setDescription("ArtDeco13 view");
Anchor249->setUrl(new String[1]{"#View13"}, 1);
Shape* Shape250 = new Shape();
Appearance* Appearance251 = new Appearance();
ProtoInstance* ProtoInstance252 = new ProtoInstance();
ProtoInstance252->setName("ArtDeco13");
Appearance251->setMaterial(ProtoInstance252);

Shape250->setAppearance(Appearance251);

Sphere* Sphere253 = new Sphere();
Sphere253->setUSE("Ball");
Shape250->setGeometry(Sphere253);

Anchor249->addChild(Shape250);

Transform248->addChild(Anchor249);

Transform* Transform254 = new Transform();
Transform254->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor255 = new Anchor();
Anchor255->setDescription("ArtDeco13");
Anchor255->setParameter(new String[1]{"target=_source"}, 1);
Anchor255->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco3","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco13"}, 2);
Shape* Shape256 = new Shape();
Appearance* Appearance257 = new Appearance();
Material* Material258 = new Material();
Material258->setUSE("TextMat");
Appearance257->setMaterial(Material258);

Shape256->setAppearance(Appearance257);

Text* Text259 = new Text();
Text259->setString(new String[1]{"ArtDeco13"}, 1);
FontStyle* FontStyle260 = new FontStyle();
FontStyle260->setUSE("Style");
Text259->setFontStyle(FontStyle260);

Shape256->setGeometry(Text259);

Anchor255->addChild(Shape256);

Transform254->addChild(Anchor255);

Transform248->addChild(Transform254);

Group50->addChild(Transform248);

Viewpoint* Viewpoint261 = new Viewpoint();
Viewpoint261->setDEF("View14");
Viewpoint261->setDescription("ArtDeco14");
Viewpoint261->setPosition(new float[3]{-0.75,0.75,3});
Group50->addChild(Viewpoint261);

Transform* Transform262 = new Transform();
Transform262->setTranslation(new float[3]{-0.75,0.75,0});
Anchor* Anchor263 = new Anchor();
Anchor263->setDescription("ArtDeco14 view");
Anchor263->setUrl(new String[1]{"#View14"}, 1);
Shape* Shape264 = new Shape();
Appearance* Appearance265 = new Appearance();
ProtoInstance* ProtoInstance266 = new ProtoInstance();
ProtoInstance266->setName("ArtDeco14");
Appearance265->setMaterial(ProtoInstance266);

Shape264->setAppearance(Appearance265);

Sphere* Sphere267 = new Sphere();
Sphere267->setUSE("Ball");
Shape264->setGeometry(Sphere267);

Anchor263->addChild(Shape264);

Transform262->addChild(Anchor263);

Transform* Transform268 = new Transform();
Transform268->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor269 = new Anchor();
Anchor269->setDescription("ArtDeco14");
Anchor269->setParameter(new String[1]{"target=_source"}, 1);
Anchor269->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco4","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco14"}, 2);
Shape* Shape270 = new Shape();
Appearance* Appearance271 = new Appearance();
Material* Material272 = new Material();
Material272->setUSE("TextMat");
Appearance271->setMaterial(Material272);

Shape270->setAppearance(Appearance271);

Text* Text273 = new Text();
Text273->setString(new String[1]{"ArtDeco14"}, 1);
FontStyle* FontStyle274 = new FontStyle();
FontStyle274->setUSE("Style");
Text273->setFontStyle(FontStyle274);

Shape270->setGeometry(Text273);

Anchor269->addChild(Shape270);

Transform268->addChild(Anchor269);

Transform262->addChild(Transform268);

Group50->addChild(Transform262);

Viewpoint* Viewpoint275 = new Viewpoint();
Viewpoint275->setDEF("View15");
Viewpoint275->setDescription("ArtDeco15");
Viewpoint275->setPosition(new float[3]{0.75,0.75,3});
Group50->addChild(Viewpoint275);

Transform* Transform276 = new Transform();
Transform276->setTranslation(new float[3]{0.75,0.75,0});
Anchor* Anchor277 = new Anchor();
Anchor277->setDescription("ArtDeco15 view");
Anchor277->setUrl(new String[1]{"#View15"}, 1);
Shape* Shape278 = new Shape();
Appearance* Appearance279 = new Appearance();
ProtoInstance* ProtoInstance280 = new ProtoInstance();
ProtoInstance280->setName("ArtDeco15");
Appearance279->setMaterial(ProtoInstance280);

Shape278->setAppearance(Appearance279);

Sphere* Sphere281 = new Sphere();
Sphere281->setUSE("Ball");
Shape278->setGeometry(Sphere281);

Anchor277->addChild(Shape278);

Transform276->addChild(Anchor277);

Transform* Transform282 = new Transform();
Transform282->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor283 = new Anchor();
Anchor283->setDescription("ArtDeco15");
Anchor283->setParameter(new String[1]{"target=_source"}, 1);
Anchor283->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco5","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco15"}, 2);
Shape* Shape284 = new Shape();
Appearance* Appearance285 = new Appearance();
Material* Material286 = new Material();
Material286->setUSE("TextMat");
Appearance285->setMaterial(Material286);

Shape284->setAppearance(Appearance285);

Text* Text287 = new Text();
Text287->setString(new String[1]{"ArtDeco15"}, 1);
FontStyle* FontStyle288 = new FontStyle();
FontStyle288->setUSE("Style");
Text287->setFontStyle(FontStyle288);

Shape284->setGeometry(Text287);

Anchor283->addChild(Shape284);

Transform282->addChild(Anchor283);

Transform276->addChild(Transform282);

Group50->addChild(Transform276);

Viewpoint* Viewpoint289 = new Viewpoint();
Viewpoint289->setDEF("View16");
Viewpoint289->setDescription("ArtDeco16");
Viewpoint289->setPosition(new float[3]{2.25,0.75,3});
Group50->addChild(Viewpoint289);

Transform* Transform290 = new Transform();
Transform290->setTranslation(new float[3]{2.25,0.75,0});
Anchor* Anchor291 = new Anchor();
Anchor291->setDescription("ArtDeco16 view");
Anchor291->setUrl(new String[1]{"#View16"}, 1);
Shape* Shape292 = new Shape();
Appearance* Appearance293 = new Appearance();
ProtoInstance* ProtoInstance294 = new ProtoInstance();
ProtoInstance294->setName("ArtDeco16");
Appearance293->setMaterial(ProtoInstance294);

Shape292->setAppearance(Appearance293);

Sphere* Sphere295 = new Sphere();
Sphere295->setUSE("Ball");
Shape292->setGeometry(Sphere295);

Anchor291->addChild(Shape292);

Transform290->addChild(Anchor291);

Transform* Transform296 = new Transform();
Transform296->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor297 = new Anchor();
Anchor297->setDescription("ArtDeco16");
Anchor297->setParameter(new String[1]{"target=_source"}, 1);
Anchor297->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16"}, 2);
Shape* Shape298 = new Shape();
Appearance* Appearance299 = new Appearance();
Material* Material300 = new Material();
Material300->setUSE("TextMat");
Appearance299->setMaterial(Material300);

Shape298->setAppearance(Appearance299);

Text* Text301 = new Text();
Text301->setString(new String[1]{"ArtDeco16"}, 1);
FontStyle* FontStyle302 = new FontStyle();
FontStyle302->setUSE("Style");
Text301->setFontStyle(FontStyle302);

Shape298->setGeometry(Text301);

Anchor297->addChild(Shape298);

Transform296->addChild(Anchor297);

Transform290->addChild(Transform296);

Group50->addChild(Transform290);

Viewpoint* Viewpoint303 = new Viewpoint();
Viewpoint303->setDEF("View17");
Viewpoint303->setDescription("ArtDeco17");
Viewpoint303->setPosition(new float[3]{3.75,0.75,3});
Group50->addChild(Viewpoint303);

Transform* Transform304 = new Transform();
Transform304->setTranslation(new float[3]{3.75,0.75,0});
Anchor* Anchor305 = new Anchor();
Anchor305->setDescription("ArtDeco17 view");
Anchor305->setUrl(new String[1]{"#View17"}, 1);
Shape* Shape306 = new Shape();
Appearance* Appearance307 = new Appearance();
ProtoInstance* ProtoInstance308 = new ProtoInstance();
ProtoInstance308->setName("ArtDeco17");
Appearance307->setMaterial(ProtoInstance308);

Shape306->setAppearance(Appearance307);

Sphere* Sphere309 = new Sphere();
Sphere309->setUSE("Ball");
Shape306->setGeometry(Sphere309);

Anchor305->addChild(Shape306);

Transform304->addChild(Anchor305);

Transform* Transform310 = new Transform();
Transform310->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor311 = new Anchor();
Anchor311->setDescription("ArtDeco17");
Anchor311->setParameter(new String[1]{"target=_source"}, 1);
Anchor311->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco7","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco17"}, 2);
Shape* Shape312 = new Shape();
Appearance* Appearance313 = new Appearance();
Material* Material314 = new Material();
Material314->setUSE("TextMat");
Appearance313->setMaterial(Material314);

Shape312->setAppearance(Appearance313);

Text* Text315 = new Text();
Text315->setString(new String[1]{"ArtDeco17"}, 1);
FontStyle* FontStyle316 = new FontStyle();
FontStyle316->setUSE("Style");
Text315->setFontStyle(FontStyle316);

Shape312->setGeometry(Text315);

Anchor311->addChild(Shape312);

Transform310->addChild(Anchor311);

Transform304->addChild(Transform310);

Group50->addChild(Transform304);

Viewpoint* Viewpoint317 = new Viewpoint();
Viewpoint317->setDEF("View18");
Viewpoint317->setDescription("ArtDeco18");
Viewpoint317->setPosition(new float[3]{-3.75,-0.75,3});
Group50->addChild(Viewpoint317);

Transform* Transform318 = new Transform();
Transform318->setTranslation(new float[3]{-3.75,-0.75,0});
Anchor* Anchor319 = new Anchor();
Anchor319->setDescription("ArtDeco18 view");
Anchor319->setUrl(new String[1]{"#View18"}, 1);
Shape* Shape320 = new Shape();
Appearance* Appearance321 = new Appearance();
ProtoInstance* ProtoInstance322 = new ProtoInstance();
ProtoInstance322->setName("ArtDeco18");
Appearance321->setMaterial(ProtoInstance322);

Shape320->setAppearance(Appearance321);

Sphere* Sphere323 = new Sphere();
Sphere323->setUSE("Ball");
Shape320->setGeometry(Sphere323);

Anchor319->addChild(Shape320);

Transform318->addChild(Anchor319);

Transform* Transform324 = new Transform();
Transform324->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor325 = new Anchor();
Anchor325->setDescription("ArtDeco18");
Anchor325->setParameter(new String[1]{"target=_source"}, 1);
Anchor325->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18"}, 2);
Shape* Shape326 = new Shape();
Appearance* Appearance327 = new Appearance();
Material* Material328 = new Material();
Material328->setUSE("TextMat");
Appearance327->setMaterial(Material328);

Shape326->setAppearance(Appearance327);

Text* Text329 = new Text();
Text329->setString(new String[1]{"ArtDeco18"}, 1);
FontStyle* FontStyle330 = new FontStyle();
FontStyle330->setUSE("Style");
Text329->setFontStyle(FontStyle330);

Shape326->setGeometry(Text329);

Anchor325->addChild(Shape326);

Transform324->addChild(Anchor325);

Transform318->addChild(Transform324);

Group50->addChild(Transform318);

Viewpoint* Viewpoint331 = new Viewpoint();
Viewpoint331->setDEF("View19");
Viewpoint331->setDescription("ArtDeco19");
Viewpoint331->setPosition(new float[3]{-2.25,-0.75,3});
Group50->addChild(Viewpoint331);

Transform* Transform332 = new Transform();
Transform332->setTranslation(new float[3]{-2.25,-0.75,0});
Anchor* Anchor333 = new Anchor();
Anchor333->setDescription("ArtDeco19 view");
Anchor333->setUrl(new String[1]{"#View19"}, 1);
Shape* Shape334 = new Shape();
Appearance* Appearance335 = new Appearance();
ProtoInstance* ProtoInstance336 = new ProtoInstance();
ProtoInstance336->setName("ArtDeco19");
Appearance335->setMaterial(ProtoInstance336);

Shape334->setAppearance(Appearance335);

Sphere* Sphere337 = new Sphere();
Sphere337->setUSE("Ball");
Shape334->setGeometry(Sphere337);

Anchor333->addChild(Shape334);

Transform332->addChild(Anchor333);

Transform* Transform338 = new Transform();
Transform338->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor339 = new Anchor();
Anchor339->setDescription("ArtDeco19");
Anchor339->setParameter(new String[1]{"target=_source"}, 1);
Anchor339->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco9","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco19"}, 2);
Shape* Shape340 = new Shape();
Appearance* Appearance341 = new Appearance();
Material* Material342 = new Material();
Material342->setUSE("TextMat");
Appearance341->setMaterial(Material342);

Shape340->setAppearance(Appearance341);

Text* Text343 = new Text();
Text343->setString(new String[1]{"ArtDeco19"}, 1);
FontStyle* FontStyle344 = new FontStyle();
FontStyle344->setUSE("Style");
Text343->setFontStyle(FontStyle344);

Shape340->setGeometry(Text343);

Anchor339->addChild(Shape340);

Transform338->addChild(Anchor339);

Transform332->addChild(Transform338);

Group50->addChild(Transform332);

Viewpoint* Viewpoint345 = new Viewpoint();
Viewpoint345->setDEF("View20");
Viewpoint345->setDescription("ArtDeco20");
Viewpoint345->setPosition(new float[3]{-0.75,-0.75,3});
Group50->addChild(Viewpoint345);

Transform* Transform346 = new Transform();
Transform346->setTranslation(new float[3]{-0.75,-0.75,0});
Anchor* Anchor347 = new Anchor();
Anchor347->setDescription("ArtDeco20 view");
Anchor347->setUrl(new String[1]{"#View20"}, 1);
Shape* Shape348 = new Shape();
Appearance* Appearance349 = new Appearance();
ProtoInstance* ProtoInstance350 = new ProtoInstance();
ProtoInstance350->setName("ArtDeco20");
Appearance349->setMaterial(ProtoInstance350);

Shape348->setAppearance(Appearance349);

Sphere* Sphere351 = new Sphere();
Sphere351->setUSE("Ball");
Shape348->setGeometry(Sphere351);

Anchor347->addChild(Shape348);

Transform346->addChild(Anchor347);

Transform* Transform352 = new Transform();
Transform352->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor353 = new Anchor();
Anchor353->setDescription("ArtDeco20");
Anchor353->setParameter(new String[1]{"target=_source"}, 1);
Anchor353->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20"}, 2);
Shape* Shape354 = new Shape();
Appearance* Appearance355 = new Appearance();
Material* Material356 = new Material();
Material356->setUSE("TextMat");
Appearance355->setMaterial(Material356);

Shape354->setAppearance(Appearance355);

Text* Text357 = new Text();
Text357->setString(new String[1]{"ArtDeco20"}, 1);
FontStyle* FontStyle358 = new FontStyle();
FontStyle358->setUSE("Style");
Text357->setFontStyle(FontStyle358);

Shape354->setGeometry(Text357);

Anchor353->addChild(Shape354);

Transform352->addChild(Anchor353);

Transform346->addChild(Transform352);

Group50->addChild(Transform346);

Viewpoint* Viewpoint359 = new Viewpoint();
Viewpoint359->setDEF("View21");
Viewpoint359->setDescription("ArtDeco21");
Viewpoint359->setPosition(new float[3]{0.75,-0.75,3});
Group50->addChild(Viewpoint359);

Transform* Transform360 = new Transform();
Transform360->setTranslation(new float[3]{0.75,-0.75,0});
Anchor* Anchor361 = new Anchor();
Anchor361->setDescription("ArtDeco21 view");
Anchor361->setUrl(new String[1]{"#View21"}, 1);
Shape* Shape362 = new Shape();
Appearance* Appearance363 = new Appearance();
ProtoInstance* ProtoInstance364 = new ProtoInstance();
ProtoInstance364->setName("ArtDeco21");
Appearance363->setMaterial(ProtoInstance364);

Shape362->setAppearance(Appearance363);

Sphere* Sphere365 = new Sphere();
Sphere365->setUSE("Ball");
Shape362->setGeometry(Sphere365);

Anchor361->addChild(Shape362);

Transform360->addChild(Anchor361);

Transform* Transform366 = new Transform();
Transform366->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor367 = new Anchor();
Anchor367->setDescription("ArtDeco21");
Anchor367->setParameter(new String[1]{"target=_source"}, 1);
Anchor367->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21"}, 2);
Shape* Shape368 = new Shape();
Appearance* Appearance369 = new Appearance();
Material* Material370 = new Material();
Material370->setUSE("TextMat");
Appearance369->setMaterial(Material370);

Shape368->setAppearance(Appearance369);

Text* Text371 = new Text();
Text371->setString(new String[1]{"ArtDeco21"}, 1);
FontStyle* FontStyle372 = new FontStyle();
FontStyle372->setUSE("Style");
Text371->setFontStyle(FontStyle372);

Shape368->setGeometry(Text371);

Anchor367->addChild(Shape368);

Transform366->addChild(Anchor367);

Transform360->addChild(Transform366);

Group50->addChild(Transform360);

Viewpoint* Viewpoint373 = new Viewpoint();
Viewpoint373->setDEF("View22");
Viewpoint373->setDescription("ArtDeco22");
Viewpoint373->setPosition(new float[3]{2.25,-0.75,3});
Group50->addChild(Viewpoint373);

Transform* Transform374 = new Transform();
Transform374->setTranslation(new float[3]{2.25,-0.75,0});
Anchor* Anchor375 = new Anchor();
Anchor375->setDescription("ArtDeco22 view");
Anchor375->setUrl(new String[1]{"#View22"}, 1);
Shape* Shape376 = new Shape();
Appearance* Appearance377 = new Appearance();
ProtoInstance* ProtoInstance378 = new ProtoInstance();
ProtoInstance378->setName("ArtDeco22");
Appearance377->setMaterial(ProtoInstance378);

Shape376->setAppearance(Appearance377);

Sphere* Sphere379 = new Sphere();
Sphere379->setUSE("Ball");
Shape376->setGeometry(Sphere379);

Anchor375->addChild(Shape376);

Transform374->addChild(Anchor375);

Transform* Transform380 = new Transform();
Transform380->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor381 = new Anchor();
Anchor381->setDescription("ArtDeco22");
Anchor381->setParameter(new String[1]{"target=_source"}, 1);
Anchor381->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22"}, 2);
Shape* Shape382 = new Shape();
Appearance* Appearance383 = new Appearance();
Material* Material384 = new Material();
Material384->setUSE("TextMat");
Appearance383->setMaterial(Material384);

Shape382->setAppearance(Appearance383);

Text* Text385 = new Text();
Text385->setString(new String[1]{"ArtDeco22"}, 1);
FontStyle* FontStyle386 = new FontStyle();
FontStyle386->setUSE("Style");
Text385->setFontStyle(FontStyle386);

Shape382->setGeometry(Text385);

Anchor381->addChild(Shape382);

Transform380->addChild(Anchor381);

Transform374->addChild(Transform380);

Group50->addChild(Transform374);

Viewpoint* Viewpoint387 = new Viewpoint();
Viewpoint387->setDEF("View23");
Viewpoint387->setDescription("ArtDeco23");
Viewpoint387->setPosition(new float[3]{3.75,-0.75,3});
Group50->addChild(Viewpoint387);

Transform* Transform388 = new Transform();
Transform388->setTranslation(new float[3]{3.75,-0.75,0});
Anchor* Anchor389 = new Anchor();
Anchor389->setDescription("ArtDeco23 view");
Anchor389->setUrl(new String[1]{"#View23"}, 1);
Shape* Shape390 = new Shape();
Appearance* Appearance391 = new Appearance();
ProtoInstance* ProtoInstance392 = new ProtoInstance();
ProtoInstance392->setName("ArtDeco23");
Appearance391->setMaterial(ProtoInstance392);

Shape390->setAppearance(Appearance391);

Sphere* Sphere393 = new Sphere();
Sphere393->setUSE("Ball");
Shape390->setGeometry(Sphere393);

Anchor389->addChild(Shape390);

Transform388->addChild(Anchor389);

Transform* Transform394 = new Transform();
Transform394->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor395 = new Anchor();
Anchor395->setDescription("ArtDeco23");
Anchor395->setParameter(new String[1]{"target=_source"}, 1);
Anchor395->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23"}, 2);
Shape* Shape396 = new Shape();
Appearance* Appearance397 = new Appearance();
Material* Material398 = new Material();
Material398->setUSE("TextMat");
Appearance397->setMaterial(Material398);

Shape396->setAppearance(Appearance397);

Text* Text399 = new Text();
Text399->setString(new String[1]{"ArtDeco23"}, 1);
FontStyle* FontStyle400 = new FontStyle();
FontStyle400->setUSE("Style");
Text399->setFontStyle(FontStyle400);

Shape396->setGeometry(Text399);

Anchor395->addChild(Shape396);

Transform394->addChild(Anchor395);

Transform388->addChild(Transform394);

Group50->addChild(Transform388);

Viewpoint* Viewpoint401 = new Viewpoint();
Viewpoint401->setDEF("View24");
Viewpoint401->setDescription("ArtDeco24");
Viewpoint401->setPosition(new float[3]{-3.75,-2.25,3});
Group50->addChild(Viewpoint401);

Transform* Transform402 = new Transform();
Transform402->setTranslation(new float[3]{-3.75,-2.25,0});
Anchor* Anchor403 = new Anchor();
Anchor403->setDescription("ArtDeco24 view");
Anchor403->setUrl(new String[1]{"#View24"}, 1);
Shape* Shape404 = new Shape();
Appearance* Appearance405 = new Appearance();
ProtoInstance* ProtoInstance406 = new ProtoInstance();
ProtoInstance406->setName("ArtDeco24");
Appearance405->setMaterial(ProtoInstance406);

Shape404->setAppearance(Appearance405);

Sphere* Sphere407 = new Sphere();
Sphere407->setUSE("Ball");
Shape404->setGeometry(Sphere407);

Anchor403->addChild(Shape404);

Transform402->addChild(Anchor403);

Transform* Transform408 = new Transform();
Transform408->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor409 = new Anchor();
Anchor409->setDescription("ArtDeco24");
Anchor409->setParameter(new String[1]{"target=_source"}, 1);
Anchor409->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24"}, 2);
Shape* Shape410 = new Shape();
Appearance* Appearance411 = new Appearance();
Material* Material412 = new Material();
Material412->setUSE("TextMat");
Appearance411->setMaterial(Material412);

Shape410->setAppearance(Appearance411);

Text* Text413 = new Text();
Text413->setString(new String[1]{"ArtDeco24"}, 1);
FontStyle* FontStyle414 = new FontStyle();
FontStyle414->setUSE("Style");
Text413->setFontStyle(FontStyle414);

Shape410->setGeometry(Text413);

Anchor409->addChild(Shape410);

Transform408->addChild(Anchor409);

Transform402->addChild(Transform408);

Group50->addChild(Transform402);

Viewpoint* Viewpoint415 = new Viewpoint();
Viewpoint415->setDEF("View25");
Viewpoint415->setDescription("ArtDeco25");
Viewpoint415->setPosition(new float[3]{-2.25,-2.25,3});
Group50->addChild(Viewpoint415);

Transform* Transform416 = new Transform();
Transform416->setTranslation(new float[3]{-2.25,-2.25,0});
Anchor* Anchor417 = new Anchor();
Anchor417->setDescription("ArtDeco25 view");
Anchor417->setUrl(new String[1]{"#View25"}, 1);
Shape* Shape418 = new Shape();
Appearance* Appearance419 = new Appearance();
ProtoInstance* ProtoInstance420 = new ProtoInstance();
ProtoInstance420->setName("ArtDeco25");
Appearance419->setMaterial(ProtoInstance420);

Shape418->setAppearance(Appearance419);

Sphere* Sphere421 = new Sphere();
Sphere421->setUSE("Ball");
Shape418->setGeometry(Sphere421);

Anchor417->addChild(Shape418);

Transform416->addChild(Anchor417);

Transform* Transform422 = new Transform();
Transform422->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor423 = new Anchor();
Anchor423->setDescription("ArtDeco25");
Anchor423->setParameter(new String[1]{"target=_source"}, 1);
Anchor423->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25"}, 2);
Shape* Shape424 = new Shape();
Appearance* Appearance425 = new Appearance();
Material* Material426 = new Material();
Material426->setUSE("TextMat");
Appearance425->setMaterial(Material426);

Shape424->setAppearance(Appearance425);

Text* Text427 = new Text();
Text427->setString(new String[1]{"ArtDeco25"}, 1);
FontStyle* FontStyle428 = new FontStyle();
FontStyle428->setUSE("Style");
Text427->setFontStyle(FontStyle428);

Shape424->setGeometry(Text427);

Anchor423->addChild(Shape424);

Transform422->addChild(Anchor423);

Transform416->addChild(Transform422);

Group50->addChild(Transform416);

Viewpoint* Viewpoint429 = new Viewpoint();
Viewpoint429->setDEF("View26");
Viewpoint429->setDescription("ArtDeco26");
Viewpoint429->setPosition(new float[3]{-0.75,-2.25,3});
Group50->addChild(Viewpoint429);

Transform* Transform430 = new Transform();
Transform430->setTranslation(new float[3]{-0.75,-2.25,0});
Anchor* Anchor431 = new Anchor();
Anchor431->setDescription("ArtDeco26 view");
Anchor431->setUrl(new String[1]{"#View26"}, 1);
Shape* Shape432 = new Shape();
Appearance* Appearance433 = new Appearance();
ProtoInstance* ProtoInstance434 = new ProtoInstance();
ProtoInstance434->setName("ArtDeco26");
Appearance433->setMaterial(ProtoInstance434);

Shape432->setAppearance(Appearance433);

Sphere* Sphere435 = new Sphere();
Sphere435->setUSE("Ball");
Shape432->setGeometry(Sphere435);

Anchor431->addChild(Shape432);

Transform430->addChild(Anchor431);

Transform* Transform436 = new Transform();
Transform436->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor437 = new Anchor();
Anchor437->setDescription("ArtDeco26");
Anchor437->setParameter(new String[1]{"target=_source"}, 1);
Anchor437->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26"}, 2);
Shape* Shape438 = new Shape();
Appearance* Appearance439 = new Appearance();
Material* Material440 = new Material();
Material440->setUSE("TextMat");
Appearance439->setMaterial(Material440);

Shape438->setAppearance(Appearance439);

Text* Text441 = new Text();
Text441->setString(new String[1]{"ArtDeco26"}, 1);
FontStyle* FontStyle442 = new FontStyle();
FontStyle442->setUSE("Style");
Text441->setFontStyle(FontStyle442);

Shape438->setGeometry(Text441);

Anchor437->addChild(Shape438);

Transform436->addChild(Anchor437);

Transform430->addChild(Transform436);

Group50->addChild(Transform430);

Viewpoint* Viewpoint443 = new Viewpoint();
Viewpoint443->setDEF("View27");
Viewpoint443->setDescription("ArtDeco27");
Viewpoint443->setPosition(new float[3]{0.75,-2.25,3});
Group50->addChild(Viewpoint443);

Transform* Transform444 = new Transform();
Transform444->setTranslation(new float[3]{0.75,-2.25,0});
Anchor* Anchor445 = new Anchor();
Anchor445->setDescription("ArtDeco27 view");
Anchor445->setUrl(new String[1]{"#View27"}, 1);
Shape* Shape446 = new Shape();
Appearance* Appearance447 = new Appearance();
ProtoInstance* ProtoInstance448 = new ProtoInstance();
ProtoInstance448->setName("ArtDeco27");
Appearance447->setMaterial(ProtoInstance448);

Shape446->setAppearance(Appearance447);

Sphere* Sphere449 = new Sphere();
Sphere449->setUSE("Ball");
Shape446->setGeometry(Sphere449);

Anchor445->addChild(Shape446);

Transform444->addChild(Anchor445);

Transform* Transform450 = new Transform();
Transform450->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor451 = new Anchor();
Anchor451->setDescription("ArtDeco27");
Anchor451->setParameter(new String[1]{"target=_source"}, 1);
Anchor451->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27"}, 2);
Shape* Shape452 = new Shape();
Appearance* Appearance453 = new Appearance();
Material* Material454 = new Material();
Material454->setUSE("TextMat");
Appearance453->setMaterial(Material454);

Shape452->setAppearance(Appearance453);

Text* Text455 = new Text();
Text455->setString(new String[1]{"ArtDeco27"}, 1);
FontStyle* FontStyle456 = new FontStyle();
FontStyle456->setUSE("Style");
Text455->setFontStyle(FontStyle456);

Shape452->setGeometry(Text455);

Anchor451->addChild(Shape452);

Transform450->addChild(Anchor451);

Transform444->addChild(Transform450);

Group50->addChild(Transform444);

Viewpoint* Viewpoint457 = new Viewpoint();
Viewpoint457->setDEF("View28");
Viewpoint457->setDescription("ArtDeco28");
Viewpoint457->setPosition(new float[3]{2.25,-2.25,3});
Group50->addChild(Viewpoint457);

Transform* Transform458 = new Transform();
Transform458->setTranslation(new float[3]{2.25,-2.25,0});
Anchor* Anchor459 = new Anchor();
Anchor459->setDescription("ArtDeco28 view");
Anchor459->setUrl(new String[1]{"#View28"}, 1);
Shape* Shape460 = new Shape();
Appearance* Appearance461 = new Appearance();
ProtoInstance* ProtoInstance462 = new ProtoInstance();
ProtoInstance462->setName("ArtDeco28");
Appearance461->setMaterial(ProtoInstance462);

Shape460->setAppearance(Appearance461);

Sphere* Sphere463 = new Sphere();
Sphere463->setUSE("Ball");
Shape460->setGeometry(Sphere463);

Anchor459->addChild(Shape460);

Transform458->addChild(Anchor459);

Transform* Transform464 = new Transform();
Transform464->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor465 = new Anchor();
Anchor465->setDescription("ArtDeco28");
Anchor465->setParameter(new String[1]{"target=_source"}, 1);
Anchor465->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28"}, 2);
Shape* Shape466 = new Shape();
Appearance* Appearance467 = new Appearance();
Material* Material468 = new Material();
Material468->setUSE("TextMat");
Appearance467->setMaterial(Material468);

Shape466->setAppearance(Appearance467);

Text* Text469 = new Text();
Text469->setString(new String[1]{"ArtDeco28"}, 1);
FontStyle* FontStyle470 = new FontStyle();
FontStyle470->setUSE("Style");
Text469->setFontStyle(FontStyle470);

Shape466->setGeometry(Text469);

Anchor465->addChild(Shape466);

Transform464->addChild(Anchor465);

Transform458->addChild(Transform464);

Group50->addChild(Transform458);

Viewpoint* Viewpoint471 = new Viewpoint();
Viewpoint471->setDEF("View29");
Viewpoint471->setDescription("ArtDeco29");
Viewpoint471->setPosition(new float[3]{3.75,-2.25,3});
Group50->addChild(Viewpoint471);

Transform* Transform472 = new Transform();
Transform472->setTranslation(new float[3]{3.75,-2.25,0});
Anchor* Anchor473 = new Anchor();
Anchor473->setDescription("ArtDeco29 view");
Anchor473->setUrl(new String[1]{"#View29"}, 1);
Shape* Shape474 = new Shape();
Appearance* Appearance475 = new Appearance();
ProtoInstance* ProtoInstance476 = new ProtoInstance();
ProtoInstance476->setName("ArtDeco29");
Appearance475->setMaterial(ProtoInstance476);

Shape474->setAppearance(Appearance475);

Sphere* Sphere477 = new Sphere();
Sphere477->setUSE("Ball");
Shape474->setGeometry(Sphere477);

Anchor473->addChild(Shape474);

Transform472->addChild(Anchor473);

Transform* Transform478 = new Transform();
Transform478->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor479 = new Anchor();
Anchor479->setDescription("ArtDeco29");
Anchor479->setParameter(new String[1]{"target=_source"}, 1);
Anchor479->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29"}, 2);
Shape* Shape480 = new Shape();
Appearance* Appearance481 = new Appearance();
Material* Material482 = new Material();
Material482->setUSE("TextMat");
Appearance481->setMaterial(Material482);

Shape480->setAppearance(Appearance481);

Text* Text483 = new Text();
Text483->setString(new String[1]{"ArtDeco29"}, 1);
FontStyle* FontStyle484 = new FontStyle();
FontStyle484->setUSE("Style");
Text483->setFontStyle(FontStyle484);

Shape480->setGeometry(Text483);

Anchor479->addChild(Shape480);

Transform478->addChild(Anchor479);

Transform472->addChild(Transform478);

Group50->addChild(Transform472);

Viewpoint* Viewpoint485 = new Viewpoint();
Viewpoint485->setDEF("View30");
Viewpoint485->setDescription("ArtDeco30");
Viewpoint485->setPosition(new float[3]{-3.75,-3.75,3});
Group50->addChild(Viewpoint485);

Transform* Transform486 = new Transform();
Transform486->setTranslation(new float[3]{-3.75,-3.75,0});
Anchor* Anchor487 = new Anchor();
Anchor487->setDescription("ArtDeco30 view");
Anchor487->setUrl(new String[1]{"#View30"}, 1);
Shape* Shape488 = new Shape();
Appearance* Appearance489 = new Appearance();
ProtoInstance* ProtoInstance490 = new ProtoInstance();
ProtoInstance490->setName("ArtDeco30");
Appearance489->setMaterial(ProtoInstance490);

Shape488->setAppearance(Appearance489);

Sphere* Sphere491 = new Sphere();
Sphere491->setUSE("Ball");
Shape488->setGeometry(Sphere491);

Anchor487->addChild(Shape488);

Transform486->addChild(Anchor487);

Transform* Transform492 = new Transform();
Transform492->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor493 = new Anchor();
Anchor493->setDescription("ArtDeco30");
Anchor493->setParameter(new String[1]{"target=_source"}, 1);
Anchor493->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30"}, 2);
Shape* Shape494 = new Shape();
Appearance* Appearance495 = new Appearance();
Material* Material496 = new Material();
Material496->setUSE("TextMat");
Appearance495->setMaterial(Material496);

Shape494->setAppearance(Appearance495);

Text* Text497 = new Text();
Text497->setString(new String[1]{"ArtDeco30"}, 1);
FontStyle* FontStyle498 = new FontStyle();
FontStyle498->setUSE("Style");
Text497->setFontStyle(FontStyle498);

Shape494->setGeometry(Text497);

Anchor493->addChild(Shape494);

Transform492->addChild(Anchor493);

Transform486->addChild(Transform492);

Group50->addChild(Transform486);

Viewpoint* Viewpoint499 = new Viewpoint();
Viewpoint499->setDEF("View31");
Viewpoint499->setDescription("ArtDeco31");
Viewpoint499->setPosition(new float[3]{-2.25,-3.75,3});
Group50->addChild(Viewpoint499);

Transform* Transform500 = new Transform();
Transform500->setTranslation(new float[3]{-2.25,-3.75,0});
Anchor* Anchor501 = new Anchor();
Anchor501->setDescription("ArtDeco31 view");
Anchor501->setUrl(new String[1]{"#View31"}, 1);
Shape* Shape502 = new Shape();
Appearance* Appearance503 = new Appearance();
ProtoInstance* ProtoInstance504 = new ProtoInstance();
ProtoInstance504->setName("ArtDeco31");
Appearance503->setMaterial(ProtoInstance504);

Shape502->setAppearance(Appearance503);

Sphere* Sphere505 = new Sphere();
Sphere505->setUSE("Ball");
Shape502->setGeometry(Sphere505);

Anchor501->addChild(Shape502);

Transform500->addChild(Anchor501);

Transform* Transform506 = new Transform();
Transform506->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor507 = new Anchor();
Anchor507->setDescription("ArtDeco31");
Anchor507->setParameter(new String[1]{"target=_source"}, 1);
Anchor507->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31"}, 2);
Shape* Shape508 = new Shape();
Appearance* Appearance509 = new Appearance();
Material* Material510 = new Material();
Material510->setUSE("TextMat");
Appearance509->setMaterial(Material510);

Shape508->setAppearance(Appearance509);

Text* Text511 = new Text();
Text511->setString(new String[1]{"ArtDeco31"}, 1);
FontStyle* FontStyle512 = new FontStyle();
FontStyle512->setUSE("Style");
Text511->setFontStyle(FontStyle512);

Shape508->setGeometry(Text511);

Anchor507->addChild(Shape508);

Transform506->addChild(Anchor507);

Transform500->addChild(Transform506);

Group50->addChild(Transform500);

Viewpoint* Viewpoint513 = new Viewpoint();
Viewpoint513->setDEF("View32");
Viewpoint513->setDescription("ArtDeco32");
Viewpoint513->setPosition(new float[3]{-0.75,-3.75,3});
Group50->addChild(Viewpoint513);

Transform* Transform514 = new Transform();
Transform514->setTranslation(new float[3]{-0.75,-3.75,0});
Anchor* Anchor515 = new Anchor();
Anchor515->setDescription("ArtDeco32 view");
Anchor515->setUrl(new String[1]{"#View32"}, 1);
Shape* Shape516 = new Shape();
Appearance* Appearance517 = new Appearance();
ProtoInstance* ProtoInstance518 = new ProtoInstance();
ProtoInstance518->setName("ArtDeco32");
Appearance517->setMaterial(ProtoInstance518);

Shape516->setAppearance(Appearance517);

Sphere* Sphere519 = new Sphere();
Sphere519->setUSE("Ball");
Shape516->setGeometry(Sphere519);

Anchor515->addChild(Shape516);

Transform514->addChild(Anchor515);

Transform* Transform520 = new Transform();
Transform520->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor521 = new Anchor();
Anchor521->setDescription("ArtDeco32");
Anchor521->setParameter(new String[1]{"target=_source"}, 1);
Anchor521->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32"}, 2);
Shape* Shape522 = new Shape();
Appearance* Appearance523 = new Appearance();
Material* Material524 = new Material();
Material524->setUSE("TextMat");
Appearance523->setMaterial(Material524);

Shape522->setAppearance(Appearance523);

Text* Text525 = new Text();
Text525->setString(new String[1]{"ArtDeco32"}, 1);
FontStyle* FontStyle526 = new FontStyle();
FontStyle526->setUSE("Style");
Text525->setFontStyle(FontStyle526);

Shape522->setGeometry(Text525);

Anchor521->addChild(Shape522);

Transform520->addChild(Anchor521);

Transform514->addChild(Transform520);

Group50->addChild(Transform514);

Viewpoint* Viewpoint527 = new Viewpoint();
Viewpoint527->setDEF("View33");
Viewpoint527->setDescription("ArtDeco33");
Viewpoint527->setPosition(new float[3]{0.75,-3.75,3});
Group50->addChild(Viewpoint527);

Transform* Transform528 = new Transform();
Transform528->setTranslation(new float[3]{0.75,-3.75,0});
Anchor* Anchor529 = new Anchor();
Anchor529->setDescription("ArtDeco33 view");
Anchor529->setUrl(new String[1]{"#View33"}, 1);
Shape* Shape530 = new Shape();
Appearance* Appearance531 = new Appearance();
ProtoInstance* ProtoInstance532 = new ProtoInstance();
ProtoInstance532->setName("ArtDeco33");
Appearance531->setMaterial(ProtoInstance532);

Shape530->setAppearance(Appearance531);

Sphere* Sphere533 = new Sphere();
Sphere533->setUSE("Ball");
Shape530->setGeometry(Sphere533);

Anchor529->addChild(Shape530);

Transform528->addChild(Anchor529);

Transform* Transform534 = new Transform();
Transform534->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor535 = new Anchor();
Anchor535->setDescription("ArtDeco33");
Anchor535->setParameter(new String[1]{"target=_source"}, 1);
Anchor535->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33"}, 2);
Shape* Shape536 = new Shape();
Appearance* Appearance537 = new Appearance();
Material* Material538 = new Material();
Material538->setUSE("TextMat");
Appearance537->setMaterial(Material538);

Shape536->setAppearance(Appearance537);

Text* Text539 = new Text();
Text539->setString(new String[1]{"ArtDeco33"}, 1);
FontStyle* FontStyle540 = new FontStyle();
FontStyle540->setUSE("Style");
Text539->setFontStyle(FontStyle540);

Shape536->setGeometry(Text539);

Anchor535->addChild(Shape536);

Transform534->addChild(Anchor535);

Transform528->addChild(Transform534);

Group50->addChild(Transform528);

Viewpoint* Viewpoint541 = new Viewpoint();
Viewpoint541->setDEF("View34");
Viewpoint541->setDescription("ArtDeco34");
Viewpoint541->setPosition(new float[3]{2.25,-3.75,3});
Group50->addChild(Viewpoint541);

Transform* Transform542 = new Transform();
Transform542->setTranslation(new float[3]{2.25,-3.75,0});
Anchor* Anchor543 = new Anchor();
Anchor543->setDescription("ArtDeco34 view");
Anchor543->setUrl(new String[1]{"#View34"}, 1);
Shape* Shape544 = new Shape();
Appearance* Appearance545 = new Appearance();
ProtoInstance* ProtoInstance546 = new ProtoInstance();
ProtoInstance546->setName("ArtDeco34");
Appearance545->setMaterial(ProtoInstance546);

Shape544->setAppearance(Appearance545);

Sphere* Sphere547 = new Sphere();
Sphere547->setUSE("Ball");
Shape544->setGeometry(Sphere547);

Anchor543->addChild(Shape544);

Transform542->addChild(Anchor543);

Transform* Transform548 = new Transform();
Transform548->setTranslation(new float[3]{0,0.3,0.5});
Anchor* Anchor549 = new Anchor();
Anchor549->setDescription("ArtDeco34");
Anchor549->setParameter(new String[1]{"target=_source"}, 1);
Anchor549->setUrl(new String[2]{"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34"}, 2);
Shape* Shape550 = new Shape();
Appearance* Appearance551 = new Appearance();
Material* Material552 = new Material();
Material552->setUSE("TextMat");
Appearance551->setMaterial(Material552);

Shape550->setAppearance(Appearance551);

Text* Text553 = new Text();
Text553->setString(new String[1]{"ArtDeco34"}, 1);
FontStyle* FontStyle554 = new FontStyle();
FontStyle554->setUSE("Style");
Text553->setFontStyle(FontStyle554);

Shape550->setGeometry(Text553);

Anchor549->addChild(Shape550);

Transform548->addChild(Anchor549);

Transform542->addChild(Transform548);

Group50->addChild(Transform542);

Scene13->addChild(Group50);

ROUTE* ROUTE555 = new ROUTE();
ROUTE555->setFromField("fraction_changed");
ROUTE555->setFromNode("Close_Time");
ROUTE555->setToField("set_fraction");
ROUTE555->setToNode("Close_Mover");
Scene13->addChild(ROUTE555);

ROUTE* ROUTE556 = new ROUTE();
ROUTE556->setFromField("value_changed");
ROUTE556->setFromNode("Close_Mover");
ROUTE556->setToField("set_translation");
ROUTE556->setToNode("Close_travel");
Scene13->addChild(ROUTE556);

X3D0->setScene(Scene13);

X3D0->toXMLString();
}
