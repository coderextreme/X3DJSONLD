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
meta* meta2 = new meta();
meta2->setName(CString("title"));
meta2->setContent(CString("ifscubeworks.x3d"));
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName(CString("identifier"));
meta3->setContent(CString("http://coderextreme.net/X3DJSONLD/src/main/data/ifscubeworks.x3d"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("description"));
meta4->setContent(CString("Template for an Indexed Face Set"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("creator"));
meta5->setContent(CString("John Carlson"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("created"));
meta6->setContent(CString("4 April 2017"));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("license"));
meta7->setContent(CString("https://www.web3d.org/x3d/content/examples/license.html"));
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName(CString("generator"));
meta8->setContent(CString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1->addMeta(meta8);

X3D0->setHead(head1);

Scene* Scene9 = new Scene();
WorldInfo* WorldInfo10 = new WorldInfo();
WorldInfo10->setTitle(CString("ifscubeworks.x3d"));
Scene9->addChild(WorldInfo10);

Group* Group11 = new Group();
Shape* Shape12 = new Shape();
IndexedFaceSet* IndexedFaceSet13 = new IndexedFaceSet();
IndexedFaceSet13->setDEF(CString("IndexedFaceSet"));
IndexedFaceSet13->setCoordIndex(new int32_t[33]{0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1}, 33);
IndexedFaceSet13->setNormalIndex(new int32_t[7]{0,0,1,2,3,4,5}, 7);
IndexedFaceSet13->setNormalPerVertex(False);
IndexedFaceSet13->setColorIndex(new int[33]{0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1}, 33);
Coordinate* Coordinate14 = new Coordinate();
Coordinate14->setPoint(new float[12]{0,0,1,0,1,1,1,1,1,1,0,1}, 12);
IndexedFaceSet13->addChild(Coordinate14);

Normal* Normal15 = new Normal();
Normal15->setVector(new float[18]{1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1}, 18);
IndexedFaceSet13->setNormal(Normal15);

CColor* Color16 = new CColor();
Color16->setColor(new float[3]{0,1,0}, 3);
IndexedFaceSet13->addChild(Color16);

Shape12->setGeometry(IndexedFaceSet13);

Group11->addChild(Shape12);

Scene9->addChild(Group11);

X3D0->setScene(Scene9);

}
