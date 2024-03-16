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
meta2->setContent(CString("ifscube.x3d"));
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName(CString("identifier"));
meta3->setContent(CString("http://coderextreme.net/X3DJSONLD/src/main/data/ifscube.x3d"));
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

X3D0->setHead(head1);

Scene* Scene7 = new Scene();
Group* Group8 = new Group();
Shape* Shape9 = new Shape();
IndexedFaceSet* IndexedFaceSet10 = new IndexedFaceSet();
IndexedFaceSet10->setCreaseAngle(1.57);
IndexedFaceSet10->setDEF(CString("IndexedFaceSet"));
IndexedFaceSet10->setCoordIndex(new int32_t[33]{0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1}, 33);
IndexedFaceSet10->setNormalIndex(new int32_t[14]{0,-1,0,-1,1,-1,2,-1,3,-1,4,-1,5,-1}, 14);
IndexedFaceSet10->setNormalPerVertex(False);
IndexedFaceSet10->setColorIndex(new int[33]{0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1}, 33);
Coordinate* Coordinate11 = new Coordinate();
Coordinate11->setPoint(new float[12]{0,0,1,0,1,1,1,1,1,1,0,1}, 12);
IndexedFaceSet10->addChild(Coordinate11);

Normal* Normal12 = new Normal();
Normal12->setVector(new float[18]{1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1}, 18);
IndexedFaceSet10->setNormal(Normal12);

CColor* Color13 = new CColor();
Color13->setColor(new float[3]{0,1,0}, 3);
IndexedFaceSet10->addChild(Color13);

Shape9->setGeometry(IndexedFaceSet10);

Group8->addChild(Shape9);

Scene7->addChild(Group8);

X3D0->setScene(Scene7);

}
