
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

Socomponent* Socomponent3 = new Socomponent();
Socomponent3->setName(QString("EnvironmentalEffects"));
Socomponent3->setLevel(3);
Sohead1->addChild(*Socomponent3);

Socomponent* Socomponent4 = new Socomponent();
Socomponent4->setName(QString("Shaders"));
Socomponent4->setLevel(1);
Sohead1->addChild(*Socomponent4);

Socomponent* Socomponent5 = new Socomponent();
Socomponent5->setName(QString("CubeMapTexturing"));
Socomponent5->setLevel(1);
Sohead1->addChild(*Socomponent5);

Socomponent* Socomponent6 = new Socomponent();
Socomponent6->setName(QString("Texturing"));
Socomponent6->setLevel(1);
Sohead1->addChild(*Socomponent6);

Socomponent* Socomponent7 = new Socomponent();
Socomponent7->setName(QString("Rendering"));
Socomponent7->setLevel(1);
Sohead1->addChild(*Socomponent7);

Socomponent* Socomponent8 = new Socomponent();
Socomponent8->setName(QString("Shape"));
Socomponent8->setLevel(4);
Sohead1->addChild(*Socomponent8);

Socomponent* Socomponent9 = new Socomponent();
Socomponent9->setName(QString("Grouping"));
Socomponent9->setLevel(3);
Sohead1->addChild(*Socomponent9);

Socomponent* Socomponent10 = new Socomponent();
Socomponent10->setName(QString("Core"));
Socomponent10->setLevel(1);
Sohead1->addChild(*Socomponent10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("title"));
Someta11->setContent(QString("flowers4.x3d"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("creator"));
Someta12->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("generator"));
Someta13->setContent(QString("manual"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("identifier"));
Someta14->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("description"));
Someta15->setContent(QString("an animated flower"));
Sohead1->addMeta(*Someta15);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode16 = new SoNode();
SoNavigationInfo* SoNavigationInfo17 = new SoNavigationInfo();
SoNode16->addChild(*SoNavigationInfo17);

SoBackground* SoBackground18 = new SoBackground();
SoBackground18->setBackUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoBackground18->setBottomUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoBackground18->setFrontUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoBackground18->setLeftUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoBackground18->setRightUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoBackground18->setTopUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoNode16->addChild(*SoBackground18);

SoTransform* SoTransform19 = new SoTransform();
SoTransform19->setDEF(QString("transform"));
SoShape* SoShape20 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance21 = new SoVRMLAppearance();
SoMaterial* SoMaterial22 = new SoMaterial();
SoMaterial22->setDiffuseColor(new float[]{0.7,0.7,0.7});
SoMaterial22->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance21->addChild(*SoMaterial22);

SoComposedCubeMapTexture* SoComposedCubeMapTexture23 = new SoComposedCubeMapTexture();
SoImageTexture* SoImageTexture24 = new SoImageTexture();
SoImageTexture24->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
SoComposedCubeMapTexture23->setBack(*SoImageTexture24);

SoImageTexture* SoImageTexture25 = new SoImageTexture();
SoImageTexture25->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
SoComposedCubeMapTexture23->setBottom(*SoImageTexture25);

SoImageTexture* SoImageTexture26 = new SoImageTexture();
SoImageTexture26->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
SoComposedCubeMapTexture23->setFront(*SoImageTexture26);

SoImageTexture* SoImageTexture27 = new SoImageTexture();
SoImageTexture27->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
SoComposedCubeMapTexture23->setLeft(*SoImageTexture27);

SoImageTexture* SoImageTexture28 = new SoImageTexture();
SoImageTexture28->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
SoComposedCubeMapTexture23->setRight(*SoImageTexture28);

SoImageTexture* SoImageTexture29 = new SoImageTexture();
SoImageTexture29->setUrl(new QString[]{QString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), QString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
SoComposedCubeMapTexture23->setTop(*SoImageTexture29);

SoVRMLAppearance21->addChild(*SoComposedCubeMapTexture23);

SoComposedShader* SoComposedShader30 = new SoComposedShader();
SoComposedShader30->setDEF(QString("shader"));
SoComposedShader30->setLanguage(QString("GLSL"));
Sofield* Sofield31 = new Sofield();
Sofield31->setName(QString("cube"));
Sofield31->setType(QString("SFInt32"));
Sofield31->setAccessType(QString("inputOutput"));
Sofield31->setValue(QString("0"));
SoComposedShader30->addChild(*Sofield31);

Sofield* Sofield32 = new Sofield();
Sofield32->setName(QString("chromaticDispertion"));
Sofield32->setAccessType(QString("inputOutput"));
Sofield32->setType(QString("SFVec3f"));
Sofield32->setValue(QString("0.98 1 1.033"));
SoComposedShader30->addChild(*Sofield32);

Sofield* Sofield33 = new Sofield();
Sofield33->setName(QString("bias"));
Sofield33->setType(QString("SFFloat"));
Sofield33->setAccessType(QString("inputOutput"));
Sofield33->setValue(QString("0.5"));
SoComposedShader30->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("scale"));
Sofield34->setType(QString("SFFloat"));
Sofield34->setAccessType(QString("inputOutput"));
Sofield34->setValue(QString("0.5"));
SoComposedShader30->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("power"));
Sofield35->setType(QString("SFFloat"));
Sofield35->setAccessType(QString("inputOutput"));
Sofield35->setValue(QString("2"));
SoComposedShader30->addChild(*Sofield35);

SoShaderPart* SoShaderPart36 = new SoShaderPart();
SoShaderPart36->setUrl(new QString[]{QString("../shaders/x_ite.vs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")}, 3);
SoShaderPart36->setType(QString("VERTEX"));
SoComposedShader30->setParts(*SoShaderPart36);

SoShaderPart* SoShaderPart37 = new SoShaderPart();
SoShaderPart37->setUrl(new QString[]{QString("../shaders/x_ite.fs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"), QString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")}, 3);
SoShaderPart37->setType(QString("FRAGMENT"));
SoComposedShader30->setParts(*SoShaderPart37);

SoVRMLAppearance21->addChild(*SoComposedShader30);

SoShape20->addChild(*SoVRMLAppearance21);

//<Sphere>
SoIndexedFaceSet* SoIndexedFaceSet38 = new SoIndexedFaceSet();
SoIndexedFaceSet38->setConvex(false);
SoIndexedFaceSet38->setDEF(QString("Orbit"));
SoCoordinate* SoCoordinate39 = new SoCoordinate();
SoCoordinate39->setDEF(QString("OrbitCoordinates"));
SoIndexedFaceSet38->setCoord(*SoCoordinate39);

SoShape20->setGeometry(*SoIndexedFaceSet38);

SoTransform19->addChild(*SoShape20);

SoNode16->addChild(*SoTransform19);

SoScript* SoScript40 = new SoScript();
SoScript40->setDEF(QString("OrbitScript"));
Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("set_fraction"));
Sofield41->setAccessType(QString("inputOnly"));
Sofield41->setType(QString("SFFloat"));
SoScript40->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("coordinates"));
Sofield42->setAccessType(QString("inputOutput"));
Sofield42->setType(QString("MFVec3f"));
SoScript40->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("coordIndexes"));
Sofield43->setAccessType(QString("outputOnly"));
Sofield43->setType(QString("MFInt32"));
SoScript40->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("e"));
Sofield44->setType(QString("SFFloat"));
Sofield44->setAccessType(QString("inputOutput"));
Sofield44->setValue(QString("5"));
SoScript40->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setName(QString("f"));
Sofield45->setType(QString("SFFloat"));
Sofield45->setAccessType(QString("inputOutput"));
Sofield45->setValue(QString("5"));
SoScript40->addChild(*Sofield45);

Sofield* Sofield46 = new Sofield();
Sofield46->setName(QString("g"));
Sofield46->setType(QString("SFFloat"));
Sofield46->setAccessType(QString("inputOutput"));
Sofield46->setValue(QString("5"));
SoScript40->addChild(*Sofield46);

Sofield* Sofield47 = new Sofield();
Sofield47->setName(QString("h"));
Sofield47->setType(QString("SFFloat"));
Sofield47->setAccessType(QString("inputOutput"));
Sofield47->setValue(QString("5"));
SoScript40->addChild(*Sofield47);


//SoScript40->setSourceCode(QString("ecmascript:")+
//_T("function initialize() {")+
//_T("     var resolution = 100;")+
//_T("     updateCoordinates(resolution);")+
//_T("     var localci = new MFInt32();")+
//_T("     var arrIndex = 0;")+
//_T("     for (var i = 0; i < resolution-1; i++) {")+
//_T("     	for (var j = 0; j < resolution-1; j++) {")+
//_T("	     localci[arrIndex++] = i*resolution+j;")+
//_T("	     localci[arrIndex++] = i*resolution+j+1;")+
//_T("	     localci[arrIndex++] = (i+1)*resolution+j+1;")+
//_T("	     localci[arrIndex++] = (i+1)*resolution+j;")+
//_T("	     localci[arrIndex++] = -1;")+
//_T("	}")+
//_T("    }")+
//_T("    coordIndexes = localci;")+
//_T("}")+
//_T("function updateCoordinates(resolution) {")+
//_T("     var theta = 0.0;")+
//_T("     var phi = 0.0;")+
//_T("     var delta = (2 * 3.141592653) / (resolution-1);")+
//_T("     var localc = new MFVec3f();")+
//_T("     var arrIndex = 0;")+
//_T("     for (var i = 0; i < resolution; i++) {")+
//_T("     	for (var j = 0; j < resolution; j++) {")+
//_T("		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);")+
//_T("		localc[arrIndex++] = new SFVec3f(")+
//_T("			rho * Math.cos(phi) * Math.cos(theta),")+
//_T("			rho * Math.cos(phi) * Math.sin(theta),")+
//_T("			rho * Math.sin(phi)")+
//_T("		);")+
//_T("		theta += delta;")+
//_T("	}")+
//_T("	phi += delta;")+
//_T("     }")+
//_T("     coordinates = localc;")+
//_T("}")+
//_T("function set_fraction(fraction, eventTime) {")+
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
//_T("	if (e < 1) {")+
//_T("		e = 10;")+
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
//_T("	var resolution = 100;")+
//_T("	updateCoordinates(resolution);")+
//_T("}"));
SoNode16->addChild(*SoScript40);

SoTimeSensor* SoTimeSensor48 = new SoTimeSensor();
SoTimeSensor48->setDEF(QString("Clock"));
SoTimeSensor48->setCycleInterval(16);
SoTimeSensor48->setLoop(true);
SoNode16->addChild(*SoTimeSensor48);

SoROUTE* SoROUTE49 = new SoROUTE();
SoROUTE49->setFromField(QString("coordIndexes"));
SoROUTE49->setFromNode(QString("OrbitScript"));
SoROUTE49->setToField(QString("set_coordIndex"));
SoROUTE49->setToNode(QString("Orbit"));
SoNode16->addChild(*SoROUTE49);

SoROUTE* SoROUTE50 = new SoROUTE();
SoROUTE50->setFromField(QString("coordinates"));
SoROUTE50->setFromNode(QString("OrbitScript"));
SoROUTE50->setToField(QString("set_point"));
SoROUTE50->setToNode(QString("OrbitCoordinates"));
SoNode16->addChild(*SoROUTE50);

SoROUTE* SoROUTE51 = new SoROUTE();
SoROUTE51->setFromField(QString("fraction_changed"));
SoROUTE51->setFromNode(QString("Clock"));
SoROUTE51->setToField(QString("set_fraction"));
SoROUTE51->setToNode(QString("OrbitScript"));
SoNode16->addChild(*SoROUTE51);

SoSceneManager0->setSceneGraph(*SoNode16);

return 0;
}
