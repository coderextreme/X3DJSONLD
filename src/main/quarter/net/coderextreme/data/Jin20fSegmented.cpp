
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
Socomponent2->setName(QString("HAnim"));
Socomponent2->setLevel(1);
Sohead1->addChild(*Socomponent2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("title"));
Someta3->setContent(QString("JinScaledV2L1LOA4MinimumSkeleton20f.x3d"));
Sohead1->addMeta(*Someta3);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode4 = new SoNode();
//https://www.web3d.org/documents/specifications/19774/V2.0/index.html
//0 0 0 at floor between feet, default I pose (relaxed attention) model gaze toward +Z, +x to model left, +y up, right-hand rule.
SoWorldInfo* SoWorldInfo5 = new SoWorldInfo();
SoWorldInfo5->setTitle(QString("20f Jin v2 loa4 Level 1, Joints, Segments, Sites"));
SoNode4->addChild(*SoWorldInfo5);

SoTransform* SoTransform6 = new SoTransform();
SoTransform6->setDEF(QString("ContainerScene000"));
SoShape* SoShape7 = new SoShape();
SoShape7->setDEF(QString("AxisLinesShape"));
//Red +X, Green +Y, Blue +Z
SoIndexedLineSet* SoIndexedLineSet8 = new SoIndexedLineSet();
SoIndexedLineSet8->setColorIndex(new int[]{0,1,2}, 3);
SoIndexedLineSet8->setColorPerVertex(false);
SoIndexedLineSet8->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
SoColor* SoColor9 = new SoColor();
SoColor9->setColor(new float[]{1.0,0.0,0.0,0.0,0.6,0.0,0.0,0.0,1.0}, 9);
SoIndexedLineSet8->setColor(*SoColor9);

SoCoordinate* SoCoordinate10 = new SoCoordinate();
SoCoordinate10->setPoint(new float[]{0.0,0.0,0.0,0.1,0.0,0.0,0.0,0.1,0.0,0.0,0.0,0.1}, 12);
SoIndexedLineSet8->setCoord(*SoCoordinate10);

SoShape7->setGeometry(*SoIndexedLineSet8);

SoTransform6->addChild(*SoShape7);

SoNode4->addChild(*SoTransform6);

SoHAnimHumanoid* SoHAnimHumanoid11 = new SoHAnimHumanoid();
SoHAnimHumanoid11->X3DNode::setName(QString("JinLOA4S"));
SoHAnimHumanoid11->setDEF(QString("hanim_JinLOA4S"));
SoHAnimHumanoid11->setLoa(4);
SoHAnimHumanoid11->setVersion(QString("2.0"));
SoHAnimJoint* SoHAnimJoint12 = new SoHAnimJoint();
SoHAnimJoint12->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint12->setDEF(QString("hanim_humanoid_root"));
SoHAnimJoint12->setCenter(new float[]{0.0,0.77,0.0});
SoHAnimJoint12->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint12->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment13 = new SoHAnimSegment();
SoHAnimSegment13->X3DNode::setName(QString("sacrum"));
SoHAnimSegment13->setDEF(QString("hanim_sacrum"));
SoTransform* SoTransform14 = new SoTransform();
SoTransform14->setDEF(QString("Humanoid000"));
SoShape* SoShape15 = new SoShape();
SoShape15->setUSE(QString("AxisLinesShape"));
SoTransform14->addChild(*SoShape15);

SoHAnimSegment13->addChild(*SoTransform14);

SoHAnimJoint12->addChildren(*SoHAnimSegment13);

SoHAnimJoint* SoHAnimJoint16 = new SoHAnimJoint();
SoHAnimJoint16->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint16->setDEF(QString("hanim_sacroiliac"));
SoHAnimJoint16->setCenter(new float[]{0.0,0.826,0.02});
SoHAnimJoint16->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint16->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment17 = new SoHAnimSegment();
SoHAnimSegment17->X3DNode::setName(QString("pelvis"));
SoHAnimSegment17->setDEF(QString("hanim_pelvis"));
SoHAnimSite* SoHAnimSite18 = new SoHAnimSite();
SoHAnimSite18->X3DNode::setName(QString("l_iliocristale"));
SoHAnimSite18->setDEF(QString("hanim_l_iliocristale_pt"));
SoHAnimSite18->setTranslation(new float[]{0.13,0.92,0.0035});
SoTouchSensor* SoTouchSensor19 = new SoTouchSensor();
SoTouchSensor19->setDescription(QString("HAnimSite 33 hanim_l_iliocristale_pt"));
SoHAnimSite18->addChild(*SoTouchSensor19);

SoShape* SoShape20 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance21 = new SoVRMLAppearance();
SoMaterial* SoMaterial22 = new SoMaterial();
SoMaterial22->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance21->addChild(*SoMaterial22);

SoShape20->addChild(*SoVRMLAppearance21);

SoIndexedFaceSet* SoIndexedFaceSet23 = new SoIndexedFaceSet();
SoIndexedFaceSet23->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet23->setCreaseAngle(0.5);
SoIndexedFaceSet23->setSolid(false);
SoColorRGBA* SoColorRGBA24 = new SoColorRGBA();
SoColorRGBA24->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet23->addChild(*SoColorRGBA24);

SoCoordinate* SoCoordinate25 = new SoCoordinate();
SoCoordinate25->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet23->setCoord(*SoCoordinate25);

SoShape20->setGeometry(*SoIndexedFaceSet23);

SoHAnimSite18->addChild(*SoShape20);

SoBillboard* SoBillboard26 = new SoBillboard();
SoBillboard26->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape27 = new SoShape();
SoText* SoText28 = new SoText();
SoText28->setString(new QString[]{QString("33")}, 1);
SoFontStyle* SoFontStyle29 = new SoFontStyle();
SoFontStyle29->setSize(0.035);
SoText28->setFontStyle(*SoFontStyle29);

SoShape27->setGeometry(*SoText28);

SoBillboard26->addChild(*SoShape27);

SoHAnimSite18->addChild(SoBillboard26);

SoHAnimSegment17->addChild(*SoHAnimSite18);

SoHAnimSite* SoHAnimSite30 = new SoHAnimSite();
SoHAnimSite30->X3DNode::setName(QString("r_iliocristale"));
SoHAnimSite30->setDEF(QString("hanim_r_iliocristale_pt"));
SoHAnimSite30->setTranslation(new float[]{-0.13,0.92,0.0035});
SoTouchSensor* SoTouchSensor31 = new SoTouchSensor();
SoTouchSensor31->setDescription(QString("HAnimSite 36 hanim_r_iliocristale_pt"));
SoHAnimSite30->addChild(*SoTouchSensor31);

SoShape* SoShape32 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance33 = new SoVRMLAppearance();
SoMaterial* SoMaterial34 = new SoMaterial();
SoMaterial34->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance33->addChild(*SoMaterial34);

SoShape32->addChild(*SoVRMLAppearance33);

SoIndexedFaceSet* SoIndexedFaceSet35 = new SoIndexedFaceSet();
SoIndexedFaceSet35->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet35->setCreaseAngle(0.5);
SoIndexedFaceSet35->setSolid(false);
SoColorRGBA* SoColorRGBA36 = new SoColorRGBA();
SoColorRGBA36->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet35->addChild(*SoColorRGBA36);

SoCoordinate* SoCoordinate37 = new SoCoordinate();
SoCoordinate37->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet35->setCoord(*SoCoordinate37);

SoShape32->setGeometry(*SoIndexedFaceSet35);

SoHAnimSite30->addChild(*SoShape32);

SoBillboard* SoBillboard38 = new SoBillboard();
SoBillboard38->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape39 = new SoShape();
SoText* SoText40 = new SoText();
SoText40->setString(new QString[]{QString("36")}, 1);
SoFontStyle* SoFontStyle41 = new SoFontStyle();
SoFontStyle41->setSize(0.035);
SoText40->setFontStyle(*SoFontStyle41);

SoShape39->setGeometry(*SoText40);

SoBillboard38->addChild(*SoShape39);

SoHAnimSite30->addChild(SoBillboard38);

SoHAnimSegment17->addChild(*SoHAnimSite30);

SoHAnimSite* SoHAnimSite42 = new SoHAnimSite();
SoHAnimSite42->X3DNode::setName(QString("l_trochanterion"));
SoHAnimSite42->setDEF(QString("hanim_l_trochanterion_pt"));
SoHAnimSite42->setTranslation(new float[]{0.14,0.8,0.0035});
SoTouchSensor* SoTouchSensor43 = new SoTouchSensor();
SoTouchSensor43->setDescription(QString("HAnimSite 42 hanim_l_trochanterion_pt"));
SoHAnimSite42->addChild(*SoTouchSensor43);

SoShape* SoShape44 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance45 = new SoVRMLAppearance();
SoMaterial* SoMaterial46 = new SoMaterial();
SoMaterial46->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance45->addChild(*SoMaterial46);

SoShape44->addChild(*SoVRMLAppearance45);

SoIndexedFaceSet* SoIndexedFaceSet47 = new SoIndexedFaceSet();
SoIndexedFaceSet47->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet47->setCreaseAngle(0.5);
SoIndexedFaceSet47->setSolid(false);
SoColorRGBA* SoColorRGBA48 = new SoColorRGBA();
SoColorRGBA48->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet47->addChild(*SoColorRGBA48);

SoCoordinate* SoCoordinate49 = new SoCoordinate();
SoCoordinate49->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet47->setCoord(*SoCoordinate49);

SoShape44->setGeometry(*SoIndexedFaceSet47);

SoHAnimSite42->addChild(*SoShape44);

SoBillboard* SoBillboard50 = new SoBillboard();
SoBillboard50->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape51 = new SoShape();
SoText* SoText52 = new SoText();
SoText52->setString(new QString[]{QString("42")}, 1);
SoFontStyle* SoFontStyle53 = new SoFontStyle();
SoFontStyle53->setSize(0.035);
SoText52->setFontStyle(*SoFontStyle53);

SoShape51->setGeometry(*SoText52);

SoBillboard50->addChild(*SoShape51);

SoHAnimSite42->addChild(SoBillboard50);

SoHAnimSegment17->addChild(*SoHAnimSite42);

SoHAnimSite* SoHAnimSite54 = new SoHAnimSite();
SoHAnimSite54->X3DNode::setName(QString("r_trochanterion"));
SoHAnimSite54->setDEF(QString("hanim_r_trochanterion_pt"));
SoHAnimSite54->setTranslation(new float[]{-0.14,0.8,0.0035});
SoTouchSensor* SoTouchSensor55 = new SoTouchSensor();
SoTouchSensor55->setDescription(QString("HAnimSite 46 hanim_r_trochanterion_pt"));
SoHAnimSite54->addChild(*SoTouchSensor55);

SoShape* SoShape56 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance57 = new SoVRMLAppearance();
SoMaterial* SoMaterial58 = new SoMaterial();
SoMaterial58->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance57->addChild(*SoMaterial58);

SoShape56->addChild(*SoVRMLAppearance57);

SoIndexedFaceSet* SoIndexedFaceSet59 = new SoIndexedFaceSet();
SoIndexedFaceSet59->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet59->setCreaseAngle(0.5);
SoIndexedFaceSet59->setSolid(false);
SoColorRGBA* SoColorRGBA60 = new SoColorRGBA();
SoColorRGBA60->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet59->addChild(*SoColorRGBA60);

SoCoordinate* SoCoordinate61 = new SoCoordinate();
SoCoordinate61->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet59->setCoord(*SoCoordinate61);

SoShape56->setGeometry(*SoIndexedFaceSet59);

SoHAnimSite54->addChild(*SoShape56);

SoBillboard* SoBillboard62 = new SoBillboard();
SoBillboard62->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape63 = new SoShape();
SoText* SoText64 = new SoText();
SoText64->setString(new QString[]{QString("46")}, 1);
SoFontStyle* SoFontStyle65 = new SoFontStyle();
SoFontStyle65->setSize(0.035);
SoText64->setFontStyle(*SoFontStyle65);

SoShape63->setGeometry(*SoText64);

SoBillboard62->addChild(*SoShape63);

SoHAnimSite54->addChild(SoBillboard62);

SoHAnimSegment17->addChild(*SoHAnimSite54);

SoHAnimSite* SoHAnimSite66 = new SoHAnimSite();
SoHAnimSite66->X3DNode::setName(QString("l_asis"));
SoHAnimSite66->setDEF(QString("hanim_l_asis_pt"));
SoHAnimSite66->setTranslation(new float[]{0.1,0.86,0.0035});
SoTouchSensor* SoTouchSensor67 = new SoTouchSensor();
SoTouchSensor67->setDescription(QString("HAnimSite 32 hanim_l_asis_pt"));
SoHAnimSite66->addChild(*SoTouchSensor67);

SoShape* SoShape68 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance69 = new SoVRMLAppearance();
SoMaterial* SoMaterial70 = new SoMaterial();
SoMaterial70->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance69->addChild(*SoMaterial70);

SoShape68->addChild(*SoVRMLAppearance69);

SoIndexedFaceSet* SoIndexedFaceSet71 = new SoIndexedFaceSet();
SoIndexedFaceSet71->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet71->setCreaseAngle(0.5);
SoIndexedFaceSet71->setSolid(false);
SoColorRGBA* SoColorRGBA72 = new SoColorRGBA();
SoColorRGBA72->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet71->addChild(*SoColorRGBA72);

SoCoordinate* SoCoordinate73 = new SoCoordinate();
SoCoordinate73->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet71->setCoord(*SoCoordinate73);

SoShape68->setGeometry(*SoIndexedFaceSet71);

SoHAnimSite66->addChild(*SoShape68);

SoBillboard* SoBillboard74 = new SoBillboard();
SoBillboard74->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape75 = new SoShape();
SoText* SoText76 = new SoText();
SoText76->setString(new QString[]{QString("32")}, 1);
SoFontStyle* SoFontStyle77 = new SoFontStyle();
SoFontStyle77->setSize(0.035);
SoText76->setFontStyle(*SoFontStyle77);

SoShape75->setGeometry(*SoText76);

SoBillboard74->addChild(*SoShape75);

SoHAnimSite66->addChild(SoBillboard74);

SoHAnimSegment17->addChild(*SoHAnimSite66);

SoHAnimSite* SoHAnimSite78 = new SoHAnimSite();
SoHAnimSite78->X3DNode::setName(QString("r_asis"));
SoHAnimSite78->setDEF(QString("hanim_r_asis_pt"));
SoHAnimSite78->setTranslation(new float[]{-0.1,0.86,0.0035});
SoTouchSensor* SoTouchSensor79 = new SoTouchSensor();
SoTouchSensor79->setDescription(QString("HAnimSite 35 hanim_r_asis_pt"));
SoHAnimSite78->addChild(*SoTouchSensor79);

SoShape* SoShape80 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance81 = new SoVRMLAppearance();
SoMaterial* SoMaterial82 = new SoMaterial();
SoMaterial82->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance81->addChild(*SoMaterial82);

SoShape80->addChild(*SoVRMLAppearance81);

SoIndexedFaceSet* SoIndexedFaceSet83 = new SoIndexedFaceSet();
SoIndexedFaceSet83->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet83->setCreaseAngle(0.5);
SoIndexedFaceSet83->setSolid(false);
SoColorRGBA* SoColorRGBA84 = new SoColorRGBA();
SoColorRGBA84->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet83->addChild(*SoColorRGBA84);

SoCoordinate* SoCoordinate85 = new SoCoordinate();
SoCoordinate85->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet83->setCoord(*SoCoordinate85);

SoShape80->setGeometry(*SoIndexedFaceSet83);

SoHAnimSite78->addChild(*SoShape80);

SoBillboard* SoBillboard86 = new SoBillboard();
SoBillboard86->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape87 = new SoShape();
SoText* SoText88 = new SoText();
SoText88->setString(new QString[]{QString("35")}, 1);
SoFontStyle* SoFontStyle89 = new SoFontStyle();
SoFontStyle89->setSize(0.035);
SoText88->setFontStyle(*SoFontStyle89);

SoShape87->setGeometry(*SoText88);

SoBillboard86->addChild(*SoShape87);

SoHAnimSite78->addChild(SoBillboard86);

SoHAnimSegment17->addChild(*SoHAnimSite78);

SoHAnimSite* SoHAnimSite90 = new SoHAnimSite();
SoHAnimSite90->X3DNode::setName(QString("l_psis"));
SoHAnimSite90->setDEF(QString("hanim_l_psis_pt"));
SoHAnimSite90->setTranslation(new float[]{0.05,0.84,-0.11});
SoTouchSensor* SoTouchSensor91 = new SoTouchSensor();
SoTouchSensor91->setDescription(QString("HAnimSite 34 hanim_l_psis_pt"));
SoHAnimSite90->addChild(*SoTouchSensor91);

SoShape* SoShape92 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance93 = new SoVRMLAppearance();
SoMaterial* SoMaterial94 = new SoMaterial();
SoMaterial94->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance93->addChild(*SoMaterial94);

SoShape92->addChild(*SoVRMLAppearance93);

SoIndexedFaceSet* SoIndexedFaceSet95 = new SoIndexedFaceSet();
SoIndexedFaceSet95->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet95->setCreaseAngle(0.5);
SoIndexedFaceSet95->setSolid(false);
SoColorRGBA* SoColorRGBA96 = new SoColorRGBA();
SoColorRGBA96->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet95->addChild(*SoColorRGBA96);

SoCoordinate* SoCoordinate97 = new SoCoordinate();
SoCoordinate97->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet95->setCoord(*SoCoordinate97);

SoShape92->setGeometry(*SoIndexedFaceSet95);

SoHAnimSite90->addChild(*SoShape92);

SoBillboard* SoBillboard98 = new SoBillboard();
SoBillboard98->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape99 = new SoShape();
SoText* SoText100 = new SoText();
SoText100->setString(new QString[]{QString("34")}, 1);
SoFontStyle* SoFontStyle101 = new SoFontStyle();
SoFontStyle101->setSize(0.035);
SoText100->setFontStyle(*SoFontStyle101);

SoShape99->setGeometry(*SoText100);

SoBillboard98->addChild(*SoShape99);

SoHAnimSite90->addChild(SoBillboard98);

SoHAnimSegment17->addChild(*SoHAnimSite90);

SoHAnimSite* SoHAnimSite102 = new SoHAnimSite();
SoHAnimSite102->X3DNode::setName(QString("r_psis"));
SoHAnimSite102->setDEF(QString("hanim_r_psis_pt"));
SoHAnimSite102->setTranslation(new float[]{-0.05,0.84,-0.11});
SoTouchSensor* SoTouchSensor103 = new SoTouchSensor();
SoTouchSensor103->setDescription(QString("HAnimSite 37 hanim_r_psis_pt"));
SoHAnimSite102->addChild(*SoTouchSensor103);

SoShape* SoShape104 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance105 = new SoVRMLAppearance();
SoMaterial* SoMaterial106 = new SoMaterial();
SoMaterial106->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance105->addChild(*SoMaterial106);

SoShape104->addChild(*SoVRMLAppearance105);

SoIndexedFaceSet* SoIndexedFaceSet107 = new SoIndexedFaceSet();
SoIndexedFaceSet107->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet107->setCreaseAngle(0.5);
SoIndexedFaceSet107->setSolid(false);
SoColorRGBA* SoColorRGBA108 = new SoColorRGBA();
SoColorRGBA108->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet107->addChild(*SoColorRGBA108);

SoCoordinate* SoCoordinate109 = new SoCoordinate();
SoCoordinate109->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet107->setCoord(*SoCoordinate109);

SoShape104->setGeometry(*SoIndexedFaceSet107);

SoHAnimSite102->addChild(*SoShape104);

SoBillboard* SoBillboard110 = new SoBillboard();
SoBillboard110->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape111 = new SoShape();
SoText* SoText112 = new SoText();
SoText112->setString(new QString[]{QString("37")}, 1);
SoFontStyle* SoFontStyle113 = new SoFontStyle();
SoFontStyle113->setSize(0.035);
SoText112->setFontStyle(*SoFontStyle113);

SoShape111->setGeometry(*SoText112);

SoBillboard110->addChild(*SoShape111);

SoHAnimSite102->addChild(SoBillboard110);

SoHAnimSegment17->addChild(*SoHAnimSite102);

SoHAnimSite* SoHAnimSite114 = new SoHAnimSite();
SoHAnimSite114->X3DNode::setName(QString("crotch"));
SoHAnimSite114->setDEF(QString("hanim_crotch_pt"));
SoHAnimSite114->setTranslation(new float[]{0.0,0.703,0.0});
SoTouchSensor* SoTouchSensor115 = new SoTouchSensor();
SoTouchSensor115->setDescription(QString("HAnimSite 38 hanim_crotch_pt"));
SoHAnimSite114->addChild(*SoTouchSensor115);

SoShape* SoShape116 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance117 = new SoVRMLAppearance();
SoMaterial* SoMaterial118 = new SoMaterial();
SoMaterial118->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance117->addChild(*SoMaterial118);

SoShape116->addChild(*SoVRMLAppearance117);

SoIndexedFaceSet* SoIndexedFaceSet119 = new SoIndexedFaceSet();
SoIndexedFaceSet119->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet119->setCreaseAngle(0.5);
SoIndexedFaceSet119->setSolid(false);
SoColorRGBA* SoColorRGBA120 = new SoColorRGBA();
SoColorRGBA120->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet119->addChild(*SoColorRGBA120);

SoCoordinate* SoCoordinate121 = new SoCoordinate();
SoCoordinate121->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet119->setCoord(*SoCoordinate121);

SoShape116->setGeometry(*SoIndexedFaceSet119);

SoHAnimSite114->addChild(*SoShape116);

SoBillboard* SoBillboard122 = new SoBillboard();
SoBillboard122->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape123 = new SoShape();
SoText* SoText124 = new SoText();
SoText124->setString(new QString[]{QString("38")}, 1);
SoFontStyle* SoFontStyle125 = new SoFontStyle();
SoFontStyle125->setSize(0.035);
SoText124->setFontStyle(*SoFontStyle125);

SoShape123->setGeometry(*SoText124);

SoBillboard122->addChild(*SoShape123);

SoHAnimSite114->addChild(SoBillboard122);

SoHAnimSegment17->addChild(*SoHAnimSite114);

SoHAnimSite* SoHAnimSite126 = new SoHAnimSite();
SoHAnimSite126->X3DNode::setName(QString("buttocks_standing_wall_contact_point"));
SoHAnimSite126->setDEF(QString("hanim_buttocks_standing_wall_contact_point_pt"));
SoHAnimSite126->setTranslation(new float[]{0.0,0.8,-0.15});
SoTouchSensor* SoTouchSensor127 = new SoTouchSensor();
SoTouchSensor127->setDescription(QString("HAnimSite 93 hanim_buttocks_standing_wall_contact_point_pt"));
SoHAnimSite126->addChild(*SoTouchSensor127);

SoShape* SoShape128 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance129 = new SoVRMLAppearance();
SoMaterial* SoMaterial130 = new SoMaterial();
SoMaterial130->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance129->addChild(*SoMaterial130);

SoShape128->addChild(*SoVRMLAppearance129);

SoIndexedFaceSet* SoIndexedFaceSet131 = new SoIndexedFaceSet();
SoIndexedFaceSet131->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet131->setCreaseAngle(0.5);
SoIndexedFaceSet131->setSolid(false);
SoColorRGBA* SoColorRGBA132 = new SoColorRGBA();
SoColorRGBA132->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet131->addChild(*SoColorRGBA132);

SoCoordinate* SoCoordinate133 = new SoCoordinate();
SoCoordinate133->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet131->setCoord(*SoCoordinate133);

SoShape128->setGeometry(*SoIndexedFaceSet131);

SoHAnimSite126->addChild(*SoShape128);

SoBillboard* SoBillboard134 = new SoBillboard();
SoBillboard134->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape135 = new SoShape();
SoText* SoText136 = new SoText();
SoText136->setString(new QString[]{QString("93")}, 1);
SoFontStyle* SoFontStyle137 = new SoFontStyle();
SoFontStyle137->setSize(0.035);
SoText136->setFontStyle(*SoFontStyle137);

SoShape135->setGeometry(*SoText136);

SoBillboard134->addChild(*SoShape135);

SoHAnimSite126->addChild(SoBillboard134);

SoHAnimSegment17->addChild(*SoHAnimSite126);

SoShape* SoShape138 = new SoShape();
SoLineSet* SoLineSet139 = new SoLineSet();
SoLineSet139->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA140 = new SoColorRGBA();
SoColorRGBA140->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet139->addChild(*SoColorRGBA140);

SoCoordinate* SoCoordinate141 = new SoCoordinate();
SoCoordinate141->setPoint(new float[]{0.0,0.826,0.02,0.0,0.77,0.0}, 6);
SoLineSet139->setCoord(*SoCoordinate141);

SoShape138->setGeometry(*SoLineSet139);

SoHAnimSegment17->addChild(*SoShape138);

SoHAnimJoint16->addChildren(*SoHAnimSegment17);

SoHAnimJoint* SoHAnimJoint142 = new SoHAnimJoint();
SoHAnimJoint142->X3DNode::setName(QString("l_hip"));
SoHAnimJoint142->setDEF(QString("hanim_l_hip"));
SoHAnimJoint142->setCenter(new float[]{0.095,0.8266,-0.0183});
SoHAnimJoint142->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint142->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment143 = new SoHAnimSegment();
SoHAnimSegment143->X3DNode::setName(QString("l_thigh"));
SoHAnimSegment143->setDEF(QString("hanim_l_thigh"));
SoHAnimSite* SoHAnimSite144 = new SoHAnimSite();
SoHAnimSite144->X3DNode::setName(QString("l_knee_crease"));
SoHAnimSite144->setDEF(QString("hanim_l_knee_crease_pt"));
SoHAnimSite144->setTranslation(new float[]{0.09,0.41,-0.056});
SoTouchSensor* SoTouchSensor145 = new SoTouchSensor();
SoTouchSensor145->setDescription(QString("HAnimSite 90 hanim_l_knee_crease_pt"));
SoHAnimSite144->addChild(*SoTouchSensor145);

SoShape* SoShape146 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance147 = new SoVRMLAppearance();
SoMaterial* SoMaterial148 = new SoMaterial();
SoMaterial148->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance147->addChild(*SoMaterial148);

SoShape146->addChild(*SoVRMLAppearance147);

SoIndexedFaceSet* SoIndexedFaceSet149 = new SoIndexedFaceSet();
SoIndexedFaceSet149->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet149->setCreaseAngle(0.5);
SoIndexedFaceSet149->setSolid(false);
SoColorRGBA* SoColorRGBA150 = new SoColorRGBA();
SoColorRGBA150->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet149->addChild(*SoColorRGBA150);

SoCoordinate* SoCoordinate151 = new SoCoordinate();
SoCoordinate151->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet149->setCoord(*SoCoordinate151);

SoShape146->setGeometry(*SoIndexedFaceSet149);

SoHAnimSite144->addChild(*SoShape146);

SoBillboard* SoBillboard152 = new SoBillboard();
SoBillboard152->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape153 = new SoShape();
SoText* SoText154 = new SoText();
SoText154->setString(new QString[]{QString("90")}, 1);
SoFontStyle* SoFontStyle155 = new SoFontStyle();
SoFontStyle155->setSize(0.035);
SoText154->setFontStyle(*SoFontStyle155);

SoShape153->setGeometry(*SoText154);

SoBillboard152->addChild(*SoShape153);

SoHAnimSite144->addChild(SoBillboard152);

SoHAnimSegment143->addChild(*SoHAnimSite144);

SoHAnimSite* SoHAnimSite156 = new SoHAnimSite();
SoHAnimSite156->X3DNode::setName(QString("l_femoral_medial_epicondyle"));
SoHAnimSite156->setDEF(QString("hanim_l_femoral_medial_epicondyle_pt"));
SoHAnimSite156->setTranslation(new float[]{0.039,0.41,-0.01});
SoTouchSensor* SoTouchSensor157 = new SoTouchSensor();
SoTouchSensor157->setDescription(QString("HAnimSite 40 hanim_l_femoral_medial_epicondyle_pt"));
SoHAnimSite156->addChild(*SoTouchSensor157);

SoShape* SoShape158 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance159 = new SoVRMLAppearance();
SoMaterial* SoMaterial160 = new SoMaterial();
SoMaterial160->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance159->addChild(*SoMaterial160);

SoShape158->addChild(*SoVRMLAppearance159);

SoIndexedFaceSet* SoIndexedFaceSet161 = new SoIndexedFaceSet();
SoIndexedFaceSet161->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet161->setCreaseAngle(0.5);
SoIndexedFaceSet161->setSolid(false);
SoColorRGBA* SoColorRGBA162 = new SoColorRGBA();
SoColorRGBA162->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet161->addChild(*SoColorRGBA162);

SoCoordinate* SoCoordinate163 = new SoCoordinate();
SoCoordinate163->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet161->setCoord(*SoCoordinate163);

SoShape158->setGeometry(*SoIndexedFaceSet161);

SoHAnimSite156->addChild(*SoShape158);

SoBillboard* SoBillboard164 = new SoBillboard();
SoBillboard164->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape165 = new SoShape();
SoText* SoText166 = new SoText();
SoText166->setString(new QString[]{QString("40")}, 1);
SoFontStyle* SoFontStyle167 = new SoFontStyle();
SoFontStyle167->setSize(0.035);
SoText166->setFontStyle(*SoFontStyle167);

SoShape165->setGeometry(*SoText166);

SoBillboard164->addChild(*SoShape165);

SoHAnimSite156->addChild(SoBillboard164);

SoHAnimSegment143->addChild(*SoHAnimSite156);

SoHAnimSite* SoHAnimSite168 = new SoHAnimSite();
SoHAnimSite168->X3DNode::setName(QString("l_femoral_lateral_epicondyle"));
SoHAnimSite168->setDEF(QString("hanim_l_femoral_lateral_epicondyle_pt"));
SoHAnimSite168->setTranslation(new float[]{0.127,0.41,-0.01});
SoTouchSensor* SoTouchSensor169 = new SoTouchSensor();
SoTouchSensor169->setDescription(QString("HAnimSite 39 hanim_l_femoral_lateral_epicondyle_pt"));
SoHAnimSite168->addChild(*SoTouchSensor169);

SoShape* SoShape170 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance171 = new SoVRMLAppearance();
SoMaterial* SoMaterial172 = new SoMaterial();
SoMaterial172->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance171->addChild(*SoMaterial172);

SoShape170->addChild(*SoVRMLAppearance171);

SoIndexedFaceSet* SoIndexedFaceSet173 = new SoIndexedFaceSet();
SoIndexedFaceSet173->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet173->setCreaseAngle(0.5);
SoIndexedFaceSet173->setSolid(false);
SoColorRGBA* SoColorRGBA174 = new SoColorRGBA();
SoColorRGBA174->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet173->addChild(*SoColorRGBA174);

SoCoordinate* SoCoordinate175 = new SoCoordinate();
SoCoordinate175->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet173->setCoord(*SoCoordinate175);

SoShape170->setGeometry(*SoIndexedFaceSet173);

SoHAnimSite168->addChild(*SoShape170);

SoBillboard* SoBillboard176 = new SoBillboard();
SoBillboard176->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape177 = new SoShape();
SoText* SoText178 = new SoText();
SoText178->setString(new QString[]{QString("39")}, 1);
SoFontStyle* SoFontStyle179 = new SoFontStyle();
SoFontStyle179->setSize(0.035);
SoText178->setFontStyle(*SoFontStyle179);

SoShape177->setGeometry(*SoText178);

SoBillboard176->addChild(*SoShape177);

SoHAnimSite168->addChild(SoBillboard176);

SoHAnimSegment143->addChild(*SoHAnimSite168);

SoHAnimSite* SoHAnimSite180 = new SoHAnimSite();
SoHAnimSite180->X3DNode::setName(QString("l_suprapatella"));
SoHAnimSite180->setDEF(QString("hanim_l_suprapatella_pt"));
SoHAnimSite180->setTranslation(new float[]{0.085,0.41,0.042});
SoTouchSensor* SoTouchSensor181 = new SoTouchSensor();
SoTouchSensor181->setDescription(QString("HAnimSite 41 hanim_l_suprapatella_pt"));
SoHAnimSite180->addChild(*SoTouchSensor181);

SoShape* SoShape182 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance183 = new SoVRMLAppearance();
SoMaterial* SoMaterial184 = new SoMaterial();
SoMaterial184->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance183->addChild(*SoMaterial184);

SoShape182->addChild(*SoVRMLAppearance183);

SoIndexedFaceSet* SoIndexedFaceSet185 = new SoIndexedFaceSet();
SoIndexedFaceSet185->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet185->setCreaseAngle(0.5);
SoIndexedFaceSet185->setSolid(false);
SoColorRGBA* SoColorRGBA186 = new SoColorRGBA();
SoColorRGBA186->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet185->addChild(*SoColorRGBA186);

SoCoordinate* SoCoordinate187 = new SoCoordinate();
SoCoordinate187->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet185->setCoord(*SoCoordinate187);

SoShape182->setGeometry(*SoIndexedFaceSet185);

SoHAnimSite180->addChild(*SoShape182);

SoBillboard* SoBillboard188 = new SoBillboard();
SoBillboard188->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape189 = new SoShape();
SoText* SoText190 = new SoText();
SoText190->setString(new QString[]{QString("41")}, 1);
SoFontStyle* SoFontStyle191 = new SoFontStyle();
SoFontStyle191->setSize(0.035);
SoText190->setFontStyle(*SoFontStyle191);

SoShape189->setGeometry(*SoText190);

SoBillboard188->addChild(*SoShape189);

SoHAnimSite180->addChild(SoBillboard188);

SoHAnimSegment143->addChild(*SoHAnimSite180);

SoShape* SoShape192 = new SoShape();
SoLineSet* SoLineSet193 = new SoLineSet();
SoLineSet193->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA194 = new SoColorRGBA();
SoColorRGBA194->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet193->addChild(*SoColorRGBA194);

SoCoordinate* SoCoordinate195 = new SoCoordinate();
SoCoordinate195->setPoint(new float[]{0.095,0.8266,-0.0183,0.0,0.826,0.02}, 6);
SoLineSet193->setCoord(*SoCoordinate195);

SoShape192->setGeometry(*SoLineSet193);

SoHAnimSegment143->addChild(*SoShape192);

SoHAnimJoint142->addChildren(*SoHAnimSegment143);

SoHAnimJoint* SoHAnimJoint196 = new SoHAnimJoint();
SoHAnimJoint196->X3DNode::setName(QString("l_knee"));
SoHAnimJoint196->setDEF(QString("hanim_l_knee"));
SoHAnimJoint196->setCenter(new float[]{0.0926,0.4088,-0.01944});
SoHAnimJoint196->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint196->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment197 = new SoHAnimSegment();
SoHAnimSegment197->X3DNode::setName(QString("l_calf"));
SoHAnimSegment197->setDEF(QString("hanim_l_calf"));
SoHAnimSite* SoHAnimSite198 = new SoHAnimSite();
SoHAnimSite198->X3DNode::setName(QString("l_tibiale"));
SoHAnimSite198->setDEF(QString("hanim_l_tibiale_pt"));
SoHAnimSite198->setTranslation(new float[]{0.09,0.31,0.038});
SoTouchSensor* SoTouchSensor199 = new SoTouchSensor();
SoTouchSensor199->setDescription(QString("HAnimSite 47 hanim_l_tibiale_pt"));
SoHAnimSite198->addChild(*SoTouchSensor199);

SoShape* SoShape200 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance201 = new SoVRMLAppearance();
SoMaterial* SoMaterial202 = new SoMaterial();
SoMaterial202->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance201->addChild(*SoMaterial202);

SoShape200->addChild(*SoVRMLAppearance201);

SoIndexedFaceSet* SoIndexedFaceSet203 = new SoIndexedFaceSet();
SoIndexedFaceSet203->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet203->setCreaseAngle(0.5);
SoIndexedFaceSet203->setSolid(false);
SoColorRGBA* SoColorRGBA204 = new SoColorRGBA();
SoColorRGBA204->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet203->addChild(*SoColorRGBA204);

SoCoordinate* SoCoordinate205 = new SoCoordinate();
SoCoordinate205->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet203->setCoord(*SoCoordinate205);

SoShape200->setGeometry(*SoIndexedFaceSet203);

SoHAnimSite198->addChild(*SoShape200);

SoBillboard* SoBillboard206 = new SoBillboard();
SoBillboard206->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape207 = new SoShape();
SoText* SoText208 = new SoText();
SoText208->setString(new QString[]{QString("47")}, 1);
SoFontStyle* SoFontStyle209 = new SoFontStyle();
SoFontStyle209->setSize(0.035);
SoText208->setFontStyle(*SoFontStyle209);

SoShape207->setGeometry(*SoText208);

SoBillboard206->addChild(*SoShape207);

SoHAnimSite198->addChild(SoBillboard206);

SoHAnimSegment197->addChild(*SoHAnimSite198);

SoHAnimSite* SoHAnimSite210 = new SoHAnimSite();
SoHAnimSite210->X3DNode::setName(QString("l_medial_malleolus"));
SoHAnimSite210->setDEF(QString("hanim_l_medial_malleolus_pt"));
SoHAnimSite210->setTranslation(new float[]{0.061,0.095,-0.02});
SoTouchSensor* SoTouchSensor211 = new SoTouchSensor();
SoTouchSensor211->setDescription(QString("HAnimSite 48 hanim_l_medial_malleolus_pt"));
SoHAnimSite210->addChild(*SoTouchSensor211);

SoShape* SoShape212 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance213 = new SoVRMLAppearance();
SoMaterial* SoMaterial214 = new SoMaterial();
SoMaterial214->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance213->addChild(*SoMaterial214);

SoShape212->addChild(*SoVRMLAppearance213);

SoIndexedFaceSet* SoIndexedFaceSet215 = new SoIndexedFaceSet();
SoIndexedFaceSet215->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet215->setCreaseAngle(0.5);
SoIndexedFaceSet215->setSolid(false);
SoColorRGBA* SoColorRGBA216 = new SoColorRGBA();
SoColorRGBA216->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet215->addChild(*SoColorRGBA216);

SoCoordinate* SoCoordinate217 = new SoCoordinate();
SoCoordinate217->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet215->setCoord(*SoCoordinate217);

SoShape212->setGeometry(*SoIndexedFaceSet215);

SoHAnimSite210->addChild(*SoShape212);

SoBillboard* SoBillboard218 = new SoBillboard();
SoBillboard218->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape219 = new SoShape();
SoText* SoText220 = new SoText();
SoText220->setString(new QString[]{QString("48")}, 1);
SoFontStyle* SoFontStyle221 = new SoFontStyle();
SoFontStyle221->setSize(0.035);
SoText220->setFontStyle(*SoFontStyle221);

SoShape219->setGeometry(*SoText220);

SoBillboard218->addChild(*SoShape219);

SoHAnimSite210->addChild(SoBillboard218);

SoHAnimSegment197->addChild(*SoHAnimSite210);

SoHAnimSite* SoHAnimSite222 = new SoHAnimSite();
SoHAnimSite222->X3DNode::setName(QString("l_lateral_malleolus"));
SoHAnimSite222->setDEF(QString("hanim_l_lateral_malleolus_pt"));
SoHAnimSite222->setTranslation(new float[]{0.12,0.095,-0.02});
SoTouchSensor* SoTouchSensor223 = new SoTouchSensor();
SoTouchSensor223->setDescription(QString("HAnimSite 49 hanim_l_lateral_malleolus_pt"));
SoHAnimSite222->addChild(*SoTouchSensor223);

SoShape* SoShape224 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance225 = new SoVRMLAppearance();
SoMaterial* SoMaterial226 = new SoMaterial();
SoMaterial226->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance225->addChild(*SoMaterial226);

SoShape224->addChild(*SoVRMLAppearance225);

SoIndexedFaceSet* SoIndexedFaceSet227 = new SoIndexedFaceSet();
SoIndexedFaceSet227->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet227->setCreaseAngle(0.5);
SoIndexedFaceSet227->setSolid(false);
SoColorRGBA* SoColorRGBA228 = new SoColorRGBA();
SoColorRGBA228->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet227->addChild(*SoColorRGBA228);

SoCoordinate* SoCoordinate229 = new SoCoordinate();
SoCoordinate229->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet227->setCoord(*SoCoordinate229);

SoShape224->setGeometry(*SoIndexedFaceSet227);

SoHAnimSite222->addChild(*SoShape224);

SoBillboard* SoBillboard230 = new SoBillboard();
SoBillboard230->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape231 = new SoShape();
SoText* SoText232 = new SoText();
SoText232->setString(new QString[]{QString("49")}, 1);
SoFontStyle* SoFontStyle233 = new SoFontStyle();
SoFontStyle233->setSize(0.035);
SoText232->setFontStyle(*SoFontStyle233);

SoShape231->setGeometry(*SoText232);

SoBillboard230->addChild(*SoShape231);

SoHAnimSite222->addChild(SoBillboard230);

SoHAnimSegment197->addChild(*SoHAnimSite222);

SoShape* SoShape234 = new SoShape();
SoLineSet* SoLineSet235 = new SoLineSet();
SoLineSet235->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA236 = new SoColorRGBA();
SoColorRGBA236->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet235->addChild(*SoColorRGBA236);

SoCoordinate* SoCoordinate237 = new SoCoordinate();
SoCoordinate237->setPoint(new float[]{0.0926,0.4088,-0.01944,0.095,0.8266,-0.0183}, 6);
SoLineSet235->setCoord(*SoCoordinate237);

SoShape234->setGeometry(*SoLineSet235);

SoHAnimSegment197->addChild(*SoShape234);

SoHAnimJoint196->addChildren(*SoHAnimSegment197);

SoHAnimJoint* SoHAnimJoint238 = new SoHAnimJoint();
SoHAnimJoint238->X3DNode::setName(QString("l_talocrural"));
SoHAnimJoint238->setDEF(QString("hanim_l_talocrural"));
SoHAnimJoint238->setCenter(new float[]{0.0888,0.09545,-0.01045});
SoHAnimJoint238->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint238->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment239 = new SoHAnimSegment();
SoHAnimSegment239->X3DNode::setName(QString("l_talus"));
SoHAnimSegment239->setDEF(QString("hanim_l_talus"));
SoHAnimSite* SoHAnimSite240 = new SoHAnimSite();
SoHAnimSite240->X3DNode::setName(QString("l_sphyrion"));
SoHAnimSite240->setDEF(QString("hanim_l_sphyrion_pt"));
SoHAnimSite240->setTranslation(new float[]{0.054,0.065,-0.02});
SoTouchSensor* SoTouchSensor241 = new SoTouchSensor();
SoTouchSensor241->setDescription(QString("HAnimSite 50 hanim_l_sphyrion_pt"));
SoHAnimSite240->addChild(*SoTouchSensor241);

SoShape* SoShape242 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance243 = new SoVRMLAppearance();
SoMaterial* SoMaterial244 = new SoMaterial();
SoMaterial244->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance243->addChild(*SoMaterial244);

SoShape242->addChild(*SoVRMLAppearance243);

SoIndexedFaceSet* SoIndexedFaceSet245 = new SoIndexedFaceSet();
SoIndexedFaceSet245->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet245->setCreaseAngle(0.5);
SoIndexedFaceSet245->setSolid(false);
SoColorRGBA* SoColorRGBA246 = new SoColorRGBA();
SoColorRGBA246->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet245->addChild(*SoColorRGBA246);

SoCoordinate* SoCoordinate247 = new SoCoordinate();
SoCoordinate247->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet245->setCoord(*SoCoordinate247);

SoShape242->setGeometry(*SoIndexedFaceSet245);

SoHAnimSite240->addChild(*SoShape242);

SoBillboard* SoBillboard248 = new SoBillboard();
SoBillboard248->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape249 = new SoShape();
SoText* SoText250 = new SoText();
SoText250->setString(new QString[]{QString("50")}, 1);
SoFontStyle* SoFontStyle251 = new SoFontStyle();
SoFontStyle251->setSize(0.035);
SoText250->setFontStyle(*SoFontStyle251);

SoShape249->setGeometry(*SoText250);

SoBillboard248->addChild(*SoShape249);

SoHAnimSite240->addChild(SoBillboard248);

SoHAnimSegment239->addChild(*SoHAnimSite240);

SoHAnimSite* SoHAnimSite252 = new SoHAnimSite();
SoHAnimSite252->X3DNode::setName(QString("l_calcaneus_posterior"));
SoHAnimSite252->setDEF(QString("hanim_l_calcaneus_posterior_pt"));
SoHAnimSite252->setTranslation(new float[]{0.09,0.03,-0.06});
SoTouchSensor* SoTouchSensor253 = new SoTouchSensor();
SoTouchSensor253->setDescription(QString("HAnimSite 58 hanim_l_calcaneus_posterior_pt"));
SoHAnimSite252->addChild(*SoTouchSensor253);

SoShape* SoShape254 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance255 = new SoVRMLAppearance();
SoMaterial* SoMaterial256 = new SoMaterial();
SoMaterial256->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance255->addChild(*SoMaterial256);

SoShape254->addChild(*SoVRMLAppearance255);

SoIndexedFaceSet* SoIndexedFaceSet257 = new SoIndexedFaceSet();
SoIndexedFaceSet257->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet257->setCreaseAngle(0.5);
SoIndexedFaceSet257->setSolid(false);
SoColorRGBA* SoColorRGBA258 = new SoColorRGBA();
SoColorRGBA258->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet257->addChild(*SoColorRGBA258);

SoCoordinate* SoCoordinate259 = new SoCoordinate();
SoCoordinate259->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet257->setCoord(*SoCoordinate259);

SoShape254->setGeometry(*SoIndexedFaceSet257);

SoHAnimSite252->addChild(*SoShape254);

SoBillboard* SoBillboard260 = new SoBillboard();
SoBillboard260->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape261 = new SoShape();
SoText* SoText262 = new SoText();
SoText262->setString(new QString[]{QString("58")}, 1);
SoFontStyle* SoFontStyle263 = new SoFontStyle();
SoFontStyle263->setSize(0.035);
SoText262->setFontStyle(*SoFontStyle263);

SoShape261->setGeometry(*SoText262);

SoBillboard260->addChild(*SoShape261);

SoHAnimSite252->addChild(SoBillboard260);

SoHAnimSegment239->addChild(*SoHAnimSite252);

SoShape* SoShape264 = new SoShape();
SoLineSet* SoLineSet265 = new SoLineSet();
SoLineSet265->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA266 = new SoColorRGBA();
SoColorRGBA266->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet265->addChild(*SoColorRGBA266);

SoCoordinate* SoCoordinate267 = new SoCoordinate();
SoCoordinate267->setPoint(new float[]{0.0888,0.09545,-0.01045,0.0926,0.4088,-0.01944}, 6);
SoLineSet265->setCoord(*SoCoordinate267);

SoShape264->setGeometry(*SoLineSet265);

SoHAnimSegment239->addChild(*SoShape264);

SoHAnimJoint238->addChildren(*SoHAnimSegment239);

SoHAnimJoint* SoHAnimJoint268 = new SoHAnimJoint();
SoHAnimJoint268->X3DNode::setName(QString("l_talocalcaneonavicular"));
SoHAnimJoint268->setDEF(QString("hanim_l_talocalcaneonavicular"));
SoHAnimJoint268->setCenter(new float[]{0.0783,0.0369,0.0049});
SoHAnimJoint268->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint268->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment269 = new SoHAnimSegment();
SoHAnimSegment269->X3DNode::setName(QString("l_navicular"));
SoHAnimSegment269->setDEF(QString("hanim_l_navicular"));
SoShape* SoShape270 = new SoShape();
SoLineSet* SoLineSet271 = new SoLineSet();
SoLineSet271->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA272 = new SoColorRGBA();
SoColorRGBA272->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet271->addChild(*SoColorRGBA272);

SoCoordinate* SoCoordinate273 = new SoCoordinate();
SoCoordinate273->setPoint(new float[]{0.0783,0.0369,0.0049,0.0888,0.09545,-0.01045}, 6);
SoLineSet271->setCoord(*SoCoordinate273);

SoShape270->setGeometry(*SoLineSet271);

SoHAnimSegment269->addChild(*SoShape270);

SoHAnimJoint268->addChildren(*SoHAnimSegment269);

SoHAnimJoint* SoHAnimJoint274 = new SoHAnimJoint();
SoHAnimJoint274->X3DNode::setName(QString("l_cuneonavicular_1"));
SoHAnimJoint274->setDEF(QString("hanim_l_cuneonavicular_1"));
SoHAnimJoint274->setCenter(new float[]{0.0674,0.0321,0.0184});
SoHAnimJoint274->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint274->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment275 = new SoHAnimSegment();
SoHAnimSegment275->X3DNode::setName(QString("l_cuneiform_1"));
SoHAnimSegment275->setDEF(QString("hanim_l_cuneiform_1"));
SoShape* SoShape276 = new SoShape();
SoLineSet* SoLineSet277 = new SoLineSet();
SoLineSet277->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA278 = new SoColorRGBA();
SoColorRGBA278->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet277->addChild(*SoColorRGBA278);

SoCoordinate* SoCoordinate279 = new SoCoordinate();
SoCoordinate279->setPoint(new float[]{0.0674,0.0321,0.0184,0.0783,0.0369,0.0049}, 6);
SoLineSet277->setCoord(*SoCoordinate279);

SoShape276->setGeometry(*SoLineSet277);

SoHAnimSegment275->addChild(*SoShape276);

SoHAnimJoint274->addChildren(*SoHAnimSegment275);

SoHAnimJoint* SoHAnimJoint280 = new SoHAnimJoint();
SoHAnimJoint280->X3DNode::setName(QString("l_tarsometatarsal_1"));
SoHAnimJoint280->setDEF(QString("hanim_l_tarsometatarsal_1"));
SoHAnimJoint280->setCenter(new float[]{0.0646,0.02324,0.0442});
SoHAnimJoint280->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint280->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment281 = new SoHAnimSegment();
SoHAnimSegment281->X3DNode::setName(QString("l_metatarsal_1"));
SoHAnimSegment281->setDEF(QString("hanim_l_metatarsal_1"));
SoShape* SoShape282 = new SoShape();
SoLineSet* SoLineSet283 = new SoLineSet();
SoLineSet283->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA284 = new SoColorRGBA();
SoColorRGBA284->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet283->addChild(*SoColorRGBA284);

SoCoordinate* SoCoordinate285 = new SoCoordinate();
SoCoordinate285->setPoint(new float[]{0.0646,0.02324,0.0442,0.0674,0.0321,0.0184}, 6);
SoLineSet283->setCoord(*SoCoordinate285);

SoShape282->setGeometry(*SoLineSet283);

SoHAnimSegment281->addChild(*SoShape282);

SoHAnimJoint280->addChildren(*SoHAnimSegment281);

SoHAnimJoint* SoHAnimJoint286 = new SoHAnimJoint();
SoHAnimJoint286->X3DNode::setName(QString("l_metatarsophalangeal_1"));
SoHAnimJoint286->setDEF(QString("hanim_l_metatarsophalangeal_1"));
SoHAnimJoint286->setCenter(new float[]{0.0621,0.01442,0.0936});
SoHAnimJoint286->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint286->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment287 = new SoHAnimSegment();
SoHAnimSegment287->X3DNode::setName(QString("l_tarsal_proximal_phalanx_1"));
SoHAnimSegment287->setDEF(QString("hanim_l_tarsal_proximal_phalanx_1"));
SoHAnimSite* SoHAnimSite288 = new SoHAnimSite();
SoHAnimSite288->X3DNode::setName(QString("l_metatarsal_phalanx_1"));
SoHAnimSite288->setDEF(QString("hanim_l_metatarsal_phalanx_1_pt"));
SoHAnimSite288->setTranslation(new float[]{0.062,0.012,0.1});
SoTouchSensor* SoTouchSensor289 = new SoTouchSensor();
SoTouchSensor289->setDescription(QString("HAnimSite 55 hanim_l_metatarsal_phalanx_1_pt"));
SoHAnimSite288->addChild(*SoTouchSensor289);

SoShape* SoShape290 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance291 = new SoVRMLAppearance();
SoMaterial* SoMaterial292 = new SoMaterial();
SoMaterial292->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance291->addChild(*SoMaterial292);

SoShape290->addChild(*SoVRMLAppearance291);

SoIndexedFaceSet* SoIndexedFaceSet293 = new SoIndexedFaceSet();
SoIndexedFaceSet293->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet293->setCreaseAngle(0.5);
SoIndexedFaceSet293->setSolid(false);
SoColorRGBA* SoColorRGBA294 = new SoColorRGBA();
SoColorRGBA294->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet293->addChild(*SoColorRGBA294);

SoCoordinate* SoCoordinate295 = new SoCoordinate();
SoCoordinate295->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet293->setCoord(*SoCoordinate295);

SoShape290->setGeometry(*SoIndexedFaceSet293);

SoHAnimSite288->addChild(*SoShape290);

SoBillboard* SoBillboard296 = new SoBillboard();
SoBillboard296->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape297 = new SoShape();
SoText* SoText298 = new SoText();
SoText298->setString(new QString[]{QString("55")}, 1);
SoFontStyle* SoFontStyle299 = new SoFontStyle();
SoFontStyle299->setSize(0.035);
SoText298->setFontStyle(*SoFontStyle299);

SoShape297->setGeometry(*SoText298);

SoBillboard296->addChild(*SoShape297);

SoHAnimSite288->addChild(SoBillboard296);

SoHAnimSegment287->addChild(*SoHAnimSite288);

SoShape* SoShape300 = new SoShape();
SoLineSet* SoLineSet301 = new SoLineSet();
SoLineSet301->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA302 = new SoColorRGBA();
SoColorRGBA302->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet301->addChild(*SoColorRGBA302);

SoCoordinate* SoCoordinate303 = new SoCoordinate();
SoCoordinate303->setPoint(new float[]{0.0621,0.01442,0.0936,0.0646,0.02324,0.0442}, 6);
SoLineSet301->setCoord(*SoCoordinate303);

SoShape300->setGeometry(*SoLineSet301);

SoHAnimSegment287->addChild(*SoShape300);

SoHAnimJoint286->addChildren(*SoHAnimSegment287);

SoHAnimJoint* SoHAnimJoint304 = new SoHAnimJoint();
SoHAnimJoint304->X3DNode::setName(QString("l_tarsal_interphalangeal_1"));
SoHAnimJoint304->setDEF(QString("hanim_l_tarsal_interphalangeal_1"));
SoHAnimJoint304->setCenter(new float[]{0.062,0.012,0.115});
SoHAnimJoint304->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint304->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment305 = new SoHAnimSegment();
SoHAnimSegment305->X3DNode::setName(QString("l_tarsal_distal_phalanx_1"));
SoHAnimSegment305->setDEF(QString("hanim_l_tarsal_distal_phalanx_1"));
SoHAnimSite* SoHAnimSite306 = new SoHAnimSite();
SoHAnimSite306->X3DNode::setName(QString("l_tarsal_distal_phalanx_1"));
SoHAnimSite306->setDEF(QString("hanim_l_tarsal_distal_phalanx_1_tip"));
SoHAnimSite306->setTranslation(new float[]{0.062,0.012,0.134});
SoTouchSensor* SoTouchSensor307 = new SoTouchSensor();
SoTouchSensor307->setDescription(QString("HAnimSite 111 hanim_l_tarsal_distal_phalanx_1_tip"));
SoHAnimSite306->addChild(*SoTouchSensor307);

SoShape* SoShape308 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance309 = new SoVRMLAppearance();
SoMaterial* SoMaterial310 = new SoMaterial();
SoMaterial310->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance309->addChild(*SoMaterial310);

SoShape308->addChild(*SoVRMLAppearance309);

SoIndexedFaceSet* SoIndexedFaceSet311 = new SoIndexedFaceSet();
SoIndexedFaceSet311->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet311->setCreaseAngle(0.5);
SoIndexedFaceSet311->setSolid(false);
SoColorRGBA* SoColorRGBA312 = new SoColorRGBA();
SoColorRGBA312->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet311->addChild(*SoColorRGBA312);

SoCoordinate* SoCoordinate313 = new SoCoordinate();
SoCoordinate313->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet311->setCoord(*SoCoordinate313);

SoShape308->setGeometry(*SoIndexedFaceSet311);

SoHAnimSite306->addChild(*SoShape308);

SoBillboard* SoBillboard314 = new SoBillboard();
SoBillboard314->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape315 = new SoShape();
SoText* SoText316 = new SoText();
SoText316->setString(new QString[]{QString("111")}, 1);
SoFontStyle* SoFontStyle317 = new SoFontStyle();
SoFontStyle317->setSize(0.035);
SoText316->setFontStyle(*SoFontStyle317);

SoShape315->setGeometry(*SoText316);

SoBillboard314->addChild(*SoShape315);

SoHAnimSite306->addChild(SoBillboard314);

SoHAnimSegment305->addChild(*SoHAnimSite306);

SoShape* SoShape318 = new SoShape();
SoLineSet* SoLineSet319 = new SoLineSet();
SoLineSet319->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA320 = new SoColorRGBA();
SoColorRGBA320->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet319->addChild(*SoColorRGBA320);

SoCoordinate* SoCoordinate321 = new SoCoordinate();
SoCoordinate321->setPoint(new float[]{0.062,0.012,0.115,0.0621,0.01442,0.0936}, 6);
SoLineSet319->setCoord(*SoCoordinate321);

SoShape318->setGeometry(*SoLineSet319);

SoHAnimSegment305->addChild(*SoShape318);

SoHAnimJoint304->addChildren(*SoHAnimSegment305);

SoHAnimJoint286->addChildren(*SoHAnimJoint304);

SoHAnimJoint280->addChildren(*SoHAnimJoint286);

SoHAnimJoint274->addChildren(*SoHAnimJoint280);

SoHAnimJoint268->addChildren(*SoHAnimJoint274);

SoHAnimJoint* SoHAnimJoint322 = new SoHAnimJoint();
SoHAnimJoint322->X3DNode::setName(QString("l_cuneonavicular_2"));
SoHAnimJoint322->setDEF(QString("hanim_l_cuneonavicular_2"));
SoHAnimJoint322->setCenter(new float[]{0.0814,0.0335,0.02143});
SoHAnimJoint322->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint322->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment323 = new SoHAnimSegment();
SoHAnimSegment323->X3DNode::setName(QString("l_cuneiform_2"));
SoHAnimSegment323->setDEF(QString("hanim_l_cuneiform_2"));
SoShape* SoShape324 = new SoShape();
SoLineSet* SoLineSet325 = new SoLineSet();
SoLineSet325->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA326 = new SoColorRGBA();
SoColorRGBA326->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet325->addChild(*SoColorRGBA326);

SoCoordinate* SoCoordinate327 = new SoCoordinate();
SoCoordinate327->setPoint(new float[]{0.0814,0.0335,0.02143,0.0783,0.0369,0.0049}, 6);
SoLineSet325->setCoord(*SoCoordinate327);

SoShape324->setGeometry(*SoLineSet325);

SoHAnimSegment323->addChild(*SoShape324);

SoHAnimJoint322->addChildren(*SoHAnimSegment323);

SoHAnimJoint* SoHAnimJoint328 = new SoHAnimJoint();
SoHAnimJoint328->X3DNode::setName(QString("l_tarsometatarsal_2"));
SoHAnimJoint328->setDEF(QString("hanim_l_tarsometatarsal_2"));
SoHAnimJoint328->setCenter(new float[]{0.0802,0.0261,0.0411});
SoHAnimJoint328->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint328->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment329 = new SoHAnimSegment();
SoHAnimSegment329->X3DNode::setName(QString("l_metatarsal_2"));
SoHAnimSegment329->setDEF(QString("hanim_l_metatarsal_2"));
SoShape* SoShape330 = new SoShape();
SoLineSet* SoLineSet331 = new SoLineSet();
SoLineSet331->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA332 = new SoColorRGBA();
SoColorRGBA332->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet331->addChild(*SoColorRGBA332);

SoCoordinate* SoCoordinate333 = new SoCoordinate();
SoCoordinate333->setPoint(new float[]{0.0802,0.0261,0.0411,0.0814,0.0335,0.02143}, 6);
SoLineSet331->setCoord(*SoCoordinate333);

SoShape330->setGeometry(*SoLineSet331);

SoHAnimSegment329->addChild(*SoShape330);

SoHAnimJoint328->addChildren(*SoHAnimSegment329);

SoHAnimJoint* SoHAnimJoint334 = new SoHAnimJoint();
SoHAnimJoint334->X3DNode::setName(QString("l_metatarsophalangeal_2"));
SoHAnimJoint334->setDEF(QString("hanim_l_metatarsophalangeal_2"));
SoHAnimJoint334->setCenter(new float[]{0.0825,0.01497,0.09783});
SoHAnimJoint334->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint334->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment335 = new SoHAnimSegment();
SoHAnimSegment335->X3DNode::setName(QString("l_tarsal_proximal_phalanx_2"));
SoHAnimSegment335->setDEF(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoShape* SoShape336 = new SoShape();
SoLineSet* SoLineSet337 = new SoLineSet();
SoLineSet337->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA338 = new SoColorRGBA();
SoColorRGBA338->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet337->addChild(*SoColorRGBA338);

SoCoordinate* SoCoordinate339 = new SoCoordinate();
SoCoordinate339->setPoint(new float[]{0.0825,0.01497,0.09783,0.0802,0.0261,0.0411}, 6);
SoLineSet337->setCoord(*SoCoordinate339);

SoShape336->setGeometry(*SoLineSet337);

SoHAnimSegment335->addChild(*SoShape336);

SoHAnimJoint334->addChildren(*SoHAnimSegment335);

SoHAnimJoint* SoHAnimJoint340 = new SoHAnimJoint();
SoHAnimJoint340->X3DNode::setName(QString("l_tarsal_proximal_interphalangeal_2"));
SoHAnimJoint340->setDEF(QString("hanim_l_tarsal_proximal_interphalangeal_2"));
SoHAnimJoint340->setCenter(new float[]{0.0843,0.01265,0.114});
SoHAnimJoint340->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint340->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment341 = new SoHAnimSegment();
SoHAnimSegment341->X3DNode::setName(QString("l_tarsal_middle_phalanx_2"));
SoHAnimSegment341->setDEF(QString("hanim_l_tarsal_middle_phalanx_2"));
SoShape* SoShape342 = new SoShape();
SoLineSet* SoLineSet343 = new SoLineSet();
SoLineSet343->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA344 = new SoColorRGBA();
SoColorRGBA344->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet343->addChild(*SoColorRGBA344);

SoCoordinate* SoCoordinate345 = new SoCoordinate();
SoCoordinate345->setPoint(new float[]{0.0843,0.01265,0.114,0.0825,0.01497,0.09783}, 6);
SoLineSet343->setCoord(*SoCoordinate345);

SoShape342->setGeometry(*SoLineSet343);

SoHAnimSegment341->addChild(*SoShape342);

SoHAnimJoint340->addChildren(*SoHAnimSegment341);

SoHAnimJoint* SoHAnimJoint346 = new SoHAnimJoint();
SoHAnimJoint346->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint346->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint346->setCenter(new float[]{0.0843,0.00982,0.123435});
SoHAnimJoint346->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint346->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment347 = new SoHAnimSegment();
SoHAnimSegment347->X3DNode::setName(QString("l_tarsal_distal_phalanx_2"));
SoHAnimSegment347->setDEF(QString("hanim_l_tarsal_distal_phalanx_2"));
SoHAnimSite* SoHAnimSite348 = new SoHAnimSite();
SoHAnimSite348->X3DNode::setName(QString("l_tarsal_distal_phalanx_2"));
SoHAnimSite348->setDEF(QString("hanim_l_tarsal_distal_phalanx_2_tip"));
SoHAnimSite348->setTranslation(new float[]{0.08,0.016,0.14});
SoTouchSensor* SoTouchSensor349 = new SoTouchSensor();
SoTouchSensor349->setDescription(QString("HAnimSite 112 hanim_l_tarsal_distal_phalanx_2_tip"));
SoHAnimSite348->addChild(*SoTouchSensor349);

SoShape* SoShape350 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance351 = new SoVRMLAppearance();
SoMaterial* SoMaterial352 = new SoMaterial();
SoMaterial352->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance351->addChild(*SoMaterial352);

SoShape350->addChild(*SoVRMLAppearance351);

SoIndexedFaceSet* SoIndexedFaceSet353 = new SoIndexedFaceSet();
SoIndexedFaceSet353->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet353->setCreaseAngle(0.5);
SoIndexedFaceSet353->setSolid(false);
SoColorRGBA* SoColorRGBA354 = new SoColorRGBA();
SoColorRGBA354->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet353->addChild(*SoColorRGBA354);

SoCoordinate* SoCoordinate355 = new SoCoordinate();
SoCoordinate355->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet353->setCoord(*SoCoordinate355);

SoShape350->setGeometry(*SoIndexedFaceSet353);

SoHAnimSite348->addChild(*SoShape350);

SoBillboard* SoBillboard356 = new SoBillboard();
SoBillboard356->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape357 = new SoShape();
SoText* SoText358 = new SoText();
SoText358->setString(new QString[]{QString("112")}, 1);
SoFontStyle* SoFontStyle359 = new SoFontStyle();
SoFontStyle359->setSize(0.035);
SoText358->setFontStyle(*SoFontStyle359);

SoShape357->setGeometry(*SoText358);

SoBillboard356->addChild(*SoShape357);

SoHAnimSite348->addChild(SoBillboard356);

SoHAnimSegment347->addChild(*SoHAnimSite348);

SoShape* SoShape360 = new SoShape();
SoLineSet* SoLineSet361 = new SoLineSet();
SoLineSet361->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA362 = new SoColorRGBA();
SoColorRGBA362->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet361->addChild(*SoColorRGBA362);

SoCoordinate* SoCoordinate363 = new SoCoordinate();
SoCoordinate363->setPoint(new float[]{0.0843,0.00982,0.123435,0.0843,0.01265,0.114}, 6);
SoLineSet361->setCoord(*SoCoordinate363);

SoShape360->setGeometry(*SoLineSet361);

SoHAnimSegment347->addChild(*SoShape360);

SoHAnimJoint346->addChildren(*SoHAnimSegment347);

SoHAnimJoint340->addChildren(*SoHAnimJoint346);

SoHAnimJoint334->addChildren(*SoHAnimJoint340);

SoHAnimJoint328->addChildren(*SoHAnimJoint334);

SoHAnimJoint322->addChildren(*SoHAnimJoint328);

SoHAnimJoint268->addChildren(*SoHAnimJoint322);

SoHAnimJoint* SoHAnimJoint364 = new SoHAnimJoint();
SoHAnimJoint364->X3DNode::setName(QString("l_cuneonavicular_3"));
SoHAnimJoint364->setDEF(QString("hanim_l_cuneonavicular_3"));
SoHAnimJoint364->setCenter(new float[]{0.09297,0.0334,0.01982});
SoHAnimJoint364->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint364->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment365 = new SoHAnimSegment();
SoHAnimSegment365->X3DNode::setName(QString("l_cuneiform_3"));
SoHAnimSegment365->setDEF(QString("hanim_l_cuneiform_3"));
SoShape* SoShape366 = new SoShape();
SoLineSet* SoLineSet367 = new SoLineSet();
SoLineSet367->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA368 = new SoColorRGBA();
SoColorRGBA368->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet367->addChild(*SoColorRGBA368);

SoCoordinate* SoCoordinate369 = new SoCoordinate();
SoCoordinate369->setPoint(new float[]{0.09297,0.0334,0.01982,0.0783,0.0369,0.0049}, 6);
SoLineSet367->setCoord(*SoCoordinate369);

SoShape366->setGeometry(*SoLineSet367);

SoHAnimSegment365->addChild(*SoShape366);

SoHAnimJoint364->addChildren(*SoHAnimSegment365);

SoHAnimJoint* SoHAnimJoint370 = new SoHAnimJoint();
SoHAnimJoint370->X3DNode::setName(QString("l_tarsometatarsal_3"));
SoHAnimJoint370->setDEF(QString("hanim_l_tarsometatarsal_3"));
SoHAnimJoint370->setCenter(new float[]{0.09459,0.0261,0.0394});
SoHAnimJoint370->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint370->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment371 = new SoHAnimSegment();
SoHAnimSegment371->X3DNode::setName(QString("l_metatarsal_3"));
SoHAnimSegment371->setDEF(QString("hanim_l_metatarsal_3"));
SoShape* SoShape372 = new SoShape();
SoLineSet* SoLineSet373 = new SoLineSet();
SoLineSet373->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA374 = new SoColorRGBA();
SoColorRGBA374->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet373->addChild(*SoColorRGBA374);

SoCoordinate* SoCoordinate375 = new SoCoordinate();
SoCoordinate375->setPoint(new float[]{0.09459,0.0261,0.0394,0.09297,0.0334,0.01982}, 6);
SoLineSet373->setCoord(*SoCoordinate375);

SoShape372->setGeometry(*SoLineSet373);

SoHAnimSegment371->addChild(*SoShape372);

SoHAnimJoint370->addChildren(*SoHAnimSegment371);

SoHAnimJoint* SoHAnimJoint376 = new SoHAnimJoint();
SoHAnimJoint376->X3DNode::setName(QString("l_metatarsophalangeal_3"));
SoHAnimJoint376->setDEF(QString("hanim_l_metatarsophalangeal_3"));
SoHAnimJoint376->setCenter(new float[]{0.0965,0.01505,0.0954});
SoHAnimJoint376->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint376->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment377 = new SoHAnimSegment();
SoHAnimSegment377->X3DNode::setName(QString("l_tarsal_proximal_phalanx_3"));
SoHAnimSegment377->setDEF(QString("hanim_l_tarsal_proximal_phalanx_3"));
SoShape* SoShape378 = new SoShape();
SoLineSet* SoLineSet379 = new SoLineSet();
SoLineSet379->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA380 = new SoColorRGBA();
SoColorRGBA380->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet379->addChild(*SoColorRGBA380);

SoCoordinate* SoCoordinate381 = new SoCoordinate();
SoCoordinate381->setPoint(new float[]{0.0965,0.01505,0.0954,0.09459,0.0261,0.0394}, 6);
SoLineSet379->setCoord(*SoCoordinate381);

SoShape378->setGeometry(*SoLineSet379);

SoHAnimSegment377->addChild(*SoShape378);

SoHAnimJoint376->addChildren(*SoHAnimSegment377);

SoHAnimJoint* SoHAnimJoint382 = new SoHAnimJoint();
SoHAnimJoint382->X3DNode::setName(QString("l_tarsal_proximal_interphalangeal_3"));
SoHAnimJoint382->setDEF(QString("hanim_l_tarsal_proximal_interphalangeal_3"));
SoHAnimJoint382->setCenter(new float[]{0.09886,0.01192,0.11047});
SoHAnimJoint382->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint382->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment383 = new SoHAnimSegment();
SoHAnimSegment383->X3DNode::setName(QString("l_tarsal_middle_phalanx_3"));
SoHAnimSegment383->setDEF(QString("hanim_l_tarsal_middle_phalanx_3"));
SoShape* SoShape384 = new SoShape();
SoLineSet* SoLineSet385 = new SoLineSet();
SoLineSet385->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA386 = new SoColorRGBA();
SoColorRGBA386->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet385->addChild(*SoColorRGBA386);

SoCoordinate* SoCoordinate387 = new SoCoordinate();
SoCoordinate387->setPoint(new float[]{0.09886,0.01192,0.11047,0.0965,0.01505,0.0954}, 6);
SoLineSet385->setCoord(*SoCoordinate387);

SoShape384->setGeometry(*SoLineSet385);

SoHAnimSegment383->addChild(*SoShape384);

SoHAnimJoint382->addChildren(*SoHAnimSegment383);

SoHAnimJoint* SoHAnimJoint388 = new SoHAnimJoint();
SoHAnimJoint388->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_3"));
SoHAnimJoint388->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_3"));
SoHAnimJoint388->setCenter(new float[]{0.1004,0.00983,0.1197});
SoHAnimJoint388->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint388->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment389 = new SoHAnimSegment();
SoHAnimSegment389->X3DNode::setName(QString("l_tarsal_distal_phalanx_3"));
SoHAnimSegment389->setDEF(QString("hanim_l_tarsal_distal_phalanx_3"));
SoHAnimSite* SoHAnimSite390 = new SoHAnimSite();
SoHAnimSite390->X3DNode::setName(QString("l_tarsal_distal_phalanx_3"));
SoHAnimSite390->setDEF(QString("hanim_l_tarsal_distal_phalanx_3_tip"));
SoHAnimSite390->setTranslation(new float[]{0.1,0.016,0.14});
SoTouchSensor* SoTouchSensor391 = new SoTouchSensor();
SoTouchSensor391->setDescription(QString("HAnimSite 113 hanim_l_tarsal_distal_phalanx_3_tip"));
SoHAnimSite390->addChild(*SoTouchSensor391);

SoShape* SoShape392 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance393 = new SoVRMLAppearance();
SoMaterial* SoMaterial394 = new SoMaterial();
SoMaterial394->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance393->addChild(*SoMaterial394);

SoShape392->addChild(*SoVRMLAppearance393);

SoIndexedFaceSet* SoIndexedFaceSet395 = new SoIndexedFaceSet();
SoIndexedFaceSet395->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet395->setCreaseAngle(0.5);
SoIndexedFaceSet395->setSolid(false);
SoColorRGBA* SoColorRGBA396 = new SoColorRGBA();
SoColorRGBA396->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet395->addChild(*SoColorRGBA396);

SoCoordinate* SoCoordinate397 = new SoCoordinate();
SoCoordinate397->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet395->setCoord(*SoCoordinate397);

SoShape392->setGeometry(*SoIndexedFaceSet395);

SoHAnimSite390->addChild(*SoShape392);

SoBillboard* SoBillboard398 = new SoBillboard();
SoBillboard398->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape399 = new SoShape();
SoText* SoText400 = new SoText();
SoText400->setString(new QString[]{QString("113")}, 1);
SoFontStyle* SoFontStyle401 = new SoFontStyle();
SoFontStyle401->setSize(0.035);
SoText400->setFontStyle(*SoFontStyle401);

SoShape399->setGeometry(*SoText400);

SoBillboard398->addChild(*SoShape399);

SoHAnimSite390->addChild(SoBillboard398);

SoHAnimSegment389->addChild(*SoHAnimSite390);

SoShape* SoShape402 = new SoShape();
SoLineSet* SoLineSet403 = new SoLineSet();
SoLineSet403->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA404 = new SoColorRGBA();
SoColorRGBA404->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet403->addChild(*SoColorRGBA404);

SoCoordinate* SoCoordinate405 = new SoCoordinate();
SoCoordinate405->setPoint(new float[]{0.1004,0.00983,0.1197,0.09886,0.01192,0.11047}, 6);
SoLineSet403->setCoord(*SoCoordinate405);

SoShape402->setGeometry(*SoLineSet403);

SoHAnimSegment389->addChild(*SoShape402);

SoHAnimJoint388->addChildren(*SoHAnimSegment389);

SoHAnimJoint382->addChildren(*SoHAnimJoint388);

SoHAnimJoint376->addChildren(*SoHAnimJoint382);

SoHAnimJoint370->addChildren(*SoHAnimJoint376);

SoHAnimJoint364->addChildren(*SoHAnimJoint370);

SoHAnimJoint268->addChildren(*SoHAnimJoint364);

SoHAnimJoint238->addChildren(*SoHAnimJoint268);

SoHAnimJoint* SoHAnimJoint406 = new SoHAnimJoint();
SoHAnimJoint406->X3DNode::setName(QString("l_calcaneocuboid"));
SoHAnimJoint406->setDEF(QString("hanim_l_calcaneocuboid"));
SoHAnimJoint406->setCenter(new float[]{0.0891,0.05798,-0.0259});
SoHAnimJoint406->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint406->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment407 = new SoHAnimSegment();
SoHAnimSegment407->X3DNode::setName(QString("l_calcaneus"));
SoHAnimSegment407->setDEF(QString("hanim_l_calcaneus"));
SoShape* SoShape408 = new SoShape();
SoLineSet* SoLineSet409 = new SoLineSet();
SoLineSet409->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA410 = new SoColorRGBA();
SoColorRGBA410->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet409->addChild(*SoColorRGBA410);

SoCoordinate* SoCoordinate411 = new SoCoordinate();
SoCoordinate411->setPoint(new float[]{0.0891,0.05798,-0.0259,0.0888,0.09545,-0.01045}, 6);
SoLineSet409->setCoord(*SoCoordinate411);

SoShape408->setGeometry(*SoLineSet409);

SoHAnimSegment407->addChild(*SoShape408);

SoHAnimJoint406->addChildren(*SoHAnimSegment407);

SoHAnimJoint* SoHAnimJoint412 = new SoHAnimJoint();
SoHAnimJoint412->X3DNode::setName(QString("l_transversetarsal"));
SoHAnimJoint412->setDEF(QString("hanim_l_transversetarsal"));
SoHAnimJoint412->setCenter(new float[]{0.11063,0.03528,0.0021});
SoHAnimJoint412->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint412->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment413 = new SoHAnimSegment();
SoHAnimSegment413->X3DNode::setName(QString("l_cuboid"));
SoHAnimSegment413->setDEF(QString("hanim_l_cuboid"));
SoShape* SoShape414 = new SoShape();
SoLineSet* SoLineSet415 = new SoLineSet();
SoLineSet415->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA416 = new SoColorRGBA();
SoColorRGBA416->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet415->addChild(*SoColorRGBA416);

SoCoordinate* SoCoordinate417 = new SoCoordinate();
SoCoordinate417->setPoint(new float[]{0.11063,0.03528,0.0021,0.0891,0.05798,-0.0259}, 6);
SoLineSet415->setCoord(*SoCoordinate417);

SoShape414->setGeometry(*SoLineSet415);

SoHAnimSegment413->addChild(*SoShape414);

SoHAnimJoint412->addChildren(*SoHAnimSegment413);

SoHAnimJoint* SoHAnimJoint418 = new SoHAnimJoint();
SoHAnimJoint418->X3DNode::setName(QString("l_tarsometatarsal_4"));
SoHAnimJoint418->setDEF(QString("hanim_l_tarsometatarsal_4"));
SoHAnimJoint418->setCenter(new float[]{0.10649,0.02454,0.03843});
SoHAnimJoint418->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint418->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment419 = new SoHAnimSegment();
SoHAnimSegment419->X3DNode::setName(QString("l_metatarsal_4"));
SoHAnimSegment419->setDEF(QString("hanim_l_metatarsal_4"));
SoShape* SoShape420 = new SoShape();
SoLineSet* SoLineSet421 = new SoLineSet();
SoLineSet421->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA422 = new SoColorRGBA();
SoColorRGBA422->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet421->addChild(*SoColorRGBA422);

SoCoordinate* SoCoordinate423 = new SoCoordinate();
SoCoordinate423->setPoint(new float[]{0.10649,0.02454,0.03843,0.11063,0.03528,0.0021}, 6);
SoLineSet421->setCoord(*SoCoordinate423);

SoShape420->setGeometry(*SoLineSet421);

SoHAnimSegment419->addChild(*SoShape420);

SoHAnimJoint418->addChildren(*SoHAnimSegment419);

SoHAnimJoint* SoHAnimJoint424 = new SoHAnimJoint();
SoHAnimJoint424->X3DNode::setName(QString("l_metatarsophalangeal_4"));
SoHAnimJoint424->setDEF(QString("hanim_l_metatarsophalangeal_4"));
SoHAnimJoint424->setCenter(new float[]{0.109867,0.01435,0.09117});
SoHAnimJoint424->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint424->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment425 = new SoHAnimSegment();
SoHAnimSegment425->X3DNode::setName(QString("l_tarsal_proximal_phalanx_4"));
SoHAnimSegment425->setDEF(QString("hanim_l_tarsal_proximal_phalanx_4"));
SoShape* SoShape426 = new SoShape();
SoLineSet* SoLineSet427 = new SoLineSet();
SoLineSet427->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA428 = new SoColorRGBA();
SoColorRGBA428->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet427->addChild(*SoColorRGBA428);

SoCoordinate* SoCoordinate429 = new SoCoordinate();
SoCoordinate429->setPoint(new float[]{0.109867,0.01435,0.09117,0.10649,0.02454,0.03843}, 6);
SoLineSet427->setCoord(*SoCoordinate429);

SoShape426->setGeometry(*SoLineSet427);

SoHAnimSegment425->addChild(*SoShape426);

SoHAnimJoint424->addChildren(*SoHAnimSegment425);

SoHAnimJoint* SoHAnimJoint430 = new SoHAnimJoint();
SoHAnimJoint430->X3DNode::setName(QString("l_tarsal_proximal_interphalangeal_4"));
SoHAnimJoint430->setDEF(QString("hanim_l_tarsal_proximal_interphalangeal_4"));
SoHAnimJoint430->setCenter(new float[]{0.11416,0.01224,0.10631});
SoHAnimJoint430->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint430->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment431 = new SoHAnimSegment();
SoHAnimSegment431->X3DNode::setName(QString("l_tarsal_middle_phalanx_4"));
SoHAnimSegment431->setDEF(QString("hanim_l_tarsal_middle_phalanx_4"));
SoShape* SoShape432 = new SoShape();
SoLineSet* SoLineSet433 = new SoLineSet();
SoLineSet433->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA434 = new SoColorRGBA();
SoColorRGBA434->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet433->addChild(*SoColorRGBA434);

SoCoordinate* SoCoordinate435 = new SoCoordinate();
SoCoordinate435->setPoint(new float[]{0.11416,0.01224,0.10631,0.109867,0.01435,0.09117}, 6);
SoLineSet433->setCoord(*SoCoordinate435);

SoShape432->setGeometry(*SoLineSet433);

SoHAnimSegment431->addChild(*SoShape432);

SoHAnimJoint430->addChildren(*SoHAnimSegment431);

SoHAnimJoint* SoHAnimJoint436 = new SoHAnimJoint();
SoHAnimJoint436->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_4"));
SoHAnimJoint436->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_4"));
SoHAnimJoint436->setCenter(new float[]{0.11567,0.00936,0.11369});
SoHAnimJoint436->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint436->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment437 = new SoHAnimSegment();
SoHAnimSegment437->X3DNode::setName(QString("l_tarsal_distal_phalanx_4"));
SoHAnimSegment437->setDEF(QString("hanim_l_tarsal_distal_phalanx_4"));
SoHAnimSite* SoHAnimSite438 = new SoHAnimSite();
SoHAnimSite438->X3DNode::setName(QString("l_tarsal_distal_phalanx_4"));
SoHAnimSite438->setDEF(QString("hanim_l_tarsal_distal_phalanx_4_tip"));
SoHAnimSite438->setTranslation(new float[]{0.115,0.016,0.13});
SoTouchSensor* SoTouchSensor439 = new SoTouchSensor();
SoTouchSensor439->setDescription(QString("HAnimSite 114 hanim_l_tarsal_distal_phalanx_4_tip"));
SoHAnimSite438->addChild(*SoTouchSensor439);

SoShape* SoShape440 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance441 = new SoVRMLAppearance();
SoMaterial* SoMaterial442 = new SoMaterial();
SoMaterial442->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance441->addChild(*SoMaterial442);

SoShape440->addChild(*SoVRMLAppearance441);

SoIndexedFaceSet* SoIndexedFaceSet443 = new SoIndexedFaceSet();
SoIndexedFaceSet443->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet443->setCreaseAngle(0.5);
SoIndexedFaceSet443->setSolid(false);
SoColorRGBA* SoColorRGBA444 = new SoColorRGBA();
SoColorRGBA444->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet443->addChild(*SoColorRGBA444);

SoCoordinate* SoCoordinate445 = new SoCoordinate();
SoCoordinate445->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet443->setCoord(*SoCoordinate445);

SoShape440->setGeometry(*SoIndexedFaceSet443);

SoHAnimSite438->addChild(*SoShape440);

SoBillboard* SoBillboard446 = new SoBillboard();
SoBillboard446->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape447 = new SoShape();
SoText* SoText448 = new SoText();
SoText448->setString(new QString[]{QString("114")}, 1);
SoFontStyle* SoFontStyle449 = new SoFontStyle();
SoFontStyle449->setSize(0.035);
SoText448->setFontStyle(*SoFontStyle449);

SoShape447->setGeometry(*SoText448);

SoBillboard446->addChild(*SoShape447);

SoHAnimSite438->addChild(SoBillboard446);

SoHAnimSegment437->addChild(*SoHAnimSite438);

SoShape* SoShape450 = new SoShape();
SoLineSet* SoLineSet451 = new SoLineSet();
SoLineSet451->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA452 = new SoColorRGBA();
SoColorRGBA452->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet451->addChild(*SoColorRGBA452);

SoCoordinate* SoCoordinate453 = new SoCoordinate();
SoCoordinate453->setPoint(new float[]{0.11567,0.00936,0.11369,0.11416,0.01224,0.10631}, 6);
SoLineSet451->setCoord(*SoCoordinate453);

SoShape450->setGeometry(*SoLineSet451);

SoHAnimSegment437->addChild(*SoShape450);

SoHAnimJoint436->addChildren(*SoHAnimSegment437);

SoHAnimJoint430->addChildren(*SoHAnimJoint436);

SoHAnimJoint424->addChildren(*SoHAnimJoint430);

SoHAnimJoint418->addChildren(*SoHAnimJoint424);

SoHAnimJoint412->addChildren(*SoHAnimJoint418);

SoHAnimJoint* SoHAnimJoint454 = new SoHAnimJoint();
SoHAnimJoint454->X3DNode::setName(QString("l_tarsometatarsal_5"));
SoHAnimJoint454->setDEF(QString("hanim_l_tarsometatarsal_5"));
SoHAnimJoint454->setCenter(new float[]{0.1208,0.02094,0.03474});
SoHAnimJoint454->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint454->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment455 = new SoHAnimSegment();
SoHAnimSegment455->X3DNode::setName(QString("l_metatarsal_5"));
SoHAnimSegment455->setDEF(QString("hanim_l_metatarsal_5"));
SoShape* SoShape456 = new SoShape();
SoLineSet* SoLineSet457 = new SoLineSet();
SoLineSet457->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA458 = new SoColorRGBA();
SoColorRGBA458->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet457->addChild(*SoColorRGBA458);

SoCoordinate* SoCoordinate459 = new SoCoordinate();
SoCoordinate459->setPoint(new float[]{0.1208,0.02094,0.03474,0.11063,0.03528,0.0021}, 6);
SoLineSet457->setCoord(*SoCoordinate459);

SoShape456->setGeometry(*SoLineSet457);

SoHAnimSegment455->addChild(*SoShape456);

SoHAnimJoint454->addChildren(*SoHAnimSegment455);

SoHAnimJoint* SoHAnimJoint460 = new SoHAnimJoint();
SoHAnimJoint460->X3DNode::setName(QString("l_metatarsophalangeal_5"));
SoHAnimJoint460->setDEF(QString("hanim_l_metatarsophalangeal_5"));
SoHAnimJoint460->setCenter(new float[]{0.124065,0.01367,0.08656});
SoHAnimJoint460->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint460->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment461 = new SoHAnimSegment();
SoHAnimSegment461->X3DNode::setName(QString("l_tarsal_proximal_phalanx_5"));
SoHAnimSegment461->setDEF(QString("hanim_l_tarsal_proximal_phalanx_5"));
SoShape* SoShape462 = new SoShape();
SoLineSet* SoLineSet463 = new SoLineSet();
SoLineSet463->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA464 = new SoColorRGBA();
SoColorRGBA464->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet463->addChild(*SoColorRGBA464);

SoCoordinate* SoCoordinate465 = new SoCoordinate();
SoCoordinate465->setPoint(new float[]{0.124065,0.01367,0.08656,0.1208,0.02094,0.03474}, 6);
SoLineSet463->setCoord(*SoCoordinate465);

SoShape462->setGeometry(*SoLineSet463);

SoHAnimSegment461->addChild(*SoShape462);

SoHAnimJoint460->addChildren(*SoHAnimSegment461);

SoHAnimJoint* SoHAnimJoint466 = new SoHAnimJoint();
SoHAnimJoint466->X3DNode::setName(QString("l_tarsal_proximal_interphalangeal_5"));
SoHAnimJoint466->setDEF(QString("hanim_l_tarsal_proximal_interphalangeal_5"));
SoHAnimJoint466->setCenter(new float[]{0.12638,0.01086,0.09414});
SoHAnimJoint466->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint466->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment467 = new SoHAnimSegment();
SoHAnimSegment467->X3DNode::setName(QString("l_tarsal_middle_phalanx_5"));
SoHAnimSegment467->setDEF(QString("hanim_l_tarsal_middle_phalanx_5"));
SoHAnimSite* SoHAnimSite468 = new SoHAnimSite();
SoHAnimSite468->X3DNode::setName(QString("l_metatarsal_phalanx_5"));
SoHAnimSite468->setDEF(QString("hanim_l_metatarsal_phalanx_5_pt"));
SoHAnimSite468->setTranslation(new float[]{0.12,0.02,0.04});
SoTouchSensor* SoTouchSensor469 = new SoTouchSensor();
SoTouchSensor469->setDescription(QString("HAnimSite 56 hanim_l_metatarsal_phalanx_5_pt"));
SoHAnimSite468->addChild(*SoTouchSensor469);

SoShape* SoShape470 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance471 = new SoVRMLAppearance();
SoMaterial* SoMaterial472 = new SoMaterial();
SoMaterial472->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance471->addChild(*SoMaterial472);

SoShape470->addChild(*SoVRMLAppearance471);

SoIndexedFaceSet* SoIndexedFaceSet473 = new SoIndexedFaceSet();
SoIndexedFaceSet473->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet473->setCreaseAngle(0.5);
SoIndexedFaceSet473->setSolid(false);
SoColorRGBA* SoColorRGBA474 = new SoColorRGBA();
SoColorRGBA474->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet473->addChild(*SoColorRGBA474);

SoCoordinate* SoCoordinate475 = new SoCoordinate();
SoCoordinate475->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet473->setCoord(*SoCoordinate475);

SoShape470->setGeometry(*SoIndexedFaceSet473);

SoHAnimSite468->addChild(*SoShape470);

SoBillboard* SoBillboard476 = new SoBillboard();
SoBillboard476->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape477 = new SoShape();
SoText* SoText478 = new SoText();
SoText478->setString(new QString[]{QString("56")}, 1);
SoFontStyle* SoFontStyle479 = new SoFontStyle();
SoFontStyle479->setSize(0.035);
SoText478->setFontStyle(*SoFontStyle479);

SoShape477->setGeometry(*SoText478);

SoBillboard476->addChild(*SoShape477);

SoHAnimSite468->addChild(SoBillboard476);

SoHAnimSegment467->addChild(*SoHAnimSite468);

SoShape* SoShape480 = new SoShape();
SoLineSet* SoLineSet481 = new SoLineSet();
SoLineSet481->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA482 = new SoColorRGBA();
SoColorRGBA482->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet481->addChild(*SoColorRGBA482);

SoCoordinate* SoCoordinate483 = new SoCoordinate();
SoCoordinate483->setPoint(new float[]{0.12638,0.01086,0.09414,0.124065,0.01367,0.08656}, 6);
SoLineSet481->setCoord(*SoCoordinate483);

SoShape480->setGeometry(*SoLineSet481);

SoHAnimSegment467->addChild(*SoShape480);

SoHAnimJoint466->addChildren(*SoHAnimSegment467);

SoHAnimJoint* SoHAnimJoint484 = new SoHAnimJoint();
SoHAnimJoint484->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_5"));
SoHAnimJoint484->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_5"));
SoHAnimJoint484->setCenter(new float[]{0.12728,0.00856,0.10188});
SoHAnimJoint484->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint484->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment485 = new SoHAnimSegment();
SoHAnimSegment485->X3DNode::setName(QString("l_tarsal_distal_phalanx_5"));
SoHAnimSegment485->setDEF(QString("hanim_l_tarsal_distal_phalanx_5"));
SoHAnimSite* SoHAnimSite486 = new SoHAnimSite();
SoHAnimSite486->X3DNode::setName(QString("l_tarsal_distal_phalanx_5"));
SoHAnimSite486->setDEF(QString("hanim_l_tarsal_distal_phalanx_5_tip"));
SoHAnimSite486->setTranslation(new float[]{0.125,0.016,0.115});
SoTouchSensor* SoTouchSensor487 = new SoTouchSensor();
SoTouchSensor487->setDescription(QString("HAnimSite 115 hanim_l_tarsal_distal_phalanx_5_tip"));
SoHAnimSite486->addChild(*SoTouchSensor487);

SoShape* SoShape488 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance489 = new SoVRMLAppearance();
SoMaterial* SoMaterial490 = new SoMaterial();
SoMaterial490->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance489->addChild(*SoMaterial490);

SoShape488->addChild(*SoVRMLAppearance489);

SoIndexedFaceSet* SoIndexedFaceSet491 = new SoIndexedFaceSet();
SoIndexedFaceSet491->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet491->setCreaseAngle(0.5);
SoIndexedFaceSet491->setSolid(false);
SoColorRGBA* SoColorRGBA492 = new SoColorRGBA();
SoColorRGBA492->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet491->addChild(*SoColorRGBA492);

SoCoordinate* SoCoordinate493 = new SoCoordinate();
SoCoordinate493->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet491->setCoord(*SoCoordinate493);

SoShape488->setGeometry(*SoIndexedFaceSet491);

SoHAnimSite486->addChild(*SoShape488);

SoBillboard* SoBillboard494 = new SoBillboard();
SoBillboard494->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape495 = new SoShape();
SoText* SoText496 = new SoText();
SoText496->setString(new QString[]{QString("115")}, 1);
SoFontStyle* SoFontStyle497 = new SoFontStyle();
SoFontStyle497->setSize(0.035);
SoText496->setFontStyle(*SoFontStyle497);

SoShape495->setGeometry(*SoText496);

SoBillboard494->addChild(*SoShape495);

SoHAnimSite486->addChild(SoBillboard494);

SoHAnimSegment485->addChild(*SoHAnimSite486);

SoShape* SoShape498 = new SoShape();
SoLineSet* SoLineSet499 = new SoLineSet();
SoLineSet499->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA500 = new SoColorRGBA();
SoColorRGBA500->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet499->addChild(*SoColorRGBA500);

SoCoordinate* SoCoordinate501 = new SoCoordinate();
SoCoordinate501->setPoint(new float[]{0.12728,0.00856,0.10188,0.12638,0.01086,0.09414}, 6);
SoLineSet499->setCoord(*SoCoordinate501);

SoShape498->setGeometry(*SoLineSet499);

SoHAnimSegment485->addChild(*SoShape498);

SoHAnimJoint484->addChildren(*SoHAnimSegment485);

SoHAnimJoint466->addChildren(*SoHAnimJoint484);

SoHAnimJoint460->addChildren(*SoHAnimJoint466);

SoHAnimJoint454->addChildren(*SoHAnimJoint460);

SoHAnimJoint412->addChildren(*SoHAnimJoint454);

SoHAnimJoint406->addChildren(*SoHAnimJoint412);

SoHAnimJoint238->addChildren(*SoHAnimJoint406);

SoHAnimJoint196->addChildren(*SoHAnimJoint238);

SoHAnimJoint142->addChildren(*SoHAnimJoint196);

SoHAnimJoint16->addChildren(*SoHAnimJoint142);

SoHAnimJoint* SoHAnimJoint502 = new SoHAnimJoint();
SoHAnimJoint502->X3DNode::setName(QString("r_hip"));
SoHAnimJoint502->setDEF(QString("hanim_r_hip"));
SoHAnimJoint502->setCenter(new float[]{-0.09466,0.82665,-0.01835});
SoHAnimJoint502->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint502->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment503 = new SoHAnimSegment();
SoHAnimSegment503->X3DNode::setName(QString("r_thigh"));
SoHAnimSegment503->setDEF(QString("hanim_r_thigh"));
SoHAnimSite* SoHAnimSite504 = new SoHAnimSite();
SoHAnimSite504->X3DNode::setName(QString("r_knee_crease"));
SoHAnimSite504->setDEF(QString("hanim_r_knee_crease_pt"));
SoHAnimSite504->setTranslation(new float[]{-0.09,0.41,-0.056});
SoTouchSensor* SoTouchSensor505 = new SoTouchSensor();
SoTouchSensor505->setDescription(QString("HAnimSite 91 hanim_r_knee_crease_pt"));
SoHAnimSite504->addChild(*SoTouchSensor505);

SoShape* SoShape506 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance507 = new SoVRMLAppearance();
SoMaterial* SoMaterial508 = new SoMaterial();
SoMaterial508->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance507->addChild(*SoMaterial508);

SoShape506->addChild(*SoVRMLAppearance507);

SoIndexedFaceSet* SoIndexedFaceSet509 = new SoIndexedFaceSet();
SoIndexedFaceSet509->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet509->setCreaseAngle(0.5);
SoIndexedFaceSet509->setSolid(false);
SoColorRGBA* SoColorRGBA510 = new SoColorRGBA();
SoColorRGBA510->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet509->addChild(*SoColorRGBA510);

SoCoordinate* SoCoordinate511 = new SoCoordinate();
SoCoordinate511->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet509->setCoord(*SoCoordinate511);

SoShape506->setGeometry(*SoIndexedFaceSet509);

SoHAnimSite504->addChild(*SoShape506);

SoBillboard* SoBillboard512 = new SoBillboard();
SoBillboard512->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape513 = new SoShape();
SoText* SoText514 = new SoText();
SoText514->setString(new QString[]{QString("91")}, 1);
SoFontStyle* SoFontStyle515 = new SoFontStyle();
SoFontStyle515->setSize(0.035);
SoText514->setFontStyle(*SoFontStyle515);

SoShape513->setGeometry(*SoText514);

SoBillboard512->addChild(*SoShape513);

SoHAnimSite504->addChild(SoBillboard512);

SoHAnimSegment503->addChild(*SoHAnimSite504);

SoHAnimSite* SoHAnimSite516 = new SoHAnimSite();
SoHAnimSite516->X3DNode::setName(QString("r_femoral_medial_epicondyle"));
SoHAnimSite516->setDEF(QString("hanim_r_femoral_medial_epicondyle_pt"));
SoHAnimSite516->setTranslation(new float[]{-0.039,0.41,-0.01});
SoTouchSensor* SoTouchSensor517 = new SoTouchSensor();
SoTouchSensor517->setDescription(QString("HAnimSite 44 hanim_r_femoral_medial_epicondyle_pt"));
SoHAnimSite516->addChild(*SoTouchSensor517);

SoShape* SoShape518 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance519 = new SoVRMLAppearance();
SoMaterial* SoMaterial520 = new SoMaterial();
SoMaterial520->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance519->addChild(*SoMaterial520);

SoShape518->addChild(*SoVRMLAppearance519);

SoIndexedFaceSet* SoIndexedFaceSet521 = new SoIndexedFaceSet();
SoIndexedFaceSet521->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet521->setCreaseAngle(0.5);
SoIndexedFaceSet521->setSolid(false);
SoColorRGBA* SoColorRGBA522 = new SoColorRGBA();
SoColorRGBA522->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet521->addChild(*SoColorRGBA522);

SoCoordinate* SoCoordinate523 = new SoCoordinate();
SoCoordinate523->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet521->setCoord(*SoCoordinate523);

SoShape518->setGeometry(*SoIndexedFaceSet521);

SoHAnimSite516->addChild(*SoShape518);

SoBillboard* SoBillboard524 = new SoBillboard();
SoBillboard524->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape525 = new SoShape();
SoText* SoText526 = new SoText();
SoText526->setString(new QString[]{QString("44")}, 1);
SoFontStyle* SoFontStyle527 = new SoFontStyle();
SoFontStyle527->setSize(0.035);
SoText526->setFontStyle(*SoFontStyle527);

SoShape525->setGeometry(*SoText526);

SoBillboard524->addChild(*SoShape525);

SoHAnimSite516->addChild(SoBillboard524);

SoHAnimSegment503->addChild(*SoHAnimSite516);

SoHAnimSite* SoHAnimSite528 = new SoHAnimSite();
SoHAnimSite528->X3DNode::setName(QString("r_femoral_lateral_epicondyle"));
SoHAnimSite528->setDEF(QString("hanim_r_femoral_lateral_epicondyle_pt"));
SoHAnimSite528->setTranslation(new float[]{-0.127,0.41,-0.01});
SoTouchSensor* SoTouchSensor529 = new SoTouchSensor();
SoTouchSensor529->setDescription(QString("HAnimSite 43 hanim_r_femoral_lateral_epicondyle_pt"));
SoHAnimSite528->addChild(*SoTouchSensor529);

SoShape* SoShape530 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance531 = new SoVRMLAppearance();
SoMaterial* SoMaterial532 = new SoMaterial();
SoMaterial532->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance531->addChild(*SoMaterial532);

SoShape530->addChild(*SoVRMLAppearance531);

SoIndexedFaceSet* SoIndexedFaceSet533 = new SoIndexedFaceSet();
SoIndexedFaceSet533->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet533->setCreaseAngle(0.5);
SoIndexedFaceSet533->setSolid(false);
SoColorRGBA* SoColorRGBA534 = new SoColorRGBA();
SoColorRGBA534->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet533->addChild(*SoColorRGBA534);

SoCoordinate* SoCoordinate535 = new SoCoordinate();
SoCoordinate535->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet533->setCoord(*SoCoordinate535);

SoShape530->setGeometry(*SoIndexedFaceSet533);

SoHAnimSite528->addChild(*SoShape530);

SoBillboard* SoBillboard536 = new SoBillboard();
SoBillboard536->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape537 = new SoShape();
SoText* SoText538 = new SoText();
SoText538->setString(new QString[]{QString("43")}, 1);
SoFontStyle* SoFontStyle539 = new SoFontStyle();
SoFontStyle539->setSize(0.035);
SoText538->setFontStyle(*SoFontStyle539);

SoShape537->setGeometry(*SoText538);

SoBillboard536->addChild(*SoShape537);

SoHAnimSite528->addChild(SoBillboard536);

SoHAnimSegment503->addChild(*SoHAnimSite528);

SoHAnimSite* SoHAnimSite540 = new SoHAnimSite();
SoHAnimSite540->X3DNode::setName(QString("r_suprapatella"));
SoHAnimSite540->setDEF(QString("hanim_r_suprapatella_pt"));
SoHAnimSite540->setTranslation(new float[]{-0.085,0.41,0.042});
SoTouchSensor* SoTouchSensor541 = new SoTouchSensor();
SoTouchSensor541->setDescription(QString("HAnimSite 45 hanim_r_suprapatella_pt"));
SoHAnimSite540->addChild(*SoTouchSensor541);

SoShape* SoShape542 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance543 = new SoVRMLAppearance();
SoMaterial* SoMaterial544 = new SoMaterial();
SoMaterial544->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance543->addChild(*SoMaterial544);

SoShape542->addChild(*SoVRMLAppearance543);

SoIndexedFaceSet* SoIndexedFaceSet545 = new SoIndexedFaceSet();
SoIndexedFaceSet545->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet545->setCreaseAngle(0.5);
SoIndexedFaceSet545->setSolid(false);
SoColorRGBA* SoColorRGBA546 = new SoColorRGBA();
SoColorRGBA546->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet545->addChild(*SoColorRGBA546);

SoCoordinate* SoCoordinate547 = new SoCoordinate();
SoCoordinate547->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet545->setCoord(*SoCoordinate547);

SoShape542->setGeometry(*SoIndexedFaceSet545);

SoHAnimSite540->addChild(*SoShape542);

SoBillboard* SoBillboard548 = new SoBillboard();
SoBillboard548->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape549 = new SoShape();
SoText* SoText550 = new SoText();
SoText550->setString(new QString[]{QString("45")}, 1);
SoFontStyle* SoFontStyle551 = new SoFontStyle();
SoFontStyle551->setSize(0.035);
SoText550->setFontStyle(*SoFontStyle551);

SoShape549->setGeometry(*SoText550);

SoBillboard548->addChild(*SoShape549);

SoHAnimSite540->addChild(SoBillboard548);

SoHAnimSegment503->addChild(*SoHAnimSite540);

SoShape* SoShape552 = new SoShape();
SoLineSet* SoLineSet553 = new SoLineSet();
SoLineSet553->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA554 = new SoColorRGBA();
SoColorRGBA554->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet553->addChild(*SoColorRGBA554);

SoCoordinate* SoCoordinate555 = new SoCoordinate();
SoCoordinate555->setPoint(new float[]{-0.09466,0.82665,-0.01835,0.0,0.826,0.02}, 6);
SoLineSet553->setCoord(*SoCoordinate555);

SoShape552->setGeometry(*SoLineSet553);

SoHAnimSegment503->addChild(*SoShape552);

SoHAnimJoint502->addChildren(*SoHAnimSegment503);

SoHAnimJoint* SoHAnimJoint556 = new SoHAnimJoint();
SoHAnimJoint556->X3DNode::setName(QString("r_knee"));
SoHAnimJoint556->setDEF(QString("hanim_r_knee"));
SoHAnimJoint556->setCenter(new float[]{-0.0926,0.408825,-0.01944});
SoHAnimJoint556->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint556->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment557 = new SoHAnimSegment();
SoHAnimSegment557->X3DNode::setName(QString("r_calf"));
SoHAnimSegment557->setDEF(QString("hanim_r_calf"));
SoHAnimSite* SoHAnimSite558 = new SoHAnimSite();
SoHAnimSite558->X3DNode::setName(QString("r_tibiale"));
SoHAnimSite558->setDEF(QString("hanim_r_tibiale_pt"));
SoHAnimSite558->setTranslation(new float[]{-0.09,0.31,0.038});
SoTouchSensor* SoTouchSensor559 = new SoTouchSensor();
SoTouchSensor559->setDescription(QString("HAnimSite 51 hanim_r_tibiale_pt"));
SoHAnimSite558->addChild(*SoTouchSensor559);

SoShape* SoShape560 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance561 = new SoVRMLAppearance();
SoMaterial* SoMaterial562 = new SoMaterial();
SoMaterial562->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance561->addChild(*SoMaterial562);

SoShape560->addChild(*SoVRMLAppearance561);

SoIndexedFaceSet* SoIndexedFaceSet563 = new SoIndexedFaceSet();
SoIndexedFaceSet563->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet563->setCreaseAngle(0.5);
SoIndexedFaceSet563->setSolid(false);
SoColorRGBA* SoColorRGBA564 = new SoColorRGBA();
SoColorRGBA564->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet563->addChild(*SoColorRGBA564);

SoCoordinate* SoCoordinate565 = new SoCoordinate();
SoCoordinate565->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet563->setCoord(*SoCoordinate565);

SoShape560->setGeometry(*SoIndexedFaceSet563);

SoHAnimSite558->addChild(*SoShape560);

SoBillboard* SoBillboard566 = new SoBillboard();
SoBillboard566->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape567 = new SoShape();
SoText* SoText568 = new SoText();
SoText568->setString(new QString[]{QString("51")}, 1);
SoFontStyle* SoFontStyle569 = new SoFontStyle();
SoFontStyle569->setSize(0.035);
SoText568->setFontStyle(*SoFontStyle569);

SoShape567->setGeometry(*SoText568);

SoBillboard566->addChild(*SoShape567);

SoHAnimSite558->addChild(SoBillboard566);

SoHAnimSegment557->addChild(*SoHAnimSite558);

SoHAnimSite* SoHAnimSite570 = new SoHAnimSite();
SoHAnimSite570->X3DNode::setName(QString("r_medial_malleolus"));
SoHAnimSite570->setDEF(QString("hanim_r_medial_malleolus_pt"));
SoHAnimSite570->setTranslation(new float[]{-0.061,0.095,-0.02});
SoTouchSensor* SoTouchSensor571 = new SoTouchSensor();
SoTouchSensor571->setDescription(QString("HAnimSite 52 hanim_r_medial_malleolus_pt"));
SoHAnimSite570->addChild(*SoTouchSensor571);

SoShape* SoShape572 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance573 = new SoVRMLAppearance();
SoMaterial* SoMaterial574 = new SoMaterial();
SoMaterial574->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance573->addChild(*SoMaterial574);

SoShape572->addChild(*SoVRMLAppearance573);

SoIndexedFaceSet* SoIndexedFaceSet575 = new SoIndexedFaceSet();
SoIndexedFaceSet575->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet575->setCreaseAngle(0.5);
SoIndexedFaceSet575->setSolid(false);
SoColorRGBA* SoColorRGBA576 = new SoColorRGBA();
SoColorRGBA576->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet575->addChild(*SoColorRGBA576);

SoCoordinate* SoCoordinate577 = new SoCoordinate();
SoCoordinate577->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet575->setCoord(*SoCoordinate577);

SoShape572->setGeometry(*SoIndexedFaceSet575);

SoHAnimSite570->addChild(*SoShape572);

SoBillboard* SoBillboard578 = new SoBillboard();
SoBillboard578->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape579 = new SoShape();
SoText* SoText580 = new SoText();
SoText580->setString(new QString[]{QString("52")}, 1);
SoFontStyle* SoFontStyle581 = new SoFontStyle();
SoFontStyle581->setSize(0.035);
SoText580->setFontStyle(*SoFontStyle581);

SoShape579->setGeometry(*SoText580);

SoBillboard578->addChild(*SoShape579);

SoHAnimSite570->addChild(SoBillboard578);

SoHAnimSegment557->addChild(*SoHAnimSite570);

SoHAnimSite* SoHAnimSite582 = new SoHAnimSite();
SoHAnimSite582->X3DNode::setName(QString("r_lateral_malleolus"));
SoHAnimSite582->setDEF(QString("hanim_r_lateral_malleolus_pt"));
SoHAnimSite582->setTranslation(new float[]{-0.12,0.095,-0.02});
SoTouchSensor* SoTouchSensor583 = new SoTouchSensor();
SoTouchSensor583->setDescription(QString("HAnimSite 53 hanim_r_lateral_malleolus_pt"));
SoHAnimSite582->addChild(*SoTouchSensor583);

SoShape* SoShape584 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance585 = new SoVRMLAppearance();
SoMaterial* SoMaterial586 = new SoMaterial();
SoMaterial586->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance585->addChild(*SoMaterial586);

SoShape584->addChild(*SoVRMLAppearance585);

SoIndexedFaceSet* SoIndexedFaceSet587 = new SoIndexedFaceSet();
SoIndexedFaceSet587->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet587->setCreaseAngle(0.5);
SoIndexedFaceSet587->setSolid(false);
SoColorRGBA* SoColorRGBA588 = new SoColorRGBA();
SoColorRGBA588->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet587->addChild(*SoColorRGBA588);

SoCoordinate* SoCoordinate589 = new SoCoordinate();
SoCoordinate589->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet587->setCoord(*SoCoordinate589);

SoShape584->setGeometry(*SoIndexedFaceSet587);

SoHAnimSite582->addChild(*SoShape584);

SoBillboard* SoBillboard590 = new SoBillboard();
SoBillboard590->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape591 = new SoShape();
SoText* SoText592 = new SoText();
SoText592->setString(new QString[]{QString("53")}, 1);
SoFontStyle* SoFontStyle593 = new SoFontStyle();
SoFontStyle593->setSize(0.035);
SoText592->setFontStyle(*SoFontStyle593);

SoShape591->setGeometry(*SoText592);

SoBillboard590->addChild(*SoShape591);

SoHAnimSite582->addChild(SoBillboard590);

SoHAnimSegment557->addChild(*SoHAnimSite582);

SoShape* SoShape594 = new SoShape();
SoLineSet* SoLineSet595 = new SoLineSet();
SoLineSet595->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA596 = new SoColorRGBA();
SoColorRGBA596->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet595->addChild(*SoColorRGBA596);

SoCoordinate* SoCoordinate597 = new SoCoordinate();
SoCoordinate597->setPoint(new float[]{-0.0926,0.408825,-0.01944,-0.09466,0.82665,-0.01835}, 6);
SoLineSet595->setCoord(*SoCoordinate597);

SoShape594->setGeometry(*SoLineSet595);

SoHAnimSegment557->addChild(*SoShape594);

SoHAnimJoint556->addChildren(*SoHAnimSegment557);

SoHAnimJoint* SoHAnimJoint598 = new SoHAnimJoint();
SoHAnimJoint598->X3DNode::setName(QString("r_talocrural"));
SoHAnimJoint598->setDEF(QString("hanim_r_talocrural"));
SoHAnimJoint598->setCenter(new float[]{-0.08845,0.09544,-0.01045});
SoHAnimJoint598->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint598->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment599 = new SoHAnimSegment();
SoHAnimSegment599->X3DNode::setName(QString("r_talus"));
SoHAnimSegment599->setDEF(QString("hanim_r_talus"));
SoHAnimSite* SoHAnimSite600 = new SoHAnimSite();
SoHAnimSite600->X3DNode::setName(QString("r_sphyrion"));
SoHAnimSite600->setDEF(QString("hanim_r_sphyrion_pt"));
SoHAnimSite600->setTranslation(new float[]{-0.054,0.065,-0.02});
SoTouchSensor* SoTouchSensor601 = new SoTouchSensor();
SoTouchSensor601->setDescription(QString("HAnimSite 54 hanim_r_sphyrion_pt"));
SoHAnimSite600->addChild(*SoTouchSensor601);

SoShape* SoShape602 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance603 = new SoVRMLAppearance();
SoMaterial* SoMaterial604 = new SoMaterial();
SoMaterial604->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance603->addChild(*SoMaterial604);

SoShape602->addChild(*SoVRMLAppearance603);

SoIndexedFaceSet* SoIndexedFaceSet605 = new SoIndexedFaceSet();
SoIndexedFaceSet605->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet605->setCreaseAngle(0.5);
SoIndexedFaceSet605->setSolid(false);
SoColorRGBA* SoColorRGBA606 = new SoColorRGBA();
SoColorRGBA606->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet605->addChild(*SoColorRGBA606);

SoCoordinate* SoCoordinate607 = new SoCoordinate();
SoCoordinate607->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet605->setCoord(*SoCoordinate607);

SoShape602->setGeometry(*SoIndexedFaceSet605);

SoHAnimSite600->addChild(*SoShape602);

SoBillboard* SoBillboard608 = new SoBillboard();
SoBillboard608->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape609 = new SoShape();
SoText* SoText610 = new SoText();
SoText610->setString(new QString[]{QString("54")}, 1);
SoFontStyle* SoFontStyle611 = new SoFontStyle();
SoFontStyle611->setSize(0.035);
SoText610->setFontStyle(*SoFontStyle611);

SoShape609->setGeometry(*SoText610);

SoBillboard608->addChild(*SoShape609);

SoHAnimSite600->addChild(SoBillboard608);

SoHAnimSegment599->addChild(*SoHAnimSite600);

SoHAnimSite* SoHAnimSite612 = new SoHAnimSite();
SoHAnimSite612->X3DNode::setName(QString("r_calcaneus_posterior"));
SoHAnimSite612->setDEF(QString("hanim_r_calcaneus_posterior_pt"));
SoHAnimSite612->setTranslation(new float[]{-0.09,0.03,-0.06});
SoTouchSensor* SoTouchSensor613 = new SoTouchSensor();
SoTouchSensor613->setDescription(QString("HAnimSite 62 hanim_r_calcaneus_posterior_pt"));
SoHAnimSite612->addChild(*SoTouchSensor613);

SoShape* SoShape614 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance615 = new SoVRMLAppearance();
SoMaterial* SoMaterial616 = new SoMaterial();
SoMaterial616->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance615->addChild(*SoMaterial616);

SoShape614->addChild(*SoVRMLAppearance615);

SoIndexedFaceSet* SoIndexedFaceSet617 = new SoIndexedFaceSet();
SoIndexedFaceSet617->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet617->setCreaseAngle(0.5);
SoIndexedFaceSet617->setSolid(false);
SoColorRGBA* SoColorRGBA618 = new SoColorRGBA();
SoColorRGBA618->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet617->addChild(*SoColorRGBA618);

SoCoordinate* SoCoordinate619 = new SoCoordinate();
SoCoordinate619->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet617->setCoord(*SoCoordinate619);

SoShape614->setGeometry(*SoIndexedFaceSet617);

SoHAnimSite612->addChild(*SoShape614);

SoBillboard* SoBillboard620 = new SoBillboard();
SoBillboard620->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape621 = new SoShape();
SoText* SoText622 = new SoText();
SoText622->setString(new QString[]{QString("62")}, 1);
SoFontStyle* SoFontStyle623 = new SoFontStyle();
SoFontStyle623->setSize(0.035);
SoText622->setFontStyle(*SoFontStyle623);

SoShape621->setGeometry(*SoText622);

SoBillboard620->addChild(*SoShape621);

SoHAnimSite612->addChild(SoBillboard620);

SoHAnimSegment599->addChild(*SoHAnimSite612);

SoShape* SoShape624 = new SoShape();
SoLineSet* SoLineSet625 = new SoLineSet();
SoLineSet625->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA626 = new SoColorRGBA();
SoColorRGBA626->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet625->addChild(*SoColorRGBA626);

SoCoordinate* SoCoordinate627 = new SoCoordinate();
SoCoordinate627->setPoint(new float[]{-0.08845,0.09544,-0.01045,-0.0926,0.408825,-0.01944}, 6);
SoLineSet625->setCoord(*SoCoordinate627);

SoShape624->setGeometry(*SoLineSet625);

SoHAnimSegment599->addChild(*SoShape624);

SoHAnimJoint598->addChildren(*SoHAnimSegment599);

SoHAnimJoint* SoHAnimJoint628 = new SoHAnimJoint();
SoHAnimJoint628->X3DNode::setName(QString("r_talocalcaneonavicular"));
SoHAnimJoint628->setDEF(QString("hanim_r_talocalcaneonavicular"));
SoHAnimJoint628->setCenter(new float[]{-0.07794,0.0369,0.00486});
SoHAnimJoint628->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint628->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment629 = new SoHAnimSegment();
SoHAnimSegment629->X3DNode::setName(QString("r_navicular"));
SoHAnimSegment629->setDEF(QString("hanim_r_navicular"));
SoShape* SoShape630 = new SoShape();
SoLineSet* SoLineSet631 = new SoLineSet();
SoLineSet631->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA632 = new SoColorRGBA();
SoColorRGBA632->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet631->addChild(*SoColorRGBA632);

SoCoordinate* SoCoordinate633 = new SoCoordinate();
SoCoordinate633->setPoint(new float[]{-0.07794,0.0369,0.00486,-0.08845,0.09544,-0.01045}, 6);
SoLineSet631->setCoord(*SoCoordinate633);

SoShape630->setGeometry(*SoLineSet631);

SoHAnimSegment629->addChild(*SoShape630);

SoHAnimJoint628->addChildren(*SoHAnimSegment629);

SoHAnimJoint* SoHAnimJoint634 = new SoHAnimJoint();
SoHAnimJoint634->X3DNode::setName(QString("r_cuneonavicular_1"));
SoHAnimJoint634->setDEF(QString("hanim_r_cuneonavicular_1"));
SoHAnimJoint634->setCenter(new float[]{-0.06698,0.032107,0.01839});
SoHAnimJoint634->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint634->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment635 = new SoHAnimSegment();
SoHAnimSegment635->X3DNode::setName(QString("r_cuneiform_1"));
SoHAnimSegment635->setDEF(QString("hanim_r_cuneiform_1"));
SoShape* SoShape636 = new SoShape();
SoLineSet* SoLineSet637 = new SoLineSet();
SoLineSet637->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA638 = new SoColorRGBA();
SoColorRGBA638->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet637->addChild(*SoColorRGBA638);

SoCoordinate* SoCoordinate639 = new SoCoordinate();
SoCoordinate639->setPoint(new float[]{-0.06698,0.032107,0.01839,-0.07794,0.0369,0.00486}, 6);
SoLineSet637->setCoord(*SoCoordinate639);

SoShape636->setGeometry(*SoLineSet637);

SoHAnimSegment635->addChild(*SoShape636);

SoHAnimJoint634->addChildren(*SoHAnimSegment635);

SoHAnimJoint* SoHAnimJoint640 = new SoHAnimJoint();
SoHAnimJoint640->X3DNode::setName(QString("r_tarsometatarsal_1"));
SoHAnimJoint640->setDEF(QString("hanim_r_tarsometatarsal_1"));
SoHAnimJoint640->setCenter(new float[]{-0.064,0.02324,0.04419});
SoHAnimJoint640->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint640->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment641 = new SoHAnimSegment();
SoHAnimSegment641->X3DNode::setName(QString("r_metatarsal_1"));
SoHAnimSegment641->setDEF(QString("hanim_r_metatarsal_1"));
SoShape* SoShape642 = new SoShape();
SoLineSet* SoLineSet643 = new SoLineSet();
SoLineSet643->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA644 = new SoColorRGBA();
SoColorRGBA644->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet643->addChild(*SoColorRGBA644);

SoCoordinate* SoCoordinate645 = new SoCoordinate();
SoCoordinate645->setPoint(new float[]{-0.064,0.02324,0.04419,-0.06698,0.032107,0.01839}, 6);
SoLineSet643->setCoord(*SoCoordinate645);

SoShape642->setGeometry(*SoLineSet643);

SoHAnimSegment641->addChild(*SoShape642);

SoHAnimJoint640->addChildren(*SoHAnimSegment641);

SoHAnimJoint* SoHAnimJoint646 = new SoHAnimJoint();
SoHAnimJoint646->X3DNode::setName(QString("r_metatarsophalangeal_1"));
SoHAnimJoint646->setDEF(QString("hanim_r_metatarsophalangeal_1"));
SoHAnimJoint646->setCenter(new float[]{-0.06176,0.014425,0.09362});
SoHAnimJoint646->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint646->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment647 = new SoHAnimSegment();
SoHAnimSegment647->X3DNode::setName(QString("r_tarsal_proximal_phalanx_1"));
SoHAnimSegment647->setDEF(QString("hanim_r_tarsal_proximal_phalanx_1"));
SoHAnimSite* SoHAnimSite648 = new SoHAnimSite();
SoHAnimSite648->X3DNode::setName(QString("r_metatarsal_phalanx_1"));
SoHAnimSite648->setDEF(QString("hanim_r_metatarsal_phalanx_1_pt"));
SoHAnimSite648->setTranslation(new float[]{-0.062,0.012,0.1});
SoTouchSensor* SoTouchSensor649 = new SoTouchSensor();
SoTouchSensor649->setDescription(QString("HAnimSite 59 hanim_r_metatarsal_phalanx_1_pt"));
SoHAnimSite648->addChild(*SoTouchSensor649);

SoShape* SoShape650 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance651 = new SoVRMLAppearance();
SoMaterial* SoMaterial652 = new SoMaterial();
SoMaterial652->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance651->addChild(*SoMaterial652);

SoShape650->addChild(*SoVRMLAppearance651);

SoIndexedFaceSet* SoIndexedFaceSet653 = new SoIndexedFaceSet();
SoIndexedFaceSet653->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet653->setCreaseAngle(0.5);
SoIndexedFaceSet653->setSolid(false);
SoColorRGBA* SoColorRGBA654 = new SoColorRGBA();
SoColorRGBA654->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet653->addChild(*SoColorRGBA654);

SoCoordinate* SoCoordinate655 = new SoCoordinate();
SoCoordinate655->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet653->setCoord(*SoCoordinate655);

SoShape650->setGeometry(*SoIndexedFaceSet653);

SoHAnimSite648->addChild(*SoShape650);

SoBillboard* SoBillboard656 = new SoBillboard();
SoBillboard656->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape657 = new SoShape();
SoText* SoText658 = new SoText();
SoText658->setString(new QString[]{QString("59")}, 1);
SoFontStyle* SoFontStyle659 = new SoFontStyle();
SoFontStyle659->setSize(0.035);
SoText658->setFontStyle(*SoFontStyle659);

SoShape657->setGeometry(*SoText658);

SoBillboard656->addChild(*SoShape657);

SoHAnimSite648->addChild(SoBillboard656);

SoHAnimSegment647->addChild(*SoHAnimSite648);

SoShape* SoShape660 = new SoShape();
SoLineSet* SoLineSet661 = new SoLineSet();
SoLineSet661->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA662 = new SoColorRGBA();
SoColorRGBA662->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet661->addChild(*SoColorRGBA662);

SoCoordinate* SoCoordinate663 = new SoCoordinate();
SoCoordinate663->setPoint(new float[]{-0.06176,0.014425,0.09362,-0.064,0.02324,0.04419}, 6);
SoLineSet661->setCoord(*SoCoordinate663);

SoShape660->setGeometry(*SoLineSet661);

SoHAnimSegment647->addChild(*SoShape660);

SoHAnimJoint646->addChildren(*SoHAnimSegment647);

SoHAnimJoint* SoHAnimJoint664 = new SoHAnimJoint();
SoHAnimJoint664->X3DNode::setName(QString("r_tarsal_interphalangeal_1"));
SoHAnimJoint664->setDEF(QString("hanim_r_tarsal_interphalangeal_1"));
SoHAnimJoint664->setCenter(new float[]{-0.06174,0.0121,0.1153});
SoHAnimJoint664->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint664->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment665 = new SoHAnimSegment();
SoHAnimSegment665->X3DNode::setName(QString("r_tarsal_distal_phalanx_1"));
SoHAnimSegment665->setDEF(QString("hanim_r_tarsal_distal_phalanx_1"));
SoHAnimSite* SoHAnimSite666 = new SoHAnimSite();
SoHAnimSite666->X3DNode::setName(QString("r_tarsal_distal_phalanx_1"));
SoHAnimSite666->setDEF(QString("hanim_r_tarsal_distal_phalanx_1_tip"));
SoHAnimSite666->setTranslation(new float[]{-0.06,0.012,0.14});
SoTouchSensor* SoTouchSensor667 = new SoTouchSensor();
SoTouchSensor667->setDescription(QString("HAnimSite 116 hanim_r_tarsal_distal_phalanx_1_tip"));
SoHAnimSite666->addChild(*SoTouchSensor667);

SoShape* SoShape668 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance669 = new SoVRMLAppearance();
SoMaterial* SoMaterial670 = new SoMaterial();
SoMaterial670->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance669->addChild(*SoMaterial670);

SoShape668->addChild(*SoVRMLAppearance669);

SoIndexedFaceSet* SoIndexedFaceSet671 = new SoIndexedFaceSet();
SoIndexedFaceSet671->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet671->setCreaseAngle(0.5);
SoIndexedFaceSet671->setSolid(false);
SoColorRGBA* SoColorRGBA672 = new SoColorRGBA();
SoColorRGBA672->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet671->addChild(*SoColorRGBA672);

SoCoordinate* SoCoordinate673 = new SoCoordinate();
SoCoordinate673->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet671->setCoord(*SoCoordinate673);

SoShape668->setGeometry(*SoIndexedFaceSet671);

SoHAnimSite666->addChild(*SoShape668);

SoBillboard* SoBillboard674 = new SoBillboard();
SoBillboard674->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape675 = new SoShape();
SoText* SoText676 = new SoText();
SoText676->setString(new QString[]{QString("116")}, 1);
SoFontStyle* SoFontStyle677 = new SoFontStyle();
SoFontStyle677->setSize(0.035);
SoText676->setFontStyle(*SoFontStyle677);

SoShape675->setGeometry(*SoText676);

SoBillboard674->addChild(*SoShape675);

SoHAnimSite666->addChild(SoBillboard674);

SoHAnimSegment665->addChild(*SoHAnimSite666);

SoShape* SoShape678 = new SoShape();
SoLineSet* SoLineSet679 = new SoLineSet();
SoLineSet679->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA680 = new SoColorRGBA();
SoColorRGBA680->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet679->addChild(*SoColorRGBA680);

SoCoordinate* SoCoordinate681 = new SoCoordinate();
SoCoordinate681->setPoint(new float[]{-0.06174,0.0121,0.1153,-0.06176,0.014425,0.09362}, 6);
SoLineSet679->setCoord(*SoCoordinate681);

SoShape678->setGeometry(*SoLineSet679);

SoHAnimSegment665->addChild(*SoShape678);

SoHAnimJoint664->addChildren(*SoHAnimSegment665);

SoHAnimJoint646->addChildren(*SoHAnimJoint664);

SoHAnimJoint640->addChildren(*SoHAnimJoint646);

SoHAnimJoint634->addChildren(*SoHAnimJoint640);

SoHAnimJoint628->addChildren(*SoHAnimJoint634);

SoHAnimJoint* SoHAnimJoint682 = new SoHAnimJoint();
SoHAnimJoint682->X3DNode::setName(QString("r_cuneonavicular_2"));
SoHAnimJoint682->setDEF(QString("hanim_r_cuneonavicular_2"));
SoHAnimJoint682->setCenter(new float[]{-0.081,0.0335,0.02142});
SoHAnimJoint682->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint682->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment683 = new SoHAnimSegment();
SoHAnimSegment683->X3DNode::setName(QString("r_cuneiform_2"));
SoHAnimSegment683->setDEF(QString("hanim_r_cuneiform_2"));
SoShape* SoShape684 = new SoShape();
SoLineSet* SoLineSet685 = new SoLineSet();
SoLineSet685->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA686 = new SoColorRGBA();
SoColorRGBA686->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet685->addChild(*SoColorRGBA686);

SoCoordinate* SoCoordinate687 = new SoCoordinate();
SoCoordinate687->setPoint(new float[]{-0.081,0.0335,0.02142,-0.07794,0.0369,0.00486}, 6);
SoLineSet685->setCoord(*SoCoordinate687);

SoShape684->setGeometry(*SoLineSet685);

SoHAnimSegment683->addChild(*SoShape684);

SoHAnimJoint682->addChildren(*SoHAnimSegment683);

SoHAnimJoint* SoHAnimJoint688 = new SoHAnimJoint();
SoHAnimJoint688->X3DNode::setName(QString("r_tarsometatarsal_2"));
SoHAnimJoint688->setDEF(QString("hanim_r_tarsometatarsal_2"));
SoHAnimJoint688->setCenter(new float[]{-0.07983,0.0261,0.04106});
SoHAnimJoint688->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint688->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment689 = new SoHAnimSegment();
SoHAnimSegment689->X3DNode::setName(QString("r_metatarsal_2"));
SoHAnimSegment689->setDEF(QString("hanim_r_metatarsal_2"));
SoShape* SoShape690 = new SoShape();
SoLineSet* SoLineSet691 = new SoLineSet();
SoLineSet691->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA692 = new SoColorRGBA();
SoColorRGBA692->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet691->addChild(*SoColorRGBA692);

SoCoordinate* SoCoordinate693 = new SoCoordinate();
SoCoordinate693->setPoint(new float[]{-0.07983,0.0261,0.04106,-0.081,0.0335,0.02142}, 6);
SoLineSet691->setCoord(*SoCoordinate693);

SoShape690->setGeometry(*SoLineSet691);

SoHAnimSegment689->addChild(*SoShape690);

SoHAnimJoint688->addChildren(*SoHAnimSegment689);

SoHAnimJoint* SoHAnimJoint694 = new SoHAnimJoint();
SoHAnimJoint694->X3DNode::setName(QString("r_metatarsophalangeal_2"));
SoHAnimJoint694->setDEF(QString("hanim_r_metatarsophalangeal_2"));
SoHAnimJoint694->setCenter(new float[]{-0.0821,0.01497,0.09783});
SoHAnimJoint694->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint694->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment695 = new SoHAnimSegment();
SoHAnimSegment695->X3DNode::setName(QString("r_tarsal_proximal_phalanx_2"));
SoHAnimSegment695->setDEF(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoShape* SoShape696 = new SoShape();
SoLineSet* SoLineSet697 = new SoLineSet();
SoLineSet697->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA698 = new SoColorRGBA();
SoColorRGBA698->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet697->addChild(*SoColorRGBA698);

SoCoordinate* SoCoordinate699 = new SoCoordinate();
SoCoordinate699->setPoint(new float[]{-0.0821,0.01497,0.09783,-0.07983,0.0261,0.04106}, 6);
SoLineSet697->setCoord(*SoCoordinate699);

SoShape696->setGeometry(*SoLineSet697);

SoHAnimSegment695->addChild(*SoShape696);

SoHAnimJoint694->addChildren(*SoHAnimSegment695);

SoHAnimJoint* SoHAnimJoint700 = new SoHAnimJoint();
SoHAnimJoint700->X3DNode::setName(QString("r_tarsal_proximal_interphalangeal_2"));
SoHAnimJoint700->setDEF(QString("hanim_r_tarsal_proximal_interphalangeal_2"));
SoHAnimJoint700->setCenter(new float[]{-0.0839,0.012647,0.114});
SoHAnimJoint700->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint700->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment701 = new SoHAnimSegment();
SoHAnimSegment701->X3DNode::setName(QString("r_tarsal_middle_phalanx_2"));
SoHAnimSegment701->setDEF(QString("hanim_r_tarsal_middle_phalanx_2"));
SoShape* SoShape702 = new SoShape();
SoLineSet* SoLineSet703 = new SoLineSet();
SoLineSet703->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA704 = new SoColorRGBA();
SoColorRGBA704->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet703->addChild(*SoColorRGBA704);

SoCoordinate* SoCoordinate705 = new SoCoordinate();
SoCoordinate705->setPoint(new float[]{-0.0839,0.012647,0.114,-0.0821,0.01497,0.09783}, 6);
SoLineSet703->setCoord(*SoCoordinate705);

SoShape702->setGeometry(*SoLineSet703);

SoHAnimSegment701->addChild(*SoShape702);

SoHAnimJoint700->addChildren(*SoHAnimSegment701);

SoHAnimJoint* SoHAnimJoint706 = new SoHAnimJoint();
SoHAnimJoint706->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint706->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint706->setCenter(new float[]{-0.0839,0.009825,0.123435});
SoHAnimJoint706->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint706->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment707 = new SoHAnimSegment();
SoHAnimSegment707->X3DNode::setName(QString("r_tarsal_distal_phalanx_2"));
SoHAnimSegment707->setDEF(QString("hanim_r_tarsal_distal_phalanx_2"));
SoHAnimSite* SoHAnimSite708 = new SoHAnimSite();
SoHAnimSite708->X3DNode::setName(QString("r_tarsal_distal_phalanx_2"));
SoHAnimSite708->setDEF(QString("hanim_r_tarsal_distal_phalanx_2_tip"));
SoHAnimSite708->setTranslation(new float[]{-0.08,0.016,0.14});
SoTouchSensor* SoTouchSensor709 = new SoTouchSensor();
SoTouchSensor709->setDescription(QString("HAnimSite 117 hanim_r_tarsal_distal_phalanx_2_tip"));
SoHAnimSite708->addChild(*SoTouchSensor709);

SoShape* SoShape710 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance711 = new SoVRMLAppearance();
SoMaterial* SoMaterial712 = new SoMaterial();
SoMaterial712->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance711->addChild(*SoMaterial712);

SoShape710->addChild(*SoVRMLAppearance711);

SoIndexedFaceSet* SoIndexedFaceSet713 = new SoIndexedFaceSet();
SoIndexedFaceSet713->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet713->setCreaseAngle(0.5);
SoIndexedFaceSet713->setSolid(false);
SoColorRGBA* SoColorRGBA714 = new SoColorRGBA();
SoColorRGBA714->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet713->addChild(*SoColorRGBA714);

SoCoordinate* SoCoordinate715 = new SoCoordinate();
SoCoordinate715->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet713->setCoord(*SoCoordinate715);

SoShape710->setGeometry(*SoIndexedFaceSet713);

SoHAnimSite708->addChild(*SoShape710);

SoBillboard* SoBillboard716 = new SoBillboard();
SoBillboard716->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape717 = new SoShape();
SoText* SoText718 = new SoText();
SoText718->setString(new QString[]{QString("117")}, 1);
SoFontStyle* SoFontStyle719 = new SoFontStyle();
SoFontStyle719->setSize(0.035);
SoText718->setFontStyle(*SoFontStyle719);

SoShape717->setGeometry(*SoText718);

SoBillboard716->addChild(*SoShape717);

SoHAnimSite708->addChild(SoBillboard716);

SoHAnimSegment707->addChild(*SoHAnimSite708);

SoShape* SoShape720 = new SoShape();
SoLineSet* SoLineSet721 = new SoLineSet();
SoLineSet721->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA722 = new SoColorRGBA();
SoColorRGBA722->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet721->addChild(*SoColorRGBA722);

SoCoordinate* SoCoordinate723 = new SoCoordinate();
SoCoordinate723->setPoint(new float[]{-0.0839,0.009825,0.123435,-0.0839,0.012647,0.114}, 6);
SoLineSet721->setCoord(*SoCoordinate723);

SoShape720->setGeometry(*SoLineSet721);

SoHAnimSegment707->addChild(*SoShape720);

SoHAnimJoint706->addChildren(*SoHAnimSegment707);

SoHAnimJoint700->addChildren(*SoHAnimJoint706);

SoHAnimJoint694->addChildren(*SoHAnimJoint700);

SoHAnimJoint688->addChildren(*SoHAnimJoint694);

SoHAnimJoint682->addChildren(*SoHAnimJoint688);

SoHAnimJoint628->addChildren(*SoHAnimJoint682);

SoHAnimJoint* SoHAnimJoint724 = new SoHAnimJoint();
SoHAnimJoint724->X3DNode::setName(QString("r_cuneonavicular_3"));
SoHAnimJoint724->setDEF(QString("hanim_r_cuneonavicular_3"));
SoHAnimJoint724->setCenter(new float[]{-0.09261,0.03339,0.01982});
SoHAnimJoint724->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint724->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment725 = new SoHAnimSegment();
SoHAnimSegment725->X3DNode::setName(QString("r_cuneiform_3"));
SoHAnimSegment725->setDEF(QString("hanim_r_cuneiform_3"));
SoShape* SoShape726 = new SoShape();
SoLineSet* SoLineSet727 = new SoLineSet();
SoLineSet727->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA728 = new SoColorRGBA();
SoColorRGBA728->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet727->addChild(*SoColorRGBA728);

SoCoordinate* SoCoordinate729 = new SoCoordinate();
SoCoordinate729->setPoint(new float[]{-0.09261,0.03339,0.01982,-0.07794,0.0369,0.00486}, 6);
SoLineSet727->setCoord(*SoCoordinate729);

SoShape726->setGeometry(*SoLineSet727);

SoHAnimSegment725->addChild(*SoShape726);

SoHAnimJoint724->addChildren(*SoHAnimSegment725);

SoHAnimJoint* SoHAnimJoint730 = new SoHAnimJoint();
SoHAnimJoint730->X3DNode::setName(QString("r_tarsometatarsal_3"));
SoHAnimJoint730->setDEF(QString("hanim_r_tarsometatarsal_3"));
SoHAnimJoint730->setCenter(new float[]{-0.09423,0.0261,0.0394});
SoHAnimJoint730->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint730->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment731 = new SoHAnimSegment();
SoHAnimSegment731->X3DNode::setName(QString("r_metatarsal_3"));
SoHAnimSegment731->setDEF(QString("hanim_r_metatarsal_3"));
SoShape* SoShape732 = new SoShape();
SoLineSet* SoLineSet733 = new SoLineSet();
SoLineSet733->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA734 = new SoColorRGBA();
SoColorRGBA734->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet733->addChild(*SoColorRGBA734);

SoCoordinate* SoCoordinate735 = new SoCoordinate();
SoCoordinate735->setPoint(new float[]{-0.09423,0.0261,0.0394,-0.09261,0.03339,0.01982}, 6);
SoLineSet733->setCoord(*SoCoordinate735);

SoShape732->setGeometry(*SoLineSet733);

SoHAnimSegment731->addChild(*SoShape732);

SoHAnimJoint730->addChildren(*SoHAnimSegment731);

SoHAnimJoint* SoHAnimJoint736 = new SoHAnimJoint();
SoHAnimJoint736->X3DNode::setName(QString("r_metatarsophalangeal_3"));
SoHAnimJoint736->setDEF(QString("hanim_r_metatarsophalangeal_3"));
SoHAnimJoint736->setCenter(new float[]{-0.0961,0.01505,0.09542});
SoHAnimJoint736->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint736->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment737 = new SoHAnimSegment();
SoHAnimSegment737->X3DNode::setName(QString("r_tarsal_proximal_phalanx_3"));
SoHAnimSegment737->setDEF(QString("hanim_r_tarsal_proximal_phalanx_3"));
SoShape* SoShape738 = new SoShape();
SoLineSet* SoLineSet739 = new SoLineSet();
SoLineSet739->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA740 = new SoColorRGBA();
SoColorRGBA740->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet739->addChild(*SoColorRGBA740);

SoCoordinate* SoCoordinate741 = new SoCoordinate();
SoCoordinate741->setPoint(new float[]{-0.0961,0.01505,0.09542,-0.09423,0.0261,0.0394}, 6);
SoLineSet739->setCoord(*SoCoordinate741);

SoShape738->setGeometry(*SoLineSet739);

SoHAnimSegment737->addChild(*SoShape738);

SoHAnimJoint736->addChildren(*SoHAnimSegment737);

SoHAnimJoint* SoHAnimJoint742 = new SoHAnimJoint();
SoHAnimJoint742->X3DNode::setName(QString("r_tarsal_proximal_interphalangeal_3"));
SoHAnimJoint742->setDEF(QString("hanim_r_tarsal_proximal_interphalangeal_3"));
SoHAnimJoint742->setCenter(new float[]{-0.0985,0.01192,0.11047});
SoHAnimJoint742->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint742->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment743 = new SoHAnimSegment();
SoHAnimSegment743->X3DNode::setName(QString("r_tarsal_middle_phalanx_3"));
SoHAnimSegment743->setDEF(QString("hanim_r_tarsal_middle_phalanx_3"));
SoShape* SoShape744 = new SoShape();
SoLineSet* SoLineSet745 = new SoLineSet();
SoLineSet745->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA746 = new SoColorRGBA();
SoColorRGBA746->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet745->addChild(*SoColorRGBA746);

SoCoordinate* SoCoordinate747 = new SoCoordinate();
SoCoordinate747->setPoint(new float[]{-0.0985,0.01192,0.11047,-0.0961,0.01505,0.09542}, 6);
SoLineSet745->setCoord(*SoCoordinate747);

SoShape744->setGeometry(*SoLineSet745);

SoHAnimSegment743->addChild(*SoShape744);

SoHAnimJoint742->addChildren(*SoHAnimSegment743);

SoHAnimJoint* SoHAnimJoint748 = new SoHAnimJoint();
SoHAnimJoint748->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_3"));
SoHAnimJoint748->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_3"));
SoHAnimJoint748->setCenter(new float[]{-0.100035,0.00982,0.1197});
SoHAnimJoint748->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint748->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment749 = new SoHAnimSegment();
SoHAnimSegment749->X3DNode::setName(QString("r_tarsal_distal_phalanx_3"));
SoHAnimSegment749->setDEF(QString("hanim_r_tarsal_distal_phalanx_3"));
SoHAnimSite* SoHAnimSite750 = new SoHAnimSite();
SoHAnimSite750->X3DNode::setName(QString("r_tarsal_distal_phalanx_3"));
SoHAnimSite750->setDEF(QString("hanim_r_tarsal_distal_phalanx_3_tip"));
SoHAnimSite750->setTranslation(new float[]{-0.1,0.016,0.14});
SoTouchSensor* SoTouchSensor751 = new SoTouchSensor();
SoTouchSensor751->setDescription(QString("HAnimSite 118 hanim_r_tarsal_distal_phalanx_3_tip"));
SoHAnimSite750->addChild(*SoTouchSensor751);

SoShape* SoShape752 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance753 = new SoVRMLAppearance();
SoMaterial* SoMaterial754 = new SoMaterial();
SoMaterial754->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance753->addChild(*SoMaterial754);

SoShape752->addChild(*SoVRMLAppearance753);

SoIndexedFaceSet* SoIndexedFaceSet755 = new SoIndexedFaceSet();
SoIndexedFaceSet755->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet755->setCreaseAngle(0.5);
SoIndexedFaceSet755->setSolid(false);
SoColorRGBA* SoColorRGBA756 = new SoColorRGBA();
SoColorRGBA756->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet755->addChild(*SoColorRGBA756);

SoCoordinate* SoCoordinate757 = new SoCoordinate();
SoCoordinate757->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet755->setCoord(*SoCoordinate757);

SoShape752->setGeometry(*SoIndexedFaceSet755);

SoHAnimSite750->addChild(*SoShape752);

SoBillboard* SoBillboard758 = new SoBillboard();
SoBillboard758->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape759 = new SoShape();
SoText* SoText760 = new SoText();
SoText760->setString(new QString[]{QString("118")}, 1);
SoFontStyle* SoFontStyle761 = new SoFontStyle();
SoFontStyle761->setSize(0.035);
SoText760->setFontStyle(*SoFontStyle761);

SoShape759->setGeometry(*SoText760);

SoBillboard758->addChild(*SoShape759);

SoHAnimSite750->addChild(SoBillboard758);

SoHAnimSegment749->addChild(*SoHAnimSite750);

SoShape* SoShape762 = new SoShape();
SoLineSet* SoLineSet763 = new SoLineSet();
SoLineSet763->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA764 = new SoColorRGBA();
SoColorRGBA764->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet763->addChild(*SoColorRGBA764);

SoCoordinate* SoCoordinate765 = new SoCoordinate();
SoCoordinate765->setPoint(new float[]{-0.100035,0.00982,0.1197,-0.0985,0.01192,0.11047}, 6);
SoLineSet763->setCoord(*SoCoordinate765);

SoShape762->setGeometry(*SoLineSet763);

SoHAnimSegment749->addChild(*SoShape762);

SoHAnimJoint748->addChildren(*SoHAnimSegment749);

SoHAnimJoint742->addChildren(*SoHAnimJoint748);

SoHAnimJoint736->addChildren(*SoHAnimJoint742);

SoHAnimJoint730->addChildren(*SoHAnimJoint736);

SoHAnimJoint724->addChildren(*SoHAnimJoint730);

SoHAnimJoint628->addChildren(*SoHAnimJoint724);

SoHAnimJoint598->addChildren(*SoHAnimJoint628);

SoHAnimJoint* SoHAnimJoint766 = new SoHAnimJoint();
SoHAnimJoint766->X3DNode::setName(QString("r_calcaneocuboid"));
SoHAnimJoint766->setDEF(QString("hanim_r_calcaneocuboid"));
SoHAnimJoint766->setCenter(new float[]{-0.088717,0.05798,-0.025965});
SoHAnimJoint766->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint766->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment767 = new SoHAnimSegment();
SoHAnimSegment767->X3DNode::setName(QString("r_calcaneus"));
SoHAnimSegment767->setDEF(QString("hanim_r_calcaneus"));
SoShape* SoShape768 = new SoShape();
SoLineSet* SoLineSet769 = new SoLineSet();
SoLineSet769->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA770 = new SoColorRGBA();
SoColorRGBA770->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet769->addChild(*SoColorRGBA770);

SoCoordinate* SoCoordinate771 = new SoCoordinate();
SoCoordinate771->setPoint(new float[]{-0.088717,0.05798,-0.025965,-0.08845,0.09544,-0.01045}, 6);
SoLineSet769->setCoord(*SoCoordinate771);

SoShape768->setGeometry(*SoLineSet769);

SoHAnimSegment767->addChild(*SoShape768);

SoHAnimJoint766->addChildren(*SoHAnimSegment767);

SoHAnimJoint* SoHAnimJoint772 = new SoHAnimJoint();
SoHAnimJoint772->X3DNode::setName(QString("r_transversetarsal"));
SoHAnimJoint772->setDEF(QString("hanim_r_transversetarsal"));
SoHAnimJoint772->setCenter(new float[]{-0.11027,0.03528,0.0021});
SoHAnimJoint772->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint772->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment773 = new SoHAnimSegment();
SoHAnimSegment773->X3DNode::setName(QString("r_cuboid"));
SoHAnimSegment773->setDEF(QString("hanim_r_cuboid"));
SoShape* SoShape774 = new SoShape();
SoLineSet* SoLineSet775 = new SoLineSet();
SoLineSet775->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA776 = new SoColorRGBA();
SoColorRGBA776->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet775->addChild(*SoColorRGBA776);

SoCoordinate* SoCoordinate777 = new SoCoordinate();
SoCoordinate777->setPoint(new float[]{-0.11027,0.03528,0.0021,-0.088717,0.05798,-0.025965}, 6);
SoLineSet775->setCoord(*SoCoordinate777);

SoShape774->setGeometry(*SoLineSet775);

SoHAnimSegment773->addChild(*SoShape774);

SoHAnimJoint772->addChildren(*SoHAnimSegment773);

SoHAnimJoint* SoHAnimJoint778 = new SoHAnimJoint();
SoHAnimJoint778->X3DNode::setName(QString("r_tarsometatarsal_4"));
SoHAnimJoint778->setDEF(QString("hanim_r_tarsometatarsal_4"));
SoHAnimJoint778->setCenter(new float[]{-0.10613,0.02454,0.03843});
SoHAnimJoint778->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint778->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment779 = new SoHAnimSegment();
SoHAnimSegment779->X3DNode::setName(QString("r_metatarsal_4"));
SoHAnimSegment779->setDEF(QString("hanim_r_metatarsal_4"));
SoShape* SoShape780 = new SoShape();
SoLineSet* SoLineSet781 = new SoLineSet();
SoLineSet781->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA782 = new SoColorRGBA();
SoColorRGBA782->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet781->addChild(*SoColorRGBA782);

SoCoordinate* SoCoordinate783 = new SoCoordinate();
SoCoordinate783->setPoint(new float[]{-0.10613,0.02454,0.03843,-0.11027,0.03528,0.0021}, 6);
SoLineSet781->setCoord(*SoCoordinate783);

SoShape780->setGeometry(*SoLineSet781);

SoHAnimSegment779->addChild(*SoShape780);

SoHAnimJoint778->addChildren(*SoHAnimSegment779);

SoHAnimJoint* SoHAnimJoint784 = new SoHAnimJoint();
SoHAnimJoint784->X3DNode::setName(QString("r_metatarsophalangeal_4"));
SoHAnimJoint784->setDEF(QString("hanim_r_metatarsophalangeal_4"));
SoHAnimJoint784->setCenter(new float[]{-0.1095,0.01435,0.09117});
SoHAnimJoint784->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint784->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment785 = new SoHAnimSegment();
SoHAnimSegment785->X3DNode::setName(QString("r_tarsal_proximal_phalanx_4"));
SoHAnimSegment785->setDEF(QString("hanim_r_tarsal_proximal_phalanx_4"));
SoShape* SoShape786 = new SoShape();
SoLineSet* SoLineSet787 = new SoLineSet();
SoLineSet787->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA788 = new SoColorRGBA();
SoColorRGBA788->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet787->addChild(*SoColorRGBA788);

SoCoordinate* SoCoordinate789 = new SoCoordinate();
SoCoordinate789->setPoint(new float[]{-0.1095,0.01435,0.09117,-0.10613,0.02454,0.03843}, 6);
SoLineSet787->setCoord(*SoCoordinate789);

SoShape786->setGeometry(*SoLineSet787);

SoHAnimSegment785->addChild(*SoShape786);

SoHAnimJoint784->addChildren(*SoHAnimSegment785);

SoHAnimJoint* SoHAnimJoint790 = new SoHAnimJoint();
SoHAnimJoint790->X3DNode::setName(QString("r_tarsal_proximal_interphalangeal_4"));
SoHAnimJoint790->setDEF(QString("hanim_r_tarsal_proximal_interphalangeal_4"));
SoHAnimJoint790->setCenter(new float[]{-0.11378,0.01224,0.1063});
SoHAnimJoint790->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint790->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment791 = new SoHAnimSegment();
SoHAnimSegment791->X3DNode::setName(QString("r_tarsal_middle_phalanx_4"));
SoHAnimSegment791->setDEF(QString("hanim_r_tarsal_middle_phalanx_4"));
SoShape* SoShape792 = new SoShape();
SoLineSet* SoLineSet793 = new SoLineSet();
SoLineSet793->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA794 = new SoColorRGBA();
SoColorRGBA794->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet793->addChild(*SoColorRGBA794);

SoCoordinate* SoCoordinate795 = new SoCoordinate();
SoCoordinate795->setPoint(new float[]{-0.11378,0.01224,0.1063,-0.1095,0.01435,0.09117}, 6);
SoLineSet793->setCoord(*SoCoordinate795);

SoShape792->setGeometry(*SoLineSet793);

SoHAnimSegment791->addChild(*SoShape792);

SoHAnimJoint790->addChildren(*SoHAnimSegment791);

SoHAnimJoint* SoHAnimJoint796 = new SoHAnimJoint();
SoHAnimJoint796->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_4"));
SoHAnimJoint796->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_4"));
SoHAnimJoint796->setCenter(new float[]{-0.1153,0.00937,0.11369});
SoHAnimJoint796->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint796->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment797 = new SoHAnimSegment();
SoHAnimSegment797->X3DNode::setName(QString("r_tarsal_distal_phalanx_4"));
SoHAnimSegment797->setDEF(QString("hanim_r_tarsal_distal_phalanx_4"));
SoHAnimSite* SoHAnimSite798 = new SoHAnimSite();
SoHAnimSite798->X3DNode::setName(QString("r_tarsal_distal_phalanx_4"));
SoHAnimSite798->setDEF(QString("hanim_r_tarsal_distal_phalanx_4_tip"));
SoHAnimSite798->setTranslation(new float[]{-0.115,0.016,0.13});
SoTouchSensor* SoTouchSensor799 = new SoTouchSensor();
SoTouchSensor799->setDescription(QString("HAnimSite 119 hanim_r_tarsal_distal_phalanx_4_tip"));
SoHAnimSite798->addChild(*SoTouchSensor799);

SoShape* SoShape800 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance801 = new SoVRMLAppearance();
SoMaterial* SoMaterial802 = new SoMaterial();
SoMaterial802->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance801->addChild(*SoMaterial802);

SoShape800->addChild(*SoVRMLAppearance801);

SoIndexedFaceSet* SoIndexedFaceSet803 = new SoIndexedFaceSet();
SoIndexedFaceSet803->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet803->setCreaseAngle(0.5);
SoIndexedFaceSet803->setSolid(false);
SoColorRGBA* SoColorRGBA804 = new SoColorRGBA();
SoColorRGBA804->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet803->addChild(*SoColorRGBA804);

SoCoordinate* SoCoordinate805 = new SoCoordinate();
SoCoordinate805->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet803->setCoord(*SoCoordinate805);

SoShape800->setGeometry(*SoIndexedFaceSet803);

SoHAnimSite798->addChild(*SoShape800);

SoBillboard* SoBillboard806 = new SoBillboard();
SoBillboard806->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape807 = new SoShape();
SoText* SoText808 = new SoText();
SoText808->setString(new QString[]{QString("119")}, 1);
SoFontStyle* SoFontStyle809 = new SoFontStyle();
SoFontStyle809->setSize(0.035);
SoText808->setFontStyle(*SoFontStyle809);

SoShape807->setGeometry(*SoText808);

SoBillboard806->addChild(*SoShape807);

SoHAnimSite798->addChild(SoBillboard806);

SoHAnimSegment797->addChild(*SoHAnimSite798);

SoShape* SoShape810 = new SoShape();
SoLineSet* SoLineSet811 = new SoLineSet();
SoLineSet811->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA812 = new SoColorRGBA();
SoColorRGBA812->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet811->addChild(*SoColorRGBA812);

SoCoordinate* SoCoordinate813 = new SoCoordinate();
SoCoordinate813->setPoint(new float[]{-0.1153,0.00937,0.11369,-0.11378,0.01224,0.1063}, 6);
SoLineSet811->setCoord(*SoCoordinate813);

SoShape810->setGeometry(*SoLineSet811);

SoHAnimSegment797->addChild(*SoShape810);

SoHAnimJoint796->addChildren(*SoHAnimSegment797);

SoHAnimJoint790->addChildren(*SoHAnimJoint796);

SoHAnimJoint784->addChildren(*SoHAnimJoint790);

SoHAnimJoint778->addChildren(*SoHAnimJoint784);

SoHAnimJoint772->addChildren(*SoHAnimJoint778);

SoHAnimJoint* SoHAnimJoint814 = new SoHAnimJoint();
SoHAnimJoint814->X3DNode::setName(QString("r_tarsometatarsal_5"));
SoHAnimJoint814->setDEF(QString("hanim_r_tarsometatarsal_5"));
SoHAnimJoint814->setCenter(new float[]{-0.12044,0.020945,0.03474});
SoHAnimJoint814->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint814->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment815 = new SoHAnimSegment();
SoHAnimSegment815->X3DNode::setName(QString("r_metatarsal_5"));
SoHAnimSegment815->setDEF(QString("hanim_r_metatarsal_5"));
SoShape* SoShape816 = new SoShape();
SoLineSet* SoLineSet817 = new SoLineSet();
SoLineSet817->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA818 = new SoColorRGBA();
SoColorRGBA818->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet817->addChild(*SoColorRGBA818);

SoCoordinate* SoCoordinate819 = new SoCoordinate();
SoCoordinate819->setPoint(new float[]{-0.12044,0.020945,0.03474,-0.11027,0.03528,0.0021}, 6);
SoLineSet817->setCoord(*SoCoordinate819);

SoShape816->setGeometry(*SoLineSet817);

SoHAnimSegment815->addChild(*SoShape816);

SoHAnimJoint814->addChildren(*SoHAnimSegment815);

SoHAnimJoint* SoHAnimJoint820 = new SoHAnimJoint();
SoHAnimJoint820->X3DNode::setName(QString("r_metatarsophalangeal_5"));
SoHAnimJoint820->setDEF(QString("hanim_r_metatarsophalangeal_5"));
SoHAnimJoint820->setCenter(new float[]{-0.12368,0.01367,0.08656});
SoHAnimJoint820->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint820->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment821 = new SoHAnimSegment();
SoHAnimSegment821->X3DNode::setName(QString("r_tarsal_proximal_phalanx_5"));
SoHAnimSegment821->setDEF(QString("hanim_r_tarsal_proximal_phalanx_5"));
SoShape* SoShape822 = new SoShape();
SoLineSet* SoLineSet823 = new SoLineSet();
SoLineSet823->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA824 = new SoColorRGBA();
SoColorRGBA824->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet823->addChild(*SoColorRGBA824);

SoCoordinate* SoCoordinate825 = new SoCoordinate();
SoCoordinate825->setPoint(new float[]{-0.12368,0.01367,0.08656,-0.12044,0.020945,0.03474}, 6);
SoLineSet823->setCoord(*SoCoordinate825);

SoShape822->setGeometry(*SoLineSet823);

SoHAnimSegment821->addChild(*SoShape822);

SoHAnimJoint820->addChildren(*SoHAnimSegment821);

SoHAnimJoint* SoHAnimJoint826 = new SoHAnimJoint();
SoHAnimJoint826->X3DNode::setName(QString("r_tarsal_proximal_interphalangeal_5"));
SoHAnimJoint826->setDEF(QString("hanim_r_tarsal_proximal_interphalangeal_5"));
SoHAnimJoint826->setCenter(new float[]{-0.126,0.01086,0.09414});
SoHAnimJoint826->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint826->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment827 = new SoHAnimSegment();
SoHAnimSegment827->X3DNode::setName(QString("r_tarsal_middle_phalanx_5"));
SoHAnimSegment827->setDEF(QString("hanim_r_tarsal_middle_phalanx_5"));
SoHAnimSite* SoHAnimSite828 = new SoHAnimSite();
SoHAnimSite828->X3DNode::setName(QString("r_metatarsal_phalanx_5"));
SoHAnimSite828->setDEF(QString("hanim_r_metatarsal_phalanx_5_pt"));
SoHAnimSite828->setTranslation(new float[]{-0.12,0.02,0.04});
SoTouchSensor* SoTouchSensor829 = new SoTouchSensor();
SoTouchSensor829->setDescription(QString("HAnimSite 60 hanim_r_metatarsal_phalanx_5_pt"));
SoHAnimSite828->addChild(*SoTouchSensor829);

SoShape* SoShape830 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance831 = new SoVRMLAppearance();
SoMaterial* SoMaterial832 = new SoMaterial();
SoMaterial832->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance831->addChild(*SoMaterial832);

SoShape830->addChild(*SoVRMLAppearance831);

SoIndexedFaceSet* SoIndexedFaceSet833 = new SoIndexedFaceSet();
SoIndexedFaceSet833->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet833->setCreaseAngle(0.5);
SoIndexedFaceSet833->setSolid(false);
SoColorRGBA* SoColorRGBA834 = new SoColorRGBA();
SoColorRGBA834->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet833->addChild(*SoColorRGBA834);

SoCoordinate* SoCoordinate835 = new SoCoordinate();
SoCoordinate835->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet833->setCoord(*SoCoordinate835);

SoShape830->setGeometry(*SoIndexedFaceSet833);

SoHAnimSite828->addChild(*SoShape830);

SoBillboard* SoBillboard836 = new SoBillboard();
SoBillboard836->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape837 = new SoShape();
SoText* SoText838 = new SoText();
SoText838->setString(new QString[]{QString("60")}, 1);
SoFontStyle* SoFontStyle839 = new SoFontStyle();
SoFontStyle839->setSize(0.035);
SoText838->setFontStyle(*SoFontStyle839);

SoShape837->setGeometry(*SoText838);

SoBillboard836->addChild(*SoShape837);

SoHAnimSite828->addChild(SoBillboard836);

SoHAnimSegment827->addChild(*SoHAnimSite828);

SoShape* SoShape840 = new SoShape();
SoLineSet* SoLineSet841 = new SoLineSet();
SoLineSet841->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA842 = new SoColorRGBA();
SoColorRGBA842->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet841->addChild(*SoColorRGBA842);

SoCoordinate* SoCoordinate843 = new SoCoordinate();
SoCoordinate843->setPoint(new float[]{-0.126,0.01086,0.09414,-0.12368,0.01367,0.08656}, 6);
SoLineSet841->setCoord(*SoCoordinate843);

SoShape840->setGeometry(*SoLineSet841);

SoHAnimSegment827->addChild(*SoShape840);

SoHAnimJoint826->addChildren(*SoHAnimSegment827);

SoHAnimJoint* SoHAnimJoint844 = new SoHAnimJoint();
SoHAnimJoint844->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_5"));
SoHAnimJoint844->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_5"));
SoHAnimJoint844->setCenter(new float[]{-0.1269,0.00856,0.10188});
SoHAnimJoint844->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint844->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment845 = new SoHAnimSegment();
SoHAnimSegment845->X3DNode::setName(QString("r_tarsal_distal_phalanx_5"));
SoHAnimSegment845->setDEF(QString("hanim_r_tarsal_distal_phalanx_5"));
SoHAnimSite* SoHAnimSite846 = new SoHAnimSite();
SoHAnimSite846->X3DNode::setName(QString("r_tarsal_distal_phalanx_5"));
SoHAnimSite846->setDEF(QString("hanim_r_tarsal_distal_phalanx_5_tip"));
SoHAnimSite846->setTranslation(new float[]{-0.125,0.016,0.115});
SoTouchSensor* SoTouchSensor847 = new SoTouchSensor();
SoTouchSensor847->setDescription(QString("HAnimSite 120 hanim_r_tarsal_distal_phalanx_5_tip"));
SoHAnimSite846->addChild(*SoTouchSensor847);

SoShape* SoShape848 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance849 = new SoVRMLAppearance();
SoMaterial* SoMaterial850 = new SoMaterial();
SoMaterial850->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance849->addChild(*SoMaterial850);

SoShape848->addChild(*SoVRMLAppearance849);

SoIndexedFaceSet* SoIndexedFaceSet851 = new SoIndexedFaceSet();
SoIndexedFaceSet851->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet851->setCreaseAngle(0.5);
SoIndexedFaceSet851->setSolid(false);
SoColorRGBA* SoColorRGBA852 = new SoColorRGBA();
SoColorRGBA852->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet851->addChild(*SoColorRGBA852);

SoCoordinate* SoCoordinate853 = new SoCoordinate();
SoCoordinate853->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet851->setCoord(*SoCoordinate853);

SoShape848->setGeometry(*SoIndexedFaceSet851);

SoHAnimSite846->addChild(*SoShape848);

SoBillboard* SoBillboard854 = new SoBillboard();
SoBillboard854->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape855 = new SoShape();
SoText* SoText856 = new SoText();
SoText856->setString(new QString[]{QString("120")}, 1);
SoFontStyle* SoFontStyle857 = new SoFontStyle();
SoFontStyle857->setSize(0.035);
SoText856->setFontStyle(*SoFontStyle857);

SoShape855->setGeometry(*SoText856);

SoBillboard854->addChild(*SoShape855);

SoHAnimSite846->addChild(SoBillboard854);

SoHAnimSegment845->addChild(*SoHAnimSite846);

SoShape* SoShape858 = new SoShape();
SoLineSet* SoLineSet859 = new SoLineSet();
SoLineSet859->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA860 = new SoColorRGBA();
SoColorRGBA860->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet859->addChild(*SoColorRGBA860);

SoCoordinate* SoCoordinate861 = new SoCoordinate();
SoCoordinate861->setPoint(new float[]{-0.1269,0.00856,0.10188,-0.126,0.01086,0.09414}, 6);
SoLineSet859->setCoord(*SoCoordinate861);

SoShape858->setGeometry(*SoLineSet859);

SoHAnimSegment845->addChild(*SoShape858);

SoHAnimJoint844->addChildren(*SoHAnimSegment845);

SoHAnimJoint826->addChildren(*SoHAnimJoint844);

SoHAnimJoint820->addChildren(*SoHAnimJoint826);

SoHAnimJoint814->addChildren(*SoHAnimJoint820);

SoHAnimJoint772->addChildren(*SoHAnimJoint814);

SoHAnimJoint766->addChildren(*SoHAnimJoint772);

SoHAnimJoint598->addChildren(*SoHAnimJoint766);

SoHAnimJoint556->addChildren(*SoHAnimJoint598);

SoHAnimJoint502->addChildren(*SoHAnimJoint556);

SoHAnimJoint16->addChildren(*SoHAnimJoint502);

SoHAnimJoint12->addChildren(*SoHAnimJoint16);

SoHAnimJoint* SoHAnimJoint862 = new SoHAnimJoint();
SoHAnimJoint862->X3DNode::setName(QString("vl5"));
SoHAnimJoint862->setDEF(QString("hanim_vl5"));
SoHAnimJoint862->setCenter(new float[]{0.0,0.9254,-0.01376});
SoHAnimJoint862->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint862->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment863 = new SoHAnimSegment();
SoHAnimSegment863->X3DNode::setName(QString("l5"));
SoHAnimSegment863->setDEF(QString("hanim_l5"));
SoHAnimSite* SoHAnimSite864 = new SoHAnimSite();
SoHAnimSite864->X3DNode::setName(QString("spine_1_middle_back"));
SoHAnimSite864->setDEF(QString("hanim_spine_1_middle_back_pt"));
SoHAnimSite864->setTranslation(new float[]{0.0,1.0,-0.1});
SoTouchSensor* SoTouchSensor865 = new SoTouchSensor();
SoTouchSensor865->setDescription(QString("HAnimSite 24 hanim_spine_1_middle_back_pt"));
SoHAnimSite864->addChild(*SoTouchSensor865);

SoShape* SoShape866 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance867 = new SoVRMLAppearance();
SoMaterial* SoMaterial868 = new SoMaterial();
SoMaterial868->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance867->addChild(*SoMaterial868);

SoShape866->addChild(*SoVRMLAppearance867);

SoIndexedFaceSet* SoIndexedFaceSet869 = new SoIndexedFaceSet();
SoIndexedFaceSet869->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet869->setCreaseAngle(0.5);
SoIndexedFaceSet869->setSolid(false);
SoColorRGBA* SoColorRGBA870 = new SoColorRGBA();
SoColorRGBA870->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet869->addChild(*SoColorRGBA870);

SoCoordinate* SoCoordinate871 = new SoCoordinate();
SoCoordinate871->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet869->setCoord(*SoCoordinate871);

SoShape866->setGeometry(*SoIndexedFaceSet869);

SoHAnimSite864->addChild(*SoShape866);

SoBillboard* SoBillboard872 = new SoBillboard();
SoBillboard872->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape873 = new SoShape();
SoText* SoText874 = new SoText();
SoText874->setString(new QString[]{QString("24")}, 1);
SoFontStyle* SoFontStyle875 = new SoFontStyle();
SoFontStyle875->setSize(0.035);
SoText874->setFontStyle(*SoFontStyle875);

SoShape873->setGeometry(*SoText874);

SoBillboard872->addChild(*SoShape873);

SoHAnimSite864->addChild(SoBillboard872);

SoHAnimSegment863->addChild(*SoHAnimSite864);

SoHAnimSite* SoHAnimSite876 = new SoHAnimSite();
SoHAnimSite876->X3DNode::setName(QString("spine_2_lower_back"));
SoHAnimSite876->setDEF(QString("hanim_spine_2_lower_back_pt"));
SoHAnimSite876->setTranslation(new float[]{0.0,0.95,-0.1});
SoTouchSensor* SoTouchSensor877 = new SoTouchSensor();
SoTouchSensor877->setDescription(QString("HAnimSite 25 hanim_spine_2_lower_back_pt"));
SoHAnimSite876->addChild(*SoTouchSensor877);

SoShape* SoShape878 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance879 = new SoVRMLAppearance();
SoMaterial* SoMaterial880 = new SoMaterial();
SoMaterial880->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance879->addChild(*SoMaterial880);

SoShape878->addChild(*SoVRMLAppearance879);

SoIndexedFaceSet* SoIndexedFaceSet881 = new SoIndexedFaceSet();
SoIndexedFaceSet881->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet881->setCreaseAngle(0.5);
SoIndexedFaceSet881->setSolid(false);
SoColorRGBA* SoColorRGBA882 = new SoColorRGBA();
SoColorRGBA882->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet881->addChild(*SoColorRGBA882);

SoCoordinate* SoCoordinate883 = new SoCoordinate();
SoCoordinate883->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet881->setCoord(*SoCoordinate883);

SoShape878->setGeometry(*SoIndexedFaceSet881);

SoHAnimSite876->addChild(*SoShape878);

SoBillboard* SoBillboard884 = new SoBillboard();
SoBillboard884->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape885 = new SoShape();
SoText* SoText886 = new SoText();
SoText886->setString(new QString[]{QString("25")}, 1);
SoFontStyle* SoFontStyle887 = new SoFontStyle();
SoFontStyle887->setSize(0.035);
SoText886->setFontStyle(*SoFontStyle887);

SoShape885->setGeometry(*SoText886);

SoBillboard884->addChild(*SoShape885);

SoHAnimSite876->addChild(SoBillboard884);

SoHAnimSegment863->addChild(*SoHAnimSite876);

SoHAnimSite* SoHAnimSite888 = new SoHAnimSite();
SoHAnimSite888->X3DNode::setName(QString("waist_preferred_anterior"));
SoHAnimSite888->setDEF(QString("hanim_waist_preferred_anterior_pt"));
SoHAnimSite888->setTranslation(new float[]{0.0,0.9,0.1});
SoTouchSensor* SoTouchSensor889 = new SoTouchSensor();
SoTouchSensor889->setDescription(QString("HAnimSite 26 hanim_waist_preferred_anterior_pt"));
SoHAnimSite888->addChild(*SoTouchSensor889);

SoShape* SoShape890 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance891 = new SoVRMLAppearance();
SoMaterial* SoMaterial892 = new SoMaterial();
SoMaterial892->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance891->addChild(*SoMaterial892);

SoShape890->addChild(*SoVRMLAppearance891);

SoIndexedFaceSet* SoIndexedFaceSet893 = new SoIndexedFaceSet();
SoIndexedFaceSet893->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet893->setCreaseAngle(0.5);
SoIndexedFaceSet893->setSolid(false);
SoColorRGBA* SoColorRGBA894 = new SoColorRGBA();
SoColorRGBA894->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet893->addChild(*SoColorRGBA894);

SoCoordinate* SoCoordinate895 = new SoCoordinate();
SoCoordinate895->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet893->setCoord(*SoCoordinate895);

SoShape890->setGeometry(*SoIndexedFaceSet893);

SoHAnimSite888->addChild(*SoShape890);

SoBillboard* SoBillboard896 = new SoBillboard();
SoBillboard896->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape897 = new SoShape();
SoText* SoText898 = new SoText();
SoText898->setString(new QString[]{QString("26")}, 1);
SoFontStyle* SoFontStyle899 = new SoFontStyle();
SoFontStyle899->setSize(0.035);
SoText898->setFontStyle(*SoFontStyle899);

SoShape897->setGeometry(*SoText898);

SoBillboard896->addChild(*SoShape897);

SoHAnimSite888->addChild(SoBillboard896);

SoHAnimSegment863->addChild(*SoHAnimSite888);

SoHAnimSite* SoHAnimSite900 = new SoHAnimSite();
SoHAnimSite900->X3DNode::setName(QString("waist_preferred_posterior"));
SoHAnimSite900->setDEF(QString("hanim_waist_preferred_posterior_pt"));
SoHAnimSite900->setTranslation(new float[]{0.0,0.9,-0.1});
SoTouchSensor* SoTouchSensor901 = new SoTouchSensor();
SoTouchSensor901->setDescription(QString("HAnimSite 27 hanim_waist_preferred_posterior_pt"));
SoHAnimSite900->addChild(*SoTouchSensor901);

SoShape* SoShape902 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance903 = new SoVRMLAppearance();
SoMaterial* SoMaterial904 = new SoMaterial();
SoMaterial904->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance903->addChild(*SoMaterial904);

SoShape902->addChild(*SoVRMLAppearance903);

SoIndexedFaceSet* SoIndexedFaceSet905 = new SoIndexedFaceSet();
SoIndexedFaceSet905->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet905->setCreaseAngle(0.5);
SoIndexedFaceSet905->setSolid(false);
SoColorRGBA* SoColorRGBA906 = new SoColorRGBA();
SoColorRGBA906->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet905->addChild(*SoColorRGBA906);

SoCoordinate* SoCoordinate907 = new SoCoordinate();
SoCoordinate907->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet905->setCoord(*SoCoordinate907);

SoShape902->setGeometry(*SoIndexedFaceSet905);

SoHAnimSite900->addChild(*SoShape902);

SoBillboard* SoBillboard908 = new SoBillboard();
SoBillboard908->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape909 = new SoShape();
SoText* SoText910 = new SoText();
SoText910->setString(new QString[]{QString("27")}, 1);
SoFontStyle* SoFontStyle911 = new SoFontStyle();
SoFontStyle911->setSize(0.035);
SoText910->setFontStyle(*SoFontStyle911);

SoShape909->setGeometry(*SoText910);

SoBillboard908->addChild(*SoShape909);

SoHAnimSite900->addChild(SoBillboard908);

SoHAnimSegment863->addChild(*SoHAnimSite900);

SoHAnimSite* SoHAnimSite912 = new SoHAnimSite();
SoHAnimSite912->X3DNode::setName(QString("navel"));
SoHAnimSite912->setDEF(QString("hanim_navel_pt"));
SoHAnimSite912->setTranslation(new float[]{0.0,0.9,-0.1});
SoTouchSensor* SoTouchSensor913 = new SoTouchSensor();
SoTouchSensor913->setDescription(QString("HAnimSite 84 hanim_navel_pt"));
SoHAnimSite912->addChild(*SoTouchSensor913);

SoShape* SoShape914 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance915 = new SoVRMLAppearance();
SoMaterial* SoMaterial916 = new SoMaterial();
SoMaterial916->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance915->addChild(*SoMaterial916);

SoShape914->addChild(*SoVRMLAppearance915);

SoIndexedFaceSet* SoIndexedFaceSet917 = new SoIndexedFaceSet();
SoIndexedFaceSet917->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet917->setCreaseAngle(0.5);
SoIndexedFaceSet917->setSolid(false);
SoColorRGBA* SoColorRGBA918 = new SoColorRGBA();
SoColorRGBA918->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet917->addChild(*SoColorRGBA918);

SoCoordinate* SoCoordinate919 = new SoCoordinate();
SoCoordinate919->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet917->setCoord(*SoCoordinate919);

SoShape914->setGeometry(*SoIndexedFaceSet917);

SoHAnimSite912->addChild(*SoShape914);

SoBillboard* SoBillboard920 = new SoBillboard();
SoBillboard920->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape921 = new SoShape();
SoText* SoText922 = new SoText();
SoText922->setString(new QString[]{QString("84")}, 1);
SoFontStyle* SoFontStyle923 = new SoFontStyle();
SoFontStyle923->setSize(0.035);
SoText922->setFontStyle(*SoFontStyle923);

SoShape921->setGeometry(*SoText922);

SoBillboard920->addChild(*SoShape921);

SoHAnimSite912->addChild(SoBillboard920);

SoHAnimSegment863->addChild(*SoHAnimSite912);

SoShape* SoShape924 = new SoShape();
SoLineSet* SoLineSet925 = new SoLineSet();
SoLineSet925->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA926 = new SoColorRGBA();
SoColorRGBA926->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet925->addChild(*SoColorRGBA926);

SoCoordinate* SoCoordinate927 = new SoCoordinate();
SoCoordinate927->setPoint(new float[]{0.0,0.9254,-0.01376,0.0,0.77,0.0}, 6);
SoLineSet925->setCoord(*SoCoordinate927);

SoShape924->setGeometry(*SoLineSet925);

SoHAnimSegment863->addChild(*SoShape924);

SoHAnimJoint862->addChildren(*SoHAnimSegment863);

SoHAnimJoint* SoHAnimJoint928 = new SoHAnimJoint();
SoHAnimJoint928->X3DNode::setName(QString("vl4"));
SoHAnimJoint928->setDEF(QString("hanim_vl4"));
SoHAnimJoint928->setCenter(new float[]{0.0,0.9497,-0.01376});
SoHAnimJoint928->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint928->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment929 = new SoHAnimSegment();
SoHAnimSegment929->X3DNode::setName(QString("l4"));
SoHAnimSegment929->setDEF(QString("hanim_l4"));
SoShape* SoShape930 = new SoShape();
SoLineSet* SoLineSet931 = new SoLineSet();
SoLineSet931->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA932 = new SoColorRGBA();
SoColorRGBA932->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet931->addChild(*SoColorRGBA932);

SoCoordinate* SoCoordinate933 = new SoCoordinate();
SoCoordinate933->setPoint(new float[]{0.0,0.9497,-0.01376,0.0,0.9254,-0.01376}, 6);
SoLineSet931->setCoord(*SoCoordinate933);

SoShape930->setGeometry(*SoLineSet931);

SoHAnimSegment929->addChild(*SoShape930);

SoHAnimJoint928->addChildren(*SoHAnimSegment929);

SoHAnimJoint* SoHAnimJoint934 = new SoHAnimJoint();
SoHAnimJoint934->X3DNode::setName(QString("vl3"));
SoHAnimJoint934->setDEF(QString("hanim_vl3"));
SoHAnimJoint934->setCenter(new float[]{0.0,0.9659,-0.01376});
SoHAnimJoint934->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint934->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment935 = new SoHAnimSegment();
SoHAnimSegment935->X3DNode::setName(QString("l3"));
SoHAnimSegment935->setDEF(QString("hanim_l3"));
SoShape* SoShape936 = new SoShape();
SoLineSet* SoLineSet937 = new SoLineSet();
SoLineSet937->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA938 = new SoColorRGBA();
SoColorRGBA938->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet937->addChild(*SoColorRGBA938);

SoCoordinate* SoCoordinate939 = new SoCoordinate();
SoCoordinate939->setPoint(new float[]{0.0,0.9659,-0.01376,0.0,0.9497,-0.01376}, 6);
SoLineSet937->setCoord(*SoCoordinate939);

SoShape936->setGeometry(*SoLineSet937);

SoHAnimSegment935->addChild(*SoShape936);

SoHAnimJoint934->addChildren(*SoHAnimSegment935);

SoHAnimJoint* SoHAnimJoint940 = new SoHAnimJoint();
SoHAnimJoint940->X3DNode::setName(QString("vl2"));
SoHAnimJoint940->setDEF(QString("hanim_vl2"));
SoHAnimJoint940->setCenter(new float[]{0.0,0.98235,-0.01376});
SoHAnimJoint940->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint940->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment941 = new SoHAnimSegment();
SoHAnimSegment941->X3DNode::setName(QString("l2"));
SoHAnimSegment941->setDEF(QString("hanim_l2"));
SoHAnimSite* SoHAnimSite942 = new SoHAnimSite();
SoHAnimSite942->X3DNode::setName(QString("l_rib10"));
SoHAnimSite942->setDEF(QString("hanim_l_rib10_pt"));
SoHAnimSite942->setTranslation(new float[]{0.09,1.0,0.04});
SoTouchSensor* SoTouchSensor943 = new SoTouchSensor();
SoTouchSensor943->setDescription(QString("HAnimSite 28 hanim_l_rib10_pt"));
SoHAnimSite942->addChild(*SoTouchSensor943);

SoShape* SoShape944 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance945 = new SoVRMLAppearance();
SoMaterial* SoMaterial946 = new SoMaterial();
SoMaterial946->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance945->addChild(*SoMaterial946);

SoShape944->addChild(*SoVRMLAppearance945);

SoIndexedFaceSet* SoIndexedFaceSet947 = new SoIndexedFaceSet();
SoIndexedFaceSet947->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet947->setCreaseAngle(0.5);
SoIndexedFaceSet947->setSolid(false);
SoColorRGBA* SoColorRGBA948 = new SoColorRGBA();
SoColorRGBA948->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet947->addChild(*SoColorRGBA948);

SoCoordinate* SoCoordinate949 = new SoCoordinate();
SoCoordinate949->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet947->setCoord(*SoCoordinate949);

SoShape944->setGeometry(*SoIndexedFaceSet947);

SoHAnimSite942->addChild(*SoShape944);

SoBillboard* SoBillboard950 = new SoBillboard();
SoBillboard950->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape951 = new SoShape();
SoText* SoText952 = new SoText();
SoText952->setString(new QString[]{QString("28")}, 1);
SoFontStyle* SoFontStyle953 = new SoFontStyle();
SoFontStyle953->setSize(0.035);
SoText952->setFontStyle(*SoFontStyle953);

SoShape951->setGeometry(*SoText952);

SoBillboard950->addChild(*SoShape951);

SoHAnimSite942->addChild(SoBillboard950);

SoHAnimSegment941->addChild(*SoHAnimSite942);

SoHAnimSite* SoHAnimSite954 = new SoHAnimSite();
SoHAnimSite954->X3DNode::setName(QString("r_rib10"));
SoHAnimSite954->setDEF(QString("hanim_r_rib10_pt"));
SoHAnimSite954->setTranslation(new float[]{-0.09,1.0,0.04});
SoTouchSensor* SoTouchSensor955 = new SoTouchSensor();
SoTouchSensor955->setDescription(QString("HAnimSite 30 hanim_r_rib10_pt"));
SoHAnimSite954->addChild(*SoTouchSensor955);

SoShape* SoShape956 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance957 = new SoVRMLAppearance();
SoMaterial* SoMaterial958 = new SoMaterial();
SoMaterial958->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance957->addChild(*SoMaterial958);

SoShape956->addChild(*SoVRMLAppearance957);

SoIndexedFaceSet* SoIndexedFaceSet959 = new SoIndexedFaceSet();
SoIndexedFaceSet959->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet959->setCreaseAngle(0.5);
SoIndexedFaceSet959->setSolid(false);
SoColorRGBA* SoColorRGBA960 = new SoColorRGBA();
SoColorRGBA960->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet959->addChild(*SoColorRGBA960);

SoCoordinate* SoCoordinate961 = new SoCoordinate();
SoCoordinate961->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet959->setCoord(*SoCoordinate961);

SoShape956->setGeometry(*SoIndexedFaceSet959);

SoHAnimSite954->addChild(*SoShape956);

SoBillboard* SoBillboard962 = new SoBillboard();
SoBillboard962->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape963 = new SoShape();
SoText* SoText964 = new SoText();
SoText964->setString(new QString[]{QString("30")}, 1);
SoFontStyle* SoFontStyle965 = new SoFontStyle();
SoFontStyle965->setSize(0.035);
SoText964->setFontStyle(*SoFontStyle965);

SoShape963->setGeometry(*SoText964);

SoBillboard962->addChild(*SoShape963);

SoHAnimSite954->addChild(SoBillboard962);

SoHAnimSegment941->addChild(*SoHAnimSite954);

SoShape* SoShape966 = new SoShape();
SoLineSet* SoLineSet967 = new SoLineSet();
SoLineSet967->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA968 = new SoColorRGBA();
SoColorRGBA968->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet967->addChild(*SoColorRGBA968);

SoCoordinate* SoCoordinate969 = new SoCoordinate();
SoCoordinate969->setPoint(new float[]{0.0,0.98235,-0.01376,0.0,0.9659,-0.01376}, 6);
SoLineSet967->setCoord(*SoCoordinate969);

SoShape966->setGeometry(*SoLineSet967);

SoHAnimSegment941->addChild(*SoShape966);

SoHAnimJoint940->addChildren(*SoHAnimSegment941);

SoHAnimJoint* SoHAnimJoint970 = new SoHAnimJoint();
SoHAnimJoint970->X3DNode::setName(QString("vl1"));
SoHAnimJoint970->setDEF(QString("hanim_vl1"));
SoHAnimJoint970->setCenter(new float[]{0.0,0.99967,-0.01376});
SoHAnimJoint970->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint970->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment971 = new SoHAnimSegment();
SoHAnimSegment971->X3DNode::setName(QString("l1"));
SoHAnimSegment971->setDEF(QString("hanim_l1"));
SoShape* SoShape972 = new SoShape();
SoLineSet* SoLineSet973 = new SoLineSet();
SoLineSet973->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA974 = new SoColorRGBA();
SoColorRGBA974->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet973->addChild(*SoColorRGBA974);

SoCoordinate* SoCoordinate975 = new SoCoordinate();
SoCoordinate975->setPoint(new float[]{0.0,0.99967,-0.01376,0.0,0.98235,-0.01376}, 6);
SoLineSet973->setCoord(*SoCoordinate975);

SoShape972->setGeometry(*SoLineSet973);

SoHAnimSegment971->addChild(*SoShape972);

SoHAnimJoint970->addChildren(*SoHAnimSegment971);

SoHAnimJoint* SoHAnimJoint976 = new SoHAnimJoint();
SoHAnimJoint976->X3DNode::setName(QString("vt12"));
SoHAnimJoint976->setDEF(QString("hanim_vt12"));
SoHAnimJoint976->setCenter(new float[]{0.0,1.0231,-0.01376});
SoHAnimJoint976->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint976->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment977 = new SoHAnimSegment();
SoHAnimSegment977->X3DNode::setName(QString("t12"));
SoHAnimSegment977->setDEF(QString("hanim_t12"));
SoShape* SoShape978 = new SoShape();
SoLineSet* SoLineSet979 = new SoLineSet();
SoLineSet979->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA980 = new SoColorRGBA();
SoColorRGBA980->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet979->addChild(*SoColorRGBA980);

SoCoordinate* SoCoordinate981 = new SoCoordinate();
SoCoordinate981->setPoint(new float[]{0.0,1.0231,-0.01376,0.0,0.99967,-0.01376}, 6);
SoLineSet979->setCoord(*SoCoordinate981);

SoShape978->setGeometry(*SoLineSet979);

SoHAnimSegment977->addChild(*SoShape978);

SoHAnimJoint976->addChildren(*SoHAnimSegment977);

SoHAnimJoint* SoHAnimJoint982 = new SoHAnimJoint();
SoHAnimJoint982->X3DNode::setName(QString("vt11"));
SoHAnimJoint982->setDEF(QString("hanim_vt11"));
SoHAnimJoint982->setCenter(new float[]{0.0,1.0467,-0.01376});
SoHAnimJoint982->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint982->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment983 = new SoHAnimSegment();
SoHAnimSegment983->X3DNode::setName(QString("t11"));
SoHAnimSegment983->setDEF(QString("hanim_t11"));
SoShape* SoShape984 = new SoShape();
SoLineSet* SoLineSet985 = new SoLineSet();
SoLineSet985->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA986 = new SoColorRGBA();
SoColorRGBA986->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet985->addChild(*SoColorRGBA986);

SoCoordinate* SoCoordinate987 = new SoCoordinate();
SoCoordinate987->setPoint(new float[]{0.0,1.0467,-0.01376,0.0,1.0231,-0.01376}, 6);
SoLineSet985->setCoord(*SoCoordinate987);

SoShape984->setGeometry(*SoLineSet985);

SoHAnimSegment983->addChild(*SoShape984);

SoHAnimJoint982->addChildren(*SoHAnimSegment983);

SoHAnimJoint* SoHAnimJoint988 = new SoHAnimJoint();
SoHAnimJoint988->X3DNode::setName(QString("vt10"));
SoHAnimJoint988->setDEF(QString("hanim_vt10"));
SoHAnimJoint988->setCenter(new float[]{0.0,1.0638,-0.01378});
SoHAnimJoint988->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint988->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment989 = new SoHAnimSegment();
SoHAnimSegment989->X3DNode::setName(QString("t10"));
SoHAnimSegment989->setDEF(QString("hanim_t10"));
SoHAnimSite* SoHAnimSite990 = new SoHAnimSite();
SoHAnimSite990->X3DNode::setName(QString("substernale"));
SoHAnimSite990->setDEF(QString("hanim_substernale_pt"));
SoHAnimSite990->setTranslation(new float[]{0.0,1.08,0.076});
SoTouchSensor* SoTouchSensor991 = new SoTouchSensor();
SoTouchSensor991->setDescription(QString("HAnimSite 13 hanim_substernale_pt"));
SoHAnimSite990->addChild(*SoTouchSensor991);

SoShape* SoShape992 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance993 = new SoVRMLAppearance();
SoMaterial* SoMaterial994 = new SoMaterial();
SoMaterial994->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance993->addChild(*SoMaterial994);

SoShape992->addChild(*SoVRMLAppearance993);

SoIndexedFaceSet* SoIndexedFaceSet995 = new SoIndexedFaceSet();
SoIndexedFaceSet995->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet995->setCreaseAngle(0.5);
SoIndexedFaceSet995->setSolid(false);
SoColorRGBA* SoColorRGBA996 = new SoColorRGBA();
SoColorRGBA996->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet995->addChild(*SoColorRGBA996);

SoCoordinate* SoCoordinate997 = new SoCoordinate();
SoCoordinate997->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet995->setCoord(*SoCoordinate997);

SoShape992->setGeometry(*SoIndexedFaceSet995);

SoHAnimSite990->addChild(*SoShape992);

SoBillboard* SoBillboard998 = new SoBillboard();
SoBillboard998->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape999 = new SoShape();
SoText* SoText1000 = new SoText();
SoText1000->setString(new QString[]{QString("13")}, 1);
SoFontStyle* SoFontStyle1001 = new SoFontStyle();
SoFontStyle1001->setSize(0.035);
SoText1000->setFontStyle(*SoFontStyle1001);

SoShape999->setGeometry(*SoText1000);

SoBillboard998->addChild(*SoShape999);

SoHAnimSite990->addChild(SoBillboard998);

SoHAnimSegment989->addChild(*SoHAnimSite990);

SoHAnimSite* SoHAnimSite1002 = new SoHAnimSite();
SoHAnimSite1002->X3DNode::setName(QString("mesosternale"));
SoHAnimSite1002->setDEF(QString("hanim_mesosternale_pt"));
SoHAnimSite1002->setTranslation(new float[]{0.0,1.15,0.076});
SoTouchSensor* SoTouchSensor1003 = new SoTouchSensor();
SoTouchSensor1003->setDescription(QString("HAnimSite 88 hanim_mesosternale_pt"));
SoHAnimSite1002->addChild(*SoTouchSensor1003);

SoShape* SoShape1004 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1005 = new SoVRMLAppearance();
SoMaterial* SoMaterial1006 = new SoMaterial();
SoMaterial1006->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1005->addChild(*SoMaterial1006);

SoShape1004->addChild(*SoVRMLAppearance1005);

SoIndexedFaceSet* SoIndexedFaceSet1007 = new SoIndexedFaceSet();
SoIndexedFaceSet1007->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1007->setCreaseAngle(0.5);
SoIndexedFaceSet1007->setSolid(false);
SoColorRGBA* SoColorRGBA1008 = new SoColorRGBA();
SoColorRGBA1008->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1007->addChild(*SoColorRGBA1008);

SoCoordinate* SoCoordinate1009 = new SoCoordinate();
SoCoordinate1009->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1007->setCoord(*SoCoordinate1009);

SoShape1004->setGeometry(*SoIndexedFaceSet1007);

SoHAnimSite1002->addChild(*SoShape1004);

SoBillboard* SoBillboard1010 = new SoBillboard();
SoBillboard1010->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1011 = new SoShape();
SoText* SoText1012 = new SoText();
SoText1012->setString(new QString[]{QString("88")}, 1);
SoFontStyle* SoFontStyle1013 = new SoFontStyle();
SoFontStyle1013->setSize(0.035);
SoText1012->setFontStyle(*SoFontStyle1013);

SoShape1011->setGeometry(*SoText1012);

SoBillboard1010->addChild(*SoShape1011);

SoHAnimSite1002->addChild(SoBillboard1010);

SoHAnimSegment989->addChild(*SoHAnimSite1002);

SoShape* SoShape1014 = new SoShape();
SoLineSet* SoLineSet1015 = new SoLineSet();
SoLineSet1015->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1016 = new SoColorRGBA();
SoColorRGBA1016->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1015->addChild(*SoColorRGBA1016);

SoCoordinate* SoCoordinate1017 = new SoCoordinate();
SoCoordinate1017->setPoint(new float[]{0.0,1.0638,-0.01378,0.0,1.0467,-0.01376}, 6);
SoLineSet1015->setCoord(*SoCoordinate1017);

SoShape1014->setGeometry(*SoLineSet1015);

SoHAnimSegment989->addChild(*SoShape1014);

SoHAnimJoint988->addChildren(*SoHAnimSegment989);

SoHAnimJoint* SoHAnimJoint1018 = new SoHAnimJoint();
SoHAnimJoint1018->X3DNode::setName(QString("vt9"));
SoHAnimJoint1018->setDEF(QString("hanim_vt9"));
SoHAnimJoint1018->setCenter(new float[]{0.0,1.0784,-0.01376});
SoHAnimJoint1018->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1018->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1019 = new SoHAnimSegment();
SoHAnimSegment1019->X3DNode::setName(QString("t9"));
SoHAnimSegment1019->setDEF(QString("hanim_t9"));
SoHAnimSite* SoHAnimSite1020 = new SoHAnimSite();
SoHAnimSite1020->X3DNode::setName(QString("l_thelion"));
SoHAnimSite1020->setDEF(QString("hanim_l_thelion_pt"));
SoHAnimSite1020->setTranslation(new float[]{0.07,1.12,0.09});
SoTouchSensor* SoTouchSensor1021 = new SoTouchSensor();
SoTouchSensor1021->setDescription(QString("HAnimSite 29 hanim_l_thelion_pt"));
SoHAnimSite1020->addChild(*SoTouchSensor1021);

SoShape* SoShape1022 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1023 = new SoVRMLAppearance();
SoMaterial* SoMaterial1024 = new SoMaterial();
SoMaterial1024->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1023->addChild(*SoMaterial1024);

SoShape1022->addChild(*SoVRMLAppearance1023);

SoIndexedFaceSet* SoIndexedFaceSet1025 = new SoIndexedFaceSet();
SoIndexedFaceSet1025->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1025->setCreaseAngle(0.5);
SoIndexedFaceSet1025->setSolid(false);
SoColorRGBA* SoColorRGBA1026 = new SoColorRGBA();
SoColorRGBA1026->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1025->addChild(*SoColorRGBA1026);

SoCoordinate* SoCoordinate1027 = new SoCoordinate();
SoCoordinate1027->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1025->setCoord(*SoCoordinate1027);

SoShape1022->setGeometry(*SoIndexedFaceSet1025);

SoHAnimSite1020->addChild(*SoShape1022);

SoBillboard* SoBillboard1028 = new SoBillboard();
SoBillboard1028->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1029 = new SoShape();
SoText* SoText1030 = new SoText();
SoText1030->setString(new QString[]{QString("29")}, 1);
SoFontStyle* SoFontStyle1031 = new SoFontStyle();
SoFontStyle1031->setSize(0.035);
SoText1030->setFontStyle(*SoFontStyle1031);

SoShape1029->setGeometry(*SoText1030);

SoBillboard1028->addChild(*SoShape1029);

SoHAnimSite1020->addChild(SoBillboard1028);

SoHAnimSegment1019->addChild(*SoHAnimSite1020);

SoHAnimSite* SoHAnimSite1032 = new SoHAnimSite();
SoHAnimSite1032->X3DNode::setName(QString("r_thelion"));
SoHAnimSite1032->setDEF(QString("hanim_r_thelion_pt"));
SoHAnimSite1032->setTranslation(new float[]{-0.07,1.12,0.09});
SoTouchSensor* SoTouchSensor1033 = new SoTouchSensor();
SoTouchSensor1033->setDescription(QString("HAnimSite 31 hanim_r_thelion_pt"));
SoHAnimSite1032->addChild(*SoTouchSensor1033);

SoShape* SoShape1034 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1035 = new SoVRMLAppearance();
SoMaterial* SoMaterial1036 = new SoMaterial();
SoMaterial1036->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1035->addChild(*SoMaterial1036);

SoShape1034->addChild(*SoVRMLAppearance1035);

SoIndexedFaceSet* SoIndexedFaceSet1037 = new SoIndexedFaceSet();
SoIndexedFaceSet1037->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1037->setCreaseAngle(0.5);
SoIndexedFaceSet1037->setSolid(false);
SoColorRGBA* SoColorRGBA1038 = new SoColorRGBA();
SoColorRGBA1038->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1037->addChild(*SoColorRGBA1038);

SoCoordinate* SoCoordinate1039 = new SoCoordinate();
SoCoordinate1039->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1037->setCoord(*SoCoordinate1039);

SoShape1034->setGeometry(*SoIndexedFaceSet1037);

SoHAnimSite1032->addChild(*SoShape1034);

SoBillboard* SoBillboard1040 = new SoBillboard();
SoBillboard1040->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1041 = new SoShape();
SoText* SoText1042 = new SoText();
SoText1042->setString(new QString[]{QString("31")}, 1);
SoFontStyle* SoFontStyle1043 = new SoFontStyle();
SoFontStyle1043->setSize(0.035);
SoText1042->setFontStyle(*SoFontStyle1043);

SoShape1041->setGeometry(*SoText1042);

SoBillboard1040->addChild(*SoShape1041);

SoHAnimSite1032->addChild(SoBillboard1040);

SoHAnimSegment1019->addChild(*SoHAnimSite1032);

SoHAnimSite* SoHAnimSite1044 = new SoHAnimSite();
SoHAnimSite1044->X3DNode::setName(QString("rear_center_midsagittal_plane"));
SoHAnimSite1044->setDEF(QString("hanim_rear_center_midsagittal_plane_pt"));
SoHAnimSite1044->setTranslation(new float[]{0.0,1.1,-0.1});
SoTouchSensor* SoTouchSensor1045 = new SoTouchSensor();
SoTouchSensor1045->setDescription(QString("HAnimSite 92 hanim_rear_center_midsagittal_plane_pt"));
SoHAnimSite1044->addChild(*SoTouchSensor1045);

SoShape* SoShape1046 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1047 = new SoVRMLAppearance();
SoMaterial* SoMaterial1048 = new SoMaterial();
SoMaterial1048->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1047->addChild(*SoMaterial1048);

SoShape1046->addChild(*SoVRMLAppearance1047);

SoIndexedFaceSet* SoIndexedFaceSet1049 = new SoIndexedFaceSet();
SoIndexedFaceSet1049->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1049->setCreaseAngle(0.5);
SoIndexedFaceSet1049->setSolid(false);
SoColorRGBA* SoColorRGBA1050 = new SoColorRGBA();
SoColorRGBA1050->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1049->addChild(*SoColorRGBA1050);

SoCoordinate* SoCoordinate1051 = new SoCoordinate();
SoCoordinate1051->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1049->setCoord(*SoCoordinate1051);

SoShape1046->setGeometry(*SoIndexedFaceSet1049);

SoHAnimSite1044->addChild(*SoShape1046);

SoBillboard* SoBillboard1052 = new SoBillboard();
SoBillboard1052->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1053 = new SoShape();
SoText* SoText1054 = new SoText();
SoText1054->setString(new QString[]{QString("92")}, 1);
SoFontStyle* SoFontStyle1055 = new SoFontStyle();
SoFontStyle1055->setSize(0.035);
SoText1054->setFontStyle(*SoFontStyle1055);

SoShape1053->setGeometry(*SoText1054);

SoBillboard1052->addChild(*SoShape1053);

SoHAnimSite1044->addChild(SoBillboard1052);

SoHAnimSegment1019->addChild(*SoHAnimSite1044);

SoHAnimSite* SoHAnimSite1056 = new SoHAnimSite();
SoHAnimSite1056->X3DNode::setName(QString("l_chest_midsagittal_plane"));
SoHAnimSite1056->setDEF(QString("hanim_l_chest_midsagittal_plane_pt"));
SoHAnimSite1056->setTranslation(new float[]{0.13,1.12,0.0});
SoTouchSensor* SoTouchSensor1057 = new SoTouchSensor();
SoTouchSensor1057->setDescription(QString("HAnimSite 94 hanim_l_chest_midsagittal_plane_pt"));
SoHAnimSite1056->addChild(*SoTouchSensor1057);

SoShape* SoShape1058 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1059 = new SoVRMLAppearance();
SoMaterial* SoMaterial1060 = new SoMaterial();
SoMaterial1060->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1059->addChild(*SoMaterial1060);

SoShape1058->addChild(*SoVRMLAppearance1059);

SoIndexedFaceSet* SoIndexedFaceSet1061 = new SoIndexedFaceSet();
SoIndexedFaceSet1061->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1061->setCreaseAngle(0.5);
SoIndexedFaceSet1061->setSolid(false);
SoColorRGBA* SoColorRGBA1062 = new SoColorRGBA();
SoColorRGBA1062->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1061->addChild(*SoColorRGBA1062);

SoCoordinate* SoCoordinate1063 = new SoCoordinate();
SoCoordinate1063->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1061->setCoord(*SoCoordinate1063);

SoShape1058->setGeometry(*SoIndexedFaceSet1061);

SoHAnimSite1056->addChild(*SoShape1058);

SoBillboard* SoBillboard1064 = new SoBillboard();
SoBillboard1064->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1065 = new SoShape();
SoText* SoText1066 = new SoText();
SoText1066->setString(new QString[]{QString("94")}, 1);
SoFontStyle* SoFontStyle1067 = new SoFontStyle();
SoFontStyle1067->setSize(0.035);
SoText1066->setFontStyle(*SoFontStyle1067);

SoShape1065->setGeometry(*SoText1066);

SoBillboard1064->addChild(*SoShape1065);

SoHAnimSite1056->addChild(SoBillboard1064);

SoHAnimSegment1019->addChild(*SoHAnimSite1056);

SoHAnimSite* SoHAnimSite1068 = new SoHAnimSite();
SoHAnimSite1068->X3DNode::setName(QString("r_chest_midsagittal_plane"));
SoHAnimSite1068->setDEF(QString("hanim_r_chest_midsagittal_plane_pt"));
SoHAnimSite1068->setTranslation(new float[]{-0.13,1.12,0.0});
SoTouchSensor* SoTouchSensor1069 = new SoTouchSensor();
SoTouchSensor1069->setDescription(QString("HAnimSite 95 hanim_r_chest_midsagittal_plane_pt"));
SoHAnimSite1068->addChild(*SoTouchSensor1069);

SoShape* SoShape1070 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1071 = new SoVRMLAppearance();
SoMaterial* SoMaterial1072 = new SoMaterial();
SoMaterial1072->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1071->addChild(*SoMaterial1072);

SoShape1070->addChild(*SoVRMLAppearance1071);

SoIndexedFaceSet* SoIndexedFaceSet1073 = new SoIndexedFaceSet();
SoIndexedFaceSet1073->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1073->setCreaseAngle(0.5);
SoIndexedFaceSet1073->setSolid(false);
SoColorRGBA* SoColorRGBA1074 = new SoColorRGBA();
SoColorRGBA1074->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1073->addChild(*SoColorRGBA1074);

SoCoordinate* SoCoordinate1075 = new SoCoordinate();
SoCoordinate1075->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1073->setCoord(*SoCoordinate1075);

SoShape1070->setGeometry(*SoIndexedFaceSet1073);

SoHAnimSite1068->addChild(*SoShape1070);

SoBillboard* SoBillboard1076 = new SoBillboard();
SoBillboard1076->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1077 = new SoShape();
SoText* SoText1078 = new SoText();
SoText1078->setString(new QString[]{QString("95")}, 1);
SoFontStyle* SoFontStyle1079 = new SoFontStyle();
SoFontStyle1079->setSize(0.035);
SoText1078->setFontStyle(*SoFontStyle1079);

SoShape1077->setGeometry(*SoText1078);

SoBillboard1076->addChild(*SoShape1077);

SoHAnimSite1068->addChild(SoBillboard1076);

SoHAnimSegment1019->addChild(*SoHAnimSite1068);

SoShape* SoShape1080 = new SoShape();
SoLineSet* SoLineSet1081 = new SoLineSet();
SoLineSet1081->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1082 = new SoColorRGBA();
SoColorRGBA1082->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1081->addChild(*SoColorRGBA1082);

SoCoordinate* SoCoordinate1083 = new SoCoordinate();
SoCoordinate1083->setPoint(new float[]{0.0,1.0784,-0.01376,0.0,1.0638,-0.01378}, 6);
SoLineSet1081->setCoord(*SoCoordinate1083);

SoShape1080->setGeometry(*SoLineSet1081);

SoHAnimSegment1019->addChild(*SoShape1080);

SoHAnimJoint1018->addChildren(*SoHAnimSegment1019);

SoHAnimJoint* SoHAnimJoint1084 = new SoHAnimJoint();
SoHAnimJoint1084->X3DNode::setName(QString("vt8"));
SoHAnimJoint1084->setDEF(QString("hanim_vt8"));
SoHAnimJoint1084->setCenter(new float[]{0.0,1.093,-0.01376});
SoHAnimJoint1084->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1084->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1085 = new SoHAnimSegment();
SoHAnimSegment1085->X3DNode::setName(QString("t8"));
SoHAnimSegment1085->setDEF(QString("hanim_t8"));
SoShape* SoShape1086 = new SoShape();
SoLineSet* SoLineSet1087 = new SoLineSet();
SoLineSet1087->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1088 = new SoColorRGBA();
SoColorRGBA1088->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1087->addChild(*SoColorRGBA1088);

SoCoordinate* SoCoordinate1089 = new SoCoordinate();
SoCoordinate1089->setPoint(new float[]{0.0,1.093,-0.01376,0.0,1.0784,-0.01376}, 6);
SoLineSet1087->setCoord(*SoCoordinate1089);

SoShape1086->setGeometry(*SoLineSet1087);

SoHAnimSegment1085->addChild(*SoShape1086);

SoHAnimJoint1084->addChildren(*SoHAnimSegment1085);

SoHAnimJoint* SoHAnimJoint1090 = new SoHAnimJoint();
SoHAnimJoint1090->X3DNode::setName(QString("vt7"));
SoHAnimJoint1090->setDEF(QString("hanim_vt7"));
SoHAnimJoint1090->setCenter(new float[]{0.0,1.1088,-0.01376});
SoHAnimJoint1090->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1090->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1091 = new SoHAnimSegment();
SoHAnimSegment1091->X3DNode::setName(QString("t7"));
SoHAnimSegment1091->setDEF(QString("hanim_t7"));
SoShape* SoShape1092 = new SoShape();
SoLineSet* SoLineSet1093 = new SoLineSet();
SoLineSet1093->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1094 = new SoColorRGBA();
SoColorRGBA1094->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1093->addChild(*SoColorRGBA1094);

SoCoordinate* SoCoordinate1095 = new SoCoordinate();
SoCoordinate1095->setPoint(new float[]{0.0,1.1088,-0.01376,0.0,1.093,-0.01376}, 6);
SoLineSet1093->setCoord(*SoCoordinate1095);

SoShape1092->setGeometry(*SoLineSet1093);

SoHAnimSegment1091->addChild(*SoShape1092);

SoHAnimJoint1090->addChildren(*SoHAnimSegment1091);

SoHAnimJoint* SoHAnimJoint1096 = new SoHAnimJoint();
SoHAnimJoint1096->X3DNode::setName(QString("vt6"));
SoHAnimJoint1096->setDEF(QString("hanim_vt6"));
SoHAnimJoint1096->setCenter(new float[]{0.0,1.1216,-0.01376});
SoHAnimJoint1096->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1096->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1097 = new SoHAnimSegment();
SoHAnimSegment1097->X3DNode::setName(QString("t6"));
SoHAnimSegment1097->setDEF(QString("hanim_t6"));
SoShape* SoShape1098 = new SoShape();
SoLineSet* SoLineSet1099 = new SoLineSet();
SoLineSet1099->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1100 = new SoColorRGBA();
SoColorRGBA1100->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1099->addChild(*SoColorRGBA1100);

SoCoordinate* SoCoordinate1101 = new SoCoordinate();
SoCoordinate1101->setPoint(new float[]{0.0,1.1216,-0.01376,0.0,1.1088,-0.01376}, 6);
SoLineSet1099->setCoord(*SoCoordinate1101);

SoShape1098->setGeometry(*SoLineSet1099);

SoHAnimSegment1097->addChild(*SoShape1098);

SoHAnimJoint1096->addChildren(*SoHAnimSegment1097);

SoHAnimJoint* SoHAnimJoint1102 = new SoHAnimJoint();
SoHAnimJoint1102->X3DNode::setName(QString("vt5"));
SoHAnimJoint1102->setDEF(QString("hanim_vt5"));
SoHAnimJoint1102->setCenter(new float[]{0.0,1.137,-0.01376});
SoHAnimJoint1102->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1102->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1103 = new SoHAnimSegment();
SoHAnimSegment1103->X3DNode::setName(QString("t5"));
SoHAnimSegment1103->setDEF(QString("hanim_t5"));
SoShape* SoShape1104 = new SoShape();
SoLineSet* SoLineSet1105 = new SoLineSet();
SoLineSet1105->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1106 = new SoColorRGBA();
SoColorRGBA1106->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1105->addChild(*SoColorRGBA1106);

SoCoordinate* SoCoordinate1107 = new SoCoordinate();
SoCoordinate1107->setPoint(new float[]{0.0,1.137,-0.01376,0.0,1.1216,-0.01376}, 6);
SoLineSet1105->setCoord(*SoCoordinate1107);

SoShape1104->setGeometry(*SoLineSet1105);

SoHAnimSegment1103->addChild(*SoShape1104);

SoHAnimJoint1102->addChildren(*SoHAnimSegment1103);

SoHAnimJoint* SoHAnimJoint1108 = new SoHAnimJoint();
SoHAnimJoint1108->X3DNode::setName(QString("vt4"));
SoHAnimJoint1108->setDEF(QString("hanim_vt4"));
SoHAnimJoint1108->setCenter(new float[]{0.0,1.1524,-0.01376});
SoHAnimJoint1108->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1108->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1109 = new SoHAnimSegment();
SoHAnimSegment1109->X3DNode::setName(QString("t4"));
SoHAnimSegment1109->setDEF(QString("hanim_t4"));
SoShape* SoShape1110 = new SoShape();
SoLineSet* SoLineSet1111 = new SoLineSet();
SoLineSet1111->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1112 = new SoColorRGBA();
SoColorRGBA1112->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1111->addChild(*SoColorRGBA1112);

SoCoordinate* SoCoordinate1113 = new SoCoordinate();
SoCoordinate1113->setPoint(new float[]{0.0,1.1524,-0.01376,0.0,1.137,-0.01376}, 6);
SoLineSet1111->setCoord(*SoCoordinate1113);

SoShape1110->setGeometry(*SoLineSet1111);

SoHAnimSegment1109->addChild(*SoShape1110);

SoHAnimJoint1108->addChildren(*SoHAnimSegment1109);

SoHAnimJoint* SoHAnimJoint1114 = new SoHAnimJoint();
SoHAnimJoint1114->X3DNode::setName(QString("vt3"));
SoHAnimJoint1114->setDEF(QString("hanim_vt3"));
SoHAnimJoint1114->setCenter(new float[]{0.0,1.1709,-0.01376});
SoHAnimJoint1114->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1114->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1115 = new SoHAnimSegment();
SoHAnimSegment1115->X3DNode::setName(QString("t3"));
SoHAnimSegment1115->setDEF(QString("hanim_t3"));
SoShape* SoShape1116 = new SoShape();
SoLineSet* SoLineSet1117 = new SoLineSet();
SoLineSet1117->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1118 = new SoColorRGBA();
SoColorRGBA1118->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1117->addChild(*SoColorRGBA1118);

SoCoordinate* SoCoordinate1119 = new SoCoordinate();
SoCoordinate1119->setPoint(new float[]{0.0,1.1709,-0.01376,0.0,1.1524,-0.01376}, 6);
SoLineSet1117->setCoord(*SoCoordinate1119);

SoShape1116->setGeometry(*SoLineSet1117);

SoHAnimSegment1115->addChild(*SoShape1116);

SoHAnimJoint1114->addChildren(*SoHAnimSegment1115);

SoHAnimJoint* SoHAnimJoint1120 = new SoHAnimJoint();
SoHAnimJoint1120->X3DNode::setName(QString("vt2"));
SoHAnimJoint1120->setDEF(QString("hanim_vt2"));
SoHAnimJoint1120->setCenter(new float[]{0.0,1.1956,-0.01378});
SoHAnimJoint1120->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1120->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1121 = new SoHAnimSegment();
SoHAnimSegment1121->X3DNode::setName(QString("t2"));
SoHAnimSegment1121->setDEF(QString("hanim_t2"));
SoShape* SoShape1122 = new SoShape();
SoLineSet* SoLineSet1123 = new SoLineSet();
SoLineSet1123->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1124 = new SoColorRGBA();
SoColorRGBA1124->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1123->addChild(*SoColorRGBA1124);

SoCoordinate* SoCoordinate1125 = new SoCoordinate();
SoCoordinate1125->setPoint(new float[]{0.0,1.1956,-0.01378,0.0,1.1709,-0.01376}, 6);
SoLineSet1123->setCoord(*SoCoordinate1125);

SoShape1122->setGeometry(*SoLineSet1123);

SoHAnimSegment1121->addChild(*SoShape1122);

SoHAnimJoint1120->addChildren(*SoHAnimSegment1121);

SoHAnimJoint* SoHAnimJoint1126 = new SoHAnimJoint();
SoHAnimJoint1126->X3DNode::setName(QString("vt1"));
SoHAnimJoint1126->setDEF(QString("hanim_vt1"));
SoHAnimJoint1126->setCenter(new float[]{0.0,1.22,-0.0138});
SoHAnimJoint1126->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1126->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1127 = new SoHAnimSegment();
SoHAnimSegment1127->X3DNode::setName(QString("t1"));
SoHAnimSegment1127->setDEF(QString("hanim_t1"));
SoHAnimSite* SoHAnimSite1128 = new SoHAnimSite();
SoHAnimSite1128->X3DNode::setName(QString("suprasternale"));
SoHAnimSite1128->setDEF(QString("hanim_suprasternale_pt"));
SoHAnimSite1128->setTranslation(new float[]{0.0,1.22,0.08});
SoTouchSensor* SoTouchSensor1129 = new SoTouchSensor();
SoTouchSensor1129->setDescription(QString("HAnimSite 12 hanim_suprasternale_pt"));
SoHAnimSite1128->addChild(*SoTouchSensor1129);

SoShape* SoShape1130 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1131 = new SoVRMLAppearance();
SoMaterial* SoMaterial1132 = new SoMaterial();
SoMaterial1132->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1131->addChild(*SoMaterial1132);

SoShape1130->addChild(*SoVRMLAppearance1131);

SoIndexedFaceSet* SoIndexedFaceSet1133 = new SoIndexedFaceSet();
SoIndexedFaceSet1133->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1133->setCreaseAngle(0.5);
SoIndexedFaceSet1133->setSolid(false);
SoColorRGBA* SoColorRGBA1134 = new SoColorRGBA();
SoColorRGBA1134->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1133->addChild(*SoColorRGBA1134);

SoCoordinate* SoCoordinate1135 = new SoCoordinate();
SoCoordinate1135->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1133->setCoord(*SoCoordinate1135);

SoShape1130->setGeometry(*SoIndexedFaceSet1133);

SoHAnimSite1128->addChild(*SoShape1130);

SoBillboard* SoBillboard1136 = new SoBillboard();
SoBillboard1136->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1137 = new SoShape();
SoText* SoText1138 = new SoText();
SoText1138->setString(new QString[]{QString("12")}, 1);
SoFontStyle* SoFontStyle1139 = new SoFontStyle();
SoFontStyle1139->setSize(0.035);
SoText1138->setFontStyle(*SoFontStyle1139);

SoShape1137->setGeometry(*SoText1138);

SoBillboard1136->addChild(*SoShape1137);

SoHAnimSite1128->addChild(SoBillboard1136);

SoHAnimSegment1127->addChild(*SoHAnimSite1128);

SoHAnimSite* SoHAnimSite1140 = new SoHAnimSite();
SoHAnimSite1140->X3DNode::setName(QString("cervicale"));
SoHAnimSite1140->setDEF(QString("hanim_cervicale_pt"));
SoHAnimSite1140->setTranslation(new float[]{0.0,1.22,-0.08});
SoTouchSensor* SoTouchSensor1141 = new SoTouchSensor();
SoTouchSensor1141->setDescription(QString("HAnimSite 10 hanim_cervicale_pt"));
SoHAnimSite1140->addChild(*SoTouchSensor1141);

SoShape* SoShape1142 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1143 = new SoVRMLAppearance();
SoMaterial* SoMaterial1144 = new SoMaterial();
SoMaterial1144->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1143->addChild(*SoMaterial1144);

SoShape1142->addChild(*SoVRMLAppearance1143);

SoIndexedFaceSet* SoIndexedFaceSet1145 = new SoIndexedFaceSet();
SoIndexedFaceSet1145->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1145->setCreaseAngle(0.5);
SoIndexedFaceSet1145->setSolid(false);
SoColorRGBA* SoColorRGBA1146 = new SoColorRGBA();
SoColorRGBA1146->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1145->addChild(*SoColorRGBA1146);

SoCoordinate* SoCoordinate1147 = new SoCoordinate();
SoCoordinate1147->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1145->setCoord(*SoCoordinate1147);

SoShape1142->setGeometry(*SoIndexedFaceSet1145);

SoHAnimSite1140->addChild(*SoShape1142);

SoBillboard* SoBillboard1148 = new SoBillboard();
SoBillboard1148->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1149 = new SoShape();
SoText* SoText1150 = new SoText();
SoText1150->setString(new QString[]{QString("10")}, 1);
SoFontStyle* SoFontStyle1151 = new SoFontStyle();
SoFontStyle1151->setSize(0.035);
SoText1150->setFontStyle(*SoFontStyle1151);

SoShape1149->setGeometry(*SoText1150);

SoBillboard1148->addChild(*SoShape1149);

SoHAnimSite1140->addChild(SoBillboard1148);

SoHAnimSegment1127->addChild(*SoHAnimSite1140);

SoShape* SoShape1152 = new SoShape();
SoLineSet* SoLineSet1153 = new SoLineSet();
SoLineSet1153->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1154 = new SoColorRGBA();
SoColorRGBA1154->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1153->addChild(*SoColorRGBA1154);

SoCoordinate* SoCoordinate1155 = new SoCoordinate();
SoCoordinate1155->setPoint(new float[]{0.0,1.22,-0.0138,0.0,1.1956,-0.01378}, 6);
SoLineSet1153->setCoord(*SoCoordinate1155);

SoShape1152->setGeometry(*SoLineSet1153);

SoHAnimSegment1127->addChild(*SoShape1152);

SoHAnimJoint1126->addChildren(*SoHAnimSegment1127);

SoHAnimJoint* SoHAnimJoint1156 = new SoHAnimJoint();
SoHAnimJoint1156->X3DNode::setName(QString("vc7"));
SoHAnimJoint1156->setDEF(QString("hanim_vc7"));
SoHAnimJoint1156->setCenter(new float[]{0.0,1.2453,-0.01506});
SoHAnimJoint1156->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1156->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1157 = new SoHAnimSegment();
SoHAnimSegment1157->X3DNode::setName(QString("c7"));
SoHAnimSegment1157->setDEF(QString("hanim_c7"));
SoHAnimSite* SoHAnimSite1158 = new SoHAnimSite();
SoHAnimSite1158->X3DNode::setName(QString("l_neck_base"));
SoHAnimSite1158->setDEF(QString("hanim_l_neck_base_pt"));
SoHAnimSite1158->setTranslation(new float[]{0.06,1.26,0.0});
SoTouchSensor* SoTouchSensor1159 = new SoTouchSensor();
SoTouchSensor1159->setDescription(QString("HAnimSite 82 hanim_l_neck_base_pt"));
SoHAnimSite1158->addChild(*SoTouchSensor1159);

SoShape* SoShape1160 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1161 = new SoVRMLAppearance();
SoMaterial* SoMaterial1162 = new SoMaterial();
SoMaterial1162->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1161->addChild(*SoMaterial1162);

SoShape1160->addChild(*SoVRMLAppearance1161);

SoIndexedFaceSet* SoIndexedFaceSet1163 = new SoIndexedFaceSet();
SoIndexedFaceSet1163->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1163->setCreaseAngle(0.5);
SoIndexedFaceSet1163->setSolid(false);
SoColorRGBA* SoColorRGBA1164 = new SoColorRGBA();
SoColorRGBA1164->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1163->addChild(*SoColorRGBA1164);

SoCoordinate* SoCoordinate1165 = new SoCoordinate();
SoCoordinate1165->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1163->setCoord(*SoCoordinate1165);

SoShape1160->setGeometry(*SoIndexedFaceSet1163);

SoHAnimSite1158->addChild(*SoShape1160);

SoBillboard* SoBillboard1166 = new SoBillboard();
SoBillboard1166->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1167 = new SoShape();
SoText* SoText1168 = new SoText();
SoText1168->setString(new QString[]{QString("82")}, 1);
SoFontStyle* SoFontStyle1169 = new SoFontStyle();
SoFontStyle1169->setSize(0.035);
SoText1168->setFontStyle(*SoFontStyle1169);

SoShape1167->setGeometry(*SoText1168);

SoBillboard1166->addChild(*SoShape1167);

SoHAnimSite1158->addChild(SoBillboard1166);

SoHAnimSegment1157->addChild(*SoHAnimSite1158);

SoHAnimSite* SoHAnimSite1170 = new SoHAnimSite();
SoHAnimSite1170->X3DNode::setName(QString("r_neck_base"));
SoHAnimSite1170->setDEF(QString("hanim_r_neck_base_pt"));
SoHAnimSite1170->setTranslation(new float[]{-0.06,1.26,0.0});
SoTouchSensor* SoTouchSensor1171 = new SoTouchSensor();
SoTouchSensor1171->setDescription(QString("HAnimSite 83 hanim_r_neck_base_pt"));
SoHAnimSite1170->addChild(*SoTouchSensor1171);

SoShape* SoShape1172 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1173 = new SoVRMLAppearance();
SoMaterial* SoMaterial1174 = new SoMaterial();
SoMaterial1174->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1173->addChild(*SoMaterial1174);

SoShape1172->addChild(*SoVRMLAppearance1173);

SoIndexedFaceSet* SoIndexedFaceSet1175 = new SoIndexedFaceSet();
SoIndexedFaceSet1175->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1175->setCreaseAngle(0.5);
SoIndexedFaceSet1175->setSolid(false);
SoColorRGBA* SoColorRGBA1176 = new SoColorRGBA();
SoColorRGBA1176->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1175->addChild(*SoColorRGBA1176);

SoCoordinate* SoCoordinate1177 = new SoCoordinate();
SoCoordinate1177->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1175->setCoord(*SoCoordinate1177);

SoShape1172->setGeometry(*SoIndexedFaceSet1175);

SoHAnimSite1170->addChild(*SoShape1172);

SoBillboard* SoBillboard1178 = new SoBillboard();
SoBillboard1178->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1179 = new SoShape();
SoText* SoText1180 = new SoText();
SoText1180->setString(new QString[]{QString("83")}, 1);
SoFontStyle* SoFontStyle1181 = new SoFontStyle();
SoFontStyle1181->setSize(0.035);
SoText1180->setFontStyle(*SoFontStyle1181);

SoShape1179->setGeometry(*SoText1180);

SoBillboard1178->addChild(*SoShape1179);

SoHAnimSite1170->addChild(SoBillboard1178);

SoHAnimSegment1157->addChild(*SoHAnimSite1170);

SoShape* SoShape1182 = new SoShape();
SoLineSet* SoLineSet1183 = new SoLineSet();
SoLineSet1183->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1184 = new SoColorRGBA();
SoColorRGBA1184->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1183->addChild(*SoColorRGBA1184);

SoCoordinate* SoCoordinate1185 = new SoCoordinate();
SoCoordinate1185->setPoint(new float[]{0.0,1.2453,-0.01506,0.0,1.22,-0.0138}, 6);
SoLineSet1183->setCoord(*SoCoordinate1185);

SoShape1182->setGeometry(*SoLineSet1183);

SoHAnimSegment1157->addChild(*SoShape1182);

SoHAnimJoint1156->addChildren(*SoHAnimSegment1157);

SoHAnimJoint* SoHAnimJoint1186 = new SoHAnimJoint();
SoHAnimJoint1186->X3DNode::setName(QString("vc6"));
SoHAnimJoint1186->setDEF(QString("hanim_vc6"));
SoHAnimJoint1186->setCenter(new float[]{0.0,1.2575,-0.01506});
SoHAnimJoint1186->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1186->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1187 = new SoHAnimSegment();
SoHAnimSegment1187->X3DNode::setName(QString("c6"));
SoHAnimSegment1187->setDEF(QString("hanim_c6"));
SoShape* SoShape1188 = new SoShape();
SoLineSet* SoLineSet1189 = new SoLineSet();
SoLineSet1189->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1190 = new SoColorRGBA();
SoColorRGBA1190->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1189->addChild(*SoColorRGBA1190);

SoCoordinate* SoCoordinate1191 = new SoCoordinate();
SoCoordinate1191->setPoint(new float[]{0.0,1.2575,-0.01506,0.0,1.2453,-0.01506}, 6);
SoLineSet1189->setCoord(*SoCoordinate1191);

SoShape1188->setGeometry(*SoLineSet1189);

SoHAnimSegment1187->addChild(*SoShape1188);

SoHAnimJoint1186->addChildren(*SoHAnimSegment1187);

SoHAnimJoint* SoHAnimJoint1192 = new SoHAnimJoint();
SoHAnimJoint1192->X3DNode::setName(QString("vc5"));
SoHAnimJoint1192->setDEF(QString("hanim_vc5"));
SoHAnimJoint1192->setCenter(new float[]{0.0,1.2699,-0.01506});
SoHAnimJoint1192->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1192->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1193 = new SoHAnimSegment();
SoHAnimSegment1193->X3DNode::setName(QString("c5"));
SoHAnimSegment1193->setDEF(QString("hanim_c5"));
SoShape* SoShape1194 = new SoShape();
SoLineSet* SoLineSet1195 = new SoLineSet();
SoLineSet1195->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1196 = new SoColorRGBA();
SoColorRGBA1196->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1195->addChild(*SoColorRGBA1196);

SoCoordinate* SoCoordinate1197 = new SoCoordinate();
SoCoordinate1197->setPoint(new float[]{0.0,1.2699,-0.01506,0.0,1.2575,-0.01506}, 6);
SoLineSet1195->setCoord(*SoCoordinate1197);

SoShape1194->setGeometry(*SoLineSet1195);

SoHAnimSegment1193->addChild(*SoShape1194);

SoHAnimJoint1192->addChildren(*SoHAnimSegment1193);

SoHAnimJoint* SoHAnimJoint1198 = new SoHAnimJoint();
SoHAnimJoint1198->X3DNode::setName(QString("vc4"));
SoHAnimJoint1198->setDEF(QString("hanim_vc4"));
SoHAnimJoint1198->setCenter(new float[]{0.0,1.28227,-0.01506});
SoHAnimJoint1198->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1198->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1199 = new SoHAnimSegment();
SoHAnimSegment1199->X3DNode::setName(QString("c4"));
SoHAnimSegment1199->setDEF(QString("hanim_c4"));
SoShape* SoShape1200 = new SoShape();
SoLineSet* SoLineSet1201 = new SoLineSet();
SoLineSet1201->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1202 = new SoColorRGBA();
SoColorRGBA1202->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1201->addChild(*SoColorRGBA1202);

SoCoordinate* SoCoordinate1203 = new SoCoordinate();
SoCoordinate1203->setPoint(new float[]{0.0,1.28227,-0.01506,0.0,1.2699,-0.01506}, 6);
SoLineSet1201->setCoord(*SoCoordinate1203);

SoShape1200->setGeometry(*SoLineSet1201);

SoHAnimSegment1199->addChild(*SoShape1200);

SoHAnimJoint1198->addChildren(*SoHAnimSegment1199);

SoHAnimJoint* SoHAnimJoint1204 = new SoHAnimJoint();
SoHAnimJoint1204->X3DNode::setName(QString("vc3"));
SoHAnimJoint1204->setDEF(QString("hanim_vc3"));
SoHAnimJoint1204->setCenter(new float[]{0.0,1.2951,-0.01506});
SoHAnimJoint1204->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1204->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1205 = new SoHAnimSegment();
SoHAnimSegment1205->X3DNode::setName(QString("c3"));
SoHAnimSegment1205->setDEF(QString("hanim_c3"));
SoShape* SoShape1206 = new SoShape();
SoLineSet* SoLineSet1207 = new SoLineSet();
SoLineSet1207->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1208 = new SoColorRGBA();
SoColorRGBA1208->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1207->addChild(*SoColorRGBA1208);

SoCoordinate* SoCoordinate1209 = new SoCoordinate();
SoCoordinate1209->setPoint(new float[]{0.0,1.2951,-0.01506,0.0,1.28227,-0.01506}, 6);
SoLineSet1207->setCoord(*SoCoordinate1209);

SoShape1206->setGeometry(*SoLineSet1207);

SoHAnimSegment1205->addChild(*SoShape1206);

SoHAnimJoint1204->addChildren(*SoHAnimSegment1205);

SoHAnimJoint* SoHAnimJoint1210 = new SoHAnimJoint();
SoHAnimJoint1210->X3DNode::setName(QString("vc2"));
SoHAnimJoint1210->setDEF(QString("hanim_vc2"));
SoHAnimJoint1210->setCenter(new float[]{0.0,1.307,-0.015});
SoHAnimJoint1210->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1210->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1211 = new SoHAnimSegment();
SoHAnimSegment1211->X3DNode::setName(QString("c2"));
SoHAnimSegment1211->setDEF(QString("hanim_c2"));
SoHAnimSite* SoHAnimSite1212 = new SoHAnimSite();
SoHAnimSite1212->X3DNode::setName(QString("adams_apple"));
SoHAnimSite1212->setDEF(QString("hanim_adams_apple_pt"));
SoHAnimSite1212->setTranslation(new float[]{0.0,1.29,0.04});
SoTouchSensor* SoTouchSensor1213 = new SoTouchSensor();
SoTouchSensor1213->setDescription(QString("HAnimSite 11 hanim_adams_apple_pt"));
SoHAnimSite1212->addChild(*SoTouchSensor1213);

SoShape* SoShape1214 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1215 = new SoVRMLAppearance();
SoMaterial* SoMaterial1216 = new SoMaterial();
SoMaterial1216->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1215->addChild(*SoMaterial1216);

SoShape1214->addChild(*SoVRMLAppearance1215);

SoIndexedFaceSet* SoIndexedFaceSet1217 = new SoIndexedFaceSet();
SoIndexedFaceSet1217->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1217->setCreaseAngle(0.5);
SoIndexedFaceSet1217->setSolid(false);
SoColorRGBA* SoColorRGBA1218 = new SoColorRGBA();
SoColorRGBA1218->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1217->addChild(*SoColorRGBA1218);

SoCoordinate* SoCoordinate1219 = new SoCoordinate();
SoCoordinate1219->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1217->setCoord(*SoCoordinate1219);

SoShape1214->setGeometry(*SoIndexedFaceSet1217);

SoHAnimSite1212->addChild(*SoShape1214);

SoBillboard* SoBillboard1220 = new SoBillboard();
SoBillboard1220->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1221 = new SoShape();
SoText* SoText1222 = new SoText();
SoText1222->setString(new QString[]{QString("11")}, 1);
SoFontStyle* SoFontStyle1223 = new SoFontStyle();
SoFontStyle1223->setSize(0.035);
SoText1222->setFontStyle(*SoFontStyle1223);

SoShape1221->setGeometry(*SoText1222);

SoBillboard1220->addChild(*SoShape1221);

SoHAnimSite1212->addChild(SoBillboard1220);

SoHAnimSegment1211->addChild(*SoHAnimSite1212);

SoShape* SoShape1224 = new SoShape();
SoLineSet* SoLineSet1225 = new SoLineSet();
SoLineSet1225->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1226 = new SoColorRGBA();
SoColorRGBA1226->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1225->addChild(*SoColorRGBA1226);

SoCoordinate* SoCoordinate1227 = new SoCoordinate();
SoCoordinate1227->setPoint(new float[]{0.0,1.307,-0.015,0.0,1.2951,-0.01506}, 6);
SoLineSet1225->setCoord(*SoCoordinate1227);

SoShape1224->setGeometry(*SoLineSet1225);

SoHAnimSegment1211->addChild(*SoShape1224);

SoHAnimJoint1210->addChildren(*SoHAnimSegment1211);

SoHAnimJoint* SoHAnimJoint1228 = new SoHAnimJoint();
SoHAnimJoint1228->X3DNode::setName(QString("vc1"));
SoHAnimJoint1228->setDEF(QString("hanim_vc1"));
SoHAnimJoint1228->setCenter(new float[]{0.0,1.3185,-0.0151});
SoHAnimJoint1228->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1228->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1229 = new SoHAnimSegment();
SoHAnimSegment1229->X3DNode::setName(QString("c1"));
SoHAnimSegment1229->setDEF(QString("hanim_c1"));
SoShape* SoShape1230 = new SoShape();
SoLineSet* SoLineSet1231 = new SoLineSet();
SoLineSet1231->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1232 = new SoColorRGBA();
SoColorRGBA1232->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1231->addChild(*SoColorRGBA1232);

SoCoordinate* SoCoordinate1233 = new SoCoordinate();
SoCoordinate1233->setPoint(new float[]{0.0,1.3185,-0.0151,0.0,1.307,-0.015}, 6);
SoLineSet1231->setCoord(*SoCoordinate1233);

SoShape1230->setGeometry(*SoLineSet1231);

SoHAnimSegment1229->addChild(*SoShape1230);

SoHAnimJoint1228->addChildren(*SoHAnimSegment1229);

SoHAnimJoint* SoHAnimJoint1234 = new SoHAnimJoint();
SoHAnimJoint1234->X3DNode::setName(QString("skullbase"));
SoHAnimJoint1234->setDEF(QString("hanim_skullbase"));
SoHAnimJoint1234->setCenter(new float[]{0.0,1.3126,-0.0154});
SoHAnimJoint1234->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1234->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1235 = new SoHAnimSegment();
SoHAnimSegment1235->X3DNode::setName(QString("skull"));
SoHAnimSegment1235->setDEF(QString("hanim_skull"));
SoHAnimSite* SoHAnimSite1236 = new SoHAnimSite();
SoHAnimSite1236->X3DNode::setName(QString("skull_vertex"));
SoHAnimSite1236->setDEF(QString("hanim_skull_vertex_pt"));
SoHAnimSite1236->setTranslation(new float[]{0.0,1.612,-0.03});
SoTouchSensor* SoTouchSensor1237 = new SoTouchSensor();
SoTouchSensor1237->setDescription(QString("HAnimSite 0 hanim_skull_vertex_pt"));
SoHAnimSite1236->addChild(*SoTouchSensor1237);

SoShape* SoShape1238 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1239 = new SoVRMLAppearance();
SoMaterial* SoMaterial1240 = new SoMaterial();
SoMaterial1240->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1239->addChild(*SoMaterial1240);

SoShape1238->addChild(*SoVRMLAppearance1239);

SoIndexedFaceSet* SoIndexedFaceSet1241 = new SoIndexedFaceSet();
SoIndexedFaceSet1241->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1241->setCreaseAngle(0.5);
SoIndexedFaceSet1241->setSolid(false);
SoColorRGBA* SoColorRGBA1242 = new SoColorRGBA();
SoColorRGBA1242->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1241->addChild(*SoColorRGBA1242);

SoCoordinate* SoCoordinate1243 = new SoCoordinate();
SoCoordinate1243->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1241->setCoord(*SoCoordinate1243);

SoShape1238->setGeometry(*SoIndexedFaceSet1241);

SoHAnimSite1236->addChild(*SoShape1238);

SoBillboard* SoBillboard1244 = new SoBillboard();
SoBillboard1244->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1245 = new SoShape();
SoText* SoText1246 = new SoText();
SoText1246->setString(new QString[]{QString("0")}, 1);
SoFontStyle* SoFontStyle1247 = new SoFontStyle();
SoFontStyle1247->setSize(0.035);
SoText1246->setFontStyle(*SoFontStyle1247);

SoShape1245->setGeometry(*SoText1246);

SoBillboard1244->addChild(*SoShape1245);

SoHAnimSite1236->addChild(SoBillboard1244);

SoHAnimSegment1235->addChild(*SoHAnimSite1236);

SoHAnimSite* SoHAnimSite1248 = new SoHAnimSite();
SoHAnimSite1248->X3DNode::setName(QString("glabella"));
SoHAnimSite1248->setDEF(QString("hanim_glabella_pt"));
SoHAnimSite1248->setTranslation(new float[]{0.0,1.454,0.128});
SoTouchSensor* SoTouchSensor1249 = new SoTouchSensor();
SoTouchSensor1249->setDescription(QString("HAnimSite 1 hanim_glabella_pt"));
SoHAnimSite1248->addChild(*SoTouchSensor1249);

SoShape* SoShape1250 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1251 = new SoVRMLAppearance();
SoMaterial* SoMaterial1252 = new SoMaterial();
SoMaterial1252->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1251->addChild(*SoMaterial1252);

SoShape1250->addChild(*SoVRMLAppearance1251);

SoIndexedFaceSet* SoIndexedFaceSet1253 = new SoIndexedFaceSet();
SoIndexedFaceSet1253->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1253->setCreaseAngle(0.5);
SoIndexedFaceSet1253->setSolid(false);
SoColorRGBA* SoColorRGBA1254 = new SoColorRGBA();
SoColorRGBA1254->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1253->addChild(*SoColorRGBA1254);

SoCoordinate* SoCoordinate1255 = new SoCoordinate();
SoCoordinate1255->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1253->setCoord(*SoCoordinate1255);

SoShape1250->setGeometry(*SoIndexedFaceSet1253);

SoHAnimSite1248->addChild(*SoShape1250);

SoBillboard* SoBillboard1256 = new SoBillboard();
SoBillboard1256->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1257 = new SoShape();
SoText* SoText1258 = new SoText();
SoText1258->setString(new QString[]{QString("1")}, 1);
SoFontStyle* SoFontStyle1259 = new SoFontStyle();
SoFontStyle1259->setSize(0.035);
SoText1258->setFontStyle(*SoFontStyle1259);

SoShape1257->setGeometry(*SoText1258);

SoBillboard1256->addChild(*SoShape1257);

SoHAnimSite1248->addChild(SoBillboard1256);

SoHAnimSegment1235->addChild(*SoHAnimSite1248);

SoHAnimSite* SoHAnimSite1260 = new SoHAnimSite();
SoHAnimSite1260->X3DNode::setName(QString("sellion"));
SoHAnimSite1260->setDEF(QString("hanim_sellion_pt"));
SoHAnimSite1260->setTranslation(new float[]{0.0,1.4,0.12});
SoTouchSensor* SoTouchSensor1261 = new SoTouchSensor();
SoTouchSensor1261->setDescription(QString("HAnimSite 2 hanim_sellion_pt"));
SoHAnimSite1260->addChild(*SoTouchSensor1261);

SoShape* SoShape1262 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1263 = new SoVRMLAppearance();
SoMaterial* SoMaterial1264 = new SoMaterial();
SoMaterial1264->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1263->addChild(*SoMaterial1264);

SoShape1262->addChild(*SoVRMLAppearance1263);

SoIndexedFaceSet* SoIndexedFaceSet1265 = new SoIndexedFaceSet();
SoIndexedFaceSet1265->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1265->setCreaseAngle(0.5);
SoIndexedFaceSet1265->setSolid(false);
SoColorRGBA* SoColorRGBA1266 = new SoColorRGBA();
SoColorRGBA1266->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1265->addChild(*SoColorRGBA1266);

SoCoordinate* SoCoordinate1267 = new SoCoordinate();
SoCoordinate1267->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1265->setCoord(*SoCoordinate1267);

SoShape1262->setGeometry(*SoIndexedFaceSet1265);

SoHAnimSite1260->addChild(*SoShape1262);

SoBillboard* SoBillboard1268 = new SoBillboard();
SoBillboard1268->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1269 = new SoShape();
SoText* SoText1270 = new SoText();
SoText1270->setString(new QString[]{QString("2")}, 1);
SoFontStyle* SoFontStyle1271 = new SoFontStyle();
SoFontStyle1271->setSize(0.035);
SoText1270->setFontStyle(*SoFontStyle1271);

SoShape1269->setGeometry(*SoText1270);

SoBillboard1268->addChild(*SoShape1269);

SoHAnimSite1260->addChild(SoBillboard1268);

SoHAnimSegment1235->addChild(*SoHAnimSite1260);

SoHAnimSite* SoHAnimSite1272 = new SoHAnimSite();
SoHAnimSite1272->X3DNode::setName(QString("l_infraorbitale"));
SoHAnimSite1272->setDEF(QString("hanim_l_infraorbitale_pt"));
SoHAnimSite1272->setTranslation(new float[]{0.039,1.38,0.09});
SoTouchSensor* SoTouchSensor1273 = new SoTouchSensor();
SoTouchSensor1273->setDescription(QString("HAnimSite 3 hanim_l_infraorbitale_pt"));
SoHAnimSite1272->addChild(*SoTouchSensor1273);

SoShape* SoShape1274 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1275 = new SoVRMLAppearance();
SoMaterial* SoMaterial1276 = new SoMaterial();
SoMaterial1276->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1275->addChild(*SoMaterial1276);

SoShape1274->addChild(*SoVRMLAppearance1275);

SoIndexedFaceSet* SoIndexedFaceSet1277 = new SoIndexedFaceSet();
SoIndexedFaceSet1277->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1277->setCreaseAngle(0.5);
SoIndexedFaceSet1277->setSolid(false);
SoColorRGBA* SoColorRGBA1278 = new SoColorRGBA();
SoColorRGBA1278->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1277->addChild(*SoColorRGBA1278);

SoCoordinate* SoCoordinate1279 = new SoCoordinate();
SoCoordinate1279->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1277->setCoord(*SoCoordinate1279);

SoShape1274->setGeometry(*SoIndexedFaceSet1277);

SoHAnimSite1272->addChild(*SoShape1274);

SoBillboard* SoBillboard1280 = new SoBillboard();
SoBillboard1280->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1281 = new SoShape();
SoText* SoText1282 = new SoText();
SoText1282->setString(new QString[]{QString("3")}, 1);
SoFontStyle* SoFontStyle1283 = new SoFontStyle();
SoFontStyle1283->setSize(0.035);
SoText1282->setFontStyle(*SoFontStyle1283);

SoShape1281->setGeometry(*SoText1282);

SoBillboard1280->addChild(*SoShape1281);

SoHAnimSite1272->addChild(SoBillboard1280);

SoHAnimSegment1235->addChild(*SoHAnimSite1272);

SoHAnimSite* SoHAnimSite1284 = new SoHAnimSite();
SoHAnimSite1284->X3DNode::setName(QString("l_tragion"));
SoHAnimSite1284->setDEF(QString("hanim_l_tragion_pt"));
SoHAnimSite1284->setTranslation(new float[]{0.1,1.38,0.0282});
SoTouchSensor* SoTouchSensor1285 = new SoTouchSensor();
SoTouchSensor1285->setDescription(QString("HAnimSite 4 hanim_l_tragion_pt"));
SoHAnimSite1284->addChild(*SoTouchSensor1285);

SoShape* SoShape1286 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1287 = new SoVRMLAppearance();
SoMaterial* SoMaterial1288 = new SoMaterial();
SoMaterial1288->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1287->addChild(*SoMaterial1288);

SoShape1286->addChild(*SoVRMLAppearance1287);

SoIndexedFaceSet* SoIndexedFaceSet1289 = new SoIndexedFaceSet();
SoIndexedFaceSet1289->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1289->setCreaseAngle(0.5);
SoIndexedFaceSet1289->setSolid(false);
SoColorRGBA* SoColorRGBA1290 = new SoColorRGBA();
SoColorRGBA1290->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1289->addChild(*SoColorRGBA1290);

SoCoordinate* SoCoordinate1291 = new SoCoordinate();
SoCoordinate1291->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1289->setCoord(*SoCoordinate1291);

SoShape1286->setGeometry(*SoIndexedFaceSet1289);

SoHAnimSite1284->addChild(*SoShape1286);

SoBillboard* SoBillboard1292 = new SoBillboard();
SoBillboard1292->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1293 = new SoShape();
SoText* SoText1294 = new SoText();
SoText1294->setString(new QString[]{QString("4")}, 1);
SoFontStyle* SoFontStyle1295 = new SoFontStyle();
SoFontStyle1295->setSize(0.035);
SoText1294->setFontStyle(*SoFontStyle1295);

SoShape1293->setGeometry(*SoText1294);

SoBillboard1292->addChild(*SoShape1293);

SoHAnimSite1284->addChild(SoBillboard1292);

SoHAnimSegment1235->addChild(*SoHAnimSite1284);

SoHAnimSite* SoHAnimSite1296 = new SoHAnimSite();
SoHAnimSite1296->X3DNode::setName(QString("r_infraorbitale"));
SoHAnimSite1296->setDEF(QString("hanim_r_infraorbitale_pt"));
SoHAnimSite1296->setTranslation(new float[]{-0.039,1.38,0.09});
SoTouchSensor* SoTouchSensor1297 = new SoTouchSensor();
SoTouchSensor1297->setDescription(QString("HAnimSite 6 hanim_r_infraorbitale_pt"));
SoHAnimSite1296->addChild(*SoTouchSensor1297);

SoShape* SoShape1298 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1299 = new SoVRMLAppearance();
SoMaterial* SoMaterial1300 = new SoMaterial();
SoMaterial1300->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1299->addChild(*SoMaterial1300);

SoShape1298->addChild(*SoVRMLAppearance1299);

SoIndexedFaceSet* SoIndexedFaceSet1301 = new SoIndexedFaceSet();
SoIndexedFaceSet1301->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1301->setCreaseAngle(0.5);
SoIndexedFaceSet1301->setSolid(false);
SoColorRGBA* SoColorRGBA1302 = new SoColorRGBA();
SoColorRGBA1302->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1301->addChild(*SoColorRGBA1302);

SoCoordinate* SoCoordinate1303 = new SoCoordinate();
SoCoordinate1303->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1301->setCoord(*SoCoordinate1303);

SoShape1298->setGeometry(*SoIndexedFaceSet1301);

SoHAnimSite1296->addChild(*SoShape1298);

SoBillboard* SoBillboard1304 = new SoBillboard();
SoBillboard1304->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1305 = new SoShape();
SoText* SoText1306 = new SoText();
SoText1306->setString(new QString[]{QString("6")}, 1);
SoFontStyle* SoFontStyle1307 = new SoFontStyle();
SoFontStyle1307->setSize(0.035);
SoText1306->setFontStyle(*SoFontStyle1307);

SoShape1305->setGeometry(*SoText1306);

SoBillboard1304->addChild(*SoShape1305);

SoHAnimSite1296->addChild(SoBillboard1304);

SoHAnimSegment1235->addChild(*SoHAnimSite1296);

SoHAnimSite* SoHAnimSite1308 = new SoHAnimSite();
SoHAnimSite1308->X3DNode::setName(QString("r_tragion"));
SoHAnimSite1308->setDEF(QString("hanim_r_tragion_pt"));
SoHAnimSite1308->setTranslation(new float[]{-0.1,1.38,0.0282});
SoTouchSensor* SoTouchSensor1309 = new SoTouchSensor();
SoTouchSensor1309->setDescription(QString("HAnimSite 7 hanim_r_tragion_pt"));
SoHAnimSite1308->addChild(*SoTouchSensor1309);

SoShape* SoShape1310 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1311 = new SoVRMLAppearance();
SoMaterial* SoMaterial1312 = new SoMaterial();
SoMaterial1312->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1311->addChild(*SoMaterial1312);

SoShape1310->addChild(*SoVRMLAppearance1311);

SoIndexedFaceSet* SoIndexedFaceSet1313 = new SoIndexedFaceSet();
SoIndexedFaceSet1313->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1313->setCreaseAngle(0.5);
SoIndexedFaceSet1313->setSolid(false);
SoColorRGBA* SoColorRGBA1314 = new SoColorRGBA();
SoColorRGBA1314->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1313->addChild(*SoColorRGBA1314);

SoCoordinate* SoCoordinate1315 = new SoCoordinate();
SoCoordinate1315->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1313->setCoord(*SoCoordinate1315);

SoShape1310->setGeometry(*SoIndexedFaceSet1313);

SoHAnimSite1308->addChild(*SoShape1310);

SoBillboard* SoBillboard1316 = new SoBillboard();
SoBillboard1316->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1317 = new SoShape();
SoText* SoText1318 = new SoText();
SoText1318->setString(new QString[]{QString("7")}, 1);
SoFontStyle* SoFontStyle1319 = new SoFontStyle();
SoFontStyle1319->setSize(0.035);
SoText1318->setFontStyle(*SoFontStyle1319);

SoShape1317->setGeometry(*SoText1318);

SoBillboard1316->addChild(*SoShape1317);

SoHAnimSite1308->addChild(SoBillboard1316);

SoHAnimSegment1235->addChild(*SoHAnimSite1308);

SoHAnimSite* SoHAnimSite1320 = new SoHAnimSite();
SoHAnimSite1320->X3DNode::setName(QString("nuchale"));
SoHAnimSite1320->setDEF(QString("hanim_nuchale_pt"));
SoHAnimSite1320->setTranslation(new float[]{0.0039,1.35,-0.16});
SoTouchSensor* SoTouchSensor1321 = new SoTouchSensor();
SoTouchSensor1321->setDescription(QString("HAnimSite 81 hanim_nuchale_pt"));
SoHAnimSite1320->addChild(*SoTouchSensor1321);

SoShape* SoShape1322 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1323 = new SoVRMLAppearance();
SoMaterial* SoMaterial1324 = new SoMaterial();
SoMaterial1324->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1323->addChild(*SoMaterial1324);

SoShape1322->addChild(*SoVRMLAppearance1323);

SoIndexedFaceSet* SoIndexedFaceSet1325 = new SoIndexedFaceSet();
SoIndexedFaceSet1325->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1325->setCreaseAngle(0.5);
SoIndexedFaceSet1325->setSolid(false);
SoColorRGBA* SoColorRGBA1326 = new SoColorRGBA();
SoColorRGBA1326->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1325->addChild(*SoColorRGBA1326);

SoCoordinate* SoCoordinate1327 = new SoCoordinate();
SoCoordinate1327->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1325->setCoord(*SoCoordinate1327);

SoShape1322->setGeometry(*SoIndexedFaceSet1325);

SoHAnimSite1320->addChild(*SoShape1322);

SoBillboard* SoBillboard1328 = new SoBillboard();
SoBillboard1328->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1329 = new SoShape();
SoText* SoText1330 = new SoText();
SoText1330->setString(new QString[]{QString("81")}, 1);
SoFontStyle* SoFontStyle1331 = new SoFontStyle();
SoFontStyle1331->setSize(0.035);
SoText1330->setFontStyle(*SoFontStyle1331);

SoShape1329->setGeometry(*SoText1330);

SoBillboard1328->addChild(*SoShape1329);

SoHAnimSite1320->addChild(SoBillboard1328);

SoHAnimSegment1235->addChild(*SoHAnimSite1320);

SoHAnimSite* SoHAnimSite1332 = new SoHAnimSite();
SoHAnimSite1332->X3DNode::setName(QString("opisthocranion"));
SoHAnimSite1332->setDEF(QString("hanim_opisthocranion_pt"));
SoHAnimSite1332->setTranslation(new float[]{0.0039,1.4588,-0.18});
SoTouchSensor* SoTouchSensor1333 = new SoTouchSensor();
SoTouchSensor1333->setDescription(QString("HAnimSite 89 hanim_opisthocranion_pt"));
SoHAnimSite1332->addChild(*SoTouchSensor1333);

SoShape* SoShape1334 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1335 = new SoVRMLAppearance();
SoMaterial* SoMaterial1336 = new SoMaterial();
SoMaterial1336->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1335->addChild(*SoMaterial1336);

SoShape1334->addChild(*SoVRMLAppearance1335);

SoIndexedFaceSet* SoIndexedFaceSet1337 = new SoIndexedFaceSet();
SoIndexedFaceSet1337->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1337->setCreaseAngle(0.5);
SoIndexedFaceSet1337->setSolid(false);
SoColorRGBA* SoColorRGBA1338 = new SoColorRGBA();
SoColorRGBA1338->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1337->addChild(*SoColorRGBA1338);

SoCoordinate* SoCoordinate1339 = new SoCoordinate();
SoCoordinate1339->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1337->setCoord(*SoCoordinate1339);

SoShape1334->setGeometry(*SoIndexedFaceSet1337);

SoHAnimSite1332->addChild(*SoShape1334);

SoBillboard* SoBillboard1340 = new SoBillboard();
SoBillboard1340->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1341 = new SoShape();
SoText* SoText1342 = new SoText();
SoText1342->setString(new QString[]{QString("89")}, 1);
SoFontStyle* SoFontStyle1343 = new SoFontStyle();
SoFontStyle1343->setSize(0.035);
SoText1342->setFontStyle(*SoFontStyle1343);

SoShape1341->setGeometry(*SoText1342);

SoBillboard1340->addChild(*SoShape1341);

SoHAnimSite1332->addChild(SoBillboard1340);

SoHAnimSegment1235->addChild(*SoHAnimSite1332);

SoHAnimSite* SoHAnimSite1344 = new SoHAnimSite();
SoHAnimSite1344->X3DNode::setName(QString("l_ectocanthus"));
SoHAnimSite1344->setDEF(QString("hanim_l_ectocanthus_pt"));
SoHAnimSite1344->setTranslation(new float[]{0.086,1.399,0.074});
SoTouchSensor* SoTouchSensor1345 = new SoTouchSensor();
SoTouchSensor1345->setDescription(QString("HAnimSite 85 hanim_l_ectocanthus_pt"));
SoHAnimSite1344->addChild(*SoTouchSensor1345);

SoShape* SoShape1346 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1347 = new SoVRMLAppearance();
SoMaterial* SoMaterial1348 = new SoMaterial();
SoMaterial1348->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1347->addChild(*SoMaterial1348);

SoShape1346->addChild(*SoVRMLAppearance1347);

SoIndexedFaceSet* SoIndexedFaceSet1349 = new SoIndexedFaceSet();
SoIndexedFaceSet1349->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1349->setCreaseAngle(0.5);
SoIndexedFaceSet1349->setSolid(false);
SoColorRGBA* SoColorRGBA1350 = new SoColorRGBA();
SoColorRGBA1350->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1349->addChild(*SoColorRGBA1350);

SoCoordinate* SoCoordinate1351 = new SoCoordinate();
SoCoordinate1351->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1349->setCoord(*SoCoordinate1351);

SoShape1346->setGeometry(*SoIndexedFaceSet1349);

SoHAnimSite1344->addChild(*SoShape1346);

SoBillboard* SoBillboard1352 = new SoBillboard();
SoBillboard1352->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1353 = new SoShape();
SoText* SoText1354 = new SoText();
SoText1354->setString(new QString[]{QString("85")}, 1);
SoFontStyle* SoFontStyle1355 = new SoFontStyle();
SoFontStyle1355->setSize(0.035);
SoText1354->setFontStyle(*SoFontStyle1355);

SoShape1353->setGeometry(*SoText1354);

SoBillboard1352->addChild(*SoShape1353);

SoHAnimSite1344->addChild(SoBillboard1352);

SoHAnimSegment1235->addChild(*SoHAnimSite1344);

SoHAnimSite* SoHAnimSite1356 = new SoHAnimSite();
SoHAnimSite1356->X3DNode::setName(QString("r_ectocanthus"));
SoHAnimSite1356->setDEF(QString("hanim_r_ectocanthus_pt"));
SoHAnimSite1356->setTranslation(new float[]{-0.086,1.399,0.074});
SoTouchSensor* SoTouchSensor1357 = new SoTouchSensor();
SoTouchSensor1357->setDescription(QString("HAnimSite 86 hanim_r_ectocanthus_pt"));
SoHAnimSite1356->addChild(*SoTouchSensor1357);

SoShape* SoShape1358 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1359 = new SoVRMLAppearance();
SoMaterial* SoMaterial1360 = new SoMaterial();
SoMaterial1360->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1359->addChild(*SoMaterial1360);

SoShape1358->addChild(*SoVRMLAppearance1359);

SoIndexedFaceSet* SoIndexedFaceSet1361 = new SoIndexedFaceSet();
SoIndexedFaceSet1361->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1361->setCreaseAngle(0.5);
SoIndexedFaceSet1361->setSolid(false);
SoColorRGBA* SoColorRGBA1362 = new SoColorRGBA();
SoColorRGBA1362->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1361->addChild(*SoColorRGBA1362);

SoCoordinate* SoCoordinate1363 = new SoCoordinate();
SoCoordinate1363->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1361->setCoord(*SoCoordinate1363);

SoShape1358->setGeometry(*SoIndexedFaceSet1361);

SoHAnimSite1356->addChild(*SoShape1358);

SoBillboard* SoBillboard1364 = new SoBillboard();
SoBillboard1364->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1365 = new SoShape();
SoText* SoText1366 = new SoText();
SoText1366->setString(new QString[]{QString("86")}, 1);
SoFontStyle* SoFontStyle1367 = new SoFontStyle();
SoFontStyle1367->setSize(0.035);
SoText1366->setFontStyle(*SoFontStyle1367);

SoShape1365->setGeometry(*SoText1366);

SoBillboard1364->addChild(*SoShape1365);

SoHAnimSite1356->addChild(SoBillboard1364);

SoHAnimSegment1235->addChild(*SoHAnimSite1356);

SoShape* SoShape1368 = new SoShape();
SoLineSet* SoLineSet1369 = new SoLineSet();
SoLineSet1369->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1370 = new SoColorRGBA();
SoColorRGBA1370->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1369->addChild(*SoColorRGBA1370);

SoCoordinate* SoCoordinate1371 = new SoCoordinate();
SoCoordinate1371->setPoint(new float[]{0.0,1.3126,-0.0154,0.0,1.3185,-0.0151}, 6);
SoLineSet1369->setCoord(*SoCoordinate1371);

SoShape1368->setGeometry(*SoLineSet1369);

SoHAnimSegment1235->addChild(*SoShape1368);

SoHAnimJoint1234->addChildren(*SoHAnimSegment1235);

SoHAnimJoint* SoHAnimJoint1372 = new SoHAnimJoint();
SoHAnimJoint1372->X3DNode::setName(QString("l_eyelid_joint"));
SoHAnimJoint1372->setDEF(QString("hanim_l_eyelid_joint"));
SoHAnimJoint1372->setCenter(new float[]{0.0505,1.42425,0.03294});
SoHAnimJoint1372->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1372->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1373 = new SoHAnimSegment();
SoHAnimSegment1373->X3DNode::setName(QString("l_eyelid"));
SoHAnimSegment1373->setDEF(QString("hanim_l_eyelid"));
SoHAnimSite* SoHAnimSite1374 = new SoHAnimSite();
SoHAnimSite1374->X3DNode::setName(QString("l_eyelid_tip"));
SoHAnimSite1374->setDEF(QString("hanim_l_eyelid_tip"));
SoHAnimSite1374->setTranslation(new float[]{0.0,2.64,0.0});
SoTouchSensor* SoTouchSensor1375 = new SoTouchSensor();
SoTouchSensor1375->setDescription(QString("HAnimSite l_eyelid_tip hanim_l_eyelid_tip"));
SoHAnimSite1374->addChild(*SoTouchSensor1375);

SoShape* SoShape1376 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1377 = new SoVRMLAppearance();
SoMaterial* SoMaterial1378 = new SoMaterial();
SoMaterial1378->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1377->addChild(*SoMaterial1378);

SoShape1376->addChild(*SoVRMLAppearance1377);

SoIndexedFaceSet* SoIndexedFaceSet1379 = new SoIndexedFaceSet();
SoIndexedFaceSet1379->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1379->setCreaseAngle(0.5);
SoIndexedFaceSet1379->setSolid(false);
SoColorRGBA* SoColorRGBA1380 = new SoColorRGBA();
SoColorRGBA1380->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1379->addChild(*SoColorRGBA1380);

SoCoordinate* SoCoordinate1381 = new SoCoordinate();
SoCoordinate1381->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1379->setCoord(*SoCoordinate1381);

SoShape1376->setGeometry(*SoIndexedFaceSet1379);

SoHAnimSite1374->addChild(*SoShape1376);

SoBillboard* SoBillboard1382 = new SoBillboard();
SoBillboard1382->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1383 = new SoShape();
SoText* SoText1384 = new SoText();
SoText1384->setString(new QString[]{QString("l_eyelid_tip")}, 1);
SoFontStyle* SoFontStyle1385 = new SoFontStyle();
SoFontStyle1385->setSize(0.035);
SoText1384->setFontStyle(*SoFontStyle1385);

SoShape1383->setGeometry(*SoText1384);

SoBillboard1382->addChild(*SoShape1383);

SoHAnimSite1374->addChild(SoBillboard1382);

SoHAnimSegment1373->addChild(*SoHAnimSite1374);

SoShape* SoShape1386 = new SoShape();
SoLineSet* SoLineSet1387 = new SoLineSet();
SoLineSet1387->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1388 = new SoColorRGBA();
SoColorRGBA1388->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1387->addChild(*SoColorRGBA1388);

SoCoordinate* SoCoordinate1389 = new SoCoordinate();
SoCoordinate1389->setPoint(new float[]{0.0505,1.42425,0.03294,0.0,1.3126,-0.0154}, 6);
SoLineSet1387->setCoord(*SoCoordinate1389);

SoShape1386->setGeometry(*SoLineSet1387);

SoHAnimSegment1373->addChild(*SoShape1386);

SoHAnimJoint1372->addChildren(*SoHAnimSegment1373);

SoHAnimJoint1234->addChildren(*SoHAnimJoint1372);

SoHAnimJoint* SoHAnimJoint1390 = new SoHAnimJoint();
SoHAnimJoint1390->X3DNode::setName(QString("r_eyelid_joint"));
SoHAnimJoint1390->setDEF(QString("hanim_r_eyelid_joint"));
SoHAnimJoint1390->setCenter(new float[]{-0.0505,1.42425,0.03294});
SoHAnimJoint1390->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1390->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1391 = new SoHAnimSegment();
SoHAnimSegment1391->X3DNode::setName(QString("r_eyelid"));
SoHAnimSegment1391->setDEF(QString("hanim_r_eyelid"));
SoHAnimSite* SoHAnimSite1392 = new SoHAnimSite();
SoHAnimSite1392->X3DNode::setName(QString("r_eyelid_tip"));
SoHAnimSite1392->setDEF(QString("hanim_r_eyelid_tip"));
SoHAnimSite1392->setTranslation(new float[]{0.0,2.68,0.0});
SoTouchSensor* SoTouchSensor1393 = new SoTouchSensor();
SoTouchSensor1393->setDescription(QString("HAnimSite r_eyelid_tip hanim_r_eyelid_tip"));
SoHAnimSite1392->addChild(*SoTouchSensor1393);

SoShape* SoShape1394 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1395 = new SoVRMLAppearance();
SoMaterial* SoMaterial1396 = new SoMaterial();
SoMaterial1396->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1395->addChild(*SoMaterial1396);

SoShape1394->addChild(*SoVRMLAppearance1395);

SoIndexedFaceSet* SoIndexedFaceSet1397 = new SoIndexedFaceSet();
SoIndexedFaceSet1397->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1397->setCreaseAngle(0.5);
SoIndexedFaceSet1397->setSolid(false);
SoColorRGBA* SoColorRGBA1398 = new SoColorRGBA();
SoColorRGBA1398->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1397->addChild(*SoColorRGBA1398);

SoCoordinate* SoCoordinate1399 = new SoCoordinate();
SoCoordinate1399->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1397->setCoord(*SoCoordinate1399);

SoShape1394->setGeometry(*SoIndexedFaceSet1397);

SoHAnimSite1392->addChild(*SoShape1394);

SoBillboard* SoBillboard1400 = new SoBillboard();
SoBillboard1400->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1401 = new SoShape();
SoText* SoText1402 = new SoText();
SoText1402->setString(new QString[]{QString("r_eyelid_tip")}, 1);
SoFontStyle* SoFontStyle1403 = new SoFontStyle();
SoFontStyle1403->setSize(0.035);
SoText1402->setFontStyle(*SoFontStyle1403);

SoShape1401->setGeometry(*SoText1402);

SoBillboard1400->addChild(*SoShape1401);

SoHAnimSite1392->addChild(SoBillboard1400);

SoHAnimSegment1391->addChild(*SoHAnimSite1392);

SoShape* SoShape1404 = new SoShape();
SoLineSet* SoLineSet1405 = new SoLineSet();
SoLineSet1405->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1406 = new SoColorRGBA();
SoColorRGBA1406->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1405->addChild(*SoColorRGBA1406);

SoCoordinate* SoCoordinate1407 = new SoCoordinate();
SoCoordinate1407->setPoint(new float[]{-0.0505,1.42425,0.03294,0.0,1.3126,-0.0154}, 6);
SoLineSet1405->setCoord(*SoCoordinate1407);

SoShape1404->setGeometry(*SoLineSet1405);

SoHAnimSegment1391->addChild(*SoShape1404);

SoHAnimJoint1390->addChildren(*SoHAnimSegment1391);

SoHAnimJoint1234->addChildren(*SoHAnimJoint1390);

SoHAnimJoint* SoHAnimJoint1408 = new SoHAnimJoint();
SoHAnimJoint1408->X3DNode::setName(QString("l_eyeball_joint"));
SoHAnimJoint1408->setDEF(QString("hanim_l_eyeball_joint"));
SoHAnimJoint1408->setCenter(new float[]{0.048127,1.4049,0.08305});
SoHAnimJoint1408->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1408->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1409 = new SoHAnimSegment();
SoHAnimSegment1409->X3DNode::setName(QString("l_eyeball"));
SoHAnimSegment1409->setDEF(QString("hanim_l_eyeball"));
SoHAnimSite* SoHAnimSite1410 = new SoHAnimSite();
SoHAnimSite1410->X3DNode::setName(QString("l_eyeball_tip"));
SoHAnimSite1410->setDEF(QString("hanim_l_eyeball_tip"));
SoHAnimSite1410->setTranslation(new float[]{0.0,2.72,0.0});
SoTouchSensor* SoTouchSensor1411 = new SoTouchSensor();
SoTouchSensor1411->setDescription(QString("HAnimSite l_eyeball_tip hanim_l_eyeball_tip"));
SoHAnimSite1410->addChild(*SoTouchSensor1411);

SoShape* SoShape1412 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1413 = new SoVRMLAppearance();
SoMaterial* SoMaterial1414 = new SoMaterial();
SoMaterial1414->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1413->addChild(*SoMaterial1414);

SoShape1412->addChild(*SoVRMLAppearance1413);

SoIndexedFaceSet* SoIndexedFaceSet1415 = new SoIndexedFaceSet();
SoIndexedFaceSet1415->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1415->setCreaseAngle(0.5);
SoIndexedFaceSet1415->setSolid(false);
SoColorRGBA* SoColorRGBA1416 = new SoColorRGBA();
SoColorRGBA1416->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1415->addChild(*SoColorRGBA1416);

SoCoordinate* SoCoordinate1417 = new SoCoordinate();
SoCoordinate1417->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1415->setCoord(*SoCoordinate1417);

SoShape1412->setGeometry(*SoIndexedFaceSet1415);

SoHAnimSite1410->addChild(*SoShape1412);

SoBillboard* SoBillboard1418 = new SoBillboard();
SoBillboard1418->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1419 = new SoShape();
SoText* SoText1420 = new SoText();
SoText1420->setString(new QString[]{QString("l_eyeball_tip")}, 1);
SoFontStyle* SoFontStyle1421 = new SoFontStyle();
SoFontStyle1421->setSize(0.035);
SoText1420->setFontStyle(*SoFontStyle1421);

SoShape1419->setGeometry(*SoText1420);

SoBillboard1418->addChild(*SoShape1419);

SoHAnimSite1410->addChild(SoBillboard1418);

SoHAnimSegment1409->addChild(*SoHAnimSite1410);

SoShape* SoShape1422 = new SoShape();
SoLineSet* SoLineSet1423 = new SoLineSet();
SoLineSet1423->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1424 = new SoColorRGBA();
SoColorRGBA1424->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1423->addChild(*SoColorRGBA1424);

SoCoordinate* SoCoordinate1425 = new SoCoordinate();
SoCoordinate1425->setPoint(new float[]{0.048127,1.4049,0.08305,0.0,1.3126,-0.0154}, 6);
SoLineSet1423->setCoord(*SoCoordinate1425);

SoShape1422->setGeometry(*SoLineSet1423);

SoHAnimSegment1409->addChild(*SoShape1422);

SoHAnimJoint1408->addChildren(*SoHAnimSegment1409);

SoHAnimJoint1234->addChildren(*SoHAnimJoint1408);

SoHAnimJoint* SoHAnimJoint1426 = new SoHAnimJoint();
SoHAnimJoint1426->X3DNode::setName(QString("r_eyeball_joint"));
SoHAnimJoint1426->setDEF(QString("hanim_r_eyeball_joint"));
SoHAnimJoint1426->setCenter(new float[]{-0.04813,1.4049,0.08305});
SoHAnimJoint1426->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1426->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1427 = new SoHAnimSegment();
SoHAnimSegment1427->X3DNode::setName(QString("r_eyeball"));
SoHAnimSegment1427->setDEF(QString("hanim_r_eyeball"));
SoHAnimSite* SoHAnimSite1428 = new SoHAnimSite();
SoHAnimSite1428->X3DNode::setName(QString("r_eyeball_tip"));
SoHAnimSite1428->setDEF(QString("hanim_r_eyeball_tip"));
SoHAnimSite1428->setTranslation(new float[]{0.0,2.76,0.0});
SoTouchSensor* SoTouchSensor1429 = new SoTouchSensor();
SoTouchSensor1429->setDescription(QString("HAnimSite r_eyeball_tip hanim_r_eyeball_tip"));
SoHAnimSite1428->addChild(*SoTouchSensor1429);

SoShape* SoShape1430 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1431 = new SoVRMLAppearance();
SoMaterial* SoMaterial1432 = new SoMaterial();
SoMaterial1432->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1431->addChild(*SoMaterial1432);

SoShape1430->addChild(*SoVRMLAppearance1431);

SoIndexedFaceSet* SoIndexedFaceSet1433 = new SoIndexedFaceSet();
SoIndexedFaceSet1433->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1433->setCreaseAngle(0.5);
SoIndexedFaceSet1433->setSolid(false);
SoColorRGBA* SoColorRGBA1434 = new SoColorRGBA();
SoColorRGBA1434->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1433->addChild(*SoColorRGBA1434);

SoCoordinate* SoCoordinate1435 = new SoCoordinate();
SoCoordinate1435->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1433->setCoord(*SoCoordinate1435);

SoShape1430->setGeometry(*SoIndexedFaceSet1433);

SoHAnimSite1428->addChild(*SoShape1430);

SoBillboard* SoBillboard1436 = new SoBillboard();
SoBillboard1436->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1437 = new SoShape();
SoText* SoText1438 = new SoText();
SoText1438->setString(new QString[]{QString("r_eyeball_tip")}, 1);
SoFontStyle* SoFontStyle1439 = new SoFontStyle();
SoFontStyle1439->setSize(0.035);
SoText1438->setFontStyle(*SoFontStyle1439);

SoShape1437->setGeometry(*SoText1438);

SoBillboard1436->addChild(*SoShape1437);

SoHAnimSite1428->addChild(SoBillboard1436);

SoHAnimSegment1427->addChild(*SoHAnimSite1428);

SoShape* SoShape1440 = new SoShape();
SoLineSet* SoLineSet1441 = new SoLineSet();
SoLineSet1441->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1442 = new SoColorRGBA();
SoColorRGBA1442->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1441->addChild(*SoColorRGBA1442);

SoCoordinate* SoCoordinate1443 = new SoCoordinate();
SoCoordinate1443->setPoint(new float[]{-0.04813,1.4049,0.08305,0.0,1.3126,-0.0154}, 6);
SoLineSet1441->setCoord(*SoCoordinate1443);

SoShape1440->setGeometry(*SoLineSet1441);

SoHAnimSegment1427->addChild(*SoShape1440);

SoHAnimJoint1426->addChildren(*SoHAnimSegment1427);

SoHAnimJoint1234->addChildren(*SoHAnimJoint1426);

SoHAnimJoint* SoHAnimJoint1444 = new SoHAnimJoint();
SoHAnimJoint1444->X3DNode::setName(QString("l_eyebrow_joint"));
SoHAnimJoint1444->setDEF(QString("hanim_l_eyebrow_joint"));
SoHAnimJoint1444->setCenter(new float[]{0.02175,1.4139,0.1069});
SoHAnimJoint1444->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1444->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1445 = new SoHAnimSegment();
SoHAnimSegment1445->X3DNode::setName(QString("l_eyebrow"));
SoHAnimSegment1445->setDEF(QString("hanim_l_eyebrow"));
SoHAnimSite* SoHAnimSite1446 = new SoHAnimSite();
SoHAnimSite1446->X3DNode::setName(QString("l_eyebrow_tip"));
SoHAnimSite1446->setDEF(QString("hanim_l_eyebrow_tip"));
SoHAnimSite1446->setTranslation(new float[]{0.0,2.8,0.0});
SoTouchSensor* SoTouchSensor1447 = new SoTouchSensor();
SoTouchSensor1447->setDescription(QString("HAnimSite l_eyebrow_tip hanim_l_eyebrow_tip"));
SoHAnimSite1446->addChild(*SoTouchSensor1447);

SoShape* SoShape1448 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1449 = new SoVRMLAppearance();
SoMaterial* SoMaterial1450 = new SoMaterial();
SoMaterial1450->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1449->addChild(*SoMaterial1450);

SoShape1448->addChild(*SoVRMLAppearance1449);

SoIndexedFaceSet* SoIndexedFaceSet1451 = new SoIndexedFaceSet();
SoIndexedFaceSet1451->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1451->setCreaseAngle(0.5);
SoIndexedFaceSet1451->setSolid(false);
SoColorRGBA* SoColorRGBA1452 = new SoColorRGBA();
SoColorRGBA1452->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1451->addChild(*SoColorRGBA1452);

SoCoordinate* SoCoordinate1453 = new SoCoordinate();
SoCoordinate1453->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1451->setCoord(*SoCoordinate1453);

SoShape1448->setGeometry(*SoIndexedFaceSet1451);

SoHAnimSite1446->addChild(*SoShape1448);

SoBillboard* SoBillboard1454 = new SoBillboard();
SoBillboard1454->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1455 = new SoShape();
SoText* SoText1456 = new SoText();
SoText1456->setString(new QString[]{QString("l_eyebrow_tip")}, 1);
SoFontStyle* SoFontStyle1457 = new SoFontStyle();
SoFontStyle1457->setSize(0.035);
SoText1456->setFontStyle(*SoFontStyle1457);

SoShape1455->setGeometry(*SoText1456);

SoBillboard1454->addChild(*SoShape1455);

SoHAnimSite1446->addChild(SoBillboard1454);

SoHAnimSegment1445->addChild(*SoHAnimSite1446);

SoShape* SoShape1458 = new SoShape();
SoLineSet* SoLineSet1459 = new SoLineSet();
SoLineSet1459->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1460 = new SoColorRGBA();
SoColorRGBA1460->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1459->addChild(*SoColorRGBA1460);

SoCoordinate* SoCoordinate1461 = new SoCoordinate();
SoCoordinate1461->setPoint(new float[]{0.02175,1.4139,0.1069,0.0,1.3126,-0.0154}, 6);
SoLineSet1459->setCoord(*SoCoordinate1461);

SoShape1458->setGeometry(*SoLineSet1459);

SoHAnimSegment1445->addChild(*SoShape1458);

SoHAnimJoint1444->addChildren(*SoHAnimSegment1445);

SoHAnimJoint1234->addChildren(*SoHAnimJoint1444);

SoHAnimJoint* SoHAnimJoint1462 = new SoHAnimJoint();
SoHAnimJoint1462->X3DNode::setName(QString("r_eyebrow_joint"));
SoHAnimJoint1462->setDEF(QString("hanim_r_eyebrow_joint"));
SoHAnimJoint1462->setCenter(new float[]{-0.02175,1.4139,0.10694});
SoHAnimJoint1462->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1462->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1463 = new SoHAnimSegment();
SoHAnimSegment1463->X3DNode::setName(QString("r_eyebrow"));
SoHAnimSegment1463->setDEF(QString("hanim_r_eyebrow"));
SoHAnimSite* SoHAnimSite1464 = new SoHAnimSite();
SoHAnimSite1464->X3DNode::setName(QString("r_eyebrow_tip"));
SoHAnimSite1464->setDEF(QString("hanim_r_eyebrow_tip"));
SoHAnimSite1464->setTranslation(new float[]{0.0,2.84,0.0});
SoTouchSensor* SoTouchSensor1465 = new SoTouchSensor();
SoTouchSensor1465->setDescription(QString("HAnimSite r_eyebrow_tip hanim_r_eyebrow_tip"));
SoHAnimSite1464->addChild(*SoTouchSensor1465);

SoShape* SoShape1466 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1467 = new SoVRMLAppearance();
SoMaterial* SoMaterial1468 = new SoMaterial();
SoMaterial1468->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1467->addChild(*SoMaterial1468);

SoShape1466->addChild(*SoVRMLAppearance1467);

SoIndexedFaceSet* SoIndexedFaceSet1469 = new SoIndexedFaceSet();
SoIndexedFaceSet1469->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1469->setCreaseAngle(0.5);
SoIndexedFaceSet1469->setSolid(false);
SoColorRGBA* SoColorRGBA1470 = new SoColorRGBA();
SoColorRGBA1470->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1469->addChild(*SoColorRGBA1470);

SoCoordinate* SoCoordinate1471 = new SoCoordinate();
SoCoordinate1471->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1469->setCoord(*SoCoordinate1471);

SoShape1466->setGeometry(*SoIndexedFaceSet1469);

SoHAnimSite1464->addChild(*SoShape1466);

SoBillboard* SoBillboard1472 = new SoBillboard();
SoBillboard1472->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1473 = new SoShape();
SoText* SoText1474 = new SoText();
SoText1474->setString(new QString[]{QString("r_eyebrow_tip")}, 1);
SoFontStyle* SoFontStyle1475 = new SoFontStyle();
SoFontStyle1475->setSize(0.035);
SoText1474->setFontStyle(*SoFontStyle1475);

SoShape1473->setGeometry(*SoText1474);

SoBillboard1472->addChild(*SoShape1473);

SoHAnimSite1464->addChild(SoBillboard1472);

SoHAnimSegment1463->addChild(*SoHAnimSite1464);

SoShape* SoShape1476 = new SoShape();
SoLineSet* SoLineSet1477 = new SoLineSet();
SoLineSet1477->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1478 = new SoColorRGBA();
SoColorRGBA1478->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1477->addChild(*SoColorRGBA1478);

SoCoordinate* SoCoordinate1479 = new SoCoordinate();
SoCoordinate1479->setPoint(new float[]{-0.02175,1.4139,0.10694,0.0,1.3126,-0.0154}, 6);
SoLineSet1477->setCoord(*SoCoordinate1479);

SoShape1476->setGeometry(*SoLineSet1477);

SoHAnimSegment1463->addChild(*SoShape1476);

SoHAnimJoint1462->addChildren(*SoHAnimSegment1463);

SoHAnimJoint1234->addChildren(*SoHAnimJoint1462);

SoHAnimJoint* SoHAnimJoint1480 = new SoHAnimJoint();
SoHAnimJoint1480->X3DNode::setName(QString("temporomandibular"));
SoHAnimJoint1480->setDEF(QString("hanim_temporomandibular"));
SoHAnimJoint1480->setCenter(new float[]{0.0,1.3128,0.01538});
SoHAnimJoint1480->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1480->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1481 = new SoHAnimSegment();
SoHAnimSegment1481->X3DNode::setName(QString("jaw"));
SoHAnimSegment1481->setDEF(QString("hanim_jaw"));
SoHAnimSite* SoHAnimSite1482 = new SoHAnimSite();
SoHAnimSite1482->X3DNode::setName(QString("l_gonion"));
SoHAnimSite1482->setDEF(QString("hanim_l_gonion_pt"));
SoHAnimSite1482->setTranslation(new float[]{0.068,1.346,0.033});
SoTouchSensor* SoTouchSensor1483 = new SoTouchSensor();
SoTouchSensor1483->setDescription(QString("HAnimSite 5 hanim_l_gonion_pt"));
SoHAnimSite1482->addChild(*SoTouchSensor1483);

SoShape* SoShape1484 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1485 = new SoVRMLAppearance();
SoMaterial* SoMaterial1486 = new SoMaterial();
SoMaterial1486->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1485->addChild(*SoMaterial1486);

SoShape1484->addChild(*SoVRMLAppearance1485);

SoIndexedFaceSet* SoIndexedFaceSet1487 = new SoIndexedFaceSet();
SoIndexedFaceSet1487->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1487->setCreaseAngle(0.5);
SoIndexedFaceSet1487->setSolid(false);
SoColorRGBA* SoColorRGBA1488 = new SoColorRGBA();
SoColorRGBA1488->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1487->addChild(*SoColorRGBA1488);

SoCoordinate* SoCoordinate1489 = new SoCoordinate();
SoCoordinate1489->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1487->setCoord(*SoCoordinate1489);

SoShape1484->setGeometry(*SoIndexedFaceSet1487);

SoHAnimSite1482->addChild(*SoShape1484);

SoBillboard* SoBillboard1490 = new SoBillboard();
SoBillboard1490->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1491 = new SoShape();
SoText* SoText1492 = new SoText();
SoText1492->setString(new QString[]{QString("5")}, 1);
SoFontStyle* SoFontStyle1493 = new SoFontStyle();
SoFontStyle1493->setSize(0.035);
SoText1492->setFontStyle(*SoFontStyle1493);

SoShape1491->setGeometry(*SoText1492);

SoBillboard1490->addChild(*SoShape1491);

SoHAnimSite1482->addChild(SoBillboard1490);

SoHAnimSegment1481->addChild(*SoHAnimSite1482);

SoHAnimSite* SoHAnimSite1494 = new SoHAnimSite();
SoHAnimSite1494->X3DNode::setName(QString("r_gonion"));
SoHAnimSite1494->setDEF(QString("hanim_r_gonion_pt"));
SoHAnimSite1494->setTranslation(new float[]{-0.068,1.346,0.033});
SoTouchSensor* SoTouchSensor1495 = new SoTouchSensor();
SoTouchSensor1495->setDescription(QString("HAnimSite 8 hanim_r_gonion_pt"));
SoHAnimSite1494->addChild(*SoTouchSensor1495);

SoShape* SoShape1496 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1497 = new SoVRMLAppearance();
SoMaterial* SoMaterial1498 = new SoMaterial();
SoMaterial1498->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1497->addChild(*SoMaterial1498);

SoShape1496->addChild(*SoVRMLAppearance1497);

SoIndexedFaceSet* SoIndexedFaceSet1499 = new SoIndexedFaceSet();
SoIndexedFaceSet1499->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1499->setCreaseAngle(0.5);
SoIndexedFaceSet1499->setSolid(false);
SoColorRGBA* SoColorRGBA1500 = new SoColorRGBA();
SoColorRGBA1500->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1499->addChild(*SoColorRGBA1500);

SoCoordinate* SoCoordinate1501 = new SoCoordinate();
SoCoordinate1501->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1499->setCoord(*SoCoordinate1501);

SoShape1496->setGeometry(*SoIndexedFaceSet1499);

SoHAnimSite1494->addChild(*SoShape1496);

SoBillboard* SoBillboard1502 = new SoBillboard();
SoBillboard1502->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1503 = new SoShape();
SoText* SoText1504 = new SoText();
SoText1504->setString(new QString[]{QString("8")}, 1);
SoFontStyle* SoFontStyle1505 = new SoFontStyle();
SoFontStyle1505->setSize(0.035);
SoText1504->setFontStyle(*SoFontStyle1505);

SoShape1503->setGeometry(*SoText1504);

SoBillboard1502->addChild(*SoShape1503);

SoHAnimSite1494->addChild(SoBillboard1502);

SoHAnimSegment1481->addChild(*SoHAnimSite1494);

SoHAnimSite* SoHAnimSite1506 = new SoHAnimSite();
SoHAnimSite1506->X3DNode::setName(QString("supramenton"));
SoHAnimSite1506->setDEF(QString("hanim_supramenton_pt"));
SoHAnimSite1506->setTranslation(new float[]{0.0,1.32,0.086});
SoTouchSensor* SoTouchSensor1507 = new SoTouchSensor();
SoTouchSensor1507->setDescription(QString("HAnimSite 9 hanim_supramenton_pt"));
SoHAnimSite1506->addChild(*SoTouchSensor1507);

SoShape* SoShape1508 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1509 = new SoVRMLAppearance();
SoMaterial* SoMaterial1510 = new SoMaterial();
SoMaterial1510->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1509->addChild(*SoMaterial1510);

SoShape1508->addChild(*SoVRMLAppearance1509);

SoIndexedFaceSet* SoIndexedFaceSet1511 = new SoIndexedFaceSet();
SoIndexedFaceSet1511->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1511->setCreaseAngle(0.5);
SoIndexedFaceSet1511->setSolid(false);
SoColorRGBA* SoColorRGBA1512 = new SoColorRGBA();
SoColorRGBA1512->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1511->addChild(*SoColorRGBA1512);

SoCoordinate* SoCoordinate1513 = new SoCoordinate();
SoCoordinate1513->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1511->setCoord(*SoCoordinate1513);

SoShape1508->setGeometry(*SoIndexedFaceSet1511);

SoHAnimSite1506->addChild(*SoShape1508);

SoBillboard* SoBillboard1514 = new SoBillboard();
SoBillboard1514->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1515 = new SoShape();
SoText* SoText1516 = new SoText();
SoText1516->setString(new QString[]{QString("9")}, 1);
SoFontStyle* SoFontStyle1517 = new SoFontStyle();
SoFontStyle1517->setSize(0.035);
SoText1516->setFontStyle(*SoFontStyle1517);

SoShape1515->setGeometry(*SoText1516);

SoBillboard1514->addChild(*SoShape1515);

SoHAnimSite1506->addChild(SoBillboard1514);

SoHAnimSegment1481->addChild(*SoHAnimSite1506);

SoHAnimSite* SoHAnimSite1518 = new SoHAnimSite();
SoHAnimSite1518->X3DNode::setName(QString("menton"));
SoHAnimSite1518->setDEF(QString("hanim_menton_pt"));
SoHAnimSite1518->setTranslation(new float[]{0.0,1.3,0.08});
SoTouchSensor* SoTouchSensor1519 = new SoTouchSensor();
SoTouchSensor1519->setDescription(QString("HAnimSite 87 hanim_menton_pt"));
SoHAnimSite1518->addChild(*SoTouchSensor1519);

SoShape* SoShape1520 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1521 = new SoVRMLAppearance();
SoMaterial* SoMaterial1522 = new SoMaterial();
SoMaterial1522->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1521->addChild(*SoMaterial1522);

SoShape1520->addChild(*SoVRMLAppearance1521);

SoIndexedFaceSet* SoIndexedFaceSet1523 = new SoIndexedFaceSet();
SoIndexedFaceSet1523->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1523->setCreaseAngle(0.5);
SoIndexedFaceSet1523->setSolid(false);
SoColorRGBA* SoColorRGBA1524 = new SoColorRGBA();
SoColorRGBA1524->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1523->addChild(*SoColorRGBA1524);

SoCoordinate* SoCoordinate1525 = new SoCoordinate();
SoCoordinate1525->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1523->setCoord(*SoCoordinate1525);

SoShape1520->setGeometry(*SoIndexedFaceSet1523);

SoHAnimSite1518->addChild(*SoShape1520);

SoBillboard* SoBillboard1526 = new SoBillboard();
SoBillboard1526->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1527 = new SoShape();
SoText* SoText1528 = new SoText();
SoText1528->setString(new QString[]{QString("87")}, 1);
SoFontStyle* SoFontStyle1529 = new SoFontStyle();
SoFontStyle1529->setSize(0.035);
SoText1528->setFontStyle(*SoFontStyle1529);

SoShape1527->setGeometry(*SoText1528);

SoBillboard1526->addChild(*SoShape1527);

SoHAnimSite1518->addChild(SoBillboard1526);

SoHAnimSegment1481->addChild(*SoHAnimSite1518);

SoShape* SoShape1530 = new SoShape();
SoLineSet* SoLineSet1531 = new SoLineSet();
SoLineSet1531->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1532 = new SoColorRGBA();
SoColorRGBA1532->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1531->addChild(*SoColorRGBA1532);

SoCoordinate* SoCoordinate1533 = new SoCoordinate();
SoCoordinate1533->setPoint(new float[]{0.0,1.3128,0.01538,0.0,1.3126,-0.0154}, 6);
SoLineSet1531->setCoord(*SoCoordinate1533);

SoShape1530->setGeometry(*SoLineSet1531);

SoHAnimSegment1481->addChild(*SoShape1530);

SoHAnimJoint1480->addChildren(*SoHAnimSegment1481);

SoHAnimJoint1234->addChildren(*SoHAnimJoint1480);

SoHAnimJoint1228->addChildren(*SoHAnimJoint1234);

SoHAnimJoint1210->addChildren(*SoHAnimJoint1228);

SoHAnimJoint1204->addChildren(*SoHAnimJoint1210);

SoHAnimJoint1198->addChildren(*SoHAnimJoint1204);

SoHAnimJoint1192->addChildren(*SoHAnimJoint1198);

SoHAnimJoint1186->addChildren(*SoHAnimJoint1192);

SoHAnimJoint1156->addChildren(*SoHAnimJoint1186);

SoHAnimJoint1126->addChildren(*SoHAnimJoint1156);

SoHAnimJoint* SoHAnimJoint1534 = new SoHAnimJoint();
SoHAnimJoint1534->X3DNode::setName(QString("l_sternoclavicular"));
SoHAnimJoint1534->setDEF(QString("hanim_l_sternoclavicular"));
SoHAnimJoint1534->setCenter(new float[]{0.03847,1.2087,-0.01378});
SoHAnimJoint1534->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1534->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1535 = new SoHAnimSegment();
SoHAnimSegment1535->X3DNode::setName(QString("l_clavicle"));
SoHAnimSegment1535->setDEF(QString("hanim_l_clavicle"));
SoHAnimSite* SoHAnimSite1536 = new SoHAnimSite();
SoHAnimSite1536->X3DNode::setName(QString("l_clavicale"));
SoHAnimSite1536->setDEF(QString("hanim_l_clavicale_pt"));
SoHAnimSite1536->setTranslation(new float[]{0.03,1.2,0.04});
SoTouchSensor* SoTouchSensor1537 = new SoTouchSensor();
SoTouchSensor1537->setDescription(QString("HAnimSite l_clavicale hanim_l_clavicale_pt"));
SoHAnimSite1536->addChild(*SoTouchSensor1537);

SoShape* SoShape1538 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1539 = new SoVRMLAppearance();
SoMaterial* SoMaterial1540 = new SoMaterial();
SoMaterial1540->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1539->addChild(*SoMaterial1540);

SoShape1538->addChild(*SoVRMLAppearance1539);

SoIndexedFaceSet* SoIndexedFaceSet1541 = new SoIndexedFaceSet();
SoIndexedFaceSet1541->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1541->setCreaseAngle(0.5);
SoIndexedFaceSet1541->setSolid(false);
SoColorRGBA* SoColorRGBA1542 = new SoColorRGBA();
SoColorRGBA1542->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1541->addChild(*SoColorRGBA1542);

SoCoordinate* SoCoordinate1543 = new SoCoordinate();
SoCoordinate1543->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1541->setCoord(*SoCoordinate1543);

SoShape1538->setGeometry(*SoIndexedFaceSet1541);

SoHAnimSite1536->addChild(*SoShape1538);

SoBillboard* SoBillboard1544 = new SoBillboard();
SoBillboard1544->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1545 = new SoShape();
SoText* SoText1546 = new SoText();
SoText1546->setString(new QString[]{QString("l_clavicale")}, 1);
SoFontStyle* SoFontStyle1547 = new SoFontStyle();
SoFontStyle1547->setSize(0.035);
SoText1546->setFontStyle(*SoFontStyle1547);

SoShape1545->setGeometry(*SoText1546);

SoBillboard1544->addChild(*SoShape1545);

SoHAnimSite1536->addChild(SoBillboard1544);

SoHAnimSegment1535->addChild(*SoHAnimSite1536);

SoShape* SoShape1548 = new SoShape();
SoLineSet* SoLineSet1549 = new SoLineSet();
SoLineSet1549->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1550 = new SoColorRGBA();
SoColorRGBA1550->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1549->addChild(*SoColorRGBA1550);

SoCoordinate* SoCoordinate1551 = new SoCoordinate();
SoCoordinate1551->setPoint(new float[]{0.03847,1.2087,-0.01378,0.0,1.22,-0.0138}, 6);
SoLineSet1549->setCoord(*SoCoordinate1551);

SoShape1548->setGeometry(*SoLineSet1549);

SoHAnimSegment1535->addChild(*SoShape1548);

SoHAnimJoint1534->addChildren(*SoHAnimSegment1535);

SoHAnimJoint* SoHAnimJoint1552 = new SoHAnimJoint();
SoHAnimJoint1552->X3DNode::setName(QString("l_acromioclavicular"));
SoHAnimJoint1552->setDEF(QString("hanim_l_acromioclavicular"));
SoHAnimJoint1552->setCenter(new float[]{0.12294,1.191825,-0.0129});
SoHAnimJoint1552->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1552->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1553 = new SoHAnimSegment();
SoHAnimSegment1553->X3DNode::setName(QString("l_scapula"));
SoHAnimSegment1553->setDEF(QString("hanim_l_scapula"));
SoHAnimSite* SoHAnimSite1554 = new SoHAnimSite();
SoHAnimSite1554->X3DNode::setName(QString("l_acromion"));
SoHAnimSite1554->setDEF(QString("hanim_l_acromion_pt"));
SoHAnimSite1554->setTranslation(new float[]{0.15,1.222,-0.02});
SoTouchSensor* SoTouchSensor1555 = new SoTouchSensor();
SoTouchSensor1555->setDescription(QString("HAnimSite 15 hanim_l_acromion_pt"));
SoHAnimSite1554->addChild(*SoTouchSensor1555);

SoShape* SoShape1556 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1557 = new SoVRMLAppearance();
SoMaterial* SoMaterial1558 = new SoMaterial();
SoMaterial1558->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1557->addChild(*SoMaterial1558);

SoShape1556->addChild(*SoVRMLAppearance1557);

SoIndexedFaceSet* SoIndexedFaceSet1559 = new SoIndexedFaceSet();
SoIndexedFaceSet1559->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1559->setCreaseAngle(0.5);
SoIndexedFaceSet1559->setSolid(false);
SoColorRGBA* SoColorRGBA1560 = new SoColorRGBA();
SoColorRGBA1560->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1559->addChild(*SoColorRGBA1560);

SoCoordinate* SoCoordinate1561 = new SoCoordinate();
SoCoordinate1561->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1559->setCoord(*SoCoordinate1561);

SoShape1556->setGeometry(*SoIndexedFaceSet1559);

SoHAnimSite1554->addChild(*SoShape1556);

SoBillboard* SoBillboard1562 = new SoBillboard();
SoBillboard1562->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1563 = new SoShape();
SoText* SoText1564 = new SoText();
SoText1564->setString(new QString[]{QString("15")}, 1);
SoFontStyle* SoFontStyle1565 = new SoFontStyle();
SoFontStyle1565->setSize(0.035);
SoText1564->setFontStyle(*SoFontStyle1565);

SoShape1563->setGeometry(*SoText1564);

SoBillboard1562->addChild(*SoShape1563);

SoHAnimSite1554->addChild(SoBillboard1562);

SoHAnimSegment1553->addChild(*SoHAnimSite1554);

SoHAnimSite* SoHAnimSite1566 = new SoHAnimSite();
SoHAnimSite1566->X3DNode::setName(QString("l_axilla_proximal"));
SoHAnimSite1566->setDEF(QString("hanim_l_axilla_proximal_pt"));
SoHAnimSite1566->setTranslation(new float[]{0.15,1.16,0.04});
SoTouchSensor* SoTouchSensor1567 = new SoTouchSensor();
SoTouchSensor1567->setDescription(QString("HAnimSite 16 hanim_l_axilla_proximal_pt"));
SoHAnimSite1566->addChild(*SoTouchSensor1567);

SoShape* SoShape1568 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1569 = new SoVRMLAppearance();
SoMaterial* SoMaterial1570 = new SoMaterial();
SoMaterial1570->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1569->addChild(*SoMaterial1570);

SoShape1568->addChild(*SoVRMLAppearance1569);

SoIndexedFaceSet* SoIndexedFaceSet1571 = new SoIndexedFaceSet();
SoIndexedFaceSet1571->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1571->setCreaseAngle(0.5);
SoIndexedFaceSet1571->setSolid(false);
SoColorRGBA* SoColorRGBA1572 = new SoColorRGBA();
SoColorRGBA1572->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1571->addChild(*SoColorRGBA1572);

SoCoordinate* SoCoordinate1573 = new SoCoordinate();
SoCoordinate1573->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1571->setCoord(*SoCoordinate1573);

SoShape1568->setGeometry(*SoIndexedFaceSet1571);

SoHAnimSite1566->addChild(*SoShape1568);

SoBillboard* SoBillboard1574 = new SoBillboard();
SoBillboard1574->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1575 = new SoShape();
SoText* SoText1576 = new SoText();
SoText1576->setString(new QString[]{QString("16")}, 1);
SoFontStyle* SoFontStyle1577 = new SoFontStyle();
SoFontStyle1577->setSize(0.035);
SoText1576->setFontStyle(*SoFontStyle1577);

SoShape1575->setGeometry(*SoText1576);

SoBillboard1574->addChild(*SoShape1575);

SoHAnimSite1566->addChild(SoBillboard1574);

SoHAnimSegment1553->addChild(*SoHAnimSite1566);

SoHAnimSite* SoHAnimSite1578 = new SoHAnimSite();
SoHAnimSite1578->X3DNode::setName(QString("l_axilla_distal"));
SoHAnimSite1578->setDEF(QString("hanim_l_axilla_distal_pt"));
SoHAnimSite1578->setTranslation(new float[]{0.17,1.14,0.0});
SoTouchSensor* SoTouchSensor1579 = new SoTouchSensor();
SoTouchSensor1579->setDescription(QString("HAnimSite 17 hanim_l_axilla_distal_pt"));
SoHAnimSite1578->addChild(*SoTouchSensor1579);

SoShape* SoShape1580 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1581 = new SoVRMLAppearance();
SoMaterial* SoMaterial1582 = new SoMaterial();
SoMaterial1582->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1581->addChild(*SoMaterial1582);

SoShape1580->addChild(*SoVRMLAppearance1581);

SoIndexedFaceSet* SoIndexedFaceSet1583 = new SoIndexedFaceSet();
SoIndexedFaceSet1583->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1583->setCreaseAngle(0.5);
SoIndexedFaceSet1583->setSolid(false);
SoColorRGBA* SoColorRGBA1584 = new SoColorRGBA();
SoColorRGBA1584->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1583->addChild(*SoColorRGBA1584);

SoCoordinate* SoCoordinate1585 = new SoCoordinate();
SoCoordinate1585->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1583->setCoord(*SoCoordinate1585);

SoShape1580->setGeometry(*SoIndexedFaceSet1583);

SoHAnimSite1578->addChild(*SoShape1580);

SoBillboard* SoBillboard1586 = new SoBillboard();
SoBillboard1586->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1587 = new SoShape();
SoText* SoText1588 = new SoText();
SoText1588->setString(new QString[]{QString("17")}, 1);
SoFontStyle* SoFontStyle1589 = new SoFontStyle();
SoFontStyle1589->setSize(0.035);
SoText1588->setFontStyle(*SoFontStyle1589);

SoShape1587->setGeometry(*SoText1588);

SoBillboard1586->addChild(*SoShape1587);

SoHAnimSite1578->addChild(SoBillboard1586);

SoHAnimSegment1553->addChild(*SoHAnimSite1578);

SoHAnimSite* SoHAnimSite1590 = new SoHAnimSite();
SoHAnimSite1590->X3DNode::setName(QString("l_axilla_posterior_folds"));
SoHAnimSite1590->setDEF(QString("hanim_l_axilla_posterior_folds_pt"));
SoHAnimSite1590->setTranslation(new float[]{0.15,1.145,-0.04});
SoTouchSensor* SoTouchSensor1591 = new SoTouchSensor();
SoTouchSensor1591->setDescription(QString("HAnimSite 18 hanim_l_axilla_posterior_folds_pt"));
SoHAnimSite1590->addChild(*SoTouchSensor1591);

SoShape* SoShape1592 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1593 = new SoVRMLAppearance();
SoMaterial* SoMaterial1594 = new SoMaterial();
SoMaterial1594->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1593->addChild(*SoMaterial1594);

SoShape1592->addChild(*SoVRMLAppearance1593);

SoIndexedFaceSet* SoIndexedFaceSet1595 = new SoIndexedFaceSet();
SoIndexedFaceSet1595->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1595->setCreaseAngle(0.5);
SoIndexedFaceSet1595->setSolid(false);
SoColorRGBA* SoColorRGBA1596 = new SoColorRGBA();
SoColorRGBA1596->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1595->addChild(*SoColorRGBA1596);

SoCoordinate* SoCoordinate1597 = new SoCoordinate();
SoCoordinate1597->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1595->setCoord(*SoCoordinate1597);

SoShape1592->setGeometry(*SoIndexedFaceSet1595);

SoHAnimSite1590->addChild(*SoShape1592);

SoBillboard* SoBillboard1598 = new SoBillboard();
SoBillboard1598->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1599 = new SoShape();
SoText* SoText1600 = new SoText();
SoText1600->setString(new QString[]{QString("18")}, 1);
SoFontStyle* SoFontStyle1601 = new SoFontStyle();
SoFontStyle1601->setSize(0.035);
SoText1600->setFontStyle(*SoFontStyle1601);

SoShape1599->setGeometry(*SoText1600);

SoBillboard1598->addChild(*SoShape1599);

SoHAnimSite1590->addChild(SoBillboard1598);

SoHAnimSegment1553->addChild(*SoHAnimSite1590);

SoShape* SoShape1602 = new SoShape();
SoLineSet* SoLineSet1603 = new SoLineSet();
SoLineSet1603->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1604 = new SoColorRGBA();
SoColorRGBA1604->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1603->addChild(*SoColorRGBA1604);

SoCoordinate* SoCoordinate1605 = new SoCoordinate();
SoCoordinate1605->setPoint(new float[]{0.12294,1.191825,-0.0129,0.03847,1.2087,-0.01378}, 6);
SoLineSet1603->setCoord(*SoCoordinate1605);

SoShape1602->setGeometry(*SoLineSet1603);

SoHAnimSegment1553->addChild(*SoShape1602);

SoHAnimJoint1552->addChildren(*SoHAnimSegment1553);

SoHAnimJoint* SoHAnimJoint1606 = new SoHAnimJoint();
SoHAnimJoint1606->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint1606->setDEF(QString("hanim_l_shoulder"));
SoHAnimJoint1606->setCenter(new float[]{0.16506,1.17855,-0.00327});
SoHAnimJoint1606->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1606->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1607 = new SoHAnimSegment();
SoHAnimSegment1607->X3DNode::setName(QString("l_upperarm"));
SoHAnimSegment1607->setDEF(QString("hanim_l_upperarm"));
SoHAnimSite* SoHAnimSite1608 = new SoHAnimSite();
SoHAnimSite1608->X3DNode::setName(QString("l_humeral_lateral_epicondyle"));
SoHAnimSite1608->setDEF(QString("hanim_l_humeral_lateral_epicondyle_pt"));
SoHAnimSite1608->setTranslation(new float[]{0.2,0.95,-0.03});
SoTouchSensor* SoTouchSensor1609 = new SoTouchSensor();
SoTouchSensor1609->setDescription(QString("HAnimSite 63 hanim_l_humeral_lateral_epicondyle_pt"));
SoHAnimSite1608->addChild(*SoTouchSensor1609);

SoShape* SoShape1610 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1611 = new SoVRMLAppearance();
SoMaterial* SoMaterial1612 = new SoMaterial();
SoMaterial1612->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1611->addChild(*SoMaterial1612);

SoShape1610->addChild(*SoVRMLAppearance1611);

SoIndexedFaceSet* SoIndexedFaceSet1613 = new SoIndexedFaceSet();
SoIndexedFaceSet1613->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1613->setCreaseAngle(0.5);
SoIndexedFaceSet1613->setSolid(false);
SoColorRGBA* SoColorRGBA1614 = new SoColorRGBA();
SoColorRGBA1614->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1613->addChild(*SoColorRGBA1614);

SoCoordinate* SoCoordinate1615 = new SoCoordinate();
SoCoordinate1615->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1613->setCoord(*SoCoordinate1615);

SoShape1610->setGeometry(*SoIndexedFaceSet1613);

SoHAnimSite1608->addChild(*SoShape1610);

SoBillboard* SoBillboard1616 = new SoBillboard();
SoBillboard1616->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1617 = new SoShape();
SoText* SoText1618 = new SoText();
SoText1618->setString(new QString[]{QString("63")}, 1);
SoFontStyle* SoFontStyle1619 = new SoFontStyle();
SoFontStyle1619->setSize(0.035);
SoText1618->setFontStyle(*SoFontStyle1619);

SoShape1617->setGeometry(*SoText1618);

SoBillboard1616->addChild(*SoShape1617);

SoHAnimSite1608->addChild(SoBillboard1616);

SoHAnimSegment1607->addChild(*SoHAnimSite1608);

SoHAnimSite* SoHAnimSite1620 = new SoHAnimSite();
SoHAnimSite1620->X3DNode::setName(QString("l_humeral_medial_epicondyle"));
SoHAnimSite1620->setDEF(QString("hanim_l_humeral_medial_epicondyle_pt"));
SoHAnimSite1620->setTranslation(new float[]{0.18,0.93,-0.03});
SoTouchSensor* SoTouchSensor1621 = new SoTouchSensor();
SoTouchSensor1621->setDescription(QString("HAnimSite 64 hanim_l_humeral_medial_epicondyle_pt"));
SoHAnimSite1620->addChild(*SoTouchSensor1621);

SoShape* SoShape1622 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1623 = new SoVRMLAppearance();
SoMaterial* SoMaterial1624 = new SoMaterial();
SoMaterial1624->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1623->addChild(*SoMaterial1624);

SoShape1622->addChild(*SoVRMLAppearance1623);

SoIndexedFaceSet* SoIndexedFaceSet1625 = new SoIndexedFaceSet();
SoIndexedFaceSet1625->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1625->setCreaseAngle(0.5);
SoIndexedFaceSet1625->setSolid(false);
SoColorRGBA* SoColorRGBA1626 = new SoColorRGBA();
SoColorRGBA1626->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1625->addChild(*SoColorRGBA1626);

SoCoordinate* SoCoordinate1627 = new SoCoordinate();
SoCoordinate1627->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1625->setCoord(*SoCoordinate1627);

SoShape1622->setGeometry(*SoIndexedFaceSet1625);

SoHAnimSite1620->addChild(*SoShape1622);

SoBillboard* SoBillboard1628 = new SoBillboard();
SoBillboard1628->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1629 = new SoShape();
SoText* SoText1630 = new SoText();
SoText1630->setString(new QString[]{QString("64")}, 1);
SoFontStyle* SoFontStyle1631 = new SoFontStyle();
SoFontStyle1631->setSize(0.035);
SoText1630->setFontStyle(*SoFontStyle1631);

SoShape1629->setGeometry(*SoText1630);

SoBillboard1628->addChild(*SoShape1629);

SoHAnimSite1620->addChild(SoBillboard1628);

SoHAnimSegment1607->addChild(*SoHAnimSite1620);

SoHAnimSite* SoHAnimSite1632 = new SoHAnimSite();
SoHAnimSite1632->X3DNode::setName(QString("l_radiale"));
SoHAnimSite1632->setDEF(QString("hanim_l_radiale_pt"));
SoHAnimSite1632->setTranslation(new float[]{0.2,0.91,-0.03});
SoTouchSensor* SoTouchSensor1633 = new SoTouchSensor();
SoTouchSensor1633->setDescription(QString("HAnimSite 69 hanim_l_radiale_pt"));
SoHAnimSite1632->addChild(*SoTouchSensor1633);

SoShape* SoShape1634 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1635 = new SoVRMLAppearance();
SoMaterial* SoMaterial1636 = new SoMaterial();
SoMaterial1636->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1635->addChild(*SoMaterial1636);

SoShape1634->addChild(*SoVRMLAppearance1635);

SoIndexedFaceSet* SoIndexedFaceSet1637 = new SoIndexedFaceSet();
SoIndexedFaceSet1637->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1637->setCreaseAngle(0.5);
SoIndexedFaceSet1637->setSolid(false);
SoColorRGBA* SoColorRGBA1638 = new SoColorRGBA();
SoColorRGBA1638->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1637->addChild(*SoColorRGBA1638);

SoCoordinate* SoCoordinate1639 = new SoCoordinate();
SoCoordinate1639->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1637->setCoord(*SoCoordinate1639);

SoShape1634->setGeometry(*SoIndexedFaceSet1637);

SoHAnimSite1632->addChild(*SoShape1634);

SoBillboard* SoBillboard1640 = new SoBillboard();
SoBillboard1640->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1641 = new SoShape();
SoText* SoText1642 = new SoText();
SoText1642->setString(new QString[]{QString("69")}, 1);
SoFontStyle* SoFontStyle1643 = new SoFontStyle();
SoFontStyle1643->setSize(0.035);
SoText1642->setFontStyle(*SoFontStyle1643);

SoShape1641->setGeometry(*SoText1642);

SoBillboard1640->addChild(*SoShape1641);

SoHAnimSite1632->addChild(SoBillboard1640);

SoHAnimSegment1607->addChild(*SoHAnimSite1632);

SoHAnimSite* SoHAnimSite1644 = new SoHAnimSite();
SoHAnimSite1644->X3DNode::setName(QString("l_bideltoid"));
SoHAnimSite1644->setDEF(QString("hanim_l_bideltoid_pt"));
SoHAnimSite1644->setTranslation(new float[]{0.225,1.185,0.0});
SoTouchSensor* SoTouchSensor1645 = new SoTouchSensor();
SoTouchSensor1645->setDescription(QString("HAnimSite 96 hanim_l_bideltoid_pt"));
SoHAnimSite1644->addChild(*SoTouchSensor1645);

SoShape* SoShape1646 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1647 = new SoVRMLAppearance();
SoMaterial* SoMaterial1648 = new SoMaterial();
SoMaterial1648->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1647->addChild(*SoMaterial1648);

SoShape1646->addChild(*SoVRMLAppearance1647);

SoIndexedFaceSet* SoIndexedFaceSet1649 = new SoIndexedFaceSet();
SoIndexedFaceSet1649->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1649->setCreaseAngle(0.5);
SoIndexedFaceSet1649->setSolid(false);
SoColorRGBA* SoColorRGBA1650 = new SoColorRGBA();
SoColorRGBA1650->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1649->addChild(*SoColorRGBA1650);

SoCoordinate* SoCoordinate1651 = new SoCoordinate();
SoCoordinate1651->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1649->setCoord(*SoCoordinate1651);

SoShape1646->setGeometry(*SoIndexedFaceSet1649);

SoHAnimSite1644->addChild(*SoShape1646);

SoBillboard* SoBillboard1652 = new SoBillboard();
SoBillboard1652->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1653 = new SoShape();
SoText* SoText1654 = new SoText();
SoText1654->setString(new QString[]{QString("96")}, 1);
SoFontStyle* SoFontStyle1655 = new SoFontStyle();
SoFontStyle1655->setSize(0.035);
SoText1654->setFontStyle(*SoFontStyle1655);

SoShape1653->setGeometry(*SoText1654);

SoBillboard1652->addChild(*SoShape1653);

SoHAnimSite1644->addChild(SoBillboard1652);

SoHAnimSegment1607->addChild(*SoHAnimSite1644);

SoShape* SoShape1656 = new SoShape();
SoLineSet* SoLineSet1657 = new SoLineSet();
SoLineSet1657->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1658 = new SoColorRGBA();
SoColorRGBA1658->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1657->addChild(*SoColorRGBA1658);

SoCoordinate* SoCoordinate1659 = new SoCoordinate();
SoCoordinate1659->setPoint(new float[]{0.16506,1.17855,-0.00327,0.12294,1.191825,-0.0129}, 6);
SoLineSet1657->setCoord(*SoCoordinate1659);

SoShape1656->setGeometry(*SoLineSet1657);

SoHAnimSegment1607->addChild(*SoShape1656);

SoHAnimJoint1606->addChildren(*SoHAnimSegment1607);

SoHAnimJoint* SoHAnimJoint1660 = new SoHAnimJoint();
SoHAnimJoint1660->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint1660->setDEF(QString("hanim_l_elbow"));
SoHAnimJoint1660->setCenter(new float[]{0.18209,0.9288,-0.00563});
SoHAnimJoint1660->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1660->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1661 = new SoHAnimSegment();
SoHAnimSegment1661->X3DNode::setName(QString("l_forearm"));
SoHAnimSegment1661->setDEF(QString("hanim_l_forearm"));
SoHAnimSite* SoHAnimSite1662 = new SoHAnimSite();
SoHAnimSite1662->X3DNode::setName(QString("l_radial_styloid"));
SoHAnimSite1662->setDEF(QString("hanim_l_radial_styloid_pt"));
SoHAnimSite1662->setTranslation(new float[]{0.18,0.725,0.025});
SoTouchSensor* SoTouchSensor1663 = new SoTouchSensor();
SoTouchSensor1663->setDescription(QString("HAnimSite 71 hanim_l_radial_styloid_pt"));
SoHAnimSite1662->addChild(*SoTouchSensor1663);

SoShape* SoShape1664 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1665 = new SoVRMLAppearance();
SoMaterial* SoMaterial1666 = new SoMaterial();
SoMaterial1666->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1665->addChild(*SoMaterial1666);

SoShape1664->addChild(*SoVRMLAppearance1665);

SoIndexedFaceSet* SoIndexedFaceSet1667 = new SoIndexedFaceSet();
SoIndexedFaceSet1667->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1667->setCreaseAngle(0.5);
SoIndexedFaceSet1667->setSolid(false);
SoColorRGBA* SoColorRGBA1668 = new SoColorRGBA();
SoColorRGBA1668->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1667->addChild(*SoColorRGBA1668);

SoCoordinate* SoCoordinate1669 = new SoCoordinate();
SoCoordinate1669->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1667->setCoord(*SoCoordinate1669);

SoShape1664->setGeometry(*SoIndexedFaceSet1667);

SoHAnimSite1662->addChild(*SoShape1664);

SoBillboard* SoBillboard1670 = new SoBillboard();
SoBillboard1670->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1671 = new SoShape();
SoText* SoText1672 = new SoText();
SoText1672->setString(new QString[]{QString("71")}, 1);
SoFontStyle* SoFontStyle1673 = new SoFontStyle();
SoFontStyle1673->setSize(0.035);
SoText1672->setFontStyle(*SoFontStyle1673);

SoShape1671->setGeometry(*SoText1672);

SoBillboard1670->addChild(*SoShape1671);

SoHAnimSite1662->addChild(SoBillboard1670);

SoHAnimSegment1661->addChild(*SoHAnimSite1662);

SoHAnimSite* SoHAnimSite1674 = new SoHAnimSite();
SoHAnimSite1674->X3DNode::setName(QString("l_olecranon"));
SoHAnimSite1674->setDEF(QString("hanim_l_olecranon_pt"));
SoHAnimSite1674->setTranslation(new float[]{0.2,0.92,-0.03});
SoTouchSensor* SoTouchSensor1675 = new SoTouchSensor();
SoTouchSensor1675->setDescription(QString("HAnimSite 65 hanim_l_olecranon_pt"));
SoHAnimSite1674->addChild(*SoTouchSensor1675);

SoShape* SoShape1676 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1677 = new SoVRMLAppearance();
SoMaterial* SoMaterial1678 = new SoMaterial();
SoMaterial1678->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1677->addChild(*SoMaterial1678);

SoShape1676->addChild(*SoVRMLAppearance1677);

SoIndexedFaceSet* SoIndexedFaceSet1679 = new SoIndexedFaceSet();
SoIndexedFaceSet1679->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1679->setCreaseAngle(0.5);
SoIndexedFaceSet1679->setSolid(false);
SoColorRGBA* SoColorRGBA1680 = new SoColorRGBA();
SoColorRGBA1680->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1679->addChild(*SoColorRGBA1680);

SoCoordinate* SoCoordinate1681 = new SoCoordinate();
SoCoordinate1681->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1679->setCoord(*SoCoordinate1681);

SoShape1676->setGeometry(*SoIndexedFaceSet1679);

SoHAnimSite1674->addChild(*SoShape1676);

SoBillboard* SoBillboard1682 = new SoBillboard();
SoBillboard1682->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1683 = new SoShape();
SoText* SoText1684 = new SoText();
SoText1684->setString(new QString[]{QString("65")}, 1);
SoFontStyle* SoFontStyle1685 = new SoFontStyle();
SoFontStyle1685->setSize(0.035);
SoText1684->setFontStyle(*SoFontStyle1685);

SoShape1683->setGeometry(*SoText1684);

SoBillboard1682->addChild(*SoShape1683);

SoHAnimSite1674->addChild(SoBillboard1682);

SoHAnimSegment1661->addChild(*SoHAnimSite1674);

SoShape* SoShape1686 = new SoShape();
SoLineSet* SoLineSet1687 = new SoLineSet();
SoLineSet1687->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1688 = new SoColorRGBA();
SoColorRGBA1688->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1687->addChild(*SoColorRGBA1688);

SoCoordinate* SoCoordinate1689 = new SoCoordinate();
SoCoordinate1689->setPoint(new float[]{0.18209,0.9288,-0.00563,0.16506,1.17855,-0.00327}, 6);
SoLineSet1687->setCoord(*SoCoordinate1689);

SoShape1686->setGeometry(*SoLineSet1687);

SoHAnimSegment1661->addChild(*SoShape1686);

SoHAnimJoint1660->addChildren(*SoHAnimSegment1661);

SoHAnimJoint* SoHAnimJoint1690 = new SoHAnimJoint();
SoHAnimJoint1690->X3DNode::setName(QString("l_radiocarpal"));
SoHAnimJoint1690->setDEF(QString("hanim_l_radiocarpal"));
SoHAnimJoint1690->setCenter(new float[]{0.1819,0.72427,-0.005});
SoHAnimJoint1690->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1690->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1691 = new SoHAnimSegment();
SoHAnimSegment1691->X3DNode::setName(QString("l_carpal"));
SoHAnimSegment1691->setDEF(QString("hanim_l_carpal"));
SoHAnimSite* SoHAnimSite1692 = new SoHAnimSite();
SoHAnimSite1692->X3DNode::setName(QString("l_ulnar_styloid"));
SoHAnimSite1692->setDEF(QString("hanim_l_ulnar_styloid_pt"));
SoHAnimSite1692->setTranslation(new float[]{0.2,0.725,0.0});
SoTouchSensor* SoTouchSensor1693 = new SoTouchSensor();
SoTouchSensor1693->setDescription(QString("HAnimSite 70 hanim_l_ulnar_styloid_pt"));
SoHAnimSite1692->addChild(*SoTouchSensor1693);

SoShape* SoShape1694 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1695 = new SoVRMLAppearance();
SoMaterial* SoMaterial1696 = new SoMaterial();
SoMaterial1696->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1695->addChild(*SoMaterial1696);

SoShape1694->addChild(*SoVRMLAppearance1695);

SoIndexedFaceSet* SoIndexedFaceSet1697 = new SoIndexedFaceSet();
SoIndexedFaceSet1697->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1697->setCreaseAngle(0.5);
SoIndexedFaceSet1697->setSolid(false);
SoColorRGBA* SoColorRGBA1698 = new SoColorRGBA();
SoColorRGBA1698->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1697->addChild(*SoColorRGBA1698);

SoCoordinate* SoCoordinate1699 = new SoCoordinate();
SoCoordinate1699->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1697->setCoord(*SoCoordinate1699);

SoShape1694->setGeometry(*SoIndexedFaceSet1697);

SoHAnimSite1692->addChild(*SoShape1694);

SoBillboard* SoBillboard1700 = new SoBillboard();
SoBillboard1700->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1701 = new SoShape();
SoText* SoText1702 = new SoText();
SoText1702->setString(new QString[]{QString("70")}, 1);
SoFontStyle* SoFontStyle1703 = new SoFontStyle();
SoFontStyle1703->setSize(0.035);
SoText1702->setFontStyle(*SoFontStyle1703);

SoShape1701->setGeometry(*SoText1702);

SoBillboard1700->addChild(*SoShape1701);

SoHAnimSite1692->addChild(SoBillboard1700);

SoHAnimSegment1691->addChild(*SoHAnimSite1692);

SoShape* SoShape1704 = new SoShape();
SoLineSet* SoLineSet1705 = new SoLineSet();
SoLineSet1705->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1706 = new SoColorRGBA();
SoColorRGBA1706->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1705->addChild(*SoColorRGBA1706);

SoCoordinate* SoCoordinate1707 = new SoCoordinate();
SoCoordinate1707->setPoint(new float[]{0.1819,0.72427,-0.005,0.18209,0.9288,-0.00563}, 6);
SoLineSet1705->setCoord(*SoCoordinate1707);

SoShape1704->setGeometry(*SoLineSet1705);

SoHAnimSegment1691->addChild(*SoShape1704);

SoHAnimJoint1690->addChildren(*SoHAnimSegment1691);

SoHAnimJoint* SoHAnimJoint1708 = new SoHAnimJoint();
SoHAnimJoint1708->X3DNode::setName(QString("l_midcarpal_1"));
SoHAnimJoint1708->setDEF(QString("hanim_l_midcarpal_1"));
SoHAnimJoint1708->setCenter(new float[]{0.1813,0.706,0.0193});
SoHAnimJoint1708->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1708->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1709 = new SoHAnimSegment();
SoHAnimSegment1709->X3DNode::setName(QString("l_trapezium"));
SoHAnimSegment1709->setDEF(QString("hanim_l_trapezium"));
SoShape* SoShape1710 = new SoShape();
SoLineSet* SoLineSet1711 = new SoLineSet();
SoLineSet1711->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1712 = new SoColorRGBA();
SoColorRGBA1712->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1711->addChild(*SoColorRGBA1712);

SoCoordinate* SoCoordinate1713 = new SoCoordinate();
SoCoordinate1713->setPoint(new float[]{0.1813,0.706,0.0193,0.1819,0.72427,-0.005}, 6);
SoLineSet1711->setCoord(*SoCoordinate1713);

SoShape1710->setGeometry(*SoLineSet1711);

SoHAnimSegment1709->addChild(*SoShape1710);

SoHAnimJoint1708->addChildren(*SoHAnimSegment1709);

SoHAnimJoint* SoHAnimJoint1714 = new SoHAnimJoint();
SoHAnimJoint1714->X3DNode::setName(QString("l_carpometacarpal_1"));
SoHAnimJoint1714->setDEF(QString("hanim_l_carpometacarpal_1"));
SoHAnimJoint1714->setCenter(new float[]{0.1805,0.69255,0.026});
SoHAnimJoint1714->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1714->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1715 = new SoHAnimSegment();
SoHAnimSegment1715->X3DNode::setName(QString("l_metacarpal_1"));
SoHAnimSegment1715->setDEF(QString("hanim_l_metacarpal_1"));
SoHAnimSite* SoHAnimSite1716 = new SoHAnimSite();
SoHAnimSite1716->X3DNode::setName(QString("l_metacarpal_phalanx_2"));
SoHAnimSite1716->setDEF(QString("hanim_l_metacarpal_phalanx_2_pt"));
SoHAnimSite1716->setTranslation(new float[]{0.2,0.665,0.012});
SoTouchSensor* SoTouchSensor1717 = new SoTouchSensor();
SoTouchSensor1717->setDescription(QString("HAnimSite 75 hanim_l_metacarpal_phalanx_2_pt"));
SoHAnimSite1716->addChild(*SoTouchSensor1717);

SoShape* SoShape1718 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1719 = new SoVRMLAppearance();
SoMaterial* SoMaterial1720 = new SoMaterial();
SoMaterial1720->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1719->addChild(*SoMaterial1720);

SoShape1718->addChild(*SoVRMLAppearance1719);

SoIndexedFaceSet* SoIndexedFaceSet1721 = new SoIndexedFaceSet();
SoIndexedFaceSet1721->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1721->setCreaseAngle(0.5);
SoIndexedFaceSet1721->setSolid(false);
SoColorRGBA* SoColorRGBA1722 = new SoColorRGBA();
SoColorRGBA1722->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1721->addChild(*SoColorRGBA1722);

SoCoordinate* SoCoordinate1723 = new SoCoordinate();
SoCoordinate1723->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1721->setCoord(*SoCoordinate1723);

SoShape1718->setGeometry(*SoIndexedFaceSet1721);

SoHAnimSite1716->addChild(*SoShape1718);

SoBillboard* SoBillboard1724 = new SoBillboard();
SoBillboard1724->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1725 = new SoShape();
SoText* SoText1726 = new SoText();
SoText1726->setString(new QString[]{QString("75")}, 1);
SoFontStyle* SoFontStyle1727 = new SoFontStyle();
SoFontStyle1727->setSize(0.035);
SoText1726->setFontStyle(*SoFontStyle1727);

SoShape1725->setGeometry(*SoText1726);

SoBillboard1724->addChild(*SoShape1725);

SoHAnimSite1716->addChild(SoBillboard1724);

SoHAnimSegment1715->addChild(*SoHAnimSite1716);

SoShape* SoShape1728 = new SoShape();
SoLineSet* SoLineSet1729 = new SoLineSet();
SoLineSet1729->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1730 = new SoColorRGBA();
SoColorRGBA1730->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1729->addChild(*SoColorRGBA1730);

SoCoordinate* SoCoordinate1731 = new SoCoordinate();
SoCoordinate1731->setPoint(new float[]{0.1805,0.69255,0.026,0.1813,0.706,0.0193}, 6);
SoLineSet1729->setCoord(*SoCoordinate1731);

SoShape1728->setGeometry(*SoLineSet1729);

SoHAnimSegment1715->addChild(*SoShape1728);

SoHAnimJoint1714->addChildren(*SoHAnimSegment1715);

SoHAnimJoint* SoHAnimJoint1732 = new SoHAnimJoint();
SoHAnimJoint1732->X3DNode::setName(QString("l_metacarpophalangeal_1"));
SoHAnimJoint1732->setDEF(QString("hanim_l_metacarpophalangeal_1"));
SoHAnimJoint1732->setCenter(new float[]{0.181,0.6727,0.03577});
SoHAnimJoint1732->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1732->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1733 = new SoHAnimSegment();
SoHAnimSegment1733->X3DNode::setName(QString("l_carpal_proximal_phalanx_1"));
SoHAnimSegment1733->setDEF(QString("hanim_l_carpal_proximal_phalanx_1"));
SoShape* SoShape1734 = new SoShape();
SoLineSet* SoLineSet1735 = new SoLineSet();
SoLineSet1735->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1736 = new SoColorRGBA();
SoColorRGBA1736->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1735->addChild(*SoColorRGBA1736);

SoCoordinate* SoCoordinate1737 = new SoCoordinate();
SoCoordinate1737->setPoint(new float[]{0.181,0.6727,0.03577,0.1805,0.69255,0.026}, 6);
SoLineSet1735->setCoord(*SoCoordinate1737);

SoShape1734->setGeometry(*SoLineSet1735);

SoHAnimSegment1733->addChild(*SoShape1734);

SoHAnimJoint1732->addChildren(*SoHAnimSegment1733);

SoHAnimJoint* SoHAnimJoint1738 = new SoHAnimJoint();
SoHAnimJoint1738->X3DNode::setName(QString("l_carpal_interphalangeal_1"));
SoHAnimJoint1738->setDEF(QString("hanim_l_carpal_interphalangeal_1"));
SoHAnimJoint1738->setCenter(new float[]{0.1826,0.654,0.04966});
SoHAnimJoint1738->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1738->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1739 = new SoHAnimSegment();
SoHAnimSegment1739->X3DNode::setName(QString("l_carpal_distal_phalanx_1"));
SoHAnimSegment1739->setDEF(QString("hanim_l_carpal_distal_phalanx_1"));
SoHAnimSite* SoHAnimSite1740 = new SoHAnimSite();
SoHAnimSite1740->X3DNode::setName(QString("l_carpal_distal_phalanx_1"));
SoHAnimSite1740->setDEF(QString("hanim_l_carpal_distal_phalanx_1_tip"));
SoHAnimSite1740->setTranslation(new float[]{0.18,0.64,0.06});
SoTouchSensor* SoTouchSensor1741 = new SoTouchSensor();
SoTouchSensor1741->setDescription(QString("HAnimSite 101 hanim_l_carpal_distal_phalanx_1_tip"));
SoHAnimSite1740->addChild(*SoTouchSensor1741);

SoShape* SoShape1742 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1743 = new SoVRMLAppearance();
SoMaterial* SoMaterial1744 = new SoMaterial();
SoMaterial1744->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1743->addChild(*SoMaterial1744);

SoShape1742->addChild(*SoVRMLAppearance1743);

SoIndexedFaceSet* SoIndexedFaceSet1745 = new SoIndexedFaceSet();
SoIndexedFaceSet1745->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1745->setCreaseAngle(0.5);
SoIndexedFaceSet1745->setSolid(false);
SoColorRGBA* SoColorRGBA1746 = new SoColorRGBA();
SoColorRGBA1746->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1745->addChild(*SoColorRGBA1746);

SoCoordinate* SoCoordinate1747 = new SoCoordinate();
SoCoordinate1747->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1745->setCoord(*SoCoordinate1747);

SoShape1742->setGeometry(*SoIndexedFaceSet1745);

SoHAnimSite1740->addChild(*SoShape1742);

SoBillboard* SoBillboard1748 = new SoBillboard();
SoBillboard1748->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1749 = new SoShape();
SoText* SoText1750 = new SoText();
SoText1750->setString(new QString[]{QString("101")}, 1);
SoFontStyle* SoFontStyle1751 = new SoFontStyle();
SoFontStyle1751->setSize(0.035);
SoText1750->setFontStyle(*SoFontStyle1751);

SoShape1749->setGeometry(*SoText1750);

SoBillboard1748->addChild(*SoShape1749);

SoHAnimSite1740->addChild(SoBillboard1748);

SoHAnimSegment1739->addChild(*SoHAnimSite1740);

SoShape* SoShape1752 = new SoShape();
SoLineSet* SoLineSet1753 = new SoLineSet();
SoLineSet1753->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1754 = new SoColorRGBA();
SoColorRGBA1754->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1753->addChild(*SoColorRGBA1754);

SoCoordinate* SoCoordinate1755 = new SoCoordinate();
SoCoordinate1755->setPoint(new float[]{0.1826,0.654,0.04966,0.181,0.6727,0.03577}, 6);
SoLineSet1753->setCoord(*SoCoordinate1755);

SoShape1752->setGeometry(*SoLineSet1753);

SoHAnimSegment1739->addChild(*SoShape1752);

SoHAnimJoint1738->addChildren(*SoHAnimSegment1739);

SoHAnimJoint1732->addChildren(*SoHAnimJoint1738);

SoHAnimJoint1714->addChildren(*SoHAnimJoint1732);

SoHAnimJoint1708->addChildren(*SoHAnimJoint1714);

SoHAnimJoint1690->addChildren(*SoHAnimJoint1708);

SoHAnimJoint* SoHAnimJoint1756 = new SoHAnimJoint();
SoHAnimJoint1756->X3DNode::setName(QString("l_midcarpal_2"));
SoHAnimJoint1756->setDEF(QString("hanim_l_midcarpal_2"));
SoHAnimJoint1756->setCenter(new float[]{0.18128,0.70695,0.00842});
SoHAnimJoint1756->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1756->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1757 = new SoHAnimSegment();
SoHAnimSegment1757->X3DNode::setName(QString("l_trapezoid"));
SoHAnimSegment1757->setDEF(QString("hanim_l_trapezoid"));
SoShape* SoShape1758 = new SoShape();
SoLineSet* SoLineSet1759 = new SoLineSet();
SoLineSet1759->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1760 = new SoColorRGBA();
SoColorRGBA1760->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1759->addChild(*SoColorRGBA1760);

SoCoordinate* SoCoordinate1761 = new SoCoordinate();
SoCoordinate1761->setPoint(new float[]{0.18128,0.70695,0.00842,0.1819,0.72427,-0.005}, 6);
SoLineSet1759->setCoord(*SoCoordinate1761);

SoShape1758->setGeometry(*SoLineSet1759);

SoHAnimSegment1757->addChild(*SoShape1758);

SoHAnimJoint1756->addChildren(*SoHAnimSegment1757);

SoHAnimJoint* SoHAnimJoint1762 = new SoHAnimJoint();
SoHAnimJoint1762->X3DNode::setName(QString("l_carpometacarpal_2"));
SoHAnimJoint1762->setDEF(QString("hanim_l_carpometacarpal_2"));
SoHAnimJoint1762->setCenter(new float[]{0.18128,0.6876,0.0098});
SoHAnimJoint1762->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1762->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1763 = new SoHAnimSegment();
SoHAnimSegment1763->X3DNode::setName(QString("l_metacarpal_2"));
SoHAnimSegment1763->setDEF(QString("hanim_l_metacarpal_2"));
SoShape* SoShape1764 = new SoShape();
SoLineSet* SoLineSet1765 = new SoLineSet();
SoLineSet1765->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1766 = new SoColorRGBA();
SoColorRGBA1766->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1765->addChild(*SoColorRGBA1766);

SoCoordinate* SoCoordinate1767 = new SoCoordinate();
SoCoordinate1767->setPoint(new float[]{0.18128,0.6876,0.0098,0.18128,0.70695,0.00842}, 6);
SoLineSet1765->setCoord(*SoCoordinate1767);

SoShape1764->setGeometry(*SoLineSet1765);

SoHAnimSegment1763->addChild(*SoShape1764);

SoHAnimJoint1762->addChildren(*SoHAnimSegment1763);

SoHAnimJoint* SoHAnimJoint1768 = new SoHAnimJoint();
SoHAnimJoint1768->X3DNode::setName(QString("l_metacarpophalangeal_2"));
SoHAnimJoint1768->setDEF(QString("hanim_l_metacarpophalangeal_2"));
SoHAnimJoint1768->setCenter(new float[]{0.1837,0.6372,0.01507});
SoHAnimJoint1768->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1768->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1769 = new SoHAnimSegment();
SoHAnimSegment1769->X3DNode::setName(QString("l_carpal_proximal_phalanx_2"));
SoHAnimSegment1769->setDEF(QString("hanim_l_carpal_proximal_phalanx_2"));
SoShape* SoShape1770 = new SoShape();
SoLineSet* SoLineSet1771 = new SoLineSet();
SoLineSet1771->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1772 = new SoColorRGBA();
SoColorRGBA1772->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1771->addChild(*SoColorRGBA1772);

SoCoordinate* SoCoordinate1773 = new SoCoordinate();
SoCoordinate1773->setPoint(new float[]{0.1837,0.6372,0.01507,0.18128,0.6876,0.0098}, 6);
SoLineSet1771->setCoord(*SoCoordinate1773);

SoShape1770->setGeometry(*SoLineSet1771);

SoHAnimSegment1769->addChild(*SoShape1770);

SoHAnimJoint1768->addChildren(*SoHAnimSegment1769);

SoHAnimJoint* SoHAnimJoint1774 = new SoHAnimJoint();
SoHAnimJoint1774->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint1774->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint1774->setCenter(new float[]{0.18171,0.6068,0.01418});
SoHAnimJoint1774->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1774->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1775 = new SoHAnimSegment();
SoHAnimSegment1775->X3DNode::setName(QString("l_carpal_middle_phalanx_2"));
SoHAnimSegment1775->setDEF(QString("hanim_l_carpal_middle_phalanx_2"));
SoShape* SoShape1776 = new SoShape();
SoLineSet* SoLineSet1777 = new SoLineSet();
SoLineSet1777->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1778 = new SoColorRGBA();
SoColorRGBA1778->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1777->addChild(*SoColorRGBA1778);

SoCoordinate* SoCoordinate1779 = new SoCoordinate();
SoCoordinate1779->setPoint(new float[]{0.18171,0.6068,0.01418,0.1837,0.6372,0.01507}, 6);
SoLineSet1777->setCoord(*SoCoordinate1779);

SoShape1776->setGeometry(*SoLineSet1777);

SoHAnimSegment1775->addChild(*SoShape1776);

SoHAnimJoint1774->addChildren(*SoHAnimSegment1775);

SoHAnimJoint* SoHAnimJoint1780 = new SoHAnimJoint();
SoHAnimJoint1780->X3DNode::setName(QString("l_carpal_distal_interphalangeal_2"));
SoHAnimJoint1780->setDEF(QString("hanim_l_carpal_distal_interphalangeal_2"));
SoHAnimJoint1780->setCenter(new float[]{0.18067,0.5816,0.01338});
SoHAnimJoint1780->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1780->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1781 = new SoHAnimSegment();
SoHAnimSegment1781->X3DNode::setName(QString("l_carpal_distal_phalanx_2"));
SoHAnimSegment1781->setDEF(QString("hanim_l_carpal_distal_phalanx_2"));
SoHAnimSite* SoHAnimSite1782 = new SoHAnimSite();
SoHAnimSite1782->X3DNode::setName(QString("l_dactylion"));
SoHAnimSite1782->setDEF(QString("hanim_l_dactylion_pt"));
SoHAnimSite1782->setTranslation(new float[]{0.17,0.558,0.017});
SoTouchSensor* SoTouchSensor1783 = new SoTouchSensor();
SoTouchSensor1783->setDescription(QString("HAnimSite 57 hanim_l_dactylion_pt"));
SoHAnimSite1782->addChild(*SoTouchSensor1783);

SoShape* SoShape1784 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1785 = new SoVRMLAppearance();
SoMaterial* SoMaterial1786 = new SoMaterial();
SoMaterial1786->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1785->addChild(*SoMaterial1786);

SoShape1784->addChild(*SoVRMLAppearance1785);

SoIndexedFaceSet* SoIndexedFaceSet1787 = new SoIndexedFaceSet();
SoIndexedFaceSet1787->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1787->setCreaseAngle(0.5);
SoIndexedFaceSet1787->setSolid(false);
SoColorRGBA* SoColorRGBA1788 = new SoColorRGBA();
SoColorRGBA1788->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1787->addChild(*SoColorRGBA1788);

SoCoordinate* SoCoordinate1789 = new SoCoordinate();
SoCoordinate1789->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1787->setCoord(*SoCoordinate1789);

SoShape1784->setGeometry(*SoIndexedFaceSet1787);

SoHAnimSite1782->addChild(*SoShape1784);

SoBillboard* SoBillboard1790 = new SoBillboard();
SoBillboard1790->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1791 = new SoShape();
SoText* SoText1792 = new SoText();
SoText1792->setString(new QString[]{QString("57")}, 1);
SoFontStyle* SoFontStyle1793 = new SoFontStyle();
SoFontStyle1793->setSize(0.035);
SoText1792->setFontStyle(*SoFontStyle1793);

SoShape1791->setGeometry(*SoText1792);

SoBillboard1790->addChild(*SoShape1791);

SoHAnimSite1782->addChild(SoBillboard1790);

SoHAnimSegment1781->addChild(*SoHAnimSite1782);

SoHAnimSite* SoHAnimSite1794 = new SoHAnimSite();
SoHAnimSite1794->X3DNode::setName(QString("l_carpal_distal_phalanx_2"));
SoHAnimSite1794->setDEF(QString("hanim_l_carpal_distal_phalanx_2_tip"));
SoHAnimSite1794->setTranslation(new float[]{0.172,0.558,0.017});
SoTouchSensor* SoTouchSensor1795 = new SoTouchSensor();
SoTouchSensor1795->setDescription(QString("HAnimSite 102 hanim_l_carpal_distal_phalanx_2_tip"));
SoHAnimSite1794->addChild(*SoTouchSensor1795);

SoShape* SoShape1796 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1797 = new SoVRMLAppearance();
SoMaterial* SoMaterial1798 = new SoMaterial();
SoMaterial1798->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1797->addChild(*SoMaterial1798);

SoShape1796->addChild(*SoVRMLAppearance1797);

SoIndexedFaceSet* SoIndexedFaceSet1799 = new SoIndexedFaceSet();
SoIndexedFaceSet1799->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1799->setCreaseAngle(0.5);
SoIndexedFaceSet1799->setSolid(false);
SoColorRGBA* SoColorRGBA1800 = new SoColorRGBA();
SoColorRGBA1800->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1799->addChild(*SoColorRGBA1800);

SoCoordinate* SoCoordinate1801 = new SoCoordinate();
SoCoordinate1801->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1799->setCoord(*SoCoordinate1801);

SoShape1796->setGeometry(*SoIndexedFaceSet1799);

SoHAnimSite1794->addChild(*SoShape1796);

SoBillboard* SoBillboard1802 = new SoBillboard();
SoBillboard1802->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1803 = new SoShape();
SoText* SoText1804 = new SoText();
SoText1804->setString(new QString[]{QString("102")}, 1);
SoFontStyle* SoFontStyle1805 = new SoFontStyle();
SoFontStyle1805->setSize(0.035);
SoText1804->setFontStyle(*SoFontStyle1805);

SoShape1803->setGeometry(*SoText1804);

SoBillboard1802->addChild(*SoShape1803);

SoHAnimSite1794->addChild(SoBillboard1802);

SoHAnimSegment1781->addChild(*SoHAnimSite1794);

SoShape* SoShape1806 = new SoShape();
SoLineSet* SoLineSet1807 = new SoLineSet();
SoLineSet1807->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1808 = new SoColorRGBA();
SoColorRGBA1808->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1807->addChild(*SoColorRGBA1808);

SoCoordinate* SoCoordinate1809 = new SoCoordinate();
SoCoordinate1809->setPoint(new float[]{0.18067,0.5816,0.01338,0.18171,0.6068,0.01418}, 6);
SoLineSet1807->setCoord(*SoCoordinate1809);

SoShape1806->setGeometry(*SoLineSet1807);

SoHAnimSegment1781->addChild(*SoShape1806);

SoHAnimJoint1780->addChildren(*SoHAnimSegment1781);

SoHAnimJoint1774->addChildren(*SoHAnimJoint1780);

SoHAnimJoint1768->addChildren(*SoHAnimJoint1774);

SoHAnimJoint1762->addChildren(*SoHAnimJoint1768);

SoHAnimJoint1756->addChildren(*SoHAnimJoint1762);

SoHAnimJoint1690->addChildren(*SoHAnimJoint1756);

SoHAnimJoint* SoHAnimJoint1810 = new SoHAnimJoint();
SoHAnimJoint1810->X3DNode::setName(QString("l_midcarpal_3"));
SoHAnimJoint1810->setDEF(QString("hanim_l_midcarpal_3"));
SoHAnimJoint1810->setCenter(new float[]{0.18108,0.708525,-0.0048});
SoHAnimJoint1810->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1810->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1811 = new SoHAnimSegment();
SoHAnimSegment1811->X3DNode::setName(QString("l_capitate"));
SoHAnimSegment1811->setDEF(QString("hanim_l_capitate"));
SoShape* SoShape1812 = new SoShape();
SoLineSet* SoLineSet1813 = new SoLineSet();
SoLineSet1813->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1814 = new SoColorRGBA();
SoColorRGBA1814->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1813->addChild(*SoColorRGBA1814);

SoCoordinate* SoCoordinate1815 = new SoCoordinate();
SoCoordinate1815->setPoint(new float[]{0.18108,0.708525,-0.0048,0.1819,0.72427,-0.005}, 6);
SoLineSet1813->setCoord(*SoCoordinate1815);

SoShape1812->setGeometry(*SoLineSet1813);

SoHAnimSegment1811->addChild(*SoShape1812);

SoHAnimJoint1810->addChildren(*SoHAnimSegment1811);

SoHAnimJoint* SoHAnimJoint1816 = new SoHAnimJoint();
SoHAnimJoint1816->X3DNode::setName(QString("l_carpometacarpal_3"));
SoHAnimJoint1816->setDEF(QString("hanim_l_carpometacarpal_3"));
SoHAnimJoint1816->setCenter(new float[]{0.18108,0.6858,-0.00625});
SoHAnimJoint1816->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1816->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1817 = new SoHAnimSegment();
SoHAnimSegment1817->X3DNode::setName(QString("l_metacarpal_3"));
SoHAnimSegment1817->setDEF(QString("hanim_l_metacarpal_3"));
SoHAnimSite* SoHAnimSite1818 = new SoHAnimSite();
SoHAnimSite1818->X3DNode::setName(QString("l_metacarpal_phalanx_3"));
SoHAnimSite1818->setDEF(QString("hanim_l_metacarpal_phalanx_3_pt"));
SoHAnimSite1818->setTranslation(new float[]{0.2,0.665,-0.039});
SoTouchSensor* SoTouchSensor1819 = new SoTouchSensor();
SoTouchSensor1819->setDescription(QString("HAnimSite 76 hanim_l_metacarpal_phalanx_3_pt"));
SoHAnimSite1818->addChild(*SoTouchSensor1819);

SoShape* SoShape1820 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1821 = new SoVRMLAppearance();
SoMaterial* SoMaterial1822 = new SoMaterial();
SoMaterial1822->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1821->addChild(*SoMaterial1822);

SoShape1820->addChild(*SoVRMLAppearance1821);

SoIndexedFaceSet* SoIndexedFaceSet1823 = new SoIndexedFaceSet();
SoIndexedFaceSet1823->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1823->setCreaseAngle(0.5);
SoIndexedFaceSet1823->setSolid(false);
SoColorRGBA* SoColorRGBA1824 = new SoColorRGBA();
SoColorRGBA1824->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1823->addChild(*SoColorRGBA1824);

SoCoordinate* SoCoordinate1825 = new SoCoordinate();
SoCoordinate1825->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1823->setCoord(*SoCoordinate1825);

SoShape1820->setGeometry(*SoIndexedFaceSet1823);

SoHAnimSite1818->addChild(*SoShape1820);

SoBillboard* SoBillboard1826 = new SoBillboard();
SoBillboard1826->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1827 = new SoShape();
SoText* SoText1828 = new SoText();
SoText1828->setString(new QString[]{QString("76")}, 1);
SoFontStyle* SoFontStyle1829 = new SoFontStyle();
SoFontStyle1829->setSize(0.035);
SoText1828->setFontStyle(*SoFontStyle1829);

SoShape1827->setGeometry(*SoText1828);

SoBillboard1826->addChild(*SoShape1827);

SoHAnimSite1818->addChild(SoBillboard1826);

SoHAnimSegment1817->addChild(*SoHAnimSite1818);

SoShape* SoShape1830 = new SoShape();
SoLineSet* SoLineSet1831 = new SoLineSet();
SoLineSet1831->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1832 = new SoColorRGBA();
SoColorRGBA1832->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1831->addChild(*SoColorRGBA1832);

SoCoordinate* SoCoordinate1833 = new SoCoordinate();
SoCoordinate1833->setPoint(new float[]{0.18108,0.6858,-0.00625,0.18108,0.708525,-0.0048}, 6);
SoLineSet1831->setCoord(*SoCoordinate1833);

SoShape1830->setGeometry(*SoLineSet1831);

SoHAnimSegment1817->addChild(*SoShape1830);

SoHAnimJoint1816->addChildren(*SoHAnimSegment1817);

SoHAnimJoint* SoHAnimJoint1834 = new SoHAnimJoint();
SoHAnimJoint1834->X3DNode::setName(QString("l_metacarpophalangeal_3"));
SoHAnimJoint1834->setDEF(QString("hanim_l_metacarpophalangeal_3"));
SoHAnimJoint1834->setCenter(new float[]{0.18369,0.6349,-0.0039});
SoHAnimJoint1834->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1834->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1835 = new SoHAnimSegment();
SoHAnimSegment1835->X3DNode::setName(QString("l_carpal_proximal_phalanx_3"));
SoHAnimSegment1835->setDEF(QString("hanim_l_carpal_proximal_phalanx_3"));
SoShape* SoShape1836 = new SoShape();
SoLineSet* SoLineSet1837 = new SoLineSet();
SoLineSet1837->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1838 = new SoColorRGBA();
SoColorRGBA1838->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1837->addChild(*SoColorRGBA1838);

SoCoordinate* SoCoordinate1839 = new SoCoordinate();
SoCoordinate1839->setPoint(new float[]{0.18369,0.6349,-0.0039,0.18108,0.6858,-0.00625}, 6);
SoLineSet1837->setCoord(*SoCoordinate1839);

SoShape1836->setGeometry(*SoLineSet1837);

SoHAnimSegment1835->addChild(*SoShape1836);

SoHAnimJoint1834->addChildren(*SoHAnimSegment1835);

SoHAnimJoint* SoHAnimJoint1840 = new SoHAnimJoint();
SoHAnimJoint1840->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint1840->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint1840->setCenter(new float[]{0.18171,0.6032,-0.0035});
SoHAnimJoint1840->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1840->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1841 = new SoHAnimSegment();
SoHAnimSegment1841->X3DNode::setName(QString("l_carpal_middle_phalanx_3"));
SoHAnimSegment1841->setDEF(QString("hanim_l_carpal_middle_phalanx_3"));
SoShape* SoShape1842 = new SoShape();
SoLineSet* SoLineSet1843 = new SoLineSet();
SoLineSet1843->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1844 = new SoColorRGBA();
SoColorRGBA1844->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1843->addChild(*SoColorRGBA1844);

SoCoordinate* SoCoordinate1845 = new SoCoordinate();
SoCoordinate1845->setPoint(new float[]{0.18171,0.6032,-0.0035,0.18369,0.6349,-0.0039}, 6);
SoLineSet1843->setCoord(*SoCoordinate1845);

SoShape1842->setGeometry(*SoLineSet1843);

SoHAnimSegment1841->addChild(*SoShape1842);

SoHAnimJoint1840->addChildren(*SoHAnimSegment1841);

SoHAnimJoint* SoHAnimJoint1846 = new SoHAnimJoint();
SoHAnimJoint1846->X3DNode::setName(QString("l_carpal_distal_interphalangeal_3"));
SoHAnimJoint1846->setDEF(QString("hanim_l_carpal_distal_interphalangeal_3"));
SoHAnimJoint1846->setCenter(new float[]{0.1807,0.5753,-0.0037});
SoHAnimJoint1846->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1846->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1847 = new SoHAnimSegment();
SoHAnimSegment1847->X3DNode::setName(QString("l_carpal_distal_phalanx_3"));
SoHAnimSegment1847->setDEF(QString("hanim_l_carpal_distal_phalanx_3"));
SoHAnimSite* SoHAnimSite1848 = new SoHAnimSite();
SoHAnimSite1848->X3DNode::setName(QString("l_carpal_distal_phalanx_3"));
SoHAnimSite1848->setDEF(QString("hanim_l_carpal_distal_phalanx_3_tip"));
SoHAnimSite1848->setTranslation(new float[]{0.172,0.555,-0.006});
SoTouchSensor* SoTouchSensor1849 = new SoTouchSensor();
SoTouchSensor1849->setDescription(QString("HAnimSite 103 hanim_l_carpal_distal_phalanx_3_tip"));
SoHAnimSite1848->addChild(*SoTouchSensor1849);

SoShape* SoShape1850 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1851 = new SoVRMLAppearance();
SoMaterial* SoMaterial1852 = new SoMaterial();
SoMaterial1852->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1851->addChild(*SoMaterial1852);

SoShape1850->addChild(*SoVRMLAppearance1851);

SoIndexedFaceSet* SoIndexedFaceSet1853 = new SoIndexedFaceSet();
SoIndexedFaceSet1853->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1853->setCreaseAngle(0.5);
SoIndexedFaceSet1853->setSolid(false);
SoColorRGBA* SoColorRGBA1854 = new SoColorRGBA();
SoColorRGBA1854->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1853->addChild(*SoColorRGBA1854);

SoCoordinate* SoCoordinate1855 = new SoCoordinate();
SoCoordinate1855->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1853->setCoord(*SoCoordinate1855);

SoShape1850->setGeometry(*SoIndexedFaceSet1853);

SoHAnimSite1848->addChild(*SoShape1850);

SoBillboard* SoBillboard1856 = new SoBillboard();
SoBillboard1856->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1857 = new SoShape();
SoText* SoText1858 = new SoText();
SoText1858->setString(new QString[]{QString("103")}, 1);
SoFontStyle* SoFontStyle1859 = new SoFontStyle();
SoFontStyle1859->setSize(0.035);
SoText1858->setFontStyle(*SoFontStyle1859);

SoShape1857->setGeometry(*SoText1858);

SoBillboard1856->addChild(*SoShape1857);

SoHAnimSite1848->addChild(SoBillboard1856);

SoHAnimSegment1847->addChild(*SoHAnimSite1848);

SoShape* SoShape1860 = new SoShape();
SoLineSet* SoLineSet1861 = new SoLineSet();
SoLineSet1861->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1862 = new SoColorRGBA();
SoColorRGBA1862->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1861->addChild(*SoColorRGBA1862);

SoCoordinate* SoCoordinate1863 = new SoCoordinate();
SoCoordinate1863->setPoint(new float[]{0.1807,0.5753,-0.0037,0.18171,0.6032,-0.0035}, 6);
SoLineSet1861->setCoord(*SoCoordinate1863);

SoShape1860->setGeometry(*SoLineSet1861);

SoHAnimSegment1847->addChild(*SoShape1860);

SoHAnimJoint1846->addChildren(*SoHAnimSegment1847);

SoHAnimJoint1840->addChildren(*SoHAnimJoint1846);

SoHAnimJoint1834->addChildren(*SoHAnimJoint1840);

SoHAnimJoint1816->addChildren(*SoHAnimJoint1834);

SoHAnimJoint1810->addChildren(*SoHAnimJoint1816);

SoHAnimJoint1690->addChildren(*SoHAnimJoint1810);

SoHAnimJoint* SoHAnimJoint1864 = new SoHAnimJoint();
SoHAnimJoint1864->X3DNode::setName(QString("l_midcarpal_4_5"));
SoHAnimJoint1864->setDEF(QString("hanim_l_midcarpal_4_5"));
SoHAnimJoint1864->setCenter(new float[]{0.18108,0.70582,-0.02574});
SoHAnimJoint1864->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1864->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1865 = new SoHAnimSegment();
SoHAnimSegment1865->X3DNode::setName(QString("l_hamate"));
SoHAnimSegment1865->setDEF(QString("hanim_l_hamate"));
SoShape* SoShape1866 = new SoShape();
SoLineSet* SoLineSet1867 = new SoLineSet();
SoLineSet1867->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1868 = new SoColorRGBA();
SoColorRGBA1868->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1867->addChild(*SoColorRGBA1868);

SoCoordinate* SoCoordinate1869 = new SoCoordinate();
SoCoordinate1869->setPoint(new float[]{0.18108,0.70582,-0.02574,0.1819,0.72427,-0.005}, 6);
SoLineSet1867->setCoord(*SoCoordinate1869);

SoShape1866->setGeometry(*SoLineSet1867);

SoHAnimSegment1865->addChild(*SoShape1866);

SoHAnimJoint1864->addChildren(*SoHAnimSegment1865);

SoHAnimJoint* SoHAnimJoint1870 = new SoHAnimJoint();
SoHAnimJoint1870->X3DNode::setName(QString("l_carpometacarpal_4"));
SoHAnimJoint1870->setDEF(QString("hanim_l_carpometacarpal_4"));
SoHAnimJoint1870->setCenter(new float[]{0.1811,0.68625,-0.0199});
SoHAnimJoint1870->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1870->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1871 = new SoHAnimSegment();
SoHAnimSegment1871->X3DNode::setName(QString("l_metacarpal_4"));
SoHAnimSegment1871->setDEF(QString("hanim_l_metacarpal_4"));
SoShape* SoShape1872 = new SoShape();
SoLineSet* SoLineSet1873 = new SoLineSet();
SoLineSet1873->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1874 = new SoColorRGBA();
SoColorRGBA1874->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1873->addChild(*SoColorRGBA1874);

SoCoordinate* SoCoordinate1875 = new SoCoordinate();
SoCoordinate1875->setPoint(new float[]{0.1811,0.68625,-0.0199,0.18108,0.70582,-0.02574}, 6);
SoLineSet1873->setCoord(*SoCoordinate1875);

SoShape1872->setGeometry(*SoLineSet1873);

SoHAnimSegment1871->addChild(*SoShape1872);

SoHAnimJoint1870->addChildren(*SoHAnimSegment1871);

SoHAnimJoint* SoHAnimJoint1876 = new SoHAnimJoint();
SoHAnimJoint1876->X3DNode::setName(QString("l_metacarpophalangeal_4"));
SoHAnimJoint1876->setDEF(QString("hanim_l_metacarpophalangeal_4"));
SoHAnimJoint1876->setCenter(new float[]{0.18369,0.63405,-0.02144});
SoHAnimJoint1876->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1876->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1877 = new SoHAnimSegment();
SoHAnimSegment1877->X3DNode::setName(QString("l_carpal_proximal_phalanx_4"));
SoHAnimSegment1877->setDEF(QString("hanim_l_carpal_proximal_phalanx_4"));
SoShape* SoShape1878 = new SoShape();
SoLineSet* SoLineSet1879 = new SoLineSet();
SoLineSet1879->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1880 = new SoColorRGBA();
SoColorRGBA1880->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1879->addChild(*SoColorRGBA1880);

SoCoordinate* SoCoordinate1881 = new SoCoordinate();
SoCoordinate1881->setPoint(new float[]{0.18369,0.63405,-0.02144,0.1811,0.68625,-0.0199}, 6);
SoLineSet1879->setCoord(*SoCoordinate1881);

SoShape1878->setGeometry(*SoLineSet1879);

SoHAnimSegment1877->addChild(*SoShape1878);

SoHAnimJoint1876->addChildren(*SoHAnimSegment1877);

SoHAnimJoint* SoHAnimJoint1882 = new SoHAnimJoint();
SoHAnimJoint1882->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint1882->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint1882->setCenter(new float[]{0.1817,0.6066,-0.02064});
SoHAnimJoint1882->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1882->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1883 = new SoHAnimSegment();
SoHAnimSegment1883->X3DNode::setName(QString("l_carpal_middle_phalanx_4"));
SoHAnimSegment1883->setDEF(QString("hanim_l_carpal_middle_phalanx_4"));
SoShape* SoShape1884 = new SoShape();
SoLineSet* SoLineSet1885 = new SoLineSet();
SoLineSet1885->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1886 = new SoColorRGBA();
SoColorRGBA1886->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1885->addChild(*SoColorRGBA1886);

SoCoordinate* SoCoordinate1887 = new SoCoordinate();
SoCoordinate1887->setPoint(new float[]{0.1817,0.6066,-0.02064,0.18369,0.63405,-0.02144}, 6);
SoLineSet1885->setCoord(*SoCoordinate1887);

SoShape1884->setGeometry(*SoLineSet1885);

SoHAnimSegment1883->addChild(*SoShape1884);

SoHAnimJoint1882->addChildren(*SoHAnimSegment1883);

SoHAnimJoint* SoHAnimJoint1888 = new SoHAnimJoint();
SoHAnimJoint1888->X3DNode::setName(QString("l_carpal_distal_interphalangeal_4"));
SoHAnimJoint1888->setDEF(QString("hanim_l_carpal_distal_interphalangeal_4"));
SoHAnimJoint1888->setCenter(new float[]{0.18067,0.580725,-0.01977});
SoHAnimJoint1888->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1888->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1889 = new SoHAnimSegment();
SoHAnimSegment1889->X3DNode::setName(QString("l_carpal_distal_phalanx_4"));
SoHAnimSegment1889->setDEF(QString("hanim_l_carpal_distal_phalanx_4"));
SoHAnimSite* SoHAnimSite1890 = new SoHAnimSite();
SoHAnimSite1890->X3DNode::setName(QString("l_carpal_distal_phalanx_4"));
SoHAnimSite1890->setDEF(QString("hanim_l_carpal_distal_phalanx_4_tip"));
SoHAnimSite1890->setTranslation(new float[]{0.172,0.559,-0.024});
SoTouchSensor* SoTouchSensor1891 = new SoTouchSensor();
SoTouchSensor1891->setDescription(QString("HAnimSite 104 hanim_l_carpal_distal_phalanx_4_tip"));
SoHAnimSite1890->addChild(*SoTouchSensor1891);

SoShape* SoShape1892 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1893 = new SoVRMLAppearance();
SoMaterial* SoMaterial1894 = new SoMaterial();
SoMaterial1894->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1893->addChild(*SoMaterial1894);

SoShape1892->addChild(*SoVRMLAppearance1893);

SoIndexedFaceSet* SoIndexedFaceSet1895 = new SoIndexedFaceSet();
SoIndexedFaceSet1895->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1895->setCreaseAngle(0.5);
SoIndexedFaceSet1895->setSolid(false);
SoColorRGBA* SoColorRGBA1896 = new SoColorRGBA();
SoColorRGBA1896->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1895->addChild(*SoColorRGBA1896);

SoCoordinate* SoCoordinate1897 = new SoCoordinate();
SoCoordinate1897->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1895->setCoord(*SoCoordinate1897);

SoShape1892->setGeometry(*SoIndexedFaceSet1895);

SoHAnimSite1890->addChild(*SoShape1892);

SoBillboard* SoBillboard1898 = new SoBillboard();
SoBillboard1898->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1899 = new SoShape();
SoText* SoText1900 = new SoText();
SoText1900->setString(new QString[]{QString("104")}, 1);
SoFontStyle* SoFontStyle1901 = new SoFontStyle();
SoFontStyle1901->setSize(0.035);
SoText1900->setFontStyle(*SoFontStyle1901);

SoShape1899->setGeometry(*SoText1900);

SoBillboard1898->addChild(*SoShape1899);

SoHAnimSite1890->addChild(SoBillboard1898);

SoHAnimSegment1889->addChild(*SoHAnimSite1890);

SoShape* SoShape1902 = new SoShape();
SoLineSet* SoLineSet1903 = new SoLineSet();
SoLineSet1903->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1904 = new SoColorRGBA();
SoColorRGBA1904->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1903->addChild(*SoColorRGBA1904);

SoCoordinate* SoCoordinate1905 = new SoCoordinate();
SoCoordinate1905->setPoint(new float[]{0.18067,0.580725,-0.01977,0.1817,0.6066,-0.02064}, 6);
SoLineSet1903->setCoord(*SoCoordinate1905);

SoShape1902->setGeometry(*SoLineSet1903);

SoHAnimSegment1889->addChild(*SoShape1902);

SoHAnimJoint1888->addChildren(*SoHAnimSegment1889);

SoHAnimJoint1882->addChildren(*SoHAnimJoint1888);

SoHAnimJoint1876->addChildren(*SoHAnimJoint1882);

SoHAnimJoint1870->addChildren(*SoHAnimJoint1876);

SoHAnimJoint1864->addChildren(*SoHAnimJoint1870);

SoHAnimJoint1690->addChildren(*SoHAnimJoint1864);

SoHAnimJoint* SoHAnimJoint1906 = new SoHAnimJoint();
SoHAnimJoint1906->X3DNode::setName(QString("l_carpometacarpal_5"));
SoHAnimJoint1906->setDEF(QString("hanim_l_carpometacarpal_5"));
SoHAnimJoint1906->setCenter(new float[]{0.18164,0.68827,-0.03278});
SoHAnimJoint1906->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1906->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1907 = new SoHAnimSegment();
SoHAnimSegment1907->X3DNode::setName(QString("l_metacarpal_5"));
SoHAnimSegment1907->setDEF(QString("hanim_l_metacarpal_5"));
SoHAnimSite* SoHAnimSite1908 = new SoHAnimSite();
SoHAnimSite1908->X3DNode::setName(QString("l_metacarpal_phalanx_5"));
SoHAnimSite1908->setDEF(QString("hanim_l_metacarpal_phalanx_5_pt"));
SoHAnimSite1908->setTranslation(new float[]{0.2,0.665,-0.036});
SoTouchSensor* SoTouchSensor1909 = new SoTouchSensor();
SoTouchSensor1909->setDescription(QString("HAnimSite 77 hanim_l_metacarpal_phalanx_5_pt"));
SoHAnimSite1908->addChild(*SoTouchSensor1909);

SoShape* SoShape1910 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1911 = new SoVRMLAppearance();
SoMaterial* SoMaterial1912 = new SoMaterial();
SoMaterial1912->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1911->addChild(*SoMaterial1912);

SoShape1910->addChild(*SoVRMLAppearance1911);

SoIndexedFaceSet* SoIndexedFaceSet1913 = new SoIndexedFaceSet();
SoIndexedFaceSet1913->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1913->setCreaseAngle(0.5);
SoIndexedFaceSet1913->setSolid(false);
SoColorRGBA* SoColorRGBA1914 = new SoColorRGBA();
SoColorRGBA1914->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1913->addChild(*SoColorRGBA1914);

SoCoordinate* SoCoordinate1915 = new SoCoordinate();
SoCoordinate1915->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1913->setCoord(*SoCoordinate1915);

SoShape1910->setGeometry(*SoIndexedFaceSet1913);

SoHAnimSite1908->addChild(*SoShape1910);

SoBillboard* SoBillboard1916 = new SoBillboard();
SoBillboard1916->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1917 = new SoShape();
SoText* SoText1918 = new SoText();
SoText1918->setString(new QString[]{QString("77")}, 1);
SoFontStyle* SoFontStyle1919 = new SoFontStyle();
SoFontStyle1919->setSize(0.035);
SoText1918->setFontStyle(*SoFontStyle1919);

SoShape1917->setGeometry(*SoText1918);

SoBillboard1916->addChild(*SoShape1917);

SoHAnimSite1908->addChild(SoBillboard1916);

SoHAnimSegment1907->addChild(*SoHAnimSite1908);

SoShape* SoShape1920 = new SoShape();
SoLineSet* SoLineSet1921 = new SoLineSet();
SoLineSet1921->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1922 = new SoColorRGBA();
SoColorRGBA1922->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1921->addChild(*SoColorRGBA1922);

SoCoordinate* SoCoordinate1923 = new SoCoordinate();
SoCoordinate1923->setPoint(new float[]{0.18164,0.68827,-0.03278,0.1819,0.72427,-0.005}, 6);
SoLineSet1921->setCoord(*SoCoordinate1923);

SoShape1920->setGeometry(*SoLineSet1921);

SoHAnimSegment1907->addChild(*SoShape1920);

SoHAnimJoint1906->addChildren(*SoHAnimSegment1907);

SoHAnimJoint* SoHAnimJoint1924 = new SoHAnimJoint();
SoHAnimJoint1924->X3DNode::setName(QString("l_metacarpophalangeal_5"));
SoHAnimJoint1924->setDEF(QString("hanim_l_metacarpophalangeal_5"));
SoHAnimJoint1924->setCenter(new float[]{0.1833,0.6381,-0.037});
SoHAnimJoint1924->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1924->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1925 = new SoHAnimSegment();
SoHAnimSegment1925->X3DNode::setName(QString("l_carpal_proximal_phalanx_5"));
SoHAnimSegment1925->setDEF(QString("hanim_l_carpal_proximal_phalanx_5"));
SoShape* SoShape1926 = new SoShape();
SoLineSet* SoLineSet1927 = new SoLineSet();
SoLineSet1927->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1928 = new SoColorRGBA();
SoColorRGBA1928->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1927->addChild(*SoColorRGBA1928);

SoCoordinate* SoCoordinate1929 = new SoCoordinate();
SoCoordinate1929->setPoint(new float[]{0.1833,0.6381,-0.037,0.18164,0.68827,-0.03278}, 6);
SoLineSet1927->setCoord(*SoCoordinate1929);

SoShape1926->setGeometry(*SoLineSet1927);

SoHAnimSegment1925->addChild(*SoShape1926);

SoHAnimJoint1924->addChildren(*SoHAnimSegment1925);

SoHAnimJoint* SoHAnimJoint1930 = new SoHAnimJoint();
SoHAnimJoint1930->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint1930->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint1930->setCenter(new float[]{0.18166,0.621,-0.03715});
SoHAnimJoint1930->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1930->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1931 = new SoHAnimSegment();
SoHAnimSegment1931->X3DNode::setName(QString("l_carpal_middle_phalanx_5"));
SoHAnimSegment1931->setDEF(QString("hanim_l_carpal_middle_phalanx_5"));
SoShape* SoShape1932 = new SoShape();
SoLineSet* SoLineSet1933 = new SoLineSet();
SoLineSet1933->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1934 = new SoColorRGBA();
SoColorRGBA1934->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1933->addChild(*SoColorRGBA1934);

SoCoordinate* SoCoordinate1935 = new SoCoordinate();
SoCoordinate1935->setPoint(new float[]{0.18166,0.621,-0.03715,0.1833,0.6381,-0.037}, 6);
SoLineSet1933->setCoord(*SoCoordinate1935);

SoShape1932->setGeometry(*SoLineSet1933);

SoHAnimSegment1931->addChild(*SoShape1932);

SoHAnimJoint1930->addChildren(*SoHAnimSegment1931);

SoHAnimJoint* SoHAnimJoint1936 = new SoHAnimJoint();
SoHAnimJoint1936->X3DNode::setName(QString("l_carpal_distal_interphalangeal_5"));
SoHAnimJoint1936->setDEF(QString("hanim_l_carpal_distal_interphalangeal_5"));
SoHAnimJoint1936->setCenter(new float[]{0.1808,0.6023,-0.0369});
SoHAnimJoint1936->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1936->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1937 = new SoHAnimSegment();
SoHAnimSegment1937->X3DNode::setName(QString("l_carpal_distal_phalanx_5"));
SoHAnimSegment1937->setDEF(QString("hanim_l_carpal_distal_phalanx_5"));
SoHAnimSite* SoHAnimSite1938 = new SoHAnimSite();
SoHAnimSite1938->X3DNode::setName(QString("l_carpal_distal_phalanx_5"));
SoHAnimSite1938->setDEF(QString("hanim_l_carpal_distal_phalanx_5_tip"));
SoHAnimSite1938->setTranslation(new float[]{0.172,0.58,-0.039});
SoTouchSensor* SoTouchSensor1939 = new SoTouchSensor();
SoTouchSensor1939->setDescription(QString("HAnimSite 105 hanim_l_carpal_distal_phalanx_5_tip"));
SoHAnimSite1938->addChild(*SoTouchSensor1939);

SoShape* SoShape1940 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1941 = new SoVRMLAppearance();
SoMaterial* SoMaterial1942 = new SoMaterial();
SoMaterial1942->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1941->addChild(*SoMaterial1942);

SoShape1940->addChild(*SoVRMLAppearance1941);

SoIndexedFaceSet* SoIndexedFaceSet1943 = new SoIndexedFaceSet();
SoIndexedFaceSet1943->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1943->setCreaseAngle(0.5);
SoIndexedFaceSet1943->setSolid(false);
SoColorRGBA* SoColorRGBA1944 = new SoColorRGBA();
SoColorRGBA1944->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1943->addChild(*SoColorRGBA1944);

SoCoordinate* SoCoordinate1945 = new SoCoordinate();
SoCoordinate1945->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1943->setCoord(*SoCoordinate1945);

SoShape1940->setGeometry(*SoIndexedFaceSet1943);

SoHAnimSite1938->addChild(*SoShape1940);

SoBillboard* SoBillboard1946 = new SoBillboard();
SoBillboard1946->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1947 = new SoShape();
SoText* SoText1948 = new SoText();
SoText1948->setString(new QString[]{QString("105")}, 1);
SoFontStyle* SoFontStyle1949 = new SoFontStyle();
SoFontStyle1949->setSize(0.035);
SoText1948->setFontStyle(*SoFontStyle1949);

SoShape1947->setGeometry(*SoText1948);

SoBillboard1946->addChild(*SoShape1947);

SoHAnimSite1938->addChild(SoBillboard1946);

SoHAnimSegment1937->addChild(*SoHAnimSite1938);

SoShape* SoShape1950 = new SoShape();
SoLineSet* SoLineSet1951 = new SoLineSet();
SoLineSet1951->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1952 = new SoColorRGBA();
SoColorRGBA1952->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1951->addChild(*SoColorRGBA1952);

SoCoordinate* SoCoordinate1953 = new SoCoordinate();
SoCoordinate1953->setPoint(new float[]{0.1808,0.6023,-0.0369,0.18166,0.621,-0.03715}, 6);
SoLineSet1951->setCoord(*SoCoordinate1953);

SoShape1950->setGeometry(*SoLineSet1951);

SoHAnimSegment1937->addChild(*SoShape1950);

SoHAnimJoint1936->addChildren(*SoHAnimSegment1937);

SoHAnimJoint1930->addChildren(*SoHAnimJoint1936);

SoHAnimJoint1924->addChildren(*SoHAnimJoint1930);

SoHAnimJoint1906->addChildren(*SoHAnimJoint1924);

SoHAnimJoint1690->addChildren(*SoHAnimJoint1906);

SoHAnimJoint1660->addChildren(*SoHAnimJoint1690);

SoHAnimJoint1606->addChildren(*SoHAnimJoint1660);

SoHAnimJoint1552->addChildren(*SoHAnimJoint1606);

SoHAnimJoint1534->addChildren(*SoHAnimJoint1552);

SoHAnimJoint1126->addChildren(*SoHAnimJoint1534);

SoHAnimJoint* SoHAnimJoint1954 = new SoHAnimJoint();
SoHAnimJoint1954->X3DNode::setName(QString("r_sternoclavicular"));
SoHAnimJoint1954->setDEF(QString("hanim_r_sternoclavicular"));
SoHAnimJoint1954->setCenter(new float[]{-0.03847,1.2087,-0.0138});
SoHAnimJoint1954->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1954->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1955 = new SoHAnimSegment();
SoHAnimSegment1955->X3DNode::setName(QString("r_clavicle"));
SoHAnimSegment1955->setDEF(QString("hanim_r_clavicle"));
SoHAnimSite* SoHAnimSite1956 = new SoHAnimSite();
SoHAnimSite1956->X3DNode::setName(QString("r_clavicale"));
SoHAnimSite1956->setDEF(QString("hanim_r_clavicale_pt"));
SoHAnimSite1956->setTranslation(new float[]{-0.03,1.2,0.04});
SoTouchSensor* SoTouchSensor1957 = new SoTouchSensor();
SoTouchSensor1957->setDescription(QString("HAnimSite r_clavicale hanim_r_clavicale_pt"));
SoHAnimSite1956->addChild(*SoTouchSensor1957);

SoShape* SoShape1958 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1959 = new SoVRMLAppearance();
SoMaterial* SoMaterial1960 = new SoMaterial();
SoMaterial1960->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1959->addChild(*SoMaterial1960);

SoShape1958->addChild(*SoVRMLAppearance1959);

SoIndexedFaceSet* SoIndexedFaceSet1961 = new SoIndexedFaceSet();
SoIndexedFaceSet1961->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1961->setCreaseAngle(0.5);
SoIndexedFaceSet1961->setSolid(false);
SoColorRGBA* SoColorRGBA1962 = new SoColorRGBA();
SoColorRGBA1962->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1961->addChild(*SoColorRGBA1962);

SoCoordinate* SoCoordinate1963 = new SoCoordinate();
SoCoordinate1963->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1961->setCoord(*SoCoordinate1963);

SoShape1958->setGeometry(*SoIndexedFaceSet1961);

SoHAnimSite1956->addChild(*SoShape1958);

SoBillboard* SoBillboard1964 = new SoBillboard();
SoBillboard1964->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1965 = new SoShape();
SoText* SoText1966 = new SoText();
SoText1966->setString(new QString[]{QString("r_clavicale")}, 1);
SoFontStyle* SoFontStyle1967 = new SoFontStyle();
SoFontStyle1967->setSize(0.035);
SoText1966->setFontStyle(*SoFontStyle1967);

SoShape1965->setGeometry(*SoText1966);

SoBillboard1964->addChild(*SoShape1965);

SoHAnimSite1956->addChild(SoBillboard1964);

SoHAnimSegment1955->addChild(*SoHAnimSite1956);

SoShape* SoShape1968 = new SoShape();
SoLineSet* SoLineSet1969 = new SoLineSet();
SoLineSet1969->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1970 = new SoColorRGBA();
SoColorRGBA1970->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet1969->addChild(*SoColorRGBA1970);

SoCoordinate* SoCoordinate1971 = new SoCoordinate();
SoCoordinate1971->setPoint(new float[]{-0.03847,1.2087,-0.0138,0.0,1.22,-0.0138}, 6);
SoLineSet1969->setCoord(*SoCoordinate1971);

SoShape1968->setGeometry(*SoLineSet1969);

SoHAnimSegment1955->addChild(*SoShape1968);

SoHAnimJoint1954->addChildren(*SoHAnimSegment1955);

SoHAnimJoint* SoHAnimJoint1972 = new SoHAnimJoint();
SoHAnimJoint1972->X3DNode::setName(QString("r_acromioclavicular"));
SoHAnimJoint1972->setDEF(QString("hanim_r_acromioclavicular"));
SoHAnimJoint1972->setCenter(new float[]{-0.1229,1.19182,-0.0129});
SoHAnimJoint1972->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1972->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1973 = new SoHAnimSegment();
SoHAnimSegment1973->X3DNode::setName(QString("r_scapula"));
SoHAnimSegment1973->setDEF(QString("hanim_r_scapula"));
SoHAnimSite* SoHAnimSite1974 = new SoHAnimSite();
SoHAnimSite1974->X3DNode::setName(QString("r_acromion"));
SoHAnimSite1974->setDEF(QString("hanim_r_acromion_pt"));
SoHAnimSite1974->setTranslation(new float[]{-0.15,1.222,-0.02});
SoTouchSensor* SoTouchSensor1975 = new SoTouchSensor();
SoTouchSensor1975->setDescription(QString("HAnimSite 20 hanim_r_acromion_pt"));
SoHAnimSite1974->addChild(*SoTouchSensor1975);

SoShape* SoShape1976 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1977 = new SoVRMLAppearance();
SoMaterial* SoMaterial1978 = new SoMaterial();
SoMaterial1978->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1977->addChild(*SoMaterial1978);

SoShape1976->addChild(*SoVRMLAppearance1977);

SoIndexedFaceSet* SoIndexedFaceSet1979 = new SoIndexedFaceSet();
SoIndexedFaceSet1979->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1979->setCreaseAngle(0.5);
SoIndexedFaceSet1979->setSolid(false);
SoColorRGBA* SoColorRGBA1980 = new SoColorRGBA();
SoColorRGBA1980->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1979->addChild(*SoColorRGBA1980);

SoCoordinate* SoCoordinate1981 = new SoCoordinate();
SoCoordinate1981->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1979->setCoord(*SoCoordinate1981);

SoShape1976->setGeometry(*SoIndexedFaceSet1979);

SoHAnimSite1974->addChild(*SoShape1976);

SoBillboard* SoBillboard1982 = new SoBillboard();
SoBillboard1982->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1983 = new SoShape();
SoText* SoText1984 = new SoText();
SoText1984->setString(new QString[]{QString("20")}, 1);
SoFontStyle* SoFontStyle1985 = new SoFontStyle();
SoFontStyle1985->setSize(0.035);
SoText1984->setFontStyle(*SoFontStyle1985);

SoShape1983->setGeometry(*SoText1984);

SoBillboard1982->addChild(*SoShape1983);

SoHAnimSite1974->addChild(SoBillboard1982);

SoHAnimSegment1973->addChild(*SoHAnimSite1974);

SoHAnimSite* SoHAnimSite1986 = new SoHAnimSite();
SoHAnimSite1986->X3DNode::setName(QString("r_axilla_proximal"));
SoHAnimSite1986->setDEF(QString("hanim_r_axilla_proximal_pt"));
SoHAnimSite1986->setTranslation(new float[]{-0.15,1.16,0.04});
SoTouchSensor* SoTouchSensor1987 = new SoTouchSensor();
SoTouchSensor1987->setDescription(QString("HAnimSite 21 hanim_r_axilla_proximal_pt"));
SoHAnimSite1986->addChild(*SoTouchSensor1987);

SoShape* SoShape1988 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1989 = new SoVRMLAppearance();
SoMaterial* SoMaterial1990 = new SoMaterial();
SoMaterial1990->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance1989->addChild(*SoMaterial1990);

SoShape1988->addChild(*SoVRMLAppearance1989);

SoIndexedFaceSet* SoIndexedFaceSet1991 = new SoIndexedFaceSet();
SoIndexedFaceSet1991->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet1991->setCreaseAngle(0.5);
SoIndexedFaceSet1991->setSolid(false);
SoColorRGBA* SoColorRGBA1992 = new SoColorRGBA();
SoColorRGBA1992->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet1991->addChild(*SoColorRGBA1992);

SoCoordinate* SoCoordinate1993 = new SoCoordinate();
SoCoordinate1993->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet1991->setCoord(*SoCoordinate1993);

SoShape1988->setGeometry(*SoIndexedFaceSet1991);

SoHAnimSite1986->addChild(*SoShape1988);

SoBillboard* SoBillboard1994 = new SoBillboard();
SoBillboard1994->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape1995 = new SoShape();
SoText* SoText1996 = new SoText();
SoText1996->setString(new QString[]{QString("21")}, 1);
SoFontStyle* SoFontStyle1997 = new SoFontStyle();
SoFontStyle1997->setSize(0.035);
SoText1996->setFontStyle(*SoFontStyle1997);

SoShape1995->setGeometry(*SoText1996);

SoBillboard1994->addChild(*SoShape1995);

SoHAnimSite1986->addChild(SoBillboard1994);

SoHAnimSegment1973->addChild(*SoHAnimSite1986);

SoHAnimSite* SoHAnimSite1998 = new SoHAnimSite();
SoHAnimSite1998->X3DNode::setName(QString("r_axilla_distal"));
SoHAnimSite1998->setDEF(QString("hanim_r_axilla_distal_pt"));
SoHAnimSite1998->setTranslation(new float[]{-0.17,1.14,0.0});
SoTouchSensor* SoTouchSensor1999 = new SoTouchSensor();
SoTouchSensor1999->setDescription(QString("HAnimSite 22 hanim_r_axilla_distal_pt"));
SoHAnimSite1998->addChild(*SoTouchSensor1999);

SoShape* SoShape2000 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2001 = new SoVRMLAppearance();
SoMaterial* SoMaterial2002 = new SoMaterial();
SoMaterial2002->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance2001->addChild(*SoMaterial2002);

SoShape2000->addChild(*SoVRMLAppearance2001);

SoIndexedFaceSet* SoIndexedFaceSet2003 = new SoIndexedFaceSet();
SoIndexedFaceSet2003->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet2003->setCreaseAngle(0.5);
SoIndexedFaceSet2003->setSolid(false);
SoColorRGBA* SoColorRGBA2004 = new SoColorRGBA();
SoColorRGBA2004->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet2003->addChild(*SoColorRGBA2004);

SoCoordinate* SoCoordinate2005 = new SoCoordinate();
SoCoordinate2005->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet2003->setCoord(*SoCoordinate2005);

SoShape2000->setGeometry(*SoIndexedFaceSet2003);

SoHAnimSite1998->addChild(*SoShape2000);

SoBillboard* SoBillboard2006 = new SoBillboard();
SoBillboard2006->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape2007 = new SoShape();
SoText* SoText2008 = new SoText();
SoText2008->setString(new QString[]{QString("22")}, 1);
SoFontStyle* SoFontStyle2009 = new SoFontStyle();
SoFontStyle2009->setSize(0.035);
SoText2008->setFontStyle(*SoFontStyle2009);

SoShape2007->setGeometry(*SoText2008);

SoBillboard2006->addChild(*SoShape2007);

SoHAnimSite1998->addChild(SoBillboard2006);

SoHAnimSegment1973->addChild(*SoHAnimSite1998);

SoHAnimSite* SoHAnimSite2010 = new SoHAnimSite();
SoHAnimSite2010->X3DNode::setName(QString("r_axilla_posterior_folds"));
SoHAnimSite2010->setDEF(QString("hanim_r_axilla_posterior_folds_pt"));
SoHAnimSite2010->setTranslation(new float[]{-0.15,1.145,-0.04});
SoTouchSensor* SoTouchSensor2011 = new SoTouchSensor();
SoTouchSensor2011->setDescription(QString("HAnimSite 23 hanim_r_axilla_posterior_folds_pt"));
SoHAnimSite2010->addChild(*SoTouchSensor2011);

SoShape* SoShape2012 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2013 = new SoVRMLAppearance();
SoMaterial* SoMaterial2014 = new SoMaterial();
SoMaterial2014->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance2013->addChild(*SoMaterial2014);

SoShape2012->addChild(*SoVRMLAppearance2013);

SoIndexedFaceSet* SoIndexedFaceSet2015 = new SoIndexedFaceSet();
SoIndexedFaceSet2015->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet2015->setCreaseAngle(0.5);
SoIndexedFaceSet2015->setSolid(false);
SoColorRGBA* SoColorRGBA2016 = new SoColorRGBA();
SoColorRGBA2016->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet2015->addChild(*SoColorRGBA2016);

SoCoordinate* SoCoordinate2017 = new SoCoordinate();
SoCoordinate2017->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet2015->setCoord(*SoCoordinate2017);

SoShape2012->setGeometry(*SoIndexedFaceSet2015);

SoHAnimSite2010->addChild(*SoShape2012);

SoBillboard* SoBillboard2018 = new SoBillboard();
SoBillboard2018->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape2019 = new SoShape();
SoText* SoText2020 = new SoText();
SoText2020->setString(new QString[]{QString("23")}, 1);
SoFontStyle* SoFontStyle2021 = new SoFontStyle();
SoFontStyle2021->setSize(0.035);
SoText2020->setFontStyle(*SoFontStyle2021);

SoShape2019->setGeometry(*SoText2020);

SoBillboard2018->addChild(*SoShape2019);

SoHAnimSite2010->addChild(SoBillboard2018);

SoHAnimSegment1973->addChild(*SoHAnimSite2010);

SoShape* SoShape2022 = new SoShape();
SoLineSet* SoLineSet2023 = new SoLineSet();
SoLineSet2023->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2024 = new SoColorRGBA();
SoColorRGBA2024->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2023->addChild(*SoColorRGBA2024);

SoCoordinate* SoCoordinate2025 = new SoCoordinate();
SoCoordinate2025->setPoint(new float[]{-0.1229,1.19182,-0.0129,-0.03847,1.2087,-0.0138}, 6);
SoLineSet2023->setCoord(*SoCoordinate2025);

SoShape2022->setGeometry(*SoLineSet2023);

SoHAnimSegment1973->addChild(*SoShape2022);

SoHAnimJoint1972->addChildren(*SoHAnimSegment1973);

SoHAnimJoint* SoHAnimJoint2026 = new SoHAnimJoint();
SoHAnimJoint2026->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint2026->setDEF(QString("hanim_r_shoulder"));
SoHAnimJoint2026->setCenter(new float[]{-0.1647,1.17855,-0.00327});
SoHAnimJoint2026->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2026->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2027 = new SoHAnimSegment();
SoHAnimSegment2027->X3DNode::setName(QString("r_upperarm"));
SoHAnimSegment2027->setDEF(QString("hanim_r_upperarm"));
SoHAnimSite* SoHAnimSite2028 = new SoHAnimSite();
SoHAnimSite2028->X3DNode::setName(QString("r_humeral_lateral_epicondyle"));
SoHAnimSite2028->setDEF(QString("hanim_r_humeral_lateral_epicondyle_pt"));
SoHAnimSite2028->setTranslation(new float[]{-0.2,0.95,-0.03});
SoTouchSensor* SoTouchSensor2029 = new SoTouchSensor();
SoTouchSensor2029->setDescription(QString("HAnimSite 66 hanim_r_humeral_lateral_epicondyle_pt"));
SoHAnimSite2028->addChild(*SoTouchSensor2029);

SoShape* SoShape2030 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2031 = new SoVRMLAppearance();
SoMaterial* SoMaterial2032 = new SoMaterial();
SoMaterial2032->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance2031->addChild(*SoMaterial2032);

SoShape2030->addChild(*SoVRMLAppearance2031);

SoIndexedFaceSet* SoIndexedFaceSet2033 = new SoIndexedFaceSet();
SoIndexedFaceSet2033->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet2033->setCreaseAngle(0.5);
SoIndexedFaceSet2033->setSolid(false);
SoColorRGBA* SoColorRGBA2034 = new SoColorRGBA();
SoColorRGBA2034->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet2033->addChild(*SoColorRGBA2034);

SoCoordinate* SoCoordinate2035 = new SoCoordinate();
SoCoordinate2035->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet2033->setCoord(*SoCoordinate2035);

SoShape2030->setGeometry(*SoIndexedFaceSet2033);

SoHAnimSite2028->addChild(*SoShape2030);

SoBillboard* SoBillboard2036 = new SoBillboard();
SoBillboard2036->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape2037 = new SoShape();
SoText* SoText2038 = new SoText();
SoText2038->setString(new QString[]{QString("66")}, 1);
SoFontStyle* SoFontStyle2039 = new SoFontStyle();
SoFontStyle2039->setSize(0.035);
SoText2038->setFontStyle(*SoFontStyle2039);

SoShape2037->setGeometry(*SoText2038);

SoBillboard2036->addChild(*SoShape2037);

SoHAnimSite2028->addChild(SoBillboard2036);

SoHAnimSegment2027->addChild(*SoHAnimSite2028);

SoHAnimSite* SoHAnimSite2040 = new SoHAnimSite();
SoHAnimSite2040->X3DNode::setName(QString("r_humeral_medial_epicondyle"));
SoHAnimSite2040->setDEF(QString("hanim_r_humeral_medial_epicondyle_pt"));
SoHAnimSite2040->setTranslation(new float[]{-0.18,0.93,-0.03});
SoTouchSensor* SoTouchSensor2041 = new SoTouchSensor();
SoTouchSensor2041->setDescription(QString("HAnimSite 67 hanim_r_humeral_medial_epicondyle_pt"));
SoHAnimSite2040->addChild(*SoTouchSensor2041);

SoShape* SoShape2042 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2043 = new SoVRMLAppearance();
SoMaterial* SoMaterial2044 = new SoMaterial();
SoMaterial2044->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance2043->addChild(*SoMaterial2044);

SoShape2042->addChild(*SoVRMLAppearance2043);

SoIndexedFaceSet* SoIndexedFaceSet2045 = new SoIndexedFaceSet();
SoIndexedFaceSet2045->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet2045->setCreaseAngle(0.5);
SoIndexedFaceSet2045->setSolid(false);
SoColorRGBA* SoColorRGBA2046 = new SoColorRGBA();
SoColorRGBA2046->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet2045->addChild(*SoColorRGBA2046);

SoCoordinate* SoCoordinate2047 = new SoCoordinate();
SoCoordinate2047->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet2045->setCoord(*SoCoordinate2047);

SoShape2042->setGeometry(*SoIndexedFaceSet2045);

SoHAnimSite2040->addChild(*SoShape2042);

SoBillboard* SoBillboard2048 = new SoBillboard();
SoBillboard2048->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape2049 = new SoShape();
SoText* SoText2050 = new SoText();
SoText2050->setString(new QString[]{QString("67")}, 1);
SoFontStyle* SoFontStyle2051 = new SoFontStyle();
SoFontStyle2051->setSize(0.035);
SoText2050->setFontStyle(*SoFontStyle2051);

SoShape2049->setGeometry(*SoText2050);

SoBillboard2048->addChild(*SoShape2049);

SoHAnimSite2040->addChild(SoBillboard2048);

SoHAnimSegment2027->addChild(*SoHAnimSite2040);

SoHAnimSite* SoHAnimSite2052 = new SoHAnimSite();
SoHAnimSite2052->X3DNode::setName(QString("r_radiale"));
SoHAnimSite2052->setDEF(QString("hanim_r_radiale_pt"));
SoHAnimSite2052->setTranslation(new float[]{-0.2,0.91,-0.03});
SoTouchSensor* SoTouchSensor2053 = new SoTouchSensor();
SoTouchSensor2053->setDescription(QString("HAnimSite 72 hanim_r_radiale_pt"));
SoHAnimSite2052->addChild(*SoTouchSensor2053);

SoShape* SoShape2054 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2055 = new SoVRMLAppearance();
SoMaterial* SoMaterial2056 = new SoMaterial();
SoMaterial2056->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance2055->addChild(*SoMaterial2056);

SoShape2054->addChild(*SoVRMLAppearance2055);

SoIndexedFaceSet* SoIndexedFaceSet2057 = new SoIndexedFaceSet();
SoIndexedFaceSet2057->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet2057->setCreaseAngle(0.5);
SoIndexedFaceSet2057->setSolid(false);
SoColorRGBA* SoColorRGBA2058 = new SoColorRGBA();
SoColorRGBA2058->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet2057->addChild(*SoColorRGBA2058);

SoCoordinate* SoCoordinate2059 = new SoCoordinate();
SoCoordinate2059->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet2057->setCoord(*SoCoordinate2059);

SoShape2054->setGeometry(*SoIndexedFaceSet2057);

SoHAnimSite2052->addChild(*SoShape2054);

SoBillboard* SoBillboard2060 = new SoBillboard();
SoBillboard2060->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape2061 = new SoShape();
SoText* SoText2062 = new SoText();
SoText2062->setString(new QString[]{QString("72")}, 1);
SoFontStyle* SoFontStyle2063 = new SoFontStyle();
SoFontStyle2063->setSize(0.035);
SoText2062->setFontStyle(*SoFontStyle2063);

SoShape2061->setGeometry(*SoText2062);

SoBillboard2060->addChild(*SoShape2061);

SoHAnimSite2052->addChild(SoBillboard2060);

SoHAnimSegment2027->addChild(*SoHAnimSite2052);

SoHAnimSite* SoHAnimSite2064 = new SoHAnimSite();
SoHAnimSite2064->X3DNode::setName(QString("r_bideltoid"));
SoHAnimSite2064->setDEF(QString("hanim_r_bideltoid_pt"));
SoHAnimSite2064->setTranslation(new float[]{-0.225,1.185,0.0});
SoTouchSensor* SoTouchSensor2065 = new SoTouchSensor();
SoTouchSensor2065->setDescription(QString("HAnimSite 97 hanim_r_bideltoid_pt"));
SoHAnimSite2064->addChild(*SoTouchSensor2065);

SoShape* SoShape2066 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2067 = new SoVRMLAppearance();
SoMaterial* SoMaterial2068 = new SoMaterial();
SoMaterial2068->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance2067->addChild(*SoMaterial2068);

SoShape2066->addChild(*SoVRMLAppearance2067);

SoIndexedFaceSet* SoIndexedFaceSet2069 = new SoIndexedFaceSet();
SoIndexedFaceSet2069->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet2069->setCreaseAngle(0.5);
SoIndexedFaceSet2069->setSolid(false);
SoColorRGBA* SoColorRGBA2070 = new SoColorRGBA();
SoColorRGBA2070->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet2069->addChild(*SoColorRGBA2070);

SoCoordinate* SoCoordinate2071 = new SoCoordinate();
SoCoordinate2071->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet2069->setCoord(*SoCoordinate2071);

SoShape2066->setGeometry(*SoIndexedFaceSet2069);

SoHAnimSite2064->addChild(*SoShape2066);

SoBillboard* SoBillboard2072 = new SoBillboard();
SoBillboard2072->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape2073 = new SoShape();
SoText* SoText2074 = new SoText();
SoText2074->setString(new QString[]{QString("97")}, 1);
SoFontStyle* SoFontStyle2075 = new SoFontStyle();
SoFontStyle2075->setSize(0.035);
SoText2074->setFontStyle(*SoFontStyle2075);

SoShape2073->setGeometry(*SoText2074);

SoBillboard2072->addChild(*SoShape2073);

SoHAnimSite2064->addChild(SoBillboard2072);

SoHAnimSegment2027->addChild(*SoHAnimSite2064);

SoShape* SoShape2076 = new SoShape();
SoLineSet* SoLineSet2077 = new SoLineSet();
SoLineSet2077->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2078 = new SoColorRGBA();
SoColorRGBA2078->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2077->addChild(*SoColorRGBA2078);

SoCoordinate* SoCoordinate2079 = new SoCoordinate();
SoCoordinate2079->setPoint(new float[]{-0.1647,1.17855,-0.00327,-0.1229,1.19182,-0.0129}, 6);
SoLineSet2077->setCoord(*SoCoordinate2079);

SoShape2076->setGeometry(*SoLineSet2077);

SoHAnimSegment2027->addChild(*SoShape2076);

SoHAnimJoint2026->addChildren(*SoHAnimSegment2027);

SoHAnimJoint* SoHAnimJoint2080 = new SoHAnimJoint();
SoHAnimJoint2080->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint2080->setDEF(QString("hanim_r_elbow"));
SoHAnimJoint2080->setCenter(new float[]{-0.1817,0.9288,-0.00564});
SoHAnimJoint2080->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2080->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2081 = new SoHAnimSegment();
SoHAnimSegment2081->X3DNode::setName(QString("r_forearm"));
SoHAnimSegment2081->setDEF(QString("hanim_r_forearm"));
SoHAnimSite* SoHAnimSite2082 = new SoHAnimSite();
SoHAnimSite2082->X3DNode::setName(QString("r_radial_styloid"));
SoHAnimSite2082->setDEF(QString("hanim_r_radial_styloid_pt"));
SoHAnimSite2082->setTranslation(new float[]{-0.18,0.725,0.025});
SoTouchSensor* SoTouchSensor2083 = new SoTouchSensor();
SoTouchSensor2083->setDescription(QString("HAnimSite 74 hanim_r_radial_styloid_pt"));
SoHAnimSite2082->addChild(*SoTouchSensor2083);

SoShape* SoShape2084 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2085 = new SoVRMLAppearance();
SoMaterial* SoMaterial2086 = new SoMaterial();
SoMaterial2086->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance2085->addChild(*SoMaterial2086);

SoShape2084->addChild(*SoVRMLAppearance2085);

SoIndexedFaceSet* SoIndexedFaceSet2087 = new SoIndexedFaceSet();
SoIndexedFaceSet2087->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet2087->setCreaseAngle(0.5);
SoIndexedFaceSet2087->setSolid(false);
SoColorRGBA* SoColorRGBA2088 = new SoColorRGBA();
SoColorRGBA2088->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet2087->addChild(*SoColorRGBA2088);

SoCoordinate* SoCoordinate2089 = new SoCoordinate();
SoCoordinate2089->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet2087->setCoord(*SoCoordinate2089);

SoShape2084->setGeometry(*SoIndexedFaceSet2087);

SoHAnimSite2082->addChild(*SoShape2084);

SoBillboard* SoBillboard2090 = new SoBillboard();
SoBillboard2090->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape2091 = new SoShape();
SoText* SoText2092 = new SoText();
SoText2092->setString(new QString[]{QString("74")}, 1);
SoFontStyle* SoFontStyle2093 = new SoFontStyle();
SoFontStyle2093->setSize(0.035);
SoText2092->setFontStyle(*SoFontStyle2093);

SoShape2091->setGeometry(*SoText2092);

SoBillboard2090->addChild(*SoShape2091);

SoHAnimSite2082->addChild(SoBillboard2090);

SoHAnimSegment2081->addChild(*SoHAnimSite2082);

SoHAnimSite* SoHAnimSite2094 = new SoHAnimSite();
SoHAnimSite2094->X3DNode::setName(QString("r_olecranon"));
SoHAnimSite2094->setDEF(QString("hanim_r_olecranon_pt"));
SoHAnimSite2094->setTranslation(new float[]{-0.2,0.92,-0.03});
SoTouchSensor* SoTouchSensor2095 = new SoTouchSensor();
SoTouchSensor2095->setDescription(QString("HAnimSite 68 hanim_r_olecranon_pt"));
SoHAnimSite2094->addChild(*SoTouchSensor2095);

SoShape* SoShape2096 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2097 = new SoVRMLAppearance();
SoMaterial* SoMaterial2098 = new SoMaterial();
SoMaterial2098->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance2097->addChild(*SoMaterial2098);

SoShape2096->addChild(*SoVRMLAppearance2097);

SoIndexedFaceSet* SoIndexedFaceSet2099 = new SoIndexedFaceSet();
SoIndexedFaceSet2099->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet2099->setCreaseAngle(0.5);
SoIndexedFaceSet2099->setSolid(false);
SoColorRGBA* SoColorRGBA2100 = new SoColorRGBA();
SoColorRGBA2100->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet2099->addChild(*SoColorRGBA2100);

SoCoordinate* SoCoordinate2101 = new SoCoordinate();
SoCoordinate2101->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet2099->setCoord(*SoCoordinate2101);

SoShape2096->setGeometry(*SoIndexedFaceSet2099);

SoHAnimSite2094->addChild(*SoShape2096);

SoBillboard* SoBillboard2102 = new SoBillboard();
SoBillboard2102->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape2103 = new SoShape();
SoText* SoText2104 = new SoText();
SoText2104->setString(new QString[]{QString("68")}, 1);
SoFontStyle* SoFontStyle2105 = new SoFontStyle();
SoFontStyle2105->setSize(0.035);
SoText2104->setFontStyle(*SoFontStyle2105);

SoShape2103->setGeometry(*SoText2104);

SoBillboard2102->addChild(*SoShape2103);

SoHAnimSite2094->addChild(SoBillboard2102);

SoHAnimSegment2081->addChild(*SoHAnimSite2094);

SoShape* SoShape2106 = new SoShape();
SoLineSet* SoLineSet2107 = new SoLineSet();
SoLineSet2107->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2108 = new SoColorRGBA();
SoColorRGBA2108->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2107->addChild(*SoColorRGBA2108);

SoCoordinate* SoCoordinate2109 = new SoCoordinate();
SoCoordinate2109->setPoint(new float[]{-0.1817,0.9288,-0.00564,-0.1647,1.17855,-0.00327}, 6);
SoLineSet2107->setCoord(*SoCoordinate2109);

SoShape2106->setGeometry(*SoLineSet2107);

SoHAnimSegment2081->addChild(*SoShape2106);

SoHAnimJoint2080->addChildren(*SoHAnimSegment2081);

SoHAnimJoint* SoHAnimJoint2110 = new SoHAnimJoint();
SoHAnimJoint2110->X3DNode::setName(QString("r_radiocarpal"));
SoHAnimJoint2110->setDEF(QString("hanim_r_radiocarpal"));
SoHAnimJoint2110->setCenter(new float[]{-0.1816,0.7242,-0.005});
SoHAnimJoint2110->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2110->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2111 = new SoHAnimSegment();
SoHAnimSegment2111->X3DNode::setName(QString("r_carpal"));
SoHAnimSegment2111->setDEF(QString("hanim_r_carpal"));
SoHAnimSite* SoHAnimSite2112 = new SoHAnimSite();
SoHAnimSite2112->X3DNode::setName(QString("r_ulnar_styloid"));
SoHAnimSite2112->setDEF(QString("hanim_r_ulnar_styloid_pt"));
SoHAnimSite2112->setTranslation(new float[]{-0.2,0.725,0.0});
SoTouchSensor* SoTouchSensor2113 = new SoTouchSensor();
SoTouchSensor2113->setDescription(QString("HAnimSite 73 hanim_r_ulnar_styloid_pt"));
SoHAnimSite2112->addChild(*SoTouchSensor2113);

SoShape* SoShape2114 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2115 = new SoVRMLAppearance();
SoMaterial* SoMaterial2116 = new SoMaterial();
SoMaterial2116->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance2115->addChild(*SoMaterial2116);

SoShape2114->addChild(*SoVRMLAppearance2115);

SoIndexedFaceSet* SoIndexedFaceSet2117 = new SoIndexedFaceSet();
SoIndexedFaceSet2117->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet2117->setCreaseAngle(0.5);
SoIndexedFaceSet2117->setSolid(false);
SoColorRGBA* SoColorRGBA2118 = new SoColorRGBA();
SoColorRGBA2118->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet2117->addChild(*SoColorRGBA2118);

SoCoordinate* SoCoordinate2119 = new SoCoordinate();
SoCoordinate2119->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet2117->setCoord(*SoCoordinate2119);

SoShape2114->setGeometry(*SoIndexedFaceSet2117);

SoHAnimSite2112->addChild(*SoShape2114);

SoBillboard* SoBillboard2120 = new SoBillboard();
SoBillboard2120->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape2121 = new SoShape();
SoText* SoText2122 = new SoText();
SoText2122->setString(new QString[]{QString("73")}, 1);
SoFontStyle* SoFontStyle2123 = new SoFontStyle();
SoFontStyle2123->setSize(0.035);
SoText2122->setFontStyle(*SoFontStyle2123);

SoShape2121->setGeometry(*SoText2122);

SoBillboard2120->addChild(*SoShape2121);

SoHAnimSite2112->addChild(SoBillboard2120);

SoHAnimSegment2111->addChild(*SoHAnimSite2112);

SoShape* SoShape2124 = new SoShape();
SoLineSet* SoLineSet2125 = new SoLineSet();
SoLineSet2125->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2126 = new SoColorRGBA();
SoColorRGBA2126->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2125->addChild(*SoColorRGBA2126);

SoCoordinate* SoCoordinate2127 = new SoCoordinate();
SoCoordinate2127->setPoint(new float[]{-0.1816,0.7242,-0.005,-0.1817,0.9288,-0.00564}, 6);
SoLineSet2125->setCoord(*SoCoordinate2127);

SoShape2124->setGeometry(*SoLineSet2125);

SoHAnimSegment2111->addChild(*SoShape2124);

SoHAnimJoint2110->addChildren(*SoHAnimSegment2111);

SoHAnimJoint* SoHAnimJoint2128 = new SoHAnimJoint();
SoHAnimJoint2128->X3DNode::setName(QString("r_midcarpal_1"));
SoHAnimJoint2128->setDEF(QString("hanim_r_midcarpal_1"));
SoHAnimJoint2128->setCenter(new float[]{-0.18097,0.70605,0.0193});
SoHAnimJoint2128->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2128->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2129 = new SoHAnimSegment();
SoHAnimSegment2129->X3DNode::setName(QString("r_trapezium"));
SoHAnimSegment2129->setDEF(QString("hanim_r_trapezium"));
SoShape* SoShape2130 = new SoShape();
SoLineSet* SoLineSet2131 = new SoLineSet();
SoLineSet2131->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2132 = new SoColorRGBA();
SoColorRGBA2132->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2131->addChild(*SoColorRGBA2132);

SoCoordinate* SoCoordinate2133 = new SoCoordinate();
SoCoordinate2133->setPoint(new float[]{-0.18097,0.70605,0.0193,-0.1816,0.7242,-0.005}, 6);
SoLineSet2131->setCoord(*SoCoordinate2133);

SoShape2130->setGeometry(*SoLineSet2131);

SoHAnimSegment2129->addChild(*SoShape2130);

SoHAnimJoint2128->addChildren(*SoHAnimSegment2129);

SoHAnimJoint* SoHAnimJoint2134 = new SoHAnimJoint();
SoHAnimJoint2134->X3DNode::setName(QString("r_carpometacarpal_1"));
SoHAnimJoint2134->setDEF(QString("hanim_r_carpometacarpal_1"));
SoHAnimJoint2134->setCenter(new float[]{-0.18,0.69255,0.02598});
SoHAnimJoint2134->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2134->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2135 = new SoHAnimSegment();
SoHAnimSegment2135->X3DNode::setName(QString("r_metacarpal_1"));
SoHAnimSegment2135->setDEF(QString("hanim_r_metacarpal_1"));
SoHAnimSite* SoHAnimSite2136 = new SoHAnimSite();
SoHAnimSite2136->X3DNode::setName(QString("r_metacarpal_phalanx_2"));
SoHAnimSite2136->setDEF(QString("hanim_r_metacarpal_phalanx_2_pt"));
SoHAnimSite2136->setTranslation(new float[]{-0.2,0.665,0.012});
SoTouchSensor* SoTouchSensor2137 = new SoTouchSensor();
SoTouchSensor2137->setDescription(QString("HAnimSite 78 hanim_r_metacarpal_phalanx_2_pt"));
SoHAnimSite2136->addChild(*SoTouchSensor2137);

SoShape* SoShape2138 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2139 = new SoVRMLAppearance();
SoMaterial* SoMaterial2140 = new SoMaterial();
SoMaterial2140->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance2139->addChild(*SoMaterial2140);

SoShape2138->addChild(*SoVRMLAppearance2139);

SoIndexedFaceSet* SoIndexedFaceSet2141 = new SoIndexedFaceSet();
SoIndexedFaceSet2141->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet2141->setCreaseAngle(0.5);
SoIndexedFaceSet2141->setSolid(false);
SoColorRGBA* SoColorRGBA2142 = new SoColorRGBA();
SoColorRGBA2142->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet2141->addChild(*SoColorRGBA2142);

SoCoordinate* SoCoordinate2143 = new SoCoordinate();
SoCoordinate2143->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet2141->setCoord(*SoCoordinate2143);

SoShape2138->setGeometry(*SoIndexedFaceSet2141);

SoHAnimSite2136->addChild(*SoShape2138);

SoBillboard* SoBillboard2144 = new SoBillboard();
SoBillboard2144->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape2145 = new SoShape();
SoText* SoText2146 = new SoText();
SoText2146->setString(new QString[]{QString("78")}, 1);
SoFontStyle* SoFontStyle2147 = new SoFontStyle();
SoFontStyle2147->setSize(0.035);
SoText2146->setFontStyle(*SoFontStyle2147);

SoShape2145->setGeometry(*SoText2146);

SoBillboard2144->addChild(*SoShape2145);

SoHAnimSite2136->addChild(SoBillboard2144);

SoHAnimSegment2135->addChild(*SoHAnimSite2136);

SoShape* SoShape2148 = new SoShape();
SoLineSet* SoLineSet2149 = new SoLineSet();
SoLineSet2149->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2150 = new SoColorRGBA();
SoColorRGBA2150->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2149->addChild(*SoColorRGBA2150);

SoCoordinate* SoCoordinate2151 = new SoCoordinate();
SoCoordinate2151->setPoint(new float[]{-0.18,0.69255,0.02598,-0.18097,0.70605,0.0193}, 6);
SoLineSet2149->setCoord(*SoCoordinate2151);

SoShape2148->setGeometry(*SoLineSet2149);

SoHAnimSegment2135->addChild(*SoShape2148);

SoHAnimJoint2134->addChildren(*SoHAnimSegment2135);

SoHAnimJoint* SoHAnimJoint2152 = new SoHAnimJoint();
SoHAnimJoint2152->X3DNode::setName(QString("r_metacarpophalangeal_1"));
SoHAnimJoint2152->setDEF(QString("hanim_r_metacarpophalangeal_1"));
SoHAnimJoint2152->setCenter(new float[]{-0.18065,0.67275,0.03577});
SoHAnimJoint2152->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2152->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2153 = new SoHAnimSegment();
SoHAnimSegment2153->X3DNode::setName(QString("r_carpal_proximal_phalanx_1"));
SoHAnimSegment2153->setDEF(QString("hanim_r_carpal_proximal_phalanx_1"));
SoShape* SoShape2154 = new SoShape();
SoLineSet* SoLineSet2155 = new SoLineSet();
SoLineSet2155->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2156 = new SoColorRGBA();
SoColorRGBA2156->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2155->addChild(*SoColorRGBA2156);

SoCoordinate* SoCoordinate2157 = new SoCoordinate();
SoCoordinate2157->setPoint(new float[]{-0.18065,0.67275,0.03577,-0.18,0.69255,0.02598}, 6);
SoLineSet2155->setCoord(*SoCoordinate2157);

SoShape2154->setGeometry(*SoLineSet2155);

SoHAnimSegment2153->addChild(*SoShape2154);

SoHAnimJoint2152->addChildren(*SoHAnimSegment2153);

SoHAnimJoint* SoHAnimJoint2158 = new SoHAnimJoint();
SoHAnimJoint2158->X3DNode::setName(QString("r_carpal_interphalangeal_1"));
SoHAnimJoint2158->setDEF(QString("hanim_r_carpal_interphalangeal_1"));
SoHAnimJoint2158->setCenter(new float[]{-0.18227,0.654,0.0496});
SoHAnimJoint2158->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2158->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2159 = new SoHAnimSegment();
SoHAnimSegment2159->X3DNode::setName(QString("r_carpal_distal_phalanx_1"));
SoHAnimSegment2159->setDEF(QString("hanim_r_carpal_distal_phalanx_1"));
SoHAnimSite* SoHAnimSite2160 = new SoHAnimSite();
SoHAnimSite2160->X3DNode::setName(QString("r_carpal_distal_phalanx_1"));
SoHAnimSite2160->setDEF(QString("hanim_r_carpal_distal_phalanx_1_tip"));
SoHAnimSite2160->setTranslation(new float[]{-0.18,0.64,0.06});
SoTouchSensor* SoTouchSensor2161 = new SoTouchSensor();
SoTouchSensor2161->setDescription(QString("HAnimSite 106 hanim_r_carpal_distal_phalanx_1_tip"));
SoHAnimSite2160->addChild(*SoTouchSensor2161);

SoShape* SoShape2162 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2163 = new SoVRMLAppearance();
SoMaterial* SoMaterial2164 = new SoMaterial();
SoMaterial2164->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance2163->addChild(*SoMaterial2164);

SoShape2162->addChild(*SoVRMLAppearance2163);

SoIndexedFaceSet* SoIndexedFaceSet2165 = new SoIndexedFaceSet();
SoIndexedFaceSet2165->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet2165->setCreaseAngle(0.5);
SoIndexedFaceSet2165->setSolid(false);
SoColorRGBA* SoColorRGBA2166 = new SoColorRGBA();
SoColorRGBA2166->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet2165->addChild(*SoColorRGBA2166);

SoCoordinate* SoCoordinate2167 = new SoCoordinate();
SoCoordinate2167->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet2165->setCoord(*SoCoordinate2167);

SoShape2162->setGeometry(*SoIndexedFaceSet2165);

SoHAnimSite2160->addChild(*SoShape2162);

SoBillboard* SoBillboard2168 = new SoBillboard();
SoBillboard2168->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape2169 = new SoShape();
SoText* SoText2170 = new SoText();
SoText2170->setString(new QString[]{QString("106")}, 1);
SoFontStyle* SoFontStyle2171 = new SoFontStyle();
SoFontStyle2171->setSize(0.035);
SoText2170->setFontStyle(*SoFontStyle2171);

SoShape2169->setGeometry(*SoText2170);

SoBillboard2168->addChild(*SoShape2169);

SoHAnimSite2160->addChild(SoBillboard2168);

SoHAnimSegment2159->addChild(*SoHAnimSite2160);

SoShape* SoShape2172 = new SoShape();
SoLineSet* SoLineSet2173 = new SoLineSet();
SoLineSet2173->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2174 = new SoColorRGBA();
SoColorRGBA2174->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2173->addChild(*SoColorRGBA2174);

SoCoordinate* SoCoordinate2175 = new SoCoordinate();
SoCoordinate2175->setPoint(new float[]{-0.18227,0.654,0.0496,-0.18065,0.67275,0.03577}, 6);
SoLineSet2173->setCoord(*SoCoordinate2175);

SoShape2172->setGeometry(*SoLineSet2173);

SoHAnimSegment2159->addChild(*SoShape2172);

SoHAnimJoint2158->addChildren(*SoHAnimSegment2159);

SoHAnimJoint2152->addChildren(*SoHAnimJoint2158);

SoHAnimJoint2134->addChildren(*SoHAnimJoint2152);

SoHAnimJoint2128->addChildren(*SoHAnimJoint2134);

SoHAnimJoint2110->addChildren(*SoHAnimJoint2128);

SoHAnimJoint* SoHAnimJoint2176 = new SoHAnimJoint();
SoHAnimJoint2176->X3DNode::setName(QString("r_midcarpal_2"));
SoHAnimJoint2176->setDEF(QString("hanim_r_midcarpal_2"));
SoHAnimJoint2176->setCenter(new float[]{-0.18097,0.70695,0.0084});
SoHAnimJoint2176->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2176->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2177 = new SoHAnimSegment();
SoHAnimSegment2177->X3DNode::setName(QString("r_trapezoid"));
SoHAnimSegment2177->setDEF(QString("hanim_r_trapezoid"));
SoShape* SoShape2178 = new SoShape();
SoLineSet* SoLineSet2179 = new SoLineSet();
SoLineSet2179->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2180 = new SoColorRGBA();
SoColorRGBA2180->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2179->addChild(*SoColorRGBA2180);

SoCoordinate* SoCoordinate2181 = new SoCoordinate();
SoCoordinate2181->setPoint(new float[]{-0.18097,0.70695,0.0084,-0.1816,0.7242,-0.005}, 6);
SoLineSet2179->setCoord(*SoCoordinate2181);

SoShape2178->setGeometry(*SoLineSet2179);

SoHAnimSegment2177->addChild(*SoShape2178);

SoHAnimJoint2176->addChildren(*SoHAnimSegment2177);

SoHAnimJoint* SoHAnimJoint2182 = new SoHAnimJoint();
SoHAnimJoint2182->X3DNode::setName(QString("r_carpometacarpal_2"));
SoHAnimJoint2182->setDEF(QString("hanim_r_carpometacarpal_2"));
SoHAnimJoint2182->setCenter(new float[]{-0.1809,0.6876,0.0097});
SoHAnimJoint2182->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2182->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2183 = new SoHAnimSegment();
SoHAnimSegment2183->X3DNode::setName(QString("r_metacarpal_2"));
SoHAnimSegment2183->setDEF(QString("hanim_r_metacarpal_2"));
SoShape* SoShape2184 = new SoShape();
SoLineSet* SoLineSet2185 = new SoLineSet();
SoLineSet2185->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2186 = new SoColorRGBA();
SoColorRGBA2186->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2185->addChild(*SoColorRGBA2186);

SoCoordinate* SoCoordinate2187 = new SoCoordinate();
SoCoordinate2187->setPoint(new float[]{-0.1809,0.6876,0.0097,-0.18097,0.70695,0.0084}, 6);
SoLineSet2185->setCoord(*SoCoordinate2187);

SoShape2184->setGeometry(*SoLineSet2185);

SoHAnimSegment2183->addChild(*SoShape2184);

SoHAnimJoint2182->addChildren(*SoHAnimSegment2183);

SoHAnimJoint* SoHAnimJoint2188 = new SoHAnimJoint();
SoHAnimJoint2188->X3DNode::setName(QString("r_metacarpophalangeal_2"));
SoHAnimJoint2188->setDEF(QString("hanim_r_metacarpophalangeal_2"));
SoHAnimJoint2188->setCenter(new float[]{-0.18335,0.6372,0.01507});
SoHAnimJoint2188->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2188->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2189 = new SoHAnimSegment();
SoHAnimSegment2189->X3DNode::setName(QString("r_carpal_proximal_phalanx_2"));
SoHAnimSegment2189->setDEF(QString("hanim_r_carpal_proximal_phalanx_2"));
SoShape* SoShape2190 = new SoShape();
SoLineSet* SoLineSet2191 = new SoLineSet();
SoLineSet2191->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2192 = new SoColorRGBA();
SoColorRGBA2192->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2191->addChild(*SoColorRGBA2192);

SoCoordinate* SoCoordinate2193 = new SoCoordinate();
SoCoordinate2193->setPoint(new float[]{-0.18335,0.6372,0.01507,-0.1809,0.6876,0.0097}, 6);
SoLineSet2191->setCoord(*SoCoordinate2193);

SoShape2190->setGeometry(*SoLineSet2191);

SoHAnimSegment2189->addChild(*SoShape2190);

SoHAnimJoint2188->addChildren(*SoHAnimSegment2189);

SoHAnimJoint* SoHAnimJoint2194 = new SoHAnimJoint();
SoHAnimJoint2194->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint2194->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint2194->setCenter(new float[]{-0.1813,0.6068,0.01418});
SoHAnimJoint2194->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2194->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2195 = new SoHAnimSegment();
SoHAnimSegment2195->X3DNode::setName(QString("r_carpal_middle_phalanx_2"));
SoHAnimSegment2195->setDEF(QString("hanim_r_carpal_middle_phalanx_2"));
SoShape* SoShape2196 = new SoShape();
SoLineSet* SoLineSet2197 = new SoLineSet();
SoLineSet2197->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2198 = new SoColorRGBA();
SoColorRGBA2198->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2197->addChild(*SoColorRGBA2198);

SoCoordinate* SoCoordinate2199 = new SoCoordinate();
SoCoordinate2199->setPoint(new float[]{-0.1813,0.6068,0.01418,-0.18335,0.6372,0.01507}, 6);
SoLineSet2197->setCoord(*SoCoordinate2199);

SoShape2196->setGeometry(*SoLineSet2197);

SoHAnimSegment2195->addChild(*SoShape2196);

SoHAnimJoint2194->addChildren(*SoHAnimSegment2195);

SoHAnimJoint* SoHAnimJoint2200 = new SoHAnimJoint();
SoHAnimJoint2200->X3DNode::setName(QString("r_carpal_distal_interphalangeal_2"));
SoHAnimJoint2200->setDEF(QString("hanim_r_carpal_distal_interphalangeal_2"));
SoHAnimJoint2200->setCenter(new float[]{-0.1803,0.5816,0.01338});
SoHAnimJoint2200->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2200->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2201 = new SoHAnimSegment();
SoHAnimSegment2201->X3DNode::setName(QString("r_carpal_distal_phalanx_2"));
SoHAnimSegment2201->setDEF(QString("hanim_r_carpal_distal_phalanx_2"));
SoHAnimSite* SoHAnimSite2202 = new SoHAnimSite();
SoHAnimSite2202->X3DNode::setName(QString("r_dactylion"));
SoHAnimSite2202->setDEF(QString("hanim_r_dactylion_pt"));
SoHAnimSite2202->setTranslation(new float[]{-0.17,0.558,0.017});
SoTouchSensor* SoTouchSensor2203 = new SoTouchSensor();
SoTouchSensor2203->setDescription(QString("HAnimSite 61 hanim_r_dactylion_pt"));
SoHAnimSite2202->addChild(*SoTouchSensor2203);

SoShape* SoShape2204 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2205 = new SoVRMLAppearance();
SoMaterial* SoMaterial2206 = new SoMaterial();
SoMaterial2206->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance2205->addChild(*SoMaterial2206);

SoShape2204->addChild(*SoVRMLAppearance2205);

SoIndexedFaceSet* SoIndexedFaceSet2207 = new SoIndexedFaceSet();
SoIndexedFaceSet2207->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet2207->setCreaseAngle(0.5);
SoIndexedFaceSet2207->setSolid(false);
SoColorRGBA* SoColorRGBA2208 = new SoColorRGBA();
SoColorRGBA2208->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet2207->addChild(*SoColorRGBA2208);

SoCoordinate* SoCoordinate2209 = new SoCoordinate();
SoCoordinate2209->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet2207->setCoord(*SoCoordinate2209);

SoShape2204->setGeometry(*SoIndexedFaceSet2207);

SoHAnimSite2202->addChild(*SoShape2204);

SoBillboard* SoBillboard2210 = new SoBillboard();
SoBillboard2210->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape2211 = new SoShape();
SoText* SoText2212 = new SoText();
SoText2212->setString(new QString[]{QString("61")}, 1);
SoFontStyle* SoFontStyle2213 = new SoFontStyle();
SoFontStyle2213->setSize(0.035);
SoText2212->setFontStyle(*SoFontStyle2213);

SoShape2211->setGeometry(*SoText2212);

SoBillboard2210->addChild(*SoShape2211);

SoHAnimSite2202->addChild(SoBillboard2210);

SoHAnimSegment2201->addChild(*SoHAnimSite2202);

SoHAnimSite* SoHAnimSite2214 = new SoHAnimSite();
SoHAnimSite2214->X3DNode::setName(QString("r_carpal_distal_phalanx_2"));
SoHAnimSite2214->setDEF(QString("hanim_r_carpal_distal_phalanx_2_tip"));
SoHAnimSite2214->setTranslation(new float[]{-0.172,0.558,0.017});
SoTouchSensor* SoTouchSensor2215 = new SoTouchSensor();
SoTouchSensor2215->setDescription(QString("HAnimSite 107 hanim_r_carpal_distal_phalanx_2_tip"));
SoHAnimSite2214->addChild(*SoTouchSensor2215);

SoShape* SoShape2216 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2217 = new SoVRMLAppearance();
SoMaterial* SoMaterial2218 = new SoMaterial();
SoMaterial2218->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance2217->addChild(*SoMaterial2218);

SoShape2216->addChild(*SoVRMLAppearance2217);

SoIndexedFaceSet* SoIndexedFaceSet2219 = new SoIndexedFaceSet();
SoIndexedFaceSet2219->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet2219->setCreaseAngle(0.5);
SoIndexedFaceSet2219->setSolid(false);
SoColorRGBA* SoColorRGBA2220 = new SoColorRGBA();
SoColorRGBA2220->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet2219->addChild(*SoColorRGBA2220);

SoCoordinate* SoCoordinate2221 = new SoCoordinate();
SoCoordinate2221->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet2219->setCoord(*SoCoordinate2221);

SoShape2216->setGeometry(*SoIndexedFaceSet2219);

SoHAnimSite2214->addChild(*SoShape2216);

SoBillboard* SoBillboard2222 = new SoBillboard();
SoBillboard2222->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape2223 = new SoShape();
SoText* SoText2224 = new SoText();
SoText2224->setString(new QString[]{QString("107")}, 1);
SoFontStyle* SoFontStyle2225 = new SoFontStyle();
SoFontStyle2225->setSize(0.035);
SoText2224->setFontStyle(*SoFontStyle2225);

SoShape2223->setGeometry(*SoText2224);

SoBillboard2222->addChild(*SoShape2223);

SoHAnimSite2214->addChild(SoBillboard2222);

SoHAnimSegment2201->addChild(*SoHAnimSite2214);

SoShape* SoShape2226 = new SoShape();
SoLineSet* SoLineSet2227 = new SoLineSet();
SoLineSet2227->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2228 = new SoColorRGBA();
SoColorRGBA2228->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2227->addChild(*SoColorRGBA2228);

SoCoordinate* SoCoordinate2229 = new SoCoordinate();
SoCoordinate2229->setPoint(new float[]{-0.1803,0.5816,0.01338,-0.1813,0.6068,0.01418}, 6);
SoLineSet2227->setCoord(*SoCoordinate2229);

SoShape2226->setGeometry(*SoLineSet2227);

SoHAnimSegment2201->addChild(*SoShape2226);

SoHAnimJoint2200->addChildren(*SoHAnimSegment2201);

SoHAnimJoint2194->addChildren(*SoHAnimJoint2200);

SoHAnimJoint2188->addChildren(*SoHAnimJoint2194);

SoHAnimJoint2182->addChildren(*SoHAnimJoint2188);

SoHAnimJoint2176->addChildren(*SoHAnimJoint2182);

SoHAnimJoint2110->addChildren(*SoHAnimJoint2176);

SoHAnimJoint* SoHAnimJoint2230 = new SoHAnimJoint();
SoHAnimJoint2230->X3DNode::setName(QString("r_midcarpal_3"));
SoHAnimJoint2230->setDEF(QString("hanim_r_midcarpal_3"));
SoHAnimJoint2230->setCenter(new float[]{-0.18072,0.708525,-0.004797});
SoHAnimJoint2230->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2230->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2231 = new SoHAnimSegment();
SoHAnimSegment2231->X3DNode::setName(QString("r_capitate"));
SoHAnimSegment2231->setDEF(QString("hanim_r_capitate"));
SoShape* SoShape2232 = new SoShape();
SoLineSet* SoLineSet2233 = new SoLineSet();
SoLineSet2233->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2234 = new SoColorRGBA();
SoColorRGBA2234->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2233->addChild(*SoColorRGBA2234);

SoCoordinate* SoCoordinate2235 = new SoCoordinate();
SoCoordinate2235->setPoint(new float[]{-0.18072,0.708525,-0.004797,-0.1816,0.7242,-0.005}, 6);
SoLineSet2233->setCoord(*SoCoordinate2235);

SoShape2232->setGeometry(*SoLineSet2233);

SoHAnimSegment2231->addChild(*SoShape2232);

SoHAnimJoint2230->addChildren(*SoHAnimSegment2231);

SoHAnimJoint* SoHAnimJoint2236 = new SoHAnimJoint();
SoHAnimJoint2236->X3DNode::setName(QString("r_carpometacarpal_3"));
SoHAnimJoint2236->setDEF(QString("hanim_r_carpometacarpal_3"));
SoHAnimJoint2236->setCenter(new float[]{-0.18072,0.6858,-0.00625});
SoHAnimJoint2236->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2236->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2237 = new SoHAnimSegment();
SoHAnimSegment2237->X3DNode::setName(QString("r_metacarpal_3"));
SoHAnimSegment2237->setDEF(QString("hanim_r_metacarpal_3"));
SoHAnimSite* SoHAnimSite2238 = new SoHAnimSite();
SoHAnimSite2238->X3DNode::setName(QString("r_metacarpal_phalanx_3"));
SoHAnimSite2238->setDEF(QString("hanim_r_metacarpal_phalanx_3_pt"));
SoHAnimSite2238->setTranslation(new float[]{-0.2,0.665,0.016});
SoTouchSensor* SoTouchSensor2239 = new SoTouchSensor();
SoTouchSensor2239->setDescription(QString("HAnimSite 79 hanim_r_metacarpal_phalanx_3_pt"));
SoHAnimSite2238->addChild(*SoTouchSensor2239);

SoShape* SoShape2240 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2241 = new SoVRMLAppearance();
SoMaterial* SoMaterial2242 = new SoMaterial();
SoMaterial2242->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance2241->addChild(*SoMaterial2242);

SoShape2240->addChild(*SoVRMLAppearance2241);

SoIndexedFaceSet* SoIndexedFaceSet2243 = new SoIndexedFaceSet();
SoIndexedFaceSet2243->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet2243->setCreaseAngle(0.5);
SoIndexedFaceSet2243->setSolid(false);
SoColorRGBA* SoColorRGBA2244 = new SoColorRGBA();
SoColorRGBA2244->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet2243->addChild(*SoColorRGBA2244);

SoCoordinate* SoCoordinate2245 = new SoCoordinate();
SoCoordinate2245->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet2243->setCoord(*SoCoordinate2245);

SoShape2240->setGeometry(*SoIndexedFaceSet2243);

SoHAnimSite2238->addChild(*SoShape2240);

SoBillboard* SoBillboard2246 = new SoBillboard();
SoBillboard2246->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape2247 = new SoShape();
SoText* SoText2248 = new SoText();
SoText2248->setString(new QString[]{QString("79")}, 1);
SoFontStyle* SoFontStyle2249 = new SoFontStyle();
SoFontStyle2249->setSize(0.035);
SoText2248->setFontStyle(*SoFontStyle2249);

SoShape2247->setGeometry(*SoText2248);

SoBillboard2246->addChild(*SoShape2247);

SoHAnimSite2238->addChild(SoBillboard2246);

SoHAnimSegment2237->addChild(*SoHAnimSite2238);

SoShape* SoShape2250 = new SoShape();
SoLineSet* SoLineSet2251 = new SoLineSet();
SoLineSet2251->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2252 = new SoColorRGBA();
SoColorRGBA2252->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2251->addChild(*SoColorRGBA2252);

SoCoordinate* SoCoordinate2253 = new SoCoordinate();
SoCoordinate2253->setPoint(new float[]{-0.18072,0.6858,-0.00625,-0.18072,0.708525,-0.004797}, 6);
SoLineSet2251->setCoord(*SoCoordinate2253);

SoShape2250->setGeometry(*SoLineSet2251);

SoHAnimSegment2237->addChild(*SoShape2250);

SoHAnimJoint2236->addChildren(*SoHAnimSegment2237);

SoHAnimJoint* SoHAnimJoint2254 = new SoHAnimJoint();
SoHAnimJoint2254->X3DNode::setName(QString("r_metacarpophalangeal_3"));
SoHAnimJoint2254->setDEF(QString("hanim_r_metacarpophalangeal_3"));
SoHAnimJoint2254->setCenter(new float[]{-0.1833,0.63495,-0.0039});
SoHAnimJoint2254->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2254->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2255 = new SoHAnimSegment();
SoHAnimSegment2255->X3DNode::setName(QString("r_carpal_proximal_phalanx_3"));
SoHAnimSegment2255->setDEF(QString("hanim_r_carpal_proximal_phalanx_3"));
SoShape* SoShape2256 = new SoShape();
SoLineSet* SoLineSet2257 = new SoLineSet();
SoLineSet2257->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2258 = new SoColorRGBA();
SoColorRGBA2258->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2257->addChild(*SoColorRGBA2258);

SoCoordinate* SoCoordinate2259 = new SoCoordinate();
SoCoordinate2259->setPoint(new float[]{-0.1833,0.63495,-0.0039,-0.18072,0.6858,-0.00625}, 6);
SoLineSet2257->setCoord(*SoCoordinate2259);

SoShape2256->setGeometry(*SoLineSet2257);

SoHAnimSegment2255->addChild(*SoShape2256);

SoHAnimJoint2254->addChildren(*SoHAnimSegment2255);

SoHAnimJoint* SoHAnimJoint2260 = new SoHAnimJoint();
SoHAnimJoint2260->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint2260->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint2260->setCenter(new float[]{-0.1813,0.6032,-0.0035});
SoHAnimJoint2260->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2260->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2261 = new SoHAnimSegment();
SoHAnimSegment2261->X3DNode::setName(QString("r_carpal_middle_phalanx_3"));
SoHAnimSegment2261->setDEF(QString("hanim_r_carpal_middle_phalanx_3"));
SoShape* SoShape2262 = new SoShape();
SoLineSet* SoLineSet2263 = new SoLineSet();
SoLineSet2263->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2264 = new SoColorRGBA();
SoColorRGBA2264->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2263->addChild(*SoColorRGBA2264);

SoCoordinate* SoCoordinate2265 = new SoCoordinate();
SoCoordinate2265->setPoint(new float[]{-0.1813,0.6032,-0.0035,-0.1833,0.63495,-0.0039}, 6);
SoLineSet2263->setCoord(*SoCoordinate2265);

SoShape2262->setGeometry(*SoLineSet2263);

SoHAnimSegment2261->addChild(*SoShape2262);

SoHAnimJoint2260->addChildren(*SoHAnimSegment2261);

SoHAnimJoint* SoHAnimJoint2266 = new SoHAnimJoint();
SoHAnimJoint2266->X3DNode::setName(QString("r_carpal_distal_interphalangeal_3"));
SoHAnimJoint2266->setDEF(QString("hanim_r_carpal_distal_interphalangeal_3"));
SoHAnimJoint2266->setCenter(new float[]{-0.18029,0.5753,-0.00375});
SoHAnimJoint2266->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2266->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2267 = new SoHAnimSegment();
SoHAnimSegment2267->X3DNode::setName(QString("r_carpal_distal_phalanx_3"));
SoHAnimSegment2267->setDEF(QString("hanim_r_carpal_distal_phalanx_3"));
SoHAnimSite* SoHAnimSite2268 = new SoHAnimSite();
SoHAnimSite2268->X3DNode::setName(QString("r_carpal_distal_phalanx_3"));
SoHAnimSite2268->setDEF(QString("hanim_r_carpal_distal_phalanx_3_tip"));
SoHAnimSite2268->setTranslation(new float[]{-0.17,0.555,-0.006});
SoTouchSensor* SoTouchSensor2269 = new SoTouchSensor();
SoTouchSensor2269->setDescription(QString("HAnimSite 108 hanim_r_carpal_distal_phalanx_3_tip"));
SoHAnimSite2268->addChild(*SoTouchSensor2269);

SoShape* SoShape2270 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2271 = new SoVRMLAppearance();
SoMaterial* SoMaterial2272 = new SoMaterial();
SoMaterial2272->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance2271->addChild(*SoMaterial2272);

SoShape2270->addChild(*SoVRMLAppearance2271);

SoIndexedFaceSet* SoIndexedFaceSet2273 = new SoIndexedFaceSet();
SoIndexedFaceSet2273->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet2273->setCreaseAngle(0.5);
SoIndexedFaceSet2273->setSolid(false);
SoColorRGBA* SoColorRGBA2274 = new SoColorRGBA();
SoColorRGBA2274->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet2273->addChild(*SoColorRGBA2274);

SoCoordinate* SoCoordinate2275 = new SoCoordinate();
SoCoordinate2275->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet2273->setCoord(*SoCoordinate2275);

SoShape2270->setGeometry(*SoIndexedFaceSet2273);

SoHAnimSite2268->addChild(*SoShape2270);

SoBillboard* SoBillboard2276 = new SoBillboard();
SoBillboard2276->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape2277 = new SoShape();
SoText* SoText2278 = new SoText();
SoText2278->setString(new QString[]{QString("108")}, 1);
SoFontStyle* SoFontStyle2279 = new SoFontStyle();
SoFontStyle2279->setSize(0.035);
SoText2278->setFontStyle(*SoFontStyle2279);

SoShape2277->setGeometry(*SoText2278);

SoBillboard2276->addChild(*SoShape2277);

SoHAnimSite2268->addChild(SoBillboard2276);

SoHAnimSegment2267->addChild(*SoHAnimSite2268);

SoShape* SoShape2280 = new SoShape();
SoLineSet* SoLineSet2281 = new SoLineSet();
SoLineSet2281->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2282 = new SoColorRGBA();
SoColorRGBA2282->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2281->addChild(*SoColorRGBA2282);

SoCoordinate* SoCoordinate2283 = new SoCoordinate();
SoCoordinate2283->setPoint(new float[]{-0.18029,0.5753,-0.00375,-0.1813,0.6032,-0.0035}, 6);
SoLineSet2281->setCoord(*SoCoordinate2283);

SoShape2280->setGeometry(*SoLineSet2281);

SoHAnimSegment2267->addChild(*SoShape2280);

SoHAnimJoint2266->addChildren(*SoHAnimSegment2267);

SoHAnimJoint2260->addChildren(*SoHAnimJoint2266);

SoHAnimJoint2254->addChildren(*SoHAnimJoint2260);

SoHAnimJoint2236->addChildren(*SoHAnimJoint2254);

SoHAnimJoint2230->addChildren(*SoHAnimJoint2236);

SoHAnimJoint2110->addChildren(*SoHAnimJoint2230);

SoHAnimJoint* SoHAnimJoint2284 = new SoHAnimJoint();
SoHAnimJoint2284->X3DNode::setName(QString("r_midcarpal_4_5"));
SoHAnimJoint2284->setDEF(QString("hanim_r_midcarpal_4_5"));
SoHAnimJoint2284->setCenter(new float[]{-0.18072,0.70583,-0.02574});
SoHAnimJoint2284->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2284->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2285 = new SoHAnimSegment();
SoHAnimSegment2285->X3DNode::setName(QString("r_hamate"));
SoHAnimSegment2285->setDEF(QString("hanim_r_hamate"));
SoShape* SoShape2286 = new SoShape();
SoLineSet* SoLineSet2287 = new SoLineSet();
SoLineSet2287->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2288 = new SoColorRGBA();
SoColorRGBA2288->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2287->addChild(*SoColorRGBA2288);

SoCoordinate* SoCoordinate2289 = new SoCoordinate();
SoCoordinate2289->setPoint(new float[]{-0.18072,0.70583,-0.02574,-0.1816,0.7242,-0.005}, 6);
SoLineSet2287->setCoord(*SoCoordinate2289);

SoShape2286->setGeometry(*SoLineSet2287);

SoHAnimSegment2285->addChild(*SoShape2286);

SoHAnimJoint2284->addChildren(*SoHAnimSegment2285);

SoHAnimJoint* SoHAnimJoint2290 = new SoHAnimJoint();
SoHAnimJoint2290->X3DNode::setName(QString("r_carpometacarpal_4"));
SoHAnimJoint2290->setDEF(QString("hanim_r_carpometacarpal_4"));
SoHAnimJoint2290->setCenter(new float[]{-0.18072,0.68625,-0.01992});
SoHAnimJoint2290->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2290->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2291 = new SoHAnimSegment();
SoHAnimSegment2291->X3DNode::setName(QString("r_metacarpal_4"));
SoHAnimSegment2291->setDEF(QString("hanim_r_metacarpal_4"));
SoShape* SoShape2292 = new SoShape();
SoLineSet* SoLineSet2293 = new SoLineSet();
SoLineSet2293->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2294 = new SoColorRGBA();
SoColorRGBA2294->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2293->addChild(*SoColorRGBA2294);

SoCoordinate* SoCoordinate2295 = new SoCoordinate();
SoCoordinate2295->setPoint(new float[]{-0.18072,0.68625,-0.01992,-0.18072,0.70583,-0.02574}, 6);
SoLineSet2293->setCoord(*SoCoordinate2295);

SoShape2292->setGeometry(*SoLineSet2293);

SoHAnimSegment2291->addChild(*SoShape2292);

SoHAnimJoint2290->addChildren(*SoHAnimSegment2291);

SoHAnimJoint* SoHAnimJoint2296 = new SoHAnimJoint();
SoHAnimJoint2296->X3DNode::setName(QString("r_metacarpophalangeal_4"));
SoHAnimJoint2296->setDEF(QString("hanim_r_metacarpophalangeal_4"));
SoHAnimJoint2296->setCenter(new float[]{-0.1833,0.63405,-0.02144});
SoHAnimJoint2296->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2296->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2297 = new SoHAnimSegment();
SoHAnimSegment2297->X3DNode::setName(QString("r_carpal_proximal_phalanx_4"));
SoHAnimSegment2297->setDEF(QString("hanim_r_carpal_proximal_phalanx_4"));
SoShape* SoShape2298 = new SoShape();
SoLineSet* SoLineSet2299 = new SoLineSet();
SoLineSet2299->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2300 = new SoColorRGBA();
SoColorRGBA2300->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2299->addChild(*SoColorRGBA2300);

SoCoordinate* SoCoordinate2301 = new SoCoordinate();
SoCoordinate2301->setPoint(new float[]{-0.1833,0.63405,-0.02144,-0.18072,0.68625,-0.01992}, 6);
SoLineSet2299->setCoord(*SoCoordinate2301);

SoShape2298->setGeometry(*SoLineSet2299);

SoHAnimSegment2297->addChild(*SoShape2298);

SoHAnimJoint2296->addChildren(*SoHAnimSegment2297);

SoHAnimJoint* SoHAnimJoint2302 = new SoHAnimJoint();
SoHAnimJoint2302->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint2302->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint2302->setCenter(new float[]{-0.1813,0.6066,-0.02064});
SoHAnimJoint2302->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2302->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2303 = new SoHAnimSegment();
SoHAnimSegment2303->X3DNode::setName(QString("r_carpal_middle_phalanx_4"));
SoHAnimSegment2303->setDEF(QString("hanim_r_carpal_middle_phalanx_4"));
SoShape* SoShape2304 = new SoShape();
SoLineSet* SoLineSet2305 = new SoLineSet();
SoLineSet2305->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2306 = new SoColorRGBA();
SoColorRGBA2306->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2305->addChild(*SoColorRGBA2306);

SoCoordinate* SoCoordinate2307 = new SoCoordinate();
SoCoordinate2307->setPoint(new float[]{-0.1813,0.6066,-0.02064,-0.1833,0.63405,-0.02144}, 6);
SoLineSet2305->setCoord(*SoCoordinate2307);

SoShape2304->setGeometry(*SoLineSet2305);

SoHAnimSegment2303->addChild(*SoShape2304);

SoHAnimJoint2302->addChildren(*SoHAnimSegment2303);

SoHAnimJoint* SoHAnimJoint2308 = new SoHAnimJoint();
SoHAnimJoint2308->X3DNode::setName(QString("r_carpal_distal_interphalangeal_4"));
SoHAnimJoint2308->setDEF(QString("hanim_r_carpal_distal_interphalangeal_4"));
SoHAnimJoint2308->setCenter(new float[]{-0.18029,0.5807,-0.01978});
SoHAnimJoint2308->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2308->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2309 = new SoHAnimSegment();
SoHAnimSegment2309->X3DNode::setName(QString("r_carpal_distal_phalanx_4"));
SoHAnimSegment2309->setDEF(QString("hanim_r_carpal_distal_phalanx_4"));
SoHAnimSite* SoHAnimSite2310 = new SoHAnimSite();
SoHAnimSite2310->X3DNode::setName(QString("r_carpal_distal_phalanx_4"));
SoHAnimSite2310->setDEF(QString("hanim_r_carpal_distal_phalanx_4_tip"));
SoHAnimSite2310->setTranslation(new float[]{-0.172,0.559,-0.024});
SoTouchSensor* SoTouchSensor2311 = new SoTouchSensor();
SoTouchSensor2311->setDescription(QString("HAnimSite 109 hanim_r_carpal_distal_phalanx_4_tip"));
SoHAnimSite2310->addChild(*SoTouchSensor2311);

SoShape* SoShape2312 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2313 = new SoVRMLAppearance();
SoMaterial* SoMaterial2314 = new SoMaterial();
SoMaterial2314->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance2313->addChild(*SoMaterial2314);

SoShape2312->addChild(*SoVRMLAppearance2313);

SoIndexedFaceSet* SoIndexedFaceSet2315 = new SoIndexedFaceSet();
SoIndexedFaceSet2315->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet2315->setCreaseAngle(0.5);
SoIndexedFaceSet2315->setSolid(false);
SoColorRGBA* SoColorRGBA2316 = new SoColorRGBA();
SoColorRGBA2316->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet2315->addChild(*SoColorRGBA2316);

SoCoordinate* SoCoordinate2317 = new SoCoordinate();
SoCoordinate2317->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet2315->setCoord(*SoCoordinate2317);

SoShape2312->setGeometry(*SoIndexedFaceSet2315);

SoHAnimSite2310->addChild(*SoShape2312);

SoBillboard* SoBillboard2318 = new SoBillboard();
SoBillboard2318->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape2319 = new SoShape();
SoText* SoText2320 = new SoText();
SoText2320->setString(new QString[]{QString("109")}, 1);
SoFontStyle* SoFontStyle2321 = new SoFontStyle();
SoFontStyle2321->setSize(0.035);
SoText2320->setFontStyle(*SoFontStyle2321);

SoShape2319->setGeometry(*SoText2320);

SoBillboard2318->addChild(*SoShape2319);

SoHAnimSite2310->addChild(SoBillboard2318);

SoHAnimSegment2309->addChild(*SoHAnimSite2310);

SoShape* SoShape2322 = new SoShape();
SoLineSet* SoLineSet2323 = new SoLineSet();
SoLineSet2323->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2324 = new SoColorRGBA();
SoColorRGBA2324->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2323->addChild(*SoColorRGBA2324);

SoCoordinate* SoCoordinate2325 = new SoCoordinate();
SoCoordinate2325->setPoint(new float[]{-0.18029,0.5807,-0.01978,-0.1813,0.6066,-0.02064}, 6);
SoLineSet2323->setCoord(*SoCoordinate2325);

SoShape2322->setGeometry(*SoLineSet2323);

SoHAnimSegment2309->addChild(*SoShape2322);

SoHAnimJoint2308->addChildren(*SoHAnimSegment2309);

SoHAnimJoint2302->addChildren(*SoHAnimJoint2308);

SoHAnimJoint2296->addChildren(*SoHAnimJoint2302);

SoHAnimJoint2290->addChildren(*SoHAnimJoint2296);

SoHAnimJoint2284->addChildren(*SoHAnimJoint2290);

SoHAnimJoint2110->addChildren(*SoHAnimJoint2284);

SoHAnimJoint* SoHAnimJoint2326 = new SoHAnimJoint();
SoHAnimJoint2326->X3DNode::setName(QString("r_carpometacarpal_5"));
SoHAnimJoint2326->setDEF(QString("hanim_r_carpometacarpal_5"));
SoHAnimJoint2326->setCenter(new float[]{-0.18126,0.68827,-0.03278});
SoHAnimJoint2326->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2326->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2327 = new SoHAnimSegment();
SoHAnimSegment2327->X3DNode::setName(QString("r_metacarpal_5"));
SoHAnimSegment2327->setDEF(QString("hanim_r_metacarpal_5"));
SoHAnimSite* SoHAnimSite2328 = new SoHAnimSite();
SoHAnimSite2328->X3DNode::setName(QString("r_metacarpal_phalanx_5"));
SoHAnimSite2328->setDEF(QString("hanim_r_metacarpal_phalanx_5_pt"));
SoHAnimSite2328->setTranslation(new float[]{-0.2,0.665,-0.036});
SoTouchSensor* SoTouchSensor2329 = new SoTouchSensor();
SoTouchSensor2329->setDescription(QString("HAnimSite 80 hanim_r_metacarpal_phalanx_5_pt"));
SoHAnimSite2328->addChild(*SoTouchSensor2329);

SoShape* SoShape2330 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2331 = new SoVRMLAppearance();
SoMaterial* SoMaterial2332 = new SoMaterial();
SoMaterial2332->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance2331->addChild(*SoMaterial2332);

SoShape2330->addChild(*SoVRMLAppearance2331);

SoIndexedFaceSet* SoIndexedFaceSet2333 = new SoIndexedFaceSet();
SoIndexedFaceSet2333->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet2333->setCreaseAngle(0.5);
SoIndexedFaceSet2333->setSolid(false);
SoColorRGBA* SoColorRGBA2334 = new SoColorRGBA();
SoColorRGBA2334->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet2333->addChild(*SoColorRGBA2334);

SoCoordinate* SoCoordinate2335 = new SoCoordinate();
SoCoordinate2335->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet2333->setCoord(*SoCoordinate2335);

SoShape2330->setGeometry(*SoIndexedFaceSet2333);

SoHAnimSite2328->addChild(*SoShape2330);

SoBillboard* SoBillboard2336 = new SoBillboard();
SoBillboard2336->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape2337 = new SoShape();
SoText* SoText2338 = new SoText();
SoText2338->setString(new QString[]{QString("80")}, 1);
SoFontStyle* SoFontStyle2339 = new SoFontStyle();
SoFontStyle2339->setSize(0.035);
SoText2338->setFontStyle(*SoFontStyle2339);

SoShape2337->setGeometry(*SoText2338);

SoBillboard2336->addChild(*SoShape2337);

SoHAnimSite2328->addChild(SoBillboard2336);

SoHAnimSegment2327->addChild(*SoHAnimSite2328);

SoShape* SoShape2340 = new SoShape();
SoLineSet* SoLineSet2341 = new SoLineSet();
SoLineSet2341->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2342 = new SoColorRGBA();
SoColorRGBA2342->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2341->addChild(*SoColorRGBA2342);

SoCoordinate* SoCoordinate2343 = new SoCoordinate();
SoCoordinate2343->setPoint(new float[]{-0.18126,0.68827,-0.03278,-0.1816,0.7242,-0.005}, 6);
SoLineSet2341->setCoord(*SoCoordinate2343);

SoShape2340->setGeometry(*SoLineSet2341);

SoHAnimSegment2327->addChild(*SoShape2340);

SoHAnimJoint2326->addChildren(*SoHAnimSegment2327);

SoHAnimJoint* SoHAnimJoint2344 = new SoHAnimJoint();
SoHAnimJoint2344->X3DNode::setName(QString("r_metacarpophalangeal_5"));
SoHAnimJoint2344->setDEF(QString("hanim_r_metacarpophalangeal_5"));
SoHAnimJoint2344->setCenter(new float[]{-0.18297,0.6381,-0.0371});
SoHAnimJoint2344->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2344->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2345 = new SoHAnimSegment();
SoHAnimSegment2345->X3DNode::setName(QString("r_carpal_proximal_phalanx_5"));
SoHAnimSegment2345->setDEF(QString("hanim_r_carpal_proximal_phalanx_5"));
SoShape* SoShape2346 = new SoShape();
SoLineSet* SoLineSet2347 = new SoLineSet();
SoLineSet2347->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2348 = new SoColorRGBA();
SoColorRGBA2348->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2347->addChild(*SoColorRGBA2348);

SoCoordinate* SoCoordinate2349 = new SoCoordinate();
SoCoordinate2349->setPoint(new float[]{-0.18297,0.6381,-0.0371,-0.18126,0.68827,-0.03278}, 6);
SoLineSet2347->setCoord(*SoCoordinate2349);

SoShape2346->setGeometry(*SoLineSet2347);

SoHAnimSegment2345->addChild(*SoShape2346);

SoHAnimJoint2344->addChildren(*SoHAnimSegment2345);

SoHAnimJoint* SoHAnimJoint2350 = new SoHAnimJoint();
SoHAnimJoint2350->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint2350->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint2350->setCenter(new float[]{-0.1813,0.621,-0.03715});
SoHAnimJoint2350->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2350->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2351 = new SoHAnimSegment();
SoHAnimSegment2351->X3DNode::setName(QString("r_carpal_middle_phalanx_5"));
SoHAnimSegment2351->setDEF(QString("hanim_r_carpal_middle_phalanx_5"));
SoShape* SoShape2352 = new SoShape();
SoLineSet* SoLineSet2353 = new SoLineSet();
SoLineSet2353->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2354 = new SoColorRGBA();
SoColorRGBA2354->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2353->addChild(*SoColorRGBA2354);

SoCoordinate* SoCoordinate2355 = new SoCoordinate();
SoCoordinate2355->setPoint(new float[]{-0.1813,0.621,-0.03715,-0.18297,0.6381,-0.0371}, 6);
SoLineSet2353->setCoord(*SoCoordinate2355);

SoShape2352->setGeometry(*SoLineSet2353);

SoHAnimSegment2351->addChild(*SoShape2352);

SoHAnimJoint2350->addChildren(*SoHAnimSegment2351);

SoHAnimJoint* SoHAnimJoint2356 = new SoHAnimJoint();
SoHAnimJoint2356->X3DNode::setName(QString("r_carpal_distal_interphalangeal_5"));
SoHAnimJoint2356->setDEF(QString("hanim_r_carpal_distal_interphalangeal_5"));
SoHAnimJoint2356->setCenter(new float[]{-0.18045,0.602325,-0.03697});
SoHAnimJoint2356->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint2356->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment2357 = new SoHAnimSegment();
SoHAnimSegment2357->X3DNode::setName(QString("r_carpal_distal_phalanx_5"));
SoHAnimSegment2357->setDEF(QString("hanim_r_carpal_distal_phalanx_5"));
SoHAnimSite* SoHAnimSite2358 = new SoHAnimSite();
SoHAnimSite2358->X3DNode::setName(QString("r_carpal_distal_phalanx_5"));
SoHAnimSite2358->setDEF(QString("hanim_r_carpal_distal_phalanx_5_tip"));
SoHAnimSite2358->setTranslation(new float[]{-0.172,0.58,-0.039});
SoTouchSensor* SoTouchSensor2359 = new SoTouchSensor();
SoTouchSensor2359->setDescription(QString("HAnimSite 110 hanim_r_carpal_distal_phalanx_5_tip"));
SoHAnimSite2358->addChild(*SoTouchSensor2359);

SoShape* SoShape2360 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2361 = new SoVRMLAppearance();
SoMaterial* SoMaterial2362 = new SoMaterial();
SoMaterial2362->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance2361->addChild(*SoMaterial2362);

SoShape2360->addChild(*SoVRMLAppearance2361);

SoIndexedFaceSet* SoIndexedFaceSet2363 = new SoIndexedFaceSet();
SoIndexedFaceSet2363->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet2363->setCreaseAngle(0.5);
SoIndexedFaceSet2363->setSolid(false);
SoColorRGBA* SoColorRGBA2364 = new SoColorRGBA();
SoColorRGBA2364->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet2363->addChild(*SoColorRGBA2364);

SoCoordinate* SoCoordinate2365 = new SoCoordinate();
SoCoordinate2365->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet2363->setCoord(*SoCoordinate2365);

SoShape2360->setGeometry(*SoIndexedFaceSet2363);

SoHAnimSite2358->addChild(*SoShape2360);

SoBillboard* SoBillboard2366 = new SoBillboard();
SoBillboard2366->setAxisOfRotation(new float[]{0.0,0.0,0.0});
SoShape* SoShape2367 = new SoShape();
SoText* SoText2368 = new SoText();
SoText2368->setString(new QString[]{QString("110")}, 1);
SoFontStyle* SoFontStyle2369 = new SoFontStyle();
SoFontStyle2369->setSize(0.035);
SoText2368->setFontStyle(*SoFontStyle2369);

SoShape2367->setGeometry(*SoText2368);

SoBillboard2366->addChild(*SoShape2367);

SoHAnimSite2358->addChild(SoBillboard2366);

SoHAnimSegment2357->addChild(*SoHAnimSite2358);

SoShape* SoShape2370 = new SoShape();
SoLineSet* SoLineSet2371 = new SoLineSet();
SoLineSet2371->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA2372 = new SoColorRGBA();
SoColorRGBA2372->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0}, 8);
SoLineSet2371->addChild(*SoColorRGBA2372);

SoCoordinate* SoCoordinate2373 = new SoCoordinate();
SoCoordinate2373->setPoint(new float[]{-0.18045,0.602325,-0.03697,-0.1813,0.621,-0.03715}, 6);
SoLineSet2371->setCoord(*SoCoordinate2373);

SoShape2370->setGeometry(*SoLineSet2371);

SoHAnimSegment2357->addChild(*SoShape2370);

SoHAnimJoint2356->addChildren(*SoHAnimSegment2357);

SoHAnimJoint2350->addChildren(*SoHAnimJoint2356);

SoHAnimJoint2344->addChildren(*SoHAnimJoint2350);

SoHAnimJoint2326->addChildren(*SoHAnimJoint2344);

SoHAnimJoint2110->addChildren(*SoHAnimJoint2326);

SoHAnimJoint2080->addChildren(*SoHAnimJoint2110);

SoHAnimJoint2026->addChildren(*SoHAnimJoint2080);

SoHAnimJoint1972->addChildren(*SoHAnimJoint2026);

SoHAnimJoint1954->addChildren(*SoHAnimJoint1972);

SoHAnimJoint1126->addChildren(*SoHAnimJoint1954);

SoHAnimJoint1120->addChildren(*SoHAnimJoint1126);

SoHAnimJoint1114->addChildren(*SoHAnimJoint1120);

SoHAnimJoint1108->addChildren(*SoHAnimJoint1114);

SoHAnimJoint1102->addChildren(*SoHAnimJoint1108);

SoHAnimJoint1096->addChildren(*SoHAnimJoint1102);

SoHAnimJoint1090->addChildren(*SoHAnimJoint1096);

SoHAnimJoint1084->addChildren(*SoHAnimJoint1090);

SoHAnimJoint1018->addChildren(*SoHAnimJoint1084);

SoHAnimJoint988->addChildren(*SoHAnimJoint1018);

SoHAnimJoint982->addChildren(*SoHAnimJoint988);

SoHAnimJoint976->addChildren(*SoHAnimJoint982);

SoHAnimJoint970->addChildren(*SoHAnimJoint976);

SoHAnimJoint940->addChildren(*SoHAnimJoint970);

SoHAnimJoint934->addChildren(*SoHAnimJoint940);

SoHAnimJoint928->addChildren(*SoHAnimJoint934);

SoHAnimJoint862->addChildren(*SoHAnimJoint928);

SoHAnimJoint12->addChildren(*SoHAnimJoint862);

SoHAnimHumanoid11->setSkeleton(*SoHAnimJoint12);

SoNode4->addChild(*SoHAnimHumanoid11);

SoNavigationInfo* SoNavigationInfo2374 = new SoNavigationInfo();
SoNavigationInfo2374->setHeadlight(false);
SoNode4->addChild(*SoNavigationInfo2374);

SoBackground* SoBackground2375 = new SoBackground();
SoBackground2375->setDEF(QString("Background1"));
SoBackground2375->setGroundColor(new float[]{0.5,0.5,0.5}, 3);
SoBackground2375->setSkyColor(new float[]{0.4,0.4,0.4}, 3);
SoNode4->addChild(*SoBackground2375);

SoDirectionalLight* SoDirectionalLight2376 = new SoDirectionalLight();
SoDirectionalLight2376->setGlobal(true);
SoNode4->addChild(*SoDirectionalLight2376);

SoViewpoint* SoViewpoint2377 = new SoViewpoint();
SoViewpoint2377->setCenterOfRotation(new float[]{0.0,1.0,0.0});
SoViewpoint2377->setDescription(QString("JinLOA4"));
SoViewpoint2377->setPosition(new float[]{0.0,1.0,3.0});
SoNode4->addChild(*SoViewpoint2377);

SoTransform* SoTransform2378 = new SoTransform();
SoTransform2378->setDEF(QString("Landmark000"));
//Another Parent Scene 0 0 0 landmark
SoShape* SoShape2379 = new SoShape();
SoShape2379->setDEF(QString("HAnim000Landmark"));
SoVRMLAppearance* SoVRMLAppearance2380 = new SoVRMLAppearance();
SoMaterial* SoMaterial2381 = new SoMaterial();
SoMaterial2381->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoMaterial2381->setEmissiveColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance2380->addChild(*SoMaterial2381);

SoShape2379->addChild(*SoVRMLAppearance2380);

SoSphere* SoSphere2382 = new SoSphere();
SoSphere2382->setRadius(0.01);
SoShape2379->setGeometry(*SoSphere2382);

SoTransform2378->addChild(*SoShape2379);

SoNode4->addChild(*SoTransform2378);

SoSceneManager0->setSceneGraph(*SoNode4);

return 0;
}
