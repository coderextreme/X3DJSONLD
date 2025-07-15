
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
Someta3->setContent(QString("JohnJoint2.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("identifier"));
Someta4->setContent(QString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint2.x3d"));
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
//<Transform translation='0 2 0'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
SoTransform* SoTransform19 = new SoTransform();
SoTransform19->setTranslation(new float[]{0.0,2.1,0.0});
SoShape* SoShape20 = new SoShape();
SoShape20->setDEF(QString("HAnimJointShape"));
SoSphere* SoSphere21 = new SoSphere();
SoSphere21->setRadius(0.02);
SoShape20->setGeometry(*SoSphere21);

SoVRMLAppearance* SoVRMLAppearance22 = new SoVRMLAppearance();
SoMaterial* SoMaterial23 = new SoMaterial();
SoMaterial23->setDEF(QString("HAnimJointMaterial"));
SoMaterial23->setDiffuseColor(new float[]{0.0,0.0,0.8});
SoMaterial23->setTransparency(0.3);
SoVRMLAppearance22->addChild(*SoMaterial23);

SoShape20->addChild(*SoVRMLAppearance22);

SoTransform19->addChild(*SoShape20);

SoTransform18->addChild(*SoTransform19);

SoTransform* SoTransform24 = new SoTransform();
SoTransform24->setTranslation(new float[]{0.0,2.05,0.0});
SoShape* SoShape25 = new SoShape();
SoShape25->setDEF(QString("HAnimSegmentLine"));
SoLineSet* SoLineSet26 = new SoLineSet();
SoLineSet26->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA27 = new SoColorRGBA();
SoColorRGBA27->setDEF(QString("HAnimSegmentLineColorRGBA"));
SoColorRGBA27->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 8);
SoLineSet26->addChild(*SoColorRGBA27);

SoCoordinate* SoCoordinate28 = new SoCoordinate();
SoCoordinate28->setPoint(new float[]{-0.05,0.0,0.0,0.05,0.0,0.0}, 6);
SoLineSet26->setCoord(*SoCoordinate28);

SoShape25->setGeometry(*SoLineSet26);

SoTransform24->addChild(*SoShape25);

SoTransform18->addChild(*SoTransform24);

//<Transform translation='0 2.1 0'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
SoGroup17->addChild(*SoTransform18);

SoNode11->addChild(*SoGroup17);

SoNavigationInfo* SoNavigationInfo29 = new SoNavigationInfo();
SoNavigationInfo29->setSpeed(1.5);
SoNode11->addChild(*SoNavigationInfo29);

SoViewpoint* SoViewpoint30 = new SoViewpoint();
SoViewpoint30->setDescription(QString("default"));
SoNode11->addChild(*SoViewpoint30);

SoHAnimHumanoid* SoHAnimHumanoid31 = new SoHAnimHumanoid();
SoHAnimHumanoid31->X3DNode::setName(QString("HAnim"));
SoHAnimHumanoid31->setDEF(QString("hanim_HAnim"));
SoHAnimHumanoid31->setInfo(new QString[]{QString("humanoidVersion=2.0")}, 1);
SoHAnimHumanoid31->setVersion(QString("2.0"));
SoHAnimJoint* SoHAnimJoint32 = new SoHAnimJoint();
SoHAnimJoint32->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint32->setDEF(QString("hanim_humanoid_root"));
SoHAnimJoint32->setCenter(new float[]{0.0,0.824,0.0277});
SoHAnimJoint32->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint32->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint33 = new SoHAnimJoint();
SoHAnimJoint33->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint33->setDEF(QString("hanim_sacroiliac"));
SoHAnimJoint33->setCenter(new float[]{0.0,0.9149,0.0016});
SoHAnimJoint33->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint33->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint34 = new SoHAnimJoint();
SoHAnimJoint34->X3DNode::setName(QString("l_hip"));
SoHAnimJoint34->setDEF(QString("hanim_l_hip"));
SoHAnimJoint34->setCenter(new float[]{0.0961,0.9124,-0.0001});
SoHAnimJoint34->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint34->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint35 = new SoHAnimJoint();
SoHAnimJoint35->X3DNode::setName(QString("l_knee"));
SoHAnimJoint35->setDEF(QString("hanim_l_knee"));
SoHAnimJoint35->setCenter(new float[]{0.104,0.4867,0.0308});
SoHAnimJoint35->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint35->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint36 = new SoHAnimJoint();
SoHAnimJoint36->X3DNode::setName(QString("l_talocrural"));
SoHAnimJoint36->setDEF(QString("hanim_l_talocrural"));
SoHAnimJoint36->setCenter(new float[]{0.1101,0.0656,-0.0736});
SoHAnimJoint36->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint36->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint37 = new SoHAnimJoint();
SoHAnimJoint37->X3DNode::setName(QString("l_talocalcaneonavicular"));
SoHAnimJoint37->setDEF(QString("hanim_l_talocalcaneonavicular"));
SoHAnimJoint37->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint37->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint37->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint38 = new SoHAnimJoint();
SoHAnimJoint38->X3DNode::setName(QString("l_cuneonavicular_1"));
SoHAnimJoint38->setDEF(QString("hanim_l_cuneonavicular_1"));
SoHAnimJoint38->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint38->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint38->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint39 = new SoHAnimJoint();
SoHAnimJoint39->X3DNode::setName(QString("l_tarsometatarsal_1"));
SoHAnimJoint39->setDEF(QString("hanim_l_tarsometatarsal_1"));
SoHAnimJoint39->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint39->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint39->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint40 = new SoHAnimJoint();
SoHAnimJoint40->X3DNode::setName(QString("l_metatarsophalangeal_1"));
SoHAnimJoint40->setDEF(QString("hanim_l_metatarsophalangeal_1"));
SoHAnimJoint40->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint40->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint40->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint41 = new SoHAnimJoint();
SoHAnimJoint41->X3DNode::setName(QString("l_tarsal_interphalangeal_1"));
SoHAnimJoint41->setDEF(QString("hanim_l_tarsal_interphalangeal_1"));
SoHAnimJoint41->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint41->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint41->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint40->addChildren(*SoHAnimJoint41);

SoHAnimJoint39->addChildren(*SoHAnimJoint40);

SoHAnimJoint38->addChildren(*SoHAnimJoint39);

SoHAnimJoint37->addChildren(*SoHAnimJoint38);

SoHAnimJoint* SoHAnimJoint42 = new SoHAnimJoint();
SoHAnimJoint42->X3DNode::setName(QString("l_cuneonavicular_2"));
SoHAnimJoint42->setDEF(QString("hanim_l_cuneonavicular_2"));
SoHAnimJoint42->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint42->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint42->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint43 = new SoHAnimJoint();
SoHAnimJoint43->X3DNode::setName(QString("l_tarsometatarsal_2"));
SoHAnimJoint43->setDEF(QString("hanim_l_tarsometatarsal_2"));
SoHAnimJoint43->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint43->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint43->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint44 = new SoHAnimJoint();
SoHAnimJoint44->X3DNode::setName(QString("l_metatarsophalangeal_2"));
SoHAnimJoint44->setDEF(QString("hanim_l_metatarsophalangeal_2"));
SoHAnimJoint44->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint44->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint44->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint45 = new SoHAnimJoint();
SoHAnimJoint45->X3DNode::setName(QString("l_tarsal_proximal_interphalangeal_2"));
SoHAnimJoint45->setDEF(QString("hanim_l_tarsal_proximal_interphalangeal_2"));
SoHAnimJoint45->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint45->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint45->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint46 = new SoHAnimJoint();
SoHAnimJoint46->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint46->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint46->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint46->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint46->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint45->addChildren(*SoHAnimJoint46);

SoHAnimJoint44->addChildren(*SoHAnimJoint45);

SoHAnimJoint43->addChildren(*SoHAnimJoint44);

SoHAnimJoint42->addChildren(*SoHAnimJoint43);

SoHAnimJoint37->addChildren(*SoHAnimJoint42);

SoHAnimJoint* SoHAnimJoint47 = new SoHAnimJoint();
SoHAnimJoint47->X3DNode::setName(QString("l_cuneonavicular_3"));
SoHAnimJoint47->setDEF(QString("hanim_l_cuneonavicular_3"));
SoHAnimJoint47->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint47->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint47->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint48 = new SoHAnimJoint();
SoHAnimJoint48->X3DNode::setName(QString("l_tarsometatarsal_3"));
SoHAnimJoint48->setDEF(QString("hanim_l_tarsometatarsal_3"));
SoHAnimJoint48->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint48->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint48->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint49 = new SoHAnimJoint();
SoHAnimJoint49->X3DNode::setName(QString("l_metatarsophalangeal_3"));
SoHAnimJoint49->setDEF(QString("hanim_l_metatarsophalangeal_3"));
SoHAnimJoint49->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint49->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint49->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint50 = new SoHAnimJoint();
SoHAnimJoint50->X3DNode::setName(QString("l_tarsal_proximal_interphalangeal_3"));
SoHAnimJoint50->setDEF(QString("hanim_l_tarsal_proximal_interphalangeal_3"));
SoHAnimJoint50->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint50->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint50->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint51 = new SoHAnimJoint();
SoHAnimJoint51->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_3"));
SoHAnimJoint51->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_3"));
SoHAnimJoint51->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint51->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint51->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint50->addChildren(*SoHAnimJoint51);

SoHAnimJoint49->addChildren(*SoHAnimJoint50);

SoHAnimJoint48->addChildren(*SoHAnimJoint49);

SoHAnimJoint47->addChildren(*SoHAnimJoint48);

SoHAnimJoint37->addChildren(*SoHAnimJoint47);

SoHAnimJoint36->addChildren(*SoHAnimJoint37);

SoHAnimJoint* SoHAnimJoint52 = new SoHAnimJoint();
SoHAnimJoint52->X3DNode::setName(QString("l_calcaneocuboid"));
SoHAnimJoint52->setDEF(QString("hanim_l_calcaneocuboid"));
SoHAnimJoint52->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint52->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint52->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint53 = new SoHAnimJoint();
SoHAnimJoint53->X3DNode::setName(QString("l_transversetarsal"));
SoHAnimJoint53->setDEF(QString("hanim_l_transversetarsal"));
SoHAnimJoint53->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint53->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint53->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint54 = new SoHAnimJoint();
SoHAnimJoint54->X3DNode::setName(QString("l_tarsometatarsal_4"));
SoHAnimJoint54->setDEF(QString("hanim_l_tarsometatarsal_4"));
SoHAnimJoint54->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint54->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint54->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint55 = new SoHAnimJoint();
SoHAnimJoint55->X3DNode::setName(QString("l_metatarsophalangeal_4"));
SoHAnimJoint55->setDEF(QString("hanim_l_metatarsophalangeal_4"));
SoHAnimJoint55->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint55->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint55->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint56 = new SoHAnimJoint();
SoHAnimJoint56->X3DNode::setName(QString("l_tarsal_proximal_interphalangeal_4"));
SoHAnimJoint56->setDEF(QString("hanim_l_tarsal_proximal_interphalangeal_4"));
SoHAnimJoint56->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint56->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint56->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint57 = new SoHAnimJoint();
SoHAnimJoint57->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_4"));
SoHAnimJoint57->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_4"));
SoHAnimJoint57->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint57->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint57->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint56->addChildren(*SoHAnimJoint57);

SoHAnimJoint55->addChildren(*SoHAnimJoint56);

SoHAnimJoint54->addChildren(*SoHAnimJoint55);

SoHAnimJoint53->addChildren(*SoHAnimJoint54);

SoHAnimJoint* SoHAnimJoint58 = new SoHAnimJoint();
SoHAnimJoint58->X3DNode::setName(QString("l_tarsometatarsal_5"));
SoHAnimJoint58->setDEF(QString("hanim_l_tarsometatarsal_5"));
SoHAnimJoint58->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint58->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint58->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint59 = new SoHAnimJoint();
SoHAnimJoint59->X3DNode::setName(QString("l_metatarsophalangeal_5"));
SoHAnimJoint59->setDEF(QString("hanim_l_metatarsophalangeal_5"));
SoHAnimJoint59->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint59->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint59->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint60 = new SoHAnimJoint();
SoHAnimJoint60->X3DNode::setName(QString("l_tarsal_proximal_interphalangeal_5"));
SoHAnimJoint60->setDEF(QString("hanim_l_tarsal_proximal_interphalangeal_5"));
SoHAnimJoint60->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint60->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint60->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint61 = new SoHAnimJoint();
SoHAnimJoint61->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_5"));
SoHAnimJoint61->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_5"));
SoHAnimJoint61->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint61->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint61->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint60->addChildren(*SoHAnimJoint61);

SoHAnimJoint59->addChildren(*SoHAnimJoint60);

SoHAnimJoint58->addChildren(*SoHAnimJoint59);

SoHAnimJoint53->addChildren(*SoHAnimJoint58);

SoHAnimJoint52->addChildren(*SoHAnimJoint53);

SoHAnimJoint36->addChildren(*SoHAnimJoint52);

SoHAnimJoint35->addChildren(*SoHAnimJoint36);

SoHAnimJoint34->addChildren(*SoHAnimJoint35);

SoHAnimJoint33->addChildren(*SoHAnimJoint34);

SoHAnimJoint* SoHAnimJoint62 = new SoHAnimJoint();
SoHAnimJoint62->X3DNode::setName(QString("r_hip"));
SoHAnimJoint62->setDEF(QString("hanim_r_hip"));
SoHAnimJoint62->setCenter(new float[]{-0.095,0.9171,0.0029});
SoHAnimJoint62->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint62->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint63 = new SoHAnimJoint();
SoHAnimJoint63->X3DNode::setName(QString("r_knee"));
SoHAnimJoint63->setDEF(QString("hanim_r_knee"));
SoHAnimJoint63->setCenter(new float[]{-0.0867,0.4913,0.0318});
SoHAnimJoint63->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint63->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint64 = new SoHAnimJoint();
SoHAnimJoint64->X3DNode::setName(QString("r_talocrural"));
SoHAnimJoint64->setDEF(QString("hanim_r_talocrural"));
SoHAnimJoint64->setCenter(new float[]{-0.0801,0.0712,-0.0766});
SoHAnimJoint64->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint64->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint65 = new SoHAnimJoint();
SoHAnimJoint65->X3DNode::setName(QString("r_talocalcaneonavicular"));
SoHAnimJoint65->setDEF(QString("hanim_r_talocalcaneonavicular"));
SoHAnimJoint65->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint65->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint65->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint66 = new SoHAnimJoint();
SoHAnimJoint66->X3DNode::setName(QString("r_cuneonavicular_1"));
SoHAnimJoint66->setDEF(QString("hanim_r_cuneonavicular_1"));
SoHAnimJoint66->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint66->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint66->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint67 = new SoHAnimJoint();
SoHAnimJoint67->X3DNode::setName(QString("r_tarsometatarsal_1"));
SoHAnimJoint67->setDEF(QString("hanim_r_tarsometatarsal_1"));
SoHAnimJoint67->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint67->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint67->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint68 = new SoHAnimJoint();
SoHAnimJoint68->X3DNode::setName(QString("r_metatarsophalangeal_1"));
SoHAnimJoint68->setDEF(QString("hanim_r_metatarsophalangeal_1"));
SoHAnimJoint68->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint68->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint68->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint69 = new SoHAnimJoint();
SoHAnimJoint69->X3DNode::setName(QString("r_tarsal_interphalangeal_1"));
SoHAnimJoint69->setDEF(QString("hanim_r_tarsal_interphalangeal_1"));
SoHAnimJoint69->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint69->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint69->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint68->addChildren(*SoHAnimJoint69);

SoHAnimJoint67->addChildren(*SoHAnimJoint68);

SoHAnimJoint66->addChildren(*SoHAnimJoint67);

SoHAnimJoint65->addChildren(*SoHAnimJoint66);

SoHAnimJoint* SoHAnimJoint70 = new SoHAnimJoint();
SoHAnimJoint70->X3DNode::setName(QString("r_cuneonavicular_2"));
SoHAnimJoint70->setDEF(QString("hanim_r_cuneonavicular_2"));
SoHAnimJoint70->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint70->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint70->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint71 = new SoHAnimJoint();
SoHAnimJoint71->X3DNode::setName(QString("r_tarsometatarsal_2"));
SoHAnimJoint71->setDEF(QString("hanim_r_tarsometatarsal_2"));
SoHAnimJoint71->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint71->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint71->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint72 = new SoHAnimJoint();
SoHAnimJoint72->X3DNode::setName(QString("r_metatarsophalangeal_2"));
SoHAnimJoint72->setDEF(QString("hanim_r_metatarsophalangeal_2"));
SoHAnimJoint72->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint72->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint72->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint73 = new SoHAnimJoint();
SoHAnimJoint73->X3DNode::setName(QString("r_tarsal_proximal_interphalangeal_2"));
SoHAnimJoint73->setDEF(QString("hanim_r_tarsal_proximal_interphalangeal_2"));
SoHAnimJoint73->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint73->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint73->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint74 = new SoHAnimJoint();
SoHAnimJoint74->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint74->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint74->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint74->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint74->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint73->addChildren(*SoHAnimJoint74);

SoHAnimJoint72->addChildren(*SoHAnimJoint73);

SoHAnimJoint71->addChildren(*SoHAnimJoint72);

SoHAnimJoint70->addChildren(*SoHAnimJoint71);

SoHAnimJoint65->addChildren(*SoHAnimJoint70);

SoHAnimJoint* SoHAnimJoint75 = new SoHAnimJoint();
SoHAnimJoint75->X3DNode::setName(QString("r_cuneonavicular_3"));
SoHAnimJoint75->setDEF(QString("hanim_r_cuneonavicular_3"));
SoHAnimJoint75->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint75->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint75->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint76 = new SoHAnimJoint();
SoHAnimJoint76->X3DNode::setName(QString("r_tarsometatarsal_3"));
SoHAnimJoint76->setDEF(QString("hanim_r_tarsometatarsal_3"));
SoHAnimJoint76->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint76->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint76->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint77 = new SoHAnimJoint();
SoHAnimJoint77->X3DNode::setName(QString("r_metatarsophalangeal_3"));
SoHAnimJoint77->setDEF(QString("hanim_r_metatarsophalangeal_3"));
SoHAnimJoint77->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint77->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint77->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint78 = new SoHAnimJoint();
SoHAnimJoint78->X3DNode::setName(QString("r_tarsal_proximal_interphalangeal_3"));
SoHAnimJoint78->setDEF(QString("hanim_r_tarsal_proximal_interphalangeal_3"));
SoHAnimJoint78->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint78->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint78->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint79 = new SoHAnimJoint();
SoHAnimJoint79->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_3"));
SoHAnimJoint79->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_3"));
SoHAnimJoint79->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint79->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint79->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint78->addChildren(*SoHAnimJoint79);

SoHAnimJoint77->addChildren(*SoHAnimJoint78);

SoHAnimJoint76->addChildren(*SoHAnimJoint77);

SoHAnimJoint75->addChildren(*SoHAnimJoint76);

SoHAnimJoint65->addChildren(*SoHAnimJoint75);

SoHAnimJoint64->addChildren(*SoHAnimJoint65);

SoHAnimJoint* SoHAnimJoint80 = new SoHAnimJoint();
SoHAnimJoint80->X3DNode::setName(QString("r_calcaneocuboid"));
SoHAnimJoint80->setDEF(QString("hanim_r_calcaneocuboid"));
SoHAnimJoint80->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint80->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint80->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint81 = new SoHAnimJoint();
SoHAnimJoint81->X3DNode::setName(QString("r_transversetarsal"));
SoHAnimJoint81->setDEF(QString("hanim_r_transversetarsal"));
SoHAnimJoint81->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint81->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint81->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint82 = new SoHAnimJoint();
SoHAnimJoint82->X3DNode::setName(QString("r_tarsometatarsal_4"));
SoHAnimJoint82->setDEF(QString("hanim_r_tarsometatarsal_4"));
SoHAnimJoint82->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint82->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint82->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint83 = new SoHAnimJoint();
SoHAnimJoint83->X3DNode::setName(QString("r_metatarsophalangeal_4"));
SoHAnimJoint83->setDEF(QString("hanim_r_metatarsophalangeal_4"));
SoHAnimJoint83->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint83->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint83->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint84 = new SoHAnimJoint();
SoHAnimJoint84->X3DNode::setName(QString("r_tarsal_proximal_interphalangeal_4"));
SoHAnimJoint84->setDEF(QString("hanim_r_tarsal_proximal_interphalangeal_4"));
SoHAnimJoint84->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint84->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint84->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint85 = new SoHAnimJoint();
SoHAnimJoint85->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_4"));
SoHAnimJoint85->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_4"));
SoHAnimJoint85->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint85->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint85->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint84->addChildren(*SoHAnimJoint85);

SoHAnimJoint83->addChildren(*SoHAnimJoint84);

SoHAnimJoint82->addChildren(*SoHAnimJoint83);

SoHAnimJoint81->addChildren(*SoHAnimJoint82);

SoHAnimJoint* SoHAnimJoint86 = new SoHAnimJoint();
SoHAnimJoint86->X3DNode::setName(QString("r_tarsometatarsal_5"));
SoHAnimJoint86->setDEF(QString("hanim_r_tarsometatarsal_5"));
SoHAnimJoint86->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint86->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint86->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint87 = new SoHAnimJoint();
SoHAnimJoint87->X3DNode::setName(QString("r_metatarsophalangeal_5"));
SoHAnimJoint87->setDEF(QString("hanim_r_metatarsophalangeal_5"));
SoHAnimJoint87->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint87->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint87->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint88 = new SoHAnimJoint();
SoHAnimJoint88->X3DNode::setName(QString("r_tarsal_proximal_interphalangeal_5"));
SoHAnimJoint88->setDEF(QString("hanim_r_tarsal_proximal_interphalangeal_5"));
SoHAnimJoint88->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint88->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint88->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint89 = new SoHAnimJoint();
SoHAnimJoint89->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_5"));
SoHAnimJoint89->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_5"));
SoHAnimJoint89->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint89->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint89->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint88->addChildren(*SoHAnimJoint89);

SoHAnimJoint87->addChildren(*SoHAnimJoint88);

SoHAnimJoint86->addChildren(*SoHAnimJoint87);

SoHAnimJoint81->addChildren(*SoHAnimJoint86);

SoHAnimJoint80->addChildren(*SoHAnimJoint81);

SoHAnimJoint64->addChildren(*SoHAnimJoint80);

SoHAnimJoint63->addChildren(*SoHAnimJoint64);

SoHAnimJoint62->addChildren(*SoHAnimJoint63);

SoHAnimJoint33->addChildren(*SoHAnimJoint62);

SoHAnimJoint32->addChildren(*SoHAnimJoint33);

SoHAnimJoint* SoHAnimJoint90 = new SoHAnimJoint();
SoHAnimJoint90->X3DNode::setName(QString("vl5"));
SoHAnimJoint90->setDEF(QString("hanim_vl5"));
SoHAnimJoint90->setCenter(new float[]{0.0028,1.0568,-0.0776});
SoHAnimJoint90->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint90->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint91 = new SoHAnimJoint();
SoHAnimJoint91->X3DNode::setName(QString("vl4"));
SoHAnimJoint91->setDEF(QString("hanim_vl4"));
SoHAnimJoint91->setCenter(new float[]{0.0035,1.0925,-0.0787});
SoHAnimJoint91->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint91->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint92 = new SoHAnimJoint();
SoHAnimJoint92->X3DNode::setName(QString("vl3"));
SoHAnimJoint92->setDEF(QString("hanim_vl3"));
SoHAnimJoint92->setCenter(new float[]{0.0041,1.1276,-0.0796});
SoHAnimJoint92->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint92->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint93 = new SoHAnimJoint();
SoHAnimJoint93->X3DNode::setName(QString("vl2"));
SoHAnimJoint93->setDEF(QString("hanim_vl2"));
SoHAnimJoint93->setCenter(new float[]{0.0045,1.1546,-0.08});
SoHAnimJoint93->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint93->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint94 = new SoHAnimJoint();
SoHAnimJoint94->X3DNode::setName(QString("vl1"));
SoHAnimJoint94->setDEF(QString("hanim_vl1"));
SoHAnimJoint94->setCenter(new float[]{0.0048,1.1912,-0.0805});
SoHAnimJoint94->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint94->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint95 = new SoHAnimJoint();
SoHAnimJoint95->X3DNode::setName(QString("vt12"));
SoHAnimJoint95->setDEF(QString("hanim_vt12"));
SoHAnimJoint95->setCenter(new float[]{0.0051,1.2278,-0.0808});
SoHAnimJoint95->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint95->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint96 = new SoHAnimJoint();
SoHAnimJoint96->X3DNode::setName(QString("vt11"));
SoHAnimJoint96->setDEF(QString("hanim_vt11"));
SoHAnimJoint96->setCenter(new float[]{0.0053,1.2679,-0.081});
SoHAnimJoint96->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint96->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint97 = new SoHAnimJoint();
SoHAnimJoint97->X3DNode::setName(QString("vt10"));
SoHAnimJoint97->setDEF(QString("hanim_vt10"));
SoHAnimJoint97->setCenter(new float[]{0.0056,1.2848,-0.0822});
SoHAnimJoint97->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint97->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint98 = new SoHAnimJoint();
SoHAnimJoint98->X3DNode::setName(QString("vt9"));
SoHAnimJoint98->setDEF(QString("hanim_vt9"));
SoHAnimJoint98->setCenter(new float[]{0.0057,1.3126,-0.0838});
SoHAnimJoint98->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint98->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint99 = new SoHAnimJoint();
SoHAnimJoint99->X3DNode::setName(QString("vt8"));
SoHAnimJoint99->setDEF(QString("hanim_vt8"));
SoHAnimJoint99->setCenter(new float[]{0.0057,1.3382,-0.0845});
SoHAnimJoint99->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint99->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint100 = new SoHAnimJoint();
SoHAnimJoint100->X3DNode::setName(QString("vt7"));
SoHAnimJoint100->setDEF(QString("hanim_vt7"));
SoHAnimJoint100->setCenter(new float[]{0.0058,1.3625,-0.0833});
SoHAnimJoint100->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint100->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint101 = new SoHAnimJoint();
SoHAnimJoint101->X3DNode::setName(QString("vt6"));
SoHAnimJoint101->setDEF(QString("hanim_vt6"));
SoHAnimJoint101->setCenter(new float[]{0.0059,1.3866,-0.08});
SoHAnimJoint101->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint101->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint102 = new SoHAnimJoint();
SoHAnimJoint102->X3DNode::setName(QString("vt5"));
SoHAnimJoint102->setDEF(QString("hanim_vt5"));
SoHAnimJoint102->setCenter(new float[]{0.006,1.4102,-0.0745});
SoHAnimJoint102->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint102->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint103 = new SoHAnimJoint();
SoHAnimJoint103->X3DNode::setName(QString("vt4"));
SoHAnimJoint103->setDEF(QString("hanim_vt4"));
SoHAnimJoint103->setCenter(new float[]{0.0061,1.432,-0.0675});
SoHAnimJoint103->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint103->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint104 = new SoHAnimJoint();
SoHAnimJoint104->X3DNode::setName(QString("vt3"));
SoHAnimJoint104->setDEF(QString("hanim_vt3"));
SoHAnimJoint104->setCenter(new float[]{0.0062,1.4583,-0.057});
SoHAnimJoint104->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint104->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint105 = new SoHAnimJoint();
SoHAnimJoint105->X3DNode::setName(QString("vt2"));
SoHAnimJoint105->setDEF(QString("hanim_vt2"));
SoHAnimJoint105->setCenter(new float[]{0.0063,1.4761,-0.0484});
SoHAnimJoint105->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint105->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint106 = new SoHAnimJoint();
SoHAnimJoint106->X3DNode::setName(QString("vt1"));
SoHAnimJoint106->setDEF(QString("hanim_vt1"));
SoHAnimJoint106->setCenter(new float[]{0.0065,1.4951,-0.0387});
SoHAnimJoint106->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint106->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint107 = new SoHAnimJoint();
SoHAnimJoint107->X3DNode::setName(QString("vc7"));
SoHAnimJoint107->setDEF(QString("hanim_vc7"));
SoHAnimJoint107->setCenter(new float[]{0.0066,1.5132,-0.0301});
SoHAnimJoint107->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint107->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint108 = new SoHAnimJoint();
SoHAnimJoint108->X3DNode::setName(QString("vc6"));
SoHAnimJoint108->setDEF(QString("hanim_vc6"));
SoHAnimJoint108->setCenter(new float[]{0.0066,1.5357,-0.0143});
SoHAnimJoint108->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint108->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint109 = new SoHAnimJoint();
SoHAnimJoint109->X3DNode::setName(QString("vc5"));
SoHAnimJoint109->setDEF(QString("hanim_vc5"));
SoHAnimJoint109->setCenter(new float[]{0.0066,1.552,-0.0082});
SoHAnimJoint109->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint109->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint110 = new SoHAnimJoint();
SoHAnimJoint110->X3DNode::setName(QString("vc4"));
SoHAnimJoint110->setDEF(QString("hanim_vc4"));
SoHAnimJoint110->setCenter(new float[]{0.0066,1.5662,-0.0084});
SoHAnimJoint110->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint110->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint111 = new SoHAnimJoint();
SoHAnimJoint111->X3DNode::setName(QString("vc3"));
SoHAnimJoint111->setDEF(QString("hanim_vc3"));
SoHAnimJoint111->setCenter(new float[]{0.0066,1.58,-0.0103});
SoHAnimJoint111->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint111->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint112 = new SoHAnimJoint();
SoHAnimJoint112->X3DNode::setName(QString("vc2"));
SoHAnimJoint112->setDEF(QString("hanim_vc2"));
SoHAnimJoint112->setCenter(new float[]{0.0066,1.5928,-0.0103});
SoHAnimJoint112->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint112->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint113 = new SoHAnimJoint();
SoHAnimJoint113->X3DNode::setName(QString("vc1"));
SoHAnimJoint113->setDEF(QString("hanim_vc1"));
SoHAnimJoint113->setCenter(new float[]{0.0066,1.6144,-0.0034});
SoHAnimJoint113->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint113->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint114 = new SoHAnimJoint();
SoHAnimJoint114->X3DNode::setName(QString("skullbase"));
SoHAnimJoint114->setDEF(QString("hanim_skullbase"));
SoHAnimJoint114->setCenter(new float[]{0.0044,1.6209,0.0236});
SoHAnimJoint114->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint114->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint115 = new SoHAnimJoint();
SoHAnimJoint115->X3DNode::setName(QString("l_eyelid_joint"));
SoHAnimJoint115->setDEF(QString("hanim_l_eyelid_joint"));
SoHAnimJoint115->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint115->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint115->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint114->addChildren(*SoHAnimJoint115);

SoHAnimJoint* SoHAnimJoint116 = new SoHAnimJoint();
SoHAnimJoint116->X3DNode::setName(QString("r_eyelid_joint"));
SoHAnimJoint116->setDEF(QString("hanim_r_eyelid_joint"));
SoHAnimJoint116->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint116->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint116->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint114->addChildren(*SoHAnimJoint116);

SoHAnimJoint* SoHAnimJoint117 = new SoHAnimJoint();
SoHAnimJoint117->X3DNode::setName(QString("l_eyeball_joint"));
SoHAnimJoint117->setDEF(QString("hanim_l_eyeball_joint"));
SoHAnimJoint117->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint117->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint117->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint114->addChildren(*SoHAnimJoint117);

SoHAnimJoint* SoHAnimJoint118 = new SoHAnimJoint();
SoHAnimJoint118->X3DNode::setName(QString("r_eyeball_joint"));
SoHAnimJoint118->setDEF(QString("hanim_r_eyeball_joint"));
SoHAnimJoint118->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint118->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint118->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint114->addChildren(*SoHAnimJoint118);

SoHAnimJoint* SoHAnimJoint119 = new SoHAnimJoint();
SoHAnimJoint119->X3DNode::setName(QString("l_eyebrow_joint"));
SoHAnimJoint119->setDEF(QString("hanim_l_eyebrow_joint"));
SoHAnimJoint119->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint119->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint119->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint114->addChildren(*SoHAnimJoint119);

SoHAnimJoint* SoHAnimJoint120 = new SoHAnimJoint();
SoHAnimJoint120->X3DNode::setName(QString("r_eyebrow_joint"));
SoHAnimJoint120->setDEF(QString("hanim_r_eyebrow_joint"));
SoHAnimJoint120->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint120->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint120->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint114->addChildren(*SoHAnimJoint120);

SoHAnimJoint* SoHAnimJoint121 = new SoHAnimJoint();
SoHAnimJoint121->X3DNode::setName(QString("temporomandibular"));
SoHAnimJoint121->setDEF(QString("hanim_temporomandibular"));
SoHAnimJoint121->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint121->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint121->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint114->addChildren(*SoHAnimJoint121);

SoHAnimJoint113->addChildren(*SoHAnimJoint114);

SoHAnimJoint112->addChildren(*SoHAnimJoint113);

SoHAnimJoint111->addChildren(*SoHAnimJoint112);

SoHAnimJoint110->addChildren(*SoHAnimJoint111);

SoHAnimJoint109->addChildren(*SoHAnimJoint110);

SoHAnimJoint108->addChildren(*SoHAnimJoint109);

SoHAnimJoint107->addChildren(*SoHAnimJoint108);

SoHAnimJoint106->addChildren(*SoHAnimJoint107);

SoHAnimJoint* SoHAnimJoint122 = new SoHAnimJoint();
SoHAnimJoint122->X3DNode::setName(QString("l_sternoclavicular"));
SoHAnimJoint122->setDEF(QString("hanim_l_sternoclavicular"));
SoHAnimJoint122->setCenter(new float[]{0.082,1.4488,-0.0353});
SoHAnimJoint122->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint122->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint123 = new SoHAnimJoint();
SoHAnimJoint123->X3DNode::setName(QString("l_acromioclavicular"));
SoHAnimJoint123->setDEF(QString("hanim_l_acromioclavicular"));
SoHAnimJoint123->setCenter(new float[]{0.0962,1.4269,-0.0424});
SoHAnimJoint123->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint123->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint124 = new SoHAnimJoint();
SoHAnimJoint124->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint124->setDEF(QString("hanim_l_shoulder"));
SoHAnimJoint124->setCenter(new float[]{0.2029,1.4376,-0.0387});
SoHAnimJoint124->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint124->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint125 = new SoHAnimJoint();
SoHAnimJoint125->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint125->setDEF(QString("hanim_l_elbow"));
SoHAnimJoint125->setCenter(new float[]{0.2014,1.1357,-0.0682});
SoHAnimJoint125->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint125->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint126 = new SoHAnimJoint();
SoHAnimJoint126->X3DNode::setName(QString("l_radiocarpal"));
SoHAnimJoint126->setDEF(QString("hanim_l_radiocarpal"));
SoHAnimJoint126->setCenter(new float[]{0.1984,0.8663,-0.0583});
SoHAnimJoint126->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint126->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint127 = new SoHAnimJoint();
SoHAnimJoint127->X3DNode::setName(QString("l_midcarpal_1"));
SoHAnimJoint127->setDEF(QString("hanim_l_midcarpal_1"));
SoHAnimJoint127->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint127->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint127->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint128 = new SoHAnimJoint();
SoHAnimJoint128->X3DNode::setName(QString("l_carpometacarpal_1"));
SoHAnimJoint128->setDEF(QString("hanim_l_carpometacarpal_1"));
SoHAnimJoint128->setCenter(new float[]{0.1924,0.8472,-0.0534});
SoHAnimJoint128->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint128->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint129 = new SoHAnimJoint();
SoHAnimJoint129->X3DNode::setName(QString("l_metacarpophalangeal_1"));
SoHAnimJoint129->setDEF(QString("hanim_l_metacarpophalangeal_1"));
SoHAnimJoint129->setCenter(new float[]{0.1951,0.8226,0.0246});
SoHAnimJoint129->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint129->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint130 = new SoHAnimJoint();
SoHAnimJoint130->X3DNode::setName(QString("l_carpal_interphalangeal_1"));
SoHAnimJoint130->setDEF(QString("hanim_l_carpal_interphalangeal_1"));
SoHAnimJoint130->setCenter(new float[]{0.1955,0.8159,0.0464});
SoHAnimJoint130->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint130->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint129->addChildren(*SoHAnimJoint130);

SoHAnimJoint128->addChildren(*SoHAnimJoint129);

SoHAnimJoint127->addChildren(*SoHAnimJoint128);

SoHAnimJoint126->addChildren(*SoHAnimJoint127);

SoHAnimJoint* SoHAnimJoint131 = new SoHAnimJoint();
SoHAnimJoint131->X3DNode::setName(QString("l_midcarpal_2"));
SoHAnimJoint131->setDEF(QString("hanim_l_midcarpal_2"));
SoHAnimJoint131->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint131->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint131->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint132 = new SoHAnimJoint();
SoHAnimJoint132->X3DNode::setName(QString("l_carpometacarpal_2"));
SoHAnimJoint132->setDEF(QString("hanim_l_carpometacarpal_2"));
SoHAnimJoint132->setCenter(new float[]{0.1983,0.8024,-0.028});
SoHAnimJoint132->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint132->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint133 = new SoHAnimJoint();
SoHAnimJoint133->X3DNode::setName(QString("l_metacarpophalangeal_2"));
SoHAnimJoint133->setDEF(QString("hanim_l_metacarpophalangeal_2"));
SoHAnimJoint133->setCenter(new float[]{0.1983,0.7815,-0.028});
SoHAnimJoint133->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint133->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint134 = new SoHAnimJoint();
SoHAnimJoint134->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint134->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint134->setCenter(new float[]{0.2017,0.7363,-0.0248});
SoHAnimJoint134->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint134->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint135 = new SoHAnimJoint();
SoHAnimJoint135->X3DNode::setName(QString("l_carpal_distal_interphalangeal_2"));
SoHAnimJoint135->setDEF(QString("hanim_l_carpal_distal_interphalangeal_2"));
SoHAnimJoint135->setCenter(new float[]{0.2028,0.7139,-0.0236});
SoHAnimJoint135->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint135->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint134->addChildren(*SoHAnimJoint135);

SoHAnimJoint133->addChildren(*SoHAnimJoint134);

SoHAnimJoint132->addChildren(*SoHAnimJoint133);

SoHAnimJoint131->addChildren(*SoHAnimJoint132);

SoHAnimJoint126->addChildren(*SoHAnimJoint131);

SoHAnimJoint* SoHAnimJoint136 = new SoHAnimJoint();
SoHAnimJoint136->X3DNode::setName(QString("l_midcarpal_3"));
SoHAnimJoint136->setDEF(QString("hanim_l_midcarpal_3"));
SoHAnimJoint136->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint136->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint136->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint137 = new SoHAnimJoint();
SoHAnimJoint137->X3DNode::setName(QString("l_carpometacarpal_3"));
SoHAnimJoint137->setDEF(QString("hanim_l_carpometacarpal_3"));
SoHAnimJoint137->setCenter(new float[]{0.1987,0.8029,-0.053});
SoHAnimJoint137->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint137->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint138 = new SoHAnimJoint();
SoHAnimJoint138->X3DNode::setName(QString("l_metacarpophalangeal_3"));
SoHAnimJoint138->setDEF(QString("hanim_l_metacarpophalangeal_3"));
SoHAnimJoint138->setCenter(new float[]{0.1987,0.7818,-0.053});
SoHAnimJoint138->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint138->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint139 = new SoHAnimJoint();
SoHAnimJoint139->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint139->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint139->setCenter(new float[]{0.2013,0.7273,-0.0503});
SoHAnimJoint139->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint139->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint140 = new SoHAnimJoint();
SoHAnimJoint140->X3DNode::setName(QString("l_carpal_distal_interphalangeal_3"));
SoHAnimJoint140->setDEF(QString("hanim_l_carpal_distal_interphalangeal_3"));
SoHAnimJoint140->setCenter(new float[]{0.2026,0.7011,-0.0494});
SoHAnimJoint140->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint140->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint139->addChildren(*SoHAnimJoint140);

SoHAnimJoint138->addChildren(*SoHAnimJoint139);

SoHAnimJoint137->addChildren(*SoHAnimJoint138);

SoHAnimJoint136->addChildren(*SoHAnimJoint137);

SoHAnimJoint126->addChildren(*SoHAnimJoint136);

SoHAnimJoint* SoHAnimJoint141 = new SoHAnimJoint();
SoHAnimJoint141->X3DNode::setName(QString("l_midcarpal_4_5"));
SoHAnimJoint141->setDEF(QString("hanim_l_midcarpal_4_5"));
SoHAnimJoint141->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint141->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint141->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint142 = new SoHAnimJoint();
SoHAnimJoint142->X3DNode::setName(QString("l_carpometacarpal_4"));
SoHAnimJoint142->setDEF(QString("hanim_l_carpometacarpal_4"));
SoHAnimJoint142->setCenter(new float[]{0.1956,0.8019,-0.0794});
SoHAnimJoint142->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint142->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint143 = new SoHAnimJoint();
SoHAnimJoint143->X3DNode::setName(QString("l_metacarpophalangeal_4"));
SoHAnimJoint143->setDEF(QString("hanim_l_metacarpophalangeal_4"));
SoHAnimJoint143->setCenter(new float[]{0.1956,0.7815,-0.0794});
SoHAnimJoint143->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint143->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint144 = new SoHAnimJoint();
SoHAnimJoint144->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint144->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint144->setCenter(new float[]{0.1973,0.7287,-0.0777});
SoHAnimJoint144->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint144->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint145 = new SoHAnimJoint();
SoHAnimJoint145->X3DNode::setName(QString("l_carpal_distal_interphalangeal_4"));
SoHAnimJoint145->setDEF(QString("hanim_l_carpal_distal_interphalangeal_4"));
SoHAnimJoint145->setCenter(new float[]{0.1983,0.7045,-0.0767});
SoHAnimJoint145->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint145->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint144->addChildren(*SoHAnimJoint145);

SoHAnimJoint143->addChildren(*SoHAnimJoint144);

SoHAnimJoint142->addChildren(*SoHAnimJoint143);

SoHAnimJoint141->addChildren(*SoHAnimJoint142);

SoHAnimJoint* SoHAnimJoint146 = new SoHAnimJoint();
SoHAnimJoint146->X3DNode::setName(QString("l_carpometacarpal_5"));
SoHAnimJoint146->setDEF(QString("hanim_l_carpometacarpal_5"));
SoHAnimJoint146->setCenter(new float[]{0.1925,0.8066,-0.1036});
SoHAnimJoint146->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint146->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint147 = new SoHAnimJoint();
SoHAnimJoint147->X3DNode::setName(QString("l_metacarpophalangeal_5"));
SoHAnimJoint147->setDEF(QString("hanim_l_metacarpophalangeal_5"));
SoHAnimJoint147->setCenter(new float[]{0.1925,0.7866,-0.1036});
SoHAnimJoint147->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint147->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint148 = new SoHAnimJoint();
SoHAnimJoint148->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint148->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint148->setCenter(new float[]{0.1938,0.7452,-0.1024});
SoHAnimJoint148->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint148->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint149 = new SoHAnimJoint();
SoHAnimJoint149->X3DNode::setName(QString("l_carpal_distal_interphalangeal_5"));
SoHAnimJoint149->setDEF(QString("hanim_l_carpal_distal_interphalangeal_5"));
SoHAnimJoint149->setCenter(new float[]{0.1948,0.7277,-0.1017});
SoHAnimJoint149->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint149->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint148->addChildren(*SoHAnimJoint149);

SoHAnimJoint147->addChildren(*SoHAnimJoint148);

SoHAnimJoint146->addChildren(*SoHAnimJoint147);

SoHAnimJoint141->addChildren(*SoHAnimJoint146);

SoHAnimJoint126->addChildren(*SoHAnimJoint141);

SoHAnimJoint125->addChildren(*SoHAnimJoint126);

SoHAnimJoint124->addChildren(*SoHAnimJoint125);

SoHAnimJoint123->addChildren(*SoHAnimJoint124);

SoHAnimJoint122->addChildren(*SoHAnimJoint123);

SoHAnimJoint106->addChildren(*SoHAnimJoint122);

SoHAnimJoint* SoHAnimJoint150 = new SoHAnimJoint();
SoHAnimJoint150->X3DNode::setName(QString("r_sternoclavicular"));
SoHAnimJoint150->setDEF(QString("hanim_r_sternoclavicular"));
SoHAnimJoint150->setCenter(new float[]{-0.0694,1.46,-0.033});
SoHAnimJoint150->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint150->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint151 = new SoHAnimJoint();
SoHAnimJoint151->X3DNode::setName(QString("r_acromioclavicular"));
SoHAnimJoint151->setDEF(QString("hanim_r_acromioclavicular"));
SoHAnimJoint151->setCenter(new float[]{-0.0836,1.4281,-0.0401});
SoHAnimJoint151->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint151->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint152 = new SoHAnimJoint();
SoHAnimJoint152->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint152->setDEF(QString("hanim_r_shoulder"));
SoHAnimJoint152->setCenter(new float[]{-0.1907,1.4407,-0.0325});
SoHAnimJoint152->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint152->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint153 = new SoHAnimJoint();
SoHAnimJoint153->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint153->setDEF(QString("hanim_r_elbow"));
SoHAnimJoint153->setCenter(new float[]{-0.1949,1.1388,-0.062});
SoHAnimJoint153->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint153->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint154 = new SoHAnimJoint();
SoHAnimJoint154->X3DNode::setName(QString("r_radiocarpal"));
SoHAnimJoint154->setDEF(QString("hanim_r_radiocarpal"));
SoHAnimJoint154->setCenter(new float[]{-0.1959,0.8694,-0.0521});
SoHAnimJoint154->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint154->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint155 = new SoHAnimJoint();
SoHAnimJoint155->X3DNode::setName(QString("r_midcarpal_1"));
SoHAnimJoint155->setDEF(QString("hanim_r_midcarpal_1"));
SoHAnimJoint155->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint155->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint155->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint156 = new SoHAnimJoint();
SoHAnimJoint156->X3DNode::setName(QString("r_carpometacarpal_1"));
SoHAnimJoint156->setDEF(QString("hanim_r_carpometacarpal_1"));
SoHAnimJoint156->setCenter(new float[]{-0.1899,0.8502,-0.0473});
SoHAnimJoint156->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint156->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint157 = new SoHAnimJoint();
SoHAnimJoint157->X3DNode::setName(QString("r_metacarpophalangeal_1"));
SoHAnimJoint157->setDEF(QString("hanim_r_metacarpophalangeal_1"));
SoHAnimJoint157->setCenter(new float[]{-0.1874,0.8256,0.0306});
SoHAnimJoint157->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint157->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint158 = new SoHAnimJoint();
SoHAnimJoint158->X3DNode::setName(QString("r_carpal_interphalangeal_1"));
SoHAnimJoint158->setDEF(QString("hanim_r_carpal_interphalangeal_1"));
SoHAnimJoint158->setCenter(new float[]{-0.1864,0.819,0.0506});
SoHAnimJoint158->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint158->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint157->addChildren(*SoHAnimJoint158);

SoHAnimJoint156->addChildren(*SoHAnimJoint157);

SoHAnimJoint155->addChildren(*SoHAnimJoint156);

SoHAnimJoint154->addChildren(*SoHAnimJoint155);

SoHAnimJoint* SoHAnimJoint159 = new SoHAnimJoint();
SoHAnimJoint159->X3DNode::setName(QString("r_midcarpal_2"));
SoHAnimJoint159->setDEF(QString("hanim_r_midcarpal_2"));
SoHAnimJoint159->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint159->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint159->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint160 = new SoHAnimJoint();
SoHAnimJoint160->X3DNode::setName(QString("r_carpometacarpal_2"));
SoHAnimJoint160->setDEF(QString("hanim_r_carpometacarpal_2"));
SoHAnimJoint160->setCenter(new float[]{-0.1961,0.8055,-0.0218});
SoHAnimJoint160->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint160->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint161 = new SoHAnimJoint();
SoHAnimJoint161->X3DNode::setName(QString("r_metacarpophalangeal_2"));
SoHAnimJoint161->setDEF(QString("hanim_r_metacarpophalangeal_2"));
SoHAnimJoint161->setCenter(new float[]{-0.1961,0.7846,-0.0218});
SoHAnimJoint161->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint161->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint162 = new SoHAnimJoint();
SoHAnimJoint162->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint162->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint162->setCenter(new float[]{-0.1954,0.7393,-0.0185});
SoHAnimJoint162->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint162->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint163 = new SoHAnimJoint();
SoHAnimJoint163->X3DNode::setName(QString("r_carpal_distal_interphalangeal_2"));
SoHAnimJoint163->setDEF(QString("hanim_r_carpal_distal_interphalangeal_2"));
SoHAnimJoint163->setCenter(new float[]{-0.1945,0.7169,-0.0173});
SoHAnimJoint163->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint163->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint162->addChildren(*SoHAnimJoint163);

SoHAnimJoint161->addChildren(*SoHAnimJoint162);

SoHAnimJoint160->addChildren(*SoHAnimJoint161);

SoHAnimJoint159->addChildren(*SoHAnimJoint160);

SoHAnimJoint154->addChildren(*SoHAnimJoint159);

SoHAnimJoint* SoHAnimJoint164 = new SoHAnimJoint();
SoHAnimJoint164->X3DNode::setName(QString("r_midcarpal_3"));
SoHAnimJoint164->setDEF(QString("hanim_r_midcarpal_3"));
SoHAnimJoint164->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint164->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint164->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint165 = new SoHAnimJoint();
SoHAnimJoint165->X3DNode::setName(QString("r_carpometacarpal_3"));
SoHAnimJoint165->setDEF(QString("hanim_r_carpometacarpal_3"));
SoHAnimJoint165->setCenter(new float[]{-0.1972,0.806,-0.0468});
SoHAnimJoint165->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint165->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint166 = new SoHAnimJoint();
SoHAnimJoint166->X3DNode::setName(QString("r_metacarpophalangeal_3"));
SoHAnimJoint166->setDEF(QString("hanim_r_metacarpophalangeal_3"));
SoHAnimJoint166->setCenter(new float[]{-0.1972,0.7849,-0.0468});
SoHAnimJoint166->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint166->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint167 = new SoHAnimJoint();
SoHAnimJoint167->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint167->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint167->setCenter(new float[]{-0.195,0.7304,-0.0441});
SoHAnimJoint167->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint167->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint168 = new SoHAnimJoint();
SoHAnimJoint168->X3DNode::setName(QString("r_carpal_distal_interphalangeal_3"));
SoHAnimJoint168->setDEF(QString("hanim_r_carpal_distal_interphalangeal_3"));
SoHAnimJoint168->setCenter(new float[]{-0.1939,0.7042,-0.0432});
SoHAnimJoint168->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint168->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint167->addChildren(*SoHAnimJoint168);

SoHAnimJoint166->addChildren(*SoHAnimJoint167);

SoHAnimJoint165->addChildren(*SoHAnimJoint166);

SoHAnimJoint164->addChildren(*SoHAnimJoint165);

SoHAnimJoint154->addChildren(*SoHAnimJoint164);

SoHAnimJoint* SoHAnimJoint169 = new SoHAnimJoint();
SoHAnimJoint169->X3DNode::setName(QString("r_midcarpal_4_5"));
SoHAnimJoint169->setDEF(QString("hanim_r_midcarpal_4_5"));
SoHAnimJoint169->setCenter(new float[]{0.0,1.0,0.0});
SoHAnimJoint169->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint169->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint170 = new SoHAnimJoint();
SoHAnimJoint170->X3DNode::setName(QString("r_carpometacarpal_4"));
SoHAnimJoint170->setDEF(QString("hanim_r_carpometacarpal_4"));
SoHAnimJoint170->setCenter(new float[]{-0.1951,0.8049,-0.0732});
SoHAnimJoint170->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint170->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint171 = new SoHAnimJoint();
SoHAnimJoint171->X3DNode::setName(QString("r_metacarpophalangeal_4"));
SoHAnimJoint171->setDEF(QString("hanim_r_metacarpophalangeal_4"));
SoHAnimJoint171->setCenter(new float[]{-0.1951,0.7845,-0.0732});
SoHAnimJoint171->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint171->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint172 = new SoHAnimJoint();
SoHAnimJoint172->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint172->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint172->setCenter(new float[]{-0.192,0.7318,-0.0716});
SoHAnimJoint172->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint172->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint173 = new SoHAnimJoint();
SoHAnimJoint173->X3DNode::setName(QString("r_carpal_distal_interphalangeal_4"));
SoHAnimJoint173->setDEF(QString("hanim_r_carpal_distal_interphalangeal_4"));
SoHAnimJoint173->setCenter(new float[]{-0.1908,0.7077,-0.0706});
SoHAnimJoint173->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint173->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint172->addChildren(*SoHAnimJoint173);

SoHAnimJoint171->addChildren(*SoHAnimJoint172);

SoHAnimJoint170->addChildren(*SoHAnimJoint171);

SoHAnimJoint169->addChildren(*SoHAnimJoint170);

SoHAnimJoint* SoHAnimJoint174 = new SoHAnimJoint();
SoHAnimJoint174->X3DNode::setName(QString("r_carpometacarpal_5"));
SoHAnimJoint174->setDEF(QString("hanim_r_carpometacarpal_5"));
SoHAnimJoint174->setCenter(new float[]{-0.1926,0.8096,-0.0975});
SoHAnimJoint174->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint174->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint175 = new SoHAnimJoint();
SoHAnimJoint175->X3DNode::setName(QString("r_metacarpophalangeal_5"));
SoHAnimJoint175->setDEF(QString("hanim_r_metacarpophalangeal_5"));
SoHAnimJoint175->setCenter(new float[]{-0.1926,0.7896,-0.0975});
SoHAnimJoint175->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint175->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint176 = new SoHAnimJoint();
SoHAnimJoint176->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint176->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint176->setCenter(new float[]{-0.1902,0.7483,-0.0963});
SoHAnimJoint176->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint176->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint* SoHAnimJoint177 = new SoHAnimJoint();
SoHAnimJoint177->X3DNode::setName(QString("r_carpal_distal_interphalangeal_5"));
SoHAnimJoint177->setDEF(QString("hanim_r_carpal_distal_interphalangeal_5"));
SoHAnimJoint177->setCenter(new float[]{-0.1908,0.754,-0.096});
SoHAnimJoint177->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint177->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint176->addChildren(*SoHAnimJoint177);

SoHAnimJoint175->addChildren(*SoHAnimJoint176);

SoHAnimJoint174->addChildren(*SoHAnimJoint175);

SoHAnimJoint169->addChildren(*SoHAnimJoint174);

SoHAnimJoint154->addChildren(*SoHAnimJoint169);

SoHAnimJoint153->addChildren(*SoHAnimJoint154);

SoHAnimJoint152->addChildren(*SoHAnimJoint153);

SoHAnimJoint151->addChildren(*SoHAnimJoint152);

SoHAnimJoint150->addChildren(*SoHAnimJoint151);

SoHAnimJoint106->addChildren(*SoHAnimJoint150);

SoHAnimJoint105->addChildren(*SoHAnimJoint106);

SoHAnimJoint104->addChildren(*SoHAnimJoint105);

SoHAnimJoint103->addChildren(*SoHAnimJoint104);

SoHAnimJoint102->addChildren(*SoHAnimJoint103);

SoHAnimJoint101->addChildren(*SoHAnimJoint102);

SoHAnimJoint100->addChildren(*SoHAnimJoint101);

SoHAnimJoint99->addChildren(*SoHAnimJoint100);

SoHAnimJoint98->addChildren(*SoHAnimJoint99);

SoHAnimJoint97->addChildren(*SoHAnimJoint98);

SoHAnimJoint96->addChildren(*SoHAnimJoint97);

SoHAnimJoint95->addChildren(*SoHAnimJoint96);

SoHAnimJoint94->addChildren(*SoHAnimJoint95);

SoHAnimJoint93->addChildren(*SoHAnimJoint94);

SoHAnimJoint92->addChildren(*SoHAnimJoint93);

SoHAnimJoint91->addChildren(*SoHAnimJoint92);

SoHAnimJoint90->addChildren(*SoHAnimJoint91);

SoHAnimJoint32->addChildren(*SoHAnimJoint90);

SoHAnimHumanoid31->setSkeleton(*SoHAnimJoint32);

SoHAnimJoint* SoHAnimJoint178 = new SoHAnimJoint();
SoHAnimJoint178->setUSE(QString("hanim_humanoid_root"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint178);

SoHAnimJoint* SoHAnimJoint179 = new SoHAnimJoint();
SoHAnimJoint179->setUSE(QString("hanim_sacroiliac"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint179);

SoHAnimJoint* SoHAnimJoint180 = new SoHAnimJoint();
SoHAnimJoint180->setUSE(QString("hanim_l_hip"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint180);

SoHAnimJoint* SoHAnimJoint181 = new SoHAnimJoint();
SoHAnimJoint181->setUSE(QString("hanim_l_knee"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint181);

SoHAnimJoint* SoHAnimJoint182 = new SoHAnimJoint();
SoHAnimJoint182->setUSE(QString("hanim_l_talocrural"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint182);

SoHAnimJoint* SoHAnimJoint183 = new SoHAnimJoint();
SoHAnimJoint183->setUSE(QString("hanim_l_talocalcaneonavicular"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint183);

SoHAnimJoint* SoHAnimJoint184 = new SoHAnimJoint();
SoHAnimJoint184->setUSE(QString("hanim_l_cuneonavicular_1"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint184);

SoHAnimJoint* SoHAnimJoint185 = new SoHAnimJoint();
SoHAnimJoint185->setUSE(QString("hanim_l_tarsometatarsal_1"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint185);

SoHAnimJoint* SoHAnimJoint186 = new SoHAnimJoint();
SoHAnimJoint186->setUSE(QString("hanim_l_metatarsophalangeal_1"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint186);

SoHAnimJoint* SoHAnimJoint187 = new SoHAnimJoint();
SoHAnimJoint187->setUSE(QString("hanim_l_tarsal_interphalangeal_1"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint187);

SoHAnimJoint* SoHAnimJoint188 = new SoHAnimJoint();
SoHAnimJoint188->setUSE(QString("hanim_l_cuneonavicular_2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint188);

SoHAnimJoint* SoHAnimJoint189 = new SoHAnimJoint();
SoHAnimJoint189->setUSE(QString("hanim_l_tarsometatarsal_2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint189);

SoHAnimJoint* SoHAnimJoint190 = new SoHAnimJoint();
SoHAnimJoint190->setUSE(QString("hanim_l_metatarsophalangeal_2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint190);

SoHAnimJoint* SoHAnimJoint191 = new SoHAnimJoint();
SoHAnimJoint191->setUSE(QString("hanim_l_tarsal_proximal_interphalangeal_2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint191);

SoHAnimJoint* SoHAnimJoint192 = new SoHAnimJoint();
SoHAnimJoint192->setUSE(QString("hanim_l_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint192);

SoHAnimJoint* SoHAnimJoint193 = new SoHAnimJoint();
SoHAnimJoint193->setUSE(QString("hanim_l_cuneonavicular_3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint193);

SoHAnimJoint* SoHAnimJoint194 = new SoHAnimJoint();
SoHAnimJoint194->setUSE(QString("hanim_l_tarsometatarsal_3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint194);

SoHAnimJoint* SoHAnimJoint195 = new SoHAnimJoint();
SoHAnimJoint195->setUSE(QString("hanim_l_metatarsophalangeal_3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint195);

SoHAnimJoint* SoHAnimJoint196 = new SoHAnimJoint();
SoHAnimJoint196->setUSE(QString("hanim_l_tarsal_proximal_interphalangeal_3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint196);

SoHAnimJoint* SoHAnimJoint197 = new SoHAnimJoint();
SoHAnimJoint197->setUSE(QString("hanim_l_tarsal_distal_interphalangeal_3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint197);

SoHAnimJoint* SoHAnimJoint198 = new SoHAnimJoint();
SoHAnimJoint198->setUSE(QString("hanim_l_calcaneocuboid"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint198);

SoHAnimJoint* SoHAnimJoint199 = new SoHAnimJoint();
SoHAnimJoint199->setUSE(QString("hanim_l_transversetarsal"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint199);

SoHAnimJoint* SoHAnimJoint200 = new SoHAnimJoint();
SoHAnimJoint200->setUSE(QString("hanim_l_tarsometatarsal_4"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint200);

SoHAnimJoint* SoHAnimJoint201 = new SoHAnimJoint();
SoHAnimJoint201->setUSE(QString("hanim_l_metatarsophalangeal_4"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint201);

SoHAnimJoint* SoHAnimJoint202 = new SoHAnimJoint();
SoHAnimJoint202->setUSE(QString("hanim_l_tarsal_proximal_interphalangeal_4"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint202);

SoHAnimJoint* SoHAnimJoint203 = new SoHAnimJoint();
SoHAnimJoint203->setUSE(QString("hanim_l_tarsal_distal_interphalangeal_4"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint203);

SoHAnimJoint* SoHAnimJoint204 = new SoHAnimJoint();
SoHAnimJoint204->setUSE(QString("hanim_l_tarsometatarsal_5"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint204);

SoHAnimJoint* SoHAnimJoint205 = new SoHAnimJoint();
SoHAnimJoint205->setUSE(QString("hanim_l_metatarsophalangeal_5"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint205);

SoHAnimJoint* SoHAnimJoint206 = new SoHAnimJoint();
SoHAnimJoint206->setUSE(QString("hanim_l_tarsal_proximal_interphalangeal_5"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint206);

SoHAnimJoint* SoHAnimJoint207 = new SoHAnimJoint();
SoHAnimJoint207->setUSE(QString("hanim_l_tarsal_distal_interphalangeal_5"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint207);

SoHAnimJoint* SoHAnimJoint208 = new SoHAnimJoint();
SoHAnimJoint208->setUSE(QString("hanim_r_hip"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint208);

SoHAnimJoint* SoHAnimJoint209 = new SoHAnimJoint();
SoHAnimJoint209->setUSE(QString("hanim_r_knee"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint209);

SoHAnimJoint* SoHAnimJoint210 = new SoHAnimJoint();
SoHAnimJoint210->setUSE(QString("hanim_r_talocrural"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint210);

SoHAnimJoint* SoHAnimJoint211 = new SoHAnimJoint();
SoHAnimJoint211->setUSE(QString("hanim_r_talocalcaneonavicular"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint211);

SoHAnimJoint* SoHAnimJoint212 = new SoHAnimJoint();
SoHAnimJoint212->setUSE(QString("hanim_r_cuneonavicular_1"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint212);

SoHAnimJoint* SoHAnimJoint213 = new SoHAnimJoint();
SoHAnimJoint213->setUSE(QString("hanim_r_tarsometatarsal_1"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint213);

SoHAnimJoint* SoHAnimJoint214 = new SoHAnimJoint();
SoHAnimJoint214->setUSE(QString("hanim_r_metatarsophalangeal_1"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint214);

SoHAnimJoint* SoHAnimJoint215 = new SoHAnimJoint();
SoHAnimJoint215->setUSE(QString("hanim_r_tarsal_interphalangeal_1"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint215);

SoHAnimJoint* SoHAnimJoint216 = new SoHAnimJoint();
SoHAnimJoint216->setUSE(QString("hanim_r_cuneonavicular_2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint216);

SoHAnimJoint* SoHAnimJoint217 = new SoHAnimJoint();
SoHAnimJoint217->setUSE(QString("hanim_r_tarsometatarsal_2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint217);

SoHAnimJoint* SoHAnimJoint218 = new SoHAnimJoint();
SoHAnimJoint218->setUSE(QString("hanim_r_metatarsophalangeal_2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint218);

SoHAnimJoint* SoHAnimJoint219 = new SoHAnimJoint();
SoHAnimJoint219->setUSE(QString("hanim_r_tarsal_proximal_interphalangeal_2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint219);

SoHAnimJoint* SoHAnimJoint220 = new SoHAnimJoint();
SoHAnimJoint220->setUSE(QString("hanim_r_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint220);

SoHAnimJoint* SoHAnimJoint221 = new SoHAnimJoint();
SoHAnimJoint221->setUSE(QString("hanim_r_cuneonavicular_3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint221);

SoHAnimJoint* SoHAnimJoint222 = new SoHAnimJoint();
SoHAnimJoint222->setUSE(QString("hanim_r_tarsometatarsal_3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint222);

SoHAnimJoint* SoHAnimJoint223 = new SoHAnimJoint();
SoHAnimJoint223->setUSE(QString("hanim_r_metatarsophalangeal_3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint223);

SoHAnimJoint* SoHAnimJoint224 = new SoHAnimJoint();
SoHAnimJoint224->setUSE(QString("hanim_r_tarsal_proximal_interphalangeal_3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint224);

SoHAnimJoint* SoHAnimJoint225 = new SoHAnimJoint();
SoHAnimJoint225->setUSE(QString("hanim_r_tarsal_distal_interphalangeal_3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint225);

SoHAnimJoint* SoHAnimJoint226 = new SoHAnimJoint();
SoHAnimJoint226->setUSE(QString("hanim_r_calcaneocuboid"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint226);

SoHAnimJoint* SoHAnimJoint227 = new SoHAnimJoint();
SoHAnimJoint227->setUSE(QString("hanim_r_transversetarsal"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint227);

SoHAnimJoint* SoHAnimJoint228 = new SoHAnimJoint();
SoHAnimJoint228->setUSE(QString("hanim_r_tarsometatarsal_4"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint228);

SoHAnimJoint* SoHAnimJoint229 = new SoHAnimJoint();
SoHAnimJoint229->setUSE(QString("hanim_r_metatarsophalangeal_4"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint229);

SoHAnimJoint* SoHAnimJoint230 = new SoHAnimJoint();
SoHAnimJoint230->setUSE(QString("hanim_r_tarsal_proximal_interphalangeal_4"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint230);

SoHAnimJoint* SoHAnimJoint231 = new SoHAnimJoint();
SoHAnimJoint231->setUSE(QString("hanim_r_tarsal_distal_interphalangeal_4"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint231);

SoHAnimJoint* SoHAnimJoint232 = new SoHAnimJoint();
SoHAnimJoint232->setUSE(QString("hanim_r_tarsometatarsal_5"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint232);

SoHAnimJoint* SoHAnimJoint233 = new SoHAnimJoint();
SoHAnimJoint233->setUSE(QString("hanim_r_metatarsophalangeal_5"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint233);

SoHAnimJoint* SoHAnimJoint234 = new SoHAnimJoint();
SoHAnimJoint234->setUSE(QString("hanim_r_tarsal_proximal_interphalangeal_5"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint234);

SoHAnimJoint* SoHAnimJoint235 = new SoHAnimJoint();
SoHAnimJoint235->setUSE(QString("hanim_r_tarsal_distal_interphalangeal_5"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint235);

SoHAnimJoint* SoHAnimJoint236 = new SoHAnimJoint();
SoHAnimJoint236->setUSE(QString("hanim_vl5"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint236);

SoHAnimJoint* SoHAnimJoint237 = new SoHAnimJoint();
SoHAnimJoint237->setUSE(QString("hanim_vl4"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint237);

SoHAnimJoint* SoHAnimJoint238 = new SoHAnimJoint();
SoHAnimJoint238->setUSE(QString("hanim_vl3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint238);

SoHAnimJoint* SoHAnimJoint239 = new SoHAnimJoint();
SoHAnimJoint239->setUSE(QString("hanim_vl2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint239);

SoHAnimJoint* SoHAnimJoint240 = new SoHAnimJoint();
SoHAnimJoint240->setUSE(QString("hanim_vl1"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint240);

SoHAnimJoint* SoHAnimJoint241 = new SoHAnimJoint();
SoHAnimJoint241->setUSE(QString("hanim_vt12"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint241);

SoHAnimJoint* SoHAnimJoint242 = new SoHAnimJoint();
SoHAnimJoint242->setUSE(QString("hanim_vt11"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint242);

SoHAnimJoint* SoHAnimJoint243 = new SoHAnimJoint();
SoHAnimJoint243->setUSE(QString("hanim_vt10"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint243);

SoHAnimJoint* SoHAnimJoint244 = new SoHAnimJoint();
SoHAnimJoint244->setUSE(QString("hanim_vt9"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint244);

SoHAnimJoint* SoHAnimJoint245 = new SoHAnimJoint();
SoHAnimJoint245->setUSE(QString("hanim_vt8"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint245);

SoHAnimJoint* SoHAnimJoint246 = new SoHAnimJoint();
SoHAnimJoint246->setUSE(QString("hanim_vt7"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint246);

SoHAnimJoint* SoHAnimJoint247 = new SoHAnimJoint();
SoHAnimJoint247->setUSE(QString("hanim_vt6"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint247);

SoHAnimJoint* SoHAnimJoint248 = new SoHAnimJoint();
SoHAnimJoint248->setUSE(QString("hanim_vt5"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint248);

SoHAnimJoint* SoHAnimJoint249 = new SoHAnimJoint();
SoHAnimJoint249->setUSE(QString("hanim_vt4"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint249);

SoHAnimJoint* SoHAnimJoint250 = new SoHAnimJoint();
SoHAnimJoint250->setUSE(QString("hanim_vt3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint250);

SoHAnimJoint* SoHAnimJoint251 = new SoHAnimJoint();
SoHAnimJoint251->setUSE(QString("hanim_vt2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint251);

SoHAnimJoint* SoHAnimJoint252 = new SoHAnimJoint();
SoHAnimJoint252->setUSE(QString("hanim_vt1"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint252);

SoHAnimJoint* SoHAnimJoint253 = new SoHAnimJoint();
SoHAnimJoint253->setUSE(QString("hanim_vc7"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint253);

SoHAnimJoint* SoHAnimJoint254 = new SoHAnimJoint();
SoHAnimJoint254->setUSE(QString("hanim_vc6"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint254);

SoHAnimJoint* SoHAnimJoint255 = new SoHAnimJoint();
SoHAnimJoint255->setUSE(QString("hanim_vc5"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint255);

SoHAnimJoint* SoHAnimJoint256 = new SoHAnimJoint();
SoHAnimJoint256->setUSE(QString("hanim_vc4"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint256);

SoHAnimJoint* SoHAnimJoint257 = new SoHAnimJoint();
SoHAnimJoint257->setUSE(QString("hanim_vc3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint257);

SoHAnimJoint* SoHAnimJoint258 = new SoHAnimJoint();
SoHAnimJoint258->setUSE(QString("hanim_vc2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint258);

SoHAnimJoint* SoHAnimJoint259 = new SoHAnimJoint();
SoHAnimJoint259->setUSE(QString("hanim_vc1"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint259);

SoHAnimJoint* SoHAnimJoint260 = new SoHAnimJoint();
SoHAnimJoint260->setUSE(QString("hanim_skullbase"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint260);

SoHAnimJoint* SoHAnimJoint261 = new SoHAnimJoint();
SoHAnimJoint261->setUSE(QString("hanim_l_eyelid_joint"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint261);

SoHAnimJoint* SoHAnimJoint262 = new SoHAnimJoint();
SoHAnimJoint262->setUSE(QString("hanim_r_eyelid_joint"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint262);

SoHAnimJoint* SoHAnimJoint263 = new SoHAnimJoint();
SoHAnimJoint263->setUSE(QString("hanim_l_eyeball_joint"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint263);

SoHAnimJoint* SoHAnimJoint264 = new SoHAnimJoint();
SoHAnimJoint264->setUSE(QString("hanim_r_eyeball_joint"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint264);

SoHAnimJoint* SoHAnimJoint265 = new SoHAnimJoint();
SoHAnimJoint265->setUSE(QString("hanim_l_eyebrow_joint"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint265);

SoHAnimJoint* SoHAnimJoint266 = new SoHAnimJoint();
SoHAnimJoint266->setUSE(QString("hanim_r_eyebrow_joint"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint266);

SoHAnimJoint* SoHAnimJoint267 = new SoHAnimJoint();
SoHAnimJoint267->setUSE(QString("hanim_temporomandibular"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint267);

SoHAnimJoint* SoHAnimJoint268 = new SoHAnimJoint();
SoHAnimJoint268->setUSE(QString("hanim_l_sternoclavicular"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint268);

SoHAnimJoint* SoHAnimJoint269 = new SoHAnimJoint();
SoHAnimJoint269->setUSE(QString("hanim_l_acromioclavicular"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint269);

SoHAnimJoint* SoHAnimJoint270 = new SoHAnimJoint();
SoHAnimJoint270->setUSE(QString("hanim_l_shoulder"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint270);

SoHAnimJoint* SoHAnimJoint271 = new SoHAnimJoint();
SoHAnimJoint271->setUSE(QString("hanim_l_elbow"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint271);

SoHAnimJoint* SoHAnimJoint272 = new SoHAnimJoint();
SoHAnimJoint272->setUSE(QString("hanim_l_radiocarpal"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint272);

SoHAnimJoint* SoHAnimJoint273 = new SoHAnimJoint();
SoHAnimJoint273->setUSE(QString("hanim_l_midcarpal_1"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint273);

SoHAnimJoint* SoHAnimJoint274 = new SoHAnimJoint();
SoHAnimJoint274->setUSE(QString("hanim_l_carpometacarpal_1"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint274);

SoHAnimJoint* SoHAnimJoint275 = new SoHAnimJoint();
SoHAnimJoint275->setUSE(QString("hanim_l_metacarpophalangeal_1"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint275);

SoHAnimJoint* SoHAnimJoint276 = new SoHAnimJoint();
SoHAnimJoint276->setUSE(QString("hanim_l_carpal_interphalangeal_1"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint276);

SoHAnimJoint* SoHAnimJoint277 = new SoHAnimJoint();
SoHAnimJoint277->setUSE(QString("hanim_l_midcarpal_2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint277);

SoHAnimJoint* SoHAnimJoint278 = new SoHAnimJoint();
SoHAnimJoint278->setUSE(QString("hanim_l_carpometacarpal_2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint278);

SoHAnimJoint* SoHAnimJoint279 = new SoHAnimJoint();
SoHAnimJoint279->setUSE(QString("hanim_l_metacarpophalangeal_2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint279);

SoHAnimJoint* SoHAnimJoint280 = new SoHAnimJoint();
SoHAnimJoint280->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint280);

SoHAnimJoint* SoHAnimJoint281 = new SoHAnimJoint();
SoHAnimJoint281->setUSE(QString("hanim_l_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint281);

SoHAnimJoint* SoHAnimJoint282 = new SoHAnimJoint();
SoHAnimJoint282->setUSE(QString("hanim_l_midcarpal_3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint282);

SoHAnimJoint* SoHAnimJoint283 = new SoHAnimJoint();
SoHAnimJoint283->setUSE(QString("hanim_l_carpometacarpal_3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint283);

SoHAnimJoint* SoHAnimJoint284 = new SoHAnimJoint();
SoHAnimJoint284->setUSE(QString("hanim_l_metacarpophalangeal_3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint284);

SoHAnimJoint* SoHAnimJoint285 = new SoHAnimJoint();
SoHAnimJoint285->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint285);

SoHAnimJoint* SoHAnimJoint286 = new SoHAnimJoint();
SoHAnimJoint286->setUSE(QString("hanim_l_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint286);

SoHAnimJoint* SoHAnimJoint287 = new SoHAnimJoint();
SoHAnimJoint287->setUSE(QString("hanim_l_midcarpal_4_5"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint287);

SoHAnimJoint* SoHAnimJoint288 = new SoHAnimJoint();
SoHAnimJoint288->setUSE(QString("hanim_l_carpometacarpal_4"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint288);

SoHAnimJoint* SoHAnimJoint289 = new SoHAnimJoint();
SoHAnimJoint289->setUSE(QString("hanim_l_metacarpophalangeal_4"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint289);

SoHAnimJoint* SoHAnimJoint290 = new SoHAnimJoint();
SoHAnimJoint290->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint290);

SoHAnimJoint* SoHAnimJoint291 = new SoHAnimJoint();
SoHAnimJoint291->setUSE(QString("hanim_l_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint291);

SoHAnimJoint* SoHAnimJoint292 = new SoHAnimJoint();
SoHAnimJoint292->setUSE(QString("hanim_l_carpometacarpal_5"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint292);

SoHAnimJoint* SoHAnimJoint293 = new SoHAnimJoint();
SoHAnimJoint293->setUSE(QString("hanim_l_metacarpophalangeal_5"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint293);

SoHAnimJoint* SoHAnimJoint294 = new SoHAnimJoint();
SoHAnimJoint294->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint294);

SoHAnimJoint* SoHAnimJoint295 = new SoHAnimJoint();
SoHAnimJoint295->setUSE(QString("hanim_l_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint295);

SoHAnimJoint* SoHAnimJoint296 = new SoHAnimJoint();
SoHAnimJoint296->setUSE(QString("hanim_r_sternoclavicular"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint296);

SoHAnimJoint* SoHAnimJoint297 = new SoHAnimJoint();
SoHAnimJoint297->setUSE(QString("hanim_r_acromioclavicular"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint297);

SoHAnimJoint* SoHAnimJoint298 = new SoHAnimJoint();
SoHAnimJoint298->setUSE(QString("hanim_r_shoulder"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint298);

SoHAnimJoint* SoHAnimJoint299 = new SoHAnimJoint();
SoHAnimJoint299->setUSE(QString("hanim_r_elbow"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint299);

SoHAnimJoint* SoHAnimJoint300 = new SoHAnimJoint();
SoHAnimJoint300->setUSE(QString("hanim_r_radiocarpal"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint300);

SoHAnimJoint* SoHAnimJoint301 = new SoHAnimJoint();
SoHAnimJoint301->setUSE(QString("hanim_r_midcarpal_1"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint301);

SoHAnimJoint* SoHAnimJoint302 = new SoHAnimJoint();
SoHAnimJoint302->setUSE(QString("hanim_r_carpometacarpal_1"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint302);

SoHAnimJoint* SoHAnimJoint303 = new SoHAnimJoint();
SoHAnimJoint303->setUSE(QString("hanim_r_metacarpophalangeal_1"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint303);

SoHAnimJoint* SoHAnimJoint304 = new SoHAnimJoint();
SoHAnimJoint304->setUSE(QString("hanim_r_carpal_interphalangeal_1"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint304);

SoHAnimJoint* SoHAnimJoint305 = new SoHAnimJoint();
SoHAnimJoint305->setUSE(QString("hanim_r_midcarpal_2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint305);

SoHAnimJoint* SoHAnimJoint306 = new SoHAnimJoint();
SoHAnimJoint306->setUSE(QString("hanim_r_carpometacarpal_2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint306);

SoHAnimJoint* SoHAnimJoint307 = new SoHAnimJoint();
SoHAnimJoint307->setUSE(QString("hanim_r_metacarpophalangeal_2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint307);

SoHAnimJoint* SoHAnimJoint308 = new SoHAnimJoint();
SoHAnimJoint308->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint308);

SoHAnimJoint* SoHAnimJoint309 = new SoHAnimJoint();
SoHAnimJoint309->setUSE(QString("hanim_r_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint309);

SoHAnimJoint* SoHAnimJoint310 = new SoHAnimJoint();
SoHAnimJoint310->setUSE(QString("hanim_r_midcarpal_3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint310);

SoHAnimJoint* SoHAnimJoint311 = new SoHAnimJoint();
SoHAnimJoint311->setUSE(QString("hanim_r_carpometacarpal_3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint311);

SoHAnimJoint* SoHAnimJoint312 = new SoHAnimJoint();
SoHAnimJoint312->setUSE(QString("hanim_r_metacarpophalangeal_3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint312);

SoHAnimJoint* SoHAnimJoint313 = new SoHAnimJoint();
SoHAnimJoint313->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint313);

SoHAnimJoint* SoHAnimJoint314 = new SoHAnimJoint();
SoHAnimJoint314->setUSE(QString("hanim_r_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint314);

SoHAnimJoint* SoHAnimJoint315 = new SoHAnimJoint();
SoHAnimJoint315->setUSE(QString("hanim_r_midcarpal_4_5"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint315);

SoHAnimJoint* SoHAnimJoint316 = new SoHAnimJoint();
SoHAnimJoint316->setUSE(QString("hanim_r_carpometacarpal_4"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint316);

SoHAnimJoint* SoHAnimJoint317 = new SoHAnimJoint();
SoHAnimJoint317->setUSE(QString("hanim_r_metacarpophalangeal_4"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint317);

SoHAnimJoint* SoHAnimJoint318 = new SoHAnimJoint();
SoHAnimJoint318->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint318);

SoHAnimJoint* SoHAnimJoint319 = new SoHAnimJoint();
SoHAnimJoint319->setUSE(QString("hanim_r_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint319);

SoHAnimJoint* SoHAnimJoint320 = new SoHAnimJoint();
SoHAnimJoint320->setUSE(QString("hanim_r_carpometacarpal_5"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint320);

SoHAnimJoint* SoHAnimJoint321 = new SoHAnimJoint();
SoHAnimJoint321->setUSE(QString("hanim_r_metacarpophalangeal_5"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint321);

SoHAnimJoint* SoHAnimJoint322 = new SoHAnimJoint();
SoHAnimJoint322->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint322);

SoHAnimJoint* SoHAnimJoint323 = new SoHAnimJoint();
SoHAnimJoint323->setUSE(QString("hanim_r_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid31->setJoints(*SoHAnimJoint323);

SoNode11->addChild(*SoHAnimHumanoid31);

SoSceneManager0->setSceneGraph(*SoNode11);

return 0;
}
