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
component* component2 = new component();
component2->setName("Scripting");
component2->setLevel(1);
head1->addComponent(component2);

meta* meta3 = new meta();
meta3->setName("title");
meta3->setContent("MyBounce.x3d");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("creator");
meta4->setContent("John Carlson");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("description");
meta5->setContent("3 prismatic spheres");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("identifier");
meta6->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/SFVec3f.x3d");
head1->addMeta(meta6);

X3D0->setHead(head1);

Scene* Scene7 = new Scene();
NavigationInfo* NavigationInfo8 = new NavigationInfo();
Scene7->addChild(NavigationInfo8);

Transform* Transform9 = new Transform();
Transform9->setDEF("transform");
Shape* Shape10 = new Shape();
Appearance* Appearance11 = new Appearance();
Material* Material12 = new Material();
Material12->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material12->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance11->setMaterial(Material12);

Shape10->setAppearance(Appearance11);

Sphere* Sphere13 = new Sphere();
Shape10->setGeometry(Sphere13);

Transform9->addChild(Shape10);

Scene7->addChild(Transform9);

Script* Script14 = new Script();
Script14->setDEF("Bounce2");
field* field15 = new field();
field15->setName("set_translation");
field15->setAccessType("inputOnly");
field15->setType("SFVec3f");
field15->setValue("0 0 0");
Script14->addField(field15);

field* field16 = new field();
field16->setName("translation_changed");
field16->setAccessType("outputOnly");
field16->setType("SFVec3f");
field16->setValue("0 0 0");
Script14->addField(field16);

field* field17 = new field();
field17->setName("translation");
field17->setAccessType("inputOutput");
field17->setType("SFVec3f");
field17->setValue("0 0 0");
Script14->addField(field17);

field* field18 = new field();
field18->setName("velocity");
field18->setAccessType("inputOutput");
field18->setType("SFVec3f");
field18->setValue("0 0 0");
Script14->addField(field18);

field* field19 = new field();
field19->setName("set_fraction");
field19->setAccessType("inputOnly");
field19->setType("SFTime");
Script14->addField(field19);


Script14.setSourceCode(`ecmascript:\n"+
"			function newBubble() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"				if (Math.abs(translation.x) > 10) {\n"+
"					newBubble();\n"+
"				} else if (Math.abs(translation.y) > 10) {\n"+
"					newBubble();\n"+
"				} else if (Math.abs(translation.z) > 10) {\n"+
"					newBubble();\n"+
"				} else {\n"+
"					velocity = new SFVec3f(\n"+
"						velocity.x + Math.random() * 0.2 - 0.1,\n"+
"						velocity.y + Math.random() * 0.2 - 0.1,\n"+
"						velocity.z + Math.random() * 0.2 - 0.1\n"+
"					);\n"+
"				}\n"+
"			}\n"+
"\n"+
"			function initialize() {\n"+
"			     newBubble();\n"+
"			}`)
Scene7->addChild(Script14);

TimeSensor* TimeSensor20 = new TimeSensor();
TimeSensor20->setDEF("TourTime");
TimeSensor20->setCycleInterval(0.15);
TimeSensor20->setLoop(True);
Scene7->addChild(TimeSensor20);

ROUTE* ROUTE21 = new ROUTE();
ROUTE21->setFromNode("TourTime");
ROUTE21->setFromField("cycleTime");
ROUTE21->setToNode("Bounce2");
ROUTE21->setToField("set_fraction");
Scene7->addChild(ROUTE21);

ROUTE* ROUTE22 = new ROUTE();
ROUTE22->setFromNode("Bounce2");
ROUTE22->setFromField("translation_changed");
ROUTE22->setToNode("transform");
ROUTE22->setToField("set_translation");
Scene7->addChild(ROUTE22);

X3D0->setScene(Scene7);

X3D0->toXMLString();
}
