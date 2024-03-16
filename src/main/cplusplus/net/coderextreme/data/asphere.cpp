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
X3D0->setProfile(CString("Interchange"));
X3D0->setVersion(CString("3.3"));
head* head1 = new head();
component* component2 = new component();
component2->setName(CString("Scripting"));
component2->setLevel(1);
head1->addChild(component2);

meta* meta3 = new meta();
meta3->setName(CString("title"));
meta3->setContent(CString("asphere.x3d"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("creator"));
meta4->setContent(CString("John Carlson"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("generator"));
meta5->setContent(CString("manual"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("identifier"));
meta6->setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/asphere.x3d"));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("description"));
meta7->setContent(CString("a sphere"));
head1->addMeta(meta7);

X3D0->setHead(head1);

Scene* Scene8 = new Scene();
Group* Group9 = new Group();
Shape* Shape10 = new Shape();
Appearance* Appearance11 = new Appearance();
Material* Material12 = new Material();
Material12->setDiffuseColor(new float[3]{1,1,1});
Appearance11->addChild(Material12);

Shape10->addChild(Appearance11);

Sphere* Sphere13 = new Sphere();
Shape10->setGeometry(Sphere13);

Group9->addChild(Shape10);

Scene8->addChild(Group9);

X3D0->setScene(Scene8);

}
