/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/stylesheets/cpp/concretes.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Immersive");
X3D0->setVersion("4.0");
Chead* head1 = new Chead();
Ccomponent* component2 = new Ccomponent();
component2->setName("Scripting");
component2->setLevel(1);
head1->addComponent(*component2);

Ccomponent* component3 = new Ccomponent();
component3->setName("EnvironmentalEffects");
component3->setLevel(3);
head1->addComponent(*component3);

Ccomponent* component4 = new Ccomponent();
component4->setName("Shaders");
component4->setLevel(1);
head1->addComponent(*component4);

Ccomponent* component5 = new Ccomponent();
component5->setName("CubeMapTexturing");
component5->setLevel(1);
head1->addComponent(*component5);

Ccomponent* component6 = new Ccomponent();
component6->setName("Texturing");
component6->setLevel(1);
head1->addComponent(*component6);

Ccomponent* component7 = new Ccomponent();
component7->setName("Rendering");
component7->setLevel(1);
head1->addComponent(*component7);

Ccomponent* component8 = new Ccomponent();
component8->setName("Grouping");
component8->setLevel(3);
head1->addComponent(*component8);

Ccomponent* component9 = new Ccomponent();
component9->setName("Core");
component9->setLevel(1);
head1->addComponent(*component9);

Cmeta* meta10 = new Cmeta();
meta10->setName("title");
meta10->setContent("sphereflowers.x3d");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("creator");
meta11->setContent("John Carlson");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("created");
meta12->setContent("Jan 17 2022");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("modified");
meta13->setContent("Sep 3 2023");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("description");
meta14->setContent("5 or more prismatic flowers");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("generator");
meta15->setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("identifier");
meta16->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/sphereflowers.x3d");
head1->addMeta(*meta16);

X3D0->setHead(*head1);

CScene* Scene17 = new CScene();
CNavigationInfo* NavigationInfo18 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo18);

CBackground* Background19 = (CBackground *)(m_pScene.createNode("Background"));
Background19->setBackUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background19->setBottomUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background19->setFrontUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background19->setLeftUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background19->setRightUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background19->setTopUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
group->addChildren(*Background19);

CGroup* Group20 = (CGroup *)(m_pScene.createNode("Group"));
CExternProtoDeclare* ExternProtoDeclare21 = new CExternProtoDeclare();
ExternProtoDeclare21->setName("FlowerProto");
ExternProtoDeclare21->setUrl(new CString[2]{"../data/flowerproto.x3d#FlowerProto","https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d#FlowerProto"}, 2);
Cfield* field22 = new Cfield();
field22->setName("vertex");
field22->setAccessType("inputOutput");
field22->setType("MFString");
ExternProtoDeclare21->addField(*field22);

Cfield* field23 = new Cfield();
field23->setName("fragment");
field23->setAccessType("inputOutput");
field23->setType("MFString");
ExternProtoDeclare21->addField(*field23);

Group20->addChildren(*ExternProtoDeclare21);

CProtoDeclare ProtoDeclare24 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/x_ite_flowers_chromatic.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/x_ite.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare24->setName("flower");
CProtoBody* ProtoBody25 = new CProtoBody();
CGroup* Group26 = (CGroup *)(m_pScene.createNode("Group"));
CProtoInstance* ProtoInstance27 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance27->setName("FlowerProto");
CfieldValue* fieldValue28 = new CfieldValue();
fieldValue28->setName("vertex");
fieldValue28->setValue("\"../shaders/x_ite_flowers_chromatic.vs\"");
ProtoInstance27->addFieldValue(*fieldValue28);

CfieldValue* fieldValue29 = new CfieldValue();
fieldValue29->setName("fragment");
fieldValue29->setValue("\"../shaders/x_ite.fs\"");
ProtoInstance27->addFieldValue(*fieldValue29);

Group26->addChildren(*ProtoInstance27);

ProtoBody25->addChildren(*Group26);

ProtoDeclare24->setProtoBody(*ProtoBody25);

Group20->addChildren(*ProtoDeclare24);

CProtoInstance* ProtoInstance30 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance30->setName("flower");
Group20->addChildren(*ProtoInstance30);

CProtoInstance* ProtoInstance31 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance31->setName("flower");
Group20->addChildren(*ProtoInstance31);

CProtoInstance* ProtoInstance32 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance32->setName("flower");
Group20->addChildren(*ProtoInstance32);

CProtoInstance* ProtoInstance33 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance33->setName("flower");
Group20->addChildren(*ProtoInstance33);

CProtoInstance* ProtoInstance34 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance34->setName("flower");
Group20->addChildren(*ProtoInstance34);

CProtoInstance* ProtoInstance35 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance35->setName("flower");
Group20->addChildren(*ProtoInstance35);

CTimeSensor* TimeSensor36 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor36->setDEF("SongTime");
TimeSensor36->setLoop(True);
Group20->addChildren(*TimeSensor36);

CSound* Sound37 = (CSound *)(m_pScene.createNode("Sound"));
Sound37->setMaxBack(100);
Sound37->setMaxFront(100);
Sound37->setMinBack(20);
Sound37->setMinFront(20);
Sound37->setLocation(new float[3]{0,1,0});
CAudioClip* AudioClip38 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip38->setDEF("AudioClip");
AudioClip38->setDescription("Chandubabamusic #1");
AudioClip38->setUrl(new CString[2]{"../resources/chandubabamusic1.wav","https://coderextreme.net/X3DJSONLD/src/main/resources/chandubabamusic1.wav"}, 2);
Sound37->setSource(*AudioClip38);

Group20->addChildren(*Sound37);

CROUTE* ROUTE39 = new CROUTE();
ROUTE39->setFromField("cycleTime");
ROUTE39->setFromNode("SongTime");
ROUTE39->setToField("startTime");
ROUTE39->setToNode("AudioClip");
Group20->addChildren(*ROUTE39);

group->addChildren(*Group20);

X3D0->setScene(*Scene17);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
