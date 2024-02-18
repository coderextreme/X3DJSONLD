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
meta2->setContent("bubs2.x3d");
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
meta6->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("translated");
meta7->setContent("13 March 2016");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("generator");
meta8->setContent("X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html");
head1->addMeta(*meta8);

Ccomponent* component9 = new Ccomponent();
component9->setName("Scripting");
component9->setLevel(1);
head1->addComponent(*component9);

X3D0->setHead(*head1);

CScene* Scene10 = new CScene();
CNavigationInfo* NavigationInfo11 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo11->setType(new CString[1]{"EXAMINE"}, 1);
group->addChildren(*NavigationInfo11);

CViewpoint* Viewpoint12 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint12->setPosition(new float[3]{0,0,4});
Viewpoint12->setOrientation(new float[4]{1,0,0,0});
Viewpoint12->setDescription("Bubbles in action");
group->addChildren(*Viewpoint12);

CBackground* Background13 = (CBackground *)(m_pScene.createNode("Background"));
Background13->setBackUrl(new CString[2]{"../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"}, 2);
Background13->setBottomUrl(new CString[2]{"../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"}, 2);
Background13->setFrontUrl(new CString[2]{"../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"}, 2);
Background13->setLeftUrl(new CString[2]{"../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"}, 2);
Background13->setRightUrl(new CString[2]{"../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"}, 2);
Background13->setTopUrl(new CString[2]{"../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"}, 2);
group->addChildren(*Background13);

CProtoDeclare ProtoDeclare14 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Bubble" ><ProtoBody><Transform DEF="body_trans"><Shape><Sphere radius="0.25"></Sphere>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 0 0" transparency="0.2"></Material>
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
    if (typeof translation === 'undefined') {
		translation = new SFVec3f(0, 0, 0);
    }
    if (typeof velocity === 'undefined') {
		velocity = new SFVec3f(0, 0, 0);
    }
    if (typeof scalvel === 'undefined') {
		scalvel = new SFVec3f(0, 0, 0);
    }
    if (typeof scale === 'undefined') {
		scale = new SFVec3f(1, 1, 1);
    }
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
<ROUTE fromNode="bounce" fromField="translation_changed" toNode="body_trans" toField="set_translation"></ROUTE>
<ROUTE fromNode="bounce" fromField="scale_changed" toNode="body_trans" toField="set_scale"></ROUTE>
<ROUTE fromNode="bubbleClock" fromField="fraction_changed" toNode="bounce" toField="set_fraction"></ROUTE>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare14->setName("Bubble");
CProtoBody* ProtoBody15 = new CProtoBody();
CTransform* Transform16 = (CTransform *)(m_pScene.createNode("Transform"));
Transform16->setDEF("body_trans");
CShape* Shape17 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere18 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere18->setRadius(0.25);
Shape17->setGeometry(Sphere18);

CAppearance* Appearance19 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material20 = (CMaterial *)(m_pScene.createNode("Material"));
Material20->setDiffuseColor(new float[3]{1,0,0});
Material20->setTransparency(0.2);
Appearance19->setMaterial(*Material20);

Shape17->setAppearance(*Appearance19);

Transform16->addChild(*Shape17);

CScript* Script21 = (CScript *)(m_pScene.createNode("Script"));
Script21->setDEF("bounce");
Cfield* field22 = new Cfield();
field22->setName("scale");
field22->setAccessType("inputOutput");
field22->setType("SFVec3f");
field22->setValue("1 1 1");
Script21->addField(*field22);

Cfield* field23 = new Cfield();
field23->setName("translation");
field23->setAccessType("inputOutput");
field23->setType("SFVec3f");
field23->setValue("0 0 0");
Script21->addField(*field23);

Cfield* field24 = new Cfield();
field24->setName("velocity");
field24->setAccessType("inputOutput");
field24->setType("SFVec3f");
field24->setValue("0 0 0");
Script21->addField(*field24);

Cfield* field25 = new Cfield();
field25->setName("scalvel");
field25->setAccessType("inputOutput");
field25->setType("SFVec3f");
field25->setValue("0 0 0");
Script21->addField(*field25);

Cfield* field26 = new Cfield();
field26->setName("set_fraction");
field26->setAccessType("inputOnly");
field26->setType("SFFloat");
Script21->addField(*field26);


Script21.setSourceCode(`ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    if (typeof translation === 'undefined') {\n"+
"		translation = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof velocity === 'undefined') {\n"+
"		velocity = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof scalvel === 'undefined') {\n"+
"		scalvel = new SFVec3f(0, 0, 0);\n"+
"    }\n"+
"    if (typeof scale === 'undefined') {\n"+
"		scale = new SFVec3f(1, 1, 1);\n"+
"    }\n"+
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
Transform16->addChildren(*Script21);

CTimeSensor* TimeSensor27 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor27->setDEF("bubbleClock");
TimeSensor27->setCycleInterval(10);
TimeSensor27->setLoop(True);
Transform16->addChildren(*TimeSensor27);

CROUTE* ROUTE28 = new CROUTE();
ROUTE28->setFromNode("bounce");
ROUTE28->setFromField("translation_changed");
ROUTE28->setToNode("body_trans");
ROUTE28->setToField("set_translation");
Transform16->addChildren(*ROUTE28);

CROUTE* ROUTE29 = new CROUTE();
ROUTE29->setFromNode("bounce");
ROUTE29->setFromField("scale_changed");
ROUTE29->setToNode("body_trans");
ROUTE29->setToField("set_scale");
Transform16->addChildren(*ROUTE29);

CROUTE* ROUTE30 = new CROUTE();
ROUTE30->setFromNode("bubbleClock");
ROUTE30->setFromField("fraction_changed");
ROUTE30->setToNode("bounce");
ROUTE30->setToField("set_fraction");
Transform16->addChildren(*ROUTE30);

ProtoBody15->addChildren(*Transform16);

ProtoDeclare14->setProtoBody(*ProtoBody15);

group->addChildren(*ProtoDeclare14);

CProtoInstance* ProtoInstance31 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance31->setName("Bubble");
ProtoInstance31->setDEF("bubbleA");
group->addChildren(*ProtoInstance31);

CProtoInstance* ProtoInstance32 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance32->setName("Bubble");
ProtoInstance32->setDEF("bubbleB");
group->addChildren(*ProtoInstance32);

CProtoInstance* ProtoInstance33 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance33->setName("Bubble");
ProtoInstance33->setDEF("bubbleC");
group->addChildren(*ProtoInstance33);

CProtoInstance* ProtoInstance34 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance34->setName("Bubble");
ProtoInstance34->setDEF("bubbleD");
group->addChildren(*ProtoInstance34);

X3D0->setScene(*Scene10);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
