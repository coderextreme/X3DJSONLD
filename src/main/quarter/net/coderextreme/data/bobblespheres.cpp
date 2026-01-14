
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
Socomponent2->setName(QString("X_ITE"));
Socomponent2->setLevel(1);
Sohead1->addChild(*Socomponent2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("title"));
Someta3->setContent(QString("Bobble Spheres Full Animation (Final Working)"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("Full scene with corrected Script nodes that use the initialize() function to safely reference nodes and prevent race conditions."));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Generated from Python script"));
Sohead1->addMeta(*Someta5);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode6 = new SoNode();
SoWorldInfo* SoWorldInfo7 = new SoWorldInfo();
SoWorldInfo7->setTitle(QString("Bobble Spheres (PBR Full Animation)"));
SoNode6->addChild(*SoWorldInfo7);

SoNavigationInfo* SoNavigationInfo8 = new SoNavigationInfo();
SoNode6->addChild(*SoNavigationInfo8);

SoBackground* SoBackground9 = new SoBackground();
SoBackground9->setSkyAngle(new float[]{1.57}, 1);
SoBackground9->setSkyColor(new float[]{0.15,0.25,0.8,0.9,0.9,0.9}, 6);
SoNode6->addChild(*SoBackground9);

SoViewpoint* SoViewpoint10 = new SoViewpoint();
SoViewpoint10->setDescription(QString("Initial Camera"));
SoViewpoint10->setPosition(new float[]{-70.0,15.0,-25.0});
SoViewpoint10->setOrientation(new float[]{0.147,0.989,0.005,-1.82});
SoViewpoint10->setFieldOfView(0.349);
SoNode6->addChild(*SoViewpoint10);

SoDirectionalLight* SoDirectionalLight11 = new SoDirectionalLight();
SoDirectionalLight11->setDirection(new float[]{-0.5,-1.0,-0.5});
SoDirectionalLight11->setIntensity(2);
SoNode6->addChild(*SoDirectionalLight11);

//Static objects
SoTransform* SoTransform12 = new SoTransform();
SoTransform12->setTranslation(new float[]{0.0,-1000.0,-1.0});
SoShape* SoShape13 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance14 = new SoVRMLAppearance();
SoPhysicalMaterial* SoPhysicalMaterial15 = new SoPhysicalMaterial();
SoPhysicalMaterial15->setBaseColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance14->addChild(*SoPhysicalMaterial15);

SoShape13->addChild(*SoVRMLAppearance14);

SoSphere* SoSphere16 = new SoSphere();
SoSphere16->setRadius(1000);
SoShape13->setGeometry(*SoSphere16);

SoTransform12->addChild(*SoShape13);

SoNode6->addChild(*SoTransform12);

SoTransform* SoTransform17 = new SoTransform();
SoTransform17->setTranslation(new float[]{0.0,1.0,0.0});
SoShape* SoShape18 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance19 = new SoVRMLAppearance();
SoPhysicalMaterial* SoPhysicalMaterial20 = new SoPhysicalMaterial();
SoPhysicalMaterial20->setBaseColor(new float[]{0.9,0.9,0.9});
SoPhysicalMaterial20->setTransmissionFactor("0.9");
SoPhysicalMaterial20->setRoughness(0);
SoPhysicalMaterial20->setIndexOfRefraction("1.5");
SoVRMLAppearance19->addChild(*SoPhysicalMaterial20);

SoShape18->addChild(*SoVRMLAppearance19);

SoSphere* SoSphere21 = new SoSphere();
SoShape18->setGeometry(*SoSphere21);

SoTransform17->addChild(*SoShape18);

SoNode6->addChild(*SoTransform17);

SoTransform* SoTransform22 = new SoTransform();
SoTransform22->setTranslation(new float[]{-4.0,1.0,0.0});
SoShape* SoShape23 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance24 = new SoVRMLAppearance();
SoPhysicalMaterial* SoPhysicalMaterial25 = new SoPhysicalMaterial();
SoPhysicalMaterial25->setBaseColor(new float[]{1.0,0.95,0.9});
SoPhysicalMaterial25->setTransmissionFactor("0.8");
SoPhysicalMaterial25->setRoughness(0.05);
SoPhysicalMaterial25->setIndexOfRefraction("1.1");
SoVRMLAppearance24->addChild(*SoPhysicalMaterial25);

SoShape23->addChild(*SoVRMLAppearance24);

SoSphere* SoSphere26 = new SoSphere();
SoShape23->setGeometry(*SoSphere26);

SoTransform22->addChild(*SoShape23);

SoNode6->addChild(*SoTransform22);

SoTransform* SoTransform27 = new SoTransform();
SoTransform27->setTranslation(new float[]{4.0,1.0,0.0});
SoShape* SoShape28 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance29 = new SoVRMLAppearance();
SoPhysicalMaterial* SoPhysicalMaterial30 = new SoPhysicalMaterial();
SoPhysicalMaterial30->setBaseColor(new float[]{0.7,0.6,0.5});
SoPhysicalMaterial30->setRoughness(0.1);
SoVRMLAppearance29->addChild(*SoPhysicalMaterial30);

SoShape28->addChild(*SoVRMLAppearance29);

SoSphere* SoSphere31 = new SoSphere();
SoShape28->setGeometry(*SoSphere31);

SoTransform27->addChild(*SoShape28);

SoNode6->addChild(*SoTransform27);

//=== DYNAMICALLY GENERATED SPHERES ===
//Example: Matte Sphere with animated color and roughness (Using initialize())
SoTransform* SoTransform32 = new SoTransform();
SoTransform32->setDEF(QString("T_0"));
SoTransform32->setTranslation(new float[]{-10.871,0.2,-10.453});
SoShape* SoShape33 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance34 = new SoVRMLAppearance();
SoPhysicalMaterial* SoPhysicalMaterial35 = new SoPhysicalMaterial();
SoPhysicalMaterial35->setDEF(QString("M_0"));
SoPhysicalMaterial35->setBaseColor(new float[]{0.627,0.003,0.165});
SoVRMLAppearance34->addChild(*SoPhysicalMaterial35);

SoShape33->addChild(*SoVRMLAppearance34);

SoSphere* SoSphere36 = new SoSphere();
SoSphere36->setRadius(0.2);
SoShape33->setGeometry(*SoSphere36);

SoTransform32->addChild(*SoShape33);

SoNode6->addChild(*SoTransform32);

SoTimeSensor* SoTimeSensor37 = new SoTimeSensor();
SoTimeSensor37->setDEF(QString("C_0"));
SoTimeSensor37->setCycleInterval(5.21);
SoTimeSensor37->setLoop(true);
SoNode6->addChild(*SoTimeSensor37);

SoPositionInterpolator* SoPositionInterpolator38 = new SoPositionInterpolator();
SoPositionInterpolator38->setDEF(QString("PI_0"));
SoPositionInterpolator38->setKey(new float[]{0.0,0.5,1.0}, 3);
SoPositionInterpolator38->setKeyValue(new float[]{-10.871,0.2,-10.453,-10.871,0.6,-10.453,-10.871,0.2,-10.453}, 9);
SoNode6->addChild(*SoPositionInterpolator38);

SoColorInterpolator* SoColorInterpolator39 = new SoColorInterpolator();
SoColorInterpolator39->setDEF(QString("CI_0"));
SoColorInterpolator39->setKey(new float[]{0.0,0.5,1.0}, 3);
SoColorInterpolator39->setKeyValue(new float[]{0.627,0.003,0.165,0.011,0.583,0.443,0.627,0.003,0.165}, 9);
SoNode6->addChild(*SoColorInterpolator39);

SoScalarInterpolator* SoScalarInterpolator40 = new SoScalarInterpolator();
SoScalarInterpolator40->setDEF(QString("SI_0"));
SoScalarInterpolator40->setKey(new float[]{0.0,0.5,1.0}, 3);
SoScalarInterpolator40->setKeyValue(new float[]{1.0,0.4,1.0}, 3);
SoNode6->addChild(*SoScalarInterpolator40);

SoScript* SoScript41 = new SoScript();
SoScript41->setDEF(QString("Animator_0"));
Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("set_color"));
Sofield42->setType(QString("SFColor"));
Sofield42->setAccessType(QString("inputOnly"));
SoScript41->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("set_roughness"));
Sofield43->setType(QString("SFFloat"));
Sofield43->setAccessType(QString("inputOnly"));
SoScript41->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("targetMaterial"));
Sofield44->setType(QString("SFNode"));
Sofield44->setAccessType(QString("initializeOnly"));
SoPhysicalMaterial* SoPhysicalMaterial45 = new SoPhysicalMaterial();
SoPhysicalMaterial45->setUSE(QString("M_0"));
Sofield44->addChild(SoPhysicalMaterial45);

SoScript41->addChild(*Sofield44);


//SoScript41->setSourceCode(QString("ecmascript:")+
//_T("        var matNode = null; // Variable to hold the material node reference")+
//_T("        function initialize() {")+
//_T("          // This function runs AFTER the targetMaterial field is connected.")+
//_T("          // We safely store the reference to the actual material node.")+
//_T("          matNode = targetMaterial.value;")+
//_T("        }")+
//_T("        function set_color(value, timestamp) {")+
//_T("          if (matNode) { // Check if the node reference was stored")+
//_T("            matNode.baseColor = value;")+
//_T("          }")+
//_T("        }")+
//_T("        function set_roughness(value, timestamp) {")+
//_T("          if (matNode) {")+
//_T("            matNode.roughness = value;")+
//_T("          }")+
//_T("        }"));
SoNode6->addChild(*SoScript41);

SoROUTE* SoROUTE46 = new SoROUTE();
SoROUTE46->setFromNode(QString("C_0"));
SoROUTE46->setFromField(QString("fraction_changed"));
SoROUTE46->setToNode(QString("PI_0"));
SoROUTE46->setToField(QString("set_fraction"));
SoNode6->addChild(*SoROUTE46);

SoROUTE* SoROUTE47 = new SoROUTE();
SoROUTE47->setFromNode(QString("PI_0"));
SoROUTE47->setFromField(QString("value_changed"));
SoROUTE47->setToNode(QString("T_0"));
SoROUTE47->setToField(QString("set_translation"));
SoNode6->addChild(*SoROUTE47);

SoROUTE* SoROUTE48 = new SoROUTE();
SoROUTE48->setFromNode(QString("C_0"));
SoROUTE48->setFromField(QString("fraction_changed"));
SoROUTE48->setToNode(QString("CI_0"));
SoROUTE48->setToField(QString("set_fraction"));
SoNode6->addChild(*SoROUTE48);

SoROUTE* SoROUTE49 = new SoROUTE();
SoROUTE49->setFromNode(QString("CI_0"));
SoROUTE49->setFromField(QString("value_changed"));
SoROUTE49->setToNode(QString("Animator_0"));
SoROUTE49->setToField(QString("set_color"));
SoNode6->addChild(*SoROUTE49);

SoROUTE* SoROUTE50 = new SoROUTE();
SoROUTE50->setFromNode(QString("C_0"));
SoROUTE50->setFromField(QString("fraction_changed"));
SoROUTE50->setToNode(QString("SI_0"));
SoROUTE50->setToField(QString("set_fraction"));
SoNode6->addChild(*SoROUTE50);

SoROUTE* SoROUTE51 = new SoROUTE();
SoROUTE51->setFromNode(QString("SI_0"));
SoROUTE51->setFromField(QString("value_changed"));
SoROUTE51->setToNode(QString("Animator_0"));
SoROUTE51->setToField(QString("set_roughness"));
SoNode6->addChild(*SoROUTE51);

//Example: Metal Sphere with animated roughness (Using initialize())
SoTransform* SoTransform52 = new SoTransform();
SoTransform52->setDEF(QString("T_1"));
SoTransform52->setTranslation(new float[]{-10.411,0.2,-9.16});
SoShape* SoShape53 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance54 = new SoVRMLAppearance();
SoPhysicalMaterial* SoPhysicalMaterial55 = new SoPhysicalMaterial();
SoPhysicalMaterial55->setDEF(QString("M_1"));
SoPhysicalMaterial55->setBaseColor(new float[]{0.707,0.888,0.536});
SoPhysicalMaterial55->setRoughness(0.2);
SoVRMLAppearance54->addChild(*SoPhysicalMaterial55);

SoShape53->addChild(*SoVRMLAppearance54);

SoSphere* SoSphere56 = new SoSphere();
SoSphere56->setRadius(0.2);
SoShape53->setGeometry(*SoSphere56);

SoTransform52->addChild(*SoShape53);

SoNode6->addChild(*SoTransform52);

SoTimeSensor* SoTimeSensor57 = new SoTimeSensor();
SoTimeSensor57->setDEF(QString("C_1"));
SoTimeSensor57->setCycleInterval(4.15);
SoTimeSensor57->setLoop(true);
SoNode6->addChild(*SoTimeSensor57);

SoPositionInterpolator* SoPositionInterpolator58 = new SoPositionInterpolator();
SoPositionInterpolator58->setDEF(QString("PI_1"));
SoPositionInterpolator58->setKey(new float[]{0.0,0.5,1.0}, 3);
SoPositionInterpolator58->setKeyValue(new float[]{-10.411,0.2,-9.16,-10.411,0.6,-9.16,-10.411,0.2,-9.16}, 9);
SoNode6->addChild(*SoPositionInterpolator58);

SoScalarInterpolator* SoScalarInterpolator59 = new SoScalarInterpolator();
SoScalarInterpolator59->setDEF(QString("SI_1"));
SoScalarInterpolator59->setKey(new float[]{0.0,0.5,1.0}, 3);
SoScalarInterpolator59->setKeyValue(new float[]{0.5,0.0,0.5}, 3);
SoNode6->addChild(*SoScalarInterpolator59);

SoScript* SoScript60 = new SoScript();
SoScript60->setDEF(QString("Animator_1"));
Sofield* Sofield61 = new Sofield();
Sofield61->setName(QString("set_roughness"));
Sofield61->setType(QString("SFFloat"));
Sofield61->setAccessType(QString("inputOnly"));
SoScript60->addChild(*Sofield61);

Sofield* Sofield62 = new Sofield();
Sofield62->setName(QString("targetMaterial"));
Sofield62->setType(QString("SFNode"));
Sofield62->setAccessType(QString("initializeOnly"));
SoPhysicalMaterial* SoPhysicalMaterial63 = new SoPhysicalMaterial();
SoPhysicalMaterial63->setUSE(QString("M_1"));
Sofield62->addChild(SoPhysicalMaterial63);

SoScript60->addChild(*Sofield62);


//SoScript60->setSourceCode(QString("ecmascript:")+
//_T("        var matNode = null;")+
//_T("        function initialize() {")+
//_T("          matNode = targetMaterial.value;")+
//_T("        }")+
//_T("        function set_roughness(value, timestamp) {")+
//_T("          if (matNode) {")+
//_T("            matNode.roughness = value;")+
//_T("          }")+
//_T("        }"));
SoNode6->addChild(*SoScript60);

SoROUTE* SoROUTE64 = new SoROUTE();
SoROUTE64->setFromNode(QString("C_1"));
SoROUTE64->setFromField(QString("fraction_changed"));
SoROUTE64->setToNode(QString("PI_1"));
SoROUTE64->setToField(QString("set_fraction"));
SoNode6->addChild(*SoROUTE64);

SoROUTE* SoROUTE65 = new SoROUTE();
SoROUTE65->setFromNode(QString("PI_1"));
SoROUTE65->setFromField(QString("value_changed"));
SoROUTE65->setToNode(QString("T_1"));
SoROUTE65->setToField(QString("set_translation"));
SoNode6->addChild(*SoROUTE65);

SoROUTE* SoROUTE66 = new SoROUTE();
SoROUTE66->setFromNode(QString("C_1"));
SoROUTE66->setFromField(QString("fraction_changed"));
SoROUTE66->setToNode(QString("SI_1"));
SoROUTE66->setToField(QString("set_fraction"));
SoNode6->addChild(*SoROUTE66);

SoROUTE* SoROUTE67 = new SoROUTE();
SoROUTE67->setFromNode(QString("SI_1"));
SoROUTE67->setFromField(QString("value_changed"));
SoROUTE67->setToNode(QString("Animator_1"));
SoROUTE67->setToField(QString("set_roughness"));
SoNode6->addChild(*SoROUTE67);

//The extension-based spheres were already correct and need no changes
SoTransform* SoTransform68 = new SoTransform();
SoTransform68->setDEF(QString("T_2"));
SoTransform68->setTranslation(new float[]{-10.155,0.2,-8.324});
SoShape* SoShape69 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance70 = new SoVRMLAppearance();
SoPhysicalMaterial* SoPhysicalMaterial71 = new SoPhysicalMaterial();
SoPhysicalMaterial71->setTransmissionFactor("0.95");
SoPhysicalMaterial71->setRoughness(0.05);
SoIORMaterialExtension* SoIORMaterialExtension72 = new SoIORMaterialExtension();
SoIORMaterialExtension72->setDEF(QString("IOR_2"));
SoIORMaterialExtension72->setIndexOfRefraction(QString("1.5"));
SoPhysicalMaterial71->setIORMaterialExtension(SoIORMaterialExtension72);

SoVRMLAppearance70->addChild(*SoPhysicalMaterial71);

SoShape69->addChild(*SoVRMLAppearance70);

SoSphere* SoSphere73 = new SoSphere();
SoSphere73->setRadius(0.2);
SoShape69->setGeometry(*SoSphere73);

SoTransform68->addChild(*SoShape69);

SoNode6->addChild(*SoTransform68);

SoTimeSensor* SoTimeSensor74 = new SoTimeSensor();
SoTimeSensor74->setDEF(QString("C_2"));
SoTimeSensor74->setCycleInterval(3.88);
SoTimeSensor74->setLoop(true);
SoNode6->addChild(*SoTimeSensor74);

SoPositionInterpolator* SoPositionInterpolator75 = new SoPositionInterpolator();
SoPositionInterpolator75->setDEF(QString("PI_2"));
SoPositionInterpolator75->setKey(new float[]{0.0,0.5,1.0}, 3);
SoPositionInterpolator75->setKeyValue(new float[]{-10.155,0.2,-8.324,-10.155,0.6,-8.324,-10.155,0.2,-8.324}, 9);
SoNode6->addChild(*SoPositionInterpolator75);

SoScalarInterpolator* SoScalarInterpolator76 = new SoScalarInterpolator();
SoScalarInterpolator76->setDEF(QString("SI_2"));
SoScalarInterpolator76->setKey(new float[]{0.0,0.5,1.0}, 3);
SoScalarInterpolator76->setKeyValue(new float[]{1.4,1.7,1.4}, 3);
SoNode6->addChild(*SoScalarInterpolator76);

SoROUTE* SoROUTE77 = new SoROUTE();
SoROUTE77->setFromNode(QString("C_2"));
SoROUTE77->setFromField(QString("fraction_changed"));
SoROUTE77->setToNode(QString("PI_2"));
SoROUTE77->setToField(QString("set_fraction"));
SoNode6->addChild(*SoROUTE77);

SoROUTE* SoROUTE78 = new SoROUTE();
SoROUTE78->setFromNode(QString("PI_2"));
SoROUTE78->setFromField(QString("value_changed"));
SoROUTE78->setToNode(QString("T_2"));
SoROUTE78->setToField(QString("set_translation"));
SoNode6->addChild(*SoROUTE78);

SoROUTE* SoROUTE79 = new SoROUTE();
SoROUTE79->setFromNode(QString("C_2"));
SoROUTE79->setFromField(QString("fraction_changed"));
SoROUTE79->setToNode(QString("SI_2"));
SoROUTE79->setToField(QString("set_fraction"));
SoNode6->addChild(*SoROUTE79);

SoROUTE* SoROUTE80 = new SoROUTE();
SoROUTE80->setFromNode(QString("SI_2"));
SoROUTE80->setFromField(QString("value_changed"));
SoROUTE80->setToNode(QString("IOR_2"));
SoROUTE80->setToField(QString("set_indexOfRefraction"));
SoNode6->addChild(*SoROUTE80);

SoTransform* SoTransform81 = new SoTransform();
SoTransform81->setDEF(QString("T_3"));
SoTransform81->setTranslation(new float[]{-10.518,0.2,-7.283});
SoShape* SoShape82 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance83 = new SoVRMLAppearance();
SoPhysicalMaterial* SoPhysicalMaterial84 = new SoPhysicalMaterial();
SoPhysicalMaterial84->setTransmissionFactor("0.95");
SoPhysicalMaterial84->setRoughness(0.05);
SoPhysicalMaterial84->setIndexOfRefraction("1.33");
SoIridescenceMaterialExtension* SoIridescenceMaterialExtension85 = new SoIridescenceMaterialExtension();
SoIridescenceMaterialExtension85->setDEF(QString("IRI_3"));
SoIridescenceMaterialExtension85->setIridescence(QString("1"));
SoIridescenceMaterialExtension85->setIridescenceIndexOfRefraction(QString("1.3"));
SoIridescenceMaterialExtension85->setIridescenceThicknessMinimum(QString("100"));
SoPhysicalMaterial84->setIridescenceMaterialExtension(SoIridescenceMaterialExtension85);

SoVRMLAppearance83->addChild(*SoPhysicalMaterial84);

SoShape82->addChild(*SoVRMLAppearance83);

SoSphere* SoSphere86 = new SoSphere();
SoSphere86->setRadius(0.2);
SoShape82->setGeometry(*SoSphere86);

SoTransform81->addChild(*SoShape82);

SoNode6->addChild(*SoTransform81);

SoTimeSensor* SoTimeSensor87 = new SoTimeSensor();
SoTimeSensor87->setDEF(QString("C_3"));
SoTimeSensor87->setCycleInterval(6);
SoTimeSensor87->setLoop(true);
SoNode6->addChild(*SoTimeSensor87);

SoPositionInterpolator* SoPositionInterpolator88 = new SoPositionInterpolator();
SoPositionInterpolator88->setDEF(QString("PI_3"));
SoPositionInterpolator88->setKey(new float[]{0.0,0.5,1.0}, 3);
SoPositionInterpolator88->setKeyValue(new float[]{-10.518,0.2,-7.283,-10.518,0.6,-7.283,-10.518,0.2,-7.283}, 9);
SoNode6->addChild(*SoPositionInterpolator88);

SoScalarInterpolator* SoScalarInterpolator89 = new SoScalarInterpolator();
SoScalarInterpolator89->setDEF(QString("SI_3"));
SoScalarInterpolator89->setKey(new float[]{0.0,0.5,1.0}, 3);
SoScalarInterpolator89->setKeyValue(new float[]{100.0,700.0,100.0}, 3);
SoNode6->addChild(*SoScalarInterpolator89);

SoROUTE* SoROUTE90 = new SoROUTE();
SoROUTE90->setFromNode(QString("C_3"));
SoROUTE90->setFromField(QString("fraction_changed"));
SoROUTE90->setToNode(QString("PI_3"));
SoROUTE90->setToField(QString("set_fraction"));
SoNode6->addChild(*SoROUTE90);

SoROUTE* SoROUTE91 = new SoROUTE();
SoROUTE91->setFromNode(QString("PI_3"));
SoROUTE91->setFromField(QString("value_changed"));
SoROUTE91->setToNode(QString("T_3"));
SoROUTE91->setToField(QString("set_translation"));
SoNode6->addChild(*SoROUTE91);

SoROUTE* SoROUTE92 = new SoROUTE();
SoROUTE92->setFromNode(QString("C_3"));
SoROUTE92->setFromField(QString("fraction_changed"));
SoROUTE92->setToNode(QString("SI_3"));
SoROUTE92->setToField(QString("set_fraction"));
SoNode6->addChild(*SoROUTE92);

SoROUTE* SoROUTE93 = new SoROUTE();
SoROUTE93->setFromNode(QString("SI_3"));
SoROUTE93->setFromField(QString("value_changed"));
SoROUTE93->setToNode(QString("IRI_3"));
SoROUTE93->setToField(QString("set_iridescenceThicknessMaximum"));
SoNode6->addChild(*SoROUTE93);

SoSceneManager0->setSceneGraph(*SoNode6);

return 0;
}
