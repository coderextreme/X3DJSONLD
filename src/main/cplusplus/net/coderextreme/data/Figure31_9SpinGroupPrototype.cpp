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
X3D0->setVersion("3.0");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("Figure31_9SpinGroupPrototype.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("creator");
meta3->setContent("Figure 31.9, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("reference");
meta4->setContent("http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig09.htm");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("translator");
meta5->setContent("Don Brutzman");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("24 October 2000");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("20 October 2019");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("description");
meta8->setContent("The SpinGroup prototype is used to automatically spin a group of three long rectangular boxes. Click on blue crossbar to activate second SpinGroup.");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("identifier");
meta9->setContent("https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_9SpinGroupPrototype.x3d");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("generator");
meta10->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("license");
meta11->setContent("../../license.html");
head1->addMeta(*meta11);

X3D0->setHead(*head1);

CScene* Scene12 = new CScene();
CWorldInfo* WorldInfo13 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo13->setTitle("Figure31_9SpinGroupPrototype.x3d");
group->addChildren(*WorldInfo13);

CProtoDeclare ProtoDeclare14 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="SpinGroup" ><ProtoInterface><field name="children" accessType="inputOutput" type="MFNode"><!--NULL node initialization--></field>
<field name="cycleInterval" accessType="inputOutput" type="SFTime" value="1"></field>
<field name="loop" accessType="inputOutput" type="SFBool" value="false"></field>
<field name="startTime" accessType="inputOutput" type="SFTime" value="0"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime" value="0"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="SpinGroupTransform"><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Transform>
<!--following nodes will not be rendered, only the first node of a ProtoBody is drawn--><TimeSensor DEF="SpinGroupClock"><IS><connect nodeField="cycleInterval" protoField="cycleInterval"></connect>
<connect nodeField="loop" protoField="loop"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
</IS>
</TimeSensor>
<OrientationInterpolator DEF="Spinner" key="0 0.5 1" keyValue="0 1 0 0 0 1 0 3.14 0 1 0 6.28"></OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="SpinGroupClock" toField="set_fraction" toNode="Spinner"></ROUTE>
<ROUTE fromField="value_changed" fromNode="Spinner" toField="set_rotation" toNode="SpinGroupTransform"></ROUTE>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare14->setName("SpinGroup");
CProtoInterface* ProtoInterface15 = new CProtoInterface();
Cfield* field16 = new Cfield();
field16->setName("children");
field16->setAccessType("inputOutput");
field16->setType("MFNode");
//NULL node initialization
ProtoInterface15->addField(*field16);

Cfield* field17 = new Cfield();
field17->setName("cycleInterval");
field17->setAccessType("inputOutput");
field17->setType("SFTime");
field17->setValue("1");
ProtoInterface15->addField(*field17);

Cfield* field18 = new Cfield();
field18->setName("loop");
field18->setAccessType("inputOutput");
field18->setType("SFBool");
field18->setValue("false");
ProtoInterface15->addField(*field18);

Cfield* field19 = new Cfield();
field19->setName("startTime");
field19->setAccessType("inputOutput");
field19->setType("SFTime");
field19->setValue("0");
ProtoInterface15->addField(*field19);

Cfield* field20 = new Cfield();
field20->setName("stopTime");
field20->setAccessType("inputOutput");
field20->setType("SFTime");
field20->setValue("0");
ProtoInterface15->addField(*field20);

ProtoDeclare14->setProtoInterface(*ProtoInterface15);

CProtoBody* ProtoBody21 = new CProtoBody();
CTransform* Transform22 = (CTransform *)(m_pScene.createNode("Transform"));
Transform22->setDEF("SpinGroupTransform");
CIS* IS23 = new CIS();
Cconnect* connect24 = new Cconnect();
connect24->setNodeField("children");
connect24->setProtoField("children");
IS23->addConnect(*connect24);

Transform22->setIS(*IS23);

ProtoBody21->addChildren(*Transform22);

//following nodes will not be rendered, only the first node of a ProtoBody is drawn
CTimeSensor* TimeSensor25 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor25->setDEF("SpinGroupClock");
CIS* IS26 = new CIS();
Cconnect* connect27 = new Cconnect();
connect27->setNodeField("cycleInterval");
connect27->setProtoField("cycleInterval");
IS26->addConnect(*connect27);

Cconnect* connect28 = new Cconnect();
connect28->setNodeField("loop");
connect28->setProtoField("loop");
IS26->addConnect(*connect28);

Cconnect* connect29 = new Cconnect();
connect29->setNodeField("startTime");
connect29->setProtoField("startTime");
IS26->addConnect(*connect29);

Cconnect* connect30 = new Cconnect();
connect30->setNodeField("stopTime");
connect30->setProtoField("stopTime");
IS26->addConnect(*connect30);

TimeSensor25->setIS(*IS26);

ProtoBody21->addChildren(*TimeSensor25);

COrientationInterpolator* OrientationInterpolator31 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator31->setDEF("Spinner");
OrientationInterpolator31->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator31->setKeyValue(new float[12]{0,1,0,0,0,1,0,3.14,0,1,0,6.28});
ProtoBody21->addChildren(*OrientationInterpolator31);

CROUTE* ROUTE32 = new CROUTE();
ROUTE32->setFromField("fraction_changed");
ROUTE32->setFromNode("SpinGroupClock");
ROUTE32->setToField("set_fraction");
ROUTE32->setToNode("Spinner");
ProtoBody21->addChildren(*ROUTE32);

CROUTE* ROUTE33 = new CROUTE();
ROUTE33->setFromField("value_changed");
ROUTE33->setFromNode("Spinner");
ROUTE33->setToField("set_rotation");
ROUTE33->setToNode("SpinGroupTransform");
ProtoBody21->addChildren(*ROUTE33);

ProtoDeclare14->setProtoBody(*ProtoBody21);

group->addChildren(*ProtoDeclare14);

//Now the scene proper begins. Nothing renders in a ProtoDeclare (or ExternProtoDeclare).
CViewpoint* Viewpoint34 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint34->setDescription("Click on blue crossbar to activate second SpinGroup");
Viewpoint34->setOrientation(new float[4]{1,0,0,-0.52});
Viewpoint34->setPosition(new float[3]{0,18,30});
group->addChildren(*Viewpoint34);

//Create an instance, meaning actual nodes that render
CProtoInstance* ProtoInstance35 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance35->setName("SpinGroup");
CfieldValue* fieldValue36 = new CfieldValue();
fieldValue36->setName("cycleInterval");
fieldValue36->setValue("8");
ProtoInstance35->addFieldValue(*fieldValue36);

CfieldValue* fieldValue37 = new CfieldValue();
fieldValue37->setName("loop");
fieldValue37->setValue("true");
ProtoInstance35->addFieldValue(*fieldValue37);

CfieldValue* fieldValue38 = new CfieldValue();
fieldValue38->setName("children");
CShape* Shape39 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box40 = (CBox *)(m_pScene.createNode("Box"));
Box40->setSize(new float[3]{25,2,2});
Shape39->setGeometry(Box40);

CAppearance* Appearance41 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance41->setDEF("Green");
CMaterial* Material42 = (CMaterial *)(m_pScene.createNode("Material"));
Material42->setDiffuseColor(new float[3]{0,1,0.3});
Appearance41->setMaterial(*Material42);

Shape39->setAppearance(*Appearance41);

fieldValue38->addChildren(*Shape39);

CShape* Shape43 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box44 = (CBox *)(m_pScene.createNode("Box"));
Box44->setSize(new float[3]{2,25,2});
Shape43->setGeometry(Box44);

CAppearance* Appearance45 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance45->setUSE("Green");
Shape43->setAppearance(*Appearance45);

fieldValue38->addChildren(*Shape43);

CProtoInstance* ProtoInstance46 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance46->setName("SpinGroup");
ProtoInstance46->setDEF("SecondSpinGroup");
CfieldValue* fieldValue47 = new CfieldValue();
fieldValue47->setName("cycleInterval");
fieldValue47->setValue("4");
ProtoInstance46->addFieldValue(*fieldValue47);

CfieldValue* fieldValue48 = new CfieldValue();
fieldValue48->setName("loop");
fieldValue48->setValue("true");
ProtoInstance46->addFieldValue(*fieldValue48);

CfieldValue* fieldValue49 = new CfieldValue();
fieldValue49->setName("stopTime");
fieldValue49->setValue("1");
ProtoInstance46->addFieldValue(*fieldValue49);

CfieldValue* fieldValue50 = new CfieldValue();
fieldValue50->setName("children");
CTouchSensor* TouchSensor51 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor51->setDEF("ActivateSecondSpinGroup");
TouchSensor51->setDescription("Activate second SpinGroup by clicking blue bar");
fieldValue50->addChildren(*TouchSensor51);

CShape* Shape52 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box53 = (CBox *)(m_pScene.createNode("Box"));
Box53->setSize(new float[3]{2,2.05,25});
Shape52->setGeometry(Box53);

CAppearance* Appearance54 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material55 = (CMaterial *)(m_pScene.createNode("Material"));
Material55->setDiffuseColor(new float[3]{0,0.3,1});
Appearance54->setMaterial(*Material55);

Shape52->setAppearance(*Appearance54);

fieldValue50->addChildren(*Shape52);

ProtoInstance46->addFieldValue(*fieldValue50);

//stopTime > startTime ensures that initial state is stopped
fieldValue38->addChildren(*ProtoInstance46);

ProtoInstance35->addFieldValue(*fieldValue38);

group->addChildren(*ProtoInstance35);

CROUTE* ROUTE56 = new CROUTE();
ROUTE56->setFromField("touchTime");
ROUTE56->setFromNode("ActivateSecondSpinGroup");
ROUTE56->setToField("startTime");
ROUTE56->setToNode("SecondSpinGroup");
group->addChildren(*ROUTE56);

X3D0->setScene(*Scene12);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
