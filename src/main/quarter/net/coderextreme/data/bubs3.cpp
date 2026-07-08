
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
Someta2->setContent(QString("bubs3.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("creator"));
Someta3->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("Tour around a prismatic sphere"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("generator"));
Someta5->setContent(QString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("identifier"));
Someta6->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/bubs.x3d"));
Sohead1->addMeta(*Someta6);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode7 = new SoNode();
SoNavigationInfo* SoNavigationInfo8 = new SoNavigationInfo();
SoNavigationInfo8->setType(new QString[]{QString("EXAMINE")}, 1);
SoNode7->addChild(*SoNavigationInfo8);

SoViewpoint* SoViewpoint9 = new SoViewpoint();
SoViewpoint9->setPosition(new float[]{0.0,0.0,4.0});
SoViewpoint9->setOrientation(new float[]{1.0,0.0,0.0,0.0});
SoViewpoint9->setDescription(QString("Bubbles in action"));
SoNode7->addChild(*SoViewpoint9);

SoBackground* SoBackground10 = new SoBackground();
SoBackground10->setBackUrl(new QString[]{QString("../resources/images/BK.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png")}, 2);
SoBackground10->setBottomUrl(new QString[]{QString("../resources/images/BT.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png")}, 2);
SoBackground10->setFrontUrl(new QString[]{QString("../resources/images/FR.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png")}, 2);
SoBackground10->setLeftUrl(new QString[]{QString("../resources/images/LF.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png")}, 2);
SoBackground10->setRightUrl(new QString[]{QString("../resources/images/RT.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png")}, 2);
SoBackground10->setTopUrl(new QString[]{QString("../resources/images/TP.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png")}, 2);
SoNode7->addChild(*SoBackground10);

SoTransform* SoTransform11 = new SoTransform();
SoTransform11->setDEF(QString("DECLBubble_transformA"));
SoShape* SoShape12 = new SoShape();
SoSphere* SoSphere13 = new SoSphere();
SoSphere13->setRadius(0.25);
SoShape12->setGeometry(*SoSphere13);

SoVRMLAppearance* SoVRMLAppearance14 = new SoVRMLAppearance();
SoMaterial* SoMaterial15 = new SoMaterial();
SoMaterial15->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoMaterial15->setTransparency(0.2);
SoVRMLAppearance14->addChild(*SoMaterial15);

SoShape12->addChild(*SoVRMLAppearance14);

SoTransform11->addChild(*SoShape12);

SoScript* SoScript16 = new SoScript();
SoScript16->setDEF(QString("DECLBubble_bubbleA_bounce"));
Sofield* Sofield17 = new Sofield();
Sofield17->setName(QString("scale"));
Sofield17->setAccessType(QString("inputOutput"));
Sofield17->setType(QString("SFVec3f"));
Sofield17->setValue(QString("1 1 1"));
SoScript16->addChild(*Sofield17);

Sofield* Sofield18 = new Sofield();
Sofield18->setName(QString("translation"));
Sofield18->setAccessType(QString("inputOutput"));
Sofield18->setType(QString("SFVec3f"));
Sofield18->setValue(QString("0 0 0"));
SoScript16->addChild(*Sofield18);

Sofield* Sofield19 = new Sofield();
Sofield19->setName(QString("velocity"));
Sofield19->setAccessType(QString("inputOutput"));
Sofield19->setType(QString("SFVec3f"));
Sofield19->setValue(QString("0 0 0"));
SoScript16->addChild(*Sofield19);

Sofield* Sofield20 = new Sofield();
Sofield20->setName(QString("scalvel"));
Sofield20->setAccessType(QString("inputOutput"));
Sofield20->setType(QString("SFVec3f"));
Sofield20->setValue(QString("0 0 0"));
SoScript16->addChild(*Sofield20);

Sofield* Sofield21 = new Sofield();
Sofield21->setName(QString("set_fraction"));
Sofield21->setAccessType(QString("inputOnly"));
Sofield21->setType(QString("SFFloat"));
SoScript16->addChild(*Sofield21);


//SoScript16->setSourceCode(QString("ecmascript:")+
//_T("function initialize() {")+
//_T("    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);")+
//_T("    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);")+
//_T("}")+
//_T("function set_fraction(value) {")+
//_T("    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);")+
//_T("    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);")+
//_T("    // if you get to far away or too big, explode")+
//_T("    if ( Math.abs(translation.x) > 256) {")+
//_T("	translation.x = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if ( Math.abs(translation.y) > 256) {")+
//_T("	translation.y = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if ( Math.abs(translation.z) > 256) {")+
//_T("	translation.z = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if (Math.abs(scale.x) > 20) {")+
//_T("	scale.x = scale.x/20;")+
//_T("	translation.x = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if (Math.abs(scale.y) > 20) {")+
//_T("	scale.y = scale.y/20;")+
//_T("	translation.y = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if (Math.abs(scale.z) > 20) {")+
//_T("	scale.z = scale.z/20;")+
//_T("	translation.z = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("}"));
SoTransform11->addChild(*SoScript16);

SoTimeSensor* SoTimeSensor22 = new SoTimeSensor();
SoTimeSensor22->setDEF(QString("DECLBubble_bubbleA_bubbleClock"));
SoTimeSensor22->setCycleInterval(10);
SoTimeSensor22->setLoop(true);
SoTransform11->addChild(*SoTimeSensor22);

SoROUTE* SoROUTE23 = new SoROUTE();
SoROUTE23->setFromNode(QString("DECLBubble_bubbleA_bounce"));
SoROUTE23->setFromField(QString("translation_changed"));
SoROUTE23->setToNode(QString("DECLBubble_transformA"));
SoROUTE23->setToField(QString("set_translation"));
SoTransform11->addChild(*SoROUTE23);

SoROUTE* SoROUTE24 = new SoROUTE();
SoROUTE24->setFromNode(QString("DECLBubble_bubbleA_bounce"));
SoROUTE24->setFromField(QString("scale_changed"));
SoROUTE24->setToNode(QString("DECLBubble_transformA"));
SoROUTE24->setToField(QString("set_scale"));
SoTransform11->addChild(*SoROUTE24);

SoROUTE* SoROUTE25 = new SoROUTE();
SoROUTE25->setFromNode(QString("DECLBubble_bubbleA_bubbleClock"));
SoROUTE25->setFromField(QString("fraction_changed"));
SoROUTE25->setToNode(QString("DECLBubble_bubbleA_bounce"));
SoROUTE25->setToField(QString("set_fraction"));
SoTransform11->addChild(*SoROUTE25);

SoNode7->addChild(*SoTransform11);

SoTransform* SoTransform26 = new SoTransform();
SoTransform26->setDEF(QString("DECLBubble_transformB"));
SoShape* SoShape27 = new SoShape();
SoSphere* SoSphere28 = new SoSphere();
SoSphere28->setRadius(0.25);
SoShape27->setGeometry(*SoSphere28);

SoVRMLAppearance* SoVRMLAppearance29 = new SoVRMLAppearance();
SoMaterial* SoMaterial30 = new SoMaterial();
SoMaterial30->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoMaterial30->setTransparency(0.2);
SoVRMLAppearance29->addChild(*SoMaterial30);

SoShape27->addChild(*SoVRMLAppearance29);

SoTransform26->addChild(*SoShape27);

SoScript* SoScript31 = new SoScript();
SoScript31->setDEF(QString("DECLBubble_bubbleB_bounce"));
Sofield* Sofield32 = new Sofield();
Sofield32->setName(QString("scale"));
Sofield32->setAccessType(QString("inputOutput"));
Sofield32->setType(QString("SFVec3f"));
Sofield32->setValue(QString("1 1 1"));
SoScript31->addChild(*Sofield32);

Sofield* Sofield33 = new Sofield();
Sofield33->setName(QString("translation"));
Sofield33->setAccessType(QString("inputOutput"));
Sofield33->setType(QString("SFVec3f"));
Sofield33->setValue(QString("0 0 0"));
SoScript31->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("velocity"));
Sofield34->setAccessType(QString("inputOutput"));
Sofield34->setType(QString("SFVec3f"));
Sofield34->setValue(QString("0 0 0"));
SoScript31->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("scalvel"));
Sofield35->setAccessType(QString("inputOutput"));
Sofield35->setType(QString("SFVec3f"));
Sofield35->setValue(QString("0 0 0"));
SoScript31->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("set_fraction"));
Sofield36->setAccessType(QString("inputOnly"));
Sofield36->setType(QString("SFFloat"));
SoScript31->addChild(*Sofield36);


//SoScript31->setSourceCode(QString("ecmascript:")+
//_T("function initialize() {")+
//_T("    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);")+
//_T("    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);")+
//_T("}")+
//_T("function set_fraction(value) {")+
//_T("    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);")+
//_T("    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);")+
//_T("    // if you get to far away or too big, explode")+
//_T("    if ( Math.abs(translation.x) > 256) {")+
//_T("	translation.x = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if ( Math.abs(translation.y) > 256) {")+
//_T("	translation.y = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if ( Math.abs(translation.z) > 256) {")+
//_T("	translation.z = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if (Math.abs(scale.x) > 20) {")+
//_T("	scale.x = scale.x/20;")+
//_T("	translation.x = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if (Math.abs(scale.y) > 20) {")+
//_T("	scale.y = scale.y/20;")+
//_T("	translation.y = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if (Math.abs(scale.z) > 20) {")+
//_T("	scale.z = scale.z/20;")+
//_T("	translation.z = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("}"));
SoTransform26->addChild(*SoScript31);

SoTimeSensor* SoTimeSensor37 = new SoTimeSensor();
SoTimeSensor37->setDEF(QString("DECLBubble_bubbleB_bubbleClock"));
SoTimeSensor37->setCycleInterval(10);
SoTimeSensor37->setLoop(true);
SoTransform26->addChild(*SoTimeSensor37);

SoROUTE* SoROUTE38 = new SoROUTE();
SoROUTE38->setFromNode(QString("DECLBubble_bubbleB_bounce"));
SoROUTE38->setFromField(QString("translation_changed"));
SoROUTE38->setToNode(QString("DECLBubble_transformB"));
SoROUTE38->setToField(QString("set_translation"));
SoTransform26->addChild(*SoROUTE38);

SoROUTE* SoROUTE39 = new SoROUTE();
SoROUTE39->setFromNode(QString("DECLBubble_bubbleB_bounce"));
SoROUTE39->setFromField(QString("scale_changed"));
SoROUTE39->setToNode(QString("DECLBubble_transformB"));
SoROUTE39->setToField(QString("set_scale"));
SoTransform26->addChild(*SoROUTE39);

SoROUTE* SoROUTE40 = new SoROUTE();
SoROUTE40->setFromNode(QString("DECLBubble_bubbleB_bubbleClock"));
SoROUTE40->setFromField(QString("fraction_changed"));
SoROUTE40->setToNode(QString("DECLBubble_bubbleB_bounce"));
SoROUTE40->setToField(QString("set_fraction"));
SoTransform26->addChild(*SoROUTE40);

SoNode7->addChild(*SoTransform26);

SoTransform* SoTransform41 = new SoTransform();
SoTransform41->setDEF(QString("DECLBubble_transformC"));
SoShape* SoShape42 = new SoShape();
SoSphere* SoSphere43 = new SoSphere();
SoSphere43->setRadius(0.25);
SoShape42->setGeometry(*SoSphere43);

SoVRMLAppearance* SoVRMLAppearance44 = new SoVRMLAppearance();
SoMaterial* SoMaterial45 = new SoMaterial();
SoMaterial45->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoMaterial45->setTransparency(0.2);
SoVRMLAppearance44->addChild(*SoMaterial45);

SoShape42->addChild(*SoVRMLAppearance44);

SoTransform41->addChild(*SoShape42);

SoScript* SoScript46 = new SoScript();
SoScript46->setDEF(QString("DECLBubble_bubbleC_bounce"));
Sofield* Sofield47 = new Sofield();
Sofield47->setName(QString("scale"));
Sofield47->setAccessType(QString("inputOutput"));
Sofield47->setType(QString("SFVec3f"));
Sofield47->setValue(QString("1 1 1"));
SoScript46->addChild(*Sofield47);

Sofield* Sofield48 = new Sofield();
Sofield48->setName(QString("translation"));
Sofield48->setAccessType(QString("inputOutput"));
Sofield48->setType(QString("SFVec3f"));
Sofield48->setValue(QString("0 0 0"));
SoScript46->addChild(*Sofield48);

Sofield* Sofield49 = new Sofield();
Sofield49->setName(QString("velocity"));
Sofield49->setAccessType(QString("inputOutput"));
Sofield49->setType(QString("SFVec3f"));
Sofield49->setValue(QString("0 0 0"));
SoScript46->addChild(*Sofield49);

Sofield* Sofield50 = new Sofield();
Sofield50->setName(QString("scalvel"));
Sofield50->setAccessType(QString("inputOutput"));
Sofield50->setType(QString("SFVec3f"));
Sofield50->setValue(QString("0 0 0"));
SoScript46->addChild(*Sofield50);

Sofield* Sofield51 = new Sofield();
Sofield51->setName(QString("set_fraction"));
Sofield51->setAccessType(QString("inputOnly"));
Sofield51->setType(QString("SFFloat"));
SoScript46->addChild(*Sofield51);


//SoScript46->setSourceCode(QString("ecmascript:")+
//_T("function initialize() {")+
//_T("    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);")+
//_T("    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);")+
//_T("}")+
//_T("function set_fraction(value) {")+
//_T("    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);")+
//_T("    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);")+
//_T("    // if you get to far away or too big, explode")+
//_T("    if ( Math.abs(translation.x) > 256) {")+
//_T("	translation.x = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if ( Math.abs(translation.y) > 256) {")+
//_T("	translation.y = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if ( Math.abs(translation.z) > 256) {")+
//_T("	translation.z = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if (Math.abs(scale.x) > 20) {")+
//_T("	scale.x = scale.x/20;")+
//_T("	translation.x = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if (Math.abs(scale.y) > 20) {")+
//_T("	scale.y = scale.y/20;")+
//_T("	translation.y = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if (Math.abs(scale.z) > 20) {")+
//_T("	scale.z = scale.z/20;")+
//_T("	translation.z = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("}"));
SoTransform41->addChild(*SoScript46);

SoTimeSensor* SoTimeSensor52 = new SoTimeSensor();
SoTimeSensor52->setDEF(QString("DECLBubble_bubbleC_bubbleClock"));
SoTimeSensor52->setCycleInterval(10);
SoTimeSensor52->setLoop(true);
SoTransform41->addChild(*SoTimeSensor52);

SoROUTE* SoROUTE53 = new SoROUTE();
SoROUTE53->setFromNode(QString("DECLBubble_bubbleC_bounce"));
SoROUTE53->setFromField(QString("translation_changed"));
SoROUTE53->setToNode(QString("DECLBubble_transformC"));
SoROUTE53->setToField(QString("set_translation"));
SoTransform41->addChild(*SoROUTE53);

SoROUTE* SoROUTE54 = new SoROUTE();
SoROUTE54->setFromNode(QString("DECLBubble_bubbleC_bounce"));
SoROUTE54->setFromField(QString("scale_changed"));
SoROUTE54->setToNode(QString("DECLBubble_transformC"));
SoROUTE54->setToField(QString("set_scale"));
SoTransform41->addChild(*SoROUTE54);

SoROUTE* SoROUTE55 = new SoROUTE();
SoROUTE55->setFromNode(QString("DECLBubble_bubbleC_bubbleClock"));
SoROUTE55->setFromField(QString("fraction_changed"));
SoROUTE55->setToNode(QString("DECLBubble_bubbleC_bounce"));
SoROUTE55->setToField(QString("set_fraction"));
SoTransform41->addChild(*SoROUTE55);

SoNode7->addChild(*SoTransform41);

SoTransform* SoTransform56 = new SoTransform();
SoTransform56->setDEF(QString("DECLBubble_transformD"));
SoShape* SoShape57 = new SoShape();
SoSphere* SoSphere58 = new SoSphere();
SoSphere58->setRadius(0.25);
SoShape57->setGeometry(*SoSphere58);

SoVRMLAppearance* SoVRMLAppearance59 = new SoVRMLAppearance();
SoMaterial* SoMaterial60 = new SoMaterial();
SoMaterial60->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoMaterial60->setTransparency(0.2);
SoVRMLAppearance59->addChild(*SoMaterial60);

SoShape57->addChild(*SoVRMLAppearance59);

SoTransform56->addChild(*SoShape57);

SoScript* SoScript61 = new SoScript();
SoScript61->setDEF(QString("DECLBubble_bubbleD_bounce"));
Sofield* Sofield62 = new Sofield();
Sofield62->setName(QString("scale"));
Sofield62->setAccessType(QString("inputOutput"));
Sofield62->setType(QString("SFVec3f"));
Sofield62->setValue(QString("1 1 1"));
SoScript61->addChild(*Sofield62);

Sofield* Sofield63 = new Sofield();
Sofield63->setName(QString("translation"));
Sofield63->setAccessType(QString("inputOutput"));
Sofield63->setType(QString("SFVec3f"));
Sofield63->setValue(QString("0 0 0"));
SoScript61->addChild(*Sofield63);

Sofield* Sofield64 = new Sofield();
Sofield64->setName(QString("velocity"));
Sofield64->setAccessType(QString("inputOutput"));
Sofield64->setType(QString("SFVec3f"));
Sofield64->setValue(QString("0 0 0"));
SoScript61->addChild(*Sofield64);

Sofield* Sofield65 = new Sofield();
Sofield65->setName(QString("scalvel"));
Sofield65->setAccessType(QString("inputOutput"));
Sofield65->setType(QString("SFVec3f"));
Sofield65->setValue(QString("0 0 0"));
SoScript61->addChild(*Sofield65);

Sofield* Sofield66 = new Sofield();
Sofield66->setName(QString("set_fraction"));
Sofield66->setAccessType(QString("inputOnly"));
Sofield66->setType(QString("SFFloat"));
SoScript61->addChild(*Sofield66);


//SoScript61->setSourceCode(QString("ecmascript:")+
//_T("function initialize() {")+
//_T("    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);")+
//_T("    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);")+
//_T("}")+
//_T("function set_fraction(value) {")+
//_T("    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);")+
//_T("    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);")+
//_T("    // if you get to far away or too big, explode")+
//_T("    if ( Math.abs(translation.x) > 256) {")+
//_T("	translation.x = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if ( Math.abs(translation.y) > 256) {")+
//_T("	translation.y = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if ( Math.abs(translation.z) > 256) {")+
//_T("	translation.z = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if (Math.abs(scale.x) > 20) {")+
//_T("	scale.x = scale.x/20;")+
//_T("	translation.x = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if (Math.abs(scale.y) > 20) {")+
//_T("	scale.y = scale.y/20;")+
//_T("	translation.y = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if (Math.abs(scale.z) > 20) {")+
//_T("	scale.z = scale.z/20;")+
//_T("	translation.z = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("}"));
SoTransform56->addChild(*SoScript61);

SoTimeSensor* SoTimeSensor67 = new SoTimeSensor();
SoTimeSensor67->setDEF(QString("DECLBubble_bubbleD_bubbleClock"));
SoTimeSensor67->setCycleInterval(10);
SoTimeSensor67->setLoop(true);
SoTransform56->addChild(*SoTimeSensor67);

SoROUTE* SoROUTE68 = new SoROUTE();
SoROUTE68->setFromNode(QString("DECLBubble_bubbleD_bounce"));
SoROUTE68->setFromField(QString("translation_changed"));
SoROUTE68->setToNode(QString("DECLBubble_transformD"));
SoROUTE68->setToField(QString("set_translation"));
SoTransform56->addChild(*SoROUTE68);

SoROUTE* SoROUTE69 = new SoROUTE();
SoROUTE69->setFromNode(QString("DECLBubble_bubbleD_bounce"));
SoROUTE69->setFromField(QString("scale_changed"));
SoROUTE69->setToNode(QString("DECLBubble_transformD"));
SoROUTE69->setToField(QString("set_scale"));
SoTransform56->addChild(*SoROUTE69);

SoROUTE* SoROUTE70 = new SoROUTE();
SoROUTE70->setFromNode(QString("DECLBubble_bubbleD_bubbleClock"));
SoROUTE70->setFromField(QString("fraction_changed"));
SoROUTE70->setToNode(QString("DECLBubble_bubbleD_bounce"));
SoROUTE70->setToField(QString("set_fraction"));
SoTransform56->addChild(*SoROUTE70);

SoNode7->addChild(*SoTransform56);

SoSceneManager0->setSceneGraph(*SoNode7);

return 0;
}
