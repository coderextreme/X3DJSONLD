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
meta2->setContent("rubikFurnace.x3d");
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
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/rubikFurnace.x3d");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("description");
meta6->setContent("a green rubik cube");
head1->addMeta(meta6);

X3D0->setHead(head1);

Scene* Scene7 = new Scene();
NavigationInfo* NavigationInfo8 = new NavigationInfo();
NavigationInfo8->setType(new String[1]{"EXAMINE"}, 1);
Scene7->addChild(NavigationInfo8);

Viewpoint* Viewpoint9 = new Viewpoint();
Viewpoint9->setDescription("Rubiks Cube on Fire");
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
Sphere* Sphere28 = new Sphere();
Shape27->setGeometry(Sphere28);

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

ProtoDeclare* ProtoDeclare47 = new ProtoDeclare();
ProtoDeclare47->setName("nine");
ProtoInterface* ProtoInterface48 = new ProtoInterface();
field* field49 = new field();
field49->setName("ztranslation");
field49->setAccessType("inputOutput");
field49->setType("SFVec3f");
field49->setValue("0 0 0");
ProtoInterface48->addField(field49);

field* field50 = new field();
field50->setName("myShape");
field50->setAccessType("inputOutput");
field50->setType("MFNode");
Shape* Shape51 = new Shape();
Sphere* Sphere52 = new Sphere();
Shape51->setGeometry(Sphere52);

Appearance* Appearance53 = new Appearance();
Material* Material54 = new Material();
Material54->setDiffuseColor(new float[3]{1,1,1});
Appearance53->setMaterial(Material54);

Shape51->setAppearance(Appearance53);

field50->addChild(Shape51);

ProtoInterface48->addField(field50);

ProtoDeclare47->setProtoInterface(ProtoInterface48);

ProtoBody* ProtoBody55 = new ProtoBody();
Transform* Transform56 = new Transform();
IS* IS57 = new IS();
Connect* connect58 = new Connect();
connect58->setNodeField("translation");
connect58->setProtoField("ztranslation");
IS57->addConnect(connect58);

Transform56->setIS(IS57);

ProtoInstance* ProtoInstance59 = new ProtoInstance();
ProtoInstance59->setName("three");
fieldValue* fieldValue60 = new fieldValue();
fieldValue60->setName("ytranslation");
fieldValue60->setValue("0 0 0");
ProtoInstance59->addFieldValue(fieldValue60);

IS* IS61 = new IS();
Connect* connect62 = new Connect();
connect62->setNodeField("myShape");
connect62->setProtoField("myShape");
IS61->addConnect(connect62);

ProtoInstance59->setIS(IS61);

Transform56->addChild(ProtoInstance59);

ProtoInstance* ProtoInstance63 = new ProtoInstance();
ProtoInstance63->setName("three");
fieldValue* fieldValue64 = new fieldValue();
fieldValue64->setName("ytranslation");
fieldValue64->setValue("0 2 0");
ProtoInstance63->addFieldValue(fieldValue64);

IS* IS65 = new IS();
Connect* connect66 = new Connect();
connect66->setNodeField("myShape");
connect66->setProtoField("myShape");
IS65->addConnect(connect66);

ProtoInstance63->setIS(IS65);

Transform56->addChild(ProtoInstance63);

ProtoInstance* ProtoInstance67 = new ProtoInstance();
ProtoInstance67->setName("three");
fieldValue* fieldValue68 = new fieldValue();
fieldValue68->setName("ytranslation");
fieldValue68->setValue("0 -2 0");
ProtoInstance67->addFieldValue(fieldValue68);

IS* IS69 = new IS();
Connect* connect70 = new Connect();
connect70->setNodeField("myShape");
connect70->setProtoField("myShape");
IS69->addConnect(connect70);

ProtoInstance67->setIS(IS69);

Transform56->addChild(ProtoInstance67);

ProtoBody55->addChild(Transform56);

ProtoDeclare47->setProtoBody(ProtoBody55);

Scene7->addChild(ProtoDeclare47);

ProtoDeclare* ProtoDeclare71 = new ProtoDeclare();
ProtoDeclare71->setName("twentyseven");
ProtoInterface* ProtoInterface72 = new ProtoInterface();
field* field73 = new field();
field73->setName("ttranslation");
field73->setAccessType("inputOutput");
field73->setType("SFVec3f");
field73->setValue("0 0 0");
ProtoInterface72->addField(field73);

field* field74 = new field();
field74->setName("myShape");
field74->setAccessType("inputOutput");
field74->setType("MFNode");
Shape* Shape75 = new Shape();
Sphere* Sphere76 = new Sphere();
Shape75->setGeometry(Sphere76);

Appearance* Appearance77 = new Appearance();
Material* Material78 = new Material();
Material78->setDiffuseColor(new float[3]{1,1,1});
Appearance77->setMaterial(Material78);

Shape75->setAppearance(Appearance77);

field74->addChild(Shape75);

ProtoInterface72->addField(field74);

ProtoDeclare71->setProtoInterface(ProtoInterface72);

ProtoBody* ProtoBody79 = new ProtoBody();
Transform* Transform80 = new Transform();
IS* IS81 = new IS();
Connect* connect82 = new Connect();
connect82->setNodeField("translation");
connect82->setProtoField("ttranslation");
IS81->addConnect(connect82);

Transform80->setIS(IS81);

ProtoInstance* ProtoInstance83 = new ProtoInstance();
ProtoInstance83->setName("nine");
fieldValue* fieldValue84 = new fieldValue();
fieldValue84->setName("ztranslation");
fieldValue84->setValue("0 0 0");
ProtoInstance83->addFieldValue(fieldValue84);

IS* IS85 = new IS();
Connect* connect86 = new Connect();
connect86->setNodeField("myShape");
connect86->setProtoField("myShape");
IS85->addConnect(connect86);

ProtoInstance83->setIS(IS85);

Transform80->addChild(ProtoInstance83);

ProtoInstance* ProtoInstance87 = new ProtoInstance();
ProtoInstance87->setName("nine");
fieldValue* fieldValue88 = new fieldValue();
fieldValue88->setName("ztranslation");
fieldValue88->setValue("0 0 2");
ProtoInstance87->addFieldValue(fieldValue88);

IS* IS89 = new IS();
Connect* connect90 = new Connect();
connect90->setNodeField("myShape");
connect90->setProtoField("myShape");
IS89->addConnect(connect90);

ProtoInstance87->setIS(IS89);

Transform80->addChild(ProtoInstance87);

ProtoInstance* ProtoInstance91 = new ProtoInstance();
ProtoInstance91->setName("nine");
fieldValue* fieldValue92 = new fieldValue();
fieldValue92->setName("ztranslation");
fieldValue92->setValue("0 0 -2");
ProtoInstance91->addFieldValue(fieldValue92);

IS* IS93 = new IS();
Connect* connect94 = new Connect();
connect94->setNodeField("myShape");
connect94->setProtoField("myShape");
IS93->addConnect(connect94);

ProtoInstance91->setIS(IS93);

Transform80->addChild(ProtoInstance91);

ProtoBody79->addChild(Transform80);

ProtoDeclare71->setProtoBody(ProtoBody79);

Scene7->addChild(ProtoDeclare71);

ProtoInstance* ProtoInstance95 = new ProtoInstance();
ProtoInstance95->setName("twentyseven");
fieldValue* fieldValue96 = new fieldValue();
fieldValue96->setName("ttranslation");
fieldValue96->setValue("0 0 0");
ProtoInstance95->addFieldValue(fieldValue96);

fieldValue* fieldValue97 = new fieldValue();
fieldValue97->setName("myShape");
Shape* Shape98 = new Shape();
Box* Box99 = new Box();
Box99->setSize(new float[3]{1,1,1});
Shape98->setGeometry(Box99);

Appearance* Appearance100 = new Appearance();
Material* Material101 = new Material();
Material101->setDiffuseColor(new float[3]{0,1,0});
Appearance100->setMaterial(Material101);

Shape98->setAppearance(Appearance100);

fieldValue97->addChild(Shape98);

ProtoInstance95->addFieldValue(fieldValue97);

Scene7->addChild(ProtoInstance95);

X3D0->setScene(Scene7);

X3D0->toXMLString();
}
