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
X3D0->setVersion("3.3");
head* head1 = new head();
//Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON
meta* meta2 = new meta();
meta2->setName("title");
meta2->setContent("HelloWorld.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("description");
meta3->setContent("Simple X3D model example: Hello World!");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("created");
meta4->setContent("30 October 2000");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("modified");
meta5->setContent("20 October 2019");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("creator");
meta6->setContent("Don Brutzman");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("Image");
meta7->setContent("HelloWorld.tall.png");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("reference");
meta8->setContent("http://en.wikipedia.org/wiki/Hello_world");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("reference");
meta9->setContent("https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("reference");
meta10->setContent("https://en.wikipedia.org/wiki/\"Hello,_World!\"_program");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("reference");
meta11->setContent("http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("reference");
meta12->setContent("http://www.HelloWorldExample.net");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("reference");
meta13->setContent("https://www.web3d.org");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("reference");
meta14->setContent("https://www.web3d.org/realtime-3d/news/internationalization-x3d");
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName("reference");
meta15->setContent("https://www.web3d.org/x3d/content/examples/HelloWorld.x3d");
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName("reference");
meta16->setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorld.x3d");
head1->addMeta(meta16);

meta* meta17 = new meta();
meta17->setName("identifier");
meta17->setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d");
head1->addMeta(meta17);

meta* meta18 = new meta();
meta18->setName("license");
meta18->setContent("https://www.web3d.org/x3d/content/examples/license.html");
head1->addMeta(meta18);

meta* meta19 = new meta();
meta19->setName("generator");
meta19->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta19);

meta* meta20 = new meta();
meta20->setName("reference");
meta20->setContent("HelloWorld.wrl");
head1->addMeta(meta20);

meta* meta21 = new meta();
meta21->setName("reference");
meta21->setContent("HelloWorld.x3dv");
head1->addMeta(meta21);

meta* meta22 = new meta();
meta22->setName("reference");
meta22->setContent("HelloWorld.x3db");
head1->addMeta(meta22);

meta* meta23 = new meta();
meta23->setName("reference");
meta23->setContent("HelloWorld.xhtml");
head1->addMeta(meta23);

meta* meta24 = new meta();
meta24->setName("reference");
meta24->setContent("HelloWorld.json");
head1->addMeta(meta24);

X3D0->setHead(head1);

Scene* Scene25 = new Scene();
//Example scene to illustrate X3D nodes and fields (XML elements and attributes)
WorldInfo* WorldInfo26 = new WorldInfo();
WorldInfo26->setInfo(new String[1]{"Example scene to illustrate a simple X3D model"}, 1);
WorldInfo26->setTitle("Hello World!");
Scene25->addChild(WorldInfo26);

Group* Group27 = new Group();
Viewpoint* Viewpoint28 = new Viewpoint();
Viewpoint28->setDEF("ViewUpClose");
Viewpoint28->setCenterOfRotation(new float[3]{0,-1,0});
Viewpoint28->setDescription("Hello world!");
Viewpoint28->setPosition(new float[3]{0,-1,7});
Group27->addChild(Viewpoint28);

Transform* Transform29 = new Transform();
Transform29->setRotation(new float[4]{0,1,0,3});
Shape* Shape30 = new Shape();
Sphere* Sphere31 = new Sphere();
Shape30->setGeometry(Sphere31);

Appearance* Appearance32 = new Appearance();
Material* Material33 = new Material();
Material33->setDEF("MaterialLightBlue");
Material33->setDiffuseColor(new float[3]{0.1,0.5,1});
Appearance32->setMaterial(Material33);

ImageTexture* ImageTexture34 = new ImageTexture();
ImageTexture34->setDEF("ImageCloudlessEarth");
ImageTexture34->setUrl(new String[6]{"earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"}, 6);
Appearance32->setTexture(ImageTexture34);

Shape30->setAppearance(Appearance32);

Transform29->addChild(Shape30);

Group27->addChild(Transform29);

Transform* Transform35 = new Transform();
Transform35->setTranslation(new float[3]{0,-2,0});
Shape* Shape36 = new Shape();
Text* Text37 = new Text();
Text37->setDEF("TextMessage");
Text37->setString(new String[2]{"Hello","world!"}, 2);
FontStyle* FontStyle38 = new FontStyle();
FontStyle38->setJustify(new String[2]{"MIDDLE","MIDDLE"}, 2);
Text37->setFontStyle(FontStyle38);

Shape36->setGeometry(Text37);

Appearance* Appearance39 = new Appearance();
Material* Material40 = new Material();
Material40->setUSE("MaterialLightBlue");
Appearance39->setMaterial(Material40);

Shape36->setAppearance(Appearance39);

Transform35->addChild(Shape36);

Group27->addChild(Transform35);

Scene25->addChild(Group27);

X3D0->setScene(Scene25);

X3D0->toXMLString();
}
