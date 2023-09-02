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
meta2->setContent("bubs3.x3d");
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
meta6->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/bubs.x3d");
head1->addMeta(*meta6);

X3D0->setHead(*head1);

CScene* Scene7 = new CScene();
CNavigationInfo* NavigationInfo8 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo8->setType(new CString[1]{"EXAMINE"}, 1);
group->addChildren(*NavigationInfo8);

CViewpoint* Viewpoint9 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint9->setPosition(new float[3]{0,0,4});
Viewpoint9->setOrientation(new float[4]{1,0,0,0});
Viewpoint9->setDescription("Bubbles in action");
group->addChildren(*Viewpoint9);

CBackground* Background10 = (CBackground *)(m_pScene.createNode("Background"));
Background10->setBackUrl(new CString[2]{"../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"}, 2);
Background10->setBottomUrl(new CString[2]{"../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"}, 2);
Background10->setFrontUrl(new CString[2]{"../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"}, 2);
Background10->setLeftUrl(new CString[2]{"../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"}, 2);
Background10->setRightUrl(new CString[2]{"../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"}, 2);
Background10->setTopUrl(new CString[2]{"../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"}, 2);
group->addChildren(*Background10);

CTransform* Transform11 = (CTransform *)(m_pScene.createNode("Transform"));
Transform11->setDEF("DECLBubble_bubbleA");
CShape* Shape12 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere13 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere13->setRadius(0.25);
Shape12->setGeometry(Sphere13);

CAppearance* Appearance14 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material15 = (CMaterial *)(m_pScene.createNode("Material"));
Material15->setDiffuseColor(new float[3]{1,0,0});
Material15->setTransparency(0.2);
Appearance14->setMaterial(*Material15);

Shape12->setAppearance(*Appearance14);

Transform11->addChild(*Shape12);

CScript* Script16 = (CScript *)(m_pScene.createNode("Script"));
Script16->setDEF("DECLBubble_bubbleA_bounce");
Cfield* field17 = new Cfield();
field17->setName("scale");
field17->setAccessType("inputOutput");
field17->setType("SFVec3f");
field17->setValue("1 1 1");
Script16->addField(*field17);

Cfield* field18 = new Cfield();
field18->setName("translation");
field18->setAccessType("inputOutput");
field18->setType("SFVec3f");
field18->setValue("0 0 0");
Script16->addField(*field18);

Cfield* field19 = new Cfield();
field19->setName("velocity");
field19->setAccessType("inputOutput");
field19->setType("SFVec3f");
field19->setValue("0 0 0");
Script16->addField(*field19);

Cfield* field20 = new Cfield();
field20->setName("scalvel");
field20->setAccessType("inputOutput");
field20->setType("SFVec3f");
field20->setValue("0 0 0");
Script16->addField(*field20);

Cfield* field21 = new Cfield();
field21->setName("set_fraction");
field21->setAccessType("inputOnly");
field21->setType("SFFloat");
Script16->addField(*field21);


Script16.setSourceCode(`ecmascript:\n"+
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
Transform11->addChildren(*Script16);

CTimeSensor* TimeSensor22 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor22->setDEF("DECLBubble_bubbleA_bubbleClock");
TimeSensor22->setCycleInterval(10);
TimeSensor22->setLoop(True);
Transform11->addChildren(*TimeSensor22);

CROUTE* ROUTE23 = new CROUTE();
ROUTE23->setFromNode("DECLBubble_bubbleA_bounce");
ROUTE23->setFromField("translation_changed");
ROUTE23->setToNode("DECLBubble_transform");
ROUTE23->setToField("set_translation");
Transform11->addChildren(*ROUTE23);

CROUTE* ROUTE24 = new CROUTE();
ROUTE24->setFromNode("DECLBubble_bubbleA_bounce");
ROUTE24->setFromField("scale_changed");
ROUTE24->setToNode("DECLBubble_transform");
ROUTE24->setToField("set_scale");
Transform11->addChildren(*ROUTE24);

CROUTE* ROUTE25 = new CROUTE();
ROUTE25->setFromNode("DECLBubble_bubbleA_bubbleClock");
ROUTE25->setFromField("fraction_changed");
ROUTE25->setToNode("DECLBubble_bubbleA_bounce");
ROUTE25->setToField("set_fraction");
Transform11->addChildren(*ROUTE25);

group->addChildren(*Transform11);

CTransform* Transform26 = (CTransform *)(m_pScene.createNode("Transform"));
Transform26->setDEF("DECLBubble_bubbleB");
CShape* Shape27 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere28 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere28->setRadius(0.25);
Shape27->setGeometry(Sphere28);

CAppearance* Appearance29 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material30 = (CMaterial *)(m_pScene.createNode("Material"));
Material30->setDiffuseColor(new float[3]{1,0,0});
Material30->setTransparency(0.2);
Appearance29->setMaterial(*Material30);

Shape27->setAppearance(*Appearance29);

Transform26->addChild(*Shape27);

CScript* Script31 = (CScript *)(m_pScene.createNode("Script"));
Script31->setDEF("DECLBubble_bubbleB_bounce");
Cfield* field32 = new Cfield();
field32->setName("scale");
field32->setAccessType("inputOutput");
field32->setType("SFVec3f");
field32->setValue("1 1 1");
Script31->addField(*field32);

Cfield* field33 = new Cfield();
field33->setName("translation");
field33->setAccessType("inputOutput");
field33->setType("SFVec3f");
field33->setValue("0 0 0");
Script31->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("velocity");
field34->setAccessType("inputOutput");
field34->setType("SFVec3f");
field34->setValue("0 0 0");
Script31->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("scalvel");
field35->setAccessType("inputOutput");
field35->setType("SFVec3f");
field35->setValue("0 0 0");
Script31->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("set_fraction");
field36->setAccessType("inputOnly");
field36->setType("SFFloat");
Script31->addField(*field36);


Script31.setSourceCode(`ecmascript:\n"+
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
Transform26->addChildren(*Script31);

CTimeSensor* TimeSensor37 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor37->setDEF("DECLBubble_bubbleB_bubbleClock");
TimeSensor37->setCycleInterval(10);
TimeSensor37->setLoop(True);
Transform26->addChildren(*TimeSensor37);

CROUTE* ROUTE38 = new CROUTE();
ROUTE38->setFromNode("DECLBubble_bubbleB_bounce");
ROUTE38->setFromField("translation_changed");
ROUTE38->setToNode("DECLBubble_transform");
ROUTE38->setToField("set_translation");
Transform26->addChildren(*ROUTE38);

CROUTE* ROUTE39 = new CROUTE();
ROUTE39->setFromNode("DECLBubble_bubbleB_bounce");
ROUTE39->setFromField("scale_changed");
ROUTE39->setToNode("DECLBubble_transform");
ROUTE39->setToField("set_scale");
Transform26->addChildren(*ROUTE39);

CROUTE* ROUTE40 = new CROUTE();
ROUTE40->setFromNode("DECLBubble_bubbleB_bubbleClock");
ROUTE40->setFromField("fraction_changed");
ROUTE40->setToNode("DECLBubble_bubbleB_bounce");
ROUTE40->setToField("set_fraction");
Transform26->addChildren(*ROUTE40);

group->addChildren(*Transform26);

CTransform* Transform41 = (CTransform *)(m_pScene.createNode("Transform"));
Transform41->setDEF("DECLBubble_bubbleC");
CShape* Shape42 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere43 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere43->setRadius(0.25);
Shape42->setGeometry(Sphere43);

CAppearance* Appearance44 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material45 = (CMaterial *)(m_pScene.createNode("Material"));
Material45->setDiffuseColor(new float[3]{1,0,0});
Material45->setTransparency(0.2);
Appearance44->setMaterial(*Material45);

Shape42->setAppearance(*Appearance44);

Transform41->addChild(*Shape42);

CScript* Script46 = (CScript *)(m_pScene.createNode("Script"));
Script46->setDEF("DECLBubble_bubbleC_bounce");
Cfield* field47 = new Cfield();
field47->setName("scale");
field47->setAccessType("inputOutput");
field47->setType("SFVec3f");
field47->setValue("1 1 1");
Script46->addField(*field47);

Cfield* field48 = new Cfield();
field48->setName("translation");
field48->setAccessType("inputOutput");
field48->setType("SFVec3f");
field48->setValue("0 0 0");
Script46->addField(*field48);

Cfield* field49 = new Cfield();
field49->setName("velocity");
field49->setAccessType("inputOutput");
field49->setType("SFVec3f");
field49->setValue("0 0 0");
Script46->addField(*field49);

Cfield* field50 = new Cfield();
field50->setName("scalvel");
field50->setAccessType("inputOutput");
field50->setType("SFVec3f");
field50->setValue("0 0 0");
Script46->addField(*field50);

Cfield* field51 = new Cfield();
field51->setName("set_fraction");
field51->setAccessType("inputOnly");
field51->setType("SFFloat");
Script46->addField(*field51);


Script46.setSourceCode(`ecmascript:\n"+
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
Transform41->addChildren(*Script46);

CTimeSensor* TimeSensor52 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor52->setDEF("DECLBubble_bubbleC_bubbleClock");
TimeSensor52->setCycleInterval(10);
TimeSensor52->setLoop(True);
Transform41->addChildren(*TimeSensor52);

CROUTE* ROUTE53 = new CROUTE();
ROUTE53->setFromNode("DECLBubble_bubbleC_bounce");
ROUTE53->setFromField("translation_changed");
ROUTE53->setToNode("DECLBubble_transform");
ROUTE53->setToField("set_translation");
Transform41->addChildren(*ROUTE53);

CROUTE* ROUTE54 = new CROUTE();
ROUTE54->setFromNode("DECLBubble_bubbleC_bounce");
ROUTE54->setFromField("scale_changed");
ROUTE54->setToNode("DECLBubble_transform");
ROUTE54->setToField("set_scale");
Transform41->addChildren(*ROUTE54);

CROUTE* ROUTE55 = new CROUTE();
ROUTE55->setFromNode("DECLBubble_bubbleC_bubbleClock");
ROUTE55->setFromField("fraction_changed");
ROUTE55->setToNode("DECLBubble_bubbleC_bounce");
ROUTE55->setToField("set_fraction");
Transform41->addChildren(*ROUTE55);

group->addChildren(*Transform41);

CTransform* Transform56 = (CTransform *)(m_pScene.createNode("Transform"));
Transform56->setDEF("DECLBubble_bubbleD");
CShape* Shape57 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere58 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere58->setRadius(0.25);
Shape57->setGeometry(Sphere58);

CAppearance* Appearance59 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material60 = (CMaterial *)(m_pScene.createNode("Material"));
Material60->setDiffuseColor(new float[3]{1,0,0});
Material60->setTransparency(0.2);
Appearance59->setMaterial(*Material60);

Shape57->setAppearance(*Appearance59);

Transform56->addChild(*Shape57);

CScript* Script61 = (CScript *)(m_pScene.createNode("Script"));
Script61->setDEF("DECLBubble_bubbleD_bounce");
Cfield* field62 = new Cfield();
field62->setName("scale");
field62->setAccessType("inputOutput");
field62->setType("SFVec3f");
field62->setValue("1 1 1");
Script61->addField(*field62);

Cfield* field63 = new Cfield();
field63->setName("translation");
field63->setAccessType("inputOutput");
field63->setType("SFVec3f");
field63->setValue("0 0 0");
Script61->addField(*field63);

Cfield* field64 = new Cfield();
field64->setName("velocity");
field64->setAccessType("inputOutput");
field64->setType("SFVec3f");
field64->setValue("0 0 0");
Script61->addField(*field64);

Cfield* field65 = new Cfield();
field65->setName("scalvel");
field65->setAccessType("inputOutput");
field65->setType("SFVec3f");
field65->setValue("0 0 0");
Script61->addField(*field65);

Cfield* field66 = new Cfield();
field66->setName("set_fraction");
field66->setAccessType("inputOnly");
field66->setType("SFFloat");
Script61->addField(*field66);


Script61.setSourceCode(`ecmascript:\n"+
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
Transform56->addChildren(*Script61);

CTimeSensor* TimeSensor67 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor67->setDEF("DECLBubble_bubbleD_bubbleClock");
TimeSensor67->setCycleInterval(10);
TimeSensor67->setLoop(True);
Transform56->addChildren(*TimeSensor67);

CROUTE* ROUTE68 = new CROUTE();
ROUTE68->setFromNode("DECLBubble_bubbleD_bounce");
ROUTE68->setFromField("translation_changed");
ROUTE68->setToNode("DECLBubble_transform");
ROUTE68->setToField("set_translation");
Transform56->addChildren(*ROUTE68);

CROUTE* ROUTE69 = new CROUTE();
ROUTE69->setFromNode("DECLBubble_bubbleD_bounce");
ROUTE69->setFromField("scale_changed");
ROUTE69->setToNode("DECLBubble_transform");
ROUTE69->setToField("set_scale");
Transform56->addChildren(*ROUTE69);

CROUTE* ROUTE70 = new CROUTE();
ROUTE70->setFromNode("DECLBubble_bubbleD_bubbleClock");
ROUTE70->setFromField("fraction_changed");
ROUTE70->setToNode("DECLBubble_bubbleD_bounce");
ROUTE70->setToField("set_fraction");
Transform56->addChildren(*ROUTE70);

group->addChildren(*Transform56);

X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
