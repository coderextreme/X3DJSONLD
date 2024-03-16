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
meta2->setContent(CString("plainflowers.x3d"));
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName(CString("creator"));
meta3->setContent(CString("John Carlson"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("description"));
meta4->setContent(CString("5 or more prismatic flowers"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("generator"));
meta5->setContent(CString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("identifier"));
meta6->setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/plainflowers.x3d"));
head1->addMeta(meta6);

X3D0->setHead(head1);

Scene* Scene7 = new Scene();
NavigationInfo* NavigationInfo8 = new NavigationInfo();
Scene7->addChild(NavigationInfo8);

Background* Background9 = new Background();
Background9->setBackUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
Background9->setBottomUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
Background9->setFrontUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
Background9->setLeftUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
Background9->setRightUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
Background9->setTopUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
Scene7->addChild(Background9);

Group* Group10 = new Group();
ExternProtoDeclare* ExternProtoDeclare11 = new ExternProtoDeclare();
ExternProtoDeclare11->setName(&CString("FlowerProto"));
ExternProtoDeclare11->setUrl(new CString[1]{CString("../data/flowerproto.x3d#FlowerProto")}, 1);
field* field12 = new field();
field12->setName(CString("vertex"));
field12->setAccessType(CString("inputOutput"));
field12->setType(CString("MFString"));
ExternProtoDeclare11->addChild(field12);

field* field13 = new field();
field13->setName(CString("fragment"));
field13->setAccessType(CString("inputOutput"));
field13->setType(CString("MFString"));
ExternProtoDeclare11->addChild(field13);

Group10->addChild(ExternProtoDeclare11);

ProtoDeclare* ProtoDeclare14 = new ProtoDeclare();
ProtoDeclare14->setName(CString("flower"));
ProtoBody* ProtoBody15 = new ProtoBody();
Group* Group16 = new Group();
ProtoInstance* ProtoInstance17 = new ProtoInstance();
ProtoInstance17->setName(CString("FlowerProto"));
fieldValue* fieldValue18 = new fieldValue();
fieldValue18->setName(&CString("vertex"));
fieldValue18->setValue(CString("\"../shaders/x_ite_flowers_plain.vs\""));
ProtoInstance17->addChild(fieldValue18);

fieldValue* fieldValue19 = new fieldValue();
fieldValue19->setName(&CString("fragment"));
fieldValue19->setValue(CString("\"../shaders/plain.fs\""));
ProtoInstance17->addChild(fieldValue19);

Group16->addChild(ProtoInstance17);

ProtoBody15->addChild(Group16);

ProtoDeclare14->addChild(ProtoBody15);

Group10->addChild(ProtoDeclare14);

ProtoInstance* ProtoInstance20 = new ProtoInstance();
ProtoInstance20->setName(CString("flower"));
Group10->addChild(ProtoInstance20);

ProtoInstance* ProtoInstance21 = new ProtoInstance();
ProtoInstance21->setName(CString("flower"));
Group10->addChild(ProtoInstance21);

ProtoInstance* ProtoInstance22 = new ProtoInstance();
ProtoInstance22->setName(CString("flower"));
Group10->addChild(ProtoInstance22);

ProtoInstance* ProtoInstance23 = new ProtoInstance();
ProtoInstance23->setName(CString("flower"));
Group10->addChild(ProtoInstance23);

ProtoInstance* ProtoInstance24 = new ProtoInstance();
ProtoInstance24->setName(CString("flower"));
Group10->addChild(ProtoInstance24);

ProtoInstance* ProtoInstance25 = new ProtoInstance();
ProtoInstance25->setName(CString("flower"));
Group10->addChild(ProtoInstance25);

Scene7->addChild(Group10);

X3D0->setScene(Scene7);

}
