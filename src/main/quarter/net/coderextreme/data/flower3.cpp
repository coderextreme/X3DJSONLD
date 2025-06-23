
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
Someta2->setContent(QString("flower3.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("creator"));
Someta3->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("generator"));
Someta4->setContent(QString("manual"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("identifier"));
Someta5->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("description"));
Someta6->setContent(QString("a flower"));
Sohead1->addMeta(*Someta6);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode7 = new SoNode();
SoNavigationInfo* SoNavigationInfo8 = new SoNavigationInfo();
SoNode7->addChild(*SoNavigationInfo8);

SoDirectionalLight* SoDirectionalLight9 = new SoDirectionalLight();
SoDirectionalLight9->setDirection(new float[]{0.0,-0.8,-0.2});
SoDirectionalLight9->setIntensity(0.5);
SoNode7->addChild(*SoDirectionalLight9);

SoBackground* SoBackground10 = new SoBackground();
SoBackground10->setSkyColor(new float[]{1.0,1.0,1.0}, 3);
SoNode7->addChild(*SoBackground10);

SoViewpoint* SoViewpoint11 = new SoViewpoint();
SoViewpoint11->setDescription(QString("One mathematical orbital"));
SoViewpoint11->setPosition(new float[]{0.0,0.0,50.0});
SoNode7->addChild(*SoViewpoint11);

SoTransform* SoTransform12 = new SoTransform();
SoTransform12->setDEF(QString("OrbitTransform"));
SoTransform12->setTranslation(new float[]{8.0,0.0,0.0});
SoShape* SoShape13 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance14 = new SoVRMLAppearance();
SoMaterial* SoMaterial15 = new SoMaterial();
SoMaterial15->setDiffuseColor(new float[]{0.0,0.5,1.0});
SoMaterial15->setSpecularColor(new float[]{0.0,0.5,1.0});
SoVRMLAppearance14->addChild(*SoMaterial15);

SoShape13->addChild(*SoVRMLAppearance14);

SoIndexedFaceSet* SoIndexedFaceSet16 = new SoIndexedFaceSet();
SoIndexedFaceSet16->setConvex(false);
SoIndexedFaceSet16->setDEF(QString("Orbit"));
SoCoordinate* SoCoordinate17 = new SoCoordinate();
SoCoordinate17->setDEF(QString("OrbitCoordinates"));
SoIndexedFaceSet16->setCoord(*SoCoordinate17);

SoShape13->setGeometry(*SoIndexedFaceSet16);

SoTransform12->addChild(*SoShape13);

SoNode7->addChild(*SoTransform12);

SoScript* SoScript18 = new SoScript();
SoScript18->setDEF(QString("OrbitScript"));
Sofield* Sofield19 = new Sofield();
Sofield19->setName(QString("set_fraction"));
Sofield19->setAccessType(QString("inputOnly"));
Sofield19->setType(QString("SFFloat"));
SoScript18->addChild(*Sofield19);

Sofield* Sofield20 = new Sofield();
Sofield20->setName(QString("coordinates"));
Sofield20->setAccessType(QString("outputOnly"));
Sofield20->setType(QString("MFVec3f"));
SoScript18->addChild(*Sofield20);

Sofield* Sofield21 = new Sofield();
Sofield21->setName(QString("coordIndexes"));
Sofield21->setAccessType(QString("outputOnly"));
Sofield21->setType(QString("MFInt32"));
SoScript18->addChild(*Sofield21);

//<field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"initializeOnly\" name=\"resolution\" type=\"SFInt32\" value=\"100\"/>

//SoScript18->setSourceCode(QString("ecmascript:")+
//_T("var e = 5;")+
//_T("var f = 5;")+
//_T("var g = 5;")+
//_T("var h = 5;")+
//_T("var resolution = 100;")+
//_T("var t = 0;")+
//_T("var p = 0;")+
//_T("function initialize() {")+
//_T("     generateCoordinates(resolution);")+
//_T("     var localci = [];")+
//_T("     for ( i = 0; i < resolution-1; i++) {")+
//_T("     	for ( j = 0; j < resolution-1; j++) {")+
//_T("	     localci.push(i*resolution+j);")+
//_T("	     localci.push(i*resolution+j+1);")+
//_T("	     localci.push((i+1)*resolution+j+1);")+
//_T("	     localci.push((i+1)*resolution+j);")+
//_T("	     localci.push(-1);")+
//_T("	}")+
//_T("    }")+
//_T("    coordIndexes = new MFInt32(...localci);")+
//_T("}")+
//_T("function generateCoordinates(resolution) {")+
//_T("     var theta = 0.0;")+
//_T("     var phi = 0.0;")+
//_T("     var delta = (2 * 3.141592653) / (resolution-1);")+
//_T("     var localc = [];")+
//_T("     for (var  i = 0; i < resolution; i++) {")+
//_T("     	for (var  j = 0; j < resolution; j++) {")+
//_T("		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);")+
//_T("		localc.push(new SFVec3f(")+
//_T("			rho * Math.cos(phi) * Math.cos(theta),")+
//_T("			rho * Math.cos(phi) * Math.sin(theta),")+
//_T("			rho * Math.sin(phi)")+
//_T("		));")+
//_T("		theta += delta;")+
//_T("	}")+
//_T("	phi += delta;")+
//_T("     }")+
//_T("     coordinates = new MFVec3f(...localc);")+
//_T("}")+
//_T("function set_fraction(fraction, eventTime) {")+
//_T("	t += 0.5;")+
//_T("	p += 0.5;")+
//_T("	var choice = Math.floor(Math.random() * 4);")+
//_T("	switch (choice) {")+
//_T("	case 0:")+
//_T("		e += Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("		break;")+
//_T("	case 1:")+
//_T("		f += Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("		break;")+
//_T("	case 2:")+
//_T("		g += Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("		break;")+
//_T("	case 3:")+
//_T("		h += Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("		break;")+
//_T("	}")+
//_T("	if (f < 1) {")+
//_T("		f = 10;")+
//_T("	}")+
//_T("	if (g < 1) {")+
//_T("		g = 4;")+
//_T("	}")+
//_T("	if (h < 1) {")+
//_T("		h = 4;")+
//_T("	}")+
//_T("	generateCoordinates(resolution);")+
//_T("}"));
SoNode7->addChild(*SoScript18);

SoTimeSensor* SoTimeSensor22 = new SoTimeSensor();
SoTimeSensor22->setDEF(QString("Clock"));
SoTimeSensor22->setCycleInterval(16);
SoTimeSensor22->setLoop(true);
SoNode7->addChild(*SoTimeSensor22);

SoROUTE* SoROUTE23 = new SoROUTE();
SoROUTE23->setFromNode(QString("OrbitScript"));
SoROUTE23->setFromField(QString("coordIndexes"));
SoROUTE23->setToNode(QString("Orbit"));
SoROUTE23->setToField(QString("set_coordIndex"));
SoNode7->addChild(*SoROUTE23);

SoROUTE* SoROUTE24 = new SoROUTE();
SoROUTE24->setFromNode(QString("OrbitScript"));
SoROUTE24->setFromField(QString("coordinates"));
SoROUTE24->setToNode(QString("OrbitCoordinates"));
SoROUTE24->setToField(QString("point"));
SoNode7->addChild(*SoROUTE24);

SoROUTE* SoROUTE25 = new SoROUTE();
SoROUTE25->setFromNode(QString("Clock"));
SoROUTE25->setFromField(QString("fraction_changed"));
SoROUTE25->setToNode(QString("OrbitScript"));
SoROUTE25->setToField(QString("set_fraction"));
SoNode7->addChild(*SoROUTE25);

SoSceneManager0->setSceneGraph(*SoNode7);

return 0;
}
