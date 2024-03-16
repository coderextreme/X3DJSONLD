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
meta2->setContent("rubik.x3d");
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
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/rubik.x3d");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("description");
meta6->setContent("a kind of rubik cube with spheres");
head1->addMeta(meta6);

X3D0->setHead(head1);

Scene* Scene7 = new Scene();
NavigationInfo* NavigationInfo8 = new NavigationInfo();
NavigationInfo8->setType(new String[1]{"EXAMINE"}, 1);
Scene7->addChild(NavigationInfo8);

Viewpoint* Viewpoint9 = new Viewpoint();
Viewpoint9->setDescription("Rubiks Cube");
Viewpoint9->setPosition(new float[3]{0,0,12});
Scene7->addChild(Viewpoint9);

ProtoDeclare* ProtoDeclare10 = new ProtoDeclare();
ProtoDeclare10->setName("sphereproto");
ProtoInterface* ProtoInterface11 = new ProtoInterface();
field* field12 = new field();
field12->setName("xtranslation");
field12->setAccessType("inputOutput");
field12->setType("SFVec3f");
field12->setValue("0 0 0");
ProtoInterface11->addField(field12);

ProtoDeclare10->setProtoInterface(ProtoInterface11);

ProtoBody* ProtoBody13 = new ProtoBody();
Transform* Transform14 = new Transform();
IS* IS15 = new IS();
Connect* connect16 = new Connect();
connect16->setNodeField("translation");
connect16->setProtoField("xtranslation");
IS15->addConnect(connect16);

Transform14->setIS(IS15);

Shape* Shape17 = new Shape();
Sphere* Sphere18 = new Sphere();
Shape17->setGeometry(Sphere18);

Appearance* Appearance19 = new Appearance();
Material* Material20 = new Material();
Material20->setDiffuseColor(new float[3]{1,1,1});
Appearance19->setMaterial(Material20);

Shape17->setAppearance(Appearance19);

Transform14->addChild(Shape17);

ProtoBody13->addChild(Transform14);

ProtoDeclare10->setProtoBody(ProtoBody13);

Scene7->addChild(ProtoDeclare10);

ProtoDeclare* ProtoDeclare21 = new ProtoDeclare();
ProtoDeclare21->setName("three");
ProtoInterface* ProtoInterface22 = new ProtoInterface();
field* field23 = new field();
field23->setName("ytranslation");
field23->setAccessType("inputOutput");
field23->setType("SFVec3f");
field23->setValue("0 0 0");
ProtoInterface22->addField(field23);

ProtoDeclare21->setProtoInterface(ProtoInterface22);

ProtoBody* ProtoBody24 = new ProtoBody();
Transform* Transform25 = new Transform();
IS* IS26 = new IS();
Connect* connect27 = new Connect();
connect27->setNodeField("translation");
connect27->setProtoField("ytranslation");
IS26->addConnect(connect27);

Transform25->setIS(IS26);

ProtoInstance* ProtoInstance28 = new ProtoInstance();
ProtoInstance28->setName("sphereproto");
fieldValue* fieldValue29 = new fieldValue();
fieldValue29->setName("xtranslation");
fieldValue29->setValue("0 0 0");
ProtoInstance28->addFieldValue(fieldValue29);

Transform25->addChild(ProtoInstance28);

ProtoInstance* ProtoInstance30 = new ProtoInstance();
ProtoInstance30->setName("sphereproto");
fieldValue* fieldValue31 = new fieldValue();
fieldValue31->setName("xtranslation");
fieldValue31->setValue("2 0 0");
ProtoInstance30->addFieldValue(fieldValue31);

Transform25->addChild(ProtoInstance30);

ProtoInstance* ProtoInstance32 = new ProtoInstance();
ProtoInstance32->setName("sphereproto");
fieldValue* fieldValue33 = new fieldValue();
fieldValue33->setName("xtranslation");
fieldValue33->setValue("-2 0 0");
ProtoInstance32->addFieldValue(fieldValue33);

Transform25->addChild(ProtoInstance32);

ProtoBody24->addChild(Transform25);

ProtoDeclare21->setProtoBody(ProtoBody24);

Scene7->addChild(ProtoDeclare21);

ProtoDeclare* ProtoDeclare34 = new ProtoDeclare();
ProtoDeclare34->setName("nine");
ProtoInterface* ProtoInterface35 = new ProtoInterface();
field* field36 = new field();
field36->setName("ztranslation");
field36->setAccessType("inputOutput");
field36->setType("SFVec3f");
field36->setValue("0 0 0");
ProtoInterface35->addField(field36);

ProtoDeclare34->setProtoInterface(ProtoInterface35);

ProtoBody* ProtoBody37 = new ProtoBody();
Transform* Transform38 = new Transform();
IS* IS39 = new IS();
Connect* connect40 = new Connect();
connect40->setNodeField("translation");
connect40->setProtoField("ztranslation");
IS39->addConnect(connect40);

Transform38->setIS(IS39);

ProtoInstance* ProtoInstance41 = new ProtoInstance();
ProtoInstance41->setName("three");
fieldValue* fieldValue42 = new fieldValue();
fieldValue42->setName("ytranslation");
fieldValue42->setValue("0 0 0");
ProtoInstance41->addFieldValue(fieldValue42);

Transform38->addChild(ProtoInstance41);

ProtoInstance* ProtoInstance43 = new ProtoInstance();
ProtoInstance43->setName("three");
fieldValue* fieldValue44 = new fieldValue();
fieldValue44->setName("ytranslation");
fieldValue44->setValue("0 2 0");
ProtoInstance43->addFieldValue(fieldValue44);

Transform38->addChild(ProtoInstance43);

ProtoInstance* ProtoInstance45 = new ProtoInstance();
ProtoInstance45->setName("three");
fieldValue* fieldValue46 = new fieldValue();
fieldValue46->setName("ytranslation");
fieldValue46->setValue("0 -2 0");
ProtoInstance45->addFieldValue(fieldValue46);

Transform38->addChild(ProtoInstance45);

ProtoBody37->addChild(Transform38);

ProtoDeclare34->setProtoBody(ProtoBody37);

Scene7->addChild(ProtoDeclare34);

ProtoDeclare* ProtoDeclare47 = new ProtoDeclare();
ProtoDeclare47->setName("twentyseven");
ProtoInterface* ProtoInterface48 = new ProtoInterface();
field* field49 = new field();
field49->setName("ttranslation");
field49->setAccessType("inputOutput");
field49->setType("SFVec3f");
field49->setValue("0 0 0");
ProtoInterface48->addField(field49);

ProtoDeclare47->setProtoInterface(ProtoInterface48);

ProtoBody* ProtoBody50 = new ProtoBody();
Transform* Transform51 = new Transform();
IS* IS52 = new IS();
Connect* connect53 = new Connect();
connect53->setNodeField("translation");
connect53->setProtoField("ttranslation");
IS52->addConnect(connect53);

Transform51->setIS(IS52);

ProtoInstance* ProtoInstance54 = new ProtoInstance();
ProtoInstance54->setName("nine");
fieldValue* fieldValue55 = new fieldValue();
fieldValue55->setName("ztranslation");
fieldValue55->setValue("0 0 0");
ProtoInstance54->addFieldValue(fieldValue55);

Transform51->addChild(ProtoInstance54);

ProtoInstance* ProtoInstance56 = new ProtoInstance();
ProtoInstance56->setName("nine");
fieldValue* fieldValue57 = new fieldValue();
fieldValue57->setName("ztranslation");
fieldValue57->setValue("0 0 2");
ProtoInstance56->addFieldValue(fieldValue57);

Transform51->addChild(ProtoInstance56);

ProtoInstance* ProtoInstance58 = new ProtoInstance();
ProtoInstance58->setName("nine");
fieldValue* fieldValue59 = new fieldValue();
fieldValue59->setName("ztranslation");
fieldValue59->setValue("0 0 -2");
ProtoInstance58->addFieldValue(fieldValue59);

Transform51->addChild(ProtoInstance58);

ProtoBody50->addChild(Transform51);

ProtoDeclare47->setProtoBody(ProtoBody50);

Scene7->addChild(ProtoDeclare47);

ProtoInstance* ProtoInstance60 = new ProtoInstance();
ProtoInstance60->setName("twentyseven");
fieldValue* fieldValue61 = new fieldValue();
fieldValue61->setName("ttranslation");
fieldValue61->setValue("0 0 0");
ProtoInstance60->addFieldValue(fieldValue61);

Scene7->addChild(ProtoInstance60);

X3D0->setScene(Scene7);

X3D0->toXMLString();
}
