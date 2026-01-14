
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
Someta3->setContent(QString("Humanoid4_1.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("identifier"));
Someta4->setContent(QString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4_1.x3d"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("description"));
Someta5->setContent(QString("An attempt at a standard LOA-4 skeleton"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("generator"));
Someta6->setContent(QString("h2.pl"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("modified"));
Someta7->setContent(QString("14 Jan 2023"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("creator"));
Someta8->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("created"));
Someta9->setContent(QString("9 November 2020"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("license"));
Someta10->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta10);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode11 = new SoNode();
SoTransform* SoTransform12 = new SoTransform();
//DEF for markerfor XYZ axes
SoShape* SoShape13 = new SoShape();
SoShape13->setDEF(QString("AxisLinesShape"));
//RGB lines showing XYZ axes
SoIndexedLineSet* SoIndexedLineSet14 = new SoIndexedLineSet();
SoIndexedLineSet14->setColorIndex(new int[]{0,1,2}, 3);
SoIndexedLineSet14->setColorPerVertex(false);
SoIndexedLineSet14->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
SoCoordinate* SoCoordinate15 = new SoCoordinate();
SoCoordinate15->setPoint(new float[]{0.0,0.0,0.0,0.1,0.0,0.0,0.0,0.1,0.0,0.0,0.0,0.1}, 12);
SoIndexedLineSet14->setCoord(*SoCoordinate15);

SoColor* SoColor16 = new SoColor();
SoColor16->setColor(new float[]{1.0,0.0,0.0,0.0,0.6,0.0,0.0,0.0,1.0}, 9);
SoIndexedLineSet14->setColor(*SoColor16);

SoShape13->setGeometry(*SoIndexedLineSet14);

SoTransform12->addChild(*SoShape13);

SoNode11->addChild(*SoTransform12);

SoGroup* SoGroup17 = new SoGroup();
//DEFS for markers of skeleton joints, segments, and sites
SoTransform* SoTransform18 = new SoTransform();
SoTransform* SoTransform19 = new SoTransform();
SoTransform19->setTranslation(new float[]{0.0,2.0,0.0});
SoShape* SoShape20 = new SoShape();
SoShape20->setDEF(QString("HAnimRootShape"));
SoSphere* SoSphere21 = new SoSphere();
SoSphere21->setRadius(0.02);
SoShape20->setGeometry(*SoSphere21);

SoVRMLAppearance* SoVRMLAppearance22 = new SoVRMLAppearance();
SoMaterial* SoMaterial23 = new SoMaterial();
SoMaterial23->setDEF(QString("HAnimRootMaterial"));
SoMaterial23->setDiffuseColor(new float[]{0.8,0.0,0.0});
SoMaterial23->setTransparency(0.3);
SoVRMLAppearance22->addChild(*SoMaterial23);

SoShape20->addChild(*SoVRMLAppearance22);

SoTransform19->addChild(*SoShape20);

SoTransform18->addChild(*SoTransform19);

SoTransform* SoTransform24 = new SoTransform();
SoTransform24->setTranslation(new float[]{0.0,2.1,0.0});
SoShape* SoShape25 = new SoShape();
SoShape25->setDEF(QString("HAnimJointShape"));
SoSphere* SoSphere26 = new SoSphere();
SoSphere26->setRadius(0.02);
SoShape25->setGeometry(*SoSphere26);

SoVRMLAppearance* SoVRMLAppearance27 = new SoVRMLAppearance();
SoMaterial* SoMaterial28 = new SoMaterial();
SoMaterial28->setDEF(QString("HAnimJointMaterial"));
SoMaterial28->setDiffuseColor(new float[]{0.0,0.0,0.8});
SoMaterial28->setTransparency(0.3);
SoVRMLAppearance27->addChild(*SoMaterial28);

SoShape25->addChild(*SoVRMLAppearance27);

SoTransform24->addChild(*SoShape25);

SoTransform18->addChild(*SoTransform24);

SoTransform* SoTransform29 = new SoTransform();
SoTransform29->setTranslation(new float[]{0.0,2.05,0.0});
SoShape* SoShape30 = new SoShape();
SoShape30->setDEF(QString("HAnimSegmentLine"));
SoLineSet* SoLineSet31 = new SoLineSet();
SoLineSet31->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA32 = new SoColorRGBA();
SoColorRGBA32->setDEF(QString("HAnimSegmentLineColorRGBA"));
SoColorRGBA32->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 8);
SoLineSet31->addChild(*SoColorRGBA32);

SoCoordinate* SoCoordinate33 = new SoCoordinate();
SoCoordinate33->setPoint(new float[]{-0.05,0.0,0.0,0.05,0.0,0.0}, 6);
SoLineSet31->setCoord(*SoCoordinate33);

SoShape30->setGeometry(*SoLineSet31);

SoTransform29->addChild(*SoShape30);

SoTransform18->addChild(*SoTransform29);

SoTransform* SoTransform34 = new SoTransform();
SoTransform34->setTranslation(new float[]{0.0,2.1,0.0});
SoShape* SoShape35 = new SoShape();
SoShape35->setDEF(QString("HAnimSiteShape"));
SoIndexedFaceSet* SoIndexedFaceSet36 = new SoIndexedFaceSet();
SoIndexedFaceSet36->setDEF(QString("DiamondIFS"));
SoIndexedFaceSet36->setCreaseAngle(0.5);
SoIndexedFaceSet36->setSolid(false);
SoIndexedFaceSet36->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoColorRGBA* SoColorRGBA37 = new SoColorRGBA();
SoColorRGBA37->setDEF(QString("HAnimSiteColorRGBA"));
SoColorRGBA37->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1,1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 24);
SoIndexedFaceSet36->addChild(*SoColorRGBA37);

SoCoordinate* SoCoordinate38 = new SoCoordinate();
SoCoordinate38->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet36->setCoord(*SoCoordinate38);

SoShape35->setGeometry(*SoIndexedFaceSet36);

SoVRMLAppearance* SoVRMLAppearance39 = new SoVRMLAppearance();
SoMaterial* SoMaterial40 = new SoMaterial();
SoMaterial40->setDiffuseColor(new float[]{1.0,1.0,0.0});
SoMaterial40->setTransparency(0.3);
SoVRMLAppearance39->addChild(*SoMaterial40);

SoShape35->addChild(*SoVRMLAppearance39);

SoTransform34->addChild(*SoShape35);

SoTransform18->addChild(*SoTransform34);

SoGroup17->addChild(*SoTransform18);

SoNode11->addChild(*SoGroup17);

SoNavigationInfo* SoNavigationInfo41 = new SoNavigationInfo();
SoNavigationInfo41->setSpeed(1.5);
SoNode11->addChild(*SoNavigationInfo41);

SoViewpoint* SoViewpoint42 = new SoViewpoint();
SoViewpoint42->setDescription(QString("default"));
SoNode11->addChild(*SoViewpoint42);

SoHAnimHumanoid* SoHAnimHumanoid43 = new SoHAnimHumanoid();
SoHAnimHumanoid43->X3DNode::setName(QString("HAnim"));
SoHAnimHumanoid43->setDEF(QString("hanim_HAnim"));
SoHAnimHumanoid43->setInfo(new QString[]{QString("humanoidVersion=2.0")}, 1);
SoHAnimHumanoid43->setVersion(QString("2.0"));
//</LOD>
SoCoordinate* SoCoordinate44 = new SoCoordinate();
SoHAnimHumanoid43->setSkinCoord(*SoCoordinate44);

SoHAnimJoint* SoHAnimJoint45 = new SoHAnimJoint();
SoHAnimJoint45->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint45->setDEF(QString("hanim_humanoid_root"));
SoHAnimJoint45->setCenter(new float[]{0.0,0.824,0.0277});
SoHAnimJoint45->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint45->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment46 = new SoHAnimSegment();
SoHAnimSegment46->X3DNode::setName(QString("sacrum"));
SoHAnimSegment46->setDEF(QString("hanim_sacrum"));
SoTransform* SoTransform47 = new SoTransform();
SoTransform47->setTranslation(new float[]{0.0,0.824,0.0277});
SoTransform* SoTransform48 = new SoTransform();
//Empty Transform
SoShape* SoShape49 = new SoShape();
SoShape49->setUSE(QString("HAnimJointShape"));
SoTransform48->addChild(*SoShape49);

SoTransform47->addChild(*SoTransform48);

SoHAnimSegment46->addChild(*SoTransform47);

SoShape* SoShape50 = new SoShape();
SoLineSet* SoLineSet51 = new SoLineSet();
SoLineSet51->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate52 = new SoCoordinate();
SoCoordinate52->setPoint(new float[]{0.0,0.824,0.0277,0.0,0.9149,0.0016}, 6);
SoLineSet51->setCoord(*SoCoordinate52);

//from humanoid_root to sacroiliac vertices 2
SoColorRGBA* SoColorRGBA53 = new SoColorRGBA();
SoColorRGBA53->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet51->addChild(*SoColorRGBA53);

SoShape50->setGeometry(*SoLineSet51);

SoHAnimSegment46->addChild(*SoShape50);

SoHAnimSite* SoHAnimSite54 = new SoHAnimSite();
SoHAnimSite54->X3DNode::setName(QString("buttocks_standing_wall_contact_point_pt"));
SoHAnimSite54->setDEF(QString("hanim_buttocks_standing_wall_contact_point_pt"));
SoTouchSensor* SoTouchSensor55 = new SoTouchSensor();
SoTouchSensor55->setDescription(QString("HAnimSite buttocks_standing_wall_contact_point_pt"));
SoHAnimSite54->addChild(*SoTouchSensor55);

SoShape* SoShape56 = new SoShape();
SoShape56->setUSE(QString("HAnimSiteShape"));
SoHAnimSite54->addChild(*SoShape56);

SoHAnimSegment46->addChild(*SoHAnimSite54);

SoHAnimSite* SoHAnimSite57 = new SoHAnimSite();
SoHAnimSite57->X3DNode::setName(QString("crotch_pt"));
SoHAnimSite57->setDEF(QString("hanim_crotch_pt"));
SoHAnimSite57->setTranslation(new float[]{0.0034,0.8266,0.0257});
SoTouchSensor* SoTouchSensor58 = new SoTouchSensor();
SoTouchSensor58->setDescription(QString("HAnimSite crotch_pt"));
SoHAnimSite57->addChild(*SoTouchSensor58);

SoShape* SoShape59 = new SoShape();
SoShape59->setUSE(QString("HAnimSiteShape"));
SoHAnimSite57->addChild(*SoShape59);

SoHAnimSegment46->addChild(*SoHAnimSite57);

SoHAnimSite* SoHAnimSite60 = new SoHAnimSite();
SoHAnimSite60->X3DNode::setName(QString("l_asis_pt"));
SoHAnimSite60->setDEF(QString("hanim_l_asis_pt"));
SoHAnimSite60->setTranslation(new float[]{0.0925,0.9983,0.1052});
SoTouchSensor* SoTouchSensor61 = new SoTouchSensor();
SoTouchSensor61->setDescription(QString("HAnimSite l_asis_pt"));
SoHAnimSite60->addChild(*SoTouchSensor61);

SoShape* SoShape62 = new SoShape();
SoShape62->setUSE(QString("HAnimSiteShape"));
SoHAnimSite60->addChild(*SoShape62);

SoHAnimSegment46->addChild(*SoHAnimSite60);

SoHAnimSite* SoHAnimSite63 = new SoHAnimSite();
SoHAnimSite63->X3DNode::setName(QString("l_iliocristale_pt"));
SoHAnimSite63->setDEF(QString("hanim_l_iliocristale_pt"));
SoHAnimSite63->setTranslation(new float[]{0.1612,1.0537,0.0008});
SoTouchSensor* SoTouchSensor64 = new SoTouchSensor();
SoTouchSensor64->setDescription(QString("HAnimSite l_iliocristale_pt"));
SoHAnimSite63->addChild(*SoTouchSensor64);

SoShape* SoShape65 = new SoShape();
SoShape65->setUSE(QString("HAnimSiteShape"));
SoHAnimSite63->addChild(*SoShape65);

SoHAnimSegment46->addChild(*SoHAnimSite63);

SoHAnimSite* SoHAnimSite66 = new SoHAnimSite();
SoHAnimSite66->X3DNode::setName(QString("l_psis_pt"));
SoHAnimSite66->setDEF(QString("hanim_l_psis_pt"));
SoHAnimSite66->setTranslation(new float[]{0.0774,1.019,-0.1151});
SoTouchSensor* SoTouchSensor67 = new SoTouchSensor();
SoTouchSensor67->setDescription(QString("HAnimSite l_psis_pt"));
SoHAnimSite66->addChild(*SoTouchSensor67);

SoShape* SoShape68 = new SoShape();
SoShape68->setUSE(QString("HAnimSiteShape"));
SoHAnimSite66->addChild(*SoShape68);

SoHAnimSegment46->addChild(*SoHAnimSite66);

SoHAnimSite* SoHAnimSite69 = new SoHAnimSite();
SoHAnimSite69->X3DNode::setName(QString("l_trochanterion_pt"));
SoHAnimSite69->setDEF(QString("hanim_l_trochanterion_pt"));
SoHAnimSite69->setTranslation(new float[]{0.1677,0.8336,0.0303});
SoTouchSensor* SoTouchSensor70 = new SoTouchSensor();
SoTouchSensor70->setDescription(QString("HAnimSite l_trochanterion_pt"));
SoHAnimSite69->addChild(*SoTouchSensor70);

SoShape* SoShape71 = new SoShape();
SoShape71->setUSE(QString("HAnimSiteShape"));
SoHAnimSite69->addChild(*SoShape71);

SoHAnimSegment46->addChild(*SoHAnimSite69);

SoHAnimSite* SoHAnimSite72 = new SoHAnimSite();
SoHAnimSite72->X3DNode::setName(QString("r_asis_pt"));
SoHAnimSite72->setDEF(QString("hanim_r_asis_pt"));
SoHAnimSite72->setTranslation(new float[]{-0.0887,1.0021,0.1112});
SoTouchSensor* SoTouchSensor73 = new SoTouchSensor();
SoTouchSensor73->setDescription(QString("HAnimSite r_asis_pt"));
SoHAnimSite72->addChild(*SoTouchSensor73);

SoShape* SoShape74 = new SoShape();
SoShape74->setUSE(QString("HAnimSiteShape"));
SoHAnimSite72->addChild(*SoShape74);

SoHAnimSegment46->addChild(*SoHAnimSite72);

SoHAnimSite* SoHAnimSite75 = new SoHAnimSite();
SoHAnimSite75->X3DNode::setName(QString("r_iliocristale_pt"));
SoHAnimSite75->setDEF(QString("hanim_r_iliocristale_pt"));
SoHAnimSite75->setTranslation(new float[]{-0.1525,1.0628,0.0035});
SoTouchSensor* SoTouchSensor76 = new SoTouchSensor();
SoTouchSensor76->setDescription(QString("HAnimSite r_iliocristale_pt"));
SoHAnimSite75->addChild(*SoTouchSensor76);

SoShape* SoShape77 = new SoShape();
SoShape77->setUSE(QString("HAnimSiteShape"));
SoHAnimSite75->addChild(*SoShape77);

SoHAnimSegment46->addChild(*SoHAnimSite75);

SoHAnimSite* SoHAnimSite78 = new SoHAnimSite();
SoHAnimSite78->X3DNode::setName(QString("r_psis_pt"));
SoHAnimSite78->setDEF(QString("hanim_r_psis_pt"));
SoHAnimSite78->setTranslation(new float[]{-0.0716,1.019,-0.1138});
SoTouchSensor* SoTouchSensor79 = new SoTouchSensor();
SoTouchSensor79->setDescription(QString("HAnimSite r_psis_pt"));
SoHAnimSite78->addChild(*SoTouchSensor79);

SoShape* SoShape80 = new SoShape();
SoShape80->setUSE(QString("HAnimSiteShape"));
SoHAnimSite78->addChild(*SoShape80);

SoHAnimSegment46->addChild(*SoHAnimSite78);

SoHAnimSite* SoHAnimSite81 = new SoHAnimSite();
SoHAnimSite81->X3DNode::setName(QString("r_trochanterion_pt"));
SoHAnimSite81->setDEF(QString("hanim_r_trochanterion_pt"));
SoHAnimSite81->setTranslation(new float[]{-0.1689,0.8419,0.0352});
SoTouchSensor* SoTouchSensor82 = new SoTouchSensor();
SoTouchSensor82->setDescription(QString("HAnimSite r_trochanterion_pt"));
SoHAnimSite81->addChild(*SoTouchSensor82);

SoShape* SoShape83 = new SoShape();
SoShape83->setUSE(QString("HAnimSiteShape"));
SoHAnimSite81->addChild(*SoShape83);

SoHAnimSegment46->addChild(*SoHAnimSite81);

SoShape* SoShape84 = new SoShape();
SoLineSet* SoLineSet85 = new SoLineSet();
SoLineSet85->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate86 = new SoCoordinate();
SoCoordinate86->setPoint(new float[]{0.0,0.824,0.0277,0.0028,1.0568,-0.0776}, 6);
SoLineSet85->setCoord(*SoCoordinate86);

//from humanoid_root to vl5 vertices 2
SoColorRGBA* SoColorRGBA87 = new SoColorRGBA();
SoColorRGBA87->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet85->addChild(*SoColorRGBA87);

SoShape84->setGeometry(*SoLineSet85);

SoHAnimSegment46->addChild(*SoShape84);

SoHAnimSite* SoHAnimSite88 = new SoHAnimSite();
SoHAnimSite88->X3DNode::setName(QString("navel_pt"));
SoHAnimSite88->setDEF(QString("hanim_navel_pt"));
SoHAnimSite88->setTranslation(new float[]{0.0069,1.0966,0.1017});
SoTouchSensor* SoTouchSensor89 = new SoTouchSensor();
SoTouchSensor89->setDescription(QString("HAnimSite navel_pt"));
SoHAnimSite88->addChild(*SoTouchSensor89);

SoShape* SoShape90 = new SoShape();
SoShape90->setUSE(QString("HAnimSiteShape"));
SoHAnimSite88->addChild(*SoShape90);

SoHAnimSegment46->addChild(*SoHAnimSite88);

SoHAnimSite* SoHAnimSite91 = new SoHAnimSite();
SoHAnimSite91->X3DNode::setName(QString("waist_preferred_anterior_pt"));
SoHAnimSite91->setDEF(QString("hanim_waist_preferred_anterior_pt"));
SoTouchSensor* SoTouchSensor92 = new SoTouchSensor();
SoTouchSensor92->setDescription(QString("HAnimSite waist_preferred_anterior_pt"));
SoHAnimSite91->addChild(*SoTouchSensor92);

SoShape* SoShape93 = new SoShape();
SoShape93->setUSE(QString("HAnimSiteShape"));
SoHAnimSite91->addChild(*SoShape93);

SoHAnimSegment46->addChild(*SoHAnimSite91);

SoHAnimSite* SoHAnimSite94 = new SoHAnimSite();
SoHAnimSite94->X3DNode::setName(QString("waist_preferred_posterior_pt"));
SoHAnimSite94->setDEF(QString("hanim_waist_preferred_posterior_pt"));
SoHAnimSite94->setTranslation(new float[]{0.29,1.0915,-0.1091});
SoTouchSensor* SoTouchSensor95 = new SoTouchSensor();
SoTouchSensor95->setDescription(QString("HAnimSite waist_preferred_posterior_pt"));
SoHAnimSite94->addChild(*SoTouchSensor95);

SoShape* SoShape96 = new SoShape();
SoShape96->setUSE(QString("HAnimSiteShape"));
SoHAnimSite94->addChild(*SoShape96);

SoHAnimSegment46->addChild(*SoHAnimSite94);

SoHAnimJoint45->addChildren(*SoHAnimSegment46);

SoHAnimJoint* SoHAnimJoint97 = new SoHAnimJoint();
SoHAnimJoint97->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint97->setDEF(QString("hanim_sacroiliac"));
SoHAnimJoint97->setCenter(new float[]{0.0,0.9149,0.0016});
SoHAnimJoint97->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint97->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment98 = new SoHAnimSegment();
SoHAnimSegment98->X3DNode::setName(QString("pelvis"));
SoHAnimSegment98->setDEF(QString("hanim_pelvis"));
SoTransform* SoTransform99 = new SoTransform();
SoTransform99->setTranslation(new float[]{0.0,0.9149,0.0016});
SoTransform* SoTransform100 = new SoTransform();
//Empty Transform
SoShape* SoShape101 = new SoShape();
SoShape101->setUSE(QString("HAnimJointShape"));
SoTransform100->addChild(*SoShape101);

SoTransform99->addChild(*SoTransform100);

SoHAnimSegment98->addChild(*SoTransform99);

SoShape* SoShape102 = new SoShape();
SoLineSet* SoLineSet103 = new SoLineSet();
SoLineSet103->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate104 = new SoCoordinate();
SoCoordinate104->setPoint(new float[]{0.0,0.9149,0.0016,0.0961,0.9124,-0.0001}, 6);
SoLineSet103->setCoord(*SoCoordinate104);

//from sacroiliac to l_hip vertices 2
SoColorRGBA* SoColorRGBA105 = new SoColorRGBA();
SoColorRGBA105->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet103->addChild(*SoColorRGBA105);

SoShape102->setGeometry(*SoLineSet103);

SoHAnimSegment98->addChild(*SoShape102);

SoHAnimSite* SoHAnimSite106 = new SoHAnimSite();
SoHAnimSite106->X3DNode::setName(QString("l_femoral_lateral_epicondyles_pt"));
SoHAnimSite106->setDEF(QString("hanim_l_femoral_lateral_epicondyles_pt"));
SoHAnimSite106->setTranslation(new float[]{0.1598,0.4967,0.0297});
SoTouchSensor* SoTouchSensor107 = new SoTouchSensor();
SoTouchSensor107->setDescription(QString("HAnimSite l_femoral_lateral_epicondyles_pt"));
SoHAnimSite106->addChild(*SoTouchSensor107);

SoShape* SoShape108 = new SoShape();
SoShape108->setUSE(QString("HAnimSiteShape"));
SoHAnimSite106->addChild(*SoShape108);

SoHAnimSegment98->addChild(*SoHAnimSite106);

SoHAnimSite* SoHAnimSite109 = new SoHAnimSite();
SoHAnimSite109->X3DNode::setName(QString("l_femoral_medial_epicondyles_pt"));
SoHAnimSite109->setDEF(QString("hanim_l_femoral_medial_epicondyles_pt"));
SoHAnimSite109->setTranslation(new float[]{0.0398,0.4946,0.0303});
SoTouchSensor* SoTouchSensor110 = new SoTouchSensor();
SoTouchSensor110->setDescription(QString("HAnimSite l_femoral_medial_epicondyles_pt"));
SoHAnimSite109->addChild(*SoTouchSensor110);

SoShape* SoShape111 = new SoShape();
SoShape111->setUSE(QString("HAnimSiteShape"));
SoHAnimSite109->addChild(*SoShape111);

SoHAnimSegment98->addChild(*SoHAnimSite109);

SoHAnimSite* SoHAnimSite112 = new SoHAnimSite();
SoHAnimSite112->X3DNode::setName(QString("l_knee_crease_pt"));
SoHAnimSite112->setDEF(QString("hanim_l_knee_crease_pt"));
SoHAnimSite112->setTranslation(new float[]{0.0993,0.4881,-0.0309});
SoTouchSensor* SoTouchSensor113 = new SoTouchSensor();
SoTouchSensor113->setDescription(QString("HAnimSite l_knee_crease_pt"));
SoHAnimSite112->addChild(*SoTouchSensor113);

SoShape* SoShape114 = new SoShape();
SoShape114->setUSE(QString("HAnimSiteShape"));
SoHAnimSite112->addChild(*SoShape114);

SoHAnimSegment98->addChild(*SoHAnimSite112);

SoHAnimSite* SoHAnimSite115 = new SoHAnimSite();
SoHAnimSite115->X3DNode::setName(QString("l_suprapatella_pt"));
SoHAnimSite115->setDEF(QString("hanim_l_suprapatella_pt"));
SoTouchSensor* SoTouchSensor116 = new SoTouchSensor();
SoTouchSensor116->setDescription(QString("HAnimSite l_suprapatella_pt"));
SoHAnimSite115->addChild(*SoTouchSensor116);

SoShape* SoShape117 = new SoShape();
SoShape117->setUSE(QString("HAnimSiteShape"));
SoHAnimSite115->addChild(*SoShape117);

SoHAnimSegment98->addChild(*SoHAnimSite115);

SoShape* SoShape118 = new SoShape();
SoLineSet* SoLineSet119 = new SoLineSet();
SoLineSet119->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate120 = new SoCoordinate();
SoCoordinate120->setPoint(new float[]{0.0,0.9149,0.0016,-0.095,0.9171,0.0029}, 6);
SoLineSet119->setCoord(*SoCoordinate120);

//from sacroiliac to r_hip vertices 2
SoColorRGBA* SoColorRGBA121 = new SoColorRGBA();
SoColorRGBA121->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet119->addChild(*SoColorRGBA121);

SoShape118->setGeometry(*SoLineSet119);

SoHAnimSegment98->addChild(*SoShape118);

SoHAnimSite* SoHAnimSite122 = new SoHAnimSite();
SoHAnimSite122->X3DNode::setName(QString("r_femoral_lateral_epicondyles_pt"));
SoHAnimSite122->setDEF(QString("hanim_r_femoral_lateral_epicondyles_pt"));
SoHAnimSite122->setTranslation(new float[]{-0.1421,0.4992,0.031});
SoTouchSensor* SoTouchSensor123 = new SoTouchSensor();
SoTouchSensor123->setDescription(QString("HAnimSite r_femoral_lateral_epicondyles_pt"));
SoHAnimSite122->addChild(*SoTouchSensor123);

SoShape* SoShape124 = new SoShape();
SoShape124->setUSE(QString("HAnimSiteShape"));
SoHAnimSite122->addChild(*SoShape124);

SoHAnimSegment98->addChild(*SoHAnimSite122);

SoHAnimSite* SoHAnimSite125 = new SoHAnimSite();
SoHAnimSite125->X3DNode::setName(QString("r_femoral_medial_epicondyles_pt"));
SoHAnimSite125->setDEF(QString("hanim_r_femoral_medial_epicondyles_pt"));
SoHAnimSite125->setTranslation(new float[]{-0.0221,0.5014,0.0289});
SoTouchSensor* SoTouchSensor126 = new SoTouchSensor();
SoTouchSensor126->setDescription(QString("HAnimSite r_femoral_medial_epicondyles_pt"));
SoHAnimSite125->addChild(*SoTouchSensor126);

SoShape* SoShape127 = new SoShape();
SoShape127->setUSE(QString("HAnimSiteShape"));
SoHAnimSite125->addChild(*SoShape127);

SoHAnimSegment98->addChild(*SoHAnimSite125);

SoHAnimSite* SoHAnimSite128 = new SoHAnimSite();
SoHAnimSite128->X3DNode::setName(QString("r_knee_crease_pt"));
SoHAnimSite128->setDEF(QString("hanim_r_knee_crease_pt"));
SoHAnimSite128->setTranslation(new float[]{-0.0825,0.4932,-0.0326});
SoTouchSensor* SoTouchSensor129 = new SoTouchSensor();
SoTouchSensor129->setDescription(QString("HAnimSite r_knee_crease_pt"));
SoHAnimSite128->addChild(*SoTouchSensor129);

SoShape* SoShape130 = new SoShape();
SoShape130->setUSE(QString("HAnimSiteShape"));
SoHAnimSite128->addChild(*SoShape130);

SoHAnimSegment98->addChild(*SoHAnimSite128);

SoHAnimSite* SoHAnimSite131 = new SoHAnimSite();
SoHAnimSite131->X3DNode::setName(QString("r_suprapatella_pt"));
SoHAnimSite131->setDEF(QString("hanim_r_suprapatella_pt"));
SoTouchSensor* SoTouchSensor132 = new SoTouchSensor();
SoTouchSensor132->setDescription(QString("HAnimSite r_suprapatella_pt"));
SoHAnimSite131->addChild(*SoTouchSensor132);

SoShape* SoShape133 = new SoShape();
SoShape133->setUSE(QString("HAnimSiteShape"));
SoHAnimSite131->addChild(*SoShape133);

SoHAnimSegment98->addChild(*SoHAnimSite131);

SoHAnimJoint97->addChildren(*SoHAnimSegment98);

SoHAnimJoint* SoHAnimJoint134 = new SoHAnimJoint();
SoHAnimJoint134->X3DNode::setName(QString("l_hip"));
SoHAnimJoint134->setDEF(QString("hanim_l_hip"));
SoHAnimJoint134->setCenter(new float[]{0.0961,0.9124,-0.0001});
SoHAnimJoint134->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint134->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment135 = new SoHAnimSegment();
SoHAnimSegment135->X3DNode::setName(QString("l_thigh"));
SoHAnimSegment135->setDEF(QString("hanim_l_thigh"));
SoTransform* SoTransform136 = new SoTransform();
SoTransform136->setTranslation(new float[]{0.0961,0.9124,-0.0001});
SoTransform* SoTransform137 = new SoTransform();
//Empty Transform
SoShape* SoShape138 = new SoShape();
SoShape138->setUSE(QString("HAnimJointShape"));
SoTransform137->addChild(*SoShape138);

SoTransform136->addChild(*SoTransform137);

SoHAnimSegment135->addChild(*SoTransform136);

SoShape* SoShape139 = new SoShape();
SoLineSet* SoLineSet140 = new SoLineSet();
SoLineSet140->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate141 = new SoCoordinate();
SoCoordinate141->setPoint(new float[]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308}, 6);
SoLineSet140->setCoord(*SoCoordinate141);

//from l_hip to l_knee vertices 2
SoColorRGBA* SoColorRGBA142 = new SoColorRGBA();
SoColorRGBA142->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet140->addChild(*SoColorRGBA142);

SoShape139->setGeometry(*SoLineSet140);

SoHAnimSegment135->addChild(*SoShape139);

SoHAnimSite* SoHAnimSite143 = new SoHAnimSite();
SoHAnimSite143->X3DNode::setName(QString("l_lateral_malleolus_pt"));
SoHAnimSite143->setDEF(QString("hanim_l_lateral_malleolus_pt"));
SoHAnimSite143->setTranslation(new float[]{0.1308,0.0597,-0.1032});
SoTouchSensor* SoTouchSensor144 = new SoTouchSensor();
SoTouchSensor144->setDescription(QString("HAnimSite l_lateral_malleolus_pt"));
SoHAnimSite143->addChild(*SoTouchSensor144);

SoShape* SoShape145 = new SoShape();
SoShape145->setUSE(QString("HAnimSiteShape"));
SoHAnimSite143->addChild(*SoShape145);

SoHAnimSegment135->addChild(*SoHAnimSite143);

SoHAnimSite* SoHAnimSite146 = new SoHAnimSite();
SoHAnimSite146->X3DNode::setName(QString("l_medial_malleolus_pt"));
SoHAnimSite146->setDEF(QString("hanim_l_medial_malleolus_pt"));
SoHAnimSite146->setTranslation(new float[]{0.089,0.0716,-0.0881});
SoTouchSensor* SoTouchSensor147 = new SoTouchSensor();
SoTouchSensor147->setDescription(QString("HAnimSite l_medial_malleolus_pt"));
SoHAnimSite146->addChild(*SoTouchSensor147);

SoShape* SoShape148 = new SoShape();
SoShape148->setUSE(QString("HAnimSiteShape"));
SoHAnimSite146->addChild(*SoShape148);

SoHAnimSegment135->addChild(*SoHAnimSite146);

SoHAnimSite* SoHAnimSite149 = new SoHAnimSite();
SoHAnimSite149->X3DNode::setName(QString("l_tibiale_pt"));
SoHAnimSite149->setDEF(QString("hanim_l_tibiale_pt"));
SoTouchSensor* SoTouchSensor150 = new SoTouchSensor();
SoTouchSensor150->setDescription(QString("HAnimSite l_tibiale_pt"));
SoHAnimSite149->addChild(*SoTouchSensor150);

SoShape* SoShape151 = new SoShape();
SoShape151->setUSE(QString("HAnimSiteShape"));
SoHAnimSite149->addChild(*SoShape151);

SoHAnimSegment135->addChild(*SoHAnimSite149);

SoHAnimJoint134->addChildren(*SoHAnimSegment135);

SoHAnimJoint* SoHAnimJoint152 = new SoHAnimJoint();
SoHAnimJoint152->X3DNode::setName(QString("l_knee"));
SoHAnimJoint152->setDEF(QString("hanim_l_knee"));
SoHAnimJoint152->setCenter(new float[]{0.104,0.4867,0.0308});
SoHAnimJoint152->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint152->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment153 = new SoHAnimSegment();
SoHAnimSegment153->X3DNode::setName(QString("l_calf"));
SoHAnimSegment153->setDEF(QString("hanim_l_calf"));
SoTransform* SoTransform154 = new SoTransform();
SoTransform154->setTranslation(new float[]{0.104,0.4867,0.0308});
SoTransform* SoTransform155 = new SoTransform();
//Empty Transform
SoShape* SoShape156 = new SoShape();
SoShape156->setUSE(QString("HAnimJointShape"));
SoTransform155->addChild(*SoShape156);

SoTransform154->addChild(*SoTransform155);

SoHAnimSegment153->addChild(*SoTransform154);

SoShape* SoShape157 = new SoShape();
SoLineSet* SoLineSet158 = new SoLineSet();
SoLineSet158->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate159 = new SoCoordinate();
SoCoordinate159->setPoint(new float[]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736}, 6);
SoLineSet158->setCoord(*SoCoordinate159);

//from l_knee to l_talocrural vertices 2
SoColorRGBA* SoColorRGBA160 = new SoColorRGBA();
SoColorRGBA160->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet158->addChild(*SoColorRGBA160);

SoShape157->setGeometry(*SoLineSet158);

SoHAnimSegment153->addChild(*SoShape157);

SoHAnimSite* SoHAnimSite161 = new SoHAnimSite();
SoHAnimSite161->X3DNode::setName(QString("l_calcaneus_posterior_pt"));
SoHAnimSite161->setDEF(QString("hanim_l_calcaneus_posterior_pt"));
SoHAnimSite161->setTranslation(new float[]{0.0974,0.0259,-0.1171});
SoTouchSensor* SoTouchSensor162 = new SoTouchSensor();
SoTouchSensor162->setDescription(QString("HAnimSite l_calcaneus_posterior_pt"));
SoHAnimSite161->addChild(*SoTouchSensor162);

SoShape* SoShape163 = new SoShape();
SoShape163->setUSE(QString("HAnimSiteShape"));
SoHAnimSite161->addChild(*SoShape163);

SoHAnimSegment153->addChild(*SoHAnimSite161);

SoHAnimSite* SoHAnimSite164 = new SoHAnimSite();
SoHAnimSite164->X3DNode::setName(QString("l_sphyrion_pt"));
SoHAnimSite164->setDEF(QString("hanim_l_sphyrion_pt"));
SoHAnimSite164->setTranslation(new float[]{0.089,0.0575,-0.0943});
SoTouchSensor* SoTouchSensor165 = new SoTouchSensor();
SoTouchSensor165->setDescription(QString("HAnimSite l_sphyrion_pt"));
SoHAnimSite164->addChild(*SoTouchSensor165);

SoShape* SoShape166 = new SoShape();
SoShape166->setUSE(QString("HAnimSiteShape"));
SoHAnimSite164->addChild(*SoShape166);

SoHAnimSegment153->addChild(*SoHAnimSite164);

SoHAnimJoint152->addChildren(*SoHAnimSegment153);

SoHAnimJoint* SoHAnimJoint167 = new SoHAnimJoint();
SoHAnimJoint167->X3DNode::setName(QString("l_talocrural"));
SoHAnimJoint167->setDEF(QString("hanim_l_talocrural"));
SoHAnimJoint167->setCenter(new float[]{0.1101,0.0656,-0.0736});
SoHAnimJoint167->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint167->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment168 = new SoHAnimSegment();
SoHAnimSegment168->X3DNode::setName(QString("l_talus"));
SoHAnimSegment168->setDEF(QString("hanim_l_talus"));
SoTransform* SoTransform169 = new SoTransform();
SoTransform169->setScale(new float[]{0.15,0.15,0.15});
SoTransform169->setTranslation(new float[]{0.08,0.06,-0.025});
SoTransform169->setRotation(new float[]{1.0,0.0,0.0,-1.57});
//Transform left foot
SoTransform* SoTransform170 = new SoTransform();
//Empty Transform left foot
SoShape* SoShape171 = new SoShape();
SoShape171->setUSE(QString("HAnimJointShape"));
SoTransform170->addChild(*SoShape171);

SoTransform169->addChild(*SoTransform170);

SoHAnimSegment168->addChild(*SoTransform169);

SoShape* SoShape172 = new SoShape();
SoLineSet* SoLineSet173 = new SoLineSet();
SoLineSet173->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate174 = new SoCoordinate();
SoCoordinate174->setPoint(new float[]{0.1101,0.0656,-0.0736,3.4715,0.0374,0.6807}, 6);
SoLineSet173->setCoord(*SoCoordinate174);

//from l_talocrural to l_talocalcaneonavicular vertices 2
SoColorRGBA* SoColorRGBA175 = new SoColorRGBA();
SoColorRGBA175->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet173->addChild(*SoColorRGBA175);

SoShape172->setGeometry(*SoLineSet173);

SoHAnimSegment168->addChild(*SoShape172);

SoShape* SoShape176 = new SoShape();
SoLineSet* SoLineSet177 = new SoLineSet();
SoLineSet177->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate178 = new SoCoordinate();
SoCoordinate178->setPoint(new float[]{0.1101,0.0656,-0.0736,3.9515,0.0653,-0.6895}, 6);
SoLineSet177->setCoord(*SoCoordinate178);

//from l_talocrural to l_calcaneocuboid vertices 2
SoColorRGBA* SoColorRGBA179 = new SoColorRGBA();
SoColorRGBA179->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet177->addChild(*SoColorRGBA179);

SoShape176->setGeometry(*SoLineSet177);

SoHAnimSegment168->addChild(*SoShape176);

SoHAnimJoint167->addChildren(*SoHAnimSegment168);

SoHAnimJoint* SoHAnimJoint180 = new SoHAnimJoint();
SoHAnimJoint180->X3DNode::setName(QString("l_talocalcaneonavicular"));
SoHAnimJoint180->setDEF(QString("hanim_l_talocalcaneonavicular"));
SoHAnimJoint180->setCenter(new float[]{3.4715,0.0374,0.6807});
SoHAnimJoint180->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint180->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment181 = new SoHAnimSegment();
SoHAnimSegment181->X3DNode::setName(QString("l_navicular"));
SoHAnimSegment181->setDEF(QString("hanim_l_navicular"));
SoTransform* SoTransform182 = new SoTransform();
SoTransform182->setTranslation(new float[]{3.4715,0.0374,0.6807});
SoTransform* SoTransform183 = new SoTransform();
//Empty Transform
SoShape* SoShape184 = new SoShape();
SoShape184->setUSE(QString("HAnimJointShape"));
SoTransform183->addChild(*SoShape184);

SoTransform182->addChild(*SoTransform183);

SoHAnimSegment181->addChild(*SoTransform182);

SoShape* SoShape185 = new SoShape();
SoLineSet* SoLineSet186 = new SoLineSet();
SoLineSet186->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate187 = new SoCoordinate();
SoCoordinate187->setPoint(new float[]{3.4715,0.0374,0.6807,2.9855,0.0311,1.2819}, 6);
SoLineSet186->setCoord(*SoCoordinate187);

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
SoColorRGBA* SoColorRGBA188 = new SoColorRGBA();
SoColorRGBA188->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet186->addChild(*SoColorRGBA188);

SoShape185->setGeometry(*SoLineSet186);

SoHAnimSegment181->addChild(*SoShape185);

SoShape* SoShape189 = new SoShape();
SoLineSet* SoLineSet190 = new SoLineSet();
SoLineSet190->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate191 = new SoCoordinate();
SoCoordinate191->setPoint(new float[]{3.4715,0.0374,0.6807,3.6105,0.033,1.4168}, 6);
SoLineSet190->setCoord(*SoCoordinate191);

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
SoColorRGBA* SoColorRGBA192 = new SoColorRGBA();
SoColorRGBA192->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet190->addChild(*SoColorRGBA192);

SoShape189->setGeometry(*SoLineSet190);

SoHAnimSegment181->addChild(*SoShape189);

SoShape* SoShape193 = new SoShape();
SoLineSet* SoLineSet194 = new SoLineSet();
SoLineSet194->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate195 = new SoCoordinate();
SoCoordinate195->setPoint(new float[]{3.4715,0.0374,0.6807,4.1235,0.0328,1.3453}, 6);
SoLineSet194->setCoord(*SoCoordinate195);

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
SoColorRGBA* SoColorRGBA196 = new SoColorRGBA();
SoColorRGBA196->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet194->addChild(*SoColorRGBA196);

SoShape193->setGeometry(*SoLineSet194);

SoHAnimSegment181->addChild(*SoShape193);

SoHAnimJoint180->addChildren(*SoHAnimSegment181);

SoHAnimJoint* SoHAnimJoint197 = new SoHAnimJoint();
SoHAnimJoint197->X3DNode::setName(QString("l_cuneonavicular_1"));
SoHAnimJoint197->setDEF(QString("hanim_l_cuneonavicular_1"));
SoHAnimJoint197->setCenter(new float[]{2.9855,0.0311,1.2819});
SoHAnimJoint197->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint197->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment198 = new SoHAnimSegment();
SoHAnimSegment198->X3DNode::setName(QString("l_cuneiform_1"));
SoHAnimSegment198->setDEF(QString("hanim_l_cuneiform_1"));
SoTransform* SoTransform199 = new SoTransform();
SoTransform199->setTranslation(new float[]{2.9855,0.0311,1.2819});
SoTransform* SoTransform200 = new SoTransform();
//Empty Transform
SoShape* SoShape201 = new SoShape();
SoShape201->setUSE(QString("HAnimJointShape"));
SoTransform200->addChild(*SoShape201);

SoTransform199->addChild(*SoTransform200);

SoHAnimSegment198->addChild(*SoTransform199);

SoShape* SoShape202 = new SoShape();
SoLineSet* SoLineSet203 = new SoLineSet();
SoLineSet203->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate204 = new SoCoordinate();
SoCoordinate204->setPoint(new float[]{2.9855,0.0311,1.2819,2.8635,0.0194,2.4285}, 6);
SoLineSet203->setCoord(*SoCoordinate204);

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
SoColorRGBA* SoColorRGBA205 = new SoColorRGBA();
SoColorRGBA205->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet203->addChild(*SoColorRGBA205);

SoShape202->setGeometry(*SoLineSet203);

SoHAnimSegment198->addChild(*SoShape202);

SoHAnimJoint197->addChildren(*SoHAnimSegment198);

SoHAnimJoint* SoHAnimJoint206 = new SoHAnimJoint();
SoHAnimJoint206->X3DNode::setName(QString("l_tarsometatarsal_1"));
SoHAnimJoint206->setDEF(QString("hanim_l_tarsometatarsal_1"));
SoHAnimJoint206->setCenter(new float[]{2.8635,0.0194,2.4285});
SoHAnimJoint206->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint206->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment207 = new SoHAnimSegment();
SoHAnimSegment207->X3DNode::setName(QString("l_metatarsal_1"));
SoHAnimSegment207->setDEF(QString("hanim_l_metatarsal_1"));
SoTransform* SoTransform208 = new SoTransform();
SoTransform208->setTranslation(new float[]{2.8635,0.0194,2.4285});
SoTransform* SoTransform209 = new SoTransform();
//Empty Transform
SoShape* SoShape210 = new SoShape();
SoShape210->setUSE(QString("HAnimJointShape"));
SoTransform209->addChild(*SoShape210);

SoTransform208->addChild(*SoTransform209);

SoHAnimSegment207->addChild(*SoTransform208);

SoShape* SoShape211 = new SoShape();
SoLineSet* SoLineSet212 = new SoLineSet();
SoLineSet212->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate213 = new SoCoordinate();
SoCoordinate213->setPoint(new float[]{2.8635,0.0194,2.4285,2.7525,0.0077,4.6255}, 6);
SoLineSet212->setCoord(*SoCoordinate213);

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
SoColorRGBA* SoColorRGBA214 = new SoColorRGBA();
SoColorRGBA214->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet212->addChild(*SoColorRGBA214);

SoShape211->setGeometry(*SoLineSet212);

SoHAnimSegment207->addChild(*SoShape211);

SoHAnimSite* SoHAnimSite215 = new SoHAnimSite();
SoHAnimSite215->X3DNode::setName(QString("l_metatarsal_phalanx_1_pt"));
SoHAnimSite215->setDEF(QString("hanim_l_metatarsal_phalanx_1_pt"));
SoTouchSensor* SoTouchSensor216 = new SoTouchSensor();
SoTouchSensor216->setDescription(QString("HAnimSite l_metatarsal_phalanx_1_pt"));
SoHAnimSite215->addChild(*SoTouchSensor216);

SoShape* SoShape217 = new SoShape();
SoShape217->setUSE(QString("HAnimSiteShape"));
SoHAnimSite215->addChild(*SoShape217);

SoHAnimSegment207->addChild(*SoHAnimSite215);

SoHAnimJoint206->addChildren(*SoHAnimSegment207);

SoHAnimJoint* SoHAnimJoint218 = new SoHAnimJoint();
SoHAnimJoint218->X3DNode::setName(QString("l_metatarsophalangeal_1"));
SoHAnimJoint218->setDEF(QString("hanim_l_metatarsophalangeal_1"));
SoHAnimJoint218->setCenter(new float[]{2.7525,0.0077,4.6255});
SoHAnimJoint218->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint218->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment219 = new SoHAnimSegment();
SoHAnimSegment219->X3DNode::setName(QString("l_tarsal_proximal_phalanx_1"));
SoHAnimSegment219->setDEF(QString("hanim_l_tarsal_proximal_phalanx_1"));
SoTransform* SoTransform220 = new SoTransform();
SoTransform220->setTranslation(new float[]{2.7525,0.0077,4.6255});
SoTransform* SoTransform221 = new SoTransform();
//Empty Transform
SoShape* SoShape222 = new SoShape();
SoShape222->setUSE(QString("HAnimJointShape"));
SoTransform221->addChild(*SoShape222);

SoTransform220->addChild(*SoTransform221);

SoHAnimSegment219->addChild(*SoTransform220);

SoShape* SoShape223 = new SoShape();
SoLineSet* SoLineSet224 = new SoLineSet();
SoLineSet224->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate225 = new SoCoordinate();
SoCoordinate225->setPoint(new float[]{2.7525,0.0077,4.6255,2.7525,0.0077,4.6255}, 6);
SoLineSet224->setCoord(*SoCoordinate225);

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
SoColorRGBA* SoColorRGBA226 = new SoColorRGBA();
SoColorRGBA226->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet224->addChild(*SoColorRGBA226);

SoShape223->setGeometry(*SoLineSet224);

SoHAnimSegment219->addChild(*SoShape223);

SoHAnimSite* SoHAnimSite227 = new SoHAnimSite();
SoHAnimSite227->X3DNode::setName(QString("l_tarsal_distal_phalanx_1_tip"));
SoHAnimSite227->setDEF(QString("hanim_l_tarsal_distal_phalanx_1_tip"));
SoTouchSensor* SoTouchSensor228 = new SoTouchSensor();
SoTouchSensor228->setDescription(QString("HAnimSite l_tarsal_distal_phalanx_1_tip"));
SoHAnimSite227->addChild(*SoTouchSensor228);

SoShape* SoShape229 = new SoShape();
SoShape229->setUSE(QString("HAnimSiteShape"));
SoHAnimSite227->addChild(*SoShape229);

SoHAnimSegment219->addChild(*SoHAnimSite227);

SoHAnimJoint218->addChildren(*SoHAnimSegment219);

SoHAnimJoint* SoHAnimJoint230 = new SoHAnimJoint();
SoHAnimJoint230->X3DNode::setName(QString("l_tarsal_interphalangeal_1"));
SoHAnimJoint230->setDEF(QString("hanim_l_tarsal_interphalangeal_1"));
SoHAnimJoint230->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint230->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint218->addChildren(*SoHAnimJoint230);

SoHAnimJoint206->addChildren(*SoHAnimJoint218);

SoHAnimJoint197->addChildren(*SoHAnimJoint206);

SoHAnimJoint180->addChildren(*SoHAnimJoint197);

SoHAnimJoint* SoHAnimJoint231 = new SoHAnimJoint();
SoHAnimJoint231->X3DNode::setName(QString("l_cuneonavicular_2"));
SoHAnimJoint231->setDEF(QString("hanim_l_cuneonavicular_2"));
SoHAnimJoint231->setCenter(new float[]{3.6105,0.033,1.4168});
SoHAnimJoint231->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint231->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment232 = new SoHAnimSegment();
SoHAnimSegment232->X3DNode::setName(QString("l_cuneiform_2"));
SoHAnimSegment232->setDEF(QString("hanim_l_cuneiform_2"));
SoTransform* SoTransform233 = new SoTransform();
SoTransform233->setTranslation(new float[]{3.6105,0.033,1.4168});
SoTransform* SoTransform234 = new SoTransform();
//Empty Transform
SoShape* SoShape235 = new SoShape();
SoShape235->setUSE(QString("HAnimJointShape"));
SoTransform234->addChild(*SoShape235);

SoTransform233->addChild(*SoTransform234);

SoHAnimSegment232->addChild(*SoTransform233);

SoShape* SoShape236 = new SoShape();
SoLineSet* SoLineSet237 = new SoLineSet();
SoLineSet237->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate238 = new SoCoordinate();
SoCoordinate238->setPoint(new float[]{3.6105,0.033,1.4168,3.5555,0.0232,2.2895}, 6);
SoLineSet237->setCoord(*SoCoordinate238);

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
SoColorRGBA* SoColorRGBA239 = new SoColorRGBA();
SoColorRGBA239->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet237->addChild(*SoColorRGBA239);

SoShape236->setGeometry(*SoLineSet237);

SoHAnimSegment232->addChild(*SoShape236);

SoHAnimJoint231->addChildren(*SoHAnimSegment232);

SoHAnimJoint* SoHAnimJoint240 = new SoHAnimJoint();
SoHAnimJoint240->X3DNode::setName(QString("l_tarsometatarsal_2"));
SoHAnimJoint240->setDEF(QString("hanim_l_tarsometatarsal_2"));
SoHAnimJoint240->setCenter(new float[]{3.5555,0.0232,2.2895});
SoHAnimJoint240->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint240->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment241 = new SoHAnimSegment();
SoHAnimSegment241->X3DNode::setName(QString("l_metatarsal_2"));
SoHAnimSegment241->setDEF(QString("hanim_l_metatarsal_2"));
SoTransform* SoTransform242 = new SoTransform();
SoTransform242->setTranslation(new float[]{3.5555,0.0232,2.2895});
SoTransform* SoTransform243 = new SoTransform();
//Empty Transform
SoShape* SoShape244 = new SoShape();
SoShape244->setUSE(QString("HAnimJointShape"));
SoTransform243->addChild(*SoShape244);

SoTransform242->addChild(*SoTransform243);

SoHAnimSegment241->addChild(*SoTransform242);

SoShape* SoShape245 = new SoShape();
SoLineSet* SoLineSet246 = new SoLineSet();
SoLineSet246->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate247 = new SoCoordinate();
SoCoordinate247->setPoint(new float[]{3.5555,0.0232,2.2895,3.6595,0.0085,4.8125}, 6);
SoLineSet246->setCoord(*SoCoordinate247);

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
SoColorRGBA* SoColorRGBA248 = new SoColorRGBA();
SoColorRGBA248->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet246->addChild(*SoColorRGBA248);

SoShape245->setGeometry(*SoLineSet246);

SoHAnimSegment241->addChild(*SoShape245);

SoHAnimJoint240->addChildren(*SoHAnimSegment241);

SoHAnimJoint* SoHAnimJoint249 = new SoHAnimJoint();
SoHAnimJoint249->X3DNode::setName(QString("l_metatarsophalangeal_2"));
SoHAnimJoint249->setDEF(QString("hanim_l_metatarsophalangeal_2"));
SoHAnimJoint249->setCenter(new float[]{3.6595,0.0085,4.8125});
SoHAnimJoint249->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint249->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment250 = new SoHAnimSegment();
SoHAnimSegment250->X3DNode::setName(QString("l_tarsal_proximal_phalanx_2"));
SoHAnimSegment250->setDEF(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoTransform* SoTransform251 = new SoTransform();
SoTransform251->setTranslation(new float[]{3.6595,0.0085,4.8125});
SoTransform* SoTransform252 = new SoTransform();
//Empty Transform
SoShape* SoShape253 = new SoShape();
SoShape253->setUSE(QString("HAnimJointShape"));
SoTransform252->addChild(*SoShape253);

SoTransform251->addChild(*SoTransform252);

SoHAnimSegment250->addChild(*SoTransform251);

SoShape* SoShape254 = new SoShape();
SoLineSet* SoLineSet255 = new SoLineSet();
SoLineSet255->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate256 = new SoCoordinate();
SoCoordinate256->setPoint(new float[]{3.6595,0.0085,4.8125,3.7385,0.0054,5.5315}, 6);
SoLineSet255->setCoord(*SoCoordinate256);

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
SoColorRGBA* SoColorRGBA257 = new SoColorRGBA();
SoColorRGBA257->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet255->addChild(*SoColorRGBA257);

SoShape254->setGeometry(*SoLineSet255);

SoHAnimSegment250->addChild(*SoShape254);

SoHAnimJoint249->addChildren(*SoHAnimSegment250);

SoHAnimJoint* SoHAnimJoint258 = new SoHAnimJoint();
SoHAnimJoint258->X3DNode::setName(QString("l_tarsal_proximal_interphalangeal_2"));
SoHAnimJoint258->setDEF(QString("hanim_l_tarsal_proximal_interphalangeal_2"));
SoHAnimJoint258->setCenter(new float[]{3.7385,0.0054,5.5315});
SoHAnimJoint258->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint258->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment259 = new SoHAnimSegment();
SoHAnimSegment259->X3DNode::setName(QString("l_tarsal_middle_phalanx_2"));
SoHAnimSegment259->setDEF(QString("hanim_l_tarsal_middle_phalanx_2"));
SoTransform* SoTransform260 = new SoTransform();
SoTransform260->setTranslation(new float[]{3.7385,0.0054,5.5315});
SoTransform* SoTransform261 = new SoTransform();
//Empty Transform
SoShape* SoShape262 = new SoShape();
SoShape262->setUSE(QString("HAnimJointShape"));
SoTransform261->addChild(*SoShape262);

SoTransform260->addChild(*SoTransform261);

SoHAnimSegment259->addChild(*SoTransform260);

SoShape* SoShape263 = new SoShape();
SoLineSet* SoLineSet264 = new SoLineSet();
SoLineSet264->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate265 = new SoCoordinate();
SoCoordinate265->setPoint(new float[]{3.7385,0.0054,5.5315,3.7385,0.0017,5.9505}, 6);
SoLineSet264->setCoord(*SoCoordinate265);

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
SoColorRGBA* SoColorRGBA266 = new SoColorRGBA();
SoColorRGBA266->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet264->addChild(*SoColorRGBA266);

SoShape263->setGeometry(*SoLineSet264);

SoHAnimSegment259->addChild(*SoShape263);

SoHAnimSite* SoHAnimSite267 = new SoHAnimSite();
SoHAnimSite267->X3DNode::setName(QString("l_tarsal_distal_phalanx_2_tip"));
SoHAnimSite267->setDEF(QString("hanim_l_tarsal_distal_phalanx_2_tip"));
SoHAnimSite267->setTranslation(new float[]{0.1195,0.0079,0.1433});
SoTouchSensor* SoTouchSensor268 = new SoTouchSensor();
SoTouchSensor268->setDescription(QString("HAnimSite l_tarsal_distal_phalanx_2_tip"));
SoHAnimSite267->addChild(*SoTouchSensor268);

SoShape* SoShape269 = new SoShape();
SoShape269->setUSE(QString("HAnimSiteShape"));
SoHAnimSite267->addChild(*SoShape269);

SoHAnimSegment259->addChild(*SoHAnimSite267);

SoHAnimJoint258->addChildren(*SoHAnimSegment259);

SoHAnimJoint* SoHAnimJoint270 = new SoHAnimJoint();
SoHAnimJoint270->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint270->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint270->setCenter(new float[]{3.7385,0.0017,5.9505});
SoHAnimJoint270->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint270->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint258->addChildren(*SoHAnimJoint270);

SoHAnimJoint249->addChildren(*SoHAnimJoint258);

SoHAnimJoint240->addChildren(*SoHAnimJoint249);

SoHAnimJoint231->addChildren(*SoHAnimJoint240);

SoHAnimJoint180->addChildren(*SoHAnimJoint231);

SoHAnimJoint* SoHAnimJoint271 = new SoHAnimJoint();
SoHAnimJoint271->X3DNode::setName(QString("l_cuneonavicular_3"));
SoHAnimJoint271->setDEF(QString("hanim_l_cuneonavicular_3"));
SoHAnimJoint271->setCenter(new float[]{4.1235,0.0328,1.3453});
SoHAnimJoint271->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint271->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment272 = new SoHAnimSegment();
SoHAnimSegment272->X3DNode::setName(QString("l_cuneiform_3"));
SoHAnimSegment272->setDEF(QString("hanim_l_cuneiform_3"));
SoTransform* SoTransform273 = new SoTransform();
SoTransform273->setTranslation(new float[]{4.1235,0.0328,1.3453});
SoTransform* SoTransform274 = new SoTransform();
//Empty Transform
SoShape* SoShape275 = new SoShape();
SoShape275->setUSE(QString("HAnimJointShape"));
SoTransform274->addChild(*SoShape275);

SoTransform273->addChild(*SoTransform274);

SoHAnimSegment272->addChild(*SoTransform273);

SoShape* SoShape276 = new SoShape();
SoLineSet* SoLineSet277 = new SoLineSet();
SoLineSet277->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate278 = new SoCoordinate();
SoCoordinate278->setPoint(new float[]{4.1235,0.0328,1.3453,3.7385,0.0017,5.9505}, 6);
SoLineSet277->setCoord(*SoCoordinate278);

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
SoColorRGBA* SoColorRGBA279 = new SoColorRGBA();
SoColorRGBA279->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet277->addChild(*SoColorRGBA279);

SoShape276->setGeometry(*SoLineSet277);

SoHAnimSegment272->addChild(*SoShape276);

SoHAnimJoint271->addChildren(*SoHAnimSegment272);

SoHAnimJoint* SoHAnimJoint280 = new SoHAnimJoint();
SoHAnimJoint280->X3DNode::setName(QString("l_tarsometatarsal_3"));
SoHAnimJoint280->setDEF(QString("hanim_l_tarsometatarsal_3"));
SoHAnimJoint280->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint280->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment281 = new SoHAnimSegment();
SoHAnimSegment281->X3DNode::setName(QString("l_metatarsal_3"));
SoHAnimSegment281->setDEF(QString("hanim_l_metatarsal_3"));
SoTransform* SoTransform282 = new SoTransform();
SoTransform282->setTranslation(new float[]{4.1235,0.0328,1.3453});
SoTransform* SoTransform283 = new SoTransform();
//Empty Transform
SoShape* SoShape284 = new SoShape();
SoShape284->setUSE(QString("HAnimJointShape"));
SoTransform283->addChild(*SoShape284);

SoTransform282->addChild(*SoTransform283);

SoHAnimSegment281->addChild(*SoTransform282);

SoShape* SoShape285 = new SoShape();
SoLineSet* SoLineSet286 = new SoLineSet();
SoLineSet286->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate287 = new SoCoordinate();
SoCoordinate287->setPoint(new float[]{4.2795,0.0086,4.7055}, 3);
SoLineSet286->setCoord(*SoCoordinate287);

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 1
SoColorRGBA* SoColorRGBA288 = new SoColorRGBA();
SoColorRGBA288->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet286->addChild(*SoColorRGBA288);

SoShape285->setGeometry(*SoLineSet286);

SoHAnimSegment281->addChild(*SoShape285);

SoHAnimJoint280->addChildren(*SoHAnimSegment281);

SoHAnimJoint* SoHAnimJoint289 = new SoHAnimJoint();
SoHAnimJoint289->X3DNode::setName(QString("l_metatarsophalangeal_3"));
SoHAnimJoint289->setDEF(QString("hanim_l_metatarsophalangeal_3"));
SoHAnimJoint289->setCenter(new float[]{4.2795,0.0086,4.7055});
SoHAnimJoint289->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint289->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment290 = new SoHAnimSegment();
SoHAnimSegment290->X3DNode::setName(QString("l_tarsal_proximal_phalanx_3"));
SoHAnimSegment290->setDEF(QString("hanim_l_tarsal_proximal_phalanx_3"));
SoTransform* SoTransform291 = new SoTransform();
SoTransform291->setTranslation(new float[]{4.2795,0.0086,4.7055});
SoTransform* SoTransform292 = new SoTransform();
//Empty Transform
SoShape* SoShape293 = new SoShape();
SoShape293->setUSE(QString("HAnimJointShape"));
SoTransform292->addChild(*SoShape293);

SoTransform291->addChild(*SoTransform292);

SoHAnimSegment290->addChild(*SoTransform291);

SoShape* SoShape294 = new SoShape();
SoLineSet* SoLineSet295 = new SoLineSet();
SoLineSet295->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate296 = new SoCoordinate();
SoCoordinate296->setPoint(new float[]{4.2795,0.0086,4.7055,4.3855,0.0044,5.3745}, 6);
SoLineSet295->setCoord(*SoCoordinate296);

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
SoColorRGBA* SoColorRGBA297 = new SoColorRGBA();
SoColorRGBA297->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet295->addChild(*SoColorRGBA297);

SoShape294->setGeometry(*SoLineSet295);

SoHAnimSegment290->addChild(*SoShape294);

SoHAnimJoint289->addChildren(*SoHAnimSegment290);

SoHAnimJoint* SoHAnimJoint298 = new SoHAnimJoint();
SoHAnimJoint298->X3DNode::setName(QString("l_tarsal_proximal_interphalangeal_3"));
SoHAnimJoint298->setDEF(QString("hanim_l_tarsal_proximal_interphalangeal_3"));
SoHAnimJoint298->setCenter(new float[]{4.3855,0.0044,5.3745});
SoHAnimJoint298->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint298->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment299 = new SoHAnimSegment();
SoHAnimSegment299->X3DNode::setName(QString("l_tarsal_middle_phalanx_3"));
SoHAnimSegment299->setDEF(QString("hanim_l_tarsal_middle_phalanx_3"));
SoTransform* SoTransform300 = new SoTransform();
SoTransform300->setTranslation(new float[]{4.3855,0.0044,5.3745});
SoTransform* SoTransform301 = new SoTransform();
//Empty Transform
SoShape* SoShape302 = new SoShape();
SoShape302->setUSE(QString("HAnimJointShape"));
SoTransform301->addChild(*SoShape302);

SoTransform300->addChild(*SoTransform301);

SoHAnimSegment299->addChild(*SoTransform300);

SoShape* SoShape303 = new SoShape();
SoLineSet* SoLineSet304 = new SoLineSet();
SoLineSet304->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate305 = new SoCoordinate();
SoCoordinate305->setPoint(new float[]{4.3855,0.0044,5.3745,4.4545,0.0017,5.7845}, 6);
SoLineSet304->setCoord(*SoCoordinate305);

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
SoColorRGBA* SoColorRGBA306 = new SoColorRGBA();
SoColorRGBA306->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet304->addChild(*SoColorRGBA306);

SoShape303->setGeometry(*SoLineSet304);

SoHAnimSegment299->addChild(*SoShape303);

SoHAnimSite* SoHAnimSite307 = new SoHAnimSite();
SoHAnimSite307->X3DNode::setName(QString("l_tarsal_distal_phalanx_3_tip"));
SoHAnimSite307->setDEF(QString("hanim_l_tarsal_distal_phalanx_3_tip"));
SoTouchSensor* SoTouchSensor308 = new SoTouchSensor();
SoTouchSensor308->setDescription(QString("HAnimSite l_tarsal_distal_phalanx_3_tip"));
SoHAnimSite307->addChild(*SoTouchSensor308);

SoShape* SoShape309 = new SoShape();
SoShape309->setUSE(QString("HAnimSiteShape"));
SoHAnimSite307->addChild(*SoShape309);

SoHAnimSegment299->addChild(*SoHAnimSite307);

SoHAnimJoint298->addChildren(*SoHAnimSegment299);

SoHAnimJoint* SoHAnimJoint310 = new SoHAnimJoint();
SoHAnimJoint310->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_3"));
SoHAnimJoint310->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_3"));
SoHAnimJoint310->setCenter(new float[]{4.4545,0.0017,5.7845});
SoHAnimJoint310->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint310->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint298->addChildren(*SoHAnimJoint310);

SoHAnimJoint289->addChildren(*SoHAnimJoint298);

SoHAnimJoint280->addChildren(*SoHAnimJoint289);

SoHAnimJoint271->addChildren(*SoHAnimJoint280);

SoHAnimJoint180->addChildren(*SoHAnimJoint271);

SoHAnimJoint167->addChildren(*SoHAnimJoint180);

SoHAnimJoint* SoHAnimJoint311 = new SoHAnimJoint();
SoHAnimJoint311->X3DNode::setName(QString("l_calcaneocuboid"));
SoHAnimJoint311->setDEF(QString("hanim_l_calcaneocuboid"));
SoHAnimJoint311->setCenter(new float[]{3.9515,0.0653,-0.6895});
SoHAnimJoint311->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint311->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment312 = new SoHAnimSegment();
SoHAnimSegment312->X3DNode::setName(QString("l_calcaneus"));
SoHAnimSegment312->setDEF(QString("hanim_l_calcaneus"));
SoTransform* SoTransform313 = new SoTransform();
SoTransform313->setTranslation(new float[]{3.9515,0.0653,-0.6895});
SoTransform* SoTransform314 = new SoTransform();
//Empty Transform
SoShape* SoShape315 = new SoShape();
SoShape315->setUSE(QString("HAnimJointShape"));
SoTransform314->addChild(*SoShape315);

SoTransform313->addChild(*SoTransform314);

SoHAnimSegment312->addChild(*SoTransform313);

SoShape* SoShape316 = new SoShape();
SoLineSet* SoLineSet317 = new SoLineSet();
SoLineSet317->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate318 = new SoCoordinate();
SoCoordinate318->setPoint(new float[]{3.9515,0.0653,-0.6895,4.9085,0.0353,0.5574}, 6);
SoLineSet317->setCoord(*SoCoordinate318);

//from l_calcaneocuboid to l_transversetarsal vertices 2
SoColorRGBA* SoColorRGBA319 = new SoColorRGBA();
SoColorRGBA319->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet317->addChild(*SoColorRGBA319);

SoShape316->setGeometry(*SoLineSet317);

SoHAnimSegment312->addChild(*SoShape316);

SoHAnimJoint311->addChildren(*SoHAnimSegment312);

SoHAnimJoint* SoHAnimJoint320 = new SoHAnimJoint();
SoHAnimJoint320->X3DNode::setName(QString("l_transversetarsal"));
SoHAnimJoint320->setDEF(QString("hanim_l_transversetarsal"));
SoHAnimJoint320->setCenter(new float[]{4.9085,0.0353,0.5574});
SoHAnimJoint320->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint320->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment321 = new SoHAnimSegment();
SoHAnimSegment321->X3DNode::setName(QString("l_cuboid"));
SoHAnimSegment321->setDEF(QString("hanim_l_cuboid"));
SoTransform* SoTransform322 = new SoTransform();
SoTransform322->setTranslation(new float[]{4.9085,0.0353,0.5574});
SoTransform* SoTransform323 = new SoTransform();
//Empty Transform
SoShape* SoShape324 = new SoShape();
SoShape324->setUSE(QString("HAnimJointShape"));
SoTransform323->addChild(*SoShape324);

SoTransform322->addChild(*SoTransform323);

SoHAnimSegment321->addChild(*SoTransform322);

SoShape* SoShape325 = new SoShape();
SoLineSet* SoLineSet326 = new SoLineSet();
SoLineSet326->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate327 = new SoCoordinate();
SoCoordinate327->setPoint(new float[]{4.9085,0.0353,0.5574,4.7245,0.0211,2.1725}, 6);
SoLineSet326->setCoord(*SoCoordinate327);

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
SoColorRGBA* SoColorRGBA328 = new SoColorRGBA();
SoColorRGBA328->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet326->addChild(*SoColorRGBA328);

SoShape325->setGeometry(*SoLineSet326);

SoHAnimSegment321->addChild(*SoShape325);

SoShape* SoShape329 = new SoShape();
SoLineSet* SoLineSet330 = new SoLineSet();
SoLineSet330->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate331 = new SoCoordinate();
SoCoordinate331->setPoint(new float[]{4.9085,0.0353,0.5574,5.3615,0.0164,2.0085}, 6);
SoLineSet330->setCoord(*SoCoordinate331);

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
SoColorRGBA* SoColorRGBA332 = new SoColorRGBA();
SoColorRGBA332->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet330->addChild(*SoColorRGBA332);

SoShape329->setGeometry(*SoLineSet330);

SoHAnimSegment321->addChild(*SoShape329);

SoHAnimJoint320->addChildren(*SoHAnimSegment321);

SoHAnimJoint* SoHAnimJoint333 = new SoHAnimJoint();
SoHAnimJoint333->X3DNode::setName(QString("l_tarsometatarsal_4"));
SoHAnimJoint333->setDEF(QString("hanim_l_tarsometatarsal_4"));
SoHAnimJoint333->setCenter(new float[]{4.7245,0.0211,2.1725});
SoHAnimJoint333->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint333->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment334 = new SoHAnimSegment();
SoHAnimSegment334->X3DNode::setName(QString("l_metatarsal_4"));
SoHAnimSegment334->setDEF(QString("hanim_l_metatarsal_4"));
SoTransform* SoTransform335 = new SoTransform();
SoTransform335->setTranslation(new float[]{4.7245,0.0211,2.1725});
SoTransform* SoTransform336 = new SoTransform();
//Empty Transform
SoShape* SoShape337 = new SoShape();
SoShape337->setUSE(QString("HAnimJointShape"));
SoTransform336->addChild(*SoShape337);

SoTransform335->addChild(*SoTransform336);

SoHAnimSegment334->addChild(*SoTransform335);

SoShape* SoShape338 = new SoShape();
SoLineSet* SoLineSet339 = new SoLineSet();
SoLineSet339->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate340 = new SoCoordinate();
SoCoordinate340->setPoint(new float[]{4.7245,0.0211,2.1725,4.8745,0.0076,4.5165}, 6);
SoLineSet339->setCoord(*SoCoordinate340);

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
SoColorRGBA* SoColorRGBA341 = new SoColorRGBA();
SoColorRGBA341->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet339->addChild(*SoColorRGBA341);

SoShape338->setGeometry(*SoLineSet339);

SoHAnimSegment334->addChild(*SoShape338);

SoHAnimJoint333->addChildren(*SoHAnimSegment334);

SoHAnimJoint* SoHAnimJoint342 = new SoHAnimJoint();
SoHAnimJoint342->X3DNode::setName(QString("l_metatarsophalangeal_4"));
SoHAnimJoint342->setDEF(QString("hanim_l_metatarsophalangeal_4"));
SoHAnimJoint342->setCenter(new float[]{4.8745,0.0076,4.5165});
SoHAnimJoint342->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint342->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment343 = new SoHAnimSegment();
SoHAnimSegment343->X3DNode::setName(QString("l_tarsal_proximal_phalanx_4"));
SoHAnimSegment343->setDEF(QString("hanim_l_tarsal_proximal_phalanx_4"));
SoTransform* SoTransform344 = new SoTransform();
SoTransform344->setTranslation(new float[]{4.8745,0.0076,4.5165});
SoTransform* SoTransform345 = new SoTransform();
//Empty Transform
SoShape* SoShape346 = new SoShape();
SoShape346->setUSE(QString("HAnimJointShape"));
SoTransform345->addChild(*SoShape346);

SoTransform344->addChild(*SoTransform345);

SoHAnimSegment343->addChild(*SoTransform344);

SoShape* SoShape347 = new SoShape();
SoLineSet* SoLineSet348 = new SoLineSet();
SoLineSet348->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate349 = new SoCoordinate();
SoCoordinate349->setPoint(new float[]{4.8745,0.0076,4.5165,5.0655,0.0049,5.1895}, 6);
SoLineSet348->setCoord(*SoCoordinate349);

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
SoColorRGBA* SoColorRGBA350 = new SoColorRGBA();
SoColorRGBA350->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet348->addChild(*SoColorRGBA350);

SoShape347->setGeometry(*SoLineSet348);

SoHAnimSegment343->addChild(*SoShape347);

SoHAnimJoint342->addChildren(*SoHAnimSegment343);

SoHAnimJoint* SoHAnimJoint351 = new SoHAnimJoint();
SoHAnimJoint351->X3DNode::setName(QString("l_tarsal_proximal_interphalangeal_4"));
SoHAnimJoint351->setDEF(QString("hanim_l_tarsal_proximal_interphalangeal_4"));
SoHAnimJoint351->setCenter(new float[]{5.0655,0.0049,5.1895});
SoHAnimJoint351->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint351->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment352 = new SoHAnimSegment();
SoHAnimSegment352->X3DNode::setName(QString("l_tarsal_middle_phalanx_4"));
SoHAnimSegment352->setDEF(QString("hanim_l_tarsal_middle_phalanx_4"));
SoTransform* SoTransform353 = new SoTransform();
SoTransform353->setTranslation(new float[]{5.0655,0.0049,5.1895});
SoTransform* SoTransform354 = new SoTransform();
//Empty Transform
SoShape* SoShape355 = new SoShape();
SoShape355->setUSE(QString("HAnimJointShape"));
SoTransform354->addChild(*SoShape355);

SoTransform353->addChild(*SoTransform354);

SoHAnimSegment352->addChild(*SoTransform353);

SoShape* SoShape356 = new SoShape();
SoLineSet* SoLineSet357 = new SoLineSet();
SoLineSet357->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate358 = new SoCoordinate();
SoCoordinate358->setPoint(new float[]{5.0655,0.0049,5.1895,5.1325,0.0011,5.5175}, 6);
SoLineSet357->setCoord(*SoCoordinate358);

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
SoColorRGBA* SoColorRGBA359 = new SoColorRGBA();
SoColorRGBA359->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet357->addChild(*SoColorRGBA359);

SoShape356->setGeometry(*SoLineSet357);

SoHAnimSegment352->addChild(*SoShape356);

SoHAnimSite* SoHAnimSite360 = new SoHAnimSite();
SoHAnimSite360->X3DNode::setName(QString("l_tarsal_distal_phalanx_4_tip"));
SoHAnimSite360->setDEF(QString("hanim_l_tarsal_distal_phalanx_4_tip"));
SoTouchSensor* SoTouchSensor361 = new SoTouchSensor();
SoTouchSensor361->setDescription(QString("HAnimSite l_tarsal_distal_phalanx_4_tip"));
SoHAnimSite360->addChild(*SoTouchSensor361);

SoShape* SoShape362 = new SoShape();
SoShape362->setUSE(QString("HAnimSiteShape"));
SoHAnimSite360->addChild(*SoShape362);

SoHAnimSegment352->addChild(*SoHAnimSite360);

SoHAnimJoint351->addChildren(*SoHAnimSegment352);

SoHAnimJoint* SoHAnimJoint363 = new SoHAnimJoint();
SoHAnimJoint363->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_4"));
SoHAnimJoint363->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_4"));
SoHAnimJoint363->setCenter(new float[]{5.1325,0.0011,5.5175});
SoHAnimJoint363->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint363->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint351->addChildren(*SoHAnimJoint363);

SoHAnimJoint342->addChildren(*SoHAnimJoint351);

SoHAnimJoint333->addChildren(*SoHAnimJoint342);

SoHAnimJoint320->addChildren(*SoHAnimJoint333);

SoHAnimJoint* SoHAnimJoint364 = new SoHAnimJoint();
SoHAnimJoint364->X3DNode::setName(QString("l_tarsometatarsal_5"));
SoHAnimJoint364->setDEF(QString("hanim_l_tarsometatarsal_5"));
SoHAnimJoint364->setCenter(new float[]{5.3615,0.0164,2.0085});
SoHAnimJoint364->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint364->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment365 = new SoHAnimSegment();
SoHAnimSegment365->X3DNode::setName(QString("l_metatarsal_5"));
SoHAnimSegment365->setDEF(QString("hanim_l_metatarsal_5"));
SoTransform* SoTransform366 = new SoTransform();
SoTransform366->setTranslation(new float[]{5.3615,0.0164,2.0085});
SoTransform* SoTransform367 = new SoTransform();
//Empty Transform
SoShape* SoShape368 = new SoShape();
SoShape368->setUSE(QString("HAnimJointShape"));
SoTransform367->addChild(*SoShape368);

SoTransform366->addChild(*SoTransform367);

SoHAnimSegment365->addChild(*SoTransform366);

SoShape* SoShape369 = new SoShape();
SoLineSet* SoLineSet370 = new SoLineSet();
SoLineSet370->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate371 = new SoCoordinate();
SoCoordinate371->setPoint(new float[]{5.3615,0.0164,2.0085,5.5055,0.0067,4.3115}, 6);
SoLineSet370->setCoord(*SoCoordinate371);

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
SoColorRGBA* SoColorRGBA372 = new SoColorRGBA();
SoColorRGBA372->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet370->addChild(*SoColorRGBA372);

SoShape369->setGeometry(*SoLineSet370);

SoHAnimSegment365->addChild(*SoShape369);

SoHAnimSite* SoHAnimSite373 = new SoHAnimSite();
SoHAnimSite373->X3DNode::setName(QString("l_metatarsal_phalanx_5_pt"));
SoHAnimSite373->setDEF(QString("hanim_l_metatarsal_phalanx_5_pt"));
SoTouchSensor* SoTouchSensor374 = new SoTouchSensor();
SoTouchSensor374->setDescription(QString("HAnimSite l_metatarsal_phalanx_5_pt"));
SoHAnimSite373->addChild(*SoTouchSensor374);

SoShape* SoShape375 = new SoShape();
SoShape375->setUSE(QString("HAnimSiteShape"));
SoHAnimSite373->addChild(*SoShape375);

SoHAnimSegment365->addChild(*SoHAnimSite373);

SoHAnimJoint364->addChildren(*SoHAnimSegment365);

SoHAnimJoint* SoHAnimJoint376 = new SoHAnimJoint();
SoHAnimJoint376->X3DNode::setName(QString("l_metatarsophalangeal_5"));
SoHAnimJoint376->setDEF(QString("hanim_l_metatarsophalangeal_5"));
SoHAnimJoint376->setCenter(new float[]{5.5055,0.0067,4.3115});
SoHAnimJoint376->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint376->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment377 = new SoHAnimSegment();
SoHAnimSegment377->X3DNode::setName(QString("l_tarsal_proximal_phalanx_5"));
SoHAnimSegment377->setDEF(QString("hanim_l_tarsal_proximal_phalanx_5"));
SoTransform* SoTransform378 = new SoTransform();
SoTransform378->setTranslation(new float[]{5.5055,0.0067,4.3115});
SoTransform* SoTransform379 = new SoTransform();
//Empty Transform
SoShape* SoShape380 = new SoShape();
SoShape380->setUSE(QString("HAnimJointShape"));
SoTransform379->addChild(*SoShape380);

SoTransform378->addChild(*SoTransform379);

SoHAnimSegment377->addChild(*SoTransform378);

SoShape* SoShape381 = new SoShape();
SoLineSet* SoLineSet382 = new SoLineSet();
SoLineSet382->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate383 = new SoCoordinate();
SoCoordinate383->setPoint(new float[]{5.5055,0.0067,4.3115,5.6085,0.003,4.6485}, 6);
SoLineSet382->setCoord(*SoCoordinate383);

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
SoColorRGBA* SoColorRGBA384 = new SoColorRGBA();
SoColorRGBA384->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet382->addChild(*SoColorRGBA384);

SoShape381->setGeometry(*SoLineSet382);

SoHAnimSegment377->addChild(*SoShape381);

SoHAnimJoint376->addChildren(*SoHAnimSegment377);

SoHAnimJoint* SoHAnimJoint385 = new SoHAnimJoint();
SoHAnimJoint385->X3DNode::setName(QString("l_tarsal_proximal_interphalangeal_5"));
SoHAnimJoint385->setDEF(QString("hanim_l_tarsal_proximal_interphalangeal_5"));
SoHAnimJoint385->setCenter(new float[]{5.6085,0.003,4.6485});
SoHAnimJoint385->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint385->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment386 = new SoHAnimSegment();
SoHAnimSegment386->X3DNode::setName(QString("l_tarsal_middle_phalanx_5"));
SoHAnimSegment386->setDEF(QString("hanim_l_tarsal_middle_phalanx_5"));
SoTransform* SoTransform387 = new SoTransform();
SoTransform387->setTranslation(new float[]{5.6085,0.003,4.6485});
SoTransform* SoTransform388 = new SoTransform();
//Empty Transform
SoShape* SoShape389 = new SoShape();
SoShape389->setUSE(QString("HAnimJointShape"));
SoTransform388->addChild(*SoShape389);

SoTransform387->addChild(*SoTransform388);

SoHAnimSegment386->addChild(*SoTransform387);

SoShape* SoShape390 = new SoShape();
SoLineSet* SoLineSet391 = new SoLineSet();
SoLineSet391->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate392 = new SoCoordinate();
SoCoordinate392->setPoint(new float[]{5.6085,0.003,4.6485,5.6485,0.0,4.9925}, 6);
SoLineSet391->setCoord(*SoCoordinate392);

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
SoColorRGBA* SoColorRGBA393 = new SoColorRGBA();
SoColorRGBA393->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet391->addChild(*SoColorRGBA393);

SoShape390->setGeometry(*SoLineSet391);

SoHAnimSegment386->addChild(*SoShape390);

SoHAnimSite* SoHAnimSite394 = new SoHAnimSite();
SoHAnimSite394->X3DNode::setName(QString("l_tarsal_distal_phalanx_5_tip"));
SoHAnimSite394->setDEF(QString("hanim_l_tarsal_distal_phalanx_5_tip"));
SoTouchSensor* SoTouchSensor395 = new SoTouchSensor();
SoTouchSensor395->setDescription(QString("HAnimSite l_tarsal_distal_phalanx_5_tip"));
SoHAnimSite394->addChild(*SoTouchSensor395);

SoShape* SoShape396 = new SoShape();
SoShape396->setUSE(QString("HAnimSiteShape"));
SoHAnimSite394->addChild(*SoShape396);

SoHAnimSegment386->addChild(*SoHAnimSite394);

SoHAnimJoint385->addChildren(*SoHAnimSegment386);

SoHAnimJoint* SoHAnimJoint397 = new SoHAnimJoint();
SoHAnimJoint397->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_5"));
SoHAnimJoint397->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_5"));
SoHAnimJoint397->setCenter(new float[]{5.6485,0.0,4.9925});
SoHAnimJoint397->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint397->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint385->addChildren(*SoHAnimJoint397);

SoHAnimJoint376->addChildren(*SoHAnimJoint385);

SoHAnimJoint364->addChildren(*SoHAnimJoint376);

SoHAnimJoint320->addChildren(*SoHAnimJoint364);

SoHAnimJoint311->addChildren(*SoHAnimJoint320);

SoHAnimJoint167->addChildren(*SoHAnimJoint311);

SoHAnimJoint152->addChildren(*SoHAnimJoint167);

SoHAnimJoint134->addChildren(*SoHAnimJoint152);

SoHAnimJoint97->addChildren(*SoHAnimJoint134);

SoHAnimJoint* SoHAnimJoint398 = new SoHAnimJoint();
SoHAnimJoint398->X3DNode::setName(QString("r_hip"));
SoHAnimJoint398->setDEF(QString("hanim_r_hip"));
SoHAnimJoint398->setCenter(new float[]{-0.095,0.9171,0.0029});
SoHAnimJoint398->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint398->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment399 = new SoHAnimSegment();
SoHAnimSegment399->X3DNode::setName(QString("r_thigh"));
SoHAnimSegment399->setDEF(QString("hanim_r_thigh"));
SoTransform* SoTransform400 = new SoTransform();
SoTransform400->setTranslation(new float[]{-0.095,0.9171,0.0029});
SoTransform* SoTransform401 = new SoTransform();
//Empty Transform
SoShape* SoShape402 = new SoShape();
SoShape402->setUSE(QString("HAnimJointShape"));
SoTransform401->addChild(*SoShape402);

SoTransform400->addChild(*SoTransform401);

SoHAnimSegment399->addChild(*SoTransform400);

SoShape* SoShape403 = new SoShape();
SoLineSet* SoLineSet404 = new SoLineSet();
SoLineSet404->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate405 = new SoCoordinate();
SoCoordinate405->setPoint(new float[]{-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318}, 6);
SoLineSet404->setCoord(*SoCoordinate405);

//from r_hip to r_knee vertices 2
SoColorRGBA* SoColorRGBA406 = new SoColorRGBA();
SoColorRGBA406->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet404->addChild(*SoColorRGBA406);

SoShape403->setGeometry(*SoLineSet404);

SoHAnimSegment399->addChild(*SoShape403);

SoHAnimSite* SoHAnimSite407 = new SoHAnimSite();
SoHAnimSite407->X3DNode::setName(QString("r_lateral_malleolus_pt"));
SoHAnimSite407->setDEF(QString("hanim_r_lateral_malleolus_pt"));
SoHAnimSite407->setTranslation(new float[]{-0.1006,0.0658,-0.1075});
SoTouchSensor* SoTouchSensor408 = new SoTouchSensor();
SoTouchSensor408->setDescription(QString("HAnimSite r_lateral_malleolus_pt"));
SoHAnimSite407->addChild(*SoTouchSensor408);

SoShape* SoShape409 = new SoShape();
SoShape409->setUSE(QString("HAnimSiteShape"));
SoHAnimSite407->addChild(*SoShape409);

SoHAnimSegment399->addChild(*SoHAnimSite407);

SoHAnimSite* SoHAnimSite410 = new SoHAnimSite();
SoHAnimSite410->X3DNode::setName(QString("r_medial_malleolus_pt"));
SoHAnimSite410->setDEF(QString("hanim_r_medial_malleolus_pt"));
SoHAnimSite410->setTranslation(new float[]{-0.0591,0.076,-0.0928});
SoTouchSensor* SoTouchSensor411 = new SoTouchSensor();
SoTouchSensor411->setDescription(QString("HAnimSite r_medial_malleolus_pt"));
SoHAnimSite410->addChild(*SoTouchSensor411);

SoShape* SoShape412 = new SoShape();
SoShape412->setUSE(QString("HAnimSiteShape"));
SoHAnimSite410->addChild(*SoShape412);

SoHAnimSegment399->addChild(*SoHAnimSite410);

SoHAnimSite* SoHAnimSite413 = new SoHAnimSite();
SoHAnimSite413->X3DNode::setName(QString("r_tibiale_pt"));
SoHAnimSite413->setDEF(QString("hanim_r_tibiale_pt"));
SoTouchSensor* SoTouchSensor414 = new SoTouchSensor();
SoTouchSensor414->setDescription(QString("HAnimSite r_tibiale_pt"));
SoHAnimSite413->addChild(*SoTouchSensor414);

SoShape* SoShape415 = new SoShape();
SoShape415->setUSE(QString("HAnimSiteShape"));
SoHAnimSite413->addChild(*SoShape415);

SoHAnimSegment399->addChild(*SoHAnimSite413);

SoHAnimJoint398->addChildren(*SoHAnimSegment399);

SoHAnimJoint* SoHAnimJoint416 = new SoHAnimJoint();
SoHAnimJoint416->X3DNode::setName(QString("r_knee"));
SoHAnimJoint416->setDEF(QString("hanim_r_knee"));
SoHAnimJoint416->setCenter(new float[]{-0.0867,0.4913,0.0318});
SoHAnimJoint416->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint416->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment417 = new SoHAnimSegment();
SoHAnimSegment417->X3DNode::setName(QString("r_calf"));
SoHAnimSegment417->setDEF(QString("hanim_r_calf"));
SoTransform* SoTransform418 = new SoTransform();
SoTransform418->setTranslation(new float[]{-0.0867,0.4913,0.0318});
SoTransform* SoTransform419 = new SoTransform();
//Empty Transform
SoShape* SoShape420 = new SoShape();
SoShape420->setUSE(QString("HAnimJointShape"));
SoTransform419->addChild(*SoShape420);

SoTransform418->addChild(*SoTransform419);

SoHAnimSegment417->addChild(*SoTransform418);

SoShape* SoShape421 = new SoShape();
SoLineSet* SoLineSet422 = new SoLineSet();
SoLineSet422->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate423 = new SoCoordinate();
SoCoordinate423->setPoint(new float[]{-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766}, 6);
SoLineSet422->setCoord(*SoCoordinate423);

//from r_knee to r_talocrural vertices 2
SoColorRGBA* SoColorRGBA424 = new SoColorRGBA();
SoColorRGBA424->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet422->addChild(*SoColorRGBA424);

SoShape421->setGeometry(*SoLineSet422);

SoHAnimSegment417->addChild(*SoShape421);

SoHAnimSite* SoHAnimSite425 = new SoHAnimSite();
SoHAnimSite425->X3DNode::setName(QString("r_calcaneus_posterior_pt"));
SoHAnimSite425->setDEF(QString("hanim_r_calcaneus_posterior_pt"));
SoHAnimSite425->setTranslation(new float[]{-0.0692,0.0297,-0.1221});
SoTouchSensor* SoTouchSensor426 = new SoTouchSensor();
SoTouchSensor426->setDescription(QString("HAnimSite r_calcaneus_posterior_pt"));
SoHAnimSite425->addChild(*SoTouchSensor426);

SoShape* SoShape427 = new SoShape();
SoShape427->setUSE(QString("HAnimSiteShape"));
SoHAnimSite425->addChild(*SoShape427);

SoHAnimSegment417->addChild(*SoHAnimSite425);

SoHAnimSite* SoHAnimSite428 = new SoHAnimSite();
SoHAnimSite428->X3DNode::setName(QString("r_sphyrion_pt"));
SoHAnimSite428->setDEF(QString("hanim_r_sphyrion_pt"));
SoHAnimSite428->setTranslation(new float[]{-0.0603,0.061,-0.1002});
SoTouchSensor* SoTouchSensor429 = new SoTouchSensor();
SoTouchSensor429->setDescription(QString("HAnimSite r_sphyrion_pt"));
SoHAnimSite428->addChild(*SoTouchSensor429);

SoShape* SoShape430 = new SoShape();
SoShape430->setUSE(QString("HAnimSiteShape"));
SoHAnimSite428->addChild(*SoShape430);

SoHAnimSegment417->addChild(*SoHAnimSite428);

SoHAnimJoint416->addChildren(*SoHAnimSegment417);

SoHAnimJoint* SoHAnimJoint431 = new SoHAnimJoint();
SoHAnimJoint431->X3DNode::setName(QString("r_talocrural"));
SoHAnimJoint431->setDEF(QString("hanim_r_talocrural"));
SoHAnimJoint431->setCenter(new float[]{-0.0801,0.0712,-0.0766});
SoHAnimJoint431->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint431->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment432 = new SoHAnimSegment();
SoHAnimSegment432->X3DNode::setName(QString("r_talus"));
SoHAnimSegment432->setDEF(QString("hanim_r_talus"));
SoTransform* SoTransform433 = new SoTransform();
SoTransform433->setScale(new float[]{0.15,0.15,0.15});
SoTransform433->setTranslation(new float[]{-0.05,0.06,-0.025});
SoTransform433->setRotation(new float[]{1.0,0.0,0.0,-1.57});
//Transform right foot
SoTransform* SoTransform434 = new SoTransform();
//Empty Transform right foot
SoShape* SoShape435 = new SoShape();
SoShape435->setUSE(QString("HAnimJointShape"));
SoTransform434->addChild(*SoShape435);

SoTransform433->addChild(*SoTransform434);

SoHAnimSegment432->addChild(*SoTransform433);

SoShape* SoShape436 = new SoShape();
SoLineSet* SoLineSet437 = new SoLineSet();
SoLineSet437->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate438 = new SoCoordinate();
SoCoordinate438->setPoint(new float[]{-0.0801,0.0712,-0.0766,-3.4725,0.0374,0.6807}, 6);
SoLineSet437->setCoord(*SoCoordinate438);

//from r_talocrural to r_talocalcaneonavicular vertices 2
SoColorRGBA* SoColorRGBA439 = new SoColorRGBA();
SoColorRGBA439->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet437->addChild(*SoColorRGBA439);

SoShape436->setGeometry(*SoLineSet437);

SoHAnimSegment432->addChild(*SoShape436);

SoShape* SoShape440 = new SoShape();
SoLineSet* SoLineSet441 = new SoLineSet();
SoLineSet441->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate442 = new SoCoordinate();
SoCoordinate442->setPoint(new float[]{-0.0801,0.0712,-0.0766,-3.9515,0.0653,-0.6895}, 6);
SoLineSet441->setCoord(*SoCoordinate442);

//from r_talocrural to r_calcaneocuboid vertices 2
SoColorRGBA* SoColorRGBA443 = new SoColorRGBA();
SoColorRGBA443->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet441->addChild(*SoColorRGBA443);

SoShape440->setGeometry(*SoLineSet441);

SoHAnimSegment432->addChild(*SoShape440);

SoHAnimJoint431->addChildren(*SoHAnimSegment432);

SoHAnimJoint* SoHAnimJoint444 = new SoHAnimJoint();
SoHAnimJoint444->X3DNode::setName(QString("r_talocalcaneonavicular"));
SoHAnimJoint444->setDEF(QString("hanim_r_talocalcaneonavicular"));
SoHAnimJoint444->setCenter(new float[]{-3.4725,0.0374,0.6807});
SoHAnimJoint444->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint444->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment445 = new SoHAnimSegment();
SoHAnimSegment445->X3DNode::setName(QString("r_navicular"));
SoHAnimSegment445->setDEF(QString("hanim_r_navicular"));
SoTransform* SoTransform446 = new SoTransform();
SoTransform446->setTranslation(new float[]{-3.4725,0.0374,0.6807});
SoTransform* SoTransform447 = new SoTransform();
//Empty Transform
SoShape* SoShape448 = new SoShape();
SoShape448->setUSE(QString("HAnimJointShape"));
SoTransform447->addChild(*SoShape448);

SoTransform446->addChild(*SoTransform447);

SoHAnimSegment445->addChild(*SoTransform446);

SoShape* SoShape449 = new SoShape();
SoLineSet* SoLineSet450 = new SoLineSet();
SoLineSet450->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate451 = new SoCoordinate();
SoCoordinate451->setPoint(new float[]{-3.4725,0.0374,0.6807,-2.9855,0.0311,1.2819}, 6);
SoLineSet450->setCoord(*SoCoordinate451);

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
SoColorRGBA* SoColorRGBA452 = new SoColorRGBA();
SoColorRGBA452->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet450->addChild(*SoColorRGBA452);

SoShape449->setGeometry(*SoLineSet450);

SoHAnimSegment445->addChild(*SoShape449);

SoShape* SoShape453 = new SoShape();
SoLineSet* SoLineSet454 = new SoLineSet();
SoLineSet454->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate455 = new SoCoordinate();
SoCoordinate455->setPoint(new float[]{-3.4725,0.0374,0.6807,-3.6105,0.033,1.4168}, 6);
SoLineSet454->setCoord(*SoCoordinate455);

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
SoColorRGBA* SoColorRGBA456 = new SoColorRGBA();
SoColorRGBA456->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet454->addChild(*SoColorRGBA456);

SoShape453->setGeometry(*SoLineSet454);

SoHAnimSegment445->addChild(*SoShape453);

SoShape* SoShape457 = new SoShape();
SoLineSet* SoLineSet458 = new SoLineSet();
SoLineSet458->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate459 = new SoCoordinate();
SoCoordinate459->setPoint(new float[]{-3.4725,0.0374,0.6807,-4.1245,0.0328,1.3453}, 6);
SoLineSet458->setCoord(*SoCoordinate459);

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
SoColorRGBA* SoColorRGBA460 = new SoColorRGBA();
SoColorRGBA460->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet458->addChild(*SoColorRGBA460);

SoShape457->setGeometry(*SoLineSet458);

SoHAnimSegment445->addChild(*SoShape457);

SoHAnimJoint444->addChildren(*SoHAnimSegment445);

SoHAnimJoint* SoHAnimJoint461 = new SoHAnimJoint();
SoHAnimJoint461->X3DNode::setName(QString("r_cuneonavicular_1"));
SoHAnimJoint461->setDEF(QString("hanim_r_cuneonavicular_1"));
SoHAnimJoint461->setCenter(new float[]{-2.9855,0.0311,1.2819});
SoHAnimJoint461->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint461->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment462 = new SoHAnimSegment();
SoHAnimSegment462->X3DNode::setName(QString("r_cuneiform_1"));
SoHAnimSegment462->setDEF(QString("hanim_r_cuneiform_1"));
SoTransform* SoTransform463 = new SoTransform();
SoTransform463->setTranslation(new float[]{-2.9855,0.0311,1.2819});
SoTransform* SoTransform464 = new SoTransform();
//Empty Transform
SoShape* SoShape465 = new SoShape();
SoShape465->setUSE(QString("HAnimJointShape"));
SoTransform464->addChild(*SoShape465);

SoTransform463->addChild(*SoTransform464);

SoHAnimSegment462->addChild(*SoTransform463);

SoShape* SoShape466 = new SoShape();
SoLineSet* SoLineSet467 = new SoLineSet();
SoLineSet467->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate468 = new SoCoordinate();
SoCoordinate468->setPoint(new float[]{-2.9855,0.0311,1.2819,-2.8645,0.0194,2.4285}, 6);
SoLineSet467->setCoord(*SoCoordinate468);

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
SoColorRGBA* SoColorRGBA469 = new SoColorRGBA();
SoColorRGBA469->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet467->addChild(*SoColorRGBA469);

SoShape466->setGeometry(*SoLineSet467);

SoHAnimSegment462->addChild(*SoShape466);

SoHAnimJoint461->addChildren(*SoHAnimSegment462);

SoHAnimJoint* SoHAnimJoint470 = new SoHAnimJoint();
SoHAnimJoint470->X3DNode::setName(QString("r_tarsometatarsal_1"));
SoHAnimJoint470->setDEF(QString("hanim_r_tarsometatarsal_1"));
SoHAnimJoint470->setCenter(new float[]{-2.8645,0.0194,2.4285});
SoHAnimJoint470->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint470->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment471 = new SoHAnimSegment();
SoHAnimSegment471->X3DNode::setName(QString("r_metatarsal_1"));
SoHAnimSegment471->setDEF(QString("hanim_r_metatarsal_1"));
SoTransform* SoTransform472 = new SoTransform();
SoTransform472->setTranslation(new float[]{-2.8645,0.0194,2.4285});
SoTransform* SoTransform473 = new SoTransform();
//Empty Transform
SoShape* SoShape474 = new SoShape();
SoShape474->setUSE(QString("HAnimJointShape"));
SoTransform473->addChild(*SoShape474);

SoTransform472->addChild(*SoTransform473);

SoHAnimSegment471->addChild(*SoTransform472);

SoShape* SoShape475 = new SoShape();
SoLineSet* SoLineSet476 = new SoLineSet();
SoLineSet476->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate477 = new SoCoordinate();
SoCoordinate477->setPoint(new float[]{-2.8645,0.0194,2.4285,-2.7535,0.0077,4.6255}, 6);
SoLineSet476->setCoord(*SoCoordinate477);

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
SoColorRGBA* SoColorRGBA478 = new SoColorRGBA();
SoColorRGBA478->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet476->addChild(*SoColorRGBA478);

SoShape475->setGeometry(*SoLineSet476);

SoHAnimSegment471->addChild(*SoShape475);

SoHAnimSite* SoHAnimSite479 = new SoHAnimSite();
SoHAnimSite479->X3DNode::setName(QString("r_metatarsal_phalanx_1_pt"));
SoHAnimSite479->setDEF(QString("hanim_r_metatarsal_phalanx_1_pt"));
SoTouchSensor* SoTouchSensor480 = new SoTouchSensor();
SoTouchSensor480->setDescription(QString("HAnimSite r_metatarsal_phalanx_1_pt"));
SoHAnimSite479->addChild(*SoTouchSensor480);

SoShape* SoShape481 = new SoShape();
SoShape481->setUSE(QString("HAnimSiteShape"));
SoHAnimSite479->addChild(*SoShape481);

SoHAnimSegment471->addChild(*SoHAnimSite479);

SoHAnimJoint470->addChildren(*SoHAnimSegment471);

SoHAnimJoint* SoHAnimJoint482 = new SoHAnimJoint();
SoHAnimJoint482->X3DNode::setName(QString("r_metatarsophalangeal_1"));
SoHAnimJoint482->setDEF(QString("hanim_r_metatarsophalangeal_1"));
SoHAnimJoint482->setCenter(new float[]{-2.7535,0.0077,4.6255});
SoHAnimJoint482->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint482->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment483 = new SoHAnimSegment();
SoHAnimSegment483->X3DNode::setName(QString("r_tarsal_proximal_phalanx_1"));
SoHAnimSegment483->setDEF(QString("hanim_r_tarsal_proximal_phalanx_1"));
SoTransform* SoTransform484 = new SoTransform();
SoTransform484->setTranslation(new float[]{-2.7535,0.0077,4.6255});
SoTransform* SoTransform485 = new SoTransform();
//Empty Transform
SoShape* SoShape486 = new SoShape();
SoShape486->setUSE(QString("HAnimJointShape"));
SoTransform485->addChild(*SoShape486);

SoTransform484->addChild(*SoTransform485);

SoHAnimSegment483->addChild(*SoTransform484);

SoShape* SoShape487 = new SoShape();
SoLineSet* SoLineSet488 = new SoLineSet();
SoLineSet488->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate489 = new SoCoordinate();
SoCoordinate489->setPoint(new float[]{-2.7535,0.0077,4.6255,-2.7535,0.0077,4.6255}, 6);
SoLineSet488->setCoord(*SoCoordinate489);

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
SoColorRGBA* SoColorRGBA490 = new SoColorRGBA();
SoColorRGBA490->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet488->addChild(*SoColorRGBA490);

SoShape487->setGeometry(*SoLineSet488);

SoHAnimSegment483->addChild(*SoShape487);

SoHAnimSite* SoHAnimSite491 = new SoHAnimSite();
SoHAnimSite491->X3DNode::setName(QString("r_tarsal_distal_phalanx_1_tip"));
SoHAnimSite491->setDEF(QString("hanim_r_tarsal_distal_phalanx_1_tip"));
SoTouchSensor* SoTouchSensor492 = new SoTouchSensor();
SoTouchSensor492->setDescription(QString("HAnimSite r_tarsal_distal_phalanx_1_tip"));
SoHAnimSite491->addChild(*SoTouchSensor492);

SoShape* SoShape493 = new SoShape();
SoShape493->setUSE(QString("HAnimSiteShape"));
SoHAnimSite491->addChild(*SoShape493);

SoHAnimSegment483->addChild(*SoHAnimSite491);

SoHAnimJoint482->addChildren(*SoHAnimSegment483);

SoHAnimJoint* SoHAnimJoint494 = new SoHAnimJoint();
SoHAnimJoint494->X3DNode::setName(QString("r_tarsal_interphalangeal_1"));
SoHAnimJoint494->setDEF(QString("hanim_r_tarsal_interphalangeal_1"));
SoHAnimJoint494->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint494->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint482->addChildren(*SoHAnimJoint494);

SoHAnimJoint470->addChildren(*SoHAnimJoint482);

SoHAnimJoint461->addChildren(*SoHAnimJoint470);

SoHAnimJoint444->addChildren(*SoHAnimJoint461);

SoHAnimJoint* SoHAnimJoint495 = new SoHAnimJoint();
SoHAnimJoint495->X3DNode::setName(QString("r_cuneonavicular_2"));
SoHAnimJoint495->setDEF(QString("hanim_r_cuneonavicular_2"));
SoHAnimJoint495->setCenter(new float[]{-3.6105,0.033,1.4168});
SoHAnimJoint495->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint495->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment496 = new SoHAnimSegment();
SoHAnimSegment496->X3DNode::setName(QString("r_cuneiform_2"));
SoHAnimSegment496->setDEF(QString("hanim_r_cuneiform_2"));
SoTransform* SoTransform497 = new SoTransform();
SoTransform497->setTranslation(new float[]{-3.6105,0.033,1.4168});
SoTransform* SoTransform498 = new SoTransform();
//Empty Transform
SoShape* SoShape499 = new SoShape();
SoShape499->setUSE(QString("HAnimJointShape"));
SoTransform498->addChild(*SoShape499);

SoTransform497->addChild(*SoTransform498);

SoHAnimSegment496->addChild(*SoTransform497);

SoShape* SoShape500 = new SoShape();
SoLineSet* SoLineSet501 = new SoLineSet();
SoLineSet501->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate502 = new SoCoordinate();
SoCoordinate502->setPoint(new float[]{-3.6105,0.033,1.4168,-3.5565,0.0232,2.2895}, 6);
SoLineSet501->setCoord(*SoCoordinate502);

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
SoColorRGBA* SoColorRGBA503 = new SoColorRGBA();
SoColorRGBA503->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet501->addChild(*SoColorRGBA503);

SoShape500->setGeometry(*SoLineSet501);

SoHAnimSegment496->addChild(*SoShape500);

SoHAnimJoint495->addChildren(*SoHAnimSegment496);

SoHAnimJoint* SoHAnimJoint504 = new SoHAnimJoint();
SoHAnimJoint504->X3DNode::setName(QString("r_tarsometatarsal_2"));
SoHAnimJoint504->setDEF(QString("hanim_r_tarsometatarsal_2"));
SoHAnimJoint504->setCenter(new float[]{-3.5565,0.0232,2.2895});
SoHAnimJoint504->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint504->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment505 = new SoHAnimSegment();
SoHAnimSegment505->X3DNode::setName(QString("r_metatarsal_2"));
SoHAnimSegment505->setDEF(QString("hanim_r_metatarsal_2"));
SoTransform* SoTransform506 = new SoTransform();
SoTransform506->setTranslation(new float[]{-3.5565,0.0232,2.2895});
SoTransform* SoTransform507 = new SoTransform();
//Empty Transform
SoShape* SoShape508 = new SoShape();
SoShape508->setUSE(QString("HAnimJointShape"));
SoTransform507->addChild(*SoShape508);

SoTransform506->addChild(*SoTransform507);

SoHAnimSegment505->addChild(*SoTransform506);

SoShape* SoShape509 = new SoShape();
SoLineSet* SoLineSet510 = new SoLineSet();
SoLineSet510->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate511 = new SoCoordinate();
SoCoordinate511->setPoint(new float[]{-3.5565,0.0232,2.2895,-3.6595,0.0085,4.8125}, 6);
SoLineSet510->setCoord(*SoCoordinate511);

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
SoColorRGBA* SoColorRGBA512 = new SoColorRGBA();
SoColorRGBA512->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet510->addChild(*SoColorRGBA512);

SoShape509->setGeometry(*SoLineSet510);

SoHAnimSegment505->addChild(*SoShape509);

SoHAnimJoint504->addChildren(*SoHAnimSegment505);

SoHAnimJoint* SoHAnimJoint513 = new SoHAnimJoint();
SoHAnimJoint513->X3DNode::setName(QString("r_metatarsophalangeal_2"));
SoHAnimJoint513->setDEF(QString("hanim_r_metatarsophalangeal_2"));
SoHAnimJoint513->setCenter(new float[]{-3.6595,0.0085,4.8125});
SoHAnimJoint513->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint513->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment514 = new SoHAnimSegment();
SoHAnimSegment514->X3DNode::setName(QString("r_tarsal_proximal_phalanx_2"));
SoHAnimSegment514->setDEF(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoTransform* SoTransform515 = new SoTransform();
SoTransform515->setTranslation(new float[]{-3.6595,0.0085,4.8125});
SoTransform* SoTransform516 = new SoTransform();
//Empty Transform
SoShape* SoShape517 = new SoShape();
SoShape517->setUSE(QString("HAnimJointShape"));
SoTransform516->addChild(*SoShape517);

SoTransform515->addChild(*SoTransform516);

SoHAnimSegment514->addChild(*SoTransform515);

SoShape* SoShape518 = new SoShape();
SoLineSet* SoLineSet519 = new SoLineSet();
SoLineSet519->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate520 = new SoCoordinate();
SoCoordinate520->setPoint(new float[]{-3.6595,0.0085,4.8125,-3.7385,0.0054,5.5315}, 6);
SoLineSet519->setCoord(*SoCoordinate520);

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
SoColorRGBA* SoColorRGBA521 = new SoColorRGBA();
SoColorRGBA521->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet519->addChild(*SoColorRGBA521);

SoShape518->setGeometry(*SoLineSet519);

SoHAnimSegment514->addChild(*SoShape518);

SoHAnimJoint513->addChildren(*SoHAnimSegment514);

SoHAnimJoint* SoHAnimJoint522 = new SoHAnimJoint();
SoHAnimJoint522->X3DNode::setName(QString("r_tarsal_proximal_interphalangeal_2"));
SoHAnimJoint522->setDEF(QString("hanim_r_tarsal_proximal_interphalangeal_2"));
SoHAnimJoint522->setCenter(new float[]{-3.7385,0.0054,5.5315});
SoHAnimJoint522->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint522->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment523 = new SoHAnimSegment();
SoHAnimSegment523->X3DNode::setName(QString("r_tarsal_middle_phalanx_2"));
SoHAnimSegment523->setDEF(QString("hanim_r_tarsal_middle_phalanx_2"));
SoTransform* SoTransform524 = new SoTransform();
SoTransform524->setTranslation(new float[]{-3.7385,0.0054,5.5315});
SoTransform* SoTransform525 = new SoTransform();
//Empty Transform
SoShape* SoShape526 = new SoShape();
SoShape526->setUSE(QString("HAnimJointShape"));
SoTransform525->addChild(*SoShape526);

SoTransform524->addChild(*SoTransform525);

SoHAnimSegment523->addChild(*SoTransform524);

SoShape* SoShape527 = new SoShape();
SoLineSet* SoLineSet528 = new SoLineSet();
SoLineSet528->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate529 = new SoCoordinate();
SoCoordinate529->setPoint(new float[]{-3.7385,0.0054,5.5315,-3.7385,0.0017,5.9505}, 6);
SoLineSet528->setCoord(*SoCoordinate529);

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
SoColorRGBA* SoColorRGBA530 = new SoColorRGBA();
SoColorRGBA530->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet528->addChild(*SoColorRGBA530);

SoShape527->setGeometry(*SoLineSet528);

SoHAnimSegment523->addChild(*SoShape527);

SoHAnimSite* SoHAnimSite531 = new SoHAnimSite();
SoHAnimSite531->X3DNode::setName(QString("r_tarsal_distal_phalanx_2_tip"));
SoHAnimSite531->setDEF(QString("hanim_r_tarsal_distal_phalanx_2_tip"));
SoHAnimSite531->setTranslation(new float[]{-0.0883,0.0134,0.1383});
SoTouchSensor* SoTouchSensor532 = new SoTouchSensor();
SoTouchSensor532->setDescription(QString("HAnimSite r_tarsal_distal_phalanx_2_tip"));
SoHAnimSite531->addChild(*SoTouchSensor532);

SoShape* SoShape533 = new SoShape();
SoShape533->setUSE(QString("HAnimSiteShape"));
SoHAnimSite531->addChild(*SoShape533);

SoHAnimSegment523->addChild(*SoHAnimSite531);

SoHAnimJoint522->addChildren(*SoHAnimSegment523);

SoHAnimJoint* SoHAnimJoint534 = new SoHAnimJoint();
SoHAnimJoint534->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint534->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint534->setCenter(new float[]{-3.7385,0.0017,5.9505});
SoHAnimJoint534->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint534->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint522->addChildren(*SoHAnimJoint534);

SoHAnimJoint513->addChildren(*SoHAnimJoint522);

SoHAnimJoint504->addChildren(*SoHAnimJoint513);

SoHAnimJoint495->addChildren(*SoHAnimJoint504);

SoHAnimJoint444->addChildren(*SoHAnimJoint495);

SoHAnimJoint* SoHAnimJoint535 = new SoHAnimJoint();
SoHAnimJoint535->X3DNode::setName(QString("r_cuneonavicular_3"));
SoHAnimJoint535->setDEF(QString("hanim_r_cuneonavicular_3"));
SoHAnimJoint535->setCenter(new float[]{-4.1245,0.0328,1.3453});
SoHAnimJoint535->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint535->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment536 = new SoHAnimSegment();
SoHAnimSegment536->X3DNode::setName(QString("r_cuneiform_3"));
SoHAnimSegment536->setDEF(QString("hanim_r_cuneiform_3"));
SoTransform* SoTransform537 = new SoTransform();
SoTransform537->setTranslation(new float[]{-4.1245,0.0328,1.3453});
SoTransform* SoTransform538 = new SoTransform();
//Empty Transform
SoShape* SoShape539 = new SoShape();
SoShape539->setUSE(QString("HAnimJointShape"));
SoTransform538->addChild(*SoShape539);

SoTransform537->addChild(*SoTransform538);

SoHAnimSegment536->addChild(*SoTransform537);

SoShape* SoShape540 = new SoShape();
SoLineSet* SoLineSet541 = new SoLineSet();
SoLineSet541->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate542 = new SoCoordinate();
SoCoordinate542->setPoint(new float[]{-4.1245,0.0328,1.3453,-3.7385,0.0017,5.9505}, 6);
SoLineSet541->setCoord(*SoCoordinate542);

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
SoColorRGBA* SoColorRGBA543 = new SoColorRGBA();
SoColorRGBA543->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet541->addChild(*SoColorRGBA543);

SoShape540->setGeometry(*SoLineSet541);

SoHAnimSegment536->addChild(*SoShape540);

SoHAnimJoint535->addChildren(*SoHAnimSegment536);

SoHAnimJoint* SoHAnimJoint544 = new SoHAnimJoint();
SoHAnimJoint544->X3DNode::setName(QString("r_tarsometatarsal_3"));
SoHAnimJoint544->setDEF(QString("hanim_r_tarsometatarsal_3"));
SoHAnimJoint544->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint544->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment545 = new SoHAnimSegment();
SoHAnimSegment545->X3DNode::setName(QString("r_metatarsal_3"));
SoHAnimSegment545->setDEF(QString("hanim_r_metatarsal_3"));
SoTransform* SoTransform546 = new SoTransform();
SoTransform546->setTranslation(new float[]{-4.1245,0.0328,1.3453});
SoTransform* SoTransform547 = new SoTransform();
//Empty Transform
SoShape* SoShape548 = new SoShape();
SoShape548->setUSE(QString("HAnimJointShape"));
SoTransform547->addChild(*SoShape548);

SoTransform546->addChild(*SoTransform547);

SoHAnimSegment545->addChild(*SoTransform546);

SoShape* SoShape549 = new SoShape();
SoLineSet* SoLineSet550 = new SoLineSet();
SoLineSet550->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate551 = new SoCoordinate();
SoCoordinate551->setPoint(new float[]{-4.2795,0.0086,4.7055}, 3);
SoLineSet550->setCoord(*SoCoordinate551);

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 1
SoColorRGBA* SoColorRGBA552 = new SoColorRGBA();
SoColorRGBA552->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet550->addChild(*SoColorRGBA552);

SoShape549->setGeometry(*SoLineSet550);

SoHAnimSegment545->addChild(*SoShape549);

SoHAnimJoint544->addChildren(*SoHAnimSegment545);

SoHAnimJoint* SoHAnimJoint553 = new SoHAnimJoint();
SoHAnimJoint553->X3DNode::setName(QString("r_metatarsophalangeal_3"));
SoHAnimJoint553->setDEF(QString("hanim_r_metatarsophalangeal_3"));
SoHAnimJoint553->setCenter(new float[]{-4.2795,0.0086,4.7055});
SoHAnimJoint553->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint553->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment554 = new SoHAnimSegment();
SoHAnimSegment554->X3DNode::setName(QString("r_tarsal_proximal_phalanx_3"));
SoHAnimSegment554->setDEF(QString("hanim_r_tarsal_proximal_phalanx_3"));
SoTransform* SoTransform555 = new SoTransform();
SoTransform555->setTranslation(new float[]{-4.2795,0.0086,4.7055});
SoTransform* SoTransform556 = new SoTransform();
//Empty Transform
SoShape* SoShape557 = new SoShape();
SoShape557->setUSE(QString("HAnimJointShape"));
SoTransform556->addChild(*SoShape557);

SoTransform555->addChild(*SoTransform556);

SoHAnimSegment554->addChild(*SoTransform555);

SoShape* SoShape558 = new SoShape();
SoLineSet* SoLineSet559 = new SoLineSet();
SoLineSet559->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate560 = new SoCoordinate();
SoCoordinate560->setPoint(new float[]{-4.2795,0.0086,4.7055,-4.3865,0.0044,5.3745}, 6);
SoLineSet559->setCoord(*SoCoordinate560);

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
SoColorRGBA* SoColorRGBA561 = new SoColorRGBA();
SoColorRGBA561->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet559->addChild(*SoColorRGBA561);

SoShape558->setGeometry(*SoLineSet559);

SoHAnimSegment554->addChild(*SoShape558);

SoHAnimJoint553->addChildren(*SoHAnimSegment554);

SoHAnimJoint* SoHAnimJoint562 = new SoHAnimJoint();
SoHAnimJoint562->X3DNode::setName(QString("r_tarsal_proximal_interphalangeal_3"));
SoHAnimJoint562->setDEF(QString("hanim_r_tarsal_proximal_interphalangeal_3"));
SoHAnimJoint562->setCenter(new float[]{-4.3865,0.0044,5.3745});
SoHAnimJoint562->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint562->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment563 = new SoHAnimSegment();
SoHAnimSegment563->X3DNode::setName(QString("r_tarsal_middle_phalanx_3"));
SoHAnimSegment563->setDEF(QString("hanim_r_tarsal_middle_phalanx_3"));
SoTransform* SoTransform564 = new SoTransform();
SoTransform564->setTranslation(new float[]{-4.3865,0.0044,5.3745});
SoTransform* SoTransform565 = new SoTransform();
//Empty Transform
SoShape* SoShape566 = new SoShape();
SoShape566->setUSE(QString("HAnimJointShape"));
SoTransform565->addChild(*SoShape566);

SoTransform564->addChild(*SoTransform565);

SoHAnimSegment563->addChild(*SoTransform564);

SoShape* SoShape567 = new SoShape();
SoLineSet* SoLineSet568 = new SoLineSet();
SoLineSet568->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate569 = new SoCoordinate();
SoCoordinate569->setPoint(new float[]{-4.3865,0.0044,5.3745,-4.4545,0.0017,5.7845}, 6);
SoLineSet568->setCoord(*SoCoordinate569);

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
SoColorRGBA* SoColorRGBA570 = new SoColorRGBA();
SoColorRGBA570->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet568->addChild(*SoColorRGBA570);

SoShape567->setGeometry(*SoLineSet568);

SoHAnimSegment563->addChild(*SoShape567);

SoHAnimSite* SoHAnimSite571 = new SoHAnimSite();
SoHAnimSite571->X3DNode::setName(QString("r_tarsal_distal_phalanx_3_tip"));
SoHAnimSite571->setDEF(QString("hanim_r_tarsal_distal_phalanx_3_tip"));
SoTouchSensor* SoTouchSensor572 = new SoTouchSensor();
SoTouchSensor572->setDescription(QString("HAnimSite r_tarsal_distal_phalanx_3_tip"));
SoHAnimSite571->addChild(*SoTouchSensor572);

SoShape* SoShape573 = new SoShape();
SoShape573->setUSE(QString("HAnimSiteShape"));
SoHAnimSite571->addChild(*SoShape573);

SoHAnimSegment563->addChild(*SoHAnimSite571);

SoHAnimJoint562->addChildren(*SoHAnimSegment563);

SoHAnimJoint* SoHAnimJoint574 = new SoHAnimJoint();
SoHAnimJoint574->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_3"));
SoHAnimJoint574->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_3"));
SoHAnimJoint574->setCenter(new float[]{-4.4545,0.0017,5.7845});
SoHAnimJoint574->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint574->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint562->addChildren(*SoHAnimJoint574);

SoHAnimJoint553->addChildren(*SoHAnimJoint562);

SoHAnimJoint544->addChildren(*SoHAnimJoint553);

SoHAnimJoint535->addChildren(*SoHAnimJoint544);

SoHAnimJoint444->addChildren(*SoHAnimJoint535);

SoHAnimJoint431->addChildren(*SoHAnimJoint444);

SoHAnimJoint* SoHAnimJoint575 = new SoHAnimJoint();
SoHAnimJoint575->X3DNode::setName(QString("r_calcaneocuboid"));
SoHAnimJoint575->setDEF(QString("hanim_r_calcaneocuboid"));
SoHAnimJoint575->setCenter(new float[]{-3.9515,0.0653,-0.6895});
SoHAnimJoint575->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint575->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment576 = new SoHAnimSegment();
SoHAnimSegment576->X3DNode::setName(QString("r_calcaneus"));
SoHAnimSegment576->setDEF(QString("hanim_r_calcaneus"));
SoTransform* SoTransform577 = new SoTransform();
SoTransform577->setTranslation(new float[]{-3.9515,0.0653,-0.6895});
SoTransform* SoTransform578 = new SoTransform();
//Empty Transform
SoShape* SoShape579 = new SoShape();
SoShape579->setUSE(QString("HAnimJointShape"));
SoTransform578->addChild(*SoShape579);

SoTransform577->addChild(*SoTransform578);

SoHAnimSegment576->addChild(*SoTransform577);

SoShape* SoShape580 = new SoShape();
SoLineSet* SoLineSet581 = new SoLineSet();
SoLineSet581->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate582 = new SoCoordinate();
SoCoordinate582->setPoint(new float[]{-3.9515,0.0653,-0.6895,-4.9095,0.0353,0.5574}, 6);
SoLineSet581->setCoord(*SoCoordinate582);

//from r_calcaneocuboid to r_transversetarsal vertices 2
SoColorRGBA* SoColorRGBA583 = new SoColorRGBA();
SoColorRGBA583->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet581->addChild(*SoColorRGBA583);

SoShape580->setGeometry(*SoLineSet581);

SoHAnimSegment576->addChild(*SoShape580);

SoHAnimJoint575->addChildren(*SoHAnimSegment576);

SoHAnimJoint* SoHAnimJoint584 = new SoHAnimJoint();
SoHAnimJoint584->X3DNode::setName(QString("r_transversetarsal"));
SoHAnimJoint584->setDEF(QString("hanim_r_transversetarsal"));
SoHAnimJoint584->setCenter(new float[]{-4.9095,0.0353,0.5574});
SoHAnimJoint584->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint584->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment585 = new SoHAnimSegment();
SoHAnimSegment585->X3DNode::setName(QString("r_cuboid"));
SoHAnimSegment585->setDEF(QString("hanim_r_cuboid"));
SoTransform* SoTransform586 = new SoTransform();
SoTransform586->setTranslation(new float[]{-4.9095,0.0353,0.5574});
SoTransform* SoTransform587 = new SoTransform();
//Empty Transform
SoShape* SoShape588 = new SoShape();
SoShape588->setUSE(QString("HAnimJointShape"));
SoTransform587->addChild(*SoShape588);

SoTransform586->addChild(*SoTransform587);

SoHAnimSegment585->addChild(*SoTransform586);

SoShape* SoShape589 = new SoShape();
SoLineSet* SoLineSet590 = new SoLineSet();
SoLineSet590->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate591 = new SoCoordinate();
SoCoordinate591->setPoint(new float[]{-4.9095,0.0353,0.5574,-4.7255,0.0211,2.1725}, 6);
SoLineSet590->setCoord(*SoCoordinate591);

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
SoColorRGBA* SoColorRGBA592 = new SoColorRGBA();
SoColorRGBA592->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet590->addChild(*SoColorRGBA592);

SoShape589->setGeometry(*SoLineSet590);

SoHAnimSegment585->addChild(*SoShape589);

SoShape* SoShape593 = new SoShape();
SoLineSet* SoLineSet594 = new SoLineSet();
SoLineSet594->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate595 = new SoCoordinate();
SoCoordinate595->setPoint(new float[]{-4.9095,0.0353,0.5574,-5.3615,0.0164,2.0085}, 6);
SoLineSet594->setCoord(*SoCoordinate595);

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
SoColorRGBA* SoColorRGBA596 = new SoColorRGBA();
SoColorRGBA596->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet594->addChild(*SoColorRGBA596);

SoShape593->setGeometry(*SoLineSet594);

SoHAnimSegment585->addChild(*SoShape593);

SoHAnimJoint584->addChildren(*SoHAnimSegment585);

SoHAnimJoint* SoHAnimJoint597 = new SoHAnimJoint();
SoHAnimJoint597->X3DNode::setName(QString("r_tarsometatarsal_4"));
SoHAnimJoint597->setDEF(QString("hanim_r_tarsometatarsal_4"));
SoHAnimJoint597->setCenter(new float[]{-4.7255,0.0211,2.1725});
SoHAnimJoint597->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint597->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment598 = new SoHAnimSegment();
SoHAnimSegment598->X3DNode::setName(QString("r_metatarsal_4"));
SoHAnimSegment598->setDEF(QString("hanim_r_metatarsal_4"));
SoTransform* SoTransform599 = new SoTransform();
SoTransform599->setTranslation(new float[]{-4.7255,0.0211,2.1725});
SoTransform* SoTransform600 = new SoTransform();
//Empty Transform
SoShape* SoShape601 = new SoShape();
SoShape601->setUSE(QString("HAnimJointShape"));
SoTransform600->addChild(*SoShape601);

SoTransform599->addChild(*SoTransform600);

SoHAnimSegment598->addChild(*SoTransform599);

SoShape* SoShape602 = new SoShape();
SoLineSet* SoLineSet603 = new SoLineSet();
SoLineSet603->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate604 = new SoCoordinate();
SoCoordinate604->setPoint(new float[]{-4.7255,0.0211,2.1725,-4.8755,0.0076,4.5165}, 6);
SoLineSet603->setCoord(*SoCoordinate604);

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
SoColorRGBA* SoColorRGBA605 = new SoColorRGBA();
SoColorRGBA605->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet603->addChild(*SoColorRGBA605);

SoShape602->setGeometry(*SoLineSet603);

SoHAnimSegment598->addChild(*SoShape602);

SoHAnimJoint597->addChildren(*SoHAnimSegment598);

SoHAnimJoint* SoHAnimJoint606 = new SoHAnimJoint();
SoHAnimJoint606->X3DNode::setName(QString("r_metatarsophalangeal_4"));
SoHAnimJoint606->setDEF(QString("hanim_r_metatarsophalangeal_4"));
SoHAnimJoint606->setCenter(new float[]{-4.8755,0.0076,4.5165});
SoHAnimJoint606->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint606->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment607 = new SoHAnimSegment();
SoHAnimSegment607->X3DNode::setName(QString("r_tarsal_proximal_phalanx_4"));
SoHAnimSegment607->setDEF(QString("hanim_r_tarsal_proximal_phalanx_4"));
SoTransform* SoTransform608 = new SoTransform();
SoTransform608->setTranslation(new float[]{-4.8755,0.0076,4.5165});
SoTransform* SoTransform609 = new SoTransform();
//Empty Transform
SoShape* SoShape610 = new SoShape();
SoShape610->setUSE(QString("HAnimJointShape"));
SoTransform609->addChild(*SoShape610);

SoTransform608->addChild(*SoTransform609);

SoHAnimSegment607->addChild(*SoTransform608);

SoShape* SoShape611 = new SoShape();
SoLineSet* SoLineSet612 = new SoLineSet();
SoLineSet612->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate613 = new SoCoordinate();
SoCoordinate613->setPoint(new float[]{-4.8755,0.0076,4.5165,-5.0655,0.0049,5.1895}, 6);
SoLineSet612->setCoord(*SoCoordinate613);

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
SoColorRGBA* SoColorRGBA614 = new SoColorRGBA();
SoColorRGBA614->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet612->addChild(*SoColorRGBA614);

SoShape611->setGeometry(*SoLineSet612);

SoHAnimSegment607->addChild(*SoShape611);

SoHAnimJoint606->addChildren(*SoHAnimSegment607);

SoHAnimJoint* SoHAnimJoint615 = new SoHAnimJoint();
SoHAnimJoint615->X3DNode::setName(QString("r_tarsal_proximal_interphalangeal_4"));
SoHAnimJoint615->setDEF(QString("hanim_r_tarsal_proximal_interphalangeal_4"));
SoHAnimJoint615->setCenter(new float[]{-5.0655,0.0049,5.1895});
SoHAnimJoint615->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint615->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment616 = new SoHAnimSegment();
SoHAnimSegment616->X3DNode::setName(QString("r_tarsal_middle_phalanx_4"));
SoHAnimSegment616->setDEF(QString("hanim_r_tarsal_middle_phalanx_4"));
SoTransform* SoTransform617 = new SoTransform();
SoTransform617->setTranslation(new float[]{-5.0655,0.0049,5.1895});
SoTransform* SoTransform618 = new SoTransform();
//Empty Transform
SoShape* SoShape619 = new SoShape();
SoShape619->setUSE(QString("HAnimJointShape"));
SoTransform618->addChild(*SoShape619);

SoTransform617->addChild(*SoTransform618);

SoHAnimSegment616->addChild(*SoTransform617);

SoShape* SoShape620 = new SoShape();
SoLineSet* SoLineSet621 = new SoLineSet();
SoLineSet621->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate622 = new SoCoordinate();
SoCoordinate622->setPoint(new float[]{-5.0655,0.0049,5.1895,-5.1335,0.0011,5.5175}, 6);
SoLineSet621->setCoord(*SoCoordinate622);

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
SoColorRGBA* SoColorRGBA623 = new SoColorRGBA();
SoColorRGBA623->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet621->addChild(*SoColorRGBA623);

SoShape620->setGeometry(*SoLineSet621);

SoHAnimSegment616->addChild(*SoShape620);

SoHAnimSite* SoHAnimSite624 = new SoHAnimSite();
SoHAnimSite624->X3DNode::setName(QString("r_tarsal_distal_phalanx_4_tip"));
SoHAnimSite624->setDEF(QString("hanim_r_tarsal_distal_phalanx_4_tip"));
SoTouchSensor* SoTouchSensor625 = new SoTouchSensor();
SoTouchSensor625->setDescription(QString("HAnimSite r_tarsal_distal_phalanx_4_tip"));
SoHAnimSite624->addChild(*SoTouchSensor625);

SoShape* SoShape626 = new SoShape();
SoShape626->setUSE(QString("HAnimSiteShape"));
SoHAnimSite624->addChild(*SoShape626);

SoHAnimSegment616->addChild(*SoHAnimSite624);

SoHAnimJoint615->addChildren(*SoHAnimSegment616);

SoHAnimJoint* SoHAnimJoint627 = new SoHAnimJoint();
SoHAnimJoint627->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_4"));
SoHAnimJoint627->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_4"));
SoHAnimJoint627->setCenter(new float[]{-5.1335,0.0011,5.5175});
SoHAnimJoint627->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint627->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint615->addChildren(*SoHAnimJoint627);

SoHAnimJoint606->addChildren(*SoHAnimJoint615);

SoHAnimJoint597->addChildren(*SoHAnimJoint606);

SoHAnimJoint584->addChildren(*SoHAnimJoint597);

SoHAnimJoint* SoHAnimJoint628 = new SoHAnimJoint();
SoHAnimJoint628->X3DNode::setName(QString("r_tarsometatarsal_5"));
SoHAnimJoint628->setDEF(QString("hanim_r_tarsometatarsal_5"));
SoHAnimJoint628->setCenter(new float[]{-5.3615,0.0164,2.0085});
SoHAnimJoint628->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint628->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment629 = new SoHAnimSegment();
SoHAnimSegment629->X3DNode::setName(QString("r_metatarsal_5"));
SoHAnimSegment629->setDEF(QString("hanim_r_metatarsal_5"));
SoTransform* SoTransform630 = new SoTransform();
SoTransform630->setTranslation(new float[]{-5.3615,0.0164,2.0085});
SoTransform* SoTransform631 = new SoTransform();
//Empty Transform
SoShape* SoShape632 = new SoShape();
SoShape632->setUSE(QString("HAnimJointShape"));
SoTransform631->addChild(*SoShape632);

SoTransform630->addChild(*SoTransform631);

SoHAnimSegment629->addChild(*SoTransform630);

SoShape* SoShape633 = new SoShape();
SoLineSet* SoLineSet634 = new SoLineSet();
SoLineSet634->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate635 = new SoCoordinate();
SoCoordinate635->setPoint(new float[]{-5.3615,0.0164,2.0085,-5.5055,0.0067,4.3115}, 6);
SoLineSet634->setCoord(*SoCoordinate635);

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
SoColorRGBA* SoColorRGBA636 = new SoColorRGBA();
SoColorRGBA636->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet634->addChild(*SoColorRGBA636);

SoShape633->setGeometry(*SoLineSet634);

SoHAnimSegment629->addChild(*SoShape633);

SoHAnimSite* SoHAnimSite637 = new SoHAnimSite();
SoHAnimSite637->X3DNode::setName(QString("r_metatarsal_phalanx_5_pt"));
SoHAnimSite637->setDEF(QString("hanim_r_metatarsal_phalanx_5_pt"));
SoTouchSensor* SoTouchSensor638 = new SoTouchSensor();
SoTouchSensor638->setDescription(QString("HAnimSite r_metatarsal_phalanx_5_pt"));
SoHAnimSite637->addChild(*SoTouchSensor638);

SoShape* SoShape639 = new SoShape();
SoShape639->setUSE(QString("HAnimSiteShape"));
SoHAnimSite637->addChild(*SoShape639);

SoHAnimSegment629->addChild(*SoHAnimSite637);

SoHAnimJoint628->addChildren(*SoHAnimSegment629);

SoHAnimJoint* SoHAnimJoint640 = new SoHAnimJoint();
SoHAnimJoint640->X3DNode::setName(QString("r_metatarsophalangeal_5"));
SoHAnimJoint640->setDEF(QString("hanim_r_metatarsophalangeal_5"));
SoHAnimJoint640->setCenter(new float[]{-5.5055,0.0067,4.3115});
SoHAnimJoint640->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint640->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment641 = new SoHAnimSegment();
SoHAnimSegment641->X3DNode::setName(QString("r_tarsal_proximal_phalanx_5"));
SoHAnimSegment641->setDEF(QString("hanim_r_tarsal_proximal_phalanx_5"));
SoTransform* SoTransform642 = new SoTransform();
SoTransform642->setTranslation(new float[]{-5.5055,0.0067,4.3115});
SoTransform* SoTransform643 = new SoTransform();
//Empty Transform
SoShape* SoShape644 = new SoShape();
SoShape644->setUSE(QString("HAnimJointShape"));
SoTransform643->addChild(*SoShape644);

SoTransform642->addChild(*SoTransform643);

SoHAnimSegment641->addChild(*SoTransform642);

SoShape* SoShape645 = new SoShape();
SoLineSet* SoLineSet646 = new SoLineSet();
SoLineSet646->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate647 = new SoCoordinate();
SoCoordinate647->setPoint(new float[]{-5.5055,0.0067,4.3115,-5.6085,0.003,4.6485}, 6);
SoLineSet646->setCoord(*SoCoordinate647);

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
SoColorRGBA* SoColorRGBA648 = new SoColorRGBA();
SoColorRGBA648->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet646->addChild(*SoColorRGBA648);

SoShape645->setGeometry(*SoLineSet646);

SoHAnimSegment641->addChild(*SoShape645);

SoHAnimJoint640->addChildren(*SoHAnimSegment641);

SoHAnimJoint* SoHAnimJoint649 = new SoHAnimJoint();
SoHAnimJoint649->X3DNode::setName(QString("r_tarsal_proximal_interphalangeal_5"));
SoHAnimJoint649->setDEF(QString("hanim_r_tarsal_proximal_interphalangeal_5"));
SoHAnimJoint649->setCenter(new float[]{-5.6085,0.003,4.6485});
SoHAnimJoint649->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint649->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment650 = new SoHAnimSegment();
SoHAnimSegment650->X3DNode::setName(QString("r_tarsal_middle_phalanx_5"));
SoHAnimSegment650->setDEF(QString("hanim_r_tarsal_middle_phalanx_5"));
SoTransform* SoTransform651 = new SoTransform();
SoTransform651->setTranslation(new float[]{-5.6085,0.003,4.6485});
SoTransform* SoTransform652 = new SoTransform();
//Empty Transform
SoShape* SoShape653 = new SoShape();
SoShape653->setUSE(QString("HAnimJointShape"));
SoTransform652->addChild(*SoShape653);

SoTransform651->addChild(*SoTransform652);

SoHAnimSegment650->addChild(*SoTransform651);

SoShape* SoShape654 = new SoShape();
SoLineSet* SoLineSet655 = new SoLineSet();
SoLineSet655->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate656 = new SoCoordinate();
SoCoordinate656->setPoint(new float[]{-5.6085,0.003,4.6485,-5.6495,0.0,4.9925}, 6);
SoLineSet655->setCoord(*SoCoordinate656);

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
SoColorRGBA* SoColorRGBA657 = new SoColorRGBA();
SoColorRGBA657->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet655->addChild(*SoColorRGBA657);

SoShape654->setGeometry(*SoLineSet655);

SoHAnimSegment650->addChild(*SoShape654);

SoHAnimSite* SoHAnimSite658 = new SoHAnimSite();
SoHAnimSite658->X3DNode::setName(QString("r_tarsal_distal_phalanx_5_tip"));
SoHAnimSite658->setDEF(QString("hanim_r_tarsal_distal_phalanx_5_tip"));
SoTouchSensor* SoTouchSensor659 = new SoTouchSensor();
SoTouchSensor659->setDescription(QString("HAnimSite r_tarsal_distal_phalanx_5_tip"));
SoHAnimSite658->addChild(*SoTouchSensor659);

SoShape* SoShape660 = new SoShape();
SoShape660->setUSE(QString("HAnimSiteShape"));
SoHAnimSite658->addChild(*SoShape660);

SoHAnimSegment650->addChild(*SoHAnimSite658);

SoHAnimJoint649->addChildren(*SoHAnimSegment650);

SoHAnimJoint* SoHAnimJoint661 = new SoHAnimJoint();
SoHAnimJoint661->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_5"));
SoHAnimJoint661->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_5"));
SoHAnimJoint661->setCenter(new float[]{-5.6495,0.0,4.9925});
SoHAnimJoint661->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint661->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint649->addChildren(*SoHAnimJoint661);

SoHAnimJoint640->addChildren(*SoHAnimJoint649);

SoHAnimJoint628->addChildren(*SoHAnimJoint640);

SoHAnimJoint584->addChildren(*SoHAnimJoint628);

SoHAnimJoint575->addChildren(*SoHAnimJoint584);

SoHAnimJoint431->addChildren(*SoHAnimJoint575);

SoHAnimJoint416->addChildren(*SoHAnimJoint431);

SoHAnimJoint398->addChildren(*SoHAnimJoint416);

SoHAnimJoint97->addChildren(*SoHAnimJoint398);

SoHAnimJoint45->addChildren(*SoHAnimJoint97);

SoHAnimJoint* SoHAnimJoint662 = new SoHAnimJoint();
SoHAnimJoint662->X3DNode::setName(QString("vl5"));
SoHAnimJoint662->setDEF(QString("hanim_vl5"));
SoHAnimJoint662->setCenter(new float[]{0.0028,1.0568,-0.0776});
SoHAnimJoint662->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint662->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment663 = new SoHAnimSegment();
SoHAnimSegment663->X3DNode::setName(QString("l5"));
SoHAnimSegment663->setDEF(QString("hanim_l5"));
SoTransform* SoTransform664 = new SoTransform();
SoTransform664->setTranslation(new float[]{0.0028,1.0568,-0.0776});
SoTransform* SoTransform665 = new SoTransform();
//Empty Transform
SoShape* SoShape666 = new SoShape();
SoShape666->setUSE(QString("HAnimJointShape"));
SoTransform665->addChild(*SoShape666);

SoTransform664->addChild(*SoTransform665);

SoHAnimSegment663->addChild(*SoTransform664);

SoShape* SoShape667 = new SoShape();
SoLineSet* SoLineSet668 = new SoLineSet();
SoLineSet668->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate669 = new SoCoordinate();
SoCoordinate669->setPoint(new float[]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787}, 6);
SoLineSet668->setCoord(*SoCoordinate669);

//from vl5 to vl4 vertices 2
SoColorRGBA* SoColorRGBA670 = new SoColorRGBA();
SoColorRGBA670->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet668->addChild(*SoColorRGBA670);

SoShape667->setGeometry(*SoLineSet668);

SoHAnimSegment663->addChild(*SoShape667);

SoHAnimJoint662->addChildren(*SoHAnimSegment663);

SoHAnimJoint* SoHAnimJoint671 = new SoHAnimJoint();
SoHAnimJoint671->X3DNode::setName(QString("vl4"));
SoHAnimJoint671->setDEF(QString("hanim_vl4"));
SoHAnimJoint671->setCenter(new float[]{0.0035,1.0925,-0.0787});
SoHAnimJoint671->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint671->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment672 = new SoHAnimSegment();
SoHAnimSegment672->X3DNode::setName(QString("l4"));
SoHAnimSegment672->setDEF(QString("hanim_l4"));
SoTransform* SoTransform673 = new SoTransform();
SoTransform673->setTranslation(new float[]{0.0035,1.0925,-0.0787});
SoTransform* SoTransform674 = new SoTransform();
//Empty Transform
SoShape* SoShape675 = new SoShape();
SoShape675->setUSE(QString("HAnimJointShape"));
SoTransform674->addChild(*SoShape675);

SoTransform673->addChild(*SoTransform674);

SoHAnimSegment672->addChild(*SoTransform673);

SoShape* SoShape676 = new SoShape();
SoLineSet* SoLineSet677 = new SoLineSet();
SoLineSet677->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate678 = new SoCoordinate();
SoCoordinate678->setPoint(new float[]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796}, 6);
SoLineSet677->setCoord(*SoCoordinate678);

//from vl4 to vl3 vertices 2
SoColorRGBA* SoColorRGBA679 = new SoColorRGBA();
SoColorRGBA679->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet677->addChild(*SoColorRGBA679);

SoShape676->setGeometry(*SoLineSet677);

SoHAnimSegment672->addChild(*SoShape676);

SoHAnimJoint671->addChildren(*SoHAnimSegment672);

SoHAnimJoint* SoHAnimJoint680 = new SoHAnimJoint();
SoHAnimJoint680->X3DNode::setName(QString("vl3"));
SoHAnimJoint680->setDEF(QString("hanim_vl3"));
SoHAnimJoint680->setCenter(new float[]{0.0041,1.1276,-0.0796});
SoHAnimJoint680->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint680->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment681 = new SoHAnimSegment();
SoHAnimSegment681->X3DNode::setName(QString("l3"));
SoHAnimSegment681->setDEF(QString("hanim_l3"));
SoTransform* SoTransform682 = new SoTransform();
SoTransform682->setTranslation(new float[]{0.0041,1.1276,-0.0796});
SoTransform* SoTransform683 = new SoTransform();
//Empty Transform
SoShape* SoShape684 = new SoShape();
SoShape684->setUSE(QString("HAnimJointShape"));
SoTransform683->addChild(*SoShape684);

SoTransform682->addChild(*SoTransform683);

SoHAnimSegment681->addChild(*SoTransform682);

SoShape* SoShape685 = new SoShape();
SoLineSet* SoLineSet686 = new SoLineSet();
SoLineSet686->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate687 = new SoCoordinate();
SoCoordinate687->setPoint(new float[]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08}, 6);
SoLineSet686->setCoord(*SoCoordinate687);

//from vl3 to vl2 vertices 2
SoColorRGBA* SoColorRGBA688 = new SoColorRGBA();
SoColorRGBA688->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet686->addChild(*SoColorRGBA688);

SoShape685->setGeometry(*SoLineSet686);

SoHAnimSegment681->addChild(*SoShape685);

SoHAnimSite* SoHAnimSite689 = new SoHAnimSite();
SoHAnimSite689->X3DNode::setName(QString("l_rib10_pt"));
SoHAnimSite689->setDEF(QString("hanim_l_rib10_pt"));
SoHAnimSite689->setTranslation(new float[]{0.0871,1.1925,0.0992});
SoTouchSensor* SoTouchSensor690 = new SoTouchSensor();
SoTouchSensor690->setDescription(QString("HAnimSite l_rib10_pt"));
SoHAnimSite689->addChild(*SoTouchSensor690);

SoShape* SoShape691 = new SoShape();
SoShape691->setUSE(QString("HAnimSiteShape"));
SoHAnimSite689->addChild(*SoShape691);

SoHAnimSegment681->addChild(*SoHAnimSite689);

SoHAnimSite* SoHAnimSite692 = new SoHAnimSite();
SoHAnimSite692->X3DNode::setName(QString("r_rib10_pt"));
SoHAnimSite692->setDEF(QString("hanim_r_rib10_pt"));
SoHAnimSite692->setTranslation(new float[]{-0.0711,1.1941,0.1016});
SoTouchSensor* SoTouchSensor693 = new SoTouchSensor();
SoTouchSensor693->setDescription(QString("HAnimSite r_rib10_pt"));
SoHAnimSite692->addChild(*SoTouchSensor693);

SoShape* SoShape694 = new SoShape();
SoShape694->setUSE(QString("HAnimSiteShape"));
SoHAnimSite692->addChild(*SoShape694);

SoHAnimSegment681->addChild(*SoHAnimSite692);

SoHAnimSite* SoHAnimSite695 = new SoHAnimSite();
SoHAnimSite695->X3DNode::setName(QString("spine_2_middle_back_pt"));
SoHAnimSite695->setDEF(QString("hanim_spine_2_middle_back_pt"));
SoTouchSensor* SoTouchSensor696 = new SoTouchSensor();
SoTouchSensor696->setDescription(QString("HAnimSite spine_2_middle_back_pt"));
SoHAnimSite695->addChild(*SoTouchSensor696);

SoShape* SoShape697 = new SoShape();
SoShape697->setUSE(QString("HAnimSiteShape"));
SoHAnimSite695->addChild(*SoShape697);

SoHAnimSegment681->addChild(*SoHAnimSite695);

SoHAnimJoint680->addChildren(*SoHAnimSegment681);

SoHAnimJoint* SoHAnimJoint698 = new SoHAnimJoint();
SoHAnimJoint698->X3DNode::setName(QString("vl2"));
SoHAnimJoint698->setDEF(QString("hanim_vl2"));
SoHAnimJoint698->setCenter(new float[]{0.0045,1.1546,-0.08});
SoHAnimJoint698->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint698->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment699 = new SoHAnimSegment();
SoHAnimSegment699->X3DNode::setName(QString("l2"));
SoHAnimSegment699->setDEF(QString("hanim_l2"));
SoTransform* SoTransform700 = new SoTransform();
SoTransform700->setTranslation(new float[]{0.0045,1.1546,-0.08});
SoTransform* SoTransform701 = new SoTransform();
//Empty Transform
SoShape* SoShape702 = new SoShape();
SoShape702->setUSE(QString("HAnimJointShape"));
SoTransform701->addChild(*SoShape702);

SoTransform700->addChild(*SoTransform701);

SoHAnimSegment699->addChild(*SoTransform700);

SoShape* SoShape703 = new SoShape();
SoLineSet* SoLineSet704 = new SoLineSet();
SoLineSet704->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate705 = new SoCoordinate();
SoCoordinate705->setPoint(new float[]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805}, 6);
SoLineSet704->setCoord(*SoCoordinate705);

//from vl2 to vl1 vertices 2
SoColorRGBA* SoColorRGBA706 = new SoColorRGBA();
SoColorRGBA706->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet704->addChild(*SoColorRGBA706);

SoShape703->setGeometry(*SoLineSet704);

SoHAnimSegment699->addChild(*SoShape703);

SoHAnimJoint698->addChildren(*SoHAnimSegment699);

SoHAnimJoint* SoHAnimJoint707 = new SoHAnimJoint();
SoHAnimJoint707->X3DNode::setName(QString("vl1"));
SoHAnimJoint707->setDEF(QString("hanim_vl1"));
SoHAnimJoint707->setCenter(new float[]{0.0048,1.1912,-0.0805});
SoHAnimJoint707->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint707->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment708 = new SoHAnimSegment();
SoHAnimSegment708->X3DNode::setName(QString("l1"));
SoHAnimSegment708->setDEF(QString("hanim_l1"));
SoTransform* SoTransform709 = new SoTransform();
SoTransform709->setTranslation(new float[]{0.0048,1.1912,-0.0805});
SoTransform* SoTransform710 = new SoTransform();
//Empty Transform
SoShape* SoShape711 = new SoShape();
SoShape711->setUSE(QString("HAnimJointShape"));
SoTransform710->addChild(*SoShape711);

SoTransform709->addChild(*SoTransform710);

SoHAnimSegment708->addChild(*SoTransform709);

SoShape* SoShape712 = new SoShape();
SoLineSet* SoLineSet713 = new SoLineSet();
SoLineSet713->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate714 = new SoCoordinate();
SoCoordinate714->setPoint(new float[]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808}, 6);
SoLineSet713->setCoord(*SoCoordinate714);

//from vl1 to vt12 vertices 2
SoColorRGBA* SoColorRGBA715 = new SoColorRGBA();
SoColorRGBA715->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet713->addChild(*SoColorRGBA715);

SoShape712->setGeometry(*SoLineSet713);

SoHAnimSegment708->addChild(*SoShape712);

SoHAnimJoint707->addChildren(*SoHAnimSegment708);

SoHAnimJoint* SoHAnimJoint716 = new SoHAnimJoint();
SoHAnimJoint716->X3DNode::setName(QString("vt12"));
SoHAnimJoint716->setDEF(QString("hanim_vt12"));
SoHAnimJoint716->setCenter(new float[]{0.0051,1.2278,-0.0808});
SoHAnimJoint716->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint716->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment717 = new SoHAnimSegment();
SoHAnimSegment717->X3DNode::setName(QString("t12"));
SoHAnimSegment717->setDEF(QString("hanim_t12"));
SoTransform* SoTransform718 = new SoTransform();
SoTransform718->setTranslation(new float[]{0.0051,1.2278,-0.0808});
SoTransform* SoTransform719 = new SoTransform();
//Empty Transform
SoShape* SoShape720 = new SoShape();
SoShape720->setUSE(QString("HAnimJointShape"));
SoTransform719->addChild(*SoShape720);

SoTransform718->addChild(*SoTransform719);

SoHAnimSegment717->addChild(*SoTransform718);

SoShape* SoShape721 = new SoShape();
SoLineSet* SoLineSet722 = new SoLineSet();
SoLineSet722->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate723 = new SoCoordinate();
SoCoordinate723->setPoint(new float[]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081}, 6);
SoLineSet722->setCoord(*SoCoordinate723);

//from vt12 to vt11 vertices 2
SoColorRGBA* SoColorRGBA724 = new SoColorRGBA();
SoColorRGBA724->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet722->addChild(*SoColorRGBA724);

SoShape721->setGeometry(*SoLineSet722);

SoHAnimSegment717->addChild(*SoShape721);

SoHAnimJoint716->addChildren(*SoHAnimSegment717);

SoHAnimJoint* SoHAnimJoint725 = new SoHAnimJoint();
SoHAnimJoint725->X3DNode::setName(QString("vt11"));
SoHAnimJoint725->setDEF(QString("hanim_vt11"));
SoHAnimJoint725->setCenter(new float[]{0.0053,1.2679,-0.081});
SoHAnimJoint725->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint725->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment726 = new SoHAnimSegment();
SoHAnimSegment726->X3DNode::setName(QString("t11"));
SoHAnimSegment726->setDEF(QString("hanim_t11"));
SoTransform* SoTransform727 = new SoTransform();
SoTransform727->setTranslation(new float[]{0.0053,1.2679,-0.081});
SoTransform* SoTransform728 = new SoTransform();
//Empty Transform
SoShape* SoShape729 = new SoShape();
SoShape729->setUSE(QString("HAnimJointShape"));
SoTransform728->addChild(*SoShape729);

SoTransform727->addChild(*SoTransform728);

SoHAnimSegment726->addChild(*SoTransform727);

SoShape* SoShape730 = new SoShape();
SoLineSet* SoLineSet731 = new SoLineSet();
SoLineSet731->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate732 = new SoCoordinate();
SoCoordinate732->setPoint(new float[]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822}, 6);
SoLineSet731->setCoord(*SoCoordinate732);

//from vt11 to vt10 vertices 2
SoColorRGBA* SoColorRGBA733 = new SoColorRGBA();
SoColorRGBA733->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet731->addChild(*SoColorRGBA733);

SoShape730->setGeometry(*SoLineSet731);

SoHAnimSegment726->addChild(*SoShape730);

SoHAnimSite* SoHAnimSite734 = new SoHAnimSite();
SoHAnimSite734->X3DNode::setName(QString("substernale_pt"));
SoHAnimSite734->setDEF(QString("hanim_substernale_pt"));
SoHAnimSite734->setTranslation(new float[]{0.0085,1.2995,0.1147});
SoTouchSensor* SoTouchSensor735 = new SoTouchSensor();
SoTouchSensor735->setDescription(QString("HAnimSite substernale_pt"));
SoHAnimSite734->addChild(*SoTouchSensor735);

SoShape* SoShape736 = new SoShape();
SoShape736->setUSE(QString("HAnimSiteShape"));
SoHAnimSite734->addChild(*SoShape736);

SoHAnimSegment726->addChild(*SoHAnimSite734);

SoHAnimJoint725->addChildren(*SoHAnimSegment726);

SoHAnimJoint* SoHAnimJoint737 = new SoHAnimJoint();
SoHAnimJoint737->X3DNode::setName(QString("vt10"));
SoHAnimJoint737->setDEF(QString("hanim_vt10"));
SoHAnimJoint737->setCenter(new float[]{0.0056,1.2848,-0.0822});
SoHAnimJoint737->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint737->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment738 = new SoHAnimSegment();
SoHAnimSegment738->X3DNode::setName(QString("t10"));
SoHAnimSegment738->setDEF(QString("hanim_t10"));
SoTransform* SoTransform739 = new SoTransform();
SoTransform739->setTranslation(new float[]{0.0056,1.2848,-0.0822});
SoTransform* SoTransform740 = new SoTransform();
//Empty Transform
SoShape* SoShape741 = new SoShape();
SoShape741->setUSE(QString("HAnimJointShape"));
SoTransform740->addChild(*SoShape741);

SoTransform739->addChild(*SoTransform740);

SoHAnimSegment738->addChild(*SoTransform739);

SoShape* SoShape742 = new SoShape();
SoLineSet* SoLineSet743 = new SoLineSet();
SoLineSet743->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate744 = new SoCoordinate();
SoCoordinate744->setPoint(new float[]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838}, 6);
SoLineSet743->setCoord(*SoCoordinate744);

//from vt10 to vt9 vertices 2
SoColorRGBA* SoColorRGBA745 = new SoColorRGBA();
SoColorRGBA745->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet743->addChild(*SoColorRGBA745);

SoShape742->setGeometry(*SoLineSet743);

SoHAnimSegment738->addChild(*SoShape742);

SoHAnimSite* SoHAnimSite746 = new SoHAnimSite();
SoHAnimSite746->X3DNode::setName(QString("l_thelion_pt"));
SoHAnimSite746->setDEF(QString("hanim_l_thelion_pt"));
SoHAnimSite746->setTranslation(new float[]{0.0918,1.3382,0.1192});
SoTouchSensor* SoTouchSensor747 = new SoTouchSensor();
SoTouchSensor747->setDescription(QString("HAnimSite l_thelion_pt"));
SoHAnimSite746->addChild(*SoTouchSensor747);

SoShape* SoShape748 = new SoShape();
SoShape748->setUSE(QString("HAnimSiteShape"));
SoHAnimSite746->addChild(*SoShape748);

SoHAnimSegment738->addChild(*SoHAnimSite746);

SoHAnimSite* SoHAnimSite749 = new SoHAnimSite();
SoHAnimSite749->X3DNode::setName(QString("r_thelion_pt"));
SoHAnimSite749->setDEF(QString("hanim_r_thelion_pt"));
SoHAnimSite749->setTranslation(new float[]{-0.0736,1.3385,0.1217});
SoTouchSensor* SoTouchSensor750 = new SoTouchSensor();
SoTouchSensor750->setDescription(QString("HAnimSite r_thelion_pt"));
SoHAnimSite749->addChild(*SoTouchSensor750);

SoShape* SoShape751 = new SoShape();
SoShape751->setUSE(QString("HAnimSiteShape"));
SoHAnimSite749->addChild(*SoShape751);

SoHAnimSegment738->addChild(*SoHAnimSite749);

SoHAnimJoint737->addChildren(*SoHAnimSegment738);

SoHAnimJoint* SoHAnimJoint752 = new SoHAnimJoint();
SoHAnimJoint752->X3DNode::setName(QString("vt9"));
SoHAnimJoint752->setDEF(QString("hanim_vt9"));
SoHAnimJoint752->setCenter(new float[]{0.0057,1.3126,-0.0838});
SoHAnimJoint752->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint752->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment753 = new SoHAnimSegment();
SoHAnimSegment753->X3DNode::setName(QString("t9"));
SoHAnimSegment753->setDEF(QString("hanim_t9"));
SoTransform* SoTransform754 = new SoTransform();
SoTransform754->setTranslation(new float[]{0.0057,1.3126,-0.0838});
SoTransform* SoTransform755 = new SoTransform();
//Empty Transform
SoShape* SoShape756 = new SoShape();
SoShape756->setUSE(QString("HAnimJointShape"));
SoTransform755->addChild(*SoShape756);

SoTransform754->addChild(*SoTransform755);

SoHAnimSegment753->addChild(*SoTransform754);

SoShape* SoShape757 = new SoShape();
SoLineSet* SoLineSet758 = new SoLineSet();
SoLineSet758->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate759 = new SoCoordinate();
SoCoordinate759->setPoint(new float[]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845}, 6);
SoLineSet758->setCoord(*SoCoordinate759);

//from vt9 to vt8 vertices 2
SoColorRGBA* SoColorRGBA760 = new SoColorRGBA();
SoColorRGBA760->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet758->addChild(*SoColorRGBA760);

SoShape757->setGeometry(*SoLineSet758);

SoHAnimSegment753->addChild(*SoShape757);

SoHAnimJoint752->addChildren(*SoHAnimSegment753);

SoHAnimJoint* SoHAnimJoint761 = new SoHAnimJoint();
SoHAnimJoint761->X3DNode::setName(QString("vt8"));
SoHAnimJoint761->setDEF(QString("hanim_vt8"));
SoHAnimJoint761->setCenter(new float[]{0.0057,1.3382,-0.0845});
SoHAnimJoint761->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint761->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment762 = new SoHAnimSegment();
SoHAnimSegment762->X3DNode::setName(QString("t8"));
SoHAnimSegment762->setDEF(QString("hanim_t8"));
SoTransform* SoTransform763 = new SoTransform();
SoTransform763->setTranslation(new float[]{0.0057,1.3382,-0.0845});
SoTransform* SoTransform764 = new SoTransform();
//Empty Transform
SoShape* SoShape765 = new SoShape();
SoShape765->setUSE(QString("HAnimJointShape"));
SoTransform764->addChild(*SoShape765);

SoTransform763->addChild(*SoTransform764);

SoHAnimSegment762->addChild(*SoTransform763);

SoShape* SoShape766 = new SoShape();
SoLineSet* SoLineSet767 = new SoLineSet();
SoLineSet767->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate768 = new SoCoordinate();
SoCoordinate768->setPoint(new float[]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833}, 6);
SoLineSet767->setCoord(*SoCoordinate768);

//from vt8 to vt7 vertices 2
SoColorRGBA* SoColorRGBA769 = new SoColorRGBA();
SoColorRGBA769->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet767->addChild(*SoColorRGBA769);

SoShape766->setGeometry(*SoLineSet767);

SoHAnimSegment762->addChild(*SoShape766);

SoHAnimJoint761->addChildren(*SoHAnimSegment762);

SoHAnimJoint* SoHAnimJoint770 = new SoHAnimJoint();
SoHAnimJoint770->X3DNode::setName(QString("vt7"));
SoHAnimJoint770->setDEF(QString("hanim_vt7"));
SoHAnimJoint770->setCenter(new float[]{0.0058,1.3625,-0.0833});
SoHAnimJoint770->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint770->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment771 = new SoHAnimSegment();
SoHAnimSegment771->X3DNode::setName(QString("t7"));
SoHAnimSegment771->setDEF(QString("hanim_t7"));
SoTransform* SoTransform772 = new SoTransform();
SoTransform772->setTranslation(new float[]{0.0058,1.3625,-0.0833});
SoTransform* SoTransform773 = new SoTransform();
//Empty Transform
SoShape* SoShape774 = new SoShape();
SoShape774->setUSE(QString("HAnimJointShape"));
SoTransform773->addChild(*SoShape774);

SoTransform772->addChild(*SoTransform773);

SoHAnimSegment771->addChild(*SoTransform772);

SoShape* SoShape775 = new SoShape();
SoLineSet* SoLineSet776 = new SoLineSet();
SoLineSet776->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate777 = new SoCoordinate();
SoCoordinate777->setPoint(new float[]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08}, 6);
SoLineSet776->setCoord(*SoCoordinate777);

//from vt7 to vt6 vertices 2
SoColorRGBA* SoColorRGBA778 = new SoColorRGBA();
SoColorRGBA778->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet776->addChild(*SoColorRGBA778);

SoShape775->setGeometry(*SoLineSet776);

SoHAnimSegment771->addChild(*SoShape775);

SoHAnimSite* SoHAnimSite779 = new SoHAnimSite();
SoHAnimSite779->X3DNode::setName(QString("l_chest_midsagittal_plane_pt"));
SoHAnimSite779->setDEF(QString("hanim_l_chest_midsagittal_plane_pt"));
SoTouchSensor* SoTouchSensor780 = new SoTouchSensor();
SoTouchSensor780->setDescription(QString("HAnimSite l_chest_midsagittal_plane_pt"));
SoHAnimSite779->addChild(*SoTouchSensor780);

SoShape* SoShape781 = new SoShape();
SoShape781->setUSE(QString("HAnimSiteShape"));
SoHAnimSite779->addChild(*SoShape781);

SoHAnimSegment771->addChild(*SoHAnimSite779);

SoHAnimSite* SoHAnimSite782 = new SoHAnimSite();
SoHAnimSite782->X3DNode::setName(QString("mesosternale_pt"));
SoHAnimSite782->setDEF(QString("hanim_mesosternale_pt"));
SoTouchSensor* SoTouchSensor783 = new SoTouchSensor();
SoTouchSensor783->setDescription(QString("HAnimSite mesosternale_pt"));
SoHAnimSite782->addChild(*SoTouchSensor783);

SoShape* SoShape784 = new SoShape();
SoShape784->setUSE(QString("HAnimSiteShape"));
SoHAnimSite782->addChild(*SoShape784);

SoHAnimSegment771->addChild(*SoHAnimSite782);

SoHAnimSite* SoHAnimSite785 = new SoHAnimSite();
SoHAnimSite785->X3DNode::setName(QString("r_chest_midsagittal_plane_pt"));
SoHAnimSite785->setDEF(QString("hanim_r_chest_midsagittal_plane_pt"));
SoTouchSensor* SoTouchSensor786 = new SoTouchSensor();
SoTouchSensor786->setDescription(QString("HAnimSite r_chest_midsagittal_plane_pt"));
SoHAnimSite785->addChild(*SoTouchSensor786);

SoShape* SoShape787 = new SoShape();
SoShape787->setUSE(QString("HAnimSiteShape"));
SoHAnimSite785->addChild(*SoShape787);

SoHAnimSegment771->addChild(*SoHAnimSite785);

SoHAnimSite* SoHAnimSite788 = new SoHAnimSite();
SoHAnimSite788->X3DNode::setName(QString("rear_center_midsagittal_plane_pt"));
SoHAnimSite788->setDEF(QString("hanim_rear_center_midsagittal_plane_pt"));
SoTouchSensor* SoTouchSensor789 = new SoTouchSensor();
SoTouchSensor789->setDescription(QString("HAnimSite rear_center_midsagittal_plane_pt"));
SoHAnimSite788->addChild(*SoTouchSensor789);

SoShape* SoShape790 = new SoShape();
SoShape790->setUSE(QString("HAnimSiteShape"));
SoHAnimSite788->addChild(*SoShape790);

SoHAnimSegment771->addChild(*SoHAnimSite788);

SoHAnimJoint770->addChildren(*SoHAnimSegment771);

SoHAnimJoint* SoHAnimJoint791 = new SoHAnimJoint();
SoHAnimJoint791->X3DNode::setName(QString("vt6"));
SoHAnimJoint791->setDEF(QString("hanim_vt6"));
SoHAnimJoint791->setCenter(new float[]{0.0059,1.3866,-0.08});
SoHAnimJoint791->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint791->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment792 = new SoHAnimSegment();
SoHAnimSegment792->X3DNode::setName(QString("t6"));
SoHAnimSegment792->setDEF(QString("hanim_t6"));
SoTransform* SoTransform793 = new SoTransform();
SoTransform793->setTranslation(new float[]{0.0059,1.3866,-0.08});
SoTransform* SoTransform794 = new SoTransform();
//Empty Transform
SoShape* SoShape795 = new SoShape();
SoShape795->setUSE(QString("HAnimJointShape"));
SoTransform794->addChild(*SoShape795);

SoTransform793->addChild(*SoTransform794);

SoHAnimSegment792->addChild(*SoTransform793);

SoShape* SoShape796 = new SoShape();
SoLineSet* SoLineSet797 = new SoLineSet();
SoLineSet797->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate798 = new SoCoordinate();
SoCoordinate798->setPoint(new float[]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745}, 6);
SoLineSet797->setCoord(*SoCoordinate798);

//from vt6 to vt5 vertices 2
SoColorRGBA* SoColorRGBA799 = new SoColorRGBA();
SoColorRGBA799->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet797->addChild(*SoColorRGBA799);

SoShape796->setGeometry(*SoLineSet797);

SoHAnimSegment792->addChild(*SoShape796);

SoHAnimSite* SoHAnimSite800 = new SoHAnimSite();
SoHAnimSite800->X3DNode::setName(QString("spine_1_middle_back_pt"));
SoHAnimSite800->setDEF(QString("hanim_spine_1_middle_back_pt"));
SoTouchSensor* SoTouchSensor801 = new SoTouchSensor();
SoTouchSensor801->setDescription(QString("HAnimSite spine_1_middle_back_pt"));
SoHAnimSite800->addChild(*SoTouchSensor801);

SoShape* SoShape802 = new SoShape();
SoShape802->setUSE(QString("HAnimSiteShape"));
SoHAnimSite800->addChild(*SoShape802);

SoHAnimSegment792->addChild(*SoHAnimSite800);

SoHAnimJoint791->addChildren(*SoHAnimSegment792);

SoHAnimJoint* SoHAnimJoint803 = new SoHAnimJoint();
SoHAnimJoint803->X3DNode::setName(QString("vt5"));
SoHAnimJoint803->setDEF(QString("hanim_vt5"));
SoHAnimJoint803->setCenter(new float[]{0.006,1.4102,-0.0745});
SoHAnimJoint803->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint803->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment804 = new SoHAnimSegment();
SoHAnimSegment804->X3DNode::setName(QString("t5"));
SoHAnimSegment804->setDEF(QString("hanim_t5"));
SoTransform* SoTransform805 = new SoTransform();
SoTransform805->setTranslation(new float[]{0.006,1.4102,-0.0745});
SoTransform* SoTransform806 = new SoTransform();
//Empty Transform
SoShape* SoShape807 = new SoShape();
SoShape807->setUSE(QString("HAnimJointShape"));
SoTransform806->addChild(*SoShape807);

SoTransform805->addChild(*SoTransform806);

SoHAnimSegment804->addChild(*SoTransform805);

SoShape* SoShape808 = new SoShape();
SoLineSet* SoLineSet809 = new SoLineSet();
SoLineSet809->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate810 = new SoCoordinate();
SoCoordinate810->setPoint(new float[]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675}, 6);
SoLineSet809->setCoord(*SoCoordinate810);

//from vt5 to vt4 vertices 2
SoColorRGBA* SoColorRGBA811 = new SoColorRGBA();
SoColorRGBA811->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet809->addChild(*SoColorRGBA811);

SoShape808->setGeometry(*SoLineSet809);

SoHAnimSegment804->addChild(*SoShape808);

SoHAnimJoint803->addChildren(*SoHAnimSegment804);

SoHAnimJoint* SoHAnimJoint812 = new SoHAnimJoint();
SoHAnimJoint812->X3DNode::setName(QString("vt4"));
SoHAnimJoint812->setDEF(QString("hanim_vt4"));
SoHAnimJoint812->setCenter(new float[]{0.0061,1.432,-0.0675});
SoHAnimJoint812->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint812->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment813 = new SoHAnimSegment();
SoHAnimSegment813->X3DNode::setName(QString("t4"));
SoHAnimSegment813->setDEF(QString("hanim_t4"));
SoTransform* SoTransform814 = new SoTransform();
SoTransform814->setTranslation(new float[]{0.0061,1.432,-0.0675});
SoTransform* SoTransform815 = new SoTransform();
//Empty Transform
SoShape* SoShape816 = new SoShape();
SoShape816->setUSE(QString("HAnimJointShape"));
SoTransform815->addChild(*SoShape816);

SoTransform814->addChild(*SoTransform815);

SoHAnimSegment813->addChild(*SoTransform814);

SoShape* SoShape817 = new SoShape();
SoLineSet* SoLineSet818 = new SoLineSet();
SoLineSet818->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate819 = new SoCoordinate();
SoCoordinate819->setPoint(new float[]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057}, 6);
SoLineSet818->setCoord(*SoCoordinate819);

//from vt4 to vt3 vertices 2
SoColorRGBA* SoColorRGBA820 = new SoColorRGBA();
SoColorRGBA820->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet818->addChild(*SoColorRGBA820);

SoShape817->setGeometry(*SoLineSet818);

SoHAnimSegment813->addChild(*SoShape817);

SoHAnimJoint812->addChildren(*SoHAnimSegment813);

SoHAnimJoint* SoHAnimJoint821 = new SoHAnimJoint();
SoHAnimJoint821->X3DNode::setName(QString("vt3"));
SoHAnimJoint821->setDEF(QString("hanim_vt3"));
SoHAnimJoint821->setCenter(new float[]{0.0062,1.4583,-0.057});
SoHAnimJoint821->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint821->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment822 = new SoHAnimSegment();
SoHAnimSegment822->X3DNode::setName(QString("t3"));
SoHAnimSegment822->setDEF(QString("hanim_t3"));
SoTransform* SoTransform823 = new SoTransform();
SoTransform823->setTranslation(new float[]{0.0062,1.4583,-0.057});
SoTransform* SoTransform824 = new SoTransform();
//Empty Transform
SoShape* SoShape825 = new SoShape();
SoShape825->setUSE(QString("HAnimJointShape"));
SoTransform824->addChild(*SoShape825);

SoTransform823->addChild(*SoTransform824);

SoHAnimSegment822->addChild(*SoTransform823);

SoShape* SoShape826 = new SoShape();
SoLineSet* SoLineSet827 = new SoLineSet();
SoLineSet827->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate828 = new SoCoordinate();
SoCoordinate828->setPoint(new float[]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484}, 6);
SoLineSet827->setCoord(*SoCoordinate828);

//from vt3 to vt2 vertices 2
SoColorRGBA* SoColorRGBA829 = new SoColorRGBA();
SoColorRGBA829->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet827->addChild(*SoColorRGBA829);

SoShape826->setGeometry(*SoLineSet827);

SoHAnimSegment822->addChild(*SoShape826);

SoHAnimJoint821->addChildren(*SoHAnimSegment822);

SoHAnimJoint* SoHAnimJoint830 = new SoHAnimJoint();
SoHAnimJoint830->X3DNode::setName(QString("vt2"));
SoHAnimJoint830->setDEF(QString("hanim_vt2"));
SoHAnimJoint830->setCenter(new float[]{0.0063,1.4761,-0.0484});
SoHAnimJoint830->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint830->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment831 = new SoHAnimSegment();
SoHAnimSegment831->X3DNode::setName(QString("t2"));
SoHAnimSegment831->setDEF(QString("hanim_t2"));
SoTransform* SoTransform832 = new SoTransform();
SoTransform832->setTranslation(new float[]{0.0063,1.4761,-0.0484});
SoTransform* SoTransform833 = new SoTransform();
//Empty Transform
SoShape* SoShape834 = new SoShape();
SoShape834->setUSE(QString("HAnimJointShape"));
SoTransform833->addChild(*SoShape834);

SoTransform832->addChild(*SoTransform833);

SoHAnimSegment831->addChild(*SoTransform832);

SoShape* SoShape835 = new SoShape();
SoLineSet* SoLineSet836 = new SoLineSet();
SoLineSet836->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate837 = new SoCoordinate();
SoCoordinate837->setPoint(new float[]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387}, 6);
SoLineSet836->setCoord(*SoCoordinate837);

//from vt2 to vt1 vertices 2
SoColorRGBA* SoColorRGBA838 = new SoColorRGBA();
SoColorRGBA838->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet836->addChild(*SoColorRGBA838);

SoShape835->setGeometry(*SoLineSet836);

SoHAnimSegment831->addChild(*SoShape835);

SoHAnimSite* SoHAnimSite839 = new SoHAnimSite();
SoHAnimSite839->X3DNode::setName(QString("cervicale_pt"));
SoHAnimSite839->setDEF(QString("hanim_cervicale_pt"));
SoHAnimSite839->setTranslation(new float[]{0.0064,1.52,-0.0815});
SoTouchSensor* SoTouchSensor840 = new SoTouchSensor();
SoTouchSensor840->setDescription(QString("HAnimSite cervicale_pt"));
SoHAnimSite839->addChild(*SoTouchSensor840);

SoShape* SoShape841 = new SoShape();
SoShape841->setUSE(QString("HAnimSiteShape"));
SoHAnimSite839->addChild(*SoShape841);

SoHAnimSegment831->addChild(*SoHAnimSite839);

SoHAnimSite* SoHAnimSite842 = new SoHAnimSite();
SoHAnimSite842->X3DNode::setName(QString("suprasternale_pt"));
SoHAnimSite842->setDEF(QString("hanim_suprasternale_pt"));
SoHAnimSite842->setTranslation(new float[]{0.0084,1.4714,0.0551});
SoTouchSensor* SoTouchSensor843 = new SoTouchSensor();
SoTouchSensor843->setDescription(QString("HAnimSite suprasternale_pt"));
SoHAnimSite842->addChild(*SoTouchSensor843);

SoShape* SoShape844 = new SoShape();
SoShape844->setUSE(QString("HAnimSiteShape"));
SoHAnimSite842->addChild(*SoShape844);

SoHAnimSegment831->addChild(*SoHAnimSite842);

SoHAnimJoint830->addChildren(*SoHAnimSegment831);

SoHAnimJoint* SoHAnimJoint845 = new SoHAnimJoint();
SoHAnimJoint845->X3DNode::setName(QString("vt1"));
SoHAnimJoint845->setDEF(QString("hanim_vt1"));
SoHAnimJoint845->setCenter(new float[]{0.0065,1.4951,-0.0387});
SoHAnimJoint845->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint845->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment846 = new SoHAnimSegment();
SoHAnimSegment846->X3DNode::setName(QString("t1"));
SoHAnimSegment846->setDEF(QString("hanim_t1"));
SoTransform* SoTransform847 = new SoTransform();
SoTransform847->setTranslation(new float[]{0.0065,1.4951,-0.0387});
SoTransform* SoTransform848 = new SoTransform();
//Empty Transform
SoShape* SoShape849 = new SoShape();
SoShape849->setUSE(QString("HAnimJointShape"));
SoTransform848->addChild(*SoShape849);

SoTransform847->addChild(*SoTransform848);

SoHAnimSegment846->addChild(*SoTransform847);

SoShape* SoShape850 = new SoShape();
SoLineSet* SoLineSet851 = new SoLineSet();
SoLineSet851->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate852 = new SoCoordinate();
SoCoordinate852->setPoint(new float[]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301}, 6);
SoLineSet851->setCoord(*SoCoordinate852);

//from vt1 to vc7 vertices 2
SoColorRGBA* SoColorRGBA853 = new SoColorRGBA();
SoColorRGBA853->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet851->addChild(*SoColorRGBA853);

SoShape850->setGeometry(*SoLineSet851);

SoHAnimSegment846->addChild(*SoShape850);

SoHAnimSite* SoHAnimSite854 = new SoHAnimSite();
SoHAnimSite854->X3DNode::setName(QString("l_neck_base_pt"));
SoHAnimSite854->setDEF(QString("hanim_l_neck_base_pt"));
SoHAnimSite854->setTranslation(new float[]{0.0646,1.5141,-0.038});
SoTouchSensor* SoTouchSensor855 = new SoTouchSensor();
SoTouchSensor855->setDescription(QString("HAnimSite l_neck_base_pt"));
SoHAnimSite854->addChild(*SoTouchSensor855);

SoShape* SoShape856 = new SoShape();
SoShape856->setUSE(QString("HAnimSiteShape"));
SoHAnimSite854->addChild(*SoShape856);

SoHAnimSegment846->addChild(*SoHAnimSite854);

SoHAnimSite* SoHAnimSite857 = new SoHAnimSite();
SoHAnimSite857->X3DNode::setName(QString("r_neck_base_pt"));
SoHAnimSite857->setDEF(QString("hanim_r_neck_base_pt"));
SoHAnimSite857->setTranslation(new float[]{-0.0419,1.5149,-0.022});
SoTouchSensor* SoTouchSensor858 = new SoTouchSensor();
SoTouchSensor858->setDescription(QString("HAnimSite r_neck_base_pt"));
SoHAnimSite857->addChild(*SoTouchSensor858);

SoShape* SoShape859 = new SoShape();
SoShape859->setUSE(QString("HAnimSiteShape"));
SoHAnimSite857->addChild(*SoShape859);

SoHAnimSegment846->addChild(*SoHAnimSite857);

SoShape* SoShape860 = new SoShape();
SoLineSet* SoLineSet861 = new SoLineSet();
SoLineSet861->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate862 = new SoCoordinate();
SoCoordinate862->setPoint(new float[]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353}, 6);
SoLineSet861->setCoord(*SoCoordinate862);

//from vt1 to l_sternoclavicular vertices 2
SoColorRGBA* SoColorRGBA863 = new SoColorRGBA();
SoColorRGBA863->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet861->addChild(*SoColorRGBA863);

SoShape860->setGeometry(*SoLineSet861);

SoHAnimSegment846->addChild(*SoShape860);

SoHAnimSite* SoHAnimSite864 = new SoHAnimSite();
SoHAnimSite864->X3DNode::setName(QString("l_acromion_pt"));
SoHAnimSite864->setDEF(QString("hanim_l_acromion_pt"));
SoHAnimSite864->setTranslation(new float[]{0.2032,1.476,-0.049});
SoTouchSensor* SoTouchSensor865 = new SoTouchSensor();
SoTouchSensor865->setDescription(QString("HAnimSite l_acromion_pt"));
SoHAnimSite864->addChild(*SoTouchSensor865);

SoShape* SoShape866 = new SoShape();
SoShape866->setUSE(QString("HAnimSiteShape"));
SoHAnimSite864->addChild(*SoShape866);

SoHAnimSegment846->addChild(*SoHAnimSite864);

SoHAnimSite* SoHAnimSite867 = new SoHAnimSite();
SoHAnimSite867->X3DNode::setName(QString("l_axilla_distal_pt"));
SoHAnimSite867->setDEF(QString("hanim_l_axilla_distal_pt"));
SoHAnimSite867->setTranslation(new float[]{0.1706,1.4072,-0.0875});
SoTouchSensor* SoTouchSensor868 = new SoTouchSensor();
SoTouchSensor868->setDescription(QString("HAnimSite l_axilla_distal_pt"));
SoHAnimSite867->addChild(*SoTouchSensor868);

SoShape* SoShape869 = new SoShape();
SoShape869->setUSE(QString("HAnimSiteShape"));
SoHAnimSite867->addChild(*SoShape869);

SoHAnimSegment846->addChild(*SoHAnimSite867);

SoHAnimSite* SoHAnimSite870 = new SoHAnimSite();
SoHAnimSite870->X3DNode::setName(QString("l_axilla_posterior_folds_pt"));
SoHAnimSite870->setDEF(QString("hanim_l_axilla_posterior_folds_pt"));
SoTouchSensor* SoTouchSensor871 = new SoTouchSensor();
SoTouchSensor871->setDescription(QString("HAnimSite l_axilla_posterior_folds_pt"));
SoHAnimSite870->addChild(*SoTouchSensor871);

SoShape* SoShape872 = new SoShape();
SoShape872->setUSE(QString("HAnimSiteShape"));
SoHAnimSite870->addChild(*SoShape872);

SoHAnimSegment846->addChild(*SoHAnimSite870);

SoHAnimSite* SoHAnimSite873 = new SoHAnimSite();
SoHAnimSite873->X3DNode::setName(QString("l_axilla_proximal_pt"));
SoHAnimSite873->setDEF(QString("hanim_l_axilla_proximal_pt"));
SoHAnimSite873->setTranslation(new float[]{0.1777,1.4065,-0.0075});
SoTouchSensor* SoTouchSensor874 = new SoTouchSensor();
SoTouchSensor874->setDescription(QString("HAnimSite l_axilla_proximal_pt"));
SoHAnimSite873->addChild(*SoTouchSensor874);

SoShape* SoShape875 = new SoShape();
SoShape875->setUSE(QString("HAnimSiteShape"));
SoHAnimSite873->addChild(*SoShape875);

SoHAnimSegment846->addChild(*SoHAnimSite873);

SoHAnimSite* SoHAnimSite876 = new SoHAnimSite();
SoHAnimSite876->X3DNode::setName(QString("l_clavicale_pt"));
SoHAnimSite876->setDEF(QString("hanim_l_clavicale_pt"));
SoHAnimSite876->setTranslation(new float[]{0.0271,1.4943,0.0394});
SoTouchSensor* SoTouchSensor877 = new SoTouchSensor();
SoTouchSensor877->setDescription(QString("HAnimSite l_clavicale_pt"));
SoHAnimSite876->addChild(*SoTouchSensor877);

SoShape* SoShape878 = new SoShape();
SoShape878->setUSE(QString("HAnimSiteShape"));
SoHAnimSite876->addChild(*SoShape878);

SoHAnimSegment846->addChild(*SoHAnimSite876);

SoShape* SoShape879 = new SoShape();
SoLineSet* SoLineSet880 = new SoLineSet();
SoLineSet880->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate881 = new SoCoordinate();
SoCoordinate881->setPoint(new float[]{0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033}, 6);
SoLineSet880->setCoord(*SoCoordinate881);

//from vt1 to r_sternoclavicular vertices 2
SoColorRGBA* SoColorRGBA882 = new SoColorRGBA();
SoColorRGBA882->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet880->addChild(*SoColorRGBA882);

SoShape879->setGeometry(*SoLineSet880);

SoHAnimSegment846->addChild(*SoShape879);

SoHAnimSite* SoHAnimSite883 = new SoHAnimSite();
SoHAnimSite883->X3DNode::setName(QString("r_acromion_pt"));
SoHAnimSite883->setDEF(QString("hanim_r_acromion_pt"));
SoHAnimSite883->setTranslation(new float[]{-0.1905,1.4791,-0.0431});
SoTouchSensor* SoTouchSensor884 = new SoTouchSensor();
SoTouchSensor884->setDescription(QString("HAnimSite r_acromion_pt"));
SoHAnimSite883->addChild(*SoTouchSensor884);

SoShape* SoShape885 = new SoShape();
SoShape885->setUSE(QString("HAnimSiteShape"));
SoHAnimSite883->addChild(*SoShape885);

SoHAnimSegment846->addChild(*SoHAnimSite883);

SoHAnimSite* SoHAnimSite886 = new SoHAnimSite();
SoHAnimSite886->X3DNode::setName(QString("r_axilla_distal_pt"));
SoHAnimSite886->setDEF(QString("hanim_r_axilla_distal_pt"));
SoHAnimSite886->setTranslation(new float[]{-0.1603,1.4098,-0.0826});
SoTouchSensor* SoTouchSensor887 = new SoTouchSensor();
SoTouchSensor887->setDescription(QString("HAnimSite r_axilla_distal_pt"));
SoHAnimSite886->addChild(*SoTouchSensor887);

SoShape* SoShape888 = new SoShape();
SoShape888->setUSE(QString("HAnimSiteShape"));
SoHAnimSite886->addChild(*SoShape888);

SoHAnimSegment846->addChild(*SoHAnimSite886);

SoHAnimSite* SoHAnimSite889 = new SoHAnimSite();
SoHAnimSite889->X3DNode::setName(QString("r_axilla_posterior_folds_pt"));
SoHAnimSite889->setDEF(QString("hanim_r_axilla_posterior_folds_pt"));
SoTouchSensor* SoTouchSensor890 = new SoTouchSensor();
SoTouchSensor890->setDescription(QString("HAnimSite r_axilla_posterior_folds_pt"));
SoHAnimSite889->addChild(*SoTouchSensor890);

SoShape* SoShape891 = new SoShape();
SoShape891->setUSE(QString("HAnimSiteShape"));
SoHAnimSite889->addChild(*SoShape891);

SoHAnimSegment846->addChild(*SoHAnimSite889);

SoHAnimSite* SoHAnimSite892 = new SoHAnimSite();
SoHAnimSite892->X3DNode::setName(QString("r_axilla_proximal_pt"));
SoHAnimSite892->setDEF(QString("hanim_r_axilla_proximal_pt"));
SoHAnimSite892->setTranslation(new float[]{-0.1626,1.4072,-0.0031});
SoTouchSensor* SoTouchSensor893 = new SoTouchSensor();
SoTouchSensor893->setDescription(QString("HAnimSite r_axilla_proximal_pt"));
SoHAnimSite892->addChild(*SoTouchSensor893);

SoShape* SoShape894 = new SoShape();
SoShape894->setUSE(QString("HAnimSiteShape"));
SoHAnimSite892->addChild(*SoShape894);

SoHAnimSegment846->addChild(*SoHAnimSite892);

SoHAnimSite* SoHAnimSite895 = new SoHAnimSite();
SoHAnimSite895->X3DNode::setName(QString("r_clavicale_pt"));
SoHAnimSite895->setDEF(QString("hanim_r_clavicale_pt"));
SoHAnimSite895->setTranslation(new float[]{-0.0115,1.4943,0.04});
SoTouchSensor* SoTouchSensor896 = new SoTouchSensor();
SoTouchSensor896->setDescription(QString("HAnimSite r_clavicale_pt"));
SoHAnimSite895->addChild(*SoTouchSensor896);

SoShape* SoShape897 = new SoShape();
SoShape897->setUSE(QString("HAnimSiteShape"));
SoHAnimSite895->addChild(*SoShape897);

SoHAnimSegment846->addChild(*SoHAnimSite895);

SoHAnimJoint845->addChildren(*SoHAnimSegment846);

SoHAnimJoint* SoHAnimJoint898 = new SoHAnimJoint();
SoHAnimJoint898->X3DNode::setName(QString("vc7"));
SoHAnimJoint898->setDEF(QString("hanim_vc7"));
SoHAnimJoint898->setCenter(new float[]{0.0066,1.5132,-0.0301});
SoHAnimJoint898->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint898->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment899 = new SoHAnimSegment();
SoHAnimSegment899->X3DNode::setName(QString("c7"));
SoHAnimSegment899->setDEF(QString("hanim_c7"));
SoTransform* SoTransform900 = new SoTransform();
SoTransform900->setTranslation(new float[]{0.0066,1.5132,-0.0301});
SoTransform* SoTransform901 = new SoTransform();
//Empty Transform
SoShape* SoShape902 = new SoShape();
SoShape902->setUSE(QString("HAnimJointShape"));
SoTransform901->addChild(*SoShape902);

SoTransform900->addChild(*SoTransform901);

SoHAnimSegment899->addChild(*SoTransform900);

SoShape* SoShape903 = new SoShape();
SoLineSet* SoLineSet904 = new SoLineSet();
SoLineSet904->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate905 = new SoCoordinate();
SoCoordinate905->setPoint(new float[]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143}, 6);
SoLineSet904->setCoord(*SoCoordinate905);

//from vc7 to vc6 vertices 2
SoColorRGBA* SoColorRGBA906 = new SoColorRGBA();
SoColorRGBA906->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet904->addChild(*SoColorRGBA906);

SoShape903->setGeometry(*SoLineSet904);

SoHAnimSegment899->addChild(*SoShape903);

SoHAnimJoint898->addChildren(*SoHAnimSegment899);

SoHAnimJoint* SoHAnimJoint907 = new SoHAnimJoint();
SoHAnimJoint907->X3DNode::setName(QString("vc6"));
SoHAnimJoint907->setDEF(QString("hanim_vc6"));
SoHAnimJoint907->setCenter(new float[]{0.0066,1.5357,-0.0143});
SoHAnimJoint907->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint907->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment908 = new SoHAnimSegment();
SoHAnimSegment908->X3DNode::setName(QString("c6"));
SoHAnimSegment908->setDEF(QString("hanim_c6"));
SoTransform* SoTransform909 = new SoTransform();
SoTransform909->setTranslation(new float[]{0.0066,1.5357,-0.0143});
SoTransform* SoTransform910 = new SoTransform();
//Empty Transform
SoShape* SoShape911 = new SoShape();
SoShape911->setUSE(QString("HAnimJointShape"));
SoTransform910->addChild(*SoShape911);

SoTransform909->addChild(*SoTransform910);

SoHAnimSegment908->addChild(*SoTransform909);

SoShape* SoShape912 = new SoShape();
SoLineSet* SoLineSet913 = new SoLineSet();
SoLineSet913->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate914 = new SoCoordinate();
SoCoordinate914->setPoint(new float[]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082}, 6);
SoLineSet913->setCoord(*SoCoordinate914);

//from vc6 to vc5 vertices 2
SoColorRGBA* SoColorRGBA915 = new SoColorRGBA();
SoColorRGBA915->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet913->addChild(*SoColorRGBA915);

SoShape912->setGeometry(*SoLineSet913);

SoHAnimSegment908->addChild(*SoShape912);

SoHAnimJoint907->addChildren(*SoHAnimSegment908);

SoHAnimJoint* SoHAnimJoint916 = new SoHAnimJoint();
SoHAnimJoint916->X3DNode::setName(QString("vc5"));
SoHAnimJoint916->setDEF(QString("hanim_vc5"));
SoHAnimJoint916->setCenter(new float[]{0.0066,1.552,-0.0082});
SoHAnimJoint916->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint916->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment917 = new SoHAnimSegment();
SoHAnimSegment917->X3DNode::setName(QString("c5"));
SoHAnimSegment917->setDEF(QString("hanim_c5"));
SoTransform* SoTransform918 = new SoTransform();
SoTransform918->setTranslation(new float[]{0.0066,1.552,-0.0082});
SoTransform* SoTransform919 = new SoTransform();
//Empty Transform
SoShape* SoShape920 = new SoShape();
SoShape920->setUSE(QString("HAnimJointShape"));
SoTransform919->addChild(*SoShape920);

SoTransform918->addChild(*SoTransform919);

SoHAnimSegment917->addChild(*SoTransform918);

SoShape* SoShape921 = new SoShape();
SoLineSet* SoLineSet922 = new SoLineSet();
SoLineSet922->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate923 = new SoCoordinate();
SoCoordinate923->setPoint(new float[]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084}, 6);
SoLineSet922->setCoord(*SoCoordinate923);

//from vc5 to vc4 vertices 2
SoColorRGBA* SoColorRGBA924 = new SoColorRGBA();
SoColorRGBA924->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet922->addChild(*SoColorRGBA924);

SoShape921->setGeometry(*SoLineSet922);

SoHAnimSegment917->addChild(*SoShape921);

SoHAnimJoint916->addChildren(*SoHAnimSegment917);

SoHAnimJoint* SoHAnimJoint925 = new SoHAnimJoint();
SoHAnimJoint925->X3DNode::setName(QString("vc4"));
SoHAnimJoint925->setDEF(QString("hanim_vc4"));
SoHAnimJoint925->setCenter(new float[]{0.0066,1.5662,-0.0084});
SoHAnimJoint925->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint925->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment926 = new SoHAnimSegment();
SoHAnimSegment926->X3DNode::setName(QString("c4"));
SoHAnimSegment926->setDEF(QString("hanim_c4"));
SoTransform* SoTransform927 = new SoTransform();
SoTransform927->setTranslation(new float[]{0.0066,1.5662,-0.0084});
SoTransform* SoTransform928 = new SoTransform();
//Empty Transform
SoShape* SoShape929 = new SoShape();
SoShape929->setUSE(QString("HAnimJointShape"));
SoTransform928->addChild(*SoShape929);

SoTransform927->addChild(*SoTransform928);

SoHAnimSegment926->addChild(*SoTransform927);

SoShape* SoShape930 = new SoShape();
SoLineSet* SoLineSet931 = new SoLineSet();
SoLineSet931->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate932 = new SoCoordinate();
SoCoordinate932->setPoint(new float[]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103}, 6);
SoLineSet931->setCoord(*SoCoordinate932);

//from vc4 to vc3 vertices 2
SoColorRGBA* SoColorRGBA933 = new SoColorRGBA();
SoColorRGBA933->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet931->addChild(*SoColorRGBA933);

SoShape930->setGeometry(*SoLineSet931);

SoHAnimSegment926->addChild(*SoShape930);

SoHAnimJoint925->addChildren(*SoHAnimSegment926);

SoHAnimJoint* SoHAnimJoint934 = new SoHAnimJoint();
SoHAnimJoint934->X3DNode::setName(QString("vc3"));
SoHAnimJoint934->setDEF(QString("hanim_vc3"));
SoHAnimJoint934->setCenter(new float[]{0.0066,1.58,-0.0103});
SoHAnimJoint934->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint934->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment935 = new SoHAnimSegment();
SoHAnimSegment935->X3DNode::setName(QString("c3"));
SoHAnimSegment935->setDEF(QString("hanim_c3"));
SoTransform* SoTransform936 = new SoTransform();
SoTransform936->setTranslation(new float[]{0.0066,1.58,-0.0103});
SoTransform* SoTransform937 = new SoTransform();
//Empty Transform
SoShape* SoShape938 = new SoShape();
SoShape938->setUSE(QString("HAnimJointShape"));
SoTransform937->addChild(*SoShape938);

SoTransform936->addChild(*SoTransform937);

SoHAnimSegment935->addChild(*SoTransform936);

SoShape* SoShape939 = new SoShape();
SoLineSet* SoLineSet940 = new SoLineSet();
SoLineSet940->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate941 = new SoCoordinate();
SoCoordinate941->setPoint(new float[]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103}, 6);
SoLineSet940->setCoord(*SoCoordinate941);

//from vc3 to vc2 vertices 2
SoColorRGBA* SoColorRGBA942 = new SoColorRGBA();
SoColorRGBA942->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet940->addChild(*SoColorRGBA942);

SoShape939->setGeometry(*SoLineSet940);

SoHAnimSegment935->addChild(*SoShape939);

SoHAnimSite* SoHAnimSite943 = new SoHAnimSite();
SoHAnimSite943->X3DNode::setName(QString("adams_apple_pt"));
SoHAnimSite943->setDEF(QString("hanim_adams_apple_pt"));
SoTouchSensor* SoTouchSensor944 = new SoTouchSensor();
SoTouchSensor944->setDescription(QString("HAnimSite adams_apple_pt"));
SoHAnimSite943->addChild(*SoTouchSensor944);

SoShape* SoShape945 = new SoShape();
SoShape945->setUSE(QString("HAnimSiteShape"));
SoHAnimSite943->addChild(*SoShape945);

SoHAnimSegment935->addChild(*SoHAnimSite943);

SoHAnimJoint934->addChildren(*SoHAnimSegment935);

SoHAnimJoint* SoHAnimJoint946 = new SoHAnimJoint();
SoHAnimJoint946->X3DNode::setName(QString("vc2"));
SoHAnimJoint946->setDEF(QString("hanim_vc2"));
SoHAnimJoint946->setCenter(new float[]{0.0066,1.5928,-0.0103});
SoHAnimJoint946->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint946->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment947 = new SoHAnimSegment();
SoHAnimSegment947->X3DNode::setName(QString("c2"));
SoHAnimSegment947->setDEF(QString("hanim_c2"));
SoTransform* SoTransform948 = new SoTransform();
SoTransform948->setTranslation(new float[]{0.0066,1.5928,-0.0103});
SoTransform* SoTransform949 = new SoTransform();
//Empty Transform
SoShape* SoShape950 = new SoShape();
SoShape950->setUSE(QString("HAnimJointShape"));
SoTransform949->addChild(*SoShape950);

SoTransform948->addChild(*SoTransform949);

SoHAnimSegment947->addChild(*SoTransform948);

SoShape* SoShape951 = new SoShape();
SoLineSet* SoLineSet952 = new SoLineSet();
SoLineSet952->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate953 = new SoCoordinate();
SoCoordinate953->setPoint(new float[]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034}, 6);
SoLineSet952->setCoord(*SoCoordinate953);

//from vc2 to vc1 vertices 2
SoColorRGBA* SoColorRGBA954 = new SoColorRGBA();
SoColorRGBA954->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet952->addChild(*SoColorRGBA954);

SoShape951->setGeometry(*SoLineSet952);

SoHAnimSegment947->addChild(*SoShape951);

SoHAnimJoint946->addChildren(*SoHAnimSegment947);

SoHAnimJoint* SoHAnimJoint955 = new SoHAnimJoint();
SoHAnimJoint955->X3DNode::setName(QString("vc1"));
SoHAnimJoint955->setDEF(QString("hanim_vc1"));
SoHAnimJoint955->setCenter(new float[]{0.0066,1.6144,-0.0034});
SoHAnimJoint955->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint955->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment956 = new SoHAnimSegment();
SoHAnimSegment956->X3DNode::setName(QString("c1"));
SoHAnimSegment956->setDEF(QString("hanim_c1"));
SoTransform* SoTransform957 = new SoTransform();
SoTransform957->setTranslation(new float[]{0.0066,1.6144,-0.0034});
SoTransform* SoTransform958 = new SoTransform();
//Empty Transform
SoShape* SoShape959 = new SoShape();
SoShape959->setUSE(QString("HAnimJointShape"));
SoTransform958->addChild(*SoShape959);

SoTransform957->addChild(*SoTransform958);

SoHAnimSegment956->addChild(*SoTransform957);

SoShape* SoShape960 = new SoShape();
SoLineSet* SoLineSet961 = new SoLineSet();
SoLineSet961->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate962 = new SoCoordinate();
SoCoordinate962->setPoint(new float[]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236}, 6);
SoLineSet961->setCoord(*SoCoordinate962);

//from vc1 to skullbase vertices 2
SoColorRGBA* SoColorRGBA963 = new SoColorRGBA();
SoColorRGBA963->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet961->addChild(*SoColorRGBA963);

SoShape960->setGeometry(*SoLineSet961);

SoHAnimSegment956->addChild(*SoShape960);

SoHAnimSite* SoHAnimSite964 = new SoHAnimSite();
SoHAnimSite964->X3DNode::setName(QString("glabella_pt"));
SoHAnimSite964->setDEF(QString("hanim_glabella_pt"));
SoTouchSensor* SoTouchSensor965 = new SoTouchSensor();
SoTouchSensor965->setDescription(QString("HAnimSite glabella_pt"));
SoHAnimSite964->addChild(*SoTouchSensor965);

SoShape* SoShape966 = new SoShape();
SoShape966->setUSE(QString("HAnimSiteShape"));
SoHAnimSite964->addChild(*SoShape966);

SoHAnimSegment956->addChild(*SoHAnimSite964);

SoHAnimSite* SoHAnimSite967 = new SoHAnimSite();
SoHAnimSite967->X3DNode::setName(QString("l_ectocanthus_pt"));
SoHAnimSite967->setDEF(QString("hanim_l_ectocanthus_pt"));
SoTouchSensor* SoTouchSensor968 = new SoTouchSensor();
SoTouchSensor968->setDescription(QString("HAnimSite l_ectocanthus_pt"));
SoHAnimSite967->addChild(*SoTouchSensor968);

SoShape* SoShape969 = new SoShape();
SoShape969->setUSE(QString("HAnimSiteShape"));
SoHAnimSite967->addChild(*SoShape969);

SoHAnimSegment956->addChild(*SoHAnimSite967);

SoHAnimSite* SoHAnimSite970 = new SoHAnimSite();
SoHAnimSite970->X3DNode::setName(QString("l_infraorbitale_pt"));
SoHAnimSite970->setDEF(QString("hanim_l_infraorbitale_pt"));
SoHAnimSite970->setTranslation(new float[]{0.0341,1.6171,0.0752});
SoTouchSensor* SoTouchSensor971 = new SoTouchSensor();
SoTouchSensor971->setDescription(QString("HAnimSite l_infraorbitale_pt"));
SoHAnimSite970->addChild(*SoTouchSensor971);

SoShape* SoShape972 = new SoShape();
SoShape972->setUSE(QString("HAnimSiteShape"));
SoHAnimSite970->addChild(*SoShape972);

SoHAnimSegment956->addChild(*SoHAnimSite970);

SoHAnimSite* SoHAnimSite973 = new SoHAnimSite();
SoHAnimSite973->X3DNode::setName(QString("l_tragion_pt"));
SoHAnimSite973->setDEF(QString("hanim_l_tragion_pt"));
SoHAnimSite973->setTranslation(new float[]{0.0739,1.6348,0.0282});
SoTouchSensor* SoTouchSensor974 = new SoTouchSensor();
SoTouchSensor974->setDescription(QString("HAnimSite l_tragion_pt"));
SoHAnimSite973->addChild(*SoTouchSensor974);

SoShape* SoShape975 = new SoShape();
SoShape975->setUSE(QString("HAnimSiteShape"));
SoHAnimSite973->addChild(*SoShape975);

SoHAnimSegment956->addChild(*SoHAnimSite973);

SoHAnimSite* SoHAnimSite976 = new SoHAnimSite();
SoHAnimSite976->X3DNode::setName(QString("nuchale_pt"));
SoHAnimSite976->setDEF(QString("hanim_nuchale_pt"));
SoHAnimSite976->setTranslation(new float[]{0.0039,1.5972,-0.0796});
SoTouchSensor* SoTouchSensor977 = new SoTouchSensor();
SoTouchSensor977->setDescription(QString("HAnimSite nuchale_pt"));
SoHAnimSite976->addChild(*SoTouchSensor977);

SoShape* SoShape978 = new SoShape();
SoShape978->setUSE(QString("HAnimSiteShape"));
SoHAnimSite976->addChild(*SoShape978);

SoHAnimSegment956->addChild(*SoHAnimSite976);

SoHAnimSite* SoHAnimSite979 = new SoHAnimSite();
SoHAnimSite979->X3DNode::setName(QString("opisthocranion_pt"));
SoHAnimSite979->setDEF(QString("hanim_opisthocranion_pt"));
SoTouchSensor* SoTouchSensor980 = new SoTouchSensor();
SoTouchSensor980->setDescription(QString("HAnimSite opisthocranion_pt"));
SoHAnimSite979->addChild(*SoTouchSensor980);

SoShape* SoShape981 = new SoShape();
SoShape981->setUSE(QString("HAnimSiteShape"));
SoHAnimSite979->addChild(*SoShape981);

SoHAnimSegment956->addChild(*SoHAnimSite979);

SoHAnimSite* SoHAnimSite982 = new SoHAnimSite();
SoHAnimSite982->X3DNode::setName(QString("r_ectocanthus_pt"));
SoHAnimSite982->setDEF(QString("hanim_r_ectocanthus_pt"));
SoTouchSensor* SoTouchSensor983 = new SoTouchSensor();
SoTouchSensor983->setDescription(QString("HAnimSite r_ectocanthus_pt"));
SoHAnimSite982->addChild(*SoTouchSensor983);

SoShape* SoShape984 = new SoShape();
SoShape984->setUSE(QString("HAnimSiteShape"));
SoHAnimSite982->addChild(*SoShape984);

SoHAnimSegment956->addChild(*SoHAnimSite982);

SoHAnimSite* SoHAnimSite985 = new SoHAnimSite();
SoHAnimSite985->X3DNode::setName(QString("r_infraorbitale_pt"));
SoHAnimSite985->setDEF(QString("hanim_r_infraorbitale_pt"));
SoHAnimSite985->setTranslation(new float[]{-0.0237,1.6171,0.0752});
SoTouchSensor* SoTouchSensor986 = new SoTouchSensor();
SoTouchSensor986->setDescription(QString("HAnimSite r_infraorbitale_pt"));
SoHAnimSite985->addChild(*SoTouchSensor986);

SoShape* SoShape987 = new SoShape();
SoShape987->setUSE(QString("HAnimSiteShape"));
SoHAnimSite985->addChild(*SoShape987);

SoHAnimSegment956->addChild(*SoHAnimSite985);

SoHAnimSite* SoHAnimSite988 = new SoHAnimSite();
SoHAnimSite988->X3DNode::setName(QString("r_tragion_pt"));
SoHAnimSite988->setDEF(QString("hanim_r_tragion_pt"));
SoHAnimSite988->setTranslation(new float[]{-0.0646,1.6347,0.0302});
SoTouchSensor* SoTouchSensor989 = new SoTouchSensor();
SoTouchSensor989->setDescription(QString("HAnimSite r_tragion_pt"));
SoHAnimSite988->addChild(*SoTouchSensor989);

SoShape* SoShape990 = new SoShape();
SoShape990->setUSE(QString("HAnimSiteShape"));
SoHAnimSite988->addChild(*SoShape990);

SoHAnimSegment956->addChild(*SoHAnimSite988);

SoHAnimSite* SoHAnimSite991 = new SoHAnimSite();
SoHAnimSite991->X3DNode::setName(QString("sellion_pt"));
SoHAnimSite991->setDEF(QString("hanim_sellion_pt"));
SoHAnimSite991->setTranslation(new float[]{0.0058,1.6316,0.0852});
SoTouchSensor* SoTouchSensor992 = new SoTouchSensor();
SoTouchSensor992->setDescription(QString("HAnimSite sellion_pt"));
SoHAnimSite991->addChild(*SoTouchSensor992);

SoShape* SoShape993 = new SoShape();
SoShape993->setUSE(QString("HAnimSiteShape"));
SoHAnimSite991->addChild(*SoShape993);

SoHAnimSegment956->addChild(*SoHAnimSite991);

SoHAnimSite* SoHAnimSite994 = new SoHAnimSite();
SoHAnimSite994->X3DNode::setName(QString("skull_vertex_pt"));
SoHAnimSite994->setDEF(QString("hanim_skull_vertex_pt"));
SoHAnimSite994->setTranslation(new float[]{0.005,1.7504,0.0055});
SoTouchSensor* SoTouchSensor995 = new SoTouchSensor();
SoTouchSensor995->setDescription(QString("HAnimSite skull_vertex_pt"));
SoHAnimSite994->addChild(*SoTouchSensor995);

SoShape* SoShape996 = new SoShape();
SoShape996->setUSE(QString("HAnimSiteShape"));
SoHAnimSite994->addChild(*SoShape996);

SoHAnimSegment956->addChild(*SoHAnimSite994);

SoHAnimJoint955->addChildren(*SoHAnimSegment956);

SoHAnimJoint* SoHAnimJoint997 = new SoHAnimJoint();
SoHAnimJoint997->X3DNode::setName(QString("skullbase"));
SoHAnimJoint997->setDEF(QString("hanim_skullbase"));
SoHAnimJoint997->setCenter(new float[]{0.0044,1.6209,0.0236});
SoHAnimJoint997->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint997->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment998 = new SoHAnimSegment();
SoHAnimSegment998->X3DNode::setName(QString("skull"));
SoHAnimSegment998->setDEF(QString("hanim_skull"));
SoTransform* SoTransform999 = new SoTransform();
SoTransform999->setTranslation(new float[]{0.0044,1.6209,0.0236});
SoTransform* SoTransform1000 = new SoTransform();
//Empty Transform
SoShape* SoShape1001 = new SoShape();
SoShape1001->setUSE(QString("HAnimJointShape"));
SoTransform1000->addChild(*SoShape1001);

SoTransform999->addChild(*SoTransform1000);

SoHAnimSegment998->addChild(*SoTransform999);

SoShape* SoShape1002 = new SoShape();
SoLineSet* SoLineSet1003 = new SoLineSet();
SoLineSet1003->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1004 = new SoCoordinate();
SoCoordinate1004->setPoint(new float[]{0.0044,1.6209,0.0236,2.2365,1.87,1.9285}, 6);
SoLineSet1003->setCoord(*SoCoordinate1004);

//from skullbase to l_eyelid_joint vertices 2
SoColorRGBA* SoColorRGBA1005 = new SoColorRGBA();
SoColorRGBA1005->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1003->addChild(*SoColorRGBA1005);

SoShape1002->setGeometry(*SoLineSet1003);

SoHAnimSegment998->addChild(*SoShape1002);

SoShape* SoShape1006 = new SoShape();
SoLineSet* SoLineSet1007 = new SoLineSet();
SoLineSet1007->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1008 = new SoCoordinate();
SoCoordinate1008->setPoint(new float[]{0.0044,1.6209,0.0236,-2.2535,1.87,1.9285}, 6);
SoLineSet1007->setCoord(*SoCoordinate1008);

//from skullbase to r_eyelid_joint vertices 2
SoColorRGBA* SoColorRGBA1009 = new SoColorRGBA();
SoColorRGBA1009->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1007->addChild(*SoColorRGBA1009);

SoShape1006->setGeometry(*SoLineSet1007);

SoHAnimSegment998->addChild(*SoShape1006);

SoShape* SoShape1010 = new SoShape();
SoLineSet* SoLineSet1011 = new SoLineSet();
SoLineSet1011->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1012 = new SoCoordinate();
SoCoordinate1012->setPoint(new float[]{0.0044,1.6209,0.0236,2.1305,1.8444,4.1555}, 6);
SoLineSet1011->setCoord(*SoCoordinate1012);

//from skullbase to l_eyeball_joint vertices 2
SoColorRGBA* SoColorRGBA1013 = new SoColorRGBA();
SoColorRGBA1013->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1011->addChild(*SoColorRGBA1013);

SoShape1010->setGeometry(*SoLineSet1011);

SoHAnimSegment998->addChild(*SoShape1010);

SoShape* SoShape1014 = new SoShape();
SoLineSet* SoLineSet1015 = new SoLineSet();
SoLineSet1015->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1016 = new SoCoordinate();
SoCoordinate1016->setPoint(new float[]{0.0044,1.6209,0.0236,-2.1475,1.8444,4.1555}, 6);
SoLineSet1015->setCoord(*SoCoordinate1016);

//from skullbase to r_eyeball_joint vertices 2
SoColorRGBA* SoColorRGBA1017 = new SoColorRGBA();
SoColorRGBA1017->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1015->addChild(*SoColorRGBA1017);

SoShape1014->setGeometry(*SoLineSet1015);

SoHAnimSegment998->addChild(*SoShape1014);

SoShape* SoShape1018 = new SoShape();
SoLineSet* SoLineSet1019 = new SoLineSet();
SoLineSet1019->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1020 = new SoCoordinate();
SoCoordinate1020->setPoint(new float[]{0.0044,1.6209,0.0236,0.9581,1.8563,5.2175}, 6);
SoLineSet1019->setCoord(*SoCoordinate1020);

//from skullbase to l_eyebrow_joint vertices 2
SoColorRGBA* SoColorRGBA1021 = new SoColorRGBA();
SoColorRGBA1021->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1019->addChild(*SoColorRGBA1021);

SoShape1018->setGeometry(*SoLineSet1019);

SoHAnimSegment998->addChild(*SoShape1018);

SoShape* SoShape1022 = new SoShape();
SoLineSet* SoLineSet1023 = new SoLineSet();
SoLineSet1023->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1024 = new SoCoordinate();
SoCoordinate1024->setPoint(new float[]{0.0044,1.6209,0.0236,-0.9751,1.8563,5.2175}, 6);
SoLineSet1023->setCoord(*SoCoordinate1024);

//from skullbase to r_eyebrow_joint vertices 2
SoColorRGBA* SoColorRGBA1025 = new SoColorRGBA();
SoColorRGBA1025->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1023->addChild(*SoColorRGBA1025);

SoShape1022->setGeometry(*SoLineSet1023);

SoHAnimSegment998->addChild(*SoShape1022);

SoShape* SoShape1026 = new SoShape();
SoLineSet* SoLineSet1027 = new SoLineSet();
SoLineSet1027->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1028 = new SoCoordinate();
SoCoordinate1028->setPoint(new float[]{0.0044,1.6209,0.0236,-0.0085,1.7229,1.148}, 6);
SoLineSet1027->setCoord(*SoCoordinate1028);

//from skullbase to temporomandibular vertices 2
SoColorRGBA* SoColorRGBA1029 = new SoColorRGBA();
SoColorRGBA1029->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1027->addChild(*SoColorRGBA1029);

SoShape1026->setGeometry(*SoLineSet1027);

SoHAnimSegment998->addChild(*SoShape1026);

SoHAnimSite* SoHAnimSite1030 = new SoHAnimSite();
SoHAnimSite1030->X3DNode::setName(QString("l_gonion_pt"));
SoHAnimSite1030->setDEF(QString("hanim_l_gonion_pt"));
SoHAnimSite1030->setTranslation(new float[]{0.0631,1.553,0.033});
SoTouchSensor* SoTouchSensor1031 = new SoTouchSensor();
SoTouchSensor1031->setDescription(QString("HAnimSite l_gonion_pt"));
SoHAnimSite1030->addChild(*SoTouchSensor1031);

SoShape* SoShape1032 = new SoShape();
SoShape1032->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1030->addChild(*SoShape1032);

SoHAnimSegment998->addChild(*SoHAnimSite1030);

SoHAnimSite* SoHAnimSite1033 = new SoHAnimSite();
SoHAnimSite1033->X3DNode::setName(QString("menton_pt"));
SoHAnimSite1033->setDEF(QString("hanim_menton_pt"));
SoTouchSensor* SoTouchSensor1034 = new SoTouchSensor();
SoTouchSensor1034->setDescription(QString("HAnimSite menton_pt"));
SoHAnimSite1033->addChild(*SoTouchSensor1034);

SoShape* SoShape1035 = new SoShape();
SoShape1035->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1033->addChild(*SoShape1035);

SoHAnimSegment998->addChild(*SoHAnimSite1033);

SoHAnimSite* SoHAnimSite1036 = new SoHAnimSite();
SoHAnimSite1036->X3DNode::setName(QString("r_gonion_pt"));
SoHAnimSite1036->setDEF(QString("hanim_r_gonion_pt"));
SoHAnimSite1036->setTranslation(new float[]{-0.052,1.5529,0.0347});
SoTouchSensor* SoTouchSensor1037 = new SoTouchSensor();
SoTouchSensor1037->setDescription(QString("HAnimSite r_gonion_pt"));
SoHAnimSite1036->addChild(*SoTouchSensor1037);

SoShape* SoShape1038 = new SoShape();
SoShape1038->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1036->addChild(*SoShape1038);

SoHAnimSegment998->addChild(*SoHAnimSite1036);

SoHAnimSite* SoHAnimSite1039 = new SoHAnimSite();
SoHAnimSite1039->X3DNode::setName(QString("supramenton_pt"));
SoHAnimSite1039->setDEF(QString("hanim_supramenton_pt"));
SoHAnimSite1039->setTranslation(new float[]{0.0061,1.541,0.0805});
SoTouchSensor* SoTouchSensor1040 = new SoTouchSensor();
SoTouchSensor1040->setDescription(QString("HAnimSite supramenton_pt"));
SoHAnimSite1039->addChild(*SoTouchSensor1040);

SoShape* SoShape1041 = new SoShape();
SoShape1041->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1039->addChild(*SoShape1041);

SoHAnimSegment998->addChild(*SoHAnimSite1039);

SoHAnimJoint997->addChildren(*SoHAnimSegment998);

SoHAnimJoint* SoHAnimJoint1042 = new SoHAnimJoint();
SoHAnimJoint1042->X3DNode::setName(QString("l_eyelid_joint"));
SoHAnimJoint1042->setDEF(QString("hanim_l_eyelid_joint"));
SoHAnimJoint1042->setCenter(new float[]{2.2365,1.87,1.9285});
SoHAnimJoint1042->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1042->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint997->addChildren(*SoHAnimJoint1042);

SoHAnimJoint* SoHAnimJoint1043 = new SoHAnimJoint();
SoHAnimJoint1043->X3DNode::setName(QString("r_eyelid_joint"));
SoHAnimJoint1043->setDEF(QString("hanim_r_eyelid_joint"));
SoHAnimJoint1043->setCenter(new float[]{-2.2535,1.87,1.9285});
SoHAnimJoint1043->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1043->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint997->addChildren(*SoHAnimJoint1043);

SoHAnimJoint* SoHAnimJoint1044 = new SoHAnimJoint();
SoHAnimJoint1044->X3DNode::setName(QString("l_eyeball_joint"));
SoHAnimJoint1044->setDEF(QString("hanim_l_eyeball_joint"));
SoHAnimJoint1044->setCenter(new float[]{2.1305,1.8444,4.1555});
SoHAnimJoint1044->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1044->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint997->addChildren(*SoHAnimJoint1044);

SoHAnimJoint* SoHAnimJoint1045 = new SoHAnimJoint();
SoHAnimJoint1045->X3DNode::setName(QString("r_eyeball_joint"));
SoHAnimJoint1045->setDEF(QString("hanim_r_eyeball_joint"));
SoHAnimJoint1045->setCenter(new float[]{-2.1475,1.8444,4.1555});
SoHAnimJoint1045->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1045->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint997->addChildren(*SoHAnimJoint1045);

SoHAnimJoint* SoHAnimJoint1046 = new SoHAnimJoint();
SoHAnimJoint1046->X3DNode::setName(QString("l_eyebrow_joint"));
SoHAnimJoint1046->setDEF(QString("hanim_l_eyebrow_joint"));
SoHAnimJoint1046->setCenter(new float[]{0.9581,1.8563,5.2175});
SoHAnimJoint1046->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1046->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint997->addChildren(*SoHAnimJoint1046);

SoHAnimJoint* SoHAnimJoint1047 = new SoHAnimJoint();
SoHAnimJoint1047->X3DNode::setName(QString("r_eyebrow_joint"));
SoHAnimJoint1047->setDEF(QString("hanim_r_eyebrow_joint"));
SoHAnimJoint1047->setCenter(new float[]{-0.9751,1.8563,5.2175});
SoHAnimJoint1047->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1047->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint997->addChildren(*SoHAnimJoint1047);

SoHAnimJoint* SoHAnimJoint1048 = new SoHAnimJoint();
SoHAnimJoint1048->X3DNode::setName(QString("temporomandibular"));
SoHAnimJoint1048->setDEF(QString("hanim_temporomandibular"));
SoHAnimJoint1048->setCenter(new float[]{-0.0085,1.7229,1.148});
SoHAnimJoint1048->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1048->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint997->addChildren(*SoHAnimJoint1048);

SoHAnimJoint955->addChildren(*SoHAnimJoint997);

SoHAnimJoint946->addChildren(*SoHAnimJoint955);

SoHAnimJoint934->addChildren(*SoHAnimJoint946);

SoHAnimJoint925->addChildren(*SoHAnimJoint934);

SoHAnimJoint916->addChildren(*SoHAnimJoint925);

SoHAnimJoint907->addChildren(*SoHAnimJoint916);

SoHAnimJoint898->addChildren(*SoHAnimJoint907);

SoHAnimJoint845->addChildren(*SoHAnimJoint898);

SoHAnimJoint* SoHAnimJoint1049 = new SoHAnimJoint();
SoHAnimJoint1049->X3DNode::setName(QString("l_sternoclavicular"));
SoHAnimJoint1049->setDEF(QString("hanim_l_sternoclavicular"));
SoHAnimJoint1049->setCenter(new float[]{0.082,1.4488,-0.0353});
SoHAnimJoint1049->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1049->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1050 = new SoHAnimSegment();
SoHAnimSegment1050->X3DNode::setName(QString("l_clavicle"));
SoHAnimSegment1050->setDEF(QString("hanim_l_clavicle"));
SoTransform* SoTransform1051 = new SoTransform();
SoTransform1051->setTranslation(new float[]{0.082,1.4488,-0.0353});
SoTransform* SoTransform1052 = new SoTransform();
//Empty Transform
SoShape* SoShape1053 = new SoShape();
SoShape1053->setUSE(QString("HAnimJointShape"));
SoTransform1052->addChild(*SoShape1053);

SoTransform1051->addChild(*SoTransform1052);

SoHAnimSegment1050->addChild(*SoTransform1051);

SoShape* SoShape1054 = new SoShape();
SoLineSet* SoLineSet1055 = new SoLineSet();
SoLineSet1055->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1056 = new SoCoordinate();
SoCoordinate1056->setPoint(new float[]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
SoLineSet1055->setCoord(*SoCoordinate1056);

//from l_sternoclavicular to l_acromioclavicular vertices 2
SoColorRGBA* SoColorRGBA1057 = new SoColorRGBA();
SoColorRGBA1057->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1055->addChild(*SoColorRGBA1057);

SoShape1054->setGeometry(*SoLineSet1055);

SoHAnimSegment1050->addChild(*SoShape1054);

SoHAnimJoint1049->addChildren(*SoHAnimSegment1050);

SoHAnimJoint* SoHAnimJoint1058 = new SoHAnimJoint();
SoHAnimJoint1058->X3DNode::setName(QString("l_acromioclavicular"));
SoHAnimJoint1058->setDEF(QString("hanim_l_acromioclavicular"));
SoHAnimJoint1058->setCenter(new float[]{0.0962,1.4269,-0.0424});
SoHAnimJoint1058->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1058->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1059 = new SoHAnimSegment();
SoHAnimSegment1059->X3DNode::setName(QString("l_scapula"));
SoHAnimSegment1059->setDEF(QString("hanim_l_scapula"));
SoTransform* SoTransform1060 = new SoTransform();
SoTransform1060->setTranslation(new float[]{0.0962,1.4269,-0.0424});
SoTransform* SoTransform1061 = new SoTransform();
//Empty Transform
SoShape* SoShape1062 = new SoShape();
SoShape1062->setUSE(QString("HAnimJointShape"));
SoTransform1061->addChild(*SoShape1062);

SoTransform1060->addChild(*SoTransform1061);

SoHAnimSegment1059->addChild(*SoTransform1060);

SoShape* SoShape1063 = new SoShape();
SoLineSet* SoLineSet1064 = new SoLineSet();
SoLineSet1064->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1065 = new SoCoordinate();
SoCoordinate1065->setPoint(new float[]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387}, 6);
SoLineSet1064->setCoord(*SoCoordinate1065);

//from l_acromioclavicular to l_shoulder vertices 2
SoColorRGBA* SoColorRGBA1066 = new SoColorRGBA();
SoColorRGBA1066->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1064->addChild(*SoColorRGBA1066);

SoShape1063->setGeometry(*SoLineSet1064);

SoHAnimSegment1059->addChild(*SoShape1063);

SoHAnimSite* SoHAnimSite1067 = new SoHAnimSite();
SoHAnimSite1067->X3DNode::setName(QString("l_bideltoid_pt"));
SoHAnimSite1067->setDEF(QString("hanim_l_bideltoid_pt"));
SoTouchSensor* SoTouchSensor1068 = new SoTouchSensor();
SoTouchSensor1068->setDescription(QString("HAnimSite l_bideltoid_pt"));
SoHAnimSite1067->addChild(*SoTouchSensor1068);

SoShape* SoShape1069 = new SoShape();
SoShape1069->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1067->addChild(*SoShape1069);

SoHAnimSegment1059->addChild(*SoHAnimSite1067);

SoHAnimSite* SoHAnimSite1070 = new SoHAnimSite();
SoHAnimSite1070->X3DNode::setName(QString("l_humeral_lateral_epicondyles_pt"));
SoHAnimSite1070->setDEF(QString("hanim_l_humeral_lateral_epicondyles_pt"));
SoHAnimSite1070->setTranslation(new float[]{0.228,1.1482,-0.11});
SoTouchSensor* SoTouchSensor1071 = new SoTouchSensor();
SoTouchSensor1071->setDescription(QString("HAnimSite l_humeral_lateral_epicondyles_pt"));
SoHAnimSite1070->addChild(*SoTouchSensor1071);

SoShape* SoShape1072 = new SoShape();
SoShape1072->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1070->addChild(*SoShape1072);

SoHAnimSegment1059->addChild(*SoHAnimSite1070);

SoHAnimJoint1058->addChildren(*SoHAnimSegment1059);

SoHAnimJoint* SoHAnimJoint1073 = new SoHAnimJoint();
SoHAnimJoint1073->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint1073->setDEF(QString("hanim_l_shoulder"));
SoHAnimJoint1073->setCenter(new float[]{0.2029,1.4376,-0.0387});
SoHAnimJoint1073->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1073->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1074 = new SoHAnimSegment();
SoHAnimSegment1074->X3DNode::setName(QString("l_upperarm"));
SoHAnimSegment1074->setDEF(QString("hanim_l_upperarm"));
SoTransform* SoTransform1075 = new SoTransform();
SoTransform1075->setTranslation(new float[]{0.2029,1.4376,-0.0387});
SoTransform* SoTransform1076 = new SoTransform();
//Empty Transform
SoShape* SoShape1077 = new SoShape();
SoShape1077->setUSE(QString("HAnimJointShape"));
SoTransform1076->addChild(*SoShape1077);

SoTransform1075->addChild(*SoTransform1076);

SoHAnimSegment1074->addChild(*SoTransform1075);

SoShape* SoShape1078 = new SoShape();
SoLineSet* SoLineSet1079 = new SoLineSet();
SoLineSet1079->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1080 = new SoCoordinate();
SoCoordinate1080->setPoint(new float[]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682}, 6);
SoLineSet1079->setCoord(*SoCoordinate1080);

//from l_shoulder to l_elbow vertices 2
SoColorRGBA* SoColorRGBA1081 = new SoColorRGBA();
SoColorRGBA1081->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1079->addChild(*SoColorRGBA1081);

SoShape1078->setGeometry(*SoLineSet1079);

SoHAnimSegment1074->addChild(*SoShape1078);

SoHAnimSite* SoHAnimSite1082 = new SoHAnimSite();
SoHAnimSite1082->X3DNode::setName(QString("l_humeral_medial_epicondyles_pt"));
SoHAnimSite1082->setDEF(QString("hanim_l_humeral_medial_epicondyles_pt"));
SoHAnimSite1082->setTranslation(new float[]{0.1735,1.1272,-0.1113});
SoTouchSensor* SoTouchSensor1083 = new SoTouchSensor();
SoTouchSensor1083->setDescription(QString("HAnimSite l_humeral_medial_epicondyles_pt"));
SoHAnimSite1082->addChild(*SoTouchSensor1083);

SoShape* SoShape1084 = new SoShape();
SoShape1084->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1082->addChild(*SoShape1084);

SoHAnimSegment1074->addChild(*SoHAnimSite1082);

SoHAnimSite* SoHAnimSite1085 = new SoHAnimSite();
SoHAnimSite1085->X3DNode::setName(QString("l_olecranon_pt"));
SoHAnimSite1085->setDEF(QString("hanim_l_olecranon_pt"));
SoHAnimSite1085->setTranslation(new float[]{-0.1962,1.1375,-0.1123});
SoTouchSensor* SoTouchSensor1086 = new SoTouchSensor();
SoTouchSensor1086->setDescription(QString("HAnimSite l_olecranon_pt"));
SoHAnimSite1085->addChild(*SoTouchSensor1086);

SoShape* SoShape1087 = new SoShape();
SoShape1087->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1085->addChild(*SoShape1087);

SoHAnimSegment1074->addChild(*SoHAnimSite1085);

SoHAnimSite* SoHAnimSite1088 = new SoHAnimSite();
SoHAnimSite1088->X3DNode::setName(QString("l_radial_styloid_pt"));
SoHAnimSite1088->setDEF(QString("hanim_l_radial_styloid_pt"));
SoHAnimSite1088->setTranslation(new float[]{0.1901,0.8645,-0.0415});
SoTouchSensor* SoTouchSensor1089 = new SoTouchSensor();
SoTouchSensor1089->setDescription(QString("HAnimSite l_radial_styloid_pt"));
SoHAnimSite1088->addChild(*SoTouchSensor1089);

SoShape* SoShape1090 = new SoShape();
SoShape1090->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1088->addChild(*SoShape1090);

SoHAnimSegment1074->addChild(*SoHAnimSite1088);

SoHAnimSite* SoHAnimSite1091 = new SoHAnimSite();
SoHAnimSite1091->X3DNode::setName(QString("l_radiale_pt"));
SoHAnimSite1091->setDEF(QString("hanim_l_radiale_pt"));
SoHAnimSite1091->setTranslation(new float[]{0.2182,1.1212,-0.1167});
SoTouchSensor* SoTouchSensor1092 = new SoTouchSensor();
SoTouchSensor1092->setDescription(QString("HAnimSite l_radiale_pt"));
SoHAnimSite1091->addChild(*SoTouchSensor1092);

SoShape* SoShape1093 = new SoShape();
SoShape1093->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1091->addChild(*SoShape1093);

SoHAnimSegment1074->addChild(*SoHAnimSite1091);

SoHAnimJoint1073->addChildren(*SoHAnimSegment1074);

SoHAnimJoint* SoHAnimJoint1094 = new SoHAnimJoint();
SoHAnimJoint1094->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint1094->setDEF(QString("hanim_l_elbow"));
SoHAnimJoint1094->setCenter(new float[]{0.2014,1.1357,-0.0682});
SoHAnimJoint1094->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1094->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1095 = new SoHAnimSegment();
SoHAnimSegment1095->X3DNode::setName(QString("l_forearm"));
SoHAnimSegment1095->setDEF(QString("hanim_l_forearm"));
SoTransform* SoTransform1096 = new SoTransform();
SoTransform1096->setTranslation(new float[]{0.2014,1.1357,-0.0682});
SoTransform* SoTransform1097 = new SoTransform();
//Empty Transform
SoShape* SoShape1098 = new SoShape();
SoShape1098->setUSE(QString("HAnimJointShape"));
SoTransform1097->addChild(*SoShape1098);

SoTransform1096->addChild(*SoTransform1097);

SoHAnimSegment1095->addChild(*SoTransform1096);

SoShape* SoShape1099 = new SoShape();
SoLineSet* SoLineSet1100 = new SoLineSet();
SoLineSet1100->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1101 = new SoCoordinate();
SoCoordinate1101->setPoint(new float[]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583}, 6);
SoLineSet1100->setCoord(*SoCoordinate1101);

//from l_elbow to l_radiocarpal vertices 2
SoColorRGBA* SoColorRGBA1102 = new SoColorRGBA();
SoColorRGBA1102->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1100->addChild(*SoColorRGBA1102);

SoShape1099->setGeometry(*SoLineSet1100);

SoHAnimSegment1095->addChild(*SoShape1099);

SoHAnimSite* SoHAnimSite1103 = new SoHAnimSite();
SoHAnimSite1103->X3DNode::setName(QString("l_ulnar_styloid_pt"));
SoHAnimSite1103->setDEF(QString("hanim_l_ulnar_styloid_pt"));
SoHAnimSite1103->setTranslation(new float[]{-0.2142,0.8529,-0.0648});
SoTouchSensor* SoTouchSensor1104 = new SoTouchSensor();
SoTouchSensor1104->setDescription(QString("HAnimSite l_ulnar_styloid_pt"));
SoHAnimSite1103->addChild(*SoTouchSensor1104);

SoShape* SoShape1105 = new SoShape();
SoShape1105->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1103->addChild(*SoShape1105);

SoHAnimSegment1095->addChild(*SoHAnimSite1103);

SoHAnimJoint1094->addChildren(*SoHAnimSegment1095);

SoHAnimJoint* SoHAnimJoint1106 = new SoHAnimJoint();
SoHAnimJoint1106->X3DNode::setName(QString("l_radiocarpal"));
SoHAnimJoint1106->setDEF(QString("hanim_l_radiocarpal"));
SoHAnimJoint1106->setCenter(new float[]{0.1984,0.8663,-0.0583});
SoHAnimJoint1106->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1106->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1107 = new SoHAnimSegment();
SoHAnimSegment1107->X3DNode::setName(QString("l_carpal"));
SoHAnimSegment1107->setDEF(QString("hanim_l_carpal"));
SoTransform* SoTransform1108 = new SoTransform();
SoTransform1108->setScale(new float[]{0.2,0.2,0.2});
SoTransform1108->setTranslation(new float[]{0.2,0.85,-0.05});
SoTransform1108->setRotation(new float[]{0.0,0.0,1.0,-3.14});
//Transform left hand
SoTransform* SoTransform1109 = new SoTransform();
SoTransform1109->setRotation(new float[]{0.0,1.0,0.0,-1.57});
//Transform left hand
SoShape* SoShape1110 = new SoShape();
SoShape1110->setUSE(QString("HAnimJointShape"));
SoTransform1109->addChild(*SoShape1110);

SoTransform1108->addChild(*SoTransform1109);

SoHAnimSegment1107->addChild(*SoTransform1108);

SoShape* SoShape1111 = new SoShape();
SoLineSet* SoLineSet1112 = new SoLineSet();
SoLineSet1112->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1113 = new SoCoordinate();
SoCoordinate1113->setPoint(new float[]{0.1984,0.8663,-0.0583,8.0485,0.9213,1.3235}, 6);
SoLineSet1112->setCoord(*SoCoordinate1113);

//from l_radiocarpal to l_midcarpal_1 vertices 2
SoColorRGBA* SoColorRGBA1114 = new SoColorRGBA();
SoColorRGBA1114->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1112->addChild(*SoColorRGBA1114);

SoShape1111->setGeometry(*SoLineSet1112);

SoHAnimSegment1107->addChild(*SoShape1111);

SoShape* SoShape1115 = new SoShape();
SoLineSet* SoLineSet1116 = new SoLineSet();
SoLineSet1116->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1117 = new SoCoordinate();
SoCoordinate1117->setPoint(new float[]{0.1984,0.8663,-0.0583,8.0485,0.9225,0.8386}, 6);
SoLineSet1116->setCoord(*SoCoordinate1117);

//from l_radiocarpal to l_midcarpal_2 vertices 2
SoColorRGBA* SoColorRGBA1118 = new SoColorRGBA();
SoColorRGBA1118->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1116->addChild(*SoColorRGBA1118);

SoShape1115->setGeometry(*SoLineSet1116);

SoHAnimSegment1107->addChild(*SoShape1115);

SoShape* SoShape1119 = new SoShape();
SoLineSet* SoLineSet1120 = new SoLineSet();
SoLineSet1120->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1121 = new SoCoordinate();
SoCoordinate1121->setPoint(new float[]{0.1984,0.8663,-0.0583,8.0395,0.9246,0.2513}, 6);
SoLineSet1120->setCoord(*SoCoordinate1121);

//from l_radiocarpal to l_midcarpal_3 vertices 2
SoColorRGBA* SoColorRGBA1122 = new SoColorRGBA();
SoColorRGBA1122->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1120->addChild(*SoColorRGBA1122);

SoShape1119->setGeometry(*SoLineSet1120);

SoHAnimSegment1107->addChild(*SoShape1119);

SoShape* SoShape1123 = new SoShape();
SoLineSet* SoLineSet1124 = new SoLineSet();
SoLineSet1124->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1125 = new SoCoordinate();
SoCoordinate1125->setPoint(new float[]{0.1984,0.8663,-0.0583,8.0395,0.921,-0.6795}, 6);
SoLineSet1124->setCoord(*SoCoordinate1125);

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
SoColorRGBA* SoColorRGBA1126 = new SoColorRGBA();
SoColorRGBA1126->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1124->addChild(*SoColorRGBA1126);

SoShape1123->setGeometry(*SoLineSet1124);

SoHAnimSegment1107->addChild(*SoShape1123);

SoHAnimJoint1106->addChildren(*SoHAnimSegment1107);

SoHAnimJoint* SoHAnimJoint1127 = new SoHAnimJoint();
SoHAnimJoint1127->X3DNode::setName(QString("l_midcarpal_1"));
SoHAnimJoint1127->setDEF(QString("hanim_l_midcarpal_1"));
SoHAnimJoint1127->setCenter(new float[]{8.0485,0.9213,1.3235});
SoHAnimJoint1127->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1127->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1128 = new SoHAnimSegment();
SoHAnimSegment1128->X3DNode::setName(QString("l_trapezium"));
SoHAnimSegment1128->setDEF(QString("hanim_l_trapezium"));
SoTransform* SoTransform1129 = new SoTransform();
SoTransform1129->setTranslation(new float[]{8.0485,0.9213,1.3235});
SoTransform* SoTransform1130 = new SoTransform();
//Empty Transform
SoShape* SoShape1131 = new SoShape();
SoShape1131->setUSE(QString("HAnimJointShape"));
SoTransform1130->addChild(*SoShape1131);

SoTransform1129->addChild(*SoTransform1130);

SoHAnimSegment1128->addChild(*SoTransform1129);

SoShape* SoShape1132 = new SoShape();
SoLineSet* SoLineSet1133 = new SoLineSet();
SoLineSet1133->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1134 = new SoCoordinate();
SoCoordinate1134->setPoint(new float[]{8.0485,0.9213,1.3235,0.1924,0.8472,-0.0534}, 6);
SoLineSet1133->setCoord(*SoCoordinate1134);

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
SoColorRGBA* SoColorRGBA1135 = new SoColorRGBA();
SoColorRGBA1135->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1133->addChild(*SoColorRGBA1135);

SoShape1132->setGeometry(*SoLineSet1133);

SoHAnimSegment1128->addChild(*SoShape1132);

SoHAnimJoint1127->addChildren(*SoHAnimSegment1128);

SoHAnimJoint* SoHAnimJoint1136 = new SoHAnimJoint();
SoHAnimJoint1136->X3DNode::setName(QString("l_carpometacarpal_1"));
SoHAnimJoint1136->setDEF(QString("hanim_l_carpometacarpal_1"));
SoHAnimJoint1136->setCenter(new float[]{0.1924,0.8472,-0.0534});
SoHAnimJoint1136->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1136->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1137 = new SoHAnimSegment();
SoHAnimSegment1137->X3DNode::setName(QString("l_metacarpal_1"));
SoHAnimSegment1137->setDEF(QString("hanim_l_metacarpal_1"));
SoTransform* SoTransform1138 = new SoTransform();
SoTransform1138->setTranslation(new float[]{0.1924,0.8472,-0.0534});
SoTransform* SoTransform1139 = new SoTransform();
//Empty Transform
SoShape* SoShape1140 = new SoShape();
SoShape1140->setUSE(QString("HAnimJointShape"));
SoTransform1139->addChild(*SoShape1140);

SoTransform1138->addChild(*SoTransform1139);

SoHAnimSegment1137->addChild(*SoTransform1138);

SoShape* SoShape1141 = new SoShape();
SoLineSet* SoLineSet1142 = new SoLineSet();
SoLineSet1142->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1143 = new SoCoordinate();
SoCoordinate1143->setPoint(new float[]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
SoLineSet1142->setCoord(*SoCoordinate1143);

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
SoColorRGBA* SoColorRGBA1144 = new SoColorRGBA();
SoColorRGBA1144->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1142->addChild(*SoColorRGBA1144);

SoShape1141->setGeometry(*SoLineSet1142);

SoHAnimSegment1137->addChild(*SoShape1141);

SoHAnimJoint1136->addChildren(*SoHAnimSegment1137);

SoHAnimJoint* SoHAnimJoint1145 = new SoHAnimJoint();
SoHAnimJoint1145->X3DNode::setName(QString("l_metacarpophalangeal_1"));
SoHAnimJoint1145->setDEF(QString("hanim_l_metacarpophalangeal_1"));
SoHAnimJoint1145->setCenter(new float[]{0.1951,0.8226,0.0246});
SoHAnimJoint1145->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1145->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1146 = new SoHAnimSegment();
SoHAnimSegment1146->X3DNode::setName(QString("l_carpal_proximal_phalanx_1"));
SoHAnimSegment1146->setDEF(QString("hanim_l_carpal_proximal_phalanx_1"));
SoTransform* SoTransform1147 = new SoTransform();
SoTransform1147->setTranslation(new float[]{0.1951,0.8226,0.0246});
SoTransform* SoTransform1148 = new SoTransform();
//Empty Transform
SoShape* SoShape1149 = new SoShape();
SoShape1149->setUSE(QString("HAnimJointShape"));
SoTransform1148->addChild(*SoShape1149);

SoTransform1147->addChild(*SoTransform1148);

SoHAnimSegment1146->addChild(*SoTransform1147);

SoShape* SoShape1150 = new SoShape();
SoLineSet* SoLineSet1151 = new SoLineSet();
SoLineSet1151->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1152 = new SoCoordinate();
SoCoordinate1152->setPoint(new float[]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
SoLineSet1151->setCoord(*SoCoordinate1152);

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
SoColorRGBA* SoColorRGBA1153 = new SoColorRGBA();
SoColorRGBA1153->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1151->addChild(*SoColorRGBA1153);

SoShape1150->setGeometry(*SoLineSet1151);

SoHAnimSegment1146->addChild(*SoShape1150);

SoHAnimSite* SoHAnimSite1154 = new SoHAnimSite();
SoHAnimSite1154->X3DNode::setName(QString("l_carpal_distal_phalanx_1_tip"));
SoHAnimSite1154->setDEF(QString("hanim_l_carpal_distal_phalanx_1_tip"));
SoTouchSensor* SoTouchSensor1155 = new SoTouchSensor();
SoTouchSensor1155->setDescription(QString("HAnimSite l_carpal_distal_phalanx_1_tip"));
SoHAnimSite1154->addChild(*SoTouchSensor1155);

SoShape* SoShape1156 = new SoShape();
SoShape1156->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1154->addChild(*SoShape1156);

SoHAnimSegment1146->addChild(*SoHAnimSite1154);

SoHAnimJoint1145->addChildren(*SoHAnimSegment1146);

SoHAnimJoint* SoHAnimJoint1157 = new SoHAnimJoint();
SoHAnimJoint1157->X3DNode::setName(QString("l_carpal_interphalangeal_1"));
SoHAnimJoint1157->setDEF(QString("hanim_l_carpal_interphalangeal_1"));
SoHAnimJoint1157->setCenter(new float[]{0.1955,0.8159,0.0464});
SoHAnimJoint1157->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1157->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1145->addChildren(*SoHAnimJoint1157);

SoHAnimJoint1136->addChildren(*SoHAnimJoint1145);

SoHAnimJoint1127->addChildren(*SoHAnimJoint1136);

SoHAnimJoint1106->addChildren(*SoHAnimJoint1127);

SoHAnimJoint* SoHAnimJoint1158 = new SoHAnimJoint();
SoHAnimJoint1158->X3DNode::setName(QString("l_midcarpal_2"));
SoHAnimJoint1158->setDEF(QString("hanim_l_midcarpal_2"));
SoHAnimJoint1158->setCenter(new float[]{8.0485,0.9225,0.8386});
SoHAnimJoint1158->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1158->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1159 = new SoHAnimSegment();
SoHAnimSegment1159->X3DNode::setName(QString("l_trapezoid"));
SoHAnimSegment1159->setDEF(QString("hanim_l_trapezoid"));
SoTransform* SoTransform1160 = new SoTransform();
SoTransform1160->setTranslation(new float[]{8.0485,0.9225,0.8386});
SoTransform* SoTransform1161 = new SoTransform();
//Empty Transform
SoShape* SoShape1162 = new SoShape();
SoShape1162->setUSE(QString("HAnimJointShape"));
SoTransform1161->addChild(*SoShape1162);

SoTransform1160->addChild(*SoTransform1161);

SoHAnimSegment1159->addChild(*SoTransform1160);

SoShape* SoShape1163 = new SoShape();
SoLineSet* SoLineSet1164 = new SoLineSet();
SoLineSet1164->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1165 = new SoCoordinate();
SoCoordinate1165->setPoint(new float[]{8.0485,0.9225,0.8386,0.1983,0.8024,-0.028}, 6);
SoLineSet1164->setCoord(*SoCoordinate1165);

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
SoColorRGBA* SoColorRGBA1166 = new SoColorRGBA();
SoColorRGBA1166->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1164->addChild(*SoColorRGBA1166);

SoShape1163->setGeometry(*SoLineSet1164);

SoHAnimSegment1159->addChild(*SoShape1163);

SoHAnimSite* SoHAnimSite1167 = new SoHAnimSite();
SoHAnimSite1167->X3DNode::setName(QString("l_metacarpal_phalanx_2_pt"));
SoHAnimSite1167->setDEF(QString("hanim_l_metacarpal_phalanx_2_pt"));
SoHAnimSite1167->setTranslation(new float[]{0.2009,0.8139,-0.0237});
SoTouchSensor* SoTouchSensor1168 = new SoTouchSensor();
SoTouchSensor1168->setDescription(QString("HAnimSite l_metacarpal_phalanx_2_pt"));
SoHAnimSite1167->addChild(*SoTouchSensor1168);

SoShape* SoShape1169 = new SoShape();
SoShape1169->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1167->addChild(*SoShape1169);

SoHAnimSegment1159->addChild(*SoHAnimSite1167);

SoHAnimJoint1158->addChildren(*SoHAnimSegment1159);

SoHAnimJoint* SoHAnimJoint1170 = new SoHAnimJoint();
SoHAnimJoint1170->X3DNode::setName(QString("l_carpometacarpal_2"));
SoHAnimJoint1170->setDEF(QString("hanim_l_carpometacarpal_2"));
SoHAnimJoint1170->setCenter(new float[]{0.1983,0.8024,-0.028});
SoHAnimJoint1170->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1170->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1171 = new SoHAnimSegment();
SoHAnimSegment1171->X3DNode::setName(QString("l_metacarpal_2"));
SoHAnimSegment1171->setDEF(QString("hanim_l_metacarpal_2"));
SoTransform* SoTransform1172 = new SoTransform();
SoTransform1172->setTranslation(new float[]{0.1983,0.8024,-0.028});
SoTransform* SoTransform1173 = new SoTransform();
//Empty Transform
SoShape* SoShape1174 = new SoShape();
SoShape1174->setUSE(QString("HAnimJointShape"));
SoTransform1173->addChild(*SoShape1174);

SoTransform1172->addChild(*SoTransform1173);

SoHAnimSegment1171->addChild(*SoTransform1172);

SoShape* SoShape1175 = new SoShape();
SoLineSet* SoLineSet1176 = new SoLineSet();
SoLineSet1176->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1177 = new SoCoordinate();
SoCoordinate1177->setPoint(new float[]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
SoLineSet1176->setCoord(*SoCoordinate1177);

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
SoColorRGBA* SoColorRGBA1178 = new SoColorRGBA();
SoColorRGBA1178->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1176->addChild(*SoColorRGBA1178);

SoShape1175->setGeometry(*SoLineSet1176);

SoHAnimSegment1171->addChild(*SoShape1175);

SoHAnimJoint1170->addChildren(*SoHAnimSegment1171);

SoHAnimJoint* SoHAnimJoint1179 = new SoHAnimJoint();
SoHAnimJoint1179->X3DNode::setName(QString("l_metacarpophalangeal_2"));
SoHAnimJoint1179->setDEF(QString("hanim_l_metacarpophalangeal_2"));
SoHAnimJoint1179->setCenter(new float[]{0.1983,0.7815,-0.028});
SoHAnimJoint1179->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1179->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1180 = new SoHAnimSegment();
SoHAnimSegment1180->X3DNode::setName(QString("l_carpal_proximal_phalanx_2"));
SoHAnimSegment1180->setDEF(QString("hanim_l_carpal_proximal_phalanx_2"));
SoTransform* SoTransform1181 = new SoTransform();
SoTransform1181->setTranslation(new float[]{0.1983,0.7815,-0.028});
SoTransform* SoTransform1182 = new SoTransform();
//Empty Transform
SoShape* SoShape1183 = new SoShape();
SoShape1183->setUSE(QString("HAnimJointShape"));
SoTransform1182->addChild(*SoShape1183);

SoTransform1181->addChild(*SoTransform1182);

SoHAnimSegment1180->addChild(*SoTransform1181);

SoShape* SoShape1184 = new SoShape();
SoLineSet* SoLineSet1185 = new SoLineSet();
SoLineSet1185->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1186 = new SoCoordinate();
SoCoordinate1186->setPoint(new float[]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
SoLineSet1185->setCoord(*SoCoordinate1186);

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
SoColorRGBA* SoColorRGBA1187 = new SoColorRGBA();
SoColorRGBA1187->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1185->addChild(*SoColorRGBA1187);

SoShape1184->setGeometry(*SoLineSet1185);

SoHAnimSegment1180->addChild(*SoShape1184);

SoHAnimJoint1179->addChildren(*SoHAnimSegment1180);

SoHAnimJoint* SoHAnimJoint1188 = new SoHAnimJoint();
SoHAnimJoint1188->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint1188->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint1188->setCenter(new float[]{0.2017,0.7363,-0.0248});
SoHAnimJoint1188->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1188->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1189 = new SoHAnimSegment();
SoHAnimSegment1189->X3DNode::setName(QString("l_carpal_middle_phalanx_2"));
SoHAnimSegment1189->setDEF(QString("hanim_l_carpal_middle_phalanx_2"));
SoTransform* SoTransform1190 = new SoTransform();
SoTransform1190->setTranslation(new float[]{0.2017,0.7363,-0.0248});
SoTransform* SoTransform1191 = new SoTransform();
//Empty Transform
SoShape* SoShape1192 = new SoShape();
SoShape1192->setUSE(QString("HAnimJointShape"));
SoTransform1191->addChild(*SoShape1192);

SoTransform1190->addChild(*SoTransform1191);

SoHAnimSegment1189->addChild(*SoTransform1190);

SoShape* SoShape1193 = new SoShape();
SoLineSet* SoLineSet1194 = new SoLineSet();
SoLineSet1194->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1195 = new SoCoordinate();
SoCoordinate1195->setPoint(new float[]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
SoLineSet1194->setCoord(*SoCoordinate1195);

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
SoColorRGBA* SoColorRGBA1196 = new SoColorRGBA();
SoColorRGBA1196->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1194->addChild(*SoColorRGBA1196);

SoShape1193->setGeometry(*SoLineSet1194);

SoHAnimSegment1189->addChild(*SoShape1193);

SoHAnimSite* SoHAnimSite1197 = new SoHAnimSite();
SoHAnimSite1197->X3DNode::setName(QString("l_carpal_distal_phalanx_2_tip"));
SoHAnimSite1197->setDEF(QString("hanim_l_carpal_distal_phalanx_2_tip"));
SoTouchSensor* SoTouchSensor1198 = new SoTouchSensor();
SoTouchSensor1198->setDescription(QString("HAnimSite l_carpal_distal_phalanx_2_tip"));
SoHAnimSite1197->addChild(*SoTouchSensor1198);

SoShape* SoShape1199 = new SoShape();
SoShape1199->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1197->addChild(*SoShape1199);

SoHAnimSegment1189->addChild(*SoHAnimSite1197);

SoHAnimSite* SoHAnimSite1200 = new SoHAnimSite();
SoHAnimSite1200->X3DNode::setName(QString("l_dactylion_pt"));
SoHAnimSite1200->setDEF(QString("hanim_l_dactylion_pt"));
SoHAnimSite1200->setTranslation(new float[]{0.2056,0.6743,-0.0482});
SoTouchSensor* SoTouchSensor1201 = new SoTouchSensor();
SoTouchSensor1201->setDescription(QString("HAnimSite l_dactylion_pt"));
SoHAnimSite1200->addChild(*SoTouchSensor1201);

SoShape* SoShape1202 = new SoShape();
SoShape1202->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1200->addChild(*SoShape1202);

SoHAnimSegment1189->addChild(*SoHAnimSite1200);

SoHAnimJoint1188->addChildren(*SoHAnimSegment1189);

SoHAnimJoint* SoHAnimJoint1203 = new SoHAnimJoint();
SoHAnimJoint1203->X3DNode::setName(QString("l_carpal_distal_interphalangeal_2"));
SoHAnimJoint1203->setDEF(QString("hanim_l_carpal_distal_interphalangeal_2"));
SoHAnimJoint1203->setCenter(new float[]{0.2028,0.7139,-0.0236});
SoHAnimJoint1203->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1203->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1188->addChildren(*SoHAnimJoint1203);

SoHAnimJoint1179->addChildren(*SoHAnimJoint1188);

SoHAnimJoint1170->addChildren(*SoHAnimJoint1179);

SoHAnimJoint1158->addChildren(*SoHAnimJoint1170);

SoHAnimJoint1106->addChildren(*SoHAnimJoint1158);

SoHAnimJoint* SoHAnimJoint1204 = new SoHAnimJoint();
SoHAnimJoint1204->X3DNode::setName(QString("l_midcarpal_3"));
SoHAnimJoint1204->setDEF(QString("hanim_l_midcarpal_3"));
SoHAnimJoint1204->setCenter(new float[]{8.0395,0.9246,0.2513});
SoHAnimJoint1204->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1204->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1205 = new SoHAnimSegment();
SoHAnimSegment1205->X3DNode::setName(QString("l_capitate"));
SoHAnimSegment1205->setDEF(QString("hanim_l_capitate"));
SoTransform* SoTransform1206 = new SoTransform();
SoTransform1206->setTranslation(new float[]{8.0395,0.9246,0.2513});
SoTransform* SoTransform1207 = new SoTransform();
//Empty Transform
SoShape* SoShape1208 = new SoShape();
SoShape1208->setUSE(QString("HAnimJointShape"));
SoTransform1207->addChild(*SoShape1208);

SoTransform1206->addChild(*SoTransform1207);

SoHAnimSegment1205->addChild(*SoTransform1206);

SoShape* SoShape1209 = new SoShape();
SoLineSet* SoLineSet1210 = new SoLineSet();
SoLineSet1210->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1211 = new SoCoordinate();
SoCoordinate1211->setPoint(new float[]{8.0395,0.9246,0.2513,0.1987,0.8029,-0.053}, 6);
SoLineSet1210->setCoord(*SoCoordinate1211);

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
SoColorRGBA* SoColorRGBA1212 = new SoColorRGBA();
SoColorRGBA1212->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1210->addChild(*SoColorRGBA1212);

SoShape1209->setGeometry(*SoLineSet1210);

SoHAnimSegment1205->addChild(*SoShape1209);

SoHAnimSite* SoHAnimSite1213 = new SoHAnimSite();
SoHAnimSite1213->X3DNode::setName(QString("l_metacarpal_phalanx_3_pt"));
SoHAnimSite1213->setDEF(QString("hanim_l_metacarpal_phalanx_3_pt"));
SoTouchSensor* SoTouchSensor1214 = new SoTouchSensor();
SoTouchSensor1214->setDescription(QString("HAnimSite l_metacarpal_phalanx_3_pt"));
SoHAnimSite1213->addChild(*SoTouchSensor1214);

SoShape* SoShape1215 = new SoShape();
SoShape1215->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1213->addChild(*SoShape1215);

SoHAnimSegment1205->addChild(*SoHAnimSite1213);

SoHAnimJoint1204->addChildren(*SoHAnimSegment1205);

SoHAnimJoint* SoHAnimJoint1216 = new SoHAnimJoint();
SoHAnimJoint1216->X3DNode::setName(QString("l_carpometacarpal_3"));
SoHAnimJoint1216->setDEF(QString("hanim_l_carpometacarpal_3"));
SoHAnimJoint1216->setCenter(new float[]{0.1987,0.8029,-0.053});
SoHAnimJoint1216->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1216->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1217 = new SoHAnimSegment();
SoHAnimSegment1217->X3DNode::setName(QString("l_metacarpal_3"));
SoHAnimSegment1217->setDEF(QString("hanim_l_metacarpal_3"));
SoTransform* SoTransform1218 = new SoTransform();
SoTransform1218->setTranslation(new float[]{0.1987,0.8029,-0.053});
SoTransform* SoTransform1219 = new SoTransform();
//Empty Transform
SoShape* SoShape1220 = new SoShape();
SoShape1220->setUSE(QString("HAnimJointShape"));
SoTransform1219->addChild(*SoShape1220);

SoTransform1218->addChild(*SoTransform1219);

SoHAnimSegment1217->addChild(*SoTransform1218);

SoShape* SoShape1221 = new SoShape();
SoLineSet* SoLineSet1222 = new SoLineSet();
SoLineSet1222->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1223 = new SoCoordinate();
SoCoordinate1223->setPoint(new float[]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
SoLineSet1222->setCoord(*SoCoordinate1223);

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
SoColorRGBA* SoColorRGBA1224 = new SoColorRGBA();
SoColorRGBA1224->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1222->addChild(*SoColorRGBA1224);

SoShape1221->setGeometry(*SoLineSet1222);

SoHAnimSegment1217->addChild(*SoShape1221);

SoHAnimJoint1216->addChildren(*SoHAnimSegment1217);

SoHAnimJoint* SoHAnimJoint1225 = new SoHAnimJoint();
SoHAnimJoint1225->X3DNode::setName(QString("l_metacarpophalangeal_3"));
SoHAnimJoint1225->setDEF(QString("hanim_l_metacarpophalangeal_3"));
SoHAnimJoint1225->setCenter(new float[]{0.1987,0.7818,-0.053});
SoHAnimJoint1225->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1225->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1226 = new SoHAnimSegment();
SoHAnimSegment1226->X3DNode::setName(QString("l_carpal_proximal_phalanx_3"));
SoHAnimSegment1226->setDEF(QString("hanim_l_carpal_proximal_phalanx_3"));
SoTransform* SoTransform1227 = new SoTransform();
SoTransform1227->setTranslation(new float[]{0.1987,0.7818,-0.053});
SoTransform* SoTransform1228 = new SoTransform();
//Empty Transform
SoShape* SoShape1229 = new SoShape();
SoShape1229->setUSE(QString("HAnimJointShape"));
SoTransform1228->addChild(*SoShape1229);

SoTransform1227->addChild(*SoTransform1228);

SoHAnimSegment1226->addChild(*SoTransform1227);

SoShape* SoShape1230 = new SoShape();
SoLineSet* SoLineSet1231 = new SoLineSet();
SoLineSet1231->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1232 = new SoCoordinate();
SoCoordinate1232->setPoint(new float[]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
SoLineSet1231->setCoord(*SoCoordinate1232);

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
SoColorRGBA* SoColorRGBA1233 = new SoColorRGBA();
SoColorRGBA1233->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1231->addChild(*SoColorRGBA1233);

SoShape1230->setGeometry(*SoLineSet1231);

SoHAnimSegment1226->addChild(*SoShape1230);

SoHAnimJoint1225->addChildren(*SoHAnimSegment1226);

SoHAnimJoint* SoHAnimJoint1234 = new SoHAnimJoint();
SoHAnimJoint1234->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint1234->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint1234->setCenter(new float[]{0.2013,0.7273,-0.0503});
SoHAnimJoint1234->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1234->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1235 = new SoHAnimSegment();
SoHAnimSegment1235->X3DNode::setName(QString("l_carpal_middle_phalanx_3"));
SoHAnimSegment1235->setDEF(QString("hanim_l_carpal_middle_phalanx_3"));
SoTransform* SoTransform1236 = new SoTransform();
SoTransform1236->setTranslation(new float[]{0.2013,0.7273,-0.0503});
SoTransform* SoTransform1237 = new SoTransform();
//Empty Transform
SoShape* SoShape1238 = new SoShape();
SoShape1238->setUSE(QString("HAnimJointShape"));
SoTransform1237->addChild(*SoShape1238);

SoTransform1236->addChild(*SoTransform1237);

SoHAnimSegment1235->addChild(*SoTransform1236);

SoShape* SoShape1239 = new SoShape();
SoLineSet* SoLineSet1240 = new SoLineSet();
SoLineSet1240->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1241 = new SoCoordinate();
SoCoordinate1241->setPoint(new float[]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
SoLineSet1240->setCoord(*SoCoordinate1241);

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
SoColorRGBA* SoColorRGBA1242 = new SoColorRGBA();
SoColorRGBA1242->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1240->addChild(*SoColorRGBA1242);

SoShape1239->setGeometry(*SoLineSet1240);

SoHAnimSegment1235->addChild(*SoShape1239);

SoHAnimSite* SoHAnimSite1243 = new SoHAnimSite();
SoHAnimSite1243->X3DNode::setName(QString("l_carpal_distal_phalanx_3_tip"));
SoHAnimSite1243->setDEF(QString("hanim_l_carpal_distal_phalanx_3_tip"));
SoTouchSensor* SoTouchSensor1244 = new SoTouchSensor();
SoTouchSensor1244->setDescription(QString("HAnimSite l_carpal_distal_phalanx_3_tip"));
SoHAnimSite1243->addChild(*SoTouchSensor1244);

SoShape* SoShape1245 = new SoShape();
SoShape1245->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1243->addChild(*SoShape1245);

SoHAnimSegment1235->addChild(*SoHAnimSite1243);

SoHAnimJoint1234->addChildren(*SoHAnimSegment1235);

SoHAnimJoint* SoHAnimJoint1246 = new SoHAnimJoint();
SoHAnimJoint1246->X3DNode::setName(QString("l_carpal_distal_interphalangeal_3"));
SoHAnimJoint1246->setDEF(QString("hanim_l_carpal_distal_interphalangeal_3"));
SoHAnimJoint1246->setCenter(new float[]{0.2026,0.7011,-0.0494});
SoHAnimJoint1246->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1246->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1234->addChildren(*SoHAnimJoint1246);

SoHAnimJoint1225->addChildren(*SoHAnimJoint1234);

SoHAnimJoint1216->addChildren(*SoHAnimJoint1225);

SoHAnimJoint1204->addChildren(*SoHAnimJoint1216);

SoHAnimJoint1106->addChildren(*SoHAnimJoint1204);

SoHAnimJoint* SoHAnimJoint1247 = new SoHAnimJoint();
SoHAnimJoint1247->X3DNode::setName(QString("l_midcarpal_4_5"));
SoHAnimJoint1247->setDEF(QString("hanim_l_midcarpal_4_5"));
SoHAnimJoint1247->setCenter(new float[]{8.0395,0.921,-0.6795});
SoHAnimJoint1247->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1247->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1248 = new SoHAnimSegment();
SoHAnimSegment1248->X3DNode::setName(QString("l_hamate"));
SoHAnimSegment1248->setDEF(QString("hanim_l_hamate"));
SoTransform* SoTransform1249 = new SoTransform();
SoTransform1249->setTranslation(new float[]{8.0395,0.921,-0.6795});
SoTransform* SoTransform1250 = new SoTransform();
//Empty Transform
SoShape* SoShape1251 = new SoShape();
SoShape1251->setUSE(QString("HAnimJointShape"));
SoTransform1250->addChild(*SoShape1251);

SoTransform1249->addChild(*SoTransform1250);

SoHAnimSegment1248->addChild(*SoTransform1249);

SoShape* SoShape1252 = new SoShape();
SoLineSet* SoLineSet1253 = new SoLineSet();
SoLineSet1253->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1254 = new SoCoordinate();
SoCoordinate1254->setPoint(new float[]{8.0395,0.921,-0.6795,0.1956,0.8019,-0.0794}, 6);
SoLineSet1253->setCoord(*SoCoordinate1254);

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
SoColorRGBA* SoColorRGBA1255 = new SoColorRGBA();
SoColorRGBA1255->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1253->addChild(*SoColorRGBA1255);

SoShape1252->setGeometry(*SoLineSet1253);

SoHAnimSegment1248->addChild(*SoShape1252);

SoShape* SoShape1256 = new SoShape();
SoLineSet* SoLineSet1257 = new SoLineSet();
SoLineSet1257->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1258 = new SoCoordinate();
SoCoordinate1258->setPoint(new float[]{8.0395,0.921,-0.6795,0.1925,0.8066,-0.1036}, 6);
SoLineSet1257->setCoord(*SoCoordinate1258);

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
SoColorRGBA* SoColorRGBA1259 = new SoColorRGBA();
SoColorRGBA1259->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1257->addChild(*SoColorRGBA1259);

SoShape1256->setGeometry(*SoLineSet1257);

SoHAnimSegment1248->addChild(*SoShape1256);

SoHAnimSite* SoHAnimSite1260 = new SoHAnimSite();
SoHAnimSite1260->X3DNode::setName(QString("l_metacarpal_phalanx_5_pt"));
SoHAnimSite1260->setDEF(QString("hanim_l_metacarpal_phalanx_5_pt"));
SoHAnimSite1260->setTranslation(new float[]{0.1929,0.786,-0.1122});
SoTouchSensor* SoTouchSensor1261 = new SoTouchSensor();
SoTouchSensor1261->setDescription(QString("HAnimSite l_metacarpal_phalanx_5_pt"));
SoHAnimSite1260->addChild(*SoTouchSensor1261);

SoShape* SoShape1262 = new SoShape();
SoShape1262->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1260->addChild(*SoShape1262);

SoHAnimSegment1248->addChild(*SoHAnimSite1260);

SoHAnimJoint1247->addChildren(*SoHAnimSegment1248);

SoHAnimJoint* SoHAnimJoint1263 = new SoHAnimJoint();
SoHAnimJoint1263->X3DNode::setName(QString("l_carpometacarpal_4"));
SoHAnimJoint1263->setDEF(QString("hanim_l_carpometacarpal_4"));
SoHAnimJoint1263->setCenter(new float[]{0.1956,0.8019,-0.0794});
SoHAnimJoint1263->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1263->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1264 = new SoHAnimSegment();
SoHAnimSegment1264->X3DNode::setName(QString("l_metacarpal_4"));
SoHAnimSegment1264->setDEF(QString("hanim_l_metacarpal_4"));
SoTransform* SoTransform1265 = new SoTransform();
SoTransform1265->setTranslation(new float[]{0.1956,0.8019,-0.0794});
SoTransform* SoTransform1266 = new SoTransform();
//Empty Transform
SoShape* SoShape1267 = new SoShape();
SoShape1267->setUSE(QString("HAnimJointShape"));
SoTransform1266->addChild(*SoShape1267);

SoTransform1265->addChild(*SoTransform1266);

SoHAnimSegment1264->addChild(*SoTransform1265);

SoShape* SoShape1268 = new SoShape();
SoLineSet* SoLineSet1269 = new SoLineSet();
SoLineSet1269->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1270 = new SoCoordinate();
SoCoordinate1270->setPoint(new float[]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
SoLineSet1269->setCoord(*SoCoordinate1270);

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
SoColorRGBA* SoColorRGBA1271 = new SoColorRGBA();
SoColorRGBA1271->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1269->addChild(*SoColorRGBA1271);

SoShape1268->setGeometry(*SoLineSet1269);

SoHAnimSegment1264->addChild(*SoShape1268);

SoHAnimJoint1263->addChildren(*SoHAnimSegment1264);

SoHAnimJoint* SoHAnimJoint1272 = new SoHAnimJoint();
SoHAnimJoint1272->X3DNode::setName(QString("l_metacarpophalangeal_4"));
SoHAnimJoint1272->setDEF(QString("hanim_l_metacarpophalangeal_4"));
SoHAnimJoint1272->setCenter(new float[]{0.1956,0.7815,-0.0794});
SoHAnimJoint1272->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1272->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1273 = new SoHAnimSegment();
SoHAnimSegment1273->X3DNode::setName(QString("l_carpal_proximal_phalanx_4"));
SoHAnimSegment1273->setDEF(QString("hanim_l_carpal_proximal_phalanx_4"));
SoTransform* SoTransform1274 = new SoTransform();
SoTransform1274->setTranslation(new float[]{0.1956,0.7815,-0.0794});
SoTransform* SoTransform1275 = new SoTransform();
//Empty Transform
SoShape* SoShape1276 = new SoShape();
SoShape1276->setUSE(QString("HAnimJointShape"));
SoTransform1275->addChild(*SoShape1276);

SoTransform1274->addChild(*SoTransform1275);

SoHAnimSegment1273->addChild(*SoTransform1274);

SoShape* SoShape1277 = new SoShape();
SoLineSet* SoLineSet1278 = new SoLineSet();
SoLineSet1278->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1279 = new SoCoordinate();
SoCoordinate1279->setPoint(new float[]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
SoLineSet1278->setCoord(*SoCoordinate1279);

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
SoColorRGBA* SoColorRGBA1280 = new SoColorRGBA();
SoColorRGBA1280->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1278->addChild(*SoColorRGBA1280);

SoShape1277->setGeometry(*SoLineSet1278);

SoHAnimSegment1273->addChild(*SoShape1277);

SoHAnimJoint1272->addChildren(*SoHAnimSegment1273);

SoHAnimJoint* SoHAnimJoint1281 = new SoHAnimJoint();
SoHAnimJoint1281->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint1281->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint1281->setCenter(new float[]{0.1973,0.7287,-0.0777});
SoHAnimJoint1281->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1281->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1282 = new SoHAnimSegment();
SoHAnimSegment1282->X3DNode::setName(QString("l_carpal_middle_phalanx_4"));
SoHAnimSegment1282->setDEF(QString("hanim_l_carpal_middle_phalanx_4"));
SoTransform* SoTransform1283 = new SoTransform();
SoTransform1283->setTranslation(new float[]{0.1973,0.7287,-0.0777});
SoTransform* SoTransform1284 = new SoTransform();
//Empty Transform
SoShape* SoShape1285 = new SoShape();
SoShape1285->setUSE(QString("HAnimJointShape"));
SoTransform1284->addChild(*SoShape1285);

SoTransform1283->addChild(*SoTransform1284);

SoHAnimSegment1282->addChild(*SoTransform1283);

SoShape* SoShape1286 = new SoShape();
SoLineSet* SoLineSet1287 = new SoLineSet();
SoLineSet1287->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1288 = new SoCoordinate();
SoCoordinate1288->setPoint(new float[]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
SoLineSet1287->setCoord(*SoCoordinate1288);

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
SoColorRGBA* SoColorRGBA1289 = new SoColorRGBA();
SoColorRGBA1289->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1287->addChild(*SoColorRGBA1289);

SoShape1286->setGeometry(*SoLineSet1287);

SoHAnimSegment1282->addChild(*SoShape1286);

SoHAnimSite* SoHAnimSite1290 = new SoHAnimSite();
SoHAnimSite1290->X3DNode::setName(QString("l_carpal_distal_phalanx_4_tip"));
SoHAnimSite1290->setDEF(QString("hanim_l_carpal_distal_phalanx_4_tip"));
SoTouchSensor* SoTouchSensor1291 = new SoTouchSensor();
SoTouchSensor1291->setDescription(QString("HAnimSite l_carpal_distal_phalanx_4_tip"));
SoHAnimSite1290->addChild(*SoTouchSensor1291);

SoShape* SoShape1292 = new SoShape();
SoShape1292->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1290->addChild(*SoShape1292);

SoHAnimSegment1282->addChild(*SoHAnimSite1290);

SoHAnimJoint1281->addChildren(*SoHAnimSegment1282);

SoHAnimJoint* SoHAnimJoint1293 = new SoHAnimJoint();
SoHAnimJoint1293->X3DNode::setName(QString("l_carpal_distal_interphalangeal_4"));
SoHAnimJoint1293->setDEF(QString("hanim_l_carpal_distal_interphalangeal_4"));
SoHAnimJoint1293->setCenter(new float[]{0.1983,0.7045,-0.0767});
SoHAnimJoint1293->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1293->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1281->addChildren(*SoHAnimJoint1293);

SoHAnimJoint1272->addChildren(*SoHAnimJoint1281);

SoHAnimJoint1263->addChildren(*SoHAnimJoint1272);

SoHAnimJoint1247->addChildren(*SoHAnimJoint1263);

SoHAnimJoint* SoHAnimJoint1294 = new SoHAnimJoint();
SoHAnimJoint1294->X3DNode::setName(QString("l_carpometacarpal_5"));
SoHAnimJoint1294->setDEF(QString("hanim_l_carpometacarpal_5"));
SoHAnimJoint1294->setCenter(new float[]{0.1925,0.8066,-0.1036});
SoHAnimJoint1294->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1294->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1295 = new SoHAnimSegment();
SoHAnimSegment1295->X3DNode::setName(QString("l_metacarpal_5"));
SoHAnimSegment1295->setDEF(QString("hanim_l_metacarpal_5"));
SoTransform* SoTransform1296 = new SoTransform();
SoTransform1296->setTranslation(new float[]{0.1925,0.8066,-0.1036});
SoTransform* SoTransform1297 = new SoTransform();
//Empty Transform
SoShape* SoShape1298 = new SoShape();
SoShape1298->setUSE(QString("HAnimJointShape"));
SoTransform1297->addChild(*SoShape1298);

SoTransform1296->addChild(*SoTransform1297);

SoHAnimSegment1295->addChild(*SoTransform1296);

SoShape* SoShape1299 = new SoShape();
SoLineSet* SoLineSet1300 = new SoLineSet();
SoLineSet1300->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1301 = new SoCoordinate();
SoCoordinate1301->setPoint(new float[]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
SoLineSet1300->setCoord(*SoCoordinate1301);

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
SoColorRGBA* SoColorRGBA1302 = new SoColorRGBA();
SoColorRGBA1302->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1300->addChild(*SoColorRGBA1302);

SoShape1299->setGeometry(*SoLineSet1300);

SoHAnimSegment1295->addChild(*SoShape1299);

SoHAnimJoint1294->addChildren(*SoHAnimSegment1295);

SoHAnimJoint* SoHAnimJoint1303 = new SoHAnimJoint();
SoHAnimJoint1303->X3DNode::setName(QString("l_metacarpophalangeal_5"));
SoHAnimJoint1303->setDEF(QString("hanim_l_metacarpophalangeal_5"));
SoHAnimJoint1303->setCenter(new float[]{0.1925,0.7866,-0.1036});
SoHAnimJoint1303->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1303->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1304 = new SoHAnimSegment();
SoHAnimSegment1304->X3DNode::setName(QString("l_carpal_proximal_phalanx_5"));
SoHAnimSegment1304->setDEF(QString("hanim_l_carpal_proximal_phalanx_5"));
SoTransform* SoTransform1305 = new SoTransform();
SoTransform1305->setTranslation(new float[]{0.1925,0.7866,-0.1036});
SoTransform* SoTransform1306 = new SoTransform();
//Empty Transform
SoShape* SoShape1307 = new SoShape();
SoShape1307->setUSE(QString("HAnimJointShape"));
SoTransform1306->addChild(*SoShape1307);

SoTransform1305->addChild(*SoTransform1306);

SoHAnimSegment1304->addChild(*SoTransform1305);

SoShape* SoShape1308 = new SoShape();
SoLineSet* SoLineSet1309 = new SoLineSet();
SoLineSet1309->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1310 = new SoCoordinate();
SoCoordinate1310->setPoint(new float[]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
SoLineSet1309->setCoord(*SoCoordinate1310);

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
SoColorRGBA* SoColorRGBA1311 = new SoColorRGBA();
SoColorRGBA1311->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1309->addChild(*SoColorRGBA1311);

SoShape1308->setGeometry(*SoLineSet1309);

SoHAnimSegment1304->addChild(*SoShape1308);

SoHAnimJoint1303->addChildren(*SoHAnimSegment1304);

SoHAnimJoint* SoHAnimJoint1312 = new SoHAnimJoint();
SoHAnimJoint1312->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint1312->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint1312->setCenter(new float[]{0.1938,0.7452,-0.1024});
SoHAnimJoint1312->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1312->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1313 = new SoHAnimSegment();
SoHAnimSegment1313->X3DNode::setName(QString("l_carpal_middle_phalanx_5"));
SoHAnimSegment1313->setDEF(QString("hanim_l_carpal_middle_phalanx_5"));
SoTransform* SoTransform1314 = new SoTransform();
SoTransform1314->setTranslation(new float[]{0.1938,0.7452,-0.1024});
SoTransform* SoTransform1315 = new SoTransform();
//Empty Transform
SoShape* SoShape1316 = new SoShape();
SoShape1316->setUSE(QString("HAnimJointShape"));
SoTransform1315->addChild(*SoShape1316);

SoTransform1314->addChild(*SoTransform1315);

SoHAnimSegment1313->addChild(*SoTransform1314);

SoShape* SoShape1317 = new SoShape();
SoLineSet* SoLineSet1318 = new SoLineSet();
SoLineSet1318->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1319 = new SoCoordinate();
SoCoordinate1319->setPoint(new float[]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
SoLineSet1318->setCoord(*SoCoordinate1319);

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
SoColorRGBA* SoColorRGBA1320 = new SoColorRGBA();
SoColorRGBA1320->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1318->addChild(*SoColorRGBA1320);

SoShape1317->setGeometry(*SoLineSet1318);

SoHAnimSegment1313->addChild(*SoShape1317);

SoHAnimSite* SoHAnimSite1321 = new SoHAnimSite();
SoHAnimSite1321->X3DNode::setName(QString("l_carpal_distal_phalanx_5_tip"));
SoHAnimSite1321->setDEF(QString("hanim_l_carpal_distal_phalanx_5_tip"));
SoTouchSensor* SoTouchSensor1322 = new SoTouchSensor();
SoTouchSensor1322->setDescription(QString("HAnimSite l_carpal_distal_phalanx_5_tip"));
SoHAnimSite1321->addChild(*SoTouchSensor1322);

SoShape* SoShape1323 = new SoShape();
SoShape1323->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1321->addChild(*SoShape1323);

SoHAnimSegment1313->addChild(*SoHAnimSite1321);

SoHAnimJoint1312->addChildren(*SoHAnimSegment1313);

SoHAnimJoint* SoHAnimJoint1324 = new SoHAnimJoint();
SoHAnimJoint1324->X3DNode::setName(QString("l_carpal_distal_interphalangeal_5"));
SoHAnimJoint1324->setDEF(QString("hanim_l_carpal_distal_interphalangeal_5"));
SoHAnimJoint1324->setCenter(new float[]{0.1948,0.7277,-0.1017});
SoHAnimJoint1324->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1324->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1312->addChildren(*SoHAnimJoint1324);

SoHAnimJoint1303->addChildren(*SoHAnimJoint1312);

SoHAnimJoint1294->addChildren(*SoHAnimJoint1303);

SoHAnimJoint1247->addChildren(*SoHAnimJoint1294);

SoHAnimJoint1106->addChildren(*SoHAnimJoint1247);

SoHAnimJoint1094->addChildren(*SoHAnimJoint1106);

SoHAnimJoint1073->addChildren(*SoHAnimJoint1094);

SoHAnimJoint1058->addChildren(*SoHAnimJoint1073);

SoHAnimJoint1049->addChildren(*SoHAnimJoint1058);

SoHAnimJoint845->addChildren(*SoHAnimJoint1049);

SoHAnimJoint* SoHAnimJoint1325 = new SoHAnimJoint();
SoHAnimJoint1325->X3DNode::setName(QString("r_sternoclavicular"));
SoHAnimJoint1325->setDEF(QString("hanim_r_sternoclavicular"));
SoHAnimJoint1325->setCenter(new float[]{-0.0694,1.46,-0.033});
SoHAnimJoint1325->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1325->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1326 = new SoHAnimSegment();
SoHAnimSegment1326->X3DNode::setName(QString("r_clavicle"));
SoHAnimSegment1326->setDEF(QString("hanim_r_clavicle"));
SoTransform* SoTransform1327 = new SoTransform();
SoTransform1327->setTranslation(new float[]{-0.0694,1.46,-0.033});
SoTransform* SoTransform1328 = new SoTransform();
//Empty Transform
SoShape* SoShape1329 = new SoShape();
SoShape1329->setUSE(QString("HAnimJointShape"));
SoTransform1328->addChild(*SoShape1329);

SoTransform1327->addChild(*SoTransform1328);

SoHAnimSegment1326->addChild(*SoTransform1327);

SoShape* SoShape1330 = new SoShape();
SoLineSet* SoLineSet1331 = new SoLineSet();
SoLineSet1331->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1332 = new SoCoordinate();
SoCoordinate1332->setPoint(new float[]{-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401}, 6);
SoLineSet1331->setCoord(*SoCoordinate1332);

//from r_sternoclavicular to r_acromioclavicular vertices 2
SoColorRGBA* SoColorRGBA1333 = new SoColorRGBA();
SoColorRGBA1333->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1331->addChild(*SoColorRGBA1333);

SoShape1330->setGeometry(*SoLineSet1331);

SoHAnimSegment1326->addChild(*SoShape1330);

SoHAnimJoint1325->addChildren(*SoHAnimSegment1326);

SoHAnimJoint* SoHAnimJoint1334 = new SoHAnimJoint();
SoHAnimJoint1334->X3DNode::setName(QString("r_acromioclavicular"));
SoHAnimJoint1334->setDEF(QString("hanim_r_acromioclavicular"));
SoHAnimJoint1334->setCenter(new float[]{-0.0836,1.4281,-0.0401});
SoHAnimJoint1334->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1334->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1335 = new SoHAnimSegment();
SoHAnimSegment1335->X3DNode::setName(QString("r_scapula"));
SoHAnimSegment1335->setDEF(QString("hanim_r_scapula"));
SoTransform* SoTransform1336 = new SoTransform();
SoTransform1336->setTranslation(new float[]{-0.0836,1.4281,-0.0401});
SoTransform* SoTransform1337 = new SoTransform();
//Empty Transform
SoShape* SoShape1338 = new SoShape();
SoShape1338->setUSE(QString("HAnimJointShape"));
SoTransform1337->addChild(*SoShape1338);

SoTransform1336->addChild(*SoTransform1337);

SoHAnimSegment1335->addChild(*SoTransform1336);

SoShape* SoShape1339 = new SoShape();
SoLineSet* SoLineSet1340 = new SoLineSet();
SoLineSet1340->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1341 = new SoCoordinate();
SoCoordinate1341->setPoint(new float[]{-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325}, 6);
SoLineSet1340->setCoord(*SoCoordinate1341);

//from r_acromioclavicular to r_shoulder vertices 2
SoColorRGBA* SoColorRGBA1342 = new SoColorRGBA();
SoColorRGBA1342->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1340->addChild(*SoColorRGBA1342);

SoShape1339->setGeometry(*SoLineSet1340);

SoHAnimSegment1335->addChild(*SoShape1339);

SoHAnimSite* SoHAnimSite1343 = new SoHAnimSite();
SoHAnimSite1343->X3DNode::setName(QString("r_bideltoid_pt"));
SoHAnimSite1343->setDEF(QString("hanim_r_bideltoid_pt"));
SoTouchSensor* SoTouchSensor1344 = new SoTouchSensor();
SoTouchSensor1344->setDescription(QString("HAnimSite r_bideltoid_pt"));
SoHAnimSite1343->addChild(*SoTouchSensor1344);

SoShape* SoShape1345 = new SoShape();
SoShape1345->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1343->addChild(*SoShape1345);

SoHAnimSegment1335->addChild(*SoHAnimSite1343);

SoHAnimSite* SoHAnimSite1346 = new SoHAnimSite();
SoHAnimSite1346->X3DNode::setName(QString("r_humeral_lateral_epicondyles_pt"));
SoHAnimSite1346->setDEF(QString("hanim_r_humeral_lateral_epicondyles_pt"));
SoHAnimSite1346->setTranslation(new float[]{-0.2224,1.1517,-0.1033});
SoTouchSensor* SoTouchSensor1347 = new SoTouchSensor();
SoTouchSensor1347->setDescription(QString("HAnimSite r_humeral_lateral_epicondyles_pt"));
SoHAnimSite1346->addChild(*SoTouchSensor1347);

SoShape* SoShape1348 = new SoShape();
SoShape1348->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1346->addChild(*SoShape1348);

SoHAnimSegment1335->addChild(*SoHAnimSite1346);

SoHAnimJoint1334->addChildren(*SoHAnimSegment1335);

SoHAnimJoint* SoHAnimJoint1349 = new SoHAnimJoint();
SoHAnimJoint1349->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint1349->setDEF(QString("hanim_r_shoulder"));
SoHAnimJoint1349->setCenter(new float[]{-0.1907,1.4407,-0.0325});
SoHAnimJoint1349->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1349->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1350 = new SoHAnimSegment();
SoHAnimSegment1350->X3DNode::setName(QString("r_upperarm"));
SoHAnimSegment1350->setDEF(QString("hanim_r_upperarm"));
SoTransform* SoTransform1351 = new SoTransform();
SoTransform1351->setTranslation(new float[]{-0.1907,1.4407,-0.0325});
SoTransform* SoTransform1352 = new SoTransform();
//Empty Transform
SoShape* SoShape1353 = new SoShape();
SoShape1353->setUSE(QString("HAnimJointShape"));
SoTransform1352->addChild(*SoShape1353);

SoTransform1351->addChild(*SoTransform1352);

SoHAnimSegment1350->addChild(*SoTransform1351);

SoShape* SoShape1354 = new SoShape();
SoLineSet* SoLineSet1355 = new SoLineSet();
SoLineSet1355->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1356 = new SoCoordinate();
SoCoordinate1356->setPoint(new float[]{-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062}, 6);
SoLineSet1355->setCoord(*SoCoordinate1356);

//from r_shoulder to r_elbow vertices 2
SoColorRGBA* SoColorRGBA1357 = new SoColorRGBA();
SoColorRGBA1357->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1355->addChild(*SoColorRGBA1357);

SoShape1354->setGeometry(*SoLineSet1355);

SoHAnimSegment1350->addChild(*SoShape1354);

SoHAnimSite* SoHAnimSite1358 = new SoHAnimSite();
SoHAnimSite1358->X3DNode::setName(QString("r_humeral_medial_epicondyles_pt"));
SoHAnimSite1358->setDEF(QString("hanim_r_humeral_medial_epicondyles_pt"));
SoHAnimSite1358->setTranslation(new float[]{-0.168,1.1298,-0.1062});
SoTouchSensor* SoTouchSensor1359 = new SoTouchSensor();
SoTouchSensor1359->setDescription(QString("HAnimSite r_humeral_medial_epicondyles_pt"));
SoHAnimSite1358->addChild(*SoTouchSensor1359);

SoShape* SoShape1360 = new SoShape();
SoShape1360->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1358->addChild(*SoShape1360);

SoHAnimSegment1350->addChild(*SoHAnimSite1358);

SoHAnimSite* SoHAnimSite1361 = new SoHAnimSite();
SoHAnimSite1361->X3DNode::setName(QString("r_olecranon_pt"));
SoHAnimSite1361->setDEF(QString("hanim_r_olecranon_pt"));
SoHAnimSite1361->setTranslation(new float[]{-0.1907,1.1405,-0.1065});
SoTouchSensor* SoTouchSensor1362 = new SoTouchSensor();
SoTouchSensor1362->setDescription(QString("HAnimSite r_olecranon_pt"));
SoHAnimSite1361->addChild(*SoTouchSensor1362);

SoShape* SoShape1363 = new SoShape();
SoShape1363->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1361->addChild(*SoShape1363);

SoHAnimSegment1350->addChild(*SoHAnimSite1361);

SoHAnimSite* SoHAnimSite1364 = new SoHAnimSite();
SoHAnimSite1364->X3DNode::setName(QString("r_radial_styloid_pt"));
SoHAnimSite1364->setDEF(QString("hanim_r_radial_styloid_pt"));
SoHAnimSite1364->setTranslation(new float[]{-0.1884,0.8676,-0.036});
SoTouchSensor* SoTouchSensor1365 = new SoTouchSensor();
SoTouchSensor1365->setDescription(QString("HAnimSite r_radial_styloid_pt"));
SoHAnimSite1364->addChild(*SoTouchSensor1365);

SoShape* SoShape1366 = new SoShape();
SoShape1366->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1364->addChild(*SoShape1366);

SoHAnimSegment1350->addChild(*SoHAnimSite1364);

SoHAnimSite* SoHAnimSite1367 = new SoHAnimSite();
SoHAnimSite1367->X3DNode::setName(QString("r_radiale_pt"));
SoHAnimSite1367->setDEF(QString("hanim_r_radiale_pt"));
SoHAnimSite1367->setTranslation(new float[]{-0.213,1.1305,-0.1091});
SoTouchSensor* SoTouchSensor1368 = new SoTouchSensor();
SoTouchSensor1368->setDescription(QString("HAnimSite r_radiale_pt"));
SoHAnimSite1367->addChild(*SoTouchSensor1368);

SoShape* SoShape1369 = new SoShape();
SoShape1369->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1367->addChild(*SoShape1369);

SoHAnimSegment1350->addChild(*SoHAnimSite1367);

SoHAnimJoint1349->addChildren(*SoHAnimSegment1350);

SoHAnimJoint* SoHAnimJoint1370 = new SoHAnimJoint();
SoHAnimJoint1370->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint1370->setDEF(QString("hanim_r_elbow"));
SoHAnimJoint1370->setCenter(new float[]{-0.1949,1.1388,-0.062});
SoHAnimJoint1370->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1370->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1371 = new SoHAnimSegment();
SoHAnimSegment1371->X3DNode::setName(QString("r_forearm"));
SoHAnimSegment1371->setDEF(QString("hanim_r_forearm"));
SoTransform* SoTransform1372 = new SoTransform();
SoTransform1372->setTranslation(new float[]{-0.1949,1.1388,-0.062});
SoTransform* SoTransform1373 = new SoTransform();
//Empty Transform
SoShape* SoShape1374 = new SoShape();
SoShape1374->setUSE(QString("HAnimJointShape"));
SoTransform1373->addChild(*SoShape1374);

SoTransform1372->addChild(*SoTransform1373);

SoHAnimSegment1371->addChild(*SoTransform1372);

SoShape* SoShape1375 = new SoShape();
SoLineSet* SoLineSet1376 = new SoLineSet();
SoLineSet1376->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1377 = new SoCoordinate();
SoCoordinate1377->setPoint(new float[]{-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521}, 6);
SoLineSet1376->setCoord(*SoCoordinate1377);

//from r_elbow to r_radiocarpal vertices 2
SoColorRGBA* SoColorRGBA1378 = new SoColorRGBA();
SoColorRGBA1378->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1376->addChild(*SoColorRGBA1378);

SoShape1375->setGeometry(*SoLineSet1376);

SoHAnimSegment1371->addChild(*SoShape1375);

SoHAnimSite* SoHAnimSite1379 = new SoHAnimSite();
SoHAnimSite1379->X3DNode::setName(QString("r_ulnar_styloid_pt"));
SoHAnimSite1379->setDEF(QString("hanim_r_ulnar_styloid_pt"));
SoHAnimSite1379->setTranslation(new float[]{-0.2117,0.8562,-0.0584});
SoTouchSensor* SoTouchSensor1380 = new SoTouchSensor();
SoTouchSensor1380->setDescription(QString("HAnimSite r_ulnar_styloid_pt"));
SoHAnimSite1379->addChild(*SoTouchSensor1380);

SoShape* SoShape1381 = new SoShape();
SoShape1381->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1379->addChild(*SoShape1381);

SoHAnimSegment1371->addChild(*SoHAnimSite1379);

SoHAnimJoint1370->addChildren(*SoHAnimSegment1371);

SoHAnimJoint* SoHAnimJoint1382 = new SoHAnimJoint();
SoHAnimJoint1382->X3DNode::setName(QString("r_radiocarpal"));
SoHAnimJoint1382->setDEF(QString("hanim_r_radiocarpal"));
SoHAnimJoint1382->setCenter(new float[]{-0.1959,0.8694,-0.0521});
SoHAnimJoint1382->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1382->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1383 = new SoHAnimSegment();
SoHAnimSegment1383->X3DNode::setName(QString("r_carpal"));
SoHAnimSegment1383->setDEF(QString("hanim_r_carpal"));
SoTransform* SoTransform1384 = new SoTransform();
SoTransform1384->setScale(new float[]{0.2,0.2,0.2});
SoTransform1384->setTranslation(new float[]{-0.2,0.85,-0.05});
SoTransform1384->setRotation(new float[]{0.0,0.0,1.0,-3.14});
//Transform right hand
SoTransform* SoTransform1385 = new SoTransform();
SoTransform1385->setRotation(new float[]{0.0,1.0,0.0,1.57});
//Transform right hand
SoShape* SoShape1386 = new SoShape();
SoShape1386->setUSE(QString("HAnimJointShape"));
SoTransform1385->addChild(*SoShape1386);

SoTransform1384->addChild(*SoTransform1385);

SoHAnimSegment1383->addChild(*SoTransform1384);

SoShape* SoShape1387 = new SoShape();
SoLineSet* SoLineSet1388 = new SoLineSet();
SoLineSet1388->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1389 = new SoCoordinate();
SoCoordinate1389->setPoint(new float[]{-0.1959,0.8694,-0.0521,-8.0515,0.9213,1.3235}, 6);
SoLineSet1388->setCoord(*SoCoordinate1389);

//from r_radiocarpal to r_midcarpal_1 vertices 2
SoColorRGBA* SoColorRGBA1390 = new SoColorRGBA();
SoColorRGBA1390->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1388->addChild(*SoColorRGBA1390);

SoShape1387->setGeometry(*SoLineSet1388);

SoHAnimSegment1383->addChild(*SoShape1387);

SoShape* SoShape1391 = new SoShape();
SoLineSet* SoLineSet1392 = new SoLineSet();
SoLineSet1392->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1393 = new SoCoordinate();
SoCoordinate1393->setPoint(new float[]{-0.1959,0.8694,-0.0521,-8.0515,0.9225,0.8386}, 6);
SoLineSet1392->setCoord(*SoCoordinate1393);

//from r_radiocarpal to r_midcarpal_2 vertices 2
SoColorRGBA* SoColorRGBA1394 = new SoColorRGBA();
SoColorRGBA1394->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1392->addChild(*SoColorRGBA1394);

SoShape1391->setGeometry(*SoLineSet1392);

SoHAnimSegment1383->addChild(*SoShape1391);

SoShape* SoShape1395 = new SoShape();
SoLineSet* SoLineSet1396 = new SoLineSet();
SoLineSet1396->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1397 = new SoCoordinate();
SoCoordinate1397->setPoint(new float[]{-0.1959,0.8694,-0.0521,-8.0405,0.9246,0.2513}, 6);
SoLineSet1396->setCoord(*SoCoordinate1397);

//from r_radiocarpal to r_midcarpal_3 vertices 2
SoColorRGBA* SoColorRGBA1398 = new SoColorRGBA();
SoColorRGBA1398->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1396->addChild(*SoColorRGBA1398);

SoShape1395->setGeometry(*SoLineSet1396);

SoHAnimSegment1383->addChild(*SoShape1395);

SoShape* SoShape1399 = new SoShape();
SoLineSet* SoLineSet1400 = new SoLineSet();
SoLineSet1400->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1401 = new SoCoordinate();
SoCoordinate1401->setPoint(new float[]{-0.1959,0.8694,-0.0521,-8.0405,0.921,-0.6795}, 6);
SoLineSet1400->setCoord(*SoCoordinate1401);

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
SoColorRGBA* SoColorRGBA1402 = new SoColorRGBA();
SoColorRGBA1402->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1400->addChild(*SoColorRGBA1402);

SoShape1399->setGeometry(*SoLineSet1400);

SoHAnimSegment1383->addChild(*SoShape1399);

SoHAnimJoint1382->addChildren(*SoHAnimSegment1383);

SoHAnimJoint* SoHAnimJoint1403 = new SoHAnimJoint();
SoHAnimJoint1403->X3DNode::setName(QString("r_midcarpal_1"));
SoHAnimJoint1403->setDEF(QString("hanim_r_midcarpal_1"));
SoHAnimJoint1403->setCenter(new float[]{-8.0515,0.9213,1.3235});
SoHAnimJoint1403->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1403->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1404 = new SoHAnimSegment();
SoHAnimSegment1404->X3DNode::setName(QString("r_trapezium"));
SoHAnimSegment1404->setDEF(QString("hanim_r_trapezium"));
SoTransform* SoTransform1405 = new SoTransform();
SoTransform1405->setTranslation(new float[]{-8.0515,0.9213,1.3235});
SoTransform* SoTransform1406 = new SoTransform();
//Empty Transform
SoShape* SoShape1407 = new SoShape();
SoShape1407->setUSE(QString("HAnimJointShape"));
SoTransform1406->addChild(*SoShape1407);

SoTransform1405->addChild(*SoTransform1406);

SoHAnimSegment1404->addChild(*SoTransform1405);

SoShape* SoShape1408 = new SoShape();
SoLineSet* SoLineSet1409 = new SoLineSet();
SoLineSet1409->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1410 = new SoCoordinate();
SoCoordinate1410->setPoint(new float[]{-8.0515,0.9213,1.3235,-0.1899,0.8502,-0.0473}, 6);
SoLineSet1409->setCoord(*SoCoordinate1410);

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
SoColorRGBA* SoColorRGBA1411 = new SoColorRGBA();
SoColorRGBA1411->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1409->addChild(*SoColorRGBA1411);

SoShape1408->setGeometry(*SoLineSet1409);

SoHAnimSegment1404->addChild(*SoShape1408);

SoHAnimJoint1403->addChildren(*SoHAnimSegment1404);

SoHAnimJoint* SoHAnimJoint1412 = new SoHAnimJoint();
SoHAnimJoint1412->X3DNode::setName(QString("r_carpometacarpal_1"));
SoHAnimJoint1412->setDEF(QString("hanim_r_carpometacarpal_1"));
SoHAnimJoint1412->setCenter(new float[]{-0.1899,0.8502,-0.0473});
SoHAnimJoint1412->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1412->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1413 = new SoHAnimSegment();
SoHAnimSegment1413->X3DNode::setName(QString("r_metacarpal_1"));
SoHAnimSegment1413->setDEF(QString("hanim_r_metacarpal_1"));
SoTransform* SoTransform1414 = new SoTransform();
SoTransform1414->setTranslation(new float[]{-0.1899,0.8502,-0.0473});
SoTransform* SoTransform1415 = new SoTransform();
//Empty Transform
SoShape* SoShape1416 = new SoShape();
SoShape1416->setUSE(QString("HAnimJointShape"));
SoTransform1415->addChild(*SoShape1416);

SoTransform1414->addChild(*SoTransform1415);

SoHAnimSegment1413->addChild(*SoTransform1414);

SoShape* SoShape1417 = new SoShape();
SoLineSet* SoLineSet1418 = new SoLineSet();
SoLineSet1418->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1419 = new SoCoordinate();
SoCoordinate1419->setPoint(new float[]{-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306}, 6);
SoLineSet1418->setCoord(*SoCoordinate1419);

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
SoColorRGBA* SoColorRGBA1420 = new SoColorRGBA();
SoColorRGBA1420->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1418->addChild(*SoColorRGBA1420);

SoShape1417->setGeometry(*SoLineSet1418);

SoHAnimSegment1413->addChild(*SoShape1417);

SoHAnimJoint1412->addChildren(*SoHAnimSegment1413);

SoHAnimJoint* SoHAnimJoint1421 = new SoHAnimJoint();
SoHAnimJoint1421->X3DNode::setName(QString("r_metacarpophalangeal_1"));
SoHAnimJoint1421->setDEF(QString("hanim_r_metacarpophalangeal_1"));
SoHAnimJoint1421->setCenter(new float[]{-0.1874,0.8256,0.0306});
SoHAnimJoint1421->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1421->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1422 = new SoHAnimSegment();
SoHAnimSegment1422->X3DNode::setName(QString("r_carpal_proximal_phalanx_1"));
SoHAnimSegment1422->setDEF(QString("hanim_r_carpal_proximal_phalanx_1"));
SoTransform* SoTransform1423 = new SoTransform();
SoTransform1423->setTranslation(new float[]{-0.1874,0.8256,0.0306});
SoTransform* SoTransform1424 = new SoTransform();
//Empty Transform
SoShape* SoShape1425 = new SoShape();
SoShape1425->setUSE(QString("HAnimJointShape"));
SoTransform1424->addChild(*SoShape1425);

SoTransform1423->addChild(*SoTransform1424);

SoHAnimSegment1422->addChild(*SoTransform1423);

SoShape* SoShape1426 = new SoShape();
SoLineSet* SoLineSet1427 = new SoLineSet();
SoLineSet1427->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1428 = new SoCoordinate();
SoCoordinate1428->setPoint(new float[]{-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506}, 6);
SoLineSet1427->setCoord(*SoCoordinate1428);

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
SoColorRGBA* SoColorRGBA1429 = new SoColorRGBA();
SoColorRGBA1429->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1427->addChild(*SoColorRGBA1429);

SoShape1426->setGeometry(*SoLineSet1427);

SoHAnimSegment1422->addChild(*SoShape1426);

SoHAnimSite* SoHAnimSite1430 = new SoHAnimSite();
SoHAnimSite1430->X3DNode::setName(QString("r_carpal_distal_phalanx_1_tip"));
SoHAnimSite1430->setDEF(QString("hanim_r_carpal_distal_phalanx_1_tip"));
SoTouchSensor* SoTouchSensor1431 = new SoTouchSensor();
SoTouchSensor1431->setDescription(QString("HAnimSite r_carpal_distal_phalanx_1_tip"));
SoHAnimSite1430->addChild(*SoTouchSensor1431);

SoShape* SoShape1432 = new SoShape();
SoShape1432->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1430->addChild(*SoShape1432);

SoHAnimSegment1422->addChild(*SoHAnimSite1430);

SoHAnimJoint1421->addChildren(*SoHAnimSegment1422);

SoHAnimJoint* SoHAnimJoint1433 = new SoHAnimJoint();
SoHAnimJoint1433->X3DNode::setName(QString("r_carpal_interphalangeal_1"));
SoHAnimJoint1433->setDEF(QString("hanim_r_carpal_interphalangeal_1"));
SoHAnimJoint1433->setCenter(new float[]{-0.1864,0.819,0.0506});
SoHAnimJoint1433->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1433->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1421->addChildren(*SoHAnimJoint1433);

SoHAnimJoint1412->addChildren(*SoHAnimJoint1421);

SoHAnimJoint1403->addChildren(*SoHAnimJoint1412);

SoHAnimJoint1382->addChildren(*SoHAnimJoint1403);

SoHAnimJoint* SoHAnimJoint1434 = new SoHAnimJoint();
SoHAnimJoint1434->X3DNode::setName(QString("r_midcarpal_2"));
SoHAnimJoint1434->setDEF(QString("hanim_r_midcarpal_2"));
SoHAnimJoint1434->setCenter(new float[]{-8.0515,0.9225,0.8386});
SoHAnimJoint1434->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1434->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1435 = new SoHAnimSegment();
SoHAnimSegment1435->X3DNode::setName(QString("r_trapezoid"));
SoHAnimSegment1435->setDEF(QString("hanim_r_trapezoid"));
SoTransform* SoTransform1436 = new SoTransform();
SoTransform1436->setTranslation(new float[]{-8.0515,0.9225,0.8386});
SoTransform* SoTransform1437 = new SoTransform();
//Empty Transform
SoShape* SoShape1438 = new SoShape();
SoShape1438->setUSE(QString("HAnimJointShape"));
SoTransform1437->addChild(*SoShape1438);

SoTransform1436->addChild(*SoTransform1437);

SoHAnimSegment1435->addChild(*SoTransform1436);

SoShape* SoShape1439 = new SoShape();
SoLineSet* SoLineSet1440 = new SoLineSet();
SoLineSet1440->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1441 = new SoCoordinate();
SoCoordinate1441->setPoint(new float[]{-8.0515,0.9225,0.8386,-0.1961,0.8055,-0.0218}, 6);
SoLineSet1440->setCoord(*SoCoordinate1441);

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
SoColorRGBA* SoColorRGBA1442 = new SoColorRGBA();
SoColorRGBA1442->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1440->addChild(*SoColorRGBA1442);

SoShape1439->setGeometry(*SoLineSet1440);

SoHAnimSegment1435->addChild(*SoShape1439);

SoHAnimSite* SoHAnimSite1443 = new SoHAnimSite();
SoHAnimSite1443->X3DNode::setName(QString("r_metacarpal_phalanx_2_pt"));
SoHAnimSite1443->setDEF(QString("hanim_r_metacarpal_phalanx_2_pt"));
SoHAnimSite1443->setTranslation(new float[]{-0.1977,0.8169,-0.0177});
SoTouchSensor* SoTouchSensor1444 = new SoTouchSensor();
SoTouchSensor1444->setDescription(QString("HAnimSite r_metacarpal_phalanx_2_pt"));
SoHAnimSite1443->addChild(*SoTouchSensor1444);

SoShape* SoShape1445 = new SoShape();
SoShape1445->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1443->addChild(*SoShape1445);

SoHAnimSegment1435->addChild(*SoHAnimSite1443);

SoHAnimJoint1434->addChildren(*SoHAnimSegment1435);

SoHAnimJoint* SoHAnimJoint1446 = new SoHAnimJoint();
SoHAnimJoint1446->X3DNode::setName(QString("r_carpometacarpal_2"));
SoHAnimJoint1446->setDEF(QString("hanim_r_carpometacarpal_2"));
SoHAnimJoint1446->setCenter(new float[]{-0.1961,0.8055,-0.0218});
SoHAnimJoint1446->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1446->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1447 = new SoHAnimSegment();
SoHAnimSegment1447->X3DNode::setName(QString("r_metacarpal_2"));
SoHAnimSegment1447->setDEF(QString("hanim_r_metacarpal_2"));
SoTransform* SoTransform1448 = new SoTransform();
SoTransform1448->setTranslation(new float[]{-0.1961,0.8055,-0.0218});
SoTransform* SoTransform1449 = new SoTransform();
//Empty Transform
SoShape* SoShape1450 = new SoShape();
SoShape1450->setUSE(QString("HAnimJointShape"));
SoTransform1449->addChild(*SoShape1450);

SoTransform1448->addChild(*SoTransform1449);

SoHAnimSegment1447->addChild(*SoTransform1448);

SoShape* SoShape1451 = new SoShape();
SoLineSet* SoLineSet1452 = new SoLineSet();
SoLineSet1452->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1453 = new SoCoordinate();
SoCoordinate1453->setPoint(new float[]{-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218}, 6);
SoLineSet1452->setCoord(*SoCoordinate1453);

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
SoColorRGBA* SoColorRGBA1454 = new SoColorRGBA();
SoColorRGBA1454->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1452->addChild(*SoColorRGBA1454);

SoShape1451->setGeometry(*SoLineSet1452);

SoHAnimSegment1447->addChild(*SoShape1451);

SoHAnimJoint1446->addChildren(*SoHAnimSegment1447);

SoHAnimJoint* SoHAnimJoint1455 = new SoHAnimJoint();
SoHAnimJoint1455->X3DNode::setName(QString("r_metacarpophalangeal_2"));
SoHAnimJoint1455->setDEF(QString("hanim_r_metacarpophalangeal_2"));
SoHAnimJoint1455->setCenter(new float[]{-0.1961,0.7846,-0.0218});
SoHAnimJoint1455->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1455->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1456 = new SoHAnimSegment();
SoHAnimSegment1456->X3DNode::setName(QString("r_carpal_proximal_phalanx_2"));
SoHAnimSegment1456->setDEF(QString("hanim_r_carpal_proximal_phalanx_2"));
SoTransform* SoTransform1457 = new SoTransform();
SoTransform1457->setTranslation(new float[]{-0.1961,0.7846,-0.0218});
SoTransform* SoTransform1458 = new SoTransform();
//Empty Transform
SoShape* SoShape1459 = new SoShape();
SoShape1459->setUSE(QString("HAnimJointShape"));
SoTransform1458->addChild(*SoShape1459);

SoTransform1457->addChild(*SoTransform1458);

SoHAnimSegment1456->addChild(*SoTransform1457);

SoShape* SoShape1460 = new SoShape();
SoLineSet* SoLineSet1461 = new SoLineSet();
SoLineSet1461->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1462 = new SoCoordinate();
SoCoordinate1462->setPoint(new float[]{-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185}, 6);
SoLineSet1461->setCoord(*SoCoordinate1462);

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
SoColorRGBA* SoColorRGBA1463 = new SoColorRGBA();
SoColorRGBA1463->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1461->addChild(*SoColorRGBA1463);

SoShape1460->setGeometry(*SoLineSet1461);

SoHAnimSegment1456->addChild(*SoShape1460);

SoHAnimJoint1455->addChildren(*SoHAnimSegment1456);

SoHAnimJoint* SoHAnimJoint1464 = new SoHAnimJoint();
SoHAnimJoint1464->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint1464->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint1464->setCenter(new float[]{-0.1954,0.7393,-0.0185});
SoHAnimJoint1464->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1464->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1465 = new SoHAnimSegment();
SoHAnimSegment1465->X3DNode::setName(QString("r_carpal_middle_phalanx_2"));
SoHAnimSegment1465->setDEF(QString("hanim_r_carpal_middle_phalanx_2"));
SoTransform* SoTransform1466 = new SoTransform();
SoTransform1466->setTranslation(new float[]{-0.1954,0.7393,-0.0185});
SoTransform* SoTransform1467 = new SoTransform();
//Empty Transform
SoShape* SoShape1468 = new SoShape();
SoShape1468->setUSE(QString("HAnimJointShape"));
SoTransform1467->addChild(*SoShape1468);

SoTransform1466->addChild(*SoTransform1467);

SoHAnimSegment1465->addChild(*SoTransform1466);

SoShape* SoShape1469 = new SoShape();
SoLineSet* SoLineSet1470 = new SoLineSet();
SoLineSet1470->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1471 = new SoCoordinate();
SoCoordinate1471->setPoint(new float[]{-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173}, 6);
SoLineSet1470->setCoord(*SoCoordinate1471);

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
SoColorRGBA* SoColorRGBA1472 = new SoColorRGBA();
SoColorRGBA1472->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1470->addChild(*SoColorRGBA1472);

SoShape1469->setGeometry(*SoLineSet1470);

SoHAnimSegment1465->addChild(*SoShape1469);

SoHAnimSite* SoHAnimSite1473 = new SoHAnimSite();
SoHAnimSite1473->X3DNode::setName(QString("r_carpal_distal_phalanx_2_tip"));
SoHAnimSite1473->setDEF(QString("hanim_r_carpal_distal_phalanx_2_tip"));
SoTouchSensor* SoTouchSensor1474 = new SoTouchSensor();
SoTouchSensor1474->setDescription(QString("HAnimSite r_carpal_distal_phalanx_2_tip"));
SoHAnimSite1473->addChild(*SoTouchSensor1474);

SoShape* SoShape1475 = new SoShape();
SoShape1475->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1473->addChild(*SoShape1475);

SoHAnimSegment1465->addChild(*SoHAnimSite1473);

SoHAnimSite* SoHAnimSite1476 = new SoHAnimSite();
SoHAnimSite1476->X3DNode::setName(QString("r_dactylion_pt"));
SoHAnimSite1476->setDEF(QString("hanim_r_dactylion_pt"));
SoHAnimSite1476->setTranslation(new float[]{-0.1941,0.6772,-0.0423});
SoTouchSensor* SoTouchSensor1477 = new SoTouchSensor();
SoTouchSensor1477->setDescription(QString("HAnimSite r_dactylion_pt"));
SoHAnimSite1476->addChild(*SoTouchSensor1477);

SoShape* SoShape1478 = new SoShape();
SoShape1478->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1476->addChild(*SoShape1478);

SoHAnimSegment1465->addChild(*SoHAnimSite1476);

SoHAnimJoint1464->addChildren(*SoHAnimSegment1465);

SoHAnimJoint* SoHAnimJoint1479 = new SoHAnimJoint();
SoHAnimJoint1479->X3DNode::setName(QString("r_carpal_distal_interphalangeal_2"));
SoHAnimJoint1479->setDEF(QString("hanim_r_carpal_distal_interphalangeal_2"));
SoHAnimJoint1479->setCenter(new float[]{-0.1945,0.7169,-0.0173});
SoHAnimJoint1479->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1479->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1464->addChildren(*SoHAnimJoint1479);

SoHAnimJoint1455->addChildren(*SoHAnimJoint1464);

SoHAnimJoint1446->addChildren(*SoHAnimJoint1455);

SoHAnimJoint1434->addChildren(*SoHAnimJoint1446);

SoHAnimJoint1382->addChildren(*SoHAnimJoint1434);

SoHAnimJoint* SoHAnimJoint1480 = new SoHAnimJoint();
SoHAnimJoint1480->X3DNode::setName(QString("r_midcarpal_3"));
SoHAnimJoint1480->setDEF(QString("hanim_r_midcarpal_3"));
SoHAnimJoint1480->setCenter(new float[]{-8.0405,0.9246,0.2513});
SoHAnimJoint1480->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1480->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1481 = new SoHAnimSegment();
SoHAnimSegment1481->X3DNode::setName(QString("r_capitate"));
SoHAnimSegment1481->setDEF(QString("hanim_r_capitate"));
SoTransform* SoTransform1482 = new SoTransform();
SoTransform1482->setTranslation(new float[]{-8.0405,0.9246,0.2513});
SoTransform* SoTransform1483 = new SoTransform();
//Empty Transform
SoShape* SoShape1484 = new SoShape();
SoShape1484->setUSE(QString("HAnimJointShape"));
SoTransform1483->addChild(*SoShape1484);

SoTransform1482->addChild(*SoTransform1483);

SoHAnimSegment1481->addChild(*SoTransform1482);

SoShape* SoShape1485 = new SoShape();
SoLineSet* SoLineSet1486 = new SoLineSet();
SoLineSet1486->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1487 = new SoCoordinate();
SoCoordinate1487->setPoint(new float[]{-8.0405,0.9246,0.2513,-0.1972,0.806,-0.0468}, 6);
SoLineSet1486->setCoord(*SoCoordinate1487);

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
SoColorRGBA* SoColorRGBA1488 = new SoColorRGBA();
SoColorRGBA1488->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1486->addChild(*SoColorRGBA1488);

SoShape1485->setGeometry(*SoLineSet1486);

SoHAnimSegment1481->addChild(*SoShape1485);

SoHAnimSite* SoHAnimSite1489 = new SoHAnimSite();
SoHAnimSite1489->X3DNode::setName(QString("r_metacarpal_phalanx_3_pt"));
SoHAnimSite1489->setDEF(QString("hanim_r_metacarpal_phalanx_3_pt"));
SoTouchSensor* SoTouchSensor1490 = new SoTouchSensor();
SoTouchSensor1490->setDescription(QString("HAnimSite r_metacarpal_phalanx_3_pt"));
SoHAnimSite1489->addChild(*SoTouchSensor1490);

SoShape* SoShape1491 = new SoShape();
SoShape1491->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1489->addChild(*SoShape1491);

SoHAnimSegment1481->addChild(*SoHAnimSite1489);

SoHAnimJoint1480->addChildren(*SoHAnimSegment1481);

SoHAnimJoint* SoHAnimJoint1492 = new SoHAnimJoint();
SoHAnimJoint1492->X3DNode::setName(QString("r_carpometacarpal_3"));
SoHAnimJoint1492->setDEF(QString("hanim_r_carpometacarpal_3"));
SoHAnimJoint1492->setCenter(new float[]{-0.1972,0.806,-0.0468});
SoHAnimJoint1492->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1492->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1493 = new SoHAnimSegment();
SoHAnimSegment1493->X3DNode::setName(QString("r_metacarpal_3"));
SoHAnimSegment1493->setDEF(QString("hanim_r_metacarpal_3"));
SoTransform* SoTransform1494 = new SoTransform();
SoTransform1494->setTranslation(new float[]{-0.1972,0.806,-0.0468});
SoTransform* SoTransform1495 = new SoTransform();
//Empty Transform
SoShape* SoShape1496 = new SoShape();
SoShape1496->setUSE(QString("HAnimJointShape"));
SoTransform1495->addChild(*SoShape1496);

SoTransform1494->addChild(*SoTransform1495);

SoHAnimSegment1493->addChild(*SoTransform1494);

SoShape* SoShape1497 = new SoShape();
SoLineSet* SoLineSet1498 = new SoLineSet();
SoLineSet1498->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1499 = new SoCoordinate();
SoCoordinate1499->setPoint(new float[]{-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468}, 6);
SoLineSet1498->setCoord(*SoCoordinate1499);

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
SoColorRGBA* SoColorRGBA1500 = new SoColorRGBA();
SoColorRGBA1500->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1498->addChild(*SoColorRGBA1500);

SoShape1497->setGeometry(*SoLineSet1498);

SoHAnimSegment1493->addChild(*SoShape1497);

SoHAnimJoint1492->addChildren(*SoHAnimSegment1493);

SoHAnimJoint* SoHAnimJoint1501 = new SoHAnimJoint();
SoHAnimJoint1501->X3DNode::setName(QString("r_metacarpophalangeal_3"));
SoHAnimJoint1501->setDEF(QString("hanim_r_metacarpophalangeal_3"));
SoHAnimJoint1501->setCenter(new float[]{-0.1972,0.7849,-0.0468});
SoHAnimJoint1501->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1501->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1502 = new SoHAnimSegment();
SoHAnimSegment1502->X3DNode::setName(QString("r_carpal_proximal_phalanx_3"));
SoHAnimSegment1502->setDEF(QString("hanim_r_carpal_proximal_phalanx_3"));
SoTransform* SoTransform1503 = new SoTransform();
SoTransform1503->setTranslation(new float[]{-0.1972,0.7849,-0.0468});
SoTransform* SoTransform1504 = new SoTransform();
//Empty Transform
SoShape* SoShape1505 = new SoShape();
SoShape1505->setUSE(QString("HAnimJointShape"));
SoTransform1504->addChild(*SoShape1505);

SoTransform1503->addChild(*SoTransform1504);

SoHAnimSegment1502->addChild(*SoTransform1503);

SoShape* SoShape1506 = new SoShape();
SoLineSet* SoLineSet1507 = new SoLineSet();
SoLineSet1507->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1508 = new SoCoordinate();
SoCoordinate1508->setPoint(new float[]{-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441}, 6);
SoLineSet1507->setCoord(*SoCoordinate1508);

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
SoColorRGBA* SoColorRGBA1509 = new SoColorRGBA();
SoColorRGBA1509->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1507->addChild(*SoColorRGBA1509);

SoShape1506->setGeometry(*SoLineSet1507);

SoHAnimSegment1502->addChild(*SoShape1506);

SoHAnimJoint1501->addChildren(*SoHAnimSegment1502);

SoHAnimJoint* SoHAnimJoint1510 = new SoHAnimJoint();
SoHAnimJoint1510->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint1510->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint1510->setCenter(new float[]{-0.195,0.7304,-0.0441});
SoHAnimJoint1510->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1510->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1511 = new SoHAnimSegment();
SoHAnimSegment1511->X3DNode::setName(QString("r_carpal_middle_phalanx_3"));
SoHAnimSegment1511->setDEF(QString("hanim_r_carpal_middle_phalanx_3"));
SoTransform* SoTransform1512 = new SoTransform();
SoTransform1512->setTranslation(new float[]{-0.195,0.7304,-0.0441});
SoTransform* SoTransform1513 = new SoTransform();
//Empty Transform
SoShape* SoShape1514 = new SoShape();
SoShape1514->setUSE(QString("HAnimJointShape"));
SoTransform1513->addChild(*SoShape1514);

SoTransform1512->addChild(*SoTransform1513);

SoHAnimSegment1511->addChild(*SoTransform1512);

SoShape* SoShape1515 = new SoShape();
SoLineSet* SoLineSet1516 = new SoLineSet();
SoLineSet1516->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1517 = new SoCoordinate();
SoCoordinate1517->setPoint(new float[]{-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432}, 6);
SoLineSet1516->setCoord(*SoCoordinate1517);

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
SoColorRGBA* SoColorRGBA1518 = new SoColorRGBA();
SoColorRGBA1518->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1516->addChild(*SoColorRGBA1518);

SoShape1515->setGeometry(*SoLineSet1516);

SoHAnimSegment1511->addChild(*SoShape1515);

SoHAnimSite* SoHAnimSite1519 = new SoHAnimSite();
SoHAnimSite1519->X3DNode::setName(QString("r_carpal_distal_phalanx_3_tip"));
SoHAnimSite1519->setDEF(QString("hanim_r_carpal_distal_phalanx_3_tip"));
SoTouchSensor* SoTouchSensor1520 = new SoTouchSensor();
SoTouchSensor1520->setDescription(QString("HAnimSite r_carpal_distal_phalanx_3_tip"));
SoHAnimSite1519->addChild(*SoTouchSensor1520);

SoShape* SoShape1521 = new SoShape();
SoShape1521->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1519->addChild(*SoShape1521);

SoHAnimSegment1511->addChild(*SoHAnimSite1519);

SoHAnimJoint1510->addChildren(*SoHAnimSegment1511);

SoHAnimJoint* SoHAnimJoint1522 = new SoHAnimJoint();
SoHAnimJoint1522->X3DNode::setName(QString("r_carpal_distal_interphalangeal_3"));
SoHAnimJoint1522->setDEF(QString("hanim_r_carpal_distal_interphalangeal_3"));
SoHAnimJoint1522->setCenter(new float[]{-0.1939,0.7042,-0.0432});
SoHAnimJoint1522->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1522->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1510->addChildren(*SoHAnimJoint1522);

SoHAnimJoint1501->addChildren(*SoHAnimJoint1510);

SoHAnimJoint1492->addChildren(*SoHAnimJoint1501);

SoHAnimJoint1480->addChildren(*SoHAnimJoint1492);

SoHAnimJoint1382->addChildren(*SoHAnimJoint1480);

SoHAnimJoint* SoHAnimJoint1523 = new SoHAnimJoint();
SoHAnimJoint1523->X3DNode::setName(QString("r_midcarpal_4_5"));
SoHAnimJoint1523->setDEF(QString("hanim_r_midcarpal_4_5"));
SoHAnimJoint1523->setCenter(new float[]{-8.0405,0.921,-0.6795});
SoHAnimJoint1523->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1523->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1524 = new SoHAnimSegment();
SoHAnimSegment1524->X3DNode::setName(QString("r_hamate"));
SoHAnimSegment1524->setDEF(QString("hanim_r_hamate"));
SoTransform* SoTransform1525 = new SoTransform();
SoTransform1525->setTranslation(new float[]{-8.0405,0.921,-0.6795});
SoTransform* SoTransform1526 = new SoTransform();
//Empty Transform
SoShape* SoShape1527 = new SoShape();
SoShape1527->setUSE(QString("HAnimJointShape"));
SoTransform1526->addChild(*SoShape1527);

SoTransform1525->addChild(*SoTransform1526);

SoHAnimSegment1524->addChild(*SoTransform1525);

SoShape* SoShape1528 = new SoShape();
SoLineSet* SoLineSet1529 = new SoLineSet();
SoLineSet1529->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1530 = new SoCoordinate();
SoCoordinate1530->setPoint(new float[]{-8.0405,0.921,-0.6795,-0.1951,0.8049,-0.0732}, 6);
SoLineSet1529->setCoord(*SoCoordinate1530);

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
SoColorRGBA* SoColorRGBA1531 = new SoColorRGBA();
SoColorRGBA1531->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1529->addChild(*SoColorRGBA1531);

SoShape1528->setGeometry(*SoLineSet1529);

SoHAnimSegment1524->addChild(*SoShape1528);

SoShape* SoShape1532 = new SoShape();
SoLineSet* SoLineSet1533 = new SoLineSet();
SoLineSet1533->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1534 = new SoCoordinate();
SoCoordinate1534->setPoint(new float[]{-8.0405,0.921,-0.6795,-0.1926,0.8096,-0.0975}, 6);
SoLineSet1533->setCoord(*SoCoordinate1534);

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
SoColorRGBA* SoColorRGBA1535 = new SoColorRGBA();
SoColorRGBA1535->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1533->addChild(*SoColorRGBA1535);

SoShape1532->setGeometry(*SoLineSet1533);

SoHAnimSegment1524->addChild(*SoShape1532);

SoHAnimSite* SoHAnimSite1536 = new SoHAnimSite();
SoHAnimSite1536->X3DNode::setName(QString("r_metacarpal_phalanx_5_pt"));
SoHAnimSite1536->setDEF(QString("hanim_r_metacarpal_phalanx_5_pt"));
SoHAnimSite1536->setTranslation(new float[]{-0.1929,0.789,-0.1064});
SoTouchSensor* SoTouchSensor1537 = new SoTouchSensor();
SoTouchSensor1537->setDescription(QString("HAnimSite r_metacarpal_phalanx_5_pt"));
SoHAnimSite1536->addChild(*SoTouchSensor1537);

SoShape* SoShape1538 = new SoShape();
SoShape1538->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1536->addChild(*SoShape1538);

SoHAnimSegment1524->addChild(*SoHAnimSite1536);

SoHAnimJoint1523->addChildren(*SoHAnimSegment1524);

SoHAnimJoint* SoHAnimJoint1539 = new SoHAnimJoint();
SoHAnimJoint1539->X3DNode::setName(QString("r_carpometacarpal_4"));
SoHAnimJoint1539->setDEF(QString("hanim_r_carpometacarpal_4"));
SoHAnimJoint1539->setCenter(new float[]{-0.1951,0.8049,-0.0732});
SoHAnimJoint1539->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1539->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1540 = new SoHAnimSegment();
SoHAnimSegment1540->X3DNode::setName(QString("r_metacarpal_4"));
SoHAnimSegment1540->setDEF(QString("hanim_r_metacarpal_4"));
SoTransform* SoTransform1541 = new SoTransform();
SoTransform1541->setTranslation(new float[]{-0.1951,0.8049,-0.0732});
SoTransform* SoTransform1542 = new SoTransform();
//Empty Transform
SoShape* SoShape1543 = new SoShape();
SoShape1543->setUSE(QString("HAnimJointShape"));
SoTransform1542->addChild(*SoShape1543);

SoTransform1541->addChild(*SoTransform1542);

SoHAnimSegment1540->addChild(*SoTransform1541);

SoShape* SoShape1544 = new SoShape();
SoLineSet* SoLineSet1545 = new SoLineSet();
SoLineSet1545->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1546 = new SoCoordinate();
SoCoordinate1546->setPoint(new float[]{-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732}, 6);
SoLineSet1545->setCoord(*SoCoordinate1546);

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
SoColorRGBA* SoColorRGBA1547 = new SoColorRGBA();
SoColorRGBA1547->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1545->addChild(*SoColorRGBA1547);

SoShape1544->setGeometry(*SoLineSet1545);

SoHAnimSegment1540->addChild(*SoShape1544);

SoHAnimJoint1539->addChildren(*SoHAnimSegment1540);

SoHAnimJoint* SoHAnimJoint1548 = new SoHAnimJoint();
SoHAnimJoint1548->X3DNode::setName(QString("r_metacarpophalangeal_4"));
SoHAnimJoint1548->setDEF(QString("hanim_r_metacarpophalangeal_4"));
SoHAnimJoint1548->setCenter(new float[]{-0.1951,0.7845,-0.0732});
SoHAnimJoint1548->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1548->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1549 = new SoHAnimSegment();
SoHAnimSegment1549->X3DNode::setName(QString("r_carpal_proximal_phalanx_4"));
SoHAnimSegment1549->setDEF(QString("hanim_r_carpal_proximal_phalanx_4"));
SoTransform* SoTransform1550 = new SoTransform();
SoTransform1550->setTranslation(new float[]{-0.1951,0.7845,-0.0732});
SoTransform* SoTransform1551 = new SoTransform();
//Empty Transform
SoShape* SoShape1552 = new SoShape();
SoShape1552->setUSE(QString("HAnimJointShape"));
SoTransform1551->addChild(*SoShape1552);

SoTransform1550->addChild(*SoTransform1551);

SoHAnimSegment1549->addChild(*SoTransform1550);

SoShape* SoShape1553 = new SoShape();
SoLineSet* SoLineSet1554 = new SoLineSet();
SoLineSet1554->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1555 = new SoCoordinate();
SoCoordinate1555->setPoint(new float[]{-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716}, 6);
SoLineSet1554->setCoord(*SoCoordinate1555);

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
SoColorRGBA* SoColorRGBA1556 = new SoColorRGBA();
SoColorRGBA1556->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1554->addChild(*SoColorRGBA1556);

SoShape1553->setGeometry(*SoLineSet1554);

SoHAnimSegment1549->addChild(*SoShape1553);

SoHAnimJoint1548->addChildren(*SoHAnimSegment1549);

SoHAnimJoint* SoHAnimJoint1557 = new SoHAnimJoint();
SoHAnimJoint1557->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint1557->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint1557->setCenter(new float[]{-0.192,0.7318,-0.0716});
SoHAnimJoint1557->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1557->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1558 = new SoHAnimSegment();
SoHAnimSegment1558->X3DNode::setName(QString("r_carpal_middle_phalanx_4"));
SoHAnimSegment1558->setDEF(QString("hanim_r_carpal_middle_phalanx_4"));
SoTransform* SoTransform1559 = new SoTransform();
SoTransform1559->setTranslation(new float[]{-0.192,0.7318,-0.0716});
SoTransform* SoTransform1560 = new SoTransform();
//Empty Transform
SoShape* SoShape1561 = new SoShape();
SoShape1561->setUSE(QString("HAnimJointShape"));
SoTransform1560->addChild(*SoShape1561);

SoTransform1559->addChild(*SoTransform1560);

SoHAnimSegment1558->addChild(*SoTransform1559);

SoShape* SoShape1562 = new SoShape();
SoLineSet* SoLineSet1563 = new SoLineSet();
SoLineSet1563->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1564 = new SoCoordinate();
SoCoordinate1564->setPoint(new float[]{-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706}, 6);
SoLineSet1563->setCoord(*SoCoordinate1564);

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
SoColorRGBA* SoColorRGBA1565 = new SoColorRGBA();
SoColorRGBA1565->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1563->addChild(*SoColorRGBA1565);

SoShape1562->setGeometry(*SoLineSet1563);

SoHAnimSegment1558->addChild(*SoShape1562);

SoHAnimSite* SoHAnimSite1566 = new SoHAnimSite();
SoHAnimSite1566->X3DNode::setName(QString("r_carpal_distal_phalanx_4_tip"));
SoHAnimSite1566->setDEF(QString("hanim_r_carpal_distal_phalanx_4_tip"));
SoTouchSensor* SoTouchSensor1567 = new SoTouchSensor();
SoTouchSensor1567->setDescription(QString("HAnimSite r_carpal_distal_phalanx_4_tip"));
SoHAnimSite1566->addChild(*SoTouchSensor1567);

SoShape* SoShape1568 = new SoShape();
SoShape1568->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1566->addChild(*SoShape1568);

SoHAnimSegment1558->addChild(*SoHAnimSite1566);

SoHAnimJoint1557->addChildren(*SoHAnimSegment1558);

SoHAnimJoint* SoHAnimJoint1569 = new SoHAnimJoint();
SoHAnimJoint1569->X3DNode::setName(QString("r_carpal_distal_interphalangeal_4"));
SoHAnimJoint1569->setDEF(QString("hanim_r_carpal_distal_interphalangeal_4"));
SoHAnimJoint1569->setCenter(new float[]{-0.1908,0.7077,-0.0706});
SoHAnimJoint1569->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1569->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1557->addChildren(*SoHAnimJoint1569);

SoHAnimJoint1548->addChildren(*SoHAnimJoint1557);

SoHAnimJoint1539->addChildren(*SoHAnimJoint1548);

SoHAnimJoint1523->addChildren(*SoHAnimJoint1539);

SoHAnimJoint* SoHAnimJoint1570 = new SoHAnimJoint();
SoHAnimJoint1570->X3DNode::setName(QString("r_carpometacarpal_5"));
SoHAnimJoint1570->setDEF(QString("hanim_r_carpometacarpal_5"));
SoHAnimJoint1570->setCenter(new float[]{-0.1926,0.8096,-0.0975});
SoHAnimJoint1570->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1570->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1571 = new SoHAnimSegment();
SoHAnimSegment1571->X3DNode::setName(QString("r_metacarpal_5"));
SoHAnimSegment1571->setDEF(QString("hanim_r_metacarpal_5"));
SoTransform* SoTransform1572 = new SoTransform();
SoTransform1572->setTranslation(new float[]{-0.1926,0.8096,-0.0975});
SoTransform* SoTransform1573 = new SoTransform();
//Empty Transform
SoShape* SoShape1574 = new SoShape();
SoShape1574->setUSE(QString("HAnimJointShape"));
SoTransform1573->addChild(*SoShape1574);

SoTransform1572->addChild(*SoTransform1573);

SoHAnimSegment1571->addChild(*SoTransform1572);

SoShape* SoShape1575 = new SoShape();
SoLineSet* SoLineSet1576 = new SoLineSet();
SoLineSet1576->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1577 = new SoCoordinate();
SoCoordinate1577->setPoint(new float[]{-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975}, 6);
SoLineSet1576->setCoord(*SoCoordinate1577);

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
SoColorRGBA* SoColorRGBA1578 = new SoColorRGBA();
SoColorRGBA1578->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1576->addChild(*SoColorRGBA1578);

SoShape1575->setGeometry(*SoLineSet1576);

SoHAnimSegment1571->addChild(*SoShape1575);

SoHAnimJoint1570->addChildren(*SoHAnimSegment1571);

SoHAnimJoint* SoHAnimJoint1579 = new SoHAnimJoint();
SoHAnimJoint1579->X3DNode::setName(QString("r_metacarpophalangeal_5"));
SoHAnimJoint1579->setDEF(QString("hanim_r_metacarpophalangeal_5"));
SoHAnimJoint1579->setCenter(new float[]{-0.1926,0.7896,-0.0975});
SoHAnimJoint1579->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1579->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1580 = new SoHAnimSegment();
SoHAnimSegment1580->X3DNode::setName(QString("r_carpal_proximal_phalanx_5"));
SoHAnimSegment1580->setDEF(QString("hanim_r_carpal_proximal_phalanx_5"));
SoTransform* SoTransform1581 = new SoTransform();
SoTransform1581->setTranslation(new float[]{-0.1926,0.7896,-0.0975});
SoTransform* SoTransform1582 = new SoTransform();
//Empty Transform
SoShape* SoShape1583 = new SoShape();
SoShape1583->setUSE(QString("HAnimJointShape"));
SoTransform1582->addChild(*SoShape1583);

SoTransform1581->addChild(*SoTransform1582);

SoHAnimSegment1580->addChild(*SoTransform1581);

SoShape* SoShape1584 = new SoShape();
SoLineSet* SoLineSet1585 = new SoLineSet();
SoLineSet1585->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1586 = new SoCoordinate();
SoCoordinate1586->setPoint(new float[]{-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963}, 6);
SoLineSet1585->setCoord(*SoCoordinate1586);

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
SoColorRGBA* SoColorRGBA1587 = new SoColorRGBA();
SoColorRGBA1587->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1585->addChild(*SoColorRGBA1587);

SoShape1584->setGeometry(*SoLineSet1585);

SoHAnimSegment1580->addChild(*SoShape1584);

SoHAnimJoint1579->addChildren(*SoHAnimSegment1580);

SoHAnimJoint* SoHAnimJoint1588 = new SoHAnimJoint();
SoHAnimJoint1588->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint1588->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint1588->setCenter(new float[]{-0.1902,0.7483,-0.0963});
SoHAnimJoint1588->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1588->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1589 = new SoHAnimSegment();
SoHAnimSegment1589->X3DNode::setName(QString("r_carpal_middle_phalanx_5"));
SoHAnimSegment1589->setDEF(QString("hanim_r_carpal_middle_phalanx_5"));
SoTransform* SoTransform1590 = new SoTransform();
SoTransform1590->setTranslation(new float[]{-0.1902,0.7483,-0.0963});
SoTransform* SoTransform1591 = new SoTransform();
//Empty Transform
SoShape* SoShape1592 = new SoShape();
SoShape1592->setUSE(QString("HAnimJointShape"));
SoTransform1591->addChild(*SoShape1592);

SoTransform1590->addChild(*SoTransform1591);

SoHAnimSegment1589->addChild(*SoTransform1590);

SoShape* SoShape1593 = new SoShape();
SoLineSet* SoLineSet1594 = new SoLineSet();
SoLineSet1594->setVertexCount(new int32_t[]{2}, 1);
SoCoordinate* SoCoordinate1595 = new SoCoordinate();
SoCoordinate1595->setPoint(new float[]{-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096}, 6);
SoLineSet1594->setCoord(*SoCoordinate1595);

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
SoColorRGBA* SoColorRGBA1596 = new SoColorRGBA();
SoColorRGBA1596->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1594->addChild(*SoColorRGBA1596);

SoShape1593->setGeometry(*SoLineSet1594);

SoHAnimSegment1589->addChild(*SoShape1593);

SoHAnimSite* SoHAnimSite1597 = new SoHAnimSite();
SoHAnimSite1597->X3DNode::setName(QString("r_carpal_distal_phalanx_5_tip"));
SoHAnimSite1597->setDEF(QString("hanim_r_carpal_distal_phalanx_5_tip"));
SoTouchSensor* SoTouchSensor1598 = new SoTouchSensor();
SoTouchSensor1598->setDescription(QString("HAnimSite r_carpal_distal_phalanx_5_tip"));
SoHAnimSite1597->addChild(*SoTouchSensor1598);

SoShape* SoShape1599 = new SoShape();
SoShape1599->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1597->addChild(*SoShape1599);

SoHAnimSegment1589->addChild(*SoHAnimSite1597);

SoHAnimJoint1588->addChildren(*SoHAnimSegment1589);

SoHAnimJoint* SoHAnimJoint1600 = new SoHAnimJoint();
SoHAnimJoint1600->X3DNode::setName(QString("r_carpal_distal_interphalangeal_5"));
SoHAnimJoint1600->setDEF(QString("hanim_r_carpal_distal_interphalangeal_5"));
SoHAnimJoint1600->setCenter(new float[]{-0.1908,0.754,-0.096});
SoHAnimJoint1600->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1600->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1588->addChildren(*SoHAnimJoint1600);

SoHAnimJoint1579->addChildren(*SoHAnimJoint1588);

SoHAnimJoint1570->addChildren(*SoHAnimJoint1579);

SoHAnimJoint1523->addChildren(*SoHAnimJoint1570);

SoHAnimJoint1382->addChildren(*SoHAnimJoint1523);

SoHAnimJoint1370->addChildren(*SoHAnimJoint1382);

SoHAnimJoint1349->addChildren(*SoHAnimJoint1370);

SoHAnimJoint1334->addChildren(*SoHAnimJoint1349);

SoHAnimJoint1325->addChildren(*SoHAnimJoint1334);

SoHAnimJoint845->addChildren(*SoHAnimJoint1325);

SoHAnimJoint830->addChildren(*SoHAnimJoint845);

SoHAnimJoint821->addChildren(*SoHAnimJoint830);

SoHAnimJoint812->addChildren(*SoHAnimJoint821);

SoHAnimJoint803->addChildren(*SoHAnimJoint812);

SoHAnimJoint791->addChildren(*SoHAnimJoint803);

SoHAnimJoint770->addChildren(*SoHAnimJoint791);

SoHAnimJoint761->addChildren(*SoHAnimJoint770);

SoHAnimJoint752->addChildren(*SoHAnimJoint761);

SoHAnimJoint737->addChildren(*SoHAnimJoint752);

SoHAnimJoint725->addChildren(*SoHAnimJoint737);

SoHAnimJoint716->addChildren(*SoHAnimJoint725);

SoHAnimJoint707->addChildren(*SoHAnimJoint716);

SoHAnimJoint698->addChildren(*SoHAnimJoint707);

SoHAnimJoint680->addChildren(*SoHAnimJoint698);

SoHAnimJoint671->addChildren(*SoHAnimJoint680);

SoHAnimJoint662->addChildren(*SoHAnimJoint671);

SoHAnimJoint45->addChildren(*SoHAnimJoint662);

SoHAnimHumanoid43->setSkeleton(*SoHAnimJoint45);

SoHAnimJoint* SoHAnimJoint1601 = new SoHAnimJoint();
SoHAnimJoint1601->setUSE(QString("hanim_humanoid_root"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1601);

SoHAnimJoint* SoHAnimJoint1602 = new SoHAnimJoint();
SoHAnimJoint1602->setUSE(QString("hanim_sacroiliac"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1602);

SoHAnimJoint* SoHAnimJoint1603 = new SoHAnimJoint();
SoHAnimJoint1603->setUSE(QString("hanim_l_hip"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1603);

SoHAnimJoint* SoHAnimJoint1604 = new SoHAnimJoint();
SoHAnimJoint1604->setUSE(QString("hanim_l_knee"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1604);

SoHAnimJoint* SoHAnimJoint1605 = new SoHAnimJoint();
SoHAnimJoint1605->setUSE(QString("hanim_l_talocrural"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1605);

SoHAnimJoint* SoHAnimJoint1606 = new SoHAnimJoint();
SoHAnimJoint1606->setUSE(QString("hanim_l_talocalcaneonavicular"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1606);

SoHAnimJoint* SoHAnimJoint1607 = new SoHAnimJoint();
SoHAnimJoint1607->setUSE(QString("hanim_l_cuneonavicular_1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1607);

SoHAnimJoint* SoHAnimJoint1608 = new SoHAnimJoint();
SoHAnimJoint1608->setUSE(QString("hanim_l_tarsometatarsal_1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1608);

SoHAnimJoint* SoHAnimJoint1609 = new SoHAnimJoint();
SoHAnimJoint1609->setUSE(QString("hanim_l_metatarsophalangeal_1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1609);

SoHAnimJoint* SoHAnimJoint1610 = new SoHAnimJoint();
SoHAnimJoint1610->setUSE(QString("hanim_l_tarsal_interphalangeal_1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1610);

SoHAnimJoint* SoHAnimJoint1611 = new SoHAnimJoint();
SoHAnimJoint1611->setUSE(QString("hanim_l_cuneonavicular_2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1611);

SoHAnimJoint* SoHAnimJoint1612 = new SoHAnimJoint();
SoHAnimJoint1612->setUSE(QString("hanim_l_tarsometatarsal_2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1612);

SoHAnimJoint* SoHAnimJoint1613 = new SoHAnimJoint();
SoHAnimJoint1613->setUSE(QString("hanim_l_metatarsophalangeal_2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1613);

SoHAnimJoint* SoHAnimJoint1614 = new SoHAnimJoint();
SoHAnimJoint1614->setUSE(QString("hanim_l_tarsal_proximal_interphalangeal_2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1614);

SoHAnimJoint* SoHAnimJoint1615 = new SoHAnimJoint();
SoHAnimJoint1615->setUSE(QString("hanim_l_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1615);

SoHAnimJoint* SoHAnimJoint1616 = new SoHAnimJoint();
SoHAnimJoint1616->setUSE(QString("hanim_l_cuneonavicular_3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1616);

SoHAnimJoint* SoHAnimJoint1617 = new SoHAnimJoint();
SoHAnimJoint1617->setUSE(QString("hanim_l_tarsometatarsal_3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1617);

SoHAnimJoint* SoHAnimJoint1618 = new SoHAnimJoint();
SoHAnimJoint1618->setUSE(QString("hanim_l_metatarsophalangeal_3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1618);

SoHAnimJoint* SoHAnimJoint1619 = new SoHAnimJoint();
SoHAnimJoint1619->setUSE(QString("hanim_l_tarsal_proximal_interphalangeal_3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1619);

SoHAnimJoint* SoHAnimJoint1620 = new SoHAnimJoint();
SoHAnimJoint1620->setUSE(QString("hanim_l_tarsal_distal_interphalangeal_3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1620);

SoHAnimJoint* SoHAnimJoint1621 = new SoHAnimJoint();
SoHAnimJoint1621->setUSE(QString("hanim_l_calcaneocuboid"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1621);

SoHAnimJoint* SoHAnimJoint1622 = new SoHAnimJoint();
SoHAnimJoint1622->setUSE(QString("hanim_l_transversetarsal"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1622);

SoHAnimJoint* SoHAnimJoint1623 = new SoHAnimJoint();
SoHAnimJoint1623->setUSE(QString("hanim_l_tarsometatarsal_4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1623);

SoHAnimJoint* SoHAnimJoint1624 = new SoHAnimJoint();
SoHAnimJoint1624->setUSE(QString("hanim_l_metatarsophalangeal_4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1624);

SoHAnimJoint* SoHAnimJoint1625 = new SoHAnimJoint();
SoHAnimJoint1625->setUSE(QString("hanim_l_tarsal_proximal_interphalangeal_4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1625);

SoHAnimJoint* SoHAnimJoint1626 = new SoHAnimJoint();
SoHAnimJoint1626->setUSE(QString("hanim_l_tarsal_distal_interphalangeal_4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1626);

SoHAnimJoint* SoHAnimJoint1627 = new SoHAnimJoint();
SoHAnimJoint1627->setUSE(QString("hanim_l_tarsometatarsal_5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1627);

SoHAnimJoint* SoHAnimJoint1628 = new SoHAnimJoint();
SoHAnimJoint1628->setUSE(QString("hanim_l_metatarsophalangeal_5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1628);

SoHAnimJoint* SoHAnimJoint1629 = new SoHAnimJoint();
SoHAnimJoint1629->setUSE(QString("hanim_l_tarsal_proximal_interphalangeal_5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1629);

SoHAnimJoint* SoHAnimJoint1630 = new SoHAnimJoint();
SoHAnimJoint1630->setUSE(QString("hanim_l_tarsal_distal_interphalangeal_5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1630);

SoHAnimJoint* SoHAnimJoint1631 = new SoHAnimJoint();
SoHAnimJoint1631->setUSE(QString("hanim_r_hip"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1631);

SoHAnimJoint* SoHAnimJoint1632 = new SoHAnimJoint();
SoHAnimJoint1632->setUSE(QString("hanim_r_knee"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1632);

SoHAnimJoint* SoHAnimJoint1633 = new SoHAnimJoint();
SoHAnimJoint1633->setUSE(QString("hanim_r_talocrural"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1633);

SoHAnimJoint* SoHAnimJoint1634 = new SoHAnimJoint();
SoHAnimJoint1634->setUSE(QString("hanim_r_talocalcaneonavicular"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1634);

SoHAnimJoint* SoHAnimJoint1635 = new SoHAnimJoint();
SoHAnimJoint1635->setUSE(QString("hanim_r_cuneonavicular_1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1635);

SoHAnimJoint* SoHAnimJoint1636 = new SoHAnimJoint();
SoHAnimJoint1636->setUSE(QString("hanim_r_tarsometatarsal_1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1636);

SoHAnimJoint* SoHAnimJoint1637 = new SoHAnimJoint();
SoHAnimJoint1637->setUSE(QString("hanim_r_metatarsophalangeal_1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1637);

SoHAnimJoint* SoHAnimJoint1638 = new SoHAnimJoint();
SoHAnimJoint1638->setUSE(QString("hanim_r_tarsal_interphalangeal_1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1638);

SoHAnimJoint* SoHAnimJoint1639 = new SoHAnimJoint();
SoHAnimJoint1639->setUSE(QString("hanim_r_cuneonavicular_2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1639);

SoHAnimJoint* SoHAnimJoint1640 = new SoHAnimJoint();
SoHAnimJoint1640->setUSE(QString("hanim_r_tarsometatarsal_2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1640);

SoHAnimJoint* SoHAnimJoint1641 = new SoHAnimJoint();
SoHAnimJoint1641->setUSE(QString("hanim_r_metatarsophalangeal_2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1641);

SoHAnimJoint* SoHAnimJoint1642 = new SoHAnimJoint();
SoHAnimJoint1642->setUSE(QString("hanim_r_tarsal_proximal_interphalangeal_2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1642);

SoHAnimJoint* SoHAnimJoint1643 = new SoHAnimJoint();
SoHAnimJoint1643->setUSE(QString("hanim_r_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1643);

SoHAnimJoint* SoHAnimJoint1644 = new SoHAnimJoint();
SoHAnimJoint1644->setUSE(QString("hanim_r_cuneonavicular_3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1644);

SoHAnimJoint* SoHAnimJoint1645 = new SoHAnimJoint();
SoHAnimJoint1645->setUSE(QString("hanim_r_tarsometatarsal_3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1645);

SoHAnimJoint* SoHAnimJoint1646 = new SoHAnimJoint();
SoHAnimJoint1646->setUSE(QString("hanim_r_metatarsophalangeal_3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1646);

SoHAnimJoint* SoHAnimJoint1647 = new SoHAnimJoint();
SoHAnimJoint1647->setUSE(QString("hanim_r_tarsal_proximal_interphalangeal_3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1647);

SoHAnimJoint* SoHAnimJoint1648 = new SoHAnimJoint();
SoHAnimJoint1648->setUSE(QString("hanim_r_tarsal_distal_interphalangeal_3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1648);

SoHAnimJoint* SoHAnimJoint1649 = new SoHAnimJoint();
SoHAnimJoint1649->setUSE(QString("hanim_r_calcaneocuboid"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1649);

SoHAnimJoint* SoHAnimJoint1650 = new SoHAnimJoint();
SoHAnimJoint1650->setUSE(QString("hanim_r_transversetarsal"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1650);

SoHAnimJoint* SoHAnimJoint1651 = new SoHAnimJoint();
SoHAnimJoint1651->setUSE(QString("hanim_r_tarsometatarsal_4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1651);

SoHAnimJoint* SoHAnimJoint1652 = new SoHAnimJoint();
SoHAnimJoint1652->setUSE(QString("hanim_r_metatarsophalangeal_4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1652);

SoHAnimJoint* SoHAnimJoint1653 = new SoHAnimJoint();
SoHAnimJoint1653->setUSE(QString("hanim_r_tarsal_proximal_interphalangeal_4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1653);

SoHAnimJoint* SoHAnimJoint1654 = new SoHAnimJoint();
SoHAnimJoint1654->setUSE(QString("hanim_r_tarsal_distal_interphalangeal_4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1654);

SoHAnimJoint* SoHAnimJoint1655 = new SoHAnimJoint();
SoHAnimJoint1655->setUSE(QString("hanim_r_tarsometatarsal_5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1655);

SoHAnimJoint* SoHAnimJoint1656 = new SoHAnimJoint();
SoHAnimJoint1656->setUSE(QString("hanim_r_metatarsophalangeal_5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1656);

SoHAnimJoint* SoHAnimJoint1657 = new SoHAnimJoint();
SoHAnimJoint1657->setUSE(QString("hanim_r_tarsal_proximal_interphalangeal_5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1657);

SoHAnimJoint* SoHAnimJoint1658 = new SoHAnimJoint();
SoHAnimJoint1658->setUSE(QString("hanim_r_tarsal_distal_interphalangeal_5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1658);

SoHAnimJoint* SoHAnimJoint1659 = new SoHAnimJoint();
SoHAnimJoint1659->setUSE(QString("hanim_vl5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1659);

SoHAnimJoint* SoHAnimJoint1660 = new SoHAnimJoint();
SoHAnimJoint1660->setUSE(QString("hanim_vl4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1660);

SoHAnimJoint* SoHAnimJoint1661 = new SoHAnimJoint();
SoHAnimJoint1661->setUSE(QString("hanim_vl3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1661);

SoHAnimJoint* SoHAnimJoint1662 = new SoHAnimJoint();
SoHAnimJoint1662->setUSE(QString("hanim_vl2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1662);

SoHAnimJoint* SoHAnimJoint1663 = new SoHAnimJoint();
SoHAnimJoint1663->setUSE(QString("hanim_vl1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1663);

SoHAnimJoint* SoHAnimJoint1664 = new SoHAnimJoint();
SoHAnimJoint1664->setUSE(QString("hanim_vt12"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1664);

SoHAnimJoint* SoHAnimJoint1665 = new SoHAnimJoint();
SoHAnimJoint1665->setUSE(QString("hanim_vt11"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1665);

SoHAnimJoint* SoHAnimJoint1666 = new SoHAnimJoint();
SoHAnimJoint1666->setUSE(QString("hanim_vt10"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1666);

SoHAnimJoint* SoHAnimJoint1667 = new SoHAnimJoint();
SoHAnimJoint1667->setUSE(QString("hanim_vt9"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1667);

SoHAnimJoint* SoHAnimJoint1668 = new SoHAnimJoint();
SoHAnimJoint1668->setUSE(QString("hanim_vt8"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1668);

SoHAnimJoint* SoHAnimJoint1669 = new SoHAnimJoint();
SoHAnimJoint1669->setUSE(QString("hanim_vt7"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1669);

SoHAnimJoint* SoHAnimJoint1670 = new SoHAnimJoint();
SoHAnimJoint1670->setUSE(QString("hanim_vt6"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1670);

SoHAnimJoint* SoHAnimJoint1671 = new SoHAnimJoint();
SoHAnimJoint1671->setUSE(QString("hanim_vt5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1671);

SoHAnimJoint* SoHAnimJoint1672 = new SoHAnimJoint();
SoHAnimJoint1672->setUSE(QString("hanim_vt4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1672);

SoHAnimJoint* SoHAnimJoint1673 = new SoHAnimJoint();
SoHAnimJoint1673->setUSE(QString("hanim_vt3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1673);

SoHAnimJoint* SoHAnimJoint1674 = new SoHAnimJoint();
SoHAnimJoint1674->setUSE(QString("hanim_vt2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1674);

SoHAnimJoint* SoHAnimJoint1675 = new SoHAnimJoint();
SoHAnimJoint1675->setUSE(QString("hanim_vt1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1675);

SoHAnimJoint* SoHAnimJoint1676 = new SoHAnimJoint();
SoHAnimJoint1676->setUSE(QString("hanim_vc7"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1676);

SoHAnimJoint* SoHAnimJoint1677 = new SoHAnimJoint();
SoHAnimJoint1677->setUSE(QString("hanim_vc6"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1677);

SoHAnimJoint* SoHAnimJoint1678 = new SoHAnimJoint();
SoHAnimJoint1678->setUSE(QString("hanim_vc5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1678);

SoHAnimJoint* SoHAnimJoint1679 = new SoHAnimJoint();
SoHAnimJoint1679->setUSE(QString("hanim_vc4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1679);

SoHAnimJoint* SoHAnimJoint1680 = new SoHAnimJoint();
SoHAnimJoint1680->setUSE(QString("hanim_vc3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1680);

SoHAnimJoint* SoHAnimJoint1681 = new SoHAnimJoint();
SoHAnimJoint1681->setUSE(QString("hanim_vc2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1681);

SoHAnimJoint* SoHAnimJoint1682 = new SoHAnimJoint();
SoHAnimJoint1682->setUSE(QString("hanim_vc1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1682);

SoHAnimJoint* SoHAnimJoint1683 = new SoHAnimJoint();
SoHAnimJoint1683->setUSE(QString("hanim_skullbase"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1683);

SoHAnimJoint* SoHAnimJoint1684 = new SoHAnimJoint();
SoHAnimJoint1684->setUSE(QString("hanim_l_eyelid_joint"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1684);

SoHAnimJoint* SoHAnimJoint1685 = new SoHAnimJoint();
SoHAnimJoint1685->setUSE(QString("hanim_r_eyelid_joint"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1685);

SoHAnimJoint* SoHAnimJoint1686 = new SoHAnimJoint();
SoHAnimJoint1686->setUSE(QString("hanim_l_eyeball_joint"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1686);

SoHAnimJoint* SoHAnimJoint1687 = new SoHAnimJoint();
SoHAnimJoint1687->setUSE(QString("hanim_r_eyeball_joint"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1687);

SoHAnimJoint* SoHAnimJoint1688 = new SoHAnimJoint();
SoHAnimJoint1688->setUSE(QString("hanim_l_eyebrow_joint"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1688);

SoHAnimJoint* SoHAnimJoint1689 = new SoHAnimJoint();
SoHAnimJoint1689->setUSE(QString("hanim_r_eyebrow_joint"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1689);

SoHAnimJoint* SoHAnimJoint1690 = new SoHAnimJoint();
SoHAnimJoint1690->setUSE(QString("hanim_temporomandibular"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1690);

SoHAnimJoint* SoHAnimJoint1691 = new SoHAnimJoint();
SoHAnimJoint1691->setUSE(QString("hanim_l_sternoclavicular"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1691);

SoHAnimJoint* SoHAnimJoint1692 = new SoHAnimJoint();
SoHAnimJoint1692->setUSE(QString("hanim_l_acromioclavicular"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1692);

SoHAnimJoint* SoHAnimJoint1693 = new SoHAnimJoint();
SoHAnimJoint1693->setUSE(QString("hanim_l_shoulder"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1693);

SoHAnimJoint* SoHAnimJoint1694 = new SoHAnimJoint();
SoHAnimJoint1694->setUSE(QString("hanim_l_elbow"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1694);

SoHAnimJoint* SoHAnimJoint1695 = new SoHAnimJoint();
SoHAnimJoint1695->setUSE(QString("hanim_l_radiocarpal"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1695);

SoHAnimJoint* SoHAnimJoint1696 = new SoHAnimJoint();
SoHAnimJoint1696->setUSE(QString("hanim_l_midcarpal_1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1696);

SoHAnimJoint* SoHAnimJoint1697 = new SoHAnimJoint();
SoHAnimJoint1697->setUSE(QString("hanim_l_carpometacarpal_1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1697);

SoHAnimJoint* SoHAnimJoint1698 = new SoHAnimJoint();
SoHAnimJoint1698->setUSE(QString("hanim_l_metacarpophalangeal_1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1698);

SoHAnimJoint* SoHAnimJoint1699 = new SoHAnimJoint();
SoHAnimJoint1699->setUSE(QString("hanim_l_carpal_interphalangeal_1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1699);

SoHAnimJoint* SoHAnimJoint1700 = new SoHAnimJoint();
SoHAnimJoint1700->setUSE(QString("hanim_l_midcarpal_2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1700);

SoHAnimJoint* SoHAnimJoint1701 = new SoHAnimJoint();
SoHAnimJoint1701->setUSE(QString("hanim_l_carpometacarpal_2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1701);

SoHAnimJoint* SoHAnimJoint1702 = new SoHAnimJoint();
SoHAnimJoint1702->setUSE(QString("hanim_l_metacarpophalangeal_2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1702);

SoHAnimJoint* SoHAnimJoint1703 = new SoHAnimJoint();
SoHAnimJoint1703->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1703);

SoHAnimJoint* SoHAnimJoint1704 = new SoHAnimJoint();
SoHAnimJoint1704->setUSE(QString("hanim_l_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1704);

SoHAnimJoint* SoHAnimJoint1705 = new SoHAnimJoint();
SoHAnimJoint1705->setUSE(QString("hanim_l_midcarpal_3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1705);

SoHAnimJoint* SoHAnimJoint1706 = new SoHAnimJoint();
SoHAnimJoint1706->setUSE(QString("hanim_l_carpometacarpal_3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1706);

SoHAnimJoint* SoHAnimJoint1707 = new SoHAnimJoint();
SoHAnimJoint1707->setUSE(QString("hanim_l_metacarpophalangeal_3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1707);

SoHAnimJoint* SoHAnimJoint1708 = new SoHAnimJoint();
SoHAnimJoint1708->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1708);

SoHAnimJoint* SoHAnimJoint1709 = new SoHAnimJoint();
SoHAnimJoint1709->setUSE(QString("hanim_l_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1709);

SoHAnimJoint* SoHAnimJoint1710 = new SoHAnimJoint();
SoHAnimJoint1710->setUSE(QString("hanim_l_midcarpal_4_5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1710);

SoHAnimJoint* SoHAnimJoint1711 = new SoHAnimJoint();
SoHAnimJoint1711->setUSE(QString("hanim_l_carpometacarpal_4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1711);

SoHAnimJoint* SoHAnimJoint1712 = new SoHAnimJoint();
SoHAnimJoint1712->setUSE(QString("hanim_l_metacarpophalangeal_4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1712);

SoHAnimJoint* SoHAnimJoint1713 = new SoHAnimJoint();
SoHAnimJoint1713->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1713);

SoHAnimJoint* SoHAnimJoint1714 = new SoHAnimJoint();
SoHAnimJoint1714->setUSE(QString("hanim_l_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1714);

SoHAnimJoint* SoHAnimJoint1715 = new SoHAnimJoint();
SoHAnimJoint1715->setUSE(QString("hanim_l_carpometacarpal_5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1715);

SoHAnimJoint* SoHAnimJoint1716 = new SoHAnimJoint();
SoHAnimJoint1716->setUSE(QString("hanim_l_metacarpophalangeal_5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1716);

SoHAnimJoint* SoHAnimJoint1717 = new SoHAnimJoint();
SoHAnimJoint1717->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1717);

SoHAnimJoint* SoHAnimJoint1718 = new SoHAnimJoint();
SoHAnimJoint1718->setUSE(QString("hanim_l_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1718);

SoHAnimJoint* SoHAnimJoint1719 = new SoHAnimJoint();
SoHAnimJoint1719->setUSE(QString("hanim_r_sternoclavicular"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1719);

SoHAnimJoint* SoHAnimJoint1720 = new SoHAnimJoint();
SoHAnimJoint1720->setUSE(QString("hanim_r_acromioclavicular"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1720);

SoHAnimJoint* SoHAnimJoint1721 = new SoHAnimJoint();
SoHAnimJoint1721->setUSE(QString("hanim_r_shoulder"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1721);

SoHAnimJoint* SoHAnimJoint1722 = new SoHAnimJoint();
SoHAnimJoint1722->setUSE(QString("hanim_r_elbow"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1722);

SoHAnimJoint* SoHAnimJoint1723 = new SoHAnimJoint();
SoHAnimJoint1723->setUSE(QString("hanim_r_radiocarpal"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1723);

SoHAnimJoint* SoHAnimJoint1724 = new SoHAnimJoint();
SoHAnimJoint1724->setUSE(QString("hanim_r_midcarpal_1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1724);

SoHAnimJoint* SoHAnimJoint1725 = new SoHAnimJoint();
SoHAnimJoint1725->setUSE(QString("hanim_r_carpometacarpal_1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1725);

SoHAnimJoint* SoHAnimJoint1726 = new SoHAnimJoint();
SoHAnimJoint1726->setUSE(QString("hanim_r_metacarpophalangeal_1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1726);

SoHAnimJoint* SoHAnimJoint1727 = new SoHAnimJoint();
SoHAnimJoint1727->setUSE(QString("hanim_r_carpal_interphalangeal_1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1727);

SoHAnimJoint* SoHAnimJoint1728 = new SoHAnimJoint();
SoHAnimJoint1728->setUSE(QString("hanim_r_midcarpal_2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1728);

SoHAnimJoint* SoHAnimJoint1729 = new SoHAnimJoint();
SoHAnimJoint1729->setUSE(QString("hanim_r_carpometacarpal_2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1729);

SoHAnimJoint* SoHAnimJoint1730 = new SoHAnimJoint();
SoHAnimJoint1730->setUSE(QString("hanim_r_metacarpophalangeal_2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1730);

SoHAnimJoint* SoHAnimJoint1731 = new SoHAnimJoint();
SoHAnimJoint1731->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1731);

SoHAnimJoint* SoHAnimJoint1732 = new SoHAnimJoint();
SoHAnimJoint1732->setUSE(QString("hanim_r_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1732);

SoHAnimJoint* SoHAnimJoint1733 = new SoHAnimJoint();
SoHAnimJoint1733->setUSE(QString("hanim_r_midcarpal_3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1733);

SoHAnimJoint* SoHAnimJoint1734 = new SoHAnimJoint();
SoHAnimJoint1734->setUSE(QString("hanim_r_carpometacarpal_3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1734);

SoHAnimJoint* SoHAnimJoint1735 = new SoHAnimJoint();
SoHAnimJoint1735->setUSE(QString("hanim_r_metacarpophalangeal_3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1735);

SoHAnimJoint* SoHAnimJoint1736 = new SoHAnimJoint();
SoHAnimJoint1736->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1736);

SoHAnimJoint* SoHAnimJoint1737 = new SoHAnimJoint();
SoHAnimJoint1737->setUSE(QString("hanim_r_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1737);

SoHAnimJoint* SoHAnimJoint1738 = new SoHAnimJoint();
SoHAnimJoint1738->setUSE(QString("hanim_r_midcarpal_4_5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1738);

SoHAnimJoint* SoHAnimJoint1739 = new SoHAnimJoint();
SoHAnimJoint1739->setUSE(QString("hanim_r_carpometacarpal_4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1739);

SoHAnimJoint* SoHAnimJoint1740 = new SoHAnimJoint();
SoHAnimJoint1740->setUSE(QString("hanim_r_metacarpophalangeal_4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1740);

SoHAnimJoint* SoHAnimJoint1741 = new SoHAnimJoint();
SoHAnimJoint1741->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1741);

SoHAnimJoint* SoHAnimJoint1742 = new SoHAnimJoint();
SoHAnimJoint1742->setUSE(QString("hanim_r_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1742);

SoHAnimJoint* SoHAnimJoint1743 = new SoHAnimJoint();
SoHAnimJoint1743->setUSE(QString("hanim_r_carpometacarpal_5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1743);

SoHAnimJoint* SoHAnimJoint1744 = new SoHAnimJoint();
SoHAnimJoint1744->setUSE(QString("hanim_r_metacarpophalangeal_5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1744);

SoHAnimJoint* SoHAnimJoint1745 = new SoHAnimJoint();
SoHAnimJoint1745->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1745);

SoHAnimJoint* SoHAnimJoint1746 = new SoHAnimJoint();
SoHAnimJoint1746->setUSE(QString("hanim_r_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1746);

SoHAnimSegment* SoHAnimSegment1747 = new SoHAnimSegment();
SoHAnimSegment1747->setUSE(QString("hanim_sacrum"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1747);

SoHAnimSegment* SoHAnimSegment1748 = new SoHAnimSegment();
SoHAnimSegment1748->setUSE(QString("hanim_pelvis"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1748);

SoHAnimSegment* SoHAnimSegment1749 = new SoHAnimSegment();
SoHAnimSegment1749->setUSE(QString("hanim_l_thigh"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1749);

SoHAnimSegment* SoHAnimSegment1750 = new SoHAnimSegment();
SoHAnimSegment1750->setUSE(QString("hanim_l_calf"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1750);

SoHAnimSegment* SoHAnimSegment1751 = new SoHAnimSegment();
SoHAnimSegment1751->setUSE(QString("hanim_l_talus"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1751);

SoHAnimSegment* SoHAnimSegment1752 = new SoHAnimSegment();
SoHAnimSegment1752->setUSE(QString("hanim_l_navicular"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1752);

SoHAnimSegment* SoHAnimSegment1753 = new SoHAnimSegment();
SoHAnimSegment1753->setUSE(QString("hanim_l_cuneiform_1"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1753);

SoHAnimSegment* SoHAnimSegment1754 = new SoHAnimSegment();
SoHAnimSegment1754->setUSE(QString("hanim_l_metatarsal_1"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1754);

SoHAnimSegment* SoHAnimSegment1755 = new SoHAnimSegment();
SoHAnimSegment1755->setUSE(QString("hanim_l_tarsal_proximal_phalanx_1"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1755);

SoHAnimSegment* SoHAnimSegment1756 = new SoHAnimSegment();
SoHAnimSegment1756->setUSE(QString("hanim_l_cuneiform_2"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1756);

SoHAnimSegment* SoHAnimSegment1757 = new SoHAnimSegment();
SoHAnimSegment1757->setUSE(QString("hanim_l_metatarsal_2"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1757);

SoHAnimSegment* SoHAnimSegment1758 = new SoHAnimSegment();
SoHAnimSegment1758->setUSE(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1758);

SoHAnimSegment* SoHAnimSegment1759 = new SoHAnimSegment();
SoHAnimSegment1759->setUSE(QString("hanim_l_tarsal_middle_phalanx_2"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1759);

SoHAnimSegment* SoHAnimSegment1760 = new SoHAnimSegment();
SoHAnimSegment1760->setUSE(QString("hanim_l_cuneiform_3"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1760);

SoHAnimSegment* SoHAnimSegment1761 = new SoHAnimSegment();
SoHAnimSegment1761->setUSE(QString("hanim_l_metatarsal_3"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1761);

SoHAnimSegment* SoHAnimSegment1762 = new SoHAnimSegment();
SoHAnimSegment1762->setUSE(QString("hanim_l_tarsal_proximal_phalanx_3"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1762);

SoHAnimSegment* SoHAnimSegment1763 = new SoHAnimSegment();
SoHAnimSegment1763->setUSE(QString("hanim_l_tarsal_middle_phalanx_3"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1763);

SoHAnimSegment* SoHAnimSegment1764 = new SoHAnimSegment();
SoHAnimSegment1764->setUSE(QString("hanim_l_calcaneus"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1764);

SoHAnimSegment* SoHAnimSegment1765 = new SoHAnimSegment();
SoHAnimSegment1765->setUSE(QString("hanim_l_cuboid"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1765);

SoHAnimSegment* SoHAnimSegment1766 = new SoHAnimSegment();
SoHAnimSegment1766->setUSE(QString("hanim_l_metatarsal_4"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1766);

SoHAnimSegment* SoHAnimSegment1767 = new SoHAnimSegment();
SoHAnimSegment1767->setUSE(QString("hanim_l_tarsal_proximal_phalanx_4"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1767);

SoHAnimSegment* SoHAnimSegment1768 = new SoHAnimSegment();
SoHAnimSegment1768->setUSE(QString("hanim_l_tarsal_middle_phalanx_4"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1768);

SoHAnimSegment* SoHAnimSegment1769 = new SoHAnimSegment();
SoHAnimSegment1769->setUSE(QString("hanim_l_metatarsal_5"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1769);

SoHAnimSegment* SoHAnimSegment1770 = new SoHAnimSegment();
SoHAnimSegment1770->setUSE(QString("hanim_l_tarsal_proximal_phalanx_5"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1770);

SoHAnimSegment* SoHAnimSegment1771 = new SoHAnimSegment();
SoHAnimSegment1771->setUSE(QString("hanim_l_tarsal_middle_phalanx_5"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1771);

SoHAnimSegment* SoHAnimSegment1772 = new SoHAnimSegment();
SoHAnimSegment1772->setUSE(QString("hanim_r_thigh"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1772);

SoHAnimSegment* SoHAnimSegment1773 = new SoHAnimSegment();
SoHAnimSegment1773->setUSE(QString("hanim_r_calf"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1773);

SoHAnimSegment* SoHAnimSegment1774 = new SoHAnimSegment();
SoHAnimSegment1774->setUSE(QString("hanim_r_talus"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1774);

SoHAnimSegment* SoHAnimSegment1775 = new SoHAnimSegment();
SoHAnimSegment1775->setUSE(QString("hanim_r_navicular"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1775);

SoHAnimSegment* SoHAnimSegment1776 = new SoHAnimSegment();
SoHAnimSegment1776->setUSE(QString("hanim_r_cuneiform_1"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1776);

SoHAnimSegment* SoHAnimSegment1777 = new SoHAnimSegment();
SoHAnimSegment1777->setUSE(QString("hanim_r_metatarsal_1"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1777);

SoHAnimSegment* SoHAnimSegment1778 = new SoHAnimSegment();
SoHAnimSegment1778->setUSE(QString("hanim_r_tarsal_proximal_phalanx_1"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1778);

SoHAnimSegment* SoHAnimSegment1779 = new SoHAnimSegment();
SoHAnimSegment1779->setUSE(QString("hanim_r_cuneiform_2"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1779);

SoHAnimSegment* SoHAnimSegment1780 = new SoHAnimSegment();
SoHAnimSegment1780->setUSE(QString("hanim_r_metatarsal_2"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1780);

SoHAnimSegment* SoHAnimSegment1781 = new SoHAnimSegment();
SoHAnimSegment1781->setUSE(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1781);

SoHAnimSegment* SoHAnimSegment1782 = new SoHAnimSegment();
SoHAnimSegment1782->setUSE(QString("hanim_r_tarsal_middle_phalanx_2"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1782);

SoHAnimSegment* SoHAnimSegment1783 = new SoHAnimSegment();
SoHAnimSegment1783->setUSE(QString("hanim_r_cuneiform_3"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1783);

SoHAnimSegment* SoHAnimSegment1784 = new SoHAnimSegment();
SoHAnimSegment1784->setUSE(QString("hanim_r_metatarsal_3"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1784);

SoHAnimSegment* SoHAnimSegment1785 = new SoHAnimSegment();
SoHAnimSegment1785->setUSE(QString("hanim_r_tarsal_proximal_phalanx_3"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1785);

SoHAnimSegment* SoHAnimSegment1786 = new SoHAnimSegment();
SoHAnimSegment1786->setUSE(QString("hanim_r_tarsal_middle_phalanx_3"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1786);

SoHAnimSegment* SoHAnimSegment1787 = new SoHAnimSegment();
SoHAnimSegment1787->setUSE(QString("hanim_r_calcaneus"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1787);

SoHAnimSegment* SoHAnimSegment1788 = new SoHAnimSegment();
SoHAnimSegment1788->setUSE(QString("hanim_r_cuboid"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1788);

SoHAnimSegment* SoHAnimSegment1789 = new SoHAnimSegment();
SoHAnimSegment1789->setUSE(QString("hanim_r_metatarsal_4"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1789);

SoHAnimSegment* SoHAnimSegment1790 = new SoHAnimSegment();
SoHAnimSegment1790->setUSE(QString("hanim_r_tarsal_proximal_phalanx_4"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1790);

SoHAnimSegment* SoHAnimSegment1791 = new SoHAnimSegment();
SoHAnimSegment1791->setUSE(QString("hanim_r_tarsal_middle_phalanx_4"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1791);

SoHAnimSegment* SoHAnimSegment1792 = new SoHAnimSegment();
SoHAnimSegment1792->setUSE(QString("hanim_r_metatarsal_5"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1792);

SoHAnimSegment* SoHAnimSegment1793 = new SoHAnimSegment();
SoHAnimSegment1793->setUSE(QString("hanim_r_tarsal_proximal_phalanx_5"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1793);

SoHAnimSegment* SoHAnimSegment1794 = new SoHAnimSegment();
SoHAnimSegment1794->setUSE(QString("hanim_r_tarsal_middle_phalanx_5"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1794);

SoHAnimSegment* SoHAnimSegment1795 = new SoHAnimSegment();
SoHAnimSegment1795->setUSE(QString("hanim_l5"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1795);

SoHAnimSegment* SoHAnimSegment1796 = new SoHAnimSegment();
SoHAnimSegment1796->setUSE(QString("hanim_l4"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1796);

SoHAnimSegment* SoHAnimSegment1797 = new SoHAnimSegment();
SoHAnimSegment1797->setUSE(QString("hanim_l3"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1797);

SoHAnimSegment* SoHAnimSegment1798 = new SoHAnimSegment();
SoHAnimSegment1798->setUSE(QString("hanim_l2"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1798);

SoHAnimSegment* SoHAnimSegment1799 = new SoHAnimSegment();
SoHAnimSegment1799->setUSE(QString("hanim_l1"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1799);

SoHAnimSegment* SoHAnimSegment1800 = new SoHAnimSegment();
SoHAnimSegment1800->setUSE(QString("hanim_t12"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1800);

SoHAnimSegment* SoHAnimSegment1801 = new SoHAnimSegment();
SoHAnimSegment1801->setUSE(QString("hanim_t11"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1801);

SoHAnimSegment* SoHAnimSegment1802 = new SoHAnimSegment();
SoHAnimSegment1802->setUSE(QString("hanim_t10"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1802);

SoHAnimSegment* SoHAnimSegment1803 = new SoHAnimSegment();
SoHAnimSegment1803->setUSE(QString("hanim_t9"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1803);

SoHAnimSegment* SoHAnimSegment1804 = new SoHAnimSegment();
SoHAnimSegment1804->setUSE(QString("hanim_t8"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1804);

SoHAnimSegment* SoHAnimSegment1805 = new SoHAnimSegment();
SoHAnimSegment1805->setUSE(QString("hanim_t7"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1805);

SoHAnimSegment* SoHAnimSegment1806 = new SoHAnimSegment();
SoHAnimSegment1806->setUSE(QString("hanim_t6"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1806);

SoHAnimSegment* SoHAnimSegment1807 = new SoHAnimSegment();
SoHAnimSegment1807->setUSE(QString("hanim_t5"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1807);

SoHAnimSegment* SoHAnimSegment1808 = new SoHAnimSegment();
SoHAnimSegment1808->setUSE(QString("hanim_t4"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1808);

SoHAnimSegment* SoHAnimSegment1809 = new SoHAnimSegment();
SoHAnimSegment1809->setUSE(QString("hanim_t3"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1809);

SoHAnimSegment* SoHAnimSegment1810 = new SoHAnimSegment();
SoHAnimSegment1810->setUSE(QString("hanim_t2"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1810);

SoHAnimSegment* SoHAnimSegment1811 = new SoHAnimSegment();
SoHAnimSegment1811->setUSE(QString("hanim_t1"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1811);

SoHAnimSegment* SoHAnimSegment1812 = new SoHAnimSegment();
SoHAnimSegment1812->setUSE(QString("hanim_c7"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1812);

SoHAnimSegment* SoHAnimSegment1813 = new SoHAnimSegment();
SoHAnimSegment1813->setUSE(QString("hanim_c6"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1813);

SoHAnimSegment* SoHAnimSegment1814 = new SoHAnimSegment();
SoHAnimSegment1814->setUSE(QString("hanim_c5"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1814);

SoHAnimSegment* SoHAnimSegment1815 = new SoHAnimSegment();
SoHAnimSegment1815->setUSE(QString("hanim_c4"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1815);

SoHAnimSegment* SoHAnimSegment1816 = new SoHAnimSegment();
SoHAnimSegment1816->setUSE(QString("hanim_c3"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1816);

SoHAnimSegment* SoHAnimSegment1817 = new SoHAnimSegment();
SoHAnimSegment1817->setUSE(QString("hanim_c2"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1817);

SoHAnimSegment* SoHAnimSegment1818 = new SoHAnimSegment();
SoHAnimSegment1818->setUSE(QString("hanim_c1"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1818);

SoHAnimSegment* SoHAnimSegment1819 = new SoHAnimSegment();
SoHAnimSegment1819->setUSE(QString("hanim_skull"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1819);

SoHAnimSegment* SoHAnimSegment1820 = new SoHAnimSegment();
SoHAnimSegment1820->setUSE(QString("hanim_l_clavicle"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1820);

SoHAnimSegment* SoHAnimSegment1821 = new SoHAnimSegment();
SoHAnimSegment1821->setUSE(QString("hanim_l_scapula"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1821);

SoHAnimSegment* SoHAnimSegment1822 = new SoHAnimSegment();
SoHAnimSegment1822->setUSE(QString("hanim_l_upperarm"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1822);

SoHAnimSegment* SoHAnimSegment1823 = new SoHAnimSegment();
SoHAnimSegment1823->setUSE(QString("hanim_l_forearm"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1823);

SoHAnimSegment* SoHAnimSegment1824 = new SoHAnimSegment();
SoHAnimSegment1824->setUSE(QString("hanim_l_carpal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1824);

SoHAnimSegment* SoHAnimSegment1825 = new SoHAnimSegment();
SoHAnimSegment1825->setUSE(QString("hanim_l_trapezium"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1825);

SoHAnimSegment* SoHAnimSegment1826 = new SoHAnimSegment();
SoHAnimSegment1826->setUSE(QString("hanim_l_metacarpal_1"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1826);

SoHAnimSegment* SoHAnimSegment1827 = new SoHAnimSegment();
SoHAnimSegment1827->setUSE(QString("hanim_l_carpal_proximal_phalanx_1"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1827);

SoHAnimSegment* SoHAnimSegment1828 = new SoHAnimSegment();
SoHAnimSegment1828->setUSE(QString("hanim_l_trapezoid"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1828);

SoHAnimSegment* SoHAnimSegment1829 = new SoHAnimSegment();
SoHAnimSegment1829->setUSE(QString("hanim_l_metacarpal_2"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1829);

SoHAnimSegment* SoHAnimSegment1830 = new SoHAnimSegment();
SoHAnimSegment1830->setUSE(QString("hanim_l_carpal_proximal_phalanx_2"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1830);

SoHAnimSegment* SoHAnimSegment1831 = new SoHAnimSegment();
SoHAnimSegment1831->setUSE(QString("hanim_l_carpal_middle_phalanx_2"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1831);

SoHAnimSegment* SoHAnimSegment1832 = new SoHAnimSegment();
SoHAnimSegment1832->setUSE(QString("hanim_l_capitate"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1832);

SoHAnimSegment* SoHAnimSegment1833 = new SoHAnimSegment();
SoHAnimSegment1833->setUSE(QString("hanim_l_metacarpal_3"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1833);

SoHAnimSegment* SoHAnimSegment1834 = new SoHAnimSegment();
SoHAnimSegment1834->setUSE(QString("hanim_l_carpal_proximal_phalanx_3"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1834);

SoHAnimSegment* SoHAnimSegment1835 = new SoHAnimSegment();
SoHAnimSegment1835->setUSE(QString("hanim_l_carpal_middle_phalanx_3"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1835);

SoHAnimSegment* SoHAnimSegment1836 = new SoHAnimSegment();
SoHAnimSegment1836->setUSE(QString("hanim_l_hamate"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1836);

SoHAnimSegment* SoHAnimSegment1837 = new SoHAnimSegment();
SoHAnimSegment1837->setUSE(QString("hanim_l_metacarpal_4"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1837);

SoHAnimSegment* SoHAnimSegment1838 = new SoHAnimSegment();
SoHAnimSegment1838->setUSE(QString("hanim_l_carpal_proximal_phalanx_4"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1838);

SoHAnimSegment* SoHAnimSegment1839 = new SoHAnimSegment();
SoHAnimSegment1839->setUSE(QString("hanim_l_carpal_middle_phalanx_4"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1839);

SoHAnimSegment* SoHAnimSegment1840 = new SoHAnimSegment();
SoHAnimSegment1840->setUSE(QString("hanim_l_metacarpal_5"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1840);

SoHAnimSegment* SoHAnimSegment1841 = new SoHAnimSegment();
SoHAnimSegment1841->setUSE(QString("hanim_l_carpal_proximal_phalanx_5"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1841);

SoHAnimSegment* SoHAnimSegment1842 = new SoHAnimSegment();
SoHAnimSegment1842->setUSE(QString("hanim_l_carpal_middle_phalanx_5"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1842);

SoHAnimSegment* SoHAnimSegment1843 = new SoHAnimSegment();
SoHAnimSegment1843->setUSE(QString("hanim_r_clavicle"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1843);

SoHAnimSegment* SoHAnimSegment1844 = new SoHAnimSegment();
SoHAnimSegment1844->setUSE(QString("hanim_r_scapula"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1844);

SoHAnimSegment* SoHAnimSegment1845 = new SoHAnimSegment();
SoHAnimSegment1845->setUSE(QString("hanim_r_upperarm"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1845);

SoHAnimSegment* SoHAnimSegment1846 = new SoHAnimSegment();
SoHAnimSegment1846->setUSE(QString("hanim_r_forearm"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1846);

SoHAnimSegment* SoHAnimSegment1847 = new SoHAnimSegment();
SoHAnimSegment1847->setUSE(QString("hanim_r_carpal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1847);

SoHAnimSegment* SoHAnimSegment1848 = new SoHAnimSegment();
SoHAnimSegment1848->setUSE(QString("hanim_r_trapezium"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1848);

SoHAnimSegment* SoHAnimSegment1849 = new SoHAnimSegment();
SoHAnimSegment1849->setUSE(QString("hanim_r_metacarpal_1"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1849);

SoHAnimSegment* SoHAnimSegment1850 = new SoHAnimSegment();
SoHAnimSegment1850->setUSE(QString("hanim_r_carpal_proximal_phalanx_1"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1850);

SoHAnimSegment* SoHAnimSegment1851 = new SoHAnimSegment();
SoHAnimSegment1851->setUSE(QString("hanim_r_trapezoid"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1851);

SoHAnimSegment* SoHAnimSegment1852 = new SoHAnimSegment();
SoHAnimSegment1852->setUSE(QString("hanim_r_metacarpal_2"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1852);

SoHAnimSegment* SoHAnimSegment1853 = new SoHAnimSegment();
SoHAnimSegment1853->setUSE(QString("hanim_r_carpal_proximal_phalanx_2"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1853);

SoHAnimSegment* SoHAnimSegment1854 = new SoHAnimSegment();
SoHAnimSegment1854->setUSE(QString("hanim_r_carpal_middle_phalanx_2"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1854);

SoHAnimSegment* SoHAnimSegment1855 = new SoHAnimSegment();
SoHAnimSegment1855->setUSE(QString("hanim_r_capitate"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1855);

SoHAnimSegment* SoHAnimSegment1856 = new SoHAnimSegment();
SoHAnimSegment1856->setUSE(QString("hanim_r_metacarpal_3"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1856);

SoHAnimSegment* SoHAnimSegment1857 = new SoHAnimSegment();
SoHAnimSegment1857->setUSE(QString("hanim_r_carpal_proximal_phalanx_3"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1857);

SoHAnimSegment* SoHAnimSegment1858 = new SoHAnimSegment();
SoHAnimSegment1858->setUSE(QString("hanim_r_carpal_middle_phalanx_3"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1858);

SoHAnimSegment* SoHAnimSegment1859 = new SoHAnimSegment();
SoHAnimSegment1859->setUSE(QString("hanim_r_hamate"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1859);

SoHAnimSegment* SoHAnimSegment1860 = new SoHAnimSegment();
SoHAnimSegment1860->setUSE(QString("hanim_r_metacarpal_4"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1860);

SoHAnimSegment* SoHAnimSegment1861 = new SoHAnimSegment();
SoHAnimSegment1861->setUSE(QString("hanim_r_carpal_proximal_phalanx_4"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1861);

SoHAnimSegment* SoHAnimSegment1862 = new SoHAnimSegment();
SoHAnimSegment1862->setUSE(QString("hanim_r_carpal_middle_phalanx_4"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1862);

SoHAnimSegment* SoHAnimSegment1863 = new SoHAnimSegment();
SoHAnimSegment1863->setUSE(QString("hanim_r_metacarpal_5"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1863);

SoHAnimSegment* SoHAnimSegment1864 = new SoHAnimSegment();
SoHAnimSegment1864->setUSE(QString("hanim_r_carpal_proximal_phalanx_5"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1864);

SoHAnimSegment* SoHAnimSegment1865 = new SoHAnimSegment();
SoHAnimSegment1865->setUSE(QString("hanim_r_carpal_middle_phalanx_5"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1865);

SoHAnimSite* SoHAnimSite1866 = new SoHAnimSite();
SoHAnimSite1866->setUSE(QString("hanim_buttocks_standing_wall_contact_point_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1866);

SoHAnimSite* SoHAnimSite1867 = new SoHAnimSite();
SoHAnimSite1867->setUSE(QString("hanim_crotch_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1867);

SoHAnimSite* SoHAnimSite1868 = new SoHAnimSite();
SoHAnimSite1868->setUSE(QString("hanim_l_asis_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1868);

SoHAnimSite* SoHAnimSite1869 = new SoHAnimSite();
SoHAnimSite1869->setUSE(QString("hanim_l_iliocristale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1869);

SoHAnimSite* SoHAnimSite1870 = new SoHAnimSite();
SoHAnimSite1870->setUSE(QString("hanim_l_psis_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1870);

SoHAnimSite* SoHAnimSite1871 = new SoHAnimSite();
SoHAnimSite1871->setUSE(QString("hanim_l_trochanterion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1871);

SoHAnimSite* SoHAnimSite1872 = new SoHAnimSite();
SoHAnimSite1872->setUSE(QString("hanim_r_asis_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1872);

SoHAnimSite* SoHAnimSite1873 = new SoHAnimSite();
SoHAnimSite1873->setUSE(QString("hanim_r_iliocristale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1873);

SoHAnimSite* SoHAnimSite1874 = new SoHAnimSite();
SoHAnimSite1874->setUSE(QString("hanim_r_psis_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1874);

SoHAnimSite* SoHAnimSite1875 = new SoHAnimSite();
SoHAnimSite1875->setUSE(QString("hanim_r_trochanterion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1875);

SoHAnimSite* SoHAnimSite1876 = new SoHAnimSite();
SoHAnimSite1876->setUSE(QString("hanim_navel_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1876);

SoHAnimSite* SoHAnimSite1877 = new SoHAnimSite();
SoHAnimSite1877->setUSE(QString("hanim_waist_preferred_anterior_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1877);

SoHAnimSite* SoHAnimSite1878 = new SoHAnimSite();
SoHAnimSite1878->setUSE(QString("hanim_waist_preferred_posterior_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1878);

SoHAnimSite* SoHAnimSite1879 = new SoHAnimSite();
SoHAnimSite1879->setUSE(QString("hanim_l_femoral_lateral_epicondyles_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1879);

SoHAnimSite* SoHAnimSite1880 = new SoHAnimSite();
SoHAnimSite1880->setUSE(QString("hanim_l_femoral_medial_epicondyles_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1880);

SoHAnimSite* SoHAnimSite1881 = new SoHAnimSite();
SoHAnimSite1881->setUSE(QString("hanim_l_knee_crease_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1881);

SoHAnimSite* SoHAnimSite1882 = new SoHAnimSite();
SoHAnimSite1882->setUSE(QString("hanim_l_suprapatella_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1882);

SoHAnimSite* SoHAnimSite1883 = new SoHAnimSite();
SoHAnimSite1883->setUSE(QString("hanim_r_femoral_lateral_epicondyles_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1883);

SoHAnimSite* SoHAnimSite1884 = new SoHAnimSite();
SoHAnimSite1884->setUSE(QString("hanim_r_femoral_medial_epicondyles_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1884);

SoHAnimSite* SoHAnimSite1885 = new SoHAnimSite();
SoHAnimSite1885->setUSE(QString("hanim_r_knee_crease_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1885);

SoHAnimSite* SoHAnimSite1886 = new SoHAnimSite();
SoHAnimSite1886->setUSE(QString("hanim_r_suprapatella_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1886);

SoHAnimSite* SoHAnimSite1887 = new SoHAnimSite();
SoHAnimSite1887->setUSE(QString("hanim_l_lateral_malleolus_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1887);

SoHAnimSite* SoHAnimSite1888 = new SoHAnimSite();
SoHAnimSite1888->setUSE(QString("hanim_l_medial_malleolus_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1888);

SoHAnimSite* SoHAnimSite1889 = new SoHAnimSite();
SoHAnimSite1889->setUSE(QString("hanim_l_tibiale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1889);

SoHAnimSite* SoHAnimSite1890 = new SoHAnimSite();
SoHAnimSite1890->setUSE(QString("hanim_l_calcaneus_posterior_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1890);

SoHAnimSite* SoHAnimSite1891 = new SoHAnimSite();
SoHAnimSite1891->setUSE(QString("hanim_l_sphyrion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1891);

SoHAnimSite* SoHAnimSite1892 = new SoHAnimSite();
SoHAnimSite1892->setUSE(QString("hanim_l_metatarsal_phalanx_1_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1892);

SoHAnimSite* SoHAnimSite1893 = new SoHAnimSite();
SoHAnimSite1893->setUSE(QString("hanim_l_tarsal_distal_phalanx_1_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1893);

SoHAnimSite* SoHAnimSite1894 = new SoHAnimSite();
SoHAnimSite1894->setUSE(QString("hanim_l_tarsal_distal_phalanx_2_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1894);

SoHAnimSite* SoHAnimSite1895 = new SoHAnimSite();
SoHAnimSite1895->setUSE(QString("hanim_l_tarsal_distal_phalanx_3_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1895);

SoHAnimSite* SoHAnimSite1896 = new SoHAnimSite();
SoHAnimSite1896->setUSE(QString("hanim_l_tarsal_distal_phalanx_4_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1896);

SoHAnimSite* SoHAnimSite1897 = new SoHAnimSite();
SoHAnimSite1897->setUSE(QString("hanim_l_metatarsal_phalanx_5_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1897);

SoHAnimSite* SoHAnimSite1898 = new SoHAnimSite();
SoHAnimSite1898->setUSE(QString("hanim_l_tarsal_distal_phalanx_5_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1898);

SoHAnimSite* SoHAnimSite1899 = new SoHAnimSite();
SoHAnimSite1899->setUSE(QString("hanim_r_lateral_malleolus_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1899);

SoHAnimSite* SoHAnimSite1900 = new SoHAnimSite();
SoHAnimSite1900->setUSE(QString("hanim_r_medial_malleolus_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1900);

SoHAnimSite* SoHAnimSite1901 = new SoHAnimSite();
SoHAnimSite1901->setUSE(QString("hanim_r_tibiale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1901);

SoHAnimSite* SoHAnimSite1902 = new SoHAnimSite();
SoHAnimSite1902->setUSE(QString("hanim_r_calcaneus_posterior_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1902);

SoHAnimSite* SoHAnimSite1903 = new SoHAnimSite();
SoHAnimSite1903->setUSE(QString("hanim_r_sphyrion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1903);

SoHAnimSite* SoHAnimSite1904 = new SoHAnimSite();
SoHAnimSite1904->setUSE(QString("hanim_r_metatarsal_phalanx_1_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1904);

SoHAnimSite* SoHAnimSite1905 = new SoHAnimSite();
SoHAnimSite1905->setUSE(QString("hanim_r_tarsal_distal_phalanx_1_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1905);

SoHAnimSite* SoHAnimSite1906 = new SoHAnimSite();
SoHAnimSite1906->setUSE(QString("hanim_r_tarsal_distal_phalanx_2_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1906);

SoHAnimSite* SoHAnimSite1907 = new SoHAnimSite();
SoHAnimSite1907->setUSE(QString("hanim_r_tarsal_distal_phalanx_3_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1907);

SoHAnimSite* SoHAnimSite1908 = new SoHAnimSite();
SoHAnimSite1908->setUSE(QString("hanim_r_tarsal_distal_phalanx_4_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1908);

SoHAnimSite* SoHAnimSite1909 = new SoHAnimSite();
SoHAnimSite1909->setUSE(QString("hanim_r_metatarsal_phalanx_5_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1909);

SoHAnimSite* SoHAnimSite1910 = new SoHAnimSite();
SoHAnimSite1910->setUSE(QString("hanim_r_tarsal_distal_phalanx_5_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1910);

SoHAnimSite* SoHAnimSite1911 = new SoHAnimSite();
SoHAnimSite1911->setUSE(QString("hanim_l_rib10_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1911);

SoHAnimSite* SoHAnimSite1912 = new SoHAnimSite();
SoHAnimSite1912->setUSE(QString("hanim_r_rib10_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1912);

SoHAnimSite* SoHAnimSite1913 = new SoHAnimSite();
SoHAnimSite1913->setUSE(QString("hanim_spine_2_middle_back_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1913);

SoHAnimSite* SoHAnimSite1914 = new SoHAnimSite();
SoHAnimSite1914->setUSE(QString("hanim_substernale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1914);

SoHAnimSite* SoHAnimSite1915 = new SoHAnimSite();
SoHAnimSite1915->setUSE(QString("hanim_l_thelion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1915);

SoHAnimSite* SoHAnimSite1916 = new SoHAnimSite();
SoHAnimSite1916->setUSE(QString("hanim_r_thelion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1916);

SoHAnimSite* SoHAnimSite1917 = new SoHAnimSite();
SoHAnimSite1917->setUSE(QString("hanim_l_chest_midsagittal_plane_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1917);

SoHAnimSite* SoHAnimSite1918 = new SoHAnimSite();
SoHAnimSite1918->setUSE(QString("hanim_mesosternale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1918);

SoHAnimSite* SoHAnimSite1919 = new SoHAnimSite();
SoHAnimSite1919->setUSE(QString("hanim_r_chest_midsagittal_plane_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1919);

SoHAnimSite* SoHAnimSite1920 = new SoHAnimSite();
SoHAnimSite1920->setUSE(QString("hanim_rear_center_midsagittal_plane_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1920);

SoHAnimSite* SoHAnimSite1921 = new SoHAnimSite();
SoHAnimSite1921->setUSE(QString("hanim_spine_1_middle_back_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1921);

SoHAnimSite* SoHAnimSite1922 = new SoHAnimSite();
SoHAnimSite1922->setUSE(QString("hanim_cervicale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1922);

SoHAnimSite* SoHAnimSite1923 = new SoHAnimSite();
SoHAnimSite1923->setUSE(QString("hanim_suprasternale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1923);

SoHAnimSite* SoHAnimSite1924 = new SoHAnimSite();
SoHAnimSite1924->setUSE(QString("hanim_l_neck_base_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1924);

SoHAnimSite* SoHAnimSite1925 = new SoHAnimSite();
SoHAnimSite1925->setUSE(QString("hanim_r_neck_base_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1925);

SoHAnimSite* SoHAnimSite1926 = new SoHAnimSite();
SoHAnimSite1926->setUSE(QString("hanim_l_acromion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1926);

SoHAnimSite* SoHAnimSite1927 = new SoHAnimSite();
SoHAnimSite1927->setUSE(QString("hanim_l_axilla_distal_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1927);

SoHAnimSite* SoHAnimSite1928 = new SoHAnimSite();
SoHAnimSite1928->setUSE(QString("hanim_l_axilla_posterior_folds_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1928);

SoHAnimSite* SoHAnimSite1929 = new SoHAnimSite();
SoHAnimSite1929->setUSE(QString("hanim_l_axilla_proximal_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1929);

SoHAnimSite* SoHAnimSite1930 = new SoHAnimSite();
SoHAnimSite1930->setUSE(QString("hanim_l_clavicale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1930);

SoHAnimSite* SoHAnimSite1931 = new SoHAnimSite();
SoHAnimSite1931->setUSE(QString("hanim_r_acromion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1931);

SoHAnimSite* SoHAnimSite1932 = new SoHAnimSite();
SoHAnimSite1932->setUSE(QString("hanim_r_axilla_distal_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1932);

SoHAnimSite* SoHAnimSite1933 = new SoHAnimSite();
SoHAnimSite1933->setUSE(QString("hanim_r_axilla_posterior_folds_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1933);

SoHAnimSite* SoHAnimSite1934 = new SoHAnimSite();
SoHAnimSite1934->setUSE(QString("hanim_r_axilla_proximal_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1934);

SoHAnimSite* SoHAnimSite1935 = new SoHAnimSite();
SoHAnimSite1935->setUSE(QString("hanim_r_clavicale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1935);

SoHAnimSite* SoHAnimSite1936 = new SoHAnimSite();
SoHAnimSite1936->setUSE(QString("hanim_adams_apple_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1936);

SoHAnimSite* SoHAnimSite1937 = new SoHAnimSite();
SoHAnimSite1937->setUSE(QString("hanim_glabella_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1937);

SoHAnimSite* SoHAnimSite1938 = new SoHAnimSite();
SoHAnimSite1938->setUSE(QString("hanim_l_ectocanthus_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1938);

SoHAnimSite* SoHAnimSite1939 = new SoHAnimSite();
SoHAnimSite1939->setUSE(QString("hanim_l_infraorbitale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1939);

SoHAnimSite* SoHAnimSite1940 = new SoHAnimSite();
SoHAnimSite1940->setUSE(QString("hanim_l_tragion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1940);

SoHAnimSite* SoHAnimSite1941 = new SoHAnimSite();
SoHAnimSite1941->setUSE(QString("hanim_nuchale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1941);

SoHAnimSite* SoHAnimSite1942 = new SoHAnimSite();
SoHAnimSite1942->setUSE(QString("hanim_opisthocranion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1942);

SoHAnimSite* SoHAnimSite1943 = new SoHAnimSite();
SoHAnimSite1943->setUSE(QString("hanim_r_ectocanthus_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1943);

SoHAnimSite* SoHAnimSite1944 = new SoHAnimSite();
SoHAnimSite1944->setUSE(QString("hanim_r_infraorbitale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1944);

SoHAnimSite* SoHAnimSite1945 = new SoHAnimSite();
SoHAnimSite1945->setUSE(QString("hanim_r_tragion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1945);

SoHAnimSite* SoHAnimSite1946 = new SoHAnimSite();
SoHAnimSite1946->setUSE(QString("hanim_sellion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1946);

SoHAnimSite* SoHAnimSite1947 = new SoHAnimSite();
SoHAnimSite1947->setUSE(QString("hanim_skull_vertex_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1947);

SoHAnimSite* SoHAnimSite1948 = new SoHAnimSite();
SoHAnimSite1948->setUSE(QString("hanim_l_gonion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1948);

SoHAnimSite* SoHAnimSite1949 = new SoHAnimSite();
SoHAnimSite1949->setUSE(QString("hanim_menton_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1949);

SoHAnimSite* SoHAnimSite1950 = new SoHAnimSite();
SoHAnimSite1950->setUSE(QString("hanim_r_gonion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1950);

SoHAnimSite* SoHAnimSite1951 = new SoHAnimSite();
SoHAnimSite1951->setUSE(QString("hanim_supramenton_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1951);

SoHAnimSite* SoHAnimSite1952 = new SoHAnimSite();
SoHAnimSite1952->setUSE(QString("hanim_l_bideltoid_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1952);

SoHAnimSite* SoHAnimSite1953 = new SoHAnimSite();
SoHAnimSite1953->setUSE(QString("hanim_l_humeral_lateral_epicondyles_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1953);

SoHAnimSite* SoHAnimSite1954 = new SoHAnimSite();
SoHAnimSite1954->setUSE(QString("hanim_l_humeral_medial_epicondyles_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1954);

SoHAnimSite* SoHAnimSite1955 = new SoHAnimSite();
SoHAnimSite1955->setUSE(QString("hanim_l_olecranon_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1955);

SoHAnimSite* SoHAnimSite1956 = new SoHAnimSite();
SoHAnimSite1956->setUSE(QString("hanim_l_radial_styloid_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1956);

SoHAnimSite* SoHAnimSite1957 = new SoHAnimSite();
SoHAnimSite1957->setUSE(QString("hanim_l_radiale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1957);

SoHAnimSite* SoHAnimSite1958 = new SoHAnimSite();
SoHAnimSite1958->setUSE(QString("hanim_l_ulnar_styloid_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1958);

SoHAnimSite* SoHAnimSite1959 = new SoHAnimSite();
SoHAnimSite1959->setUSE(QString("hanim_l_carpal_distal_phalanx_1_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1959);

SoHAnimSite* SoHAnimSite1960 = new SoHAnimSite();
SoHAnimSite1960->setUSE(QString("hanim_l_metacarpal_phalanx_2_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1960);

SoHAnimSite* SoHAnimSite1961 = new SoHAnimSite();
SoHAnimSite1961->setUSE(QString("hanim_l_carpal_distal_phalanx_2_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1961);

SoHAnimSite* SoHAnimSite1962 = new SoHAnimSite();
SoHAnimSite1962->setUSE(QString("hanim_l_dactylion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1962);

SoHAnimSite* SoHAnimSite1963 = new SoHAnimSite();
SoHAnimSite1963->setUSE(QString("hanim_l_metacarpal_phalanx_3_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1963);

SoHAnimSite* SoHAnimSite1964 = new SoHAnimSite();
SoHAnimSite1964->setUSE(QString("hanim_l_carpal_distal_phalanx_3_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1964);

SoHAnimSite* SoHAnimSite1965 = new SoHAnimSite();
SoHAnimSite1965->setUSE(QString("hanim_l_metacarpal_phalanx_5_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1965);

SoHAnimSite* SoHAnimSite1966 = new SoHAnimSite();
SoHAnimSite1966->setUSE(QString("hanim_l_carpal_distal_phalanx_4_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1966);

SoHAnimSite* SoHAnimSite1967 = new SoHAnimSite();
SoHAnimSite1967->setUSE(QString("hanim_l_carpal_distal_phalanx_5_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1967);

SoHAnimSite* SoHAnimSite1968 = new SoHAnimSite();
SoHAnimSite1968->setUSE(QString("hanim_r_bideltoid_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1968);

SoHAnimSite* SoHAnimSite1969 = new SoHAnimSite();
SoHAnimSite1969->setUSE(QString("hanim_r_humeral_lateral_epicondyles_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1969);

SoHAnimSite* SoHAnimSite1970 = new SoHAnimSite();
SoHAnimSite1970->setUSE(QString("hanim_r_humeral_medial_epicondyles_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1970);

SoHAnimSite* SoHAnimSite1971 = new SoHAnimSite();
SoHAnimSite1971->setUSE(QString("hanim_r_olecranon_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1971);

SoHAnimSite* SoHAnimSite1972 = new SoHAnimSite();
SoHAnimSite1972->setUSE(QString("hanim_r_radial_styloid_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1972);

SoHAnimSite* SoHAnimSite1973 = new SoHAnimSite();
SoHAnimSite1973->setUSE(QString("hanim_r_radiale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1973);

SoHAnimSite* SoHAnimSite1974 = new SoHAnimSite();
SoHAnimSite1974->setUSE(QString("hanim_r_ulnar_styloid_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1974);

SoHAnimSite* SoHAnimSite1975 = new SoHAnimSite();
SoHAnimSite1975->setUSE(QString("hanim_r_carpal_distal_phalanx_1_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1975);

SoHAnimSite* SoHAnimSite1976 = new SoHAnimSite();
SoHAnimSite1976->setUSE(QString("hanim_r_metacarpal_phalanx_2_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1976);

SoHAnimSite* SoHAnimSite1977 = new SoHAnimSite();
SoHAnimSite1977->setUSE(QString("hanim_r_carpal_distal_phalanx_2_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1977);

SoHAnimSite* SoHAnimSite1978 = new SoHAnimSite();
SoHAnimSite1978->setUSE(QString("hanim_r_dactylion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1978);

SoHAnimSite* SoHAnimSite1979 = new SoHAnimSite();
SoHAnimSite1979->setUSE(QString("hanim_r_metacarpal_phalanx_3_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1979);

SoHAnimSite* SoHAnimSite1980 = new SoHAnimSite();
SoHAnimSite1980->setUSE(QString("hanim_r_carpal_distal_phalanx_3_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1980);

SoHAnimSite* SoHAnimSite1981 = new SoHAnimSite();
SoHAnimSite1981->setUSE(QString("hanim_r_metacarpal_phalanx_5_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1981);

SoHAnimSite* SoHAnimSite1982 = new SoHAnimSite();
SoHAnimSite1982->setUSE(QString("hanim_r_carpal_distal_phalanx_4_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1982);

SoHAnimSite* SoHAnimSite1983 = new SoHAnimSite();
SoHAnimSite1983->setUSE(QString("hanim_r_carpal_distal_phalanx_5_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1983);

SoNode11->addChild(*SoHAnimHumanoid43);

SoSceneManager0->setSceneGraph(*SoNode11);

return 0;
}
