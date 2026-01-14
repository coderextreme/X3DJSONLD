
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

SoGroup* SoGroup6 = new SoGroup();
SoSwitch* SoSwitch7 = new SoSwitch();
SoSwitch7->setDEF(QString("SceneSwitcher"));
SoSwitch7->setWhichChoice(0);
SoGroup* SoGroup8 = new SoGroup();
SoScript* SoScript9 = new SoScript();
SoScript9->setDEF(QString("Choice0"));
Sofield* Sofield10 = new Sofield();
Sofield10->setName(QString("touchTime"));
Sofield10->setType(QString("SFTime"));
Sofield10->setAccessType(QString("inputOnly"));
SoScript9->addChild(*Sofield10);

Sofield* Sofield11 = new Sofield();
Sofield11->setName(QString("choice"));
Sofield11->setType(QString("SFInt32"));
Sofield11->setAccessType(QString("outputOnly"));
SoScript9->addChild(*Sofield11);


//SoScript9->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 0;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 0;")+
//_T("      }"));
SoGroup8->addChild(*SoScript9);

SoInline* SoInline12 = new SoInline();
SoInline12->setDEF(QString("JinBlink"));
SoInline12->setUrl(new QString[]{QString("../resources/JinBlink.x3d"), QString("JinBlink.x3d")}, 2);
SoGroup8->addChild(*SoInline12);

SoSwitch7->addChild(*SoGroup8);

SoGroup* SoGroup13 = new SoGroup();
SoScript* SoScript14 = new SoScript();
SoScript14->setDEF(QString("Choice1"));
Sofield* Sofield15 = new Sofield();
Sofield15->setName(QString("touchTime"));
Sofield15->setType(QString("SFTime"));
Sofield15->setAccessType(QString("inputOnly"));
SoScript14->addChild(*Sofield15);

Sofield* Sofield16 = new Sofield();
Sofield16->setName(QString("choice"));
Sofield16->setType(QString("SFInt32"));
Sofield16->setAccessType(QString("outputOnly"));
SoScript14->addChild(*Sofield16);


//SoScript14->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 1;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 1;")+
//_T("      }"));
SoGroup13->addChild(*SoScript14);

SoInline* SoInline17 = new SoInline();
SoInline17->setDEF(QString("JinBrowLowerer"));
SoInline17->setUrl(new QString[]{QString("../resources/JinBrowLowerer.x3d"), QString("JinBrowLowerer.x3d")}, 2);
SoGroup13->addChild(*SoInline17);

SoSwitch7->addChild(*SoGroup13);

SoGroup* SoGroup18 = new SoGroup();
SoScript* SoScript19 = new SoScript();
SoScript19->setDEF(QString("Choice2"));
Sofield* Sofield20 = new Sofield();
Sofield20->setName(QString("touchTime"));
Sofield20->setType(QString("SFTime"));
Sofield20->setAccessType(QString("inputOnly"));
SoScript19->addChild(*Sofield20);

Sofield* Sofield21 = new Sofield();
Sofield21->setName(QString("choice"));
Sofield21->setType(QString("SFInt32"));
Sofield21->setAccessType(QString("outputOnly"));
SoScript19->addChild(*Sofield21);


//SoScript19->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 2;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 2;")+
//_T("      }"));
SoGroup18->addChild(*SoScript19);

SoInline* SoInline22 = new SoInline();
SoInline22->setDEF(QString("JinCheekPuffer"));
SoInline22->setUrl(new QString[]{QString("../resources/JinCheekPuffer.x3d"), QString("JinCheekPuffer.x3d")}, 2);
SoGroup18->addChild(*SoInline22);

SoSwitch7->addChild(*SoGroup18);

SoGroup* SoGroup23 = new SoGroup();
SoScript* SoScript24 = new SoScript();
SoScript24->setDEF(QString("Choice3"));
Sofield* Sofield25 = new Sofield();
Sofield25->setName(QString("touchTime"));
Sofield25->setType(QString("SFTime"));
Sofield25->setAccessType(QString("inputOnly"));
SoScript24->addChild(*Sofield25);

Sofield* Sofield26 = new Sofield();
Sofield26->setName(QString("choice"));
Sofield26->setType(QString("SFInt32"));
Sofield26->setAccessType(QString("outputOnly"));
SoScript24->addChild(*Sofield26);


//SoScript24->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 3;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 3;")+
//_T("      }"));
SoGroup23->addChild(*SoScript24);

SoInline* SoInline27 = new SoInline();
SoInline27->setDEF(QString("JinCheekRaiser"));
SoInline27->setUrl(new QString[]{QString("../resources/JinCheekRaiser.x3d"), QString("JinCheekRaiser.x3d")}, 2);
SoGroup23->addChild(*SoInline27);

SoSwitch7->addChild(*SoGroup23);

SoGroup* SoGroup28 = new SoGroup();
SoScript* SoScript29 = new SoScript();
SoScript29->setDEF(QString("Choice4"));
Sofield* Sofield30 = new Sofield();
Sofield30->setName(QString("touchTime"));
Sofield30->setType(QString("SFTime"));
Sofield30->setAccessType(QString("inputOnly"));
SoScript29->addChild(*Sofield30);

Sofield* Sofield31 = new Sofield();
Sofield31->setName(QString("choice"));
Sofield31->setType(QString("SFInt32"));
Sofield31->setAccessType(QString("outputOnly"));
SoScript29->addChild(*Sofield31);


//SoScript29->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 4;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 4;")+
//_T("      }"));
SoGroup28->addChild(*SoScript29);

SoInline* SoInline32 = new SoInline();
SoInline32->setDEF(QString("JinChinRaiser"));
SoInline32->setUrl(new QString[]{QString("../resources/JinChinRaiser.x3d"), QString("JinChinRaiser.x3d")}, 2);
SoGroup28->addChild(*SoInline32);

SoSwitch7->addChild(*SoGroup28);

SoGroup* SoGroup33 = new SoGroup();
SoScript* SoScript34 = new SoScript();
SoScript34->setDEF(QString("Choice5"));
Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("touchTime"));
Sofield35->setType(QString("SFTime"));
Sofield35->setAccessType(QString("inputOnly"));
SoScript34->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("choice"));
Sofield36->setType(QString("SFInt32"));
Sofield36->setAccessType(QString("outputOnly"));
SoScript34->addChild(*Sofield36);


//SoScript34->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 5;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 5;")+
//_T("      }"));
SoGroup33->addChild(*SoScript34);

SoInline* SoInline37 = new SoInline();
SoInline37->setDEF(QString("JinDimpler"));
SoInline37->setUrl(new QString[]{QString("../resources/JinDimpler.x3d"), QString("JinDimpler.x3d")}, 2);
SoGroup33->addChild(*SoInline37);

SoSwitch7->addChild(*SoGroup33);

SoGroup* SoGroup38 = new SoGroup();
SoScript* SoScript39 = new SoScript();
SoScript39->setDEF(QString("Choice6"));
Sofield* Sofield40 = new Sofield();
Sofield40->setName(QString("touchTime"));
Sofield40->setType(QString("SFTime"));
Sofield40->setAccessType(QString("inputOnly"));
SoScript39->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("choice"));
Sofield41->setType(QString("SFInt32"));
Sofield41->setAccessType(QString("outputOnly"));
SoScript39->addChild(*Sofield41);


//SoScript39->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 6;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 6;")+
//_T("      }"));
SoGroup38->addChild(*SoScript39);

SoInline* SoInline42 = new SoInline();
SoInline42->setDEF(QString("JinEyesClosed"));
SoInline42->setUrl(new QString[]{QString("../resources/JinEyesClosed.x3d"), QString("JinEyesClosed.x3d")}, 2);
SoGroup38->addChild(*SoInline42);

SoSwitch7->addChild(*SoGroup38);

SoGroup* SoGroup43 = new SoGroup();
SoScript* SoScript44 = new SoScript();
SoScript44->setDEF(QString("Choice7"));
Sofield* Sofield45 = new Sofield();
Sofield45->setName(QString("touchTime"));
Sofield45->setType(QString("SFTime"));
Sofield45->setAccessType(QString("inputOnly"));
SoScript44->addChild(*Sofield45);

Sofield* Sofield46 = new Sofield();
Sofield46->setName(QString("choice"));
Sofield46->setType(QString("SFInt32"));
Sofield46->setAccessType(QString("outputOnly"));
SoScript44->addChild(*Sofield46);


//SoScript44->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 7;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 7;")+
//_T("      }"));
SoGroup43->addChild(*SoScript44);

SoInline* SoInline47 = new SoInline();
SoInline47->setDEF(QString("JinInnerBrowRaiser"));
SoInline47->setUrl(new QString[]{QString("../resources/JinInnerBrowRaiser.x3d"), QString("JinInnerBrowRaiser.x3d")}, 2);
SoGroup43->addChild(*SoInline47);

SoSwitch7->addChild(*SoGroup43);

SoGroup* SoGroup48 = new SoGroup();
SoScript* SoScript49 = new SoScript();
SoScript49->setDEF(QString("Choice8"));
Sofield* Sofield50 = new Sofield();
Sofield50->setName(QString("touchTime"));
Sofield50->setType(QString("SFTime"));
Sofield50->setAccessType(QString("inputOnly"));
SoScript49->addChild(*Sofield50);

Sofield* Sofield51 = new Sofield();
Sofield51->setName(QString("choice"));
Sofield51->setType(QString("SFInt32"));
Sofield51->setAccessType(QString("outputOnly"));
SoScript49->addChild(*Sofield51);


//SoScript49->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 8;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 8;")+
//_T("      }"));
SoGroup48->addChild(*SoScript49);

SoInline* SoInline52 = new SoInline();
SoInline52->setDEF(QString("JinJawDrop"));
SoInline52->setUrl(new QString[]{QString("../resources/JinJawDrop.x3d"), QString("JinJawDrop.x3d")}, 2);
SoGroup48->addChild(*SoInline52);

SoSwitch7->addChild(*SoGroup48);

SoGroup* SoGroup53 = new SoGroup();
SoScript* SoScript54 = new SoScript();
SoScript54->setDEF(QString("Choice9"));
Sofield* Sofield55 = new Sofield();
Sofield55->setName(QString("touchTime"));
Sofield55->setType(QString("SFTime"));
Sofield55->setAccessType(QString("inputOnly"));
SoScript54->addChild(*Sofield55);

Sofield* Sofield56 = new Sofield();
Sofield56->setName(QString("choice"));
Sofield56->setType(QString("SFInt32"));
Sofield56->setAccessType(QString("outputOnly"));
SoScript54->addChild(*Sofield56);


//SoScript54->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 9;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 9;")+
//_T("      }"));
SoGroup53->addChild(*SoScript54);

SoInline* SoInline57 = new SoInline();
SoInline57->setDEF(QString("JinLidDroop"));
SoInline57->setUrl(new QString[]{QString("../resources/JinLidDroop.x3d"), QString("JinLidDroop.x3d")}, 2);
SoGroup53->addChild(*SoInline57);

SoSwitch7->addChild(*SoGroup53);

SoGroup* SoGroup58 = new SoGroup();
SoScript* SoScript59 = new SoScript();
SoScript59->setDEF(QString("Choice10"));
Sofield* Sofield60 = new Sofield();
Sofield60->setName(QString("touchTime"));
Sofield60->setType(QString("SFTime"));
Sofield60->setAccessType(QString("inputOnly"));
SoScript59->addChild(*Sofield60);

Sofield* Sofield61 = new Sofield();
Sofield61->setName(QString("choice"));
Sofield61->setType(QString("SFInt32"));
Sofield61->setAccessType(QString("outputOnly"));
SoScript59->addChild(*Sofield61);


//SoScript59->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 10;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 10;")+
//_T("      }"));
SoGroup58->addChild(*SoScript59);

SoInline* SoInline62 = new SoInline();
SoInline62->setDEF(QString("JinLidTightener"));
SoInline62->setUrl(new QString[]{QString("../resources/JinLidTightener.x3d"), QString("JinLidTightener.x3d")}, 2);
SoGroup58->addChild(*SoInline62);

SoSwitch7->addChild(*SoGroup58);

SoGroup* SoGroup63 = new SoGroup();
SoScript* SoScript64 = new SoScript();
SoScript64->setDEF(QString("Choice11"));
Sofield* Sofield65 = new Sofield();
Sofield65->setName(QString("touchTime"));
Sofield65->setType(QString("SFTime"));
Sofield65->setAccessType(QString("inputOnly"));
SoScript64->addChild(*Sofield65);

Sofield* Sofield66 = new Sofield();
Sofield66->setName(QString("choice"));
Sofield66->setType(QString("SFInt32"));
Sofield66->setAccessType(QString("outputOnly"));
SoScript64->addChild(*Sofield66);


//SoScript64->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 11;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 11;")+
//_T("      }"));
SoGroup63->addChild(*SoScript64);

SoInline* SoInline67 = new SoInline();
SoInline67->setDEF(QString("JinLipCornerDepressor"));
SoInline67->setUrl(new QString[]{QString("../resources/JinLipCornerDepressor.x3d"), QString("JinLipCornerDepressor.x3d")}, 2);
SoGroup63->addChild(*SoInline67);

SoSwitch7->addChild(*SoGroup63);

SoGroup* SoGroup68 = new SoGroup();
SoScript* SoScript69 = new SoScript();
SoScript69->setDEF(QString("Choice12"));
Sofield* Sofield70 = new Sofield();
Sofield70->setName(QString("touchTime"));
Sofield70->setType(QString("SFTime"));
Sofield70->setAccessType(QString("inputOnly"));
SoScript69->addChild(*Sofield70);

Sofield* Sofield71 = new Sofield();
Sofield71->setName(QString("choice"));
Sofield71->setType(QString("SFInt32"));
Sofield71->setAccessType(QString("outputOnly"));
SoScript69->addChild(*Sofield71);


//SoScript69->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 12;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 12;")+
//_T("      }"));
SoGroup68->addChild(*SoScript69);

SoInline* SoInline72 = new SoInline();
SoInline72->setDEF(QString("JinLipCornerPuller"));
SoInline72->setUrl(new QString[]{QString("../resources/JinLipCornerPuller.x3d"), QString("JinLipCornerPuller.x3d")}, 2);
SoGroup68->addChild(*SoInline72);

SoSwitch7->addChild(*SoGroup68);

SoGroup* SoGroup73 = new SoGroup();
SoScript* SoScript74 = new SoScript();
SoScript74->setDEF(QString("Choice13"));
Sofield* Sofield75 = new Sofield();
Sofield75->setName(QString("touchTime"));
Sofield75->setType(QString("SFTime"));
Sofield75->setAccessType(QString("inputOnly"));
SoScript74->addChild(*Sofield75);

Sofield* Sofield76 = new Sofield();
Sofield76->setName(QString("choice"));
Sofield76->setType(QString("SFInt32"));
Sofield76->setAccessType(QString("outputOnly"));
SoScript74->addChild(*Sofield76);


//SoScript74->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 13;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 13;")+
//_T("      }"));
SoGroup73->addChild(*SoScript74);

SoInline* SoInline77 = new SoInline();
SoInline77->setDEF(QString("JinLipFunneler"));
SoInline77->setUrl(new QString[]{QString("../resources/JinLipFunneler.x3d"), QString("JinLipFunneler.x3d")}, 2);
SoGroup73->addChild(*SoInline77);

SoSwitch7->addChild(*SoGroup73);

SoGroup* SoGroup78 = new SoGroup();
SoScript* SoScript79 = new SoScript();
SoScript79->setDEF(QString("Choice14"));
Sofield* Sofield80 = new Sofield();
Sofield80->setName(QString("touchTime"));
Sofield80->setType(QString("SFTime"));
Sofield80->setAccessType(QString("inputOnly"));
SoScript79->addChild(*Sofield80);

Sofield* Sofield81 = new Sofield();
Sofield81->setName(QString("choice"));
Sofield81->setType(QString("SFInt32"));
Sofield81->setAccessType(QString("outputOnly"));
SoScript79->addChild(*Sofield81);


//SoScript79->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 14;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 14;")+
//_T("      }"));
SoGroup78->addChild(*SoScript79);

SoInline* SoInline82 = new SoInline();
SoInline82->setDEF(QString("JinLipPressor"));
SoInline82->setUrl(new QString[]{QString("../resources/JinLipPressor.x3d"), QString("JinLipPressor.x3d")}, 2);
SoGroup78->addChild(*SoInline82);

SoSwitch7->addChild(*SoGroup78);

SoGroup* SoGroup83 = new SoGroup();
SoScript* SoScript84 = new SoScript();
SoScript84->setDEF(QString("Choice15"));
Sofield* Sofield85 = new Sofield();
Sofield85->setName(QString("touchTime"));
Sofield85->setType(QString("SFTime"));
Sofield85->setAccessType(QString("inputOnly"));
SoScript84->addChild(*Sofield85);

Sofield* Sofield86 = new Sofield();
Sofield86->setName(QString("choice"));
Sofield86->setType(QString("SFInt32"));
Sofield86->setAccessType(QString("outputOnly"));
SoScript84->addChild(*Sofield86);


//SoScript84->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 15;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 15;")+
//_T("      }"));
SoGroup83->addChild(*SoScript84);

SoInline* SoInline87 = new SoInline();
SoInline87->setDEF(QString("JinLipPuckerer"));
SoInline87->setUrl(new QString[]{QString("../resources/JinLipPuckerer.x3d"), QString("JinLipPuckerer.x3d")}, 2);
SoGroup83->addChild(*SoInline87);

SoSwitch7->addChild(*SoGroup83);

SoGroup* SoGroup88 = new SoGroup();
SoScript* SoScript89 = new SoScript();
SoScript89->setDEF(QString("Choice16"));
Sofield* Sofield90 = new Sofield();
Sofield90->setName(QString("touchTime"));
Sofield90->setType(QString("SFTime"));
Sofield90->setAccessType(QString("inputOnly"));
SoScript89->addChild(*Sofield90);

Sofield* Sofield91 = new Sofield();
Sofield91->setName(QString("choice"));
Sofield91->setType(QString("SFInt32"));
Sofield91->setAccessType(QString("outputOnly"));
SoScript89->addChild(*Sofield91);


//SoScript89->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 16;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 16;")+
//_T("      }"));
SoGroup88->addChild(*SoScript89);

SoInline* SoInline92 = new SoInline();
SoInline92->setDEF(QString("JinLipsPart"));
SoInline92->setUrl(new QString[]{QString("../resources/JinLipsPart.x3d"), QString("JinLipsPart.x3d")}, 2);
SoGroup88->addChild(*SoInline92);

SoSwitch7->addChild(*SoGroup88);

SoGroup* SoGroup93 = new SoGroup();
SoScript* SoScript94 = new SoScript();
SoScript94->setDEF(QString("Choice17"));
Sofield* Sofield95 = new Sofield();
Sofield95->setName(QString("touchTime"));
Sofield95->setType(QString("SFTime"));
Sofield95->setAccessType(QString("inputOnly"));
SoScript94->addChild(*Sofield95);

Sofield* Sofield96 = new Sofield();
Sofield96->setName(QString("choice"));
Sofield96->setType(QString("SFInt32"));
Sofield96->setAccessType(QString("outputOnly"));
SoScript94->addChild(*Sofield96);


//SoScript94->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 17;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 17;")+
//_T("      }"));
SoGroup93->addChild(*SoScript94);

SoInline* SoInline97 = new SoInline();
SoInline97->setDEF(QString("JinLipStretcher"));
SoInline97->setUrl(new QString[]{QString("../resources/JinLipStretcher.x3d"), QString("JinLipStretcher.x3d")}, 2);
SoGroup93->addChild(*SoInline97);

SoSwitch7->addChild(*SoGroup93);

SoGroup* SoGroup98 = new SoGroup();
SoScript* SoScript99 = new SoScript();
SoScript99->setDEF(QString("Choice18"));
Sofield* Sofield100 = new Sofield();
Sofield100->setName(QString("touchTime"));
Sofield100->setType(QString("SFTime"));
Sofield100->setAccessType(QString("inputOnly"));
SoScript99->addChild(*Sofield100);

Sofield* Sofield101 = new Sofield();
Sofield101->setName(QString("choice"));
Sofield101->setType(QString("SFInt32"));
Sofield101->setAccessType(QString("outputOnly"));
SoScript99->addChild(*Sofield101);


//SoScript99->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 18;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 18;")+
//_T("      }"));
SoGroup98->addChild(*SoScript99);

SoInline* SoInline102 = new SoInline();
SoInline102->setDEF(QString("JinLipSuck"));
SoInline102->setUrl(new QString[]{QString("../resources/JinLipSuck.x3d"), QString("JinLipSuck.x3d")}, 2);
SoGroup98->addChild(*SoInline102);

SoSwitch7->addChild(*SoGroup98);

SoGroup* SoGroup103 = new SoGroup();
SoScript* SoScript104 = new SoScript();
SoScript104->setDEF(QString("Choice19"));
Sofield* Sofield105 = new Sofield();
Sofield105->setName(QString("touchTime"));
Sofield105->setType(QString("SFTime"));
Sofield105->setAccessType(QString("inputOnly"));
SoScript104->addChild(*Sofield105);

Sofield* Sofield106 = new Sofield();
Sofield106->setName(QString("choice"));
Sofield106->setType(QString("SFInt32"));
Sofield106->setAccessType(QString("outputOnly"));
SoScript104->addChild(*Sofield106);


//SoScript104->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 19;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 19;")+
//_T("      }"));
SoGroup103->addChild(*SoScript104);

SoInline* SoInline107 = new SoInline();
SoInline107->setDEF(QString("JinLipTightener"));
SoInline107->setUrl(new QString[]{QString("../resources/JinLipTightener.x3d"), QString("JinLipTightener.x3d")}, 2);
SoGroup103->addChild(*SoInline107);

SoSwitch7->addChild(*SoGroup103);

SoGroup* SoGroup108 = new SoGroup();
SoScript* SoScript109 = new SoScript();
SoScript109->setDEF(QString("Choice20"));
Sofield* Sofield110 = new Sofield();
Sofield110->setName(QString("touchTime"));
Sofield110->setType(QString("SFTime"));
Sofield110->setAccessType(QString("inputOnly"));
SoScript109->addChild(*Sofield110);

Sofield* Sofield111 = new Sofield();
Sofield111->setName(QString("choice"));
Sofield111->setType(QString("SFInt32"));
Sofield111->setAccessType(QString("outputOnly"));
SoScript109->addChild(*Sofield111);


//SoScript109->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 20;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 20;")+
//_T("      }"));
SoGroup108->addChild(*SoScript109);

SoInline* SoInline112 = new SoInline();
SoInline112->setDEF(QString("JinLowerLipDepressor"));
SoInline112->setUrl(new QString[]{QString("../resources/JinLowerLipDepressor.x3d"), QString("JinLowerLipDepressor.x3d")}, 2);
SoGroup108->addChild(*SoInline112);

SoSwitch7->addChild(*SoGroup108);

SoGroup* SoGroup113 = new SoGroup();
SoScript* SoScript114 = new SoScript();
SoScript114->setDEF(QString("Choice21"));
Sofield* Sofield115 = new Sofield();
Sofield115->setName(QString("touchTime"));
Sofield115->setType(QString("SFTime"));
Sofield115->setAccessType(QString("inputOnly"));
SoScript114->addChild(*Sofield115);

Sofield* Sofield116 = new Sofield();
Sofield116->setName(QString("choice"));
Sofield116->setType(QString("SFInt32"));
Sofield116->setAccessType(QString("outputOnly"));
SoScript114->addChild(*Sofield116);


//SoScript114->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 21;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 21;")+
//_T("      }"));
SoGroup113->addChild(*SoScript114);

SoInline* SoInline117 = new SoInline();
SoInline117->setDEF(QString("JinMouthStretch"));
SoInline117->setUrl(new QString[]{QString("../resources/JinMouthStretch.x3d"), QString("JinMouthStretch.x3d")}, 2);
SoGroup113->addChild(*SoInline117);

SoSwitch7->addChild(*SoGroup113);

SoGroup* SoGroup118 = new SoGroup();
SoScript* SoScript119 = new SoScript();
SoScript119->setDEF(QString("Choice22"));
Sofield* Sofield120 = new Sofield();
Sofield120->setName(QString("touchTime"));
Sofield120->setType(QString("SFTime"));
Sofield120->setAccessType(QString("inputOnly"));
SoScript119->addChild(*Sofield120);

Sofield* Sofield121 = new Sofield();
Sofield121->setName(QString("choice"));
Sofield121->setType(QString("SFInt32"));
Sofield121->setAccessType(QString("outputOnly"));
SoScript119->addChild(*Sofield121);


//SoScript119->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 22;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 22;")+
//_T("      }"));
SoGroup118->addChild(*SoScript119);

SoInline* SoInline122 = new SoInline();
SoInline122->setDEF(QString("JinNasolabialDeepener"));
SoInline122->setUrl(new QString[]{QString("../resources/JinNasolabialDeepener.x3d"), QString("JinNasolabialDeepener.x3d")}, 2);
SoGroup118->addChild(*SoInline122);

SoSwitch7->addChild(*SoGroup118);

SoGroup* SoGroup123 = new SoGroup();
SoScript* SoScript124 = new SoScript();
SoScript124->setDEF(QString("Choice23"));
Sofield* Sofield125 = new Sofield();
Sofield125->setName(QString("touchTime"));
Sofield125->setType(QString("SFTime"));
Sofield125->setAccessType(QString("inputOnly"));
SoScript124->addChild(*Sofield125);

Sofield* Sofield126 = new Sofield();
Sofield126->setName(QString("choice"));
Sofield126->setType(QString("SFInt32"));
Sofield126->setAccessType(QString("outputOnly"));
SoScript124->addChild(*Sofield126);


//SoScript124->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 23;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 23;")+
//_T("      }"));
SoGroup123->addChild(*SoScript124);

SoInline* SoInline127 = new SoInline();
SoInline127->setDEF(QString("JinNoseWrinkler"));
SoInline127->setUrl(new QString[]{QString("../resources/JinNoseWrinkler.x3d"), QString("JinNoseWrinkler.x3d")}, 2);
SoGroup123->addChild(*SoInline127);

SoSwitch7->addChild(*SoGroup123);

SoGroup* SoGroup128 = new SoGroup();
SoScript* SoScript129 = new SoScript();
SoScript129->setDEF(QString("Choice24"));
Sofield* Sofield130 = new Sofield();
Sofield130->setName(QString("touchTime"));
Sofield130->setType(QString("SFTime"));
Sofield130->setAccessType(QString("inputOnly"));
SoScript129->addChild(*Sofield130);

Sofield* Sofield131 = new Sofield();
Sofield131->setName(QString("choice"));
Sofield131->setType(QString("SFInt32"));
Sofield131->setAccessType(QString("outputOnly"));
SoScript129->addChild(*Sofield131);


//SoScript129->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 24;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 24;")+
//_T("      }"));
SoGroup128->addChild(*SoScript129);

SoInline* SoInline132 = new SoInline();
SoInline132->setDEF(QString("JinOuterBrowRaiser"));
SoInline132->setUrl(new QString[]{QString("../resources/JinOuterBrowRaiser.x3d"), QString("JinOuterBrowRaiser.x3d")}, 2);
SoGroup128->addChild(*SoInline132);

SoSwitch7->addChild(*SoGroup128);

SoGroup* SoGroup133 = new SoGroup();
SoScript* SoScript134 = new SoScript();
SoScript134->setDEF(QString("Choice25"));
Sofield* Sofield135 = new Sofield();
Sofield135->setName(QString("touchTime"));
Sofield135->setType(QString("SFTime"));
Sofield135->setAccessType(QString("inputOnly"));
SoScript134->addChild(*Sofield135);

Sofield* Sofield136 = new Sofield();
Sofield136->setName(QString("choice"));
Sofield136->setType(QString("SFInt32"));
Sofield136->setAccessType(QString("outputOnly"));
SoScript134->addChild(*Sofield136);


//SoScript134->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 25;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 25;")+
//_T("      }"));
SoGroup133->addChild(*SoScript134);

SoInline* SoInline137 = new SoInline();
SoInline137->setDEF(QString("JinSlit"));
SoInline137->setUrl(new QString[]{QString("../resources/JinSlit.x3d"), QString("JinSlit.x3d")}, 2);
SoGroup133->addChild(*SoInline137);

SoSwitch7->addChild(*SoGroup133);

SoGroup* SoGroup138 = new SoGroup();
SoScript* SoScript139 = new SoScript();
SoScript139->setDEF(QString("Choice26"));
Sofield* Sofield140 = new Sofield();
Sofield140->setName(QString("touchTime"));
Sofield140->setType(QString("SFTime"));
Sofield140->setAccessType(QString("inputOnly"));
SoScript139->addChild(*Sofield140);

Sofield* Sofield141 = new Sofield();
Sofield141->setName(QString("choice"));
Sofield141->setType(QString("SFInt32"));
Sofield141->setAccessType(QString("outputOnly"));
SoScript139->addChild(*Sofield141);


//SoScript139->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 26;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 26;")+
//_T("      }"));
SoGroup138->addChild(*SoScript139);

SoInline* SoInline142 = new SoInline();
SoInline142->setDEF(QString("JinSquint"));
SoInline142->setUrl(new QString[]{QString("../resources/JinSquint.x3d"), QString("JinSquint.x3d")}, 2);
SoGroup138->addChild(*SoInline142);

SoSwitch7->addChild(*SoGroup138);

SoGroup* SoGroup143 = new SoGroup();
SoScript* SoScript144 = new SoScript();
SoScript144->setDEF(QString("Choice27"));
Sofield* Sofield145 = new Sofield();
Sofield145->setName(QString("touchTime"));
Sofield145->setType(QString("SFTime"));
Sofield145->setAccessType(QString("inputOnly"));
SoScript144->addChild(*Sofield145);

Sofield* Sofield146 = new Sofield();
Sofield146->setName(QString("choice"));
Sofield146->setType(QString("SFInt32"));
Sofield146->setAccessType(QString("outputOnly"));
SoScript144->addChild(*Sofield146);


//SoScript144->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 27;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 27;")+
//_T("      }"));
SoGroup143->addChild(*SoScript144);

SoInline* SoInline147 = new SoInline();
SoInline147->setDEF(QString("JinUpperLidRaiser"));
SoInline147->setUrl(new QString[]{QString("../resources/JinUpperLidRaiser.x3d"), QString("JinUpperLidRaiser.x3d")}, 2);
SoGroup143->addChild(*SoInline147);

SoSwitch7->addChild(*SoGroup143);

SoGroup* SoGroup148 = new SoGroup();
SoScript* SoScript149 = new SoScript();
SoScript149->setDEF(QString("Choice28"));
Sofield* Sofield150 = new Sofield();
Sofield150->setName(QString("touchTime"));
Sofield150->setType(QString("SFTime"));
Sofield150->setAccessType(QString("inputOnly"));
SoScript149->addChild(*Sofield150);

Sofield* Sofield151 = new Sofield();
Sofield151->setName(QString("choice"));
Sofield151->setType(QString("SFInt32"));
Sofield151->setAccessType(QString("outputOnly"));
SoScript149->addChild(*Sofield151);


//SoScript149->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 28;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 28;")+
//_T("      }"));
SoGroup148->addChild(*SoScript149);

SoInline* SoInline152 = new SoInline();
SoInline152->setDEF(QString("JinUpperLipRaiser"));
SoInline152->setUrl(new QString[]{QString("../resources/JinUpperLipRaiser.x3d"), QString("JinUpperLipRaiser.x3d")}, 2);
SoGroup148->addChild(*SoInline152);

SoSwitch7->addChild(*SoGroup148);

SoGroup* SoGroup153 = new SoGroup();
SoScript* SoScript154 = new SoScript();
SoScript154->setDEF(QString("Choice29"));
Sofield* Sofield155 = new Sofield();
Sofield155->setName(QString("touchTime"));
Sofield155->setType(QString("SFTime"));
Sofield155->setAccessType(QString("inputOnly"));
SoScript154->addChild(*Sofield155);

Sofield* Sofield156 = new Sofield();
Sofield156->setName(QString("choice"));
Sofield156->setType(QString("SFInt32"));
Sofield156->setAccessType(QString("outputOnly"));
SoScript154->addChild(*Sofield156);


//SoScript154->setSourceCode(QString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 29;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 29;")+
//_T("      }"));
SoGroup153->addChild(*SoScript154);

SoInline* SoInline157 = new SoInline();
SoInline157->setDEF(QString("JinWink"));
SoInline157->setUrl(new QString[]{QString("../resources/JinWink.x3d"), QString("JinWink.x3d")}, 2);
SoGroup153->addChild(*SoInline157);

SoSwitch7->addChild(*SoGroup153);

SoGroup6->addChild(*SoSwitch7);

SoTransform* SoTransform158 = new SoTransform();
SoTransform158->setTranslation(new float[]{48.0,63.4,0.0});
SoTouchSensor* SoTouchSensor159 = new SoTouchSensor();
SoTouchSensor159->setDescription(QString("TSJinBlink"));
SoTouchSensor159->setDEF(QString("JinBlink_Sensor"));
SoTransform158->addChild(*SoTouchSensor159);

SoShape* SoShape160 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance161 = new SoVRMLAppearance();
SoMaterial* SoMaterial162 = new SoMaterial();
SoMaterial162->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance161->addChild(*SoMaterial162);

SoShape160->addChild(*SoVRMLAppearance161);

SoText* SoText163 = new SoText();
SoText163->setString(new QString[]{QString("JinBlink")}, 1);
SoFontStyle* SoFontStyle164 = new SoFontStyle();
SoFontStyle164->setSize(2.4);
SoFontStyle164->setSpacing(1.2);
SoFontStyle164->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText163->setFontStyle(*SoFontStyle164);

SoShape160->setGeometry(*SoText163);

SoTransform158->addChild(*SoShape160);

SoShape* SoShape165 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance166 = new SoVRMLAppearance();
SoMaterial* SoMaterial167 = new SoMaterial();
SoMaterial167->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance166->addChild(*SoMaterial167);

SoShape165->addChild(*SoVRMLAppearance166);

SoIndexedFaceSet* SoIndexedFaceSet168 = new SoIndexedFaceSet();
SoIndexedFaceSet168->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate169 = new SoCoordinate();
SoCoordinate169->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet168->setCoord(*SoCoordinate169);

SoShape165->setGeometry(*SoIndexedFaceSet168);

SoTransform158->addChild(*SoShape165);

SoGroup6->addChild(*SoTransform158);

SoROUTE* SoROUTE170 = new SoROUTE();
SoROUTE170->setFromNode(QString("JinBlink_Sensor"));
SoROUTE170->setFromField(QString("touchTime"));
SoROUTE170->setToNode(QString("Choice0"));
SoROUTE170->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE170);

SoROUTE* SoROUTE171 = new SoROUTE();
SoROUTE171->setFromNode(QString("Choice0"));
SoROUTE171->setFromField(QString("choice"));
SoROUTE171->setToNode(QString("SceneSwitcher"));
SoROUTE171->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE171);

SoTransform* SoTransform172 = new SoTransform();
SoTransform172->setTranslation(new float[]{48.0,60.4,0.0});
SoTouchSensor* SoTouchSensor173 = new SoTouchSensor();
SoTouchSensor173->setDescription(QString("TSJinBrowLowerer"));
SoTouchSensor173->setDEF(QString("JinBrowLowerer_Sensor"));
SoTransform172->addChild(*SoTouchSensor173);

SoShape* SoShape174 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance175 = new SoVRMLAppearance();
SoMaterial* SoMaterial176 = new SoMaterial();
SoMaterial176->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance175->addChild(*SoMaterial176);

SoShape174->addChild(*SoVRMLAppearance175);

SoText* SoText177 = new SoText();
SoText177->setString(new QString[]{QString("JinBrowLowerer")}, 1);
SoFontStyle* SoFontStyle178 = new SoFontStyle();
SoFontStyle178->setSize(2.4);
SoFontStyle178->setSpacing(1.2);
SoFontStyle178->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText177->setFontStyle(*SoFontStyle178);

SoShape174->setGeometry(*SoText177);

SoTransform172->addChild(*SoShape174);

SoShape* SoShape179 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance180 = new SoVRMLAppearance();
SoMaterial* SoMaterial181 = new SoMaterial();
SoMaterial181->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance180->addChild(*SoMaterial181);

SoShape179->addChild(*SoVRMLAppearance180);

SoIndexedFaceSet* SoIndexedFaceSet182 = new SoIndexedFaceSet();
SoIndexedFaceSet182->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate183 = new SoCoordinate();
SoCoordinate183->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet182->setCoord(*SoCoordinate183);

SoShape179->setGeometry(*SoIndexedFaceSet182);

SoTransform172->addChild(*SoShape179);

SoGroup6->addChild(*SoTransform172);

SoROUTE* SoROUTE184 = new SoROUTE();
SoROUTE184->setFromNode(QString("JinBrowLowerer_Sensor"));
SoROUTE184->setFromField(QString("touchTime"));
SoROUTE184->setToNode(QString("Choice1"));
SoROUTE184->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE184);

SoROUTE* SoROUTE185 = new SoROUTE();
SoROUTE185->setFromNode(QString("Choice1"));
SoROUTE185->setFromField(QString("choice"));
SoROUTE185->setToNode(QString("SceneSwitcher"));
SoROUTE185->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE185);

SoTransform* SoTransform186 = new SoTransform();
SoTransform186->setTranslation(new float[]{48.0,57.39999999999999,0.0});
SoTouchSensor* SoTouchSensor187 = new SoTouchSensor();
SoTouchSensor187->setDescription(QString("TSJinCheekPuffer"));
SoTouchSensor187->setDEF(QString("JinCheekPuffer_Sensor"));
SoTransform186->addChild(*SoTouchSensor187);

SoShape* SoShape188 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance189 = new SoVRMLAppearance();
SoMaterial* SoMaterial190 = new SoMaterial();
SoMaterial190->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance189->addChild(*SoMaterial190);

SoShape188->addChild(*SoVRMLAppearance189);

SoText* SoText191 = new SoText();
SoText191->setString(new QString[]{QString("JinCheekPuffer")}, 1);
SoFontStyle* SoFontStyle192 = new SoFontStyle();
SoFontStyle192->setSize(2.4);
SoFontStyle192->setSpacing(1.2);
SoFontStyle192->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText191->setFontStyle(*SoFontStyle192);

SoShape188->setGeometry(*SoText191);

SoTransform186->addChild(*SoShape188);

SoShape* SoShape193 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance194 = new SoVRMLAppearance();
SoMaterial* SoMaterial195 = new SoMaterial();
SoMaterial195->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance194->addChild(*SoMaterial195);

SoShape193->addChild(*SoVRMLAppearance194);

SoIndexedFaceSet* SoIndexedFaceSet196 = new SoIndexedFaceSet();
SoIndexedFaceSet196->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate197 = new SoCoordinate();
SoCoordinate197->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet196->setCoord(*SoCoordinate197);

SoShape193->setGeometry(*SoIndexedFaceSet196);

SoTransform186->addChild(*SoShape193);

SoGroup6->addChild(*SoTransform186);

SoROUTE* SoROUTE198 = new SoROUTE();
SoROUTE198->setFromNode(QString("JinCheekPuffer_Sensor"));
SoROUTE198->setFromField(QString("touchTime"));
SoROUTE198->setToNode(QString("Choice2"));
SoROUTE198->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE198);

SoROUTE* SoROUTE199 = new SoROUTE();
SoROUTE199->setFromNode(QString("Choice2"));
SoROUTE199->setFromField(QString("choice"));
SoROUTE199->setToNode(QString("SceneSwitcher"));
SoROUTE199->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE199);

SoTransform* SoTransform200 = new SoTransform();
SoTransform200->setTranslation(new float[]{48.0,54.39999999999999,0.0});
SoTouchSensor* SoTouchSensor201 = new SoTouchSensor();
SoTouchSensor201->setDescription(QString("TSJinCheekRaiser"));
SoTouchSensor201->setDEF(QString("JinCheekRaiser_Sensor"));
SoTransform200->addChild(*SoTouchSensor201);

SoShape* SoShape202 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance203 = new SoVRMLAppearance();
SoMaterial* SoMaterial204 = new SoMaterial();
SoMaterial204->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance203->addChild(*SoMaterial204);

SoShape202->addChild(*SoVRMLAppearance203);

SoText* SoText205 = new SoText();
SoText205->setString(new QString[]{QString("JinCheekRaiser")}, 1);
SoFontStyle* SoFontStyle206 = new SoFontStyle();
SoFontStyle206->setSize(2.4);
SoFontStyle206->setSpacing(1.2);
SoFontStyle206->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText205->setFontStyle(*SoFontStyle206);

SoShape202->setGeometry(*SoText205);

SoTransform200->addChild(*SoShape202);

SoShape* SoShape207 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance208 = new SoVRMLAppearance();
SoMaterial* SoMaterial209 = new SoMaterial();
SoMaterial209->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance208->addChild(*SoMaterial209);

SoShape207->addChild(*SoVRMLAppearance208);

SoIndexedFaceSet* SoIndexedFaceSet210 = new SoIndexedFaceSet();
SoIndexedFaceSet210->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate211 = new SoCoordinate();
SoCoordinate211->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet210->setCoord(*SoCoordinate211);

SoShape207->setGeometry(*SoIndexedFaceSet210);

SoTransform200->addChild(*SoShape207);

SoGroup6->addChild(*SoTransform200);

SoROUTE* SoROUTE212 = new SoROUTE();
SoROUTE212->setFromNode(QString("JinCheekRaiser_Sensor"));
SoROUTE212->setFromField(QString("touchTime"));
SoROUTE212->setToNode(QString("Choice3"));
SoROUTE212->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE212);

SoROUTE* SoROUTE213 = new SoROUTE();
SoROUTE213->setFromNode(QString("Choice3"));
SoROUTE213->setFromField(QString("choice"));
SoROUTE213->setToNode(QString("SceneSwitcher"));
SoROUTE213->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE213);

SoTransform* SoTransform214 = new SoTransform();
SoTransform214->setTranslation(new float[]{48.0,51.39999999999999,0.0});
SoTouchSensor* SoTouchSensor215 = new SoTouchSensor();
SoTouchSensor215->setDescription(QString("TSJinChinRaiser"));
SoTouchSensor215->setDEF(QString("JinChinRaiser_Sensor"));
SoTransform214->addChild(*SoTouchSensor215);

SoShape* SoShape216 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance217 = new SoVRMLAppearance();
SoMaterial* SoMaterial218 = new SoMaterial();
SoMaterial218->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance217->addChild(*SoMaterial218);

SoShape216->addChild(*SoVRMLAppearance217);

SoText* SoText219 = new SoText();
SoText219->setString(new QString[]{QString("JinChinRaiser")}, 1);
SoFontStyle* SoFontStyle220 = new SoFontStyle();
SoFontStyle220->setSize(2.4);
SoFontStyle220->setSpacing(1.2);
SoFontStyle220->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText219->setFontStyle(*SoFontStyle220);

SoShape216->setGeometry(*SoText219);

SoTransform214->addChild(*SoShape216);

SoShape* SoShape221 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance222 = new SoVRMLAppearance();
SoMaterial* SoMaterial223 = new SoMaterial();
SoMaterial223->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance222->addChild(*SoMaterial223);

SoShape221->addChild(*SoVRMLAppearance222);

SoIndexedFaceSet* SoIndexedFaceSet224 = new SoIndexedFaceSet();
SoIndexedFaceSet224->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate225 = new SoCoordinate();
SoCoordinate225->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet224->setCoord(*SoCoordinate225);

SoShape221->setGeometry(*SoIndexedFaceSet224);

SoTransform214->addChild(*SoShape221);

SoGroup6->addChild(*SoTransform214);

SoROUTE* SoROUTE226 = new SoROUTE();
SoROUTE226->setFromNode(QString("JinChinRaiser_Sensor"));
SoROUTE226->setFromField(QString("touchTime"));
SoROUTE226->setToNode(QString("Choice4"));
SoROUTE226->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE226);

SoROUTE* SoROUTE227 = new SoROUTE();
SoROUTE227->setFromNode(QString("Choice4"));
SoROUTE227->setFromField(QString("choice"));
SoROUTE227->setToNode(QString("SceneSwitcher"));
SoROUTE227->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE227);

SoTransform* SoTransform228 = new SoTransform();
SoTransform228->setTranslation(new float[]{48.0,48.39999999999999,0.0});
SoTouchSensor* SoTouchSensor229 = new SoTouchSensor();
SoTouchSensor229->setDescription(QString("TSJinDimpler"));
SoTouchSensor229->setDEF(QString("JinDimpler_Sensor"));
SoTransform228->addChild(*SoTouchSensor229);

SoShape* SoShape230 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance231 = new SoVRMLAppearance();
SoMaterial* SoMaterial232 = new SoMaterial();
SoMaterial232->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance231->addChild(*SoMaterial232);

SoShape230->addChild(*SoVRMLAppearance231);

SoText* SoText233 = new SoText();
SoText233->setString(new QString[]{QString("JinDimpler")}, 1);
SoFontStyle* SoFontStyle234 = new SoFontStyle();
SoFontStyle234->setSize(2.4);
SoFontStyle234->setSpacing(1.2);
SoFontStyle234->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText233->setFontStyle(*SoFontStyle234);

SoShape230->setGeometry(*SoText233);

SoTransform228->addChild(*SoShape230);

SoShape* SoShape235 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance236 = new SoVRMLAppearance();
SoMaterial* SoMaterial237 = new SoMaterial();
SoMaterial237->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance236->addChild(*SoMaterial237);

SoShape235->addChild(*SoVRMLAppearance236);

SoIndexedFaceSet* SoIndexedFaceSet238 = new SoIndexedFaceSet();
SoIndexedFaceSet238->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate239 = new SoCoordinate();
SoCoordinate239->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet238->setCoord(*SoCoordinate239);

SoShape235->setGeometry(*SoIndexedFaceSet238);

SoTransform228->addChild(*SoShape235);

SoGroup6->addChild(*SoTransform228);

SoROUTE* SoROUTE240 = new SoROUTE();
SoROUTE240->setFromNode(QString("JinDimpler_Sensor"));
SoROUTE240->setFromField(QString("touchTime"));
SoROUTE240->setToNode(QString("Choice5"));
SoROUTE240->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE240);

SoROUTE* SoROUTE241 = new SoROUTE();
SoROUTE241->setFromNode(QString("Choice5"));
SoROUTE241->setFromField(QString("choice"));
SoROUTE241->setToNode(QString("SceneSwitcher"));
SoROUTE241->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE241);

SoTransform* SoTransform242 = new SoTransform();
SoTransform242->setTranslation(new float[]{48.0,45.39999999999999,0.0});
SoTouchSensor* SoTouchSensor243 = new SoTouchSensor();
SoTouchSensor243->setDescription(QString("TSJinEyesClosed"));
SoTouchSensor243->setDEF(QString("JinEyesClosed_Sensor"));
SoTransform242->addChild(*SoTouchSensor243);

SoShape* SoShape244 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance245 = new SoVRMLAppearance();
SoMaterial* SoMaterial246 = new SoMaterial();
SoMaterial246->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance245->addChild(*SoMaterial246);

SoShape244->addChild(*SoVRMLAppearance245);

SoText* SoText247 = new SoText();
SoText247->setString(new QString[]{QString("JinEyesClosed")}, 1);
SoFontStyle* SoFontStyle248 = new SoFontStyle();
SoFontStyle248->setSize(2.4);
SoFontStyle248->setSpacing(1.2);
SoFontStyle248->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText247->setFontStyle(*SoFontStyle248);

SoShape244->setGeometry(*SoText247);

SoTransform242->addChild(*SoShape244);

SoShape* SoShape249 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance250 = new SoVRMLAppearance();
SoMaterial* SoMaterial251 = new SoMaterial();
SoMaterial251->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance250->addChild(*SoMaterial251);

SoShape249->addChild(*SoVRMLAppearance250);

SoIndexedFaceSet* SoIndexedFaceSet252 = new SoIndexedFaceSet();
SoIndexedFaceSet252->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate253 = new SoCoordinate();
SoCoordinate253->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet252->setCoord(*SoCoordinate253);

SoShape249->setGeometry(*SoIndexedFaceSet252);

SoTransform242->addChild(*SoShape249);

SoGroup6->addChild(*SoTransform242);

SoROUTE* SoROUTE254 = new SoROUTE();
SoROUTE254->setFromNode(QString("JinEyesClosed_Sensor"));
SoROUTE254->setFromField(QString("touchTime"));
SoROUTE254->setToNode(QString("Choice6"));
SoROUTE254->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE254);

SoROUTE* SoROUTE255 = new SoROUTE();
SoROUTE255->setFromNode(QString("Choice6"));
SoROUTE255->setFromField(QString("choice"));
SoROUTE255->setToNode(QString("SceneSwitcher"));
SoROUTE255->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE255);

SoTransform* SoTransform256 = new SoTransform();
SoTransform256->setTranslation(new float[]{48.0,42.39999999999999,0.0});
SoTouchSensor* SoTouchSensor257 = new SoTouchSensor();
SoTouchSensor257->setDescription(QString("TSJinInnerBrowRaiser"));
SoTouchSensor257->setDEF(QString("JinInnerBrowRaiser_Sensor"));
SoTransform256->addChild(*SoTouchSensor257);

SoShape* SoShape258 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance259 = new SoVRMLAppearance();
SoMaterial* SoMaterial260 = new SoMaterial();
SoMaterial260->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance259->addChild(*SoMaterial260);

SoShape258->addChild(*SoVRMLAppearance259);

SoText* SoText261 = new SoText();
SoText261->setString(new QString[]{QString("JinInnerBrowRaiser")}, 1);
SoFontStyle* SoFontStyle262 = new SoFontStyle();
SoFontStyle262->setSize(2.4);
SoFontStyle262->setSpacing(1.2);
SoFontStyle262->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText261->setFontStyle(*SoFontStyle262);

SoShape258->setGeometry(*SoText261);

SoTransform256->addChild(*SoShape258);

SoShape* SoShape263 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance264 = new SoVRMLAppearance();
SoMaterial* SoMaterial265 = new SoMaterial();
SoMaterial265->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance264->addChild(*SoMaterial265);

SoShape263->addChild(*SoVRMLAppearance264);

SoIndexedFaceSet* SoIndexedFaceSet266 = new SoIndexedFaceSet();
SoIndexedFaceSet266->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate267 = new SoCoordinate();
SoCoordinate267->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet266->setCoord(*SoCoordinate267);

SoShape263->setGeometry(*SoIndexedFaceSet266);

SoTransform256->addChild(*SoShape263);

SoGroup6->addChild(*SoTransform256);

SoROUTE* SoROUTE268 = new SoROUTE();
SoROUTE268->setFromNode(QString("JinInnerBrowRaiser_Sensor"));
SoROUTE268->setFromField(QString("touchTime"));
SoROUTE268->setToNode(QString("Choice7"));
SoROUTE268->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE268);

SoROUTE* SoROUTE269 = new SoROUTE();
SoROUTE269->setFromNode(QString("Choice7"));
SoROUTE269->setFromField(QString("choice"));
SoROUTE269->setToNode(QString("SceneSwitcher"));
SoROUTE269->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE269);

SoTransform* SoTransform270 = new SoTransform();
SoTransform270->setTranslation(new float[]{48.0,39.39999999999999,0.0});
SoTouchSensor* SoTouchSensor271 = new SoTouchSensor();
SoTouchSensor271->setDescription(QString("TSJinJawDrop"));
SoTouchSensor271->setDEF(QString("JinJawDrop_Sensor"));
SoTransform270->addChild(*SoTouchSensor271);

SoShape* SoShape272 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance273 = new SoVRMLAppearance();
SoMaterial* SoMaterial274 = new SoMaterial();
SoMaterial274->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance273->addChild(*SoMaterial274);

SoShape272->addChild(*SoVRMLAppearance273);

SoText* SoText275 = new SoText();
SoText275->setString(new QString[]{QString("JinJawDrop")}, 1);
SoFontStyle* SoFontStyle276 = new SoFontStyle();
SoFontStyle276->setSize(2.4);
SoFontStyle276->setSpacing(1.2);
SoFontStyle276->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText275->setFontStyle(*SoFontStyle276);

SoShape272->setGeometry(*SoText275);

SoTransform270->addChild(*SoShape272);

SoShape* SoShape277 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance278 = new SoVRMLAppearance();
SoMaterial* SoMaterial279 = new SoMaterial();
SoMaterial279->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance278->addChild(*SoMaterial279);

SoShape277->addChild(*SoVRMLAppearance278);

SoIndexedFaceSet* SoIndexedFaceSet280 = new SoIndexedFaceSet();
SoIndexedFaceSet280->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate281 = new SoCoordinate();
SoCoordinate281->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet280->setCoord(*SoCoordinate281);

SoShape277->setGeometry(*SoIndexedFaceSet280);

SoTransform270->addChild(*SoShape277);

SoGroup6->addChild(*SoTransform270);

SoROUTE* SoROUTE282 = new SoROUTE();
SoROUTE282->setFromNode(QString("JinJawDrop_Sensor"));
SoROUTE282->setFromField(QString("touchTime"));
SoROUTE282->setToNode(QString("Choice8"));
SoROUTE282->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE282);

SoROUTE* SoROUTE283 = new SoROUTE();
SoROUTE283->setFromNode(QString("Choice8"));
SoROUTE283->setFromField(QString("choice"));
SoROUTE283->setToNode(QString("SceneSwitcher"));
SoROUTE283->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE283);

SoTransform* SoTransform284 = new SoTransform();
SoTransform284->setTranslation(new float[]{48.0,36.39999999999999,0.0});
SoTouchSensor* SoTouchSensor285 = new SoTouchSensor();
SoTouchSensor285->setDescription(QString("TSJinLidDroop"));
SoTouchSensor285->setDEF(QString("JinLidDroop_Sensor"));
SoTransform284->addChild(*SoTouchSensor285);

SoShape* SoShape286 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance287 = new SoVRMLAppearance();
SoMaterial* SoMaterial288 = new SoMaterial();
SoMaterial288->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance287->addChild(*SoMaterial288);

SoShape286->addChild(*SoVRMLAppearance287);

SoText* SoText289 = new SoText();
SoText289->setString(new QString[]{QString("JinLidDroop")}, 1);
SoFontStyle* SoFontStyle290 = new SoFontStyle();
SoFontStyle290->setSize(2.4);
SoFontStyle290->setSpacing(1.2);
SoFontStyle290->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText289->setFontStyle(*SoFontStyle290);

SoShape286->setGeometry(*SoText289);

SoTransform284->addChild(*SoShape286);

SoShape* SoShape291 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance292 = new SoVRMLAppearance();
SoMaterial* SoMaterial293 = new SoMaterial();
SoMaterial293->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance292->addChild(*SoMaterial293);

SoShape291->addChild(*SoVRMLAppearance292);

SoIndexedFaceSet* SoIndexedFaceSet294 = new SoIndexedFaceSet();
SoIndexedFaceSet294->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate295 = new SoCoordinate();
SoCoordinate295->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet294->setCoord(*SoCoordinate295);

SoShape291->setGeometry(*SoIndexedFaceSet294);

SoTransform284->addChild(*SoShape291);

SoGroup6->addChild(*SoTransform284);

SoROUTE* SoROUTE296 = new SoROUTE();
SoROUTE296->setFromNode(QString("JinLidDroop_Sensor"));
SoROUTE296->setFromField(QString("touchTime"));
SoROUTE296->setToNode(QString("Choice9"));
SoROUTE296->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE296);

SoROUTE* SoROUTE297 = new SoROUTE();
SoROUTE297->setFromNode(QString("Choice9"));
SoROUTE297->setFromField(QString("choice"));
SoROUTE297->setToNode(QString("SceneSwitcher"));
SoROUTE297->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE297);

SoTransform* SoTransform298 = new SoTransform();
SoTransform298->setTranslation(new float[]{48.0,33.39999999999999,0.0});
SoTouchSensor* SoTouchSensor299 = new SoTouchSensor();
SoTouchSensor299->setDescription(QString("TSJinLidTightener"));
SoTouchSensor299->setDEF(QString("JinLidTightener_Sensor"));
SoTransform298->addChild(*SoTouchSensor299);

SoShape* SoShape300 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance301 = new SoVRMLAppearance();
SoMaterial* SoMaterial302 = new SoMaterial();
SoMaterial302->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance301->addChild(*SoMaterial302);

SoShape300->addChild(*SoVRMLAppearance301);

SoText* SoText303 = new SoText();
SoText303->setString(new QString[]{QString("JinLidTightener")}, 1);
SoFontStyle* SoFontStyle304 = new SoFontStyle();
SoFontStyle304->setSize(2.4);
SoFontStyle304->setSpacing(1.2);
SoFontStyle304->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText303->setFontStyle(*SoFontStyle304);

SoShape300->setGeometry(*SoText303);

SoTransform298->addChild(*SoShape300);

SoShape* SoShape305 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance306 = new SoVRMLAppearance();
SoMaterial* SoMaterial307 = new SoMaterial();
SoMaterial307->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance306->addChild(*SoMaterial307);

SoShape305->addChild(*SoVRMLAppearance306);

SoIndexedFaceSet* SoIndexedFaceSet308 = new SoIndexedFaceSet();
SoIndexedFaceSet308->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate309 = new SoCoordinate();
SoCoordinate309->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet308->setCoord(*SoCoordinate309);

SoShape305->setGeometry(*SoIndexedFaceSet308);

SoTransform298->addChild(*SoShape305);

SoGroup6->addChild(*SoTransform298);

SoROUTE* SoROUTE310 = new SoROUTE();
SoROUTE310->setFromNode(QString("JinLidTightener_Sensor"));
SoROUTE310->setFromField(QString("touchTime"));
SoROUTE310->setToNode(QString("Choice10"));
SoROUTE310->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE310);

SoROUTE* SoROUTE311 = new SoROUTE();
SoROUTE311->setFromNode(QString("Choice10"));
SoROUTE311->setFromField(QString("choice"));
SoROUTE311->setToNode(QString("SceneSwitcher"));
SoROUTE311->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE311);

SoTransform* SoTransform312 = new SoTransform();
SoTransform312->setTranslation(new float[]{48.0,30.399999999999995,0.0});
SoTouchSensor* SoTouchSensor313 = new SoTouchSensor();
SoTouchSensor313->setDescription(QString("TSJinLipCornerDepressor"));
SoTouchSensor313->setDEF(QString("JinLipCornerDepressor_Sensor"));
SoTransform312->addChild(*SoTouchSensor313);

SoShape* SoShape314 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance315 = new SoVRMLAppearance();
SoMaterial* SoMaterial316 = new SoMaterial();
SoMaterial316->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance315->addChild(*SoMaterial316);

SoShape314->addChild(*SoVRMLAppearance315);

SoText* SoText317 = new SoText();
SoText317->setString(new QString[]{QString("JinLipCornerDepressor")}, 1);
SoFontStyle* SoFontStyle318 = new SoFontStyle();
SoFontStyle318->setSize(2.4);
SoFontStyle318->setSpacing(1.2);
SoFontStyle318->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText317->setFontStyle(*SoFontStyle318);

SoShape314->setGeometry(*SoText317);

SoTransform312->addChild(*SoShape314);

SoShape* SoShape319 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance320 = new SoVRMLAppearance();
SoMaterial* SoMaterial321 = new SoMaterial();
SoMaterial321->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance320->addChild(*SoMaterial321);

SoShape319->addChild(*SoVRMLAppearance320);

SoIndexedFaceSet* SoIndexedFaceSet322 = new SoIndexedFaceSet();
SoIndexedFaceSet322->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate323 = new SoCoordinate();
SoCoordinate323->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet322->setCoord(*SoCoordinate323);

SoShape319->setGeometry(*SoIndexedFaceSet322);

SoTransform312->addChild(*SoShape319);

SoGroup6->addChild(*SoTransform312);

SoROUTE* SoROUTE324 = new SoROUTE();
SoROUTE324->setFromNode(QString("JinLipCornerDepressor_Sensor"));
SoROUTE324->setFromField(QString("touchTime"));
SoROUTE324->setToNode(QString("Choice11"));
SoROUTE324->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE324);

SoROUTE* SoROUTE325 = new SoROUTE();
SoROUTE325->setFromNode(QString("Choice11"));
SoROUTE325->setFromField(QString("choice"));
SoROUTE325->setToNode(QString("SceneSwitcher"));
SoROUTE325->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE325);

SoTransform* SoTransform326 = new SoTransform();
SoTransform326->setTranslation(new float[]{48.0,27.399999999999995,0.0});
SoTouchSensor* SoTouchSensor327 = new SoTouchSensor();
SoTouchSensor327->setDescription(QString("TSJinLipCornerPuller"));
SoTouchSensor327->setDEF(QString("JinLipCornerPuller_Sensor"));
SoTransform326->addChild(*SoTouchSensor327);

SoShape* SoShape328 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance329 = new SoVRMLAppearance();
SoMaterial* SoMaterial330 = new SoMaterial();
SoMaterial330->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance329->addChild(*SoMaterial330);

SoShape328->addChild(*SoVRMLAppearance329);

SoText* SoText331 = new SoText();
SoText331->setString(new QString[]{QString("JinLipCornerPuller")}, 1);
SoFontStyle* SoFontStyle332 = new SoFontStyle();
SoFontStyle332->setSize(2.4);
SoFontStyle332->setSpacing(1.2);
SoFontStyle332->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText331->setFontStyle(*SoFontStyle332);

SoShape328->setGeometry(*SoText331);

SoTransform326->addChild(*SoShape328);

SoShape* SoShape333 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance334 = new SoVRMLAppearance();
SoMaterial* SoMaterial335 = new SoMaterial();
SoMaterial335->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance334->addChild(*SoMaterial335);

SoShape333->addChild(*SoVRMLAppearance334);

SoIndexedFaceSet* SoIndexedFaceSet336 = new SoIndexedFaceSet();
SoIndexedFaceSet336->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate337 = new SoCoordinate();
SoCoordinate337->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet336->setCoord(*SoCoordinate337);

SoShape333->setGeometry(*SoIndexedFaceSet336);

SoTransform326->addChild(*SoShape333);

SoGroup6->addChild(*SoTransform326);

SoROUTE* SoROUTE338 = new SoROUTE();
SoROUTE338->setFromNode(QString("JinLipCornerPuller_Sensor"));
SoROUTE338->setFromField(QString("touchTime"));
SoROUTE338->setToNode(QString("Choice12"));
SoROUTE338->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE338);

SoROUTE* SoROUTE339 = new SoROUTE();
SoROUTE339->setFromNode(QString("Choice12"));
SoROUTE339->setFromField(QString("choice"));
SoROUTE339->setToNode(QString("SceneSwitcher"));
SoROUTE339->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE339);

SoTransform* SoTransform340 = new SoTransform();
SoTransform340->setTranslation(new float[]{48.0,24.399999999999995,0.0});
SoTouchSensor* SoTouchSensor341 = new SoTouchSensor();
SoTouchSensor341->setDescription(QString("TSJinLipFunneler"));
SoTouchSensor341->setDEF(QString("JinLipFunneler_Sensor"));
SoTransform340->addChild(*SoTouchSensor341);

SoShape* SoShape342 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance343 = new SoVRMLAppearance();
SoMaterial* SoMaterial344 = new SoMaterial();
SoMaterial344->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance343->addChild(*SoMaterial344);

SoShape342->addChild(*SoVRMLAppearance343);

SoText* SoText345 = new SoText();
SoText345->setString(new QString[]{QString("JinLipFunneler")}, 1);
SoFontStyle* SoFontStyle346 = new SoFontStyle();
SoFontStyle346->setSize(2.4);
SoFontStyle346->setSpacing(1.2);
SoFontStyle346->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText345->setFontStyle(*SoFontStyle346);

SoShape342->setGeometry(*SoText345);

SoTransform340->addChild(*SoShape342);

SoShape* SoShape347 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance348 = new SoVRMLAppearance();
SoMaterial* SoMaterial349 = new SoMaterial();
SoMaterial349->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance348->addChild(*SoMaterial349);

SoShape347->addChild(*SoVRMLAppearance348);

SoIndexedFaceSet* SoIndexedFaceSet350 = new SoIndexedFaceSet();
SoIndexedFaceSet350->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate351 = new SoCoordinate();
SoCoordinate351->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet350->setCoord(*SoCoordinate351);

SoShape347->setGeometry(*SoIndexedFaceSet350);

SoTransform340->addChild(*SoShape347);

SoGroup6->addChild(*SoTransform340);

SoROUTE* SoROUTE352 = new SoROUTE();
SoROUTE352->setFromNode(QString("JinLipFunneler_Sensor"));
SoROUTE352->setFromField(QString("touchTime"));
SoROUTE352->setToNode(QString("Choice13"));
SoROUTE352->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE352);

SoROUTE* SoROUTE353 = new SoROUTE();
SoROUTE353->setFromNode(QString("Choice13"));
SoROUTE353->setFromField(QString("choice"));
SoROUTE353->setToNode(QString("SceneSwitcher"));
SoROUTE353->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE353);

SoTransform* SoTransform354 = new SoTransform();
SoTransform354->setTranslation(new float[]{48.0,21.399999999999995,0.0});
SoTouchSensor* SoTouchSensor355 = new SoTouchSensor();
SoTouchSensor355->setDescription(QString("TSJinLipPressor"));
SoTouchSensor355->setDEF(QString("JinLipPressor_Sensor"));
SoTransform354->addChild(*SoTouchSensor355);

SoShape* SoShape356 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance357 = new SoVRMLAppearance();
SoMaterial* SoMaterial358 = new SoMaterial();
SoMaterial358->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance357->addChild(*SoMaterial358);

SoShape356->addChild(*SoVRMLAppearance357);

SoText* SoText359 = new SoText();
SoText359->setString(new QString[]{QString("JinLipPressor")}, 1);
SoFontStyle* SoFontStyle360 = new SoFontStyle();
SoFontStyle360->setSize(2.4);
SoFontStyle360->setSpacing(1.2);
SoFontStyle360->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText359->setFontStyle(*SoFontStyle360);

SoShape356->setGeometry(*SoText359);

SoTransform354->addChild(*SoShape356);

SoShape* SoShape361 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance362 = new SoVRMLAppearance();
SoMaterial* SoMaterial363 = new SoMaterial();
SoMaterial363->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance362->addChild(*SoMaterial363);

SoShape361->addChild(*SoVRMLAppearance362);

SoIndexedFaceSet* SoIndexedFaceSet364 = new SoIndexedFaceSet();
SoIndexedFaceSet364->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate365 = new SoCoordinate();
SoCoordinate365->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet364->setCoord(*SoCoordinate365);

SoShape361->setGeometry(*SoIndexedFaceSet364);

SoTransform354->addChild(*SoShape361);

SoGroup6->addChild(*SoTransform354);

SoROUTE* SoROUTE366 = new SoROUTE();
SoROUTE366->setFromNode(QString("JinLipPressor_Sensor"));
SoROUTE366->setFromField(QString("touchTime"));
SoROUTE366->setToNode(QString("Choice14"));
SoROUTE366->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE366);

SoROUTE* SoROUTE367 = new SoROUTE();
SoROUTE367->setFromNode(QString("Choice14"));
SoROUTE367->setFromField(QString("choice"));
SoROUTE367->setToNode(QString("SceneSwitcher"));
SoROUTE367->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE367);

SoTransform* SoTransform368 = new SoTransform();
SoTransform368->setTranslation(new float[]{48.0,18.4,0.0});
SoTouchSensor* SoTouchSensor369 = new SoTouchSensor();
SoTouchSensor369->setDescription(QString("TSJinLipPuckerer"));
SoTouchSensor369->setDEF(QString("JinLipPuckerer_Sensor"));
SoTransform368->addChild(*SoTouchSensor369);

SoShape* SoShape370 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance371 = new SoVRMLAppearance();
SoMaterial* SoMaterial372 = new SoMaterial();
SoMaterial372->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance371->addChild(*SoMaterial372);

SoShape370->addChild(*SoVRMLAppearance371);

SoText* SoText373 = new SoText();
SoText373->setString(new QString[]{QString("JinLipPuckerer")}, 1);
SoFontStyle* SoFontStyle374 = new SoFontStyle();
SoFontStyle374->setSize(2.4);
SoFontStyle374->setSpacing(1.2);
SoFontStyle374->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText373->setFontStyle(*SoFontStyle374);

SoShape370->setGeometry(*SoText373);

SoTransform368->addChild(*SoShape370);

SoShape* SoShape375 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance376 = new SoVRMLAppearance();
SoMaterial* SoMaterial377 = new SoMaterial();
SoMaterial377->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance376->addChild(*SoMaterial377);

SoShape375->addChild(*SoVRMLAppearance376);

SoIndexedFaceSet* SoIndexedFaceSet378 = new SoIndexedFaceSet();
SoIndexedFaceSet378->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate379 = new SoCoordinate();
SoCoordinate379->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet378->setCoord(*SoCoordinate379);

SoShape375->setGeometry(*SoIndexedFaceSet378);

SoTransform368->addChild(*SoShape375);

SoGroup6->addChild(*SoTransform368);

SoROUTE* SoROUTE380 = new SoROUTE();
SoROUTE380->setFromNode(QString("JinLipPuckerer_Sensor"));
SoROUTE380->setFromField(QString("touchTime"));
SoROUTE380->setToNode(QString("Choice15"));
SoROUTE380->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE380);

SoROUTE* SoROUTE381 = new SoROUTE();
SoROUTE381->setFromNode(QString("Choice15"));
SoROUTE381->setFromField(QString("choice"));
SoROUTE381->setToNode(QString("SceneSwitcher"));
SoROUTE381->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE381);

SoTransform* SoTransform382 = new SoTransform();
SoTransform382->setTranslation(new float[]{48.0,15.399999999999997,0.0});
SoTouchSensor* SoTouchSensor383 = new SoTouchSensor();
SoTouchSensor383->setDescription(QString("TSJinLipsPart"));
SoTouchSensor383->setDEF(QString("JinLipsPart_Sensor"));
SoTransform382->addChild(*SoTouchSensor383);

SoShape* SoShape384 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance385 = new SoVRMLAppearance();
SoMaterial* SoMaterial386 = new SoMaterial();
SoMaterial386->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance385->addChild(*SoMaterial386);

SoShape384->addChild(*SoVRMLAppearance385);

SoText* SoText387 = new SoText();
SoText387->setString(new QString[]{QString("JinLipsPart")}, 1);
SoFontStyle* SoFontStyle388 = new SoFontStyle();
SoFontStyle388->setSize(2.4);
SoFontStyle388->setSpacing(1.2);
SoFontStyle388->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText387->setFontStyle(*SoFontStyle388);

SoShape384->setGeometry(*SoText387);

SoTransform382->addChild(*SoShape384);

SoShape* SoShape389 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance390 = new SoVRMLAppearance();
SoMaterial* SoMaterial391 = new SoMaterial();
SoMaterial391->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance390->addChild(*SoMaterial391);

SoShape389->addChild(*SoVRMLAppearance390);

SoIndexedFaceSet* SoIndexedFaceSet392 = new SoIndexedFaceSet();
SoIndexedFaceSet392->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate393 = new SoCoordinate();
SoCoordinate393->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet392->setCoord(*SoCoordinate393);

SoShape389->setGeometry(*SoIndexedFaceSet392);

SoTransform382->addChild(*SoShape389);

SoGroup6->addChild(*SoTransform382);

SoROUTE* SoROUTE394 = new SoROUTE();
SoROUTE394->setFromNode(QString("JinLipsPart_Sensor"));
SoROUTE394->setFromField(QString("touchTime"));
SoROUTE394->setToNode(QString("Choice16"));
SoROUTE394->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE394);

SoROUTE* SoROUTE395 = new SoROUTE();
SoROUTE395->setFromNode(QString("Choice16"));
SoROUTE395->setFromField(QString("choice"));
SoROUTE395->setToNode(QString("SceneSwitcher"));
SoROUTE395->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE395);

SoTransform* SoTransform396 = new SoTransform();
SoTransform396->setTranslation(new float[]{48.0,12.399999999999999,0.0});
SoTouchSensor* SoTouchSensor397 = new SoTouchSensor();
SoTouchSensor397->setDescription(QString("TSJinLipStretcher"));
SoTouchSensor397->setDEF(QString("JinLipStretcher_Sensor"));
SoTransform396->addChild(*SoTouchSensor397);

SoShape* SoShape398 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance399 = new SoVRMLAppearance();
SoMaterial* SoMaterial400 = new SoMaterial();
SoMaterial400->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance399->addChild(*SoMaterial400);

SoShape398->addChild(*SoVRMLAppearance399);

SoText* SoText401 = new SoText();
SoText401->setString(new QString[]{QString("JinLipStretcher")}, 1);
SoFontStyle* SoFontStyle402 = new SoFontStyle();
SoFontStyle402->setSize(2.4);
SoFontStyle402->setSpacing(1.2);
SoFontStyle402->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText401->setFontStyle(*SoFontStyle402);

SoShape398->setGeometry(*SoText401);

SoTransform396->addChild(*SoShape398);

SoShape* SoShape403 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance404 = new SoVRMLAppearance();
SoMaterial* SoMaterial405 = new SoMaterial();
SoMaterial405->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance404->addChild(*SoMaterial405);

SoShape403->addChild(*SoVRMLAppearance404);

SoIndexedFaceSet* SoIndexedFaceSet406 = new SoIndexedFaceSet();
SoIndexedFaceSet406->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate407 = new SoCoordinate();
SoCoordinate407->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet406->setCoord(*SoCoordinate407);

SoShape403->setGeometry(*SoIndexedFaceSet406);

SoTransform396->addChild(*SoShape403);

SoGroup6->addChild(*SoTransform396);

SoROUTE* SoROUTE408 = new SoROUTE();
SoROUTE408->setFromNode(QString("JinLipStretcher_Sensor"));
SoROUTE408->setFromField(QString("touchTime"));
SoROUTE408->setToNode(QString("Choice17"));
SoROUTE408->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE408);

SoROUTE* SoROUTE409 = new SoROUTE();
SoROUTE409->setFromNode(QString("Choice17"));
SoROUTE409->setFromField(QString("choice"));
SoROUTE409->setToNode(QString("SceneSwitcher"));
SoROUTE409->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE409);

SoTransform* SoTransform410 = new SoTransform();
SoTransform410->setTranslation(new float[]{48.0,9.399999999999999,0.0});
SoTouchSensor* SoTouchSensor411 = new SoTouchSensor();
SoTouchSensor411->setDescription(QString("TSJinLipSuck"));
SoTouchSensor411->setDEF(QString("JinLipSuck_Sensor"));
SoTransform410->addChild(*SoTouchSensor411);

SoShape* SoShape412 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance413 = new SoVRMLAppearance();
SoMaterial* SoMaterial414 = new SoMaterial();
SoMaterial414->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance413->addChild(*SoMaterial414);

SoShape412->addChild(*SoVRMLAppearance413);

SoText* SoText415 = new SoText();
SoText415->setString(new QString[]{QString("JinLipSuck")}, 1);
SoFontStyle* SoFontStyle416 = new SoFontStyle();
SoFontStyle416->setSize(2.4);
SoFontStyle416->setSpacing(1.2);
SoFontStyle416->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText415->setFontStyle(*SoFontStyle416);

SoShape412->setGeometry(*SoText415);

SoTransform410->addChild(*SoShape412);

SoShape* SoShape417 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance418 = new SoVRMLAppearance();
SoMaterial* SoMaterial419 = new SoMaterial();
SoMaterial419->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance418->addChild(*SoMaterial419);

SoShape417->addChild(*SoVRMLAppearance418);

SoIndexedFaceSet* SoIndexedFaceSet420 = new SoIndexedFaceSet();
SoIndexedFaceSet420->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate421 = new SoCoordinate();
SoCoordinate421->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet420->setCoord(*SoCoordinate421);

SoShape417->setGeometry(*SoIndexedFaceSet420);

SoTransform410->addChild(*SoShape417);

SoGroup6->addChild(*SoTransform410);

SoROUTE* SoROUTE422 = new SoROUTE();
SoROUTE422->setFromNode(QString("JinLipSuck_Sensor"));
SoROUTE422->setFromField(QString("touchTime"));
SoROUTE422->setToNode(QString("Choice18"));
SoROUTE422->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE422);

SoROUTE* SoROUTE423 = new SoROUTE();
SoROUTE423->setFromNode(QString("Choice18"));
SoROUTE423->setFromField(QString("choice"));
SoROUTE423->setToNode(QString("SceneSwitcher"));
SoROUTE423->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE423);

SoTransform* SoTransform424 = new SoTransform();
SoTransform424->setTranslation(new float[]{48.0,6.399999999999999,0.0});
SoTouchSensor* SoTouchSensor425 = new SoTouchSensor();
SoTouchSensor425->setDescription(QString("TSJinLipTightener"));
SoTouchSensor425->setDEF(QString("JinLipTightener_Sensor"));
SoTransform424->addChild(*SoTouchSensor425);

SoShape* SoShape426 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance427 = new SoVRMLAppearance();
SoMaterial* SoMaterial428 = new SoMaterial();
SoMaterial428->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance427->addChild(*SoMaterial428);

SoShape426->addChild(*SoVRMLAppearance427);

SoText* SoText429 = new SoText();
SoText429->setString(new QString[]{QString("JinLipTightener")}, 1);
SoFontStyle* SoFontStyle430 = new SoFontStyle();
SoFontStyle430->setSize(2.4);
SoFontStyle430->setSpacing(1.2);
SoFontStyle430->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText429->setFontStyle(*SoFontStyle430);

SoShape426->setGeometry(*SoText429);

SoTransform424->addChild(*SoShape426);

SoShape* SoShape431 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance432 = new SoVRMLAppearance();
SoMaterial* SoMaterial433 = new SoMaterial();
SoMaterial433->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance432->addChild(*SoMaterial433);

SoShape431->addChild(*SoVRMLAppearance432);

SoIndexedFaceSet* SoIndexedFaceSet434 = new SoIndexedFaceSet();
SoIndexedFaceSet434->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate435 = new SoCoordinate();
SoCoordinate435->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet434->setCoord(*SoCoordinate435);

SoShape431->setGeometry(*SoIndexedFaceSet434);

SoTransform424->addChild(*SoShape431);

SoGroup6->addChild(*SoTransform424);

SoROUTE* SoROUTE436 = new SoROUTE();
SoROUTE436->setFromNode(QString("JinLipTightener_Sensor"));
SoROUTE436->setFromField(QString("touchTime"));
SoROUTE436->setToNode(QString("Choice19"));
SoROUTE436->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE436);

SoROUTE* SoROUTE437 = new SoROUTE();
SoROUTE437->setFromNode(QString("Choice19"));
SoROUTE437->setFromField(QString("choice"));
SoROUTE437->setToNode(QString("SceneSwitcher"));
SoROUTE437->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE437);

SoTransform* SoTransform438 = new SoTransform();
SoTransform438->setTranslation(new float[]{48.0,3.399999999999995,0.0});
SoTouchSensor* SoTouchSensor439 = new SoTouchSensor();
SoTouchSensor439->setDescription(QString("TSJinLowerLipDepressor"));
SoTouchSensor439->setDEF(QString("JinLowerLipDepressor_Sensor"));
SoTransform438->addChild(*SoTouchSensor439);

SoShape* SoShape440 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance441 = new SoVRMLAppearance();
SoMaterial* SoMaterial442 = new SoMaterial();
SoMaterial442->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance441->addChild(*SoMaterial442);

SoShape440->addChild(*SoVRMLAppearance441);

SoText* SoText443 = new SoText();
SoText443->setString(new QString[]{QString("JinLowerLipDepressor")}, 1);
SoFontStyle* SoFontStyle444 = new SoFontStyle();
SoFontStyle444->setSize(2.4);
SoFontStyle444->setSpacing(1.2);
SoFontStyle444->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText443->setFontStyle(*SoFontStyle444);

SoShape440->setGeometry(*SoText443);

SoTransform438->addChild(*SoShape440);

SoShape* SoShape445 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance446 = new SoVRMLAppearance();
SoMaterial* SoMaterial447 = new SoMaterial();
SoMaterial447->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance446->addChild(*SoMaterial447);

SoShape445->addChild(*SoVRMLAppearance446);

SoIndexedFaceSet* SoIndexedFaceSet448 = new SoIndexedFaceSet();
SoIndexedFaceSet448->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate449 = new SoCoordinate();
SoCoordinate449->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet448->setCoord(*SoCoordinate449);

SoShape445->setGeometry(*SoIndexedFaceSet448);

SoTransform438->addChild(*SoShape445);

SoGroup6->addChild(*SoTransform438);

SoROUTE* SoROUTE450 = new SoROUTE();
SoROUTE450->setFromNode(QString("JinLowerLipDepressor_Sensor"));
SoROUTE450->setFromField(QString("touchTime"));
SoROUTE450->setToNode(QString("Choice20"));
SoROUTE450->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE450);

SoROUTE* SoROUTE451 = new SoROUTE();
SoROUTE451->setFromNode(QString("Choice20"));
SoROUTE451->setFromField(QString("choice"));
SoROUTE451->setToNode(QString("SceneSwitcher"));
SoROUTE451->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE451);

SoTransform* SoTransform452 = new SoTransform();
SoTransform452->setTranslation(new float[]{48.0,0.399999999999995,0.0});
SoTouchSensor* SoTouchSensor453 = new SoTouchSensor();
SoTouchSensor453->setDescription(QString("TSJinMouthStretch"));
SoTouchSensor453->setDEF(QString("JinMouthStretch_Sensor"));
SoTransform452->addChild(*SoTouchSensor453);

SoShape* SoShape454 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance455 = new SoVRMLAppearance();
SoMaterial* SoMaterial456 = new SoMaterial();
SoMaterial456->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance455->addChild(*SoMaterial456);

SoShape454->addChild(*SoVRMLAppearance455);

SoText* SoText457 = new SoText();
SoText457->setString(new QString[]{QString("JinMouthStretch")}, 1);
SoFontStyle* SoFontStyle458 = new SoFontStyle();
SoFontStyle458->setSize(2.4);
SoFontStyle458->setSpacing(1.2);
SoFontStyle458->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText457->setFontStyle(*SoFontStyle458);

SoShape454->setGeometry(*SoText457);

SoTransform452->addChild(*SoShape454);

SoShape* SoShape459 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance460 = new SoVRMLAppearance();
SoMaterial* SoMaterial461 = new SoMaterial();
SoMaterial461->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance460->addChild(*SoMaterial461);

SoShape459->addChild(*SoVRMLAppearance460);

SoIndexedFaceSet* SoIndexedFaceSet462 = new SoIndexedFaceSet();
SoIndexedFaceSet462->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate463 = new SoCoordinate();
SoCoordinate463->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet462->setCoord(*SoCoordinate463);

SoShape459->setGeometry(*SoIndexedFaceSet462);

SoTransform452->addChild(*SoShape459);

SoGroup6->addChild(*SoTransform452);

SoROUTE* SoROUTE464 = new SoROUTE();
SoROUTE464->setFromNode(QString("JinMouthStretch_Sensor"));
SoROUTE464->setFromField(QString("touchTime"));
SoROUTE464->setToNode(QString("Choice21"));
SoROUTE464->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE464);

SoROUTE* SoROUTE465 = new SoROUTE();
SoROUTE465->setFromNode(QString("Choice21"));
SoROUTE465->setFromField(QString("choice"));
SoROUTE465->setToNode(QString("SceneSwitcher"));
SoROUTE465->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE465);

SoTransform* SoTransform466 = new SoTransform();
SoTransform466->setTranslation(new float[]{48.0,-2.6000000000000085,0.0});
SoTouchSensor* SoTouchSensor467 = new SoTouchSensor();
SoTouchSensor467->setDescription(QString("TSJinNasolabialDeepener"));
SoTouchSensor467->setDEF(QString("JinNasolabialDeepener_Sensor"));
SoTransform466->addChild(*SoTouchSensor467);

SoShape* SoShape468 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance469 = new SoVRMLAppearance();
SoMaterial* SoMaterial470 = new SoMaterial();
SoMaterial470->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance469->addChild(*SoMaterial470);

SoShape468->addChild(*SoVRMLAppearance469);

SoText* SoText471 = new SoText();
SoText471->setString(new QString[]{QString("JinNasolabialDeepener")}, 1);
SoFontStyle* SoFontStyle472 = new SoFontStyle();
SoFontStyle472->setSize(2.4);
SoFontStyle472->setSpacing(1.2);
SoFontStyle472->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText471->setFontStyle(*SoFontStyle472);

SoShape468->setGeometry(*SoText471);

SoTransform466->addChild(*SoShape468);

SoShape* SoShape473 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance474 = new SoVRMLAppearance();
SoMaterial* SoMaterial475 = new SoMaterial();
SoMaterial475->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance474->addChild(*SoMaterial475);

SoShape473->addChild(*SoVRMLAppearance474);

SoIndexedFaceSet* SoIndexedFaceSet476 = new SoIndexedFaceSet();
SoIndexedFaceSet476->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate477 = new SoCoordinate();
SoCoordinate477->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet476->setCoord(*SoCoordinate477);

SoShape473->setGeometry(*SoIndexedFaceSet476);

SoTransform466->addChild(*SoShape473);

SoGroup6->addChild(*SoTransform466);

SoROUTE* SoROUTE478 = new SoROUTE();
SoROUTE478->setFromNode(QString("JinNasolabialDeepener_Sensor"));
SoROUTE478->setFromField(QString("touchTime"));
SoROUTE478->setToNode(QString("Choice22"));
SoROUTE478->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE478);

SoROUTE* SoROUTE479 = new SoROUTE();
SoROUTE479->setFromNode(QString("Choice22"));
SoROUTE479->setFromField(QString("choice"));
SoROUTE479->setToNode(QString("SceneSwitcher"));
SoROUTE479->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE479);

SoTransform* SoTransform480 = new SoTransform();
SoTransform480->setTranslation(new float[]{48.0,-5.6000000000000085,0.0});
SoTouchSensor* SoTouchSensor481 = new SoTouchSensor();
SoTouchSensor481->setDescription(QString("TSJinNoseWrinkler"));
SoTouchSensor481->setDEF(QString("JinNoseWrinkler_Sensor"));
SoTransform480->addChild(*SoTouchSensor481);

SoShape* SoShape482 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance483 = new SoVRMLAppearance();
SoMaterial* SoMaterial484 = new SoMaterial();
SoMaterial484->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance483->addChild(*SoMaterial484);

SoShape482->addChild(*SoVRMLAppearance483);

SoText* SoText485 = new SoText();
SoText485->setString(new QString[]{QString("JinNoseWrinkler")}, 1);
SoFontStyle* SoFontStyle486 = new SoFontStyle();
SoFontStyle486->setSize(2.4);
SoFontStyle486->setSpacing(1.2);
SoFontStyle486->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText485->setFontStyle(*SoFontStyle486);

SoShape482->setGeometry(*SoText485);

SoTransform480->addChild(*SoShape482);

SoShape* SoShape487 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance488 = new SoVRMLAppearance();
SoMaterial* SoMaterial489 = new SoMaterial();
SoMaterial489->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance488->addChild(*SoMaterial489);

SoShape487->addChild(*SoVRMLAppearance488);

SoIndexedFaceSet* SoIndexedFaceSet490 = new SoIndexedFaceSet();
SoIndexedFaceSet490->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate491 = new SoCoordinate();
SoCoordinate491->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet490->setCoord(*SoCoordinate491);

SoShape487->setGeometry(*SoIndexedFaceSet490);

SoTransform480->addChild(*SoShape487);

SoGroup6->addChild(*SoTransform480);

SoROUTE* SoROUTE492 = new SoROUTE();
SoROUTE492->setFromNode(QString("JinNoseWrinkler_Sensor"));
SoROUTE492->setFromField(QString("touchTime"));
SoROUTE492->setToNode(QString("Choice23"));
SoROUTE492->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE492);

SoROUTE* SoROUTE493 = new SoROUTE();
SoROUTE493->setFromNode(QString("Choice23"));
SoROUTE493->setFromField(QString("choice"));
SoROUTE493->setToNode(QString("SceneSwitcher"));
SoROUTE493->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE493);

SoTransform* SoTransform494 = new SoTransform();
SoTransform494->setTranslation(new float[]{48.0,-8.600000000000009,0.0});
SoTouchSensor* SoTouchSensor495 = new SoTouchSensor();
SoTouchSensor495->setDescription(QString("TSJinOuterBrowRaiser"));
SoTouchSensor495->setDEF(QString("JinOuterBrowRaiser_Sensor"));
SoTransform494->addChild(*SoTouchSensor495);

SoShape* SoShape496 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance497 = new SoVRMLAppearance();
SoMaterial* SoMaterial498 = new SoMaterial();
SoMaterial498->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance497->addChild(*SoMaterial498);

SoShape496->addChild(*SoVRMLAppearance497);

SoText* SoText499 = new SoText();
SoText499->setString(new QString[]{QString("JinOuterBrowRaiser")}, 1);
SoFontStyle* SoFontStyle500 = new SoFontStyle();
SoFontStyle500->setSize(2.4);
SoFontStyle500->setSpacing(1.2);
SoFontStyle500->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText499->setFontStyle(*SoFontStyle500);

SoShape496->setGeometry(*SoText499);

SoTransform494->addChild(*SoShape496);

SoShape* SoShape501 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance502 = new SoVRMLAppearance();
SoMaterial* SoMaterial503 = new SoMaterial();
SoMaterial503->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance502->addChild(*SoMaterial503);

SoShape501->addChild(*SoVRMLAppearance502);

SoIndexedFaceSet* SoIndexedFaceSet504 = new SoIndexedFaceSet();
SoIndexedFaceSet504->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate505 = new SoCoordinate();
SoCoordinate505->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet504->setCoord(*SoCoordinate505);

SoShape501->setGeometry(*SoIndexedFaceSet504);

SoTransform494->addChild(*SoShape501);

SoGroup6->addChild(*SoTransform494);

SoROUTE* SoROUTE506 = new SoROUTE();
SoROUTE506->setFromNode(QString("JinOuterBrowRaiser_Sensor"));
SoROUTE506->setFromField(QString("touchTime"));
SoROUTE506->setToNode(QString("Choice24"));
SoROUTE506->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE506);

SoROUTE* SoROUTE507 = new SoROUTE();
SoROUTE507->setFromNode(QString("Choice24"));
SoROUTE507->setFromField(QString("choice"));
SoROUTE507->setToNode(QString("SceneSwitcher"));
SoROUTE507->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE507);

SoTransform* SoTransform508 = new SoTransform();
SoTransform508->setTranslation(new float[]{48.0,-11.600000000000009,0.0});
SoTouchSensor* SoTouchSensor509 = new SoTouchSensor();
SoTouchSensor509->setDescription(QString("TSJinSlit"));
SoTouchSensor509->setDEF(QString("JinSlit_Sensor"));
SoTransform508->addChild(*SoTouchSensor509);

SoShape* SoShape510 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance511 = new SoVRMLAppearance();
SoMaterial* SoMaterial512 = new SoMaterial();
SoMaterial512->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance511->addChild(*SoMaterial512);

SoShape510->addChild(*SoVRMLAppearance511);

SoText* SoText513 = new SoText();
SoText513->setString(new QString[]{QString("JinSlit")}, 1);
SoFontStyle* SoFontStyle514 = new SoFontStyle();
SoFontStyle514->setSize(2.4);
SoFontStyle514->setSpacing(1.2);
SoFontStyle514->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText513->setFontStyle(*SoFontStyle514);

SoShape510->setGeometry(*SoText513);

SoTransform508->addChild(*SoShape510);

SoShape* SoShape515 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance516 = new SoVRMLAppearance();
SoMaterial* SoMaterial517 = new SoMaterial();
SoMaterial517->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance516->addChild(*SoMaterial517);

SoShape515->addChild(*SoVRMLAppearance516);

SoIndexedFaceSet* SoIndexedFaceSet518 = new SoIndexedFaceSet();
SoIndexedFaceSet518->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate519 = new SoCoordinate();
SoCoordinate519->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet518->setCoord(*SoCoordinate519);

SoShape515->setGeometry(*SoIndexedFaceSet518);

SoTransform508->addChild(*SoShape515);

SoGroup6->addChild(*SoTransform508);

SoROUTE* SoROUTE520 = new SoROUTE();
SoROUTE520->setFromNode(QString("JinSlit_Sensor"));
SoROUTE520->setFromField(QString("touchTime"));
SoROUTE520->setToNode(QString("Choice25"));
SoROUTE520->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE520);

SoROUTE* SoROUTE521 = new SoROUTE();
SoROUTE521->setFromNode(QString("Choice25"));
SoROUTE521->setFromField(QString("choice"));
SoROUTE521->setToNode(QString("SceneSwitcher"));
SoROUTE521->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE521);

SoTransform* SoTransform522 = new SoTransform();
SoTransform522->setTranslation(new float[]{48.0,-14.600000000000001,0.0});
SoTouchSensor* SoTouchSensor523 = new SoTouchSensor();
SoTouchSensor523->setDescription(QString("TSJinSquint"));
SoTouchSensor523->setDEF(QString("JinSquint_Sensor"));
SoTransform522->addChild(*SoTouchSensor523);

SoShape* SoShape524 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance525 = new SoVRMLAppearance();
SoMaterial* SoMaterial526 = new SoMaterial();
SoMaterial526->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance525->addChild(*SoMaterial526);

SoShape524->addChild(*SoVRMLAppearance525);

SoText* SoText527 = new SoText();
SoText527->setString(new QString[]{QString("JinSquint")}, 1);
SoFontStyle* SoFontStyle528 = new SoFontStyle();
SoFontStyle528->setSize(2.4);
SoFontStyle528->setSpacing(1.2);
SoFontStyle528->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText527->setFontStyle(*SoFontStyle528);

SoShape524->setGeometry(*SoText527);

SoTransform522->addChild(*SoShape524);

SoShape* SoShape529 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance530 = new SoVRMLAppearance();
SoMaterial* SoMaterial531 = new SoMaterial();
SoMaterial531->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance530->addChild(*SoMaterial531);

SoShape529->addChild(*SoVRMLAppearance530);

SoIndexedFaceSet* SoIndexedFaceSet532 = new SoIndexedFaceSet();
SoIndexedFaceSet532->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate533 = new SoCoordinate();
SoCoordinate533->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet532->setCoord(*SoCoordinate533);

SoShape529->setGeometry(*SoIndexedFaceSet532);

SoTransform522->addChild(*SoShape529);

SoGroup6->addChild(*SoTransform522);

SoROUTE* SoROUTE534 = new SoROUTE();
SoROUTE534->setFromNode(QString("JinSquint_Sensor"));
SoROUTE534->setFromField(QString("touchTime"));
SoROUTE534->setToNode(QString("Choice26"));
SoROUTE534->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE534);

SoROUTE* SoROUTE535 = new SoROUTE();
SoROUTE535->setFromNode(QString("Choice26"));
SoROUTE535->setFromField(QString("choice"));
SoROUTE535->setToNode(QString("SceneSwitcher"));
SoROUTE535->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE535);

SoTransform* SoTransform536 = new SoTransform();
SoTransform536->setTranslation(new float[]{48.0,-17.6,0.0});
SoTouchSensor* SoTouchSensor537 = new SoTouchSensor();
SoTouchSensor537->setDescription(QString("TSJinUpperLidRaiser"));
SoTouchSensor537->setDEF(QString("JinUpperLidRaiser_Sensor"));
SoTransform536->addChild(*SoTouchSensor537);

SoShape* SoShape538 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance539 = new SoVRMLAppearance();
SoMaterial* SoMaterial540 = new SoMaterial();
SoMaterial540->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance539->addChild(*SoMaterial540);

SoShape538->addChild(*SoVRMLAppearance539);

SoText* SoText541 = new SoText();
SoText541->setString(new QString[]{QString("JinUpperLidRaiser")}, 1);
SoFontStyle* SoFontStyle542 = new SoFontStyle();
SoFontStyle542->setSize(2.4);
SoFontStyle542->setSpacing(1.2);
SoFontStyle542->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText541->setFontStyle(*SoFontStyle542);

SoShape538->setGeometry(*SoText541);

SoTransform536->addChild(*SoShape538);

SoShape* SoShape543 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance544 = new SoVRMLAppearance();
SoMaterial* SoMaterial545 = new SoMaterial();
SoMaterial545->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance544->addChild(*SoMaterial545);

SoShape543->addChild(*SoVRMLAppearance544);

SoIndexedFaceSet* SoIndexedFaceSet546 = new SoIndexedFaceSet();
SoIndexedFaceSet546->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate547 = new SoCoordinate();
SoCoordinate547->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet546->setCoord(*SoCoordinate547);

SoShape543->setGeometry(*SoIndexedFaceSet546);

SoTransform536->addChild(*SoShape543);

SoGroup6->addChild(*SoTransform536);

SoROUTE* SoROUTE548 = new SoROUTE();
SoROUTE548->setFromNode(QString("JinUpperLidRaiser_Sensor"));
SoROUTE548->setFromField(QString("touchTime"));
SoROUTE548->setToNode(QString("Choice27"));
SoROUTE548->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE548);

SoROUTE* SoROUTE549 = new SoROUTE();
SoROUTE549->setFromNode(QString("Choice27"));
SoROUTE549->setFromField(QString("choice"));
SoROUTE549->setToNode(QString("SceneSwitcher"));
SoROUTE549->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE549);

SoTransform* SoTransform550 = new SoTransform();
SoTransform550->setTranslation(new float[]{48.0,-20.6,0.0});
SoTouchSensor* SoTouchSensor551 = new SoTouchSensor();
SoTouchSensor551->setDescription(QString("TSJinUpperLipRaiser"));
SoTouchSensor551->setDEF(QString("JinUpperLipRaiser_Sensor"));
SoTransform550->addChild(*SoTouchSensor551);

SoShape* SoShape552 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance553 = new SoVRMLAppearance();
SoMaterial* SoMaterial554 = new SoMaterial();
SoMaterial554->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance553->addChild(*SoMaterial554);

SoShape552->addChild(*SoVRMLAppearance553);

SoText* SoText555 = new SoText();
SoText555->setString(new QString[]{QString("JinUpperLipRaiser")}, 1);
SoFontStyle* SoFontStyle556 = new SoFontStyle();
SoFontStyle556->setSize(2.4);
SoFontStyle556->setSpacing(1.2);
SoFontStyle556->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText555->setFontStyle(*SoFontStyle556);

SoShape552->setGeometry(*SoText555);

SoTransform550->addChild(*SoShape552);

SoShape* SoShape557 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance558 = new SoVRMLAppearance();
SoMaterial* SoMaterial559 = new SoMaterial();
SoMaterial559->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance558->addChild(*SoMaterial559);

SoShape557->addChild(*SoVRMLAppearance558);

SoIndexedFaceSet* SoIndexedFaceSet560 = new SoIndexedFaceSet();
SoIndexedFaceSet560->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate561 = new SoCoordinate();
SoCoordinate561->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet560->setCoord(*SoCoordinate561);

SoShape557->setGeometry(*SoIndexedFaceSet560);

SoTransform550->addChild(*SoShape557);

SoGroup6->addChild(*SoTransform550);

SoROUTE* SoROUTE562 = new SoROUTE();
SoROUTE562->setFromNode(QString("JinUpperLipRaiser_Sensor"));
SoROUTE562->setFromField(QString("touchTime"));
SoROUTE562->setToNode(QString("Choice28"));
SoROUTE562->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE562);

SoROUTE* SoROUTE563 = new SoROUTE();
SoROUTE563->setFromNode(QString("Choice28"));
SoROUTE563->setFromField(QString("choice"));
SoROUTE563->setToNode(QString("SceneSwitcher"));
SoROUTE563->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE563);

SoTransform* SoTransform564 = new SoTransform();
SoTransform564->setTranslation(new float[]{48.0,-23.599999999999994,0.0});
SoTouchSensor* SoTouchSensor565 = new SoTouchSensor();
SoTouchSensor565->setDescription(QString("TSJinWink"));
SoTouchSensor565->setDEF(QString("JinWink_Sensor"));
SoTransform564->addChild(*SoTouchSensor565);

SoShape* SoShape566 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance567 = new SoVRMLAppearance();
SoMaterial* SoMaterial568 = new SoMaterial();
SoMaterial568->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance567->addChild(*SoMaterial568);

SoShape566->addChild(*SoVRMLAppearance567);

SoText* SoText569 = new SoText();
SoText569->setString(new QString[]{QString("JinWink")}, 1);
SoFontStyle* SoFontStyle570 = new SoFontStyle();
SoFontStyle570->setSize(2.4);
SoFontStyle570->setSpacing(1.2);
SoFontStyle570->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText569->setFontStyle(*SoFontStyle570);

SoShape566->setGeometry(*SoText569);

SoTransform564->addChild(*SoShape566);

SoShape* SoShape571 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance572 = new SoVRMLAppearance();
SoMaterial* SoMaterial573 = new SoMaterial();
SoMaterial573->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance572->addChild(*SoMaterial573);

SoShape571->addChild(*SoVRMLAppearance572);

SoIndexedFaceSet* SoIndexedFaceSet574 = new SoIndexedFaceSet();
SoIndexedFaceSet574->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate575 = new SoCoordinate();
SoCoordinate575->setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
SoIndexedFaceSet574->setCoord(*SoCoordinate575);

SoShape571->setGeometry(*SoIndexedFaceSet574);

SoTransform564->addChild(*SoShape571);

SoGroup6->addChild(*SoTransform564);

SoROUTE* SoROUTE576 = new SoROUTE();
SoROUTE576->setFromNode(QString("JinWink_Sensor"));
SoROUTE576->setFromField(QString("touchTime"));
SoROUTE576->setToNode(QString("Choice29"));
SoROUTE576->setToField(QString("touchTime"));
SoGroup6->addChild(*SoROUTE576);

SoROUTE* SoROUTE577 = new SoROUTE();
SoROUTE577->setFromNode(QString("Choice29"));
SoROUTE577->setFromField(QString("choice"));
SoROUTE577->setToNode(QString("SceneSwitcher"));
SoROUTE577->setToField(QString("whichChoice"));
SoGroup6->addChild(*SoROUTE577);

SoNode4->addChild(*SoGroup6);

SoSceneManager0->setSceneGraph(*SoNode4);

return 0;
}
