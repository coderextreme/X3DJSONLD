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
meta2->setContent("x3domflowers.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("creator");
meta3->setContent("John Carlson");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("5 or more prismatic flowers");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("generator");
meta5->setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta5);

Ccomponent* component6 = new Ccomponent();
component6->setName("Scripting");
component6->setLevel(1);
head1->addComponent(*component6);

Ccomponent* component7 = new Ccomponent();
component7->setName("EnvironmentalEffects");
component7->setLevel(3);
head1->addComponent(*component7);

Ccomponent* component8 = new Ccomponent();
component8->setName("Shaders");
component8->setLevel(1);
head1->addComponent(*component8);

Ccomponent* component9 = new Ccomponent();
component9->setName("CubeMapTexturing");
component9->setLevel(1);
head1->addComponent(*component9);

Ccomponent* component10 = new Ccomponent();
component10->setName("Texturing");
component10->setLevel(1);
head1->addComponent(*component10);

Ccomponent* component11 = new Ccomponent();
component11->setName("Rendering");
component11->setLevel(1);
head1->addComponent(*component11);

Ccomponent* component12 = new Ccomponent();
component12->setName("Grouping");
component12->setLevel(3);
head1->addComponent(*component12);

Ccomponent* component13 = new Ccomponent();
component13->setName("Core");
component13->setLevel(1);
head1->addComponent(*component13);

X3D0->setHead(*head1);

CScene* Scene14 = new CScene();
CExternProtoDeclare* ExternProtoDeclare15 = new CExternProtoDeclare();
ExternProtoDeclare15->setName("FlowerProto");
ExternProtoDeclare15->setUrl(new CString[1]{"../data/flowerproto.json#FlowerProto"}, 1);
Cfield* field16 = new Cfield();
field16->setAccessType("inputOutput");
field16->setType("MFString");
field16->setName("vertex");
ExternProtoDeclare15->addField(*field16);

Cfield* field17 = new Cfield();
field17->setAccessType("inputOutput");
field17->setType("MFString");
field17->setName("fragment");
ExternProtoDeclare15->addField(*field17);

group->addChildren(*ExternProtoDeclare15);

CProtoDeclare ProtoDeclare18 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoInterface></ProtoInterface>
<ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/x3dom_flowers_chromatic.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/common.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare18->setName("flower");
CProtoInterface* ProtoInterface19 = new CProtoInterface();
ProtoDeclare18->setProtoInterface(*ProtoInterface19);

CProtoBody* ProtoBody20 = new CProtoBody();
CGroup* Group21 = (CGroup *)(m_pScene.createNode("Group"));
CProtoInstance* ProtoInstance22 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance22->setName("FlowerProto");
CfieldValue* fieldValue23 = new CfieldValue();
fieldValue23->setName("vertex");
fieldValue23->setValue("\"../shaders/x3dom_flowers_chromatic.vs\"");
ProtoInstance22->addFieldValue(*fieldValue23);

CfieldValue* fieldValue24 = new CfieldValue();
fieldValue24->setName("fragment");
fieldValue24->setValue("\"../shaders/common.fs\"");
ProtoInstance22->addFieldValue(*fieldValue24);

Group21->addChildren(*ProtoInstance22);

ProtoBody20->addChildren(*Group21);

ProtoDeclare18->setProtoBody(*ProtoBody20);

group->addChildren(*ProtoDeclare18);

CNavigationInfo* NavigationInfo25 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo25);

CBackground* Background26 = (CBackground *)(m_pScene.createNode("Background"));
Background26->setFrontUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background26->setBackUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background26->setLeftUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background26->setRightUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background26->setTopUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Background26->setBottomUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
group->addChildren(*Background26);

CGroup* Group27 = (CGroup *)(m_pScene.createNode("Group"));
CProtoInstance* ProtoInstance28 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance28->setName("flower");
Group27->addChildren(*ProtoInstance28);

CProtoInstance* ProtoInstance29 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance29->setName("flower");
Group27->addChildren(*ProtoInstance29);

CProtoInstance* ProtoInstance30 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance30->setName("flower");
Group27->addChildren(*ProtoInstance30);

CProtoInstance* ProtoInstance31 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance31->setName("flower");
Group27->addChildren(*ProtoInstance31);

CProtoInstance* ProtoInstance32 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance32->setName("flower");
Group27->addChildren(*ProtoInstance32);

CProtoInstance* ProtoInstance33 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance33->setName("flower");
Group27->addChildren(*ProtoInstance33);

group->addChildren(*Group27);

X3D0->setScene(*Scene14);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
