
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
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("MaskAndSnorkel.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Diving mask and snorkel tube."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("Etsuko Lippi"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("created"));
Someta5->setContent(QString("January 24, 2001"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("modified"));
Someta6->setContent(QString("23 May 2020"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("identifier"));
Someta7->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("generator"));
Someta8->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("license"));
Someta9->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta9);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode10 = new SoNode();
SoWorldInfo* SoWorldInfo11 = new SoWorldInfo();
SoWorldInfo11->setTitle(QString("MaskAndSnorkel.x3d"));
SoNode10->addChild(*SoWorldInfo11);

SoBackground* SoBackground12 = new SoBackground();
SoBackground12->setSkyColor(new float[]{0.0,0.0,0.9}, 3);
SoNode10->addChild(*SoBackground12);

SoTransform* SoTransform13 = new SoTransform();
SoTransform13->setDEF(QString("maskAndSnorkel"));
SoTransform* SoTransform14 = new SoTransform();
SoShape* SoShape15 = new SoShape();
SoShape15->setDEF(QString("maskFrame"));
SoVRMLAppearance* SoVRMLAppearance16 = new SoVRMLAppearance();
SoMaterial* SoMaterial17 = new SoMaterial();
SoMaterial17->setDEF(QString("frameColor"));
SoMaterial17->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoVRMLAppearance16->addChild(*SoMaterial17);

SoShape15->addChild(*SoVRMLAppearance16);

SoIndexedFaceSet* SoIndexedFaceSet18 = new SoIndexedFaceSet();
SoIndexedFaceSet18->setCoordIndex(new int32_t[]{0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1}, 80);
SoIndexedFaceSet18->setCreaseAngle(1.45);
SoIndexedFaceSet18->setSolid(false);
SoCoordinate* SoCoordinate19 = new SoCoordinate();
SoCoordinate19->setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0}, 78);
SoIndexedFaceSet18->setCoord(*SoCoordinate19);

SoShape15->setGeometry(*SoIndexedFaceSet18);

SoTransform14->addChild(*SoShape15);

SoTransform13->addChild(*SoTransform14);

SoTransform* SoTransform20 = new SoTransform();
SoTransform20->setDEF(QString("snorkelHoldRing"));
SoTransform20->setTranslation(new float[]{0.075,0.075,-0.02});
SoShape* SoShape21 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance22 = new SoVRMLAppearance();
SoMaterial* SoMaterial23 = new SoMaterial();
SoMaterial23->setUSE(QString("frameColor"));
SoVRMLAppearance22->addChild(*SoMaterial23);

SoShape21->addChild(*SoVRMLAppearance22);

SoCylinder* SoCylinder24 = new SoCylinder();
SoCylinder24->setHeight(0.003);
SoCylinder24->setRadius(0.015);
SoShape21->setGeometry(*SoCylinder24);

SoTransform20->addChild(*SoShape21);

SoTransform13->addChild(*SoTransform20);

SoGroup* SoGroup25 = new SoGroup();
SoGroup25->setDEF(QString("snorkel"));
SoTransform* SoTransform26 = new SoTransform();
SoTransform26->setTranslation(new float[]{0.0,-0.02,0.0});
SoTransform* SoTransform27 = new SoTransform();
SoTransform27->setScale(new float[]{0.9,0.9,0.9});
SoTransform27->setTranslation(new float[]{0.035,-0.07,-0.02});
SoShape* SoShape28 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance29 = new SoVRMLAppearance();
SoMaterial* SoMaterial30 = new SoMaterial();
SoMaterial30->setDEF(QString("snorkelTube"));
SoMaterial30->setDiffuseColor(new float[]{0.678,1.0,0.184});
SoMaterial30->setTransparency(0.4);
SoVRMLAppearance29->addChild(*SoMaterial30);

SoShape28->addChild(*SoVRMLAppearance29);

SoExtrusion* SoExtrusion31 = new SoExtrusion();
SoExtrusion31->setCrossSection(new float[]{0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0.0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0.0,0.013}, 34);
SoExtrusion31->setSpine(new float[]{-0.01,-0.04,0.0,0.0,0.0,0.0,0.03,0.05,0.0,0.05,0.2,0.0,0.03,0.4,0.03}, 15);
SoShape28->setGeometry(*SoExtrusion31);

SoTransform27->addChild(*SoShape28);

SoTransform26->addChild(*SoTransform27);

SoTransform* SoTransform32 = new SoTransform();
SoTransform32->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoTransform32->setScale(new float[]{0.9,0.9,0.9});
SoTransform32->setTranslation(new float[]{0.01,-0.04,-0.02});
SoShape* SoShape33 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance34 = new SoVRMLAppearance();
SoMaterial* SoMaterial35 = new SoMaterial();
SoMaterial35->setDEF(QString("Mouthpiece"));
SoMaterial35->setDiffuseColor(new float[]{0.678,1.0,0.8});
SoMaterial35->setTransparency(0.4);
SoVRMLAppearance34->addChild(*SoMaterial35);

SoShape33->addChild(*SoVRMLAppearance34);

SoExtrusion* SoExtrusion36 = new SoExtrusion();
SoExtrusion36->setCrossSection(new float[]{0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0.0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0.0,0.013}, 34);
SoExtrusion36->setSpine(new float[]{-0.01,-0.03,0.0,0.0,0.0,0.0,0.02,0.01,0.0}, 9);
SoShape33->setGeometry(*SoExtrusion36);

SoTransform32->addChild(*SoShape33);

SoTransform26->addChild(*SoTransform32);

SoTransform* SoTransform37 = new SoTransform();
SoTransform37->setRotation(new float[]{0.0,0.0,1.0,-0.85});
SoTransform37->setScale(new float[]{0.9,0.9,0.9});
SoTransform37->setTranslation(new float[]{0.005,-0.01,-0.02});
SoShape* SoShape38 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance39 = new SoVRMLAppearance();
SoMaterial* SoMaterial40 = new SoMaterial();
SoMaterial40->setUSE(QString("Mouthpiece"));
SoVRMLAppearance39->addChild(*SoMaterial40);

SoShape38->addChild(*SoVRMLAppearance39);

SoExtrusion* SoExtrusion41 = new SoExtrusion();
SoExtrusion41->setCrossSection(new float[]{0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.0,0.013}, 18);
SoExtrusion41->setSpine(new float[]{-0.02,-0.03,0.0,-0.01,-0.03,0.0,0.0,-0.0175,0.0,0.0,-0.0135,0.0,-0.01,0.0,0.0,-0.02,0.0,0.0}, 18);
SoShape38->setGeometry(*SoExtrusion41);

SoTransform37->addChild(*SoShape38);

SoTransform26->addChild(*SoTransform37);

SoGroup25->addChild(*SoTransform26);

SoTransform13->addChild(*SoGroup25);

SoTransform* SoTransform42 = new SoTransform();
SoShape* SoShape43 = new SoShape();
SoShape43->setDEF(QString("maskLensR"));
SoVRMLAppearance* SoVRMLAppearance44 = new SoVRMLAppearance();
SoMaterial* SoMaterial45 = new SoMaterial();
SoMaterial45->setDEF(QString("plastic"));
SoMaterial45->setDiffuseColor(new float[]{0.941,0.973,1.0});
SoMaterial45->setTransparency(0.8);
SoVRMLAppearance44->addChild(*SoMaterial45);

SoShape43->addChild(*SoVRMLAppearance44);

SoIndexedFaceSet* SoIndexedFaceSet46 = new SoIndexedFaceSet();
SoIndexedFaceSet46->setCoordIndex(new int32_t[]{12,13,14,15,16,17,18,12,-1}, 9);
SoIndexedFaceSet46->setCreaseAngle(1.45);
SoIndexedFaceSet46->setSolid(false);
SoCoordinate* SoCoordinate47 = new SoCoordinate();
SoCoordinate47->setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0}, 78);
SoIndexedFaceSet46->setCoord(*SoCoordinate47);

SoShape43->setGeometry(*SoIndexedFaceSet46);

SoTransform42->addChild(*SoShape43);

SoTransform13->addChild(*SoTransform42);

SoTransform* SoTransform48 = new SoTransform();
SoShape* SoShape49 = new SoShape();
SoShape49->setDEF(QString("maskLensL"));
SoVRMLAppearance* SoVRMLAppearance50 = new SoVRMLAppearance();
SoMaterial* SoMaterial51 = new SoMaterial();
SoMaterial51->setUSE(QString("plastic"));
SoVRMLAppearance50->addChild(*SoMaterial51);

SoShape49->addChild(*SoVRMLAppearance50);

SoIndexedFaceSet* SoIndexedFaceSet52 = new SoIndexedFaceSet();
SoIndexedFaceSet52->setCoordIndex(new int32_t[]{19,20,21,22,23,24,25,19,-1}, 9);
SoIndexedFaceSet52->setCreaseAngle(1.45);
SoIndexedFaceSet52->setSolid(false);
SoCoordinate* SoCoordinate53 = new SoCoordinate();
SoCoordinate53->setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0}, 78);
SoIndexedFaceSet52->setCoord(*SoCoordinate53);

SoShape49->setGeometry(*SoIndexedFaceSet52);

SoTransform48->addChild(*SoShape49);

SoTransform13->addChild(*SoTransform48);

SoTransform* SoTransform54 = new SoTransform();
SoShape* SoShape55 = new SoShape();
SoShape55->setDEF(QString("nose"));
SoVRMLAppearance* SoVRMLAppearance56 = new SoVRMLAppearance();
SoMaterial* SoMaterial57 = new SoMaterial();
SoMaterial57->setDEF(QString("plasticFit"));
SoMaterial57->setDiffuseColor(new float[]{0.678,1.0,0.184});
SoMaterial57->setTransparency(0.7);
SoVRMLAppearance56->addChild(*SoMaterial57);

SoShape55->addChild(*SoVRMLAppearance56);

SoIndexedFaceSet* SoIndexedFaceSet58 = new SoIndexedFaceSet();
SoIndexedFaceSet58->setCoordIndex(new int32_t[]{0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1}, 25);
SoIndexedFaceSet58->setCreaseAngle(1.45);
SoIndexedFaceSet58->setSolid(false);
SoCoordinate* SoCoordinate59 = new SoCoordinate();
SoCoordinate59->setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0,0.0,0.04,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0.0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02}, 114);
SoIndexedFaceSet58->setCoord(*SoCoordinate59);

SoShape55->setGeometry(*SoIndexedFaceSet58);

SoTransform54->addChild(*SoShape55);

SoTransform13->addChild(*SoTransform54);

SoTransform* SoTransform60 = new SoTransform();
SoShape* SoShape61 = new SoShape();
SoShape61->setDEF(QString("faceFit"));
SoVRMLAppearance* SoVRMLAppearance62 = new SoVRMLAppearance();
SoMaterial* SoMaterial63 = new SoMaterial();
SoMaterial63->setUSE(QString("plasticFit"));
SoVRMLAppearance62->addChild(*SoMaterial63);

SoShape61->addChild(*SoVRMLAppearance62);

SoIndexedFaceSet* SoIndexedFaceSet64 = new SoIndexedFaceSet();
SoIndexedFaceSet64->setCoordIndex(new int32_t[]{1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1}, 60);
SoIndexedFaceSet64->setCreaseAngle(1.45);
SoIndexedFaceSet64->setSolid(false);
SoCoordinate* SoCoordinate65 = new SoCoordinate();
SoCoordinate65->setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0,0.0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0.0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02}, 114);
SoIndexedFaceSet64->setCoord(*SoCoordinate65);

SoShape61->setGeometry(*SoIndexedFaceSet64);

SoTransform60->addChild(*SoShape61);

SoTransform13->addChild(*SoTransform60);

SoTransform* SoTransform66 = new SoTransform();
SoShape* SoShape67 = new SoShape();
SoShape67->setDEF(QString("belt"));
SoVRMLAppearance* SoVRMLAppearance68 = new SoVRMLAppearance();
SoMaterial* SoMaterial69 = new SoMaterial();
SoMaterial69->setUSE(QString("plastic"));
SoVRMLAppearance68->addChild(*SoMaterial69);

SoShape67->addChild(*SoVRMLAppearance68);

SoIndexedFaceSet* SoIndexedFaceSet70 = new SoIndexedFaceSet();
SoIndexedFaceSet70->setCoordIndex(new int32_t[]{3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1}, 36);
SoIndexedFaceSet70->setCreaseAngle(1.45);
SoIndexedFaceSet70->setSolid(false);
SoCoordinate* SoCoordinate71 = new SoCoordinate();
SoCoordinate71->setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0,0.0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0.0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02,0.075,0.06,-0.135,0.075,0.09,-0.135,-0.075,0.06,-0.135,-0.075,0.09,-0.135,0.06,0.09,-0.165,0.06,0.06,-0.165,-0.06,0.09,-0.165,-0.06,0.06,-0.165,0.0,0.09,-0.2,0.0,0.06,-0.175}, 144);
SoIndexedFaceSet70->setCoord(*SoCoordinate71);

SoShape67->setGeometry(*SoIndexedFaceSet70);

SoTransform66->addChild(*SoShape67);

SoTransform13->addChild(*SoTransform66);

SoNode10->addChild(*SoTransform13);

SoSceneManager0->setSceneGraph(*SoNode10);

return 0;
}
