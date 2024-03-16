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
meta2->setContent("asteroids.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("creator");
meta3->setContent("John Carlson");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("generator");
meta4->setContent("manual");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("identifier");
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/asteroids.x3d");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("description");
meta6->setContent("asteroids");
head1->addMeta(meta6);

X3D0->setHead(head1);

Scene* Scene7 = new Scene();
ProtoDeclare* ProtoDeclare8 = new ProtoDeclare();
ProtoDeclare8->setName("anyShape");
ProtoInterface* ProtoInterface9 = new ProtoInterface();
field* field10 = new field();
field10->setName("myShape");
field10->setAccessType("inputOutput");
field10->setType("MFNode");
Shape* Shape11 = new Shape();
Sphere* Sphere12 = new Sphere();
Shape11->setGeometry(Sphere12);

field10->addChild(Shape11);

ProtoInterface9->addField(field10);

ProtoDeclare8->setProtoInterface(ProtoInterface9);

ProtoBody* ProtoBody13 = new ProtoBody();
Transform* Transform14 = new Transform();
IS* IS15 = new IS();
Connect* connect16 = new Connect();
connect16->setNodeField("children");
connect16->setProtoField("myShape");
IS15->addConnect(connect16);

Transform14->setIS(IS15);

ProtoBody13->addChild(Transform14);

ProtoDeclare8->setProtoBody(ProtoBody13);

Scene7->addChild(ProtoDeclare8);

ProtoInstance* ProtoInstance17 = new ProtoInstance();
ProtoInstance17->setName("anyShape");
Scene7->addChild(ProtoInstance17);

X3D0->setScene(Scene7);

X3D0->toXMLString();
}
