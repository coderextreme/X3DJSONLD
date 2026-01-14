
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
Someta2->setContent(QString("Menu.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("X3D scene with a Switch of Inlines controlled by a menu"));
Sohead1->addMeta(*Someta3);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode4 = new SoNode();
//Viewpoint and any other scene setup
SoViewpoint* SoViewpoint5 = new SoViewpoint();
SoViewpoint5->setPosition(new float[]{0.0,20.0,110.0});
SoNode4->addChild(*SoViewpoint5);

//Menu prototype declaration
SoProtoDeclare* SoProtoDeclare6 = new SoProtoDeclare();
SoProtoDeclare6->setName(QString("Menu"));
SoProtoInterface* SoProtoInterface7 = new SoProtoInterface();
Sofield* Sofield8 = new Sofield();
Sofield8->setName(QString("menuItems"));
Sofield8->setType(QString("MFString"));
Sofield8->setAccessType(QString("initializeOnly"));
SoProtoInterface7->addChild(*Sofield8);

SoProtoDeclare6->addChild(*SoProtoInterface7);

SoProtoBody* SoProtoBody9 = new SoProtoBody();
SoGroup* SoGroup10 = new SoGroup();
SoTransform* SoTransform11 = new SoTransform();
SoTransform11->setDEF(QString("TextMenuTransform"));
SoTransform11->setTranslation(new float[]{48.0,27.0,0.0});
SoTouchSensor* SoTouchSensor12 = new SoTouchSensor();
SoTouchSensor12->setDEF(QString("MenuTouchSensor"));
SoTransform11->addChild(*SoTouchSensor12);

SoShape* SoShape13 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance14 = new SoVRMLAppearance();
SoMaterial* SoMaterial15 = new SoMaterial();
SoMaterial15->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance14->addChild(*SoMaterial15);

SoShape13->addChild(*SoVRMLAppearance14);

SoText* SoText16 = new SoText();
SoText16->setDEF(QString("MenuText"));
SoIS* SoIS17 = new SoIS();
Soconnect* Soconnect18 = new Soconnect();
Soconnect18->setNodeField(QString("string"));
Soconnect18->setProtoField(QString("menuItems"));
SoIS17->addChild(*Soconnect18);

SoText16->addChild(*SoIS17);

SoFontStyle* SoFontStyle19 = new SoFontStyle();
SoFontStyle19->setSize(2.4);
SoFontStyle19->setSpacing(1.2);
SoFontStyle19->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText16->setFontStyle(*SoFontStyle19);

SoShape13->setGeometry(*SoText16);

SoTransform11->addChild(*SoShape13);

SoShape* SoShape20 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance21 = new SoVRMLAppearance();
SoMaterial* SoMaterial22 = new SoMaterial();
SoMaterial22->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance21->addChild(*SoMaterial22);

SoShape20->addChild(*SoVRMLAppearance21);

SoIndexedFaceSet* SoIndexedFaceSet23 = new SoIndexedFaceSet();
SoIndexedFaceSet23->setDEF(QString("Backing"));
SoIndexedFaceSet23->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate24 = new SoCoordinate();
SoCoordinate24->setPoint(new float[]{25.0,36.0,-0.01,-25.0,36.0,-0.01,-25.0,-51.0,-0.01,25.0,-51.0,-0.01}, 12);
SoIndexedFaceSet23->setCoord(*SoCoordinate24);

SoShape20->setGeometry(*SoIndexedFaceSet23);

SoTransform11->addChild(*SoShape20);

SoGroup10->addChild(*SoTransform11);

SoSwitch* SoSwitch25 = new SoSwitch();
SoSwitch25->setDEF(QString("SceneSwitcher"));
SoSwitch25->setWhichChoice(0);
SoInline* SoInline26 = new SoInline();
SoInline26->setDEF(QString("OPTION1"));
SoInline26->setUrl(new QString[]{QString("../resources/JinInnerBrowRaiser.x3d"), QString("JinInnerBrowRaiser.x3d")}, 2);
SoSwitch25->addChild(*SoInline26);

SoInline* SoInline27 = new SoInline();
SoInline27->setDEF(QString("OPTION2"));
SoInline27->setUrl(new QString[]{QString("../resources/JinOuterBrowRaiser.x3d"), QString("JinOuterBrowRaiser.x3d")}, 2);
SoSwitch25->addChild(*SoInline27);

SoInline* SoInline28 = new SoInline();
SoInline28->setDEF(QString("OPTION3"));
SoInline28->setUrl(new QString[]{QString("../resources/JinBrowLowerer.x3d"), QString("JinBrowLowerer.x3d")}, 2);
SoSwitch25->addChild(*SoInline28);

SoInline* SoInline29 = new SoInline();
SoInline29->setDEF(QString("OPTION4"));
SoInline29->setUrl(new QString[]{QString("../resources/JinUpperLidRaiser.x3d"), QString("JinUpperLidRaiser.x3d")}, 2);
SoSwitch25->addChild(*SoInline29);

SoInline* SoInline30 = new SoInline();
SoInline30->setDEF(QString("OPTION5"));
SoInline30->setUrl(new QString[]{QString("../resources/JinCheekRaiser.x3d"), QString("JinCheekRaiser.x3d")}, 2);
SoSwitch25->addChild(*SoInline30);

SoInline* SoInline31 = new SoInline();
SoInline31->setDEF(QString("OPTION6"));
SoInline31->setUrl(new QString[]{QString("../resources/JinLidTightener.x3d"), QString("JinLidTightener.x3d")}, 2);
SoSwitch25->addChild(*SoInline31);

SoInline* SoInline32 = new SoInline();
SoInline32->setDEF(QString("OPTION7"));
SoInline32->setUrl(new QString[]{QString("../resources/JinNoseWrinkler.x3d"), QString("JinNoseWrinkler.x3d")}, 2);
SoSwitch25->addChild(*SoInline32);

SoInline* SoInline33 = new SoInline();
SoInline33->setDEF(QString("OPTION8"));
SoInline33->setUrl(new QString[]{QString("../resources/JinUpperLipRaiser.x3d"), QString("JinUpperLipRaiser.x3d")}, 2);
SoSwitch25->addChild(*SoInline33);

SoInline* SoInline34 = new SoInline();
SoInline34->setDEF(QString("OPTION9"));
SoInline34->setUrl(new QString[]{QString("../resources/JinNasolabialDeepener.x3d"), QString("JinNasolabialDeepener.x3d")}, 2);
SoSwitch25->addChild(*SoInline34);

SoInline* SoInline35 = new SoInline();
SoInline35->setDEF(QString("OPTION10"));
SoInline35->setUrl(new QString[]{QString("../resources/JinLipCornerPuller.x3d"), QString("JinLipCornerPuller.x3d")}, 2);
SoSwitch25->addChild(*SoInline35);

SoInline* SoInline36 = new SoInline();
SoInline36->setDEF(QString("OPTION11"));
SoInline36->setUrl(new QString[]{QString("../resources/JinCheekPuffer.x3d"), QString("JinCheekPuffer.x3d")}, 2);
SoSwitch25->addChild(*SoInline36);

SoInline* SoInline37 = new SoInline();
SoInline37->setDEF(QString("OPTION12"));
SoInline37->setUrl(new QString[]{QString("../resources/JinDimpler.x3d"), QString("JinDimpler.x3d")}, 2);
SoSwitch25->addChild(*SoInline37);

SoInline* SoInline38 = new SoInline();
SoInline38->setDEF(QString("OPTION13"));
SoInline38->setUrl(new QString[]{QString("../resources/JinLipCornerDepressor.x3d"), QString("JinLipCornerDepressor.x3d")}, 2);
SoSwitch25->addChild(*SoInline38);

SoInline* SoInline39 = new SoInline();
SoInline39->setDEF(QString("OPTION14"));
SoInline39->setUrl(new QString[]{QString("../resources/JinLowerLipDepressor.x3d"), QString("JinLowerLipDepressor.x3d")}, 2);
SoSwitch25->addChild(*SoInline39);

SoInline* SoInline40 = new SoInline();
SoInline40->setDEF(QString("OPTION15"));
SoInline40->setUrl(new QString[]{QString("../resources/JinChinRaiser.x3d"), QString("JinChinRaiser.x3d")}, 2);
SoSwitch25->addChild(*SoInline40);

SoInline* SoInline41 = new SoInline();
SoInline41->setDEF(QString("OPTION16"));
SoInline41->setUrl(new QString[]{QString("../resources/JinLipPuckerer.x3d"), QString("JinLipPuckerer.x3d")}, 2);
SoSwitch25->addChild(*SoInline41);

SoInline* SoInline42 = new SoInline();
SoInline42->setDEF(QString("OPTION17"));
SoInline42->setUrl(new QString[]{QString("../resources/JinLipStretcher.x3d"), QString("JinLipStretcher.x3d")}, 2);
SoSwitch25->addChild(*SoInline42);

SoInline* SoInline43 = new SoInline();
SoInline43->setDEF(QString("OPTION18"));
SoInline43->setUrl(new QString[]{QString("../resources/JinLipFunneler.x3d"), QString("JinLipFunneler.x3d")}, 2);
SoSwitch25->addChild(*SoInline43);

SoInline* SoInline44 = new SoInline();
SoInline44->setDEF(QString("OPTION19"));
SoInline44->setUrl(new QString[]{QString("../resources/JinLipTightener.x3d"), QString("JinLipTightener.x3d")}, 2);
SoSwitch25->addChild(*SoInline44);

SoInline* SoInline45 = new SoInline();
SoInline45->setDEF(QString("OPTION20"));
SoInline45->setUrl(new QString[]{QString("../resources/JinLipPressor.x3d"), QString("JinLipPressor.x3d")}, 2);
SoSwitch25->addChild(*SoInline45);

SoInline* SoInline46 = new SoInline();
SoInline46->setDEF(QString("OPTION21"));
SoInline46->setUrl(new QString[]{QString("../resources/JinLipsPart.x3d"), QString("JinLipsPart.x3d")}, 2);
SoSwitch25->addChild(*SoInline46);

SoInline* SoInline47 = new SoInline();
SoInline47->setDEF(QString("OPTION22"));
SoInline47->setUrl(new QString[]{QString("../resources/JinJawDrop.x3d"), QString("JinJawDrop.x3d")}, 2);
SoSwitch25->addChild(*SoInline47);

SoInline* SoInline48 = new SoInline();
SoInline48->setDEF(QString("OPTION23"));
SoInline48->setUrl(new QString[]{QString("../resources/JinMouthStretch.x3d"), QString("JinMouthStretch.x3d")}, 2);
SoSwitch25->addChild(*SoInline48);

SoInline* SoInline49 = new SoInline();
SoInline49->setDEF(QString("OPTION24"));
SoInline49->setUrl(new QString[]{QString("../resources/JinLipSuck.x3d"), QString("JinLipSuck.x3d")}, 2);
SoSwitch25->addChild(*SoInline49);

SoInline* SoInline50 = new SoInline();
SoInline50->setDEF(QString("OPTION25"));
SoInline50->setUrl(new QString[]{QString("../resources/JinLidDroop.x3d"), QString("JinLidDroop.x3d")}, 2);
SoSwitch25->addChild(*SoInline50);

SoInline* SoInline51 = new SoInline();
SoInline51->setDEF(QString("OPTION26"));
SoInline51->setUrl(new QString[]{QString("../resources/JinSlit.x3d"), QString("JinSlit.x3d")}, 2);
SoSwitch25->addChild(*SoInline51);

SoInline* SoInline52 = new SoInline();
SoInline52->setDEF(QString("OPTION27"));
SoInline52->setUrl(new QString[]{QString("../resources/JinEyesClosed.x3d"), QString("JinEyesClosed.x3d")}, 2);
SoSwitch25->addChild(*SoInline52);

SoInline* SoInline53 = new SoInline();
SoInline53->setDEF(QString("OPTION28"));
SoInline53->setUrl(new QString[]{QString("../resources/JinSquint.x3d"), QString("JinSquint.x3d")}, 2);
SoSwitch25->addChild(*SoInline53);

SoInline* SoInline54 = new SoInline();
SoInline54->setDEF(QString("OPTION29"));
SoInline54->setUrl(new QString[]{QString("../resources/JinBlink.x3d"), QString("JinBlink.x3d")}, 2);
SoSwitch25->addChild(*SoInline54);

SoInline* SoInline55 = new SoInline();
SoInline55->setDEF(QString("OPTION30"));
SoInline55->setUrl(new QString[]{QString("../resources/JinWink.x3d"), QString("JinWink.x3d")}, 2);
SoSwitch25->addChild(*SoInline55);

SoGroup10->addChild(*SoSwitch25);

//Script to handle selection logic
SoScript* SoScript56 = new SoScript();
SoScript56->setDEF(QString("MenuScript"));
Sofield* Sofield57 = new Sofield();
Sofield57->setName(QString("menuItems"));
Sofield57->setType(QString("MFString"));
Sofield57->setAccessType(QString("initializeOnly"));
SoScript56->addChild(*Sofield57);

Sofield* Sofield58 = new Sofield();
Sofield58->setName(QString("selection"));
Sofield58->setType(QString("SFInt32"));
Sofield58->setAccessType(QString("outputOnly"));
SoScript56->addChild(*Sofield58);

Sofield* Sofield59 = new Sofield();
Sofield59->setName(QString("touchPoint"));
Sofield59->setType(QString("SFVec3f"));
Sofield59->setAccessType(QString("inputOnly"));
SoScript56->addChild(*Sofield59);

Sofield* Sofield60 = new Sofield();
Sofield60->setName(QString("spacing"));
Sofield60->setType(QString("SFFloat"));
Sofield60->setAccessType(QString("initializeOnly"));
Sofield60->setValue(QString("1.2"));
SoScript56->addChild(*Sofield60);

Sofield* Sofield61 = new Sofield();
Sofield61->setName(QString("size"));
Sofield61->setType(QString("SFFloat"));
Sofield61->setAccessType(QString("initializeOnly"));
Sofield61->setValue(QString("2.4"));
SoScript56->addChild(*Sofield61);

Sofield* Sofield62 = new Sofield();
Sofield62->setName(QString("menuCenterY"));
Sofield62->setType(QString("SFFloat"));
Sofield62->setAccessType(QString("initializeOnly"));
SoScript56->addChild(*Sofield62);

Sofield* Sofield63 = new Sofield();
Sofield63->setName(QString("itemHeight"));
Sofield63->setType(QString("SFFloat"));
Sofield63->setAccessType(QString("initializeOnly"));
SoScript56->addChild(*Sofield63);

SoIS* SoIS64 = new SoIS();
Soconnect* Soconnect65 = new Soconnect();
Soconnect65->setNodeField(QString("menuItems"));
Soconnect65->setProtoField(QString("menuItems"));
SoIS64->addChild(*Soconnect65);

SoScript56->addChild(*SoIS64);


//SoScript56->setSourceCode(QString("ecmascript:")+
//_T("        function initialize() {")+
//_T("          selection = 0;")+
//_T("          var spacingBetweenGlyphs = size * spacing - size; // Spacing calculation")+
//_T("          var menuHeight = (size + spacingBetweenGlyphs) * menuItems.length;")+
//_T("          menuCenterY = menuHeight / 2;")+
//_T("          itemHeight = menuHeight / menuItems.length;")+
//_T("        }")+
//_T("        function touchPoint(value) {")+
//_T("          Browser.print(\"Hit \"+value+\" \"+selection+\"")+
//_T("\");")+
//_T("          var index = Math.floor((menuCenterY - value.y) / itemHeight - 0.5);")+
//_T("          selection = index - 2;")+
//_T("          if (selection >= 0 && selection < menuItems.length) {")+
//_T("            Browser.print(\"Selected \"+value+\" \"+selection+\" \"+menuItems[selection]+\"")+
//_T("\");")+
//_T("          }")+
//_T("        }"));
SoGroup10->addChild(*SoScript56);

//ROUTEs to connect everything
SoROUTE* SoROUTE66 = new SoROUTE();
SoROUTE66->setFromNode(QString("MenuTouchSensor"));
SoROUTE66->setFromField(QString("hitPoint_changed"));
SoROUTE66->setToNode(QString("MenuScript"));
SoROUTE66->setToField(QString("touchPoint"));
SoGroup10->addChild(*SoROUTE66);

SoROUTE* SoROUTE67 = new SoROUTE();
SoROUTE67->setFromNode(QString("MenuScript"));
SoROUTE67->setFromField(QString("selection"));
SoROUTE67->setToNode(QString("SceneSwitcher"));
SoROUTE67->setToField(QString("whichChoice"));
SoGroup10->addChild(*SoROUTE67);

SoProtoBody9->addChild(*SoGroup10);

SoProtoDeclare6->addChild(*SoProtoBody9);

SoNode4->addChild(*SoProtoDeclare6);

SoProtoInstance* SoProtoInstance68 = new SoProtoInstance();
SoProtoInstance68->setName(QString("Menu"));
SoProtoInstance68->setDEF(QString("MainMenu"));
SoField* SoField69 = new SoField();
SoField69->setName(QString("menuItems"));
SoField69->setValue(QString("\"JinInnerBrowRaiser.x3d\" \"JinOuterBrowRaiser.x3d\" \"JinBrowLowerer.x3d\" \"JinUpperLidRaiser.x3d\" \"JinCheekRaiser.x3d\" \"JinLidTightener.x3d\" \"JinNoseWrinkler.x3d\" \"JinUpperLipRaiser.x3d\" \"JinNasolabialDeepener.x3d\" \"JinLipCornerPuller.x3d\" \"JinCheekPuffer.x3d\" \"JinDimpler.x3d\" \"JinLipCornerDepressor.x3d\" \"JinLowerLipDepressor.x3d\" \"JinChinRaiser.x3d\" \"JinLipPuckerer.x3d\" \"JinLipStretcher.x3d\" \"JinLipFunneler.x3d\" \"JinLipTightener.x3d\" \"JinLipPressor.x3d\" \"JinLipsPart.x3d\" \"JinJawDrop.x3d\" \"JinMouthStretch.x3d\" \"JinLipSuck.x3d\" \"JinLidDroop.x3d\" \"JinSlit.x3d\" \"JinEyesClosed.x3d\" \"JinSquint.x3d\" \"JinBlink.x3d\" \"JinWink.x3d\""));
SoProtoInstance68->addChild(*SoField69);

SoNode4->addChild(*SoProtoInstance68);

SoSceneManager0->setSceneGraph(*SoNode4);

return 0;
}
