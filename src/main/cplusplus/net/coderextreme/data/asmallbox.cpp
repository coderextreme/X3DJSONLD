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
meta2->setContent("asmallbox.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("creator");
meta3->setContent("John Carlson");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("generator");
meta4->setContent("manual");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("identifier");
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/abox.x3d");
head1->addMeta(*meta5);

X3D0->setHead(*head1);

CScene* Scene6 = new CScene();
CProtoDeclare ProtoDeclare7 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field accessType="inputOutput" type="MFNode" name="myShape"><Shape><Sphere></Sphere>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="children" protoField="myShape"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare7->setName("anyShape");
CProtoInterface* ProtoInterface8 = new CProtoInterface();
Cfield* field9 = new Cfield();
field9->setAccessType("inputOutput");
field9->setType("MFNode");
field9->setName("myShape");
CShape* Shape10 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere11 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape10->setGeometry(Sphere11);

field9->addChildren(*Shape10);

ProtoInterface8->addField(*field9);

ProtoDeclare7->setProtoInterface(*ProtoInterface8);

CProtoBody* ProtoBody12 = new CProtoBody();
CTransform* Transform13 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS14 = new CIS();
Cconnect* connect15 = new Cconnect();
connect15->setNodeField("children");
connect15->setProtoField("myShape");
IS14->addConnect(*connect15);

Transform13->setIS(*IS14);

ProtoBody12->addChildren(*Transform13);

ProtoDeclare7->setProtoBody(*ProtoBody12);

group->addChildren(*ProtoDeclare7);

CProtoDeclare ProtoDeclare16 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="one" ><ProtoInterface><field accessType="inputOutput" type="MFNode" name="myShape"><Shape><Cylinder></Cylinder>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="anyShape"><IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare16->setName("one");
CProtoInterface* ProtoInterface17 = new CProtoInterface();
Cfield* field18 = new Cfield();
field18->setAccessType("inputOutput");
field18->setType("MFNode");
field18->setName("myShape");
CShape* Shape19 = (CShape *)(m_pScene.createNode("Shape"));
CCylinder* Cylinder20 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Shape19->setGeometry(Cylinder20);

field18->addChildren(*Shape19);

ProtoInterface17->addField(*field18);

ProtoDeclare16->setProtoInterface(*ProtoInterface17);

CProtoBody* ProtoBody21 = new CProtoBody();
CTransform* Transform22 = (CTransform *)(m_pScene.createNode("Transform"));
CProtoInstance* ProtoInstance23 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance23->setName("anyShape");
CIS* IS24 = new CIS();
Cconnect* connect25 = new Cconnect();
connect25->setNodeField("myShape");
connect25->setProtoField("myShape");
IS24->addConnect(*connect25);

ProtoInstance23->setIS(*IS24);

Transform22->addChildren(*ProtoInstance23);

ProtoBody21->addChildren(*Transform22);

ProtoDeclare16->setProtoBody(*ProtoBody21);

group->addChildren(*ProtoDeclare16);

CProtoInstance* ProtoInstance26 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance26->setName("one");
CfieldValue* fieldValue27 = new CfieldValue();
fieldValue27->setName("myShape");
CShape* Shape28 = (CShape *)(m_pScene.createNode("Shape"));
Shape28->setDEF("_1");
CBox* Box29 = (CBox *)(m_pScene.createNode("Box"));
Shape28->setGeometry(Box29);

fieldValue27->addChildren(*Shape28);

ProtoInstance26->addFieldValue(*fieldValue27);

group->addChildren(*ProtoInstance26);

X3D0->setScene(*Scene6);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
