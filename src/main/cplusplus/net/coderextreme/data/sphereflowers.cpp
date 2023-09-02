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
meta12->setName("description");
meta12->setContent("5 or more prismatic flowers");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("generator");
meta13->setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("identifier");
meta14->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/sphereflowers.x3d");
head1->addMeta(*meta14);

X3D0->setHead(*head1);

CScene* Scene15 = new CScene();
CNavigationInfo* NavigationInfo16 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo16);

CBackground* Background17 = (CBackground *)(m_pScene.createNode("Background"));
Background17->setBackUrl(new CString[3]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://localhost:3000/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 3);
Background17->setBottomUrl(new CString[3]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://localhost:3000/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 3);
Background17->setFrontUrl(new CString[3]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://localhost:3000/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 3);
Background17->setLeftUrl(new CString[3]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://localhost:3000/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 3);
Background17->setRightUrl(new CString[3]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://localhost:3000/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 3);
Background17->setTopUrl(new CString[3]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://localhost:3000/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/src/main/resourcesall_probes/stpeters_cross/stpeters_top.png"}, 3);
group->addChildren(*Background17);

CGroup* Group18 = (CGroup *)(m_pScene.createNode("Group"));
CExternProtoDeclare* ExternProtoDeclare19 = new CExternProtoDeclare();
ExternProtoDeclare19->setName("FlowerProto");
ExternProtoDeclare19->setUrl(new CString[3]{"../personal/flowerproto.json#FlowerProto","https://localhost:3000/src/main/personal/flowerproto.json#FlowerProto","https://coderextreme.net/X3DJSONLD/src/main/personal/flowerproto.json#FlowerProto"}, 3);
Cfield* field20 = new Cfield();
field20->setName("vertex");
field20->setAccessType("inputOutput");
field20->setType("MFString");
ExternProtoDeclare19->addField(*field20);

Cfield* field21 = new Cfield();
field21->setName("fragment");
field21->setAccessType("inputOutput");
field21->setType("MFString");
ExternProtoDeclare19->addField(*field21);

Group18->addChildren(*ExternProtoDeclare19);

CProtoDeclare ProtoDeclare22 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/x_ite_flowers_chromatic.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/x_ite.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare22->setName("flower");
CProtoBody* ProtoBody23 = new CProtoBody();
CGroup* Group24 = (CGroup *)(m_pScene.createNode("Group"));
CProtoInstance* ProtoInstance25 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance25->setName("FlowerProto");
CfieldValue* fieldValue26 = new CfieldValue();
fieldValue26->setName("vertex");
fieldValue26->setValue("\"../shaders/x_ite_flowers_chromatic.vs\"");
ProtoInstance25->addFieldValue(*fieldValue26);

CfieldValue* fieldValue27 = new CfieldValue();
fieldValue27->setName("fragment");
fieldValue27->setValue("\"../shaders/x_ite.fs\"");
ProtoInstance25->addFieldValue(*fieldValue27);

Group24->addChildren(*ProtoInstance25);

ProtoBody23->addChildren(*Group24);

ProtoDeclare22->setProtoBody(*ProtoBody23);

Group18->addChildren(*ProtoDeclare22);

CProtoInstance* ProtoInstance28 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance28->setName("flower");
Group18->addChildren(*ProtoInstance28);

CProtoInstance* ProtoInstance29 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance29->setName("flower");
Group18->addChildren(*ProtoInstance29);

CProtoInstance* ProtoInstance30 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance30->setName("flower");
Group18->addChildren(*ProtoInstance30);

CProtoInstance* ProtoInstance31 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance31->setName("flower");
Group18->addChildren(*ProtoInstance31);

CProtoInstance* ProtoInstance32 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance32->setName("flower");
Group18->addChildren(*ProtoInstance32);

CProtoInstance* ProtoInstance33 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance33->setName("flower");
Group18->addChildren(*ProtoInstance33);

CTimeSensor* TimeSensor34 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor34->setDEF("SongTime");
TimeSensor34->setLoop(True);
Group18->addChildren(*TimeSensor34);

CSound* Sound35 = (CSound *)(m_pScene.createNode("Sound"));
Sound35->setMaxBack(100);
Sound35->setMaxFront(100);
Sound35->setMinBack(20);
Sound35->setMinFront(20);
CAudioClip* AudioClip36 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip36->setDEF("AudioClip");
AudioClip36->setDescription("Chandubabamusic #1");
AudioClip36->setUrl(new CString[3]{"../resources/chandubabamusic1.wav","https://localhost:3000/src/main/resources/chandubabamusic1.wav","https://coderextreme.net/X3DJSONLD/src/main/resources/chandubabamusic1.wav"}, 3);
Sound35->setSource(*AudioClip36);

Group18->addChildren(*Sound35);

CROUTE* ROUTE37 = new CROUTE();
ROUTE37->setFromField("cycleTime");
ROUTE37->setFromNode("SongTime");
ROUTE37->setToField("startTime");
ROUTE37->setToNode("AudioClip");
Group18->addChildren(*ROUTE37);

group->addChildren(*Group18);

X3D0->setScene(*Scene15);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
