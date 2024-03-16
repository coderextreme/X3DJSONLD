/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Abstracts.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Concretes.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile("Immersive");
X3D0->setVersion("3.3");
head* head1 = new head();
component* component2 = new component();
component2->setName("Scripting");
component2->setLevel(1);
head1->addComponent(component2);

meta* meta3 = new meta();
meta3->setName("title");
meta3->setContent("bubs.x3d");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("creator");
meta4->setContent("John Carlson");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("description");
meta5->setContent("Tour around a prismatic sphere");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("generator");
meta6->setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("identifier");
meta7->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/bubs.x3d");
head1->addMeta(meta7);

X3D0->setHead(head1);

Scene* Scene8 = new Scene();
NavigationInfo* NavigationInfo9 = new NavigationInfo();
NavigationInfo9->setType(new String[1]{"EXAMINE"}, 1);
Scene8->addChild(NavigationInfo9);

Viewpoint* Viewpoint10 = new Viewpoint();
Viewpoint10->setPosition(new float[3]{0,0,4});
Viewpoint10->setOrientation(new float[4]{1,0,0,0});
Viewpoint10->setDescription("Bubbles in action");
Scene8->addChild(Viewpoint10);

Background* Background11 = new Background();
Background11->setBackUrl(new String[2]{"../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"}, 2);
Background11->setBottomUrl(new String[2]{"../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"}, 2);
Background11->setFrontUrl(new String[2]{"../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"}, 2);
Background11->setLeftUrl(new String[2]{"../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"}, 2);
Background11->setRightUrl(new String[2]{"../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"}, 2);
Background11->setTopUrl(new String[2]{"../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"}, 2);
Scene8->addChild(Background11);

ProtoDeclare* ProtoDeclare12 = new ProtoDeclare();
ProtoDeclare12->setName("Bubble");
ProtoBody* ProtoBody13 = new ProtoBody();
Transform* Transform14 = new Transform();
Transform14->setDEF("body_trans");
Shape* Shape15 = new Shape();
Sphere* Sphere16 = new Sphere();
Sphere16->setRadius(0.25);
Shape15->setGeometry(Sphere16);

Appearance* Appearance17 = new Appearance();
Material* Material18 = new Material();
Material18->setDiffuseColor(new float[3]{1,0,0});
Material18->setTransparency(0.2);
Appearance17->setMaterial(Material18);

Shape15->setAppearance(Appearance17);

Transform14->addChild(Shape15);

Script* Script19 = new Script();
Script19->setDEF("bounce1");
field* field20 = new field();
field20->setName("scale");
field20->setAccessType("inputOutput");
field20->setType("SFVec3f");
field20->setValue("1 1 1");
Script19->addField(field20);

field* field21 = new field();
field21->setName("translation");
field21->setAccessType("inputOutput");
field21->setType("SFVec3f");
field21->setValue("0 0 0");
Script19->addField(field21);

field* field22 = new field();
field22->setName("velocity");
field22->setAccessType("inputOutput");
field22->setType("SFVec3f");
field22->setValue("0 0 0");
Script19->addField(field22);

field* field23 = new field();
field23->setName("scalvel");
field23->setAccessType("inputOutput");
field23->setType("SFVec3f");
field23->setValue("0 0 0");
Script19->addField(field23);

field* field24 = new field();
field24->setName("set_fraction");
field24->setAccessType("inputOnly");
field24->setType("SFFloat");
Script19->addField(field24);


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
Transform14->addChild(Script19);

TimeSensor* TimeSensor25 = new TimeSensor();
TimeSensor25->setDEF("bubbleClock");
TimeSensor25->setCycleInterval(10);
TimeSensor25->setLoop(True);
Transform14->addChild(TimeSensor25);

ROUTE* ROUTE26 = new ROUTE();
ROUTE26->setFromNode("bounce1");
ROUTE26->setFromField("translation_changed");
ROUTE26->setToNode("body_trans");
ROUTE26->setToField("set_translation");
Transform14->addChild(ROUTE26);

ROUTE* ROUTE27 = new ROUTE();
ROUTE27->setFromNode("bounce1");
ROUTE27->setFromField("scale_changed");
ROUTE27->setToNode("body_trans");
ROUTE27->setToField("set_scale");
Transform14->addChild(ROUTE27);

ROUTE* ROUTE28 = new ROUTE();
ROUTE28->setFromNode("bubbleClock");
ROUTE28->setFromField("fraction_changed");
ROUTE28->setToNode("bounce1");
ROUTE28->setToField("set_fraction");
Transform14->addChild(ROUTE28);

ProtoBody13->addChild(Transform14);

ProtoDeclare12->setProtoBody(ProtoBody13);

Scene8->addChild(ProtoDeclare12);

ProtoInstance* ProtoInstance29 = new ProtoInstance();
ProtoInstance29->setName("Bubble");
ProtoInstance29->setDEF("bubbleA");
Scene8->addChild(ProtoInstance29);

ProtoInstance* ProtoInstance30 = new ProtoInstance();
ProtoInstance30->setName("Bubble");
ProtoInstance30->setDEF("bubbleB");
Scene8->addChild(ProtoInstance30);

ProtoInstance* ProtoInstance31 = new ProtoInstance();
ProtoInstance31->setName("Bubble");
ProtoInstance31->setDEF("bubbleC");
Scene8->addChild(ProtoInstance31);

ProtoInstance* ProtoInstance32 = new ProtoInstance();
ProtoInstance32->setName("Bubble");
ProtoInstance32->setDEF("bubbleD");
Scene8->addChild(ProtoInstance32);

X3D0->setScene(Scene8);

X3D0->toXMLString();
}
