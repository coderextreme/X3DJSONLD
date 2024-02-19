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
X3D0->setVersion("3.0");
X3D0->setProfile("Immersive");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("Scripting.x3d");
head1->addMeta(*meta2);

X3D0->setHead(*head1);

CScene* Scene3 = new CScene();
CScript* Script4 = (CScript *)(m_pScene.createNode("Script"));
Script4->setDEF("OpenVault");
Cfield* field5 = new Cfield();
field5->setName("openVault");
field5->setType("SFTime");
field5->setAccessType("inputOnly");
Script4->addField(*field5);

Cfield* field6 = new Cfield();
field6->setName("combinationEntered");
field6->setType("SFBool");
field6->setAccessType("inputOnly");
Script4->addField(*field6);

Cfield* field7 = new Cfield();
field7->setName("vaultUnlocked");
field7->setType("SFTime");
field7->setAccessType("outputOnly");
Script4->addField(*field7);

Cfield* field8 = new Cfield();
field8->setName("unlocked");
field8->setType("SFBool");
field8->setValue("false");
field8->setAccessType("initializeOnly");
Script4->addField(*field8);


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
group->addChildren(*Script4);

CShape* Shape9 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance10 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material11 = (CMaterial *)(m_pScene.createNode("Material"));
Material11->setDiffuseColor(new float[3]{1,0,0});
Appearance10->setMaterial(*Material11);

Shape9->setAppearance(*Appearance10);

CSphere* Sphere12 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape9->setGeometry(Sphere12);

group->addChildren(*Shape9);

CSound* Sound13 = (CSound *)(m_pScene.createNode("Sound"));
Sound13->setMaxBack(1000);
Sound13->setMaxFront(1000);
Sound13->setMinBack(1000);
Sound13->setMinFront(1000);
CAudioClip* AudioClip14 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip14->setDEF("Click");
AudioClip14->setStopTime(1);
AudioClip14->setDescription("clicking sound");
AudioClip14->setUrl(new CString[1]{"../resources/chandubabamusic1.wav"}, 1);
Sound13->setSource(*AudioClip14);

group->addChildren(*Sound13);

CTouchSensor* TouchSensor15 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor15->setDEF("TS");
group->addChildren(*TouchSensor15);

CROUTE* ROUTE16 = new CROUTE();
ROUTE16->setFromNode("TS");
ROUTE16->setFromField("isOver");
ROUTE16->setToNode("OpenVault");
ROUTE16->setToField("combinationEntered");
group->addChildren(*ROUTE16);

CROUTE* ROUTE17 = new CROUTE();
ROUTE17->setFromNode("TS");
ROUTE17->setFromField("touchTime");
ROUTE17->setToNode("OpenVault");
ROUTE17->setToField("openVault");
group->addChildren(*ROUTE17);

CROUTE* ROUTE18 = new CROUTE();
ROUTE18->setFromNode("OpenVault");
ROUTE18->setFromField("vaultUnlocked");
ROUTE18->setToNode("Click");
ROUTE18->setToField("startTime");
group->addChildren(*ROUTE18);

X3D0->setScene(*Scene3);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
