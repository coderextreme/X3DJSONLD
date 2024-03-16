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
X3D0->setVersion("4.0");
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
meta10->setContent("sphereflowers.x3d");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("creator");
meta11->setContent("John Carlson");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("created");
meta12->setContent("Jan 17 2022");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("modified");
meta13->setContent("Sep 3 2023");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("description");
meta14->setContent("5 or more prismatic flowers");
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName("generator");
meta15->setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName("identifier");
meta16->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/sphereflowers.x3d");
head1->addMeta(meta16);

X3D0->setHead(head1);

Scene* Scene17 = new Scene();
NavigationInfo* NavigationInfo18 = new NavigationInfo();
Scene17->addChild(NavigationInfo18);

Background* Background19 = new Background();
Background19->setBackUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background19->setBottomUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background19->setFrontUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background19->setLeftUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background19->setRightUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background19->setTopUrl(new String[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Scene17->addChild(Background19);

Group* Group20 = new Group();
ExternProtoDeclare* ExternProtoDeclare21 = new ExternProtoDeclare();
ExternProtoDeclare21->setName("FlowerProto");
ExternProtoDeclare21->setUrl(new String[2]{"../data/flowerproto.x3d#FlowerProto","https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d#FlowerProto"}, 2);
field* field22 = new field();
field22->setName("vertex");
field22->setAccessType("inputOutput");
field22->setType("MFString");
ExternProtoDeclare21->addField(field22);

field* field23 = new field();
field23->setName("fragment");
field23->setAccessType("inputOutput");
field23->setType("MFString");
ExternProtoDeclare21->addField(field23);

Group20->addChild(ExternProtoDeclare21);

ProtoDeclare* ProtoDeclare24 = new ProtoDeclare();
ProtoDeclare24->setName("flower");
ProtoBody* ProtoBody25 = new ProtoBody();
Group* Group26 = new Group();
ProtoInstance* ProtoInstance27 = new ProtoInstance();
ProtoInstance27->setName("FlowerProto");
fieldValue* fieldValue28 = new fieldValue();
fieldValue28->setName("vertex");
fieldValue28->setValue("\"../shaders/x_ite_flowers_chromatic.vs\"");
ProtoInstance27->addFieldValue(fieldValue28);

fieldValue* fieldValue29 = new fieldValue();
fieldValue29->setName("fragment");
fieldValue29->setValue("\"../shaders/x_ite.fs\"");
ProtoInstance27->addFieldValue(fieldValue29);

Group26->addChild(ProtoInstance27);

ProtoBody25->addChild(Group26);

ProtoDeclare24->setProtoBody(ProtoBody25);

Group20->addChild(ProtoDeclare24);

ProtoInstance* ProtoInstance30 = new ProtoInstance();
ProtoInstance30->setName("flower");
Group20->addChild(ProtoInstance30);

ProtoInstance* ProtoInstance31 = new ProtoInstance();
ProtoInstance31->setName("flower");
Group20->addChild(ProtoInstance31);

ProtoInstance* ProtoInstance32 = new ProtoInstance();
ProtoInstance32->setName("flower");
Group20->addChild(ProtoInstance32);

ProtoInstance* ProtoInstance33 = new ProtoInstance();
ProtoInstance33->setName("flower");
Group20->addChild(ProtoInstance33);

ProtoInstance* ProtoInstance34 = new ProtoInstance();
ProtoInstance34->setName("flower");
Group20->addChild(ProtoInstance34);

ProtoInstance* ProtoInstance35 = new ProtoInstance();
ProtoInstance35->setName("flower");
Group20->addChild(ProtoInstance35);

TimeSensor* TimeSensor36 = new TimeSensor();
TimeSensor36->setDEF("SongTime");
TimeSensor36->setLoop(True);
Group20->addChild(TimeSensor36);

Sound* Sound37 = new Sound();
Sound37->setMaxBack(100);
Sound37->setMaxFront(100);
Sound37->setMinBack(20);
Sound37->setMinFront(20);
Sound37->setLocation(new float[3]{0,1,0});
AudioClip* AudioClip38 = new AudioClip();
AudioClip38->setDEF("AudioClip");
AudioClip38->setDescription("Chandubabamusic #1");
AudioClip38->setUrl(new String[2]{"../resources/chandubabamusic1.wav","https://coderextreme.net/X3DJSONLD/src/main/resources/chandubabamusic1.wav"}, 2);
Sound37->setSource(AudioClip38);

Group20->addChild(Sound37);

ROUTE* ROUTE39 = new ROUTE();
ROUTE39->setFromField("cycleTime");
ROUTE39->setFromNode("SongTime");
ROUTE39->setToField("startTime");
ROUTE39->setToNode("AudioClip");
Group20->addChild(ROUTE39);

Scene17->addChild(Group20);

X3D0->setScene(Scene17);

X3D0->toXMLString();
}
