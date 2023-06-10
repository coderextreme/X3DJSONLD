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
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("glflowers.x3d");
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

Cmeta* meta6 = new Cmeta();
meta6->setName("identifier");
meta6->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/glflowers.x3d");
head1->addMeta(*meta6);

X3D0->setHead(*head1);

CScene* Scene7 = new CScene();
CNavigationInfo* NavigationInfo8 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo8);

CBackground* Background9 = (CBackground *)(m_pScene.createNode("Background"));
Background9->setBackUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background9->setBottomUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background9->setFrontUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background9->setLeftUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background9->setRightUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background9->setTopUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
group->addChildren(*Background9);

CGroup* Group10 = (CGroup *)(m_pScene.createNode("Group"));
CExternProtoDeclare* ExternProtoDeclare11 = new CExternProtoDeclare();
ExternProtoDeclare11->setName("FlowerProto");
ExternProtoDeclare11->setUrl(new CString[1]{"../data/flowerproto.x3d#FlowerProto"}, 1);
Cfield* field12 = new Cfield();
field12->setName("vertex");
field12->setAccessType("inputOutput");
field12->setType("MFString");
ExternProtoDeclare11->addField(*field12);

Cfield* field13 = new Cfield();
field13->setName("fragment");
field13->setAccessType("inputOutput");
field13->setType("MFString");
ExternProtoDeclare11->addField(*field13);

Group10->addChildren(*ExternProtoDeclare11);

CProtoDeclare ProtoDeclare14 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="flower" ><ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/gl_flowers_chromatic.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/common.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare14->setName("flower");
CProtoBody* ProtoBody15 = new CProtoBody();
CGroup* Group16 = (CGroup *)(m_pScene.createNode("Group"));
CProtoInstance* ProtoInstance17 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance17->setName("FlowerProto");
CfieldValue* fieldValue18 = new CfieldValue();
fieldValue18->setName("vertex");
fieldValue18->setValue("\"../shaders/gl_flowers_chromatic.vs\"");
ProtoInstance17->addFieldValue(*fieldValue18);

CfieldValue* fieldValue19 = new CfieldValue();
fieldValue19->setName("fragment");
fieldValue19->setValue("\"../shaders/common.fs\"");
ProtoInstance17->addFieldValue(*fieldValue19);

Group16->addChildren(*ProtoInstance17);

ProtoBody15->addChildren(*Group16);

ProtoDeclare14->setProtoBody(*ProtoBody15);

Group10->addChildren(*ProtoDeclare14);

CProtoInstance* ProtoInstance20 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance20->setName("flower");
Group10->addChildren(*ProtoInstance20);

CProtoInstance* ProtoInstance21 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance21->setName("flower");
Group10->addChildren(*ProtoInstance21);

CProtoInstance* ProtoInstance22 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance22->setName("flower");
Group10->addChildren(*ProtoInstance22);

CProtoInstance* ProtoInstance23 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance23->setName("flower");
Group10->addChildren(*ProtoInstance23);

CProtoInstance* ProtoInstance24 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance24->setName("flower");
Group10->addChildren(*ProtoInstance24);

CProtoInstance* ProtoInstance25 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance25->setName("flower");
Group10->addChildren(*ProtoInstance25);

group->addChildren(*Group10);

X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
