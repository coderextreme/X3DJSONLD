
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
SoSceneManager0->setProfile(QString("Interchange"));
SoSceneManager0->setVersion(QString("4.0"));
Sohead* Sohead1 = new Sohead();
Socomponent* Socomponent2 = new Socomponent();
Socomponent2->setName(QString("HAnim"));
Socomponent2->setLevel(1);
Sohead1->addChild(*Socomponent2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("title"));
Someta3->setContent(QString("MainStage.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("Main stage for HAnim scene Winter and Spring."));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Joe Williams"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("translator"));
Someta6->setContent(QString("Joe Williams and Don Brutzman"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("created"));
Someta7->setContent(QString("25 May 2023"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("modified"));
Someta8->setContent(QString("27 May 2023"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("reference"));
Someta9->setContent(QString("originals/0MainStageScene0525.x3dv"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("identifier"));
Someta10->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("generator"));
Someta11->setContent(QString("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("license"));
Someta12->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta12);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode13 = new SoNode();
SoWorldInfo* SoWorldInfo14 = new SoWorldInfo();
SoWorldInfo14->setTitle(QString("MainStage.x3d"));
SoNode13->addChild(*SoWorldInfo14);

SoNavigationInfo* SoNavigationInfo15 = new SoNavigationInfo();
SoNavigationInfo15->setHeadlight(false);
SoNode13->addChild(*SoNavigationInfo15);

SoDirectionalLight* SoDirectionalLight16 = new SoDirectionalLight();
SoDirectionalLight16->setAmbientIntensity(1);
SoDirectionalLight16->setDirection(new float[]{-0.5,-0.5,-0.5});
SoDirectionalLight16->setGlobal(true);
SoNode13->addChild(*SoDirectionalLight16);

SoDirectionalLight* SoDirectionalLight17 = new SoDirectionalLight();
SoDirectionalLight17->setAmbientIntensity(1);
SoDirectionalLight17->setDirection(new float[]{-1.0,-1.0,-1.0});
SoDirectionalLight17->setGlobal(true);
SoNode13->addChild(*SoDirectionalLight17);

SoDirectionalLight* SoDirectionalLight18 = new SoDirectionalLight();
SoDirectionalLight18->setAmbientIntensity(1);
SoDirectionalLight18->setDirection(new float[]{1.0,1.0,-1.0});
SoDirectionalLight18->setGlobal(true);
SoDirectionalLight18->setIntensity(0.5);
SoNode13->addChild(*SoDirectionalLight18);

SoViewpoint* SoViewpoint19 = new SoViewpoint();
SoViewpoint19->setDEF(QString("Scene_StageFrontViewFar"));
SoViewpoint19->setDescription(QString("hanim_Stage Front View"));
SoViewpoint19->setOrientation(new float[]{1.0,0.0,0.0,-0.449999988});
SoViewpoint19->setPosition(new float[]{0.0,4.0,10.0});
SoNode13->addChild(*SoViewpoint19);

SoViewpoint* SoViewpoint20 = new SoViewpoint();
SoViewpoint20->setDEF(QString("Scene_InclinedView"));
SoViewpoint20->setDescription(QString("hanim_Inclined View"));
SoViewpoint20->setOrientation(new float[]{-0.112999998,0.992999971,0.034699999,0.671000004});
SoViewpoint20->setPosition(new float[]{2.619999886,1.049999952,4.059999943});
SoNode13->addChild(*SoViewpoint20);

SoViewpoint* SoViewpoint21 = new SoViewpoint();
SoViewpoint21->setDEF(QString("Scene_StageFrontView"));
SoViewpoint21->setDescription(QString("hanim_Stage Front View"));
SoViewpoint21->setPosition(new float[]{0.0,1.0,5.0});
SoNode13->addChild(*SoViewpoint21);

SoViewpoint* SoViewpoint22 = new SoViewpoint();
SoViewpoint22->setDEF(QString("Scene_FeetStageBottomView"));
SoViewpoint22->setDescription(QString("hanim_feet View"));
SoViewpoint22->setOrientation(new float[]{1.0,0.0,0.0,1.570000052});
SoViewpoint22->setPosition(new float[]{0.0,-10.0,0.0});
SoNode13->addChild(*SoViewpoint22);

SoViewpoint* SoViewpoint23 = new SoViewpoint();
SoViewpoint23->setDEF(QString("Scene_HeadTopView"));
SoViewpoint23->setDescription(QString("hanim_Head Top View"));
SoViewpoint23->setOrientation(new float[]{1.0,0.0,0.0,-1.570000052});
SoViewpoint23->setPosition(new float[]{0.0,15.0,0.0});
SoNode13->addChild(*SoViewpoint23);

SoViewpoint* SoViewpoint24 = new SoViewpoint();
SoViewpoint24->setDEF(QString("Scene_TopFrontCloseView"));
SoViewpoint24->setDescription(QString("hanim_Head Top View"));
SoViewpoint24->setOrientation(new float[]{1.0,0.0,0.0,-1.100000024});
SoViewpoint24->setPosition(new float[]{0.0,8.0,3.0});
SoNode13->addChild(*SoViewpoint24);

SoGroup* SoGroup25 = new SoGroup();
SoGroup25->setDEF(QString("HAnimStage"));
SoTransform* SoTransform26 = new SoTransform();
SoTransform26->setDEF(QString("cordsysfloor"));
SoTransform26->setScale(new float[]{0.174999997,0.174999997,0.174999997});
SoInline* SoInline27 = new SoInline();
SoInline27->setUrl(new QString[]{QString("JointCoordinateAxes.x3dv")}, 1);
SoTransform26->addChild(*SoInline27);

SoGroup25->addChild(*SoTransform26);

SoTransform* SoTransform28 = new SoTransform();
SoTransform28->setDEF(QString("StageGeometry"));
SoTransform28->setScale(new float[]{1.0,0.01,1.0});
SoTransform28->setTranslation(new float[]{0.0,-0.01,0.0});
SoShape* SoShape29 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance30 = new SoVRMLAppearance();
SoMaterial* SoMaterial31 = new SoMaterial();
SoMaterial31->setTransparency(0.6);
SoVRMLAppearance30->addChild(*SoMaterial31);

SoShape29->addChild(*SoVRMLAppearance30);

SoBox* SoBox32 = new SoBox();
SoBox32->setSize(new float[]{9.0,1.0,9.0});
SoShape29->setGeometry(*SoBox32);

SoTransform28->addChild(*SoShape29);

SoTransform* SoTransform33 = new SoTransform();
SoTransform33->setDEF(QString("Circle0"));
SoShape* SoShape34 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance35 = new SoVRMLAppearance();
SoVRMLAppearance35->setDEF(QString("LineColor"));
SoMaterial* SoMaterial36 = new SoMaterial();
SoMaterial36->setAmbientIntensity(1);
SoMaterial36->setDiffuseColor(new float[]{0.699999988,0.0,0.899999976});
SoMaterial36->setEmissiveColor(new float[]{0.449999988,0.449999988,1.0});
SoMaterial36->setShininess(1);
SoMaterial36->setSpecularColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance35->addChild(*SoMaterial36);

SoShape34->addChild(*SoVRMLAppearance35);

SoIndexedLineSet* SoIndexedLineSet37 = new SoIndexedLineSet();
SoIndexedLineSet37->setDEF(QString("Orbit1"));
SoIndexedLineSet37->setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1}, 62);
SoCoordinate* SoCoordinate38 = new SoCoordinate();
SoCoordinate38->setPoint(new float[]{1.0,0.0,0.0,0.995000005,0.0,-0.104999997,0.978999972,0.0,-0.208000004,0.950999975,0.0,-0.308999985,0.913999975,0.0,-0.407000005,0.865999997,0.0,-0.5,0.809000015,0.0,-0.588,0.742999971,0.0,-0.66900003,0.66900003,0.0,-0.742999971,0.588,0.0,-0.809000015,0.5,0.0,-0.865999997,0.407000005,0.0,-0.913999975,0.308999985,0.0,-0.950999975,0.208000004,0.0,-0.977999985,0.104999997,0.0,-0.995000005,0.0,0.0,-1.0,-0.104999997,0.0,-0.994521976,-0.208000004,0.0,-0.977999985,-0.308999985,0.0,-0.950999975,-0.407000005,0.0,-0.913999975,-0.5,0.0,-0.865999997,-0.588,0.0,-0.809000015,-0.66900003,0.0,-0.742999971,-0.742999971,0.0,-0.66900003,-0.809000015,0.0,-0.588,-0.865999997,0.0,-0.5,-0.913999975,0.0,-0.407000005,-0.950999975,0.0,-0.308999985,-0.977999985,0.0,-0.208000004,-0.995000005,0.0,-0.104999997,-1.0,0.0,0.0,-0.995000005,0.0,0.104999997,-0.977999985,0.0,0.208000004,-0.950999975,0.0,0.308999985,-0.913999975,0.0,0.407000005,-0.865999997,0.0,0.5,-0.809000015,0.0,0.588,-0.742999971,0.0,0.66900003,-0.66900003,0.0,0.742999971,-0.588,0.0,0.809000015,-0.5,0.0,0.865999997,-0.407000005,0.0,0.913999975,-0.308999985,0.0,0.950999975,-0.208000004,0.0,0.977999985,-0.104999997,0.0,0.995000005,0.0,0.0,1.0,0.104999997,0.0,0.995000005,0.208000004,0.0,0.977999985,0.308999985,0.0,0.950999975,0.407000005,0.0,0.913999975,0.5,0.0,0.865999997,0.588,0.0,0.809000015,0.66900003,0.0,0.742999971,0.742999971,0.0,0.66900003,0.809000015,0.0,0.588,0.865999997,0.0,0.5,0.913999975,0.0,0.407000005,0.950999975,0.0,0.308999985,0.977999985,0.0,0.208000004,0.995000005,0.0,0.104000002,1.0,0.0,0.0}, 183);
SoIndexedLineSet37->setCoord(*SoCoordinate38);

SoShape34->setGeometry(*SoIndexedLineSet37);

SoTransform33->addChild(*SoShape34);

SoTransform28->addChild(*SoTransform33);

SoTransform* SoTransform39 = new SoTransform();
SoTransform39->setDEF(QString("Circle1"));
SoTransform39->setScale(new float[]{0.5,1.0,0.5});
SoShape* SoShape40 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance41 = new SoVRMLAppearance();
SoVRMLAppearance41->setUSE(QString("LineColor"));
SoShape40->addChild(*SoVRMLAppearance41);

SoIndexedLineSet* SoIndexedLineSet42 = new SoIndexedLineSet();
SoIndexedLineSet42->setUSE(QString("Orbit1"));
SoShape40->setGeometry(*SoIndexedLineSet42);

SoTransform39->addChild(*SoShape40);

SoTransform28->addChild(*SoTransform39);

SoTransform* SoTransform43 = new SoTransform();
SoTransform43->setDEF(QString("Circle2"));
SoTransform43->setScale(new float[]{0.25,1.0,0.25});
SoShape* SoShape44 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance45 = new SoVRMLAppearance();
SoVRMLAppearance45->setUSE(QString("LineColor"));
SoShape44->addChild(*SoVRMLAppearance45);

SoIndexedLineSet* SoIndexedLineSet46 = new SoIndexedLineSet();
SoIndexedLineSet46->setUSE(QString("Orbit1"));
SoShape44->setGeometry(*SoIndexedLineSet46);

SoTransform43->addChild(*SoShape44);

SoTransform28->addChild(*SoTransform43);

SoTransform* SoTransform47 = new SoTransform();
SoTransform47->setDEF(QString("Circle3"));
SoTransform47->setScale(new float[]{2.0,1.0,2.0});
SoShape* SoShape48 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance49 = new SoVRMLAppearance();
SoVRMLAppearance49->setUSE(QString("LineColor"));
SoShape48->addChild(*SoVRMLAppearance49);

SoIndexedLineSet* SoIndexedLineSet50 = new SoIndexedLineSet();
SoIndexedLineSet50->setUSE(QString("Orbit1"));
SoShape48->setGeometry(*SoIndexedLineSet50);

SoTransform47->addChild(*SoShape48);

SoTransform28->addChild(*SoTransform47);

SoTransform* SoTransform51 = new SoTransform();
SoTransform51->setDEF(QString("Circle4"));
SoTransform51->setScale(new float[]{3.0,1.0,3.0});
SoShape* SoShape52 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance53 = new SoVRMLAppearance();
SoVRMLAppearance53->setUSE(QString("LineColor"));
SoShape52->addChild(*SoVRMLAppearance53);

SoIndexedLineSet* SoIndexedLineSet54 = new SoIndexedLineSet();
SoIndexedLineSet54->setUSE(QString("Orbit1"));
SoShape52->setGeometry(*SoIndexedLineSet54);

SoTransform51->addChild(*SoShape52);

SoTransform28->addChild(*SoTransform51);

SoGroup25->addChild(*SoTransform28);

SoNode13->addChild(*SoGroup25);

SoSceneManager0->setSceneGraph(*SoNode13);

return 0;
}
