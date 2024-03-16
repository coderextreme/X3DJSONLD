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
X3D0->setVersion(CString("3.0"));
X3D0->setProfile(CString("Immersive"));
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName(CString("title"));
meta2->setContent(CString("Scripting.x3d"));
head1->addMeta(meta2);

X3D0->setHead(head1);

Scene* Scene3 = new Scene();
Script* Script4 = new Script();
Script4->setDEF(CString("OpenVault"));
field* field5 = new field();
field5->setName(CString("openVault"));
field5->setType(CString("SFTime"));
field5->setAccessType(CString("inputOnly"));
Script4->addChild(field5);

field* field6 = new field();
field6->setName(CString("combinationEntered"));
field6->setType(CString("SFBool"));
field6->setAccessType(CString("inputOnly"));
Script4->addChild(field6);

field* field7 = new field();
field7->setName(CString("vaultUnlocked"));
field7->setType(CString("SFTime"));
field7->setAccessType(CString("outputOnly"));
Script4->addChild(field7);

field* field8 = new field();
field8->setName(CString("unlocked"));
field8->setType(CString("SFBool"));
field8->setValue(CString("false"));
field8->setAccessType(CString("initializeOnly"));
Script4->addChild(field8);


Script4->setSourceCode(CString("ecmascript:")+
_T("      function combinationEntered (value) {")+
_T("        unlocked = value;")+
_T("      }")+
_T("      function openVault(value) {")+
_T("      if (unlocked) vaultUnlocked = value;")+
_T("      }"));
Scene3->addChild(Script4);

Shape* Shape9 = new Shape();
Appearance* Appearance10 = new Appearance();
Material* Material11 = new Material();
Material11->setDiffuseColor(new float[3]{1,0,0});
Appearance10->addChild(Material11);

Shape9->addChild(Appearance10);

Sphere* Sphere12 = new Sphere();
Shape9->setGeometry(Sphere12);

Scene3->addChild(Shape9);

Sound* Sound13 = new Sound();
Sound13->setMaxBack(1000);
Sound13->setMaxFront(1000);
Sound13->setMinBack(1000);
Sound13->setMinFront(1000);
AudioClip* AudioClip14 = new AudioClip();
AudioClip14->setDEF(CString("Click"));
AudioClip14->setStopTime(1);
AudioClip14->setDescription(CString("clicking sound"));
AudioClip14->setUrl(new CString[1]{CString("../resources/chandubabamusic1.wav")}, 1);
Sound13->setSource(AudioClip14);

Scene3->addChild(Sound13);

TouchSensor* TouchSensor15 = new TouchSensor();
TouchSensor15->setDEF(CString("TS"));
Scene3->addChild(TouchSensor15);

ROUTE* ROUTE16 = new ROUTE();
ROUTE16->setFromNode(CString("TS"));
ROUTE16->setFromField(CString("isOver"));
ROUTE16->setToNode(CString("OpenVault"));
ROUTE16->setToField(CString("combinationEntered"));
Scene3->addChild(ROUTE16);

ROUTE* ROUTE17 = new ROUTE();
ROUTE17->setFromNode(CString("TS"));
ROUTE17->setFromField(CString("touchTime"));
ROUTE17->setToNode(CString("OpenVault"));
ROUTE17->setToField(CString("openVault"));
Scene3->addChild(ROUTE17);

ROUTE* ROUTE18 = new ROUTE();
ROUTE18->setFromNode(CString("OpenVault"));
ROUTE18->setFromField(CString("vaultUnlocked"));
ROUTE18->setToNode(CString("Click"));
ROUTE18->setToField(CString("startTime"));
Scene3->addChild(ROUTE18);

X3D0->setScene(Scene3);

}
