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
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("sphereflowers.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("creator");
meta3->setContent("John Carlson");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("created");
meta4->setContent("Jan 17 2022");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("modified");
meta5->setContent("Sep 03 2023");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("description");
meta6->setContent("5 or more prismatic flowers");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("generator");
meta7->setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta7);

Ccomponent* component8 = new Ccomponent();
component8->setName("Scripting");
component8->setLevel(1);
head1->addComponent(*component8);

Ccomponent* component9 = new Ccomponent();
component9->setName("EnvironmentalEffects");
component9->setLevel(3);
head1->addComponent(*component9);

Ccomponent* component10 = new Ccomponent();
component10->setName("Shaders");
component10->setLevel(1);
head1->addComponent(*component10);

Ccomponent* component11 = new Ccomponent();
component11->setName("CubeMapTexturing");
component11->setLevel(1);
head1->addComponent(*component11);

Ccomponent* component12 = new Ccomponent();
component12->setName("Texturing");
component12->setLevel(1);
head1->addComponent(*component12);

Ccomponent* component13 = new Ccomponent();
component13->setName("Rendering");
component13->setLevel(1);
head1->addComponent(*component13);

Ccomponent* component14 = new Ccomponent();
component14->setName("Grouping");
component14->setLevel(3);
head1->addComponent(*component14);

Ccomponent* component15 = new Ccomponent();
component15->setName("Core");
component15->setLevel(1);
head1->addComponent(*component15);

X3D0->setHead(*head1);

CScene* Scene16 = new CScene();
CExternProtoDeclare* ExternProtoDeclare17 = new CExternProtoDeclare();
ExternProtoDeclare17->setName("FlowerProto");
ExternProtoDeclare17->setUrl(new CString[2]{"../personal/flowerproto.json#FlowerProto","https://coderextreme.net/X3DJSONLD/src/main/personal/flowerproto.json#FlowerProto"}, 2);
Cfield* field18 = new Cfield();
field18->setAccessType("inputOutput");
field18->setType("MFString");
field18->setName("vertex");
ExternProtoDeclare17->addField(*field18);

Cfield* field19 = new Cfield();
field19->setAccessType("inputOutput");
field19->setType("MFString");
field19->setName("fragment");
ExternProtoDeclare17->addField(*field19);

group->addChildren(*ExternProtoDeclare17);

CProtoDeclare ProtoDeclare20 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoInterface></ProtoInterface>
<ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/x_ite_flowers_chromatic.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/x_ite.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare20->setName("flower");
CProtoInterface* ProtoInterface21 = new CProtoInterface();
ProtoDeclare20->setProtoInterface(*ProtoInterface21);

CProtoBody* ProtoBody22 = new CProtoBody();
CGroup* Group23 = (CGroup *)(m_pScene.createNode("Group"));
CProtoInstance* ProtoInstance24 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance24->setName("FlowerProto");
CfieldValue* fieldValue25 = new CfieldValue();
fieldValue25->setName("vertex");
fieldValue25->setValue("\"../shaders/x_ite_flowers_chromatic.vs\"");
ProtoInstance24->addFieldValue(*fieldValue25);

CfieldValue* fieldValue26 = new CfieldValue();
fieldValue26->setName("fragment");
fieldValue26->setValue("\"../shaders/x_ite.fs\"");
ProtoInstance24->addFieldValue(*fieldValue26);

Group23->addChildren(*ProtoInstance24);

ProtoBody22->addChildren(*Group23);

ProtoDeclare20->setProtoBody(*ProtoBody22);

group->addChildren(*ProtoDeclare20);

CNavigationInfo* NavigationInfo27 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo27);

CBackground* Background28 = (CBackground *)(m_pScene.createNode("Background"));
Background28->setFrontUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background28->setBackUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background28->setLeftUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background28->setRightUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background28->setTopUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/src/main/resourcesall_probes/stpeters_cross/stpeters_top.png"}, 2);
Background28->setBottomUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
group->addChildren(*Background28);

CGroup* Group29 = (CGroup *)(m_pScene.createNode("Group"));
CProtoInstance* ProtoInstance30 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance30->setName("flower");
Group29->addChildren(*ProtoInstance30);

CProtoInstance* ProtoInstance31 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance31->setName("flower");
Group29->addChildren(*ProtoInstance31);

CProtoInstance* ProtoInstance32 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance32->setName("flower");
Group29->addChildren(*ProtoInstance32);

CProtoInstance* ProtoInstance33 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance33->setName("flower");
Group29->addChildren(*ProtoInstance33);

CProtoInstance* ProtoInstance34 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance34->setName("flower");
Group29->addChildren(*ProtoInstance34);

CProtoInstance* ProtoInstance35 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance35->setName("flower");
Group29->addChildren(*ProtoInstance35);

CTimeSensor* TimeSensor36 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor36->setDEF("SongTime");
TimeSensor36->setLoop(True);
Group29->addChildren(*TimeSensor36);

CSound* Sound37 = (CSound *)(m_pScene.createNode("Sound"));
Sound37->setMinBack(20);
Sound37->setMinFront(20);
Sound37->setMaxBack(100);
Sound37->setMaxFront(100);
CAudioClip* AudioClip38 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip38->setDEF("AudioClip");
AudioClip38->setDescription("Chandubabamusic #1");
AudioClip38->setUrl(new CString[2]{"../resources/chandubabamusic1.wav","https://coderextreme.net/X3DJSONLD/src/main/resources/chandubabamusic1.wav"}, 2);
Sound37->setSource(*AudioClip38);

Group29->addChildren(*Sound37);

group->addChildren(*Group29);

CROUTE* ROUTE39 = new CROUTE();
ROUTE39->setFromNode("SongTime");
ROUTE39->setFromField("cycleTime");
ROUTE39->setToNode("AudioClip");
ROUTE39->setToField("startTime");
group->addChildren(*ROUTE39);

X3D0->setScene(*Scene16);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
