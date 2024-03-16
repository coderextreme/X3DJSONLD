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
meta2->setContent(CString("rubikOnFire.x3d"));
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
meta5->setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/rubikOnFire.x3d"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("description"));
meta6->setContent(CString("a white rubik cube"));
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
field13->setType(CString("SFNode"));
Sphere* Sphere14 = new Sphere();
field13->addChild(Sphere14);

ProtoInterface11->addChild(field13);

ProtoDeclare10->addChild(ProtoInterface11);

ProtoBody* ProtoBody15 = new ProtoBody();
Transform* Transform16 = new Transform();
IS* IS17 = new IS();
Connect* connect18 = new Connect();
connect18->setNodeField(CString("translation"));
connect18->setProtoField(CString("xtranslation"));
IS17->addChild(connect18);

Transform16->addChild(IS17);

Shape* Shape19 = new Shape();
IS* IS20 = new IS();
Connect* connect21 = new Connect();
connect21->setNodeField(CString("geometry"));
connect21->setProtoField(CString("myShape"));
IS20->addChild(connect21);

Shape19->addChild(IS20);

Appearance* Appearance22 = new Appearance();
Material* Material23 = new Material();
Material23->setDiffuseColor(new float[3]{1,1,1});
Appearance22->addChild(Material23);

Shape19->addChild(Appearance22);

Transform16->addChild(Shape19);

ProtoBody15->addChild(Transform16);

ProtoDeclare10->addChild(ProtoBody15);

Scene7->addChild(ProtoDeclare10);

ProtoDeclare* ProtoDeclare24 = new ProtoDeclare();
ProtoDeclare24->setName(CString("three"));
ProtoInterface* ProtoInterface25 = new ProtoInterface();
field* field26 = new field();
field26->setName(CString("ytranslation"));
field26->setAccessType(CString("inputOutput"));
field26->setType(CString("SFVec3f"));
field26->setValue(CString("0 0 0"));
ProtoInterface25->addChild(field26);

field* field27 = new field();
field27->setName(CString("myShape"));
field27->setAccessType(CString("inputOutput"));
field27->setType(CString("SFNode"));
Sphere* Sphere28 = new Sphere();
field27->addChild(Sphere28);

ProtoInterface25->addChild(field27);

ProtoDeclare24->addChild(ProtoInterface25);

ProtoBody* ProtoBody29 = new ProtoBody();
Transform* Transform30 = new Transform();
IS* IS31 = new IS();
Connect* connect32 = new Connect();
connect32->setNodeField(CString("translation"));
connect32->setProtoField(CString("ytranslation"));
IS31->addChild(connect32);

Transform30->addChild(IS31);

ProtoInstance* ProtoInstance33 = new ProtoInstance();
ProtoInstance33->setName(CString("anyShape"));
fieldValue* fieldValue34 = new fieldValue();
fieldValue34->setName(&CString("xtranslation"));
fieldValue34->setValue(CString("0 0 0"));
ProtoInstance33->addChild(fieldValue34);

IS* IS35 = new IS();
Connect* connect36 = new Connect();
connect36->setNodeField(CString("myShape"));
connect36->setProtoField(CString("myShape"));
IS35->addChild(connect36);

ProtoInstance33->addChild(IS35);

Transform30->addChild(ProtoInstance33);

ProtoInstance* ProtoInstance37 = new ProtoInstance();
ProtoInstance37->setName(CString("anyShape"));
fieldValue* fieldValue38 = new fieldValue();
fieldValue38->setName(&CString("xtranslation"));
fieldValue38->setValue(CString("2 0 0"));
ProtoInstance37->addChild(fieldValue38);

IS* IS39 = new IS();
Connect* connect40 = new Connect();
connect40->setNodeField(CString("myShape"));
connect40->setProtoField(CString("myShape"));
IS39->addChild(connect40);

ProtoInstance37->addChild(IS39);

Transform30->addChild(ProtoInstance37);

ProtoInstance* ProtoInstance41 = new ProtoInstance();
ProtoInstance41->setName(CString("anyShape"));
fieldValue* fieldValue42 = new fieldValue();
fieldValue42->setName(&CString("xtranslation"));
fieldValue42->setValue(CString("-2 0 0"));
ProtoInstance41->addChild(fieldValue42);

IS* IS43 = new IS();
Connect* connect44 = new Connect();
connect44->setNodeField(CString("myShape"));
connect44->setProtoField(CString("myShape"));
IS43->addChild(connect44);

ProtoInstance41->addChild(IS43);

Transform30->addChild(ProtoInstance41);

ProtoBody29->addChild(Transform30);

ProtoDeclare24->addChild(ProtoBody29);

Scene7->addChild(ProtoDeclare24);

ProtoDeclare* ProtoDeclare45 = new ProtoDeclare();
ProtoDeclare45->setName(CString("nine"));
ProtoInterface* ProtoInterface46 = new ProtoInterface();
field* field47 = new field();
field47->setName(CString("ztranslation"));
field47->setAccessType(CString("inputOutput"));
field47->setType(CString("SFVec3f"));
field47->setValue(CString("0 0 0"));
ProtoInterface46->addChild(field47);

field* field48 = new field();
field48->setName(CString("myShape"));
field48->setAccessType(CString("inputOutput"));
field48->setType(CString("SFNode"));
Sphere* Sphere49 = new Sphere();
field48->addChild(Sphere49);

ProtoInterface46->addChild(field48);

ProtoDeclare45->addChild(ProtoInterface46);

ProtoBody* ProtoBody50 = new ProtoBody();
Transform* Transform51 = new Transform();
IS* IS52 = new IS();
Connect* connect53 = new Connect();
connect53->setNodeField(CString("translation"));
connect53->setProtoField(CString("ztranslation"));
IS52->addChild(connect53);

Transform51->addChild(IS52);

ProtoInstance* ProtoInstance54 = new ProtoInstance();
ProtoInstance54->setName(CString("three"));
fieldValue* fieldValue55 = new fieldValue();
fieldValue55->setName(&CString("ytranslation"));
fieldValue55->setValue(CString("0 0 0"));
ProtoInstance54->addChild(fieldValue55);

IS* IS56 = new IS();
Connect* connect57 = new Connect();
connect57->setNodeField(CString("myShape"));
connect57->setProtoField(CString("myShape"));
IS56->addChild(connect57);

ProtoInstance54->addChild(IS56);

Transform51->addChild(ProtoInstance54);

ProtoInstance* ProtoInstance58 = new ProtoInstance();
ProtoInstance58->setName(CString("three"));
fieldValue* fieldValue59 = new fieldValue();
fieldValue59->setName(&CString("ytranslation"));
fieldValue59->setValue(CString("0 2 0"));
ProtoInstance58->addChild(fieldValue59);

IS* IS60 = new IS();
Connect* connect61 = new Connect();
connect61->setNodeField(CString("myShape"));
connect61->setProtoField(CString("myShape"));
IS60->addChild(connect61);

ProtoInstance58->addChild(IS60);

Transform51->addChild(ProtoInstance58);

ProtoInstance* ProtoInstance62 = new ProtoInstance();
ProtoInstance62->setName(CString("three"));
fieldValue* fieldValue63 = new fieldValue();
fieldValue63->setName(&CString("ytranslation"));
fieldValue63->setValue(CString("0 -2 0"));
ProtoInstance62->addChild(fieldValue63);

IS* IS64 = new IS();
Connect* connect65 = new Connect();
connect65->setNodeField(CString("myShape"));
connect65->setProtoField(CString("myShape"));
IS64->addChild(connect65);

ProtoInstance62->addChild(IS64);

Transform51->addChild(ProtoInstance62);

ProtoBody50->addChild(Transform51);

ProtoDeclare45->addChild(ProtoBody50);

Scene7->addChild(ProtoDeclare45);

ProtoDeclare* ProtoDeclare66 = new ProtoDeclare();
ProtoDeclare66->setName(CString("twentyseven"));
ProtoInterface* ProtoInterface67 = new ProtoInterface();
field* field68 = new field();
field68->setName(CString("ttranslation"));
field68->setAccessType(CString("inputOutput"));
field68->setType(CString("SFVec3f"));
field68->setValue(CString("0 0 0"));
ProtoInterface67->addChild(field68);

field* field69 = new field();
field69->setName(CString("myShape"));
field69->setAccessType(CString("inputOutput"));
field69->setType(CString("SFNode"));
Sphere* Sphere70 = new Sphere();
field69->addChild(Sphere70);

ProtoInterface67->addChild(field69);

ProtoDeclare66->addChild(ProtoInterface67);

ProtoBody* ProtoBody71 = new ProtoBody();
Transform* Transform72 = new Transform();
IS* IS73 = new IS();
Connect* connect74 = new Connect();
connect74->setNodeField(CString("translation"));
connect74->setProtoField(CString("ttranslation"));
IS73->addChild(connect74);

Transform72->addChild(IS73);

ProtoInstance* ProtoInstance75 = new ProtoInstance();
ProtoInstance75->setName(CString("nine"));
fieldValue* fieldValue76 = new fieldValue();
fieldValue76->setName(&CString("ztranslation"));
fieldValue76->setValue(CString("0 0 0"));
ProtoInstance75->addChild(fieldValue76);

IS* IS77 = new IS();
Connect* connect78 = new Connect();
connect78->setNodeField(CString("myShape"));
connect78->setProtoField(CString("myShape"));
IS77->addChild(connect78);

ProtoInstance75->addChild(IS77);

Transform72->addChild(ProtoInstance75);

ProtoInstance* ProtoInstance79 = new ProtoInstance();
ProtoInstance79->setName(CString("nine"));
fieldValue* fieldValue80 = new fieldValue();
fieldValue80->setName(&CString("ztranslation"));
fieldValue80->setValue(CString("0 0 2"));
ProtoInstance79->addChild(fieldValue80);

IS* IS81 = new IS();
Connect* connect82 = new Connect();
connect82->setNodeField(CString("myShape"));
connect82->setProtoField(CString("myShape"));
IS81->addChild(connect82);

ProtoInstance79->addChild(IS81);

Transform72->addChild(ProtoInstance79);

ProtoInstance* ProtoInstance83 = new ProtoInstance();
ProtoInstance83->setName(CString("nine"));
fieldValue* fieldValue84 = new fieldValue();
fieldValue84->setName(&CString("ztranslation"));
fieldValue84->setValue(CString("0 0 -2"));
ProtoInstance83->addChild(fieldValue84);

IS* IS85 = new IS();
Connect* connect86 = new Connect();
connect86->setNodeField(CString("myShape"));
connect86->setProtoField(CString("myShape"));
IS85->addChild(connect86);

ProtoInstance83->addChild(IS85);

Transform72->addChild(ProtoInstance83);

ProtoBody71->addChild(Transform72);

ProtoDeclare66->addChild(ProtoBody71);

Scene7->addChild(ProtoDeclare66);

ProtoInstance* ProtoInstance87 = new ProtoInstance();
ProtoInstance87->setName(CString("twentyseven"));
fieldValue* fieldValue88 = new fieldValue();
fieldValue88->setName(&CString("ttranslation"));
fieldValue88->setValue(CString("0 0 0"));
ProtoInstance87->addChild(fieldValue88);

fieldValue* fieldValue89 = new fieldValue();
fieldValue89->setName(&CString("myShape"));
Box* Box90 = new Box();
Box90->setSize(new float[3]{1,1,1});
fieldValue89->addChild(Box90);

ProtoInstance87->addChild(fieldValue89);

Scene7->addChild(ProtoInstance87);

X3D0->setScene(Scene7);

}
