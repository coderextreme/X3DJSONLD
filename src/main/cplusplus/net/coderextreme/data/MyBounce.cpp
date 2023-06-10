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
meta3->setContent("MyBounce.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("John Carlson");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("description");
meta5->setContent("3 prismatic spheres");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("identifier");
meta6->setContent("https://coderextreme.net/X3DJSONLD/SFVec3f.x3d");
head1->addMeta(*meta6);

X3D0->setHead(*head1);

CScene* Scene7 = new CScene();
CNavigationInfo* NavigationInfo8 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo8);

CTransform* Transform9 = (CTransform *)(m_pScene.createNode("Transform"));
Transform9->setDEF("transform");
CShape* Shape10 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance11 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material12 = (CMaterial *)(m_pScene.createNode("Material"));
Material12->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material12->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance11->setMaterial(*Material12);

Shape10->setAppearance(*Appearance11);

CSphere* Sphere13 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape10->setGeometry(Sphere13);

Transform9->addChildren(*Shape10);

group->addChildren(*Transform9);

CScript* Script14 = (CScript *)(m_pScene.createNode("Script"));
Script14->setDEF("Bounce2");
Cfield* field15 = new Cfield();
field15->setName("set_translation");
field15->setAccessType("inputOnly");
field15->setType("SFVec3f");
field15->setValue("0 0 0");
Script14->addField(*field15);

Cfield* field16 = new Cfield();
field16->setName("translation_changed");
field16->setAccessType("outputOnly");
field16->setType("SFVec3f");
field16->setValue("0 0 0");
Script14->addField(*field16);

Cfield* field17 = new Cfield();
field17->setName("translation");
field17->setAccessType("inputOutput");
field17->setType("SFVec3f");
field17->setValue("0 0 0");
Script14->addField(*field17);

Cfield* field18 = new Cfield();
field18->setName("velocity");
field18->setAccessType("inputOutput");
field18->setType("SFVec3f");
field18->setValue("0 0 0");
Script14->addField(*field18);

Cfield* field19 = new Cfield();
field19->setName("set_fraction");
field19->setAccessType("inputOnly");
field19->setType("SFTime");
Script14->addField(*field19);


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
group->addChildren(*Script14);

CTimeSensor* TimeSensor20 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor20->setDEF("TourTime");
TimeSensor20->setCycleInterval(0.15);
TimeSensor20->setLoop(True);
group->addChildren(*TimeSensor20);

CROUTE* ROUTE21 = new CROUTE();
ROUTE21->setFromNode("TourTime");
ROUTE21->setFromField("cycleTime");
ROUTE21->setToNode("Bounce2");
ROUTE21->setToField("set_fraction");
group->addChildren(*ROUTE21);

CROUTE* ROUTE22 = new CROUTE();
ROUTE22->setFromNode("Bounce2");
ROUTE22->setFromField("translation_changed");
ROUTE22->setToNode("transform");
ROUTE22->setToField("set_translation");
group->addChildren(*ROUTE22);

X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
