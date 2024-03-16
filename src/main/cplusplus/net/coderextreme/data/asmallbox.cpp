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
meta2->setContent("asmallbox.x3d");
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
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/abox.x3d");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("description");
meta6->setContent("a box");
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

ProtoDeclare* ProtoDeclare17 = new ProtoDeclare();
ProtoDeclare17->setName("one");
ProtoInterface* ProtoInterface18 = new ProtoInterface();
field* field19 = new field();
field19->setName("myShape");
field19->setAccessType("inputOutput");
field19->setType("MFNode");
Shape* Shape20 = new Shape();
Cylinder* Cylinder21 = new Cylinder();
Shape20->setGeometry(Cylinder21);

field19->addChild(Shape20);

ProtoInterface18->addField(field19);

ProtoDeclare17->setProtoInterface(ProtoInterface18);

ProtoBody* ProtoBody22 = new ProtoBody();
Transform* Transform23 = new Transform();
ProtoInstance* ProtoInstance24 = new ProtoInstance();
ProtoInstance24->setName("anyShape");
IS* IS25 = new IS();
Connect* connect26 = new Connect();
connect26->setNodeField("myShape");
connect26->setProtoField("myShape");
IS25->addConnect(connect26);

ProtoInstance24->setIS(IS25);

Transform23->addChild(ProtoInstance24);

ProtoBody22->addChild(Transform23);

ProtoDeclare17->setProtoBody(ProtoBody22);

Scene7->addChild(ProtoDeclare17);

ProtoInstance* ProtoInstance27 = new ProtoInstance();
ProtoInstance27->setName("one");
fieldValue* fieldValue28 = new fieldValue();
fieldValue28->setName("myShape");
Shape* Shape29 = new Shape();
Box* Box30 = new Box();
Shape29->setGeometry(Box30);

fieldValue28->addChild(Shape29);

ProtoInstance27->addFieldValue(fieldValue28);

Scene7->addChild(ProtoInstance27);

X3D0->setScene(Scene7);

X3D0->toXMLString();
}
