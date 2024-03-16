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
X3D0->setProfile("Interchange");
X3D0->setVersion("3.3");
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName("title");
meta2->setContent("ifscubeworks.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("identifier");
meta3->setContent("http://coderextreme.net/X3DJSONLD/src/main/data/ifscubeworks.x3d");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("description");
meta4->setContent("Template for an Indexed Face Set");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("creator");
meta5->setContent("John Carlson");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("created");
meta6->setContent("4 April 2017");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("license");
meta7->setContent("https://www.web3d.org/x3d/content/examples/license.html");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("generator");
meta8->setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta8);

X3D0->setHead(head1);

Scene* Scene9 = new Scene();
WorldInfo* WorldInfo10 = new WorldInfo();
WorldInfo10->setTitle("ifscubeworks.x3d");
Scene9->addChild(WorldInfo10);

Group* Group11 = new Group();
Shape* Shape12 = new Shape();
IndexedFaceSet* IndexedFaceSet13 = new IndexedFaceSet();
IndexedFaceSet13->setDEF("IndexedFaceSet");
IndexedFaceSet13->setCoordIndex(new int[33]{0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1});
IndexedFaceSet13->setNormalIndex(new int[7]{0,0,1,2,3,4,5});
IndexedFaceSet13->setNormalPerVertex(False);
IndexedFaceSet13->setColorIndex(new int[33]{0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1});
Coordinate* Coordinate14 = new Coordinate();
Coordinate14->setPoint(new float[12]{0,0,1,0,1,1,1,1,1,1,0,1});
IndexedFaceSet13->setCoord(Coordinate14);

Normal* Normal15 = new Normal();
Normal15->setVector(new float[18]{1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1});
IndexedFaceSet13->setNormal(Normal15);

Color* Color16 = new Color();
Color16->setColor(new float[3]{0,1,0});
IndexedFaceSet13->setColor(Color16);

Shape12->setGeometry(IndexedFaceSet13);

Group11->addChild(Shape12);

Scene9->addChild(Group11);

X3D0->setScene(Scene9);

X3D0->toXMLString();
}
