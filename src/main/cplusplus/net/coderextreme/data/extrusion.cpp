#ifdef WIN32
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#endif
#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile(CString("Immersive"));
X3D0->setVersion(CString("4.0"));
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName(CString("creator"));
meta2->setContent(CString("John W Carlson"));
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName(CString("created"));
meta3->setContent(CString("December 13 2015"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("title"));
meta4->setContent(CString("extrusion.x3d"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("identifier"));
meta5->setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("description"));
meta6->setContent(CString("beginnings of a force directed graph in 3D"));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("generator"));
meta7->setContent(CString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1->addMeta(meta7);

X3D0->setHead(head1);

Scene* Scene8 = new Scene();
Group* Group9 = new Group();
Shape* Shape10 = new Shape();
Extrusion* Extrusion11 = new Extrusion();
Extrusion11->setDEF(CString("extrusion"));
Extrusion11->setSpine(new float[6]{-50,-50,0,50,50,0}, 6);
Extrusion11->setCreaseAngle(0.785);
Extrusion11->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0}, 34);
Shape10->setGeometry(Extrusion11);

Appearance* Appearance12 = new Appearance();
Material* Material13 = new Material();
Material13->setDiffuseColor(new float[3]{0,1,0});
Appearance12->addChild(Material13);

Shape10->addChild(Appearance12);

Group9->addChild(Shape10);

TimeSensor* TimeSensor14 = new TimeSensor();
TimeSensor14->setDEF(CString("TourTime"));
TimeSensor14->setLoop(True);
Group9->addChild(TimeSensor14);

Script* Script15 = new Script();
Script15->setDEF(CString("MoveCylinder"));
field* field16 = new field();
field16->setName(CString("set_cycle"));
field16->setAccessType(CString("inputOnly"));
field16->setType(CString("SFTime"));
Script15->addChild(field16);

field* field17 = new field();
field17->setName(CString("spine"));
field17->setAccessType(CString("inputOutput"));
field17->setType(CString("MFVec3f"));
field17->setValue(CString("-50 -50 0 50 50 0"));
Script15->addChild(field17);


Script15->setSourceCode(CString("ecmascript:")+
_T("                function set_cycle(value) {")+
_T("                        Browser.print(value);")+
_T("                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);")+
_T("                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);")+
_T("		        spine = new MFVec3f([endA, endB]);")+
_T("                }"));
Group9->addChild(Script15);

ROUTE* ROUTE18 = new ROUTE();
ROUTE18->setFromNode(CString("TourTime"));
ROUTE18->setFromField(CString("cycleTime"));
ROUTE18->setToNode(CString("MoveCylinder"));
ROUTE18->setToField(CString("set_cycle"));
Group9->addChild(ROUTE18);

ROUTE* ROUTE19 = new ROUTE();
ROUTE19->setFromNode(CString("MoveCylinder"));
ROUTE19->setFromField(CString("spine_changed"));
ROUTE19->setToNode(CString("extrusion"));
ROUTE19->setToField(CString("set_spine"));
Group9->addChild(ROUTE19);

Scene8->addChild(Group9);

X3D0->setScene(Scene8);

}
