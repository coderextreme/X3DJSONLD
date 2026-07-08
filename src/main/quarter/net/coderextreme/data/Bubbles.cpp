
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
SoSceneManager0->setProfile(QString("Interchange"));
SoSceneManager0->setVersion(QString("4.0"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("Bubbles.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Bubble animation used by Nancy Diving example."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("Etsuko Lippi"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("created"));
Someta5->setContent(QString("24 January 2001"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("modified"));
Someta6->setContent(QString("23 May 2020"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("identifier"));
Someta7->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d"));
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
SoWorldInfo11->setTitle(QString("Bubbles.x3d"));
SoNode10->addChild(*SoWorldInfo11);

SoTransform* SoTransform12 = new SoTransform();
SoTransform12->setDEF(QString("Bubbles"));
SoGroup* SoGroup13 = new SoGroup();
SoGroup13->setDEF(QString("Bubble"));
SoTimeSensor* SoTimeSensor14 = new SoTimeSensor();
SoTimeSensor14->setDEF(QString("BubbleClock"));
SoTimeSensor14->setCycleInterval(6);
SoTimeSensor14->setLoop(true);
SoGroup13->addChild(*SoTimeSensor14);

SoPositionInterpolator* SoPositionInterpolator15 = new SoPositionInterpolator();
SoPositionInterpolator15->setDEF(QString("BubblePath1"));
SoPositionInterpolator15->setKey(new float[]{0.0,0.5,0.8,0.9,1.0}, 5);
SoPositionInterpolator15->setKeyValue(new float[]{0.0,0.0,0.0,0.75,0.75,0.75,0.86,0.86,0.86,0.99,0.998,0.9876,1.272,1.9044,0.9509}, 15);
SoGroup13->addChild(*SoPositionInterpolator15);

SoPositionInterpolator* SoPositionInterpolator16 = new SoPositionInterpolator();
SoPositionInterpolator16->setDEF(QString("BubblePath2"));
SoPositionInterpolator16->setKey(new float[]{0.0,0.3,0.64,0.85,1.0}, 5);
SoPositionInterpolator16->setKeyValue(new float[]{0.1,0.1,0.1,0.2,0.4,0.25,0.3,0.5,0.46,0.75,0.5,0.575,0.038483478,1.989,1.098373}, 15);
SoGroup13->addChild(*SoPositionInterpolator16);

SoPositionInterpolator* SoPositionInterpolator17 = new SoPositionInterpolator();
SoPositionInterpolator17->setDEF(QString("BubblePath3"));
SoPositionInterpolator17->setKey(new float[]{0.0,0.1,0.45,0.7,1.0}, 5);
SoPositionInterpolator17->setKeyValue(new float[]{0.01,0.01,0.01,0.25,0.35,0.0045,0.55,0.6,0.0055,0.66,0.665,0.00655,1.555,1.09043,0.005734}, 15);
SoGroup13->addChild(*SoPositionInterpolator17);

SoPositionInterpolator* SoPositionInterpolator18 = new SoPositionInterpolator();
SoPositionInterpolator18->setDEF(QString("BubblePath4"));
SoPositionInterpolator18->setKey(new float[]{0.0,0.5,0.6,0.8,1.0}, 5);
SoPositionInterpolator18->setKeyValue(new float[]{0.0,0.0,0.0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.948594,1.3983,0.009009349}, 15);
SoGroup13->addChild(*SoPositionInterpolator18);

SoPositionInterpolator* SoPositionInterpolator19 = new SoPositionInterpolator();
SoPositionInterpolator19->setDEF(QString("BubblePath5"));
SoPositionInterpolator19->setKey(new float[]{0.0,0.25,0.35,0.65,1.0}, 5);
SoPositionInterpolator19->setKeyValue(new float[]{0.0,0.0,0.0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.84444,1.22222,0.1}, 15);
SoGroup13->addChild(*SoPositionInterpolator19);

SoPositionInterpolator* SoPositionInterpolator20 = new SoPositionInterpolator();
SoPositionInterpolator20->setDEF(QString("BubblePath6"));
SoPositionInterpolator20->setKey(new float[]{0.0,0.15,0.22235,0.55565,1.0}, 5);
SoPositionInterpolator20->setKeyValue(new float[]{0.0,0.0,0.0,0.235,0.3455,0.0055,0.356,0.676,0.00456,0.5675,0.75,0.0074565,1.098,1.0343,0.14}, 15);
SoGroup13->addChild(*SoPositionInterpolator20);

SoPositionInterpolator* SoPositionInterpolator21 = new SoPositionInterpolator();
SoPositionInterpolator21->setDEF(QString("BubblePath7"));
SoPositionInterpolator21->setKey(new float[]{0.0,0.2425,0.4535,0.6775,1.0}, 5);
SoPositionInterpolator21->setKeyValue(new float[]{0.0,0.0,0.0,0.12345,0.2225,0.00335,0.786,0.456,0.00666,0.74555,0.7335,0.00234575,0.08787,1.022,0.12}, 15);
SoGroup13->addChild(*SoPositionInterpolator21);

SoPositionInterpolator* SoPositionInterpolator22 = new SoPositionInterpolator();
SoPositionInterpolator22->setDEF(QString("BubblePath8"));
SoPositionInterpolator22->setKey(new float[]{0.0,0.1125,0.5535,0.97865,1.0}, 5);
SoPositionInterpolator22->setKeyValue(new float[]{0.0,0.0,0.0,0.1235,0.05,0.00125,0.5666,0.4346,0.005556,0.8975,0.34575,0.0098775,1.8787,1.686,0.86}, 15);
SoGroup13->addChild(*SoPositionInterpolator22);

SoPositionInterpolator* SoPositionInterpolator23 = new SoPositionInterpolator();
SoPositionInterpolator23->setDEF(QString("BubblePath9"));
SoPositionInterpolator23->setKey(new float[]{0.0,0.0025,0.035,0.65,1.0}, 5);
SoPositionInterpolator23->setKeyValue(new float[]{0.0,0.0,0.0,0.522,0.5445,0.0057,0.6543,0.226,0.0055,0.45575,0.4375,0.0067,1.8787,2.0,0.1545}, 15);
SoGroup13->addChild(*SoPositionInterpolator23);

SoPositionInterpolator* SoPositionInterpolator24 = new SoPositionInterpolator();
SoPositionInterpolator24->setDEF(QString("BubblePath10"));
SoPositionInterpolator24->setKey(new float[]{0.0,0.00025,0.035,0.6895,1.0}, 5);
SoPositionInterpolator24->setKeyValue(new float[]{0.0,0.0,0.0,0.8765,0.445,0.00335,0.3336,0.4446,0.005556,0.765,0.75,0.0075,1.0,1.0,0.1}, 15);
SoGroup13->addChild(*SoPositionInterpolator24);

SoTransform* SoTransform25 = new SoTransform();
SoTransform* SoTransform26 = new SoTransform();
SoTransform26->setDEF(QString("bubble1"));
SoShape* SoShape27 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance28 = new SoVRMLAppearance();
SoMaterial* SoMaterial29 = new SoMaterial();
SoMaterial29->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoMaterial29->setTransparency(0.8);
SoVRMLAppearance28->addChild(*SoMaterial29);

SoShape27->addChild(*SoVRMLAppearance28);

SoSphere* SoSphere30 = new SoSphere();
SoSphere30->setRadius(0.025);
SoShape27->setGeometry(*SoSphere30);

SoTransform26->addChild(*SoShape27);

SoTransform25->addChild(*SoTransform26);

SoTransform* SoTransform31 = new SoTransform();
SoTransform31->setDEF(QString("bubble2"));
SoShape* SoShape32 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance33 = new SoVRMLAppearance();
SoMaterial* SoMaterial34 = new SoMaterial();
SoMaterial34->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoMaterial34->setTransparency(0.8);
SoVRMLAppearance33->addChild(*SoMaterial34);

SoShape32->addChild(*SoVRMLAppearance33);

SoSphere* SoSphere35 = new SoSphere();
SoSphere35->setRadius(0.055);
SoShape32->setGeometry(*SoSphere35);

SoTransform31->addChild(*SoShape32);

SoTransform25->addChild(*SoTransform31);

SoTransform* SoTransform36 = new SoTransform();
SoTransform36->setDEF(QString("bubble3"));
SoShape* SoShape37 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance38 = new SoVRMLAppearance();
SoMaterial* SoMaterial39 = new SoMaterial();
SoMaterial39->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoMaterial39->setTransparency(0.8);
SoVRMLAppearance38->addChild(*SoMaterial39);

SoShape37->addChild(*SoVRMLAppearance38);

SoSphere* SoSphere40 = new SoSphere();
SoSphere40->setRadius(0.065);
SoShape37->setGeometry(*SoSphere40);

SoTransform36->addChild(*SoShape37);

SoTransform25->addChild(*SoTransform36);

SoTransform* SoTransform41 = new SoTransform();
SoTransform41->setDEF(QString("bubble4"));
SoShape* SoShape42 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance43 = new SoVRMLAppearance();
SoMaterial* SoMaterial44 = new SoMaterial();
SoMaterial44->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoMaterial44->setTransparency(0.8);
SoVRMLAppearance43->addChild(*SoMaterial44);

SoShape42->addChild(*SoVRMLAppearance43);

SoSphere* SoSphere45 = new SoSphere();
SoSphere45->setRadius(0.015);
SoShape42->setGeometry(*SoSphere45);

SoTransform41->addChild(*SoShape42);

SoTransform25->addChild(*SoTransform41);

SoTransform* SoTransform46 = new SoTransform();
SoTransform46->setDEF(QString("bubble5"));
SoShape* SoShape47 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance48 = new SoVRMLAppearance();
SoMaterial* SoMaterial49 = new SoMaterial();
SoMaterial49->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoMaterial49->setTransparency(0.8);
SoVRMLAppearance48->addChild(*SoMaterial49);

SoShape47->addChild(*SoVRMLAppearance48);

SoSphere* SoSphere50 = new SoSphere();
SoSphere50->setRadius(0.075);
SoShape47->setGeometry(*SoSphere50);

SoTransform46->addChild(*SoShape47);

SoTransform25->addChild(*SoTransform46);

SoTransform* SoTransform51 = new SoTransform();
SoTransform51->setDEF(QString("bubble6"));
SoShape* SoShape52 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance53 = new SoVRMLAppearance();
SoMaterial* SoMaterial54 = new SoMaterial();
SoMaterial54->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoMaterial54->setTransparency(0.8);
SoVRMLAppearance53->addChild(*SoMaterial54);

SoShape52->addChild(*SoVRMLAppearance53);

SoSphere* SoSphere55 = new SoSphere();
SoSphere55->setRadius(0.005);
SoShape52->setGeometry(*SoSphere55);

SoTransform51->addChild(*SoShape52);

SoTransform25->addChild(*SoTransform51);

SoTransform* SoTransform56 = new SoTransform();
SoTransform56->setDEF(QString("bubble7"));
SoShape* SoShape57 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance58 = new SoVRMLAppearance();
SoMaterial* SoMaterial59 = new SoMaterial();
SoMaterial59->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoMaterial59->setTransparency(0.8);
SoVRMLAppearance58->addChild(*SoMaterial59);

SoShape57->addChild(*SoVRMLAppearance58);

SoSphere* SoSphere60 = new SoSphere();
SoSphere60->setRadius(0.035);
SoShape57->setGeometry(*SoSphere60);

SoTransform56->addChild(*SoShape57);

SoTransform25->addChild(*SoTransform56);

SoTransform* SoTransform61 = new SoTransform();
SoTransform61->setDEF(QString("bubble8"));
SoShape* SoShape62 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance63 = new SoVRMLAppearance();
SoMaterial* SoMaterial64 = new SoMaterial();
SoMaterial64->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoMaterial64->setTransparency(0.8);
SoVRMLAppearance63->addChild(*SoMaterial64);

SoShape62->addChild(*SoVRMLAppearance63);

SoSphere* SoSphere65 = new SoSphere();
SoSphere65->setRadius(0.05);
SoShape62->setGeometry(*SoSphere65);

SoTransform61->addChild(*SoShape62);

SoTransform25->addChild(*SoTransform61);

SoTransform* SoTransform66 = new SoTransform();
SoTransform66->setDEF(QString("bubble9"));
SoShape* SoShape67 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance68 = new SoVRMLAppearance();
SoMaterial* SoMaterial69 = new SoMaterial();
SoMaterial69->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoMaterial69->setTransparency(0.8);
SoVRMLAppearance68->addChild(*SoMaterial69);

SoShape67->addChild(*SoVRMLAppearance68);

SoSphere* SoSphere70 = new SoSphere();
SoSphere70->setRadius(0.045);
SoShape67->setGeometry(*SoSphere70);

SoTransform66->addChild(*SoShape67);

SoTransform25->addChild(*SoTransform66);

SoTransform* SoTransform71 = new SoTransform();
SoTransform71->setDEF(QString("bubble10"));
SoShape* SoShape72 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance73 = new SoVRMLAppearance();
SoMaterial* SoMaterial74 = new SoMaterial();
SoMaterial74->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoMaterial74->setTransparency(0.8);
SoVRMLAppearance73->addChild(*SoMaterial74);

SoShape72->addChild(*SoVRMLAppearance73);

SoSphere* SoSphere75 = new SoSphere();
SoSphere75->setRadius(0.035);
SoShape72->setGeometry(*SoSphere75);

SoTransform71->addChild(*SoShape72);

SoTransform25->addChild(*SoTransform71);

SoROUTE* SoROUTE76 = new SoROUTE();
SoROUTE76->setFromField(QString("fraction_changed"));
SoROUTE76->setFromNode(QString("BubbleClock"));
SoROUTE76->setToField(QString("set_fraction"));
SoROUTE76->setToNode(QString("BubblePath1"));
SoTransform25->addChild(*SoROUTE76);

SoROUTE* SoROUTE77 = new SoROUTE();
SoROUTE77->setFromField(QString("fraction_changed"));
SoROUTE77->setFromNode(QString("BubbleClock"));
SoROUTE77->setToField(QString("set_fraction"));
SoROUTE77->setToNode(QString("BubblePath2"));
SoTransform25->addChild(*SoROUTE77);

SoROUTE* SoROUTE78 = new SoROUTE();
SoROUTE78->setFromField(QString("fraction_changed"));
SoROUTE78->setFromNode(QString("BubbleClock"));
SoROUTE78->setToField(QString("set_fraction"));
SoROUTE78->setToNode(QString("BubblePath3"));
SoTransform25->addChild(*SoROUTE78);

SoROUTE* SoROUTE79 = new SoROUTE();
SoROUTE79->setFromField(QString("fraction_changed"));
SoROUTE79->setFromNode(QString("BubbleClock"));
SoROUTE79->setToField(QString("set_fraction"));
SoROUTE79->setToNode(QString("BubblePath4"));
SoTransform25->addChild(*SoROUTE79);

SoROUTE* SoROUTE80 = new SoROUTE();
SoROUTE80->setFromField(QString("fraction_changed"));
SoROUTE80->setFromNode(QString("BubbleClock"));
SoROUTE80->setToField(QString("set_fraction"));
SoROUTE80->setToNode(QString("BubblePath5"));
SoTransform25->addChild(*SoROUTE80);

SoROUTE* SoROUTE81 = new SoROUTE();
SoROUTE81->setFromField(QString("fraction_changed"));
SoROUTE81->setFromNode(QString("BubbleClock"));
SoROUTE81->setToField(QString("set_fraction"));
SoROUTE81->setToNode(QString("BubblePath6"));
SoTransform25->addChild(*SoROUTE81);

SoROUTE* SoROUTE82 = new SoROUTE();
SoROUTE82->setFromField(QString("fraction_changed"));
SoROUTE82->setFromNode(QString("BubbleClock"));
SoROUTE82->setToField(QString("set_fraction"));
SoROUTE82->setToNode(QString("BubblePath7"));
SoTransform25->addChild(*SoROUTE82);

SoROUTE* SoROUTE83 = new SoROUTE();
SoROUTE83->setFromField(QString("fraction_changed"));
SoROUTE83->setFromNode(QString("BubbleClock"));
SoROUTE83->setToField(QString("set_fraction"));
SoROUTE83->setToNode(QString("BubblePath8"));
SoTransform25->addChild(*SoROUTE83);

SoROUTE* SoROUTE84 = new SoROUTE();
SoROUTE84->setFromField(QString("fraction_changed"));
SoROUTE84->setFromNode(QString("BubbleClock"));
SoROUTE84->setToField(QString("set_fraction"));
SoROUTE84->setToNode(QString("BubblePath9"));
SoTransform25->addChild(*SoROUTE84);

SoROUTE* SoROUTE85 = new SoROUTE();
SoROUTE85->setFromField(QString("fraction_changed"));
SoROUTE85->setFromNode(QString("BubbleClock"));
SoROUTE85->setToField(QString("set_fraction"));
SoROUTE85->setToNode(QString("BubblePath10"));
SoTransform25->addChild(*SoROUTE85);

SoROUTE* SoROUTE86 = new SoROUTE();
SoROUTE86->setFromField(QString("value_changed"));
SoROUTE86->setFromNode(QString("BubblePath1"));
SoROUTE86->setToField(QString("set_translation"));
SoROUTE86->setToNode(QString("bubble1"));
SoTransform25->addChild(*SoROUTE86);

SoROUTE* SoROUTE87 = new SoROUTE();
SoROUTE87->setFromField(QString("value_changed"));
SoROUTE87->setFromNode(QString("BubblePath2"));
SoROUTE87->setToField(QString("set_translation"));
SoROUTE87->setToNode(QString("bubble2"));
SoTransform25->addChild(*SoROUTE87);

SoROUTE* SoROUTE88 = new SoROUTE();
SoROUTE88->setFromField(QString("value_changed"));
SoROUTE88->setFromNode(QString("BubblePath3"));
SoROUTE88->setToField(QString("set_translation"));
SoROUTE88->setToNode(QString("bubble3"));
SoTransform25->addChild(*SoROUTE88);

SoROUTE* SoROUTE89 = new SoROUTE();
SoROUTE89->setFromField(QString("value_changed"));
SoROUTE89->setFromNode(QString("BubblePath4"));
SoROUTE89->setToField(QString("set_translation"));
SoROUTE89->setToNode(QString("bubble4"));
SoTransform25->addChild(*SoROUTE89);

SoROUTE* SoROUTE90 = new SoROUTE();
SoROUTE90->setFromField(QString("value_changed"));
SoROUTE90->setFromNode(QString("BubblePath5"));
SoROUTE90->setToField(QString("set_translation"));
SoROUTE90->setToNode(QString("bubble5"));
SoTransform25->addChild(*SoROUTE90);

SoROUTE* SoROUTE91 = new SoROUTE();
SoROUTE91->setFromField(QString("value_changed"));
SoROUTE91->setFromNode(QString("BubblePath6"));
SoROUTE91->setToField(QString("set_translation"));
SoROUTE91->setToNode(QString("bubble6"));
SoTransform25->addChild(*SoROUTE91);

SoROUTE* SoROUTE92 = new SoROUTE();
SoROUTE92->setFromField(QString("value_changed"));
SoROUTE92->setFromNode(QString("BubblePath7"));
SoROUTE92->setToField(QString("set_translation"));
SoROUTE92->setToNode(QString("bubble7"));
SoTransform25->addChild(*SoROUTE92);

SoROUTE* SoROUTE93 = new SoROUTE();
SoROUTE93->setFromField(QString("value_changed"));
SoROUTE93->setFromNode(QString("BubblePath8"));
SoROUTE93->setToField(QString("set_translation"));
SoROUTE93->setToNode(QString("bubble8"));
SoTransform25->addChild(*SoROUTE93);

SoROUTE* SoROUTE94 = new SoROUTE();
SoROUTE94->setFromField(QString("value_changed"));
SoROUTE94->setFromNode(QString("BubblePath9"));
SoROUTE94->setToField(QString("set_translation"));
SoROUTE94->setToNode(QString("bubble9"));
SoTransform25->addChild(*SoROUTE94);

SoROUTE* SoROUTE95 = new SoROUTE();
SoROUTE95->setFromField(QString("value_changed"));
SoROUTE95->setFromNode(QString("BubblePath10"));
SoROUTE95->setToField(QString("set_translation"));
SoROUTE95->setToNode(QString("bubble10"));
SoTransform25->addChild(*SoROUTE95);

SoGroup13->addChild(*SoTransform25);

SoTransform12->addChild(*SoGroup13);

SoNode10->addChild(*SoTransform12);

SoBackground* SoBackground96 = new SoBackground();
SoBackground96->setSkyColor(new float[]{0.0,0.0,0.6}, 3);
SoNode10->addChild(*SoBackground96);

SoSceneManager0->setSceneGraph(*SoNode10);

return 0;
}
