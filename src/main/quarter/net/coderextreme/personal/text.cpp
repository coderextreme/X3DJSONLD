
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
SoSceneManager0->setProfile(QString("Immersive"));
SoSceneManager0->setVersion(QString("3.3"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("creator"));
Someta2->setContent(QString("John W Carlson"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("created"));
Someta3->setContent(QString("December 13 2015"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("title"));
Someta4->setContent(QString("text.x3d"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("identifier"));
Someta5->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/text.x3d"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("description"));
Someta6->setContent(QString("test \\n text"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("generator"));
Someta7->setContent(QString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta7);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode8 = new SoNode();
SoTransform* SoTransform9 = new SoTransform();
SoShape* SoShape10 = new SoShape();
SoText* SoText11 = new SoText();
SoText11->setString(new QString[]{QString("Node\"\"\"")}, 1);
SoFontStyle* SoFontStyle12 = new SoFontStyle();
SoText11->setFontStyle(*SoFontStyle12);

SoShape10->setGeometry(*SoText11);

SoVRMLAppearance* SoVRMLAppearance13 = new SoVRMLAppearance();
SoMaterial* SoMaterial14 = new SoMaterial();
SoVRMLAppearance13->addChild(*SoMaterial14);

SoShape10->addChild(*SoVRMLAppearance13);

SoTransform9->addChild(*SoShape10);

SoShape* SoShape15 = new SoShape();
SoText* SoText16 = new SoText();
SoText16->setString(new QString[]{QString("Node2"), QString("\\\\"), QString("\\\\\\\\"), QString("Node2")}, 4);
SoFontStyle* SoFontStyle17 = new SoFontStyle();
SoText16->setFontStyle(*SoFontStyle17);

SoShape15->setGeometry(*SoText16);

SoVRMLAppearance* SoVRMLAppearance18 = new SoVRMLAppearance();
SoMaterial* SoMaterial19 = new SoMaterial();
SoVRMLAppearance18->addChild(*SoMaterial19);

SoShape15->addChild(*SoVRMLAppearance18);

SoTransform9->addChild(*SoShape15);

SoShape* SoShape20 = new SoShape();
SoText* SoText21 = new SoText();
SoText21->setString(new QString[]{QString("Node3 \\\\\\\\ \\\\ "), QString("Node3\"\"\"")}, 2);
SoFontStyle* SoFontStyle22 = new SoFontStyle();
SoText21->setFontStyle(*SoFontStyle22);

SoShape20->setGeometry(*SoText21);

SoVRMLAppearance* SoVRMLAppearance23 = new SoVRMLAppearance();
SoMaterial* SoMaterial24 = new SoMaterial();
SoVRMLAppearance23->addChild(*SoMaterial24);

SoShape20->addChild(*SoVRMLAppearance23);

SoTransform9->addChild(*SoShape20);

SoScript* SoScript25 = new SoScript();
Sofield* Sofield26 = new Sofield();
Sofield26->setName(QString("frontUrls"));
Sofield26->setType(QString("MFString"));
Sofield26->setAccessType(QString("initializeOnly"));
Sofield26->setValue(QString("\"rnl_front.png\" \"uffizi_front.png\""));
SoScript25->addChild(*Sofield26);


//SoScript25->setSourceCode(QString("ecmascript:")+
//_T("			    var me = '\"1\" \"\"2\" \"\\n3\"';"));
SoTransform9->addChild(*SoScript25);

SoNode8->addChild(*SoTransform9);

SoSceneManager0->setSceneGraph(*SoNode8);

return 0;
}
