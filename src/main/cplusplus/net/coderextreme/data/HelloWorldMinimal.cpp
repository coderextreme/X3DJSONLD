#ifdef WIN32
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#endif
#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile(CString("Immersive"));
X3D0->setVersion(CString("3.3"));
//All head/meta tags are optional, WorldInfo is also optional
//Text node not supported by X3D Interchange profile, use Immersive profile or Text component level 1
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName(CString("title"));
meta2->setContent(CString("HelloWorldMinimal.x3d"));
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName(CString("description"));
meta3->setContent(CString("Hello World minimal example scene."));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("creator"));
meta4->setContent(CString("Don Brutzman"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("created"));
meta5->setContent(CString("19 January 2020"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("modified"));
meta6->setContent(CString("24 January 2020"));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("reference"));
meta7->setContent(CString("https://helloworldcollection.de"));
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName(CString("reference"));
meta8->setContent(CString("https://en.wiktionary.org/wiki/Hello_World"));
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName(CString("reference"));
meta9->setContent(CString("https://en.wikipedia.org/wiki/%22Hello,%20World!%22_program"));
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName(CString("reference"));
meta10->setContent(CString("https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world"));
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName(CString("reference"));
meta11->setContent(CString("https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world#X3D_(Extensible_3D)"));
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName(CString("reference"));
meta12->setContent(CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes"));
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName(CString("reference"));
meta13->setContent(CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimalIndex.html"));
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName(CString("identifier"));
meta14->setContent(CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimal.x3d"));
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName(CString("generator"));
meta15->setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName(CString("license"));
meta16->setContent(CString("../license.html"));
head1->addMeta(meta16);

X3D0->setHead(head1);

Scene* Scene17 = new Scene();
WorldInfo* WorldInfo18 = new WorldInfo();
WorldInfo18->setTitle(CString("HelloWorldMinimal.x3d"));
Scene17->addChild(WorldInfo18);

Shape* Shape19 = new Shape();
Text* Text20 = new Text();
Text20->setString(new CString[1]{CString("hello, world")}, 1);
Shape19->setGeometry(Text20);

Scene17->addChild(Shape19);

X3D0->setScene(Scene17);

}
