
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
Socomponent2->setLevel(3);
Sohead1->addChild(*Socomponent2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("title"));
Someta3->setContent(QString("BvhUniversityWisconsionExample1.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("BVH file conversion: *enter description here, short-sentence summaries preferred*"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("*enter name of original author here*"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("*enter date of initial version here*"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("translated"));
Someta7->setContent(QString("2 September 2023"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("modified"));
Someta8->setContent(QString("Mon, 15 Sep 2025 05:21:02 GMT"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("reference"));
Someta9->setContent(QString("BvhUniversityWIsconsionExample1.bvh"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("https://TODO/UniversityWIsconsionExample1.bvh"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("reference"));
Someta11->setContent(QString("https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#MOCAP"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("generator"));
Someta12->setContent(QString("Java BVH to X3D Converter, org.web3d.x3d.hanim.bvh package"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("generator"));
Someta13->setContent(QString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"));
Sohead1->addMeta(*Someta13);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode14 = new SoNode();
SoWorldInfo* SoWorldInfo15 = new SoWorldInfo();
SoWorldInfo15->setTitle(QString("BvhUniversityWisconsionExample1.x3d"));
SoNode14->addChild(*SoWorldInfo15);

SoNavigationInfo* SoNavigationInfo16 = new SoNavigationInfo();
SoNode14->addChild(*SoNavigationInfo16);

SoGroup* SoGroup17 = new SoGroup();
SoGroup17->setDEF(QString("BvhUniversityWisconsionExample1_BvhToX3dConversionImportInformation"));
SoMetadataSet* SoMetadataSet18 = new SoMetadataSet();
SoMetadataSet18->X3DNode::setName(QString("BvhToHAnimNameConversionTable"));
SoMetadataString* SoMetadataString19 = new SoMetadataString();
SoMetadataString19->X3DNode::setName(QString("ROOT_Hips"));
SoMetadataString19->X3DNode::setReference(QString("ROOT"));
SoMetadataString19->setValue(new QString[]{QString("humanoid_root"), QString("sacrum")}, 2);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString19);

SoMetadataString* SoMetadataString20 = new SoMetadataString();
SoMetadataString20->X3DNode::setName(QString("Chest"));
SoMetadataString20->X3DNode::setReference(QString("JOINT"));
SoMetadataString20->setValue(new QString[]{QString("vl5"), QString("l5")}, 2);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString20);

SoMetadataString* SoMetadataString21 = new SoMetadataString();
SoMetadataString21->X3DNode::setName(QString("Neck"));
SoMetadataString21->X3DNode::setReference(QString("JOINT"));
SoMetadataString21->setValue(new QString[]{QString("Neck"), QString("vl5_to_Neck")}, 2);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString21);

SoMetadataString* SoMetadataString22 = new SoMetadataString();
SoMetadataString22->X3DNode::setName(QString("Head"));
SoMetadataString22->X3DNode::setReference(QString("JOINT"));
SoMetadataString22->setValue(new QString[]{QString("skullbase"), QString("skull")}, 2);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString22);

SoMetadataString* SoMetadataString23 = new SoMetadataString();
SoMetadataString23->X3DNode::setName(QString("HeadSite"));
SoMetadataString23->X3DNode::setReference(QString("Site"));
SoMetadataString23->setValue(new QString[]{QString("skullbase_tip")}, 1);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString23);

SoMetadataString* SoMetadataString24 = new SoMetadataString();
SoMetadataString24->X3DNode::setName(QString("LeftCollar"));
SoMetadataString24->X3DNode::setReference(QString("JOINT"));
SoMetadataString24->setValue(new QString[]{QString("LeftCollar"), QString("vl5_to_LeftCollar")}, 2);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString24);

SoMetadataString* SoMetadataString25 = new SoMetadataString();
SoMetadataString25->X3DNode::setName(QString("LeftUpArm"));
SoMetadataString25->X3DNode::setReference(QString("JOINT"));
SoMetadataString25->setValue(new QString[]{QString("LeftUpArm"), QString("LeftCollar_to_LeftUpArm")}, 2);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString25);

SoMetadataString* SoMetadataString26 = new SoMetadataString();
SoMetadataString26->X3DNode::setName(QString("LeftLowArm"));
SoMetadataString26->X3DNode::setReference(QString("JOINT"));
SoMetadataString26->setValue(new QString[]{QString("LeftLowArm"), QString("LeftUpArm_to_LeftLowArm")}, 2);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString26);

SoMetadataString* SoMetadataString27 = new SoMetadataString();
SoMetadataString27->X3DNode::setName(QString("LeftHand"));
SoMetadataString27->X3DNode::setReference(QString("JOINT"));
SoMetadataString27->setValue(new QString[]{QString("LeftHand"), QString("LeftLowArm_to_LeftHand")}, 2);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString27);

SoMetadataString* SoMetadataString28 = new SoMetadataString();
SoMetadataString28->X3DNode::setName(QString("LeftHandSite"));
SoMetadataString28->X3DNode::setReference(QString("Site"));
SoMetadataString28->setValue(new QString[]{QString("LeftHand_tip")}, 1);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString28);

SoMetadataString* SoMetadataString29 = new SoMetadataString();
SoMetadataString29->X3DNode::setName(QString("RightCollar"));
SoMetadataString29->X3DNode::setReference(QString("JOINT"));
SoMetadataString29->setValue(new QString[]{QString("RightCollar"), QString("vl5_to_RightCollar")}, 2);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString29);

SoMetadataString* SoMetadataString30 = new SoMetadataString();
SoMetadataString30->X3DNode::setName(QString("RightUpArm"));
SoMetadataString30->X3DNode::setReference(QString("JOINT"));
SoMetadataString30->setValue(new QString[]{QString("RightUpArm"), QString("RightCollar_to_RightUpArm")}, 2);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString30);

SoMetadataString* SoMetadataString31 = new SoMetadataString();
SoMetadataString31->X3DNode::setName(QString("RightLowArm"));
SoMetadataString31->X3DNode::setReference(QString("JOINT"));
SoMetadataString31->setValue(new QString[]{QString("RightLowArm"), QString("RightUpArm_to_RightLowArm")}, 2);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString31);

SoMetadataString* SoMetadataString32 = new SoMetadataString();
SoMetadataString32->X3DNode::setName(QString("RightHand"));
SoMetadataString32->X3DNode::setReference(QString("JOINT"));
SoMetadataString32->setValue(new QString[]{QString("RightHand"), QString("RightLowArm_to_RightHand")}, 2);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString32);

SoMetadataString* SoMetadataString33 = new SoMetadataString();
SoMetadataString33->X3DNode::setName(QString("RightHandSite"));
SoMetadataString33->X3DNode::setReference(QString("Site"));
SoMetadataString33->setValue(new QString[]{QString("RightHand_tip")}, 1);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString33);

SoMetadataString* SoMetadataString34 = new SoMetadataString();
SoMetadataString34->X3DNode::setName(QString("LeftUpLeg"));
SoMetadataString34->X3DNode::setReference(QString("JOINT"));
SoMetadataString34->setValue(new QString[]{QString("LeftUpLeg"), QString("humanoid_root_to_LeftUpLeg")}, 2);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString34);

SoMetadataString* SoMetadataString35 = new SoMetadataString();
SoMetadataString35->X3DNode::setName(QString("LeftLowLeg"));
SoMetadataString35->X3DNode::setReference(QString("JOINT"));
SoMetadataString35->setValue(new QString[]{QString("LeftLowLeg"), QString("LeftUpLeg_to_LeftLowLeg")}, 2);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString35);

SoMetadataString* SoMetadataString36 = new SoMetadataString();
SoMetadataString36->X3DNode::setName(QString("LeftFoot"));
SoMetadataString36->X3DNode::setReference(QString("JOINT"));
SoMetadataString36->setValue(new QString[]{QString("LeftFoot"), QString("LeftLowLeg_to_LeftFoot")}, 2);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString36);

SoMetadataString* SoMetadataString37 = new SoMetadataString();
SoMetadataString37->X3DNode::setName(QString("LeftFootSite"));
SoMetadataString37->X3DNode::setReference(QString("Site"));
SoMetadataString37->setValue(new QString[]{QString("LeftFoot_tip")}, 1);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString37);

SoMetadataString* SoMetadataString38 = new SoMetadataString();
SoMetadataString38->X3DNode::setName(QString("RightUpLeg"));
SoMetadataString38->X3DNode::setReference(QString("JOINT"));
SoMetadataString38->setValue(new QString[]{QString("RightUpLeg"), QString("humanoid_root_to_RightUpLeg")}, 2);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString38);

SoMetadataString* SoMetadataString39 = new SoMetadataString();
SoMetadataString39->X3DNode::setName(QString("RightLowLeg"));
SoMetadataString39->X3DNode::setReference(QString("JOINT"));
SoMetadataString39->setValue(new QString[]{QString("RightLowLeg"), QString("RightUpLeg_to_RightLowLeg")}, 2);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString39);

SoMetadataString* SoMetadataString40 = new SoMetadataString();
SoMetadataString40->X3DNode::setName(QString("RightFoot"));
SoMetadataString40->X3DNode::setReference(QString("JOINT"));
SoMetadataString40->setValue(new QString[]{QString("RightFoot"), QString("RightLowLeg_to_RightFoot")}, 2);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString40);

SoMetadataString* SoMetadataString41 = new SoMetadataString();
SoMetadataString41->X3DNode::setName(QString("RightFootSite"));
SoMetadataString41->X3DNode::setReference(QString("Site"));
SoMetadataString41->setValue(new QString[]{QString("RightFoot_tip")}, 1);
SoMetadataSet18->setValue((X3DNode *)&SoMetadataString41);

SoGroup17->setMetadata(*SoMetadataSet18);

SoNode14->addChild(*SoGroup17);

SoTransform* SoTransform42 = new SoTransform();
SoTransform42->setDEF(QString("InitialPositionScaled"));
SoTransform42->setTranslation(new float[]{0.0,1.244,0.0});
SoViewpoint* SoViewpoint43 = new SoViewpoint();
SoViewpoint43->setDescription(QString("BvhUniversityWisconsionExample1 model BVH to X3D conversion, from 8m"));
SoViewpoint43->setPosition(new float[]{0.0,0.0,8.0});
SoTransform42->addChild(*SoViewpoint43);

SoViewpoint* SoViewpoint44 = new SoViewpoint();
SoViewpoint44->setDescription(QString("BvhUniversityWisconsionExample1 initial motion position"));
SoViewpoint44->setPosition(new float[]{0.803,3.501,16.836});
SoTransform42->addChild(*SoViewpoint44);

SoViewpoint* SoViewpoint45 = new SoViewpoint();
SoViewpoint45->setDescription(QString("BvhUniversityWisconsionExample1 final motion position"));
SoViewpoint45->setPosition(new float[]{0.781,3.51,16.647});
SoTransform42->addChild(*SoViewpoint45);

SoNode14->addChild(*SoTransform42);

SoHAnimHumanoid* SoHAnimHumanoid46 = new SoHAnimHumanoid();
SoHAnimHumanoid46->setDEF(QString("BvhUniversityWisconsionExample1_ROOT_Hips"));
SoHAnimHumanoid46->X3DNode::setName(QString("ROOT_Hips"));
SoMetadataSet* SoMetadataSet47 = new SoMetadataSet();
SoMetadataSet47->X3DNode::setName(QString("HAnimHumanoid.info"));
SoMetadataSet47->X3DNode::setReference(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
SoMetadataString* SoMetadataString48 = new SoMetadataString();
SoMetadataString48->X3DNode::setName(QString("authorEmail"));
SoMetadataString48->setValue(new QString[]{QString("*TODO*")}, 1);
SoMetadataSet47->setValue((X3DNode *)&SoMetadataString48);

SoMetadataString* SoMetadataString49 = new SoMetadataString();
SoMetadataString49->X3DNode::setName(QString("authorName"));
SoMetadataString49->setValue(new QString[]{QString("*TODO*")}, 1);
SoMetadataSet47->setValue((X3DNode *)&SoMetadataString49);

SoMetadataString* SoMetadataString50 = new SoMetadataString();
SoMetadataString50->X3DNode::setName(QString("copyright"));
SoMetadataString50->setValue(new QString[]{QString("Copyright (c) 2023")}, 1);
SoMetadataSet47->setValue((X3DNode *)&SoMetadataString50);

SoMetadataString* SoMetadataString51 = new SoMetadataString();
SoMetadataString51->X3DNode::setName(QString("humanoidVersion"));
SoMetadataString51->setValue(new QString[]{QString("*TODO*")}, 1);
SoMetadataSet47->setValue((X3DNode *)&SoMetadataString51);

SoMetadataString* SoMetadataString52 = new SoMetadataString();
SoMetadataString52->X3DNode::setName(QString("usageDescription"));
SoMetadataString52->setValue(new QString[]{QString("*TODO*")}, 1);
SoMetadataSet47->setValue((X3DNode *)&SoMetadataString52);

SoHAnimHumanoid46->setMetadata(*SoMetadataSet47);

SoHAnimJoint* SoHAnimJoint53 = new SoHAnimJoint();
SoHAnimJoint53->setDEF(QString("BvhUniversityWisconsionExample1_humanoid_root"));
SoHAnimJoint53->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint53->setTranslation(new float[]{0.7849403,3.508388,8.680851});
SoHAnimJoint53->setRotation(new float[]{-0.0184530858032817,-0.992698784706892,-0.119199859336308,2.9151883640198});
SoHAnimJoint53->setScale(new float[]{0.1,0.1,0.1});
SoHAnimSegment* SoHAnimSegment54 = new SoHAnimSegment();
SoHAnimSegment54->setDEF(QString("BvhUniversityWisconsionExample1_sacrum"));
SoHAnimSegment54->X3DNode::setName(QString("sacrum"));
SoSwitch* SoSwitch55 = new SoSwitch();
SoSwitch55->setWhichChoice(0);
SoGroup* SoGroup56 = new SoGroup();
SoTouchSensor* SoTouchSensor57 = new SoTouchSensor();
SoTouchSensor57->setDescription(QString("HAnimHumanoid ROOT ROOT_Hips, HAnimSegment sacrum"));
SoGroup56->addChild(*SoTouchSensor57);

SoShape* SoShape58 = new SoShape();
SoShape58->setDEF(QString("HAnimRootShape"));
SoVRMLAppearance* SoVRMLAppearance59 = new SoVRMLAppearance();
SoMaterial* SoMaterial60 = new SoMaterial();
SoMaterial60->setDEF(QString("HAnimRootMaterial"));
SoMaterial60->setDiffuseColor(new float[]{0.8,0.0,0.0});
SoMaterial60->setTransparency(0.3);
SoVRMLAppearance59->addChild(*SoMaterial60);

SoShape58->addChild(*SoVRMLAppearance59);

SoSphere* SoSphere61 = new SoSphere();
SoSphere61->setDEF(QString("HAnimJointSphere"));
SoSphere61->setRadius(0.254);
SoShape58->setGeometry(*SoSphere61);

SoGroup56->addChild(*SoShape58);

SoSwitch55->addChild(*SoGroup56);

SoShape* SoShape62 = new SoShape();
SoShape62->setDEF(QString("HAnimJointShape"));
SoVRMLAppearance* SoVRMLAppearance63 = new SoVRMLAppearance();
SoMaterial* SoMaterial64 = new SoMaterial();
SoMaterial64->setDEF(QString("HAnimJointMaterial"));
SoMaterial64->setDiffuseColor(new float[]{0.0,0.0,0.8});
SoMaterial64->setTransparency(0.3);
SoVRMLAppearance63->addChild(*SoMaterial64);

SoShape62->addChild(*SoVRMLAppearance63);

SoSphere* SoSphere65 = new SoSphere();
SoSphere65->setUSE(QString("HAnimJointSphere"));
SoShape62->setGeometry(*SoSphere65);

SoSwitch55->addChild(*SoShape62);

SoShape* SoShape66 = new SoShape();
SoLineSet* SoLineSet67 = new SoLineSet();
SoLineSet67->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA68 = new SoColorRGBA();
SoColorRGBA68->setDEF(QString("HAnimSegmentLineColorRGBA"));
SoColorRGBA68->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 8);
SoLineSet67->addChild(*SoColorRGBA68);

SoCoordinate* SoCoordinate69 = new SoCoordinate();
SoCoordinate69->setPoint(new float[]{0.0,0.0,0.0,0.0,0.0,0.0}, 6);
SoLineSet67->setCoord(*SoCoordinate69);

SoShape66->setGeometry(*SoLineSet67);

SoSwitch55->addChild(*SoShape66);

SoShape* SoShape70 = new SoShape();
SoShape70->setDEF(QString("HAnimSiteShape"));
SoVRMLAppearance* SoVRMLAppearance71 = new SoVRMLAppearance();
SoMaterial* SoMaterial72 = new SoMaterial();
SoMaterial72->setDiffuseColor(new float[]{1.0,0.5,0.0});
SoMaterial72->setTransparency(0.3);
SoVRMLAppearance71->addChild(*SoMaterial72);

SoShape70->addChild(*SoVRMLAppearance71);

SoIndexedFaceSet* SoIndexedFaceSet73 = new SoIndexedFaceSet();
SoIndexedFaceSet73->setDEF(QString("DiamondIFS"));
SoIndexedFaceSet73->setSolid(false);
SoIndexedFaceSet73->setCreaseAngle(0.5);
SoIndexedFaceSet73->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate74 = new SoCoordinate();
SoCoordinate74->setPoint(new float[]{0.0,0.254,0.0,-0.254,0.0,0.0,0.0,0.0,0.254,0.254,0.0,0.0,0.0,0.0,-0.254,0.0,-0.254,0.0}, 18);
SoIndexedFaceSet73->setCoord(*SoCoordinate74);

SoShape70->setGeometry(*SoIndexedFaceSet73);

SoSwitch55->addChild(*SoShape70);

SoShape* SoShape75 = new SoShape();
SoLineSet* SoLineSet76 = new SoLineSet();
SoLineSet76->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA77 = new SoColorRGBA();
SoColorRGBA77->setDEF(QString("HAnimSiteLineColorRGBA"));
SoColorRGBA77->setColor(new float[]{1.0,0.5,0.0,1.0,1.0,0.5,0.0,0.1}, 8);
SoLineSet76->addChild(*SoColorRGBA77);

SoCoordinate* SoCoordinate78 = new SoCoordinate();
SoCoordinate78->setPoint(new float[]{0.0,0.0,0.0,0.0,0.0,0.0}, 6);
SoLineSet76->setCoord(*SoCoordinate78);

SoShape75->setGeometry(*SoLineSet76);

SoSwitch55->addChild(*SoShape75);

SoHAnimSegment54->addChild(SoSwitch55);

SoShape* SoShape79 = new SoShape();
SoLineSet* SoLineSet80 = new SoLineSet();
SoLineSet80->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA81 = new SoColorRGBA();
SoColorRGBA81->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet80->addChild(*SoColorRGBA81);

SoCoordinate* SoCoordinate82 = new SoCoordinate();
SoCoordinate82->setPoint(new float[]{0.0,0.0,0.0,0.0,5.21,0.0}, 6);
SoLineSet80->setCoord(*SoCoordinate82);

SoShape79->setGeometry(*SoLineSet80);

SoHAnimSegment54->addChild(*SoShape79);

SoShape* SoShape83 = new SoShape();
SoLineSet* SoLineSet84 = new SoLineSet();
SoLineSet84->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA85 = new SoColorRGBA();
SoColorRGBA85->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet84->addChild(*SoColorRGBA85);

SoCoordinate* SoCoordinate86 = new SoCoordinate();
SoCoordinate86->setPoint(new float[]{0.0,0.0,0.0,3.91,0.0,0.0}, 6);
SoLineSet84->setCoord(*SoCoordinate86);

SoShape83->setGeometry(*SoLineSet84);

SoHAnimSegment54->addChild(*SoShape83);

SoShape* SoShape87 = new SoShape();
SoLineSet* SoLineSet88 = new SoLineSet();
SoLineSet88->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA89 = new SoColorRGBA();
SoColorRGBA89->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet88->addChild(*SoColorRGBA89);

SoCoordinate* SoCoordinate90 = new SoCoordinate();
SoCoordinate90->setPoint(new float[]{0.0,0.0,0.0,-3.91,0.0,0.0}, 6);
SoLineSet88->setCoord(*SoCoordinate90);

SoShape87->setGeometry(*SoLineSet88);

SoHAnimSegment54->addChild(*SoShape87);

SoHAnimJoint53->addChildren(*SoHAnimSegment54);

SoHAnimJoint* SoHAnimJoint91 = new SoHAnimJoint();
SoHAnimJoint91->setDEF(QString("BvhUniversityWisconsionExample1_vl5"));
SoHAnimJoint91->X3DNode::setName(QString("vl5"));
SoHAnimJoint91->setRotation(new float[]{0.929559139694865,-0.360437334785587,0.0774902155269029,0.820797255601436});
SoHAnimJoint91->setCenter(new float[]{0.0,5.21,0.0});
SoHAnimSegment* SoHAnimSegment92 = new SoHAnimSegment();
SoHAnimSegment92->setDEF(QString("BvhUniversityWisconsionExample1_l5"));
SoHAnimSegment92->X3DNode::setName(QString("l5"));
SoTransform* SoTransform93 = new SoTransform();
SoTransform93->setTranslation(new float[]{0.0,5.21,0.0});
SoTouchSensor* SoTouchSensor94 = new SoTouchSensor();
SoTouchSensor94->setDescription(QString("HAnimJoint Chest vl5, HAnimSegment l5"));
SoTransform93->addChild(*SoTouchSensor94);

SoShape* SoShape95 = new SoShape();
SoShape95->setUSE(QString("HAnimJointShape"));
SoTransform93->addChild(*SoShape95);

SoShape* SoShape96 = new SoShape();
SoLineSet* SoLineSet97 = new SoLineSet();
SoLineSet97->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA98 = new SoColorRGBA();
SoColorRGBA98->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet97->addChild(*SoColorRGBA98);

SoCoordinate* SoCoordinate99 = new SoCoordinate();
SoCoordinate99->setPoint(new float[]{0.0,0.0,0.0,0.0,18.65,0.0}, 6);
SoLineSet97->setCoord(*SoCoordinate99);

SoShape96->setGeometry(*SoLineSet97);

SoTransform93->addChild(*SoShape96);

SoShape* SoShape100 = new SoShape();
SoLineSet* SoLineSet101 = new SoLineSet();
SoLineSet101->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA102 = new SoColorRGBA();
SoColorRGBA102->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet101->addChild(*SoColorRGBA102);

SoCoordinate* SoCoordinate103 = new SoCoordinate();
SoCoordinate103->setPoint(new float[]{0.0,0.0,0.0,1.12,16.23,1.87}, 6);
SoLineSet101->setCoord(*SoCoordinate103);

SoShape100->setGeometry(*SoLineSet101);

SoTransform93->addChild(*SoShape100);

SoShape* SoShape104 = new SoShape();
SoLineSet* SoLineSet105 = new SoLineSet();
SoLineSet105->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA106 = new SoColorRGBA();
SoColorRGBA106->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet105->addChild(*SoColorRGBA106);

SoCoordinate* SoCoordinate107 = new SoCoordinate();
SoCoordinate107->setPoint(new float[]{0.0,0.0,0.0,-1.12,16.23,1.87}, 6);
SoLineSet105->setCoord(*SoCoordinate107);

SoShape104->setGeometry(*SoLineSet105);

SoTransform93->addChild(*SoShape104);

SoHAnimSegment92->addChild(*SoTransform93);

SoHAnimJoint91->addChildren(*SoHAnimSegment92);

SoHAnimJoint* SoHAnimJoint108 = new SoHAnimJoint();
SoHAnimJoint108->setDEF(QString("BvhUniversityWisconsionExample1_Neck"));
SoHAnimJoint108->X3DNode::setName(QString("Neck"));
SoHAnimJoint108->setRotation(new float[]{0.983970484111271,0.0663053900569327,0.16554661472597,0.772979753553571});
SoHAnimJoint108->setCenter(new float[]{0.0,23.86,0.0});
SoHAnimSegment* SoHAnimSegment109 = new SoHAnimSegment();
SoHAnimSegment109->setDEF(QString("BvhUniversityWisconsionExample1_vl5_to_Neck"));
SoHAnimSegment109->X3DNode::setName(QString("vl5_to_Neck"));
SoTransform* SoTransform110 = new SoTransform();
SoTransform110->setTranslation(new float[]{0.0,23.86,0.0});
SoTouchSensor* SoTouchSensor111 = new SoTouchSensor();
SoTouchSensor111->setDescription(QString("HAnimJoint Neck Neck, HAnimSegment vl5_to_Neck"));
SoTransform110->addChild(*SoTouchSensor111);

SoShape* SoShape112 = new SoShape();
SoShape112->setUSE(QString("HAnimJointShape"));
SoTransform110->addChild(*SoShape112);

SoShape* SoShape113 = new SoShape();
SoLineSet* SoLineSet114 = new SoLineSet();
SoLineSet114->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA115 = new SoColorRGBA();
SoColorRGBA115->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet114->addChild(*SoColorRGBA115);

SoCoordinate* SoCoordinate116 = new SoCoordinate();
SoCoordinate116->setPoint(new float[]{0.0,0.0,0.0,0.0,5.45,0.0}, 6);
SoLineSet114->setCoord(*SoCoordinate116);

SoShape113->setGeometry(*SoLineSet114);

SoTransform110->addChild(*SoShape113);

SoHAnimSegment109->addChild(*SoTransform110);

SoHAnimJoint108->addChildren(*SoHAnimSegment109);

SoHAnimJoint* SoHAnimJoint117 = new SoHAnimJoint();
SoHAnimJoint117->setDEF(QString("BvhUniversityWisconsionExample1_skullbase"));
SoHAnimJoint117->X3DNode::setName(QString("skullbase"));
SoHAnimJoint117->setRotation(new float[]{-0.979126474330309,0.150183590569867,-0.136953409556093,0.734508385229556});
SoHAnimJoint117->setCenter(new float[]{0.0,29.31,0.0});
SoHAnimSegment* SoHAnimSegment118 = new SoHAnimSegment();
SoHAnimSegment118->setDEF(QString("BvhUniversityWisconsionExample1_skull"));
SoHAnimSegment118->X3DNode::setName(QString("skull"));
SoTransform* SoTransform119 = new SoTransform();
SoTransform119->setTranslation(new float[]{0.0,29.31,0.0});
SoHAnimSite* SoHAnimSite120 = new SoHAnimSite();
SoHAnimSite120->setDEF(QString("BvhUniversityWisconsionExample1_skull_tip"));
SoHAnimSite120->X3DNode::setName(QString("skull_tip"));
SoHAnimSite120->setTranslation(new float[]{0.0,3.87,0.0});
SoTouchSensor* SoTouchSensor121 = new SoTouchSensor();
SoTouchSensor121->setDescription(QString("HAnimSite skull_tip"));
SoHAnimSite120->addChild(*SoTouchSensor121);

SoShape* SoShape122 = new SoShape();
SoShape122->setUSE(QString("HAnimSiteShape"));
SoHAnimSite120->addChild(*SoShape122);

SoShape* SoShape123 = new SoShape();
SoLineSet* SoLineSet124 = new SoLineSet();
SoLineSet124->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA125 = new SoColorRGBA();
SoColorRGBA125->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet124->addChild(*SoColorRGBA125);

SoCoordinate* SoCoordinate126 = new SoCoordinate();
SoCoordinate126->setPoint(new float[]{0.0,-3.87,0.0,0.0,0.0,0.0}, 6);
SoLineSet124->setCoord(*SoCoordinate126);

SoShape123->setGeometry(*SoLineSet124);

SoHAnimSite120->addChild(*SoShape123);

SoTransform119->addChild(*SoHAnimSite120);

SoTouchSensor* SoTouchSensor127 = new SoTouchSensor();
SoTouchSensor127->setDescription(QString("HAnimJoint Head skullbase, HAnimSegment skull"));
SoTransform119->addChild(*SoTouchSensor127);

SoShape* SoShape128 = new SoShape();
SoShape128->setUSE(QString("HAnimJointShape"));
SoTransform119->addChild(*SoShape128);

SoHAnimSegment118->addChild(*SoTransform119);

SoHAnimJoint117->addChildren(*SoHAnimSegment118);

SoHAnimJoint108->addChildren(*SoHAnimJoint117);

SoHAnimJoint91->addChildren(*SoHAnimJoint108);

SoHAnimJoint* SoHAnimJoint129 = new SoHAnimJoint();
SoHAnimJoint129->setDEF(QString("BvhUniversityWisconsionExample1_LeftCollar"));
SoHAnimJoint129->X3DNode::setName(QString("LeftCollar"));
SoHAnimJoint129->setRotation(new float[]{-0.0400336310146056,0.285571817840178,0.957520780580368,0.318543581718216});
SoHAnimJoint129->setCenter(new float[]{1.12,21.44,1.87});
SoHAnimSegment* SoHAnimSegment130 = new SoHAnimSegment();
SoHAnimSegment130->setDEF(QString("BvhUniversityWisconsionExample1_vl5_to_LeftCollar"));
SoHAnimSegment130->X3DNode::setName(QString("vl5_to_LeftCollar"));
SoTransform* SoTransform131 = new SoTransform();
SoTransform131->setTranslation(new float[]{1.12,21.44,1.87});
SoTouchSensor* SoTouchSensor132 = new SoTouchSensor();
SoTouchSensor132->setDescription(QString("HAnimJoint LeftCollar LeftCollar, HAnimSegment vl5_to_LeftCollar"));
SoTransform131->addChild(*SoTouchSensor132);

SoShape* SoShape133 = new SoShape();
SoShape133->setUSE(QString("HAnimJointShape"));
SoTransform131->addChild(*SoShape133);

SoShape* SoShape134 = new SoShape();
SoLineSet* SoLineSet135 = new SoLineSet();
SoLineSet135->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA136 = new SoColorRGBA();
SoColorRGBA136->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet135->addChild(*SoColorRGBA136);

SoCoordinate* SoCoordinate137 = new SoCoordinate();
SoCoordinate137->setPoint(new float[]{0.0,0.0,0.0,5.54,0.0,0.0}, 6);
SoLineSet135->setCoord(*SoCoordinate137);

SoShape134->setGeometry(*SoLineSet135);

SoTransform131->addChild(*SoShape134);

SoHAnimSegment130->addChild(*SoTransform131);

SoHAnimJoint129->addChildren(*SoHAnimSegment130);

SoHAnimJoint* SoHAnimJoint138 = new SoHAnimJoint();
SoHAnimJoint138->setDEF(QString("BvhUniversityWisconsionExample1_LeftUpArm"));
SoHAnimJoint138->X3DNode::setName(QString("LeftUpArm"));
SoHAnimJoint138->setRotation(new float[]{-0.027309899849048,-0.170484979510911,0.984981746598077,1.66813504770243});
SoHAnimJoint138->setCenter(new float[]{6.66,21.44,1.87});
SoHAnimSegment* SoHAnimSegment139 = new SoHAnimSegment();
SoHAnimSegment139->setDEF(QString("BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm"));
SoHAnimSegment139->X3DNode::setName(QString("LeftCollar_to_LeftUpArm"));
SoTransform* SoTransform140 = new SoTransform();
SoTransform140->setTranslation(new float[]{6.66,21.44,1.87});
SoTouchSensor* SoTouchSensor141 = new SoTouchSensor();
SoTouchSensor141->setDescription(QString("HAnimJoint LeftUpArm LeftUpArm, HAnimSegment LeftCollar_to_LeftUpArm"));
SoTransform140->addChild(*SoTouchSensor141);

SoShape* SoShape142 = new SoShape();
SoShape142->setUSE(QString("HAnimJointShape"));
SoTransform140->addChild(*SoShape142);

SoShape* SoShape143 = new SoShape();
SoLineSet* SoLineSet144 = new SoLineSet();
SoLineSet144->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA145 = new SoColorRGBA();
SoColorRGBA145->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet144->addChild(*SoColorRGBA145);

SoCoordinate* SoCoordinate146 = new SoCoordinate();
SoCoordinate146->setPoint(new float[]{0.0,0.0,0.0,0.0,-11.96,0.0}, 6);
SoLineSet144->setCoord(*SoCoordinate146);

SoShape143->setGeometry(*SoLineSet144);

SoTransform140->addChild(*SoShape143);

SoHAnimSegment139->addChild(*SoTransform140);

SoHAnimJoint138->addChildren(*SoHAnimSegment139);

SoHAnimJoint* SoHAnimJoint147 = new SoHAnimJoint();
SoHAnimJoint147->setDEF(QString("BvhUniversityWisconsionExample1_LeftLowArm"));
SoHAnimJoint147->X3DNode::setName(QString("LeftLowArm"));
SoHAnimJoint147->setRotation(new float[]{-0.998249192144246,0.0587758586859541,-0.00662939055192083,1.65994762916941});
SoHAnimJoint147->setCenter(new float[]{6.66,9.48,1.87});
SoHAnimSegment* SoHAnimSegment148 = new SoHAnimSegment();
SoHAnimSegment148->setDEF(QString("BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm"));
SoHAnimSegment148->X3DNode::setName(QString("LeftUpArm_to_LeftLowArm"));
SoTransform* SoTransform149 = new SoTransform();
SoTransform149->setTranslation(new float[]{6.66,9.48,1.87});
SoTouchSensor* SoTouchSensor150 = new SoTouchSensor();
SoTouchSensor150->setDescription(QString("HAnimJoint LeftLowArm LeftLowArm, HAnimSegment LeftUpArm_to_LeftLowArm"));
SoTransform149->addChild(*SoTouchSensor150);

SoShape* SoShape151 = new SoShape();
SoShape151->setUSE(QString("HAnimJointShape"));
SoTransform149->addChild(*SoShape151);

SoShape* SoShape152 = new SoShape();
SoLineSet* SoLineSet153 = new SoLineSet();
SoLineSet153->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA154 = new SoColorRGBA();
SoColorRGBA154->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet153->addChild(*SoColorRGBA154);

SoCoordinate* SoCoordinate155 = new SoCoordinate();
SoCoordinate155->setPoint(new float[]{0.0,0.0,0.0,0.0,-9.93,0.0}, 6);
SoLineSet153->setCoord(*SoCoordinate155);

SoShape152->setGeometry(*SoLineSet153);

SoTransform149->addChild(*SoShape152);

SoHAnimSegment148->addChild(*SoTransform149);

SoHAnimJoint147->addChildren(*SoHAnimSegment148);

SoHAnimJoint* SoHAnimJoint156 = new SoHAnimJoint();
SoHAnimJoint156->setDEF(QString("BvhUniversityWisconsionExample1_LeftHand"));
SoHAnimJoint156->X3DNode::setName(QString("LeftHand"));
SoHAnimJoint156->setRotation(new float[]{0.404520441533964,0.00251538810905742,0.914525497293667,0.0133189030390886});
SoHAnimJoint156->setCenter(new float[]{6.66,-0.45,1.87});
SoHAnimSegment* SoHAnimSegment157 = new SoHAnimSegment();
SoHAnimSegment157->setDEF(QString("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand"));
SoHAnimSegment157->X3DNode::setName(QString("LeftLowArm_to_LeftHand"));
SoTransform* SoTransform158 = new SoTransform();
SoTransform158->setTranslation(new float[]{6.66,-0.45,1.87});
SoHAnimSite* SoHAnimSite159 = new SoHAnimSite();
SoHAnimSite159->setDEF(QString("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip"));
SoHAnimSite159->X3DNode::setName(QString("LeftLowArm_to_LeftHand_tip"));
SoHAnimSite159->setTranslation(new float[]{0.0,-7.0,0.0});
SoTouchSensor* SoTouchSensor160 = new SoTouchSensor();
SoTouchSensor160->setDescription(QString("HAnimSite LeftLowArm_to_LeftHand_tip"));
SoHAnimSite159->addChild(*SoTouchSensor160);

SoShape* SoShape161 = new SoShape();
SoShape161->setUSE(QString("HAnimSiteShape"));
SoHAnimSite159->addChild(*SoShape161);

SoShape* SoShape162 = new SoShape();
SoLineSet* SoLineSet163 = new SoLineSet();
SoLineSet163->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA164 = new SoColorRGBA();
SoColorRGBA164->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet163->addChild(*SoColorRGBA164);

SoCoordinate* SoCoordinate165 = new SoCoordinate();
SoCoordinate165->setPoint(new float[]{0.0,7.0,0.0,0.0,0.0,0.0}, 6);
SoLineSet163->setCoord(*SoCoordinate165);

SoShape162->setGeometry(*SoLineSet163);

SoHAnimSite159->addChild(*SoShape162);

SoTransform158->addChild(*SoHAnimSite159);

SoTouchSensor* SoTouchSensor166 = new SoTouchSensor();
SoTouchSensor166->setDescription(QString("HAnimJoint LeftHand LeftHand, HAnimSegment LeftLowArm_to_LeftHand"));
SoTransform158->addChild(*SoTouchSensor166);

SoShape* SoShape167 = new SoShape();
SoShape167->setUSE(QString("HAnimJointShape"));
SoTransform158->addChild(*SoShape167);

SoHAnimSegment157->addChild(*SoTransform158);

SoHAnimJoint156->addChildren(*SoHAnimSegment157);

SoHAnimJoint147->addChildren(*SoHAnimJoint156);

SoHAnimJoint138->addChildren(*SoHAnimJoint147);

SoHAnimJoint129->addChildren(*SoHAnimJoint138);

SoHAnimJoint91->addChildren(*SoHAnimJoint129);

SoHAnimJoint* SoHAnimJoint168 = new SoHAnimJoint();
SoHAnimJoint168->setDEF(QString("BvhUniversityWisconsionExample1_RightCollar"));
SoHAnimJoint168->X3DNode::setName(QString("RightCollar"));
SoHAnimJoint168->setRotation(new float[]{-0.0717927567877157,-0.898736438505571,-0.432572091304025,0.383573753513759});
SoHAnimJoint168->setCenter(new float[]{-1.12,21.44,1.87});
SoHAnimSegment* SoHAnimSegment169 = new SoHAnimSegment();
SoHAnimSegment169->setDEF(QString("BvhUniversityWisconsionExample1_vl5_to_RightCollar"));
SoHAnimSegment169->X3DNode::setName(QString("vl5_to_RightCollar"));
SoTransform* SoTransform170 = new SoTransform();
SoTransform170->setTranslation(new float[]{-1.12,21.44,1.87});
SoTouchSensor* SoTouchSensor171 = new SoTouchSensor();
SoTouchSensor171->setDescription(QString("HAnimJoint RightCollar RightCollar, HAnimSegment vl5_to_RightCollar"));
SoTransform170->addChild(*SoTouchSensor171);

SoShape* SoShape172 = new SoShape();
SoShape172->setUSE(QString("HAnimJointShape"));
SoTransform170->addChild(*SoShape172);

SoShape* SoShape173 = new SoShape();
SoLineSet* SoLineSet174 = new SoLineSet();
SoLineSet174->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA175 = new SoColorRGBA();
SoColorRGBA175->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet174->addChild(*SoColorRGBA175);

SoCoordinate* SoCoordinate176 = new SoCoordinate();
SoCoordinate176->setPoint(new float[]{0.0,0.0,0.0,-6.07,0.0,0.0}, 6);
SoLineSet174->setCoord(*SoCoordinate176);

SoShape173->setGeometry(*SoLineSet174);

SoTransform170->addChild(*SoShape173);

SoHAnimSegment169->addChild(*SoTransform170);

SoHAnimJoint168->addChildren(*SoHAnimSegment169);

SoHAnimJoint* SoHAnimJoint177 = new SoHAnimJoint();
SoHAnimJoint177->setDEF(QString("BvhUniversityWisconsionExample1_RightUpArm"));
SoHAnimJoint177->X3DNode::setName(QString("RightUpArm"));
SoHAnimJoint177->setRotation(new float[]{-0.750052184733347,-0.545300751513553,-0.374257679380781,1.93524054510947});
SoHAnimJoint177->setCenter(new float[]{-7.19,21.44,1.87});
SoHAnimSegment* SoHAnimSegment178 = new SoHAnimSegment();
SoHAnimSegment178->setDEF(QString("BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm"));
SoHAnimSegment178->X3DNode::setName(QString("RightCollar_to_RightUpArm"));
SoTransform* SoTransform179 = new SoTransform();
SoTransform179->setTranslation(new float[]{-7.19,21.44,1.87});
SoTouchSensor* SoTouchSensor180 = new SoTouchSensor();
SoTouchSensor180->setDescription(QString("HAnimJoint RightUpArm RightUpArm, HAnimSegment RightCollar_to_RightUpArm"));
SoTransform179->addChild(*SoTouchSensor180);

SoShape* SoShape181 = new SoShape();
SoShape181->setUSE(QString("HAnimJointShape"));
SoTransform179->addChild(*SoShape181);

SoShape* SoShape182 = new SoShape();
SoLineSet* SoLineSet183 = new SoLineSet();
SoLineSet183->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA184 = new SoColorRGBA();
SoColorRGBA184->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet183->addChild(*SoColorRGBA184);

SoCoordinate* SoCoordinate185 = new SoCoordinate();
SoCoordinate185->setPoint(new float[]{0.0,0.0,0.0,0.0,-11.82,0.0}, 6);
SoLineSet183->setCoord(*SoCoordinate185);

SoShape182->setGeometry(*SoLineSet183);

SoTransform179->addChild(*SoShape182);

SoHAnimSegment178->addChild(*SoTransform179);

SoHAnimJoint177->addChildren(*SoHAnimSegment178);

SoHAnimJoint* SoHAnimJoint186 = new SoHAnimJoint();
SoHAnimJoint186->setDEF(QString("BvhUniversityWisconsionExample1_RightLowArm"));
SoHAnimJoint186->X3DNode::setName(QString("RightLowArm"));
SoHAnimJoint186->setRotation(new float[]{-0.942326628906139,0.260683574441484,0.209915693722034,1.36514284873355});
SoHAnimJoint186->setCenter(new float[]{-7.19,9.62,1.87});
SoHAnimSegment* SoHAnimSegment187 = new SoHAnimSegment();
SoHAnimSegment187->setDEF(QString("BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm"));
SoHAnimSegment187->X3DNode::setName(QString("RightUpArm_to_RightLowArm"));
SoTransform* SoTransform188 = new SoTransform();
SoTransform188->setTranslation(new float[]{-7.19,9.62,1.87});
SoTouchSensor* SoTouchSensor189 = new SoTouchSensor();
SoTouchSensor189->setDescription(QString("HAnimJoint RightLowArm RightLowArm, HAnimSegment RightUpArm_to_RightLowArm"));
SoTransform188->addChild(*SoTouchSensor189);

SoShape* SoShape190 = new SoShape();
SoShape190->setUSE(QString("HAnimJointShape"));
SoTransform188->addChild(*SoShape190);

SoShape* SoShape191 = new SoShape();
SoLineSet* SoLineSet192 = new SoLineSet();
SoLineSet192->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA193 = new SoColorRGBA();
SoColorRGBA193->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet192->addChild(*SoColorRGBA193);

SoCoordinate* SoCoordinate194 = new SoCoordinate();
SoCoordinate194->setPoint(new float[]{0.0,0.0,0.0,0.0,-10.65,0.0}, 6);
SoLineSet192->setCoord(*SoCoordinate194);

SoShape191->setGeometry(*SoLineSet192);

SoTransform188->addChild(*SoShape191);

SoHAnimSegment187->addChild(*SoTransform188);

SoHAnimJoint186->addChildren(*SoHAnimSegment187);

SoHAnimJoint* SoHAnimJoint195 = new SoHAnimJoint();
SoHAnimJoint195->setDEF(QString("BvhUniversityWisconsionExample1_RightHand"));
SoHAnimJoint195->X3DNode::setName(QString("RightHand"));
SoHAnimJoint195->setRotation(new float[]{0.487401172792782,0.00827736333346378,-0.87313892480885,0.0323338299925714});
SoHAnimJoint195->setCenter(new float[]{-7.19,-1.03,1.87});
SoHAnimSegment* SoHAnimSegment196 = new SoHAnimSegment();
SoHAnimSegment196->setDEF(QString("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand"));
SoHAnimSegment196->X3DNode::setName(QString("RightLowArm_to_RightHand"));
SoTransform* SoTransform197 = new SoTransform();
SoTransform197->setTranslation(new float[]{-7.19,-1.03,1.87});
SoHAnimSite* SoHAnimSite198 = new SoHAnimSite();
SoHAnimSite198->setDEF(QString("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip"));
SoHAnimSite198->X3DNode::setName(QString("RightLowArm_to_RightHand_tip"));
SoHAnimSite198->setTranslation(new float[]{0.0,-7.0,0.0});
SoTouchSensor* SoTouchSensor199 = new SoTouchSensor();
SoTouchSensor199->setDescription(QString("HAnimSite RightLowArm_to_RightHand_tip"));
SoHAnimSite198->addChild(*SoTouchSensor199);

SoShape* SoShape200 = new SoShape();
SoShape200->setUSE(QString("HAnimSiteShape"));
SoHAnimSite198->addChild(*SoShape200);

SoShape* SoShape201 = new SoShape();
SoLineSet* SoLineSet202 = new SoLineSet();
SoLineSet202->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA203 = new SoColorRGBA();
SoColorRGBA203->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet202->addChild(*SoColorRGBA203);

SoCoordinate* SoCoordinate204 = new SoCoordinate();
SoCoordinate204->setPoint(new float[]{0.0,7.0,0.0,0.0,0.0,0.0}, 6);
SoLineSet202->setCoord(*SoCoordinate204);

SoShape201->setGeometry(*SoLineSet202);

SoHAnimSite198->addChild(*SoShape201);

SoTransform197->addChild(*SoHAnimSite198);

SoTouchSensor* SoTouchSensor205 = new SoTouchSensor();
SoTouchSensor205->setDescription(QString("HAnimJoint RightHand RightHand, HAnimSegment RightLowArm_to_RightHand"));
SoTransform197->addChild(*SoTouchSensor205);

SoShape* SoShape206 = new SoShape();
SoShape206->setUSE(QString("HAnimJointShape"));
SoTransform197->addChild(*SoShape206);

SoHAnimSegment196->addChild(*SoTransform197);

SoHAnimJoint195->addChildren(*SoHAnimSegment196);

SoHAnimJoint186->addChildren(*SoHAnimJoint195);

SoHAnimJoint177->addChildren(*SoHAnimJoint186);

SoHAnimJoint168->addChildren(*SoHAnimJoint177);

SoHAnimJoint91->addChildren(*SoHAnimJoint168);

SoHAnimJoint53->addChildren(*SoHAnimJoint91);

SoHAnimJoint* SoHAnimJoint207 = new SoHAnimJoint();
SoHAnimJoint207->setDEF(QString("BvhUniversityWisconsionExample1_LeftUpLeg"));
SoHAnimJoint207->X3DNode::setName(QString("LeftUpLeg"));
SoHAnimJoint207->setRotation(new float[]{0.798274116909833,-0.0905296906431976,0.595451769150005,0.374616063385567});
SoHAnimJoint207->setCenter(new float[]{3.91,0.0,0.0});
SoHAnimSegment* SoHAnimSegment208 = new SoHAnimSegment();
SoHAnimSegment208->setDEF(QString("BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg"));
SoHAnimSegment208->X3DNode::setName(QString("humanoid_root_to_LeftUpLeg"));
SoTransform* SoTransform209 = new SoTransform();
SoTransform209->setTranslation(new float[]{3.91,0.0,0.0});
SoTouchSensor* SoTouchSensor210 = new SoTouchSensor();
SoTouchSensor210->setDescription(QString("HAnimJoint LeftUpLeg LeftUpLeg, HAnimSegment humanoid_root_to_LeftUpLeg"));
SoTransform209->addChild(*SoTouchSensor210);

SoShape* SoShape211 = new SoShape();
SoShape211->setUSE(QString("HAnimJointShape"));
SoTransform209->addChild(*SoShape211);

SoShape* SoShape212 = new SoShape();
SoLineSet* SoLineSet213 = new SoLineSet();
SoLineSet213->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA214 = new SoColorRGBA();
SoColorRGBA214->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet213->addChild(*SoColorRGBA214);

SoCoordinate* SoCoordinate215 = new SoCoordinate();
SoCoordinate215->setPoint(new float[]{0.0,0.0,0.0,0.0,-18.34,0.0}, 6);
SoLineSet213->setCoord(*SoCoordinate215);

SoShape212->setGeometry(*SoLineSet213);

SoTransform209->addChild(*SoShape212);

SoHAnimSegment208->addChild(*SoTransform209);

SoHAnimJoint207->addChildren(*SoHAnimSegment208);

SoHAnimJoint* SoHAnimJoint216 = new SoHAnimJoint();
SoHAnimJoint216->setDEF(QString("BvhUniversityWisconsionExample1_LeftLowLeg"));
SoHAnimJoint216->X3DNode::setName(QString("LeftLowLeg"));
SoHAnimJoint216->setRotation(new float[]{0.969171949455709,0.159020234805176,0.188197495495361,1.02828103886506});
SoHAnimJoint216->setCenter(new float[]{3.91,-18.34,0.0});
SoHAnimSegment* SoHAnimSegment217 = new SoHAnimSegment();
SoHAnimSegment217->setDEF(QString("BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg"));
SoHAnimSegment217->X3DNode::setName(QString("LeftUpLeg_to_LeftLowLeg"));
SoTransform* SoTransform218 = new SoTransform();
SoTransform218->setTranslation(new float[]{3.91,-18.34,0.0});
SoTouchSensor* SoTouchSensor219 = new SoTouchSensor();
SoTouchSensor219->setDescription(QString("HAnimJoint LeftLowLeg LeftLowLeg, HAnimSegment LeftUpLeg_to_LeftLowLeg"));
SoTransform218->addChild(*SoTouchSensor219);

SoShape* SoShape220 = new SoShape();
SoShape220->setUSE(QString("HAnimJointShape"));
SoTransform218->addChild(*SoShape220);

SoShape* SoShape221 = new SoShape();
SoLineSet* SoLineSet222 = new SoLineSet();
SoLineSet222->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA223 = new SoColorRGBA();
SoColorRGBA223->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet222->addChild(*SoColorRGBA223);

SoCoordinate* SoCoordinate224 = new SoCoordinate();
SoCoordinate224->setPoint(new float[]{0.0,0.0,0.0,0.0,-17.37,0.0}, 6);
SoLineSet222->setCoord(*SoCoordinate224);

SoShape221->setGeometry(*SoLineSet222);

SoTransform218->addChild(*SoShape221);

SoHAnimSegment217->addChild(*SoTransform218);

SoHAnimJoint216->addChildren(*SoHAnimSegment217);

SoHAnimJoint* SoHAnimJoint225 = new SoHAnimJoint();
SoHAnimJoint225->setDEF(QString("BvhUniversityWisconsionExample1_LeftFoot"));
SoHAnimJoint225->X3DNode::setName(QString("LeftFoot"));
SoHAnimJoint225->setRotation(new float[]{1.00000000000036,0.0,0.0,0.0199134632110525});
SoHAnimJoint225->setCenter(new float[]{3.91,-35.71,0.0});
SoHAnimSegment* SoHAnimSegment226 = new SoHAnimSegment();
SoHAnimSegment226->setDEF(QString("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot"));
SoHAnimSegment226->X3DNode::setName(QString("LeftLowLeg_to_LeftFoot"));
SoTransform* SoTransform227 = new SoTransform();
SoTransform227->setTranslation(new float[]{3.91,-35.71,0.0});
SoHAnimSite* SoHAnimSite228 = new SoHAnimSite();
SoHAnimSite228->setDEF(QString("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip"));
SoHAnimSite228->X3DNode::setName(QString("LeftLowLeg_to_LeftFoot_tip"));
SoHAnimSite228->setTranslation(new float[]{0.0,-3.46,0.0});
SoTouchSensor* SoTouchSensor229 = new SoTouchSensor();
SoTouchSensor229->setDescription(QString("HAnimSite LeftLowLeg_to_LeftFoot_tip"));
SoHAnimSite228->addChild(*SoTouchSensor229);

SoShape* SoShape230 = new SoShape();
SoShape230->setUSE(QString("HAnimSiteShape"));
SoHAnimSite228->addChild(*SoShape230);

SoShape* SoShape231 = new SoShape();
SoLineSet* SoLineSet232 = new SoLineSet();
SoLineSet232->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA233 = new SoColorRGBA();
SoColorRGBA233->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet232->addChild(*SoColorRGBA233);

SoCoordinate* SoCoordinate234 = new SoCoordinate();
SoCoordinate234->setPoint(new float[]{0.0,3.46,0.0,0.0,0.0,0.0}, 6);
SoLineSet232->setCoord(*SoCoordinate234);

SoShape231->setGeometry(*SoLineSet232);

SoHAnimSite228->addChild(*SoShape231);

SoTransform227->addChild(*SoHAnimSite228);

SoTouchSensor* SoTouchSensor235 = new SoTouchSensor();
SoTouchSensor235->setDescription(QString("HAnimJoint LeftFoot LeftFoot, HAnimSegment LeftLowLeg_to_LeftFoot"));
SoTransform227->addChild(*SoTouchSensor235);

SoShape* SoShape236 = new SoShape();
SoShape236->setUSE(QString("HAnimJointShape"));
SoTransform227->addChild(*SoShape236);

SoHAnimSegment226->addChild(*SoTransform227);

SoHAnimJoint225->addChildren(*SoHAnimSegment226);

SoHAnimJoint216->addChildren(*SoHAnimJoint225);

SoHAnimJoint207->addChildren(*SoHAnimJoint216);

SoHAnimJoint53->addChildren(*SoHAnimJoint207);

SoHAnimJoint* SoHAnimJoint237 = new SoHAnimJoint();
SoHAnimJoint237->setDEF(QString("BvhUniversityWisconsionExample1_RightUpLeg"));
SoHAnimJoint237->X3DNode::setName(QString("RightUpLeg"));
SoHAnimJoint237->setRotation(new float[]{-0.529026768997627,-0.0781104813974245,-0.845002621522441,0.345959390966261});
SoHAnimJoint237->setCenter(new float[]{-3.91,0.0,0.0});
SoHAnimSegment* SoHAnimSegment238 = new SoHAnimSegment();
SoHAnimSegment238->setDEF(QString("BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg"));
SoHAnimSegment238->X3DNode::setName(QString("humanoid_root_to_RightUpLeg"));
SoTransform* SoTransform239 = new SoTransform();
SoTransform239->setTranslation(new float[]{-3.91,0.0,0.0});
SoTouchSensor* SoTouchSensor240 = new SoTouchSensor();
SoTouchSensor240->setDescription(QString("HAnimJoint RightUpLeg RightUpLeg, HAnimSegment humanoid_root_to_RightUpLeg"));
SoTransform239->addChild(*SoTouchSensor240);

SoShape* SoShape241 = new SoShape();
SoShape241->setUSE(QString("HAnimJointShape"));
SoTransform239->addChild(*SoShape241);

SoShape* SoShape242 = new SoShape();
SoLineSet* SoLineSet243 = new SoLineSet();
SoLineSet243->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA244 = new SoColorRGBA();
SoColorRGBA244->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet243->addChild(*SoColorRGBA244);

SoCoordinate* SoCoordinate245 = new SoCoordinate();
SoCoordinate245->setPoint(new float[]{0.0,0.0,0.0,0.0,-17.63,0.0}, 6);
SoLineSet243->setCoord(*SoCoordinate245);

SoShape242->setGeometry(*SoLineSet243);

SoTransform239->addChild(*SoShape242);

SoHAnimSegment238->addChild(*SoTransform239);

SoHAnimJoint237->addChildren(*SoHAnimSegment238);

SoHAnimJoint* SoHAnimJoint246 = new SoHAnimJoint();
SoHAnimJoint246->setDEF(QString("BvhUniversityWisconsionExample1_RightLowLeg"));
SoHAnimJoint246->X3DNode::setName(QString("RightLowLeg"));
SoHAnimJoint246->setRotation(new float[]{0.978057447453843,-0.194999101930461,0.073341527979632,0.971415273794883});
SoHAnimJoint246->setCenter(new float[]{-3.91,-17.63,0.0});
SoHAnimSegment* SoHAnimSegment247 = new SoHAnimSegment();
SoHAnimSegment247->setDEF(QString("BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg"));
SoHAnimSegment247->X3DNode::setName(QString("RightUpLeg_to_RightLowLeg"));
SoTransform* SoTransform248 = new SoTransform();
SoTransform248->setTranslation(new float[]{-3.91,-17.63,0.0});
SoTouchSensor* SoTouchSensor249 = new SoTouchSensor();
SoTouchSensor249->setDescription(QString("HAnimJoint RightLowLeg RightLowLeg, HAnimSegment RightUpLeg_to_RightLowLeg"));
SoTransform248->addChild(*SoTouchSensor249);

SoShape* SoShape250 = new SoShape();
SoShape250->setUSE(QString("HAnimJointShape"));
SoTransform248->addChild(*SoShape250);

SoShape* SoShape251 = new SoShape();
SoLineSet* SoLineSet252 = new SoLineSet();
SoLineSet252->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA253 = new SoColorRGBA();
SoColorRGBA253->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet252->addChild(*SoColorRGBA253);

SoCoordinate* SoCoordinate254 = new SoCoordinate();
SoCoordinate254->setPoint(new float[]{0.0,0.0,0.0,0.0,-17.14,0.0}, 6);
SoLineSet252->setCoord(*SoCoordinate254);

SoShape251->setGeometry(*SoLineSet252);

SoTransform248->addChild(*SoShape251);

SoHAnimSegment247->addChild(*SoTransform248);

SoHAnimJoint246->addChildren(*SoHAnimSegment247);

SoHAnimJoint* SoHAnimJoint255 = new SoHAnimJoint();
SoHAnimJoint255->setDEF(QString("BvhUniversityWisconsionExample1_RightFoot"));
SoHAnimJoint255->X3DNode::setName(QString("RightFoot"));
SoHAnimJoint255->setRotation(new float[]{-1.0,0.0,0.0,0.446403006744384});
SoHAnimJoint255->setCenter(new float[]{-3.91,-34.77,0.0});
SoHAnimSegment* SoHAnimSegment256 = new SoHAnimSegment();
SoHAnimSegment256->setDEF(QString("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot"));
SoHAnimSegment256->X3DNode::setName(QString("RightLowLeg_to_RightFoot"));
SoTransform* SoTransform257 = new SoTransform();
SoTransform257->setTranslation(new float[]{-3.91,-34.77,0.0});
SoHAnimSite* SoHAnimSite258 = new SoHAnimSite();
SoHAnimSite258->setDEF(QString("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip"));
SoHAnimSite258->X3DNode::setName(QString("RightLowLeg_to_RightFoot_tip"));
SoHAnimSite258->setTranslation(new float[]{0.0,-3.75,0.0});
SoTouchSensor* SoTouchSensor259 = new SoTouchSensor();
SoTouchSensor259->setDescription(QString("HAnimSite RightLowLeg_to_RightFoot_tip"));
SoHAnimSite258->addChild(*SoTouchSensor259);

SoShape* SoShape260 = new SoShape();
SoShape260->setUSE(QString("HAnimSiteShape"));
SoHAnimSite258->addChild(*SoShape260);

SoShape* SoShape261 = new SoShape();
SoLineSet* SoLineSet262 = new SoLineSet();
SoLineSet262->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA263 = new SoColorRGBA();
SoColorRGBA263->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet262->addChild(*SoColorRGBA263);

SoCoordinate* SoCoordinate264 = new SoCoordinate();
SoCoordinate264->setPoint(new float[]{0.0,3.75,0.0,0.0,0.0,0.0}, 6);
SoLineSet262->setCoord(*SoCoordinate264);

SoShape261->setGeometry(*SoLineSet262);

SoHAnimSite258->addChild(*SoShape261);

SoTransform257->addChild(*SoHAnimSite258);

SoTouchSensor* SoTouchSensor265 = new SoTouchSensor();
SoTouchSensor265->setDescription(QString("HAnimJoint RightFoot RightFoot, HAnimSegment RightLowLeg_to_RightFoot"));
SoTransform257->addChild(*SoTouchSensor265);

SoShape* SoShape266 = new SoShape();
SoShape266->setUSE(QString("HAnimJointShape"));
SoTransform257->addChild(*SoShape266);

SoHAnimSegment256->addChild(*SoTransform257);

SoHAnimJoint255->addChildren(*SoHAnimSegment256);

SoHAnimJoint246->addChildren(*SoHAnimJoint255);

SoHAnimJoint237->addChildren(*SoHAnimJoint246);

SoHAnimJoint53->addChildren(*SoHAnimJoint237);

SoHAnimHumanoid46->setSkeleton(*SoHAnimJoint53);

SoHAnimJoint* SoHAnimJoint267 = new SoHAnimJoint();
SoHAnimJoint267->setUSE(QString("BvhUniversityWisconsionExample1_humanoid_root"));
SoHAnimHumanoid46->setJoints(*SoHAnimJoint267);

SoHAnimJoint* SoHAnimJoint268 = new SoHAnimJoint();
SoHAnimJoint268->setUSE(QString("BvhUniversityWisconsionExample1_vl5"));
SoHAnimHumanoid46->setJoints(*SoHAnimJoint268);

SoHAnimJoint* SoHAnimJoint269 = new SoHAnimJoint();
SoHAnimJoint269->setUSE(QString("BvhUniversityWisconsionExample1_Neck"));
SoHAnimHumanoid46->setJoints(*SoHAnimJoint269);

SoHAnimJoint* SoHAnimJoint270 = new SoHAnimJoint();
SoHAnimJoint270->setUSE(QString("BvhUniversityWisconsionExample1_skullbase"));
SoHAnimHumanoid46->setJoints(*SoHAnimJoint270);

SoHAnimJoint* SoHAnimJoint271 = new SoHAnimJoint();
SoHAnimJoint271->setUSE(QString("BvhUniversityWisconsionExample1_LeftCollar"));
SoHAnimHumanoid46->setJoints(*SoHAnimJoint271);

SoHAnimJoint* SoHAnimJoint272 = new SoHAnimJoint();
SoHAnimJoint272->setUSE(QString("BvhUniversityWisconsionExample1_LeftUpArm"));
SoHAnimHumanoid46->setJoints(*SoHAnimJoint272);

SoHAnimJoint* SoHAnimJoint273 = new SoHAnimJoint();
SoHAnimJoint273->setUSE(QString("BvhUniversityWisconsionExample1_LeftLowArm"));
SoHAnimHumanoid46->setJoints(*SoHAnimJoint273);

SoHAnimJoint* SoHAnimJoint274 = new SoHAnimJoint();
SoHAnimJoint274->setUSE(QString("BvhUniversityWisconsionExample1_LeftHand"));
SoHAnimHumanoid46->setJoints(*SoHAnimJoint274);

SoHAnimJoint* SoHAnimJoint275 = new SoHAnimJoint();
SoHAnimJoint275->setUSE(QString("BvhUniversityWisconsionExample1_RightCollar"));
SoHAnimHumanoid46->setJoints(*SoHAnimJoint275);

SoHAnimJoint* SoHAnimJoint276 = new SoHAnimJoint();
SoHAnimJoint276->setUSE(QString("BvhUniversityWisconsionExample1_RightUpArm"));
SoHAnimHumanoid46->setJoints(*SoHAnimJoint276);

SoHAnimJoint* SoHAnimJoint277 = new SoHAnimJoint();
SoHAnimJoint277->setUSE(QString("BvhUniversityWisconsionExample1_RightLowArm"));
SoHAnimHumanoid46->setJoints(*SoHAnimJoint277);

SoHAnimJoint* SoHAnimJoint278 = new SoHAnimJoint();
SoHAnimJoint278->setUSE(QString("BvhUniversityWisconsionExample1_RightHand"));
SoHAnimHumanoid46->setJoints(*SoHAnimJoint278);

SoHAnimJoint* SoHAnimJoint279 = new SoHAnimJoint();
SoHAnimJoint279->setUSE(QString("BvhUniversityWisconsionExample1_LeftUpLeg"));
SoHAnimHumanoid46->setJoints(*SoHAnimJoint279);

SoHAnimJoint* SoHAnimJoint280 = new SoHAnimJoint();
SoHAnimJoint280->setUSE(QString("BvhUniversityWisconsionExample1_LeftLowLeg"));
SoHAnimHumanoid46->setJoints(*SoHAnimJoint280);

SoHAnimJoint* SoHAnimJoint281 = new SoHAnimJoint();
SoHAnimJoint281->setUSE(QString("BvhUniversityWisconsionExample1_LeftFoot"));
SoHAnimHumanoid46->setJoints(*SoHAnimJoint281);

SoHAnimJoint* SoHAnimJoint282 = new SoHAnimJoint();
SoHAnimJoint282->setUSE(QString("BvhUniversityWisconsionExample1_RightUpLeg"));
SoHAnimHumanoid46->setJoints(*SoHAnimJoint282);

SoHAnimJoint* SoHAnimJoint283 = new SoHAnimJoint();
SoHAnimJoint283->setUSE(QString("BvhUniversityWisconsionExample1_RightLowLeg"));
SoHAnimHumanoid46->setJoints(*SoHAnimJoint283);

SoHAnimJoint* SoHAnimJoint284 = new SoHAnimJoint();
SoHAnimJoint284->setUSE(QString("BvhUniversityWisconsionExample1_RightFoot"));
SoHAnimHumanoid46->setJoints(*SoHAnimJoint284);

SoHAnimSegment* SoHAnimSegment285 = new SoHAnimSegment();
SoHAnimSegment285->setUSE(QString("BvhUniversityWisconsionExample1_sacrum"));
SoHAnimHumanoid46->setSegments(*SoHAnimSegment285);

SoHAnimSegment* SoHAnimSegment286 = new SoHAnimSegment();
SoHAnimSegment286->setUSE(QString("BvhUniversityWisconsionExample1_l5"));
SoHAnimHumanoid46->setSegments(*SoHAnimSegment286);

SoHAnimSegment* SoHAnimSegment287 = new SoHAnimSegment();
SoHAnimSegment287->setUSE(QString("BvhUniversityWisconsionExample1_vl5_to_Neck"));
SoHAnimHumanoid46->setSegments(*SoHAnimSegment287);

SoHAnimSegment* SoHAnimSegment288 = new SoHAnimSegment();
SoHAnimSegment288->setUSE(QString("BvhUniversityWisconsionExample1_skull"));
SoHAnimHumanoid46->setSegments(*SoHAnimSegment288);

SoHAnimSegment* SoHAnimSegment289 = new SoHAnimSegment();
SoHAnimSegment289->setUSE(QString("BvhUniversityWisconsionExample1_vl5_to_LeftCollar"));
SoHAnimHumanoid46->setSegments(*SoHAnimSegment289);

SoHAnimSegment* SoHAnimSegment290 = new SoHAnimSegment();
SoHAnimSegment290->setUSE(QString("BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm"));
SoHAnimHumanoid46->setSegments(*SoHAnimSegment290);

SoHAnimSegment* SoHAnimSegment291 = new SoHAnimSegment();
SoHAnimSegment291->setUSE(QString("BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm"));
SoHAnimHumanoid46->setSegments(*SoHAnimSegment291);

SoHAnimSegment* SoHAnimSegment292 = new SoHAnimSegment();
SoHAnimSegment292->setUSE(QString("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand"));
SoHAnimHumanoid46->setSegments(*SoHAnimSegment292);

SoHAnimSegment* SoHAnimSegment293 = new SoHAnimSegment();
SoHAnimSegment293->setUSE(QString("BvhUniversityWisconsionExample1_vl5_to_RightCollar"));
SoHAnimHumanoid46->setSegments(*SoHAnimSegment293);

SoHAnimSegment* SoHAnimSegment294 = new SoHAnimSegment();
SoHAnimSegment294->setUSE(QString("BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm"));
SoHAnimHumanoid46->setSegments(*SoHAnimSegment294);

SoHAnimSegment* SoHAnimSegment295 = new SoHAnimSegment();
SoHAnimSegment295->setUSE(QString("BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm"));
SoHAnimHumanoid46->setSegments(*SoHAnimSegment295);

SoHAnimSegment* SoHAnimSegment296 = new SoHAnimSegment();
SoHAnimSegment296->setUSE(QString("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand"));
SoHAnimHumanoid46->setSegments(*SoHAnimSegment296);

SoHAnimSegment* SoHAnimSegment297 = new SoHAnimSegment();
SoHAnimSegment297->setUSE(QString("BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg"));
SoHAnimHumanoid46->setSegments(*SoHAnimSegment297);

SoHAnimSegment* SoHAnimSegment298 = new SoHAnimSegment();
SoHAnimSegment298->setUSE(QString("BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg"));
SoHAnimHumanoid46->setSegments(*SoHAnimSegment298);

SoHAnimSegment* SoHAnimSegment299 = new SoHAnimSegment();
SoHAnimSegment299->setUSE(QString("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot"));
SoHAnimHumanoid46->setSegments(*SoHAnimSegment299);

SoHAnimSegment* SoHAnimSegment300 = new SoHAnimSegment();
SoHAnimSegment300->setUSE(QString("BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg"));
SoHAnimHumanoid46->setSegments(*SoHAnimSegment300);

SoHAnimSegment* SoHAnimSegment301 = new SoHAnimSegment();
SoHAnimSegment301->setUSE(QString("BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg"));
SoHAnimHumanoid46->setSegments(*SoHAnimSegment301);

SoHAnimSegment* SoHAnimSegment302 = new SoHAnimSegment();
SoHAnimSegment302->setUSE(QString("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot"));
SoHAnimHumanoid46->setSegments(*SoHAnimSegment302);

SoHAnimSite* SoHAnimSite303 = new SoHAnimSite();
SoHAnimSite303->setDEF(QString("BvhUniversityWisconsionExample1_humanoid_root_view"));
SoHAnimSite303->X3DNode::setName(QString("humanoid_root_view"));
SoViewpoint* SoViewpoint304 = new SoViewpoint();
SoViewpoint304->setDEF(QString("BvhUniversityWisconsionExample1_humanoid_root_viewpoint"));
SoViewpoint304->setDescription(QString("BvhUniversityWisconsionExample1 front view towards HAnimHumanoid center"));
SoViewpoint304->setPosition(new float[]{0.0,0.0,80.0});
SoHAnimSite303->addChild(*SoViewpoint304);

SoHAnimHumanoid46->addViewpoints(*SoHAnimSite303);

SoHAnimSite* SoHAnimSite305 = new SoHAnimSite();
SoHAnimSite305->setUSE(QString("BvhUniversityWisconsionExample1_skull_tip"));
SoHAnimHumanoid46->setSites(*SoHAnimSite305);

SoHAnimSite* SoHAnimSite306 = new SoHAnimSite();
SoHAnimSite306->setUSE(QString("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip"));
SoHAnimHumanoid46->setSites(*SoHAnimSite306);

SoHAnimSite* SoHAnimSite307 = new SoHAnimSite();
SoHAnimSite307->setUSE(QString("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip"));
SoHAnimHumanoid46->setSites(*SoHAnimSite307);

SoHAnimSite* SoHAnimSite308 = new SoHAnimSite();
SoHAnimSite308->setUSE(QString("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip"));
SoHAnimHumanoid46->setSites(*SoHAnimSite308);

SoHAnimSite* SoHAnimSite309 = new SoHAnimSite();
SoHAnimSite309->setUSE(QString("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip"));
SoHAnimHumanoid46->setSites(*SoHAnimSite309);

SoHAnimSite* SoHAnimSite310 = new SoHAnimSite();
SoHAnimSite310->setUSE(QString("BvhUniversityWisconsionExample1_humanoid_root_view"));
SoHAnimHumanoid46->setSites(*SoHAnimSite310);

SoNode14->addChild(*SoHAnimHumanoid46);

SoGroup* SoGroup311 = new SoGroup();
SoGroup311->setDEF(QString("BvhUniversityWisconsionExample1_MotionGroup"));
SoTimeSensor* SoTimeSensor312 = new SoTimeSensor();
SoTimeSensor312->setDEF(QString("RealTimer"));
SoTimeSensor312->setCycleInterval(0.067);
SoTimeSensor312->setLoop(true);
SoGroup311->addChild(*SoTimeSensor312);

SoTimeSensor* SoTimeSensor313 = new SoTimeSensor();
SoTimeSensor313->setDEF(QString("StepTimer"));
SoTimeSensor313->setEnabled(false);
SoTimeSensor313->setCycleInterval(2);
SoTimeSensor313->setLoop(true);
SoGroup311->addChild(*SoTimeSensor313);

SoScalarInterpolator* SoScalarInterpolator314 = new SoScalarInterpolator();
SoScalarInterpolator314->setDEF(QString("FrameStepper"));
SoScalarInterpolator314->setKey(new float[]{0.0,1.0,1.0}, 3);
SoScalarInterpolator314->setKeyValue(new float[]{0.0,0.0,1.0}, 3);
SoGroup311->addChild(*SoScalarInterpolator314);

SoPositionInterpolator* SoPositionInterpolator315 = new SoPositionInterpolator();
SoPositionInterpolator315->setDEF(QString("Interpolator0_humanoid_root"));
SoPositionInterpolator315->setKey(new float[]{0.0,1.0}, 2);
SoPositionInterpolator315->setKeyValue(new float[]{0.803,3.501,8.836,0.781,3.51,8.647}, 6);
SoGroup311->addChild(*SoPositionInterpolator315);

SoOrientationInterpolator* SoOrientationInterpolator316 = new SoOrientationInterpolator();
SoOrientationInterpolator316->setDEF(QString("Interpolator1_humanoid_root"));
SoOrientationInterpolator316->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator316->setKeyValue(new float[]{-0.0118,-0.9911,-0.1325,2.8785,-0.0199,-0.993,-0.1163,2.9232}, 8);
SoGroup311->addChild(*SoOrientationInterpolator316);

SoOrientationInterpolator* SoOrientationInterpolator317 = new SoOrientationInterpolator();
SoOrientationInterpolator317->setDEF(QString("Interpolator2_vl5"));
SoOrientationInterpolator317->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator317->setKeyValue(new float[]{0.9093,-0.4082,0.0806,0.8073,0.9336,-0.3501,0.0768,0.824}, 8);
SoGroup311->addChild(*SoOrientationInterpolator317);

SoOrientationInterpolator* SoOrientationInterpolator318 = new SoOrientationInterpolator();
SoOrientationInterpolator318->setDEF(QString("Interpolator3_Neck"));
SoOrientationInterpolator318->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator318->setKeyValue(new float[]{0.9834,0.0677,0.1685,0.7761,0.9841,0.066,0.1649,0.7723}, 8);
SoGroup311->addChild(*SoOrientationInterpolator318);

SoOrientationInterpolator* SoOrientationInterpolator319 = new SoOrientationInterpolator();
SoOrientationInterpolator319->setDEF(QString("Interpolator4_skullbase"));
SoOrientationInterpolator319->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator319->setKeyValue(new float[]{-0.9778,0.1629,-0.1317,0.736,-0.9794,0.1474,-0.1381,0.7342}, 8);
SoGroup311->addChild(*SoOrientationInterpolator319);

SoOrientationInterpolator* SoOrientationInterpolator320 = new SoOrientationInterpolator();
SoOrientationInterpolator320->setDEF(QString("Interpolator5_LeftCollar"));
SoOrientationInterpolator320->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator320->setKeyValue(new float[]{-0.0626,0.7102,0.7012,0.2502,-0.0355,0.2109,0.9769,0.3411}, 8);
SoGroup311->addChild(*SoOrientationInterpolator320);

SoOrientationInterpolator* SoOrientationInterpolator321 = new SoOrientationInterpolator();
SoOrientationInterpolator321->setDEF(QString("Interpolator6_LeftUpArm"));
SoOrientationInterpolator321->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator321->setKeyValue(new float[]{-0.1561,-0.2157,0.9639,1.7536,0.0022,-0.1597,0.9872,1.6521}, 8);
SoGroup311->addChild(*SoOrientationInterpolator321);

SoOrientationInterpolator* SoOrientationInterpolator322 = new SoOrientationInterpolator();
SoOrientationInterpolator322->setDEF(QString("Interpolator7_LeftLowArm"));
SoOrientationInterpolator322->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator322->setKeyValue(new float[]{-0.9933,-0.0526,-0.103,1.6066,-0.9965,0.0822,0.0138,1.6744}, 8);
SoGroup311->addChild(*SoOrientationInterpolator322);

SoOrientationInterpolator* SoOrientationInterpolator323 = new SoOrientationInterpolator();
SoOrientationInterpolator323->setDEF(QString("Interpolator8_LeftHand"));
SoOrientationInterpolator323->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator323->setKeyValue(new float[]{0.0434,0.0003,0.9991,0.0121,0.4673,0.0029,0.8841,0.0138}, 8);
SoGroup311->addChild(*SoOrientationInterpolator323);

SoOrientationInterpolator* SoOrientationInterpolator324 = new SoOrientationInterpolator();
SoOrientationInterpolator324->setDEF(QString("Interpolator9_RightCollar"));
SoOrientationInterpolator324->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator324->setKeyValue(new float[]{-0.0734,-0.5964,-0.7993,0.3057,-0.07,-0.9291,-0.3633,0.4091}, 8);
SoGroup311->addChild(*SoOrientationInterpolator324);

SoOrientationInterpolator* SoOrientationInterpolator325 = new SoOrientationInterpolator();
SoOrientationInterpolator325->setDEF(QString("Interpolator10_RightUpArm"));
SoOrientationInterpolator325->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator325->setKeyValue(new float[]{-0.6801,-0.6074,-0.4106,2.0536,-0.765,-0.5303,-0.3654,1.9107}, 8);
SoGroup311->addChild(*SoOrientationInterpolator325);

SoOrientationInterpolator* SoOrientationInterpolator326 = new SoOrientationInterpolator();
SoOrientationInterpolator326->setDEF(QString("Interpolator11_RightLowArm"));
SoOrientationInterpolator326->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator326->setKeyValue(new float[]{-0.9378,0.2739,0.2135,1.4058,-0.9433,0.2577,0.2091,1.3563}, 8);
SoGroup311->addChild(*SoOrientationInterpolator326);

SoOrientationInterpolator* SoOrientationInterpolator327 = new SoOrientationInterpolator();
SoOrientationInterpolator327->setDEF(QString("Interpolator12_RightHand"));
SoOrientationInterpolator327->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator327->setKeyValue(new float[]{0.4025,0.0061,-0.9154,0.0299,0.5037,0.0087,-0.8638,0.0329}, 8);
SoGroup311->addChild(*SoOrientationInterpolator327);

SoOrientationInterpolator* SoOrientationInterpolator328 = new SoOrientationInterpolator();
SoOrientationInterpolator328->setDEF(QString("Interpolator13_LeftUpLeg"));
SoOrientationInterpolator328->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator328->setKeyValue(new float[]{0.8595,-0.1039,0.5004,0.4748,0.7784,-0.0864,0.6217,0.3536}, 8);
SoGroup311->addChild(*SoOrientationInterpolator328);

SoOrientationInterpolator* SoOrientationInterpolator329 = new SoOrientationInterpolator();
SoOrientationInterpolator329->setDEF(QString("Interpolator14_LeftLowLeg"));
SoOrientationInterpolator329->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator329->setKeyValue(new float[]{0.9184,0.2378,0.3162,0.9291,0.9762,0.1432,0.1627,1.0525}, 8);
SoGroup311->addChild(*SoOrientationInterpolator329);

SoOrientationInterpolator* SoOrientationInterpolator330 = new SoOrientationInterpolator();
SoOrientationInterpolator330->setDEF(QString("Interpolator15_LeftFoot"));
SoOrientationInterpolator330->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator330->setKeyValue(new float[]{-1.0,0.0,0.0,0.0199,1.0,0.0,0.0,0.0286}, 8);
SoGroup311->addChild(*SoOrientationInterpolator330);

SoOrientationInterpolator* SoOrientationInterpolator331 = new SoOrientationInterpolator();
SoOrientationInterpolator331->setDEF(QString("Interpolator16_RightUpLeg"));
SoOrientationInterpolator331->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator331->setKeyValue(new float[]{-0.5548,-0.0795,-0.8282,0.3423,-0.5234,-0.0778,-0.8485,0.3468}, 8);
SoGroup311->addChild(*SoOrientationInterpolator331);

SoOrientationInterpolator* SoOrientationInterpolator332 = new SoOrientationInterpolator();
SoOrientationInterpolator332->setDEF(QString("Interpolator17_RightLowLeg"));
SoOrientationInterpolator332->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator332->setKeyValue(new float[]{0.9694,-0.234,0.0739,0.9755,0.9797,-0.1864,0.0732,0.9707}, 8);
SoGroup311->addChild(*SoOrientationInterpolator332);

SoOrientationInterpolator* SoOrientationInterpolator333 = new SoOrientationInterpolator();
SoOrientationInterpolator333->setDEF(QString("Interpolator18_RightFoot"));
SoOrientationInterpolator333->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator333->setKeyValue(new float[]{-1.0,0.0,0.0,0.418,-1.0,0.0,0.0,0.4526}, 8);
SoGroup311->addChild(*SoOrientationInterpolator333);

SoNode14->addChild(*SoGroup311);

SoROUTE* SoROUTE334 = new SoROUTE();
SoROUTE334->setFromNode(QString("StepTimer"));
SoROUTE334->setFromField(QString("fraction_changed"));
SoROUTE334->setToNode(QString("FrameStepper"));
SoROUTE334->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE334);

SoROUTE* SoROUTE335 = new SoROUTE();
SoROUTE335->setFromNode(QString("RealTimer"));
SoROUTE335->setFromField(QString("fraction_changed"));
SoROUTE335->setToNode(QString("Interpolator0_humanoid_root"));
SoROUTE335->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE335);

SoROUTE* SoROUTE336 = new SoROUTE();
SoROUTE336->setFromNode(QString("FrameStepper"));
SoROUTE336->setFromField(QString("value_changed"));
SoROUTE336->setToNode(QString("Interpolator0_humanoid_root"));
SoROUTE336->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE336);

SoROUTE* SoROUTE337 = new SoROUTE();
SoROUTE337->setFromNode(QString("Interpolator0_humanoid_root"));
SoROUTE337->setFromField(QString("value_changed"));
SoROUTE337->setToNode(QString("BvhUniversityWisconsionExample1_humanoid_root"));
SoROUTE337->setToField(QString("set_translation"));
SoNode14->addChild(*SoROUTE337);

SoROUTE* SoROUTE338 = new SoROUTE();
SoROUTE338->setFromNode(QString("RealTimer"));
SoROUTE338->setFromField(QString("fraction_changed"));
SoROUTE338->setToNode(QString("Interpolator1_humanoid_root"));
SoROUTE338->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE338);

SoROUTE* SoROUTE339 = new SoROUTE();
SoROUTE339->setFromNode(QString("FrameStepper"));
SoROUTE339->setFromField(QString("value_changed"));
SoROUTE339->setToNode(QString("Interpolator1_humanoid_root"));
SoROUTE339->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE339);

SoROUTE* SoROUTE340 = new SoROUTE();
SoROUTE340->setFromNode(QString("Interpolator1_humanoid_root"));
SoROUTE340->setFromField(QString("value_changed"));
SoROUTE340->setToNode(QString("BvhUniversityWisconsionExample1_humanoid_root"));
SoROUTE340->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE340);

SoROUTE* SoROUTE341 = new SoROUTE();
SoROUTE341->setFromNode(QString("RealTimer"));
SoROUTE341->setFromField(QString("fraction_changed"));
SoROUTE341->setToNode(QString("Interpolator2_vl5"));
SoROUTE341->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE341);

SoROUTE* SoROUTE342 = new SoROUTE();
SoROUTE342->setFromNode(QString("FrameStepper"));
SoROUTE342->setFromField(QString("value_changed"));
SoROUTE342->setToNode(QString("Interpolator2_vl5"));
SoROUTE342->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE342);

SoROUTE* SoROUTE343 = new SoROUTE();
SoROUTE343->setFromNode(QString("Interpolator2_vl5"));
SoROUTE343->setFromField(QString("value_changed"));
SoROUTE343->setToNode(QString("BvhUniversityWisconsionExample1_vl5"));
SoROUTE343->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE343);

SoROUTE* SoROUTE344 = new SoROUTE();
SoROUTE344->setFromNode(QString("RealTimer"));
SoROUTE344->setFromField(QString("fraction_changed"));
SoROUTE344->setToNode(QString("Interpolator3_Neck"));
SoROUTE344->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE344);

SoROUTE* SoROUTE345 = new SoROUTE();
SoROUTE345->setFromNode(QString("FrameStepper"));
SoROUTE345->setFromField(QString("value_changed"));
SoROUTE345->setToNode(QString("Interpolator3_Neck"));
SoROUTE345->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE345);

SoROUTE* SoROUTE346 = new SoROUTE();
SoROUTE346->setFromNode(QString("Interpolator3_Neck"));
SoROUTE346->setFromField(QString("value_changed"));
SoROUTE346->setToNode(QString("BvhUniversityWisconsionExample1_Neck"));
SoROUTE346->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE346);

SoROUTE* SoROUTE347 = new SoROUTE();
SoROUTE347->setFromNode(QString("RealTimer"));
SoROUTE347->setFromField(QString("fraction_changed"));
SoROUTE347->setToNode(QString("Interpolator4_skullbase"));
SoROUTE347->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE347);

SoROUTE* SoROUTE348 = new SoROUTE();
SoROUTE348->setFromNode(QString("FrameStepper"));
SoROUTE348->setFromField(QString("value_changed"));
SoROUTE348->setToNode(QString("Interpolator4_skullbase"));
SoROUTE348->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE348);

SoROUTE* SoROUTE349 = new SoROUTE();
SoROUTE349->setFromNode(QString("Interpolator4_skullbase"));
SoROUTE349->setFromField(QString("value_changed"));
SoROUTE349->setToNode(QString("BvhUniversityWisconsionExample1_skullbase"));
SoROUTE349->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE349);

SoROUTE* SoROUTE350 = new SoROUTE();
SoROUTE350->setFromNode(QString("RealTimer"));
SoROUTE350->setFromField(QString("fraction_changed"));
SoROUTE350->setToNode(QString("Interpolator5_LeftCollar"));
SoROUTE350->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE350);

SoROUTE* SoROUTE351 = new SoROUTE();
SoROUTE351->setFromNode(QString("FrameStepper"));
SoROUTE351->setFromField(QString("value_changed"));
SoROUTE351->setToNode(QString("Interpolator5_LeftCollar"));
SoROUTE351->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE351);

SoROUTE* SoROUTE352 = new SoROUTE();
SoROUTE352->setFromNode(QString("Interpolator5_LeftCollar"));
SoROUTE352->setFromField(QString("value_changed"));
SoROUTE352->setToNode(QString("BvhUniversityWisconsionExample1_LeftCollar"));
SoROUTE352->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE352);

SoROUTE* SoROUTE353 = new SoROUTE();
SoROUTE353->setFromNode(QString("RealTimer"));
SoROUTE353->setFromField(QString("fraction_changed"));
SoROUTE353->setToNode(QString("Interpolator6_LeftUpArm"));
SoROUTE353->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE353);

SoROUTE* SoROUTE354 = new SoROUTE();
SoROUTE354->setFromNode(QString("FrameStepper"));
SoROUTE354->setFromField(QString("value_changed"));
SoROUTE354->setToNode(QString("Interpolator6_LeftUpArm"));
SoROUTE354->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE354);

SoROUTE* SoROUTE355 = new SoROUTE();
SoROUTE355->setFromNode(QString("Interpolator6_LeftUpArm"));
SoROUTE355->setFromField(QString("value_changed"));
SoROUTE355->setToNode(QString("BvhUniversityWisconsionExample1_LeftUpArm"));
SoROUTE355->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE355);

SoROUTE* SoROUTE356 = new SoROUTE();
SoROUTE356->setFromNode(QString("RealTimer"));
SoROUTE356->setFromField(QString("fraction_changed"));
SoROUTE356->setToNode(QString("Interpolator7_LeftLowArm"));
SoROUTE356->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE356);

SoROUTE* SoROUTE357 = new SoROUTE();
SoROUTE357->setFromNode(QString("FrameStepper"));
SoROUTE357->setFromField(QString("value_changed"));
SoROUTE357->setToNode(QString("Interpolator7_LeftLowArm"));
SoROUTE357->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE357);

SoROUTE* SoROUTE358 = new SoROUTE();
SoROUTE358->setFromNode(QString("Interpolator7_LeftLowArm"));
SoROUTE358->setFromField(QString("value_changed"));
SoROUTE358->setToNode(QString("BvhUniversityWisconsionExample1_LeftLowArm"));
SoROUTE358->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE358);

SoROUTE* SoROUTE359 = new SoROUTE();
SoROUTE359->setFromNode(QString("RealTimer"));
SoROUTE359->setFromField(QString("fraction_changed"));
SoROUTE359->setToNode(QString("Interpolator8_LeftHand"));
SoROUTE359->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE359);

SoROUTE* SoROUTE360 = new SoROUTE();
SoROUTE360->setFromNode(QString("FrameStepper"));
SoROUTE360->setFromField(QString("value_changed"));
SoROUTE360->setToNode(QString("Interpolator8_LeftHand"));
SoROUTE360->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE360);

SoROUTE* SoROUTE361 = new SoROUTE();
SoROUTE361->setFromNode(QString("Interpolator8_LeftHand"));
SoROUTE361->setFromField(QString("value_changed"));
SoROUTE361->setToNode(QString("BvhUniversityWisconsionExample1_LeftHand"));
SoROUTE361->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE361);

SoROUTE* SoROUTE362 = new SoROUTE();
SoROUTE362->setFromNode(QString("RealTimer"));
SoROUTE362->setFromField(QString("fraction_changed"));
SoROUTE362->setToNode(QString("Interpolator9_RightCollar"));
SoROUTE362->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE362);

SoROUTE* SoROUTE363 = new SoROUTE();
SoROUTE363->setFromNode(QString("FrameStepper"));
SoROUTE363->setFromField(QString("value_changed"));
SoROUTE363->setToNode(QString("Interpolator9_RightCollar"));
SoROUTE363->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE363);

SoROUTE* SoROUTE364 = new SoROUTE();
SoROUTE364->setFromNode(QString("Interpolator9_RightCollar"));
SoROUTE364->setFromField(QString("value_changed"));
SoROUTE364->setToNode(QString("BvhUniversityWisconsionExample1_RightCollar"));
SoROUTE364->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE364);

SoROUTE* SoROUTE365 = new SoROUTE();
SoROUTE365->setFromNode(QString("RealTimer"));
SoROUTE365->setFromField(QString("fraction_changed"));
SoROUTE365->setToNode(QString("Interpolator10_RightUpArm"));
SoROUTE365->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE365);

SoROUTE* SoROUTE366 = new SoROUTE();
SoROUTE366->setFromNode(QString("FrameStepper"));
SoROUTE366->setFromField(QString("value_changed"));
SoROUTE366->setToNode(QString("Interpolator10_RightUpArm"));
SoROUTE366->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE366);

SoROUTE* SoROUTE367 = new SoROUTE();
SoROUTE367->setFromNode(QString("Interpolator10_RightUpArm"));
SoROUTE367->setFromField(QString("value_changed"));
SoROUTE367->setToNode(QString("BvhUniversityWisconsionExample1_RightUpArm"));
SoROUTE367->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE367);

SoROUTE* SoROUTE368 = new SoROUTE();
SoROUTE368->setFromNode(QString("RealTimer"));
SoROUTE368->setFromField(QString("fraction_changed"));
SoROUTE368->setToNode(QString("Interpolator11_RightLowArm"));
SoROUTE368->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE368);

SoROUTE* SoROUTE369 = new SoROUTE();
SoROUTE369->setFromNode(QString("FrameStepper"));
SoROUTE369->setFromField(QString("value_changed"));
SoROUTE369->setToNode(QString("Interpolator11_RightLowArm"));
SoROUTE369->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE369);

SoROUTE* SoROUTE370 = new SoROUTE();
SoROUTE370->setFromNode(QString("Interpolator11_RightLowArm"));
SoROUTE370->setFromField(QString("value_changed"));
SoROUTE370->setToNode(QString("BvhUniversityWisconsionExample1_RightLowArm"));
SoROUTE370->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE370);

SoROUTE* SoROUTE371 = new SoROUTE();
SoROUTE371->setFromNode(QString("RealTimer"));
SoROUTE371->setFromField(QString("fraction_changed"));
SoROUTE371->setToNode(QString("Interpolator12_RightHand"));
SoROUTE371->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE371);

SoROUTE* SoROUTE372 = new SoROUTE();
SoROUTE372->setFromNode(QString("FrameStepper"));
SoROUTE372->setFromField(QString("value_changed"));
SoROUTE372->setToNode(QString("Interpolator12_RightHand"));
SoROUTE372->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE372);

SoROUTE* SoROUTE373 = new SoROUTE();
SoROUTE373->setFromNode(QString("Interpolator12_RightHand"));
SoROUTE373->setFromField(QString("value_changed"));
SoROUTE373->setToNode(QString("BvhUniversityWisconsionExample1_RightHand"));
SoROUTE373->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE373);

SoROUTE* SoROUTE374 = new SoROUTE();
SoROUTE374->setFromNode(QString("RealTimer"));
SoROUTE374->setFromField(QString("fraction_changed"));
SoROUTE374->setToNode(QString("Interpolator13_LeftUpLeg"));
SoROUTE374->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE374);

SoROUTE* SoROUTE375 = new SoROUTE();
SoROUTE375->setFromNode(QString("FrameStepper"));
SoROUTE375->setFromField(QString("value_changed"));
SoROUTE375->setToNode(QString("Interpolator13_LeftUpLeg"));
SoROUTE375->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE375);

SoROUTE* SoROUTE376 = new SoROUTE();
SoROUTE376->setFromNode(QString("Interpolator13_LeftUpLeg"));
SoROUTE376->setFromField(QString("value_changed"));
SoROUTE376->setToNode(QString("BvhUniversityWisconsionExample1_LeftUpLeg"));
SoROUTE376->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE376);

SoROUTE* SoROUTE377 = new SoROUTE();
SoROUTE377->setFromNode(QString("RealTimer"));
SoROUTE377->setFromField(QString("fraction_changed"));
SoROUTE377->setToNode(QString("Interpolator14_LeftLowLeg"));
SoROUTE377->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE377);

SoROUTE* SoROUTE378 = new SoROUTE();
SoROUTE378->setFromNode(QString("FrameStepper"));
SoROUTE378->setFromField(QString("value_changed"));
SoROUTE378->setToNode(QString("Interpolator14_LeftLowLeg"));
SoROUTE378->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE378);

SoROUTE* SoROUTE379 = new SoROUTE();
SoROUTE379->setFromNode(QString("Interpolator14_LeftLowLeg"));
SoROUTE379->setFromField(QString("value_changed"));
SoROUTE379->setToNode(QString("BvhUniversityWisconsionExample1_LeftLowLeg"));
SoROUTE379->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE379);

SoROUTE* SoROUTE380 = new SoROUTE();
SoROUTE380->setFromNode(QString("RealTimer"));
SoROUTE380->setFromField(QString("fraction_changed"));
SoROUTE380->setToNode(QString("Interpolator15_LeftFoot"));
SoROUTE380->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE380);

SoROUTE* SoROUTE381 = new SoROUTE();
SoROUTE381->setFromNode(QString("FrameStepper"));
SoROUTE381->setFromField(QString("value_changed"));
SoROUTE381->setToNode(QString("Interpolator15_LeftFoot"));
SoROUTE381->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE381);

SoROUTE* SoROUTE382 = new SoROUTE();
SoROUTE382->setFromNode(QString("Interpolator15_LeftFoot"));
SoROUTE382->setFromField(QString("value_changed"));
SoROUTE382->setToNode(QString("BvhUniversityWisconsionExample1_LeftFoot"));
SoROUTE382->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE382);

SoROUTE* SoROUTE383 = new SoROUTE();
SoROUTE383->setFromNode(QString("RealTimer"));
SoROUTE383->setFromField(QString("fraction_changed"));
SoROUTE383->setToNode(QString("Interpolator16_RightUpLeg"));
SoROUTE383->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE383);

SoROUTE* SoROUTE384 = new SoROUTE();
SoROUTE384->setFromNode(QString("FrameStepper"));
SoROUTE384->setFromField(QString("value_changed"));
SoROUTE384->setToNode(QString("Interpolator16_RightUpLeg"));
SoROUTE384->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE384);

SoROUTE* SoROUTE385 = new SoROUTE();
SoROUTE385->setFromNode(QString("Interpolator16_RightUpLeg"));
SoROUTE385->setFromField(QString("value_changed"));
SoROUTE385->setToNode(QString("BvhUniversityWisconsionExample1_RightUpLeg"));
SoROUTE385->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE385);

SoROUTE* SoROUTE386 = new SoROUTE();
SoROUTE386->setFromNode(QString("RealTimer"));
SoROUTE386->setFromField(QString("fraction_changed"));
SoROUTE386->setToNode(QString("Interpolator17_RightLowLeg"));
SoROUTE386->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE386);

SoROUTE* SoROUTE387 = new SoROUTE();
SoROUTE387->setFromNode(QString("FrameStepper"));
SoROUTE387->setFromField(QString("value_changed"));
SoROUTE387->setToNode(QString("Interpolator17_RightLowLeg"));
SoROUTE387->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE387);

SoROUTE* SoROUTE388 = new SoROUTE();
SoROUTE388->setFromNode(QString("Interpolator17_RightLowLeg"));
SoROUTE388->setFromField(QString("value_changed"));
SoROUTE388->setToNode(QString("BvhUniversityWisconsionExample1_RightLowLeg"));
SoROUTE388->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE388);

SoROUTE* SoROUTE389 = new SoROUTE();
SoROUTE389->setFromNode(QString("RealTimer"));
SoROUTE389->setFromField(QString("fraction_changed"));
SoROUTE389->setToNode(QString("Interpolator18_RightFoot"));
SoROUTE389->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE389);

SoROUTE* SoROUTE390 = new SoROUTE();
SoROUTE390->setFromNode(QString("FrameStepper"));
SoROUTE390->setFromField(QString("value_changed"));
SoROUTE390->setToNode(QString("Interpolator18_RightFoot"));
SoROUTE390->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE390);

SoROUTE* SoROUTE391 = new SoROUTE();
SoROUTE391->setFromNode(QString("Interpolator18_RightFoot"));
SoROUTE391->setFromField(QString("value_changed"));
SoROUTE391->setToNode(QString("BvhUniversityWisconsionExample1_RightFoot"));
SoROUTE391->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE391);

SoSceneManager0->setSceneGraph(*SoNode14);

return 0;
}
