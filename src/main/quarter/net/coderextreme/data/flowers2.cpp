
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
Someta5->setName(QString("created"));
Someta5->setContent(QString("23 January 2005"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("modified"));
Someta6->setContent(QString("9 November 2024"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("description"));
Someta7->setContent(QString("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("identifier"));
Someta8->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("generator"));
Someta9->setContent(QString("manually written"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("license"));
Someta10->setContent(QString("https://www.web3d.org/x3d/content/examples/license.html"));
Sohead1->addMeta(*Someta10);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode11 = new SoNode();
SoNavigationInfo* SoNavigationInfo12 = new SoNavigationInfo();
SoNode11->addChild(*SoNavigationInfo12);

SoViewpoint* SoViewpoint13 = new SoViewpoint();
SoViewpoint13->setDescription(QString("Two mathematical orbitals"));
SoViewpoint13->setPosition(new float[]{0.0,0.0,50.0});
SoNode11->addChild(*SoViewpoint13);

SoGroup* SoGroup14 = new SoGroup();
SoDirectionalLight* SoDirectionalLight15 = new SoDirectionalLight();
SoDirectionalLight15->setDirection(new float[]{1.0,1.0,1.0});
SoGroup14->addChild(*SoDirectionalLight15);

SoProtoDeclare* SoProtoDeclare16 = new SoProtoDeclare();
SoProtoDeclare16->setName(QString("orbit"));
SoProtoInterface* SoProtoInterface17 = new SoProtoInterface();
Sofield* Sofield18 = new Sofield();
Sofield18->setName(QString("translation"));
Sofield18->setAccessType(QString("inputOutput"));
Sofield18->setType(QString("SFVec3f"));
Sofield18->setValue(QString("-8 0 0"));
SoProtoInterface17->addChild(*Sofield18);

Sofield* Sofield19 = new Sofield();
Sofield19->setName(QString("diffuseColor"));
Sofield19->setAccessType(QString("inputOutput"));
Sofield19->setType(QString("SFColor"));
Sofield19->setValue(QString("1 0.5 0"));
SoProtoInterface17->addChild(*Sofield19);

Sofield* Sofield20 = new Sofield();
Sofield20->setName(QString("specularColor"));
Sofield20->setAccessType(QString("inputOutput"));
Sofield20->setType(QString("SFColor"));
Sofield20->setValue(QString("1 0.5 0"));
SoProtoInterface17->addChild(*Sofield20);

Sofield* Sofield21 = new Sofield();
Sofield21->setName(QString("transparency"));
Sofield21->setAccessType(QString("inputOutput"));
Sofield21->setType(QString("SFFloat"));
Sofield21->setValue(QString("0.75"));
SoProtoInterface17->addChild(*Sofield21);

SoProtoDeclare16->addChild(*SoProtoInterface17);

SoProtoBody* SoProtoBody22 = new SoProtoBody();
SoGroup* SoGroup23 = new SoGroup();
SoTimeSensor* SoTimeSensor24 = new SoTimeSensor();
SoTimeSensor24->setDEF(QString("Clock"));
SoTimeSensor24->setCycleInterval(16);
SoTimeSensor24->setLoop(true);
SoGroup23->addChild(*SoTimeSensor24);

SoOrientationInterpolator* SoOrientationInterpolator25 = new SoOrientationInterpolator();
SoOrientationInterpolator25->setDEF(QString("OrbitPath"));
SoOrientationInterpolator25->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator25->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,3.14,1.0,0.0,0.0,6.28}, 12);
SoGroup23->addChild(*SoOrientationInterpolator25);

SoTransform* SoTransform26 = new SoTransform();
SoTransform26->setDEF(QString("OrbitTransform"));
SoIS* SoIS27 = new SoIS();
Soconnect* Soconnect28 = new Soconnect();
Soconnect28->setNodeField(QString("translation"));
Soconnect28->setProtoField(QString("translation"));
SoIS27->addChild(*Soconnect28);

SoTransform26->addChild(*SoIS27);

SoShape* SoShape29 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance30 = new SoVRMLAppearance();
SoMaterial* SoMaterial31 = new SoMaterial();
SoIS* SoIS32 = new SoIS();
Soconnect* Soconnect33 = new Soconnect();
Soconnect33->setNodeField(QString("diffuseColor"));
Soconnect33->setProtoField(QString("diffuseColor"));
SoIS32->addChild(*Soconnect33);

Soconnect* Soconnect34 = new Soconnect();
Soconnect34->setNodeField(QString("specularColor"));
Soconnect34->setProtoField(QString("specularColor"));
SoIS32->addChild(*Soconnect34);

Soconnect* Soconnect35 = new Soconnect();
Soconnect35->setNodeField(QString("transparency"));
Soconnect35->setProtoField(QString("transparency"));
SoIS32->addChild(*Soconnect35);

SoMaterial31->addChild(*SoIS32);

SoVRMLAppearance30->addChild(*SoMaterial31);

SoShape29->addChild(*SoVRMLAppearance30);

//<IndexedFaceSet DEF=\"Orbit\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>
SoIndexedFaceSet* SoIndexedFaceSet36 = new SoIndexedFaceSet();
SoIndexedFaceSet36->setCcw(false);
SoIndexedFaceSet36->setConvex(false);
SoIndexedFaceSet36->setCoordIndex(new int32_t[]{0,1,2,-1}, 4);
SoIndexedFaceSet36->setDEF(QString("Orbit"));
SoCoordinate* SoCoordinate37 = new SoCoordinate();
SoCoordinate37->setDEF(QString("OrbitCoordinates"));
SoCoordinate37->setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0}, 9);
SoIndexedFaceSet36->setCoord(*SoCoordinate37);

SoShape29->setGeometry(*SoIndexedFaceSet36);

SoTransform26->addChild(*SoShape29);

SoGroup23->addChild(*SoTransform26);

SoScript* SoScript38 = new SoScript();
SoScript38->setDEF(QString("OrbitScript"));
Sofield* Sofield39 = new Sofield();
Sofield39->setName(QString("set_fraction"));
Sofield39->setAccessType(QString("inputOnly"));
Sofield39->setType(QString("SFFloat"));
SoScript38->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setName(QString("coordinates"));
Sofield40->setAccessType(QString("inputOutput"));
Sofield40->setType(QString("MFVec3f"));
SoScript38->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("coordIndexes"));
Sofield41->setAccessType(QString("inputOutput"));
Sofield41->setType(QString("MFInt32"));
SoScript38->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("e"));
Sofield42->setAccessType(QString("inputOutput"));
Sofield42->setType(QString("SFFloat"));
Sofield42->setValue(QString("5"));
SoScript38->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("f"));
Sofield43->setAccessType(QString("inputOutput"));
Sofield43->setType(QString("SFFloat"));
Sofield43->setValue(QString("5"));
SoScript38->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("g"));
Sofield44->setAccessType(QString("inputOutput"));
Sofield44->setType(QString("SFFloat"));
Sofield44->setValue(QString("5"));
SoScript38->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setName(QString("h"));
Sofield45->setAccessType(QString("inputOutput"));
Sofield45->setType(QString("SFFloat"));
Sofield45->setValue(QString("5"));
SoScript38->addChild(*Sofield45);

Sofield* Sofield46 = new Sofield();
Sofield46->setName(QString("resolution"));
Sofield46->setAccessType(QString("inputOutput"));
Sofield46->setType(QString("SFInt32"));
Sofield46->setValue(QString("50"));
SoScript38->addChild(*Sofield46);


//SoScript38->setSourceCode(QString("ecmascript:")+
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
SoGroup23->addChild(*SoScript38);

SoROUTE* SoROUTE47 = new SoROUTE();
SoROUTE47->setFromNode(QString("OrbitScript"));
SoROUTE47->setFromField(QString("coordIndexes"));
SoROUTE47->setToNode(QString("Orbit"));
SoROUTE47->setToField(QString("set_coordIndex"));
SoGroup23->addChild(*SoROUTE47);

SoROUTE* SoROUTE48 = new SoROUTE();
SoROUTE48->setFromNode(QString("OrbitScript"));
SoROUTE48->setFromField(QString("coordinates"));
SoROUTE48->setToNode(QString("OrbitCoordinates"));
SoROUTE48->setToField(QString("point"));
SoGroup23->addChild(*SoROUTE48);

SoROUTE* SoROUTE49 = new SoROUTE();
SoROUTE49->setFromNode(QString("Clock"));
SoROUTE49->setFromField(QString("fraction_changed"));
SoROUTE49->setToNode(QString("OrbitScript"));
SoROUTE49->setToField(QString("set_fraction"));
SoGroup23->addChild(*SoROUTE49);

SoROUTE* SoROUTE50 = new SoROUTE();
SoROUTE50->setFromNode(QString("OrbitPath"));
SoROUTE50->setFromField(QString("value_changed"));
SoROUTE50->setToNode(QString("OrbitTransform"));
SoROUTE50->setToField(QString("rotation"));
SoGroup23->addChild(*SoROUTE50);

SoROUTE* SoROUTE51 = new SoROUTE();
SoROUTE51->setFromNode(QString("Clock"));
SoROUTE51->setFromField(QString("fraction_changed"));
SoROUTE51->setToNode(QString("OrbitPath"));
SoROUTE51->setToField(QString("set_fraction"));
SoGroup23->addChild(*SoROUTE51);

SoProtoBody22->addChild(*SoGroup23);

SoProtoDeclare16->addChild(*SoProtoBody22);

SoGroup14->addChild(*SoProtoDeclare16);

SoProtoInstance* SoProtoInstance52 = new SoProtoInstance();
SoProtoInstance52->setName(QString("orbit"));
SoField* SoField53 = new SoField();
SoField53->setName(QString("translation"));
SoField53->setValue(QString("-8 0 0"));
SoProtoInstance52->addChild(*SoField53);

SoField* SoField54 = new SoField();
SoField54->setName(QString("diffuseColor"));
SoField54->setValue(QString("1 0.5 0"));
SoProtoInstance52->addChild(*SoField54);

SoField* SoField55 = new SoField();
SoField55->setName(QString("specularColor"));
SoField55->setValue(QString("1 0.5 0"));
SoProtoInstance52->addChild(*SoField55);

SoField* SoField56 = new SoField();
SoField56->setName(QString("transparency"));
SoField56->setValue(QString("0.75"));
SoProtoInstance52->addChild(*SoField56);

SoGroup14->addChild(*SoProtoInstance52);

SoProtoInstance* SoProtoInstance57 = new SoProtoInstance();
SoProtoInstance57->setName(QString("orbit"));
SoField* SoField58 = new SoField();
SoField58->setName(QString("translation"));
SoField58->setValue(QString("8 0 0"));
SoProtoInstance57->addChild(*SoField58);

SoField* SoField59 = new SoField();
SoField59->setName(QString("diffuseColor"));
SoField59->setValue(QString("0 0.5 1"));
SoProtoInstance57->addChild(*SoField59);

SoField* SoField60 = new SoField();
SoField60->setName(QString("specularColor"));
SoField60->setValue(QString("0 0.5 1"));
SoProtoInstance57->addChild(*SoField60);

SoField* SoField61 = new SoField();
SoField61->setName(QString("transparency"));
SoField61->setValue(QString("0.5"));
SoProtoInstance57->addChild(*SoField61);

SoGroup14->addChild(*SoProtoInstance57);

SoNode11->addChild(*SoGroup14);

SoSceneManager0->setSceneGraph(*SoNode11);

return 0;
}
