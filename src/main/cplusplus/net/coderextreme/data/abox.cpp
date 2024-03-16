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
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName(CString("title"));
meta2->setContent(CString("abox.x3d"));
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName(CString("creator"));
meta3->setContent(CString("John Carlson"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("generator"));
meta4->setContent(CString("manual"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("identifier"));
meta5->setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/abox.x3d"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("description"));
meta6->setContent(CString("a box"));
head1->addMeta(meta6);

X3D0->setHead(head1);

Scene* Scene7 = new Scene();
ProtoDeclare* ProtoDeclare8 = new ProtoDeclare();
ProtoDeclare8->setName(CString("anyShape"));
ProtoInterface* ProtoInterface9 = new ProtoInterface();
field* field10 = new field();
field10->setName(CString("myShape"));
field10->setAccessType(CString("inputOutput"));
field10->setType(CString("MFNode"));
Shape* Shape11 = new Shape();
Sphere* Sphere12 = new Sphere();
Shape11->setGeometry(Sphere12);

field10->addChild(Shape11);

ProtoInterface9->addChild(field10);

ProtoDeclare8->addChild(ProtoInterface9);

ProtoBody* ProtoBody13 = new ProtoBody();
Transform* Transform14 = new Transform();
IS* IS15 = new IS();
Connect* connect16 = new Connect();
connect16->setNodeField(CString("children"));
connect16->setProtoField(CString("myShape"));
IS15->addChild(connect16);

Transform14->addChild(IS15);

ProtoBody13->addChild(Transform14);

ProtoDeclare8->addChild(ProtoBody13);

Scene7->addChild(ProtoDeclare8);

ProtoDeclare* ProtoDeclare17 = new ProtoDeclare();
ProtoDeclare17->setName(CString("one"));
ProtoInterface* ProtoInterface18 = new ProtoInterface();
field* field19 = new field();
field19->setName(CString("myShape"));
field19->setAccessType(CString("inputOutput"));
field19->setType(CString("MFNode"));
Shape* Shape20 = new Shape();
Cylinder* Cylinder21 = new Cylinder();
Shape20->setGeometry(Cylinder21);

field19->addChild(Shape20);

ProtoInterface18->addChild(field19);

ProtoDeclare17->addChild(ProtoInterface18);

ProtoBody* ProtoBody22 = new ProtoBody();
Transform* Transform23 = new Transform();
ProtoInstance* ProtoInstance24 = new ProtoInstance();
ProtoInstance24->setName(CString("anyShape"));
IS* IS25 = new IS();
Connect* connect26 = new Connect();
connect26->setNodeField(CString("myShape"));
connect26->setProtoField(CString("myShape"));
IS25->addChild(connect26);

ProtoInstance24->addChild(IS25);

Transform23->addChild(ProtoInstance24);

ProtoBody22->addChild(Transform23);

ProtoDeclare17->addChild(ProtoBody22);

Scene7->addChild(ProtoDeclare17);

ProtoInstance* ProtoInstance27 = new ProtoInstance();
ProtoInstance27->setName(CString("one"));
fieldValue* fieldValue28 = new fieldValue();
fieldValue28->setName(&CString("myShape"));
Shape* Shape29 = new Shape();
Box* Box30 = new Box();
Box30->setSize(new float[3]{140,140,140});
Shape29->setGeometry(Box30);

fieldValue28->addChild(Shape29);

ProtoInstance27->addChild(fieldValue28);

Scene7->addChild(ProtoInstance27);

X3D0->setScene(Scene7);

}
