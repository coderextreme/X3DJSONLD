
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
SoSceneManager0->setProfile(QString("Interactive"));
SoSceneManager0->setVersion(QString("4.0"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("TestCycleTimeStart.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("creator"));
Someta3->setContent(QString("Andreas"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("Joe D. Williams"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("description"));
Someta5->setContent(QString("Test design patterns for animation control."));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("10 September 2023"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("modified"));
Someta7->setContent(QString("Mon, 15 Sep 2025 05:20:59 GMT"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("reference"));
Someta8->setContent(QString("https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/TimeSensor/cycletimeIndex.html"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("reference"));
Someta9->setContent(QString("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/cycleTimeStart.x3d"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("identifier"));
Someta10->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/TestCycleTimeStart.x3d"));
Sohead1->addMeta(*Someta10);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode11 = new SoNode();
SoWorldInfo* SoWorldInfo12 = new SoWorldInfo();
SoWorldInfo12->setTitle(QString("TestCycleTimeStart.x3d"));
SoNode11->addChild(*SoWorldInfo12);

SoViewpoint* SoViewpoint13 = new SoViewpoint();
SoViewpoint13->setDescription(QString("hello in there"));
SoNode11->addChild(*SoViewpoint13);

SoTimeSensor* SoTimeSensor14 = new SoTimeSensor();
SoTimeSensor14->setDEF(QString("REDTIME1"));
SoTimeSensor14->setLoop(true);
SoTimeSensor14->setStopTime(1757913659.298);
SoNode11->addChild(*SoTimeSensor14);

SoTimeSensor* SoTimeSensor15 = new SoTimeSensor();
SoTimeSensor15->setDEF(QString("GREENTIME2"));
SoTimeSensor15->setCycleInterval(5);
SoTimeSensor15->setStartTime(1757913659.298);
SoNode11->addChild(*SoTimeSensor15);

SoTimeSensor* SoTimeSensor16 = new SoTimeSensor();
SoTimeSensor16->setDEF(QString("BLUETIME3"));
SoTimeSensor16->setCycleInterval(10);
SoNode11->addChild(*SoTimeSensor16);

SoBooleanFilter* SoBooleanFilter17 = new SoBooleanFilter();
SoBooleanFilter17->setDEF(QString("GREENFILTER"));
SoNode11->addChild(*SoBooleanFilter17);

SoTimeTrigger* SoTimeTrigger18 = new SoTimeTrigger();
SoTimeTrigger18->setDEF(QString("BLUETRIGGER"));
SoNode11->addChild(*SoTimeTrigger18);

SoTransform* SoTransform19 = new SoTransform();
SoTransform19->setDEF(QString("REDBALL"));
SoTransform19->setTranslation(new float[]{1.615999,0.0,0.0});
SoShape* SoShape20 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance21 = new SoVRMLAppearance();
SoMaterial* SoMaterial22 = new SoMaterial();
SoMaterial22->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance21->addChild(*SoMaterial22);

SoShape20->addChild(*SoVRMLAppearance21);

SoSphere* SoSphere23 = new SoSphere();
SoShape20->setGeometry(*SoSphere23);

SoTransform19->addChild(*SoShape20);

SoNode11->addChild(*SoTransform19);

SoTransform* SoTransform24 = new SoTransform();
SoTransform24->setDEF(QString("GREENBALL"));
SoShape* SoShape25 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance26 = new SoVRMLAppearance();
SoMaterial* SoMaterial27 = new SoMaterial();
SoMaterial27->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance26->addChild(*SoMaterial27);

SoShape25->addChild(*SoVRMLAppearance26);

SoSphere* SoSphere28 = new SoSphere();
SoShape25->setGeometry(*SoSphere28);

SoTransform24->addChild(*SoShape25);

SoNode11->addChild(*SoTransform24);

SoTransform* SoTransform29 = new SoTransform();
SoTransform29->setDEF(QString("BLUEBALL"));
SoShape* SoShape30 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance31 = new SoVRMLAppearance();
SoMaterial* SoMaterial32 = new SoMaterial();
SoMaterial32->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance31->addChild(*SoMaterial32);

SoShape30->addChild(*SoVRMLAppearance31);

SoSphere* SoSphere33 = new SoSphere();
SoShape30->setGeometry(*SoSphere33);

SoTransform29->addChild(*SoShape30);

SoNode11->addChild(*SoTransform29);

SoPositionInterpolator* SoPositionInterpolator34 = new SoPositionInterpolator();
SoPositionInterpolator34->setDEF(QString("REDINTERP1"));
SoPositionInterpolator34->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoPositionInterpolator34->setKeyValue(new float[]{0.0,0.0,0.0,2.0,0.0,0.0,0.0,0.0,0.0,-2.0,0.0,0.0,0.0,0.0,0.0}, 15);
SoNode11->addChild(*SoPositionInterpolator34);

SoPositionInterpolator* SoPositionInterpolator35 = new SoPositionInterpolator();
SoPositionInterpolator35->setDEF(QString("GREENINTERP2"));
SoPositionInterpolator35->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoPositionInterpolator35->setKeyValue(new float[]{0.0,0.0,0.0,0.0,2.0,0.0,0.0,0.0,0.0,0.0,-2.0,0.0,0.0,0.0,0.0}, 15);
SoNode11->addChild(*SoPositionInterpolator35);

SoPositionInterpolator* SoPositionInterpolator36 = new SoPositionInterpolator();
SoPositionInterpolator36->setDEF(QString("BLUEINTERP3"));
SoPositionInterpolator36->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoPositionInterpolator36->setKeyValue(new float[]{0.0,0.0,0.0,0.0,-2.0,0.0,0.0,0.0,0.0,0.0,2.0,0.0,0.0,0.0,0.0}, 15);
SoNode11->addChild(*SoPositionInterpolator36);

SoROUTE* SoROUTE37 = new SoROUTE();
SoROUTE37->setFromNode(QString("REDTIME1"));
SoROUTE37->setFromField(QString("cycleTime"));
SoROUTE37->setToNode(QString("REDTIME1"));
SoROUTE37->setToField(QString("set_stopTime"));
SoNode11->addChild(*SoROUTE37);

SoROUTE* SoROUTE38 = new SoROUTE();
SoROUTE38->setFromNode(QString("REDTIME1"));
SoROUTE38->setFromField(QString("stopTime_changed"));
SoROUTE38->setToNode(QString("GREENTIME2"));
SoROUTE38->setToField(QString("set_startTime"));
SoNode11->addChild(*SoROUTE38);

SoROUTE* SoROUTE39 = new SoROUTE();
SoROUTE39->setFromNode(QString("GREENTIME2"));
SoROUTE39->setFromField(QString("isActive"));
SoROUTE39->setToNode(QString("GREENFILTER"));
SoROUTE39->setToField(QString("set_boolean"));
SoNode11->addChild(*SoROUTE39);

SoROUTE* SoROUTE40 = new SoROUTE();
SoROUTE40->setFromNode(QString("GREENFILTER"));
SoROUTE40->setFromField(QString("inputFalse"));
SoROUTE40->setToNode(QString("BLUETRIGGER"));
SoROUTE40->setToField(QString("set_boolean"));
SoNode11->addChild(*SoROUTE40);

SoROUTE* SoROUTE41 = new SoROUTE();
SoROUTE41->setFromNode(QString("BLUETRIGGER"));
SoROUTE41->setFromField(QString("triggerTime"));
SoROUTE41->setToNode(QString("BLUETIME3"));
SoROUTE41->setToField(QString("set_startTime"));
SoNode11->addChild(*SoROUTE41);

SoROUTE* SoROUTE42 = new SoROUTE();
SoROUTE42->setFromNode(QString("REDTIME1"));
SoROUTE42->setFromField(QString("fraction_changed"));
SoROUTE42->setToNode(QString("REDINTERP1"));
SoROUTE42->setToField(QString("set_fraction"));
SoNode11->addChild(*SoROUTE42);

SoROUTE* SoROUTE43 = new SoROUTE();
SoROUTE43->setFromNode(QString("REDINTERP1"));
SoROUTE43->setFromField(QString("value_changed"));
SoROUTE43->setToNode(QString("REDBALL"));
SoROUTE43->setToField(QString("set_translation"));
SoNode11->addChild(*SoROUTE43);

SoROUTE* SoROUTE44 = new SoROUTE();
SoROUTE44->setFromNode(QString("GREENTIME2"));
SoROUTE44->setFromField(QString("fraction_changed"));
SoROUTE44->setToNode(QString("GREENINTERP2"));
SoROUTE44->setToField(QString("set_fraction"));
SoNode11->addChild(*SoROUTE44);

SoROUTE* SoROUTE45 = new SoROUTE();
SoROUTE45->setFromNode(QString("GREENINTERP2"));
SoROUTE45->setFromField(QString("value_changed"));
SoROUTE45->setToNode(QString("GREENBALL"));
SoROUTE45->setToField(QString("set_translation"));
SoNode11->addChild(*SoROUTE45);

SoROUTE* SoROUTE46 = new SoROUTE();
SoROUTE46->setFromNode(QString("BLUETIME3"));
SoROUTE46->setFromField(QString("fraction_changed"));
SoROUTE46->setToNode(QString("BLUEINTERP3"));
SoROUTE46->setToField(QString("set_fraction"));
SoNode11->addChild(*SoROUTE46);

SoROUTE* SoROUTE47 = new SoROUTE();
SoROUTE47->setFromNode(QString("BLUEINTERP3"));
SoROUTE47->setFromField(QString("value_changed"));
SoROUTE47->setToNode(QString("BLUEBALL"));
SoROUTE47->setToField(QString("set_translation"));
SoNode11->addChild(*SoROUTE47);

SoSceneManager0->setSceneGraph(*SoNode11);

return 0;
}
