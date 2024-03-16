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
meta2->setContent("BoxEm.x3d");
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
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/box.x3d");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("description");
meta6->setContent("3 boxes");
head1->addMeta(meta6);

X3D0->setHead(head1);

Scene* Scene7 = new Scene();
NavigationInfo* NavigationInfo8 = new NavigationInfo();
NavigationInfo8->setType(new String[1]{"EXAMINE"}, 1);
Scene7->addChild(NavigationInfo8);

Viewpoint* Viewpoint9 = new Viewpoint();
Viewpoint9->setDescription("Cubes on Fire");
Viewpoint9->setPosition(new float[3]{0,0,12});
Scene7->addChild(Viewpoint9);

ProtoDeclare* ProtoDeclare10 = new ProtoDeclare();
ProtoDeclare10->setName("anyShape");
ProtoInterface* ProtoInterface11 = new ProtoInterface();
field* field12 = new field();
field12->setName("xtranslation");
field12->setAccessType("inputOutput");
field12->setType("SFVec3f");
field12->setValue("0 0 0");
ProtoInterface11->addField(field12);

field* field13 = new field();
field13->setName("myShape");
field13->setAccessType("inputOutput");
field13->setType("MFNode");
Shape* Shape14 = new Shape();
Sphere* Sphere15 = new Sphere();
Shape14->setGeometry(Sphere15);

Appearance* Appearance16 = new Appearance();
Material* Material17 = new Material();
Material17->setDiffuseColor(new float[3]{1,1,1});
Appearance16->setMaterial(Material17);

Shape14->setAppearance(Appearance16);

field13->addChild(Shape14);

ProtoInterface11->addField(field13);

ProtoDeclare10->setProtoInterface(ProtoInterface11);

ProtoBody* ProtoBody18 = new ProtoBody();
Transform* Transform19 = new Transform();
IS* IS20 = new IS();
Connect* connect21 = new Connect();
connect21->setNodeField("translation");
connect21->setProtoField("xtranslation");
IS20->addConnect(connect21);

Connect* connect22 = new Connect();
connect22->setNodeField("children");
connect22->setProtoField("myShape");
IS20->addConnect(connect22);

Transform19->setIS(IS20);

ProtoBody18->addChild(Transform19);

ProtoDeclare10->setProtoBody(ProtoBody18);

Scene7->addChild(ProtoDeclare10);

ProtoDeclare* ProtoDeclare23 = new ProtoDeclare();
ProtoDeclare23->setName("three");
ProtoInterface* ProtoInterface24 = new ProtoInterface();
field* field25 = new field();
field25->setName("ytranslation");
field25->setAccessType("inputOutput");
field25->setType("SFVec3f");
field25->setValue("0 0 0");
ProtoInterface24->addField(field25);

field* field26 = new field();
field26->setName("myShape");
field26->setAccessType("inputOutput");
field26->setType("MFNode");
Shape* Shape27 = new Shape();
Cylinder* Cylinder28 = new Cylinder();
Shape27->setGeometry(Cylinder28);

Appearance* Appearance29 = new Appearance();
Material* Material30 = new Material();
Material30->setDiffuseColor(new float[3]{1,1,1});
Appearance29->setMaterial(Material30);

Shape27->setAppearance(Appearance29);

field26->addChild(Shape27);

ProtoInterface24->addField(field26);

ProtoDeclare23->setProtoInterface(ProtoInterface24);

ProtoBody* ProtoBody31 = new ProtoBody();
Transform* Transform32 = new Transform();
IS* IS33 = new IS();
Connect* connect34 = new Connect();
connect34->setNodeField("translation");
connect34->setProtoField("ytranslation");
IS33->addConnect(connect34);

Transform32->setIS(IS33);

ProtoInstance* ProtoInstance35 = new ProtoInstance();
ProtoInstance35->setName("anyShape");
fieldValue* fieldValue36 = new fieldValue();
fieldValue36->setName("xtranslation");
fieldValue36->setValue("0 0 0");
ProtoInstance35->addFieldValue(fieldValue36);

IS* IS37 = new IS();
Connect* connect38 = new Connect();
connect38->setNodeField("myShape");
connect38->setProtoField("myShape");
IS37->addConnect(connect38);

ProtoInstance35->setIS(IS37);

Transform32->addChild(ProtoInstance35);

ProtoInstance* ProtoInstance39 = new ProtoInstance();
ProtoInstance39->setName("anyShape");
fieldValue* fieldValue40 = new fieldValue();
fieldValue40->setName("xtranslation");
fieldValue40->setValue("2 0 0");
ProtoInstance39->addFieldValue(fieldValue40);

IS* IS41 = new IS();
Connect* connect42 = new Connect();
connect42->setNodeField("myShape");
connect42->setProtoField("myShape");
IS41->addConnect(connect42);

ProtoInstance39->setIS(IS41);

Transform32->addChild(ProtoInstance39);

ProtoInstance* ProtoInstance43 = new ProtoInstance();
ProtoInstance43->setName("anyShape");
fieldValue* fieldValue44 = new fieldValue();
fieldValue44->setName("xtranslation");
fieldValue44->setValue("-2 0 0");
ProtoInstance43->addFieldValue(fieldValue44);

IS* IS45 = new IS();
Connect* connect46 = new Connect();
connect46->setNodeField("myShape");
connect46->setProtoField("myShape");
IS45->addConnect(connect46);

ProtoInstance43->setIS(IS45);

Transform32->addChild(ProtoInstance43);

ProtoBody31->addChild(Transform32);

ProtoDeclare23->setProtoBody(ProtoBody31);

Scene7->addChild(ProtoDeclare23);

ProtoInstance* ProtoInstance47 = new ProtoInstance();
ProtoInstance47->setName("three");
ProtoInstance47->setDEF("threepi");
fieldValue* fieldValue48 = new fieldValue();
fieldValue48->setName("ytranslation");
fieldValue48->setValue("0 0 0");
ProtoInstance47->addFieldValue(fieldValue48);

fieldValue* fieldValue49 = new fieldValue();
fieldValue49->setName("myShape");
Shape* Shape50 = new Shape();
Shape50->setDEF("box");
Box* Box51 = new Box();
Box51->setSize(new float[3]{1,1,1});
Shape50->setGeometry(Box51);

Appearance* Appearance52 = new Appearance();
Material* Material53 = new Material();
Material53->setDiffuseColor(new float[3]{0,1,0});
Appearance52->setMaterial(Material53);

Shape50->setAppearance(Appearance52);

fieldValue49->addChild(Shape50);

ProtoInstance47->addFieldValue(fieldValue49);

Scene7->addChild(ProtoInstance47);

Transform* Transform54 = new Transform();
Transform54->setTranslation(new float[3]{0,2,0});
Shape* Shape55 = new Shape();
Shape55->setUSE("box");
Transform54->addChild(Shape55);

Scene7->addChild(Transform54);

X3D0->setScene(Scene7);

X3D0->toXMLString();
}
