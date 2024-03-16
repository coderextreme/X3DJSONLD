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
meta2->setContent(CString("BoxEm.x3d"));
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
meta5->setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/box.x3d"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("description"));
meta6->setContent(CString("3 boxes"));
head1->addMeta(meta6);

X3D0->setHead(head1);

Scene* Scene7 = new Scene();
NavigationInfo* NavigationInfo8 = new NavigationInfo();
NavigationInfo8->setType(new CString[1]{CString("EXAMINE")}, 1);
Scene7->addChild(NavigationInfo8);

Viewpoint* Viewpoint9 = new Viewpoint();
Viewpoint9->setDescription(CString("Cubes on Fire"));
Viewpoint9->setPosition(new float[3]{0,0,12});
Scene7->addChild(Viewpoint9);

ProtoDeclare* ProtoDeclare10 = new ProtoDeclare();
ProtoDeclare10->setName(CString("anyShape"));
ProtoInterface* ProtoInterface11 = new ProtoInterface();
field* field12 = new field();
field12->setName(CString("xtranslation"));
field12->setAccessType(CString("inputOutput"));
field12->setType(CString("SFVec3f"));
field12->setValue(CString("0 0 0"));
ProtoInterface11->addChild(field12);

field* field13 = new field();
field13->setName(CString("myShape"));
field13->setAccessType(CString("inputOutput"));
field13->setType(CString("MFNode"));
Shape* Shape14 = new Shape();
Sphere* Sphere15 = new Sphere();
Shape14->setGeometry(Sphere15);

Appearance* Appearance16 = new Appearance();
Material* Material17 = new Material();
Material17->setDiffuseColor(new float[3]{1,1,1});
Appearance16->addChild(Material17);

Shape14->addChild(Appearance16);

field13->addChild(Shape14);

ProtoInterface11->addChild(field13);

ProtoDeclare10->addChild(ProtoInterface11);

ProtoBody* ProtoBody18 = new ProtoBody();
Transform* Transform19 = new Transform();
IS* IS20 = new IS();
Connect* connect21 = new Connect();
connect21->setNodeField(CString("translation"));
connect21->setProtoField(CString("xtranslation"));
IS20->addChild(connect21);

Connect* connect22 = new Connect();
connect22->setNodeField(CString("children"));
connect22->setProtoField(CString("myShape"));
IS20->addChild(connect22);

Transform19->addChild(IS20);

ProtoBody18->addChild(Transform19);

ProtoDeclare10->addChild(ProtoBody18);

Scene7->addChild(ProtoDeclare10);

ProtoDeclare* ProtoDeclare23 = new ProtoDeclare();
ProtoDeclare23->setName(CString("three"));
ProtoInterface* ProtoInterface24 = new ProtoInterface();
field* field25 = new field();
field25->setName(CString("ytranslation"));
field25->setAccessType(CString("inputOutput"));
field25->setType(CString("SFVec3f"));
field25->setValue(CString("0 0 0"));
ProtoInterface24->addChild(field25);

field* field26 = new field();
field26->setName(CString("myShape"));
field26->setAccessType(CString("inputOutput"));
field26->setType(CString("MFNode"));
Shape* Shape27 = new Shape();
Cylinder* Cylinder28 = new Cylinder();
Shape27->setGeometry(Cylinder28);

Appearance* Appearance29 = new Appearance();
Material* Material30 = new Material();
Material30->setDiffuseColor(new float[3]{1,1,1});
Appearance29->addChild(Material30);

Shape27->addChild(Appearance29);

field26->addChild(Shape27);

ProtoInterface24->addChild(field26);

ProtoDeclare23->addChild(ProtoInterface24);

ProtoBody* ProtoBody31 = new ProtoBody();
Transform* Transform32 = new Transform();
IS* IS33 = new IS();
Connect* connect34 = new Connect();
connect34->setNodeField(CString("translation"));
connect34->setProtoField(CString("ytranslation"));
IS33->addChild(connect34);

Transform32->addChild(IS33);

ProtoInstance* ProtoInstance35 = new ProtoInstance();
ProtoInstance35->setName(CString("anyShape"));
fieldValue* fieldValue36 = new fieldValue();
fieldValue36->setName(&CString("xtranslation"));
fieldValue36->setValue(CString("0 0 0"));
ProtoInstance35->addChild(fieldValue36);

IS* IS37 = new IS();
Connect* connect38 = new Connect();
connect38->setNodeField(CString("myShape"));
connect38->setProtoField(CString("myShape"));
IS37->addChild(connect38);

ProtoInstance35->addChild(IS37);

Transform32->addChild(ProtoInstance35);

ProtoInstance* ProtoInstance39 = new ProtoInstance();
ProtoInstance39->setName(CString("anyShape"));
fieldValue* fieldValue40 = new fieldValue();
fieldValue40->setName(&CString("xtranslation"));
fieldValue40->setValue(CString("2 0 0"));
ProtoInstance39->addChild(fieldValue40);

IS* IS41 = new IS();
Connect* connect42 = new Connect();
connect42->setNodeField(CString("myShape"));
connect42->setProtoField(CString("myShape"));
IS41->addChild(connect42);

ProtoInstance39->addChild(IS41);

Transform32->addChild(ProtoInstance39);

ProtoInstance* ProtoInstance43 = new ProtoInstance();
ProtoInstance43->setName(CString("anyShape"));
fieldValue* fieldValue44 = new fieldValue();
fieldValue44->setName(&CString("xtranslation"));
fieldValue44->setValue(CString("-2 0 0"));
ProtoInstance43->addChild(fieldValue44);

IS* IS45 = new IS();
Connect* connect46 = new Connect();
connect46->setNodeField(CString("myShape"));
connect46->setProtoField(CString("myShape"));
IS45->addChild(connect46);

ProtoInstance43->addChild(IS45);

Transform32->addChild(ProtoInstance43);

ProtoBody31->addChild(Transform32);

ProtoDeclare23->addChild(ProtoBody31);

Scene7->addChild(ProtoDeclare23);

ProtoInstance* ProtoInstance47 = new ProtoInstance();
ProtoInstance47->setName(CString("three"));
ProtoInstance47->setDEF(CString("threepi"));
fieldValue* fieldValue48 = new fieldValue();
fieldValue48->setName(&CString("ytranslation"));
fieldValue48->setValue(CString("0 0 0"));
ProtoInstance47->addChild(fieldValue48);

fieldValue* fieldValue49 = new fieldValue();
fieldValue49->setName(&CString("myShape"));
Shape* Shape50 = new Shape();
Shape50->setDEF(CString("box"));
Box* Box51 = new Box();
Box51->setSize(new float[3]{1,1,1});
Shape50->setGeometry(Box51);

Appearance* Appearance52 = new Appearance();
Material* Material53 = new Material();
Material53->setDiffuseColor(new float[3]{0,1,0});
Appearance52->addChild(Material53);

Shape50->addChild(Appearance52);

fieldValue49->addChild(Shape50);

ProtoInstance47->addChild(fieldValue49);

Scene7->addChild(ProtoInstance47);

Transform* Transform54 = new Transform();
Transform54->setTranslation(new float[3]{0,2,0});
Shape* Shape55 = new Shape();
Shape55->setUSE(CString("box"));
Transform54->addChild(Shape55);

Scene7->addChild(Transform54);

X3D0->setScene(Scene7);

}
