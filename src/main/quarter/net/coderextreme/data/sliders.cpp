
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
SoSceneManager0->setVersion(QString("4.1"));
Sohead* Sohead1 = new Sohead();
//<component name='Shape' level='4'></component>
Socomponent* Socomponent2 = new Socomponent();
Socomponent2->setName(QString("Scripting"));
Socomponent2->setLevel(1);
Sohead1->addChild(*Socomponent2);

Socomponent* Socomponent3 = new Socomponent();
Socomponent3->setName(QString("EnvironmentalEffects"));
Socomponent3->setLevel(3);
Sohead1->addChild(*Socomponent3);

Socomponent* Socomponent4 = new Socomponent();
Socomponent4->setName(QString("Texturing"));
Socomponent4->setLevel(1);
Sohead1->addChild(*Socomponent4);

Socomponent* Socomponent5 = new Socomponent();
Socomponent5->setName(QString("Rendering"));
Socomponent5->setLevel(1);
Sohead1->addChild(*Socomponent5);

Socomponent* Socomponent6 = new Socomponent();
Socomponent6->setName(QString("Grouping"));
Socomponent6->setLevel(3);
Sohead1->addChild(*Socomponent6);

Socomponent* Socomponent7 = new Socomponent();
Socomponent7->setName(QString("Core"));
Socomponent7->setLevel(1);
Sohead1->addChild(*Socomponent7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("title"));
Someta8->setContent(QString("sliders.x3d"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("created"));
Someta9->setContent(QString("8 August 2025"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("description"));
Someta10->setContent(QString("*Bumpy flower with prototype sliders*"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("creator"));
Someta11->setContent(QString("Doug Sanden, Christoph Valentin, John Carlson"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("identifier"));
Someta12->setContent(QString("https://www.coderextreme.net/X3DJSONLD/src/main/data/sliders.x3d"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("license"));
Someta13->setContent(QString("license.html"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("generator"));
Someta14->setContent(QString("Vim, VI Improved"));
Sohead1->addMeta(*Someta14);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode15 = new SoNode();
SoLayerSet* SoLayerSet16 = new SoLayerSet();
SoLayerSet16->setActiveLayer(1);
SoLayerSet16->setOrder(new int32_t[]{1,2,3}, 3);
SoLayer* SoLayer17 = new SoLayer();
SoLayer17->setPickable(true);
SoLayer17->setObjectType(new QString[]{QString("ALL")}, 1);
SoNavigationInfo* SoNavigationInfo18 = new SoNavigationInfo();
SoNavigationInfo18->setType(new QString[]{QString("EXAMINE")}, 1);
SoNavigationInfo18->setAvatarSize(new float[]{0.25,1.75,0.75}, 3);
SoLayer17->addChild(*SoNavigationInfo18);

SoDirectionalLight* SoDirectionalLight19 = new SoDirectionalLight();
SoDirectionalLight19->setAmbientIntensity(0.2);
SoDirectionalLight19->setDirection(new float[]{0.0,-1.0,0.0});
SoLayer17->addChild(*SoDirectionalLight19);

SoDirectionalLight* SoDirectionalLight20 = new SoDirectionalLight();
SoDirectionalLight20->setAmbientIntensity(0.2);
SoDirectionalLight20->setDirection(new float[]{-1.0,-0.1,-1.0});
SoLayer17->addChild(*SoDirectionalLight20);

SoViewpoint* SoViewpoint21 = new SoViewpoint();
SoViewpoint21->setDescription(QString("My Overview"));
SoViewpoint21->setFieldOfView(1.570796);
SoViewpoint21->setPosition(new float[]{0.0,1.75,60.0});
SoLayer17->addChild(*SoViewpoint21);

SoGroup* SoGroup22 = new SoGroup();
//Arrow X
SoTransform* SoTransform23 = new SoTransform();
SoTransform23->setTranslation(new float[]{25.0,0.0,0.0});
SoTransform23->setRotation(new float[]{0.0,0.0,-1.0,1.57});
SoShape* SoShape24 = new SoShape();
SoCylinder* SoCylinder25 = new SoCylinder();
SoCylinder25->setDEF(QString("Shaft"));
SoCylinder25->setRadius(0.35);
SoCylinder25->setHeight(50);
SoShape24->setGeometry(*SoCylinder25);

SoVRMLAppearance* SoVRMLAppearance26 = new SoVRMLAppearance();
SoMaterial* SoMaterial27 = new SoMaterial();
SoMaterial27->setDEF(QString("RED"));
SoMaterial27->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoMaterial27->setEmissiveColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance26->addChild(*SoMaterial27);

SoShape24->addChild(*SoVRMLAppearance26);

SoTransform23->addChild(*SoShape24);

SoGroup22->addChild(*SoTransform23);

SoTransform* SoTransform28 = new SoTransform();
SoTransform28->setTranslation(new float[]{50.0,0.0,0.0});
SoTransform28->setRotation(new float[]{0.0,0.0,-1.0,1.57});
SoShape* SoShape29 = new SoShape();
SoCone* SoCone30 = new SoCone();
SoCone30->setDEF(QString("Tip"));
SoCone30->setBottomRadius(0.8);
SoCone30->setHeight(3);
SoShape29->setGeometry(*SoCone30);

SoVRMLAppearance* SoVRMLAppearance31 = new SoVRMLAppearance();
SoMaterial* SoMaterial32 = new SoMaterial();
SoMaterial32->setUSE(QString("RED"));
SoVRMLAppearance31->addChild(*SoMaterial32);

SoShape29->addChild(*SoVRMLAppearance31);

SoTransform28->addChild(*SoShape29);

SoGroup22->addChild(*SoTransform28);

//Arrow Y
SoTransform* SoTransform33 = new SoTransform();
SoTransform33->setTranslation(new float[]{0.0,25.0,0.0});
SoShape* SoShape34 = new SoShape();
SoCylinder* SoCylinder35 = new SoCylinder();
SoCylinder35->setUSE(QString("Shaft"));
SoShape34->setGeometry(*SoCylinder35);

SoVRMLAppearance* SoVRMLAppearance36 = new SoVRMLAppearance();
SoMaterial* SoMaterial37 = new SoMaterial();
SoMaterial37->setDEF(QString("GREEN"));
SoMaterial37->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoMaterial37->setEmissiveColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance36->addChild(*SoMaterial37);

SoShape34->addChild(*SoVRMLAppearance36);

SoTransform33->addChild(*SoShape34);

SoGroup22->addChild(*SoTransform33);

SoTransform* SoTransform38 = new SoTransform();
SoTransform38->setTranslation(new float[]{0.0,50.0,0.0});
SoShape* SoShape39 = new SoShape();
SoCone* SoCone40 = new SoCone();
SoCone40->setUSE(QString("Tip"));
SoShape39->setGeometry(*SoCone40);

SoVRMLAppearance* SoVRMLAppearance41 = new SoVRMLAppearance();
SoMaterial* SoMaterial42 = new SoMaterial();
SoMaterial42->setUSE(QString("GREEN"));
SoVRMLAppearance41->addChild(*SoMaterial42);

SoShape39->addChild(*SoVRMLAppearance41);

SoTransform38->addChild(*SoShape39);

SoGroup22->addChild(*SoTransform38);

//Arrow Z
SoTransform* SoTransform43 = new SoTransform();
SoTransform43->setTranslation(new float[]{0.0,0.0,25.0});
SoTransform43->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoShape* SoShape44 = new SoShape();
SoCylinder* SoCylinder45 = new SoCylinder();
SoCylinder45->setUSE(QString("Shaft"));
SoShape44->setGeometry(*SoCylinder45);

SoVRMLAppearance* SoVRMLAppearance46 = new SoVRMLAppearance();
SoMaterial* SoMaterial47 = new SoMaterial();
SoMaterial47->setDEF(QString("BLUE"));
SoMaterial47->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoMaterial47->setEmissiveColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance46->addChild(*SoMaterial47);

SoShape44->addChild(*SoVRMLAppearance46);

SoTransform43->addChild(*SoShape44);

SoGroup22->addChild(*SoTransform43);

SoTransform* SoTransform48 = new SoTransform();
SoTransform48->setTranslation(new float[]{0.0,0.0,50.0});
SoTransform48->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoShape* SoShape49 = new SoShape();
SoCone* SoCone50 = new SoCone();
SoCone50->setUSE(QString("Tip"));
SoShape49->setGeometry(*SoCone50);

SoVRMLAppearance* SoVRMLAppearance51 = new SoVRMLAppearance();
SoMaterial* SoMaterial52 = new SoMaterial();
SoMaterial52->setUSE(QString("BLUE"));
SoVRMLAppearance51->addChild(*SoMaterial52);

SoShape49->addChild(*SoVRMLAppearance51);

SoTransform48->addChild(*SoShape49);

SoGroup22->addChild(*SoTransform48);

SoLayer17->addChild(*SoGroup22);

//the model that is being reviewed by the users of this scene
SoTransform* SoTransform53 = new SoTransform();
SoTransform53->setDEF(QString("FlowerTransform"));
SoTransform* SoTransform54 = new SoTransform();
SoShape* SoShape55 = new SoShape();
SoIndexedFaceSet* SoIndexedFaceSet56 = new SoIndexedFaceSet();
SoIndexedFaceSet56->setConvex(false);
SoIndexedFaceSet56->setDEF(QString("Orbit"));
SoCoordinate* SoCoordinate57 = new SoCoordinate();
SoCoordinate57->setDEF(QString("OrbitCoordinates"));
SoIndexedFaceSet56->setCoord(*SoCoordinate57);

SoShape55->setGeometry(*SoIndexedFaceSet56);

SoVRMLAppearance* SoVRMLAppearance58 = new SoVRMLAppearance();
SoMaterial* SoMaterial59 = new SoMaterial();
SoMaterial59->setDiffuseColor(new float[]{0.7,0.7,0.7});
SoMaterial59->setSpecularColor(new float[]{0.5,0.5,0.5});
SoVRMLAppearance58->addChild(*SoMaterial59);

SoShape55->addChild(*SoVRMLAppearance58);

SoTransform54->addChild(*SoShape55);

SoTransform53->addChild(*SoTransform54);

SoLayer17->addChild(*SoTransform53);

SoScript* SoScript60 = new SoScript();
SoScript60->setDEF(QString("OrbitScript"));
Sofield* Sofield61 = new Sofield();
Sofield61->setName(QString("coordinates"));
Sofield61->setType(QString("MFVec3f"));
Sofield61->setAccessType(QString("inputOutput"));
SoScript60->addChild(*Sofield61);

Sofield* Sofield62 = new Sofield();
Sofield62->setName(QString("coordIndexes"));
Sofield62->setType(QString("MFInt32"));
Sofield62->setAccessType(QString("inputOutput"));
SoScript60->addChild(*Sofield62);

Sofield* Sofield63 = new Sofield();
Sofield63->setName(QString("a"));
Sofield63->setType(QString("SFFloat"));
Sofield63->setAccessType(QString("inputOutput"));
Sofield63->setValue(QString("5"));
SoScript60->addChild(*Sofield63);

Sofield* Sofield64 = new Sofield();
Sofield64->setName(QString("b"));
Sofield64->setType(QString("SFFloat"));
Sofield64->setAccessType(QString("inputOutput"));
Sofield64->setValue(QString("5"));
SoScript60->addChild(*Sofield64);

Sofield* Sofield65 = new Sofield();
Sofield65->setName(QString("c"));
Sofield65->setType(QString("SFFloat"));
Sofield65->setAccessType(QString("inputOutput"));
Sofield65->setValue(QString("5"));
SoScript60->addChild(*Sofield65);

Sofield* Sofield66 = new Sofield();
Sofield66->setName(QString("d"));
Sofield66->setType(QString("SFFloat"));
Sofield66->setAccessType(QString("inputOutput"));
Sofield66->setValue(QString("5"));
SoScript60->addChild(*Sofield66);

Sofield* Sofield67 = new Sofield();
Sofield67->setName(QString("pdelta"));
Sofield67->setType(QString("SFFloat"));
Sofield67->setAccessType(QString("inputOutput"));
Sofield67->setValue(QString("0"));
SoScript60->addChild(*Sofield67);

Sofield* Sofield68 = new Sofield();
Sofield68->setName(QString("tdelta"));
Sofield68->setType(QString("SFFloat"));
Sofield68->setAccessType(QString("inputOutput"));
Sofield68->setValue(QString("0"));
SoScript60->addChild(*Sofield68);

Sofield* Sofield69 = new Sofield();
Sofield69->setName(QString("resolution"));
Sofield69->setType(QString("SFInt32"));
Sofield69->setAccessType(QString("inputOutput"));
Sofield69->setValue(QString("50"));
SoScript60->addChild(*Sofield69);


//SoScript60->setSourceCode(QString("ecmascript:")+
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
//_T("			function set_a(value) {")+
//_T("				a = value;")+
//_T("				generateCoordinates();")+
//_T("			}")+
//_T("			function set_b(value) {")+
//_T("				b = value;")+
//_T("				generateCoordinates();")+
//_T("			}")+
//_T("			function set_c(value) {")+
//_T("				c = value;")+
//_T("				generateCoordinates();")+
//_T("			}")+
//_T("			function set_d(value) {")+
//_T("				d = value;")+
//_T("				generateCoordinates();")+
//_T("			}")+
//_T("			function set_pdelta(value) {")+
//_T("				pdelta = value;")+
//_T("				generateCoordinates();")+
//_T("			}")+
//_T("			function set_tdelta(value) {")+
//_T("				tdelta = value;")+
//_T("				generateCoordinates();")+
//_T("			}")+
//_T("			function resolution(value) {")+
//_T("				resolution = value;")+
//_T("				initialize();")+
//_T("			}")+
//_T("			function generateCoordinates() {")+
//_T("			     var theta = 0.0;")+
//_T("			     var phi = 0.0;")+
//_T("			     var delta = (2 * 3.141592653) / (resolution-1);")+
//_T("			     var arrIndex = 0;")+
//_T("			     for (var i = 0; i < resolution; i++) {")+
//_T("				for (var j = 0; j < resolution; j++) {")+
//_T("					var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);")+
//_T("					coordinates[arrIndex++] = new SFVec3f(")+
//_T("						rho * Math.cos(phi) * Math.cos(theta),")+
//_T("						rho * Math.cos(phi) * Math.sin(theta),")+
//_T("						rho * Math.sin(phi)")+
//_T("					);")+
//_T("					theta += delta;")+
//_T("				}")+
//_T("				phi += delta;")+
//_T("			     }")+
//_T("			}"));
SoLayer17->addChild(*SoScript60);

SoROUTE* SoROUTE70 = new SoROUTE();
SoROUTE70->setFromField(QString("coordIndexes"));
SoROUTE70->setFromNode(QString("OrbitScript"));
SoROUTE70->setToField(QString("set_coordIndex"));
SoROUTE70->setToNode(QString("Orbit"));
SoLayer17->addChild(*SoROUTE70);

SoROUTE* SoROUTE71 = new SoROUTE();
SoROUTE71->setFromField(QString("coordinates"));
SoROUTE71->setFromNode(QString("OrbitScript"));
SoROUTE71->setToField(QString("set_point"));
SoROUTE71->setToNode(QString("OrbitCoordinates"));
SoLayer17->addChild(*SoROUTE71);

SoLayerSet16->addChild(*SoLayer17);

SoLayoutLayer* SoLayoutLayer72 = new SoLayoutLayer();
SoLayoutLayer72->setPickable(true);
SoLayoutLayer72->setObjectType(new QString[]{QString("ALL")}, 1);
SoLayout* SoLayout73 = new SoLayout();
SoLayout73->setAlign(new QString[]{QString("LEFT"), QString("BOTTOM")}, 2);
SoLayout73->setOffset(new float[]{-0.2,0.19}, 2);
SoLayout73->setSize(new float[]{0.4,0.6}, 2);
SoLayoutLayer72->setLayout(*SoLayout73);

SoViewport* SoViewport74 = new SoViewport();
SoViewport74->setClipBoundary(new float[]{0.0,1.0,0.0,1.0}, 4);
SoLayoutLayer72->setViewport(*SoViewport74);

SoTransform* SoTransform75 = new SoTransform();
SoTransform75->setTranslation(new float[]{0.0,0.0,-3.0});
SoShape* SoShape76 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance77 = new SoVRMLAppearance();
SoMaterial* SoMaterial78 = new SoMaterial();
SoMaterial78->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoMaterial78->setTransparency(0.7);
SoVRMLAppearance77->addChild(*SoMaterial78);

SoShape76->addChild(*SoVRMLAppearance77);

SoBox* SoBox79 = new SoBox();
SoBox79->setSize(new float[]{100.0,100.0,0.02});
SoShape76->setGeometry(*SoBox79);

SoTransform75->addChild(*SoShape76);

SoLayoutLayer72->addChild(*SoTransform75);

SoTransform* SoTransform80 = new SoTransform();
SoTransform80->setDEF(QString("equationTransform"));
SoTransform* SoTransform81 = new SoTransform();
SoTransform81->setTranslation(new float[]{0.0,0.0,-20.0});
SoShape* SoShape82 = new SoShape();
SoText* SoText83 = new SoText();
SoText83->setDEF(QString("equation"));
SoText83->setString(new QString[]{QString("r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)")}, 1);
SoFontStyle* SoFontStyle84 = new SoFontStyle();
SoFontStyle84->setSize(0.09);
SoText83->setFontStyle(*SoFontStyle84);

SoShape82->setGeometry(*SoText83);

SoVRMLAppearance* SoVRMLAppearance85 = new SoVRMLAppearance();
SoMaterial* SoMaterial86 = new SoMaterial();
SoMaterial86->setDiffuseColor(new float[]{1.0,1.0,0.0});
SoVRMLAppearance85->addChild(*SoMaterial86);

SoShape82->addChild(*SoVRMLAppearance85);

SoTransform81->addChild(*SoShape82);

SoTransform80->addChild(*SoTransform81);

SoLayoutLayer72->addChild(*SoTransform80);

//The slider parameters
SoProtoDeclare* SoProtoDeclare87 = new SoProtoDeclare();
SoProtoDeclare87->setName(QString("SliderProto"));
SoProtoInterface* SoProtoInterface88 = new SoProtoInterface();
Sofield* Sofield89 = new Sofield();
Sofield89->setName(QString("sliderTranslation"));
Sofield89->setAccessType(QString("inputOutput"));
Sofield89->setType(QString("SFVec3f"));
Sofield89->setValue(QString("0 0 0"));
SoProtoInterface88->addChild(*Sofield89);

Sofield* Sofield90 = new Sofield();
Sofield90->setName(QString("textString"));
Sofield90->setAccessType(QString("inputOutput"));
Sofield90->setType(QString("MFString"));
Sofield90->setValue(QString("\"x=\""));
SoProtoInterface88->addChild(*Sofield90);

Sofield* Sofield91 = new Sofield();
Sofield91->setName(QString("parameterScale"));
Sofield91->setAccessType(QString("inputOutput"));
Sofield91->setType(QString("SFFloat"));
Sofield91->setValue(QString("15"));
SoProtoInterface88->addChild(*Sofield91);

Sofield* Sofield92 = new Sofield();
Sofield92->setName(QString("parameterName"));
Sofield92->setAccessType(QString("inputOutput"));
Sofield92->setType(QString("SFString"));
Sofield92->setValue(QString("x"));
SoProtoInterface88->addChild(*Sofield92);

Sofield* Sofield93 = new Sofield();
Sofield93->setName(QString("orbScript"));
Sofield93->setAccessType(QString("inputOutput"));
Sofield93->setType(QString("SFNode"));
SoProtoInterface88->addChild(*Sofield93);

SoProtoDeclare87->addChild(*SoProtoInterface88);

SoProtoBody* SoProtoBody94 = new SoProtoBody();
SoGroup* SoGroup95 = new SoGroup();
SoTransform* SoTransform96 = new SoTransform();
SoTransform96->setDEF(QString("protoSlider"));
SoTransform96->setTranslation(new float[]{0.0,0.7,0.0});
SoIS* SoIS97 = new SoIS();
Soconnect* Soconnect98 = new Soconnect();
Soconnect98->setNodeField(QString("translation"));
Soconnect98->setProtoField(QString("sliderTranslation"));
SoIS97->addChild(*Soconnect98);

SoTransform96->addChild(*SoIS97);

SoTransform* SoTransform99 = new SoTransform();
SoTransform99->setDEF(QString("protoTransform"));
SoTransform99->setTranslation(new float[]{0.0,0.0,0.1});
SoPlaneSensor* SoPlaneSensor100 = new SoPlaneSensor();
SoPlaneSensor100->setDEF(QString("protoSensor"));
SoPlaneSensor100->setDescription(QString("Grab with mouse to adjust slider"));
SoPlaneSensor100->setMaxPosition(new float[]{1.0,0.0});
SoTransform99->addChild(*SoPlaneSensor100);

SoTransform* SoTransform101 = new SoTransform();
SoTransform101->setTranslation(new float[]{0.0,0.0,0.0});
SoTouchSensor* SoTouchSensor102 = new SoTouchSensor();
SoTouchSensor102->setDescription(QString("Maybe start dragging this?"));
SoTouchSensor102->setDEF(QString("protoTS"));
SoTransform101->addChild(*SoTouchSensor102);

SoTransform99->addChild(*SoTransform101);

SoTransform* SoTransform103 = new SoTransform();
SoShape* SoShape104 = new SoShape();
SoText* SoText105 = new SoText();
SoText105->setDEF(QString("protoText"));
SoText105->setString(new QString[]{QString("a=")}, 1);
SoIS* SoIS106 = new SoIS();
Soconnect* Soconnect107 = new Soconnect();
Soconnect107->setNodeField(QString("string"));
Soconnect107->setProtoField(QString("textString"));
SoIS106->addChild(*Soconnect107);

SoText105->addChild(*SoIS106);

SoFontStyle* SoFontStyle108 = new SoFontStyle();
SoFontStyle108->setStyle(QString("BOLD"));
SoFontStyle108->setSize(0.23);
SoText105->setFontStyle(*SoFontStyle108);

SoShape104->setGeometry(*SoText105);

SoVRMLAppearance* SoVRMLAppearance109 = new SoVRMLAppearance();
SoMaterial* SoMaterial110 = new SoMaterial();
SoVRMLAppearance109->addChild(*SoMaterial110);

SoShape104->addChild(*SoVRMLAppearance109);

SoTransform103->addChild(*SoShape104);

SoTransform99->addChild(*SoTransform103);

SoTransform96->addChild(*SoTransform99);

SoGroup95->addChild(*SoTransform96);

SoScript* SoScript111 = new SoScript();
SoScript111->setDEF(QString("protoValueTransformerScript"));
Sofield* Sofield112 = new Sofield();
Sofield112->setName(QString("protoScale"));
Sofield112->setAccessType(QString("inputOutput"));
Sofield112->setType(QString("SFFloat"));
SoScript111->addChild(*Sofield112);

Sofield* Sofield113 = new Sofield();
Sofield113->setName(QString("protoParameterName"));
Sofield113->setAccessType(QString("inputOutput"));
Sofield113->setType(QString("SFString"));
SoScript111->addChild(*Sofield113);

Sofield* Sofield114 = new Sofield();
Sofield114->setName(QString("newTranslation"));
Sofield114->setAccessType(QString("inputOnly"));
Sofield114->setType(QString("SFVec3f"));
Sofield114->setValue(QString("1 1 1"));
SoScript111->addChild(*Sofield114);

Sofield* Sofield115 = new Sofield();
Sofield115->setName(QString("protoScript"));
Sofield115->setAccessType(QString("inputOutput"));
Sofield115->setType(QString("SFNode"));
SoScript111->addChild(*Sofield115);

Sofield* Sofield116 = new Sofield();
Sofield116->setName(QString("protoValue"));
Sofield116->setAccessType(QString("inputOutput"));
Sofield116->setType(QString("SFFloat"));
Sofield116->setValue(QString("1"));
SoScript111->addChild(*Sofield116);

Sofield* Sofield117 = new Sofield();
Sofield117->setName(QString("protoText"));
Sofield117->setAccessType(QString("inputOutput"));
Sofield117->setType(QString("MFString"));
Sofield117->setValue(QString("\"1.0\""));
SoScript111->addChild(*Sofield117);

SoIS* SoIS118 = new SoIS();
Soconnect* Soconnect119 = new Soconnect();
Soconnect119->setNodeField(QString("protoScale"));
Soconnect119->setProtoField(QString("parameterScale"));
SoIS118->addChild(*Soconnect119);

Soconnect* Soconnect120 = new Soconnect();
Soconnect120->setNodeField(QString("protoParameterName"));
Soconnect120->setProtoField(QString("parameterName"));
SoIS118->addChild(*Soconnect120);

Soconnect* Soconnect121 = new Soconnect();
Soconnect121->setNodeField(QString("protoScript"));
Soconnect121->setProtoField(QString("orbScript"));
SoIS118->addChild(*Soconnect121);

SoScript111->addChild(*SoIS118);


//SoScript111->setSourceCode(QString("ecmascript:")+
//_T("function set_protoScale(value) {")+
//_T("	protoScale = value;")+
//_T("}")+
//_T("function set_protoParameterName(value) {")+
//_T("	protoParameterName = value;")+
//_T("}")+
//_T("function set_protoScript(value) {")+
//_T("	protoScript = value;")+
//_T("}")+
//_T("function set_protoValue(value) {")+
//_T("	protoValue = value;")+
//_T("}")+
//_T("function set_protoText(value) {")+
//_T("	protoText = value;")+
//_T("}")+
//_T("function newTranslation(value) {")+
//_T("       	set_protoValue(value.x * protoScale);")+
//_T("       	set_protoText(new MFString(protoParameterName+'='+protoValue.toFixed(2)));")+
//_T("	protoScript[protoParameterName] = protoValue;")+
//_T("};"));
SoGroup95->addChild(*SoScript111);

SoROUTE* SoROUTE122 = new SoROUTE();
SoROUTE122->setFromField(QString("translation_changed"));
SoROUTE122->setFromNode(QString("protoSensor"));
SoROUTE122->setToField(QString("set_translation"));
SoROUTE122->setToNode(QString("protoTransform"));
SoGroup95->addChild(*SoROUTE122);

SoROUTE* SoROUTE123 = new SoROUTE();
SoROUTE123->setFromField(QString("translation_changed"));
SoROUTE123->setFromNode(QString("protoSensor"));
SoROUTE123->setToField(QString("newTranslation"));
SoROUTE123->setToNode(QString("protoValueTransformerScript"));
SoGroup95->addChild(*SoROUTE123);

SoROUTE* SoROUTE124 = new SoROUTE();
SoROUTE124->setFromField(QString("protoText"));
SoROUTE124->setFromNode(QString("protoValueTransformerScript"));
SoROUTE124->setToField(QString("string"));
SoROUTE124->setToNode(QString("protoText"));
SoGroup95->addChild(*SoROUTE124);

SoProtoBody94->addChild(*SoGroup95);

SoProtoDeclare87->addChild(*SoProtoBody94);

SoLayoutLayer72->addChild(*SoProtoDeclare87);

SoProtoInstance* SoProtoInstance125 = new SoProtoInstance();
SoProtoInstance125->setName(QString("SliderProto"));
SoProtoInstance125->setDEF(QString("aPI"));
SoField* SoField126 = new SoField();
SoField126->setName(QString("sliderTranslation"));
SoField126->setValue(QString("0 0.7 0"));
SoProtoInstance125->addChild(*SoField126);

SoField* SoField127 = new SoField();
SoField127->setName(QString("textString"));
SoField127->setValue(QString("\"a=\""));
SoProtoInstance125->addChild(*SoField127);

SoField* SoField128 = new SoField();
SoField128->setName(QString("parameterScale"));
SoField128->setValue(QString("30"));
SoProtoInstance125->addChild(*SoField128);

SoField* SoField129 = new SoField();
SoField129->setName(QString("parameterName"));
SoField129->setValue(QString("a"));
SoProtoInstance125->addChild(*SoField129);

SoField* SoField130 = new SoField();
SoField130->setName(QString("orbScript"));
SoScript* SoScript131 = new SoScript();
SoScript131->setUSE(QString("OrbitScript"));
SoField130->addChild(*SoScript131);

SoProtoInstance125->addChild(*SoField130);

SoLayoutLayer72->addChild(*SoProtoInstance125);

SoProtoInstance* SoProtoInstance132 = new SoProtoInstance();
SoProtoInstance132->setName(QString("SliderProto"));
SoProtoInstance132->setDEF(QString("bPI"));
SoField* SoField133 = new SoField();
SoField133->setName(QString("sliderTranslation"));
SoField133->setValue(QString("0 0.4 0"));
SoProtoInstance132->addChild(*SoField133);

SoField* SoField134 = new SoField();
SoField134->setName(QString("textString"));
SoField134->setValue(QString("\"b=\""));
SoProtoInstance132->addChild(*SoField134);

SoField* SoField135 = new SoField();
SoField135->setName(QString("parameterScale"));
SoField135->setValue(QString("30"));
SoProtoInstance132->addChild(*SoField135);

SoField* SoField136 = new SoField();
SoField136->setName(QString("parameterName"));
SoField136->setValue(QString("b"));
SoProtoInstance132->addChild(*SoField136);

SoField* SoField137 = new SoField();
SoField137->setName(QString("orbScript"));
SoScript* SoScript138 = new SoScript();
SoScript138->setUSE(QString("OrbitScript"));
SoField137->addChild(*SoScript138);

SoProtoInstance132->addChild(*SoField137);

SoLayoutLayer72->addChild(*SoProtoInstance132);

SoProtoInstance* SoProtoInstance139 = new SoProtoInstance();
SoProtoInstance139->setName(QString("SliderProto"));
SoProtoInstance139->setDEF(QString("cPI"));
SoField* SoField140 = new SoField();
SoField140->setName(QString("sliderTranslation"));
SoField140->setValue(QString("0 0.1 0"));
SoProtoInstance139->addChild(*SoField140);

SoField* SoField141 = new SoField();
SoField141->setName(QString("textString"));
SoField141->setValue(QString("\"c=\""));
SoProtoInstance139->addChild(*SoField141);

SoField* SoField142 = new SoField();
SoField142->setName(QString("parameterScale"));
SoField142->setValue(QString("20"));
SoProtoInstance139->addChild(*SoField142);

SoField* SoField143 = new SoField();
SoField143->setName(QString("parameterName"));
SoField143->setValue(QString("c"));
SoProtoInstance139->addChild(*SoField143);

SoField* SoField144 = new SoField();
SoField144->setName(QString("orbScript"));
SoScript* SoScript145 = new SoScript();
SoScript145->setUSE(QString("OrbitScript"));
SoField144->addChild(*SoScript145);

SoProtoInstance139->addChild(*SoField144);

SoLayoutLayer72->addChild(*SoProtoInstance139);

SoProtoInstance* SoProtoInstance146 = new SoProtoInstance();
SoProtoInstance146->setName(QString("SliderProto"));
SoProtoInstance146->setDEF(QString("dPI"));
SoField* SoField147 = new SoField();
SoField147->setName(QString("sliderTranslation"));
SoField147->setValue(QString("0 -0.2 0"));
SoProtoInstance146->addChild(*SoField147);

SoField* SoField148 = new SoField();
SoField148->setName(QString("textString"));
SoField148->setValue(QString("\"d=\""));
SoProtoInstance146->addChild(*SoField148);

SoField* SoField149 = new SoField();
SoField149->setName(QString("parameterScale"));
SoField149->setValue(QString("20"));
SoProtoInstance146->addChild(*SoField149);

SoField* SoField150 = new SoField();
SoField150->setName(QString("parameterName"));
SoField150->setValue(QString("d"));
SoProtoInstance146->addChild(*SoField150);

SoField* SoField151 = new SoField();
SoField151->setName(QString("orbScript"));
SoScript* SoScript152 = new SoScript();
SoScript152->setUSE(QString("OrbitScript"));
SoField151->addChild(*SoScript152);

SoProtoInstance146->addChild(*SoField151);

SoLayoutLayer72->addChild(*SoProtoInstance146);

SoProtoInstance* SoProtoInstance153 = new SoProtoInstance();
SoProtoInstance153->setName(QString("SliderProto"));
SoProtoInstance153->setDEF(QString("tdeltaPI"));
SoField* SoField154 = new SoField();
SoField154->setName(QString("sliderTranslation"));
SoField154->setValue(QString("0 -0.5 0"));
SoProtoInstance153->addChild(*SoField154);

SoField* SoField155 = new SoField();
SoField155->setName(QString("textString"));
SoField155->setValue(QString("\"tdelta=\""));
SoProtoInstance153->addChild(*SoField155);

SoField* SoField156 = new SoField();
SoField156->setName(QString("parameterScale"));
SoField156->setValue(QString("6.28"));
SoProtoInstance153->addChild(*SoField156);

SoField* SoField157 = new SoField();
SoField157->setName(QString("parameterName"));
SoField157->setValue(QString("tdelta"));
SoProtoInstance153->addChild(*SoField157);

SoField* SoField158 = new SoField();
SoField158->setName(QString("orbScript"));
SoScript* SoScript159 = new SoScript();
SoScript159->setUSE(QString("OrbitScript"));
SoField158->addChild(*SoScript159);

SoProtoInstance153->addChild(*SoField158);

SoLayoutLayer72->addChild(*SoProtoInstance153);

SoProtoInstance* SoProtoInstance160 = new SoProtoInstance();
SoProtoInstance160->setName(QString("SliderProto"));
SoProtoInstance160->setDEF(QString("pdeltaPI"));
SoField* SoField161 = new SoField();
SoField161->setName(QString("sliderTranslation"));
SoField161->setValue(QString("0 -0.8 0"));
SoProtoInstance160->addChild(*SoField161);

SoField* SoField162 = new SoField();
SoField162->setName(QString("textString"));
SoField162->setValue(QString("\"pdelta=\""));
SoProtoInstance160->addChild(*SoField162);

SoField* SoField163 = new SoField();
SoField163->setName(QString("parameterScale"));
SoField163->setValue(QString("6.28"));
SoProtoInstance160->addChild(*SoField163);

SoField* SoField164 = new SoField();
SoField164->setName(QString("parameterName"));
SoField164->setValue(QString("pdelta"));
SoProtoInstance160->addChild(*SoField164);

SoField* SoField165 = new SoField();
SoField165->setName(QString("orbScript"));
SoScript* SoScript166 = new SoScript();
SoScript166->setUSE(QString("OrbitScript"));
SoField165->addChild(*SoScript166);

SoProtoInstance160->addChild(*SoField165);

SoLayoutLayer72->addChild(*SoProtoInstance160);

SoLayerSet16->addChild(*SoLayoutLayer72);

SoLayer* SoLayer167 = new SoLayer();
SoLayer167->setPickable(true);
SoLayer167->setObjectType(new QString[]{QString("ALL")}, 1);
SoViewpoint* SoViewpoint168 = new SoViewpoint();
SoViewpoint168->setDescription(QString("My Humanoids"));
SoViewpoint168->setFieldOfView(1.570796);
SoViewpoint168->setPosition(new float[]{0.0,1.75,80.0});
SoLayer167->addChild(*SoViewpoint168);

SoLayerSet16->addChild(*SoLayer167);

SoNode15->addChild(*SoLayerSet16);

SoSceneManager0->setSceneGraph(*SoNode15);

return 0;
}
