
#include <Inventor/nodes/SoCone.h>
#include <Inventor/nodes/SoBaseColor.h>
#include <Inventor/nodes/SoSeparator.h>
#include <Inventor/nodes/SoShape.h>
#include <Inventor/nodes/SoTransform.h>
#include <Inventor/nodes/SoSphere.h>
#include <Inventor/nodes/SoMaterial.h>
#include <Inventor/misc/SoProtoInstance.h>
#include <Inventor/VRMLnodes/SoVRMLAppearance.h>
#include <Quarter/Quarter.h>
#include <Quarter/QuarterWidget.h>
#include <QApplication>
#include <QMainWindow>

using namespace SIM::Coin3D::Quarter;
int main(int argc, char ** argv) 
{

  QApplication app(argc, argv);
  Quarter::init();

  SoSeparator * root = new SoSeparator;
  root->ref();

  SoBaseColor * col = new SoBaseColor;
  col->rgb = SbColor(1, 1, 0);
  root->addChild(col);

  root->addChild(new SoCone);

  QMainWindow * mainwin = new QMainWindow();

  QuarterWidget * viewer = new QuarterWidget(mainwin);
  viewer->setNavigationModeFile();
  mainwin->setCentralWidget(viewer);
  viewer->setSceneGraph(root);

  mainwin->show();
  app.exec();
  root->unref();
  delete viewer;

  Quarter::clean();
SoSceneManager* SoSceneManager0 = new SoSceneManager();
SoSceneManager0->setVersion(QString("4.0"));
SoSceneManager0->setProfile(QString("Immersive"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("Scripting.x3d"));
Sohead1->addMeta(*Someta2);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode3 = new SoNode();
SoScript* SoScript4 = new SoScript();
SoScript4->setDEF(QString("OpenVault"));
Sofield* Sofield5 = new Sofield();
Sofield5->setName(QString("openVault"));
Sofield5->setType(QString("SFTime"));
Sofield5->setAccessType(QString("inputOnly"));
SoScript4->addChild(*Sofield5);

Sofield* Sofield6 = new Sofield();
Sofield6->setName(QString("combinationEntered"));
Sofield6->setType(QString("SFBool"));
Sofield6->setAccessType(QString("inputOnly"));
SoScript4->addChild(*Sofield6);

Sofield* Sofield7 = new Sofield();
Sofield7->setName(QString("vaultUnlocked"));
Sofield7->setType(QString("SFTime"));
Sofield7->setAccessType(QString("outputOnly"));
SoScript4->addChild(*Sofield7);

Sofield* Sofield8 = new Sofield();
Sofield8->setName(QString("unlocked"));
Sofield8->setType(QString("SFBool"));
Sofield8->setValue(QString("false"));
Sofield8->setAccessType(QString("initializeOnly"));
SoScript4->addChild(*Sofield8);


//SoScript4->setSourceCode(QString("ecmascript:")+
//_T("      function combinationEntered (value) {")+
//_T("        unlocked = value;")+
//_T("      }")+
//_T("      function openVault(value) {")+
//_T("      if (unlocked) vaultUnlocked = value;")+
//_T("      }"));
SoNode3->addChild(*SoScript4);

SoShape* SoShape9 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance10 = new SoVRMLAppearance();
SoMaterial* SoMaterial11 = new SoMaterial();
SoMaterial11->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance10->addChild(*SoMaterial11);

SoShape9->addChild(*SoVRMLAppearance10);

SoSphere* SoSphere12 = new SoSphere();
SoShape9->setGeometry(*SoSphere12);

SoNode3->addChild(*SoShape9);

SoSound* SoSound13 = new SoSound();
SoSound13->setMaxBack(1000);
SoSound13->setMaxFront(1000);
SoSound13->setMinBack(1000);
SoSound13->setMinFront(1000);
SoAudioClip* SoAudioClip14 = new SoAudioClip();
SoAudioClip14->setDEF(QString("Click"));
SoAudioClip14->setStopTime(1);
SoAudioClip14->setDescription(QString("clicking sound"));
SoAudioClip14->setUrl(new QString[]{QString("../resources/chandubabamusic1.wav")}, 1);
SoSound13->setSource(*SoAudioClip14);

SoNode3->addChild(*SoSound13);

SoTouchSensor* SoTouchSensor15 = new SoTouchSensor();
SoTouchSensor15->setDEF(QString("TS"));
SoNode3->addChild(*SoTouchSensor15);

SoROUTE* SoROUTE16 = new SoROUTE();
SoROUTE16->setFromNode(QString("TS"));
SoROUTE16->setFromField(QString("isOver"));
SoROUTE16->setToNode(QString("OpenVault"));
SoROUTE16->setToField(QString("combinationEntered"));
SoNode3->addChild(*SoROUTE16);

SoROUTE* SoROUTE17 = new SoROUTE();
SoROUTE17->setFromNode(QString("TS"));
SoROUTE17->setFromField(QString("touchTime"));
SoROUTE17->setToNode(QString("OpenVault"));
SoROUTE17->setToField(QString("openVault"));
SoNode3->addChild(*SoROUTE17);

SoROUTE* SoROUTE18 = new SoROUTE();
SoROUTE18->setFromNode(QString("OpenVault"));
SoROUTE18->setFromField(QString("vaultUnlocked"));
SoROUTE18->setToNode(QString("Click"));
SoROUTE18->setToField(QString("startTime"));
SoNode3->addChild(*SoROUTE18);

SoSceneManager0->setSceneGraph(*SoNode3);

return 0;
}
