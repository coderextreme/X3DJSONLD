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
X3D0->setVersion("4.0");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("generator");
meta2->setContent("view3dscene, https://castle-engine.io/view3dscene.php");
head1->addMeta(*meta2);

Ccomponent* component3 = new Ccomponent();
component3->setName("Networking");
component3->setLevel(2);
head1->addComponent(*component3);

X3D0->setHead(*head1);

CScene* Scene4 = new CScene();
CProtoDeclare ProtoDeclare5 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="org" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="posi"></field>
<field accessType="initializeOnly" type="SFColor" name="col"></field>
</ProtoInterface>
<ProtoBody><Transform><Shape><Appearance><Material transparency="0.4"><IS><connect nodeField="emissiveColor" protoField="col"></connect>
</IS>
</Material>
</Appearance>
<Sphere radius="1.1"></Sphere>
</Shape>
<IS><connect nodeField="translation" protoField="posi"></connect>
</IS>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare5->setName("org");
CProtoInterface* ProtoInterface6 = new CProtoInterface();
Cfield* field7 = new Cfield();
field7->setAccessType("initializeOnly");
field7->setType("SFVec3f");
field7->setName("posi");
ProtoInterface6->addField(*field7);

Cfield* field8 = new Cfield();
field8->setAccessType("initializeOnly");
field8->setType("SFColor");
field8->setName("col");
ProtoInterface6->addField(*field8);

ProtoDeclare5->setProtoInterface(*ProtoInterface6);

CProtoBody* ProtoBody9 = new CProtoBody();
CTransform* Transform10 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape11 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance12 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material13 = (CMaterial *)(m_pScene.createNode("Material"));
Material13->setTransparency(0.4);
CIS* IS14 = new CIS();
Cconnect* connect15 = new Cconnect();
connect15->setNodeField("emissiveColor");
connect15->setProtoField("col");
IS14->addConnect(*connect15);

Material13->setIS(*IS14);

Appearance12->setMaterial(*Material13);

Shape11->setAppearance(*Appearance12);

CSphere* Sphere16 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere16->setRadius(1.1);
Shape11->setGeometry(Sphere16);

Transform10->addChild(*Shape11);

CIS* IS17 = new CIS();
Cconnect* connect18 = new Cconnect();
connect18->setNodeField("translation");
connect18->setProtoField("posi");
IS17->addConnect(*connect18);

Transform10->setIS(*IS17);

ProtoBody9->addChildren(*Transform10);

ProtoDeclare5->setProtoBody(*ProtoBody9);

group->addChildren(*ProtoDeclare5);

CProtoDeclare ProtoDeclare19 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="r" ><ProtoInterface><field accessType="initializeOnly" type="SFVec3f" name="pos"></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="org"><fieldValue name="col" value="0 0.3 1"></fieldValue>
<IS><connect nodeField="posi" protoField="pos"></connect>
</IS>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare19->setName("r");
CProtoInterface* ProtoInterface20 = new CProtoInterface();
Cfield* field21 = new Cfield();
field21->setAccessType("initializeOnly");
field21->setType("SFVec3f");
field21->setName("pos");
ProtoInterface20->addField(*field21);

ProtoDeclare19->setProtoInterface(*ProtoInterface20);

CProtoBody* ProtoBody22 = new CProtoBody();
CProtoInstance* ProtoInstance23 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance23->setName("org");
CfieldValue* fieldValue24 = new CfieldValue();
fieldValue24->setName("col");
fieldValue24->setValue("0 0.3 1");
ProtoInstance23->addFieldValue(*fieldValue24);

CIS* IS25 = new CIS();
Cconnect* connect26 = new Cconnect();
connect26->setNodeField("posi");
connect26->setProtoField("pos");
IS25->addConnect(*connect26);

ProtoInstance23->setIS(*IS25);

ProtoBody22->addChildren(*ProtoInstance23);

ProtoDeclare19->setProtoBody(*ProtoBody22);

group->addChildren(*ProtoDeclare19);

CNavigationInfo* NavigationInfo27 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo27->setType(new CString[3]{"EXAMINE","FLY","WALK"}, 3);
NavigationInfo27->setAvatarSize(new float[3]{200,200,120}, 3);
NavigationInfo27->setSpeed(3);
group->addChildren(*NavigationInfo27);

CWorldInfo* WorldInfo28 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo28->setTitle("Arts Mapper");
group->addChildren(*WorldInfo28);

CViewpoint* Viewpoint29 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint29->setDescription("looking North");
Viewpoint29->setPosition(new float[3]{0,60,110});
Viewpoint29->setOrientation(new float[4]{1,0,0,-0.699999988079071});
Viewpoint29->setFieldOfView(0.7853981);
group->addChildren(*Viewpoint29);

CViewpoint* Viewpoint30 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint30->setDescription("looking East");
Viewpoint30->setPosition(new float[3]{-140,30,0});
Viewpoint30->setOrientation(new float[4]{0,0.400000005960464,0,-1.39999997615814});
Viewpoint30->setFieldOfView(0.7853981);
group->addChildren(*Viewpoint30);

CViewpoint* Viewpoint31 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint31->setDescription("Overhead");
Viewpoint31->setPosition(new float[3]{0,150,0});
Viewpoint31->setOrientation(new float[4]{1,0,0,-1.57000005245209});
Viewpoint31->setFieldOfView(0.7853981);
group->addChildren(*Viewpoint31);

CAnchor* Anchor32 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor32->setDescription("High Peak Community Arts");
Anchor32->setUrl(new CString[1]{"javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 1);
CProtoInstance* ProtoInstance33 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance33->setName("r");
CfieldValue* fieldValue34 = new CfieldValue();
fieldValue34->setName("pos");
fieldValue34->setValue("400 0.1 -385");
ProtoInstance33->addFieldValue(*fieldValue34);

Anchor32->addChildren(*ProtoInstance33);

group->addChildren(*Anchor32);

X3D0->setScene(*Scene4);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
