
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
SoSceneManager0->setVersion(QString("4.0"));
Sohead* Sohead1 = new Sohead();
Socomponent* Socomponent2 = new Socomponent();
Socomponent2->setName(QString("Geospatial"));
Socomponent2->setLevel(1);
Sohead1->addChild(*Socomponent2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("title"));
Someta3->setContent(QString("geobubbles.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("generator"));
Someta5->setContent(QString("manual"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("identifier"));
Someta6->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("description"));
Someta7->setContent(QString("geo bubbles"));
Sohead1->addMeta(*Someta7);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode8 = new SoNode();
//Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/
//PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/
SoGeoViewpoint* SoGeoViewpoint9 = new SoGeoViewpoint();
SoGeoViewpoint9->setDEF(QString("Tour"));
SoGeoViewpoint9->setPosition(new double[]{0.0,0.0,4.0});
SoGeoViewpoint9->setOrientation(new float[]{1.0,0.0,0.0,0.0});
SoGeoViewpoint9->setDescription(QString("Tour Views"));
SoNode8->addChild(*SoGeoViewpoint9);

SoBackground* SoBackground10 = new SoBackground();
SoBackground10->setBackUrl(new QString[]{QString("../resources/images/BK.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png")}, 2);
SoBackground10->setBottomUrl(new QString[]{QString("../resources/images/BT.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png")}, 2);
SoBackground10->setFrontUrl(new QString[]{QString("../resources/images/FR.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png")}, 2);
SoBackground10->setLeftUrl(new QString[]{QString("../resources/images/LF.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png")}, 2);
SoBackground10->setRightUrl(new QString[]{QString("../resources/images/RT.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png")}, 2);
SoBackground10->setTopUrl(new QString[]{QString("../resources/images/TP.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png")}, 2);
SoNode8->addChild(*SoBackground10);

SoTransform* SoTransform11 = new SoTransform();
SoShape* SoShape12 = new SoShape();
SoSphere* SoSphere13 = new SoSphere();
SoShape12->setGeometry(*SoSphere13);

SoVRMLAppearance* SoVRMLAppearance14 = new SoVRMLAppearance();
SoMaterial* SoMaterial15 = new SoMaterial();
SoMaterial15->setDiffuseColor(new float[]{0.7,0.7,0.7});
SoMaterial15->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance14->addChild(*SoMaterial15);

SoShape12->addChild(*SoVRMLAppearance14);

SoTransform11->addChild(*SoShape12);

SoNode8->addChild(*SoTransform11);

SoTimeSensor* SoTimeSensor16 = new SoTimeSensor();
SoTimeSensor16->setDEF(QString("TourTime"));
SoTimeSensor16->setCycleInterval(5);
SoTimeSensor16->setLoop(true);
SoNode8->addChild(*SoTimeSensor16);

SoGeoPositionInterpolator* SoGeoPositionInterpolator17 = new SoGeoPositionInterpolator();
SoGeoPositionInterpolator17->setDEF(QString("TourPosition"));
SoGeoPositionInterpolator17->setKey(new float[]{0.0,1.0}, 2);
SoGeoPositionInterpolator17->setKeyValue(new double[]{0.0015708,0.0,4.0,0.0,0.0015708,4.0}, 6);
SoNode8->addChild(*SoGeoPositionInterpolator17);

SoScript* SoScript18 = new SoScript();
SoScript18->setDEF(QString("RandomTourTime"));
Sofield* Sofield19 = new Sofield();
Sofield19->setName(QString("set_cycle"));
Sofield19->setAccessType(QString("inputOnly"));
Sofield19->setType(QString("SFTime"));
SoScript18->addChild(*Sofield19);

Sofield* Sofield20 = new Sofield();
Sofield20->setName(QString("val"));
Sofield20->setAccessType(QString("inputOutput"));
Sofield20->setType(QString("SFFloat"));
Sofield20->setValue(QString("0"));
SoScript18->addChild(*Sofield20);

Sofield* Sofield21 = new Sofield();
Sofield21->setName(QString("positions"));
Sofield21->setAccessType(QString("inputOutput"));
Sofield21->setType(QString("MFVec3d"));
Sofield21->setValue(QString("0.0015708 0 4 0 0.0015708 4"));
SoScript18->addChild(*Sofield21);

Sofield* Sofield22 = new Sofield();
Sofield22->setName(QString("position"));
Sofield22->setAccessType(QString("inputOutput"));
Sofield22->setType(QString("MFVec3d"));
Sofield22->setValue(QString("0.0015708 0 4 0 0.0015708 4"));
SoScript18->addChild(*Sofield22);


//SoScript18->setSourceCode(QString("ecmascript:")+
//_T("               function set_cycle(value) {")+
//_T("                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo")+
//_T("                        var ov = val;")+
//_T("			// Browser.print('old '+ov);")+
//_T("                        do {")+
//_T("                                val = Math.floor(Math.random()*2);")+
//_T("                                var vc = val;")+
//_T("                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);")+
//_T("                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);")+
//_T("			// Browser.println(positions[ov]);")+
//_T("			// Browser.println(positions[vc]);")+
//_T("                        position = new MFVec3d();")+
//_T("                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);")+
//_T("                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);")+
//_T("               }"));
SoNode8->addChild(*SoScript18);

SoROUTE* SoROUTE23 = new SoROUTE();
SoROUTE23->setFromNode(QString("TourTime"));
SoROUTE23->setFromField(QString("cycleTime"));
SoROUTE23->setToNode(QString("RandomTourTime"));
SoROUTE23->setToField(QString("set_cycle"));
SoNode8->addChild(*SoROUTE23);

SoROUTE* SoROUTE24 = new SoROUTE();
SoROUTE24->setFromNode(QString("RandomTourTime"));
SoROUTE24->setFromField(QString("position"));
SoROUTE24->setToNode(QString("TourPosition"));
SoROUTE24->setToField(QString("keyValue"));
SoNode8->addChild(*SoROUTE24);

SoROUTE* SoROUTE25 = new SoROUTE();
SoROUTE25->setFromNode(QString("TourTime"));
SoROUTE25->setFromField(QString("fraction_changed"));
SoROUTE25->setToNode(QString("TourPosition"));
SoROUTE25->setToField(QString("set_fraction"));
SoNode8->addChild(*SoROUTE25);

SoROUTE* SoROUTE26 = new SoROUTE();
SoROUTE26->setFromNode(QString("TourPosition"));
SoROUTE26->setFromField(QString("geovalue_changed"));
SoROUTE26->setToNode(QString("Tour"));
SoROUTE26->setToField(QString("set_position"));
SoNode8->addChild(*SoROUTE26);

SoSceneManager0->setSceneGraph(*SoNode8);

return 0;
}
