/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Concretes.h"
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
meta2->setContent("abox.x3d");
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
meta5->setContent("https://coderextreme.net/X3DJSONLD/abox.x3d");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("description");
meta6->setContent("a box");
head1->addMeta(*meta6);

X3D0->setHead(*head1);

CScene* Scene7 = new CScene();
CProtoDeclare ProtoDeclare8 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="anyShape" ><ProtoInterface><field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Sphere containerField="geometry"></Sphere>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="children" protoField="myShape"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare8->setName("anyShape");
CProtoInterface* ProtoInterface9 = new CProtoInterface();
Cfield* field10 = new Cfield();
field10->setName("myShape");
field10->setAccessType("inputOutput");
field10->setType("MFNode");
CShape* Shape11 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere12 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape11->setGeometry(Sphere12);

field10->addChildren(*Shape11);

ProtoInterface9->addField(*field10);

ProtoDeclare8->setProtoInterface(*ProtoInterface9);

CProtoBody* ProtoBody13 = new CProtoBody();
CTransform* Transform14 = (CTransform *)(m_pScene.createNode("Transform"));
CIS* IS15 = new CIS();
Cconnect* connect16 = new Cconnect();
connect16->setNodeField("children");
connect16->setProtoField("myShape");
IS15->addConnect(*connect16);

Transform14->setIS(*IS15);

ProtoBody13->addChildren(*Transform14);

ProtoDeclare8->setProtoBody(*ProtoBody13);

group->addChildren(*ProtoDeclare8);

CProtoDeclare ProtoDeclare17 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="one" ><ProtoInterface><field name="myShape" accessType="inputOutput" type="MFNode"><Shape><Cylinder containerField="geometry"></Cylinder>
</Shape>
</field>
</ProtoInterface>
<ProtoBody><Transform><ProtoInstance name="anyShape"><IS><connect nodeField="myShape" protoField="myShape"></connect>
</IS>
</ProtoInstance>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare17->setName("one");
CProtoInterface* ProtoInterface18 = new CProtoInterface();
Cfield* field19 = new Cfield();
field19->setName("myShape");
field19->setAccessType("inputOutput");
field19->setType("MFNode");
CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
CCylinder* Cylinder21 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Shape20->setGeometry(Cylinder21);

field19->addChildren(*Shape20);

ProtoInterface18->addField(*field19);

ProtoDeclare17->setProtoInterface(*ProtoInterface18);

CProtoBody* ProtoBody22 = new CProtoBody();
CTransform* Transform23 = (CTransform *)(m_pScene.createNode("Transform"));
CProtoInstance* ProtoInstance24 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance24->setName("anyShape");
CIS* IS25 = new CIS();
Cconnect* connect26 = new Cconnect();
connect26->setNodeField("myShape");
connect26->setProtoField("myShape");
IS25->addConnect(*connect26);

ProtoInstance24->setIS(*IS25);

Transform23->addChildren(*ProtoInstance24);

ProtoBody22->addChildren(*Transform23);

ProtoDeclare17->setProtoBody(*ProtoBody22);

group->addChildren(*ProtoDeclare17);

CProtoInstance* ProtoInstance27 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance27->setName("one");
CfieldValue* fieldValue28 = new CfieldValue();
fieldValue28->setName("myShape");
CShape* Shape29 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box30 = (CBox *)(m_pScene.createNode("Box"));
Box30->setSize(new float[3]{140,140,140});
Shape29->setGeometry(Box30);

fieldValue28->addChildren(*Shape29);

ProtoInstance27->addFieldValue(*fieldValue28);

group->addChildren(*ProtoInstance27);

X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
