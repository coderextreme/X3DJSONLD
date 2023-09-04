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
meta2->setContent("plainflowers.x3d");
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

X3D0->setHead(*head1);

CScene* Scene6 = new CScene();
CExternProtoDeclare* ExternProtoDeclare7 = new CExternProtoDeclare();
ExternProtoDeclare7->setName("FlowerProto");
ExternProtoDeclare7->setUrl(new CString[1]{"../data/flowerproto.x3d#FlowerProto"}, 1);
Cfield* field8 = new Cfield();
field8->setAccessType("inputOutput");
field8->setType("MFString");
field8->setName("vertex");
ExternProtoDeclare7->addField(*field8);

Cfield* field9 = new Cfield();
field9->setAccessType("inputOutput");
field9->setType("MFString");
field9->setName("fragment");
ExternProtoDeclare7->addField(*field9);

group->addChildren(*ExternProtoDeclare7);

CProtoDeclare ProtoDeclare10 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="flower" ><ProtoInterface></ProtoInterface>
<ProtoBody><Group><ProtoInstance name="FlowerProto"><fieldValue name="vertex" value="&quot;../shaders/x_ite_flowers_plain.vs&quot;"></fieldValue>
<fieldValue name="fragment" value="&quot;../shaders/plain.fs&quot;"></fieldValue>
</ProtoInstance>
</Group>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare10->setName("flower");
CProtoInterface* ProtoInterface11 = new CProtoInterface();
ProtoDeclare10->setProtoInterface(*ProtoInterface11);

CProtoBody* ProtoBody12 = new CProtoBody();
CGroup* Group13 = (CGroup *)(m_pScene.createNode("Group"));
CProtoInstance* ProtoInstance14 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance14->setName("FlowerProto");
CfieldValue* fieldValue15 = new CfieldValue();
fieldValue15->setName("vertex");
fieldValue15->setValue("\"../shaders/x_ite_flowers_plain.vs\"");
ProtoInstance14->addFieldValue(*fieldValue15);

CfieldValue* fieldValue16 = new CfieldValue();
fieldValue16->setName("fragment");
fieldValue16->setValue("\"../shaders/plain.fs\"");
ProtoInstance14->addFieldValue(*fieldValue16);

Group13->addChildren(*ProtoInstance14);

ProtoBody12->addChildren(*Group13);

ProtoDeclare10->setProtoBody(*ProtoBody12);

group->addChildren(*ProtoDeclare10);

CNavigationInfo* NavigationInfo17 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo17);

CBackground* Background18 = (CBackground *)(m_pScene.createNode("Background"));
Background18->setFrontUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background18->setBackUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background18->setLeftUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background18->setRightUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background18->setTopUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
Background18->setBottomUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
group->addChildren(*Background18);

CGroup* Group19 = (CGroup *)(m_pScene.createNode("Group"));
CProtoInstance* ProtoInstance20 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance20->setName("flower");
Group19->addChildren(*ProtoInstance20);

CProtoInstance* ProtoInstance21 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance21->setName("flower");
Group19->addChildren(*ProtoInstance21);

CProtoInstance* ProtoInstance22 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance22->setName("flower");
Group19->addChildren(*ProtoInstance22);

CProtoInstance* ProtoInstance23 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance23->setName("flower");
Group19->addChildren(*ProtoInstance23);

CProtoInstance* ProtoInstance24 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance24->setName("flower");
Group19->addChildren(*ProtoInstance24);

CProtoInstance* ProtoInstance25 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance25->setName("flower");
Group19->addChildren(*ProtoInstance25);

group->addChildren(*Group19);

X3D0->setScene(*Scene6);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
