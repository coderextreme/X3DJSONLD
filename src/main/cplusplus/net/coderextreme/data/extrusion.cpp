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
X3D0->setVersion("4.0");
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName("creator");
meta2->setContent("John W Carlson");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("created");
meta3->setContent("December 13 2015");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("title");
meta4->setContent("extrusion.x3d");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("identifier");
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("description");
meta6->setContent("beginnings of a force directed graph in 3D");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("generator");
meta7->setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta7);

X3D0->setHead(head1);

Scene* Scene8 = new Scene();
Group* Group9 = new Group();
Shape* Shape10 = new Shape();
Extrusion* Extrusion11 = new Extrusion();
Extrusion11->setDEF("extrusion");
Extrusion11->setSpine(new float[6]{-50,-50,0,50,50,0});
Extrusion11->setCreaseAngle(0.785);
Extrusion11->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
Shape10->setGeometry(Extrusion11);

Appearance* Appearance12 = new Appearance();
Material* Material13 = new Material();
Material13->setDiffuseColor(new float[3]{0,1,0});
Appearance12->setMaterial(Material13);

Shape10->setAppearance(Appearance12);

Group9->addChild(Shape10);

TimeSensor* TimeSensor14 = new TimeSensor();
TimeSensor14->setDEF("TourTime");
TimeSensor14->setLoop(True);
Group9->addChild(TimeSensor14);

Script* Script15 = new Script();
Script15->setDEF("MoveCylinder");
field* field16 = new field();
field16->setName("set_cycle");
field16->setAccessType("inputOnly");
field16->setType("SFTime");
Script15->addField(field16);

field* field17 = new field();
field17->setName("spine");
field17->setAccessType("inputOutput");
field17->setType("MFVec3f");
field17->setValue("-50 -50 0 50 50 0");
Script15->addField(field17);


Script15.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_cycle(value) {\n"+
"                        Browser.print(value);\n"+
"                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);\n"+
"                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);\n"+
"		        spine = new MFVec3f([endA, endB]);\n"+
"                }`)
Group9->addChild(Script15);

ROUTE* ROUTE18 = new ROUTE();
ROUTE18->setFromNode("TourTime");
ROUTE18->setFromField("cycleTime");
ROUTE18->setToNode("MoveCylinder");
ROUTE18->setToField("set_cycle");
Group9->addChild(ROUTE18);

ROUTE* ROUTE19 = new ROUTE();
ROUTE19->setFromNode("MoveCylinder");
ROUTE19->setFromField("spine_changed");
ROUTE19->setToNode("extrusion");
ROUTE19->setToField("set_spine");
Group9->addChild(ROUTE19);

Scene8->addChild(Group9);

X3D0->setScene(Scene8);

X3D0->toXMLString();
}
