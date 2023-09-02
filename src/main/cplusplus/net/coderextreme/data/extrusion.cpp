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
meta2->setName("creator");
meta2->setContent("John W Carlson");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("created");
meta3->setContent("December 13 2015");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("title");
meta4->setContent("extrusion.x3d");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("identifier");
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("description");
meta6->setContent("beginnings of a force directed graph in 3D");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("generator");
meta7->setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta7);

X3D0->setHead(*head1);

CScene* Scene8 = new CScene();
CGroup* Group9 = (CGroup *)(m_pScene.createNode("Group"));
CShape* Shape10 = (CShape *)(m_pScene.createNode("Shape"));
CExtrusion* Extrusion11 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion11->setDEF("extrusion");
Extrusion11->setSpine(new float[6]{-50,-50,0,50,50,0});
Extrusion11->setCreaseAngle(0.785);
Extrusion11->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
Shape10->setGeometry(Extrusion11);

CAppearance* Appearance12 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material13 = (CMaterial *)(m_pScene.createNode("Material"));
Material13->setDiffuseColor(new float[3]{0,1,0});
Appearance12->setMaterial(*Material13);

Shape10->setAppearance(*Appearance12);

Group9->addChildren(*Shape10);

CTimeSensor* TimeSensor14 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor14->setDEF("TourTime");
TimeSensor14->setLoop(True);
Group9->addChildren(*TimeSensor14);

CScript* Script15 = (CScript *)(m_pScene.createNode("Script"));
Script15->setDEF("MoveCylinder");
Cfield* field16 = new Cfield();
field16->setName("set_cycle");
field16->setAccessType("inputOnly");
field16->setType("SFTime");
Script15->addField(*field16);

Cfield* field17 = new Cfield();
field17->setName("spine");
field17->setAccessType("inputOutput");
field17->setType("MFVec3f");
field17->setValue("-50 -50 0 50 50 0");
Script15->addField(*field17);


Script15.setSourceCode(`ecmascript:\n"+
"\n"+
"                function set_cycle(value) {\n"+
"                        Browser.print(value);\n"+
"                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);\n"+
"                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);\n"+
"		        spine = new MFVec3f([endA, endB]);\n"+
"                }`)
Group9->addChildren(*Script15);

CROUTE* ROUTE18 = new CROUTE();
ROUTE18->setFromNode("TourTime");
ROUTE18->setFromField("cycleTime");
ROUTE18->setToNode("MoveCylinder");
ROUTE18->setToField("set_cycle");
Group9->addChildren(*ROUTE18);

CROUTE* ROUTE19 = new CROUTE();
ROUTE19->setFromNode("MoveCylinder");
ROUTE19->setFromField("spine_changed");
ROUTE19->setToNode("extrusion");
ROUTE19->setToField("set_spine");
Group9->addChildren(*ROUTE19);

group->addChildren(*Group9);

X3D0->setScene(*Scene8);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
