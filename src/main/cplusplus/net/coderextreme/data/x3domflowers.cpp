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
component* component2 = new component();
component2->setName("Scripting");
component2->setLevel(1);
head1->addComponent(component2);

component* component3 = new component();
component3->setName("EnvironmentalEffects");
component3->setLevel(3);
head1->addComponent(component3);

component* component4 = new component();
component4->setName("Shaders");
component4->setLevel(1);
head1->addComponent(component4);

component* component5 = new component();
component5->setName("CubeMapTexturing");
component5->setLevel(1);
head1->addComponent(component5);

component* component6 = new component();
component6->setName("Texturing");
component6->setLevel(1);
head1->addComponent(component6);

component* component7 = new component();
component7->setName("Rendering");
component7->setLevel(1);
head1->addComponent(component7);

component* component8 = new component();
component8->setName("Grouping");
component8->setLevel(3);
head1->addComponent(component8);

component* component9 = new component();
component9->setName("Core");
component9->setLevel(1);
head1->addComponent(component9);

meta* meta10 = new meta();
meta10->setName("title");
meta10->setContent("x3domflowers.x3d");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("creator");
meta11->setContent("John Carlson");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("description");
meta12->setContent("5 or more prismatic flowers");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("generator");
meta13->setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("identifier");
meta14->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/x3domflowers.x3d");
head1->addMeta(meta14);

X3D0->setHead(head1);

Scene* Scene15 = new Scene();
NavigationInfo* NavigationInfo16 = new NavigationInfo();
Scene15->addChild(NavigationInfo16);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background* Background17 = new Background();
Background17->setBackUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background17->setBottomUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background17->setFrontUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background17->setLeftUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background17->setRightUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background17->setTopUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Scene15->addChild(Background17);

Group* Group18 = new Group();
ExternProtoDeclare* ExternProtoDeclare19 = new ExternProtoDeclare();
ExternProtoDeclare19->setName("FlowerProto");
ExternProtoDeclare19->setUrl(new String[1]{"../data/flowerproto.json#FlowerProto"}, 1);
field* field20 = new field();
field20->setName("vertex");
field20->setAccessType("inputOutput");
field20->setType("MFString");
ExternProtoDeclare19->addField(field20);

field* field21 = new field();
field21->setName("fragment");
field21->setAccessType("inputOutput");
field21->setType("MFString");
ExternProtoDeclare19->addField(field21);

Group18->addChild(ExternProtoDeclare19);

ProtoDeclare* ProtoDeclare22 = new ProtoDeclare();
ProtoDeclare22->setName("flower");
ProtoBody* ProtoBody23 = new ProtoBody();
Group* Group24 = new Group();
ProtoInstance* ProtoInstance25 = new ProtoInstance();
ProtoInstance25->setName("FlowerProto");
fieldValue* fieldValue26 = new fieldValue();
fieldValue26->setName("vertex");
fieldValue26->setValue("\"../shaders/x3dom_flowers_chromatic.vs\"");
ProtoInstance25->addFieldValue(fieldValue26);

fieldValue* fieldValue27 = new fieldValue();
fieldValue27->setName("fragment");
fieldValue27->setValue("\"../shaders/common.fs\"");
ProtoInstance25->addFieldValue(fieldValue27);

Group24->addChild(ProtoInstance25);

ProtoBody23->addChild(Group24);

ProtoDeclare22->setProtoBody(ProtoBody23);

Group18->addChild(ProtoDeclare22);

ProtoInstance* ProtoInstance28 = new ProtoInstance();
ProtoInstance28->setName("flower");
Group18->addChild(ProtoInstance28);

ProtoInstance* ProtoInstance29 = new ProtoInstance();
ProtoInstance29->setName("flower");
Group18->addChild(ProtoInstance29);

ProtoInstance* ProtoInstance30 = new ProtoInstance();
ProtoInstance30->setName("flower");
Group18->addChild(ProtoInstance30);

ProtoInstance* ProtoInstance31 = new ProtoInstance();
ProtoInstance31->setName("flower");
Group18->addChild(ProtoInstance31);

ProtoInstance* ProtoInstance32 = new ProtoInstance();
ProtoInstance32->setName("flower");
Group18->addChild(ProtoInstance32);

ProtoInstance* ProtoInstance33 = new ProtoInstance();
ProtoInstance33->setName("flower");
Group18->addChild(ProtoInstance33);

Scene15->addChild(Group18);

X3D0->setScene(Scene15);

X3D0->toXMLString();
}
