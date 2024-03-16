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
meta* meta2 = new meta();
meta2->setName("title");
meta2->setContent("HelloWorldCommented.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("description");
meta3->setContent("Numerous comments added to simple X3D scene example for testing JSON encoding alternatives.");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("created");
meta4->setContent("19 December 2015");
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
meta7->setName("info");
meta7->setContent("HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental.");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("reference");
meta8->setContent("HelloWorldCommented.json");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("reference");
meta9->setContent("HelloWorldCommentedOriginalEncoding.json");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("reference");
meta10->setContent("HelloWorldCommentedAlternativeEncoding.json");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("identifier");
meta11->setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("license");
meta12->setContent("https://www.web3d.org/x3d/content/examples/license.html");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("generator");
meta13->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta13);

X3D0->setHead(head1);

Scene* Scene14 = new Scene();
//Example scene to illustrate comments interspersed among X3D nodes and fields (XML elements and attributes)
//WorldInfo begin
WorldInfo* WorldInfo15 = new WorldInfo();
WorldInfo15->setTitle("Hello world!");
Scene14->addChild(WorldInfo15);

//WorldInfo complete, Group begin
Group* Group16 = new Group();
//Viewpoint begin
Viewpoint* Viewpoint17 = new Viewpoint();
Viewpoint17->setDEF("ViewUpClose");
Viewpoint17->setCenterOfRotation(new float[3]{0,-1,0});
Viewpoint17->setDescription("Hello world!");
Viewpoint17->setPosition(new float[3]{0,-1,7});
Group16->addChild(Viewpoint17);

//Viewpoint complete, Transform begin
Transform* Transform18 = new Transform();
Transform18->setRotation(new float[4]{0,1,0,3});
//Shape begin
Shape* Shape19 = new Shape();
//Sphere begin
//Sphere complete, Appearance begin
//Appearance complete
Sphere* Sphere20 = new Sphere();
Shape19->setGeometry(Sphere20);

Appearance* Appearance21 = new Appearance();
//Material begin
//Material complete, ImageTexture begin
//ImageTexture complete
Material* Material22 = new Material();
Material22->setDEF("MaterialLightBlue");
Material22->setDiffuseColor(new float[3]{0.1,0.5,1});
Appearance21->setMaterial(Material22);

ImageTexture* ImageTexture23 = new ImageTexture();
ImageTexture23->setDEF("ImageCloudlessEarth");
ImageTexture23->setUrl(new String[6]{"earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"}, 6);
Appearance21->setTexture(ImageTexture23);

Shape19->setAppearance(Appearance21);

Transform18->addChild(Shape19);

//Shape complete
Group16->addChild(Transform18);

//Transform complete, Transform begin
Transform* Transform24 = new Transform();
Transform24->setTranslation(new float[3]{0,-2,0});
//Shape begin
Shape* Shape25 = new Shape();
//Text begin
//Text complete, Appearance begin
//Appearance complete
Text* Text26 = new Text();
Text26->setDEF("TextMessage");
Text26->setString(new String[2]{"Hello","world!"}, 2);
//FontStyle begin
//FontStyle complete
FontStyle* FontStyle27 = new FontStyle();
FontStyle27->setJustify(new String[2]{"MIDDLE","MIDDLE"}, 2);
Text26->setFontStyle(FontStyle27);

Shape25->setGeometry(Text26);

Appearance* Appearance28 = new Appearance();
//Material begin
//Material complete
Material* Material29 = new Material();
Material29->setUSE("MaterialLightBlue");
Appearance28->setMaterial(Material29);

Shape25->setAppearance(Appearance28);

Transform24->addChild(Shape25);

//Shape complete
Group16->addChild(Transform24);

//Transform complete
Scene14->addChild(Group16);

//Group complete
X3D0->setScene(Scene14);

X3D0->toXMLString();
}
