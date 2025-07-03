
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
Socomponent2->setName(QString("Scripting"));
Socomponent2->setLevel(1);
Sohead1->addChild(*Socomponent2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("title"));
Someta3->setContent(QString("flowers2.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("transcriber"));
Someta5->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("23 January 2005"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("modified"));
Someta7->setContent(QString("21 March 2018"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("description"));
Someta8->setContent(QString("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("identifier"));
Someta9->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/flowers2.x3d"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("generator"));
Someta10->setContent(QString("manually written"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("license"));
Someta11->setContent(QString("https://coderextreme.net/X3DJSONLD/LICENSE"));
Sohead1->addMeta(*Someta11);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode12 = new SoNode();
SoNavigationInfo* SoNavigationInfo13 = new SoNavigationInfo();
SoNode12->addChild(*SoNavigationInfo13);

SoViewpoint* SoViewpoint14 = new SoViewpoint();
SoViewpoint14->setDescription(QString("Two mathematical orbitals"));
SoViewpoint14->setPosition(new float[]{0.0,0.0,50.0});
SoNode12->addChild(*SoViewpoint14);

SoGroup* SoGroup15 = new SoGroup();
SoDirectionalLight* SoDirectionalLight16 = new SoDirectionalLight();
SoDirectionalLight16->setDirection(new float[]{1.0,1.0,1.0});
SoGroup15->addChild(*SoDirectionalLight16);

SoProtoDeclare* SoProtoDeclare17 = new SoProtoDeclare();
SoProtoDeclare17->setName(QString("orbit"));
SoProtoInterface* SoProtoInterface18 = new SoProtoInterface();
Sofield* Sofield19 = new Sofield();
Sofield19->setName(QString("translation"));
Sofield19->setAccessType(QString("inputOutput"));
Sofield19->setType(QString("SFVec3f"));
Sofield19->setValue(QString("-8 0 0"));
SoProtoInterface18->addChild(*Sofield19);

Sofield* Sofield20 = new Sofield();
Sofield20->setName(QString("diffuseColor"));
Sofield20->setAccessType(QString("inputOutput"));
Sofield20->setType(QString("SFColor"));
Sofield20->setValue(QString("1 0.5 0"));
SoProtoInterface18->addChild(*Sofield20);

Sofield* Sofield21 = new Sofield();
Sofield21->setName(QString("specularColor"));
Sofield21->setAccessType(QString("inputOutput"));
Sofield21->setType(QString("SFColor"));
Sofield21->setValue(QString("1 0.5 0"));
SoProtoInterface18->addChild(*Sofield21);

Sofield* Sofield22 = new Sofield();
Sofield22->setName(QString("transparency"));
Sofield22->setAccessType(QString("inputOutput"));
Sofield22->setType(QString("SFFloat"));
Sofield22->setValue(QString("0.75"));
SoProtoInterface18->addChild(*Sofield22);

SoProtoDeclare17->addChild(*SoProtoInterface18);

SoProtoBody* SoProtoBody23 = new SoProtoBody();
SoGroup* SoGroup24 = new SoGroup();
SoTimeSensor* SoTimeSensor25 = new SoTimeSensor();
SoTimeSensor25->setDEF(QString("Clock"));
SoTimeSensor25->setCycleInterval(16);
SoTimeSensor25->setLoop(true);
SoGroup24->addChild(*SoTimeSensor25);

SoOrientationInterpolator* SoOrientationInterpolator26 = new SoOrientationInterpolator();
SoOrientationInterpolator26->setDEF(QString("OrbitPath"));
SoOrientationInterpolator26->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator26->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,3.14,1.0,0.0,0.0,6.28}, 12);
SoGroup24->addChild(*SoOrientationInterpolator26);

SoTransform* SoTransform27 = new SoTransform();
SoTransform27->setDEF(QString("OrbitTransform"));
SoIS* SoIS28 = new SoIS();
Soconnect* Soconnect29 = new Soconnect();
Soconnect29->setNodeField(QString("translation"));
Soconnect29->setProtoField(QString("translation"));
SoIS28->addChild(*Soconnect29);

SoTransform27->addChild(*SoIS28);

SoShape* SoShape30 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance31 = new SoVRMLAppearance();
SoMaterial* SoMaterial32 = new SoMaterial();
SoIS* SoIS33 = new SoIS();
Soconnect* Soconnect34 = new Soconnect();
Soconnect34->setNodeField(QString("diffuseColor"));
Soconnect34->setProtoField(QString("diffuseColor"));
SoIS33->addChild(*Soconnect34);

Soconnect* Soconnect35 = new Soconnect();
Soconnect35->setNodeField(QString("specularColor"));
Soconnect35->setProtoField(QString("specularColor"));
SoIS33->addChild(*Soconnect35);

Soconnect* Soconnect36 = new Soconnect();
Soconnect36->setNodeField(QString("transparency"));
Soconnect36->setProtoField(QString("transparency"));
SoIS33->addChild(*Soconnect36);

SoMaterial32->addChild(*SoIS33);

SoVRMLAppearance31->addChild(*SoMaterial32);

SoShape30->addChild(*SoVRMLAppearance31);

//<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>
SoIndexedFaceSet* SoIndexedFaceSet37 = new SoIndexedFaceSet();
SoIndexedFaceSet37->setCcw(false);
SoIndexedFaceSet37->setConvex(false);
SoIndexedFaceSet37->setCoordIndex(new int32_t[]{0,1,2,-1}, 4);
SoIndexedFaceSet37->setDEF(QString("Orbit"));
SoCoordinate* SoCoordinate38 = new SoCoordinate();
SoCoordinate38->setDEF(QString("OrbitCoordinates"));
SoCoordinate38->setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0}, 9);
SoIndexedFaceSet37->setCoord(*SoCoordinate38);

SoShape30->setGeometry(*SoIndexedFaceSet37);

SoTransform27->addChild(*SoShape30);

SoGroup24->addChild(*SoTransform27);

SoScript* SoScript39 = new SoScript();
SoScript39->setDEF(QString("OrbitScript"));
Sofield* Sofield40 = new Sofield();
Sofield40->setName(QString("set_fraction"));
Sofield40->setAccessType(QString("inputOnly"));
Sofield40->setType(QString("SFFloat"));
SoScript39->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("coordinates"));
Sofield41->setAccessType(QString("inputOutput"));
Sofield41->setType(QString("MFVec3f"));
SoScript39->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("coordIndexes"));
Sofield42->setAccessType(QString("inputOutput"));
Sofield42->setType(QString("MFInt32"));
SoScript39->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("e"));
Sofield43->setAccessType(QString("inputOutput"));
Sofield43->setType(QString("SFFloat"));
Sofield43->setValue(QString("5"));
SoScript39->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("f"));
Sofield44->setAccessType(QString("inputOutput"));
Sofield44->setType(QString("SFFloat"));
Sofield44->setValue(QString("5"));
SoScript39->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setName(QString("g"));
Sofield45->setAccessType(QString("inputOutput"));
Sofield45->setType(QString("SFFloat"));
Sofield45->setValue(QString("5"));
SoScript39->addChild(*Sofield45);

Sofield* Sofield46 = new Sofield();
Sofield46->setName(QString("h"));
Sofield46->setAccessType(QString("inputOutput"));
Sofield46->setType(QString("SFFloat"));
Sofield46->setValue(QString("5"));
SoScript39->addChild(*Sofield46);

Sofield* Sofield47 = new Sofield();
Sofield47->setName(QString("resolution"));
Sofield47->setAccessType(QString("inputOutput"));
Sofield47->setType(QString("SFInt32"));
Sofield47->setValue(QString("50"));
SoScript39->addChild(*Sofield47);


//SoScript39->setSourceCode(QString("ecmascript:")+
//_T("			function initialize() {")+
//_T("			     generateCoordinates();")+
//_T("			     var arrIndex = 0;")+
//_T("			     for (var i = 0; i < resolution-1; i++) {")+
//_T("				for (var j = 0; j < resolution-1; j++) {")+
//_T("				     coordIndexes[arrIndex++] = i*resolution+j;")+
//_T("				     coordIndexes[arrIndex++] = i*resolution+j+1;")+
//_T("				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;")+
//_T("				     coordIndexes[arrIndex++] = (i+1)*resolution+j;")+
//_T("				     coordIndexes[arrIndex++] = -1;")+
//_T("				}")+
//_T("			    }")+
//_T("			}")+
//_T("			function generateCoordinates() {")+
//_T("			     var theta = 0.0;")+
//_T("			     var phi = 0.0;")+
//_T("			     var delta = (2 * 3.141592653) / (resolution-1);")+
//_T("			     var arrIndex = 0;")+
//_T("			     for (var i = 0; i < resolution; i++) {")+
//_T("				for (var j = 0; j < resolution; j++) {")+
//_T("					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);")+
//_T("					coordinates[arrIndex++] = new SFVec3f(")+
//_T("						rho * Math.cos(phi) * Math.cos(theta),")+
//_T("						rho * Math.cos(phi) * Math.sin(theta),")+
//_T("						rho * Math.sin(phi)")+
//_T("					);")+
//_T("					theta += delta;")+
//_T("				}")+
//_T("				phi += delta;")+
//_T("			     }")+
//_T("			}")+
//_T("			function set_fraction(fraction, eventTime) {")+
//_T("				var choice = Math.floor(Math.random() * 4);")+
//_T("				switch (choice) {")+
//_T("				case 0:")+
//_T("					e += Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("					break;")+
//_T("				case 1:")+
//_T("					f += Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("					break;")+
//_T("				case 2:")+
//_T("					g += Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("					break;")+
//_T("				case 3:")+
//_T("					h += Math.floor(Math.random() * 2) * 2 - 1;")+
//_T("					break;")+
//_T("				}")+
//_T("				if (e < 1) {")+
//_T("					f = 10;")+
//_T("				}")+
//_T("				if (f < 1) {")+
//_T("					f = 10;")+
//_T("				}")+
//_T("				if (g < 1) {")+
//_T("					g = 4;")+
//_T("				}")+
//_T("				if (h < 1) {")+
//_T("					h = 4;")+
//_T("				}")+
//_T("				generateCoordinates();")+
//_T("			}"));
SoGroup24->addChild(*SoScript39);

SoROUTE* SoROUTE48 = new SoROUTE();
SoROUTE48->setFromNode(QString("OrbitScript"));
SoROUTE48->setFromField(QString("coordIndexes"));
SoROUTE48->setToNode(QString("Orbit"));
SoROUTE48->setToField(QString("set_coordIndex"));
SoGroup24->addChild(*SoROUTE48);

SoROUTE* SoROUTE49 = new SoROUTE();
SoROUTE49->setFromNode(QString("OrbitScript"));
SoROUTE49->setFromField(QString("coordinates"));
SoROUTE49->setToNode(QString("OrbitCoordinates"));
SoROUTE49->setToField(QString("point"));
SoGroup24->addChild(*SoROUTE49);

SoROUTE* SoROUTE50 = new SoROUTE();
SoROUTE50->setFromNode(QString("Clock"));
SoROUTE50->setFromField(QString("fraction_changed"));
SoROUTE50->setToNode(QString("OrbitScript"));
SoROUTE50->setToField(QString("set_fraction"));
SoGroup24->addChild(*SoROUTE50);

SoROUTE* SoROUTE51 = new SoROUTE();
SoROUTE51->setFromNode(QString("OrbitPath"));
SoROUTE51->setFromField(QString("value_changed"));
SoROUTE51->setToNode(QString("OrbitTransform"));
SoROUTE51->setToField(QString("rotation"));
SoGroup24->addChild(*SoROUTE51);

SoROUTE* SoROUTE52 = new SoROUTE();
SoROUTE52->setFromNode(QString("Clock"));
SoROUTE52->setFromField(QString("fraction_changed"));
SoROUTE52->setToNode(QString("OrbitPath"));
SoROUTE52->setToField(QString("set_fraction"));
SoGroup24->addChild(*SoROUTE52);

SoProtoBody23->addChild(*SoGroup24);

SoProtoDeclare17->addChild(*SoProtoBody23);

SoGroup15->addChild(*SoProtoDeclare17);

SoProtoInstance* SoProtoInstance53 = new SoProtoInstance();
SoProtoInstance53->setName(QString("orbit"));
SoField* SoField54 = new SoField();
SoField54->setName(QString("translation"));
SoField54->setValue(QString("-8 0 0"));
SoProtoInstance53->addChild(*SoField54);

SoField* SoField55 = new SoField();
SoField55->setName(QString("diffuseColor"));
SoField55->setValue(QString("1 0.5 0"));
SoProtoInstance53->addChild(*SoField55);

SoField* SoField56 = new SoField();
SoField56->setName(QString("specularColor"));
SoField56->setValue(QString("1 0.5 0"));
SoProtoInstance53->addChild(*SoField56);

SoField* SoField57 = new SoField();
SoField57->setName(QString("transparency"));
SoField57->setValue(QString("0.75"));
SoProtoInstance53->addChild(*SoField57);

SoGroup15->addChild(*SoProtoInstance53);

SoProtoInstance* SoProtoInstance58 = new SoProtoInstance();
SoProtoInstance58->setName(QString("orbit"));
SoField* SoField59 = new SoField();
SoField59->setName(QString("translation"));
SoField59->setValue(QString("8 0 0"));
SoProtoInstance58->addChild(*SoField59);

SoField* SoField60 = new SoField();
SoField60->setName(QString("diffuseColor"));
SoField60->setValue(QString("0 0.5 1"));
SoProtoInstance58->addChild(*SoField60);

SoField* SoField61 = new SoField();
SoField61->setName(QString("specularColor"));
SoField61->setValue(QString("0 0.5 1"));
SoProtoInstance58->addChild(*SoField61);

SoField* SoField62 = new SoField();
SoField62->setName(QString("transparency"));
SoField62->setValue(QString("0.5"));
SoProtoInstance58->addChild(*SoField62);

SoGroup15->addChild(*SoProtoInstance58);

SoNode12->addChild(*SoGroup15);

SoSceneManager0->setSceneGraph(*SoNode12);

return 0;
}
