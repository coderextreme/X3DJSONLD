
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
SoSceneManager0->setProfile(QString("Full"));
SoSceneManager0->setVersion(QString("4.0"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("personal.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("identifier"));
Someta3->setContent(QString("https://someAddress/somePath/personal.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("John's Portfolio"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("generator"));
Someta5->setContent(QString("vim and X3D-Edit, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta5);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode6 = new SoNode();
SoViewpoint* SoViewpoint7 = new SoViewpoint();
SoViewpoint7->setDescription(QString("Tour Views"));
SoViewpoint7->setPosition(new float[]{0.0,0.0,12.0});
SoNode6->addChild(*SoViewpoint7);

SoSwitch* SoSwitch8 = new SoSwitch();
SoSwitch8->setDEF(QString("SceneSwitcher"));
SoSwitch8->setWhichChoice(0);
//<Inline url='\"../data/myextrusion.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d\"'/> <Inline url='\"../data/ballx_ite.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/ballx_ite.x3d\"'/> <Inline url='\"../data/flower.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flower.x3d\"'/> <Inline url='\"../data/flower3.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d\"'/> <Inline url='\"../data/flowers.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d\"'/> <Inline url='\"../data/flowers2.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d\"'/> <Inline url='\"../data/flowers4.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d\"'/> <Inline url='\"../data/flowers7.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d\"'/>
SoInline* SoInline9 = new SoInline();
SoInline9->setUrl(new QString[]{QString("../data/force-tidy.x3d"), QString("https://coderextreme.net/X3DJSONLD/src/main/data/force-tidy.x3d")}, 2);
SoSwitch8->addChild(*SoInline9);

SoNode6->addChild(*SoSwitch8);

//<Script DEF=\"Choice0\"> <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> <![CDATA[ ecmascript: function set_touchTime(value) { choice = 0; } function touchTime(value) { choice = 0; } ]]> </Script> <Transform translation=\"0 4 0\"> <TouchSensor description=\"Ball Prism\" DEF=\"BallPrism_Sensor\"/> <Shape> <Appearance> <Material diffuseColor=\"1 1 1\"/> </Appearance> <Text string='\"Ball Prism\"'> <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> </Text> </Shape> <Shape> <Appearance> <Material diffuseColor=\"0 0 1\"/> </Appearance> <IndexedFaceSet coordIndex='0 1 2 3 -1'> <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> </IndexedFaceSet> </Shape> </Transform> <ROUTE fromNode=\"BallPrism_Sensor\" fromField=\"touchTime\" toNode=\"Choice0\" toField=\"touchTime\"/> <ROUTE fromNode=\"Choice0\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> <Script DEF=\"Choice1\"> <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> <![CDATA[ ecmascript: function set_touchTime(value) { choice = 1; } function touchTime(value) { choice = 1; } ]]> </Script> <Transform translation=\"0 3 0\"> <TouchSensor description=\"Floating Extrusion\" DEF=\"FloatingExtrusion_Sensor\"/> <Shape> <Appearance> <Material diffuseColor=\"1 1 1\"/> </Appearance> <Text string='\"Floating Extrusion\"'> <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> </Text> </Shape> <Shape> <Appearance> <Material diffuseColor=\"0 0 1\"/> </Appearance> <IndexedFaceSet coordIndex='0 1 2 3 -1'> <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> </IndexedFaceSet> </Shape> </Transform> <ROUTE fromNode=\"FloatingExtrusion_Sensor\" fromField=\"touchTime\" toNode=\"Choice1\" toField=\"touchTime\"/> <ROUTE fromNode=\"Choice1\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> <Script DEF=\"Choice2\"> <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> <![CDATA[ ecmascript: function set_touchTime(value) { choice = 2; } function touchTime(value) { choice = 2; } ]]> </Script> <Transform translation=\"0 2 0\"> <TouchSensor description=\"Flower\" DEF=\"Flower_Sensor\"/> <Shape> <Appearance> <Material diffuseColor=\"1 1 1\"/> </Appearance> <Text string='\"Flower\"'> <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> </Text> </Shape> <Shape> <Appearance> <Material diffuseColor=\"0 0 1\"/> </Appearance> <IndexedFaceSet coordIndex='0 1 2 3 -1'> <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> </IndexedFaceSet> </Shape> </Transform> <ROUTE fromNode=\"Flower_Sensor\" fromField=\"touchTime\" toNode=\"Choice2\" toField=\"touchTime\"/> <ROUTE fromNode=\"Choice2\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> <Script DEF=\"Choice3\"> <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> <![CDATA[ ecmascript: function set_touchTime(value) { choice = 3; } function touchTime(value) { choice = 3; } ]]> </Script> <Transform translation=\"0 1 0\"> <TouchSensor description=\"Flower 3\" DEF=\"Flower3_Sensor\"/> <Shape> <Appearance> <Material diffuseColor=\"1 1 1\"/> </Appearance> <Text string='\"Flower 3\"'> <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> </Text> </Shape> <Shape> <Appearance> <Material diffuseColor=\"0 0 1\"/> </Appearance> <IndexedFaceSet coordIndex='0 1 2 3 -1'> <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> </IndexedFaceSet> </Shape> </Transform> <ROUTE fromNode=\"Flower3_Sensor\" fromField=\"touchTime\" toNode=\"Choice3\" toField=\"touchTime\"/> <ROUTE fromNode=\"Choice3\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> <Script DEF=\"Choice4\"> <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> <![CDATA[ ecmascript: function set_touchTime(value) { choice = 4; } function touchTime(value) { choice = 4; } ]]> </Script> <Transform> <TouchSensor description=\"Flowers\" DEF=\"Flowers_Sensor\"/> <Shape> <Appearance> <Material diffuseColor=\"1 1 1\"/> </Appearance> <Text string='\"Flowers\"'> <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> </Text> </Shape> <Shape> <Appearance> <Material diffuseColor=\"0 0 1\"/> </Appearance> <IndexedFaceSet coordIndex='0 1 2 3 -1'> <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> </IndexedFaceSet> </Shape> </Transform> <ROUTE fromNode=\"Flowers_Sensor\" fromField=\"touchTime\" toNode=\"Choice4\" toField=\"touchTime\"/> <ROUTE fromNode=\"Choice4\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> <Script DEF=\"Choice5\"> <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> <![CDATA[ ecmascript: function set_touchTime(value) { choice = 5; } function touchTime(value) { choice = 5; } ]]> </Script> <Transform translation=\"0 -1 0\"> <TouchSensor description=\"Flowers 2\" DEF=\"Flowers2_Sensor\"/> <Shape> <Appearance> <Material diffuseColor=\"1 1 1\"/> </Appearance> <Text string='\"Flowers 2\"'> <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> </Text> </Shape> <Shape> <Appearance> <Material diffuseColor=\"0 0 1\"/> </Appearance> <IndexedFaceSet coordIndex='0 1 2 3 -1'> <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> </IndexedFaceSet> </Shape> </Transform> <ROUTE fromNode=\"Flowers2_Sensor\" fromField=\"touchTime\" toNode=\"Choice5\" toField=\"touchTime\"/> <ROUTE fromNode=\"Choice5\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> <Script DEF=\"Choice6\"> <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> <![CDATA[ ecmascript: function set_touchTime(value) { choice = 6; } function touchTime(value) { choice = 6; } ]]> </Script> <Transform translation=\"0 -2 0\"> <TouchSensor description=\"Flowers 4\" DEF=\"Flowers4_Sensor\"/> <Shape> <Appearance> <Material diffuseColor=\"1 1 1\"/> </Appearance> <Text string='\"Flowers 4\"'> <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> </Text> </Shape> <Shape> <Appearance> <Material diffuseColor=\"0 0 1\"/> </Appearance> <IndexedFaceSet coordIndex='0 1 2 3 -1'> <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> </IndexedFaceSet> </Shape> </Transform> <ROUTE fromNode=\"Flowers4_Sensor\" fromField=\"touchTime\" toNode=\"Choice6\" toField=\"touchTime\"/> <ROUTE fromNode=\"Choice6\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> <Script DEF=\"Choice7\"> <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> <![CDATA[ ecmascript: function set_touchTime(value) { choice = 7; } function touchTime(value) { choice = 7; } ]]> </Script> <Transform translation=\"0 -3 0\"> <TouchSensor description=\"Flowers 7 Inner Brow Raiser\" DEF=\"Flowers7_Sensor\"/> <Shape> <Appearance> <Material diffuseColor=\"1 1 1\"/> </Appearance> <Text string='\"Flowers 7\"'> <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> </Text> </Shape> <Shape> <Appearance> <Material diffuseColor=\"0 0 1\"/> </Appearance> <IndexedFaceSet coordIndex='0 1 2 3 -1'> <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> </IndexedFaceSet> </Shape> </Transform> <ROUTE fromNode=\"Flowers7_Sensor\" fromField=\"touchTime\" toNode=\"Choice7\" toField=\"touchTime\"/> <ROUTE fromNode=\"Choice7\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/> <Script DEF=\"Choice8\"> <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/> <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/> <![CDATA[ ecmascript: function set_touchTime(value) { choice = 8; } function touchTime(value) { choice = 8; } ]]> </Script> <Transform translation=\"0 -4 0\"> <TouchSensor description=\"Force\" DEF=\"Force_Sensor\"/> <Shape> <Appearance> <Material diffuseColor=\"1 1 1\"/> </Appearance> <Text string='\"Force\"'> <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/> </Text> </Shape> <Shape> <Appearance> <Material diffuseColor=\"0 0 1\"/> </Appearance> <IndexedFaceSet coordIndex='0 1 2 3 -1'> <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/> </IndexedFaceSet> </Shape> </Transform> <ROUTE fromNode=\"Force_Sensor\" fromField=\"touchTime\" toNode=\"Choice8\" toField=\"touchTime\"/> <ROUTE fromNode=\"Choice8\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>
SoSceneManager0->setSceneGraph(*SoNode6);

return 0;
}
