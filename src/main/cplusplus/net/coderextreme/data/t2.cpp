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
X3D0->setProfile("Interchange");
X3D0->setVersion("3.0");
Chead* head1 = new Chead();
Ccomponent* component2 = new Ccomponent();
component2->setName("Networking");
component2->setLevel(2);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("generator");
meta3->setContent("view3dscene, https://castle-engine.io/view3dscene.php");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("source");
meta4->setContent("t1.wrl");
head1->addMeta(*meta4);

X3D0->setHead(*head1);

CScene* Scene5 = new CScene();
CNavigationInfo* NavigationInfo6 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo6->setType(new CString[3]{"EXAMINE","FLY","WALK"}, 3);
NavigationInfo6->setSpeed(3);
NavigationInfo6->setAvatarSize(new float[3]{200,200,120}, 3);
group->addChildren(*NavigationInfo6);

CWorldInfo* WorldInfo7 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo7->setTitle("Arts Mapper");
group->addChildren(*WorldInfo7);

CViewpoint* Viewpoint8 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint8->setDescription("looking North");
Viewpoint8->setPosition(new float[3]{0,60,110});
Viewpoint8->setOrientation(new float[4]{1,0,0,-0.699999988079071});
Viewpoint8->setFieldOfView(0.785398125648499);
group->addChildren(*Viewpoint8);

CViewpoint* Viewpoint9 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint9->setDescription("looking East");
Viewpoint9->setPosition(new float[3]{-140,30,0});
Viewpoint9->setOrientation(new float[4]{0,0.400000005960464,0,-1.39999997615814});
Viewpoint9->setFieldOfView(0.785398125648499);
group->addChildren(*Viewpoint9);

CViewpoint* Viewpoint10 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint10->setDescription("Overhead");
Viewpoint10->setPosition(new float[3]{0,150,0});
Viewpoint10->setOrientation(new float[4]{1,0,0,-1.57000005245209});
Viewpoint10->setFieldOfView(0.785398125648499);
group->addChildren(*Viewpoint10);

CProtoDeclare ProtoDeclare11 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="org" ><ProtoInterface><field name="posi" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="col" accessType="initializeOnly" type="SFColor" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material transparency="0.400000005960464"><IS><connect nodeField="emissiveColor" protoField="col"></connect>
</IS>
</Material>
</Appearance>
<Sphere containerField="geometry" radius="1.10000002384186"></Sphere>
</Shape>
<IS><connect nodeField="translation" protoField="posi"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare11->setName("org");
CProtoInterface* ProtoInterface12 = new CProtoInterface();
Cfield* field13 = new Cfield();
field13->setName("posi");
field13->setAccessType("initializeOnly");
field13->setType("SFVec3f");
field13->setValue("0 0 0");
ProtoInterface12->addField(*field13);

Cfield* field14 = new Cfield();
field14->setName("col");
field14->setAccessType("initializeOnly");
field14->setType("SFColor");
field14->setValue("0 0 0");
ProtoInterface12->addField(*field14);

ProtoDeclare11->setProtoInterface(*ProtoInterface12);

CProtoBody* ProtoBody15 = new CProtoBody();
CTransform* Transform16 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape17 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance18 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material19 = (CMaterial *)(m_pScene.createNode("Material"));
Material19->setTransparency(0.400000005960464);
CIS* IS20 = new CIS();
Cconnect* connect21 = new Cconnect();
connect21->setNodeField("emissiveColor");
connect21->setProtoField("col");
IS20->addConnect(*connect21);

Material19->setIS(*IS20);

Appearance18->setMaterial(*Material19);

Shape17->setAppearance(*Appearance18);

CSphere* Sphere22 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere22->setRadius(1.10000002384186);
Shape17->setGeometry(Sphere22);

Transform16->addChildren(*Shape17);

CIS* IS23 = new CIS();
Cconnect* connect24 = new Cconnect();
connect24->setNodeField("translation");
connect24->setProtoField("posi");
IS23->addConnect(*connect24);

Transform16->setIS(*IS23);

ProtoBody15->addChildren(*Transform16);

ProtoDeclare11->setProtoBody(*ProtoBody15);

group->addChildren(*ProtoDeclare11);

CProtoDeclare ProtoDeclare25 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="r" ><ProtoInterface><field name="pos" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0 0.300000011920929 1"></fieldValue>
<fieldValue name="posi"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare25->setName("r");
CProtoInterface* ProtoInterface26 = new CProtoInterface();
Cfield* field27 = new Cfield();
field27->setName("pos");
field27->setAccessType("initializeOnly");
field27->setType("SFVec3f");
field27->setValue("0 0 0");
ProtoInterface26->addField(*field27);

ProtoDeclare25->setProtoInterface(*ProtoInterface26);

CProtoBody* ProtoBody28 = new CProtoBody();
CProtoInstance* ProtoInstance29 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance29->setName("org");
CfieldValue* fieldValue30 = new CfieldValue();
fieldValue30->setName("col");
fieldValue30->setValue("0 0.300000011920929 1");
ProtoInstance29->addFieldValue(*fieldValue30);

CfieldValue* fieldValue31 = new CfieldValue();
fieldValue31->setName("posi");
ProtoInstance29->addFieldValue(*fieldValue31);

CIS* IS32 = new CIS();
Cconnect* connect33 = new Cconnect();
connect33->setNodeField("posi");
connect33->setProtoField("pos");
IS32->addConnect(*connect33);

ProtoInstance29->setIS(*IS32);

ProtoBody28->addChildren(*ProtoInstance29);

ProtoDeclare25->setProtoBody(*ProtoBody28);

group->addChildren(*ProtoDeclare25);

CAnchor* Anchor34 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor34->setUrl(new CString[1]{"javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
Anchor34->setDescription("High Peak Community Arts");
CProtoInstance* ProtoInstance35 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance35->setName("r");
CfieldValue* fieldValue36 = new CfieldValue();
fieldValue36->setName("pos");
fieldValue36->setValue("400 0.100000001490116 -385");
ProtoInstance35->addFieldValue(*fieldValue36);

Anchor34->addChildren(*ProtoInstance35);

group->addChildren(*Anchor34);

X3D0->setScene(*Scene5);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
