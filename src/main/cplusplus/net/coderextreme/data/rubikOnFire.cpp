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
meta2->setContent("rubikOnFire.x3d");
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
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/rubikOnFire.x3d");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("description");
meta6->setContent("a white rubik cube");
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
field13->setType("SFNode");
Sphere* Sphere14 = new Sphere();
field13->addChild(Sphere14);

ProtoInterface11->addField(field13);

ProtoDeclare10->setProtoInterface(ProtoInterface11);

ProtoBody* ProtoBody15 = new ProtoBody();
Transform* Transform16 = new Transform();
IS* IS17 = new IS();
Connect* connect18 = new Connect();
connect18->setNodeField("translation");
connect18->setProtoField("xtranslation");
IS17->addConnect(connect18);

Transform16->setIS(IS17);

Shape* Shape19 = new Shape();
IS* IS20 = new IS();
Connect* connect21 = new Connect();
connect21->setNodeField("geometry");
connect21->setProtoField("myShape");
IS20->addConnect(connect21);

Shape19->setIS(IS20);

Appearance* Appearance22 = new Appearance();
Material* Material23 = new Material();
Material23->setDiffuseColor(new float[3]{1,1,1});
Appearance22->setMaterial(Material23);

Shape19->setAppearance(Appearance22);

Transform16->addChild(Shape19);

ProtoBody15->addChild(Transform16);

ProtoDeclare10->setProtoBody(ProtoBody15);

Scene7->addChild(ProtoDeclare10);

ProtoDeclare* ProtoDeclare24 = new ProtoDeclare();
ProtoDeclare24->setName("three");
ProtoInterface* ProtoInterface25 = new ProtoInterface();
field* field26 = new field();
field26->setName("ytranslation");
field26->setAccessType("inputOutput");
field26->setType("SFVec3f");
field26->setValue("0 0 0");
ProtoInterface25->addField(field26);

field* field27 = new field();
field27->setName("myShape");
field27->setAccessType("inputOutput");
field27->setType("SFNode");
Sphere* Sphere28 = new Sphere();
field27->addChild(Sphere28);

ProtoInterface25->addField(field27);

ProtoDeclare24->setProtoInterface(ProtoInterface25);

ProtoBody* ProtoBody29 = new ProtoBody();
Transform* Transform30 = new Transform();
IS* IS31 = new IS();
Connect* connect32 = new Connect();
connect32->setNodeField("translation");
connect32->setProtoField("ytranslation");
IS31->addConnect(connect32);

Transform30->setIS(IS31);

ProtoInstance* ProtoInstance33 = new ProtoInstance();
ProtoInstance33->setName("anyShape");
fieldValue* fieldValue34 = new fieldValue();
fieldValue34->setName("xtranslation");
fieldValue34->setValue("0 0 0");
ProtoInstance33->addFieldValue(fieldValue34);

IS* IS35 = new IS();
Connect* connect36 = new Connect();
connect36->setNodeField("myShape");
connect36->setProtoField("myShape");
IS35->addConnect(connect36);

ProtoInstance33->setIS(IS35);

Transform30->addChild(ProtoInstance33);

ProtoInstance* ProtoInstance37 = new ProtoInstance();
ProtoInstance37->setName("anyShape");
fieldValue* fieldValue38 = new fieldValue();
fieldValue38->setName("xtranslation");
fieldValue38->setValue("2 0 0");
ProtoInstance37->addFieldValue(fieldValue38);

IS* IS39 = new IS();
Connect* connect40 = new Connect();
connect40->setNodeField("myShape");
connect40->setProtoField("myShape");
IS39->addConnect(connect40);

ProtoInstance37->setIS(IS39);

Transform30->addChild(ProtoInstance37);

ProtoInstance* ProtoInstance41 = new ProtoInstance();
ProtoInstance41->setName("anyShape");
fieldValue* fieldValue42 = new fieldValue();
fieldValue42->setName("xtranslation");
fieldValue42->setValue("-2 0 0");
ProtoInstance41->addFieldValue(fieldValue42);

IS* IS43 = new IS();
Connect* connect44 = new Connect();
connect44->setNodeField("myShape");
connect44->setProtoField("myShape");
IS43->addConnect(connect44);

ProtoInstance41->setIS(IS43);

Transform30->addChild(ProtoInstance41);

ProtoBody29->addChild(Transform30);

ProtoDeclare24->setProtoBody(ProtoBody29);

Scene7->addChild(ProtoDeclare24);

ProtoDeclare* ProtoDeclare45 = new ProtoDeclare();
ProtoDeclare45->setName("nine");
ProtoInterface* ProtoInterface46 = new ProtoInterface();
field* field47 = new field();
field47->setName("ztranslation");
field47->setAccessType("inputOutput");
field47->setType("SFVec3f");
field47->setValue("0 0 0");
ProtoInterface46->addField(field47);

field* field48 = new field();
field48->setName("myShape");
field48->setAccessType("inputOutput");
field48->setType("SFNode");
Sphere* Sphere49 = new Sphere();
field48->addChild(Sphere49);

ProtoInterface46->addField(field48);

ProtoDeclare45->setProtoInterface(ProtoInterface46);

ProtoBody* ProtoBody50 = new ProtoBody();
Transform* Transform51 = new Transform();
IS* IS52 = new IS();
Connect* connect53 = new Connect();
connect53->setNodeField("translation");
connect53->setProtoField("ztranslation");
IS52->addConnect(connect53);

Transform51->setIS(IS52);

ProtoInstance* ProtoInstance54 = new ProtoInstance();
ProtoInstance54->setName("three");
fieldValue* fieldValue55 = new fieldValue();
fieldValue55->setName("ytranslation");
fieldValue55->setValue("0 0 0");
ProtoInstance54->addFieldValue(fieldValue55);

IS* IS56 = new IS();
Connect* connect57 = new Connect();
connect57->setNodeField("myShape");
connect57->setProtoField("myShape");
IS56->addConnect(connect57);

ProtoInstance54->setIS(IS56);

Transform51->addChild(ProtoInstance54);

ProtoInstance* ProtoInstance58 = new ProtoInstance();
ProtoInstance58->setName("three");
fieldValue* fieldValue59 = new fieldValue();
fieldValue59->setName("ytranslation");
fieldValue59->setValue("0 2 0");
ProtoInstance58->addFieldValue(fieldValue59);

IS* IS60 = new IS();
Connect* connect61 = new Connect();
connect61->setNodeField("myShape");
connect61->setProtoField("myShape");
IS60->addConnect(connect61);

ProtoInstance58->setIS(IS60);

Transform51->addChild(ProtoInstance58);

ProtoInstance* ProtoInstance62 = new ProtoInstance();
ProtoInstance62->setName("three");
fieldValue* fieldValue63 = new fieldValue();
fieldValue63->setName("ytranslation");
fieldValue63->setValue("0 -2 0");
ProtoInstance62->addFieldValue(fieldValue63);

IS* IS64 = new IS();
Connect* connect65 = new Connect();
connect65->setNodeField("myShape");
connect65->setProtoField("myShape");
IS64->addConnect(connect65);

ProtoInstance62->setIS(IS64);

Transform51->addChild(ProtoInstance62);

ProtoBody50->addChild(Transform51);

ProtoDeclare45->setProtoBody(ProtoBody50);

Scene7->addChild(ProtoDeclare45);

ProtoDeclare* ProtoDeclare66 = new ProtoDeclare();
ProtoDeclare66->setName("twentyseven");
ProtoInterface* ProtoInterface67 = new ProtoInterface();
field* field68 = new field();
field68->setName("ttranslation");
field68->setAccessType("inputOutput");
field68->setType("SFVec3f");
field68->setValue("0 0 0");
ProtoInterface67->addField(field68);

field* field69 = new field();
field69->setName("myShape");
field69->setAccessType("inputOutput");
field69->setType("SFNode");
Sphere* Sphere70 = new Sphere();
field69->addChild(Sphere70);

ProtoInterface67->addField(field69);

ProtoDeclare66->setProtoInterface(ProtoInterface67);

ProtoBody* ProtoBody71 = new ProtoBody();
Transform* Transform72 = new Transform();
IS* IS73 = new IS();
Connect* connect74 = new Connect();
connect74->setNodeField("translation");
connect74->setProtoField("ttranslation");
IS73->addConnect(connect74);

Transform72->setIS(IS73);

ProtoInstance* ProtoInstance75 = new ProtoInstance();
ProtoInstance75->setName("nine");
fieldValue* fieldValue76 = new fieldValue();
fieldValue76->setName("ztranslation");
fieldValue76->setValue("0 0 0");
ProtoInstance75->addFieldValue(fieldValue76);

IS* IS77 = new IS();
Connect* connect78 = new Connect();
connect78->setNodeField("myShape");
connect78->setProtoField("myShape");
IS77->addConnect(connect78);

ProtoInstance75->setIS(IS77);

Transform72->addChild(ProtoInstance75);

ProtoInstance* ProtoInstance79 = new ProtoInstance();
ProtoInstance79->setName("nine");
fieldValue* fieldValue80 = new fieldValue();
fieldValue80->setName("ztranslation");
fieldValue80->setValue("0 0 2");
ProtoInstance79->addFieldValue(fieldValue80);

IS* IS81 = new IS();
Connect* connect82 = new Connect();
connect82->setNodeField("myShape");
connect82->setProtoField("myShape");
IS81->addConnect(connect82);

ProtoInstance79->setIS(IS81);

Transform72->addChild(ProtoInstance79);

ProtoInstance* ProtoInstance83 = new ProtoInstance();
ProtoInstance83->setName("nine");
fieldValue* fieldValue84 = new fieldValue();
fieldValue84->setName("ztranslation");
fieldValue84->setValue("0 0 -2");
ProtoInstance83->addFieldValue(fieldValue84);

IS* IS85 = new IS();
Connect* connect86 = new Connect();
connect86->setNodeField("myShape");
connect86->setProtoField("myShape");
IS85->addConnect(connect86);

ProtoInstance83->setIS(IS85);

Transform72->addChild(ProtoInstance83);

ProtoBody71->addChild(Transform72);

ProtoDeclare66->setProtoBody(ProtoBody71);

Scene7->addChild(ProtoDeclare66);

ProtoInstance* ProtoInstance87 = new ProtoInstance();
ProtoInstance87->setName("twentyseven");
fieldValue* fieldValue88 = new fieldValue();
fieldValue88->setName("ttranslation");
fieldValue88->setValue("0 0 0");
ProtoInstance87->addFieldValue(fieldValue88);

fieldValue* fieldValue89 = new fieldValue();
fieldValue89->setName("myShape");
Box* Box90 = new Box();
Box90->setSize(new float[3]{1,1,1});
fieldValue89->addChild(Box90);

ProtoInstance87->addFieldValue(fieldValue89);

Scene7->addChild(ProtoInstance87);

X3D0->setScene(Scene7);

X3D0->toXMLString();
}
