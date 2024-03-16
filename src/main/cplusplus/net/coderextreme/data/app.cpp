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
X3D0->setVersion(CString("4.0"));
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName(CString("title"));
meta2->setContent(CString("app.x3d"));
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName(CString("creator"));
meta3->setContent(CString("Carlson, I"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("creator"));
meta4->setContent(CString("Carlson, II"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("creator"));
meta5->setContent(CString("Carlson, III"));
head1->addMeta(meta5);

X3D0->setHead(head1);

Scene* Scene6 = new Scene();
Group* Group7 = new Group();
Shape* Shape8 = new Shape();
Appearance* Appearance9 = new Appearance();
Material* Material10 = new Material();
Material10->setDiffuseColor(new float[3]{1,0,0});
Appearance9->addChild(Material10);

Shape8->addChild(Appearance9);

Box* Box11 = new Box();
Shape8->setGeometry(Box11);

Group7->addChild(Shape8);

Scene6->addChild(Group7);

Transform* Transform12 = new Transform();
Transform12->setRotation(new float[4]{7,8,9,3.14});
Transform12->setScale(new float[3]{4,5,6});
Transform12->setTranslation(new float[3]{1,2,3});
Scene6->addChild(Transform12);

X3D0->setScene(Scene6);

}
