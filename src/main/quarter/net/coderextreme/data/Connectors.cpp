
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
Someta2->setName(QString("comment"));
Someta2->setContent(QString("World of Titania"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("created"));
Someta3->setContent(QString("Fri, 04 Sep 2015 10:19:01 GMT"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("Holger Seelig"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("generator"));
Someta5->setContent(QString("Titania V3.0.4, http://titania.create3000.de"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("identifier"));
Someta6->setContent(QString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("modified"));
Someta7->setContent(QString("Tue, 25 Jul 2017 09:42:17 GMT"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("title"));
Someta8->setContent(QString("Connectors"));
Sohead1->addMeta(*Someta8);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode9 = new SoNode();
SoProtoDeclare* SoProtoDeclare10 = new SoProtoDeclare();
SoProtoDeclare10->setName(QString("RoundedRectangle2D"));
SoProtoInterface* SoProtoInterface11 = new SoProtoInterface();
Sofield* Sofield12 = new Sofield();
Sofield12->setName(QString("cornerRadius"));
Sofield12->setAccessType(QString("initializeOnly"));
Sofield12->setType(QString("SFFloat"));
Sofield12->setValue(QString("1"));
SoProtoInterface11->addChild(*Sofield12);

Sofield* Sofield13 = new Sofield();
Sofield13->setName(QString("size"));
Sofield13->setAccessType(QString("initializeOnly"));
Sofield13->setType(QString("SFVec2f"));
Sofield13->setValue(QString("2 2"));
SoProtoInterface11->addChild(*Sofield13);

Sofield* Sofield14 = new Sofield();
Sofield14->setName(QString("solid"));
Sofield14->setAccessType(QString("initializeOnly"));
Sofield14->setType(QString("SFBool"));
Sofield14->setValue(QString("true"));
SoProtoInterface11->addChild(*Sofield14);

SoProtoDeclare10->addChild(*SoProtoInterface11);

SoProtoBody* SoProtoBody15 = new SoProtoBody();
SoIndexedFaceSet* SoIndexedFaceSet16 = new SoIndexedFaceSet();
SoIndexedFaceSet16->setDEF(QString("Geometry"));
SoIS* SoIS17 = new SoIS();
Soconnect* Soconnect18 = new Soconnect();
Soconnect18->setNodeField(QString("solid"));
Soconnect18->setProtoField(QString("solid"));
SoIS17->addChild(*Soconnect18);

SoIndexedFaceSet16->addChild(*SoIS17);

SoCoordinate* SoCoordinate19 = new SoCoordinate();
SoIndexedFaceSet16->setCoord(*SoCoordinate19);

SoProtoBody15->addChild(*SoIndexedFaceSet16);

SoScript* SoScript20 = new SoScript();
SoScript20->setDEF(QString("RoundedRectangle2D"));
SoScript20->setDirectOutput(true);
Sofield* Sofield21 = new Sofield();
Sofield21->setName(QString("cornerDimension"));
Sofield21->setAccessType(QString("initializeOnly"));
Sofield21->setType(QString("SFFloat"));
Sofield21->setValue(QString("10"));
SoScript20->addChild(*Sofield21);

Sofield* Sofield22 = new Sofield();
Sofield22->setName(QString("cornerRadius"));
Sofield22->setAccessType(QString("initializeOnly"));
Sofield22->setType(QString("SFFloat"));
SoScript20->addChild(*Sofield22);

Sofield* Sofield23 = new Sofield();
Sofield23->setName(QString("size"));
Sofield23->setAccessType(QString("initializeOnly"));
Sofield23->setType(QString("SFVec2f"));
SoScript20->addChild(*Sofield23);

Sofield* Sofield24 = new Sofield();
Sofield24->setName(QString("geometry"));
Sofield24->setAccessType(QString("initializeOnly"));
Sofield24->setType(QString("SFNode"));
SoIndexedFaceSet* SoIndexedFaceSet25 = new SoIndexedFaceSet();
SoIndexedFaceSet25->setUSE(QString("Geometry"));
Sofield24->addChild(SoIndexedFaceSet25);

SoScript20->addChild(*Sofield24);

SoIS* SoIS26 = new SoIS();
Soconnect* Soconnect27 = new Soconnect();
Soconnect27->setNodeField(QString("cornerRadius"));
Soconnect27->setProtoField(QString("cornerRadius"));
SoIS26->addChild(*Soconnect27);

Soconnect* Soconnect28 = new Soconnect();
Soconnect28->setNodeField(QString("size"));
Soconnect28->setProtoField(QString("size"));
SoIS26->addChild(*Soconnect28);

SoScript20->addChild(*SoIS26);


//SoScript20->setSourceCode(QString("vrmlscript:")+
//_T("function initialize ()")+
//_T("{")+
//_T("	var point         = new SFVec3f (cornerRadius, 0, 0);")+
//_T("	var startRotation = new SFRotation ();")+
//_T("	var endRotation   = new SFRotation (0, 0, 1, Math .PI / 2);")+
//_T("	var corner        = new MFVec3f ();")+
//_T("	var coordIndex    = new MFInt32 ();")+
//_T("	var points        = new MFVec3f ();")+
//_T("	for (var i = 0; i < cornerDimension * 4; ++ i)")+
//_T("		coordIndex [coordIndex .length] = i;")+
//_T("	geometry .coordIndex = coordIndex;")+
//_T("	for (var i = 0; i < cornerDimension; ++i)")+
//_T("		corner [i] = startRotation .slerp (endRotation, i / (cornerDimension - 1)) .multVec (point);")+
//_T("	var translation = new SFVec3f (size .x / 2 - cornerRadius, size .y / 2 - cornerRadius, 0);")+
//_T("	for (var i = 0; i < cornerDimension; ++ i)")+
//_T("		points [points .length] = corner [i] .add (translation);")+
//_T("	var translation = new SFVec3f (-size .x / 2 + cornerRadius, size .y / 2 - cornerRadius, 0);")+
//_T("	var rotation    = new SFRotation (0, 0, 1, Math .PI * 0.5);")+
//_T("	for (var i = 0; i < cornerDimension; ++ i)")+
//_T("		points [points .length] = rotation .multVec (corner [i]) .add (translation);")+
//_T("	var translation = new SFVec3f (-size .x / 2 + cornerRadius, -size .y / 2 + cornerRadius, 0);")+
//_T("	var rotation    = new SFRotation (0, 0, 1, Math .PI);")+
//_T("	for (var i = 0; i < cornerDimension; ++ i)")+
//_T("		points [points .length] = rotation .multVec (corner [i]) .add (translation);")+
//_T("	var translation = new SFVec3f (size .x / 2 - cornerRadius, -size .y / 2 + cornerRadius, 0);")+
//_T("	var rotation    = new SFRotation (0, 0, 1, Math .PI * 1.5);")+
//_T("	for (var i = 0; i < cornerDimension; ++ i)")+
//_T("		points [points .length] = rotation .multVec (corner [i]) .add (translation);")+
//_T("	geometry .coord .point = points;")+
//_T("}"));
SoProtoBody15->addChild(*SoScript20);

SoProtoDeclare10->addChild(*SoProtoBody15);

SoNode9->addChild(*SoProtoDeclare10);

SoProtoDeclare* SoProtoDeclare29 = new SoProtoDeclare();
SoProtoDeclare29->setName(QString("Widget"));
SoProtoInterface* SoProtoInterface30 = new SoProtoInterface();
Sofield* Sofield31 = new Sofield();
Sofield31->setName(QString("fillColor"));
Sofield31->setAccessType(QString("inputOutput"));
Sofield31->setType(QString("SFColor"));
Sofield31->setValue(QString("0.1 0.1 0.1"));
SoProtoInterface30->addChild(*Sofield31);

Sofield* Sofield32 = new Sofield();
Sofield32->setName(QString("lineColor"));
Sofield32->setAccessType(QString("inputOutput"));
Sofield32->setType(QString("SFColor"));
Sofield32->setValue(QString("0.4 0.4 0.4"));
SoProtoInterface30->addChild(*Sofield32);

Sofield* Sofield33 = new Sofield();
Sofield33->setName(QString("linewidthScaleFactor"));
Sofield33->setAccessType(QString("inputOutput"));
Sofield33->setType(QString("SFFloat"));
Sofield33->setValue(QString("1"));
SoProtoInterface30->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("geometry"));
Sofield34->setAccessType(QString("inputOutput"));
Sofield34->setType(QString("SFNode"));
SoProtoInterface30->addChild(*Sofield34);

SoProtoDeclare29->addChild(*SoProtoInterface30);

SoProtoBody* SoProtoBody35 = new SoProtoBody();
SoTransform* SoTransform36 = new SoTransform();
SoTransform36->setDEF(QString("Shape"));
SoShape* SoShape37 = new SoShape();
SoIS* SoIS38 = new SoIS();
Soconnect* Soconnect39 = new Soconnect();
Soconnect39->setNodeField(QString("geometry"));
Soconnect39->setProtoField(QString("geometry"));
SoIS38->addChild(*Soconnect39);

SoShape37->addChild(*SoIS38);

SoVRMLAppearance* SoVRMLAppearance40 = new SoVRMLAppearance();
SoMaterial* SoMaterial41 = new SoMaterial();
SoIS* SoIS42 = new SoIS();
Soconnect* Soconnect43 = new Soconnect();
Soconnect43->setNodeField(QString("diffuseColor"));
Soconnect43->setProtoField(QString("fillColor"));
SoIS42->addChild(*Soconnect43);

SoMaterial41->addChild(*SoIS42);

SoVRMLAppearance40->addChild(*SoMaterial41);

SoShape37->addChild(*SoVRMLAppearance40);

SoTransform36->addChild(*SoShape37);

SoShape* SoShape44 = new SoShape();
SoIS* SoIS45 = new SoIS();
Soconnect* Soconnect46 = new Soconnect();
Soconnect46->setNodeField(QString("geometry"));
Soconnect46->setProtoField(QString("geometry"));
SoIS45->addChild(*Soconnect46);

SoShape44->addChild(*SoIS45);

SoVRMLAppearance* SoVRMLAppearance47 = new SoVRMLAppearance();
SoFillProperties* SoFillProperties48 = new SoFillProperties();
SoFillProperties48->setFilled(false);
SoFillProperties48->setHatched(false);
SoVRMLAppearance47->setFillProperties(SoFillProperties48);

SoLineProperties* SoLineProperties49 = new SoLineProperties();
SoIS* SoIS50 = new SoIS();
Soconnect* Soconnect51 = new Soconnect();
Soconnect51->setNodeField(QString("linewidthScaleFactor"));
Soconnect51->setProtoField(QString("linewidthScaleFactor"));
SoIS50->addChild(*Soconnect51);

SoLineProperties49->addChild(*SoIS50);

SoVRMLAppearance47->setLineProperties(SoLineProperties49);

SoMaterial* SoMaterial52 = new SoMaterial();
SoMaterial52->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoIS* SoIS53 = new SoIS();
Soconnect* Soconnect54 = new Soconnect();
Soconnect54->setNodeField(QString("emissiveColor"));
Soconnect54->setProtoField(QString("lineColor"));
SoIS53->addChild(*Soconnect54);

SoMaterial52->addChild(*SoIS53);

SoVRMLAppearance47->addChild(*SoMaterial52);

SoShape44->addChild(*SoVRMLAppearance47);

SoTransform36->addChild(*SoShape44);

SoProtoBody35->addChild(*SoTransform36);

SoProtoDeclare29->addChild(*SoProtoBody35);

SoNode9->addChild(*SoProtoDeclare29);

SoProtoDeclare* SoProtoDeclare55 = new SoProtoDeclare();
SoProtoDeclare55->setName(QString("Node"));
SoProtoInterface* SoProtoInterface56 = new SoProtoInterface();
Sofield* Sofield57 = new Sofield();
Sofield57->setName(QString("translation"));
Sofield57->setAccessType(QString("inputOutput"));
Sofield57->setType(QString("SFVec3f"));
SoProtoInterface56->addChild(*Sofield57);

SoProtoDeclare55->addChild(*SoProtoInterface56);

SoProtoBody* SoProtoBody58 = new SoProtoBody();
SoGroup* SoGroup59 = new SoGroup();
SoPlaneSensor* SoPlaneSensor60 = new SoPlaneSensor();
SoPlaneSensor60->setDEF(QString("PlaneSensor"));
SoGroup59->addChild(*SoPlaneSensor60);

SoTransform* SoTransform61 = new SoTransform();
SoTransform61->setDEF(QString("Node"));
SoIS* SoIS62 = new SoIS();
Soconnect* Soconnect63 = new Soconnect();
Soconnect63->setNodeField(QString("translation"));
Soconnect63->setProtoField(QString("translation"));
SoIS62->addChild(*Soconnect63);

SoTransform61->addChild(*SoIS62);

SoProtoInstance* SoProtoInstance64 = new SoProtoInstance();
SoProtoInstance64->setName(QString("Widget"));
SoField* SoField65 = new SoField();
SoField65->setName(QString("geometry"));
SoProtoInstance* SoProtoInstance66 = new SoProtoInstance();
SoProtoInstance66->setName(QString("RoundedRectangle2D"));
SoField* SoField67 = new SoField();
SoField67->setName(QString("cornerRadius"));
SoField67->setValue(QString("0.12"));
SoProtoInstance66->addChild(*SoField67);

SoField* SoField68 = new SoField();
SoField68->setName(QString("size"));
SoField68->setValue(QString("2 1"));
SoProtoInstance66->addChild(*SoField68);

SoField65->addChild(*SoProtoInstance66);

SoProtoInstance64->addChild(*SoField65);

SoTransform61->addChild(*SoProtoInstance64);

SoTransform* SoTransform69 = new SoTransform();
SoTransform69->setDEF(QString("Input"));
SoTransform69->setTranslation(new float[]{-1.0,0.0,0.0});
SoProtoInstance* SoProtoInstance70 = new SoProtoInstance();
SoProtoInstance70->setName(QString("Widget"));
SoField* SoField71 = new SoField();
SoField71->setName(QString("lineColor"));
SoField71->setValue(QString("0.72 0.14 0.23"));
SoProtoInstance70->addChild(*SoField71);

SoField* SoField72 = new SoField();
SoField72->setName(QString("geometry"));
SoDisk2D* SoDisk2D73 = new SoDisk2D();
SoDisk2D73->setDEF(QString("Connector"));
SoDisk2D73->setOuterRadius(0.2);
SoField72->addChild(SoDisk2D73);

SoProtoInstance70->addChild(*SoField72);

SoTransform69->addChild(*SoProtoInstance70);

SoTransform61->addChild(*SoTransform69);

SoTransform* SoTransform74 = new SoTransform();
SoTransform74->setDEF(QString("Output"));
SoTransform74->setTranslation(new float[]{1.0,0.0,0.0});
SoProtoInstance* SoProtoInstance75 = new SoProtoInstance();
SoProtoInstance75->setName(QString("Widget"));
SoField* SoField76 = new SoField();
SoField76->setName(QString("lineColor"));
SoField76->setValue(QString("0.44 0.5 0.72"));
SoProtoInstance75->addChild(*SoField76);

SoField* SoField77 = new SoField();
SoField77->setName(QString("geometry"));
SoDisk2D* SoDisk2D78 = new SoDisk2D();
SoDisk2D78->setUSE(QString("Connector"));
SoField77->addChild(SoDisk2D78);

SoProtoInstance75->addChild(*SoField77);

SoTransform74->addChild(*SoProtoInstance75);

SoTransform61->addChild(*SoTransform74);

SoGroup59->addChild(*SoTransform61);

SoProtoBody58->addChild(*SoGroup59);

SoScript* SoScript79 = new SoScript();
SoScript79->setDirectOutput(true);
Sofield* Sofield80 = new Sofield();
Sofield80->setName(QString("translation"));
Sofield80->setAccessType(QString("inputOutput"));
Sofield80->setType(QString("SFVec3f"));
SoScript79->addChild(*Sofield80);

Sofield* Sofield81 = new Sofield();
Sofield81->setName(QString("sensor"));
Sofield81->setAccessType(QString("initializeOnly"));
Sofield81->setType(QString("SFNode"));
SoPlaneSensor* SoPlaneSensor82 = new SoPlaneSensor();
SoPlaneSensor82->setUSE(QString("PlaneSensor"));
Sofield81->addChild(*SoPlaneSensor82);

SoScript79->addChild(*Sofield81);

Sofield* Sofield83 = new Sofield();
Sofield83->setName(QString("transform"));
Sofield83->setAccessType(QString("initializeOnly"));
Sofield83->setType(QString("SFNode"));
SoTransform* SoTransform84 = new SoTransform();
SoTransform84->setUSE(QString("Node"));
Sofield83->addChild(*SoTransform84);

SoScript79->addChild(*Sofield83);

SoIS* SoIS85 = new SoIS();
Soconnect* Soconnect86 = new Soconnect();
Soconnect86->setNodeField(QString("translation"));
Soconnect86->setProtoField(QString("translation"));
SoIS85->addChild(*Soconnect86);

SoScript79->addChild(*SoIS85);


//SoScript79->setSourceCode(QString("vrmlscript:")+
//_T("function initialize ()")+
//_T("{")+
//_T("	sensor .offset = translation;")+
//_T("}"));
SoProtoBody58->addChild(*SoScript79);

SoROUTE* SoROUTE87 = new SoROUTE();
SoROUTE87->setFromNode(QString("PlaneSensor"));
SoROUTE87->setFromField(QString("translation_changed"));
SoROUTE87->setToNode(QString("Node"));
SoROUTE87->setToField(QString("set_translation"));
SoProtoBody58->addChild(*SoROUTE87);

SoProtoDeclare55->addChild(*SoProtoBody58);

SoNode9->addChild(*SoProtoDeclare55);

SoProtoDeclare* SoProtoDeclare88 = new SoProtoDeclare();
SoProtoDeclare88->setName(QString("Route"));
SoProtoInterface* SoProtoInterface89 = new SoProtoInterface();
Sofield* Sofield90 = new Sofield();
Sofield90->setName(QString("lineColor"));
Sofield90->setAccessType(QString("inputOutput"));
Sofield90->setType(QString("SFColor"));
Sofield90->setValue(QString("0.43 0.43 0.98"));
SoProtoInterface89->addChild(*Sofield90);

Sofield* Sofield91 = new Sofield();
Sofield91->setName(QString("linewidthScaleFactor"));
Sofield91->setAccessType(QString("inputOutput"));
Sofield91->setType(QString("SFFloat"));
Sofield91->setValue(QString("2"));
SoProtoInterface89->addChild(*Sofield91);

Sofield* Sofield92 = new Sofield();
Sofield92->setName(QString("output"));
Sofield92->setAccessType(QString("initializeOnly"));
Sofield92->setType(QString("SFNode"));
SoProtoInterface89->addChild(*Sofield92);

Sofield* Sofield93 = new Sofield();
Sofield93->setName(QString("input"));
Sofield93->setAccessType(QString("initializeOnly"));
Sofield93->setType(QString("SFNode"));
SoProtoInterface89->addChild(*Sofield93);

SoProtoDeclare88->addChild(*SoProtoInterface89);

SoProtoBody* SoProtoBody94 = new SoProtoBody();
SoShape* SoShape95 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance96 = new SoVRMLAppearance();
SoLineProperties* SoLineProperties97 = new SoLineProperties();
SoIS* SoIS98 = new SoIS();
Soconnect* Soconnect99 = new Soconnect();
Soconnect99->setNodeField(QString("linewidthScaleFactor"));
Soconnect99->setProtoField(QString("linewidthScaleFactor"));
SoIS98->addChild(*Soconnect99);

SoLineProperties97->addChild(*SoIS98);

SoVRMLAppearance96->setLineProperties(SoLineProperties97);

SoMaterial* SoMaterial100 = new SoMaterial();
SoMaterial100->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoIS* SoIS101 = new SoIS();
Soconnect* Soconnect102 = new Soconnect();
Soconnect102->setNodeField(QString("emissiveColor"));
Soconnect102->setProtoField(QString("lineColor"));
SoIS101->addChild(*Soconnect102);

SoMaterial100->addChild(*SoIS101);

SoVRMLAppearance96->addChild(*SoMaterial100);

SoShape95->addChild(*SoVRMLAppearance96);

SoLineSet* SoLineSet103 = new SoLineSet();
SoLineSet103->setDEF(QString("Geometry_1"));
SoLineSet103->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate104 = new SoCoordinate();
SoCoordinate104->setPoint(new float[]{-1.0,0.0,0.0,1.0,0.0,0.0}, 6);
SoLineSet103->setCoord(*SoCoordinate104);

SoShape95->setGeometry(*SoLineSet103);

SoProtoBody94->addChild(*SoShape95);

SoScript* SoScript105 = new SoScript();
SoScript105->setDEF(QString("Route"));
SoScript105->setDirectOutput(true);
Sofield* Sofield106 = new Sofield();
Sofield106->setName(QString("set_translation"));
Sofield106->setAccessType(QString("inputOnly"));
Sofield106->setType(QString("SFVec3f"));
SoScript105->addChild(*Sofield106);

Sofield* Sofield107 = new Sofield();
Sofield107->setName(QString("routeDimension"));
Sofield107->setAccessType(QString("initializeOnly"));
Sofield107->setType(QString("SFInt32"));
Sofield107->setValue(QString("21"));
SoScript105->addChild(*Sofield107);

Sofield* Sofield108 = new Sofield();
Sofield108->setName(QString("output"));
Sofield108->setAccessType(QString("initializeOnly"));
Sofield108->setType(QString("SFNode"));
SoScript105->addChild(*Sofield108);

Sofield* Sofield109 = new Sofield();
Sofield109->setName(QString("input"));
Sofield109->setAccessType(QString("initializeOnly"));
Sofield109->setType(QString("SFNode"));
SoScript105->addChild(*Sofield109);

Sofield* Sofield110 = new Sofield();
Sofield110->setName(QString("geometry"));
Sofield110->setAccessType(QString("initializeOnly"));
Sofield110->setType(QString("SFNode"));
SoLineSet* SoLineSet111 = new SoLineSet();
SoLineSet111->setUSE(QString("Geometry_1"));
Sofield110->addChild(SoLineSet111);

SoScript105->addChild(*Sofield110);

Sofield* Sofield112 = new Sofield();
Sofield112->setName(QString("self"));
Sofield112->setAccessType(QString("initializeOnly"));
Sofield112->setType(QString("SFNode"));
SoScript* SoScript113 = new SoScript();
SoScript113->setUSE(QString("Route"));
Sofield112->addChild(*SoScript113);

SoScript105->addChild(*Sofield112);

SoIS* SoIS114 = new SoIS();
Soconnect* Soconnect115 = new Soconnect();
Soconnect115->setNodeField(QString("output"));
Soconnect115->setProtoField(QString("output"));
SoIS114->addChild(*Soconnect115);

Soconnect* Soconnect116 = new Soconnect();
Soconnect116->setNodeField(QString("input"));
Soconnect116->setProtoField(QString("input"));
SoIS114->addChild(*Soconnect116);

SoScript105->addChild(*SoIS114);


//SoScript105->setSourceCode(QString("vrmlscript:")+
//_T("function initialize ()")+
//_T("{")+
//_T("	Browser .addRoute (output, 'translation_changed', self, 'set_translation');")+
//_T("	Browser .addRoute (input,  'translation_changed', self, 'set_translation');")+
//_T("	set_translation ();")+
//_T("}")+
//_T("function set_translation ()")+
//_T("{")+
//_T("	geometry .vertexCount [0] = routeDimension;")+
//_T("	var outPoint = output .translation .add (new SFVec3f ( 1, 0, 0));")+
//_T("	var inPoint  = input  .translation .add (new SFVec3f (-1, 0, 0));")+
//_T("	var w = inPoint .x - outPoint .x;")+
//_T("	var h = outPoint .y - inPoint .y;")+
//_T("	for (var i = 0; i < routeDimension; ++ i)")+
//_T("	{")+
//_T("		var t = i / (routeDimension - 1);")+
//_T("		var y = h / 2 * (Math .cos (t * Math .PI) - 1);")+
//_T("		geometry .coord .point [i] = outPoint .add (new SFVec3f (t * w, y, 0));")+
//_T("	}")+
//_T("}"));
SoProtoBody94->addChild(*SoScript105);

SoProtoDeclare88->addChild(*SoProtoBody94);

SoNode9->addChild(*SoProtoDeclare88);

SoNavigationInfo* SoNavigationInfo117 = new SoNavigationInfo();
SoNavigationInfo117->setType(new QString[]{QString(", "), QString("PLANE_create3000.deANY")}, 2);
SoNode9->addChild(*SoNavigationInfo117);

SoBackground* SoBackground118 = new SoBackground();
SoBackground118->setSkyColor(new float[]{0.2,0.2,0.2}, 3);
SoNode9->addChild(*SoBackground118);

SoOrthoViewpoint* SoOrthoViewpoint119 = new SoOrthoViewpoint();
SoOrthoViewpoint119->setDescription(QString("OthoViewpoint"));
SoOrthoViewpoint119->setPosition(new float[]{-3.13496,-4.19776,10.0});
SoOrthoViewpoint119->setCenterOfRotation(new float[]{-3.13496,-4.19776,0.0});
SoOrthoViewpoint119->setFieldOfView(new float[]{0.0,0.0,10.0,10.0}, 4);
SoNode9->addChild(*SoOrthoViewpoint119);

SoViewpoint* SoViewpoint120 = new SoViewpoint();
SoViewpoint120->setDescription(QString("Viewpoint"));
SoNode9->addChild(*SoViewpoint120);

SoTransform* SoTransform121 = new SoTransform();
SoTransform121->setDEF(QString("Connectors"));
SoProtoInstance* SoProtoInstance122 = new SoProtoInstance();
SoProtoInstance122->setName(QString("Route"));
SoField* SoField123 = new SoField();
SoField123->setName(QString("output"));
SoProtoInstance* SoProtoInstance124 = new SoProtoInstance();
SoProtoInstance124->setName(QString("Node"));
SoProtoInstance124->setDEF(QString("N1"));
SoField* SoField125 = new SoField();
SoField125->setName(QString("translation"));
SoField125->setValue(QString("-3.98323 2.88948 0"));
SoProtoInstance124->addChild(*SoField125);

SoField123->addChild(*SoProtoInstance124);

SoProtoInstance122->addChild(*SoField123);

SoField* SoField126 = new SoField();
SoField126->setName(QString("input"));
SoProtoInstance* SoProtoInstance127 = new SoProtoInstance();
SoProtoInstance127->setName(QString("Node"));
SoProtoInstance127->setDEF(QString("N2"));
SoField* SoField128 = new SoField();
SoField128->setName(QString("translation"));
SoField128->setValue(QString("-0.0890862 2.96049 0"));
SoProtoInstance127->addChild(*SoField128);

SoField126->addChild(*SoProtoInstance127);

SoProtoInstance122->addChild(*SoField126);

SoTransform121->addChild(*SoProtoInstance122);

SoProtoInstance* SoProtoInstance129 = new SoProtoInstance();
SoProtoInstance129->setName(QString("Route"));
SoField* SoField130 = new SoField();
SoField130->setName(QString("output"));
SoProtoInstance* SoProtoInstance131 = new SoProtoInstance();
SoProtoInstance131->setName(QString("Node"));
SoProtoInstance131->setUSE(QString("N1"));
SoField130->addChild(*SoProtoInstance131);

SoProtoInstance129->addChild(*SoField130);

SoField* SoField132 = new SoField();
SoField132->setName(QString("input"));
SoProtoInstance* SoProtoInstance133 = new SoProtoInstance();
SoProtoInstance133->setName(QString("Node"));
SoProtoInstance133->setDEF(QString("N3"));
SoField* SoField134 = new SoField();
SoField134->setName(QString("translation"));
SoField134->setValue(QString("-0.104169 1.16371 0"));
SoProtoInstance133->addChild(*SoField134);

SoField132->addChild(*SoProtoInstance133);

SoProtoInstance129->addChild(*SoField132);

SoTransform121->addChild(*SoProtoInstance129);

SoProtoInstance* SoProtoInstance135 = new SoProtoInstance();
SoProtoInstance135->setName(QString("Route"));
SoField* SoField136 = new SoField();
SoField136->setName(QString("output"));
SoProtoInstance* SoProtoInstance137 = new SoProtoInstance();
SoProtoInstance137->setName(QString("Node"));
SoProtoInstance137->setUSE(QString("N1"));
SoField136->addChild(*SoProtoInstance137);

SoProtoInstance135->addChild(*SoField136);

SoField* SoField138 = new SoField();
SoField138->setName(QString("input"));
SoProtoInstance* SoProtoInstance139 = new SoProtoInstance();
SoProtoInstance139->setName(QString("Node"));
SoProtoInstance139->setDEF(QString("N4"));
SoField* SoField140 = new SoField();
SoField140->setName(QString("translation"));
SoField140->setValue(QString("-0.0998688 -0.40172 0"));
SoProtoInstance139->addChild(*SoField140);

SoField138->addChild(*SoProtoInstance139);

SoProtoInstance135->addChild(*SoField138);

SoTransform121->addChild(*SoProtoInstance135);

SoProtoInstance* SoProtoInstance141 = new SoProtoInstance();
SoProtoInstance141->setName(QString("Route"));
SoField* SoField142 = new SoField();
SoField142->setName(QString("output"));
SoProtoInstance* SoProtoInstance143 = new SoProtoInstance();
SoProtoInstance143->setName(QString("Node"));
SoProtoInstance143->setUSE(QString("N1"));
SoField142->addChild(*SoProtoInstance143);

SoProtoInstance141->addChild(*SoField142);

SoField* SoField144 = new SoField();
SoField144->setName(QString("input"));
SoProtoInstance* SoProtoInstance145 = new SoProtoInstance();
SoProtoInstance145->setName(QString("Node"));
SoProtoInstance145->setDEF(QString("N5"));
SoField* SoField146 = new SoField();
SoField146->setName(QString("translation"));
SoField146->setValue(QString("-0.0998687 -2.14742 0"));
SoProtoInstance145->addChild(*SoField146);

SoField144->addChild(*SoProtoInstance145);

SoProtoInstance141->addChild(*SoField144);

SoTransform121->addChild(*SoProtoInstance141);

SoProtoInstance* SoProtoInstance147 = new SoProtoInstance();
SoProtoInstance147->setName(QString("Route"));
SoField* SoField148 = new SoField();
SoField148->setName(QString("output"));
SoProtoInstance* SoProtoInstance149 = new SoProtoInstance();
SoProtoInstance149->setName(QString("Node"));
SoProtoInstance149->setUSE(QString("N2"));
SoField148->addChild(*SoProtoInstance149);

SoProtoInstance147->addChild(*SoField148);

SoField* SoField150 = new SoField();
SoField150->setName(QString("input"));
SoProtoInstance* SoProtoInstance151 = new SoProtoInstance();
SoProtoInstance151->setName(QString("Node"));
SoProtoInstance151->setDEF(QString("N6"));
SoField* SoField152 = new SoField();
SoField152->setName(QString("translation"));
SoField152->setValue(QString("3.55694 2.4116 0"));
SoProtoInstance151->addChild(*SoField152);

SoField150->addChild(*SoProtoInstance151);

SoProtoInstance147->addChild(*SoField150);

SoTransform121->addChild(*SoProtoInstance147);

SoProtoInstance* SoProtoInstance153 = new SoProtoInstance();
SoProtoInstance153->setName(QString("Route"));
SoField* SoField154 = new SoField();
SoField154->setName(QString("output"));
SoProtoInstance* SoProtoInstance155 = new SoProtoInstance();
SoProtoInstance155->setName(QString("Node"));
SoProtoInstance155->setUSE(QString("N3"));
SoField154->addChild(*SoProtoInstance155);

SoProtoInstance153->addChild(*SoField154);

SoField* SoField156 = new SoField();
SoField156->setName(QString("input"));
SoProtoInstance* SoProtoInstance157 = new SoProtoInstance();
SoProtoInstance157->setName(QString("Node"));
SoProtoInstance157->setUSE(QString("N6"));
SoField156->addChild(*SoProtoInstance157);

SoProtoInstance153->addChild(*SoField156);

SoTransform121->addChild(*SoProtoInstance153);

SoProtoInstance* SoProtoInstance158 = new SoProtoInstance();
SoProtoInstance158->setName(QString("Route"));
SoField* SoField159 = new SoField();
SoField159->setName(QString("output"));
SoProtoInstance* SoProtoInstance160 = new SoProtoInstance();
SoProtoInstance160->setName(QString("Node"));
SoProtoInstance160->setUSE(QString("N4"));
SoField159->addChild(*SoProtoInstance160);

SoProtoInstance158->addChild(*SoField159);

SoField* SoField161 = new SoField();
SoField161->setName(QString("input"));
SoProtoInstance* SoProtoInstance162 = new SoProtoInstance();
SoProtoInstance162->setName(QString("Node"));
SoProtoInstance162->setDEF(QString("N7"));
SoField* SoField163 = new SoField();
SoField163->setName(QString("translation"));
SoField163->setValue(QString("3.75106 -0.0794556 0"));
SoProtoInstance162->addChild(*SoField163);

SoField161->addChild(*SoProtoInstance162);

SoProtoInstance158->addChild(*SoField161);

SoTransform121->addChild(*SoProtoInstance158);

SoProtoInstance* SoProtoInstance164 = new SoProtoInstance();
SoProtoInstance164->setName(QString("Route"));
SoField* SoField165 = new SoField();
SoField165->setName(QString("output"));
SoProtoInstance* SoProtoInstance166 = new SoProtoInstance();
SoProtoInstance166->setName(QString("Node"));
SoProtoInstance166->setUSE(QString("N5"));
SoField165->addChild(*SoProtoInstance166);

SoProtoInstance164->addChild(*SoField165);

SoField* SoField167 = new SoField();
SoField167->setName(QString("input"));
SoProtoInstance* SoProtoInstance168 = new SoProtoInstance();
SoProtoInstance168->setName(QString("Node"));
SoProtoInstance168->setUSE(QString("N7"));
SoField167->addChild(*SoProtoInstance168);

SoProtoInstance164->addChild(*SoField167);

SoTransform121->addChild(*SoProtoInstance164);

SoProtoInstance* SoProtoInstance169 = new SoProtoInstance();
SoProtoInstance169->setName(QString("Route"));
SoField* SoField170 = new SoField();
SoField170->setName(QString("output"));
SoProtoInstance* SoProtoInstance171 = new SoProtoInstance();
SoProtoInstance171->setName(QString("Node"));
SoProtoInstance171->setUSE(QString("N6"));
SoField170->addChild(*SoProtoInstance171);

SoProtoInstance169->addChild(*SoField170);

SoField* SoField172 = new SoField();
SoField172->setName(QString("input"));
SoProtoInstance* SoProtoInstance173 = new SoProtoInstance();
SoProtoInstance173->setName(QString("Node"));
SoProtoInstance173->setDEF(QString("N8"));
SoField* SoField174 = new SoField();
SoField174->setName(QString("translation"));
SoField174->setValue(QString("7.68077 1.21228 0"));
SoProtoInstance173->addChild(*SoField174);

SoField172->addChild(*SoProtoInstance173);

SoProtoInstance169->addChild(*SoField172);

SoTransform121->addChild(*SoProtoInstance169);

SoProtoInstance* SoProtoInstance175 = new SoProtoInstance();
SoProtoInstance175->setName(QString("Route"));
SoField* SoField176 = new SoField();
SoField176->setName(QString("output"));
SoProtoInstance* SoProtoInstance177 = new SoProtoInstance();
SoProtoInstance177->setName(QString("Node"));
SoProtoInstance177->setUSE(QString("N7"));
SoField176->addChild(*SoProtoInstance177);

SoProtoInstance175->addChild(*SoField176);

SoField* SoField178 = new SoField();
SoField178->setName(QString("input"));
SoProtoInstance* SoProtoInstance179 = new SoProtoInstance();
SoProtoInstance179->setName(QString("Node"));
SoProtoInstance179->setUSE(QString("N8"));
SoField178->addChild(*SoProtoInstance179);

SoProtoInstance175->addChild(*SoField178);

SoTransform121->addChild(*SoProtoInstance175);

SoProtoInstance* SoProtoInstance180 = new SoProtoInstance();
SoProtoInstance180->setName(QString("Node"));
SoProtoInstance180->setUSE(QString("N1"));
SoTransform121->addChild(*SoProtoInstance180);

SoProtoInstance* SoProtoInstance181 = new SoProtoInstance();
SoProtoInstance181->setName(QString("Node"));
SoProtoInstance181->setUSE(QString("N2"));
SoTransform121->addChild(*SoProtoInstance181);

SoProtoInstance* SoProtoInstance182 = new SoProtoInstance();
SoProtoInstance182->setName(QString("Node"));
SoProtoInstance182->setUSE(QString("N3"));
SoTransform121->addChild(*SoProtoInstance182);

SoProtoInstance* SoProtoInstance183 = new SoProtoInstance();
SoProtoInstance183->setName(QString("Node"));
SoProtoInstance183->setUSE(QString("N4"));
SoTransform121->addChild(*SoProtoInstance183);

SoProtoInstance* SoProtoInstance184 = new SoProtoInstance();
SoProtoInstance184->setName(QString("Node"));
SoProtoInstance184->setUSE(QString("N5"));
SoTransform121->addChild(*SoProtoInstance184);

SoProtoInstance* SoProtoInstance185 = new SoProtoInstance();
SoProtoInstance185->setName(QString("Node"));
SoProtoInstance185->setUSE(QString("N6"));
SoTransform121->addChild(*SoProtoInstance185);

SoProtoInstance* SoProtoInstance186 = new SoProtoInstance();
SoProtoInstance186->setName(QString("Node"));
SoProtoInstance186->setUSE(QString("N7"));
SoTransform121->addChild(*SoProtoInstance186);

SoProtoInstance* SoProtoInstance187 = new SoProtoInstance();
SoProtoInstance187->setName(QString("Node"));
SoProtoInstance187->setUSE(QString("N8"));
SoTransform121->addChild(*SoProtoInstance187);

SoNode9->addChild(*SoTransform121);

SoSceneManager0->setSceneGraph(*SoNode9);

return 0;
}
