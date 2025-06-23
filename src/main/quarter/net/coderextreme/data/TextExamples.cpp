
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
SoSceneManager0->setVersion(QString("3.0"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("TextExamples.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Show different escape-character text examples for embedded quotation marks."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("Don Brutzman"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("created"));
Someta5->setContent(QString("7 April 2001"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("modified"));
Someta6->setContent(QString("26 April 2016"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("warning"));
Someta7->setContent(QString("Note that X3D Canonicalization (C14N) will scrub alternate XML character representations, be careful to check original encoding into version control."));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("warning"));
Someta8->setContent(QString("Usually this source document needs to be inspected and edited using a plain-text editor in order to see the differences in these XML-equivalent text representations."));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("identifier"));
Someta9->setContent(QString("https://www.web3d.org/x3d/content/examples/Basic/development/TextExamples.x3d"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("generator"));
Someta10->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("license"));
Someta11->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta11);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode12 = new SoNode();
SoTransform* SoTransform13 = new SoTransform();
SoTransform13->setTranslation(new float[]{0.0,2.0,0.0});
SoShape* SoShape14 = new SoShape();
SoText* SoText15 = new SoText();
SoText15->setString(new QString[]{QString("Compare special character escaping")}, 1);
SoFontStyle* SoFontStyle16 = new SoFontStyle();
SoFontStyle16->setDEF(QString("testFontStyle"));
SoFontStyle16->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle16->setSize(0.8);
SoText15->setFontStyle(*SoFontStyle16);

SoShape14->setGeometry(*SoText15);

SoVRMLAppearance* SoVRMLAppearance17 = new SoVRMLAppearance();
SoVRMLAppearance17->setDEF(QString("LightBlueAppearance"));
SoMaterial* SoMaterial18 = new SoMaterial();
SoMaterial18->setDiffuseColor(new float[]{0.1,0.7,0.7});
SoVRMLAppearance17->addChild(*SoMaterial18);

SoShape14->addChild(*SoVRMLAppearance17);

SoTransform13->addChild(*SoShape14);

SoNode12->addChild(*SoTransform13);

SoTransform* SoTransform19 = new SoTransform();
SoTransform19->setTranslation(new float[]{-3.0,0.0,0.0});
SoShape* SoShape20 = new SoShape();
SoText* SoText21 = new SoText();
SoText21->setString(new QString[]{QString("I don't think so"), QString(""), QString("he said \"Hi\"")}, 3);
SoFontStyle* SoFontStyle22 = new SoFontStyle();
SoFontStyle22->setUSE(QString("testFontStyle"));
SoText21->setFontStyle(*SoFontStyle22);

SoShape20->setGeometry(*SoText21);

SoVRMLAppearance* SoVRMLAppearance23 = new SoVRMLAppearance();
SoVRMLAppearance23->setUSE(QString("LightBlueAppearance"));
SoShape20->addChild(*SoVRMLAppearance23);

SoTransform19->addChild(*SoShape20);

SoNode12->addChild(*SoTransform19);

SoTransform* SoTransform24 = new SoTransform();
SoTransform24->setTranslation(new float[]{3.0,0.0,0.0});
SoShape* SoShape25 = new SoShape();
SoText* SoText26 = new SoText();
SoText26->setString(new QString[]{QString("I don't think so"), QString(""), QString("he said \"Hi\"")}, 3);
SoFontStyle* SoFontStyle27 = new SoFontStyle();
SoFontStyle27->setUSE(QString("testFontStyle"));
SoText26->setFontStyle(*SoFontStyle27);

SoShape25->setGeometry(*SoText26);

SoVRMLAppearance* SoVRMLAppearance28 = new SoVRMLAppearance();
SoVRMLAppearance28->setUSE(QString("LightBlueAppearance"));
SoShape25->addChild(*SoVRMLAppearance28);

SoTransform24->addChild(*SoShape25);

SoNode12->addChild(*SoTransform24);

SoSceneManager0->setSceneGraph(*SoNode12);

return 0;
}
