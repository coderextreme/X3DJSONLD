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
X3D0->setVersion("3.0");
X3D0->setProfile("Immersive");
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName("title");
meta2->setContent("Scripting.x3d");
head1->addMeta(meta2);

X3D0->setHead(head1);

Scene* Scene3 = new Scene();
Script* Script4 = new Script();
Script4->setDEF("OpenVault");
field* field5 = new field();
field5->setName("openVault");
field5->setType("SFTime");
field5->setAccessType("inputOnly");
Script4->addField(field5);

field* field6 = new field();
field6->setName("combinationEntered");
field6->setType("SFBool");
field6->setAccessType("inputOnly");
Script4->addField(field6);

field* field7 = new field();
field7->setName("vaultUnlocked");
field7->setType("SFTime");
field7->setAccessType("outputOnly");
Script4->addField(field7);

field* field8 = new field();
field8->setName("unlocked");
field8->setType("SFBool");
field8->setValue("false");
field8->setAccessType("initializeOnly");
Script4->addField(field8);


Script4.setSourceCode(`ecmascript:\n"+
"\n"+
"      function combinationEntered (value) {\n"+
"\n"+
"        unlocked = value;\n"+
"\n"+
"      }\n"+
"\n"+
"      function openVault(value) {\n"+
"\n"+
"      if (unlocked) vaultUnlocked = value;\n"+
"\n"+
"      }`)
Scene3->addChild(Script4);

Shape* Shape9 = new Shape();
Appearance* Appearance10 = new Appearance();
Material* Material11 = new Material();
Material11->setDiffuseColor(new float[3]{1,0,0});
Appearance10->setMaterial(Material11);

Shape9->setAppearance(Appearance10);

Sphere* Sphere12 = new Sphere();
Shape9->setGeometry(Sphere12);

Scene3->addChild(Shape9);

Sound* Sound13 = new Sound();
Sound13->setMaxBack(1000);
Sound13->setMaxFront(1000);
Sound13->setMinBack(1000);
Sound13->setMinFront(1000);
AudioClip* AudioClip14 = new AudioClip();
AudioClip14->setDEF("Click");
AudioClip14->setStopTime(1);
AudioClip14->setDescription("clicking sound");
AudioClip14->setUrl(new String[1]{"../resources/chandubabamusic1.wav"}, 1);
Sound13->setSource(AudioClip14);

Scene3->addChild(Sound13);

TouchSensor* TouchSensor15 = new TouchSensor();
TouchSensor15->setDEF("TS");
Scene3->addChild(TouchSensor15);

ROUTE* ROUTE16 = new ROUTE();
ROUTE16->setFromNode("TS");
ROUTE16->setFromField("isOver");
ROUTE16->setToNode("OpenVault");
ROUTE16->setToField("combinationEntered");
Scene3->addChild(ROUTE16);

ROUTE* ROUTE17 = new ROUTE();
ROUTE17->setFromNode("TS");
ROUTE17->setFromField("touchTime");
ROUTE17->setToNode("OpenVault");
ROUTE17->setToField("openVault");
Scene3->addChild(ROUTE17);

ROUTE* ROUTE18 = new ROUTE();
ROUTE18->setFromNode("OpenVault");
ROUTE18->setFromField("vaultUnlocked");
ROUTE18->setToNode("Click");
ROUTE18->setToField("startTime");
Scene3->addChild(ROUTE18);

X3D0->setScene(Scene3);

X3D0->toXMLString();
}
