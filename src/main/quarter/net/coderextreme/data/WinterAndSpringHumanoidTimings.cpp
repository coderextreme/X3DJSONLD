
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
Someta2->setContent(QString("WinterAndSpringHumanoidTimings.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Example animation timings, manually translated from tool outputs and export."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("reference"));
Someta4->setContent(QString("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/WinterAndSpringHumanoidTimings.x3dv"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("info"));
Someta5->setContent(QString("reference .x3dv model successfully translated by Castle Game Engine, IICM, and Xj3D import (with loss of comments)"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("creator"));
Someta6->setContent(QString("Katy Schildmeyer"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("creator"));
Someta7->setContent(QString("Carol McDonald"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("translator"));
Someta8->setContent(QString("Joe Williams"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("translator"));
Someta9->setContent(QString("Don Brutzman"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("created"));
Someta10->setContent(QString("2 July 2023"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("translated"));
Someta11->setContent(QString("9 July 2023"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("modified"));
Someta12->setContent(QString("Mon, 15 Sep 2025 05:21:02 GMT"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("hint"));
Someta13->setContent(QString("MetadataString approach for name=poses sequence, matching the key/keyValue pairs, is experimental but seems unambiguous."));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("identifier"));
Someta14->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringHumanoidTimings.x3d"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("generator"));
Someta15->setContent(QString("Cinema 4D https://www.maxon.net/en/cinema-4d"));
Sohead1->addMeta(*Someta15);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode16 = new SoNode();
SoWorldInfo* SoWorldInfo17 = new SoWorldInfo();
SoWorldInfo17->setTitle(QString("WinterAndSpringHumanoidTimings.x3d"));
SoNode16->addChild(*SoWorldInfo17);

SoViewpoint* SoViewpoint18 = new SoViewpoint();
SoViewpoint18->setDEF(QString("EntryView1"));
SoViewpoint18->setDescription(QString("Hello characters 1"));
SoViewpoint18->setPosition(new float[]{0.0,2.0,40.0});
SoNode16->addChild(*SoViewpoint18);

SoViewpoint* SoViewpoint19 = new SoViewpoint();
SoViewpoint19->setDEF(QString("EntryView2"));
SoViewpoint19->setDescription(QString("Hello characters 2"));
SoViewpoint19->setPosition(new float[]{-15.0,10.0,30.0});
SoViewpoint19->setOrientation(new float[]{0.0,1.0,0.0,-0.643501});
SoViewpoint19->setCenterOfRotation(new float[]{0.0,10.0,10.0});
SoNode16->addChild(*SoViewpoint19);

SoTransform* SoTransform20 = new SoTransform();
SoTransform20->setDEF(QString("TextRoot"));
SoTransform20->setTranslation(new float[]{9.8557,0.95,3.5});
SoShape* SoShape21 = new SoShape();
SoShape21->setDEF(QString("ModelDescriptionText"));
SoVRMLAppearance* SoVRMLAppearance22 = new SoVRMLAppearance();
SoMaterial* SoMaterial23 = new SoMaterial();
SoMaterial23->setDiffuseColor(new float[]{0.960784,0.894118,0.0});
SoVRMLAppearance22->addChild(*SoMaterial23);

SoShape21->addChild(*SoVRMLAppearance22);

SoText* SoText24 = new SoText();
SoText24->setString(new QString[]{QString("This scene tests"), QString(""), QString("experimental approaches"), QString(""), QString("for human animation")}, 5);
SoFontStyle* SoFontStyle25 = new SoFontStyle();
SoFontStyle25->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle25->setStyle(QString("BOLD"));
SoFontStyle25->setSize(0.8);
SoFontStyle25->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText24->setFontStyle(*SoFontStyle25);

SoShape21->setGeometry(*SoText24);

SoTransform20->addChild(*SoShape21);

SoNode16->addChild(*SoTransform20);

SoTransform* SoTransform26 = new SoTransform();
SoTransform26->setDEF(QString("Root4"));
SoTransform26->setTranslation(new float[]{11.3657,0.475,3.377131});
SoNode16->addChild(*SoTransform26);

SoTransform* SoTransform27 = new SoTransform();
SoTransform27->setDEF(QString("Root5"));
SoTransform27->setTranslation(new float[]{10.55646,0.475,3.391616});
SoNode16->addChild(*SoTransform27);

SoTransform* SoTransform28 = new SoTransform();
SoTransform28->setDEF(QString("Root6"));
SoTransform28->setTranslation(new float[]{9.167682,0.475,3.332752});
SoNode16->addChild(*SoTransform28);

SoPositionInterpolator* SoPositionInterpolator29 = new SoPositionInterpolator();
SoPositionInterpolator29->setDEF(QString("Gramps_HumanoidRoot_TranslationInterpolator"));
SoPositionInterpolator29->setKey(new float[]{0.0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1.0}, 11);
SoPositionInterpolator29->setKeyValue(new float[]{6.8557,0.95,0.5,6.8557,0.95,0.5,6.8557,0.95,0.5,9.8557,0.95,3.5,9.8557,0.95,3.5,9.8557,0.95,3.5,14.3558,0.95,8.0,16.8558,0.95,15.0,21.3557,0.95,24.5,21.3557,0.95,24.5,21.3557,0.95,24.5}, 33);
SoMetadataString* SoMetadataString30 = new SoMetadataString();
SoMetadataString30->X3DNode::setName(QString("poses"));
SoMetadataString30->setValue(new QString[]{QString("Gramps_Stand01"), QString("Gramps_Stand01"), QString("Gramps_Walk01"), QString("Gramps_Stand02"), QString("Gramps_Turn01"), QString("Gramps_Walk01"), QString("Gramps_Walk02"), QString("Gramps_Skip01"), QString("Gramps_Stand03"), QString("Gramps_Stand03"), QString("Gramps_Stand03")}, 11);
SoPositionInterpolator29->setMetadata(*SoMetadataString30);

SoNode16->addChild(*SoPositionInterpolator29);

SoPositionInterpolator* SoPositionInterpolator31 = new SoPositionInterpolator();
SoPositionInterpolator31->setDEF(QString("Leif_HumanoidRoot_TranslationInterpolator"));
SoPositionInterpolator31->setKey(new float[]{0.0,0.09,0.11,0.223,0.043,0.55,0.63,0.73,0.85,0.86,1.0}, 11);
SoPositionInterpolator31->setKeyValue(new float[]{-7.9962,0.4,3.0,-7.9962,0.4,3.0,-7.9962,0.4,3.0,-7.9962,0.4,3.0,9.004,0.475,3.4999,11.5048,0.475,3.3699,16.0038,0.475,7.8699,18.5038,0.475,14.8699,23.0038,0.475,24.3699,23.0038,0.475,24.3699,23.0038,0.475,24.3699}, 33);
SoMetadataString* SoMetadataString32 = new SoMetadataString();
SoMetadataString32->X3DNode::setName(QString("poses"));
SoMetadataString32->setValue(new QString[]{QString("Leif_Stand01"), QString("Leif_Stand01"), QString("Leif_Stand01"), QString("Leif_Run01"), QString("Leif_Turn01"), QString("Leif_Walk01"), QString("Leif_Walk01"), QString("Leif_Skip01"), QString("Leif_Stand01"), QString("Leif_Stand01"), QString("Leif_Stand01")}, 11);
SoPositionInterpolator31->setMetadata(*SoMetadataString32);

SoNode16->addChild(*SoPositionInterpolator31);

SoPositionInterpolator* SoPositionInterpolator33 = new SoPositionInterpolator();
SoPositionInterpolator33->setDEF(QString("Lily_HumanoidRoot_TranslationInterpolator"));
SoPositionInterpolator33->setKey(new float[]{0.0,0.09,0.11,0.225,0.043,0.55,0.63,0.73,0.85,0.86,1.0}, 11);
SoPositionInterpolator33->setKeyValue(new float[]{-8.0962,0.4,5.6,-8.0962,0.4,5.6,-8.0962,0.4,5.6,-8.0962,0.4,5.6,8.9038,0.475,4.0999,10.6538,0.475,3.3499,15.1538,0.475,7.8499,17.6538,0.475,14.8499,22.1538,0.475,24.3499,22.1538,0.475,24.3499,22.1538,0.475,24.3499}, 33);
SoMetadataString* SoMetadataString34 = new SoMetadataString();
SoMetadataString34->X3DNode::setName(QString("poses"));
SoMetadataString34->setValue(new QString[]{QString("Lily_Stand01"), QString("Lily_Stand01"), QString("Lily_Stand01"), QString("Leif_Run01"), QString("Lily_Turn01"), QString("Lily_Walk01"), QString("Lily_Walk01"), QString("Lily_Skip01"), QString("Lily_Stand01"), QString("Lily_Stand01"), QString("Lily_Stand01")}, 11);
SoPositionInterpolator33->setMetadata(*SoMetadataString34);

SoNode16->addChild(*SoPositionInterpolator33);

SoPositionInterpolator* SoPositionInterpolator35 = new SoPositionInterpolator();
SoPositionInterpolator35->setDEF(QString("Tufani_HumanoidRoot_TranslationInterpolator"));
SoPositionInterpolator35->setKey(new float[]{0.0,0.09,0.11,0.227,0.043,0.55,0.63,0.73,0.85,0.86,1.0}, 11);
SoPositionInterpolator35->setKeyValue(new float[]{-8.0962,0.4,6.4,-8.0962,0.4,6.4,-8.0962,0.4,6.4,-8.0962,0.4,6.4,9.40338,0.475,4.3999,9.1538,0.475,3.2699,13.6538,0.475,7.7699,16.1538,0.475,14.7699,20.6538,0.475,24.2699,20.6538,0.475,24.2699,20.6538,0.475,24.2699}, 33);
SoMetadataString* SoMetadataString36 = new SoMetadataString();
SoMetadataString36->X3DNode::setName(QString("poses"));
SoMetadataString36->setValue(new QString[]{QString("Tufani_Stand01"), QString("Tufani_Stand01"), QString("Tufani_Stand01"), QString("Tufani_Run01"), QString("Tufani_Turn01"), QString("Tufani_Walk01"), QString("Tufani_Walk01"), QString("Tufani_Skip01"), QString("Tufani_Stand01"), QString("Tufani_Stand01"), QString("Tufani_Stand01")}, 11);
SoPositionInterpolator35->setMetadata(*SoMetadataString36);

SoNode16->addChild(*SoPositionInterpolator35);

SoBackground* SoBackground37 = new SoBackground();
SoBackground37->setDEF(QString("Background3Black"));
SoNode16->addChild(*SoBackground37);

SoBackground* SoBackground38 = new SoBackground();
SoBackground38->setDEF(QString("Background4SkyBlueGreenGrass"));
SoBackground38->setSkyColor(new float[]{0.0,0.71,0.886}, 3);
SoBackground38->setGroundAngle(new float[]{1.57}, 1);
SoBackground38->setGroundColor(new float[]{0.356863,0.639216,0.0,0.721569,1.0,0.501961}, 6);
SoNode16->addChild(*SoBackground38);

SoBackground* SoBackground39 = new SoBackground();
SoBackground39->setDEF(QString("Background5LightGrey"));
SoBackground39->setSkyColor(new float[]{0.827,0.827,0.827}, 3);
SoNode16->addChild(*SoBackground39);

SoBackground* SoBackground40 = new SoBackground();
SoBackground40->setDEF(QString("Background6DarkGrey"));
SoBackground40->setSkyColor(new float[]{0.6,0.2,0.2}, 3);
SoNode16->addChild(*SoBackground40);

SoTimeSensor* SoTimeSensor41 = new SoTimeSensor();
SoTimeSensor41->setDEF(QString("Clock10Seconds"));
SoTimeSensor41->setCycleInterval(5);
SoTimeSensor41->setLoop(true);
SoNode16->addChild(*SoTimeSensor41);

SoTimeSensor* SoTimeSensor42 = new SoTimeSensor();
SoTimeSensor42->setDEF(QString("Clock100Seconds"));
SoTimeSensor42->setEnabled(false);
SoTimeSensor42->setCycleInterval(100);
SoNode16->addChild(*SoTimeSensor42);

SoBooleanSequencer* SoBooleanSequencer43 = new SoBooleanSequencer();
SoBooleanSequencer43->setDEF(QString("Background3Sequencer"));
SoBooleanSequencer43->setKey(new float[]{0.0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1.0}, 11);
SoBooleanSequencer43->setKeyValue(new boolean[]{true,true,true,false,false,false,false,false,false,false,false});
SoNode16->addChild(*SoBooleanSequencer43);

SoBooleanSequencer* SoBooleanSequencer44 = new SoBooleanSequencer();
SoBooleanSequencer44->setDEF(QString("Background4Sequencer"));
SoBooleanSequencer44->setKey(new float[]{0.0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1.0}, 11);
SoBooleanSequencer44->setKeyValue(new boolean[]{false,false,false,true,true,false,false,false,false,false,false});
SoNode16->addChild(*SoBooleanSequencer44);

SoBooleanSequencer* SoBooleanSequencer45 = new SoBooleanSequencer();
SoBooleanSequencer45->setDEF(QString("Background5Sequencer"));
SoBooleanSequencer45->setKey(new float[]{0.0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1.0}, 11);
SoBooleanSequencer45->setKeyValue(new boolean[]{false,false,false,false,false,true,true,true,false,false,false});
SoNode16->addChild(*SoBooleanSequencer45);

SoBooleanSequencer* SoBooleanSequencer46 = new SoBooleanSequencer();
SoBooleanSequencer46->setDEF(QString("Background6Sequencer"));
SoBooleanSequencer46->setKey(new float[]{0.0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1.0}, 11);
SoBooleanSequencer46->setKeyValue(new boolean[]{false,false,false,false,false,false,false,false,true,true,true});
SoNode16->addChild(*SoBooleanSequencer46);

SoROUTE* SoROUTE47 = new SoROUTE();
SoROUTE47->setFromNode(QString("Background3Sequencer"));
SoROUTE47->setFromField(QString("value_changed"));
SoROUTE47->setToNode(QString("Background3Black"));
SoROUTE47->setToField(QString("set_bind"));
SoNode16->addChild(*SoROUTE47);

SoROUTE* SoROUTE48 = new SoROUTE();
SoROUTE48->setFromNode(QString("Background4Sequencer"));
SoROUTE48->setFromField(QString("value_changed"));
SoROUTE48->setToNode(QString("Background4SkyBlueGreenGrass"));
SoROUTE48->setToField(QString("set_bind"));
SoNode16->addChild(*SoROUTE48);

SoROUTE* SoROUTE49 = new SoROUTE();
SoROUTE49->setFromNode(QString("Background5Sequencer"));
SoROUTE49->setFromField(QString("value_changed"));
SoROUTE49->setToNode(QString("Background5LightGrey"));
SoROUTE49->setToField(QString("set_bind"));
SoNode16->addChild(*SoROUTE49);

SoROUTE* SoROUTE50 = new SoROUTE();
SoROUTE50->setFromNode(QString("Background6Sequencer"));
SoROUTE50->setFromField(QString("value_changed"));
SoROUTE50->setToNode(QString("Background6DarkGrey"));
SoROUTE50->setToField(QString("set_bind"));
SoNode16->addChild(*SoROUTE50);

SoROUTE* SoROUTE51 = new SoROUTE();
SoROUTE51->setFromNode(QString("Clock10Seconds"));
SoROUTE51->setFromField(QString("fraction_changed"));
SoROUTE51->setToNode(QString("Background3Sequencer"));
SoROUTE51->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE51);

SoROUTE* SoROUTE52 = new SoROUTE();
SoROUTE52->setFromNode(QString("Clock10Seconds"));
SoROUTE52->setFromField(QString("fraction_changed"));
SoROUTE52->setToNode(QString("Background4Sequencer"));
SoROUTE52->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE52);

SoROUTE* SoROUTE53 = new SoROUTE();
SoROUTE53->setFromNode(QString("Clock10Seconds"));
SoROUTE53->setFromField(QString("fraction_changed"));
SoROUTE53->setToNode(QString("Background5Sequencer"));
SoROUTE53->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE53);

SoROUTE* SoROUTE54 = new SoROUTE();
SoROUTE54->setFromNode(QString("Clock10Seconds"));
SoROUTE54->setFromField(QString("fraction_changed"));
SoROUTE54->setToNode(QString("Background6Sequencer"));
SoROUTE54->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE54);

SoROUTE* SoROUTE55 = new SoROUTE();
SoROUTE55->setFromNode(QString("Clock100Seconds"));
SoROUTE55->setFromField(QString("fraction_changed"));
SoROUTE55->setToNode(QString("Background3Sequencer"));
SoROUTE55->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE55);

SoROUTE* SoROUTE56 = new SoROUTE();
SoROUTE56->setFromNode(QString("Clock100Seconds"));
SoROUTE56->setFromField(QString("fraction_changed"));
SoROUTE56->setToNode(QString("Background4Sequencer"));
SoROUTE56->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE56);

SoROUTE* SoROUTE57 = new SoROUTE();
SoROUTE57->setFromNode(QString("Clock100Seconds"));
SoROUTE57->setFromField(QString("fraction_changed"));
SoROUTE57->setToNode(QString("Background5Sequencer"));
SoROUTE57->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE57);

SoROUTE* SoROUTE58 = new SoROUTE();
SoROUTE58->setFromNode(QString("Clock100Seconds"));
SoROUTE58->setFromField(QString("fraction_changed"));
SoROUTE58->setToNode(QString("Background6Sequencer"));
SoROUTE58->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE58);

SoROUTE* SoROUTE59 = new SoROUTE();
SoROUTE59->setFromNode(QString("Clock10Seconds"));
SoROUTE59->setFromField(QString("fraction_changed"));
SoROUTE59->setToNode(QString("Gramps_HumanoidRoot_TranslationInterpolator"));
SoROUTE59->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE59);

SoROUTE* SoROUTE60 = new SoROUTE();
SoROUTE60->setFromNode(QString("Clock10Seconds"));
SoROUTE60->setFromField(QString("fraction_changed"));
SoROUTE60->setToNode(QString("Leif_HumanoidRoot_TranslationInterpolator"));
SoROUTE60->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE60);

SoROUTE* SoROUTE61 = new SoROUTE();
SoROUTE61->setFromNode(QString("Clock10Seconds"));
SoROUTE61->setFromField(QString("fraction_changed"));
SoROUTE61->setToNode(QString("Lily_HumanoidRoot_TranslationInterpolator"));
SoROUTE61->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE61);

SoROUTE* SoROUTE62 = new SoROUTE();
SoROUTE62->setFromNode(QString("Clock10Seconds"));
SoROUTE62->setFromField(QString("fraction_changed"));
SoROUTE62->setToNode(QString("Tufani_HumanoidRoot_TranslationInterpolator"));
SoROUTE62->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE62);

SoROUTE* SoROUTE63 = new SoROUTE();
SoROUTE63->setFromNode(QString("Clock100Seconds"));
SoROUTE63->setFromField(QString("fraction_changed"));
SoROUTE63->setToNode(QString("Gramps_HumanoidRoot_TranslationInterpolator"));
SoROUTE63->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE63);

SoROUTE* SoROUTE64 = new SoROUTE();
SoROUTE64->setFromNode(QString("Clock100Seconds"));
SoROUTE64->setFromField(QString("fraction_changed"));
SoROUTE64->setToNode(QString("Leif_HumanoidRoot_TranslationInterpolator"));
SoROUTE64->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE64);

SoROUTE* SoROUTE65 = new SoROUTE();
SoROUTE65->setFromNode(QString("Clock100Seconds"));
SoROUTE65->setFromField(QString("fraction_changed"));
SoROUTE65->setToNode(QString("Lily_HumanoidRoot_TranslationInterpolator"));
SoROUTE65->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE65);

SoROUTE* SoROUTE66 = new SoROUTE();
SoROUTE66->setFromNode(QString("Clock100Seconds"));
SoROUTE66->setFromField(QString("fraction_changed"));
SoROUTE66->setToNode(QString("Tufani_HumanoidRoot_TranslationInterpolator"));
SoROUTE66->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE66);

SoROUTE* SoROUTE67 = new SoROUTE();
SoROUTE67->setFromNode(QString("Gramps_HumanoidRoot_TranslationInterpolator"));
SoROUTE67->setFromField(QString("value_changed"));
SoROUTE67->setToNode(QString("TextRoot"));
SoROUTE67->setToField(QString("set_translation"));
SoNode16->addChild(*SoROUTE67);

SoROUTE* SoROUTE68 = new SoROUTE();
SoROUTE68->setFromNode(QString("Leif_HumanoidRoot_TranslationInterpolator"));
SoROUTE68->setFromField(QString("value_changed"));
SoROUTE68->setToNode(QString("Root4"));
SoROUTE68->setToField(QString("set_translation"));
SoNode16->addChild(*SoROUTE68);

SoROUTE* SoROUTE69 = new SoROUTE();
SoROUTE69->setFromNode(QString("Lily_HumanoidRoot_TranslationInterpolator"));
SoROUTE69->setFromField(QString("value_changed"));
SoROUTE69->setToNode(QString("Root5"));
SoROUTE69->setToField(QString("set_translation"));
SoNode16->addChild(*SoROUTE69);

SoROUTE* SoROUTE70 = new SoROUTE();
SoROUTE70->setFromNode(QString("Tufani_HumanoidRoot_TranslationInterpolator"));
SoROUTE70->setFromField(QString("value_changed"));
SoROUTE70->setToNode(QString("Root6"));
SoROUTE70->setToField(QString("set_translation"));
SoNode16->addChild(*SoROUTE70);

SoSceneManager0->setSceneGraph(*SoNode16);

return 0;
}
