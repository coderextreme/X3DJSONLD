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
Ccomponent* component2 = new Ccomponent();
component2->setName("Scripting");
component2->setLevel(1);
head1->addComponent(*component2);

Cmeta* meta3 = new Cmeta();
meta3->setName("title");
meta3->setContent("bubs.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("John Carlson");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("description");
meta5->setContent("Tour around a prismatic sphere");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("generator");
meta6->setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("identifier");
meta7->setContent("https://coderextreme.net/X3DJSONLD/bubs.x3d");
head1->addMeta(*meta7);

X3D0->setHead(*head1);

CScene* Scene8 = new CScene();
CNavigationInfo* NavigationInfo9 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo9->setType(new CString[1]{"EXAMINE"}, 1);
group->addChildren(*NavigationInfo9);

CViewpoint* Viewpoint10 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint10->setPosition(new float[3]{0,0,4});
Viewpoint10->setOrientation(new float[4]{1,0,0,0});
Viewpoint10->setDescription("Bubbles in action");
group->addChildren(*Viewpoint10);

CBackground* Background11 = (CBackground *)(m_pScene.createNode("Background"));
Background11->setBackUrl(new CString[2]{"../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"}, 2);
Background11->setBottomUrl(new CString[2]{"../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"}, 2);
Background11->setFrontUrl(new CString[2]{"../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"}, 2);
Background11->setLeftUrl(new CString[2]{"../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"}, 2);
Background11->setRightUrl(new CString[2]{"../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"}, 2);
Background11->setTopUrl(new CString[2]{"../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"}, 2);
group->addChildren(*Background11);

CProtoDeclare ProtoDeclare12 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="Bubble" ><ProtoBody><Transform DEF="body_trans"><Shape><Sphere containerField="geometry" radius="0.25"></Sphere>
<Appearance><Material diffuseColor="1 0 0" transparency="0.2"></Material>
</Appearance>
</Shape>
<Script DEF="bounce1"><field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
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
    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);
    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);
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
	scale.x = scale.x/20;
	translation.x = 0;
	initialize();
    }
    if (Math.abs(scale.y) > 20) {
	scale.y = scale.y/20;
	translation.y = 0;
	initialize();
    }
    if (Math.abs(scale.z) > 20) {
	scale.z = scale.z/20;
	translation.z = 0;
	initialize();
    }
}]]></Script>
<TimeSensor DEF="bubbleClock" cycleInterval="10" loop="true"></TimeSensor>
<ROUTE fromNode="bounce1" fromField="translation_changed" toNode="body_trans" toField="set_translation"></ROUTE>
<ROUTE fromNode="bounce1" fromField="scale_changed" toNode="body_trans" toField="set_scale"></ROUTE>
<ROUTE fromNode="bubbleClock" fromField="fraction_changed" toNode="bounce1" toField="set_fraction"></ROUTE>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare12->setName("Bubble");
CProtoBody* ProtoBody13 = new CProtoBody();
CTransform* Transform14 = (CTransform *)(m_pScene.createNode("Transform"));
Transform14->setDEF("body_trans");
CShape* Shape15 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere16 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere16->setRadius(0.25);
Shape15->setGeometry(Sphere16);

CAppearance* Appearance17 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material18 = (CMaterial *)(m_pScene.createNode("Material"));
Material18->setDiffuseColor(new float[3]{1,0,0});
Material18->setTransparency(0.2);
Appearance17->setMaterial(*Material18);

Shape15->setAppearance(*Appearance17);

Transform14->addChildren(*Shape15);

CScript* Script19 = (CScript *)(m_pScene.createNode("Script"));
Script19->setDEF("bounce1");
Cfield* field20 = new Cfield();
field20->setName("scale");
field20->setAccessType("inputOutput");
field20->setType("SFVec3f");
field20->setValue("1 1 1");
Script19->addField(*field20);

Cfield* field21 = new Cfield();
field21->setName("translation");
field21->setAccessType("inputOutput");
field21->setType("SFVec3f");
field21->setValue("0 0 0");
Script19->addField(*field21);

Cfield* field22 = new Cfield();
field22->setName("velocity");
field22->setAccessType("inputOutput");
field22->setType("SFVec3f");
field22->setValue("0 0 0");
Script19->addField(*field22);

Cfield* field23 = new Cfield();
field23->setName("scalvel");
field23->setAccessType("inputOutput");
field23->setType("SFVec3f");
field23->setValue("0 0 0");
Script19->addField(*field23);

Cfield* field24 = new Cfield();
field24->setName("set_fraction");
field24->setAccessType("inputOnly");
field24->setType("SFFloat");
Script19->addField(*field24);


Script19.setSourceCode(`ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);\n"+
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);\n"+
"    // if you get to far away or too big, explode\n"+
"    if ( Math.abs(translation.x) > 256) {\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.y) > 256) {\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if ( Math.abs(translation.z) > 256) {\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.x) > 20) {\n"+
"	scale.x = scale.x/20;\n"+
"	translation.x = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.y) > 20) {\n"+
"	scale.y = scale.y/20;\n"+
"	translation.y = 0;\n"+
"	initialize();\n"+
"    }\n"+
"    if (Math.abs(scale.z) > 20) {\n"+
"	scale.z = scale.z/20;\n"+
"	translation.z = 0;\n"+
"	initialize();\n"+
"    }\n"+
"}`)
Transform14->addChildren(*Script19);

CTimeSensor* TimeSensor25 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor25->setDEF("bubbleClock");
TimeSensor25->setCycleInterval(10);
TimeSensor25->setLoop(True);
Transform14->addChildren(*TimeSensor25);

CROUTE* ROUTE26 = new CROUTE();
ROUTE26->setFromNode("bounce1");
ROUTE26->setFromField("translation_changed");
ROUTE26->setToNode("body_trans");
ROUTE26->setToField("set_translation");
Transform14->addChildren(*ROUTE26);

CROUTE* ROUTE27 = new CROUTE();
ROUTE27->setFromNode("bounce1");
ROUTE27->setFromField("scale_changed");
ROUTE27->setToNode("body_trans");
ROUTE27->setToField("set_scale");
Transform14->addChildren(*ROUTE27);

CROUTE* ROUTE28 = new CROUTE();
ROUTE28->setFromNode("bubbleClock");
ROUTE28->setFromField("fraction_changed");
ROUTE28->setToNode("bounce1");
ROUTE28->setToField("set_fraction");
Transform14->addChildren(*ROUTE28);

ProtoBody13->addChildren(*Transform14);

ProtoDeclare12->setProtoBody(*ProtoBody13);

group->addChildren(*ProtoDeclare12);

CProtoInstance* ProtoInstance29 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance29->setName("Bubble");
ProtoInstance29->setDEF("bubbleA");
group->addChildren(*ProtoInstance29);

CProtoInstance* ProtoInstance30 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance30->setName("Bubble");
ProtoInstance30->setDEF("bubbleB");
group->addChildren(*ProtoInstance30);

CProtoInstance* ProtoInstance31 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance31->setName("Bubble");
ProtoInstance31->setDEF("bubbleC");
group->addChildren(*ProtoInstance31);

CProtoInstance* ProtoInstance32 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance32->setName("Bubble");
ProtoInstance32->setDEF("bubbleD");
group->addChildren(*ProtoInstance32);

X3D0->setScene(*Scene8);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
