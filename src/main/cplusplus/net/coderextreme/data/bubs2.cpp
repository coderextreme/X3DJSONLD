/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/XML_PARSER.h"
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
meta* meta2 = new meta();
meta2->setName("title");
meta2->setContent("bubs2.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("creator");
meta3->setContent("John Carlson");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("description");
meta4->setContent("Tour around a prismatic sphere");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("generator");
meta5->setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("identifier");
meta6->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("translated");
meta7->setContent("13 March 2016");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("generator");
meta8->setContent("X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html");
head1->addMeta(meta8);

component* component9 = new component();
component9->setName("Scripting");
component9->setLevel(1);
head1->addComponent(component9);

X3D0->setHead(head1);

Scene* Scene10 = new Scene();
NavigationInfo* NavigationInfo11 = new NavigationInfo();
NavigationInfo11->setType(new String[1]{"EXAMINE"}, 1);
Scene10->addChild(NavigationInfo11);

Viewpoint* Viewpoint12 = new Viewpoint();
Viewpoint12->setPosition(new float[3]{0,0,4});
Viewpoint12->setOrientation(new float[4]{1,0,0,0});
Viewpoint12->setDescription("Bubbles in action");
Scene10->addChild(Viewpoint12);

Background* Background13 = new Background();
Background13->setBackUrl(new String[2]{"../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"}, 2);
Background13->setBottomUrl(new String[2]{"../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"}, 2);
Background13->setFrontUrl(new String[2]{"../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"}, 2);
Background13->setLeftUrl(new String[2]{"../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"}, 2);
Background13->setRightUrl(new String[2]{"../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"}, 2);
Background13->setTopUrl(new String[2]{"../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"}, 2);
Scene10->addChild(Background13);

ProtoDeclare* ProtoDeclare14 = new ProtoDeclare();
ProtoDeclare14->setName("Bubble");
ProtoBody* ProtoBody15 = new ProtoBody();
Transform* Transform16 = new Transform();
Transform16->setDEF("body_trans");
Shape* Shape17 = new Shape();
Sphere* Sphere18 = new Sphere();
Sphere18->setRadius(0.25);
Shape17->setGeometry(Sphere18);

Appearance* Appearance19 = new Appearance();
Material* Material20 = new Material();
Material20->setDiffuseColor(new float[3]{1,0,0});
Material20->setTransparency(0.2);
Appearance19->setMaterial(Material20);

Shape17->setAppearance(Appearance19);

Transform16->addChild(Shape17);

Script* Script21 = new Script();
Script21->setDEF("bounce");
field* field22 = new field();
field22->setName("scale");
field22->setAccessType("inputOutput");
field22->setType("SFVec3f");
field22->setValue("1 1 1");
Script21->addField(field22);

field* field23 = new field();
field23->setName("translation");
field23->setAccessType("inputOutput");
field23->setType("SFVec3f");
field23->setValue("0 0 0");
Script21->addField(field23);

field* field24 = new field();
field24->setName("velocity");
field24->setAccessType("inputOutput");
field24->setType("SFVec3f");
field24->setValue("0 0 0");
Script21->addField(field24);

field* field25 = new field();
field25->setName("scalvel");
field25->setAccessType("inputOutput");
field25->setType("SFVec3f");
field25->setValue("0 0 0");
Script21->addField(field25);

field* field26 = new field();
field26->setName("set_fraction");
field26->setAccessType("inputOnly");
field26->setType("SFFloat");
Script21->addField(field26);


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
Transform16->addChild(Script21);

TimeSensor* TimeSensor27 = new TimeSensor();
TimeSensor27->setDEF("bubbleClock");
TimeSensor27->setCycleInterval(10);
TimeSensor27->setLoop(True);
Transform16->addChild(TimeSensor27);

ROUTE* ROUTE28 = new ROUTE();
ROUTE28->setFromNode("bounce");
ROUTE28->setFromField("translation_changed");
ROUTE28->setToNode("body_trans");
ROUTE28->setToField("set_translation");
Transform16->addChild(ROUTE28);

ROUTE* ROUTE29 = new ROUTE();
ROUTE29->setFromNode("bounce");
ROUTE29->setFromField("scale_changed");
ROUTE29->setToNode("body_trans");
ROUTE29->setToField("set_scale");
Transform16->addChild(ROUTE29);

ROUTE* ROUTE30 = new ROUTE();
ROUTE30->setFromNode("bubbleClock");
ROUTE30->setFromField("fraction_changed");
ROUTE30->setToNode("bounce");
ROUTE30->setToField("set_fraction");
Transform16->addChild(ROUTE30);

ProtoBody15->addChild(Transform16);

ProtoDeclare14->setProtoBody(ProtoBody15);

Scene10->addChild(ProtoDeclare14);

ProtoInstance* ProtoInstance31 = new ProtoInstance();
ProtoInstance31->setName("Bubble");
ProtoInstance31->setDEF("bubbleA");
Scene10->addChild(ProtoInstance31);

ProtoInstance* ProtoInstance32 = new ProtoInstance();
ProtoInstance32->setName("Bubble");
ProtoInstance32->setDEF("bubbleB");
Scene10->addChild(ProtoInstance32);

ProtoInstance* ProtoInstance33 = new ProtoInstance();
ProtoInstance33->setName("Bubble");
ProtoInstance33->setDEF("bubbleC");
Scene10->addChild(ProtoInstance33);

ProtoInstance* ProtoInstance34 = new ProtoInstance();
ProtoInstance34->setName("Bubble");
ProtoInstance34->setDEF("bubbleD");
Scene10->addChild(ProtoInstance34);

X3D0->setScene(Scene10);

X3D0->toXMLString();
}
