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
meta2->setContent("bubble.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("creator");
meta3->setContent("John Carlson");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("description");
meta4->setContent("Tour around a prismatic sphere");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("generator");
meta5->setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("identifier");
meta6->setContent("https://coderextreme.net/X3DJSONLD/bubble.x3d");
head1->addMeta(*meta6);

X3D0->setHead(*head1);

CScene* Scene7 = new CScene();
CNavigationInfo* NavigationInfo8 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo8->setType(new CString[1]{"EXAMINE"}, 1);
group->addChildren(*NavigationInfo8);

CViewpoint* Viewpoint9 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint9->setPosition(new float[3]{0,0,4});
Viewpoint9->setOrientation(new float[4]{1,0,0,0});
Viewpoint9->setDescription("Bubble in action");
group->addChildren(*Viewpoint9);

CProtoDeclare ProtoDeclare10 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bubble" ><ProtoBody><Transform DEF="transform"><Shape><Sphere containerField="geometry" radius="0.25"></Sphere>
<Appearance><Material diffuseColor="1 0 0" transparency="0.2"></Material>
</Appearance>
</Shape>
<Script DEF="bounce"><field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="velocity" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="scalvel" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="set_fraction" accessType="inputOnly" type="SFFloat"></field>
<![CDATA[ecmascript:
function initialize() {
    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);

    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);
}

function set_fraction(value) {
	translation = new SFVec3f(
		translation.x + velocity.x,
		translation.y + velocity.y,
		translation.z + velocity.z);
	scale = new SFVec3f(
		scale.x + scalvel.x,
		scale.y + scalvel.y,
		scale.z + scalvel.z);
        // if you get to far away or too big, explode
        if ( Math.abs(translation.x) > 256) {
		translation.x = 0;
		initialize();
	}
        if ( Math.abs(translation.y) > 256) {
		translation.y = 0;
		initialize();
	}
        if ( Math.abs(translation.z) > 256) {
		translation.z = 0;
		initialize();
	}
	if (Math.abs(scale.x) > 20) {
		scale.x = scale.x/2;
		translation.x = 0;
		initialize();
	}
	if (Math.abs(scale.y) > 20) {
		scale.y = scale.y/2;
		translation.y = 0;
		initialize();
	}
	if (Math.abs(scale.z) > 20) {
		scale.z = scale.z/2;
		translation.z = 0;
		initialize();
	}
}]]></Script>
<TimeSensor DEF="bubbleClock" cycleInterval="10" loop="true"></TimeSensor>
<ROUTE fromNode="bounce" fromField="translation_changed" toNode="transform" toField="set_translation"></ROUTE>
<ROUTE fromNode="bounce" fromField="scale_changed" toNode="transform" toField="set_scale"></ROUTE>
<ROUTE fromNode="bubbleClock" fromField="fraction_changed" toNode="bounce" toField="set_fraction"></ROUTE>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare10->setName("Bubble");
CProtoBody* ProtoBody11 = new CProtoBody();
CTransform* Transform12 = (CTransform *)(m_pScene.createNode("Transform"));
Transform12->setDEF("transform");
CShape* Shape13 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere14 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere14->setRadius(0.25);
Shape13->setGeometry(Sphere14);

CAppearance* Appearance15 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material16 = (CMaterial *)(m_pScene.createNode("Material"));
Material16->setDiffuseColor(new float[3]{1,0,0});
Material16->setTransparency(0.2);
Appearance15->setMaterial(*Material16);

Shape13->setAppearance(*Appearance15);

Transform12->addChildren(*Shape13);

CScript* Script17 = (CScript *)(m_pScene.createNode("Script"));
Script17->setDEF("bounce");
Cfield* field18 = new Cfield();
field18->setName("scale");
field18->setAccessType("inputOutput");
field18->setType("SFVec3f");
field18->setValue("1 1 1");
Script17->addField(*field18);

Cfield* field19 = new Cfield();
field19->setName("translation");
field19->setAccessType("inputOutput");
field19->setType("SFVec3f");
field19->setValue("0 0 0");
Script17->addField(*field19);

Cfield* field20 = new Cfield();
field20->setName("velocity");
field20->setAccessType("inputOutput");
field20->setType("SFVec3f");
field20->setValue("0 0 0");
Script17->addField(*field20);

Cfield* field21 = new Cfield();
field21->setName("scalvel");
field21->setAccessType("inputOutput");
field21->setType("SFVec3f");
field21->setValue("0 0 0");
Script17->addField(*field21);

Cfield* field22 = new Cfield();
field22->setName("set_fraction");
field22->setAccessType("inputOnly");
field22->setType("SFFloat");
Script17->addField(*field22);


Script17.setSourceCode(`ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"	translation = new SFVec3f(\n"+
"		translation.x + velocity.x,\n"+
"		translation.y + velocity.y,\n"+
"		translation.z + velocity.z);\n"+
"	scale = new SFVec3f(\n"+
"		scale.x + scalvel.x,\n"+
"		scale.y + scalvel.y,\n"+
"		scale.z + scalvel.z);\n"+
"        // if you get to far away or too big, explode\n"+
"        if ( Math.abs(translation.x) > 256) {\n"+
"		translation.x = 0;\n"+
"		initialize();\n"+
"	}\n"+
"        if ( Math.abs(translation.y) > 256) {\n"+
"		translation.y = 0;\n"+
"		initialize();\n"+
"	}\n"+
"        if ( Math.abs(translation.z) > 256) {\n"+
"		translation.z = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.x) > 20) {\n"+
"		scale.x = scale.x/2;\n"+
"		translation.x = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.y) > 20) {\n"+
"		scale.y = scale.y/2;\n"+
"		translation.y = 0;\n"+
"		initialize();\n"+
"	}\n"+
"	if (Math.abs(scale.z) > 20) {\n"+
"		scale.z = scale.z/2;\n"+
"		translation.z = 0;\n"+
"		initialize();\n"+
"	}\n"+
"}`)
Transform12->addChildren(*Script17);

CTimeSensor* TimeSensor23 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor23->setDEF("bubbleClock");
TimeSensor23->setCycleInterval(10);
TimeSensor23->setLoop(True);
Transform12->addChildren(*TimeSensor23);

CROUTE* ROUTE24 = new CROUTE();
ROUTE24->setFromNode("bounce");
ROUTE24->setFromField("translation_changed");
ROUTE24->setToNode("transform");
ROUTE24->setToField("set_translation");
Transform12->addChildren(*ROUTE24);

CROUTE* ROUTE25 = new CROUTE();
ROUTE25->setFromNode("bounce");
ROUTE25->setFromField("scale_changed");
ROUTE25->setToNode("transform");
ROUTE25->setToField("set_scale");
Transform12->addChildren(*ROUTE25);

CROUTE* ROUTE26 = new CROUTE();
ROUTE26->setFromNode("bubbleClock");
ROUTE26->setFromField("fraction_changed");
ROUTE26->setToNode("bounce");
ROUTE26->setToField("set_fraction");
Transform12->addChildren(*ROUTE26);

ProtoBody11->addChildren(*Transform12);

ProtoDeclare10->setProtoBody(*ProtoBody11);

group->addChildren(*ProtoDeclare10);

CProtoInstance* ProtoInstance27 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance27->setName("Bubble");
ProtoInstance27->setDEF("bubbleA");
group->addChildren(*ProtoInstance27);

X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
