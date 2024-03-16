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
meta2->setContent("freewrlflowers.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("creator");
meta3->setContent("John Carlson");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("description");
meta4->setContent("5 or more prismatic flowers");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("generator");
meta5->setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("identifier");
meta6->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/freewrlflowers.x3d");
head1->addMeta(meta6);

X3D0->setHead(head1);

Scene* Scene7 = new Scene();
NavigationInfo* NavigationInfo8 = new NavigationInfo();
Scene7->addChild(NavigationInfo8);

Background* Background9 = new Background();
Background9->setBackUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background9->setBottomUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background9->setFrontUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background9->setLeftUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background9->setRightUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background9->setTopUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Scene7->addChild(Background9);

Group* Group10 = new Group();
ExternProtoDeclare* ExternProtoDeclare11 = new ExternProtoDeclare();
ExternProtoDeclare11->setName("FlowerProto");
ExternProtoDeclare11->setUrl(new String[1]{"../data/flowerproto.x3d#FlowerProto"}, 1);
field* field12 = new field();
field12->setName("vertex");
field12->setAccessType("inputOutput");
field12->setType("MFString");
ExternProtoDeclare11->addField(field12);

field* field13 = new field();
field13->setName("fragment");
field13->setAccessType("inputOutput");
field13->setType("MFString");
ExternProtoDeclare11->addField(field13);

Group10->addChild(ExternProtoDeclare11);

ProtoDeclare* ProtoDeclare14 = new ProtoDeclare();
ProtoDeclare14->setName("flower");
ProtoBody* ProtoBody15 = new ProtoBody();
Group* Group16 = new Group();
ProtoInstance* ProtoInstance17 = new ProtoInstance();
ProtoInstance17->setName("FlowerProto");
fieldValue* fieldValue18 = new fieldValue();
fieldValue18->setName("vertex");
fieldValue18->setValue("\"../shaders/freewrl_flowers_chromatic.vs\"");
ProtoInstance17->addFieldValue(fieldValue18);

fieldValue* fieldValue19 = new fieldValue();
fieldValue19->setName("fragment");
fieldValue19->setValue("\"../shaders/freewrl.fs\"");
ProtoInstance17->addFieldValue(fieldValue19);

Group16->addChild(ProtoInstance17);

ProtoBody15->addChild(Group16);

ProtoDeclare14->setProtoBody(ProtoBody15);

Group10->addChild(ProtoDeclare14);

ProtoInstance* ProtoInstance20 = new ProtoInstance();
ProtoInstance20->setName("flower");
Group10->addChild(ProtoInstance20);

ProtoInstance* ProtoInstance21 = new ProtoInstance();
ProtoInstance21->setName("flower");
Group10->addChild(ProtoInstance21);

ProtoInstance* ProtoInstance22 = new ProtoInstance();
ProtoInstance22->setName("flower");
Group10->addChild(ProtoInstance22);

ProtoInstance* ProtoInstance23 = new ProtoInstance();
ProtoInstance23->setName("flower");
Group10->addChild(ProtoInstance23);

ProtoInstance* ProtoInstance24 = new ProtoInstance();
ProtoInstance24->setName("flower");
Group10->addChild(ProtoInstance24);

ProtoInstance* ProtoInstance25 = new ProtoInstance();
ProtoInstance25->setName("flower");
Group10->addChild(ProtoInstance25);

Scene7->addChild(Group10);

X3D0->setScene(Scene7);

X3D0->toXMLString();
}
