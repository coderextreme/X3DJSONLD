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
meta2->setContent("bubble.x3d");
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
meta6->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/bubble.x3d");
head1->addMeta(meta6);

X3D0->setHead(head1);

Scene* Scene7 = new Scene();
NavigationInfo* NavigationInfo8 = new NavigationInfo();
NavigationInfo8->setType(new String[1]{"EXAMINE"}, 1);
Scene7->addChild(NavigationInfo8);

Viewpoint* Viewpoint9 = new Viewpoint();
Viewpoint9->setPosition(new float[3]{0,0,4});
Viewpoint9->setOrientation(new float[4]{1,0,0,0});
Viewpoint9->setDescription("Bubble in action");
Scene7->addChild(Viewpoint9);

ProtoDeclare* ProtoDeclare10 = new ProtoDeclare();
ProtoDeclare10->setName("Bubble");
ProtoBody* ProtoBody11 = new ProtoBody();
Transform* Transform12 = new Transform();
Transform12->setDEF("transform");
Shape* Shape13 = new Shape();
Sphere* Sphere14 = new Sphere();
Sphere14->setRadius(0.25);
Shape13->setGeometry(Sphere14);

Appearance* Appearance15 = new Appearance();
Material* Material16 = new Material();
Material16->setDiffuseColor(new float[3]{1,0,0});
Material16->setTransparency(0.2);
Appearance15->setMaterial(Material16);

Shape13->setAppearance(Appearance15);

Transform12->addChild(Shape13);

Script* Script17 = new Script();
Script17->setDEF("bounce");
field* field18 = new field();
field18->setName("scale");
field18->setAccessType("inputOutput");
field18->setType("SFVec3f");
field18->setValue("1 1 1");
Script17->addField(field18);

field* field19 = new field();
field19->setName("translation");
field19->setAccessType("inputOutput");
field19->setType("SFVec3f");
field19->setValue("0 0 0");
Script17->addField(field19);

field* field20 = new field();
field20->setName("velocity");
field20->setAccessType("inputOutput");
field20->setType("SFVec3f");
field20->setValue("0 0 0");
Script17->addField(field20);

field* field21 = new field();
field21->setName("scalvel");
field21->setAccessType("inputOutput");
field21->setType("SFVec3f");
field21->setValue("0 0 0");
Script17->addField(field21);

field* field22 = new field();
field22->setName("set_fraction");
field22->setAccessType("inputOnly");
field22->setType("SFFloat");
Script17->addField(field22);


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
Transform12->addChild(Script17);

TimeSensor* TimeSensor23 = new TimeSensor();
TimeSensor23->setDEF("bubbleClock");
TimeSensor23->setCycleInterval(10);
TimeSensor23->setLoop(True);
Transform12->addChild(TimeSensor23);

ROUTE* ROUTE24 = new ROUTE();
ROUTE24->setFromNode("bounce");
ROUTE24->setFromField("translation_changed");
ROUTE24->setToNode("transform");
ROUTE24->setToField("set_translation");
Transform12->addChild(ROUTE24);

ROUTE* ROUTE25 = new ROUTE();
ROUTE25->setFromNode("bounce");
ROUTE25->setFromField("scale_changed");
ROUTE25->setToNode("transform");
ROUTE25->setToField("set_scale");
Transform12->addChild(ROUTE25);

ROUTE* ROUTE26 = new ROUTE();
ROUTE26->setFromNode("bubbleClock");
ROUTE26->setFromField("fraction_changed");
ROUTE26->setToNode("bounce");
ROUTE26->setToField("set_fraction");
Transform12->addChild(ROUTE26);

ProtoBody11->addChild(Transform12);

ProtoDeclare10->setProtoBody(ProtoBody11);

Scene7->addChild(ProtoDeclare10);

ProtoInstance* ProtoInstance27 = new ProtoInstance();
ProtoInstance27->setName("Bubble");
ProtoInstance27->setDEF("bubbleA");
Scene7->addChild(ProtoInstance27);

X3D0->setScene(Scene7);

X3D0->toXMLString();
}
