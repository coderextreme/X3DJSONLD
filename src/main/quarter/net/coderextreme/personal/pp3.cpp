
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
Someta2->setName(QString("title"));
Someta2->setContent(QString("pp3.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("creator"));
Someta3->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("translator"));
Someta4->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("created"));
Someta5->setContent(QString("5 May 2015"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("modified"));
Someta6->setContent(QString("23 Dec 2022"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("description"));
Someta7->setContent(QString("A process pipeline between three spheres (try typing on spheres and blue"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("identifier"));
Someta8->setContent(QString("https://coderextreme.net/x3d/pp3.x3d"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("generator"));
Someta9->setContent(QString("manual"));
Sohead1->addMeta(*Someta9);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode10 = new SoNode();
SoProtoDeclare* SoProtoDeclare11 = new SoProtoDeclare();
SoProtoDeclare11->setName(QString("Process"));
SoProtoBody* SoProtoBody12 = new SoProtoBody();
SoGroup* SoGroup13 = new SoGroup();
//left
SoTransform* SoTransform14 = new SoTransform();
SoTransform14->setScale(new float[]{0.5,0.5,0.5});
SoShape* SoShape15 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance16 = new SoVRMLAppearance();
SoMaterial* SoMaterial17 = new SoMaterial();
SoMaterial17->setDiffuseColor(new float[]{0.7,1.0,0.0});
SoMaterial17->setTransparency(0.5);
SoVRMLAppearance16->addChild(*SoMaterial17);

SoShape15->addChild(*SoVRMLAppearance16);

SoExtrusion* SoExtrusion18 = new SoExtrusion();
SoExtrusion18->setCreaseAngle(0.785);
SoExtrusion18->setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
SoExtrusion18->setSpine(new float[]{-2.5,0.0,0.0,-1.5,0.0,0.0}, 6);
SoShape15->setGeometry(*SoExtrusion18);

SoTransform14->addChild(*SoShape15);

//<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>
SoGroup13->addChild(*SoTransform14);

//right
SoTransform* SoTransform19 = new SoTransform();
SoTransform19->setScale(new float[]{0.5,0.5,0.5});
SoShape* SoShape20 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance21 = new SoVRMLAppearance();
SoMaterial* SoMaterial22 = new SoMaterial();
SoMaterial22->setDiffuseColor(new float[]{0.0,0.7,1.0});
SoMaterial22->setTransparency(0.5);
SoVRMLAppearance21->addChild(*SoMaterial22);

SoShape20->addChild(*SoVRMLAppearance21);

SoExtrusion* SoExtrusion23 = new SoExtrusion();
SoExtrusion23->setCreaseAngle(0.785);
SoExtrusion23->setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
SoExtrusion23->setSpine(new float[]{1.5,0.0,0.0,2.5,0.0,0.0}, 6);
SoShape20->setGeometry(*SoExtrusion23);

SoTransform19->addChild(*SoShape20);

SoTransform* SoTransform24 = new SoTransform();
SoTransform24->setTranslation(new float[]{2.0,0.0,0.0});
SoShape* SoShape25 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance26 = new SoVRMLAppearance();
SoMaterial* SoMaterial27 = new SoMaterial();
SoMaterial27->setDEF(QString("MaterialLightBlue"));
SoMaterial27->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance26->addChild(*SoMaterial27);

SoShape25->addChild(*SoVRMLAppearance26);

SoText* SoText28 = new SoText();
SoText28->setDEF(QString("RightString"));
SoText28->setString(new QString[]{QString("r")}, 1);
SoShape25->setGeometry(*SoText28);

SoTransform24->addChild(*SoShape25);

SoTransform19->addChild(*SoTransform24);

SoStringSensor* SoStringSensor29 = new SoStringSensor();
SoStringSensor29->setDEF(QString("RightSensor"));
SoStringSensor29->setEnabled(false);
SoTransform19->addChild(*SoStringSensor29);

SoTouchSensor* SoTouchSensor30 = new SoTouchSensor();
SoTouchSensor30->setDescription(QString("touch to activate"));
SoTouchSensor30->setDEF(QString("RightTouch"));
SoTransform19->addChild(*SoTouchSensor30);

SoGroup13->addChild(*SoTransform19);

//up
SoTransform* SoTransform31 = new SoTransform();
SoTransform31->setScale(new float[]{0.5,0.5,0.5});
SoShape* SoShape32 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance33 = new SoVRMLAppearance();
SoMaterial* SoMaterial34 = new SoMaterial();
SoMaterial34->setDiffuseColor(new float[]{0.0,0.7,1.0});
SoMaterial34->setTransparency(0.5);
SoVRMLAppearance33->addChild(*SoMaterial34);

SoShape32->addChild(*SoVRMLAppearance33);

SoExtrusion* SoExtrusion35 = new SoExtrusion();
SoExtrusion35->setCreaseAngle(0.785);
SoExtrusion35->setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
SoExtrusion35->setSpine(new float[]{0.0,1.5,0.0,0.0,2.5,0.0}, 6);
SoShape32->setGeometry(*SoExtrusion35);

SoTransform31->addChild(*SoShape32);

SoTransform* SoTransform36 = new SoTransform();
SoTransform36->setTranslation(new float[]{-0.5,2.0,0.0});
SoShape* SoShape37 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance38 = new SoVRMLAppearance();
SoMaterial* SoMaterial39 = new SoMaterial();
SoMaterial39->setUSE(QString("MaterialLightBlue"));
SoVRMLAppearance38->addChild(*SoMaterial39);

SoShape37->addChild(*SoVRMLAppearance38);

SoText* SoText40 = new SoText();
SoText40->setDEF(QString("UpString"));
SoText40->setString(new QString[]{QString("u")}, 1);
SoShape37->setGeometry(*SoText40);

SoTransform36->addChild(*SoShape37);

SoTransform31->addChild(*SoTransform36);

SoStringSensor* SoStringSensor41 = new SoStringSensor();
SoStringSensor41->setDEF(QString("UpSensor"));
SoStringSensor41->setEnabled(false);
SoTransform31->addChild(*SoStringSensor41);

SoTouchSensor* SoTouchSensor42 = new SoTouchSensor();
SoTouchSensor42->setDescription(QString("touch to activate"));
SoTouchSensor42->setDEF(QString("UpTouch"));
SoTransform31->addChild(*SoTouchSensor42);

SoGroup13->addChild(*SoTransform31);

//down
SoTransform* SoTransform43 = new SoTransform();
SoTransform43->setScale(new float[]{0.5,0.5,0.5});
SoShape* SoShape44 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance45 = new SoVRMLAppearance();
SoMaterial* SoMaterial46 = new SoMaterial();
SoMaterial46->setDiffuseColor(new float[]{0.7,1.0,0.0});
SoMaterial46->setTransparency(0.5);
SoVRMLAppearance45->addChild(*SoMaterial46);

SoShape44->addChild(*SoVRMLAppearance45);

SoExtrusion* SoExtrusion47 = new SoExtrusion();
SoExtrusion47->setCreaseAngle(0.785);
SoExtrusion47->setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
SoExtrusion47->setSpine(new float[]{0.0,-2.5,0.0,0.0,-1.5,0.0}, 6);
SoShape44->setGeometry(*SoExtrusion47);

SoTransform43->addChild(*SoShape44);

//<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>
SoGroup13->addChild(*SoTransform43);

//center
SoTransform* SoTransform48 = new SoTransform();
SoShape* SoShape49 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance50 = new SoVRMLAppearance();
SoMaterial* SoMaterial51 = new SoMaterial();
SoMaterial51->setDiffuseColor(new float[]{1.0,0.0,0.7});
SoVRMLAppearance50->addChild(*SoMaterial51);

SoShape49->addChild(*SoVRMLAppearance50);

SoSphere* SoSphere52 = new SoSphere();
SoShape49->setGeometry(*SoSphere52);

SoTransform48->addChild(*SoShape49);

SoTransform* SoTransform53 = new SoTransform();
SoTransform53->setScale(new float[]{0.5,0.5,0.5});
SoTransform53->setTranslation(new float[]{-0.5,0.0,1.0});
SoShape* SoShape54 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance55 = new SoVRMLAppearance();
SoMaterial* SoMaterial56 = new SoMaterial();
SoMaterial56->setUSE(QString("MaterialLightBlue"));
SoVRMLAppearance55->addChild(*SoMaterial56);

SoShape54->addChild(*SoVRMLAppearance55);

SoText* SoText57 = new SoText();
SoText57->setDEF(QString("CenterString"));
SoShape54->setGeometry(*SoText57);

SoTransform53->addChild(*SoShape54);

SoTransform48->addChild(*SoTransform53);

SoStringSensor* SoStringSensor58 = new SoStringSensor();
SoStringSensor58->setDEF(QString("CenterSensor"));
SoStringSensor58->setEnabled(false);
SoTransform48->addChild(*SoStringSensor58);

SoTouchSensor* SoTouchSensor59 = new SoTouchSensor();
SoTouchSensor59->setDescription(QString("touch to activate"));
SoTouchSensor59->setDEF(QString("CenterTouch"));
SoTransform48->addChild(*SoTouchSensor59);

SoGroup13->addChild(*SoTransform48);

SoProtoBody12->addChild(*SoGroup13);

SoScript* SoScript60 = new SoScript();
SoScript60->setDEF(QString("RightSingleToMultiString"));
Sofield* Sofield61 = new Sofield();
Sofield61->setName(QString("set_rightstring"));
Sofield61->setAccessType(QString("inputOnly"));
Sofield61->setType(QString("SFString"));
SoScript60->addChild(*Sofield61);

Sofield* Sofield62 = new Sofield();
Sofield62->setName(QString("rightlines"));
Sofield62->setAccessType(QString("outputOnly"));
Sofield62->setType(QString("MFString"));
SoScript60->addChild(*Sofield62);


//SoScript60->setSourceCode(QString("ecmascript:")+
//_T("function initialize() {")+
//_T("	rightlines = new MFString(\"\");")+
//_T("}")+
//_T("function set_rightstring(rightstr) {")+
//_T("	rightlines = new MFString(rightstr);")+
//_T("}"));
SoProtoBody12->addChild(*SoScript60);

SoScript* SoScript63 = new SoScript();
SoScript63->setDEF(QString("UpSingleToMultiString"));
Sofield* Sofield64 = new Sofield();
Sofield64->setName(QString("set_upstring"));
Sofield64->setAccessType(QString("inputOnly"));
Sofield64->setType(QString("SFString"));
SoScript63->addChild(*Sofield64);

Sofield* Sofield65 = new Sofield();
Sofield65->setName(QString("uplines"));
Sofield65->setAccessType(QString("outputOnly"));
Sofield65->setType(QString("MFString"));
SoScript63->addChild(*Sofield65);


//SoScript63->setSourceCode(QString("ecmascript:")+
//_T("function initialize() {")+
//_T("	uplines = new MFString(\"\");")+
//_T("}")+
//_T("function set_upstring(upstr) {")+
//_T("	uplines = new MFString(upstr);")+
//_T("}"));
SoProtoBody12->addChild(*SoScript63);

SoScript* SoScript66 = new SoScript();
SoScript66->setDEF(QString("CenterSingleToMultiString"));
Sofield* Sofield67 = new Sofield();
Sofield67->setName(QString("set_centerstring"));
Sofield67->setAccessType(QString("inputOnly"));
Sofield67->setType(QString("SFString"));
SoScript66->addChild(*Sofield67);

Sofield* Sofield68 = new Sofield();
Sofield68->setName(QString("centerlines"));
Sofield68->setAccessType(QString("outputOnly"));
Sofield68->setType(QString("MFString"));
SoScript66->addChild(*Sofield68);


//SoScript66->setSourceCode(QString("ecmascript:")+
//_T("function initialize() {")+
//_T("	centerlines = new MFString(\"\");")+
//_T("}")+
//_T("function set_centerstring(centerstr) {")+
//_T("	centerlines = new MFString(centerstr);")+
//_T("}"));
SoProtoBody12->addChild(*SoScript66);

SoROUTE* SoROUTE69 = new SoROUTE();
SoROUTE69->setFromField(QString("enteredText"));
SoROUTE69->setFromNode(QString("CenterSensor"));
SoROUTE69->setToField(QString("set_centerstring"));
SoROUTE69->setToNode(QString("CenterSingleToMultiString"));
SoProtoBody12->addChild(*SoROUTE69);

SoROUTE* SoROUTE70 = new SoROUTE();
SoROUTE70->setFromField(QString("centerlines"));
SoROUTE70->setFromNode(QString("CenterSingleToMultiString"));
SoROUTE70->setToField(QString("set_string"));
SoROUTE70->setToNode(QString("CenterString"));
SoProtoBody12->addChild(*SoROUTE70);

SoROUTE* SoROUTE71 = new SoROUTE();
SoROUTE71->setFromField(QString("isOver"));
SoROUTE71->setFromNode(QString("CenterTouch"));
SoROUTE71->setToField(QString("set_enabled"));
SoROUTE71->setToNode(QString("CenterSensor"));
SoProtoBody12->addChild(*SoROUTE71);

SoROUTE* SoROUTE72 = new SoROUTE();
SoROUTE72->setFromField(QString("enteredText"));
SoROUTE72->setFromNode(QString("RightSensor"));
SoROUTE72->setToField(QString("set_rightstring"));
SoROUTE72->setToNode(QString("RightSingleToMultiString"));
SoProtoBody12->addChild(*SoROUTE72);

SoROUTE* SoROUTE73 = new SoROUTE();
SoROUTE73->setFromField(QString("rightlines"));
SoROUTE73->setFromNode(QString("RightSingleToMultiString"));
SoROUTE73->setToField(QString("set_string"));
SoROUTE73->setToNode(QString("RightString"));
SoProtoBody12->addChild(*SoROUTE73);

SoROUTE* SoROUTE74 = new SoROUTE();
SoROUTE74->setFromField(QString("isOver"));
SoROUTE74->setFromNode(QString("RightTouch"));
SoROUTE74->setToField(QString("set_enabled"));
SoROUTE74->setToNode(QString("RightSensor"));
SoProtoBody12->addChild(*SoROUTE74);

SoROUTE* SoROUTE75 = new SoROUTE();
SoROUTE75->setFromField(QString("enteredText"));
SoROUTE75->setFromNode(QString("UpSensor"));
SoROUTE75->setToField(QString("set_upstring"));
SoROUTE75->setToNode(QString("UpSingleToMultiString"));
SoProtoBody12->addChild(*SoROUTE75);

SoROUTE* SoROUTE76 = new SoROUTE();
SoROUTE76->setFromField(QString("uplines"));
SoROUTE76->setFromNode(QString("UpSingleToMultiString"));
SoROUTE76->setToField(QString("set_string"));
SoROUTE76->setToNode(QString("UpString"));
SoProtoBody12->addChild(*SoROUTE76);

SoROUTE* SoROUTE77 = new SoROUTE();
SoROUTE77->setFromField(QString("isOver"));
SoROUTE77->setFromNode(QString("UpTouch"));
SoROUTE77->setToField(QString("set_enabled"));
SoROUTE77->setToNode(QString("UpSensor"));
SoProtoBody12->addChild(*SoROUTE77);

SoProtoDeclare11->addChild(*SoProtoBody12);

SoNode10->addChild(*SoProtoDeclare11);

SoNavigationInfo* SoNavigationInfo78 = new SoNavigationInfo();
SoNode10->addChild(*SoNavigationInfo78);

SoViewpoint* SoViewpoint79 = new SoViewpoint();
SoViewpoint79->setDescription(QString("Process pipes"));
SoViewpoint79->setOrientation(new float[]{1.0,0.0,0.0,-0.4});
SoViewpoint79->setPosition(new float[]{0.0,5.0,12.0});
SoNode10->addChild(*SoViewpoint79);

SoTransform* SoTransform80 = new SoTransform();
SoTransform80->setTranslation(new float[]{0.0,-2.5,0.0});
SoProtoInstance* SoProtoInstance81 = new SoProtoInstance();
SoProtoInstance81->setName(QString("Process"));
SoTransform80->addChild(*SoProtoInstance81);

SoNode10->addChild(*SoTransform80);

SoTransform* SoTransform82 = new SoTransform();
SoProtoInstance* SoProtoInstance83 = new SoProtoInstance();
SoProtoInstance83->setName(QString("Process"));
SoTransform82->addChild(*SoProtoInstance83);

SoNode10->addChild(*SoTransform82);

SoTransform* SoTransform84 = new SoTransform();
SoTransform84->setTranslation(new float[]{0.0,2.5,0.0});
SoProtoInstance* SoProtoInstance85 = new SoProtoInstance();
SoProtoInstance85->setName(QString("Process"));
SoTransform84->addChild(*SoProtoInstance85);

SoNode10->addChild(*SoTransform84);

SoSceneManager0->setSceneGraph(*SoNode10);

return 0;
}
