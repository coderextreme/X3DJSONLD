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
meta2->setContent(CString("rubikFurnace.x3d"));
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
meta5->setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/rubikFurnace.x3d"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("description"));
meta6->setContent(CString("a green rubik cube"));
head1->addMeta(meta6);

X3D0->setHead(head1);

Scene* Scene7 = new Scene();
NavigationInfo* NavigationInfo8 = new NavigationInfo();
NavigationInfo8->setType(new CString[1]{CString("EXAMINE")}, 1);
Scene7->addChild(NavigationInfo8);

Viewpoint* Viewpoint9 = new Viewpoint();
Viewpoint9->setDescription(CString("Rubiks Cube on Fire"));
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
Sphere* Sphere28 = new Sphere();
Shape27->setGeometry(Sphere28);

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

ProtoDeclare* ProtoDeclare47 = new ProtoDeclare();
ProtoDeclare47->setName(CString("nine"));
ProtoInterface* ProtoInterface48 = new ProtoInterface();
field* field49 = new field();
field49->setName(CString("ztranslation"));
field49->setAccessType(CString("inputOutput"));
field49->setType(CString("SFVec3f"));
field49->setValue(CString("0 0 0"));
ProtoInterface48->addChild(field49);

field* field50 = new field();
field50->setName(CString("myShape"));
field50->setAccessType(CString("inputOutput"));
field50->setType(CString("MFNode"));
Shape* Shape51 = new Shape();
Sphere* Sphere52 = new Sphere();
Shape51->setGeometry(Sphere52);

Appearance* Appearance53 = new Appearance();
Material* Material54 = new Material();
Material54->setDiffuseColor(new float[3]{1,1,1});
Appearance53->addChild(Material54);

Shape51->addChild(Appearance53);

field50->addChild(Shape51);

ProtoInterface48->addChild(field50);

ProtoDeclare47->addChild(ProtoInterface48);

ProtoBody* ProtoBody55 = new ProtoBody();
Transform* Transform56 = new Transform();
IS* IS57 = new IS();
Connect* connect58 = new Connect();
connect58->setNodeField(CString("translation"));
connect58->setProtoField(CString("ztranslation"));
IS57->addChild(connect58);

Transform56->addChild(IS57);

ProtoInstance* ProtoInstance59 = new ProtoInstance();
ProtoInstance59->setName(CString("three"));
fieldValue* fieldValue60 = new fieldValue();
fieldValue60->setName(&CString("ytranslation"));
fieldValue60->setValue(CString("0 0 0"));
ProtoInstance59->addChild(fieldValue60);

IS* IS61 = new IS();
Connect* connect62 = new Connect();
connect62->setNodeField(CString("myShape"));
connect62->setProtoField(CString("myShape"));
IS61->addChild(connect62);

ProtoInstance59->addChild(IS61);

Transform56->addChild(ProtoInstance59);

ProtoInstance* ProtoInstance63 = new ProtoInstance();
ProtoInstance63->setName(CString("three"));
fieldValue* fieldValue64 = new fieldValue();
fieldValue64->setName(&CString("ytranslation"));
fieldValue64->setValue(CString("0 2 0"));
ProtoInstance63->addChild(fieldValue64);

IS* IS65 = new IS();
Connect* connect66 = new Connect();
connect66->setNodeField(CString("myShape"));
connect66->setProtoField(CString("myShape"));
IS65->addChild(connect66);

ProtoInstance63->addChild(IS65);

Transform56->addChild(ProtoInstance63);

ProtoInstance* ProtoInstance67 = new ProtoInstance();
ProtoInstance67->setName(CString("three"));
fieldValue* fieldValue68 = new fieldValue();
fieldValue68->setName(&CString("ytranslation"));
fieldValue68->setValue(CString("0 -2 0"));
ProtoInstance67->addChild(fieldValue68);

IS* IS69 = new IS();
Connect* connect70 = new Connect();
connect70->setNodeField(CString("myShape"));
connect70->setProtoField(CString("myShape"));
IS69->addChild(connect70);

ProtoInstance67->addChild(IS69);

Transform56->addChild(ProtoInstance67);

ProtoBody55->addChild(Transform56);

ProtoDeclare47->addChild(ProtoBody55);

Scene7->addChild(ProtoDeclare47);

ProtoDeclare* ProtoDeclare71 = new ProtoDeclare();
ProtoDeclare71->setName(CString("twentyseven"));
ProtoInterface* ProtoInterface72 = new ProtoInterface();
field* field73 = new field();
field73->setName(CString("ttranslation"));
field73->setAccessType(CString("inputOutput"));
field73->setType(CString("SFVec3f"));
field73->setValue(CString("0 0 0"));
ProtoInterface72->addChild(field73);

field* field74 = new field();
field74->setName(CString("myShape"));
field74->setAccessType(CString("inputOutput"));
field74->setType(CString("MFNode"));
Shape* Shape75 = new Shape();
Sphere* Sphere76 = new Sphere();
Shape75->setGeometry(Sphere76);

Appearance* Appearance77 = new Appearance();
Material* Material78 = new Material();
Material78->setDiffuseColor(new float[3]{1,1,1});
Appearance77->addChild(Material78);

Shape75->addChild(Appearance77);

field74->addChild(Shape75);

ProtoInterface72->addChild(field74);

ProtoDeclare71->addChild(ProtoInterface72);

ProtoBody* ProtoBody79 = new ProtoBody();
Transform* Transform80 = new Transform();
IS* IS81 = new IS();
Connect* connect82 = new Connect();
connect82->setNodeField(CString("translation"));
connect82->setProtoField(CString("ttranslation"));
IS81->addChild(connect82);

Transform80->addChild(IS81);

ProtoInstance* ProtoInstance83 = new ProtoInstance();
ProtoInstance83->setName(CString("nine"));
fieldValue* fieldValue84 = new fieldValue();
fieldValue84->setName(&CString("ztranslation"));
fieldValue84->setValue(CString("0 0 0"));
ProtoInstance83->addChild(fieldValue84);

IS* IS85 = new IS();
Connect* connect86 = new Connect();
connect86->setNodeField(CString("myShape"));
connect86->setProtoField(CString("myShape"));
IS85->addChild(connect86);

ProtoInstance83->addChild(IS85);

Transform80->addChild(ProtoInstance83);

ProtoInstance* ProtoInstance87 = new ProtoInstance();
ProtoInstance87->setName(CString("nine"));
fieldValue* fieldValue88 = new fieldValue();
fieldValue88->setName(&CString("ztranslation"));
fieldValue88->setValue(CString("0 0 2"));
ProtoInstance87->addChild(fieldValue88);

IS* IS89 = new IS();
Connect* connect90 = new Connect();
connect90->setNodeField(CString("myShape"));
connect90->setProtoField(CString("myShape"));
IS89->addChild(connect90);

ProtoInstance87->addChild(IS89);

Transform80->addChild(ProtoInstance87);

ProtoInstance* ProtoInstance91 = new ProtoInstance();
ProtoInstance91->setName(CString("nine"));
fieldValue* fieldValue92 = new fieldValue();
fieldValue92->setName(&CString("ztranslation"));
fieldValue92->setValue(CString("0 0 -2"));
ProtoInstance91->addChild(fieldValue92);

IS* IS93 = new IS();
Connect* connect94 = new Connect();
connect94->setNodeField(CString("myShape"));
connect94->setProtoField(CString("myShape"));
IS93->addChild(connect94);

ProtoInstance91->addChild(IS93);

Transform80->addChild(ProtoInstance91);

ProtoBody79->addChild(Transform80);

ProtoDeclare71->addChild(ProtoBody79);

Scene7->addChild(ProtoDeclare71);

ProtoInstance* ProtoInstance95 = new ProtoInstance();
ProtoInstance95->setName(CString("twentyseven"));
fieldValue* fieldValue96 = new fieldValue();
fieldValue96->setName(&CString("ttranslation"));
fieldValue96->setValue(CString("0 0 0"));
ProtoInstance95->addChild(fieldValue96);

fieldValue* fieldValue97 = new fieldValue();
fieldValue97->setName(&CString("myShape"));
Shape* Shape98 = new Shape();
Box* Box99 = new Box();
Box99->setSize(new float[3]{1,1,1});
Shape98->setGeometry(Box99);

Appearance* Appearance100 = new Appearance();
Material* Material101 = new Material();
Material101->setDiffuseColor(new float[3]{0,1,0});
Appearance100->addChild(Material101);

Shape98->addChild(Appearance100);

fieldValue97->addChild(Shape98);

ProtoInstance95->addChild(fieldValue97);

Scene7->addChild(ProtoInstance95);

X3D0->setScene(Scene7);

}
